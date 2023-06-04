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

#ifndef _PIC16LF722A_INC_
#define _PIC16LF722A_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16LF722A
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
INTCON_IOCIF_POSN                        equ 0000h
INTCON_IOCIF_POSITION                    equ 0000h
INTCON_IOCIF_SIZE                        equ 0001h
INTCON_IOCIF_LENGTH                      equ 0001h
INTCON_IOCIF_MASK                        equ 0001h
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
PIR1_TMR1GIF_POSN                        equ 0007h
PIR1_TMR1GIF_POSITION                    equ 0007h
PIR1_TMR1GIF_SIZE                        equ 0001h
PIR1_TMR1GIF_LENGTH                      equ 0001h
PIR1_TMR1GIF_MASK                        equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 000Dh
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h

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
T1CON_T1SYNC_POSN                        equ 0002h
T1CON_T1SYNC_POSITION                    equ 0002h
T1CON_T1SYNC_SIZE                        equ 0001h
T1CON_T1SYNC_LENGTH                      equ 0001h
T1CON_T1SYNC_MASK                        equ 0004h
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
T1CON_TMR1CS_POSN                        equ 0006h
T1CON_TMR1CS_POSITION                    equ 0006h
T1CON_TMR1CS_SIZE                        equ 0002h
T1CON_TMR1CS_LENGTH                      equ 0002h
T1CON_TMR1CS_MASK                        equ 00C0h
T1CON_nT1SYNC_POSN                       equ 0002h
T1CON_nT1SYNC_POSITION                   equ 0002h
T1CON_nT1SYNC_SIZE                       equ 0001h
T1CON_nT1SYNC_LENGTH                     equ 0001h
T1CON_nT1SYNC_MASK                       equ 0004h
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
T1CON_T1INSYNC_POSN                      equ 0002h
T1CON_T1INSYNC_POSITION                  equ 0002h
T1CON_T1INSYNC_SIZE                      equ 0001h
T1CON_T1INSYNC_LENGTH                    equ 0001h
T1CON_T1INSYNC_MASK                      equ 0004h

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

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 001Eh

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
PIE1_TMR1GIE_POSN                        equ 0007h
PIE1_TMR1GIE_POSITION                    equ 0007h
PIE1_TMR1GIE_SIZE                        equ 0001h
PIE1_TMR1GIE_LENGTH                      equ 0001h
PIE1_TMR1GIE_MASK                        equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 008Dh
// bitfield definitions
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h

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
PCON_nBO_POSN                            equ 0000h
PCON_nBO_POSITION                        equ 0000h
PCON_nBO_SIZE                            equ 0001h
PCON_nBO_LENGTH                          equ 0001h
PCON_nBO_MASK                            equ 0001h

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 008Fh
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
T1GCON_T1G_nDONE_POSN                    equ 0003h
T1GCON_T1G_nDONE_POSITION                equ 0003h
T1GCON_T1G_nDONE_SIZE                    equ 0001h
T1GCON_T1G_nDONE_LENGTH                  equ 0001h
T1GCON_T1G_nDONE_MASK                    equ 0008h
T1GCON_T1GGO_DONE_POSN                   equ 0003h
T1GCON_T1GGO_DONE_POSITION               equ 0003h
T1GCON_T1GGO_DONE_SIZE                   equ 0001h
T1GCON_T1GGO_DONE_LENGTH                 equ 0001h
T1GCON_T1GGO_DONE_MASK                   equ 0008h
T1GCON_T1GGO_POSN                        equ 0003h
T1GCON_T1GGO_POSITION                    equ 0003h
T1GCON_T1GGO_SIZE                        equ 0001h
T1GCON_T1GGO_LENGTH                      equ 0001h
T1GCON_T1GGO_MASK                        equ 0008h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0090h
// bitfield definitions
OSCCON_ICSS_POSN                         equ 0002h
OSCCON_ICSS_POSITION                     equ 0002h
OSCCON_ICSS_SIZE                         equ 0001h
OSCCON_ICSS_LENGTH                       equ 0001h
OSCCON_ICSS_MASK                         equ 0004h
OSCCON_ICSL_POSN                         equ 0003h
OSCCON_ICSL_POSITION                     equ 0003h
OSCCON_ICSL_SIZE                         equ 0001h
OSCCON_ICSL_LENGTH                       equ 0001h
OSCCON_ICSL_MASK                         equ 0008h
OSCCON_IRCF_POSN                         equ 0004h
OSCCON_IRCF_POSITION                     equ 0004h
OSCCON_IRCF_SIZE                         equ 0002h
OSCCON_IRCF_LENGTH                       equ 0002h
OSCCON_IRCF_MASK                         equ 0030h
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

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0091h
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

// Register: PR2
#define PR2 PR2
PR2                                      equ 0092h

// Register: SSPADD
#define SSPADD SSPADD
SSPADD                                   equ 0093h

// Register: SSPMSK
#define SSPMSK SSPMSK
SSPMSK                                   equ 0093h

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
WPUB_WPU0_POSN                           equ 0000h
WPUB_WPU0_POSITION                       equ 0000h
WPUB_WPU0_SIZE                           equ 0001h
WPUB_WPU0_LENGTH                         equ 0001h
WPUB_WPU0_MASK                           equ 0001h
WPUB_WPU1_POSN                           equ 0001h
WPUB_WPU1_POSITION                       equ 0001h
WPUB_WPU1_SIZE                           equ 0001h
WPUB_WPU1_LENGTH                         equ 0001h
WPUB_WPU1_MASK                           equ 0002h
WPUB_WPU2_POSN                           equ 0002h
WPUB_WPU2_POSITION                       equ 0002h
WPUB_WPU2_SIZE                           equ 0001h
WPUB_WPU2_LENGTH                         equ 0001h
WPUB_WPU2_MASK                           equ 0004h
WPUB_WPU3_POSN                           equ 0003h
WPUB_WPU3_POSITION                       equ 0003h
WPUB_WPU3_SIZE                           equ 0001h
WPUB_WPU3_LENGTH                         equ 0001h
WPUB_WPU3_MASK                           equ 0008h
WPUB_WPU4_POSN                           equ 0004h
WPUB_WPU4_POSITION                       equ 0004h
WPUB_WPU4_SIZE                           equ 0001h
WPUB_WPU4_LENGTH                         equ 0001h
WPUB_WPU4_MASK                           equ 0010h
WPUB_WPU5_POSN                           equ 0005h
WPUB_WPU5_POSITION                       equ 0005h
WPUB_WPU5_SIZE                           equ 0001h
WPUB_WPU5_LENGTH                         equ 0001h
WPUB_WPU5_MASK                           equ 0020h
WPUB_WPU6_POSN                           equ 0006h
WPUB_WPU6_POSITION                       equ 0006h
WPUB_WPU6_SIZE                           equ 0001h
WPUB_WPU6_LENGTH                         equ 0001h
WPUB_WPU6_MASK                           equ 0040h
WPUB_WPU7_POSN                           equ 0007h
WPUB_WPU7_POSITION                       equ 0007h
WPUB_WPU7_SIZE                           equ 0001h
WPUB_WPU7_LENGTH                         equ 0001h
WPUB_WPU7_MASK                           equ 0080h

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
IOCB_IOC0_POSN                           equ 0000h
IOCB_IOC0_POSITION                       equ 0000h
IOCB_IOC0_SIZE                           equ 0001h
IOCB_IOC0_LENGTH                         equ 0001h
IOCB_IOC0_MASK                           equ 0001h
IOCB_IOC1_POSN                           equ 0001h
IOCB_IOC1_POSITION                       equ 0001h
IOCB_IOC1_SIZE                           equ 0001h
IOCB_IOC1_LENGTH                         equ 0001h
IOCB_IOC1_MASK                           equ 0002h
IOCB_IOC2_POSN                           equ 0002h
IOCB_IOC2_POSITION                       equ 0002h
IOCB_IOC2_SIZE                           equ 0001h
IOCB_IOC2_LENGTH                         equ 0001h
IOCB_IOC2_MASK                           equ 0004h
IOCB_IOC3_POSN                           equ 0003h
IOCB_IOC3_POSITION                       equ 0003h
IOCB_IOC3_SIZE                           equ 0001h
IOCB_IOC3_LENGTH                         equ 0001h
IOCB_IOC3_MASK                           equ 0008h
IOCB_IOC4_POSN                           equ 0004h
IOCB_IOC4_POSITION                       equ 0004h
IOCB_IOC4_SIZE                           equ 0001h
IOCB_IOC4_LENGTH                         equ 0001h
IOCB_IOC4_MASK                           equ 0010h
IOCB_IOC5_POSN                           equ 0005h
IOCB_IOC5_POSITION                       equ 0005h
IOCB_IOC5_SIZE                           equ 0001h
IOCB_IOC5_LENGTH                         equ 0001h
IOCB_IOC5_MASK                           equ 0020h
IOCB_IOC6_POSN                           equ 0006h
IOCB_IOC6_POSITION                       equ 0006h
IOCB_IOC6_SIZE                           equ 0001h
IOCB_IOC6_LENGTH                         equ 0001h
IOCB_IOC6_MASK                           equ 0040h
IOCB_IOC7_POSN                           equ 0007h
IOCB_IOC7_POSITION                       equ 0007h
IOCB_IOC7_SIZE                           equ 0001h
IOCB_IOC7_LENGTH                         equ 0001h
IOCB_IOC7_MASK                           equ 0080h

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

// Register: APFCON
#define APFCON APFCON
APFCON                                   equ 009Ch
// bitfield definitions
APFCON_CCP2SEL_POSN                      equ 0000h
APFCON_CCP2SEL_POSITION                  equ 0000h
APFCON_CCP2SEL_SIZE                      equ 0001h
APFCON_CCP2SEL_LENGTH                    equ 0001h
APFCON_CCP2SEL_MASK                      equ 0001h
APFCON_SSSEL_POSN                        equ 0001h
APFCON_SSSEL_POSITION                    equ 0001h
APFCON_SSSEL_SIZE                        equ 0001h
APFCON_SSSEL_LENGTH                      equ 0001h
APFCON_SSSEL_MASK                        equ 0002h

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 009Dh
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
FVRCON_FVREN_POSN                        equ 0006h
FVRCON_FVREN_POSITION                    equ 0006h
FVRCON_FVREN_SIZE                        equ 0001h
FVRCON_FVREN_LENGTH                      equ 0001h
FVRCON_FVREN_MASK                        equ 0040h
FVRCON_FVRRDY_POSN                       equ 0007h
FVRCON_FVRRDY_POSITION                   equ 0007h
FVRCON_FVRRDY_SIZE                       equ 0001h
FVRCON_FVRRDY_LENGTH                     equ 0001h
FVRCON_FVRRDY_MASK                       equ 0080h
FVRCON_FVRST_POSN                        equ 0007h
FVRCON_FVRST_POSITION                    equ 0007h
FVRCON_FVRST_SIZE                        equ 0001h
FVRCON_FVRST_LENGTH                      equ 0001h
FVRCON_FVRST_MASK                        equ 0080h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Fh
// bitfield definitions
ADCON1_ADREF_POSN                        equ 0000h
ADCON1_ADREF_POSITION                    equ 0000h
ADCON1_ADREF_SIZE                        equ 0002h
ADCON1_ADREF_LENGTH                      equ 0002h
ADCON1_ADREF_MASK                        equ 0003h
ADCON1_ADCS_POSN                         equ 0004h
ADCON1_ADCS_POSITION                     equ 0004h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0070h
ADCON1_ADREF0_POSN                       equ 0000h
ADCON1_ADREF0_POSITION                   equ 0000h
ADCON1_ADREF0_SIZE                       equ 0001h
ADCON1_ADREF0_LENGTH                     equ 0001h
ADCON1_ADREF0_MASK                       equ 0001h
ADCON1_ADREF1_POSN                       equ 0001h
ADCON1_ADREF1_POSITION                   equ 0001h
ADCON1_ADREF1_SIZE                       equ 0001h
ADCON1_ADREF1_LENGTH                     equ 0001h
ADCON1_ADREF1_MASK                       equ 0002h
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

// Register: CPSCON0
#define CPSCON0 CPSCON0
CPSCON0                                  equ 0108h
// bitfield definitions
CPSCON0_T0XCS_POSN                       equ 0000h
CPSCON0_T0XCS_POSITION                   equ 0000h
CPSCON0_T0XCS_SIZE                       equ 0001h
CPSCON0_T0XCS_LENGTH                     equ 0001h
CPSCON0_T0XCS_MASK                       equ 0001h
CPSCON0_CPSOUT_POSN                      equ 0001h
CPSCON0_CPSOUT_POSITION                  equ 0001h
CPSCON0_CPSOUT_SIZE                      equ 0001h
CPSCON0_CPSOUT_LENGTH                    equ 0001h
CPSCON0_CPSOUT_MASK                      equ 0002h
CPSCON0_CPSRNG_POSN                      equ 0002h
CPSCON0_CPSRNG_POSITION                  equ 0002h
CPSCON0_CPSRNG_SIZE                      equ 0002h
CPSCON0_CPSRNG_LENGTH                    equ 0002h
CPSCON0_CPSRNG_MASK                      equ 000Ch
CPSCON0_CPSON_POSN                       equ 0007h
CPSCON0_CPSON_POSITION                   equ 0007h
CPSCON0_CPSON_SIZE                       equ 0001h
CPSCON0_CPSON_LENGTH                     equ 0001h
CPSCON0_CPSON_MASK                       equ 0080h
CPSCON0_CPSRNG0_POSN                     equ 0002h
CPSCON0_CPSRNG0_POSITION                 equ 0002h
CPSCON0_CPSRNG0_SIZE                     equ 0001h
CPSCON0_CPSRNG0_LENGTH                   equ 0001h
CPSCON0_CPSRNG0_MASK                     equ 0004h
CPSCON0_CPSRNG1_POSN                     equ 0003h
CPSCON0_CPSRNG1_POSITION                 equ 0003h
CPSCON0_CPSRNG1_SIZE                     equ 0001h
CPSCON0_CPSRNG1_LENGTH                   equ 0001h
CPSCON0_CPSRNG1_MASK                     equ 0008h

// Register: CPSCON1
#define CPSCON1 CPSCON1
CPSCON1                                  equ 0109h
// bitfield definitions
CPSCON1_CPSCH_POSN                       equ 0000h
CPSCON1_CPSCH_POSITION                   equ 0000h
CPSCON1_CPSCH_SIZE                       equ 0004h
CPSCON1_CPSCH_LENGTH                     equ 0004h
CPSCON1_CPSCH_MASK                       equ 000Fh
CPSCON1_CPSCH0_POSN                      equ 0000h
CPSCON1_CPSCH0_POSITION                  equ 0000h
CPSCON1_CPSCH0_SIZE                      equ 0001h
CPSCON1_CPSCH0_LENGTH                    equ 0001h
CPSCON1_CPSCH0_MASK                      equ 0001h
CPSCON1_CPSCH1_POSN                      equ 0001h
CPSCON1_CPSCH1_POSITION                  equ 0001h
CPSCON1_CPSCH1_SIZE                      equ 0001h
CPSCON1_CPSCH1_LENGTH                    equ 0001h
CPSCON1_CPSCH1_MASK                      equ 0002h
CPSCON1_CPSCH2_POSN                      equ 0002h
CPSCON1_CPSCH2_POSITION                  equ 0002h
CPSCON1_CPSCH2_SIZE                      equ 0001h
CPSCON1_CPSCH2_LENGTH                    equ 0001h
CPSCON1_CPSCH2_MASK                      equ 0004h
CPSCON1_CPSCH3_POSN                      equ 0003h
CPSCON1_CPSCH3_POSITION                  equ 0003h
CPSCON1_CPSCH3_SIZE                      equ 0001h
CPSCON1_CPSCH3_LENGTH                    equ 0001h
CPSCON1_CPSCH3_MASK                      equ 0008h

// Register: PMDATL
#define PMDATL PMDATL
PMDATL                                   equ 010Ch

// Register: PMADRL
#define PMADRL PMADRL
PMADRL                                   equ 010Dh

// Register: PMDATH
#define PMDATH PMDATH
PMDATH                                   equ 010Eh

// Register: PMADRH
#define PMADRH PMADRH
PMADRH                                   equ 010Fh

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 0185h
// bitfield definitions
ANSELA_ANSA_POSN                         equ 0000h
ANSELA_ANSA_POSITION                     equ 0000h
ANSELA_ANSA_SIZE                         equ 0006h
ANSELA_ANSA_LENGTH                       equ 0006h
ANSELA_ANSA_MASK                         equ 003Fh
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
ANSELA_ANSA4_POSN                        equ 0004h
ANSELA_ANSA4_POSITION                    equ 0004h
ANSELA_ANSA4_SIZE                        equ 0001h
ANSELA_ANSA4_LENGTH                      equ 0001h
ANSELA_ANSA4_MASK                        equ 0010h
ANSELA_ANSA5_POSN                        equ 0005h
ANSELA_ANSA5_POSITION                    equ 0005h
ANSELA_ANSA5_SIZE                        equ 0001h
ANSELA_ANSA5_LENGTH                      equ 0001h
ANSELA_ANSA5_MASK                        equ 0020h

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 0186h
// bitfield definitions
ANSELB_ANSB_POSN                         equ 0000h
ANSELB_ANSB_POSITION                     equ 0000h
ANSELB_ANSB_SIZE                         equ 0006h
ANSELB_ANSB_LENGTH                       equ 0006h
ANSELB_ANSB_MASK                         equ 003Fh
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

// Register: PMCON1
#define PMCON1 PMCON1
PMCON1                                   equ 018Ch
// bitfield definitions
PMCON1_RD_POSN                           equ 0000h
PMCON1_RD_POSITION                       equ 0000h
PMCON1_RD_SIZE                           equ 0001h
PMCON1_RD_LENGTH                         equ 0001h
PMCON1_RD_MASK                           equ 0001h
PMCON1_PMRD_POSN                         equ 0000h
PMCON1_PMRD_POSITION                     equ 0000h
PMCON1_PMRD_SIZE                         equ 0001h
PMCON1_PMRD_LENGTH                       equ 0001h
PMCON1_PMRD_MASK                         equ 0001h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ADCS0                            BANKMASK(ADCON1), 4
#define ADCS1                            BANKMASK(ADCON1), 5
#define ADCS2                            BANKMASK(ADCON1), 6
#define ADDEN                            BANKMASK(RCSTA), 3
#define ADFVR0                           BANKMASK(FVRCON), 0
#define ADFVR1                           BANKMASK(FVRCON), 1
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ADREF0                           BANKMASK(ADCON1), 0
#define ADREF1                           BANKMASK(ADCON1), 1
#define ANSA0                            BANKMASK(ANSELA), 0
#define ANSA1                            BANKMASK(ANSELA), 1
#define ANSA2                            BANKMASK(ANSELA), 2
#define ANSA3                            BANKMASK(ANSELA), 3
#define ANSA4                            BANKMASK(ANSELA), 4
#define ANSA5                            BANKMASK(ANSELA), 5
#define ANSB0                            BANKMASK(ANSELB), 0
#define ANSB1                            BANKMASK(ANSELB), 1
#define ANSB2                            BANKMASK(ANSELB), 2
#define ANSB3                            BANKMASK(ANSELB), 3
#define ANSB4                            BANKMASK(ANSELB), 4
#define ANSB5                            BANKMASK(ANSELB), 5
#define BF                               BANKMASK(SSPSTAT), 0
#define BRG0                             BANKMASK(SPBRG), 0
#define BRG1                             BANKMASK(SPBRG), 1
#define BRG2                             BANKMASK(SPBRG), 2
#define BRG3                             BANKMASK(SPBRG), 3
#define BRG4                             BANKMASK(SPBRG), 4
#define BRG5                             BANKMASK(SPBRG), 5
#define BRG6                             BANKMASK(SPBRG), 6
#define BRG7                             BANKMASK(SPBRG), 7
#define BRGH                             BANKMASK(TXSTA), 2
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
#define CCP2SEL                          BANKMASK(APFCON), 0
#define CCP2X                            BANKMASK(CCP2CON), 5
#define CCP2Y                            BANKMASK(CCP2CON), 4
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON), 4
#define CPSCH0                           BANKMASK(CPSCON1), 0
#define CPSCH1                           BANKMASK(CPSCON1), 1
#define CPSCH2                           BANKMASK(CPSCON1), 2
#define CPSCH3                           BANKMASK(CPSCON1), 3
#define CPSON                            BANKMASK(CPSCON0), 7
#define CPSOUT                           BANKMASK(CPSCON0), 1
#define CPSRNG0                          BANKMASK(CPSCON0), 2
#define CPSRNG1                          BANKMASK(CPSCON0), 3
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
#define FERR                             BANKMASK(RCSTA), 2
#define FVREN                            BANKMASK(FVRCON), 6
#define FVRRDY                           BANKMASK(FVRCON), 7
#define FVRST                            BANKMASK(FVRCON), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_DONE                          BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define I2C_DATA                         BANKMASK(SSPSTAT), 5
#define I2C_READ                         BANKMASK(SSPSTAT), 2
#define I2C_START                        BANKMASK(SSPSTAT), 3
#define I2C_STOP                         BANKMASK(SSPSTAT), 4
#define ICSL                             BANKMASK(OSCCON), 3
#define ICSS                             BANKMASK(OSCCON), 2
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOC0                             BANKMASK(IOCB), 0
#define IOC1                             BANKMASK(IOCB), 1
#define IOC2                             BANKMASK(IOCB), 2
#define IOC3                             BANKMASK(IOCB), 3
#define IOC4                             BANKMASK(IOCB), 4
#define IOC5                             BANKMASK(IOCB), 5
#define IOC6                             BANKMASK(IOCB), 6
#define IOC7                             BANKMASK(IOCB), 7
#define IOCB0                            BANKMASK(IOCB), 0
#define IOCB1                            BANKMASK(IOCB), 1
#define IOCB2                            BANKMASK(IOCB), 2
#define IOCB3                            BANKMASK(IOCB), 3
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCB6                            BANKMASK(IOCB), 6
#define IOCB7                            BANKMASK(IOCB), 7
#define IOCIE                            BANKMASK(INTCON), 3
#define IOCIF                            BANKMASK(INTCON), 0
#define IRCF0                            BANKMASK(OSCCON), 4
#define IRCF1                            BANKMASK(OSCCON), 5
#define OERR                             BANKMASK(RCSTA), 1
#define PEIE                             BANKMASK(INTCON), 6
#define PMRD                             BANKMASK(PMCON1), 0
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
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD                               BANKMASK(PMCON1), 0
#define RE3                              BANKMASK(PORTE), 3
#define READ_WRITE                       BANKMASK(SSPSTAT), 2
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define R_W                              BANKMASK(SSPSTAT), 2
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SMP                              BANKMASK(SSPSTAT), 7
#define SPEN                             BANKMASK(RCSTA), 7
#define SREN                             BANKMASK(RCSTA), 5
#define SSPEN                            BANKMASK(SSPCON), 5
#define SSPIE                            BANKMASK(PIE1), 3
#define SSPIF                            BANKMASK(PIR1), 3
#define SSPM0                            BANKMASK(SSPCON), 0
#define SSPM1                            BANKMASK(SSPCON), 1
#define SSPM2                            BANKMASK(SSPCON), 2
#define SSPM3                            BANKMASK(SSPCON), 3
#define SSPOV                            BANKMASK(SSPCON), 6
#define SSSEL                            BANKMASK(APFCON), 1
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T0XCS                            BANKMASK(CPSCON0), 0
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GGO                            BANKMASK(T1GCON), 3
#define T1GGO_DONE                       BANKMASK(T1GCON), 3
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3
#define T1GPOL                           BANKMASK(T1GCON), 6
#define T1GSPM                           BANKMASK(T1GCON), 4
#define T1GSS0                           BANKMASK(T1GCON), 0
#define T1GSS1                           BANKMASK(T1GCON), 1
#define T1GTM                            BANKMASK(T1GCON), 5
#define T1GVAL                           BANKMASK(T1GCON), 2
#define T1G_nDONE                        BANKMASK(T1GCON), 3
#define T1INSYNC                         BANKMASK(T1CON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T1SYNC                           BANKMASK(T1CON), 2
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
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
#define TUN5                             BANKMASK(OSCTUNE), 5
#define TX8_9                            BANKMASK(TXSTA), 6
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXD8                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define UA                               BANKMASK(SSPSTAT), 1
#define WCOL                             BANKMASK(SSPCON), 7
#define WPU0                             BANKMASK(WPUB), 0
#define WPU1                             BANKMASK(WPUB), 1
#define WPU2                             BANKMASK(WPUB), 2
#define WPU3                             BANKMASK(WPUB), 3
#define WPU4                             BANKMASK(WPUB), 4
#define WPU5                             BANKMASK(WPUB), 5
#define WPU6                             BANKMASK(WPUB), 6
#define WPU7                             BANKMASK(WPUB), 7
#define WPUB0                            BANKMASK(WPUB), 0
#define WPUB1                            BANKMASK(WPUB), 1
#define WPUB2                            BANKMASK(WPUB), 2
#define WPUB3                            BANKMASK(WPUB), 3
#define WPUB4                            BANKMASK(WPUB), 4
#define WPUB5                            BANKMASK(WPUB), 5
#define WPUB6                            BANKMASK(WPUB), 6
#define WPUB7                            BANKMASK(WPUB), 7
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
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16LF722A_INC_
