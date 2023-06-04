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

#ifndef _PIC16F883_INC_
#define _PIC16F883_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F883
 */

/*
 * Device Registers
 */

// Register: INDF
#define INDF INDF
INDF                                     equ 0000h

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0001h

// Register: PCL
#define PCL PCL
PCL                                      equ 0002h

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
STATUS_RP_POSN                           equ 0005h
STATUS_RP_POSITION                       equ 0005h
STATUS_RP_SIZE                           equ 0002h
STATUS_RP_LENGTH                         equ 0002h
STATUS_RP_MASK                           equ 0060h
STATUS_IRP_POSN                          equ 0007h
STATUS_IRP_POSITION                      equ 0007h
STATUS_IRP_SIZE                          equ 0001h
STATUS_IRP_LENGTH                        equ 0001h
STATUS_IRP_MASK                          equ 0080h
STATUS_RP0_POSN                          equ 0005h
STATUS_RP0_POSITION                      equ 0005h
STATUS_RP0_SIZE                          equ 0001h
STATUS_RP0_LENGTH                        equ 0001h
STATUS_RP0_MASK                          equ 0020h
STATUS_RP1_POSN                          equ 0006h
STATUS_RP1_POSITION                      equ 0006h
STATUS_RP1_SIZE                          equ 0001h
STATUS_RP1_LENGTH                        equ 0001h
STATUS_RP1_MASK                          equ 0040h
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

// Register: FSR
#define FSR FSR
FSR                                      equ 0004h

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 0005h
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
PORTB                                    equ 0006h
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
PORTC                                    equ 0007h
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
PORTE                                    equ 0009h
// bitfield definitions
PORTE_RE3_POSN                           equ 0003h
PORTE_RE3_POSITION                       equ 0003h
PORTE_RE3_SIZE                           equ 0001h
PORTE_RE3_LENGTH                         equ 0001h
PORTE_RE3_MASK                           equ 0008h

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 000Bh
// bitfield definitions
INTCON_RBIF_POSN                         equ 0000h
INTCON_RBIF_POSITION                     equ 0000h
INTCON_RBIF_SIZE                         equ 0001h
INTCON_RBIF_LENGTH                       equ 0001h
INTCON_RBIF_MASK                         equ 0001h
INTCON_INTF_POSN                         equ 0001h
INTCON_INTF_POSITION                     equ 0001h
INTCON_INTF_SIZE                         equ 0001h
INTCON_INTF_LENGTH                       equ 0001h
INTCON_INTF_MASK                         equ 0002h
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
INTCON_INTE_POSN                         equ 0004h
INTCON_INTE_POSITION                     equ 0004h
INTCON_INTE_SIZE                         equ 0001h
INTCON_INTE_LENGTH                       equ 0001h
INTCON_INTE_MASK                         equ 0010h
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
INTCON_TMR0IF_POSN                       equ 0002h
INTCON_TMR0IF_POSITION                   equ 0002h
INTCON_TMR0IF_SIZE                       equ 0001h
INTCON_TMR0IF_LENGTH                     equ 0001h
INTCON_TMR0IF_MASK                       equ 0004h
INTCON_TMR0IE_POSN                       equ 0005h
INTCON_TMR0IE_POSITION                   equ 0005h
INTCON_TMR0IE_SIZE                       equ 0001h
INTCON_TMR0IE_LENGTH                     equ 0001h
INTCON_TMR0IE_MASK                       equ 0020h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 000Ch
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

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 000Dh
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_ULPWUIF_POSN                        equ 0002h
PIR2_ULPWUIF_POSITION                    equ 0002h
PIR2_ULPWUIF_SIZE                        equ 0001h
PIR2_ULPWUIF_LENGTH                      equ 0001h
PIR2_ULPWUIF_MASK                        equ 0004h
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

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 000Eh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 000Fh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0010h
// bitfield definitions
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
T1CON_TMR1GE_POSN                        equ 0006h
T1CON_TMR1GE_POSITION                    equ 0006h
T1CON_TMR1GE_SIZE                        equ 0001h
T1CON_TMR1GE_LENGTH                      equ 0001h
T1CON_TMR1GE_MASK                        equ 0040h
T1CON_T1GINV_POSN                        equ 0007h
T1CON_T1GINV_POSITION                    equ 0007h
T1CON_T1GINV_SIZE                        equ 0001h
T1CON_T1GINV_LENGTH                      equ 0001h
T1CON_T1GINV_MASK                        equ 0080h
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
T1CON_T1GIV_POSN                         equ 0007h
T1CON_T1GIV_POSITION                     equ 0007h
T1CON_T1GIV_SIZE                         equ 0001h
T1CON_T1GIV_LENGTH                       equ 0001h
T1CON_T1GIV_MASK                         equ 0080h
T1CON_T1SYNC_POSN                        equ 0002h
T1CON_T1SYNC_POSITION                    equ 0002h
T1CON_T1SYNC_SIZE                        equ 0001h
T1CON_T1SYNC_LENGTH                      equ 0001h
T1CON_T1SYNC_MASK                        equ 0004h

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 0011h

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0012h
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

// Register: SSPBUF
#define SSPBUF SSPBUF
SSPBUF                                   equ 0013h

// Register: SSPCON
#define SSPCON SSPCON
SSPCON                                   equ 0014h
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

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0015h

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0016h

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0017h
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

// Register: RCSTA
#define RCSTA RCSTA
RCSTA                                    equ 0018h
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
RCSTA_RCD8_POSN                          equ 0000h
RCSTA_RCD8_POSITION                      equ 0000h
RCSTA_RCD8_SIZE                          equ 0001h
RCSTA_RCD8_LENGTH                        equ 0001h
RCSTA_RCD8_MASK                          equ 0001h
RCSTA_RC9_POSN                           equ 0006h
RCSTA_RC9_POSITION                       equ 0006h
RCSTA_RC9_SIZE                           equ 0001h
RCSTA_RC9_LENGTH                         equ 0001h
RCSTA_RC9_MASK                           equ 0040h
RCSTA_nRC8_POSN                          equ 0006h
RCSTA_nRC8_POSITION                      equ 0006h
RCSTA_nRC8_SIZE                          equ 0001h
RCSTA_nRC8_LENGTH                        equ 0001h
RCSTA_nRC8_MASK                          equ 0040h
RCSTA_RC8_9_POSN                         equ 0006h
RCSTA_RC8_9_POSITION                     equ 0006h
RCSTA_RC8_9_SIZE                         equ 0001h
RCSTA_RC8_9_LENGTH                       equ 0001h
RCSTA_RC8_9_MASK                         equ 0040h

// Register: TXREG
#define TXREG TXREG
TXREG                                    equ 0019h

// Register: RCREG
#define RCREG RCREG
RCREG                                    equ 001Ah

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 001Bh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 001Ch

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 001Dh
// bitfield definitions
CCP2CON_CCP2M_POSN                       equ 0000h
CCP2CON_CCP2M_POSITION                   equ 0000h
CCP2CON_CCP2M_SIZE                       equ 0004h
CCP2CON_CCP2M_LENGTH                     equ 0004h
CCP2CON_CCP2M_MASK                       equ 000Fh
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

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 001Eh

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 001Fh
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
ADCON0_CHS_SIZE                          equ 0004h
ADCON0_CHS_LENGTH                        equ 0004h
ADCON0_CHS_MASK                          equ 003Ch
ADCON0_ADCS_POSN                         equ 0006h
ADCON0_ADCS_POSITION                     equ 0006h
ADCON0_ADCS_SIZE                         equ 0002h
ADCON0_ADCS_LENGTH                       equ 0002h
ADCON0_ADCS_MASK                         equ 00C0h
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h
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
ADCON0_ADCS0_POSN                        equ 0006h
ADCON0_ADCS0_POSITION                    equ 0006h
ADCON0_ADCS0_SIZE                        equ 0001h
ADCON0_ADCS0_LENGTH                      equ 0001h
ADCON0_ADCS0_MASK                        equ 0040h
ADCON0_ADCS1_POSN                        equ 0007h
ADCON0_ADCS1_POSITION                    equ 0007h
ADCON0_ADCS1_SIZE                        equ 0001h
ADCON0_ADCS1_LENGTH                      equ 0001h
ADCON0_ADCS1_MASK                        equ 0080h
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

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
OPTION_REG                               equ 0081h
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
OPTION_REG_INTEDG_POSN                   equ 0006h
OPTION_REG_INTEDG_POSITION               equ 0006h
OPTION_REG_INTEDG_SIZE                   equ 0001h
OPTION_REG_INTEDG_LENGTH                 equ 0001h
OPTION_REG_INTEDG_MASK                   equ 0040h
OPTION_REG_nRBPU_POSN                    equ 0007h
OPTION_REG_nRBPU_POSITION                equ 0007h
OPTION_REG_nRBPU_SIZE                    equ 0001h
OPTION_REG_nRBPU_LENGTH                  equ 0001h
OPTION_REG_nRBPU_MASK                    equ 0080h
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

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0085h
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
TRISB                                    equ 0086h
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
TRISC                                    equ 0087h
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
TRISE                                    equ 0089h
// bitfield definitions
TRISE_TRISE3_POSN                        equ 0003h
TRISE_TRISE3_POSITION                    equ 0003h
TRISE_TRISE3_SIZE                        equ 0001h
TRISE_TRISE3_LENGTH                      equ 0001h
TRISE_TRISE3_MASK                        equ 0008h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 008Ch
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

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 008Dh
// bitfield definitions
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h
PIE2_ULPWUIE_POSN                        equ 0002h
PIE2_ULPWUIE_POSITION                    equ 0002h
PIE2_ULPWUIE_SIZE                        equ 0001h
PIE2_ULPWUIE_LENGTH                      equ 0001h
PIE2_ULPWUIE_MASK                        equ 0004h
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

// Register: PCON
#define PCON PCON
PCON                                     equ 008Eh
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
PCON_SBOREN_POSN                         equ 0004h
PCON_SBOREN_POSITION                     equ 0004h
PCON_SBOREN_SIZE                         equ 0001h
PCON_SBOREN_LENGTH                       equ 0001h
PCON_SBOREN_MASK                         equ 0010h
PCON_ULPWUE_POSN                         equ 0005h
PCON_ULPWUE_POSITION                     equ 0005h
PCON_ULPWUE_SIZE                         equ 0001h
PCON_ULPWUE_LENGTH                       equ 0001h
PCON_ULPWUE_MASK                         equ 0020h
PCON_nBO_POSN                            equ 0000h
PCON_nBO_POSITION                        equ 0000h
PCON_nBO_SIZE                            equ 0001h
PCON_nBO_LENGTH                          equ 0001h
PCON_nBO_MASK                            equ 0001h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 008Fh
// bitfield definitions
OSCCON_SCS_POSN                          equ 0000h
OSCCON_SCS_POSITION                      equ 0000h
OSCCON_SCS_SIZE                          equ 0001h
OSCCON_SCS_LENGTH                        equ 0001h
OSCCON_SCS_MASK                          equ 0001h
OSCCON_LTS_POSN                          equ 0001h
OSCCON_LTS_POSITION                      equ 0001h
OSCCON_LTS_SIZE                          equ 0001h
OSCCON_LTS_LENGTH                        equ 0001h
OSCCON_LTS_MASK                          equ 0002h
OSCCON_HTS_POSN                          equ 0002h
OSCCON_HTS_POSITION                      equ 0002h
OSCCON_HTS_SIZE                          equ 0001h
OSCCON_HTS_LENGTH                        equ 0001h
OSCCON_HTS_MASK                          equ 0004h
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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0090h
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0005h
OSCTUNE_TUN_LENGTH                       equ 0005h
OSCTUNE_TUN_MASK                         equ 001Fh
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

// Register: SSPCON2
#define SSPCON2 SSPCON2
SSPCON2                                  equ 0091h
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

// Register: PR2
#define PR2 PR2
PR2                                      equ 0092h

// Register: SSPADD
#define SSPADD SSPADD
SSPADD                                   equ 0093h

// Register: SSPMSK
#define SSPMSK SSPMSK
SSPMSK                                   equ 0093h
// bitfield definitions
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

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
SSPSTAT                                  equ 0094h
// bitfield definitions
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
SSPSTAT_I2C_DATA_POSN                    equ 0005h
SSPSTAT_I2C_DATA_POSITION                equ 0005h
SSPSTAT_I2C_DATA_SIZE                    equ 0001h
SSPSTAT_I2C_DATA_LENGTH                  equ 0001h
SSPSTAT_I2C_DATA_MASK                    equ 0020h
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

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 0095h
// bitfield definitions
WPUB_WPUB_POSN                           equ 0000h
WPUB_WPUB_POSITION                       equ 0000h
WPUB_WPUB_SIZE                           equ 0008h
WPUB_WPUB_LENGTH                         equ 0008h
WPUB_WPUB_MASK                           equ 00FFh
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
IOCB                                     equ 0096h
// bitfield definitions
IOCB_IOCB_POSN                           equ 0000h
IOCB_IOCB_POSITION                       equ 0000h
IOCB_IOCB_SIZE                           equ 0008h
IOCB_IOCB_LENGTH                         equ 0008h
IOCB_IOCB_MASK                           equ 00FFh
IOCB_IOCB0_POSN                          equ 0000h
IOCB_IOCB0_POSITION                      equ 0000h
IOCB_IOCB0_SIZE                          equ 0001h
IOCB_IOCB0_LENGTH                        equ 0001h
IOCB_IOCB0_MASK                          equ 0001h
IOCB_IOCB1_POSN                          equ 0001h
IOCB_IOCB1_POSITION                      equ 0001h
IOCB_IOCB1_SIZE                          equ 0001h
IOCB_IOCB1_LENGTH                        equ 0001h
IOCB_IOCB1_MASK                          equ 0002h
IOCB_IOCB2_POSN                          equ 0002h
IOCB_IOCB2_POSITION                      equ 0002h
IOCB_IOCB2_SIZE                          equ 0001h
IOCB_IOCB2_LENGTH                        equ 0001h
IOCB_IOCB2_MASK                          equ 0004h
IOCB_IOCB3_POSN                          equ 0003h
IOCB_IOCB3_POSITION                      equ 0003h
IOCB_IOCB3_SIZE                          equ 0001h
IOCB_IOCB3_LENGTH                        equ 0001h
IOCB_IOCB3_MASK                          equ 0008h
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

// Register: VRCON
#define VRCON VRCON
VRCON                                    equ 0097h
// bitfield definitions
VRCON_VR_POSN                            equ 0000h
VRCON_VR_POSITION                        equ 0000h
VRCON_VR_SIZE                            equ 0004h
VRCON_VR_LENGTH                          equ 0004h
VRCON_VR_MASK                            equ 000Fh
VRCON_VRSS_POSN                          equ 0004h
VRCON_VRSS_POSITION                      equ 0004h
VRCON_VRSS_SIZE                          equ 0001h
VRCON_VRSS_LENGTH                        equ 0001h
VRCON_VRSS_MASK                          equ 0010h
VRCON_VRR_POSN                           equ 0005h
VRCON_VRR_POSITION                       equ 0005h
VRCON_VRR_SIZE                           equ 0001h
VRCON_VRR_LENGTH                         equ 0001h
VRCON_VRR_MASK                           equ 0020h
VRCON_VROE_POSN                          equ 0006h
VRCON_VROE_POSITION                      equ 0006h
VRCON_VROE_SIZE                          equ 0001h
VRCON_VROE_LENGTH                        equ 0001h
VRCON_VROE_MASK                          equ 0040h
VRCON_VREN_POSN                          equ 0007h
VRCON_VREN_POSITION                      equ 0007h
VRCON_VREN_SIZE                          equ 0001h
VRCON_VREN_LENGTH                        equ 0001h
VRCON_VREN_MASK                          equ 0080h
VRCON_VR0_POSN                           equ 0000h
VRCON_VR0_POSITION                       equ 0000h
VRCON_VR0_SIZE                           equ 0001h
VRCON_VR0_LENGTH                         equ 0001h
VRCON_VR0_MASK                           equ 0001h
VRCON_VR1_POSN                           equ 0001h
VRCON_VR1_POSITION                       equ 0001h
VRCON_VR1_SIZE                           equ 0001h
VRCON_VR1_LENGTH                         equ 0001h
VRCON_VR1_MASK                           equ 0002h
VRCON_VR2_POSN                           equ 0002h
VRCON_VR2_POSITION                       equ 0002h
VRCON_VR2_SIZE                           equ 0001h
VRCON_VR2_LENGTH                         equ 0001h
VRCON_VR2_MASK                           equ 0004h
VRCON_VR3_POSN                           equ 0003h
VRCON_VR3_POSITION                       equ 0003h
VRCON_VR3_SIZE                           equ 0001h
VRCON_VR3_LENGTH                         equ 0001h
VRCON_VR3_MASK                           equ 0008h

// Register: TXSTA
#define TXSTA TXSTA
TXSTA                                    equ 0098h
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
TXSTA_TXD8_POSN                          equ 0000h
TXSTA_TXD8_POSITION                      equ 0000h
TXSTA_TXD8_SIZE                          equ 0001h
TXSTA_TXD8_LENGTH                        equ 0001h
TXSTA_TXD8_MASK                          equ 0001h
TXSTA_nTX8_POSN                          equ 0006h
TXSTA_nTX8_POSITION                      equ 0006h
TXSTA_nTX8_SIZE                          equ 0001h
TXSTA_nTX8_LENGTH                        equ 0001h
TXSTA_nTX8_MASK                          equ 0040h
TXSTA_TX8_9_POSN                         equ 0006h
TXSTA_TX8_9_POSITION                     equ 0006h
TXSTA_TX8_9_SIZE                         equ 0001h
TXSTA_TX8_9_LENGTH                       equ 0001h
TXSTA_TX8_9_MASK                         equ 0040h

// Register: SPBRG
#define SPBRG SPBRG
SPBRG                                    equ 0099h
// bitfield definitions
SPBRG_BRG0_POSN                          equ 0000h
SPBRG_BRG0_POSITION                      equ 0000h
SPBRG_BRG0_SIZE                          equ 0001h
SPBRG_BRG0_LENGTH                        equ 0001h
SPBRG_BRG0_MASK                          equ 0001h
SPBRG_BRG1_POSN                          equ 0001h
SPBRG_BRG1_POSITION                      equ 0001h
SPBRG_BRG1_SIZE                          equ 0001h
SPBRG_BRG1_LENGTH                        equ 0001h
SPBRG_BRG1_MASK                          equ 0002h
SPBRG_BRG2_POSN                          equ 0002h
SPBRG_BRG2_POSITION                      equ 0002h
SPBRG_BRG2_SIZE                          equ 0001h
SPBRG_BRG2_LENGTH                        equ 0001h
SPBRG_BRG2_MASK                          equ 0004h
SPBRG_BRG3_POSN                          equ 0003h
SPBRG_BRG3_POSITION                      equ 0003h
SPBRG_BRG3_SIZE                          equ 0001h
SPBRG_BRG3_LENGTH                        equ 0001h
SPBRG_BRG3_MASK                          equ 0008h
SPBRG_BRG4_POSN                          equ 0004h
SPBRG_BRG4_POSITION                      equ 0004h
SPBRG_BRG4_SIZE                          equ 0001h
SPBRG_BRG4_LENGTH                        equ 0001h
SPBRG_BRG4_MASK                          equ 0010h
SPBRG_BRG5_POSN                          equ 0005h
SPBRG_BRG5_POSITION                      equ 0005h
SPBRG_BRG5_SIZE                          equ 0001h
SPBRG_BRG5_LENGTH                        equ 0001h
SPBRG_BRG5_MASK                          equ 0020h
SPBRG_BRG6_POSN                          equ 0006h
SPBRG_BRG6_POSITION                      equ 0006h
SPBRG_BRG6_SIZE                          equ 0001h
SPBRG_BRG6_LENGTH                        equ 0001h
SPBRG_BRG6_MASK                          equ 0040h
SPBRG_BRG7_POSN                          equ 0007h
SPBRG_BRG7_POSITION                      equ 0007h
SPBRG_BRG7_SIZE                          equ 0001h
SPBRG_BRG7_LENGTH                        equ 0001h
SPBRG_BRG7_MASK                          equ 0080h

// Register: SPBRGH
#define SPBRGH SPBRGH
SPBRGH                                   equ 009Ah
// bitfield definitions
SPBRGH_SPBRGH_POSN                       equ 0000h
SPBRGH_SPBRGH_POSITION                   equ 0000h
SPBRGH_SPBRGH_SIZE                       equ 0008h
SPBRGH_SPBRGH_LENGTH                     equ 0008h
SPBRGH_SPBRGH_MASK                       equ 00FFh
SPBRGH_BRG8_POSN                         equ 0000h
SPBRGH_BRG8_POSITION                     equ 0000h
SPBRGH_BRG8_SIZE                         equ 0001h
SPBRGH_BRG8_LENGTH                       equ 0001h
SPBRGH_BRG8_MASK                         equ 0001h
SPBRGH_BRG9_POSN                         equ 0001h
SPBRGH_BRG9_POSITION                     equ 0001h
SPBRGH_BRG9_SIZE                         equ 0001h
SPBRGH_BRG9_LENGTH                       equ 0001h
SPBRGH_BRG9_MASK                         equ 0002h
SPBRGH_BRG10_POSN                        equ 0002h
SPBRGH_BRG10_POSITION                    equ 0002h
SPBRGH_BRG10_SIZE                        equ 0001h
SPBRGH_BRG10_LENGTH                      equ 0001h
SPBRGH_BRG10_MASK                        equ 0004h
SPBRGH_BRG11_POSN                        equ 0003h
SPBRGH_BRG11_POSITION                    equ 0003h
SPBRGH_BRG11_SIZE                        equ 0001h
SPBRGH_BRG11_LENGTH                      equ 0001h
SPBRGH_BRG11_MASK                        equ 0008h
SPBRGH_BRG12_POSN                        equ 0004h
SPBRGH_BRG12_POSITION                    equ 0004h
SPBRGH_BRG12_SIZE                        equ 0001h
SPBRGH_BRG12_LENGTH                      equ 0001h
SPBRGH_BRG12_MASK                        equ 0010h
SPBRGH_BRG13_POSN                        equ 0005h
SPBRGH_BRG13_POSITION                    equ 0005h
SPBRGH_BRG13_SIZE                        equ 0001h
SPBRGH_BRG13_LENGTH                      equ 0001h
SPBRGH_BRG13_MASK                        equ 0020h
SPBRGH_BRG14_POSN                        equ 0006h
SPBRGH_BRG14_POSITION                    equ 0006h
SPBRGH_BRG14_SIZE                        equ 0001h
SPBRGH_BRG14_LENGTH                      equ 0001h
SPBRGH_BRG14_MASK                        equ 0040h
SPBRGH_BRG15_POSN                        equ 0007h
SPBRGH_BRG15_POSITION                    equ 0007h
SPBRGH_BRG15_SIZE                        equ 0001h
SPBRGH_BRG15_LENGTH                      equ 0001h
SPBRGH_BRG15_MASK                        equ 0080h

// Register: PWM1CON
#define PWM1CON PWM1CON
PWM1CON                                  equ 009Bh
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

// Register: ECCPAS
#define ECCPAS ECCPAS
ECCPAS                                   equ 009Ch
// bitfield definitions
ECCPAS_PSSBD_POSN                        equ 0000h
ECCPAS_PSSBD_POSITION                    equ 0000h
ECCPAS_PSSBD_SIZE                        equ 0002h
ECCPAS_PSSBD_LENGTH                      equ 0002h
ECCPAS_PSSBD_MASK                        equ 0003h
ECCPAS_PSSAC_POSN                        equ 0002h
ECCPAS_PSSAC_POSITION                    equ 0002h
ECCPAS_PSSAC_SIZE                        equ 0002h
ECCPAS_PSSAC_LENGTH                      equ 0002h
ECCPAS_PSSAC_MASK                        equ 000Ch
ECCPAS_ECCPAS_POSN                       equ 0004h
ECCPAS_ECCPAS_POSITION                   equ 0004h
ECCPAS_ECCPAS_SIZE                       equ 0003h
ECCPAS_ECCPAS_LENGTH                     equ 0003h
ECCPAS_ECCPAS_MASK                       equ 0070h
ECCPAS_ECCPASE_POSN                      equ 0007h
ECCPAS_ECCPASE_POSITION                  equ 0007h
ECCPAS_ECCPASE_SIZE                      equ 0001h
ECCPAS_ECCPASE_LENGTH                    equ 0001h
ECCPAS_ECCPASE_MASK                      equ 0080h
ECCPAS_PSSBD0_POSN                       equ 0000h
ECCPAS_PSSBD0_POSITION                   equ 0000h
ECCPAS_PSSBD0_SIZE                       equ 0001h
ECCPAS_PSSBD0_LENGTH                     equ 0001h
ECCPAS_PSSBD0_MASK                       equ 0001h
ECCPAS_PSSBD1_POSN                       equ 0001h
ECCPAS_PSSBD1_POSITION                   equ 0001h
ECCPAS_PSSBD1_SIZE                       equ 0001h
ECCPAS_PSSBD1_LENGTH                     equ 0001h
ECCPAS_PSSBD1_MASK                       equ 0002h
ECCPAS_PSSAC0_POSN                       equ 0002h
ECCPAS_PSSAC0_POSITION                   equ 0002h
ECCPAS_PSSAC0_SIZE                       equ 0001h
ECCPAS_PSSAC0_LENGTH                     equ 0001h
ECCPAS_PSSAC0_MASK                       equ 0004h
ECCPAS_PSSAC1_POSN                       equ 0003h
ECCPAS_PSSAC1_POSITION                   equ 0003h
ECCPAS_PSSAC1_SIZE                       equ 0001h
ECCPAS_PSSAC1_LENGTH                     equ 0001h
ECCPAS_PSSAC1_MASK                       equ 0008h
ECCPAS_ECCPAS0_POSN                      equ 0004h
ECCPAS_ECCPAS0_POSITION                  equ 0004h
ECCPAS_ECCPAS0_SIZE                      equ 0001h
ECCPAS_ECCPAS0_LENGTH                    equ 0001h
ECCPAS_ECCPAS0_MASK                      equ 0010h
ECCPAS_ECCPAS1_POSN                      equ 0005h
ECCPAS_ECCPAS1_POSITION                  equ 0005h
ECCPAS_ECCPAS1_SIZE                      equ 0001h
ECCPAS_ECCPAS1_LENGTH                    equ 0001h
ECCPAS_ECCPAS1_MASK                      equ 0020h
ECCPAS_ECCPAS2_POSN                      equ 0006h
ECCPAS_ECCPAS2_POSITION                  equ 0006h
ECCPAS_ECCPAS2_SIZE                      equ 0001h
ECCPAS_ECCPAS2_LENGTH                    equ 0001h
ECCPAS_ECCPAS2_MASK                      equ 0040h

// Register: PSTRCON
#define PSTRCON PSTRCON
PSTRCON                                  equ 009Dh
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

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 009Eh

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Fh
// bitfield definitions
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
ADCON1_ADFM_POSN                         equ 0007h
ADCON1_ADFM_POSITION                     equ 0007h
ADCON1_ADFM_SIZE                         equ 0001h
ADCON1_ADFM_LENGTH                       equ 0001h
ADCON1_ADFM_MASK                         equ 0080h

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0105h
// bitfield definitions
WDTCON_SWDTEN_POSN                       equ 0000h
WDTCON_SWDTEN_POSITION                   equ 0000h
WDTCON_SWDTEN_SIZE                       equ 0001h
WDTCON_SWDTEN_LENGTH                     equ 0001h
WDTCON_SWDTEN_MASK                       equ 0001h
WDTCON_WDTPS_POSN                        equ 0001h
WDTCON_WDTPS_POSITION                    equ 0001h
WDTCON_WDTPS_SIZE                        equ 0004h
WDTCON_WDTPS_LENGTH                      equ 0004h
WDTCON_WDTPS_MASK                        equ 001Eh
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

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0107h
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

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0108h
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
CM2CON1                                  equ 0109h
// bitfield definitions
CM2CON1_C2SYNC_POSN                      equ 0000h
CM2CON1_C2SYNC_POSITION                  equ 0000h
CM2CON1_C2SYNC_SIZE                      equ 0001h
CM2CON1_C2SYNC_LENGTH                    equ 0001h
CM2CON1_C2SYNC_MASK                      equ 0001h
CM2CON1_T1GSS_POSN                       equ 0001h
CM2CON1_T1GSS_POSITION                   equ 0001h
CM2CON1_T1GSS_SIZE                       equ 0001h
CM2CON1_T1GSS_LENGTH                     equ 0001h
CM2CON1_T1GSS_MASK                       equ 0002h
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

// Register: EEDATA
#define EEDATA EEDATA
EEDATA                                   equ 010Ch

// Register: EEADR
#define EEADR EEADR
EEADR                                    equ 010Dh

// Register: EEDATH
#define EEDATH EEDATH
EEDATH                                   equ 010Eh

// Register: EEADRH
#define EEADRH EEADRH
EEADRH                                   equ 010Fh

// Register: SRCON
#define SRCON SRCON
SRCON                                    equ 0185h
// bitfield definitions
SRCON_FVREN_POSN                         equ 0000h
SRCON_FVREN_POSITION                     equ 0000h
SRCON_FVREN_SIZE                         equ 0001h
SRCON_FVREN_LENGTH                       equ 0001h
SRCON_FVREN_MASK                         equ 0001h
SRCON_PULSR_POSN                         equ 0002h
SRCON_PULSR_POSITION                     equ 0002h
SRCON_PULSR_SIZE                         equ 0001h
SRCON_PULSR_LENGTH                       equ 0001h
SRCON_PULSR_MASK                         equ 0004h
SRCON_PULSS_POSN                         equ 0003h
SRCON_PULSS_POSITION                     equ 0003h
SRCON_PULSS_SIZE                         equ 0001h
SRCON_PULSS_LENGTH                       equ 0001h
SRCON_PULSS_MASK                         equ 0008h
SRCON_C2REN_POSN                         equ 0004h
SRCON_C2REN_POSITION                     equ 0004h
SRCON_C2REN_SIZE                         equ 0001h
SRCON_C2REN_LENGTH                       equ 0001h
SRCON_C2REN_MASK                         equ 0010h
SRCON_C1SEN_POSN                         equ 0005h
SRCON_C1SEN_POSITION                     equ 0005h
SRCON_C1SEN_SIZE                         equ 0001h
SRCON_C1SEN_LENGTH                       equ 0001h
SRCON_C1SEN_MASK                         equ 0020h
SRCON_SR0_POSN                           equ 0006h
SRCON_SR0_POSITION                       equ 0006h
SRCON_SR0_SIZE                           equ 0001h
SRCON_SR0_LENGTH                         equ 0001h
SRCON_SR0_MASK                           equ 0040h
SRCON_SR1_POSN                           equ 0007h
SRCON_SR1_POSITION                       equ 0007h
SRCON_SR1_SIZE                           equ 0001h
SRCON_SR1_LENGTH                         equ 0001h
SRCON_SR1_MASK                           equ 0080h

// Register: BAUDCTL
#define BAUDCTL BAUDCTL
BAUDCTL                                  equ 0187h
// bitfield definitions
BAUDCTL_ABDEN_POSN                       equ 0000h
BAUDCTL_ABDEN_POSITION                   equ 0000h
BAUDCTL_ABDEN_SIZE                       equ 0001h
BAUDCTL_ABDEN_LENGTH                     equ 0001h
BAUDCTL_ABDEN_MASK                       equ 0001h
BAUDCTL_WUE_POSN                         equ 0001h
BAUDCTL_WUE_POSITION                     equ 0001h
BAUDCTL_WUE_SIZE                         equ 0001h
BAUDCTL_WUE_LENGTH                       equ 0001h
BAUDCTL_WUE_MASK                         equ 0002h
BAUDCTL_BRG16_POSN                       equ 0003h
BAUDCTL_BRG16_POSITION                   equ 0003h
BAUDCTL_BRG16_SIZE                       equ 0001h
BAUDCTL_BRG16_LENGTH                     equ 0001h
BAUDCTL_BRG16_MASK                       equ 0008h
BAUDCTL_SCKP_POSN                        equ 0004h
BAUDCTL_SCKP_POSITION                    equ 0004h
BAUDCTL_SCKP_SIZE                        equ 0001h
BAUDCTL_SCKP_LENGTH                      equ 0001h
BAUDCTL_SCKP_MASK                        equ 0010h
BAUDCTL_RCIDL_POSN                       equ 0006h
BAUDCTL_RCIDL_POSITION                   equ 0006h
BAUDCTL_RCIDL_SIZE                       equ 0001h
BAUDCTL_RCIDL_LENGTH                     equ 0001h
BAUDCTL_RCIDL_MASK                       equ 0040h
BAUDCTL_ABDOVF_POSN                      equ 0007h
BAUDCTL_ABDOVF_POSITION                  equ 0007h
BAUDCTL_ABDOVF_SIZE                      equ 0001h
BAUDCTL_ABDOVF_LENGTH                    equ 0001h
BAUDCTL_ABDOVF_MASK                      equ 0080h

// Register: ANSEL
#define ANSEL ANSEL
ANSEL                                    equ 0188h
// bitfield definitions
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

// Register: ANSELH
#define ANSELH ANSELH
ANSELH                                   equ 0189h
// bitfield definitions
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
ANSELH_ANS12_POSN                        equ 0004h
ANSELH_ANS12_POSITION                    equ 0004h
ANSELH_ANS12_SIZE                        equ 0001h
ANSELH_ANS12_LENGTH                      equ 0001h
ANSELH_ANS12_MASK                        equ 0010h
ANSELH_ANS13_POSN                        equ 0005h
ANSELH_ANS13_POSITION                    equ 0005h
ANSELH_ANS13_SIZE                        equ 0001h
ANSELH_ANS13_LENGTH                      equ 0001h
ANSELH_ANS13_MASK                        equ 0020h

// Register: EECON1
#define EECON1 EECON1
EECON1                                   equ 018Ch
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
EECON1_EEPGD_POSN                        equ 0007h
EECON1_EEPGD_POSITION                    equ 0007h
EECON1_EEPGD_SIZE                        equ 0001h
EECON1_EEPGD_LENGTH                      equ 0001h
EECON1_EEPGD_MASK                        equ 0080h

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 018Dh

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ABDEN                            BANKMASK(BAUDCTL), 0
#define ABDOVF                           BANKMASK(BAUDCTL), 7
#define ACKDT                            BANKMASK(SSPCON2), 5
#define ACKEN                            BANKMASK(SSPCON2), 4
#define ACKSTAT                          BANKMASK(SSPCON2), 6
#define ADCS0                            BANKMASK(ADCON0), 6
#define ADCS1                            BANKMASK(ADCON0), 7
#define ADDEN                            BANKMASK(RCSTA), 3
#define ADFM                             BANKMASK(ADCON1), 7
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ANS0                             BANKMASK(ANSEL), 0
#define ANS1                             BANKMASK(ANSEL), 1
#define ANS10                            BANKMASK(ANSELH), 2
#define ANS11                            BANKMASK(ANSELH), 3
#define ANS12                            BANKMASK(ANSELH), 4
#define ANS13                            BANKMASK(ANSELH), 5
#define ANS2                             BANKMASK(ANSEL), 2
#define ANS3                             BANKMASK(ANSEL), 3
#define ANS4                             BANKMASK(ANSEL), 4
#define ANS8                             BANKMASK(ANSELH), 0
#define ANS9                             BANKMASK(ANSELH), 1
#define BCLIE                            BANKMASK(PIE2), 3
#define BCLIF                            BANKMASK(PIR2), 3
#define BF                               BANKMASK(SSPSTAT), 0
#define BRG0                             BANKMASK(SPBRG), 0
#define BRG1                             BANKMASK(SPBRG), 1
#define BRG10                            BANKMASK(SPBRGH), 2
#define BRG11                            BANKMASK(SPBRGH), 3
#define BRG12                            BANKMASK(SPBRGH), 4
#define BRG13                            BANKMASK(SPBRGH), 5
#define BRG14                            BANKMASK(SPBRGH), 6
#define BRG15                            BANKMASK(SPBRGH), 7
#define BRG16                            BANKMASK(BAUDCTL), 3
#define BRG2                             BANKMASK(SPBRG), 2
#define BRG3                             BANKMASK(SPBRG), 3
#define BRG4                             BANKMASK(SPBRG), 4
#define BRG5                             BANKMASK(SPBRG), 5
#define BRG6                             BANKMASK(SPBRG), 6
#define BRG7                             BANKMASK(SPBRG), 7
#define BRG8                             BANKMASK(SPBRGH), 0
#define BRG9                             BANKMASK(SPBRGH), 1
#define BRGH                             BANKMASK(TXSTA), 2
#define C1CH0                            BANKMASK(CM1CON0), 0
#define C1CH1                            BANKMASK(CM1CON0), 1
#define C1IE                             BANKMASK(PIE2), 5
#define C1IF                             BANKMASK(PIR2), 5
#define C1OE                             BANKMASK(CM1CON0), 5
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1R                              BANKMASK(CM1CON0), 2
#define C1RSEL                           BANKMASK(CM2CON1), 5
#define C1SEN                            BANKMASK(SRCON), 5
#define C2CH0                            BANKMASK(CM2CON0), 0
#define C2CH1                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE2), 6
#define C2IF                             BANKMASK(PIR2), 6
#define C2OE                             BANKMASK(CM2CON0), 5
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2R                              BANKMASK(CM2CON0), 2
#define C2REN                            BANKMASK(SRCON), 4
#define C2RSEL                           BANKMASK(CM2CON1), 4
#define C2SYNC                           BANKMASK(CM2CON1), 0
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CCP1X                            BANKMASK(CCP1CON), 5
#define CCP1Y                            BANKMASK(CCP1CON), 4
#define CCP2IE                           BANKMASK(PIE2), 0
#define CCP2IF                           BANKMASK(PIR2), 0
#define CCP2M0                           BANKMASK(CCP2CON), 0
#define CCP2M1                           BANKMASK(CCP2CON), 1
#define CCP2M2                           BANKMASK(CCP2CON), 2
#define CCP2M3                           BANKMASK(CCP2CON), 3
#define CCP2X                            BANKMASK(CCP2CON), 5
#define CCP2Y                            BANKMASK(CCP2CON), 4
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON), 4
#define CREN                             BANKMASK(RCSTA), 4
#define CSRC                             BANKMASK(TXSTA), 7
#define DATA_ADDRESS                     BANKMASK(SSPSTAT), 5
#define DC                               BANKMASK(STATUS), 1
#define DC1B0                            BANKMASK(CCP1CON), 4
#define DC1B1                            BANKMASK(CCP1CON), 5
#define DC2B0                            BANKMASK(CCP2CON), 4
#define DC2B1                            BANKMASK(CCP2CON), 5
#define D_A                              BANKMASK(SSPSTAT), 5
#define D_nA                             BANKMASK(SSPSTAT), 5
#define ECCPAS0                          BANKMASK(ECCPAS), 4
#define ECCPAS1                          BANKMASK(ECCPAS), 5
#define ECCPAS2                          BANKMASK(ECCPAS), 6
#define ECCPASE                          BANKMASK(ECCPAS), 7
#define EEIE                             BANKMASK(PIE2), 4
#define EEIF                             BANKMASK(PIR2), 4
#define EEPGD                            BANKMASK(EECON1), 7
#define FERR                             BANKMASK(RCSTA), 2
#define FVREN                            BANKMASK(SRCON), 0
#define GCEN                             BANKMASK(SSPCON2), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_DONE                          BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define HTS                              BANKMASK(OSCCON), 2
#define I2C_DATA                         BANKMASK(SSPSTAT), 5
#define I2C_READ                         BANKMASK(SSPSTAT), 2
#define I2C_START                        BANKMASK(SSPSTAT), 3
#define I2C_STOP                         BANKMASK(SSPSTAT), 4
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOCB0                            BANKMASK(IOCB), 0
#define IOCB1                            BANKMASK(IOCB), 1
#define IOCB2                            BANKMASK(IOCB), 2
#define IOCB3                            BANKMASK(IOCB), 3
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCB6                            BANKMASK(IOCB), 6
#define IOCB7                            BANKMASK(IOCB), 7
#define IRCF0                            BANKMASK(OSCCON), 4
#define IRCF1                            BANKMASK(OSCCON), 5
#define IRCF2                            BANKMASK(OSCCON), 6
#define LTS                              BANKMASK(OSCCON), 1
#define MC1OUT                           BANKMASK(CM2CON1), 7
#define MC2OUT                           BANKMASK(CM2CON1), 6
#define MSK0                             BANKMASK(SSPMSK), 0
#define MSK1                             BANKMASK(SSPMSK), 1
#define MSK2                             BANKMASK(SSPMSK), 2
#define MSK3                             BANKMASK(SSPMSK), 3
#define MSK4                             BANKMASK(SSPMSK), 4
#define MSK5                             BANKMASK(SSPMSK), 5
#define MSK6                             BANKMASK(SSPMSK), 6
#define MSK7                             BANKMASK(SSPMSK), 7
#define OERR                             BANKMASK(RCSTA), 1
#define OSFIE                            BANKMASK(PIE2), 7
#define OSFIF                            BANKMASK(PIR2), 7
#define OSTS                             BANKMASK(OSCCON), 3
#define P1M0                             BANKMASK(CCP1CON), 6
#define P1M1                             BANKMASK(CCP1CON), 7
#define PDC0                             BANKMASK(PWM1CON), 0
#define PDC1                             BANKMASK(PWM1CON), 1
#define PDC2                             BANKMASK(PWM1CON), 2
#define PDC3                             BANKMASK(PWM1CON), 3
#define PDC4                             BANKMASK(PWM1CON), 4
#define PDC5                             BANKMASK(PWM1CON), 5
#define PDC6                             BANKMASK(PWM1CON), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PEN                              BANKMASK(SSPCON2), 2
#define PRSEN                            BANKMASK(PWM1CON), 7
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PSSAC0                           BANKMASK(ECCPAS), 2
#define PSSAC1                           BANKMASK(ECCPAS), 3
#define PSSBD0                           BANKMASK(ECCPAS), 0
#define PSSBD1                           BANKMASK(ECCPAS), 1
#define PULSR                            BANKMASK(SRCON), 2
#define PULSS                            BANKMASK(SRCON), 3
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
#define RBIE                             BANKMASK(INTCON), 3
#define RBIF                             BANKMASK(INTCON), 0
#define RC0                              BANKMASK(PORTC), 0
#define RC1                              BANKMASK(PORTC), 1
#define RC2                              BANKMASK(PORTC), 2
#define RC3                              BANKMASK(PORTC), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC5                              BANKMASK(PORTC), 5
#define RC6                              BANKMASK(PORTC), 6
#define RC7                              BANKMASK(PORTC), 7
#define RC8_9                            BANKMASK(RCSTA), 6
#define RC9                              BANKMASK(RCSTA), 6
#define RCD8                             BANKMASK(RCSTA), 0
#define RCEN                             BANKMASK(SSPCON2), 3
#define RCIDL                            BANKMASK(BAUDCTL), 6
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(EECON1), 0
#define RE3                              BANKMASK(PORTE), 3
#define READ_WRITE                       BANKMASK(SSPSTAT), 2
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RSEN                             BANKMASK(SSPCON2), 1
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define R_W                              BANKMASK(SSPSTAT), 2
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SBOREN                           BANKMASK(PCON), 4
#define SCKP                             BANKMASK(BAUDCTL), 4
#define SCS                              BANKMASK(OSCCON), 0
#define SEN                              BANKMASK(SSPCON2), 0
#define SENDB                            BANKMASK(TXSTA), 3
#define SMP                              BANKMASK(SSPSTAT), 7
#define SPEN                             BANKMASK(RCSTA), 7
#define SR0                              BANKMASK(SRCON), 6
#define SR1                              BANKMASK(SRCON), 7
#define SREN                             BANKMASK(RCSTA), 5
#define SSPEN                            BANKMASK(SSPCON), 5
#define SSPIE                            BANKMASK(PIE1), 3
#define SSPIF                            BANKMASK(PIR1), 3
#define SSPM0                            BANKMASK(SSPCON), 0
#define SSPM1                            BANKMASK(SSPCON), 1
#define SSPM2                            BANKMASK(SSPCON), 2
#define SSPM3                            BANKMASK(SSPCON), 3
#define SSPOV                            BANKMASK(SSPCON), 6
#define STRA                             BANKMASK(PSTRCON), 0
#define STRB                             BANKMASK(PSTRCON), 1
#define STRC                             BANKMASK(PSTRCON), 2
#define STRD                             BANKMASK(PSTRCON), 3
#define STRSYNC                          BANKMASK(PSTRCON), 4
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GINV                           BANKMASK(T1CON), 7
#define T1GIV                            BANKMASK(T1CON), 7
#define T1GSS                            BANKMASK(CM2CON1), 1
#define T1INSYNC                         BANKMASK(T1CON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T1SYNC                           BANKMASK(T1CON), 2
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR1CS                           BANKMASK(T1CON), 1
#define TMR1GE                           BANKMASK(T1CON), 6
#define TMR1IE                           BANKMASK(PIE1), 0
#define TMR1IF                           BANKMASK(PIR1), 0
#define TMR1ON                           BANKMASK(T1CON), 0
#define TMR2IE                           BANKMASK(PIE1), 1
#define TMR2IF                           BANKMASK(PIR1), 1
#define TMR2ON                           BANKMASK(T2CON), 2
#define TOUTPS0                          BANKMASK(T2CON), 3
#define TOUTPS1                          BANKMASK(T2CON), 4
#define TOUTPS2                          BANKMASK(T2CON), 5
#define TOUTPS3                          BANKMASK(T2CON), 6
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
#define TRISE3                           BANKMASK(TRISE), 3
#define TRMT                             BANKMASK(TXSTA), 1
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define TX8_9                            BANKMASK(TXSTA), 6
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXD8                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define UA                               BANKMASK(SSPSTAT), 1
#define ULPWUE                           BANKMASK(PCON), 5
#define ULPWUIE                          BANKMASK(PIE2), 2
#define ULPWUIF                          BANKMASK(PIR2), 2
#define VCFG0                            BANKMASK(ADCON1), 4
#define VCFG1                            BANKMASK(ADCON1), 5
#define VR0                              BANKMASK(VRCON), 0
#define VR1                              BANKMASK(VRCON), 1
#define VR2                              BANKMASK(VRCON), 2
#define VR3                              BANKMASK(VRCON), 3
#define VREN                             BANKMASK(VRCON), 7
#define VROE                             BANKMASK(VRCON), 6
#define VRR                              BANKMASK(VRCON), 5
#define VRSS                             BANKMASK(VRCON), 4
#define WCOL                             BANKMASK(SSPCON), 7
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
#define WR                               BANKMASK(EECON1), 1
#define WREN                             BANKMASK(EECON1), 2
#define WRERR                            BANKMASK(EECON1), 3
#define WUE                              BANKMASK(BAUDCTL), 1
#define ZERO                             BANKMASK(STATUS), 2
#define nA                               BANKMASK(SSPSTAT), 5
#define nADDRESS                         BANKMASK(SSPSTAT), 5
#define nBO                              BANKMASK(PCON), 0
#define nBOR                             BANKMASK(PCON), 0
#define nDONE                            BANKMASK(ADCON0), 1
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRBPU                            BANKMASK(OPTION_REG), 7
#define nRC8                             BANKMASK(RCSTA), 6
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nTO                              BANKMASK(STATUS), 4
#define nTX8                             BANKMASK(TXSTA), 6
#define nW                               BANKMASK(SSPSTAT), 2
#define nWRITE                           BANKMASK(SSPSTAT), 2

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
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16F883_INC_
