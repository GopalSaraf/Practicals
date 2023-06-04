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

#ifndef _PIC16C765_INC_
#define _PIC16C765_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16C765
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

// Register: PORTD
#define PORTD PORTD
PORTD                                    equ 0008h
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

// Register: PORTE
#define PORTE PORTE
PORTE                                    equ 0009h
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
PIR1_USBIF_POSN                          equ 0003h
PIR1_USBIF_POSITION                      equ 0003h
PIR1_USBIF_SIZE                          equ 0001h
PIR1_USBIF_LENGTH                        equ 0001h
PIR1_USBIF_MASK                          equ 0008h
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
PIR1_PSPIF_POSN                          equ 0007h
PIR1_PSPIF_POSITION                      equ 0007h
PIR1_PSPIF_SIZE                          equ 0001h
PIR1_PSPIF_LENGTH                        equ 0001h
PIR1_PSPIF_MASK                          equ 0080h

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
ADCON0_GO_nDONE_POSN                     equ 0002h
ADCON0_GO_nDONE_POSITION                 equ 0002h
ADCON0_GO_nDONE_SIZE                     equ 0001h
ADCON0_GO_nDONE_LENGTH                   equ 0001h
ADCON0_GO_nDONE_MASK                     equ 0004h
ADCON0_CHS_POSN                          equ 0003h
ADCON0_CHS_POSITION                      equ 0003h
ADCON0_CHS_SIZE                          equ 0003h
ADCON0_CHS_LENGTH                        equ 0003h
ADCON0_CHS_MASK                          equ 0038h
ADCON0_ADCS_POSN                         equ 0006h
ADCON0_ADCS_POSITION                     equ 0006h
ADCON0_ADCS_SIZE                         equ 0002h
ADCON0_ADCS_LENGTH                       equ 0002h
ADCON0_ADCS_MASK                         equ 00C0h
ADCON0_GO_POSN                           equ 0002h
ADCON0_GO_POSITION                       equ 0002h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0004h
ADCON0_CHS0_POSN                         equ 0003h
ADCON0_CHS0_POSITION                     equ 0003h
ADCON0_CHS0_SIZE                         equ 0001h
ADCON0_CHS0_LENGTH                       equ 0001h
ADCON0_CHS0_MASK                         equ 0008h
ADCON0_CHS1_POSN                         equ 0004h
ADCON0_CHS1_POSITION                     equ 0004h
ADCON0_CHS1_SIZE                         equ 0001h
ADCON0_CHS1_LENGTH                       equ 0001h
ADCON0_CHS1_MASK                         equ 0010h
ADCON0_CHS2_POSN                         equ 0005h
ADCON0_CHS2_POSITION                     equ 0005h
ADCON0_CHS2_SIZE                         equ 0001h
ADCON0_CHS2_LENGTH                       equ 0001h
ADCON0_CHS2_MASK                         equ 0020h
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
ADCON0_nDONE_POSN                        equ 0002h
ADCON0_nDONE_POSITION                    equ 0002h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0004h
ADCON0_GO_DONE_POSN                      equ 0002h
ADCON0_GO_DONE_POSITION                  equ 0002h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0004h

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
TRISD                                    equ 0088h
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
TRISE                                    equ 0089h
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
TRISE_PSPMODE_POSN                       equ 0004h
TRISE_PSPMODE_POSITION                   equ 0004h
TRISE_PSPMODE_SIZE                       equ 0001h
TRISE_PSPMODE_LENGTH                     equ 0001h
TRISE_PSPMODE_MASK                       equ 0010h
TRISE_IBOV_POSN                          equ 0005h
TRISE_IBOV_POSITION                      equ 0005h
TRISE_IBOV_SIZE                          equ 0001h
TRISE_IBOV_LENGTH                        equ 0001h
TRISE_IBOV_MASK                          equ 0020h
TRISE_OBF_POSN                           equ 0006h
TRISE_OBF_POSITION                       equ 0006h
TRISE_OBF_SIZE                           equ 0001h
TRISE_OBF_LENGTH                         equ 0001h
TRISE_OBF_MASK                           equ 0040h
TRISE_IBF_POSN                           equ 0007h
TRISE_IBF_POSITION                       equ 0007h
TRISE_IBF_SIZE                           equ 0001h
TRISE_IBF_LENGTH                         equ 0001h
TRISE_IBF_MASK                           equ 0080h

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
PIE1_USBIE_POSN                          equ 0003h
PIE1_USBIE_POSITION                      equ 0003h
PIE1_USBIE_SIZE                          equ 0001h
PIE1_USBIE_LENGTH                        equ 0001h
PIE1_USBIE_MASK                          equ 0008h
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
PIE1_PSPIE_POSN                          equ 0007h
PIE1_PSPIE_POSITION                      equ 0007h
PIE1_PSPIE_SIZE                          equ 0001h
PIE1_PSPIE_LENGTH                        equ 0001h
PIE1_PSPIE_MASK                          equ 0080h

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

// Register: PR2
#define PR2 PR2
PR2                                      equ 0092h
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh

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

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Fh
// bitfield definitions
ADCON1_PCFG_POSN                         equ 0000h
ADCON1_PCFG_POSITION                     equ 0000h
ADCON1_PCFG_SIZE                         equ 0003h
ADCON1_PCFG_LENGTH                       equ 0003h
ADCON1_PCFG_MASK                         equ 0007h
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

// Register: UIR
#define UIR UIR
UIR                                      equ 0190h
// bitfield definitions
UIR_USB_RST_POSN                         equ 0000h
UIR_USB_RST_POSITION                     equ 0000h
UIR_USB_RST_SIZE                         equ 0001h
UIR_USB_RST_LENGTH                       equ 0001h
UIR_USB_RST_MASK                         equ 0001h
UIR_UERR_POSN                            equ 0001h
UIR_UERR_POSITION                        equ 0001h
UIR_UERR_SIZE                            equ 0001h
UIR_UERR_LENGTH                          equ 0001h
UIR_UERR_MASK                            equ 0002h
UIR_ACTIVITY_POSN                        equ 0002h
UIR_ACTIVITY_POSITION                    equ 0002h
UIR_ACTIVITY_SIZE                        equ 0001h
UIR_ACTIVITY_LENGTH                      equ 0001h
UIR_ACTIVITY_MASK                        equ 0004h
UIR_TOK_DNE_POSN                         equ 0003h
UIR_TOK_DNE_POSITION                     equ 0003h
UIR_TOK_DNE_SIZE                         equ 0001h
UIR_TOK_DNE_LENGTH                       equ 0001h
UIR_TOK_DNE_MASK                         equ 0008h
UIR_UIDLE_POSN                           equ 0004h
UIR_UIDLE_POSITION                       equ 0004h
UIR_UIDLE_SIZE                           equ 0001h
UIR_UIDLE_LENGTH                         equ 0001h
UIR_UIDLE_MASK                           equ 0010h
UIR_STALL_POSN                           equ 0005h
UIR_STALL_POSITION                       equ 0005h
UIR_STALL_SIZE                           equ 0001h
UIR_STALL_LENGTH                         equ 0001h
UIR_STALL_MASK                           equ 0020h

// Register: UIE
#define UIE UIE
UIE                                      equ 0191h
// bitfield definitions
UIE_USB_RST_POSN                         equ 0000h
UIE_USB_RST_POSITION                     equ 0000h
UIE_USB_RST_SIZE                         equ 0001h
UIE_USB_RST_LENGTH                       equ 0001h
UIE_USB_RST_MASK                         equ 0001h
UIE_UERR_POSN                            equ 0001h
UIE_UERR_POSITION                        equ 0001h
UIE_UERR_SIZE                            equ 0001h
UIE_UERR_LENGTH                          equ 0001h
UIE_UERR_MASK                            equ 0002h
UIE_ACTIVITY_POSN                        equ 0002h
UIE_ACTIVITY_POSITION                    equ 0002h
UIE_ACTIVITY_SIZE                        equ 0001h
UIE_ACTIVITY_LENGTH                      equ 0001h
UIE_ACTIVITY_MASK                        equ 0004h
UIE_TOK_DNE_POSN                         equ 0003h
UIE_TOK_DNE_POSITION                     equ 0003h
UIE_TOK_DNE_SIZE                         equ 0001h
UIE_TOK_DNE_LENGTH                       equ 0001h
UIE_TOK_DNE_MASK                         equ 0008h
UIE_UIDLE_POSN                           equ 0004h
UIE_UIDLE_POSITION                       equ 0004h
UIE_UIDLE_SIZE                           equ 0001h
UIE_UIDLE_LENGTH                         equ 0001h
UIE_UIDLE_MASK                           equ 0010h
UIE_STALL_POSN                           equ 0005h
UIE_STALL_POSITION                       equ 0005h
UIE_STALL_SIZE                           equ 0001h
UIE_STALL_LENGTH                         equ 0001h
UIE_STALL_MASK                           equ 0020h

// Register: UEIR
#define UEIR UEIR
UEIR                                     equ 0192h
// bitfield definitions
UEIR_PID_ERR_POSN                        equ 0000h
UEIR_PID_ERR_POSITION                    equ 0000h
UEIR_PID_ERR_SIZE                        equ 0001h
UEIR_PID_ERR_LENGTH                      equ 0001h
UEIR_PID_ERR_MASK                        equ 0001h
UEIR_CRC5_POSN                           equ 0001h
UEIR_CRC5_POSITION                       equ 0001h
UEIR_CRC5_SIZE                           equ 0001h
UEIR_CRC5_LENGTH                         equ 0001h
UEIR_CRC5_MASK                           equ 0002h
UEIR_CRC16_POSN                          equ 0002h
UEIR_CRC16_POSITION                      equ 0002h
UEIR_CRC16_SIZE                          equ 0001h
UEIR_CRC16_LENGTH                        equ 0001h
UEIR_CRC16_MASK                          equ 0004h
UEIR_DFN8_POSN                           equ 0003h
UEIR_DFN8_POSITION                       equ 0003h
UEIR_DFN8_SIZE                           equ 0001h
UEIR_DFN8_LENGTH                         equ 0001h
UEIR_DFN8_MASK                           equ 0008h
UEIR_BTO_ERR_POSN                        equ 0004h
UEIR_BTO_ERR_POSITION                    equ 0004h
UEIR_BTO_ERR_SIZE                        equ 0001h
UEIR_BTO_ERR_LENGTH                      equ 0001h
UEIR_BTO_ERR_MASK                        equ 0010h
UEIR_WRT_ERR_POSN                        equ 0005h
UEIR_WRT_ERR_POSITION                    equ 0005h
UEIR_WRT_ERR_SIZE                        equ 0001h
UEIR_WRT_ERR_LENGTH                      equ 0001h
UEIR_WRT_ERR_MASK                        equ 0020h
UEIR_OWN_ERR_POSN                        equ 0006h
UEIR_OWN_ERR_POSITION                    equ 0006h
UEIR_OWN_ERR_SIZE                        equ 0001h
UEIR_OWN_ERR_LENGTH                      equ 0001h
UEIR_OWN_ERR_MASK                        equ 0040h
UEIR_BTS_ERR_POSN                        equ 0007h
UEIR_BTS_ERR_POSITION                    equ 0007h
UEIR_BTS_ERR_SIZE                        equ 0001h
UEIR_BTS_ERR_LENGTH                      equ 0001h
UEIR_BTS_ERR_MASK                        equ 0080h

// Register: UEIE
#define UEIE UEIE
UEIE                                     equ 0193h
// bitfield definitions
UEIE_PID_ERR_POSN                        equ 0000h
UEIE_PID_ERR_POSITION                    equ 0000h
UEIE_PID_ERR_SIZE                        equ 0001h
UEIE_PID_ERR_LENGTH                      equ 0001h
UEIE_PID_ERR_MASK                        equ 0001h
UEIE_CRC5_POSN                           equ 0001h
UEIE_CRC5_POSITION                       equ 0001h
UEIE_CRC5_SIZE                           equ 0001h
UEIE_CRC5_LENGTH                         equ 0001h
UEIE_CRC5_MASK                           equ 0002h
UEIE_CRC16_POSN                          equ 0002h
UEIE_CRC16_POSITION                      equ 0002h
UEIE_CRC16_SIZE                          equ 0001h
UEIE_CRC16_LENGTH                        equ 0001h
UEIE_CRC16_MASK                          equ 0004h
UEIE_DFN8_POSN                           equ 0003h
UEIE_DFN8_POSITION                       equ 0003h
UEIE_DFN8_SIZE                           equ 0001h
UEIE_DFN8_LENGTH                         equ 0001h
UEIE_DFN8_MASK                           equ 0008h
UEIE_BTO_ERR_POSN                        equ 0004h
UEIE_BTO_ERR_POSITION                    equ 0004h
UEIE_BTO_ERR_SIZE                        equ 0001h
UEIE_BTO_ERR_LENGTH                      equ 0001h
UEIE_BTO_ERR_MASK                        equ 0010h
UEIE_WRT_ERR_POSN                        equ 0005h
UEIE_WRT_ERR_POSITION                    equ 0005h
UEIE_WRT_ERR_SIZE                        equ 0001h
UEIE_WRT_ERR_LENGTH                      equ 0001h
UEIE_WRT_ERR_MASK                        equ 0020h
UEIE_OWN_ERR_POSN                        equ 0006h
UEIE_OWN_ERR_POSITION                    equ 0006h
UEIE_OWN_ERR_SIZE                        equ 0001h
UEIE_OWN_ERR_LENGTH                      equ 0001h
UEIE_OWN_ERR_MASK                        equ 0040h
UEIE_BTS_ERR_POSN                        equ 0007h
UEIE_BTS_ERR_POSITION                    equ 0007h
UEIE_BTS_ERR_SIZE                        equ 0001h
UEIE_BTS_ERR_LENGTH                      equ 0001h
UEIE_BTS_ERR_MASK                        equ 0080h

// Register: USTAT
#define USTAT USTAT
USTAT                                    equ 0194h
// bitfield definitions
USTAT_IN_POSN                            equ 0002h
USTAT_IN_POSITION                        equ 0002h
USTAT_IN_SIZE                            equ 0001h
USTAT_IN_LENGTH                          equ 0001h
USTAT_IN_MASK                            equ 0004h
USTAT_ENDP_POSN                          equ 0003h
USTAT_ENDP_POSITION                      equ 0003h
USTAT_ENDP_SIZE                          equ 0002h
USTAT_ENDP_LENGTH                        equ 0002h
USTAT_ENDP_MASK                          equ 0018h
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

// Register: UCTRL
#define UCTRL UCTRL
UCTRL                                    equ 0195h
// bitfield definitions
UCTRL_SUSPND_POSN                        equ 0001h
UCTRL_SUSPND_POSITION                    equ 0001h
UCTRL_SUSPND_SIZE                        equ 0001h
UCTRL_SUSPND_LENGTH                      equ 0001h
UCTRL_SUSPND_MASK                        equ 0002h
UCTRL_RESUME_POSN                        equ 0002h
UCTRL_RESUME_POSITION                    equ 0002h
UCTRL_RESUME_SIZE                        equ 0001h
UCTRL_RESUME_LENGTH                      equ 0001h
UCTRL_RESUME_MASK                        equ 0004h
UCTRL_DEV_ATT_POSN                       equ 0003h
UCTRL_DEV_ATT_POSITION                   equ 0003h
UCTRL_DEV_ATT_SIZE                       equ 0001h
UCTRL_DEV_ATT_LENGTH                     equ 0001h
UCTRL_DEV_ATT_MASK                       equ 0008h
UCTRL_PKT_DIS_POSN                       equ 0004h
UCTRL_PKT_DIS_POSITION                   equ 0004h
UCTRL_PKT_DIS_SIZE                       equ 0001h
UCTRL_PKT_DIS_LENGTH                     equ 0001h
UCTRL_PKT_DIS_MASK                       equ 0010h
UCTRL_SE0_POSN                           equ 0005h
UCTRL_SE0_POSITION                       equ 0005h
UCTRL_SE0_SIZE                           equ 0001h
UCTRL_SE0_LENGTH                         equ 0001h
UCTRL_SE0_MASK                           equ 0020h

// Register: UADDR
#define UADDR UADDR
UADDR                                    equ 0196h

// Register: USWSTAT
#define USWSTAT USWSTAT
USWSTAT                                  equ 0197h

// Register: UEP0
#define UEP0 UEP0
UEP0                                     equ 0198h
// bitfield definitions
UEP0_EP_STALL_POSN                       equ 0000h
UEP0_EP_STALL_POSITION                   equ 0000h
UEP0_EP_STALL_SIZE                       equ 0001h
UEP0_EP_STALL_LENGTH                     equ 0001h
UEP0_EP_STALL_MASK                       equ 0001h
UEP0_EP_IN_EN_POSN                       equ 0001h
UEP0_EP_IN_EN_POSITION                   equ 0001h
UEP0_EP_IN_EN_SIZE                       equ 0001h
UEP0_EP_IN_EN_LENGTH                     equ 0001h
UEP0_EP_IN_EN_MASK                       equ 0002h
UEP0_EP_OUT_EN_POSN                      equ 0002h
UEP0_EP_OUT_EN_POSITION                  equ 0002h
UEP0_EP_OUT_EN_SIZE                      equ 0001h
UEP0_EP_OUT_EN_LENGTH                    equ 0001h
UEP0_EP_OUT_EN_MASK                      equ 0004h
UEP0_EP_CTL_DIS_POSN                     equ 0003h
UEP0_EP_CTL_DIS_POSITION                 equ 0003h
UEP0_EP_CTL_DIS_SIZE                     equ 0001h
UEP0_EP_CTL_DIS_LENGTH                   equ 0001h
UEP0_EP_CTL_DIS_MASK                     equ 0008h

// Register: UEP1
#define UEP1 UEP1
UEP1                                     equ 0199h
// bitfield definitions
UEP1_EP_STALL_POSN                       equ 0000h
UEP1_EP_STALL_POSITION                   equ 0000h
UEP1_EP_STALL_SIZE                       equ 0001h
UEP1_EP_STALL_LENGTH                     equ 0001h
UEP1_EP_STALL_MASK                       equ 0001h
UEP1_EP_IN_EN_POSN                       equ 0001h
UEP1_EP_IN_EN_POSITION                   equ 0001h
UEP1_EP_IN_EN_SIZE                       equ 0001h
UEP1_EP_IN_EN_LENGTH                     equ 0001h
UEP1_EP_IN_EN_MASK                       equ 0002h
UEP1_EP_OUT_EN_POSN                      equ 0002h
UEP1_EP_OUT_EN_POSITION                  equ 0002h
UEP1_EP_OUT_EN_SIZE                      equ 0001h
UEP1_EP_OUT_EN_LENGTH                    equ 0001h
UEP1_EP_OUT_EN_MASK                      equ 0004h
UEP1_EP_CTL_DIS_POSN                     equ 0003h
UEP1_EP_CTL_DIS_POSITION                 equ 0003h
UEP1_EP_CTL_DIS_SIZE                     equ 0001h
UEP1_EP_CTL_DIS_LENGTH                   equ 0001h
UEP1_EP_CTL_DIS_MASK                     equ 0008h

// Register: UEP2
#define UEP2 UEP2
UEP2                                     equ 019Ah
// bitfield definitions
UEP2_EP_STALL_POSN                       equ 0000h
UEP2_EP_STALL_POSITION                   equ 0000h
UEP2_EP_STALL_SIZE                       equ 0001h
UEP2_EP_STALL_LENGTH                     equ 0001h
UEP2_EP_STALL_MASK                       equ 0001h
UEP2_EP_IN_EN_POSN                       equ 0001h
UEP2_EP_IN_EN_POSITION                   equ 0001h
UEP2_EP_IN_EN_SIZE                       equ 0001h
UEP2_EP_IN_EN_LENGTH                     equ 0001h
UEP2_EP_IN_EN_MASK                       equ 0002h
UEP2_EP_OUT_EN_POSN                      equ 0002h
UEP2_EP_OUT_EN_POSITION                  equ 0002h
UEP2_EP_OUT_EN_SIZE                      equ 0001h
UEP2_EP_OUT_EN_LENGTH                    equ 0001h
UEP2_EP_OUT_EN_MASK                      equ 0004h
UEP2_EP_CTL_DIS_POSN                     equ 0003h
UEP2_EP_CTL_DIS_POSITION                 equ 0003h
UEP2_EP_CTL_DIS_SIZE                     equ 0001h
UEP2_EP_CTL_DIS_LENGTH                   equ 0001h
UEP2_EP_CTL_DIS_MASK                     equ 0008h

// Register: BD0OST
#define BD0OST BD0OST
BD0OST                                   equ 01A0h
// bitfield definitions
BD0OST_PID0_BSTALL_POSN                  equ 0002h
BD0OST_PID0_BSTALL_POSITION              equ 0002h
BD0OST_PID0_BSTALL_SIZE                  equ 0001h
BD0OST_PID0_BSTALL_LENGTH                equ 0001h
BD0OST_PID0_BSTALL_MASK                  equ 0004h
BD0OST_PID1_DTS_POSN                     equ 0003h
BD0OST_PID1_DTS_POSITION                 equ 0003h
BD0OST_PID1_DTS_SIZE                     equ 0001h
BD0OST_PID1_DTS_LENGTH                   equ 0001h
BD0OST_PID1_DTS_MASK                     equ 0008h
BD0OST_PID2_POSN                         equ 0004h
BD0OST_PID2_POSITION                     equ 0004h
BD0OST_PID2_SIZE                         equ 0001h
BD0OST_PID2_LENGTH                       equ 0001h
BD0OST_PID2_MASK                         equ 0010h
BD0OST_PID3_POSN                         equ 0005h
BD0OST_PID3_POSITION                     equ 0005h
BD0OST_PID3_SIZE                         equ 0001h
BD0OST_PID3_LENGTH                       equ 0001h
BD0OST_PID3_MASK                         equ 0020h
BD0OST_DATA0_1_POSN                      equ 0006h
BD0OST_DATA0_1_POSITION                  equ 0006h
BD0OST_DATA0_1_SIZE                      equ 0001h
BD0OST_DATA0_1_LENGTH                    equ 0001h
BD0OST_DATA0_1_MASK                      equ 0040h
BD0OST_UOWN_POSN                         equ 0007h
BD0OST_UOWN_POSITION                     equ 0007h
BD0OST_UOWN_SIZE                         equ 0001h
BD0OST_UOWN_LENGTH                       equ 0001h
BD0OST_UOWN_MASK                         equ 0080h
BD0OST_PID0_POSN                         equ 0002h
BD0OST_PID0_POSITION                     equ 0002h
BD0OST_PID0_SIZE                         equ 0001h
BD0OST_PID0_LENGTH                       equ 0001h
BD0OST_PID0_MASK                         equ 0004h
BD0OST_PID1_POSN                         equ 0003h
BD0OST_PID1_POSITION                     equ 0003h
BD0OST_PID1_SIZE                         equ 0001h
BD0OST_PID1_LENGTH                       equ 0001h
BD0OST_PID1_MASK                         equ 0008h
BD0OST_DATA01_POSN                       equ 0006h
BD0OST_DATA01_POSITION                   equ 0006h
BD0OST_DATA01_SIZE                       equ 0001h
BD0OST_DATA01_LENGTH                     equ 0001h
BD0OST_DATA01_MASK                       equ 0040h
BD0OST_OWN_POSN                          equ 0007h
BD0OST_OWN_POSITION                      equ 0007h
BD0OST_OWN_SIZE                          equ 0001h
BD0OST_OWN_LENGTH                        equ 0001h
BD0OST_OWN_MASK                          equ 0080h
BD0OST_BSTALL_POSN                       equ 0002h
BD0OST_BSTALL_POSITION                   equ 0002h
BD0OST_BSTALL_SIZE                       equ 0001h
BD0OST_BSTALL_LENGTH                     equ 0001h
BD0OST_BSTALL_MASK                       equ 0004h
BD0OST_DTS_POSN                          equ 0003h
BD0OST_DTS_POSITION                      equ 0003h
BD0OST_DTS_SIZE                          equ 0001h
BD0OST_DTS_LENGTH                        equ 0001h
BD0OST_DTS_MASK                          equ 0008h

// Register: BD0OBC
#define BD0OBC BD0OBC
BD0OBC                                   equ 01A1h
// bitfield definitions
BD0OBC_BC_POSN                           equ 0000h
BD0OBC_BC_POSITION                       equ 0000h
BD0OBC_BC_SIZE                           equ 0004h
BD0OBC_BC_LENGTH                         equ 0004h
BD0OBC_BC_MASK                           equ 000Fh
BD0OBC_BC0_POSN                          equ 0000h
BD0OBC_BC0_POSITION                      equ 0000h
BD0OBC_BC0_SIZE                          equ 0001h
BD0OBC_BC0_LENGTH                        equ 0001h
BD0OBC_BC0_MASK                          equ 0001h
BD0OBC_BC1_POSN                          equ 0001h
BD0OBC_BC1_POSITION                      equ 0001h
BD0OBC_BC1_SIZE                          equ 0001h
BD0OBC_BC1_LENGTH                        equ 0001h
BD0OBC_BC1_MASK                          equ 0002h
BD0OBC_BC2_POSN                          equ 0002h
BD0OBC_BC2_POSITION                      equ 0002h
BD0OBC_BC2_SIZE                          equ 0001h
BD0OBC_BC2_LENGTH                        equ 0001h
BD0OBC_BC2_MASK                          equ 0004h
BD0OBC_BC3_POSN                          equ 0003h
BD0OBC_BC3_POSITION                      equ 0003h
BD0OBC_BC3_SIZE                          equ 0001h
BD0OBC_BC3_LENGTH                        equ 0001h
BD0OBC_BC3_MASK                          equ 0008h

// Register: BD0OAL
#define BD0OAL BD0OAL
BD0OAL                                   equ 01A2h

// Register: BD0IST
#define BD0IST BD0IST
BD0IST                                   equ 01A4h
// bitfield definitions
BD0IST_PID0_BSTALL_POSN                  equ 0002h
BD0IST_PID0_BSTALL_POSITION              equ 0002h
BD0IST_PID0_BSTALL_SIZE                  equ 0001h
BD0IST_PID0_BSTALL_LENGTH                equ 0001h
BD0IST_PID0_BSTALL_MASK                  equ 0004h
BD0IST_PID1_DTS_POSN                     equ 0003h
BD0IST_PID1_DTS_POSITION                 equ 0003h
BD0IST_PID1_DTS_SIZE                     equ 0001h
BD0IST_PID1_DTS_LENGTH                   equ 0001h
BD0IST_PID1_DTS_MASK                     equ 0008h
BD0IST_PID2_POSN                         equ 0004h
BD0IST_PID2_POSITION                     equ 0004h
BD0IST_PID2_SIZE                         equ 0001h
BD0IST_PID2_LENGTH                       equ 0001h
BD0IST_PID2_MASK                         equ 0010h
BD0IST_PID3_POSN                         equ 0005h
BD0IST_PID3_POSITION                     equ 0005h
BD0IST_PID3_SIZE                         equ 0001h
BD0IST_PID3_LENGTH                       equ 0001h
BD0IST_PID3_MASK                         equ 0020h
BD0IST_DATA0_1_POSN                      equ 0006h
BD0IST_DATA0_1_POSITION                  equ 0006h
BD0IST_DATA0_1_SIZE                      equ 0001h
BD0IST_DATA0_1_LENGTH                    equ 0001h
BD0IST_DATA0_1_MASK                      equ 0040h
BD0IST_UOWN_POSN                         equ 0007h
BD0IST_UOWN_POSITION                     equ 0007h
BD0IST_UOWN_SIZE                         equ 0001h
BD0IST_UOWN_LENGTH                       equ 0001h
BD0IST_UOWN_MASK                         equ 0080h
BD0IST_PID0_POSN                         equ 0002h
BD0IST_PID0_POSITION                     equ 0002h
BD0IST_PID0_SIZE                         equ 0001h
BD0IST_PID0_LENGTH                       equ 0001h
BD0IST_PID0_MASK                         equ 0004h
BD0IST_PID1_POSN                         equ 0003h
BD0IST_PID1_POSITION                     equ 0003h
BD0IST_PID1_SIZE                         equ 0001h
BD0IST_PID1_LENGTH                       equ 0001h
BD0IST_PID1_MASK                         equ 0008h
BD0IST_DATA01_POSN                       equ 0006h
BD0IST_DATA01_POSITION                   equ 0006h
BD0IST_DATA01_SIZE                       equ 0001h
BD0IST_DATA01_LENGTH                     equ 0001h
BD0IST_DATA01_MASK                       equ 0040h
BD0IST_OWN_POSN                          equ 0007h
BD0IST_OWN_POSITION                      equ 0007h
BD0IST_OWN_SIZE                          equ 0001h
BD0IST_OWN_LENGTH                        equ 0001h
BD0IST_OWN_MASK                          equ 0080h
BD0IST_BSTALL_POSN                       equ 0002h
BD0IST_BSTALL_POSITION                   equ 0002h
BD0IST_BSTALL_SIZE                       equ 0001h
BD0IST_BSTALL_LENGTH                     equ 0001h
BD0IST_BSTALL_MASK                       equ 0004h
BD0IST_DTS_POSN                          equ 0003h
BD0IST_DTS_POSITION                      equ 0003h
BD0IST_DTS_SIZE                          equ 0001h
BD0IST_DTS_LENGTH                        equ 0001h
BD0IST_DTS_MASK                          equ 0008h

// Register: BD0IBC
#define BD0IBC BD0IBC
BD0IBC                                   equ 01A5h
// bitfield definitions
BD0IBC_BC_POSN                           equ 0000h
BD0IBC_BC_POSITION                       equ 0000h
BD0IBC_BC_SIZE                           equ 0004h
BD0IBC_BC_LENGTH                         equ 0004h
BD0IBC_BC_MASK                           equ 000Fh
BD0IBC_BC0_POSN                          equ 0000h
BD0IBC_BC0_POSITION                      equ 0000h
BD0IBC_BC0_SIZE                          equ 0001h
BD0IBC_BC0_LENGTH                        equ 0001h
BD0IBC_BC0_MASK                          equ 0001h
BD0IBC_BC1_POSN                          equ 0001h
BD0IBC_BC1_POSITION                      equ 0001h
BD0IBC_BC1_SIZE                          equ 0001h
BD0IBC_BC1_LENGTH                        equ 0001h
BD0IBC_BC1_MASK                          equ 0002h
BD0IBC_BC2_POSN                          equ 0002h
BD0IBC_BC2_POSITION                      equ 0002h
BD0IBC_BC2_SIZE                          equ 0001h
BD0IBC_BC2_LENGTH                        equ 0001h
BD0IBC_BC2_MASK                          equ 0004h
BD0IBC_BC3_POSN                          equ 0003h
BD0IBC_BC3_POSITION                      equ 0003h
BD0IBC_BC3_SIZE                          equ 0001h
BD0IBC_BC3_LENGTH                        equ 0001h
BD0IBC_BC3_MASK                          equ 0008h

// Register: BD0IAL
#define BD0IAL BD0IAL
BD0IAL                                   equ 01A6h

// Register: BD1OST
#define BD1OST BD1OST
BD1OST                                   equ 01A8h
// bitfield definitions
BD1OST_PID0_BSTALL_POSN                  equ 0002h
BD1OST_PID0_BSTALL_POSITION              equ 0002h
BD1OST_PID0_BSTALL_SIZE                  equ 0001h
BD1OST_PID0_BSTALL_LENGTH                equ 0001h
BD1OST_PID0_BSTALL_MASK                  equ 0004h
BD1OST_PID1_DTS_POSN                     equ 0003h
BD1OST_PID1_DTS_POSITION                 equ 0003h
BD1OST_PID1_DTS_SIZE                     equ 0001h
BD1OST_PID1_DTS_LENGTH                   equ 0001h
BD1OST_PID1_DTS_MASK                     equ 0008h
BD1OST_PID2_POSN                         equ 0004h
BD1OST_PID2_POSITION                     equ 0004h
BD1OST_PID2_SIZE                         equ 0001h
BD1OST_PID2_LENGTH                       equ 0001h
BD1OST_PID2_MASK                         equ 0010h
BD1OST_PID3_POSN                         equ 0005h
BD1OST_PID3_POSITION                     equ 0005h
BD1OST_PID3_SIZE                         equ 0001h
BD1OST_PID3_LENGTH                       equ 0001h
BD1OST_PID3_MASK                         equ 0020h
BD1OST_DATA0_1_POSN                      equ 0006h
BD1OST_DATA0_1_POSITION                  equ 0006h
BD1OST_DATA0_1_SIZE                      equ 0001h
BD1OST_DATA0_1_LENGTH                    equ 0001h
BD1OST_DATA0_1_MASK                      equ 0040h
BD1OST_UOWN_POSN                         equ 0007h
BD1OST_UOWN_POSITION                     equ 0007h
BD1OST_UOWN_SIZE                         equ 0001h
BD1OST_UOWN_LENGTH                       equ 0001h
BD1OST_UOWN_MASK                         equ 0080h
BD1OST_PID0_POSN                         equ 0002h
BD1OST_PID0_POSITION                     equ 0002h
BD1OST_PID0_SIZE                         equ 0001h
BD1OST_PID0_LENGTH                       equ 0001h
BD1OST_PID0_MASK                         equ 0004h
BD1OST_PID1_POSN                         equ 0003h
BD1OST_PID1_POSITION                     equ 0003h
BD1OST_PID1_SIZE                         equ 0001h
BD1OST_PID1_LENGTH                       equ 0001h
BD1OST_PID1_MASK                         equ 0008h
BD1OST_DATA01_POSN                       equ 0006h
BD1OST_DATA01_POSITION                   equ 0006h
BD1OST_DATA01_SIZE                       equ 0001h
BD1OST_DATA01_LENGTH                     equ 0001h
BD1OST_DATA01_MASK                       equ 0040h
BD1OST_OWN_POSN                          equ 0007h
BD1OST_OWN_POSITION                      equ 0007h
BD1OST_OWN_SIZE                          equ 0001h
BD1OST_OWN_LENGTH                        equ 0001h
BD1OST_OWN_MASK                          equ 0080h
BD1OST_BSTALL_POSN                       equ 0002h
BD1OST_BSTALL_POSITION                   equ 0002h
BD1OST_BSTALL_SIZE                       equ 0001h
BD1OST_BSTALL_LENGTH                     equ 0001h
BD1OST_BSTALL_MASK                       equ 0004h
BD1OST_DTS_POSN                          equ 0003h
BD1OST_DTS_POSITION                      equ 0003h
BD1OST_DTS_SIZE                          equ 0001h
BD1OST_DTS_LENGTH                        equ 0001h
BD1OST_DTS_MASK                          equ 0008h

// Register: BD1OBC
#define BD1OBC BD1OBC
BD1OBC                                   equ 01A9h
// bitfield definitions
BD1OBC_BC_POSN                           equ 0000h
BD1OBC_BC_POSITION                       equ 0000h
BD1OBC_BC_SIZE                           equ 0004h
BD1OBC_BC_LENGTH                         equ 0004h
BD1OBC_BC_MASK                           equ 000Fh
BD1OBC_BC0_POSN                          equ 0000h
BD1OBC_BC0_POSITION                      equ 0000h
BD1OBC_BC0_SIZE                          equ 0001h
BD1OBC_BC0_LENGTH                        equ 0001h
BD1OBC_BC0_MASK                          equ 0001h
BD1OBC_BC1_POSN                          equ 0001h
BD1OBC_BC1_POSITION                      equ 0001h
BD1OBC_BC1_SIZE                          equ 0001h
BD1OBC_BC1_LENGTH                        equ 0001h
BD1OBC_BC1_MASK                          equ 0002h
BD1OBC_BC2_POSN                          equ 0002h
BD1OBC_BC2_POSITION                      equ 0002h
BD1OBC_BC2_SIZE                          equ 0001h
BD1OBC_BC2_LENGTH                        equ 0001h
BD1OBC_BC2_MASK                          equ 0004h
BD1OBC_BC3_POSN                          equ 0003h
BD1OBC_BC3_POSITION                      equ 0003h
BD1OBC_BC3_SIZE                          equ 0001h
BD1OBC_BC3_LENGTH                        equ 0001h
BD1OBC_BC3_MASK                          equ 0008h

// Register: BD1OAL
#define BD1OAL BD1OAL
BD1OAL                                   equ 01AAh

// Register: BD1IST
#define BD1IST BD1IST
BD1IST                                   equ 01ACh
// bitfield definitions
BD1IST_PID0_BSTALL_POSN                  equ 0002h
BD1IST_PID0_BSTALL_POSITION              equ 0002h
BD1IST_PID0_BSTALL_SIZE                  equ 0001h
BD1IST_PID0_BSTALL_LENGTH                equ 0001h
BD1IST_PID0_BSTALL_MASK                  equ 0004h
BD1IST_PID1_DTS_POSN                     equ 0003h
BD1IST_PID1_DTS_POSITION                 equ 0003h
BD1IST_PID1_DTS_SIZE                     equ 0001h
BD1IST_PID1_DTS_LENGTH                   equ 0001h
BD1IST_PID1_DTS_MASK                     equ 0008h
BD1IST_PID2_POSN                         equ 0004h
BD1IST_PID2_POSITION                     equ 0004h
BD1IST_PID2_SIZE                         equ 0001h
BD1IST_PID2_LENGTH                       equ 0001h
BD1IST_PID2_MASK                         equ 0010h
BD1IST_PID3_POSN                         equ 0005h
BD1IST_PID3_POSITION                     equ 0005h
BD1IST_PID3_SIZE                         equ 0001h
BD1IST_PID3_LENGTH                       equ 0001h
BD1IST_PID3_MASK                         equ 0020h
BD1IST_DATA0_1_POSN                      equ 0006h
BD1IST_DATA0_1_POSITION                  equ 0006h
BD1IST_DATA0_1_SIZE                      equ 0001h
BD1IST_DATA0_1_LENGTH                    equ 0001h
BD1IST_DATA0_1_MASK                      equ 0040h
BD1IST_UOWN_POSN                         equ 0007h
BD1IST_UOWN_POSITION                     equ 0007h
BD1IST_UOWN_SIZE                         equ 0001h
BD1IST_UOWN_LENGTH                       equ 0001h
BD1IST_UOWN_MASK                         equ 0080h
BD1IST_PID0_POSN                         equ 0002h
BD1IST_PID0_POSITION                     equ 0002h
BD1IST_PID0_SIZE                         equ 0001h
BD1IST_PID0_LENGTH                       equ 0001h
BD1IST_PID0_MASK                         equ 0004h
BD1IST_PID1_POSN                         equ 0003h
BD1IST_PID1_POSITION                     equ 0003h
BD1IST_PID1_SIZE                         equ 0001h
BD1IST_PID1_LENGTH                       equ 0001h
BD1IST_PID1_MASK                         equ 0008h
BD1IST_DATA01_POSN                       equ 0006h
BD1IST_DATA01_POSITION                   equ 0006h
BD1IST_DATA01_SIZE                       equ 0001h
BD1IST_DATA01_LENGTH                     equ 0001h
BD1IST_DATA01_MASK                       equ 0040h
BD1IST_OWN_POSN                          equ 0007h
BD1IST_OWN_POSITION                      equ 0007h
BD1IST_OWN_SIZE                          equ 0001h
BD1IST_OWN_LENGTH                        equ 0001h
BD1IST_OWN_MASK                          equ 0080h
BD1IST_BSTALL_POSN                       equ 0002h
BD1IST_BSTALL_POSITION                   equ 0002h
BD1IST_BSTALL_SIZE                       equ 0001h
BD1IST_BSTALL_LENGTH                     equ 0001h
BD1IST_BSTALL_MASK                       equ 0004h
BD1IST_DTS_POSN                          equ 0003h
BD1IST_DTS_POSITION                      equ 0003h
BD1IST_DTS_SIZE                          equ 0001h
BD1IST_DTS_LENGTH                        equ 0001h
BD1IST_DTS_MASK                          equ 0008h

// Register: BD1IBC
#define BD1IBC BD1IBC
BD1IBC                                   equ 01ADh
// bitfield definitions
BD1IBC_BC_POSN                           equ 0000h
BD1IBC_BC_POSITION                       equ 0000h
BD1IBC_BC_SIZE                           equ 0004h
BD1IBC_BC_LENGTH                         equ 0004h
BD1IBC_BC_MASK                           equ 000Fh
BD1IBC_BC0_POSN                          equ 0000h
BD1IBC_BC0_POSITION                      equ 0000h
BD1IBC_BC0_SIZE                          equ 0001h
BD1IBC_BC0_LENGTH                        equ 0001h
BD1IBC_BC0_MASK                          equ 0001h
BD1IBC_BC1_POSN                          equ 0001h
BD1IBC_BC1_POSITION                      equ 0001h
BD1IBC_BC1_SIZE                          equ 0001h
BD1IBC_BC1_LENGTH                        equ 0001h
BD1IBC_BC1_MASK                          equ 0002h
BD1IBC_BC2_POSN                          equ 0002h
BD1IBC_BC2_POSITION                      equ 0002h
BD1IBC_BC2_SIZE                          equ 0001h
BD1IBC_BC2_LENGTH                        equ 0001h
BD1IBC_BC2_MASK                          equ 0004h
BD1IBC_BC3_POSN                          equ 0003h
BD1IBC_BC3_POSITION                      equ 0003h
BD1IBC_BC3_SIZE                          equ 0001h
BD1IBC_BC3_LENGTH                        equ 0001h
BD1IBC_BC3_MASK                          equ 0008h

// Register: BD1IAL
#define BD1IAL BD1IAL
BD1IAL                                   equ 01AEh

// Register: BD2OST
#define BD2OST BD2OST
BD2OST                                   equ 01B0h
// bitfield definitions
BD2OST_PID0_BSTALL_POSN                  equ 0002h
BD2OST_PID0_BSTALL_POSITION              equ 0002h
BD2OST_PID0_BSTALL_SIZE                  equ 0001h
BD2OST_PID0_BSTALL_LENGTH                equ 0001h
BD2OST_PID0_BSTALL_MASK                  equ 0004h
BD2OST_PID1_DTS_POSN                     equ 0003h
BD2OST_PID1_DTS_POSITION                 equ 0003h
BD2OST_PID1_DTS_SIZE                     equ 0001h
BD2OST_PID1_DTS_LENGTH                   equ 0001h
BD2OST_PID1_DTS_MASK                     equ 0008h
BD2OST_PID2_POSN                         equ 0004h
BD2OST_PID2_POSITION                     equ 0004h
BD2OST_PID2_SIZE                         equ 0001h
BD2OST_PID2_LENGTH                       equ 0001h
BD2OST_PID2_MASK                         equ 0010h
BD2OST_PID3_POSN                         equ 0005h
BD2OST_PID3_POSITION                     equ 0005h
BD2OST_PID3_SIZE                         equ 0001h
BD2OST_PID3_LENGTH                       equ 0001h
BD2OST_PID3_MASK                         equ 0020h
BD2OST_DATA0_1_POSN                      equ 0006h
BD2OST_DATA0_1_POSITION                  equ 0006h
BD2OST_DATA0_1_SIZE                      equ 0001h
BD2OST_DATA0_1_LENGTH                    equ 0001h
BD2OST_DATA0_1_MASK                      equ 0040h
BD2OST_UOWN_POSN                         equ 0007h
BD2OST_UOWN_POSITION                     equ 0007h
BD2OST_UOWN_SIZE                         equ 0001h
BD2OST_UOWN_LENGTH                       equ 0001h
BD2OST_UOWN_MASK                         equ 0080h
BD2OST_PID0_POSN                         equ 0002h
BD2OST_PID0_POSITION                     equ 0002h
BD2OST_PID0_SIZE                         equ 0001h
BD2OST_PID0_LENGTH                       equ 0001h
BD2OST_PID0_MASK                         equ 0004h
BD2OST_PID1_POSN                         equ 0003h
BD2OST_PID1_POSITION                     equ 0003h
BD2OST_PID1_SIZE                         equ 0001h
BD2OST_PID1_LENGTH                       equ 0001h
BD2OST_PID1_MASK                         equ 0008h
BD2OST_DATA01_POSN                       equ 0006h
BD2OST_DATA01_POSITION                   equ 0006h
BD2OST_DATA01_SIZE                       equ 0001h
BD2OST_DATA01_LENGTH                     equ 0001h
BD2OST_DATA01_MASK                       equ 0040h
BD2OST_OWN_POSN                          equ 0007h
BD2OST_OWN_POSITION                      equ 0007h
BD2OST_OWN_SIZE                          equ 0001h
BD2OST_OWN_LENGTH                        equ 0001h
BD2OST_OWN_MASK                          equ 0080h
BD2OST_BSTALL_POSN                       equ 0002h
BD2OST_BSTALL_POSITION                   equ 0002h
BD2OST_BSTALL_SIZE                       equ 0001h
BD2OST_BSTALL_LENGTH                     equ 0001h
BD2OST_BSTALL_MASK                       equ 0004h
BD2OST_DTS_POSN                          equ 0003h
BD2OST_DTS_POSITION                      equ 0003h
BD2OST_DTS_SIZE                          equ 0001h
BD2OST_DTS_LENGTH                        equ 0001h
BD2OST_DTS_MASK                          equ 0008h

// Register: BD2OBC
#define BD2OBC BD2OBC
BD2OBC                                   equ 01B1h
// bitfield definitions
BD2OBC_BC_POSN                           equ 0000h
BD2OBC_BC_POSITION                       equ 0000h
BD2OBC_BC_SIZE                           equ 0004h
BD2OBC_BC_LENGTH                         equ 0004h
BD2OBC_BC_MASK                           equ 000Fh
BD2OBC_BC0_POSN                          equ 0000h
BD2OBC_BC0_POSITION                      equ 0000h
BD2OBC_BC0_SIZE                          equ 0001h
BD2OBC_BC0_LENGTH                        equ 0001h
BD2OBC_BC0_MASK                          equ 0001h
BD2OBC_BC1_POSN                          equ 0001h
BD2OBC_BC1_POSITION                      equ 0001h
BD2OBC_BC1_SIZE                          equ 0001h
BD2OBC_BC1_LENGTH                        equ 0001h
BD2OBC_BC1_MASK                          equ 0002h
BD2OBC_BC2_POSN                          equ 0002h
BD2OBC_BC2_POSITION                      equ 0002h
BD2OBC_BC2_SIZE                          equ 0001h
BD2OBC_BC2_LENGTH                        equ 0001h
BD2OBC_BC2_MASK                          equ 0004h
BD2OBC_BC3_POSN                          equ 0003h
BD2OBC_BC3_POSITION                      equ 0003h
BD2OBC_BC3_SIZE                          equ 0001h
BD2OBC_BC3_LENGTH                        equ 0001h
BD2OBC_BC3_MASK                          equ 0008h

// Register: BD2OAL
#define BD2OAL BD2OAL
BD2OAL                                   equ 01B2h

// Register: BD2IST
#define BD2IST BD2IST
BD2IST                                   equ 01B4h
// bitfield definitions
BD2IST_PID0_BSTALL_POSN                  equ 0002h
BD2IST_PID0_BSTALL_POSITION              equ 0002h
BD2IST_PID0_BSTALL_SIZE                  equ 0001h
BD2IST_PID0_BSTALL_LENGTH                equ 0001h
BD2IST_PID0_BSTALL_MASK                  equ 0004h
BD2IST_PID1_DTS_POSN                     equ 0003h
BD2IST_PID1_DTS_POSITION                 equ 0003h
BD2IST_PID1_DTS_SIZE                     equ 0001h
BD2IST_PID1_DTS_LENGTH                   equ 0001h
BD2IST_PID1_DTS_MASK                     equ 0008h
BD2IST_PID2_POSN                         equ 0004h
BD2IST_PID2_POSITION                     equ 0004h
BD2IST_PID2_SIZE                         equ 0001h
BD2IST_PID2_LENGTH                       equ 0001h
BD2IST_PID2_MASK                         equ 0010h
BD2IST_PID3_POSN                         equ 0005h
BD2IST_PID3_POSITION                     equ 0005h
BD2IST_PID3_SIZE                         equ 0001h
BD2IST_PID3_LENGTH                       equ 0001h
BD2IST_PID3_MASK                         equ 0020h
BD2IST_DATA0_1_POSN                      equ 0006h
BD2IST_DATA0_1_POSITION                  equ 0006h
BD2IST_DATA0_1_SIZE                      equ 0001h
BD2IST_DATA0_1_LENGTH                    equ 0001h
BD2IST_DATA0_1_MASK                      equ 0040h
BD2IST_UOWN_POSN                         equ 0007h
BD2IST_UOWN_POSITION                     equ 0007h
BD2IST_UOWN_SIZE                         equ 0001h
BD2IST_UOWN_LENGTH                       equ 0001h
BD2IST_UOWN_MASK                         equ 0080h
BD2IST_PID0_POSN                         equ 0002h
BD2IST_PID0_POSITION                     equ 0002h
BD2IST_PID0_SIZE                         equ 0001h
BD2IST_PID0_LENGTH                       equ 0001h
BD2IST_PID0_MASK                         equ 0004h
BD2IST_PID1_POSN                         equ 0003h
BD2IST_PID1_POSITION                     equ 0003h
BD2IST_PID1_SIZE                         equ 0001h
BD2IST_PID1_LENGTH                       equ 0001h
BD2IST_PID1_MASK                         equ 0008h
BD2IST_DATA01_POSN                       equ 0006h
BD2IST_DATA01_POSITION                   equ 0006h
BD2IST_DATA01_SIZE                       equ 0001h
BD2IST_DATA01_LENGTH                     equ 0001h
BD2IST_DATA01_MASK                       equ 0040h
BD2IST_OWN_POSN                          equ 0007h
BD2IST_OWN_POSITION                      equ 0007h
BD2IST_OWN_SIZE                          equ 0001h
BD2IST_OWN_LENGTH                        equ 0001h
BD2IST_OWN_MASK                          equ 0080h
BD2IST_BSTALL_POSN                       equ 0002h
BD2IST_BSTALL_POSITION                   equ 0002h
BD2IST_BSTALL_SIZE                       equ 0001h
BD2IST_BSTALL_LENGTH                     equ 0001h
BD2IST_BSTALL_MASK                       equ 0004h
BD2IST_DTS_POSN                          equ 0003h
BD2IST_DTS_POSITION                      equ 0003h
BD2IST_DTS_SIZE                          equ 0001h
BD2IST_DTS_LENGTH                        equ 0001h
BD2IST_DTS_MASK                          equ 0008h

// Register: BD2IBC
#define BD2IBC BD2IBC
BD2IBC                                   equ 01B5h
// bitfield definitions
BD2IBC_BC_POSN                           equ 0000h
BD2IBC_BC_POSITION                       equ 0000h
BD2IBC_BC_SIZE                           equ 0004h
BD2IBC_BC_LENGTH                         equ 0004h
BD2IBC_BC_MASK                           equ 000Fh
BD2IBC_BC0_POSN                          equ 0000h
BD2IBC_BC0_POSITION                      equ 0000h
BD2IBC_BC0_SIZE                          equ 0001h
BD2IBC_BC0_LENGTH                        equ 0001h
BD2IBC_BC0_MASK                          equ 0001h
BD2IBC_BC1_POSN                          equ 0001h
BD2IBC_BC1_POSITION                      equ 0001h
BD2IBC_BC1_SIZE                          equ 0001h
BD2IBC_BC1_LENGTH                        equ 0001h
BD2IBC_BC1_MASK                          equ 0002h
BD2IBC_BC2_POSN                          equ 0002h
BD2IBC_BC2_POSITION                      equ 0002h
BD2IBC_BC2_SIZE                          equ 0001h
BD2IBC_BC2_LENGTH                        equ 0001h
BD2IBC_BC2_MASK                          equ 0004h
BD2IBC_BC3_POSN                          equ 0003h
BD2IBC_BC3_POSITION                      equ 0003h
BD2IBC_BC3_SIZE                          equ 0001h
BD2IBC_BC3_LENGTH                        equ 0001h
BD2IBC_BC3_MASK                          equ 0008h

// Register: BD2IAL
#define BD2IAL BD2IAL
BD2IAL                                   equ 01B6h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define ADCS0                            BANKMASK(ADCON0), 6
#define ADCS1                            BANKMASK(ADCON0), 7
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define BRGH                             BANKMASK(TXSTA), 2
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CCP2IE                           BANKMASK(PIE2), 0
#define CCP2IF                           BANKMASK(PIR2), 0
#define CCP2M0                           BANKMASK(CCP2CON), 0
#define CCP2M1                           BANKMASK(CCP2CON), 1
#define CCP2M2                           BANKMASK(CCP2CON), 2
#define CCP2M3                           BANKMASK(CCP2CON), 3
#define CHS0                             BANKMASK(ADCON0), 3
#define CHS1                             BANKMASK(ADCON0), 4
#define CHS2                             BANKMASK(ADCON0), 5
#define CREN                             BANKMASK(RCSTA), 4
#define CSRC                             BANKMASK(TXSTA), 7
#define DC                               BANKMASK(STATUS), 1
#define DC1B0                            BANKMASK(CCP1CON), 4
#define DC1B1                            BANKMASK(CCP1CON), 5
#define DC2B0                            BANKMASK(CCP2CON), 4
#define DC2B1                            BANKMASK(CCP2CON), 5
#define DEV_ATT                          BANKMASK(UCTRL), 3
#define ENDP0                            BANKMASK(USTAT), 3
#define ENDP1                            BANKMASK(USTAT), 4
#define FERR                             BANKMASK(RCSTA), 2
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 2
#define GO_DONE                          BANKMASK(ADCON0), 2
#define GO_nDONE                         BANKMASK(ADCON0), 2
#define IBF                              BANKMASK(TRISE), 7
#define IBOV                             BANKMASK(TRISE), 5
#define IN                               BANKMASK(USTAT), 2
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define OBF                              BANKMASK(TRISE), 6
#define OERR                             BANKMASK(RCSTA), 1
#define PCFG0                            BANKMASK(ADCON1), 0
#define PCFG1                            BANKMASK(ADCON1), 1
#define PCFG2                            BANKMASK(ADCON1), 2
#define PEIE                             BANKMASK(INTCON), 6
#define PKT_DIS                          BANKMASK(UCTRL), 4
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PSPIE                            BANKMASK(PIE1), 7
#define PSPIF                            BANKMASK(PIR1), 7
#define PSPMODE                          BANKMASK(TRISE), 4
#define RA0                              BANKMASK(PORTA), 0
#define RA1                              BANKMASK(PORTA), 1
#define RA2                              BANKMASK(PORTA), 2
#define RA3                              BANKMASK(PORTA), 3
#define RA4                              BANKMASK(PORTA), 4
#define RA5                              BANKMASK(PORTA), 5
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
#define RC6                              BANKMASK(PORTC), 6
#define RC7                              BANKMASK(PORTC), 7
#define RC8_9                            BANKMASK(RCSTA), 6
#define RC9                              BANKMASK(RCSTA), 6
#define RCD8                             BANKMASK(RCSTA), 0
#define RCIE                             BANKMASK(PIE1), 5
#define RCIF                             BANKMASK(PIR1), 5
#define RD0                              BANKMASK(PORTD), 0
#define RD1                              BANKMASK(PORTD), 1
#define RD2                              BANKMASK(PORTD), 2
#define RD3                              BANKMASK(PORTD), 3
#define RD4                              BANKMASK(PORTD), 4
#define RD5                              BANKMASK(PORTD), 5
#define RD6                              BANKMASK(PORTD), 6
#define RD7                              BANKMASK(PORTD), 7
#define RE0                              BANKMASK(PORTE), 0
#define RE1                              BANKMASK(PORTE), 1
#define RE2                              BANKMASK(PORTE), 2
#define RESUME                           BANKMASK(UCTRL), 2
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define SE0                              BANKMASK(UCTRL), 5
#define SPEN                             BANKMASK(RCSTA), 7
#define SREN                             BANKMASK(RCSTA), 5
#define SUSPND                           BANKMASK(UCTRL), 1
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1INSYNC                         BANKMASK(T1CON), 2
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define TMR0IE                           BANKMASK(INTCON), 5
#define TMR0IF                           BANKMASK(INTCON), 2
#define TMR1CS                           BANKMASK(T1CON), 1
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
#define TRISC6                           BANKMASK(TRISC), 6
#define TRISC7                           BANKMASK(TRISC), 7
#define TRISD0                           BANKMASK(TRISD), 0
#define TRISD1                           BANKMASK(TRISD), 1
#define TRISD2                           BANKMASK(TRISD), 2
#define TRISD3                           BANKMASK(TRISD), 3
#define TRISD4                           BANKMASK(TRISD), 4
#define TRISD5                           BANKMASK(TRISD), 5
#define TRISD6                           BANKMASK(TRISD), 6
#define TRISD7                           BANKMASK(TRISD), 7
#define TRISE0                           BANKMASK(TRISE), 0
#define TRISE1                           BANKMASK(TRISE), 1
#define TRISE2                           BANKMASK(TRISE), 2
#define TRMT                             BANKMASK(TXSTA), 1
#define TX8_9                            BANKMASK(TXSTA), 6
#define TX9                              BANKMASK(TXSTA), 6
#define TX9D                             BANKMASK(TXSTA), 0
#define TXD8                             BANKMASK(TXSTA), 0
#define TXEN                             BANKMASK(TXSTA), 5
#define TXIE                             BANKMASK(PIE1), 4
#define TXIF                             BANKMASK(PIR1), 4
#define USBIE                            BANKMASK(PIE1), 3
#define USBIF                            BANKMASK(PIR1), 3
#define ZERO                             BANKMASK(STATUS), 2
#define nBO                              BANKMASK(PCON), 0
#define nBOR                             BANKMASK(PCON), 0
#define nDONE                            BANKMASK(ADCON0), 2
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRBPU                            BANKMASK(OPTION_REG), 7
#define nRC8                             BANKMASK(RCSTA), 6
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nTO                              BANKMASK(STATUS), 4
#define nTX8                             BANKMASK(TXSTA), 6

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

#endif // _PIC16C765_INC_
