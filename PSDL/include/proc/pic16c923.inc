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

#ifndef _PIC16C923_INC_
#define _PIC16C923_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16C923
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
PIR1_LCDIF_POSN                          equ 0007h
PIR1_LCDIF_POSITION                      equ 0007h
PIR1_LCDIF_SIZE                          equ 0001h
PIR1_LCDIF_LENGTH                        equ 0001h
PIR1_LCDIF_MASK                          equ 0080h

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
PIE1_SSPIE_POSN                          equ 0003h
PIE1_SSPIE_POSITION                      equ 0003h
PIE1_SSPIE_SIZE                          equ 0001h
PIE1_SSPIE_LENGTH                        equ 0001h
PIE1_SSPIE_MASK                          equ 0008h
PIE1_LCDIE_POSN                          equ 0007h
PIE1_LCDIE_POSITION                      equ 0007h
PIE1_LCDIE_SIZE                          equ 0001h
PIE1_LCDIE_LENGTH                        equ 0001h
PIE1_LCDIE_MASK                          equ 0080h

// Register: PCON
#define PCON PCON
PCON                                     equ 008Eh
// bitfield definitions
PCON_nPOR_POSN                           equ 0001h
PCON_nPOR_POSITION                       equ 0001h
PCON_nPOR_SIZE                           equ 0001h
PCON_nPOR_LENGTH                         equ 0001h
PCON_nPOR_MASK                           equ 0002h

// Register: PR2
#define PR2 PR2
PR2                                      equ 0092h

// Register: SSPADD
#define SSPADD SSPADD
SSPADD                                   equ 0093h

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

// Register: PORTF
#define PORTF PORTF
PORTF                                    equ 0107h
// bitfield definitions
PORTF_RF0_POSN                           equ 0000h
PORTF_RF0_POSITION                       equ 0000h
PORTF_RF0_SIZE                           equ 0001h
PORTF_RF0_LENGTH                         equ 0001h
PORTF_RF0_MASK                           equ 0001h
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

// Register: PORTG
#define PORTG PORTG
PORTG                                    equ 0108h
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

// Register: LCDSE
#define LCDSE LCDSE
LCDSE                                    equ 010Dh
// bitfield definitions
LCDSE_SE0_POSN                           equ 0000h
LCDSE_SE0_POSITION                       equ 0000h
LCDSE_SE0_SIZE                           equ 0001h
LCDSE_SE0_LENGTH                         equ 0001h
LCDSE_SE0_MASK                           equ 0001h
LCDSE_SE5_POSN                           equ 0001h
LCDSE_SE5_POSITION                       equ 0001h
LCDSE_SE5_SIZE                           equ 0001h
LCDSE_SE5_LENGTH                         equ 0001h
LCDSE_SE5_MASK                           equ 0002h
LCDSE_SE9_POSN                           equ 0002h
LCDSE_SE9_POSITION                       equ 0002h
LCDSE_SE9_SIZE                           equ 0001h
LCDSE_SE9_LENGTH                         equ 0001h
LCDSE_SE9_MASK                           equ 0004h
LCDSE_SE12_POSN                          equ 0003h
LCDSE_SE12_POSITION                      equ 0003h
LCDSE_SE12_SIZE                          equ 0001h
LCDSE_SE12_LENGTH                        equ 0001h
LCDSE_SE12_MASK                          equ 0008h
LCDSE_SE16_POSN                          equ 0004h
LCDSE_SE16_POSITION                      equ 0004h
LCDSE_SE16_SIZE                          equ 0001h
LCDSE_SE16_LENGTH                        equ 0001h
LCDSE_SE16_MASK                          equ 0010h
LCDSE_SE20_POSN                          equ 0005h
LCDSE_SE20_POSITION                      equ 0005h
LCDSE_SE20_SIZE                          equ 0001h
LCDSE_SE20_LENGTH                        equ 0001h
LCDSE_SE20_MASK                          equ 0020h
LCDSE_SE27_POSN                          equ 0006h
LCDSE_SE27_POSITION                      equ 0006h
LCDSE_SE27_SIZE                          equ 0001h
LCDSE_SE27_LENGTH                        equ 0001h
LCDSE_SE27_MASK                          equ 0040h
LCDSE_SE29_POSN                          equ 0007h
LCDSE_SE29_POSITION                      equ 0007h
LCDSE_SE29_SIZE                          equ 0001h
LCDSE_SE29_LENGTH                        equ 0001h
LCDSE_SE29_MASK                          equ 0080h

// Register: LCDPS
#define LCDPS LCDPS
LCDPS                                    equ 010Eh
// bitfield definitions
LCDPS_LP_POSN                            equ 0000h
LCDPS_LP_POSITION                        equ 0000h
LCDPS_LP_SIZE                            equ 0004h
LCDPS_LP_LENGTH                          equ 0004h
LCDPS_LP_MASK                            equ 000Fh
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

// Register: LCDCON
#define LCDCON LCDCON
LCDCON                                   equ 010Fh
// bitfield definitions
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
LCDCON_VGEN_POSN                         equ 0004h
LCDCON_VGEN_POSITION                     equ 0004h
LCDCON_VGEN_SIZE                         equ 0001h
LCDCON_VGEN_LENGTH                       equ 0001h
LCDCON_VGEN_MASK                         equ 0010h
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

// Register: LCDD00
#define LCDD00 LCDD00
LCDD00                                   equ 0110h
// bitfield definitions
LCDD00_SEG00_POSN                        equ 0000h
LCDD00_SEG00_POSITION                    equ 0000h
LCDD00_SEG00_SIZE                        equ 0001h
LCDD00_SEG00_LENGTH                      equ 0001h
LCDD00_SEG00_MASK                        equ 0001h
LCDD00_SEG01_POSN                        equ 0001h
LCDD00_SEG01_POSITION                    equ 0001h
LCDD00_SEG01_SIZE                        equ 0001h
LCDD00_SEG01_LENGTH                      equ 0001h
LCDD00_SEG01_MASK                        equ 0002h
LCDD00_SEG02_POSN                        equ 0002h
LCDD00_SEG02_POSITION                    equ 0002h
LCDD00_SEG02_SIZE                        equ 0001h
LCDD00_SEG02_LENGTH                      equ 0001h
LCDD00_SEG02_MASK                        equ 0004h
LCDD00_SEG03_POSN                        equ 0003h
LCDD00_SEG03_POSITION                    equ 0003h
LCDD00_SEG03_SIZE                        equ 0001h
LCDD00_SEG03_LENGTH                      equ 0001h
LCDD00_SEG03_MASK                        equ 0008h
LCDD00_SEG04_POSN                        equ 0004h
LCDD00_SEG04_POSITION                    equ 0004h
LCDD00_SEG04_SIZE                        equ 0001h
LCDD00_SEG04_LENGTH                      equ 0001h
LCDD00_SEG04_MASK                        equ 0010h
LCDD00_SEG05_POSN                        equ 0005h
LCDD00_SEG05_POSITION                    equ 0005h
LCDD00_SEG05_SIZE                        equ 0001h
LCDD00_SEG05_LENGTH                      equ 0001h
LCDD00_SEG05_MASK                        equ 0020h
LCDD00_SEG06_POSN                        equ 0006h
LCDD00_SEG06_POSITION                    equ 0006h
LCDD00_SEG06_SIZE                        equ 0001h
LCDD00_SEG06_LENGTH                      equ 0001h
LCDD00_SEG06_MASK                        equ 0040h
LCDD00_SEG07_POSN                        equ 0007h
LCDD00_SEG07_POSITION                    equ 0007h
LCDD00_SEG07_SIZE                        equ 0001h
LCDD00_SEG07_LENGTH                      equ 0001h
LCDD00_SEG07_MASK                        equ 0080h

// Register: LCDD01
#define LCDD01 LCDD01
LCDD01                                   equ 0111h
// bitfield definitions
LCDD01_SEG08_POSN                        equ 0000h
LCDD01_SEG08_POSITION                    equ 0000h
LCDD01_SEG08_SIZE                        equ 0001h
LCDD01_SEG08_LENGTH                      equ 0001h
LCDD01_SEG08_MASK                        equ 0001h
LCDD01_SEG09_POSN                        equ 0001h
LCDD01_SEG09_POSITION                    equ 0001h
LCDD01_SEG09_SIZE                        equ 0001h
LCDD01_SEG09_LENGTH                      equ 0001h
LCDD01_SEG09_MASK                        equ 0002h
LCDD01_SEG10_POSN                        equ 0002h
LCDD01_SEG10_POSITION                    equ 0002h
LCDD01_SEG10_SIZE                        equ 0001h
LCDD01_SEG10_LENGTH                      equ 0001h
LCDD01_SEG10_MASK                        equ 0004h
LCDD01_SEG11_POSN                        equ 0003h
LCDD01_SEG11_POSITION                    equ 0003h
LCDD01_SEG11_SIZE                        equ 0001h
LCDD01_SEG11_LENGTH                      equ 0001h
LCDD01_SEG11_MASK                        equ 0008h
LCDD01_SEG12_POSN                        equ 0004h
LCDD01_SEG12_POSITION                    equ 0004h
LCDD01_SEG12_SIZE                        equ 0001h
LCDD01_SEG12_LENGTH                      equ 0001h
LCDD01_SEG12_MASK                        equ 0010h
LCDD01_SEG13_POSN                        equ 0005h
LCDD01_SEG13_POSITION                    equ 0005h
LCDD01_SEG13_SIZE                        equ 0001h
LCDD01_SEG13_LENGTH                      equ 0001h
LCDD01_SEG13_MASK                        equ 0020h
LCDD01_SEG14_POSN                        equ 0006h
LCDD01_SEG14_POSITION                    equ 0006h
LCDD01_SEG14_SIZE                        equ 0001h
LCDD01_SEG14_LENGTH                      equ 0001h
LCDD01_SEG14_MASK                        equ 0040h
LCDD01_SEG15_POSN                        equ 0007h
LCDD01_SEG15_POSITION                    equ 0007h
LCDD01_SEG15_SIZE                        equ 0001h
LCDD01_SEG15_LENGTH                      equ 0001h
LCDD01_SEG15_MASK                        equ 0080h

// Register: LCDD02
#define LCDD02 LCDD02
LCDD02                                   equ 0112h
// bitfield definitions
LCDD02_SEG16_POSN                        equ 0000h
LCDD02_SEG16_POSITION                    equ 0000h
LCDD02_SEG16_SIZE                        equ 0001h
LCDD02_SEG16_LENGTH                      equ 0001h
LCDD02_SEG16_MASK                        equ 0001h
LCDD02_SEG17_POSN                        equ 0001h
LCDD02_SEG17_POSITION                    equ 0001h
LCDD02_SEG17_SIZE                        equ 0001h
LCDD02_SEG17_LENGTH                      equ 0001h
LCDD02_SEG17_MASK                        equ 0002h
LCDD02_SEG18_POSN                        equ 0002h
LCDD02_SEG18_POSITION                    equ 0002h
LCDD02_SEG18_SIZE                        equ 0001h
LCDD02_SEG18_LENGTH                      equ 0001h
LCDD02_SEG18_MASK                        equ 0004h
LCDD02_SEG19_POSN                        equ 0003h
LCDD02_SEG19_POSITION                    equ 0003h
LCDD02_SEG19_SIZE                        equ 0001h
LCDD02_SEG19_LENGTH                      equ 0001h
LCDD02_SEG19_MASK                        equ 0008h
LCDD02_SEG20_POSN                        equ 0004h
LCDD02_SEG20_POSITION                    equ 0004h
LCDD02_SEG20_SIZE                        equ 0001h
LCDD02_SEG20_LENGTH                      equ 0001h
LCDD02_SEG20_MASK                        equ 0010h
LCDD02_SEG21_POSN                        equ 0005h
LCDD02_SEG21_POSITION                    equ 0005h
LCDD02_SEG21_SIZE                        equ 0001h
LCDD02_SEG21_LENGTH                      equ 0001h
LCDD02_SEG21_MASK                        equ 0020h
LCDD02_SEG22_POSN                        equ 0006h
LCDD02_SEG22_POSITION                    equ 0006h
LCDD02_SEG22_SIZE                        equ 0001h
LCDD02_SEG22_LENGTH                      equ 0001h
LCDD02_SEG22_MASK                        equ 0040h
LCDD02_SEG23_POSN                        equ 0007h
LCDD02_SEG23_POSITION                    equ 0007h
LCDD02_SEG23_SIZE                        equ 0001h
LCDD02_SEG23_LENGTH                      equ 0001h
LCDD02_SEG23_MASK                        equ 0080h

// Register: LCDD03
#define LCDD03 LCDD03
LCDD03                                   equ 0113h
// bitfield definitions
LCDD03_SEG24_POSN                        equ 0000h
LCDD03_SEG24_POSITION                    equ 0000h
LCDD03_SEG24_SIZE                        equ 0001h
LCDD03_SEG24_LENGTH                      equ 0001h
LCDD03_SEG24_MASK                        equ 0001h
LCDD03_SEG25_POSN                        equ 0001h
LCDD03_SEG25_POSITION                    equ 0001h
LCDD03_SEG25_SIZE                        equ 0001h
LCDD03_SEG25_LENGTH                      equ 0001h
LCDD03_SEG25_MASK                        equ 0002h
LCDD03_SEG26_POSN                        equ 0002h
LCDD03_SEG26_POSITION                    equ 0002h
LCDD03_SEG26_SIZE                        equ 0001h
LCDD03_SEG26_LENGTH                      equ 0001h
LCDD03_SEG26_MASK                        equ 0004h
LCDD03_SEG27_POSN                        equ 0003h
LCDD03_SEG27_POSITION                    equ 0003h
LCDD03_SEG27_SIZE                        equ 0001h
LCDD03_SEG27_LENGTH                      equ 0001h
LCDD03_SEG27_MASK                        equ 0008h
LCDD03_SEG28_POSN                        equ 0004h
LCDD03_SEG28_POSITION                    equ 0004h
LCDD03_SEG28_SIZE                        equ 0001h
LCDD03_SEG28_LENGTH                      equ 0001h
LCDD03_SEG28_MASK                        equ 0010h
LCDD03_SEG29_POSN                        equ 0005h
LCDD03_SEG29_POSITION                    equ 0005h
LCDD03_SEG29_SIZE                        equ 0001h
LCDD03_SEG29_LENGTH                      equ 0001h
LCDD03_SEG29_MASK                        equ 0020h
LCDD03_SEG30_POSN                        equ 0006h
LCDD03_SEG30_POSITION                    equ 0006h
LCDD03_SEG30_SIZE                        equ 0001h
LCDD03_SEG30_LENGTH                      equ 0001h
LCDD03_SEG30_MASK                        equ 0040h
LCDD03_SEG31_POSN                        equ 0007h
LCDD03_SEG31_POSITION                    equ 0007h
LCDD03_SEG31_SIZE                        equ 0001h
LCDD03_SEG31_LENGTH                      equ 0001h
LCDD03_SEG31_MASK                        equ 0080h

// Register: LCDD04
#define LCDD04 LCDD04
LCDD04                                   equ 0114h
// bitfield definitions
LCDD04_SEG00_POSN                        equ 0000h
LCDD04_SEG00_POSITION                    equ 0000h
LCDD04_SEG00_SIZE                        equ 0001h
LCDD04_SEG00_LENGTH                      equ 0001h
LCDD04_SEG00_MASK                        equ 0001h
LCDD04_SEG01_POSN                        equ 0001h
LCDD04_SEG01_POSITION                    equ 0001h
LCDD04_SEG01_SIZE                        equ 0001h
LCDD04_SEG01_LENGTH                      equ 0001h
LCDD04_SEG01_MASK                        equ 0002h
LCDD04_SEG02_POSN                        equ 0002h
LCDD04_SEG02_POSITION                    equ 0002h
LCDD04_SEG02_SIZE                        equ 0001h
LCDD04_SEG02_LENGTH                      equ 0001h
LCDD04_SEG02_MASK                        equ 0004h
LCDD04_SEG03_POSN                        equ 0003h
LCDD04_SEG03_POSITION                    equ 0003h
LCDD04_SEG03_SIZE                        equ 0001h
LCDD04_SEG03_LENGTH                      equ 0001h
LCDD04_SEG03_MASK                        equ 0008h
LCDD04_SEG04_POSN                        equ 0004h
LCDD04_SEG04_POSITION                    equ 0004h
LCDD04_SEG04_SIZE                        equ 0001h
LCDD04_SEG04_LENGTH                      equ 0001h
LCDD04_SEG04_MASK                        equ 0010h
LCDD04_SEG05_POSN                        equ 0005h
LCDD04_SEG05_POSITION                    equ 0005h
LCDD04_SEG05_SIZE                        equ 0001h
LCDD04_SEG05_LENGTH                      equ 0001h
LCDD04_SEG05_MASK                        equ 0020h
LCDD04_SEG06_POSN                        equ 0006h
LCDD04_SEG06_POSITION                    equ 0006h
LCDD04_SEG06_SIZE                        equ 0001h
LCDD04_SEG06_LENGTH                      equ 0001h
LCDD04_SEG06_MASK                        equ 0040h
LCDD04_SEG07_POSN                        equ 0007h
LCDD04_SEG07_POSITION                    equ 0007h
LCDD04_SEG07_SIZE                        equ 0001h
LCDD04_SEG07_LENGTH                      equ 0001h
LCDD04_SEG07_MASK                        equ 0080h

// Register: LCDD05
#define LCDD05 LCDD05
LCDD05                                   equ 0115h
// bitfield definitions
LCDD05_SEG08_POSN                        equ 0000h
LCDD05_SEG08_POSITION                    equ 0000h
LCDD05_SEG08_SIZE                        equ 0001h
LCDD05_SEG08_LENGTH                      equ 0001h
LCDD05_SEG08_MASK                        equ 0001h
LCDD05_SEG09_POSN                        equ 0001h
LCDD05_SEG09_POSITION                    equ 0001h
LCDD05_SEG09_SIZE                        equ 0001h
LCDD05_SEG09_LENGTH                      equ 0001h
LCDD05_SEG09_MASK                        equ 0002h
LCDD05_SEG10_POSN                        equ 0002h
LCDD05_SEG10_POSITION                    equ 0002h
LCDD05_SEG10_SIZE                        equ 0001h
LCDD05_SEG10_LENGTH                      equ 0001h
LCDD05_SEG10_MASK                        equ 0004h
LCDD05_SEG11_POSN                        equ 0003h
LCDD05_SEG11_POSITION                    equ 0003h
LCDD05_SEG11_SIZE                        equ 0001h
LCDD05_SEG11_LENGTH                      equ 0001h
LCDD05_SEG11_MASK                        equ 0008h
LCDD05_SEG12_POSN                        equ 0004h
LCDD05_SEG12_POSITION                    equ 0004h
LCDD05_SEG12_SIZE                        equ 0001h
LCDD05_SEG12_LENGTH                      equ 0001h
LCDD05_SEG12_MASK                        equ 0010h
LCDD05_SEG13_POSN                        equ 0005h
LCDD05_SEG13_POSITION                    equ 0005h
LCDD05_SEG13_SIZE                        equ 0001h
LCDD05_SEG13_LENGTH                      equ 0001h
LCDD05_SEG13_MASK                        equ 0020h
LCDD05_SEG14_POSN                        equ 0006h
LCDD05_SEG14_POSITION                    equ 0006h
LCDD05_SEG14_SIZE                        equ 0001h
LCDD05_SEG14_LENGTH                      equ 0001h
LCDD05_SEG14_MASK                        equ 0040h
LCDD05_SEG15_POSN                        equ 0007h
LCDD05_SEG15_POSITION                    equ 0007h
LCDD05_SEG15_SIZE                        equ 0001h
LCDD05_SEG15_LENGTH                      equ 0001h
LCDD05_SEG15_MASK                        equ 0080h

// Register: LCDD06
#define LCDD06 LCDD06
LCDD06                                   equ 0116h
// bitfield definitions
LCDD06_SEG16_POSN                        equ 0000h
LCDD06_SEG16_POSITION                    equ 0000h
LCDD06_SEG16_SIZE                        equ 0001h
LCDD06_SEG16_LENGTH                      equ 0001h
LCDD06_SEG16_MASK                        equ 0001h
LCDD06_SEG17_POSN                        equ 0001h
LCDD06_SEG17_POSITION                    equ 0001h
LCDD06_SEG17_SIZE                        equ 0001h
LCDD06_SEG17_LENGTH                      equ 0001h
LCDD06_SEG17_MASK                        equ 0002h
LCDD06_SEG18_POSN                        equ 0002h
LCDD06_SEG18_POSITION                    equ 0002h
LCDD06_SEG18_SIZE                        equ 0001h
LCDD06_SEG18_LENGTH                      equ 0001h
LCDD06_SEG18_MASK                        equ 0004h
LCDD06_SEG19_POSN                        equ 0003h
LCDD06_SEG19_POSITION                    equ 0003h
LCDD06_SEG19_SIZE                        equ 0001h
LCDD06_SEG19_LENGTH                      equ 0001h
LCDD06_SEG19_MASK                        equ 0008h
LCDD06_SEG20_POSN                        equ 0004h
LCDD06_SEG20_POSITION                    equ 0004h
LCDD06_SEG20_SIZE                        equ 0001h
LCDD06_SEG20_LENGTH                      equ 0001h
LCDD06_SEG20_MASK                        equ 0010h
LCDD06_SEG21_POSN                        equ 0005h
LCDD06_SEG21_POSITION                    equ 0005h
LCDD06_SEG21_SIZE                        equ 0001h
LCDD06_SEG21_LENGTH                      equ 0001h
LCDD06_SEG21_MASK                        equ 0020h
LCDD06_SEG22_POSN                        equ 0006h
LCDD06_SEG22_POSITION                    equ 0006h
LCDD06_SEG22_SIZE                        equ 0001h
LCDD06_SEG22_LENGTH                      equ 0001h
LCDD06_SEG22_MASK                        equ 0040h
LCDD06_SEG23_POSN                        equ 0007h
LCDD06_SEG23_POSITION                    equ 0007h
LCDD06_SEG23_SIZE                        equ 0001h
LCDD06_SEG23_LENGTH                      equ 0001h
LCDD06_SEG23_MASK                        equ 0080h

// Register: LCDD07
#define LCDD07 LCDD07
LCDD07                                   equ 0117h
// bitfield definitions
LCDD07_SEG24_POSN                        equ 0000h
LCDD07_SEG24_POSITION                    equ 0000h
LCDD07_SEG24_SIZE                        equ 0001h
LCDD07_SEG24_LENGTH                      equ 0001h
LCDD07_SEG24_MASK                        equ 0001h
LCDD07_SEG25_POSN                        equ 0001h
LCDD07_SEG25_POSITION                    equ 0001h
LCDD07_SEG25_SIZE                        equ 0001h
LCDD07_SEG25_LENGTH                      equ 0001h
LCDD07_SEG25_MASK                        equ 0002h
LCDD07_SEG26_POSN                        equ 0002h
LCDD07_SEG26_POSITION                    equ 0002h
LCDD07_SEG26_SIZE                        equ 0001h
LCDD07_SEG26_LENGTH                      equ 0001h
LCDD07_SEG26_MASK                        equ 0004h
LCDD07_SEG27_POSN                        equ 0003h
LCDD07_SEG27_POSITION                    equ 0003h
LCDD07_SEG27_SIZE                        equ 0001h
LCDD07_SEG27_LENGTH                      equ 0001h
LCDD07_SEG27_MASK                        equ 0008h
LCDD07_SEG28_POSN                        equ 0004h
LCDD07_SEG28_POSITION                    equ 0004h
LCDD07_SEG28_SIZE                        equ 0001h
LCDD07_SEG28_LENGTH                      equ 0001h
LCDD07_SEG28_MASK                        equ 0010h
LCDD07_SEG29_POSN                        equ 0005h
LCDD07_SEG29_POSITION                    equ 0005h
LCDD07_SEG29_SIZE                        equ 0001h
LCDD07_SEG29_LENGTH                      equ 0001h
LCDD07_SEG29_MASK                        equ 0020h
LCDD07_SEG30_POSN                        equ 0006h
LCDD07_SEG30_POSITION                    equ 0006h
LCDD07_SEG30_SIZE                        equ 0001h
LCDD07_SEG30_LENGTH                      equ 0001h
LCDD07_SEG30_MASK                        equ 0040h
LCDD07_SEG31_POSN                        equ 0007h
LCDD07_SEG31_POSITION                    equ 0007h
LCDD07_SEG31_SIZE                        equ 0001h
LCDD07_SEG31_LENGTH                      equ 0001h
LCDD07_SEG31_MASK                        equ 0080h

// Register: LCDD08
#define LCDD08 LCDD08
LCDD08                                   equ 0118h
// bitfield definitions
LCDD08_SEG00_POSN                        equ 0000h
LCDD08_SEG00_POSITION                    equ 0000h
LCDD08_SEG00_SIZE                        equ 0001h
LCDD08_SEG00_LENGTH                      equ 0001h
LCDD08_SEG00_MASK                        equ 0001h
LCDD08_SEG01_POSN                        equ 0001h
LCDD08_SEG01_POSITION                    equ 0001h
LCDD08_SEG01_SIZE                        equ 0001h
LCDD08_SEG01_LENGTH                      equ 0001h
LCDD08_SEG01_MASK                        equ 0002h
LCDD08_SEG02_POSN                        equ 0002h
LCDD08_SEG02_POSITION                    equ 0002h
LCDD08_SEG02_SIZE                        equ 0001h
LCDD08_SEG02_LENGTH                      equ 0001h
LCDD08_SEG02_MASK                        equ 0004h
LCDD08_SEG03_POSN                        equ 0003h
LCDD08_SEG03_POSITION                    equ 0003h
LCDD08_SEG03_SIZE                        equ 0001h
LCDD08_SEG03_LENGTH                      equ 0001h
LCDD08_SEG03_MASK                        equ 0008h
LCDD08_SEG04_POSN                        equ 0004h
LCDD08_SEG04_POSITION                    equ 0004h
LCDD08_SEG04_SIZE                        equ 0001h
LCDD08_SEG04_LENGTH                      equ 0001h
LCDD08_SEG04_MASK                        equ 0010h
LCDD08_SEG05_POSN                        equ 0005h
LCDD08_SEG05_POSITION                    equ 0005h
LCDD08_SEG05_SIZE                        equ 0001h
LCDD08_SEG05_LENGTH                      equ 0001h
LCDD08_SEG05_MASK                        equ 0020h
LCDD08_SEG06_POSN                        equ 0006h
LCDD08_SEG06_POSITION                    equ 0006h
LCDD08_SEG06_SIZE                        equ 0001h
LCDD08_SEG06_LENGTH                      equ 0001h
LCDD08_SEG06_MASK                        equ 0040h
LCDD08_SEG07_POSN                        equ 0007h
LCDD08_SEG07_POSITION                    equ 0007h
LCDD08_SEG07_SIZE                        equ 0001h
LCDD08_SEG07_LENGTH                      equ 0001h
LCDD08_SEG07_MASK                        equ 0080h

// Register: LCDD09
#define LCDD09 LCDD09
LCDD09                                   equ 0119h
// bitfield definitions
LCDD09_SEG08_POSN                        equ 0000h
LCDD09_SEG08_POSITION                    equ 0000h
LCDD09_SEG08_SIZE                        equ 0001h
LCDD09_SEG08_LENGTH                      equ 0001h
LCDD09_SEG08_MASK                        equ 0001h
LCDD09_SEG09_POSN                        equ 0001h
LCDD09_SEG09_POSITION                    equ 0001h
LCDD09_SEG09_SIZE                        equ 0001h
LCDD09_SEG09_LENGTH                      equ 0001h
LCDD09_SEG09_MASK                        equ 0002h
LCDD09_SEG10_POSN                        equ 0002h
LCDD09_SEG10_POSITION                    equ 0002h
LCDD09_SEG10_SIZE                        equ 0001h
LCDD09_SEG10_LENGTH                      equ 0001h
LCDD09_SEG10_MASK                        equ 0004h
LCDD09_SEG11_POSN                        equ 0003h
LCDD09_SEG11_POSITION                    equ 0003h
LCDD09_SEG11_SIZE                        equ 0001h
LCDD09_SEG11_LENGTH                      equ 0001h
LCDD09_SEG11_MASK                        equ 0008h
LCDD09_SEG12_POSN                        equ 0004h
LCDD09_SEG12_POSITION                    equ 0004h
LCDD09_SEG12_SIZE                        equ 0001h
LCDD09_SEG12_LENGTH                      equ 0001h
LCDD09_SEG12_MASK                        equ 0010h
LCDD09_SEG13_POSN                        equ 0005h
LCDD09_SEG13_POSITION                    equ 0005h
LCDD09_SEG13_SIZE                        equ 0001h
LCDD09_SEG13_LENGTH                      equ 0001h
LCDD09_SEG13_MASK                        equ 0020h
LCDD09_SEG14_POSN                        equ 0006h
LCDD09_SEG14_POSITION                    equ 0006h
LCDD09_SEG14_SIZE                        equ 0001h
LCDD09_SEG14_LENGTH                      equ 0001h
LCDD09_SEG14_MASK                        equ 0040h
LCDD09_SEG15_POSN                        equ 0007h
LCDD09_SEG15_POSITION                    equ 0007h
LCDD09_SEG15_SIZE                        equ 0001h
LCDD09_SEG15_LENGTH                      equ 0001h
LCDD09_SEG15_MASK                        equ 0080h

// Register: LCDD10
#define LCDD10 LCDD10
LCDD10                                   equ 011Ah
// bitfield definitions
LCDD10_SEG16_POSN                        equ 0000h
LCDD10_SEG16_POSITION                    equ 0000h
LCDD10_SEG16_SIZE                        equ 0001h
LCDD10_SEG16_LENGTH                      equ 0001h
LCDD10_SEG16_MASK                        equ 0001h
LCDD10_SEG17_POSN                        equ 0001h
LCDD10_SEG17_POSITION                    equ 0001h
LCDD10_SEG17_SIZE                        equ 0001h
LCDD10_SEG17_LENGTH                      equ 0001h
LCDD10_SEG17_MASK                        equ 0002h
LCDD10_SEG18_POSN                        equ 0002h
LCDD10_SEG18_POSITION                    equ 0002h
LCDD10_SEG18_SIZE                        equ 0001h
LCDD10_SEG18_LENGTH                      equ 0001h
LCDD10_SEG18_MASK                        equ 0004h
LCDD10_SEG19_POSN                        equ 0003h
LCDD10_SEG19_POSITION                    equ 0003h
LCDD10_SEG19_SIZE                        equ 0001h
LCDD10_SEG19_LENGTH                      equ 0001h
LCDD10_SEG19_MASK                        equ 0008h
LCDD10_SEG20_POSN                        equ 0004h
LCDD10_SEG20_POSITION                    equ 0004h
LCDD10_SEG20_SIZE                        equ 0001h
LCDD10_SEG20_LENGTH                      equ 0001h
LCDD10_SEG20_MASK                        equ 0010h
LCDD10_SEG21_POSN                        equ 0005h
LCDD10_SEG21_POSITION                    equ 0005h
LCDD10_SEG21_SIZE                        equ 0001h
LCDD10_SEG21_LENGTH                      equ 0001h
LCDD10_SEG21_MASK                        equ 0020h
LCDD10_SEG22_POSN                        equ 0006h
LCDD10_SEG22_POSITION                    equ 0006h
LCDD10_SEG22_SIZE                        equ 0001h
LCDD10_SEG22_LENGTH                      equ 0001h
LCDD10_SEG22_MASK                        equ 0040h
LCDD10_SEG23_POSN                        equ 0007h
LCDD10_SEG23_POSITION                    equ 0007h
LCDD10_SEG23_SIZE                        equ 0001h
LCDD10_SEG23_LENGTH                      equ 0001h
LCDD10_SEG23_MASK                        equ 0080h

// Register: LCDD11
#define LCDD11 LCDD11
LCDD11                                   equ 011Bh
// bitfield definitions
LCDD11_SEG24_POSN                        equ 0000h
LCDD11_SEG24_POSITION                    equ 0000h
LCDD11_SEG24_SIZE                        equ 0001h
LCDD11_SEG24_LENGTH                      equ 0001h
LCDD11_SEG24_MASK                        equ 0001h
LCDD11_SEG25_POSN                        equ 0001h
LCDD11_SEG25_POSITION                    equ 0001h
LCDD11_SEG25_SIZE                        equ 0001h
LCDD11_SEG25_LENGTH                      equ 0001h
LCDD11_SEG25_MASK                        equ 0002h
LCDD11_SEG26_POSN                        equ 0002h
LCDD11_SEG26_POSITION                    equ 0002h
LCDD11_SEG26_SIZE                        equ 0001h
LCDD11_SEG26_LENGTH                      equ 0001h
LCDD11_SEG26_MASK                        equ 0004h
LCDD11_SEG27_POSN                        equ 0003h
LCDD11_SEG27_POSITION                    equ 0003h
LCDD11_SEG27_SIZE                        equ 0001h
LCDD11_SEG27_LENGTH                      equ 0001h
LCDD11_SEG27_MASK                        equ 0008h
LCDD11_SEG28_POSN                        equ 0004h
LCDD11_SEG28_POSITION                    equ 0004h
LCDD11_SEG28_SIZE                        equ 0001h
LCDD11_SEG28_LENGTH                      equ 0001h
LCDD11_SEG28_MASK                        equ 0010h
LCDD11_SEG29_POSN                        equ 0005h
LCDD11_SEG29_POSITION                    equ 0005h
LCDD11_SEG29_SIZE                        equ 0001h
LCDD11_SEG29_LENGTH                      equ 0001h
LCDD11_SEG29_MASK                        equ 0020h
LCDD11_SEG30_POSN                        equ 0006h
LCDD11_SEG30_POSITION                    equ 0006h
LCDD11_SEG30_SIZE                        equ 0001h
LCDD11_SEG30_LENGTH                      equ 0001h
LCDD11_SEG30_MASK                        equ 0040h
LCDD11_SEG31_POSN                        equ 0007h
LCDD11_SEG31_POSITION                    equ 0007h
LCDD11_SEG31_SIZE                        equ 0001h
LCDD11_SEG31_LENGTH                      equ 0001h
LCDD11_SEG31_MASK                        equ 0080h

// Register: LCDD12
#define LCDD12 LCDD12
LCDD12                                   equ 011Ch
// bitfield definitions
LCDD12_SEG00_POSN                        equ 0000h
LCDD12_SEG00_POSITION                    equ 0000h
LCDD12_SEG00_SIZE                        equ 0001h
LCDD12_SEG00_LENGTH                      equ 0001h
LCDD12_SEG00_MASK                        equ 0001h
LCDD12_SEG01_POSN                        equ 0001h
LCDD12_SEG01_POSITION                    equ 0001h
LCDD12_SEG01_SIZE                        equ 0001h
LCDD12_SEG01_LENGTH                      equ 0001h
LCDD12_SEG01_MASK                        equ 0002h
LCDD12_SEG02_POSN                        equ 0002h
LCDD12_SEG02_POSITION                    equ 0002h
LCDD12_SEG02_SIZE                        equ 0001h
LCDD12_SEG02_LENGTH                      equ 0001h
LCDD12_SEG02_MASK                        equ 0004h
LCDD12_SEG03_POSN                        equ 0003h
LCDD12_SEG03_POSITION                    equ 0003h
LCDD12_SEG03_SIZE                        equ 0001h
LCDD12_SEG03_LENGTH                      equ 0001h
LCDD12_SEG03_MASK                        equ 0008h
LCDD12_SEG04_POSN                        equ 0004h
LCDD12_SEG04_POSITION                    equ 0004h
LCDD12_SEG04_SIZE                        equ 0001h
LCDD12_SEG04_LENGTH                      equ 0001h
LCDD12_SEG04_MASK                        equ 0010h
LCDD12_SEG05_POSN                        equ 0005h
LCDD12_SEG05_POSITION                    equ 0005h
LCDD12_SEG05_SIZE                        equ 0001h
LCDD12_SEG05_LENGTH                      equ 0001h
LCDD12_SEG05_MASK                        equ 0020h
LCDD12_SEG06_POSN                        equ 0006h
LCDD12_SEG06_POSITION                    equ 0006h
LCDD12_SEG06_SIZE                        equ 0001h
LCDD12_SEG06_LENGTH                      equ 0001h
LCDD12_SEG06_MASK                        equ 0040h
LCDD12_SEG07_POSN                        equ 0007h
LCDD12_SEG07_POSITION                    equ 0007h
LCDD12_SEG07_SIZE                        equ 0001h
LCDD12_SEG07_LENGTH                      equ 0001h
LCDD12_SEG07_MASK                        equ 0080h

// Register: LCDD13
#define LCDD13 LCDD13
LCDD13                                   equ 011Dh
// bitfield definitions
LCDD13_SEG08_POSN                        equ 0000h
LCDD13_SEG08_POSITION                    equ 0000h
LCDD13_SEG08_SIZE                        equ 0001h
LCDD13_SEG08_LENGTH                      equ 0001h
LCDD13_SEG08_MASK                        equ 0001h
LCDD13_SEG09_POSN                        equ 0001h
LCDD13_SEG09_POSITION                    equ 0001h
LCDD13_SEG09_SIZE                        equ 0001h
LCDD13_SEG09_LENGTH                      equ 0001h
LCDD13_SEG09_MASK                        equ 0002h
LCDD13_SEG10_POSN                        equ 0002h
LCDD13_SEG10_POSITION                    equ 0002h
LCDD13_SEG10_SIZE                        equ 0001h
LCDD13_SEG10_LENGTH                      equ 0001h
LCDD13_SEG10_MASK                        equ 0004h
LCDD13_SEG11_POSN                        equ 0003h
LCDD13_SEG11_POSITION                    equ 0003h
LCDD13_SEG11_SIZE                        equ 0001h
LCDD13_SEG11_LENGTH                      equ 0001h
LCDD13_SEG11_MASK                        equ 0008h
LCDD13_SEG12_POSN                        equ 0004h
LCDD13_SEG12_POSITION                    equ 0004h
LCDD13_SEG12_SIZE                        equ 0001h
LCDD13_SEG12_LENGTH                      equ 0001h
LCDD13_SEG12_MASK                        equ 0010h
LCDD13_SEG13_POSN                        equ 0005h
LCDD13_SEG13_POSITION                    equ 0005h
LCDD13_SEG13_SIZE                        equ 0001h
LCDD13_SEG13_LENGTH                      equ 0001h
LCDD13_SEG13_MASK                        equ 0020h
LCDD13_SEG14_POSN                        equ 0006h
LCDD13_SEG14_POSITION                    equ 0006h
LCDD13_SEG14_SIZE                        equ 0001h
LCDD13_SEG14_LENGTH                      equ 0001h
LCDD13_SEG14_MASK                        equ 0040h
LCDD13_SEG15_POSN                        equ 0007h
LCDD13_SEG15_POSITION                    equ 0007h
LCDD13_SEG15_SIZE                        equ 0001h
LCDD13_SEG15_LENGTH                      equ 0001h
LCDD13_SEG15_MASK                        equ 0080h

// Register: LCDD14
#define LCDD14 LCDD14
LCDD14                                   equ 011Eh
// bitfield definitions
LCDD14_SEG16_POSN                        equ 0000h
LCDD14_SEG16_POSITION                    equ 0000h
LCDD14_SEG16_SIZE                        equ 0001h
LCDD14_SEG16_LENGTH                      equ 0001h
LCDD14_SEG16_MASK                        equ 0001h
LCDD14_SEG17_POSN                        equ 0001h
LCDD14_SEG17_POSITION                    equ 0001h
LCDD14_SEG17_SIZE                        equ 0001h
LCDD14_SEG17_LENGTH                      equ 0001h
LCDD14_SEG17_MASK                        equ 0002h
LCDD14_SEG18_POSN                        equ 0002h
LCDD14_SEG18_POSITION                    equ 0002h
LCDD14_SEG18_SIZE                        equ 0001h
LCDD14_SEG18_LENGTH                      equ 0001h
LCDD14_SEG18_MASK                        equ 0004h
LCDD14_SEG19_POSN                        equ 0003h
LCDD14_SEG19_POSITION                    equ 0003h
LCDD14_SEG19_SIZE                        equ 0001h
LCDD14_SEG19_LENGTH                      equ 0001h
LCDD14_SEG19_MASK                        equ 0008h
LCDD14_SEG20_POSN                        equ 0004h
LCDD14_SEG20_POSITION                    equ 0004h
LCDD14_SEG20_SIZE                        equ 0001h
LCDD14_SEG20_LENGTH                      equ 0001h
LCDD14_SEG20_MASK                        equ 0010h
LCDD14_SEG21_POSN                        equ 0005h
LCDD14_SEG21_POSITION                    equ 0005h
LCDD14_SEG21_SIZE                        equ 0001h
LCDD14_SEG21_LENGTH                      equ 0001h
LCDD14_SEG21_MASK                        equ 0020h
LCDD14_SEG22_POSN                        equ 0006h
LCDD14_SEG22_POSITION                    equ 0006h
LCDD14_SEG22_SIZE                        equ 0001h
LCDD14_SEG22_LENGTH                      equ 0001h
LCDD14_SEG22_MASK                        equ 0040h
LCDD14_SEG23_POSN                        equ 0007h
LCDD14_SEG23_POSITION                    equ 0007h
LCDD14_SEG23_SIZE                        equ 0001h
LCDD14_SEG23_LENGTH                      equ 0001h
LCDD14_SEG23_MASK                        equ 0080h

// Register: LCDD15
#define LCDD15 LCDD15
LCDD15                                   equ 011Fh
// bitfield definitions
LCDD15_SEG24_POSN                        equ 0000h
LCDD15_SEG24_POSITION                    equ 0000h
LCDD15_SEG24_SIZE                        equ 0001h
LCDD15_SEG24_LENGTH                      equ 0001h
LCDD15_SEG24_MASK                        equ 0001h
LCDD15_SEG25_POSN                        equ 0001h
LCDD15_SEG25_POSITION                    equ 0001h
LCDD15_SEG25_SIZE                        equ 0001h
LCDD15_SEG25_LENGTH                      equ 0001h
LCDD15_SEG25_MASK                        equ 0002h
LCDD15_SEG26_POSN                        equ 0002h
LCDD15_SEG26_POSITION                    equ 0002h
LCDD15_SEG26_SIZE                        equ 0001h
LCDD15_SEG26_LENGTH                      equ 0001h
LCDD15_SEG26_MASK                        equ 0004h
LCDD15_SEG27_POSN                        equ 0003h
LCDD15_SEG27_POSITION                    equ 0003h
LCDD15_SEG27_SIZE                        equ 0001h
LCDD15_SEG27_LENGTH                      equ 0001h
LCDD15_SEG27_MASK                        equ 0008h
LCDD15_SEG28_POSN                        equ 0004h
LCDD15_SEG28_POSITION                    equ 0004h
LCDD15_SEG28_SIZE                        equ 0001h
LCDD15_SEG28_LENGTH                      equ 0001h
LCDD15_SEG28_MASK                        equ 0010h
LCDD15_SEG29_POSN                        equ 0005h
LCDD15_SEG29_POSITION                    equ 0005h
LCDD15_SEG29_SIZE                        equ 0001h
LCDD15_SEG29_LENGTH                      equ 0001h
LCDD15_SEG29_MASK                        equ 0020h
LCDD15_SEG30_POSN                        equ 0006h
LCDD15_SEG30_POSITION                    equ 0006h
LCDD15_SEG30_SIZE                        equ 0001h
LCDD15_SEG30_LENGTH                      equ 0001h
LCDD15_SEG30_MASK                        equ 0040h
LCDD15_SEG31_POSN                        equ 0007h
LCDD15_SEG31_POSITION                    equ 0007h
LCDD15_SEG31_SIZE                        equ 0001h
LCDD15_SEG31_LENGTH                      equ 0001h
LCDD15_SEG31_MASK                        equ 0080h

// Register: TRISF
#define TRISF TRISF
TRISF                                    equ 0187h
// bitfield definitions
TRISF_TRISF0_POSN                        equ 0000h
TRISF_TRISF0_POSITION                    equ 0000h
TRISF_TRISF0_SIZE                        equ 0001h
TRISF_TRISF0_LENGTH                      equ 0001h
TRISF_TRISF0_MASK                        equ 0001h
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
TRISG                                    equ 0188h
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
TRISG_TRISG5_POSN                        equ 0005h
TRISG_TRISG5_POSITION                    equ 0005h
TRISG_TRISG5_SIZE                        equ 0001h
TRISG_TRISG5_LENGTH                      equ 0001h
TRISG_TRISG5_MASK                        equ 0020h
TRISG_TRISG6_POSN                        equ 0006h
TRISG_TRISG6_POSITION                    equ 0006h
TRISG_TRISG6_SIZE                        equ 0001h
TRISG_TRISG6_LENGTH                      equ 0001h
TRISG_TRISG6_MASK                        equ 0040h
TRISG_TRISG7_POSN                        equ 0007h
TRISG_TRISG7_POSITION                    equ 0007h
TRISG_TRISG7_SIZE                        equ 0001h
TRISG_TRISG7_LENGTH                      equ 0001h
TRISG_TRISG7_MASK                        equ 0080h

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 07FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 07Fh)
#endif
#define BF                               BANKMASK(SSPSTAT), 0
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1IE                           BANKMASK(PIE1), 2
#define CCP1IF                           BANKMASK(PIR1), 2
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CCP1X                            BANKMASK(CCP1CON), 5
#define CCP1Y                            BANKMASK(CCP1CON), 4
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON), 4
#define CS0                              BANKMASK(LCDCON), 2
#define CS1                              BANKMASK(LCDCON), 3
#define DATA_ADDRESS                     BANKMASK(SSPSTAT), 5
#define DC                               BANKMASK(STATUS), 1
#define D_A                              BANKMASK(SSPSTAT), 5
#define D_nA                             BANKMASK(SSPSTAT), 5
#define GIE                              BANKMASK(INTCON), 7
#define I2C_DATA                         BANKMASK(SSPSTAT), 5
#define I2C_READ                         BANKMASK(SSPSTAT), 2
#define I2C_START                        BANKMASK(SSPSTAT), 3
#define I2C_STOP                         BANKMASK(SSPSTAT), 4
#define IBF                              BANKMASK(TRISE), 7
#define IBOV                             BANKMASK(TRISE), 5
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define LCDEN                            BANKMASK(LCDCON), 7
#define LCDIE                            BANKMASK(PIE1), 7
#define LCDIF                            BANKMASK(PIR1), 7
#define LMUX0                            BANKMASK(LCDCON), 0
#define LMUX1                            BANKMASK(LCDCON), 1
#define LP0                              BANKMASK(LCDPS), 0
#define LP1                              BANKMASK(LCDPS), 1
#define LP2                              BANKMASK(LCDPS), 2
#define LP3                              BANKMASK(LCDPS), 3
#define OBF                              BANKMASK(TRISE), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
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
#define RC3                              BANKMASK(PORTC), 3
#define RC4                              BANKMASK(PORTC), 4
#define RC5                              BANKMASK(PORTC), 5
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
#define RE3                              BANKMASK(PORTE), 3
#define RE4                              BANKMASK(PORTE), 4
#define RE5                              BANKMASK(PORTE), 5
#define RE6                              BANKMASK(PORTE), 6
#define RE7                              BANKMASK(PORTE), 7
#define READ_WRITE                       BANKMASK(SSPSTAT), 2
#define RF0                              BANKMASK(PORTF), 0
#define RF1                              BANKMASK(PORTF), 1
#define RF2                              BANKMASK(PORTF), 2
#define RF3                              BANKMASK(PORTF), 3
#define RF4                              BANKMASK(PORTF), 4
#define RF5                              BANKMASK(PORTF), 5
#define RF6                              BANKMASK(PORTF), 6
#define RF7                              BANKMASK(PORTF), 7
#define RG0                              BANKMASK(PORTG), 0
#define RG1                              BANKMASK(PORTG), 1
#define RG2                              BANKMASK(PORTG), 2
#define RG3                              BANKMASK(PORTG), 3
#define RG4                              BANKMASK(PORTG), 4
#define RG5                              BANKMASK(PORTG), 5
#define RG6                              BANKMASK(PORTG), 6
#define RG7                              BANKMASK(PORTG), 7
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define R_W                              BANKMASK(SSPSTAT), 2
#define R_nW                             BANKMASK(SSPSTAT), 2
#define SE0                              BANKMASK(LCDSE), 0
#define SE12                             BANKMASK(LCDSE), 3
#define SE16                             BANKMASK(LCDSE), 4
#define SE20                             BANKMASK(LCDSE), 5
#define SE27                             BANKMASK(LCDSE), 6
#define SE29                             BANKMASK(LCDSE), 7
#define SE5                              BANKMASK(LCDSE), 1
#define SE9                              BANKMASK(LCDSE), 2
#define SLPEN                            BANKMASK(LCDCON), 6
#define SMP                              BANKMASK(SSPSTAT), 7
#define SSPEN                            BANKMASK(SSPCON), 5
#define SSPIE                            BANKMASK(PIE1), 3
#define SSPIF                            BANKMASK(PIR1), 3
#define SSPM0                            BANKMASK(SSPCON), 0
#define SSPM1                            BANKMASK(SSPCON), 1
#define SSPM2                            BANKMASK(SSPCON), 2
#define SSPM3                            BANKMASK(SSPCON), 3
#define SSPOV                            BANKMASK(SSPCON), 6
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
#define TRISC3                           BANKMASK(TRISC), 3
#define TRISC4                           BANKMASK(TRISC), 4
#define TRISC5                           BANKMASK(TRISC), 5
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
#define TRISE3                           BANKMASK(TRISE), 3
#define TRISE4                           BANKMASK(TRISE), 4
#define TRISE5                           BANKMASK(TRISE), 5
#define TRISE6                           BANKMASK(TRISE), 6
#define TRISE7                           BANKMASK(TRISE), 7
#define TRISF0                           BANKMASK(TRISF), 0
#define TRISF1                           BANKMASK(TRISF), 1
#define TRISF2                           BANKMASK(TRISF), 2
#define TRISF3                           BANKMASK(TRISF), 3
#define TRISF4                           BANKMASK(TRISF), 4
#define TRISF5                           BANKMASK(TRISF), 5
#define TRISF6                           BANKMASK(TRISF), 6
#define TRISF7                           BANKMASK(TRISF), 7
#define TRISG0                           BANKMASK(TRISG), 0
#define TRISG1                           BANKMASK(TRISG), 1
#define TRISG2                           BANKMASK(TRISG), 2
#define TRISG3                           BANKMASK(TRISG), 3
#define TRISG4                           BANKMASK(TRISG), 4
#define TRISG5                           BANKMASK(TRISG), 5
#define TRISG6                           BANKMASK(TRISG), 6
#define TRISG7                           BANKMASK(TRISG), 7
#define UA                               BANKMASK(SSPSTAT), 1
#define VGEN                             BANKMASK(LCDCON), 4
#define WCOL                             BANKMASK(SSPCON), 7
#define ZERO                             BANKMASK(STATUS), 2
#define nA                               BANKMASK(SSPSTAT), 5
#define nADDRESS                         BANKMASK(SSPSTAT), 5
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRBPU                            BANKMASK(OPTION_REG), 7
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nTO                              BANKMASK(STATUS), 4
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

#endif // _PIC16C923_INC_
