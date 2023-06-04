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

#ifndef _PIC16F946_INC_
#define _PIC16F946_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F946
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
PIR1_EEIF_POSN                           equ 0007h
PIR1_EEIF_POSITION                       equ 0007h
PIR1_EEIF_SIZE                           equ 0001h
PIR1_EEIF_LENGTH                         equ 0001h
PIR1_EEIF_MASK                           equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 000Dh
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
PIR2_LCDIF_POSN                          equ 0004h
PIR2_LCDIF_POSITION                      equ 0004h
PIR2_LCDIF_SIZE                          equ 0001h
PIR2_LCDIF_LENGTH                        equ 0001h
PIR2_LCDIF_MASK                          equ 0010h
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
T1CON_T1GE_POSN                          equ 0006h
T1CON_T1GE_POSITION                      equ 0006h
T1CON_T1GE_SIZE                          equ 0001h
T1CON_T1GE_LENGTH                        equ 0001h
T1CON_T1GE_MASK                          equ 0040h
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
ADCON0_CHS_SIZE                          equ 0003h
ADCON0_CHS_LENGTH                        equ 0003h
ADCON0_CHS_MASK                          equ 001Ch
ADCON0_VCFG_POSN                         equ 0005h
ADCON0_VCFG_POSITION                     equ 0005h
ADCON0_VCFG_SIZE                         equ 0002h
ADCON0_VCFG_LENGTH                       equ 0002h
ADCON0_VCFG_MASK                         equ 0060h
ADCON0_ADFM_POSN                         equ 0007h
ADCON0_ADFM_POSITION                     equ 0007h
ADCON0_ADFM_SIZE                         equ 0001h
ADCON0_ADFM_LENGTH                       equ 0001h
ADCON0_ADFM_MASK                         equ 0080h
ADCON0_nDONE_POSN                        equ 0001h
ADCON0_nDONE_POSITION                    equ 0001h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0002h
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
ADCON0_VCFG0_POSN                        equ 0005h
ADCON0_VCFG0_POSITION                    equ 0005h
ADCON0_VCFG0_SIZE                        equ 0001h
ADCON0_VCFG0_LENGTH                      equ 0001h
ADCON0_VCFG0_MASK                        equ 0020h
ADCON0_VCFG1_POSN                        equ 0006h
ADCON0_VCFG1_POSITION                    equ 0006h
ADCON0_VCFG1_SIZE                        equ 0001h
ADCON0_VCFG1_LENGTH                      equ 0001h
ADCON0_VCFG1_MASK                        equ 0040h
ADCON0_GO_DONE_POSN                      equ 0001h
ADCON0_GO_DONE_POSITION                  equ 0001h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0002h
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h

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
PIE1_EEIE_POSN                           equ 0007h
PIE1_EEIE_POSITION                       equ 0007h
PIE1_EEIE_SIZE                           equ 0001h
PIE1_EEIE_LENGTH                         equ 0001h
PIE1_EEIE_MASK                           equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 008Dh
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
PIE2_LCDIE_POSN                          equ 0004h
PIE2_LCDIE_POSITION                      equ 0004h
PIE2_LCDIE_SIZE                          equ 0001h
PIE2_LCDIE_LENGTH                        equ 0001h
PIE2_LCDIE_MASK                          equ 0010h
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

// Register: ANSEL
#define ANSEL ANSEL
ANSEL                                    equ 0091h
// bitfield definitions
ANSEL_AN_POSN                            equ 0000h
ANSEL_AN_POSITION                        equ 0000h
ANSEL_AN_SIZE                            equ 0008h
ANSEL_AN_LENGTH                          equ 0008h
ANSEL_AN_MASK                            equ 00FFh
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
ANSEL_ANS5_POSN                          equ 0005h
ANSEL_ANS5_POSITION                      equ 0005h
ANSEL_ANS5_SIZE                          equ 0001h
ANSEL_ANS5_LENGTH                        equ 0001h
ANSEL_ANS5_MASK                          equ 0020h
ANSEL_ANS6_POSN                          equ 0006h
ANSEL_ANS6_POSITION                      equ 0006h
ANSEL_ANS6_SIZE                          equ 0001h
ANSEL_ANS6_LENGTH                        equ 0001h
ANSEL_ANS6_MASK                          equ 0040h
ANSEL_ANS7_POSN                          equ 0007h
ANSEL_ANS7_POSITION                      equ 0007h
ANSEL_ANS7_SIZE                          equ 0001h
ANSEL_ANS7_LENGTH                        equ 0001h
ANSEL_ANS7_MASK                          equ 0080h
ANSEL_AN0_POSN                           equ 0000h
ANSEL_AN0_POSITION                       equ 0000h
ANSEL_AN0_SIZE                           equ 0001h
ANSEL_AN0_LENGTH                         equ 0001h
ANSEL_AN0_MASK                           equ 0001h
ANSEL_AN1_POSN                           equ 0001h
ANSEL_AN1_POSITION                       equ 0001h
ANSEL_AN1_SIZE                           equ 0001h
ANSEL_AN1_LENGTH                         equ 0001h
ANSEL_AN1_MASK                           equ 0002h
ANSEL_AN2_POSN                           equ 0002h
ANSEL_AN2_POSITION                       equ 0002h
ANSEL_AN2_SIZE                           equ 0001h
ANSEL_AN2_LENGTH                         equ 0001h
ANSEL_AN2_MASK                           equ 0004h
ANSEL_AN3_POSN                           equ 0003h
ANSEL_AN3_POSITION                       equ 0003h
ANSEL_AN3_SIZE                           equ 0001h
ANSEL_AN3_LENGTH                         equ 0001h
ANSEL_AN3_MASK                           equ 0008h
ANSEL_AN4_POSN                           equ 0004h
ANSEL_AN4_POSITION                       equ 0004h
ANSEL_AN4_SIZE                           equ 0001h
ANSEL_AN4_LENGTH                         equ 0001h
ANSEL_AN4_MASK                           equ 0010h
ANSEL_AN5_POSN                           equ 0005h
ANSEL_AN5_POSITION                       equ 0005h
ANSEL_AN5_SIZE                           equ 0001h
ANSEL_AN5_LENGTH                         equ 0001h
ANSEL_AN5_MASK                           equ 0020h
ANSEL_AN6_POSN                           equ 0006h
ANSEL_AN6_POSITION                       equ 0006h
ANSEL_AN6_SIZE                           equ 0001h
ANSEL_AN6_LENGTH                         equ 0001h
ANSEL_AN6_MASK                           equ 0040h
ANSEL_AN7_POSN                           equ 0007h
ANSEL_AN7_POSITION                       equ 0007h
ANSEL_AN7_SIZE                           equ 0001h
ANSEL_AN7_LENGTH                         equ 0001h
ANSEL_AN7_MASK                           equ 0080h

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
IOCB_IOCB_POSN                           equ 0004h
IOCB_IOCB_POSITION                       equ 0004h
IOCB_IOCB_SIZE                           equ 0004h
IOCB_IOCB_LENGTH                         equ 0004h
IOCB_IOCB_MASK                           equ 00F0h
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

// Register: CMCON1
#define CMCON1 CMCON1
CMCON1                                   equ 0097h
// bitfield definitions
CMCON1_C2SYNC_POSN                       equ 0000h
CMCON1_C2SYNC_POSITION                   equ 0000h
CMCON1_C2SYNC_SIZE                       equ 0001h
CMCON1_C2SYNC_LENGTH                     equ 0001h
CMCON1_C2SYNC_MASK                       equ 0001h
CMCON1_T1GSS_POSN                        equ 0001h
CMCON1_T1GSS_POSITION                    equ 0001h
CMCON1_T1GSS_SIZE                        equ 0001h
CMCON1_T1GSS_LENGTH                      equ 0001h
CMCON1_T1GSS_MASK                        equ 0002h

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

// Register: CMCON0
#define CMCON0 CMCON0
CMCON0                                   equ 009Ch
// bitfield definitions
CMCON0_CM_POSN                           equ 0000h
CMCON0_CM_POSITION                       equ 0000h
CMCON0_CM_SIZE                           equ 0003h
CMCON0_CM_LENGTH                         equ 0003h
CMCON0_CM_MASK                           equ 0007h
CMCON0_CIS_POSN                          equ 0003h
CMCON0_CIS_POSITION                      equ 0003h
CMCON0_CIS_SIZE                          equ 0001h
CMCON0_CIS_LENGTH                        equ 0001h
CMCON0_CIS_MASK                          equ 0008h
CMCON0_C1INV_POSN                        equ 0004h
CMCON0_C1INV_POSITION                    equ 0004h
CMCON0_C1INV_SIZE                        equ 0001h
CMCON0_C1INV_LENGTH                      equ 0001h
CMCON0_C1INV_MASK                        equ 0010h
CMCON0_C2INV_POSN                        equ 0005h
CMCON0_C2INV_POSITION                    equ 0005h
CMCON0_C2INV_SIZE                        equ 0001h
CMCON0_C2INV_LENGTH                      equ 0001h
CMCON0_C2INV_MASK                        equ 0020h
CMCON0_C1OUT_POSN                        equ 0006h
CMCON0_C1OUT_POSITION                    equ 0006h
CMCON0_C1OUT_SIZE                        equ 0001h
CMCON0_C1OUT_LENGTH                      equ 0001h
CMCON0_C1OUT_MASK                        equ 0040h
CMCON0_C2OUT_POSN                        equ 0007h
CMCON0_C2OUT_POSITION                    equ 0007h
CMCON0_C2OUT_SIZE                        equ 0001h
CMCON0_C2OUT_LENGTH                      equ 0001h
CMCON0_C2OUT_MASK                        equ 0080h
CMCON0_CM0_POSN                          equ 0000h
CMCON0_CM0_POSITION                      equ 0000h
CMCON0_CM0_SIZE                          equ 0001h
CMCON0_CM0_LENGTH                        equ 0001h
CMCON0_CM0_MASK                          equ 0001h
CMCON0_CM1_POSN                          equ 0001h
CMCON0_CM1_POSITION                      equ 0001h
CMCON0_CM1_SIZE                          equ 0001h
CMCON0_CM1_LENGTH                        equ 0001h
CMCON0_CM1_MASK                          equ 0002h
CMCON0_CM2_POSN                          equ 0002h
CMCON0_CM2_POSITION                      equ 0002h
CMCON0_CM2_SIZE                          equ 0001h
CMCON0_CM2_LENGTH                        equ 0001h
CMCON0_CM2_MASK                          equ 0004h

// Register: VRCON
#define VRCON VRCON
VRCON                                    equ 009Dh
// bitfield definitions
VRCON_VR_POSN                            equ 0000h
VRCON_VR_POSITION                        equ 0000h
VRCON_VR_SIZE                            equ 0004h
VRCON_VR_LENGTH                          equ 0004h
VRCON_VR_MASK                            equ 000Fh
VRCON_VRR_POSN                           equ 0005h
VRCON_VRR_POSITION                       equ 0005h
VRCON_VRR_SIZE                           equ 0001h
VRCON_VRR_LENGTH                         equ 0001h
VRCON_VRR_MASK                           equ 0020h
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

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 009Eh

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 009Fh
// bitfield definitions
ADCON1_ADCS_POSN                         equ 0004h
ADCON1_ADCS_POSITION                     equ 0004h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0070h
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
WDTCON_SWDTE_POSN                        equ 0000h
WDTCON_SWDTE_POSITION                    equ 0000h
WDTCON_SWDTE_SIZE                        equ 0001h
WDTCON_SWDTE_LENGTH                      equ 0001h
WDTCON_SWDTE_MASK                        equ 0001h
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

// Register: LCDCON
#define LCDCON LCDCON
LCDCON                                   equ 0107h
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
LCDCON_VLCDEN_POSN                       equ 0004h
LCDCON_VLCDEN_POSITION                   equ 0004h
LCDCON_VLCDEN_SIZE                       equ 0001h
LCDCON_VLCDEN_LENGTH                     equ 0001h
LCDCON_VLCDEN_MASK                       equ 0010h
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

// Register: LCDPS
#define LCDPS LCDPS
LCDPS                                    equ 0108h
// bitfield definitions
LCDPS_LP_POSN                            equ 0000h
LCDPS_LP_POSITION                        equ 0000h
LCDPS_LP_SIZE                            equ 0004h
LCDPS_LP_LENGTH                          equ 0004h
LCDPS_LP_MASK                            equ 000Fh
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

// Register: LVDCON
#define LVDCON LVDCON
LVDCON                                   equ 0109h
// bitfield definitions
LVDCON_LVDL_POSN                         equ 0000h
LVDCON_LVDL_POSITION                     equ 0000h
LVDCON_LVDL_SIZE                         equ 0003h
LVDCON_LVDL_LENGTH                       equ 0003h
LVDCON_LVDL_MASK                         equ 0007h
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

// Register: EEDATL
#define EEDATL EEDATL
EEDATL                                   equ 010Ch
// bitfield definitions
EEDATL_EEDATL_POSN                       equ 0000h
EEDATL_EEDATL_POSITION                   equ 0000h
EEDATL_EEDATL_SIZE                       equ 0008h
EEDATL_EEDATL_LENGTH                     equ 0008h
EEDATL_EEDATL_MASK                       equ 00FFh
EEDATL_EEDATL0_POSN                      equ 0000h
EEDATL_EEDATL0_POSITION                  equ 0000h
EEDATL_EEDATL0_SIZE                      equ 0001h
EEDATL_EEDATL0_LENGTH                    equ 0001h
EEDATL_EEDATL0_MASK                      equ 0001h
EEDATL_EEDATL1_POSN                      equ 0001h
EEDATL_EEDATL1_POSITION                  equ 0001h
EEDATL_EEDATL1_SIZE                      equ 0001h
EEDATL_EEDATL1_LENGTH                    equ 0001h
EEDATL_EEDATL1_MASK                      equ 0002h
EEDATL_EEDATL2_POSN                      equ 0002h
EEDATL_EEDATL2_POSITION                  equ 0002h
EEDATL_EEDATL2_SIZE                      equ 0001h
EEDATL_EEDATL2_LENGTH                    equ 0001h
EEDATL_EEDATL2_MASK                      equ 0004h
EEDATL_EEDATL3_POSN                      equ 0003h
EEDATL_EEDATL3_POSITION                  equ 0003h
EEDATL_EEDATL3_SIZE                      equ 0001h
EEDATL_EEDATL3_LENGTH                    equ 0001h
EEDATL_EEDATL3_MASK                      equ 0008h
EEDATL_EEDATL4_POSN                      equ 0004h
EEDATL_EEDATL4_POSITION                  equ 0004h
EEDATL_EEDATL4_SIZE                      equ 0001h
EEDATL_EEDATL4_LENGTH                    equ 0001h
EEDATL_EEDATL4_MASK                      equ 0010h
EEDATL_EEDATL5_POSN                      equ 0005h
EEDATL_EEDATL5_POSITION                  equ 0005h
EEDATL_EEDATL5_SIZE                      equ 0001h
EEDATL_EEDATL5_LENGTH                    equ 0001h
EEDATL_EEDATL5_MASK                      equ 0020h
EEDATL_EEDATL6_POSN                      equ 0006h
EEDATL_EEDATL6_POSITION                  equ 0006h
EEDATL_EEDATL6_SIZE                      equ 0001h
EEDATL_EEDATL6_LENGTH                    equ 0001h
EEDATL_EEDATL6_MASK                      equ 0040h
EEDATL_EEDATL7_POSN                      equ 0007h
EEDATL_EEDATL7_POSITION                  equ 0007h
EEDATL_EEDATL7_SIZE                      equ 0001h
EEDATL_EEDATL7_LENGTH                    equ 0001h
EEDATL_EEDATL7_MASK                      equ 0080h

// Register: EEADRL
#define EEADRL EEADRL
EEADRL                                   equ 010Dh
// bitfield definitions
EEADRL_EEADRL_POSN                       equ 0000h
EEADRL_EEADRL_POSITION                   equ 0000h
EEADRL_EEADRL_SIZE                       equ 0008h
EEADRL_EEADRL_LENGTH                     equ 0008h
EEADRL_EEADRL_MASK                       equ 00FFh
EEADRL_EEADRL0_POSN                      equ 0000h
EEADRL_EEADRL0_POSITION                  equ 0000h
EEADRL_EEADRL0_SIZE                      equ 0001h
EEADRL_EEADRL0_LENGTH                    equ 0001h
EEADRL_EEADRL0_MASK                      equ 0001h
EEADRL_EEADRL1_POSN                      equ 0001h
EEADRL_EEADRL1_POSITION                  equ 0001h
EEADRL_EEADRL1_SIZE                      equ 0001h
EEADRL_EEADRL1_LENGTH                    equ 0001h
EEADRL_EEADRL1_MASK                      equ 0002h
EEADRL_EEADRL2_POSN                      equ 0002h
EEADRL_EEADRL2_POSITION                  equ 0002h
EEADRL_EEADRL2_SIZE                      equ 0001h
EEADRL_EEADRL2_LENGTH                    equ 0001h
EEADRL_EEADRL2_MASK                      equ 0004h
EEADRL_EEADRL3_POSN                      equ 0003h
EEADRL_EEADRL3_POSITION                  equ 0003h
EEADRL_EEADRL3_SIZE                      equ 0001h
EEADRL_EEADRL3_LENGTH                    equ 0001h
EEADRL_EEADRL3_MASK                      equ 0008h
EEADRL_EEADRL4_POSN                      equ 0004h
EEADRL_EEADRL4_POSITION                  equ 0004h
EEADRL_EEADRL4_SIZE                      equ 0001h
EEADRL_EEADRL4_LENGTH                    equ 0001h
EEADRL_EEADRL4_MASK                      equ 0010h
EEADRL_EEADRL5_POSN                      equ 0005h
EEADRL_EEADRL5_POSITION                  equ 0005h
EEADRL_EEADRL5_SIZE                      equ 0001h
EEADRL_EEADRL5_LENGTH                    equ 0001h
EEADRL_EEADRL5_MASK                      equ 0020h
EEADRL_EEADRL6_POSN                      equ 0006h
EEADRL_EEADRL6_POSITION                  equ 0006h
EEADRL_EEADRL6_SIZE                      equ 0001h
EEADRL_EEADRL6_LENGTH                    equ 0001h
EEADRL_EEADRL6_MASK                      equ 0040h
EEADRL_EEADRL7_POSN                      equ 0007h
EEADRL_EEADRL7_POSITION                  equ 0007h
EEADRL_EEADRL7_SIZE                      equ 0001h
EEADRL_EEADRL7_LENGTH                    equ 0001h
EEADRL_EEADRL7_MASK                      equ 0080h

// Register: EEDATH
#define EEDATH EEDATH
EEDATH                                   equ 010Eh
// bitfield definitions
EEDATH_EEDATH0_POSN                      equ 0000h
EEDATH_EEDATH0_POSITION                  equ 0000h
EEDATH_EEDATH0_SIZE                      equ 0001h
EEDATH_EEDATH0_LENGTH                    equ 0001h
EEDATH_EEDATH0_MASK                      equ 0001h
EEDATH_EEDATH1_POSN                      equ 0001h
EEDATH_EEDATH1_POSITION                  equ 0001h
EEDATH_EEDATH1_SIZE                      equ 0001h
EEDATH_EEDATH1_LENGTH                    equ 0001h
EEDATH_EEDATH1_MASK                      equ 0002h
EEDATH_EEDATH2_POSN                      equ 0002h
EEDATH_EEDATH2_POSITION                  equ 0002h
EEDATH_EEDATH2_SIZE                      equ 0001h
EEDATH_EEDATH2_LENGTH                    equ 0001h
EEDATH_EEDATH2_MASK                      equ 0004h
EEDATH_EEDATH3_POSN                      equ 0003h
EEDATH_EEDATH3_POSITION                  equ 0003h
EEDATH_EEDATH3_SIZE                      equ 0001h
EEDATH_EEDATH3_LENGTH                    equ 0001h
EEDATH_EEDATH3_MASK                      equ 0008h
EEDATH_EEDATH4_POSN                      equ 0004h
EEDATH_EEDATH4_POSITION                  equ 0004h
EEDATH_EEDATH4_SIZE                      equ 0001h
EEDATH_EEDATH4_LENGTH                    equ 0001h
EEDATH_EEDATH4_MASK                      equ 0010h
EEDATH_EEDATH5_POSN                      equ 0005h
EEDATH_EEDATH5_POSITION                  equ 0005h
EEDATH_EEDATH5_SIZE                      equ 0001h
EEDATH_EEDATH5_LENGTH                    equ 0001h
EEDATH_EEDATH5_MASK                      equ 0020h

// Register: EEADRH
#define EEADRH EEADRH
EEADRH                                   equ 010Fh
// bitfield definitions
EEADRH_EEADRH0_POSN                      equ 0000h
EEADRH_EEADRH0_POSITION                  equ 0000h
EEADRH_EEADRH0_SIZE                      equ 0001h
EEADRH_EEADRH0_LENGTH                    equ 0001h
EEADRH_EEADRH0_MASK                      equ 0001h
EEADRH_EEADRH1_POSN                      equ 0001h
EEADRH_EEADRH1_POSITION                  equ 0001h
EEADRH_EEADRH1_SIZE                      equ 0001h
EEADRH_EEADRH1_LENGTH                    equ 0001h
EEADRH_EEADRH1_MASK                      equ 0002h
EEADRH_EEADRH2_POSN                      equ 0002h
EEADRH_EEADRH2_POSITION                  equ 0002h
EEADRH_EEADRH2_SIZE                      equ 0001h
EEADRH_EEADRH2_LENGTH                    equ 0001h
EEADRH_EEADRH2_MASK                      equ 0004h
EEADRH_EEADRH3_POSN                      equ 0003h
EEADRH_EEADRH3_POSITION                  equ 0003h
EEADRH_EEADRH3_SIZE                      equ 0001h
EEADRH_EEADRH3_LENGTH                    equ 0001h
EEADRH_EEADRH3_MASK                      equ 0008h
EEADRH_EEADRH4_POSN                      equ 0004h
EEADRH_EEADRH4_POSITION                  equ 0004h
EEADRH_EEADRH4_SIZE                      equ 0001h
EEADRH_EEADRH4_LENGTH                    equ 0001h
EEADRH_EEADRH4_MASK                      equ 0010h

// Register: LCDDATA0
#define LCDDATA0 LCDDATA0
LCDDATA0                                 equ 0110h
// bitfield definitions
LCDDATA0_SEG0_POSN                       equ 0000h
LCDDATA0_SEG0_POSITION                   equ 0000h
LCDDATA0_SEG0_SIZE                       equ 0001h
LCDDATA0_SEG0_LENGTH                     equ 0001h
LCDDATA0_SEG0_MASK                       equ 0001h
LCDDATA0_SEG1_POSN                       equ 0001h
LCDDATA0_SEG1_POSITION                   equ 0001h
LCDDATA0_SEG1_SIZE                       equ 0001h
LCDDATA0_SEG1_LENGTH                     equ 0001h
LCDDATA0_SEG1_MASK                       equ 0002h
LCDDATA0_SEG2_POSN                       equ 0002h
LCDDATA0_SEG2_POSITION                   equ 0002h
LCDDATA0_SEG2_SIZE                       equ 0001h
LCDDATA0_SEG2_LENGTH                     equ 0001h
LCDDATA0_SEG2_MASK                       equ 0004h
LCDDATA0_SEG3_POSN                       equ 0003h
LCDDATA0_SEG3_POSITION                   equ 0003h
LCDDATA0_SEG3_SIZE                       equ 0001h
LCDDATA0_SEG3_LENGTH                     equ 0001h
LCDDATA0_SEG3_MASK                       equ 0008h
LCDDATA0_SEG4_POSN                       equ 0004h
LCDDATA0_SEG4_POSITION                   equ 0004h
LCDDATA0_SEG4_SIZE                       equ 0001h
LCDDATA0_SEG4_LENGTH                     equ 0001h
LCDDATA0_SEG4_MASK                       equ 0010h
LCDDATA0_SEG5_POSN                       equ 0005h
LCDDATA0_SEG5_POSITION                   equ 0005h
LCDDATA0_SEG5_SIZE                       equ 0001h
LCDDATA0_SEG5_LENGTH                     equ 0001h
LCDDATA0_SEG5_MASK                       equ 0020h
LCDDATA0_SEG6_POSN                       equ 0006h
LCDDATA0_SEG6_POSITION                   equ 0006h
LCDDATA0_SEG6_SIZE                       equ 0001h
LCDDATA0_SEG6_LENGTH                     equ 0001h
LCDDATA0_SEG6_MASK                       equ 0040h
LCDDATA0_SEG7_POSN                       equ 0007h
LCDDATA0_SEG7_POSITION                   equ 0007h
LCDDATA0_SEG7_SIZE                       equ 0001h
LCDDATA0_SEG7_LENGTH                     equ 0001h
LCDDATA0_SEG7_MASK                       equ 0080h
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
LCDDATA0_S0C0_POSN                       equ 0000h
LCDDATA0_S0C0_POSITION                   equ 0000h
LCDDATA0_S0C0_SIZE                       equ 0001h
LCDDATA0_S0C0_LENGTH                     equ 0001h
LCDDATA0_S0C0_MASK                       equ 0001h
LCDDATA0_S1C0_POSN                       equ 0001h
LCDDATA0_S1C0_POSITION                   equ 0001h
LCDDATA0_S1C0_SIZE                       equ 0001h
LCDDATA0_S1C0_LENGTH                     equ 0001h
LCDDATA0_S1C0_MASK                       equ 0002h
LCDDATA0_S2C0_POSN                       equ 0002h
LCDDATA0_S2C0_POSITION                   equ 0002h
LCDDATA0_S2C0_SIZE                       equ 0001h
LCDDATA0_S2C0_LENGTH                     equ 0001h
LCDDATA0_S2C0_MASK                       equ 0004h
LCDDATA0_S3C0_POSN                       equ 0003h
LCDDATA0_S3C0_POSITION                   equ 0003h
LCDDATA0_S3C0_SIZE                       equ 0001h
LCDDATA0_S3C0_LENGTH                     equ 0001h
LCDDATA0_S3C0_MASK                       equ 0008h
LCDDATA0_S4C0_POSN                       equ 0004h
LCDDATA0_S4C0_POSITION                   equ 0004h
LCDDATA0_S4C0_SIZE                       equ 0001h
LCDDATA0_S4C0_LENGTH                     equ 0001h
LCDDATA0_S4C0_MASK                       equ 0010h
LCDDATA0_S5C0_POSN                       equ 0005h
LCDDATA0_S5C0_POSITION                   equ 0005h
LCDDATA0_S5C0_SIZE                       equ 0001h
LCDDATA0_S5C0_LENGTH                     equ 0001h
LCDDATA0_S5C0_MASK                       equ 0020h
LCDDATA0_S6C0_POSN                       equ 0006h
LCDDATA0_S6C0_POSITION                   equ 0006h
LCDDATA0_S6C0_SIZE                       equ 0001h
LCDDATA0_S6C0_LENGTH                     equ 0001h
LCDDATA0_S6C0_MASK                       equ 0040h
LCDDATA0_S7C0_POSN                       equ 0007h
LCDDATA0_S7C0_POSITION                   equ 0007h
LCDDATA0_S7C0_SIZE                       equ 0001h
LCDDATA0_S7C0_LENGTH                     equ 0001h
LCDDATA0_S7C0_MASK                       equ 0080h

// Register: LCDDATA1
#define LCDDATA1 LCDDATA1
LCDDATA1                                 equ 0111h
// bitfield definitions
LCDDATA1_SEG8_POSN                       equ 0000h
LCDDATA1_SEG8_POSITION                   equ 0000h
LCDDATA1_SEG8_SIZE                       equ 0001h
LCDDATA1_SEG8_LENGTH                     equ 0001h
LCDDATA1_SEG8_MASK                       equ 0001h
LCDDATA1_SEG9_POSN                       equ 0001h
LCDDATA1_SEG9_POSITION                   equ 0001h
LCDDATA1_SEG9_SIZE                       equ 0001h
LCDDATA1_SEG9_LENGTH                     equ 0001h
LCDDATA1_SEG9_MASK                       equ 0002h
LCDDATA1_SEG10_POSN                      equ 0002h
LCDDATA1_SEG10_POSITION                  equ 0002h
LCDDATA1_SEG10_SIZE                      equ 0001h
LCDDATA1_SEG10_LENGTH                    equ 0001h
LCDDATA1_SEG10_MASK                      equ 0004h
LCDDATA1_SEG11_POSN                      equ 0003h
LCDDATA1_SEG11_POSITION                  equ 0003h
LCDDATA1_SEG11_SIZE                      equ 0001h
LCDDATA1_SEG11_LENGTH                    equ 0001h
LCDDATA1_SEG11_MASK                      equ 0008h
LCDDATA1_SEG12_POSN                      equ 0004h
LCDDATA1_SEG12_POSITION                  equ 0004h
LCDDATA1_SEG12_SIZE                      equ 0001h
LCDDATA1_SEG12_LENGTH                    equ 0001h
LCDDATA1_SEG12_MASK                      equ 0010h
LCDDATA1_SEG13_POSN                      equ 0005h
LCDDATA1_SEG13_POSITION                  equ 0005h
LCDDATA1_SEG13_SIZE                      equ 0001h
LCDDATA1_SEG13_LENGTH                    equ 0001h
LCDDATA1_SEG13_MASK                      equ 0020h
LCDDATA1_SEG14_POSN                      equ 0006h
LCDDATA1_SEG14_POSITION                  equ 0006h
LCDDATA1_SEG14_SIZE                      equ 0001h
LCDDATA1_SEG14_LENGTH                    equ 0001h
LCDDATA1_SEG14_MASK                      equ 0040h
LCDDATA1_SEG15_POSN                      equ 0007h
LCDDATA1_SEG15_POSITION                  equ 0007h
LCDDATA1_SEG15_SIZE                      equ 0001h
LCDDATA1_SEG15_LENGTH                    equ 0001h
LCDDATA1_SEG15_MASK                      equ 0080h
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
LCDDATA1_S8C0_POSN                       equ 0000h
LCDDATA1_S8C0_POSITION                   equ 0000h
LCDDATA1_S8C0_SIZE                       equ 0001h
LCDDATA1_S8C0_LENGTH                     equ 0001h
LCDDATA1_S8C0_MASK                       equ 0001h
LCDDATA1_S9C0_POSN                       equ 0001h
LCDDATA1_S9C0_POSITION                   equ 0001h
LCDDATA1_S9C0_SIZE                       equ 0001h
LCDDATA1_S9C0_LENGTH                     equ 0001h
LCDDATA1_S9C0_MASK                       equ 0002h
LCDDATA1_S10C0_POSN                      equ 0002h
LCDDATA1_S10C0_POSITION                  equ 0002h
LCDDATA1_S10C0_SIZE                      equ 0001h
LCDDATA1_S10C0_LENGTH                    equ 0001h
LCDDATA1_S10C0_MASK                      equ 0004h
LCDDATA1_S11C0_POSN                      equ 0003h
LCDDATA1_S11C0_POSITION                  equ 0003h
LCDDATA1_S11C0_SIZE                      equ 0001h
LCDDATA1_S11C0_LENGTH                    equ 0001h
LCDDATA1_S11C0_MASK                      equ 0008h
LCDDATA1_S12C0_POSN                      equ 0004h
LCDDATA1_S12C0_POSITION                  equ 0004h
LCDDATA1_S12C0_SIZE                      equ 0001h
LCDDATA1_S12C0_LENGTH                    equ 0001h
LCDDATA1_S12C0_MASK                      equ 0010h
LCDDATA1_S13C0_POSN                      equ 0005h
LCDDATA1_S13C0_POSITION                  equ 0005h
LCDDATA1_S13C0_SIZE                      equ 0001h
LCDDATA1_S13C0_LENGTH                    equ 0001h
LCDDATA1_S13C0_MASK                      equ 0020h
LCDDATA1_S14C0_POSN                      equ 0006h
LCDDATA1_S14C0_POSITION                  equ 0006h
LCDDATA1_S14C0_SIZE                      equ 0001h
LCDDATA1_S14C0_LENGTH                    equ 0001h
LCDDATA1_S14C0_MASK                      equ 0040h
LCDDATA1_S15C0_POSN                      equ 0007h
LCDDATA1_S15C0_POSITION                  equ 0007h
LCDDATA1_S15C0_SIZE                      equ 0001h
LCDDATA1_S15C0_LENGTH                    equ 0001h
LCDDATA1_S15C0_MASK                      equ 0080h

// Register: LCDDATA2
#define LCDDATA2 LCDDATA2
LCDDATA2                                 equ 0112h
// bitfield definitions
LCDDATA2_SEG16_POSN                      equ 0000h
LCDDATA2_SEG16_POSITION                  equ 0000h
LCDDATA2_SEG16_SIZE                      equ 0001h
LCDDATA2_SEG16_LENGTH                    equ 0001h
LCDDATA2_SEG16_MASK                      equ 0001h
LCDDATA2_SEG17_POSN                      equ 0001h
LCDDATA2_SEG17_POSITION                  equ 0001h
LCDDATA2_SEG17_SIZE                      equ 0001h
LCDDATA2_SEG17_LENGTH                    equ 0001h
LCDDATA2_SEG17_MASK                      equ 0002h
LCDDATA2_SEG18_POSN                      equ 0002h
LCDDATA2_SEG18_POSITION                  equ 0002h
LCDDATA2_SEG18_SIZE                      equ 0001h
LCDDATA2_SEG18_LENGTH                    equ 0001h
LCDDATA2_SEG18_MASK                      equ 0004h
LCDDATA2_SEG19_POSN                      equ 0003h
LCDDATA2_SEG19_POSITION                  equ 0003h
LCDDATA2_SEG19_SIZE                      equ 0001h
LCDDATA2_SEG19_LENGTH                    equ 0001h
LCDDATA2_SEG19_MASK                      equ 0008h
LCDDATA2_SEG20_POSN                      equ 0004h
LCDDATA2_SEG20_POSITION                  equ 0004h
LCDDATA2_SEG20_SIZE                      equ 0001h
LCDDATA2_SEG20_LENGTH                    equ 0001h
LCDDATA2_SEG20_MASK                      equ 0010h
LCDDATA2_SEG21_POSN                      equ 0005h
LCDDATA2_SEG21_POSITION                  equ 0005h
LCDDATA2_SEG21_SIZE                      equ 0001h
LCDDATA2_SEG21_LENGTH                    equ 0001h
LCDDATA2_SEG21_MASK                      equ 0020h
LCDDATA2_SEG22_POSN                      equ 0006h
LCDDATA2_SEG22_POSITION                  equ 0006h
LCDDATA2_SEG22_SIZE                      equ 0001h
LCDDATA2_SEG22_LENGTH                    equ 0001h
LCDDATA2_SEG22_MASK                      equ 0040h
LCDDATA2_SEG23_POSN                      equ 0007h
LCDDATA2_SEG23_POSITION                  equ 0007h
LCDDATA2_SEG23_SIZE                      equ 0001h
LCDDATA2_SEG23_LENGTH                    equ 0001h
LCDDATA2_SEG23_MASK                      equ 0080h
LCDDATA2_SEG16COM0_POSN                  equ 0000h
LCDDATA2_SEG16COM0_POSITION              equ 0000h
LCDDATA2_SEG16COM0_SIZE                  equ 0001h
LCDDATA2_SEG16COM0_LENGTH                equ 0001h
LCDDATA2_SEG16COM0_MASK                  equ 0001h
LCDDATA2_SEG17COM0_POSN                  equ 0001h
LCDDATA2_SEG17COM0_POSITION              equ 0001h
LCDDATA2_SEG17COM0_SIZE                  equ 0001h
LCDDATA2_SEG17COM0_LENGTH                equ 0001h
LCDDATA2_SEG17COM0_MASK                  equ 0002h
LCDDATA2_SEG18COM0_POSN                  equ 0002h
LCDDATA2_SEG18COM0_POSITION              equ 0002h
LCDDATA2_SEG18COM0_SIZE                  equ 0001h
LCDDATA2_SEG18COM0_LENGTH                equ 0001h
LCDDATA2_SEG18COM0_MASK                  equ 0004h
LCDDATA2_SEG19COM0_POSN                  equ 0003h
LCDDATA2_SEG19COM0_POSITION              equ 0003h
LCDDATA2_SEG19COM0_SIZE                  equ 0001h
LCDDATA2_SEG19COM0_LENGTH                equ 0001h
LCDDATA2_SEG19COM0_MASK                  equ 0008h
LCDDATA2_SEG20COM0_POSN                  equ 0004h
LCDDATA2_SEG20COM0_POSITION              equ 0004h
LCDDATA2_SEG20COM0_SIZE                  equ 0001h
LCDDATA2_SEG20COM0_LENGTH                equ 0001h
LCDDATA2_SEG20COM0_MASK                  equ 0010h
LCDDATA2_SEG21COM0_POSN                  equ 0005h
LCDDATA2_SEG21COM0_POSITION              equ 0005h
LCDDATA2_SEG21COM0_SIZE                  equ 0001h
LCDDATA2_SEG21COM0_LENGTH                equ 0001h
LCDDATA2_SEG21COM0_MASK                  equ 0020h
LCDDATA2_SEG22COM0_POSN                  equ 0006h
LCDDATA2_SEG22COM0_POSITION              equ 0006h
LCDDATA2_SEG22COM0_SIZE                  equ 0001h
LCDDATA2_SEG22COM0_LENGTH                equ 0001h
LCDDATA2_SEG22COM0_MASK                  equ 0040h
LCDDATA2_SEG23COM0_POSN                  equ 0007h
LCDDATA2_SEG23COM0_POSITION              equ 0007h
LCDDATA2_SEG23COM0_SIZE                  equ 0001h
LCDDATA2_SEG23COM0_LENGTH                equ 0001h
LCDDATA2_SEG23COM0_MASK                  equ 0080h
LCDDATA2_S16C0_POSN                      equ 0000h
LCDDATA2_S16C0_POSITION                  equ 0000h
LCDDATA2_S16C0_SIZE                      equ 0001h
LCDDATA2_S16C0_LENGTH                    equ 0001h
LCDDATA2_S16C0_MASK                      equ 0001h
LCDDATA2_S17C0_POSN                      equ 0001h
LCDDATA2_S17C0_POSITION                  equ 0001h
LCDDATA2_S17C0_SIZE                      equ 0001h
LCDDATA2_S17C0_LENGTH                    equ 0001h
LCDDATA2_S17C0_MASK                      equ 0002h
LCDDATA2_S18C0_POSN                      equ 0002h
LCDDATA2_S18C0_POSITION                  equ 0002h
LCDDATA2_S18C0_SIZE                      equ 0001h
LCDDATA2_S18C0_LENGTH                    equ 0001h
LCDDATA2_S18C0_MASK                      equ 0004h
LCDDATA2_S19C0_POSN                      equ 0003h
LCDDATA2_S19C0_POSITION                  equ 0003h
LCDDATA2_S19C0_SIZE                      equ 0001h
LCDDATA2_S19C0_LENGTH                    equ 0001h
LCDDATA2_S19C0_MASK                      equ 0008h
LCDDATA2_S20C0_POSN                      equ 0004h
LCDDATA2_S20C0_POSITION                  equ 0004h
LCDDATA2_S20C0_SIZE                      equ 0001h
LCDDATA2_S20C0_LENGTH                    equ 0001h
LCDDATA2_S20C0_MASK                      equ 0010h
LCDDATA2_S21C0_POSN                      equ 0005h
LCDDATA2_S21C0_POSITION                  equ 0005h
LCDDATA2_S21C0_SIZE                      equ 0001h
LCDDATA2_S21C0_LENGTH                    equ 0001h
LCDDATA2_S21C0_MASK                      equ 0020h
LCDDATA2_S22C0_POSN                      equ 0006h
LCDDATA2_S22C0_POSITION                  equ 0006h
LCDDATA2_S22C0_SIZE                      equ 0001h
LCDDATA2_S22C0_LENGTH                    equ 0001h
LCDDATA2_S22C0_MASK                      equ 0040h
LCDDATA2_S23C0_POSN                      equ 0007h
LCDDATA2_S23C0_POSITION                  equ 0007h
LCDDATA2_S23C0_SIZE                      equ 0001h
LCDDATA2_S23C0_LENGTH                    equ 0001h
LCDDATA2_S23C0_MASK                      equ 0080h

// Register: LCDDATA3
#define LCDDATA3 LCDDATA3
LCDDATA3                                 equ 0113h
// bitfield definitions
LCDDATA3_SEG0_POSN                       equ 0000h
LCDDATA3_SEG0_POSITION                   equ 0000h
LCDDATA3_SEG0_SIZE                       equ 0001h
LCDDATA3_SEG0_LENGTH                     equ 0001h
LCDDATA3_SEG0_MASK                       equ 0001h
LCDDATA3_SEG1_POSN                       equ 0001h
LCDDATA3_SEG1_POSITION                   equ 0001h
LCDDATA3_SEG1_SIZE                       equ 0001h
LCDDATA3_SEG1_LENGTH                     equ 0001h
LCDDATA3_SEG1_MASK                       equ 0002h
LCDDATA3_SEG2_POSN                       equ 0002h
LCDDATA3_SEG2_POSITION                   equ 0002h
LCDDATA3_SEG2_SIZE                       equ 0001h
LCDDATA3_SEG2_LENGTH                     equ 0001h
LCDDATA3_SEG2_MASK                       equ 0004h
LCDDATA3_SEG3_POSN                       equ 0003h
LCDDATA3_SEG3_POSITION                   equ 0003h
LCDDATA3_SEG3_SIZE                       equ 0001h
LCDDATA3_SEG3_LENGTH                     equ 0001h
LCDDATA3_SEG3_MASK                       equ 0008h
LCDDATA3_SEG4_POSN                       equ 0004h
LCDDATA3_SEG4_POSITION                   equ 0004h
LCDDATA3_SEG4_SIZE                       equ 0001h
LCDDATA3_SEG4_LENGTH                     equ 0001h
LCDDATA3_SEG4_MASK                       equ 0010h
LCDDATA3_SEG5_POSN                       equ 0005h
LCDDATA3_SEG5_POSITION                   equ 0005h
LCDDATA3_SEG5_SIZE                       equ 0001h
LCDDATA3_SEG5_LENGTH                     equ 0001h
LCDDATA3_SEG5_MASK                       equ 0020h
LCDDATA3_SEG6_POSN                       equ 0006h
LCDDATA3_SEG6_POSITION                   equ 0006h
LCDDATA3_SEG6_SIZE                       equ 0001h
LCDDATA3_SEG6_LENGTH                     equ 0001h
LCDDATA3_SEG6_MASK                       equ 0040h
LCDDATA3_SEG7_POSN                       equ 0007h
LCDDATA3_SEG7_POSITION                   equ 0007h
LCDDATA3_SEG7_SIZE                       equ 0001h
LCDDATA3_SEG7_LENGTH                     equ 0001h
LCDDATA3_SEG7_MASK                       equ 0080h
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
LCDDATA3_S0C1_POSN                       equ 0000h
LCDDATA3_S0C1_POSITION                   equ 0000h
LCDDATA3_S0C1_SIZE                       equ 0001h
LCDDATA3_S0C1_LENGTH                     equ 0001h
LCDDATA3_S0C1_MASK                       equ 0001h
LCDDATA3_S1C1_POSN                       equ 0001h
LCDDATA3_S1C1_POSITION                   equ 0001h
LCDDATA3_S1C1_SIZE                       equ 0001h
LCDDATA3_S1C1_LENGTH                     equ 0001h
LCDDATA3_S1C1_MASK                       equ 0002h
LCDDATA3_S2C1_POSN                       equ 0002h
LCDDATA3_S2C1_POSITION                   equ 0002h
LCDDATA3_S2C1_SIZE                       equ 0001h
LCDDATA3_S2C1_LENGTH                     equ 0001h
LCDDATA3_S2C1_MASK                       equ 0004h
LCDDATA3_S3C1_POSN                       equ 0003h
LCDDATA3_S3C1_POSITION                   equ 0003h
LCDDATA3_S3C1_SIZE                       equ 0001h
LCDDATA3_S3C1_LENGTH                     equ 0001h
LCDDATA3_S3C1_MASK                       equ 0008h
LCDDATA3_S4C1_POSN                       equ 0004h
LCDDATA3_S4C1_POSITION                   equ 0004h
LCDDATA3_S4C1_SIZE                       equ 0001h
LCDDATA3_S4C1_LENGTH                     equ 0001h
LCDDATA3_S4C1_MASK                       equ 0010h
LCDDATA3_S5C1_POSN                       equ 0005h
LCDDATA3_S5C1_POSITION                   equ 0005h
LCDDATA3_S5C1_SIZE                       equ 0001h
LCDDATA3_S5C1_LENGTH                     equ 0001h
LCDDATA3_S5C1_MASK                       equ 0020h
LCDDATA3_S6C1_POSN                       equ 0006h
LCDDATA3_S6C1_POSITION                   equ 0006h
LCDDATA3_S6C1_SIZE                       equ 0001h
LCDDATA3_S6C1_LENGTH                     equ 0001h
LCDDATA3_S6C1_MASK                       equ 0040h
LCDDATA3_S7C1_POSN                       equ 0007h
LCDDATA3_S7C1_POSITION                   equ 0007h
LCDDATA3_S7C1_SIZE                       equ 0001h
LCDDATA3_S7C1_LENGTH                     equ 0001h
LCDDATA3_S7C1_MASK                       equ 0080h

// Register: LCDDATA4
#define LCDDATA4 LCDDATA4
LCDDATA4                                 equ 0114h
// bitfield definitions
LCDDATA4_SEG8_POSN                       equ 0000h
LCDDATA4_SEG8_POSITION                   equ 0000h
LCDDATA4_SEG8_SIZE                       equ 0001h
LCDDATA4_SEG8_LENGTH                     equ 0001h
LCDDATA4_SEG8_MASK                       equ 0001h
LCDDATA4_SEG9_POSN                       equ 0001h
LCDDATA4_SEG9_POSITION                   equ 0001h
LCDDATA4_SEG9_SIZE                       equ 0001h
LCDDATA4_SEG9_LENGTH                     equ 0001h
LCDDATA4_SEG9_MASK                       equ 0002h
LCDDATA4_SEG10_POSN                      equ 0002h
LCDDATA4_SEG10_POSITION                  equ 0002h
LCDDATA4_SEG10_SIZE                      equ 0001h
LCDDATA4_SEG10_LENGTH                    equ 0001h
LCDDATA4_SEG10_MASK                      equ 0004h
LCDDATA4_SEG11_POSN                      equ 0003h
LCDDATA4_SEG11_POSITION                  equ 0003h
LCDDATA4_SEG11_SIZE                      equ 0001h
LCDDATA4_SEG11_LENGTH                    equ 0001h
LCDDATA4_SEG11_MASK                      equ 0008h
LCDDATA4_SEG12_POSN                      equ 0004h
LCDDATA4_SEG12_POSITION                  equ 0004h
LCDDATA4_SEG12_SIZE                      equ 0001h
LCDDATA4_SEG12_LENGTH                    equ 0001h
LCDDATA4_SEG12_MASK                      equ 0010h
LCDDATA4_SEG13_POSN                      equ 0005h
LCDDATA4_SEG13_POSITION                  equ 0005h
LCDDATA4_SEG13_SIZE                      equ 0001h
LCDDATA4_SEG13_LENGTH                    equ 0001h
LCDDATA4_SEG13_MASK                      equ 0020h
LCDDATA4_SEG14_POSN                      equ 0006h
LCDDATA4_SEG14_POSITION                  equ 0006h
LCDDATA4_SEG14_SIZE                      equ 0001h
LCDDATA4_SEG14_LENGTH                    equ 0001h
LCDDATA4_SEG14_MASK                      equ 0040h
LCDDATA4_SEG15_POSN                      equ 0007h
LCDDATA4_SEG15_POSITION                  equ 0007h
LCDDATA4_SEG15_SIZE                      equ 0001h
LCDDATA4_SEG15_LENGTH                    equ 0001h
LCDDATA4_SEG15_MASK                      equ 0080h
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
LCDDATA4_S8C1_POSN                       equ 0000h
LCDDATA4_S8C1_POSITION                   equ 0000h
LCDDATA4_S8C1_SIZE                       equ 0001h
LCDDATA4_S8C1_LENGTH                     equ 0001h
LCDDATA4_S8C1_MASK                       equ 0001h
LCDDATA4_S9C1_POSN                       equ 0001h
LCDDATA4_S9C1_POSITION                   equ 0001h
LCDDATA4_S9C1_SIZE                       equ 0001h
LCDDATA4_S9C1_LENGTH                     equ 0001h
LCDDATA4_S9C1_MASK                       equ 0002h
LCDDATA4_S10C1_POSN                      equ 0002h
LCDDATA4_S10C1_POSITION                  equ 0002h
LCDDATA4_S10C1_SIZE                      equ 0001h
LCDDATA4_S10C1_LENGTH                    equ 0001h
LCDDATA4_S10C1_MASK                      equ 0004h
LCDDATA4_S11C1_POSN                      equ 0003h
LCDDATA4_S11C1_POSITION                  equ 0003h
LCDDATA4_S11C1_SIZE                      equ 0001h
LCDDATA4_S11C1_LENGTH                    equ 0001h
LCDDATA4_S11C1_MASK                      equ 0008h
LCDDATA4_S12C1_POSN                      equ 0004h
LCDDATA4_S12C1_POSITION                  equ 0004h
LCDDATA4_S12C1_SIZE                      equ 0001h
LCDDATA4_S12C1_LENGTH                    equ 0001h
LCDDATA4_S12C1_MASK                      equ 0010h
LCDDATA4_S13C1_POSN                      equ 0005h
LCDDATA4_S13C1_POSITION                  equ 0005h
LCDDATA4_S13C1_SIZE                      equ 0001h
LCDDATA4_S13C1_LENGTH                    equ 0001h
LCDDATA4_S13C1_MASK                      equ 0020h
LCDDATA4_S14C1_POSN                      equ 0006h
LCDDATA4_S14C1_POSITION                  equ 0006h
LCDDATA4_S14C1_SIZE                      equ 0001h
LCDDATA4_S14C1_LENGTH                    equ 0001h
LCDDATA4_S14C1_MASK                      equ 0040h
LCDDATA4_S15C1_POSN                      equ 0007h
LCDDATA4_S15C1_POSITION                  equ 0007h
LCDDATA4_S15C1_SIZE                      equ 0001h
LCDDATA4_S15C1_LENGTH                    equ 0001h
LCDDATA4_S15C1_MASK                      equ 0080h

// Register: LCDDATA5
#define LCDDATA5 LCDDATA5
LCDDATA5                                 equ 0115h
// bitfield definitions
LCDDATA5_SEG16_POSN                      equ 0000h
LCDDATA5_SEG16_POSITION                  equ 0000h
LCDDATA5_SEG16_SIZE                      equ 0001h
LCDDATA5_SEG16_LENGTH                    equ 0001h
LCDDATA5_SEG16_MASK                      equ 0001h
LCDDATA5_SEG17_POSN                      equ 0001h
LCDDATA5_SEG17_POSITION                  equ 0001h
LCDDATA5_SEG17_SIZE                      equ 0001h
LCDDATA5_SEG17_LENGTH                    equ 0001h
LCDDATA5_SEG17_MASK                      equ 0002h
LCDDATA5_SEG18_POSN                      equ 0002h
LCDDATA5_SEG18_POSITION                  equ 0002h
LCDDATA5_SEG18_SIZE                      equ 0001h
LCDDATA5_SEG18_LENGTH                    equ 0001h
LCDDATA5_SEG18_MASK                      equ 0004h
LCDDATA5_SEG19_POSN                      equ 0003h
LCDDATA5_SEG19_POSITION                  equ 0003h
LCDDATA5_SEG19_SIZE                      equ 0001h
LCDDATA5_SEG19_LENGTH                    equ 0001h
LCDDATA5_SEG19_MASK                      equ 0008h
LCDDATA5_SEG20_POSN                      equ 0004h
LCDDATA5_SEG20_POSITION                  equ 0004h
LCDDATA5_SEG20_SIZE                      equ 0001h
LCDDATA5_SEG20_LENGTH                    equ 0001h
LCDDATA5_SEG20_MASK                      equ 0010h
LCDDATA5_SEG21_POSN                      equ 0005h
LCDDATA5_SEG21_POSITION                  equ 0005h
LCDDATA5_SEG21_SIZE                      equ 0001h
LCDDATA5_SEG21_LENGTH                    equ 0001h
LCDDATA5_SEG21_MASK                      equ 0020h
LCDDATA5_SEG22_POSN                      equ 0006h
LCDDATA5_SEG22_POSITION                  equ 0006h
LCDDATA5_SEG22_SIZE                      equ 0001h
LCDDATA5_SEG22_LENGTH                    equ 0001h
LCDDATA5_SEG22_MASK                      equ 0040h
LCDDATA5_SEG23_POSN                      equ 0007h
LCDDATA5_SEG23_POSITION                  equ 0007h
LCDDATA5_SEG23_SIZE                      equ 0001h
LCDDATA5_SEG23_LENGTH                    equ 0001h
LCDDATA5_SEG23_MASK                      equ 0080h
LCDDATA5_SEG16COM1_POSN                  equ 0000h
LCDDATA5_SEG16COM1_POSITION              equ 0000h
LCDDATA5_SEG16COM1_SIZE                  equ 0001h
LCDDATA5_SEG16COM1_LENGTH                equ 0001h
LCDDATA5_SEG16COM1_MASK                  equ 0001h
LCDDATA5_SEG17COM1_POSN                  equ 0001h
LCDDATA5_SEG17COM1_POSITION              equ 0001h
LCDDATA5_SEG17COM1_SIZE                  equ 0001h
LCDDATA5_SEG17COM1_LENGTH                equ 0001h
LCDDATA5_SEG17COM1_MASK                  equ 0002h
LCDDATA5_SEG18COM1_POSN                  equ 0002h
LCDDATA5_SEG18COM1_POSITION              equ 0002h
LCDDATA5_SEG18COM1_SIZE                  equ 0001h
LCDDATA5_SEG18COM1_LENGTH                equ 0001h
LCDDATA5_SEG18COM1_MASK                  equ 0004h
LCDDATA5_SEG19COM1_POSN                  equ 0003h
LCDDATA5_SEG19COM1_POSITION              equ 0003h
LCDDATA5_SEG19COM1_SIZE                  equ 0001h
LCDDATA5_SEG19COM1_LENGTH                equ 0001h
LCDDATA5_SEG19COM1_MASK                  equ 0008h
LCDDATA5_SEG20COM1_POSN                  equ 0004h
LCDDATA5_SEG20COM1_POSITION              equ 0004h
LCDDATA5_SEG20COM1_SIZE                  equ 0001h
LCDDATA5_SEG20COM1_LENGTH                equ 0001h
LCDDATA5_SEG20COM1_MASK                  equ 0010h
LCDDATA5_SEG21COM1_POSN                  equ 0005h
LCDDATA5_SEG21COM1_POSITION              equ 0005h
LCDDATA5_SEG21COM1_SIZE                  equ 0001h
LCDDATA5_SEG21COM1_LENGTH                equ 0001h
LCDDATA5_SEG21COM1_MASK                  equ 0020h
LCDDATA5_SEG22COM1_POSN                  equ 0006h
LCDDATA5_SEG22COM1_POSITION              equ 0006h
LCDDATA5_SEG22COM1_SIZE                  equ 0001h
LCDDATA5_SEG22COM1_LENGTH                equ 0001h
LCDDATA5_SEG22COM1_MASK                  equ 0040h
LCDDATA5_SEG23COM1_POSN                  equ 0007h
LCDDATA5_SEG23COM1_POSITION              equ 0007h
LCDDATA5_SEG23COM1_SIZE                  equ 0001h
LCDDATA5_SEG23COM1_LENGTH                equ 0001h
LCDDATA5_SEG23COM1_MASK                  equ 0080h
LCDDATA5_S16C1_POSN                      equ 0000h
LCDDATA5_S16C1_POSITION                  equ 0000h
LCDDATA5_S16C1_SIZE                      equ 0001h
LCDDATA5_S16C1_LENGTH                    equ 0001h
LCDDATA5_S16C1_MASK                      equ 0001h
LCDDATA5_S17C1_POSN                      equ 0001h
LCDDATA5_S17C1_POSITION                  equ 0001h
LCDDATA5_S17C1_SIZE                      equ 0001h
LCDDATA5_S17C1_LENGTH                    equ 0001h
LCDDATA5_S17C1_MASK                      equ 0002h
LCDDATA5_S18C1_POSN                      equ 0002h
LCDDATA5_S18C1_POSITION                  equ 0002h
LCDDATA5_S18C1_SIZE                      equ 0001h
LCDDATA5_S18C1_LENGTH                    equ 0001h
LCDDATA5_S18C1_MASK                      equ 0004h
LCDDATA5_S19C1_POSN                      equ 0003h
LCDDATA5_S19C1_POSITION                  equ 0003h
LCDDATA5_S19C1_SIZE                      equ 0001h
LCDDATA5_S19C1_LENGTH                    equ 0001h
LCDDATA5_S19C1_MASK                      equ 0008h
LCDDATA5_S20C1_POSN                      equ 0004h
LCDDATA5_S20C1_POSITION                  equ 0004h
LCDDATA5_S20C1_SIZE                      equ 0001h
LCDDATA5_S20C1_LENGTH                    equ 0001h
LCDDATA5_S20C1_MASK                      equ 0010h
LCDDATA5_S21C1_POSN                      equ 0005h
LCDDATA5_S21C1_POSITION                  equ 0005h
LCDDATA5_S21C1_SIZE                      equ 0001h
LCDDATA5_S21C1_LENGTH                    equ 0001h
LCDDATA5_S21C1_MASK                      equ 0020h
LCDDATA5_S22C1_POSN                      equ 0006h
LCDDATA5_S22C1_POSITION                  equ 0006h
LCDDATA5_S22C1_SIZE                      equ 0001h
LCDDATA5_S22C1_LENGTH                    equ 0001h
LCDDATA5_S22C1_MASK                      equ 0040h
LCDDATA5_S23C1_POSN                      equ 0007h
LCDDATA5_S23C1_POSITION                  equ 0007h
LCDDATA5_S23C1_SIZE                      equ 0001h
LCDDATA5_S23C1_LENGTH                    equ 0001h
LCDDATA5_S23C1_MASK                      equ 0080h

// Register: LCDDATA6
#define LCDDATA6 LCDDATA6
LCDDATA6                                 equ 0116h
// bitfield definitions
LCDDATA6_SEG0_POSN                       equ 0000h
LCDDATA6_SEG0_POSITION                   equ 0000h
LCDDATA6_SEG0_SIZE                       equ 0001h
LCDDATA6_SEG0_LENGTH                     equ 0001h
LCDDATA6_SEG0_MASK                       equ 0001h
LCDDATA6_SEG1_POSN                       equ 0001h
LCDDATA6_SEG1_POSITION                   equ 0001h
LCDDATA6_SEG1_SIZE                       equ 0001h
LCDDATA6_SEG1_LENGTH                     equ 0001h
LCDDATA6_SEG1_MASK                       equ 0002h
LCDDATA6_SEG2_POSN                       equ 0002h
LCDDATA6_SEG2_POSITION                   equ 0002h
LCDDATA6_SEG2_SIZE                       equ 0001h
LCDDATA6_SEG2_LENGTH                     equ 0001h
LCDDATA6_SEG2_MASK                       equ 0004h
LCDDATA6_SEG3_POSN                       equ 0003h
LCDDATA6_SEG3_POSITION                   equ 0003h
LCDDATA6_SEG3_SIZE                       equ 0001h
LCDDATA6_SEG3_LENGTH                     equ 0001h
LCDDATA6_SEG3_MASK                       equ 0008h
LCDDATA6_SEG4_POSN                       equ 0004h
LCDDATA6_SEG4_POSITION                   equ 0004h
LCDDATA6_SEG4_SIZE                       equ 0001h
LCDDATA6_SEG4_LENGTH                     equ 0001h
LCDDATA6_SEG4_MASK                       equ 0010h
LCDDATA6_SEG5_POSN                       equ 0005h
LCDDATA6_SEG5_POSITION                   equ 0005h
LCDDATA6_SEG5_SIZE                       equ 0001h
LCDDATA6_SEG5_LENGTH                     equ 0001h
LCDDATA6_SEG5_MASK                       equ 0020h
LCDDATA6_SEG6_POSN                       equ 0006h
LCDDATA6_SEG6_POSITION                   equ 0006h
LCDDATA6_SEG6_SIZE                       equ 0001h
LCDDATA6_SEG6_LENGTH                     equ 0001h
LCDDATA6_SEG6_MASK                       equ 0040h
LCDDATA6_SEG7_POSN                       equ 0007h
LCDDATA6_SEG7_POSITION                   equ 0007h
LCDDATA6_SEG7_SIZE                       equ 0001h
LCDDATA6_SEG7_LENGTH                     equ 0001h
LCDDATA6_SEG7_MASK                       equ 0080h
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
LCDDATA6_S0C2_POSN                       equ 0000h
LCDDATA6_S0C2_POSITION                   equ 0000h
LCDDATA6_S0C2_SIZE                       equ 0001h
LCDDATA6_S0C2_LENGTH                     equ 0001h
LCDDATA6_S0C2_MASK                       equ 0001h
LCDDATA6_S1C2_POSN                       equ 0001h
LCDDATA6_S1C2_POSITION                   equ 0001h
LCDDATA6_S1C2_SIZE                       equ 0001h
LCDDATA6_S1C2_LENGTH                     equ 0001h
LCDDATA6_S1C2_MASK                       equ 0002h
LCDDATA6_S2C2_POSN                       equ 0002h
LCDDATA6_S2C2_POSITION                   equ 0002h
LCDDATA6_S2C2_SIZE                       equ 0001h
LCDDATA6_S2C2_LENGTH                     equ 0001h
LCDDATA6_S2C2_MASK                       equ 0004h
LCDDATA6_S3C2_POSN                       equ 0003h
LCDDATA6_S3C2_POSITION                   equ 0003h
LCDDATA6_S3C2_SIZE                       equ 0001h
LCDDATA6_S3C2_LENGTH                     equ 0001h
LCDDATA6_S3C2_MASK                       equ 0008h
LCDDATA6_S4C2_POSN                       equ 0004h
LCDDATA6_S4C2_POSITION                   equ 0004h
LCDDATA6_S4C2_SIZE                       equ 0001h
LCDDATA6_S4C2_LENGTH                     equ 0001h
LCDDATA6_S4C2_MASK                       equ 0010h
LCDDATA6_S5C2_POSN                       equ 0005h
LCDDATA6_S5C2_POSITION                   equ 0005h
LCDDATA6_S5C2_SIZE                       equ 0001h
LCDDATA6_S5C2_LENGTH                     equ 0001h
LCDDATA6_S5C2_MASK                       equ 0020h
LCDDATA6_S6C2_POSN                       equ 0006h
LCDDATA6_S6C2_POSITION                   equ 0006h
LCDDATA6_S6C2_SIZE                       equ 0001h
LCDDATA6_S6C2_LENGTH                     equ 0001h
LCDDATA6_S6C2_MASK                       equ 0040h
LCDDATA6_S7C2_POSN                       equ 0007h
LCDDATA6_S7C2_POSITION                   equ 0007h
LCDDATA6_S7C2_SIZE                       equ 0001h
LCDDATA6_S7C2_LENGTH                     equ 0001h
LCDDATA6_S7C2_MASK                       equ 0080h

// Register: LCDDATA7
#define LCDDATA7 LCDDATA7
LCDDATA7                                 equ 0117h
// bitfield definitions
LCDDATA7_SEG8_POSN                       equ 0000h
LCDDATA7_SEG8_POSITION                   equ 0000h
LCDDATA7_SEG8_SIZE                       equ 0001h
LCDDATA7_SEG8_LENGTH                     equ 0001h
LCDDATA7_SEG8_MASK                       equ 0001h
LCDDATA7_SEG9_POSN                       equ 0001h
LCDDATA7_SEG9_POSITION                   equ 0001h
LCDDATA7_SEG9_SIZE                       equ 0001h
LCDDATA7_SEG9_LENGTH                     equ 0001h
LCDDATA7_SEG9_MASK                       equ 0002h
LCDDATA7_SEG10_POSN                      equ 0002h
LCDDATA7_SEG10_POSITION                  equ 0002h
LCDDATA7_SEG10_SIZE                      equ 0001h
LCDDATA7_SEG10_LENGTH                    equ 0001h
LCDDATA7_SEG10_MASK                      equ 0004h
LCDDATA7_SEG11_POSN                      equ 0003h
LCDDATA7_SEG11_POSITION                  equ 0003h
LCDDATA7_SEG11_SIZE                      equ 0001h
LCDDATA7_SEG11_LENGTH                    equ 0001h
LCDDATA7_SEG11_MASK                      equ 0008h
LCDDATA7_SEG12_POSN                      equ 0004h
LCDDATA7_SEG12_POSITION                  equ 0004h
LCDDATA7_SEG12_SIZE                      equ 0001h
LCDDATA7_SEG12_LENGTH                    equ 0001h
LCDDATA7_SEG12_MASK                      equ 0010h
LCDDATA7_SEG13_POSN                      equ 0005h
LCDDATA7_SEG13_POSITION                  equ 0005h
LCDDATA7_SEG13_SIZE                      equ 0001h
LCDDATA7_SEG13_LENGTH                    equ 0001h
LCDDATA7_SEG13_MASK                      equ 0020h
LCDDATA7_SEG14_POSN                      equ 0006h
LCDDATA7_SEG14_POSITION                  equ 0006h
LCDDATA7_SEG14_SIZE                      equ 0001h
LCDDATA7_SEG14_LENGTH                    equ 0001h
LCDDATA7_SEG14_MASK                      equ 0040h
LCDDATA7_SEG15_POSN                      equ 0007h
LCDDATA7_SEG15_POSITION                  equ 0007h
LCDDATA7_SEG15_SIZE                      equ 0001h
LCDDATA7_SEG15_LENGTH                    equ 0001h
LCDDATA7_SEG15_MASK                      equ 0080h
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
LCDDATA7_S8C2_POSN                       equ 0000h
LCDDATA7_S8C2_POSITION                   equ 0000h
LCDDATA7_S8C2_SIZE                       equ 0001h
LCDDATA7_S8C2_LENGTH                     equ 0001h
LCDDATA7_S8C2_MASK                       equ 0001h
LCDDATA7_S9C2_POSN                       equ 0001h
LCDDATA7_S9C2_POSITION                   equ 0001h
LCDDATA7_S9C2_SIZE                       equ 0001h
LCDDATA7_S9C2_LENGTH                     equ 0001h
LCDDATA7_S9C2_MASK                       equ 0002h
LCDDATA7_S10C2_POSN                      equ 0002h
LCDDATA7_S10C2_POSITION                  equ 0002h
LCDDATA7_S10C2_SIZE                      equ 0001h
LCDDATA7_S10C2_LENGTH                    equ 0001h
LCDDATA7_S10C2_MASK                      equ 0004h
LCDDATA7_S11C2_POSN                      equ 0003h
LCDDATA7_S11C2_POSITION                  equ 0003h
LCDDATA7_S11C2_SIZE                      equ 0001h
LCDDATA7_S11C2_LENGTH                    equ 0001h
LCDDATA7_S11C2_MASK                      equ 0008h
LCDDATA7_S12C2_POSN                      equ 0004h
LCDDATA7_S12C2_POSITION                  equ 0004h
LCDDATA7_S12C2_SIZE                      equ 0001h
LCDDATA7_S12C2_LENGTH                    equ 0001h
LCDDATA7_S12C2_MASK                      equ 0010h
LCDDATA7_S13C2_POSN                      equ 0005h
LCDDATA7_S13C2_POSITION                  equ 0005h
LCDDATA7_S13C2_SIZE                      equ 0001h
LCDDATA7_S13C2_LENGTH                    equ 0001h
LCDDATA7_S13C2_MASK                      equ 0020h
LCDDATA7_S14C2_POSN                      equ 0006h
LCDDATA7_S14C2_POSITION                  equ 0006h
LCDDATA7_S14C2_SIZE                      equ 0001h
LCDDATA7_S14C2_LENGTH                    equ 0001h
LCDDATA7_S14C2_MASK                      equ 0040h
LCDDATA7_S15C2_POSN                      equ 0007h
LCDDATA7_S15C2_POSITION                  equ 0007h
LCDDATA7_S15C2_SIZE                      equ 0001h
LCDDATA7_S15C2_LENGTH                    equ 0001h
LCDDATA7_S15C2_MASK                      equ 0080h

// Register: LCDDATA8
#define LCDDATA8 LCDDATA8
LCDDATA8                                 equ 0118h
// bitfield definitions
LCDDATA8_SEG16_POSN                      equ 0000h
LCDDATA8_SEG16_POSITION                  equ 0000h
LCDDATA8_SEG16_SIZE                      equ 0001h
LCDDATA8_SEG16_LENGTH                    equ 0001h
LCDDATA8_SEG16_MASK                      equ 0001h
LCDDATA8_SEG17_POSN                      equ 0001h
LCDDATA8_SEG17_POSITION                  equ 0001h
LCDDATA8_SEG17_SIZE                      equ 0001h
LCDDATA8_SEG17_LENGTH                    equ 0001h
LCDDATA8_SEG17_MASK                      equ 0002h
LCDDATA8_SEG18_POSN                      equ 0002h
LCDDATA8_SEG18_POSITION                  equ 0002h
LCDDATA8_SEG18_SIZE                      equ 0001h
LCDDATA8_SEG18_LENGTH                    equ 0001h
LCDDATA8_SEG18_MASK                      equ 0004h
LCDDATA8_SEG19_POSN                      equ 0003h
LCDDATA8_SEG19_POSITION                  equ 0003h
LCDDATA8_SEG19_SIZE                      equ 0001h
LCDDATA8_SEG19_LENGTH                    equ 0001h
LCDDATA8_SEG19_MASK                      equ 0008h
LCDDATA8_SEG20_POSN                      equ 0004h
LCDDATA8_SEG20_POSITION                  equ 0004h
LCDDATA8_SEG20_SIZE                      equ 0001h
LCDDATA8_SEG20_LENGTH                    equ 0001h
LCDDATA8_SEG20_MASK                      equ 0010h
LCDDATA8_SEG21_POSN                      equ 0005h
LCDDATA8_SEG21_POSITION                  equ 0005h
LCDDATA8_SEG21_SIZE                      equ 0001h
LCDDATA8_SEG21_LENGTH                    equ 0001h
LCDDATA8_SEG21_MASK                      equ 0020h
LCDDATA8_SEG22_POSN                      equ 0006h
LCDDATA8_SEG22_POSITION                  equ 0006h
LCDDATA8_SEG22_SIZE                      equ 0001h
LCDDATA8_SEG22_LENGTH                    equ 0001h
LCDDATA8_SEG22_MASK                      equ 0040h
LCDDATA8_SEG23_POSN                      equ 0007h
LCDDATA8_SEG23_POSITION                  equ 0007h
LCDDATA8_SEG23_SIZE                      equ 0001h
LCDDATA8_SEG23_LENGTH                    equ 0001h
LCDDATA8_SEG23_MASK                      equ 0080h
LCDDATA8_SEG16COM2_POSN                  equ 0000h
LCDDATA8_SEG16COM2_POSITION              equ 0000h
LCDDATA8_SEG16COM2_SIZE                  equ 0001h
LCDDATA8_SEG16COM2_LENGTH                equ 0001h
LCDDATA8_SEG16COM2_MASK                  equ 0001h
LCDDATA8_SEG17COM2_POSN                  equ 0001h
LCDDATA8_SEG17COM2_POSITION              equ 0001h
LCDDATA8_SEG17COM2_SIZE                  equ 0001h
LCDDATA8_SEG17COM2_LENGTH                equ 0001h
LCDDATA8_SEG17COM2_MASK                  equ 0002h
LCDDATA8_SEG18COM2_POSN                  equ 0002h
LCDDATA8_SEG18COM2_POSITION              equ 0002h
LCDDATA8_SEG18COM2_SIZE                  equ 0001h
LCDDATA8_SEG18COM2_LENGTH                equ 0001h
LCDDATA8_SEG18COM2_MASK                  equ 0004h
LCDDATA8_SEG19COM2_POSN                  equ 0003h
LCDDATA8_SEG19COM2_POSITION              equ 0003h
LCDDATA8_SEG19COM2_SIZE                  equ 0001h
LCDDATA8_SEG19COM2_LENGTH                equ 0001h
LCDDATA8_SEG19COM2_MASK                  equ 0008h
LCDDATA8_SEG20COM2_POSN                  equ 0004h
LCDDATA8_SEG20COM2_POSITION              equ 0004h
LCDDATA8_SEG20COM2_SIZE                  equ 0001h
LCDDATA8_SEG20COM2_LENGTH                equ 0001h
LCDDATA8_SEG20COM2_MASK                  equ 0010h
LCDDATA8_SEG21COM2_POSN                  equ 0005h
LCDDATA8_SEG21COM2_POSITION              equ 0005h
LCDDATA8_SEG21COM2_SIZE                  equ 0001h
LCDDATA8_SEG21COM2_LENGTH                equ 0001h
LCDDATA8_SEG21COM2_MASK                  equ 0020h
LCDDATA8_SEG22COM2_POSN                  equ 0006h
LCDDATA8_SEG22COM2_POSITION              equ 0006h
LCDDATA8_SEG22COM2_SIZE                  equ 0001h
LCDDATA8_SEG22COM2_LENGTH                equ 0001h
LCDDATA8_SEG22COM2_MASK                  equ 0040h
LCDDATA8_SEG23COM2_POSN                  equ 0007h
LCDDATA8_SEG23COM2_POSITION              equ 0007h
LCDDATA8_SEG23COM2_SIZE                  equ 0001h
LCDDATA8_SEG23COM2_LENGTH                equ 0001h
LCDDATA8_SEG23COM2_MASK                  equ 0080h
LCDDATA8_S16C2_POSN                      equ 0000h
LCDDATA8_S16C2_POSITION                  equ 0000h
LCDDATA8_S16C2_SIZE                      equ 0001h
LCDDATA8_S16C2_LENGTH                    equ 0001h
LCDDATA8_S16C2_MASK                      equ 0001h
LCDDATA8_S17C2_POSN                      equ 0001h
LCDDATA8_S17C2_POSITION                  equ 0001h
LCDDATA8_S17C2_SIZE                      equ 0001h
LCDDATA8_S17C2_LENGTH                    equ 0001h
LCDDATA8_S17C2_MASK                      equ 0002h
LCDDATA8_S18C2_POSN                      equ 0002h
LCDDATA8_S18C2_POSITION                  equ 0002h
LCDDATA8_S18C2_SIZE                      equ 0001h
LCDDATA8_S18C2_LENGTH                    equ 0001h
LCDDATA8_S18C2_MASK                      equ 0004h
LCDDATA8_S19C2_POSN                      equ 0003h
LCDDATA8_S19C2_POSITION                  equ 0003h
LCDDATA8_S19C2_SIZE                      equ 0001h
LCDDATA8_S19C2_LENGTH                    equ 0001h
LCDDATA8_S19C2_MASK                      equ 0008h
LCDDATA8_S20C2_POSN                      equ 0004h
LCDDATA8_S20C2_POSITION                  equ 0004h
LCDDATA8_S20C2_SIZE                      equ 0001h
LCDDATA8_S20C2_LENGTH                    equ 0001h
LCDDATA8_S20C2_MASK                      equ 0010h
LCDDATA8_S21C2_POSN                      equ 0005h
LCDDATA8_S21C2_POSITION                  equ 0005h
LCDDATA8_S21C2_SIZE                      equ 0001h
LCDDATA8_S21C2_LENGTH                    equ 0001h
LCDDATA8_S21C2_MASK                      equ 0020h
LCDDATA8_S22C2_POSN                      equ 0006h
LCDDATA8_S22C2_POSITION                  equ 0006h
LCDDATA8_S22C2_SIZE                      equ 0001h
LCDDATA8_S22C2_LENGTH                    equ 0001h
LCDDATA8_S22C2_MASK                      equ 0040h
LCDDATA8_S23C2_POSN                      equ 0007h
LCDDATA8_S23C2_POSITION                  equ 0007h
LCDDATA8_S23C2_SIZE                      equ 0001h
LCDDATA8_S23C2_LENGTH                    equ 0001h
LCDDATA8_S23C2_MASK                      equ 0080h

// Register: LCDDATA9
#define LCDDATA9 LCDDATA9
LCDDATA9                                 equ 0119h
// bitfield definitions
LCDDATA9_SEG0_POSN                       equ 0000h
LCDDATA9_SEG0_POSITION                   equ 0000h
LCDDATA9_SEG0_SIZE                       equ 0001h
LCDDATA9_SEG0_LENGTH                     equ 0001h
LCDDATA9_SEG0_MASK                       equ 0001h
LCDDATA9_SEG1_POSN                       equ 0001h
LCDDATA9_SEG1_POSITION                   equ 0001h
LCDDATA9_SEG1_SIZE                       equ 0001h
LCDDATA9_SEG1_LENGTH                     equ 0001h
LCDDATA9_SEG1_MASK                       equ 0002h
LCDDATA9_SEG2_POSN                       equ 0002h
LCDDATA9_SEG2_POSITION                   equ 0002h
LCDDATA9_SEG2_SIZE                       equ 0001h
LCDDATA9_SEG2_LENGTH                     equ 0001h
LCDDATA9_SEG2_MASK                       equ 0004h
LCDDATA9_SEG3_POSN                       equ 0003h
LCDDATA9_SEG3_POSITION                   equ 0003h
LCDDATA9_SEG3_SIZE                       equ 0001h
LCDDATA9_SEG3_LENGTH                     equ 0001h
LCDDATA9_SEG3_MASK                       equ 0008h
LCDDATA9_SEG4_POSN                       equ 0004h
LCDDATA9_SEG4_POSITION                   equ 0004h
LCDDATA9_SEG4_SIZE                       equ 0001h
LCDDATA9_SEG4_LENGTH                     equ 0001h
LCDDATA9_SEG4_MASK                       equ 0010h
LCDDATA9_SEG5_POSN                       equ 0005h
LCDDATA9_SEG5_POSITION                   equ 0005h
LCDDATA9_SEG5_SIZE                       equ 0001h
LCDDATA9_SEG5_LENGTH                     equ 0001h
LCDDATA9_SEG5_MASK                       equ 0020h
LCDDATA9_SEG6_POSN                       equ 0006h
LCDDATA9_SEG6_POSITION                   equ 0006h
LCDDATA9_SEG6_SIZE                       equ 0001h
LCDDATA9_SEG6_LENGTH                     equ 0001h
LCDDATA9_SEG6_MASK                       equ 0040h
LCDDATA9_SEG7_POSN                       equ 0007h
LCDDATA9_SEG7_POSITION                   equ 0007h
LCDDATA9_SEG7_SIZE                       equ 0001h
LCDDATA9_SEG7_LENGTH                     equ 0001h
LCDDATA9_SEG7_MASK                       equ 0080h
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
LCDDATA9_S0C3_POSN                       equ 0000h
LCDDATA9_S0C3_POSITION                   equ 0000h
LCDDATA9_S0C3_SIZE                       equ 0001h
LCDDATA9_S0C3_LENGTH                     equ 0001h
LCDDATA9_S0C3_MASK                       equ 0001h
LCDDATA9_S1C3_POSN                       equ 0001h
LCDDATA9_S1C3_POSITION                   equ 0001h
LCDDATA9_S1C3_SIZE                       equ 0001h
LCDDATA9_S1C3_LENGTH                     equ 0001h
LCDDATA9_S1C3_MASK                       equ 0002h
LCDDATA9_S2C3_POSN                       equ 0002h
LCDDATA9_S2C3_POSITION                   equ 0002h
LCDDATA9_S2C3_SIZE                       equ 0001h
LCDDATA9_S2C3_LENGTH                     equ 0001h
LCDDATA9_S2C3_MASK                       equ 0004h
LCDDATA9_S3C3_POSN                       equ 0003h
LCDDATA9_S3C3_POSITION                   equ 0003h
LCDDATA9_S3C3_SIZE                       equ 0001h
LCDDATA9_S3C3_LENGTH                     equ 0001h
LCDDATA9_S3C3_MASK                       equ 0008h
LCDDATA9_S4C3_POSN                       equ 0004h
LCDDATA9_S4C3_POSITION                   equ 0004h
LCDDATA9_S4C3_SIZE                       equ 0001h
LCDDATA9_S4C3_LENGTH                     equ 0001h
LCDDATA9_S4C3_MASK                       equ 0010h
LCDDATA9_S5C3_POSN                       equ 0005h
LCDDATA9_S5C3_POSITION                   equ 0005h
LCDDATA9_S5C3_SIZE                       equ 0001h
LCDDATA9_S5C3_LENGTH                     equ 0001h
LCDDATA9_S5C3_MASK                       equ 0020h
LCDDATA9_S6C3_POSN                       equ 0006h
LCDDATA9_S6C3_POSITION                   equ 0006h
LCDDATA9_S6C3_SIZE                       equ 0001h
LCDDATA9_S6C3_LENGTH                     equ 0001h
LCDDATA9_S6C3_MASK                       equ 0040h
LCDDATA9_S7C3_POSN                       equ 0007h
LCDDATA9_S7C3_POSITION                   equ 0007h
LCDDATA9_S7C3_SIZE                       equ 0001h
LCDDATA9_S7C3_LENGTH                     equ 0001h
LCDDATA9_S7C3_MASK                       equ 0080h

// Register: LCDDATA10
#define LCDDATA10 LCDDATA10
LCDDATA10                                equ 011Ah
// bitfield definitions
LCDDATA10_SEG8_POSN                      equ 0000h
LCDDATA10_SEG8_POSITION                  equ 0000h
LCDDATA10_SEG8_SIZE                      equ 0001h
LCDDATA10_SEG8_LENGTH                    equ 0001h
LCDDATA10_SEG8_MASK                      equ 0001h
LCDDATA10_SEG9_POSN                      equ 0001h
LCDDATA10_SEG9_POSITION                  equ 0001h
LCDDATA10_SEG9_SIZE                      equ 0001h
LCDDATA10_SEG9_LENGTH                    equ 0001h
LCDDATA10_SEG9_MASK                      equ 0002h
LCDDATA10_SEG10_POSN                     equ 0002h
LCDDATA10_SEG10_POSITION                 equ 0002h
LCDDATA10_SEG10_SIZE                     equ 0001h
LCDDATA10_SEG10_LENGTH                   equ 0001h
LCDDATA10_SEG10_MASK                     equ 0004h
LCDDATA10_SEG11_POSN                     equ 0003h
LCDDATA10_SEG11_POSITION                 equ 0003h
LCDDATA10_SEG11_SIZE                     equ 0001h
LCDDATA10_SEG11_LENGTH                   equ 0001h
LCDDATA10_SEG11_MASK                     equ 0008h
LCDDATA10_SEG12_POSN                     equ 0004h
LCDDATA10_SEG12_POSITION                 equ 0004h
LCDDATA10_SEG12_SIZE                     equ 0001h
LCDDATA10_SEG12_LENGTH                   equ 0001h
LCDDATA10_SEG12_MASK                     equ 0010h
LCDDATA10_SEG13_POSN                     equ 0005h
LCDDATA10_SEG13_POSITION                 equ 0005h
LCDDATA10_SEG13_SIZE                     equ 0001h
LCDDATA10_SEG13_LENGTH                   equ 0001h
LCDDATA10_SEG13_MASK                     equ 0020h
LCDDATA10_SEG14_POSN                     equ 0006h
LCDDATA10_SEG14_POSITION                 equ 0006h
LCDDATA10_SEG14_SIZE                     equ 0001h
LCDDATA10_SEG14_LENGTH                   equ 0001h
LCDDATA10_SEG14_MASK                     equ 0040h
LCDDATA10_SEG15_POSN                     equ 0007h
LCDDATA10_SEG15_POSITION                 equ 0007h
LCDDATA10_SEG15_SIZE                     equ 0001h
LCDDATA10_SEG15_LENGTH                   equ 0001h
LCDDATA10_SEG15_MASK                     equ 0080h
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
LCDDATA10_S8C3_POSN                      equ 0000h
LCDDATA10_S8C3_POSITION                  equ 0000h
LCDDATA10_S8C3_SIZE                      equ 0001h
LCDDATA10_S8C3_LENGTH                    equ 0001h
LCDDATA10_S8C3_MASK                      equ 0001h
LCDDATA10_S9C3_POSN                      equ 0001h
LCDDATA10_S9C3_POSITION                  equ 0001h
LCDDATA10_S9C3_SIZE                      equ 0001h
LCDDATA10_S9C3_LENGTH                    equ 0001h
LCDDATA10_S9C3_MASK                      equ 0002h
LCDDATA10_S10C3_POSN                     equ 0002h
LCDDATA10_S10C3_POSITION                 equ 0002h
LCDDATA10_S10C3_SIZE                     equ 0001h
LCDDATA10_S10C3_LENGTH                   equ 0001h
LCDDATA10_S10C3_MASK                     equ 0004h
LCDDATA10_S11C3_POSN                     equ 0003h
LCDDATA10_S11C3_POSITION                 equ 0003h
LCDDATA10_S11C3_SIZE                     equ 0001h
LCDDATA10_S11C3_LENGTH                   equ 0001h
LCDDATA10_S11C3_MASK                     equ 0008h
LCDDATA10_S12C3_POSN                     equ 0004h
LCDDATA10_S12C3_POSITION                 equ 0004h
LCDDATA10_S12C3_SIZE                     equ 0001h
LCDDATA10_S12C3_LENGTH                   equ 0001h
LCDDATA10_S12C3_MASK                     equ 0010h
LCDDATA10_S13C3_POSN                     equ 0005h
LCDDATA10_S13C3_POSITION                 equ 0005h
LCDDATA10_S13C3_SIZE                     equ 0001h
LCDDATA10_S13C3_LENGTH                   equ 0001h
LCDDATA10_S13C3_MASK                     equ 0020h
LCDDATA10_S14C3_POSN                     equ 0006h
LCDDATA10_S14C3_POSITION                 equ 0006h
LCDDATA10_S14C3_SIZE                     equ 0001h
LCDDATA10_S14C3_LENGTH                   equ 0001h
LCDDATA10_S14C3_MASK                     equ 0040h
LCDDATA10_S15C3_POSN                     equ 0007h
LCDDATA10_S15C3_POSITION                 equ 0007h
LCDDATA10_S15C3_SIZE                     equ 0001h
LCDDATA10_S15C3_LENGTH                   equ 0001h
LCDDATA10_S15C3_MASK                     equ 0080h

// Register: LCDDATA11
#define LCDDATA11 LCDDATA11
LCDDATA11                                equ 011Bh
// bitfield definitions
LCDDATA11_SEG16_POSN                     equ 0000h
LCDDATA11_SEG16_POSITION                 equ 0000h
LCDDATA11_SEG16_SIZE                     equ 0001h
LCDDATA11_SEG16_LENGTH                   equ 0001h
LCDDATA11_SEG16_MASK                     equ 0001h
LCDDATA11_SEG17_POSN                     equ 0001h
LCDDATA11_SEG17_POSITION                 equ 0001h
LCDDATA11_SEG17_SIZE                     equ 0001h
LCDDATA11_SEG17_LENGTH                   equ 0001h
LCDDATA11_SEG17_MASK                     equ 0002h
LCDDATA11_SEG18_POSN                     equ 0002h
LCDDATA11_SEG18_POSITION                 equ 0002h
LCDDATA11_SEG18_SIZE                     equ 0001h
LCDDATA11_SEG18_LENGTH                   equ 0001h
LCDDATA11_SEG18_MASK                     equ 0004h
LCDDATA11_SEG19_POSN                     equ 0003h
LCDDATA11_SEG19_POSITION                 equ 0003h
LCDDATA11_SEG19_SIZE                     equ 0001h
LCDDATA11_SEG19_LENGTH                   equ 0001h
LCDDATA11_SEG19_MASK                     equ 0008h
LCDDATA11_SEG20_POSN                     equ 0004h
LCDDATA11_SEG20_POSITION                 equ 0004h
LCDDATA11_SEG20_SIZE                     equ 0001h
LCDDATA11_SEG20_LENGTH                   equ 0001h
LCDDATA11_SEG20_MASK                     equ 0010h
LCDDATA11_SEG21_POSN                     equ 0005h
LCDDATA11_SEG21_POSITION                 equ 0005h
LCDDATA11_SEG21_SIZE                     equ 0001h
LCDDATA11_SEG21_LENGTH                   equ 0001h
LCDDATA11_SEG21_MASK                     equ 0020h
LCDDATA11_SEG22_POSN                     equ 0006h
LCDDATA11_SEG22_POSITION                 equ 0006h
LCDDATA11_SEG22_SIZE                     equ 0001h
LCDDATA11_SEG22_LENGTH                   equ 0001h
LCDDATA11_SEG22_MASK                     equ 0040h
LCDDATA11_SEG23_POSN                     equ 0007h
LCDDATA11_SEG23_POSITION                 equ 0007h
LCDDATA11_SEG23_SIZE                     equ 0001h
LCDDATA11_SEG23_LENGTH                   equ 0001h
LCDDATA11_SEG23_MASK                     equ 0080h
LCDDATA11_SEG16COM3_POSN                 equ 0000h
LCDDATA11_SEG16COM3_POSITION             equ 0000h
LCDDATA11_SEG16COM3_SIZE                 equ 0001h
LCDDATA11_SEG16COM3_LENGTH               equ 0001h
LCDDATA11_SEG16COM3_MASK                 equ 0001h
LCDDATA11_SEG17COM3_POSN                 equ 0001h
LCDDATA11_SEG17COM3_POSITION             equ 0001h
LCDDATA11_SEG17COM3_SIZE                 equ 0001h
LCDDATA11_SEG17COM3_LENGTH               equ 0001h
LCDDATA11_SEG17COM3_MASK                 equ 0002h
LCDDATA11_SEG18COM3_POSN                 equ 0002h
LCDDATA11_SEG18COM3_POSITION             equ 0002h
LCDDATA11_SEG18COM3_SIZE                 equ 0001h
LCDDATA11_SEG18COM3_LENGTH               equ 0001h
LCDDATA11_SEG18COM3_MASK                 equ 0004h
LCDDATA11_SEG19COM3_POSN                 equ 0003h
LCDDATA11_SEG19COM3_POSITION             equ 0003h
LCDDATA11_SEG19COM3_SIZE                 equ 0001h
LCDDATA11_SEG19COM3_LENGTH               equ 0001h
LCDDATA11_SEG19COM3_MASK                 equ 0008h
LCDDATA11_SEG20COM3_POSN                 equ 0004h
LCDDATA11_SEG20COM3_POSITION             equ 0004h
LCDDATA11_SEG20COM3_SIZE                 equ 0001h
LCDDATA11_SEG20COM3_LENGTH               equ 0001h
LCDDATA11_SEG20COM3_MASK                 equ 0010h
LCDDATA11_SEG21COM3_POSN                 equ 0005h
LCDDATA11_SEG21COM3_POSITION             equ 0005h
LCDDATA11_SEG21COM3_SIZE                 equ 0001h
LCDDATA11_SEG21COM3_LENGTH               equ 0001h
LCDDATA11_SEG21COM3_MASK                 equ 0020h
LCDDATA11_SEG22COM3_POSN                 equ 0006h
LCDDATA11_SEG22COM3_POSITION             equ 0006h
LCDDATA11_SEG22COM3_SIZE                 equ 0001h
LCDDATA11_SEG22COM3_LENGTH               equ 0001h
LCDDATA11_SEG22COM3_MASK                 equ 0040h
LCDDATA11_SEG23COM3_POSN                 equ 0007h
LCDDATA11_SEG23COM3_POSITION             equ 0007h
LCDDATA11_SEG23COM3_SIZE                 equ 0001h
LCDDATA11_SEG23COM3_LENGTH               equ 0001h
LCDDATA11_SEG23COM3_MASK                 equ 0080h
LCDDATA11_S16C3_POSN                     equ 0000h
LCDDATA11_S16C3_POSITION                 equ 0000h
LCDDATA11_S16C3_SIZE                     equ 0001h
LCDDATA11_S16C3_LENGTH                   equ 0001h
LCDDATA11_S16C3_MASK                     equ 0001h
LCDDATA11_S17C3_POSN                     equ 0001h
LCDDATA11_S17C3_POSITION                 equ 0001h
LCDDATA11_S17C3_SIZE                     equ 0001h
LCDDATA11_S17C3_LENGTH                   equ 0001h
LCDDATA11_S17C3_MASK                     equ 0002h
LCDDATA11_S18C3_POSN                     equ 0002h
LCDDATA11_S18C3_POSITION                 equ 0002h
LCDDATA11_S18C3_SIZE                     equ 0001h
LCDDATA11_S18C3_LENGTH                   equ 0001h
LCDDATA11_S18C3_MASK                     equ 0004h
LCDDATA11_S19C3_POSN                     equ 0003h
LCDDATA11_S19C3_POSITION                 equ 0003h
LCDDATA11_S19C3_SIZE                     equ 0001h
LCDDATA11_S19C3_LENGTH                   equ 0001h
LCDDATA11_S19C3_MASK                     equ 0008h
LCDDATA11_S20C3_POSN                     equ 0004h
LCDDATA11_S20C3_POSITION                 equ 0004h
LCDDATA11_S20C3_SIZE                     equ 0001h
LCDDATA11_S20C3_LENGTH                   equ 0001h
LCDDATA11_S20C3_MASK                     equ 0010h
LCDDATA11_S21C3_POSN                     equ 0005h
LCDDATA11_S21C3_POSITION                 equ 0005h
LCDDATA11_S21C3_SIZE                     equ 0001h
LCDDATA11_S21C3_LENGTH                   equ 0001h
LCDDATA11_S21C3_MASK                     equ 0020h
LCDDATA11_S22C3_POSN                     equ 0006h
LCDDATA11_S22C3_POSITION                 equ 0006h
LCDDATA11_S22C3_SIZE                     equ 0001h
LCDDATA11_S22C3_LENGTH                   equ 0001h
LCDDATA11_S22C3_MASK                     equ 0040h
LCDDATA11_S23C3_POSN                     equ 0007h
LCDDATA11_S23C3_POSITION                 equ 0007h
LCDDATA11_S23C3_SIZE                     equ 0001h
LCDDATA11_S23C3_LENGTH                   equ 0001h
LCDDATA11_S23C3_MASK                     equ 0080h

// Register: LCDSE0
#define LCDSE0 LCDSE0
LCDSE0                                   equ 011Ch
// bitfield definitions
LCDSE0_SEG0_POSN                         equ 0000h
LCDSE0_SEG0_POSITION                     equ 0000h
LCDSE0_SEG0_SIZE                         equ 0001h
LCDSE0_SEG0_LENGTH                       equ 0001h
LCDSE0_SEG0_MASK                         equ 0001h
LCDSE0_SEG1_POSN                         equ 0001h
LCDSE0_SEG1_POSITION                     equ 0001h
LCDSE0_SEG1_SIZE                         equ 0001h
LCDSE0_SEG1_LENGTH                       equ 0001h
LCDSE0_SEG1_MASK                         equ 0002h
LCDSE0_SEG2_POSN                         equ 0002h
LCDSE0_SEG2_POSITION                     equ 0002h
LCDSE0_SEG2_SIZE                         equ 0001h
LCDSE0_SEG2_LENGTH                       equ 0001h
LCDSE0_SEG2_MASK                         equ 0004h
LCDSE0_SEG3_POSN                         equ 0003h
LCDSE0_SEG3_POSITION                     equ 0003h
LCDSE0_SEG3_SIZE                         equ 0001h
LCDSE0_SEG3_LENGTH                       equ 0001h
LCDSE0_SEG3_MASK                         equ 0008h
LCDSE0_SEG4_POSN                         equ 0004h
LCDSE0_SEG4_POSITION                     equ 0004h
LCDSE0_SEG4_SIZE                         equ 0001h
LCDSE0_SEG4_LENGTH                       equ 0001h
LCDSE0_SEG4_MASK                         equ 0010h
LCDSE0_SEG5_POSN                         equ 0005h
LCDSE0_SEG5_POSITION                     equ 0005h
LCDSE0_SEG5_SIZE                         equ 0001h
LCDSE0_SEG5_LENGTH                       equ 0001h
LCDSE0_SEG5_MASK                         equ 0020h
LCDSE0_SEG6_POSN                         equ 0006h
LCDSE0_SEG6_POSITION                     equ 0006h
LCDSE0_SEG6_SIZE                         equ 0001h
LCDSE0_SEG6_LENGTH                       equ 0001h
LCDSE0_SEG6_MASK                         equ 0040h
LCDSE0_SEG7_POSN                         equ 0007h
LCDSE0_SEG7_POSITION                     equ 0007h
LCDSE0_SEG7_SIZE                         equ 0001h
LCDSE0_SEG7_LENGTH                       equ 0001h
LCDSE0_SEG7_MASK                         equ 0080h
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
LCDSE0_SEGEN0_POSN                       equ 0000h
LCDSE0_SEGEN0_POSITION                   equ 0000h
LCDSE0_SEGEN0_SIZE                       equ 0001h
LCDSE0_SEGEN0_LENGTH                     equ 0001h
LCDSE0_SEGEN0_MASK                       equ 0001h
LCDSE0_SEGEN1_POSN                       equ 0001h
LCDSE0_SEGEN1_POSITION                   equ 0001h
LCDSE0_SEGEN1_SIZE                       equ 0001h
LCDSE0_SEGEN1_LENGTH                     equ 0001h
LCDSE0_SEGEN1_MASK                       equ 0002h
LCDSE0_SEGEN2_POSN                       equ 0002h
LCDSE0_SEGEN2_POSITION                   equ 0002h
LCDSE0_SEGEN2_SIZE                       equ 0001h
LCDSE0_SEGEN2_LENGTH                     equ 0001h
LCDSE0_SEGEN2_MASK                       equ 0004h
LCDSE0_SEGEN3_POSN                       equ 0003h
LCDSE0_SEGEN3_POSITION                   equ 0003h
LCDSE0_SEGEN3_SIZE                       equ 0001h
LCDSE0_SEGEN3_LENGTH                     equ 0001h
LCDSE0_SEGEN3_MASK                       equ 0008h
LCDSE0_SEGEN4_POSN                       equ 0004h
LCDSE0_SEGEN4_POSITION                   equ 0004h
LCDSE0_SEGEN4_SIZE                       equ 0001h
LCDSE0_SEGEN4_LENGTH                     equ 0001h
LCDSE0_SEGEN4_MASK                       equ 0010h
LCDSE0_SEGEN5_POSN                       equ 0005h
LCDSE0_SEGEN5_POSITION                   equ 0005h
LCDSE0_SEGEN5_SIZE                       equ 0001h
LCDSE0_SEGEN5_LENGTH                     equ 0001h
LCDSE0_SEGEN5_MASK                       equ 0020h
LCDSE0_SEGEN6_POSN                       equ 0006h
LCDSE0_SEGEN6_POSITION                   equ 0006h
LCDSE0_SEGEN6_SIZE                       equ 0001h
LCDSE0_SEGEN6_LENGTH                     equ 0001h
LCDSE0_SEGEN6_MASK                       equ 0040h
LCDSE0_SEGEN7_POSN                       equ 0007h
LCDSE0_SEGEN7_POSITION                   equ 0007h
LCDSE0_SEGEN7_SIZE                       equ 0001h
LCDSE0_SEGEN7_LENGTH                     equ 0001h
LCDSE0_SEGEN7_MASK                       equ 0080h

// Register: LCDSE1
#define LCDSE1 LCDSE1
LCDSE1                                   equ 011Dh
// bitfield definitions
LCDSE1_SEG8_POSN                         equ 0000h
LCDSE1_SEG8_POSITION                     equ 0000h
LCDSE1_SEG8_SIZE                         equ 0001h
LCDSE1_SEG8_LENGTH                       equ 0001h
LCDSE1_SEG8_MASK                         equ 0001h
LCDSE1_SEG9_POSN                         equ 0001h
LCDSE1_SEG9_POSITION                     equ 0001h
LCDSE1_SEG9_SIZE                         equ 0001h
LCDSE1_SEG9_LENGTH                       equ 0001h
LCDSE1_SEG9_MASK                         equ 0002h
LCDSE1_SEG10_POSN                        equ 0002h
LCDSE1_SEG10_POSITION                    equ 0002h
LCDSE1_SEG10_SIZE                        equ 0001h
LCDSE1_SEG10_LENGTH                      equ 0001h
LCDSE1_SEG10_MASK                        equ 0004h
LCDSE1_SEG11_POSN                        equ 0003h
LCDSE1_SEG11_POSITION                    equ 0003h
LCDSE1_SEG11_SIZE                        equ 0001h
LCDSE1_SEG11_LENGTH                      equ 0001h
LCDSE1_SEG11_MASK                        equ 0008h
LCDSE1_SEG12_POSN                        equ 0004h
LCDSE1_SEG12_POSITION                    equ 0004h
LCDSE1_SEG12_SIZE                        equ 0001h
LCDSE1_SEG12_LENGTH                      equ 0001h
LCDSE1_SEG12_MASK                        equ 0010h
LCDSE1_SEG13_POSN                        equ 0005h
LCDSE1_SEG13_POSITION                    equ 0005h
LCDSE1_SEG13_SIZE                        equ 0001h
LCDSE1_SEG13_LENGTH                      equ 0001h
LCDSE1_SEG13_MASK                        equ 0020h
LCDSE1_SEG14_POSN                        equ 0006h
LCDSE1_SEG14_POSITION                    equ 0006h
LCDSE1_SEG14_SIZE                        equ 0001h
LCDSE1_SEG14_LENGTH                      equ 0001h
LCDSE1_SEG14_MASK                        equ 0040h
LCDSE1_SEG15_POSN                        equ 0007h
LCDSE1_SEG15_POSITION                    equ 0007h
LCDSE1_SEG15_SIZE                        equ 0001h
LCDSE1_SEG15_LENGTH                      equ 0001h
LCDSE1_SEG15_MASK                        equ 0080h
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
LCDSE1_SEGEN8_POSN                       equ 0000h
LCDSE1_SEGEN8_POSITION                   equ 0000h
LCDSE1_SEGEN8_SIZE                       equ 0001h
LCDSE1_SEGEN8_LENGTH                     equ 0001h
LCDSE1_SEGEN8_MASK                       equ 0001h
LCDSE1_SEGEN9_POSN                       equ 0001h
LCDSE1_SEGEN9_POSITION                   equ 0001h
LCDSE1_SEGEN9_SIZE                       equ 0001h
LCDSE1_SEGEN9_LENGTH                     equ 0001h
LCDSE1_SEGEN9_MASK                       equ 0002h
LCDSE1_SEGEN10_POSN                      equ 0002h
LCDSE1_SEGEN10_POSITION                  equ 0002h
LCDSE1_SEGEN10_SIZE                      equ 0001h
LCDSE1_SEGEN10_LENGTH                    equ 0001h
LCDSE1_SEGEN10_MASK                      equ 0004h
LCDSE1_SEGEN11_POSN                      equ 0003h
LCDSE1_SEGEN11_POSITION                  equ 0003h
LCDSE1_SEGEN11_SIZE                      equ 0001h
LCDSE1_SEGEN11_LENGTH                    equ 0001h
LCDSE1_SEGEN11_MASK                      equ 0008h
LCDSE1_SEGEN12_POSN                      equ 0004h
LCDSE1_SEGEN12_POSITION                  equ 0004h
LCDSE1_SEGEN12_SIZE                      equ 0001h
LCDSE1_SEGEN12_LENGTH                    equ 0001h
LCDSE1_SEGEN12_MASK                      equ 0010h
LCDSE1_SEGEN13_POSN                      equ 0005h
LCDSE1_SEGEN13_POSITION                  equ 0005h
LCDSE1_SEGEN13_SIZE                      equ 0001h
LCDSE1_SEGEN13_LENGTH                    equ 0001h
LCDSE1_SEGEN13_MASK                      equ 0020h
LCDSE1_SEGEN14_POSN                      equ 0006h
LCDSE1_SEGEN14_POSITION                  equ 0006h
LCDSE1_SEGEN14_SIZE                      equ 0001h
LCDSE1_SEGEN14_LENGTH                    equ 0001h
LCDSE1_SEGEN14_MASK                      equ 0040h
LCDSE1_SEGEN15_POSN                      equ 0007h
LCDSE1_SEGEN15_POSITION                  equ 0007h
LCDSE1_SEGEN15_SIZE                      equ 0001h
LCDSE1_SEGEN15_LENGTH                    equ 0001h
LCDSE1_SEGEN15_MASK                      equ 0080h

// Register: LCDSE2
#define LCDSE2 LCDSE2
LCDSE2                                   equ 011Eh
// bitfield definitions
LCDSE2_SEG16_POSN                        equ 0000h
LCDSE2_SEG16_POSITION                    equ 0000h
LCDSE2_SEG16_SIZE                        equ 0001h
LCDSE2_SEG16_LENGTH                      equ 0001h
LCDSE2_SEG16_MASK                        equ 0001h
LCDSE2_SEG17_POSN                        equ 0001h
LCDSE2_SEG17_POSITION                    equ 0001h
LCDSE2_SEG17_SIZE                        equ 0001h
LCDSE2_SEG17_LENGTH                      equ 0001h
LCDSE2_SEG17_MASK                        equ 0002h
LCDSE2_SEG18_POSN                        equ 0002h
LCDSE2_SEG18_POSITION                    equ 0002h
LCDSE2_SEG18_SIZE                        equ 0001h
LCDSE2_SEG18_LENGTH                      equ 0001h
LCDSE2_SEG18_MASK                        equ 0004h
LCDSE2_SEG19_POSN                        equ 0003h
LCDSE2_SEG19_POSITION                    equ 0003h
LCDSE2_SEG19_SIZE                        equ 0001h
LCDSE2_SEG19_LENGTH                      equ 0001h
LCDSE2_SEG19_MASK                        equ 0008h
LCDSE2_SEG20_POSN                        equ 0004h
LCDSE2_SEG20_POSITION                    equ 0004h
LCDSE2_SEG20_SIZE                        equ 0001h
LCDSE2_SEG20_LENGTH                      equ 0001h
LCDSE2_SEG20_MASK                        equ 0010h
LCDSE2_SEG21_POSN                        equ 0005h
LCDSE2_SEG21_POSITION                    equ 0005h
LCDSE2_SEG21_SIZE                        equ 0001h
LCDSE2_SEG21_LENGTH                      equ 0001h
LCDSE2_SEG21_MASK                        equ 0020h
LCDSE2_SEG22_POSN                        equ 0006h
LCDSE2_SEG22_POSITION                    equ 0006h
LCDSE2_SEG22_SIZE                        equ 0001h
LCDSE2_SEG22_LENGTH                      equ 0001h
LCDSE2_SEG22_MASK                        equ 0040h
LCDSE2_SEG23_POSN                        equ 0007h
LCDSE2_SEG23_POSITION                    equ 0007h
LCDSE2_SEG23_SIZE                        equ 0001h
LCDSE2_SEG23_LENGTH                      equ 0001h
LCDSE2_SEG23_MASK                        equ 0080h
LCDSE2_SE16_POSN                         equ 0000h
LCDSE2_SE16_POSITION                     equ 0000h
LCDSE2_SE16_SIZE                         equ 0001h
LCDSE2_SE16_LENGTH                       equ 0001h
LCDSE2_SE16_MASK                         equ 0001h
LCDSE2_SE17_POSN                         equ 0001h
LCDSE2_SE17_POSITION                     equ 0001h
LCDSE2_SE17_SIZE                         equ 0001h
LCDSE2_SE17_LENGTH                       equ 0001h
LCDSE2_SE17_MASK                         equ 0002h
LCDSE2_SE18_POSN                         equ 0002h
LCDSE2_SE18_POSITION                     equ 0002h
LCDSE2_SE18_SIZE                         equ 0001h
LCDSE2_SE18_LENGTH                       equ 0001h
LCDSE2_SE18_MASK                         equ 0004h
LCDSE2_SE19_POSN                         equ 0003h
LCDSE2_SE19_POSITION                     equ 0003h
LCDSE2_SE19_SIZE                         equ 0001h
LCDSE2_SE19_LENGTH                       equ 0001h
LCDSE2_SE19_MASK                         equ 0008h
LCDSE2_SE20_POSN                         equ 0004h
LCDSE2_SE20_POSITION                     equ 0004h
LCDSE2_SE20_SIZE                         equ 0001h
LCDSE2_SE20_LENGTH                       equ 0001h
LCDSE2_SE20_MASK                         equ 0010h
LCDSE2_SE21_POSN                         equ 0005h
LCDSE2_SE21_POSITION                     equ 0005h
LCDSE2_SE21_SIZE                         equ 0001h
LCDSE2_SE21_LENGTH                       equ 0001h
LCDSE2_SE21_MASK                         equ 0020h
LCDSE2_SE22_POSN                         equ 0006h
LCDSE2_SE22_POSITION                     equ 0006h
LCDSE2_SE22_SIZE                         equ 0001h
LCDSE2_SE22_LENGTH                       equ 0001h
LCDSE2_SE22_MASK                         equ 0040h
LCDSE2_SE23_POSN                         equ 0007h
LCDSE2_SE23_POSITION                     equ 0007h
LCDSE2_SE23_SIZE                         equ 0001h
LCDSE2_SE23_LENGTH                       equ 0001h
LCDSE2_SE23_MASK                         equ 0080h
LCDSE2_SEGEN16_POSN                      equ 0000h
LCDSE2_SEGEN16_POSITION                  equ 0000h
LCDSE2_SEGEN16_SIZE                      equ 0001h
LCDSE2_SEGEN16_LENGTH                    equ 0001h
LCDSE2_SEGEN16_MASK                      equ 0001h
LCDSE2_SEGEN17_POSN                      equ 0001h
LCDSE2_SEGEN17_POSITION                  equ 0001h
LCDSE2_SEGEN17_SIZE                      equ 0001h
LCDSE2_SEGEN17_LENGTH                    equ 0001h
LCDSE2_SEGEN17_MASK                      equ 0002h
LCDSE2_SEGEN18_POSN                      equ 0002h
LCDSE2_SEGEN18_POSITION                  equ 0002h
LCDSE2_SEGEN18_SIZE                      equ 0001h
LCDSE2_SEGEN18_LENGTH                    equ 0001h
LCDSE2_SEGEN18_MASK                      equ 0004h
LCDSE2_SEGEN19_POSN                      equ 0003h
LCDSE2_SEGEN19_POSITION                  equ 0003h
LCDSE2_SEGEN19_SIZE                      equ 0001h
LCDSE2_SEGEN19_LENGTH                    equ 0001h
LCDSE2_SEGEN19_MASK                      equ 0008h
LCDSE2_SEGEN20_POSN                      equ 0004h
LCDSE2_SEGEN20_POSITION                  equ 0004h
LCDSE2_SEGEN20_SIZE                      equ 0001h
LCDSE2_SEGEN20_LENGTH                    equ 0001h
LCDSE2_SEGEN20_MASK                      equ 0010h
LCDSE2_SEGEN21_POSN                      equ 0005h
LCDSE2_SEGEN21_POSITION                  equ 0005h
LCDSE2_SEGEN21_SIZE                      equ 0001h
LCDSE2_SEGEN21_LENGTH                    equ 0001h
LCDSE2_SEGEN21_MASK                      equ 0020h
LCDSE2_SEGEN22_POSN                      equ 0006h
LCDSE2_SEGEN22_POSITION                  equ 0006h
LCDSE2_SEGEN22_SIZE                      equ 0001h
LCDSE2_SEGEN22_LENGTH                    equ 0001h
LCDSE2_SEGEN22_MASK                      equ 0040h
LCDSE2_SEGEN23_POSN                      equ 0007h
LCDSE2_SEGEN23_POSITION                  equ 0007h
LCDSE2_SEGEN23_SIZE                      equ 0001h
LCDSE2_SEGEN23_LENGTH                    equ 0001h
LCDSE2_SEGEN23_MASK                      equ 0080h

// Register: TRISF
#define TRISF TRISF
TRISF                                    equ 0185h
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
TRISG                                    equ 0187h
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

// Register: PORTF
#define PORTF PORTF
PORTF                                    equ 0188h
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
PORTG                                    equ 0189h
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
EECON1_EERD_POSN                         equ 0000h
EECON1_EERD_POSITION                     equ 0000h
EECON1_EERD_SIZE                         equ 0001h
EECON1_EERD_LENGTH                       equ 0001h
EECON1_EERD_MASK                         equ 0001h
EECON1_EEWR_POSN                         equ 0001h
EECON1_EEWR_POSITION                     equ 0001h
EECON1_EEWR_SIZE                         equ 0001h
EECON1_EEWR_LENGTH                       equ 0001h
EECON1_EEWR_MASK                         equ 0002h

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 018Dh

// Register: LCDDATA12
#define LCDDATA12 LCDDATA12
LCDDATA12                                equ 0190h
// bitfield definitions
LCDDATA12_SEG24_POSN                     equ 0000h
LCDDATA12_SEG24_POSITION                 equ 0000h
LCDDATA12_SEG24_SIZE                     equ 0001h
LCDDATA12_SEG24_LENGTH                   equ 0001h
LCDDATA12_SEG24_MASK                     equ 0001h
LCDDATA12_SEG25_POSN                     equ 0001h
LCDDATA12_SEG25_POSITION                 equ 0001h
LCDDATA12_SEG25_SIZE                     equ 0001h
LCDDATA12_SEG25_LENGTH                   equ 0001h
LCDDATA12_SEG25_MASK                     equ 0002h
LCDDATA12_SEG26_POSN                     equ 0002h
LCDDATA12_SEG26_POSITION                 equ 0002h
LCDDATA12_SEG26_SIZE                     equ 0001h
LCDDATA12_SEG26_LENGTH                   equ 0001h
LCDDATA12_SEG26_MASK                     equ 0004h
LCDDATA12_SEG27_POSN                     equ 0003h
LCDDATA12_SEG27_POSITION                 equ 0003h
LCDDATA12_SEG27_SIZE                     equ 0001h
LCDDATA12_SEG27_LENGTH                   equ 0001h
LCDDATA12_SEG27_MASK                     equ 0008h
LCDDATA12_SEG28_POSN                     equ 0004h
LCDDATA12_SEG28_POSITION                 equ 0004h
LCDDATA12_SEG28_SIZE                     equ 0001h
LCDDATA12_SEG28_LENGTH                   equ 0001h
LCDDATA12_SEG28_MASK                     equ 0010h
LCDDATA12_SEG29_POSN                     equ 0005h
LCDDATA12_SEG29_POSITION                 equ 0005h
LCDDATA12_SEG29_SIZE                     equ 0001h
LCDDATA12_SEG29_LENGTH                   equ 0001h
LCDDATA12_SEG29_MASK                     equ 0020h
LCDDATA12_SEG30_POSN                     equ 0006h
LCDDATA12_SEG30_POSITION                 equ 0006h
LCDDATA12_SEG30_SIZE                     equ 0001h
LCDDATA12_SEG30_LENGTH                   equ 0001h
LCDDATA12_SEG30_MASK                     equ 0040h
LCDDATA12_SEG31_POSN                     equ 0007h
LCDDATA12_SEG31_POSITION                 equ 0007h
LCDDATA12_SEG31_SIZE                     equ 0001h
LCDDATA12_SEG31_LENGTH                   equ 0001h
LCDDATA12_SEG31_MASK                     equ 0080h
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
LCDDATA12_SEG27COM0_POSN                 equ 0003h
LCDDATA12_SEG27COM0_POSITION             equ 0003h
LCDDATA12_SEG27COM0_SIZE                 equ 0001h
LCDDATA12_SEG27COM0_LENGTH               equ 0001h
LCDDATA12_SEG27COM0_MASK                 equ 0008h
LCDDATA12_SEG28COM0_POSN                 equ 0004h
LCDDATA12_SEG28COM0_POSITION             equ 0004h
LCDDATA12_SEG28COM0_SIZE                 equ 0001h
LCDDATA12_SEG28COM0_LENGTH               equ 0001h
LCDDATA12_SEG28COM0_MASK                 equ 0010h
LCDDATA12_SEG29COM0_POSN                 equ 0005h
LCDDATA12_SEG29COM0_POSITION             equ 0005h
LCDDATA12_SEG29COM0_SIZE                 equ 0001h
LCDDATA12_SEG29COM0_LENGTH               equ 0001h
LCDDATA12_SEG29COM0_MASK                 equ 0020h
LCDDATA12_SEG30COM0_POSN                 equ 0006h
LCDDATA12_SEG30COM0_POSITION             equ 0006h
LCDDATA12_SEG30COM0_SIZE                 equ 0001h
LCDDATA12_SEG30COM0_LENGTH               equ 0001h
LCDDATA12_SEG30COM0_MASK                 equ 0040h
LCDDATA12_SEG31COM0_POSN                 equ 0007h
LCDDATA12_SEG31COM0_POSITION             equ 0007h
LCDDATA12_SEG31COM0_SIZE                 equ 0001h
LCDDATA12_SEG31COM0_LENGTH               equ 0001h
LCDDATA12_SEG31COM0_MASK                 equ 0080h
LCDDATA12_S24C0_POSN                     equ 0000h
LCDDATA12_S24C0_POSITION                 equ 0000h
LCDDATA12_S24C0_SIZE                     equ 0001h
LCDDATA12_S24C0_LENGTH                   equ 0001h
LCDDATA12_S24C0_MASK                     equ 0001h
LCDDATA12_S25C0_POSN                     equ 0001h
LCDDATA12_S25C0_POSITION                 equ 0001h
LCDDATA12_S25C0_SIZE                     equ 0001h
LCDDATA12_S25C0_LENGTH                   equ 0001h
LCDDATA12_S25C0_MASK                     equ 0002h
LCDDATA12_S26C0_POSN                     equ 0002h
LCDDATA12_S26C0_POSITION                 equ 0002h
LCDDATA12_S26C0_SIZE                     equ 0001h
LCDDATA12_S26C0_LENGTH                   equ 0001h
LCDDATA12_S26C0_MASK                     equ 0004h
LCDDATA12_S27C0_POSN                     equ 0003h
LCDDATA12_S27C0_POSITION                 equ 0003h
LCDDATA12_S27C0_SIZE                     equ 0001h
LCDDATA12_S27C0_LENGTH                   equ 0001h
LCDDATA12_S27C0_MASK                     equ 0008h
LCDDATA12_S28C0_POSN                     equ 0004h
LCDDATA12_S28C0_POSITION                 equ 0004h
LCDDATA12_S28C0_SIZE                     equ 0001h
LCDDATA12_S28C0_LENGTH                   equ 0001h
LCDDATA12_S28C0_MASK                     equ 0010h
LCDDATA12_S29C0_POSN                     equ 0005h
LCDDATA12_S29C0_POSITION                 equ 0005h
LCDDATA12_S29C0_SIZE                     equ 0001h
LCDDATA12_S29C0_LENGTH                   equ 0001h
LCDDATA12_S29C0_MASK                     equ 0020h
LCDDATA12_S30C0_POSN                     equ 0006h
LCDDATA12_S30C0_POSITION                 equ 0006h
LCDDATA12_S30C0_SIZE                     equ 0001h
LCDDATA12_S30C0_LENGTH                   equ 0001h
LCDDATA12_S30C0_MASK                     equ 0040h
LCDDATA12_S31C0_POSN                     equ 0007h
LCDDATA12_S31C0_POSITION                 equ 0007h
LCDDATA12_S31C0_SIZE                     equ 0001h
LCDDATA12_S31C0_LENGTH                   equ 0001h
LCDDATA12_S31C0_MASK                     equ 0080h

// Register: LCDDATA13
#define LCDDATA13 LCDDATA13
LCDDATA13                                equ 0191h
// bitfield definitions
LCDDATA13_SEG32_POSN                     equ 0000h
LCDDATA13_SEG32_POSITION                 equ 0000h
LCDDATA13_SEG32_SIZE                     equ 0001h
LCDDATA13_SEG32_LENGTH                   equ 0001h
LCDDATA13_SEG32_MASK                     equ 0001h
LCDDATA13_SEG33_POSN                     equ 0001h
LCDDATA13_SEG33_POSITION                 equ 0001h
LCDDATA13_SEG33_SIZE                     equ 0001h
LCDDATA13_SEG33_LENGTH                   equ 0001h
LCDDATA13_SEG33_MASK                     equ 0002h
LCDDATA13_SEG34_POSN                     equ 0002h
LCDDATA13_SEG34_POSITION                 equ 0002h
LCDDATA13_SEG34_SIZE                     equ 0001h
LCDDATA13_SEG34_LENGTH                   equ 0001h
LCDDATA13_SEG34_MASK                     equ 0004h
LCDDATA13_SEG35_POSN                     equ 0003h
LCDDATA13_SEG35_POSITION                 equ 0003h
LCDDATA13_SEG35_SIZE                     equ 0001h
LCDDATA13_SEG35_LENGTH                   equ 0001h
LCDDATA13_SEG35_MASK                     equ 0008h
LCDDATA13_SEG36_POSN                     equ 0004h
LCDDATA13_SEG36_POSITION                 equ 0004h
LCDDATA13_SEG36_SIZE                     equ 0001h
LCDDATA13_SEG36_LENGTH                   equ 0001h
LCDDATA13_SEG36_MASK                     equ 0010h
LCDDATA13_SEG37_POSN                     equ 0005h
LCDDATA13_SEG37_POSITION                 equ 0005h
LCDDATA13_SEG37_SIZE                     equ 0001h
LCDDATA13_SEG37_LENGTH                   equ 0001h
LCDDATA13_SEG37_MASK                     equ 0020h
LCDDATA13_SEG38_POSN                     equ 0006h
LCDDATA13_SEG38_POSITION                 equ 0006h
LCDDATA13_SEG38_SIZE                     equ 0001h
LCDDATA13_SEG38_LENGTH                   equ 0001h
LCDDATA13_SEG38_MASK                     equ 0040h
LCDDATA13_SEG39_POSN                     equ 0007h
LCDDATA13_SEG39_POSITION                 equ 0007h
LCDDATA13_SEG39_SIZE                     equ 0001h
LCDDATA13_SEG39_LENGTH                   equ 0001h
LCDDATA13_SEG39_MASK                     equ 0080h
LCDDATA13_SEG32COM0_POSN                 equ 0000h
LCDDATA13_SEG32COM0_POSITION             equ 0000h
LCDDATA13_SEG32COM0_SIZE                 equ 0001h
LCDDATA13_SEG32COM0_LENGTH               equ 0001h
LCDDATA13_SEG32COM0_MASK                 equ 0001h
LCDDATA13_SEG33COM0_POSN                 equ 0001h
LCDDATA13_SEG33COM0_POSITION             equ 0001h
LCDDATA13_SEG33COM0_SIZE                 equ 0001h
LCDDATA13_SEG33COM0_LENGTH               equ 0001h
LCDDATA13_SEG33COM0_MASK                 equ 0002h
LCDDATA13_SEG34COM0_POSN                 equ 0002h
LCDDATA13_SEG34COM0_POSITION             equ 0002h
LCDDATA13_SEG34COM0_SIZE                 equ 0001h
LCDDATA13_SEG34COM0_LENGTH               equ 0001h
LCDDATA13_SEG34COM0_MASK                 equ 0004h
LCDDATA13_SEG35COM0_POSN                 equ 0003h
LCDDATA13_SEG35COM0_POSITION             equ 0003h
LCDDATA13_SEG35COM0_SIZE                 equ 0001h
LCDDATA13_SEG35COM0_LENGTH               equ 0001h
LCDDATA13_SEG35COM0_MASK                 equ 0008h
LCDDATA13_SEG36COM0_POSN                 equ 0004h
LCDDATA13_SEG36COM0_POSITION             equ 0004h
LCDDATA13_SEG36COM0_SIZE                 equ 0001h
LCDDATA13_SEG36COM0_LENGTH               equ 0001h
LCDDATA13_SEG36COM0_MASK                 equ 0010h
LCDDATA13_SEG37COM0_POSN                 equ 0005h
LCDDATA13_SEG37COM0_POSITION             equ 0005h
LCDDATA13_SEG37COM0_SIZE                 equ 0001h
LCDDATA13_SEG37COM0_LENGTH               equ 0001h
LCDDATA13_SEG37COM0_MASK                 equ 0020h
LCDDATA13_SEG38COM0_POSN                 equ 0006h
LCDDATA13_SEG38COM0_POSITION             equ 0006h
LCDDATA13_SEG38COM0_SIZE                 equ 0001h
LCDDATA13_SEG38COM0_LENGTH               equ 0001h
LCDDATA13_SEG38COM0_MASK                 equ 0040h
LCDDATA13_SEG39COM0_POSN                 equ 0007h
LCDDATA13_SEG39COM0_POSITION             equ 0007h
LCDDATA13_SEG39COM0_SIZE                 equ 0001h
LCDDATA13_SEG39COM0_LENGTH               equ 0001h
LCDDATA13_SEG39COM0_MASK                 equ 0080h
LCDDATA13_S32C0_POSN                     equ 0000h
LCDDATA13_S32C0_POSITION                 equ 0000h
LCDDATA13_S32C0_SIZE                     equ 0001h
LCDDATA13_S32C0_LENGTH                   equ 0001h
LCDDATA13_S32C0_MASK                     equ 0001h
LCDDATA13_S33C0_POSN                     equ 0001h
LCDDATA13_S33C0_POSITION                 equ 0001h
LCDDATA13_S33C0_SIZE                     equ 0001h
LCDDATA13_S33C0_LENGTH                   equ 0001h
LCDDATA13_S33C0_MASK                     equ 0002h
LCDDATA13_S34C0_POSN                     equ 0002h
LCDDATA13_S34C0_POSITION                 equ 0002h
LCDDATA13_S34C0_SIZE                     equ 0001h
LCDDATA13_S34C0_LENGTH                   equ 0001h
LCDDATA13_S34C0_MASK                     equ 0004h
LCDDATA13_S35C0_POSN                     equ 0003h
LCDDATA13_S35C0_POSITION                 equ 0003h
LCDDATA13_S35C0_SIZE                     equ 0001h
LCDDATA13_S35C0_LENGTH                   equ 0001h
LCDDATA13_S35C0_MASK                     equ 0008h
LCDDATA13_S36C0_POSN                     equ 0004h
LCDDATA13_S36C0_POSITION                 equ 0004h
LCDDATA13_S36C0_SIZE                     equ 0001h
LCDDATA13_S36C0_LENGTH                   equ 0001h
LCDDATA13_S36C0_MASK                     equ 0010h
LCDDATA13_S37C0_POSN                     equ 0005h
LCDDATA13_S37C0_POSITION                 equ 0005h
LCDDATA13_S37C0_SIZE                     equ 0001h
LCDDATA13_S37C0_LENGTH                   equ 0001h
LCDDATA13_S37C0_MASK                     equ 0020h
LCDDATA13_S38C0_POSN                     equ 0006h
LCDDATA13_S38C0_POSITION                 equ 0006h
LCDDATA13_S38C0_SIZE                     equ 0001h
LCDDATA13_S38C0_LENGTH                   equ 0001h
LCDDATA13_S38C0_MASK                     equ 0040h
LCDDATA13_S39C0_POSN                     equ 0007h
LCDDATA13_S39C0_POSITION                 equ 0007h
LCDDATA13_S39C0_SIZE                     equ 0001h
LCDDATA13_S39C0_LENGTH                   equ 0001h
LCDDATA13_S39C0_MASK                     equ 0080h

// Register: LCDDATA14
#define LCDDATA14 LCDDATA14
LCDDATA14                                equ 0192h
// bitfield definitions
LCDDATA14_SEG40_POSN                     equ 0000h
LCDDATA14_SEG40_POSITION                 equ 0000h
LCDDATA14_SEG40_SIZE                     equ 0001h
LCDDATA14_SEG40_LENGTH                   equ 0001h
LCDDATA14_SEG40_MASK                     equ 0001h
LCDDATA14_SEG41_POSN                     equ 0001h
LCDDATA14_SEG41_POSITION                 equ 0001h
LCDDATA14_SEG41_SIZE                     equ 0001h
LCDDATA14_SEG41_LENGTH                   equ 0001h
LCDDATA14_SEG41_MASK                     equ 0002h
LCDDATA14_SEG40COM0_POSN                 equ 0000h
LCDDATA14_SEG40COM0_POSITION             equ 0000h
LCDDATA14_SEG40COM0_SIZE                 equ 0001h
LCDDATA14_SEG40COM0_LENGTH               equ 0001h
LCDDATA14_SEG40COM0_MASK                 equ 0001h
LCDDATA14_SEG41COM0_POSN                 equ 0001h
LCDDATA14_SEG41COM0_POSITION             equ 0001h
LCDDATA14_SEG41COM0_SIZE                 equ 0001h
LCDDATA14_SEG41COM0_LENGTH               equ 0001h
LCDDATA14_SEG41COM0_MASK                 equ 0002h
LCDDATA14_S40C0_POSN                     equ 0000h
LCDDATA14_S40C0_POSITION                 equ 0000h
LCDDATA14_S40C0_SIZE                     equ 0001h
LCDDATA14_S40C0_LENGTH                   equ 0001h
LCDDATA14_S40C0_MASK                     equ 0001h
LCDDATA14_S41C0_POSN                     equ 0001h
LCDDATA14_S41C0_POSITION                 equ 0001h
LCDDATA14_S41C0_SIZE                     equ 0001h
LCDDATA14_S41C0_LENGTH                   equ 0001h
LCDDATA14_S41C0_MASK                     equ 0002h

// Register: LCDDATA15
#define LCDDATA15 LCDDATA15
LCDDATA15                                equ 0193h
// bitfield definitions
LCDDATA15_SEG24_POSN                     equ 0000h
LCDDATA15_SEG24_POSITION                 equ 0000h
LCDDATA15_SEG24_SIZE                     equ 0001h
LCDDATA15_SEG24_LENGTH                   equ 0001h
LCDDATA15_SEG24_MASK                     equ 0001h
LCDDATA15_SEG25_POSN                     equ 0001h
LCDDATA15_SEG25_POSITION                 equ 0001h
LCDDATA15_SEG25_SIZE                     equ 0001h
LCDDATA15_SEG25_LENGTH                   equ 0001h
LCDDATA15_SEG25_MASK                     equ 0002h
LCDDATA15_SEG26_POSN                     equ 0002h
LCDDATA15_SEG26_POSITION                 equ 0002h
LCDDATA15_SEG26_SIZE                     equ 0001h
LCDDATA15_SEG26_LENGTH                   equ 0001h
LCDDATA15_SEG26_MASK                     equ 0004h
LCDDATA15_SEG27_POSN                     equ 0003h
LCDDATA15_SEG27_POSITION                 equ 0003h
LCDDATA15_SEG27_SIZE                     equ 0001h
LCDDATA15_SEG27_LENGTH                   equ 0001h
LCDDATA15_SEG27_MASK                     equ 0008h
LCDDATA15_SEG28_POSN                     equ 0004h
LCDDATA15_SEG28_POSITION                 equ 0004h
LCDDATA15_SEG28_SIZE                     equ 0001h
LCDDATA15_SEG28_LENGTH                   equ 0001h
LCDDATA15_SEG28_MASK                     equ 0010h
LCDDATA15_SEG29_POSN                     equ 0005h
LCDDATA15_SEG29_POSITION                 equ 0005h
LCDDATA15_SEG29_SIZE                     equ 0001h
LCDDATA15_SEG29_LENGTH                   equ 0001h
LCDDATA15_SEG29_MASK                     equ 0020h
LCDDATA15_SEG30_POSN                     equ 0006h
LCDDATA15_SEG30_POSITION                 equ 0006h
LCDDATA15_SEG30_SIZE                     equ 0001h
LCDDATA15_SEG30_LENGTH                   equ 0001h
LCDDATA15_SEG30_MASK                     equ 0040h
LCDDATA15_SEG31_POSN                     equ 0007h
LCDDATA15_SEG31_POSITION                 equ 0007h
LCDDATA15_SEG31_SIZE                     equ 0001h
LCDDATA15_SEG31_LENGTH                   equ 0001h
LCDDATA15_SEG31_MASK                     equ 0080h
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
LCDDATA15_SEG27COM1_POSN                 equ 0003h
LCDDATA15_SEG27COM1_POSITION             equ 0003h
LCDDATA15_SEG27COM1_SIZE                 equ 0001h
LCDDATA15_SEG27COM1_LENGTH               equ 0001h
LCDDATA15_SEG27COM1_MASK                 equ 0008h
LCDDATA15_SEG28COM1_POSN                 equ 0004h
LCDDATA15_SEG28COM1_POSITION             equ 0004h
LCDDATA15_SEG28COM1_SIZE                 equ 0001h
LCDDATA15_SEG28COM1_LENGTH               equ 0001h
LCDDATA15_SEG28COM1_MASK                 equ 0010h
LCDDATA15_SEG29COM1_POSN                 equ 0005h
LCDDATA15_SEG29COM1_POSITION             equ 0005h
LCDDATA15_SEG29COM1_SIZE                 equ 0001h
LCDDATA15_SEG29COM1_LENGTH               equ 0001h
LCDDATA15_SEG29COM1_MASK                 equ 0020h
LCDDATA15_SEG30COM1_POSN                 equ 0006h
LCDDATA15_SEG30COM1_POSITION             equ 0006h
LCDDATA15_SEG30COM1_SIZE                 equ 0001h
LCDDATA15_SEG30COM1_LENGTH               equ 0001h
LCDDATA15_SEG30COM1_MASK                 equ 0040h
LCDDATA15_SEG31COM1_POSN                 equ 0007h
LCDDATA15_SEG31COM1_POSITION             equ 0007h
LCDDATA15_SEG31COM1_SIZE                 equ 0001h
LCDDATA15_SEG31COM1_LENGTH               equ 0001h
LCDDATA15_SEG31COM1_MASK                 equ 0080h
LCDDATA15_S24C1_POSN                     equ 0000h
LCDDATA15_S24C1_POSITION                 equ 0000h
LCDDATA15_S24C1_SIZE                     equ 0001h
LCDDATA15_S24C1_LENGTH                   equ 0001h
LCDDATA15_S24C1_MASK                     equ 0001h
LCDDATA15_S25C1_POSN                     equ 0001h
LCDDATA15_S25C1_POSITION                 equ 0001h
LCDDATA15_S25C1_SIZE                     equ 0001h
LCDDATA15_S25C1_LENGTH                   equ 0001h
LCDDATA15_S25C1_MASK                     equ 0002h
LCDDATA15_S26C1_POSN                     equ 0002h
LCDDATA15_S26C1_POSITION                 equ 0002h
LCDDATA15_S26C1_SIZE                     equ 0001h
LCDDATA15_S26C1_LENGTH                   equ 0001h
LCDDATA15_S26C1_MASK                     equ 0004h
LCDDATA15_S27C1_POSN                     equ 0003h
LCDDATA15_S27C1_POSITION                 equ 0003h
LCDDATA15_S27C1_SIZE                     equ 0001h
LCDDATA15_S27C1_LENGTH                   equ 0001h
LCDDATA15_S27C1_MASK                     equ 0008h
LCDDATA15_S28C1_POSN                     equ 0004h
LCDDATA15_S28C1_POSITION                 equ 0004h
LCDDATA15_S28C1_SIZE                     equ 0001h
LCDDATA15_S28C1_LENGTH                   equ 0001h
LCDDATA15_S28C1_MASK                     equ 0010h
LCDDATA15_S29C1_POSN                     equ 0005h
LCDDATA15_S29C1_POSITION                 equ 0005h
LCDDATA15_S29C1_SIZE                     equ 0001h
LCDDATA15_S29C1_LENGTH                   equ 0001h
LCDDATA15_S29C1_MASK                     equ 0020h
LCDDATA15_S30C1_POSN                     equ 0006h
LCDDATA15_S30C1_POSITION                 equ 0006h
LCDDATA15_S30C1_SIZE                     equ 0001h
LCDDATA15_S30C1_LENGTH                   equ 0001h
LCDDATA15_S30C1_MASK                     equ 0040h
LCDDATA15_S31C1_POSN                     equ 0007h
LCDDATA15_S31C1_POSITION                 equ 0007h
LCDDATA15_S31C1_SIZE                     equ 0001h
LCDDATA15_S31C1_LENGTH                   equ 0001h
LCDDATA15_S31C1_MASK                     equ 0080h

// Register: LCDDATA16
#define LCDDATA16 LCDDATA16
LCDDATA16                                equ 0194h
// bitfield definitions
LCDDATA16_SEG32_POSN                     equ 0000h
LCDDATA16_SEG32_POSITION                 equ 0000h
LCDDATA16_SEG32_SIZE                     equ 0001h
LCDDATA16_SEG32_LENGTH                   equ 0001h
LCDDATA16_SEG32_MASK                     equ 0001h
LCDDATA16_SEG33_POSN                     equ 0001h
LCDDATA16_SEG33_POSITION                 equ 0001h
LCDDATA16_SEG33_SIZE                     equ 0001h
LCDDATA16_SEG33_LENGTH                   equ 0001h
LCDDATA16_SEG33_MASK                     equ 0002h
LCDDATA16_SEG34_POSN                     equ 0002h
LCDDATA16_SEG34_POSITION                 equ 0002h
LCDDATA16_SEG34_SIZE                     equ 0001h
LCDDATA16_SEG34_LENGTH                   equ 0001h
LCDDATA16_SEG34_MASK                     equ 0004h
LCDDATA16_SEG35_POSN                     equ 0003h
LCDDATA16_SEG35_POSITION                 equ 0003h
LCDDATA16_SEG35_SIZE                     equ 0001h
LCDDATA16_SEG35_LENGTH                   equ 0001h
LCDDATA16_SEG35_MASK                     equ 0008h
LCDDATA16_SEG36_POSN                     equ 0004h
LCDDATA16_SEG36_POSITION                 equ 0004h
LCDDATA16_SEG36_SIZE                     equ 0001h
LCDDATA16_SEG36_LENGTH                   equ 0001h
LCDDATA16_SEG36_MASK                     equ 0010h
LCDDATA16_SEG37_POSN                     equ 0005h
LCDDATA16_SEG37_POSITION                 equ 0005h
LCDDATA16_SEG37_SIZE                     equ 0001h
LCDDATA16_SEG37_LENGTH                   equ 0001h
LCDDATA16_SEG37_MASK                     equ 0020h
LCDDATA16_SEG38_POSN                     equ 0006h
LCDDATA16_SEG38_POSITION                 equ 0006h
LCDDATA16_SEG38_SIZE                     equ 0001h
LCDDATA16_SEG38_LENGTH                   equ 0001h
LCDDATA16_SEG38_MASK                     equ 0040h
LCDDATA16_SEG39_POSN                     equ 0007h
LCDDATA16_SEG39_POSITION                 equ 0007h
LCDDATA16_SEG39_SIZE                     equ 0001h
LCDDATA16_SEG39_LENGTH                   equ 0001h
LCDDATA16_SEG39_MASK                     equ 0080h
LCDDATA16_SEG32COM1_POSN                 equ 0000h
LCDDATA16_SEG32COM1_POSITION             equ 0000h
LCDDATA16_SEG32COM1_SIZE                 equ 0001h
LCDDATA16_SEG32COM1_LENGTH               equ 0001h
LCDDATA16_SEG32COM1_MASK                 equ 0001h
LCDDATA16_SEG33COM1_POSN                 equ 0001h
LCDDATA16_SEG33COM1_POSITION             equ 0001h
LCDDATA16_SEG33COM1_SIZE                 equ 0001h
LCDDATA16_SEG33COM1_LENGTH               equ 0001h
LCDDATA16_SEG33COM1_MASK                 equ 0002h
LCDDATA16_SEG34COM1_POSN                 equ 0002h
LCDDATA16_SEG34COM1_POSITION             equ 0002h
LCDDATA16_SEG34COM1_SIZE                 equ 0001h
LCDDATA16_SEG34COM1_LENGTH               equ 0001h
LCDDATA16_SEG34COM1_MASK                 equ 0004h
LCDDATA16_SEG35COM1_POSN                 equ 0003h
LCDDATA16_SEG35COM1_POSITION             equ 0003h
LCDDATA16_SEG35COM1_SIZE                 equ 0001h
LCDDATA16_SEG35COM1_LENGTH               equ 0001h
LCDDATA16_SEG35COM1_MASK                 equ 0008h
LCDDATA16_SEG36COM1_POSN                 equ 0004h
LCDDATA16_SEG36COM1_POSITION             equ 0004h
LCDDATA16_SEG36COM1_SIZE                 equ 0001h
LCDDATA16_SEG36COM1_LENGTH               equ 0001h
LCDDATA16_SEG36COM1_MASK                 equ 0010h
LCDDATA16_SEG37COM1_POSN                 equ 0005h
LCDDATA16_SEG37COM1_POSITION             equ 0005h
LCDDATA16_SEG37COM1_SIZE                 equ 0001h
LCDDATA16_SEG37COM1_LENGTH               equ 0001h
LCDDATA16_SEG37COM1_MASK                 equ 0020h
LCDDATA16_SEG38COM1_POSN                 equ 0006h
LCDDATA16_SEG38COM1_POSITION             equ 0006h
LCDDATA16_SEG38COM1_SIZE                 equ 0001h
LCDDATA16_SEG38COM1_LENGTH               equ 0001h
LCDDATA16_SEG38COM1_MASK                 equ 0040h
LCDDATA16_SEG39COM1_POSN                 equ 0007h
LCDDATA16_SEG39COM1_POSITION             equ 0007h
LCDDATA16_SEG39COM1_SIZE                 equ 0001h
LCDDATA16_SEG39COM1_LENGTH               equ 0001h
LCDDATA16_SEG39COM1_MASK                 equ 0080h
LCDDATA16_S32C1_POSN                     equ 0000h
LCDDATA16_S32C1_POSITION                 equ 0000h
LCDDATA16_S32C1_SIZE                     equ 0001h
LCDDATA16_S32C1_LENGTH                   equ 0001h
LCDDATA16_S32C1_MASK                     equ 0001h
LCDDATA16_S33C1_POSN                     equ 0001h
LCDDATA16_S33C1_POSITION                 equ 0001h
LCDDATA16_S33C1_SIZE                     equ 0001h
LCDDATA16_S33C1_LENGTH                   equ 0001h
LCDDATA16_S33C1_MASK                     equ 0002h
LCDDATA16_S34C1_POSN                     equ 0002h
LCDDATA16_S34C1_POSITION                 equ 0002h
LCDDATA16_S34C1_SIZE                     equ 0001h
LCDDATA16_S34C1_LENGTH                   equ 0001h
LCDDATA16_S34C1_MASK                     equ 0004h
LCDDATA16_S35C1_POSN                     equ 0003h
LCDDATA16_S35C1_POSITION                 equ 0003h
LCDDATA16_S35C1_SIZE                     equ 0001h
LCDDATA16_S35C1_LENGTH                   equ 0001h
LCDDATA16_S35C1_MASK                     equ 0008h
LCDDATA16_S36C1_POSN                     equ 0004h
LCDDATA16_S36C1_POSITION                 equ 0004h
LCDDATA16_S36C1_SIZE                     equ 0001h
LCDDATA16_S36C1_LENGTH                   equ 0001h
LCDDATA16_S36C1_MASK                     equ 0010h
LCDDATA16_S37C1_POSN                     equ 0005h
LCDDATA16_S37C1_POSITION                 equ 0005h
LCDDATA16_S37C1_SIZE                     equ 0001h
LCDDATA16_S37C1_LENGTH                   equ 0001h
LCDDATA16_S37C1_MASK                     equ 0020h
LCDDATA16_S38C1_POSN                     equ 0006h
LCDDATA16_S38C1_POSITION                 equ 0006h
LCDDATA16_S38C1_SIZE                     equ 0001h
LCDDATA16_S38C1_LENGTH                   equ 0001h
LCDDATA16_S38C1_MASK                     equ 0040h
LCDDATA16_S39C1_POSN                     equ 0007h
LCDDATA16_S39C1_POSITION                 equ 0007h
LCDDATA16_S39C1_SIZE                     equ 0001h
LCDDATA16_S39C1_LENGTH                   equ 0001h
LCDDATA16_S39C1_MASK                     equ 0080h

// Register: LCDDATA17
#define LCDDATA17 LCDDATA17
LCDDATA17                                equ 0195h
// bitfield definitions
LCDDATA17_SEG40_POSN                     equ 0000h
LCDDATA17_SEG40_POSITION                 equ 0000h
LCDDATA17_SEG40_SIZE                     equ 0001h
LCDDATA17_SEG40_LENGTH                   equ 0001h
LCDDATA17_SEG40_MASK                     equ 0001h
LCDDATA17_SEG41_POSN                     equ 0001h
LCDDATA17_SEG41_POSITION                 equ 0001h
LCDDATA17_SEG41_SIZE                     equ 0001h
LCDDATA17_SEG41_LENGTH                   equ 0001h
LCDDATA17_SEG41_MASK                     equ 0002h
LCDDATA17_SEG40COM1_POSN                 equ 0000h
LCDDATA17_SEG40COM1_POSITION             equ 0000h
LCDDATA17_SEG40COM1_SIZE                 equ 0001h
LCDDATA17_SEG40COM1_LENGTH               equ 0001h
LCDDATA17_SEG40COM1_MASK                 equ 0001h
LCDDATA17_SEG41COM1_POSN                 equ 0001h
LCDDATA17_SEG41COM1_POSITION             equ 0001h
LCDDATA17_SEG41COM1_SIZE                 equ 0001h
LCDDATA17_SEG41COM1_LENGTH               equ 0001h
LCDDATA17_SEG41COM1_MASK                 equ 0002h
LCDDATA17_S40C1_POSN                     equ 0000h
LCDDATA17_S40C1_POSITION                 equ 0000h
LCDDATA17_S40C1_SIZE                     equ 0001h
LCDDATA17_S40C1_LENGTH                   equ 0001h
LCDDATA17_S40C1_MASK                     equ 0001h
LCDDATA17_S41C1_POSN                     equ 0001h
LCDDATA17_S41C1_POSITION                 equ 0001h
LCDDATA17_S41C1_SIZE                     equ 0001h
LCDDATA17_S41C1_LENGTH                   equ 0001h
LCDDATA17_S41C1_MASK                     equ 0002h

// Register: LCDDATA18
#define LCDDATA18 LCDDATA18
LCDDATA18                                equ 0196h
// bitfield definitions
LCDDATA18_SEG24_POSN                     equ 0000h
LCDDATA18_SEG24_POSITION                 equ 0000h
LCDDATA18_SEG24_SIZE                     equ 0001h
LCDDATA18_SEG24_LENGTH                   equ 0001h
LCDDATA18_SEG24_MASK                     equ 0001h
LCDDATA18_SEG25_POSN                     equ 0001h
LCDDATA18_SEG25_POSITION                 equ 0001h
LCDDATA18_SEG25_SIZE                     equ 0001h
LCDDATA18_SEG25_LENGTH                   equ 0001h
LCDDATA18_SEG25_MASK                     equ 0002h
LCDDATA18_SEG26_POSN                     equ 0002h
LCDDATA18_SEG26_POSITION                 equ 0002h
LCDDATA18_SEG26_SIZE                     equ 0001h
LCDDATA18_SEG26_LENGTH                   equ 0001h
LCDDATA18_SEG26_MASK                     equ 0004h
LCDDATA18_SEG27_POSN                     equ 0003h
LCDDATA18_SEG27_POSITION                 equ 0003h
LCDDATA18_SEG27_SIZE                     equ 0001h
LCDDATA18_SEG27_LENGTH                   equ 0001h
LCDDATA18_SEG27_MASK                     equ 0008h
LCDDATA18_SEG28_POSN                     equ 0004h
LCDDATA18_SEG28_POSITION                 equ 0004h
LCDDATA18_SEG28_SIZE                     equ 0001h
LCDDATA18_SEG28_LENGTH                   equ 0001h
LCDDATA18_SEG28_MASK                     equ 0010h
LCDDATA18_SEG29_POSN                     equ 0005h
LCDDATA18_SEG29_POSITION                 equ 0005h
LCDDATA18_SEG29_SIZE                     equ 0001h
LCDDATA18_SEG29_LENGTH                   equ 0001h
LCDDATA18_SEG29_MASK                     equ 0020h
LCDDATA18_SEG30_POSN                     equ 0006h
LCDDATA18_SEG30_POSITION                 equ 0006h
LCDDATA18_SEG30_SIZE                     equ 0001h
LCDDATA18_SEG30_LENGTH                   equ 0001h
LCDDATA18_SEG30_MASK                     equ 0040h
LCDDATA18_SEG31_POSN                     equ 0007h
LCDDATA18_SEG31_POSITION                 equ 0007h
LCDDATA18_SEG31_SIZE                     equ 0001h
LCDDATA18_SEG31_LENGTH                   equ 0001h
LCDDATA18_SEG31_MASK                     equ 0080h
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
LCDDATA18_SEG27COM2_POSN                 equ 0003h
LCDDATA18_SEG27COM2_POSITION             equ 0003h
LCDDATA18_SEG27COM2_SIZE                 equ 0001h
LCDDATA18_SEG27COM2_LENGTH               equ 0001h
LCDDATA18_SEG27COM2_MASK                 equ 0008h
LCDDATA18_SEG28COM2_POSN                 equ 0004h
LCDDATA18_SEG28COM2_POSITION             equ 0004h
LCDDATA18_SEG28COM2_SIZE                 equ 0001h
LCDDATA18_SEG28COM2_LENGTH               equ 0001h
LCDDATA18_SEG28COM2_MASK                 equ 0010h
LCDDATA18_SEG29COM2_POSN                 equ 0005h
LCDDATA18_SEG29COM2_POSITION             equ 0005h
LCDDATA18_SEG29COM2_SIZE                 equ 0001h
LCDDATA18_SEG29COM2_LENGTH               equ 0001h
LCDDATA18_SEG29COM2_MASK                 equ 0020h
LCDDATA18_SEG30COM2_POSN                 equ 0006h
LCDDATA18_SEG30COM2_POSITION             equ 0006h
LCDDATA18_SEG30COM2_SIZE                 equ 0001h
LCDDATA18_SEG30COM2_LENGTH               equ 0001h
LCDDATA18_SEG30COM2_MASK                 equ 0040h
LCDDATA18_SEG31COM2_POSN                 equ 0007h
LCDDATA18_SEG31COM2_POSITION             equ 0007h
LCDDATA18_SEG31COM2_SIZE                 equ 0001h
LCDDATA18_SEG31COM2_LENGTH               equ 0001h
LCDDATA18_SEG31COM2_MASK                 equ 0080h
LCDDATA18_S24C2_POSN                     equ 0000h
LCDDATA18_S24C2_POSITION                 equ 0000h
LCDDATA18_S24C2_SIZE                     equ 0001h
LCDDATA18_S24C2_LENGTH                   equ 0001h
LCDDATA18_S24C2_MASK                     equ 0001h
LCDDATA18_S25C2_POSN                     equ 0001h
LCDDATA18_S25C2_POSITION                 equ 0001h
LCDDATA18_S25C2_SIZE                     equ 0001h
LCDDATA18_S25C2_LENGTH                   equ 0001h
LCDDATA18_S25C2_MASK                     equ 0002h
LCDDATA18_S26C2_POSN                     equ 0002h
LCDDATA18_S26C2_POSITION                 equ 0002h
LCDDATA18_S26C2_SIZE                     equ 0001h
LCDDATA18_S26C2_LENGTH                   equ 0001h
LCDDATA18_S26C2_MASK                     equ 0004h
LCDDATA18_S27C2_POSN                     equ 0003h
LCDDATA18_S27C2_POSITION                 equ 0003h
LCDDATA18_S27C2_SIZE                     equ 0001h
LCDDATA18_S27C2_LENGTH                   equ 0001h
LCDDATA18_S27C2_MASK                     equ 0008h
LCDDATA18_S28C2_POSN                     equ 0004h
LCDDATA18_S28C2_POSITION                 equ 0004h
LCDDATA18_S28C2_SIZE                     equ 0001h
LCDDATA18_S28C2_LENGTH                   equ 0001h
LCDDATA18_S28C2_MASK                     equ 0010h
LCDDATA18_S29C2_POSN                     equ 0005h
LCDDATA18_S29C2_POSITION                 equ 0005h
LCDDATA18_S29C2_SIZE                     equ 0001h
LCDDATA18_S29C2_LENGTH                   equ 0001h
LCDDATA18_S29C2_MASK                     equ 0020h
LCDDATA18_S30C2_POSN                     equ 0006h
LCDDATA18_S30C2_POSITION                 equ 0006h
LCDDATA18_S30C2_SIZE                     equ 0001h
LCDDATA18_S30C2_LENGTH                   equ 0001h
LCDDATA18_S30C2_MASK                     equ 0040h
LCDDATA18_S31C2_POSN                     equ 0007h
LCDDATA18_S31C2_POSITION                 equ 0007h
LCDDATA18_S31C2_SIZE                     equ 0001h
LCDDATA18_S31C2_LENGTH                   equ 0001h
LCDDATA18_S31C2_MASK                     equ 0080h

// Register: LCDDATA19
#define LCDDATA19 LCDDATA19
LCDDATA19                                equ 0197h
// bitfield definitions
LCDDATA19_SEG32_POSN                     equ 0000h
LCDDATA19_SEG32_POSITION                 equ 0000h
LCDDATA19_SEG32_SIZE                     equ 0001h
LCDDATA19_SEG32_LENGTH                   equ 0001h
LCDDATA19_SEG32_MASK                     equ 0001h
LCDDATA19_SEG33_POSN                     equ 0001h
LCDDATA19_SEG33_POSITION                 equ 0001h
LCDDATA19_SEG33_SIZE                     equ 0001h
LCDDATA19_SEG33_LENGTH                   equ 0001h
LCDDATA19_SEG33_MASK                     equ 0002h
LCDDATA19_SEG34_POSN                     equ 0002h
LCDDATA19_SEG34_POSITION                 equ 0002h
LCDDATA19_SEG34_SIZE                     equ 0001h
LCDDATA19_SEG34_LENGTH                   equ 0001h
LCDDATA19_SEG34_MASK                     equ 0004h
LCDDATA19_SEG35_POSN                     equ 0003h
LCDDATA19_SEG35_POSITION                 equ 0003h
LCDDATA19_SEG35_SIZE                     equ 0001h
LCDDATA19_SEG35_LENGTH                   equ 0001h
LCDDATA19_SEG35_MASK                     equ 0008h
LCDDATA19_SEG36_POSN                     equ 0004h
LCDDATA19_SEG36_POSITION                 equ 0004h
LCDDATA19_SEG36_SIZE                     equ 0001h
LCDDATA19_SEG36_LENGTH                   equ 0001h
LCDDATA19_SEG36_MASK                     equ 0010h
LCDDATA19_SEG37_POSN                     equ 0005h
LCDDATA19_SEG37_POSITION                 equ 0005h
LCDDATA19_SEG37_SIZE                     equ 0001h
LCDDATA19_SEG37_LENGTH                   equ 0001h
LCDDATA19_SEG37_MASK                     equ 0020h
LCDDATA19_SEG38_POSN                     equ 0006h
LCDDATA19_SEG38_POSITION                 equ 0006h
LCDDATA19_SEG38_SIZE                     equ 0001h
LCDDATA19_SEG38_LENGTH                   equ 0001h
LCDDATA19_SEG38_MASK                     equ 0040h
LCDDATA19_SEG39_POSN                     equ 0007h
LCDDATA19_SEG39_POSITION                 equ 0007h
LCDDATA19_SEG39_SIZE                     equ 0001h
LCDDATA19_SEG39_LENGTH                   equ 0001h
LCDDATA19_SEG39_MASK                     equ 0080h
LCDDATA19_SEG32COM2_POSN                 equ 0000h
LCDDATA19_SEG32COM2_POSITION             equ 0000h
LCDDATA19_SEG32COM2_SIZE                 equ 0001h
LCDDATA19_SEG32COM2_LENGTH               equ 0001h
LCDDATA19_SEG32COM2_MASK                 equ 0001h
LCDDATA19_SEG33COM2_POSN                 equ 0001h
LCDDATA19_SEG33COM2_POSITION             equ 0001h
LCDDATA19_SEG33COM2_SIZE                 equ 0001h
LCDDATA19_SEG33COM2_LENGTH               equ 0001h
LCDDATA19_SEG33COM2_MASK                 equ 0002h
LCDDATA19_SEG34COM2_POSN                 equ 0002h
LCDDATA19_SEG34COM2_POSITION             equ 0002h
LCDDATA19_SEG34COM2_SIZE                 equ 0001h
LCDDATA19_SEG34COM2_LENGTH               equ 0001h
LCDDATA19_SEG34COM2_MASK                 equ 0004h
LCDDATA19_SEG35COM2_POSN                 equ 0003h
LCDDATA19_SEG35COM2_POSITION             equ 0003h
LCDDATA19_SEG35COM2_SIZE                 equ 0001h
LCDDATA19_SEG35COM2_LENGTH               equ 0001h
LCDDATA19_SEG35COM2_MASK                 equ 0008h
LCDDATA19_SEG36COM2_POSN                 equ 0004h
LCDDATA19_SEG36COM2_POSITION             equ 0004h
LCDDATA19_SEG36COM2_SIZE                 equ 0001h
LCDDATA19_SEG36COM2_LENGTH               equ 0001h
LCDDATA19_SEG36COM2_MASK                 equ 0010h
LCDDATA19_SEG37COM2_POSN                 equ 0005h
LCDDATA19_SEG37COM2_POSITION             equ 0005h
LCDDATA19_SEG37COM2_SIZE                 equ 0001h
LCDDATA19_SEG37COM2_LENGTH               equ 0001h
LCDDATA19_SEG37COM2_MASK                 equ 0020h
LCDDATA19_SEG38COM2_POSN                 equ 0006h
LCDDATA19_SEG38COM2_POSITION             equ 0006h
LCDDATA19_SEG38COM2_SIZE                 equ 0001h
LCDDATA19_SEG38COM2_LENGTH               equ 0001h
LCDDATA19_SEG38COM2_MASK                 equ 0040h
LCDDATA19_SEG39COM2_POSN                 equ 0007h
LCDDATA19_SEG39COM2_POSITION             equ 0007h
LCDDATA19_SEG39COM2_SIZE                 equ 0001h
LCDDATA19_SEG39COM2_LENGTH               equ 0001h
LCDDATA19_SEG39COM2_MASK                 equ 0080h
LCDDATA19_S32C2_POSN                     equ 0000h
LCDDATA19_S32C2_POSITION                 equ 0000h
LCDDATA19_S32C2_SIZE                     equ 0001h
LCDDATA19_S32C2_LENGTH                   equ 0001h
LCDDATA19_S32C2_MASK                     equ 0001h
LCDDATA19_S33C2_POSN                     equ 0001h
LCDDATA19_S33C2_POSITION                 equ 0001h
LCDDATA19_S33C2_SIZE                     equ 0001h
LCDDATA19_S33C2_LENGTH                   equ 0001h
LCDDATA19_S33C2_MASK                     equ 0002h
LCDDATA19_S34C2_POSN                     equ 0002h
LCDDATA19_S34C2_POSITION                 equ 0002h
LCDDATA19_S34C2_SIZE                     equ 0001h
LCDDATA19_S34C2_LENGTH                   equ 0001h
LCDDATA19_S34C2_MASK                     equ 0004h
LCDDATA19_S35C2_POSN                     equ 0003h
LCDDATA19_S35C2_POSITION                 equ 0003h
LCDDATA19_S35C2_SIZE                     equ 0001h
LCDDATA19_S35C2_LENGTH                   equ 0001h
LCDDATA19_S35C2_MASK                     equ 0008h
LCDDATA19_S36C2_POSN                     equ 0004h
LCDDATA19_S36C2_POSITION                 equ 0004h
LCDDATA19_S36C2_SIZE                     equ 0001h
LCDDATA19_S36C2_LENGTH                   equ 0001h
LCDDATA19_S36C2_MASK                     equ 0010h
LCDDATA19_S37C2_POSN                     equ 0005h
LCDDATA19_S37C2_POSITION                 equ 0005h
LCDDATA19_S37C2_SIZE                     equ 0001h
LCDDATA19_S37C2_LENGTH                   equ 0001h
LCDDATA19_S37C2_MASK                     equ 0020h
LCDDATA19_S38C2_POSN                     equ 0006h
LCDDATA19_S38C2_POSITION                 equ 0006h
LCDDATA19_S38C2_SIZE                     equ 0001h
LCDDATA19_S38C2_LENGTH                   equ 0001h
LCDDATA19_S38C2_MASK                     equ 0040h
LCDDATA19_S39C2_POSN                     equ 0007h
LCDDATA19_S39C2_POSITION                 equ 0007h
LCDDATA19_S39C2_SIZE                     equ 0001h
LCDDATA19_S39C2_LENGTH                   equ 0001h
LCDDATA19_S39C2_MASK                     equ 0080h

// Register: LCDDATA20
#define LCDDATA20 LCDDATA20
LCDDATA20                                equ 0198h
// bitfield definitions
LCDDATA20_SEG40_POSN                     equ 0000h
LCDDATA20_SEG40_POSITION                 equ 0000h
LCDDATA20_SEG40_SIZE                     equ 0001h
LCDDATA20_SEG40_LENGTH                   equ 0001h
LCDDATA20_SEG40_MASK                     equ 0001h
LCDDATA20_SEG41_POSN                     equ 0001h
LCDDATA20_SEG41_POSITION                 equ 0001h
LCDDATA20_SEG41_SIZE                     equ 0001h
LCDDATA20_SEG41_LENGTH                   equ 0001h
LCDDATA20_SEG41_MASK                     equ 0002h
LCDDATA20_SEG40COM2_POSN                 equ 0000h
LCDDATA20_SEG40COM2_POSITION             equ 0000h
LCDDATA20_SEG40COM2_SIZE                 equ 0001h
LCDDATA20_SEG40COM2_LENGTH               equ 0001h
LCDDATA20_SEG40COM2_MASK                 equ 0001h
LCDDATA20_SEG41COM2_POSN                 equ 0001h
LCDDATA20_SEG41COM2_POSITION             equ 0001h
LCDDATA20_SEG41COM2_SIZE                 equ 0001h
LCDDATA20_SEG41COM2_LENGTH               equ 0001h
LCDDATA20_SEG41COM2_MASK                 equ 0002h
LCDDATA20_S40C2_POSN                     equ 0000h
LCDDATA20_S40C2_POSITION                 equ 0000h
LCDDATA20_S40C2_SIZE                     equ 0001h
LCDDATA20_S40C2_LENGTH                   equ 0001h
LCDDATA20_S40C2_MASK                     equ 0001h
LCDDATA20_S41C2_POSN                     equ 0001h
LCDDATA20_S41C2_POSITION                 equ 0001h
LCDDATA20_S41C2_SIZE                     equ 0001h
LCDDATA20_S41C2_LENGTH                   equ 0001h
LCDDATA20_S41C2_MASK                     equ 0002h

// Register: LCDDATA21
#define LCDDATA21 LCDDATA21
LCDDATA21                                equ 0199h
// bitfield definitions
LCDDATA21_SEG24_POSN                     equ 0000h
LCDDATA21_SEG24_POSITION                 equ 0000h
LCDDATA21_SEG24_SIZE                     equ 0001h
LCDDATA21_SEG24_LENGTH                   equ 0001h
LCDDATA21_SEG24_MASK                     equ 0001h
LCDDATA21_SEG25_POSN                     equ 0001h
LCDDATA21_SEG25_POSITION                 equ 0001h
LCDDATA21_SEG25_SIZE                     equ 0001h
LCDDATA21_SEG25_LENGTH                   equ 0001h
LCDDATA21_SEG25_MASK                     equ 0002h
LCDDATA21_SEG26_POSN                     equ 0002h
LCDDATA21_SEG26_POSITION                 equ 0002h
LCDDATA21_SEG26_SIZE                     equ 0001h
LCDDATA21_SEG26_LENGTH                   equ 0001h
LCDDATA21_SEG26_MASK                     equ 0004h
LCDDATA21_SEG27_POSN                     equ 0003h
LCDDATA21_SEG27_POSITION                 equ 0003h
LCDDATA21_SEG27_SIZE                     equ 0001h
LCDDATA21_SEG27_LENGTH                   equ 0001h
LCDDATA21_SEG27_MASK                     equ 0008h
LCDDATA21_SEG28_POSN                     equ 0004h
LCDDATA21_SEG28_POSITION                 equ 0004h
LCDDATA21_SEG28_SIZE                     equ 0001h
LCDDATA21_SEG28_LENGTH                   equ 0001h
LCDDATA21_SEG28_MASK                     equ 0010h
LCDDATA21_SEG29_POSN                     equ 0005h
LCDDATA21_SEG29_POSITION                 equ 0005h
LCDDATA21_SEG29_SIZE                     equ 0001h
LCDDATA21_SEG29_LENGTH                   equ 0001h
LCDDATA21_SEG29_MASK                     equ 0020h
LCDDATA21_SEG30_POSN                     equ 0006h
LCDDATA21_SEG30_POSITION                 equ 0006h
LCDDATA21_SEG30_SIZE                     equ 0001h
LCDDATA21_SEG30_LENGTH                   equ 0001h
LCDDATA21_SEG30_MASK                     equ 0040h
LCDDATA21_SEG31_POSN                     equ 0007h
LCDDATA21_SEG31_POSITION                 equ 0007h
LCDDATA21_SEG31_SIZE                     equ 0001h
LCDDATA21_SEG31_LENGTH                   equ 0001h
LCDDATA21_SEG31_MASK                     equ 0080h
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
LCDDATA21_SEG27COM3_POSN                 equ 0003h
LCDDATA21_SEG27COM3_POSITION             equ 0003h
LCDDATA21_SEG27COM3_SIZE                 equ 0001h
LCDDATA21_SEG27COM3_LENGTH               equ 0001h
LCDDATA21_SEG27COM3_MASK                 equ 0008h
LCDDATA21_SEG28COM3_POSN                 equ 0004h
LCDDATA21_SEG28COM3_POSITION             equ 0004h
LCDDATA21_SEG28COM3_SIZE                 equ 0001h
LCDDATA21_SEG28COM3_LENGTH               equ 0001h
LCDDATA21_SEG28COM3_MASK                 equ 0010h
LCDDATA21_SEG29COM3_POSN                 equ 0005h
LCDDATA21_SEG29COM3_POSITION             equ 0005h
LCDDATA21_SEG29COM3_SIZE                 equ 0001h
LCDDATA21_SEG29COM3_LENGTH               equ 0001h
LCDDATA21_SEG29COM3_MASK                 equ 0020h
LCDDATA21_SEG30COM3_POSN                 equ 0006h
LCDDATA21_SEG30COM3_POSITION             equ 0006h
LCDDATA21_SEG30COM3_SIZE                 equ 0001h
LCDDATA21_SEG30COM3_LENGTH               equ 0001h
LCDDATA21_SEG30COM3_MASK                 equ 0040h
LCDDATA21_SEG31COM3_POSN                 equ 0007h
LCDDATA21_SEG31COM3_POSITION             equ 0007h
LCDDATA21_SEG31COM3_SIZE                 equ 0001h
LCDDATA21_SEG31COM3_LENGTH               equ 0001h
LCDDATA21_SEG31COM3_MASK                 equ 0080h
LCDDATA21_S24C3_POSN                     equ 0000h
LCDDATA21_S24C3_POSITION                 equ 0000h
LCDDATA21_S24C3_SIZE                     equ 0001h
LCDDATA21_S24C3_LENGTH                   equ 0001h
LCDDATA21_S24C3_MASK                     equ 0001h
LCDDATA21_S25C3_POSN                     equ 0001h
LCDDATA21_S25C3_POSITION                 equ 0001h
LCDDATA21_S25C3_SIZE                     equ 0001h
LCDDATA21_S25C3_LENGTH                   equ 0001h
LCDDATA21_S25C3_MASK                     equ 0002h
LCDDATA21_S26C3_POSN                     equ 0002h
LCDDATA21_S26C3_POSITION                 equ 0002h
LCDDATA21_S26C3_SIZE                     equ 0001h
LCDDATA21_S26C3_LENGTH                   equ 0001h
LCDDATA21_S26C3_MASK                     equ 0004h
LCDDATA21_S27C3_POSN                     equ 0003h
LCDDATA21_S27C3_POSITION                 equ 0003h
LCDDATA21_S27C3_SIZE                     equ 0001h
LCDDATA21_S27C3_LENGTH                   equ 0001h
LCDDATA21_S27C3_MASK                     equ 0008h
LCDDATA21_S28C3_POSN                     equ 0004h
LCDDATA21_S28C3_POSITION                 equ 0004h
LCDDATA21_S28C3_SIZE                     equ 0001h
LCDDATA21_S28C3_LENGTH                   equ 0001h
LCDDATA21_S28C3_MASK                     equ 0010h
LCDDATA21_S29C3_POSN                     equ 0005h
LCDDATA21_S29C3_POSITION                 equ 0005h
LCDDATA21_S29C3_SIZE                     equ 0001h
LCDDATA21_S29C3_LENGTH                   equ 0001h
LCDDATA21_S29C3_MASK                     equ 0020h
LCDDATA21_S30C3_POSN                     equ 0006h
LCDDATA21_S30C3_POSITION                 equ 0006h
LCDDATA21_S30C3_SIZE                     equ 0001h
LCDDATA21_S30C3_LENGTH                   equ 0001h
LCDDATA21_S30C3_MASK                     equ 0040h
LCDDATA21_S31C3_POSN                     equ 0007h
LCDDATA21_S31C3_POSITION                 equ 0007h
LCDDATA21_S31C3_SIZE                     equ 0001h
LCDDATA21_S31C3_LENGTH                   equ 0001h
LCDDATA21_S31C3_MASK                     equ 0080h

// Register: LCDDATA22
#define LCDDATA22 LCDDATA22
LCDDATA22                                equ 019Ah
// bitfield definitions
LCDDATA22_SEG32_POSN                     equ 0000h
LCDDATA22_SEG32_POSITION                 equ 0000h
LCDDATA22_SEG32_SIZE                     equ 0001h
LCDDATA22_SEG32_LENGTH                   equ 0001h
LCDDATA22_SEG32_MASK                     equ 0001h
LCDDATA22_SEG33_POSN                     equ 0001h
LCDDATA22_SEG33_POSITION                 equ 0001h
LCDDATA22_SEG33_SIZE                     equ 0001h
LCDDATA22_SEG33_LENGTH                   equ 0001h
LCDDATA22_SEG33_MASK                     equ 0002h
LCDDATA22_SEG34_POSN                     equ 0002h
LCDDATA22_SEG34_POSITION                 equ 0002h
LCDDATA22_SEG34_SIZE                     equ 0001h
LCDDATA22_SEG34_LENGTH                   equ 0001h
LCDDATA22_SEG34_MASK                     equ 0004h
LCDDATA22_SEG35_POSN                     equ 0003h
LCDDATA22_SEG35_POSITION                 equ 0003h
LCDDATA22_SEG35_SIZE                     equ 0001h
LCDDATA22_SEG35_LENGTH                   equ 0001h
LCDDATA22_SEG35_MASK                     equ 0008h
LCDDATA22_SEG36_POSN                     equ 0004h
LCDDATA22_SEG36_POSITION                 equ 0004h
LCDDATA22_SEG36_SIZE                     equ 0001h
LCDDATA22_SEG36_LENGTH                   equ 0001h
LCDDATA22_SEG36_MASK                     equ 0010h
LCDDATA22_SEG37_POSN                     equ 0005h
LCDDATA22_SEG37_POSITION                 equ 0005h
LCDDATA22_SEG37_SIZE                     equ 0001h
LCDDATA22_SEG37_LENGTH                   equ 0001h
LCDDATA22_SEG37_MASK                     equ 0020h
LCDDATA22_SEG38_POSN                     equ 0006h
LCDDATA22_SEG38_POSITION                 equ 0006h
LCDDATA22_SEG38_SIZE                     equ 0001h
LCDDATA22_SEG38_LENGTH                   equ 0001h
LCDDATA22_SEG38_MASK                     equ 0040h
LCDDATA22_SEG39_POSN                     equ 0007h
LCDDATA22_SEG39_POSITION                 equ 0007h
LCDDATA22_SEG39_SIZE                     equ 0001h
LCDDATA22_SEG39_LENGTH                   equ 0001h
LCDDATA22_SEG39_MASK                     equ 0080h
LCDDATA22_SEG32COM3_POSN                 equ 0000h
LCDDATA22_SEG32COM3_POSITION             equ 0000h
LCDDATA22_SEG32COM3_SIZE                 equ 0001h
LCDDATA22_SEG32COM3_LENGTH               equ 0001h
LCDDATA22_SEG32COM3_MASK                 equ 0001h
LCDDATA22_SEG33COM3_POSN                 equ 0001h
LCDDATA22_SEG33COM3_POSITION             equ 0001h
LCDDATA22_SEG33COM3_SIZE                 equ 0001h
LCDDATA22_SEG33COM3_LENGTH               equ 0001h
LCDDATA22_SEG33COM3_MASK                 equ 0002h
LCDDATA22_SEG34COM3_POSN                 equ 0002h
LCDDATA22_SEG34COM3_POSITION             equ 0002h
LCDDATA22_SEG34COM3_SIZE                 equ 0001h
LCDDATA22_SEG34COM3_LENGTH               equ 0001h
LCDDATA22_SEG34COM3_MASK                 equ 0004h
LCDDATA22_SEG35COM3_POSN                 equ 0003h
LCDDATA22_SEG35COM3_POSITION             equ 0003h
LCDDATA22_SEG35COM3_SIZE                 equ 0001h
LCDDATA22_SEG35COM3_LENGTH               equ 0001h
LCDDATA22_SEG35COM3_MASK                 equ 0008h
LCDDATA22_SEG36COM3_POSN                 equ 0004h
LCDDATA22_SEG36COM3_POSITION             equ 0004h
LCDDATA22_SEG36COM3_SIZE                 equ 0001h
LCDDATA22_SEG36COM3_LENGTH               equ 0001h
LCDDATA22_SEG36COM3_MASK                 equ 0010h
LCDDATA22_SEG37COM3_POSN                 equ 0005h
LCDDATA22_SEG37COM3_POSITION             equ 0005h
LCDDATA22_SEG37COM3_SIZE                 equ 0001h
LCDDATA22_SEG37COM3_LENGTH               equ 0001h
LCDDATA22_SEG37COM3_MASK                 equ 0020h
LCDDATA22_SEG38COM3_POSN                 equ 0006h
LCDDATA22_SEG38COM3_POSITION             equ 0006h
LCDDATA22_SEG38COM3_SIZE                 equ 0001h
LCDDATA22_SEG38COM3_LENGTH               equ 0001h
LCDDATA22_SEG38COM3_MASK                 equ 0040h
LCDDATA22_SEG39COM3_POSN                 equ 0007h
LCDDATA22_SEG39COM3_POSITION             equ 0007h
LCDDATA22_SEG39COM3_SIZE                 equ 0001h
LCDDATA22_SEG39COM3_LENGTH               equ 0001h
LCDDATA22_SEG39COM3_MASK                 equ 0080h
LCDDATA22_S32C3_POSN                     equ 0000h
LCDDATA22_S32C3_POSITION                 equ 0000h
LCDDATA22_S32C3_SIZE                     equ 0001h
LCDDATA22_S32C3_LENGTH                   equ 0001h
LCDDATA22_S32C3_MASK                     equ 0001h
LCDDATA22_S33C3_POSN                     equ 0001h
LCDDATA22_S33C3_POSITION                 equ 0001h
LCDDATA22_S33C3_SIZE                     equ 0001h
LCDDATA22_S33C3_LENGTH                   equ 0001h
LCDDATA22_S33C3_MASK                     equ 0002h
LCDDATA22_S34C3_POSN                     equ 0002h
LCDDATA22_S34C3_POSITION                 equ 0002h
LCDDATA22_S34C3_SIZE                     equ 0001h
LCDDATA22_S34C3_LENGTH                   equ 0001h
LCDDATA22_S34C3_MASK                     equ 0004h
LCDDATA22_S35C3_POSN                     equ 0003h
LCDDATA22_S35C3_POSITION                 equ 0003h
LCDDATA22_S35C3_SIZE                     equ 0001h
LCDDATA22_S35C3_LENGTH                   equ 0001h
LCDDATA22_S35C3_MASK                     equ 0008h
LCDDATA22_S36C3_POSN                     equ 0004h
LCDDATA22_S36C3_POSITION                 equ 0004h
LCDDATA22_S36C3_SIZE                     equ 0001h
LCDDATA22_S36C3_LENGTH                   equ 0001h
LCDDATA22_S36C3_MASK                     equ 0010h
LCDDATA22_S37C3_POSN                     equ 0005h
LCDDATA22_S37C3_POSITION                 equ 0005h
LCDDATA22_S37C3_SIZE                     equ 0001h
LCDDATA22_S37C3_LENGTH                   equ 0001h
LCDDATA22_S37C3_MASK                     equ 0020h
LCDDATA22_S38C3_POSN                     equ 0006h
LCDDATA22_S38C3_POSITION                 equ 0006h
LCDDATA22_S38C3_SIZE                     equ 0001h
LCDDATA22_S38C3_LENGTH                   equ 0001h
LCDDATA22_S38C3_MASK                     equ 0040h
LCDDATA22_S39C3_POSN                     equ 0007h
LCDDATA22_S39C3_POSITION                 equ 0007h
LCDDATA22_S39C3_SIZE                     equ 0001h
LCDDATA22_S39C3_LENGTH                   equ 0001h
LCDDATA22_S39C3_MASK                     equ 0080h

// Register: LCDDATA23
#define LCDDATA23 LCDDATA23
LCDDATA23                                equ 019Bh
// bitfield definitions
LCDDATA23_SEG40_POSN                     equ 0000h
LCDDATA23_SEG40_POSITION                 equ 0000h
LCDDATA23_SEG40_SIZE                     equ 0001h
LCDDATA23_SEG40_LENGTH                   equ 0001h
LCDDATA23_SEG40_MASK                     equ 0001h
LCDDATA23_SEG41_POSN                     equ 0001h
LCDDATA23_SEG41_POSITION                 equ 0001h
LCDDATA23_SEG41_SIZE                     equ 0001h
LCDDATA23_SEG41_LENGTH                   equ 0001h
LCDDATA23_SEG41_MASK                     equ 0002h
LCDDATA23_SEG40COM3_POSN                 equ 0000h
LCDDATA23_SEG40COM3_POSITION             equ 0000h
LCDDATA23_SEG40COM3_SIZE                 equ 0001h
LCDDATA23_SEG40COM3_LENGTH               equ 0001h
LCDDATA23_SEG40COM3_MASK                 equ 0001h
LCDDATA23_SEG41COM3_POSN                 equ 0001h
LCDDATA23_SEG41COM3_POSITION             equ 0001h
LCDDATA23_SEG41COM3_SIZE                 equ 0001h
LCDDATA23_SEG41COM3_LENGTH               equ 0001h
LCDDATA23_SEG41COM3_MASK                 equ 0002h
LCDDATA23_S40C3_POSN                     equ 0000h
LCDDATA23_S40C3_POSITION                 equ 0000h
LCDDATA23_S40C3_SIZE                     equ 0001h
LCDDATA23_S40C3_LENGTH                   equ 0001h
LCDDATA23_S40C3_MASK                     equ 0001h
LCDDATA23_S41C3_POSN                     equ 0001h
LCDDATA23_S41C3_POSITION                 equ 0001h
LCDDATA23_S41C3_SIZE                     equ 0001h
LCDDATA23_S41C3_LENGTH                   equ 0001h
LCDDATA23_S41C3_MASK                     equ 0002h

// Register: LCDSE3
#define LCDSE3 LCDSE3
LCDSE3                                   equ 019Ch
// bitfield definitions
LCDSE3_SEG24_POSN                        equ 0000h
LCDSE3_SEG24_POSITION                    equ 0000h
LCDSE3_SEG24_SIZE                        equ 0001h
LCDSE3_SEG24_LENGTH                      equ 0001h
LCDSE3_SEG24_MASK                        equ 0001h
LCDSE3_SEG25_POSN                        equ 0001h
LCDSE3_SEG25_POSITION                    equ 0001h
LCDSE3_SEG25_SIZE                        equ 0001h
LCDSE3_SEG25_LENGTH                      equ 0001h
LCDSE3_SEG25_MASK                        equ 0002h
LCDSE3_SEG26_POSN                        equ 0002h
LCDSE3_SEG26_POSITION                    equ 0002h
LCDSE3_SEG26_SIZE                        equ 0001h
LCDSE3_SEG26_LENGTH                      equ 0001h
LCDSE3_SEG26_MASK                        equ 0004h
LCDSE3_SEG27_POSN                        equ 0003h
LCDSE3_SEG27_POSITION                    equ 0003h
LCDSE3_SEG27_SIZE                        equ 0001h
LCDSE3_SEG27_LENGTH                      equ 0001h
LCDSE3_SEG27_MASK                        equ 0008h
LCDSE3_SEG28_POSN                        equ 0004h
LCDSE3_SEG28_POSITION                    equ 0004h
LCDSE3_SEG28_SIZE                        equ 0001h
LCDSE3_SEG28_LENGTH                      equ 0001h
LCDSE3_SEG28_MASK                        equ 0010h
LCDSE3_SEG29_POSN                        equ 0005h
LCDSE3_SEG29_POSITION                    equ 0005h
LCDSE3_SEG29_SIZE                        equ 0001h
LCDSE3_SEG29_LENGTH                      equ 0001h
LCDSE3_SEG29_MASK                        equ 0020h
LCDSE3_SEG30_POSN                        equ 0006h
LCDSE3_SEG30_POSITION                    equ 0006h
LCDSE3_SEG30_SIZE                        equ 0001h
LCDSE3_SEG30_LENGTH                      equ 0001h
LCDSE3_SEG30_MASK                        equ 0040h
LCDSE3_SEG31_POSN                        equ 0007h
LCDSE3_SEG31_POSITION                    equ 0007h
LCDSE3_SEG31_SIZE                        equ 0001h
LCDSE3_SEG31_LENGTH                      equ 0001h
LCDSE3_SEG31_MASK                        equ 0080h
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
LCDSE3_SE27_POSN                         equ 0003h
LCDSE3_SE27_POSITION                     equ 0003h
LCDSE3_SE27_SIZE                         equ 0001h
LCDSE3_SE27_LENGTH                       equ 0001h
LCDSE3_SE27_MASK                         equ 0008h
LCDSE3_SE28_POSN                         equ 0004h
LCDSE3_SE28_POSITION                     equ 0004h
LCDSE3_SE28_SIZE                         equ 0001h
LCDSE3_SE28_LENGTH                       equ 0001h
LCDSE3_SE28_MASK                         equ 0010h
LCDSE3_SE29_POSN                         equ 0005h
LCDSE3_SE29_POSITION                     equ 0005h
LCDSE3_SE29_SIZE                         equ 0001h
LCDSE3_SE29_LENGTH                       equ 0001h
LCDSE3_SE29_MASK                         equ 0020h
LCDSE3_SE30_POSN                         equ 0006h
LCDSE3_SE30_POSITION                     equ 0006h
LCDSE3_SE30_SIZE                         equ 0001h
LCDSE3_SE30_LENGTH                       equ 0001h
LCDSE3_SE30_MASK                         equ 0040h
LCDSE3_SE31_POSN                         equ 0007h
LCDSE3_SE31_POSITION                     equ 0007h
LCDSE3_SE31_SIZE                         equ 0001h
LCDSE3_SE31_LENGTH                       equ 0001h
LCDSE3_SE31_MASK                         equ 0080h
LCDSE3_SEGEN24_POSN                      equ 0000h
LCDSE3_SEGEN24_POSITION                  equ 0000h
LCDSE3_SEGEN24_SIZE                      equ 0001h
LCDSE3_SEGEN24_LENGTH                    equ 0001h
LCDSE3_SEGEN24_MASK                      equ 0001h
LCDSE3_SEGEN25_POSN                      equ 0001h
LCDSE3_SEGEN25_POSITION                  equ 0001h
LCDSE3_SEGEN25_SIZE                      equ 0001h
LCDSE3_SEGEN25_LENGTH                    equ 0001h
LCDSE3_SEGEN25_MASK                      equ 0002h
LCDSE3_SEGEN26_POSN                      equ 0002h
LCDSE3_SEGEN26_POSITION                  equ 0002h
LCDSE3_SEGEN26_SIZE                      equ 0001h
LCDSE3_SEGEN26_LENGTH                    equ 0001h
LCDSE3_SEGEN26_MASK                      equ 0004h
LCDSE3_SEGEN27_POSN                      equ 0003h
LCDSE3_SEGEN27_POSITION                  equ 0003h
LCDSE3_SEGEN27_SIZE                      equ 0001h
LCDSE3_SEGEN27_LENGTH                    equ 0001h
LCDSE3_SEGEN27_MASK                      equ 0008h
LCDSE3_SEGEN28_POSN                      equ 0004h
LCDSE3_SEGEN28_POSITION                  equ 0004h
LCDSE3_SEGEN28_SIZE                      equ 0001h
LCDSE3_SEGEN28_LENGTH                    equ 0001h
LCDSE3_SEGEN28_MASK                      equ 0010h
LCDSE3_SEGEN29_POSN                      equ 0005h
LCDSE3_SEGEN29_POSITION                  equ 0005h
LCDSE3_SEGEN29_SIZE                      equ 0001h
LCDSE3_SEGEN29_LENGTH                    equ 0001h
LCDSE3_SEGEN29_MASK                      equ 0020h
LCDSE3_SEGEN30_POSN                      equ 0006h
LCDSE3_SEGEN30_POSITION                  equ 0006h
LCDSE3_SEGEN30_SIZE                      equ 0001h
LCDSE3_SEGEN30_LENGTH                    equ 0001h
LCDSE3_SEGEN30_MASK                      equ 0040h
LCDSE3_SEGEN31_POSN                      equ 0007h
LCDSE3_SEGEN31_POSITION                  equ 0007h
LCDSE3_SEGEN31_SIZE                      equ 0001h
LCDSE3_SEGEN31_LENGTH                    equ 0001h
LCDSE3_SEGEN31_MASK                      equ 0080h

// Register: LCDSE4
#define LCDSE4 LCDSE4
LCDSE4                                   equ 019Dh
// bitfield definitions
LCDSE4_SEG32_POSN                        equ 0000h
LCDSE4_SEG32_POSITION                    equ 0000h
LCDSE4_SEG32_SIZE                        equ 0001h
LCDSE4_SEG32_LENGTH                      equ 0001h
LCDSE4_SEG32_MASK                        equ 0001h
LCDSE4_SEG33_POSN                        equ 0001h
LCDSE4_SEG33_POSITION                    equ 0001h
LCDSE4_SEG33_SIZE                        equ 0001h
LCDSE4_SEG33_LENGTH                      equ 0001h
LCDSE4_SEG33_MASK                        equ 0002h
LCDSE4_SEG34_POSN                        equ 0002h
LCDSE4_SEG34_POSITION                    equ 0002h
LCDSE4_SEG34_SIZE                        equ 0001h
LCDSE4_SEG34_LENGTH                      equ 0001h
LCDSE4_SEG34_MASK                        equ 0004h
LCDSE4_SEG35_POSN                        equ 0003h
LCDSE4_SEG35_POSITION                    equ 0003h
LCDSE4_SEG35_SIZE                        equ 0001h
LCDSE4_SEG35_LENGTH                      equ 0001h
LCDSE4_SEG35_MASK                        equ 0008h
LCDSE4_SEG36_POSN                        equ 0004h
LCDSE4_SEG36_POSITION                    equ 0004h
LCDSE4_SEG36_SIZE                        equ 0001h
LCDSE4_SEG36_LENGTH                      equ 0001h
LCDSE4_SEG36_MASK                        equ 0010h
LCDSE4_SEG37_POSN                        equ 0005h
LCDSE4_SEG37_POSITION                    equ 0005h
LCDSE4_SEG37_SIZE                        equ 0001h
LCDSE4_SEG37_LENGTH                      equ 0001h
LCDSE4_SEG37_MASK                        equ 0020h
LCDSE4_SEG38_POSN                        equ 0006h
LCDSE4_SEG38_POSITION                    equ 0006h
LCDSE4_SEG38_SIZE                        equ 0001h
LCDSE4_SEG38_LENGTH                      equ 0001h
LCDSE4_SEG38_MASK                        equ 0040h
LCDSE4_SEG39_POSN                        equ 0007h
LCDSE4_SEG39_POSITION                    equ 0007h
LCDSE4_SEG39_SIZE                        equ 0001h
LCDSE4_SEG39_LENGTH                      equ 0001h
LCDSE4_SEG39_MASK                        equ 0080h
LCDSE4_SE32_POSN                         equ 0000h
LCDSE4_SE32_POSITION                     equ 0000h
LCDSE4_SE32_SIZE                         equ 0001h
LCDSE4_SE32_LENGTH                       equ 0001h
LCDSE4_SE32_MASK                         equ 0001h
LCDSE4_SE33_POSN                         equ 0001h
LCDSE4_SE33_POSITION                     equ 0001h
LCDSE4_SE33_SIZE                         equ 0001h
LCDSE4_SE33_LENGTH                       equ 0001h
LCDSE4_SE33_MASK                         equ 0002h
LCDSE4_SE34_POSN                         equ 0002h
LCDSE4_SE34_POSITION                     equ 0002h
LCDSE4_SE34_SIZE                         equ 0001h
LCDSE4_SE34_LENGTH                       equ 0001h
LCDSE4_SE34_MASK                         equ 0004h
LCDSE4_SE35_POSN                         equ 0003h
LCDSE4_SE35_POSITION                     equ 0003h
LCDSE4_SE35_SIZE                         equ 0001h
LCDSE4_SE35_LENGTH                       equ 0001h
LCDSE4_SE35_MASK                         equ 0008h
LCDSE4_SE36_POSN                         equ 0004h
LCDSE4_SE36_POSITION                     equ 0004h
LCDSE4_SE36_SIZE                         equ 0001h
LCDSE4_SE36_LENGTH                       equ 0001h
LCDSE4_SE36_MASK                         equ 0010h
LCDSE4_SE37_POSN                         equ 0005h
LCDSE4_SE37_POSITION                     equ 0005h
LCDSE4_SE37_SIZE                         equ 0001h
LCDSE4_SE37_LENGTH                       equ 0001h
LCDSE4_SE37_MASK                         equ 0020h
LCDSE4_SE38_POSN                         equ 0006h
LCDSE4_SE38_POSITION                     equ 0006h
LCDSE4_SE38_SIZE                         equ 0001h
LCDSE4_SE38_LENGTH                       equ 0001h
LCDSE4_SE38_MASK                         equ 0040h
LCDSE4_SE39_POSN                         equ 0007h
LCDSE4_SE39_POSITION                     equ 0007h
LCDSE4_SE39_SIZE                         equ 0001h
LCDSE4_SE39_LENGTH                       equ 0001h
LCDSE4_SE39_MASK                         equ 0080h
LCDSE4_SEGEN32_POSN                      equ 0000h
LCDSE4_SEGEN32_POSITION                  equ 0000h
LCDSE4_SEGEN32_SIZE                      equ 0001h
LCDSE4_SEGEN32_LENGTH                    equ 0001h
LCDSE4_SEGEN32_MASK                      equ 0001h
LCDSE4_SEGEN33_POSN                      equ 0001h
LCDSE4_SEGEN33_POSITION                  equ 0001h
LCDSE4_SEGEN33_SIZE                      equ 0001h
LCDSE4_SEGEN33_LENGTH                    equ 0001h
LCDSE4_SEGEN33_MASK                      equ 0002h
LCDSE4_SEGEN34_POSN                      equ 0002h
LCDSE4_SEGEN34_POSITION                  equ 0002h
LCDSE4_SEGEN34_SIZE                      equ 0001h
LCDSE4_SEGEN34_LENGTH                    equ 0001h
LCDSE4_SEGEN34_MASK                      equ 0004h
LCDSE4_SEGEN35_POSN                      equ 0003h
LCDSE4_SEGEN35_POSITION                  equ 0003h
LCDSE4_SEGEN35_SIZE                      equ 0001h
LCDSE4_SEGEN35_LENGTH                    equ 0001h
LCDSE4_SEGEN35_MASK                      equ 0008h
LCDSE4_SEGEN36_POSN                      equ 0004h
LCDSE4_SEGEN36_POSITION                  equ 0004h
LCDSE4_SEGEN36_SIZE                      equ 0001h
LCDSE4_SEGEN36_LENGTH                    equ 0001h
LCDSE4_SEGEN36_MASK                      equ 0010h
LCDSE4_SEGEN37_POSN                      equ 0005h
LCDSE4_SEGEN37_POSITION                  equ 0005h
LCDSE4_SEGEN37_SIZE                      equ 0001h
LCDSE4_SEGEN37_LENGTH                    equ 0001h
LCDSE4_SEGEN37_MASK                      equ 0020h
LCDSE4_SEGEN38_POSN                      equ 0006h
LCDSE4_SEGEN38_POSITION                  equ 0006h
LCDSE4_SEGEN38_SIZE                      equ 0001h
LCDSE4_SEGEN38_LENGTH                    equ 0001h
LCDSE4_SEGEN38_MASK                      equ 0040h
LCDSE4_SEGEN39_POSN                      equ 0007h
LCDSE4_SEGEN39_POSITION                  equ 0007h
LCDSE4_SEGEN39_SIZE                      equ 0001h
LCDSE4_SEGEN39_LENGTH                    equ 0001h
LCDSE4_SEGEN39_MASK                      equ 0080h

// Register: LCDSE5
#define LCDSE5 LCDSE5
LCDSE5                                   equ 019Eh
// bitfield definitions
LCDSE5_SEG40_POSN                        equ 0000h
LCDSE5_SEG40_POSITION                    equ 0000h
LCDSE5_SEG40_SIZE                        equ 0001h
LCDSE5_SEG40_LENGTH                      equ 0001h
LCDSE5_SEG40_MASK                        equ 0001h
LCDSE5_SEG41_POSN                        equ 0001h
LCDSE5_SEG41_POSITION                    equ 0001h
LCDSE5_SEG41_SIZE                        equ 0001h
LCDSE5_SEG41_LENGTH                      equ 0001h
LCDSE5_SEG41_MASK                        equ 0002h
LCDSE5_SE40_POSN                         equ 0000h
LCDSE5_SE40_POSITION                     equ 0000h
LCDSE5_SE40_SIZE                         equ 0001h
LCDSE5_SE40_LENGTH                       equ 0001h
LCDSE5_SE40_MASK                         equ 0001h
LCDSE5_SE41_POSN                         equ 0001h
LCDSE5_SE41_POSITION                     equ 0001h
LCDSE5_SE41_SIZE                         equ 0001h
LCDSE5_SE41_LENGTH                       equ 0001h
LCDSE5_SE41_MASK                         equ 0002h
LCDSE5_SEGEN40_POSN                      equ 0000h
LCDSE5_SEGEN40_POSITION                  equ 0000h
LCDSE5_SEGEN40_SIZE                      equ 0001h
LCDSE5_SEGEN40_LENGTH                    equ 0001h
LCDSE5_SEGEN40_MASK                      equ 0001h
LCDSE5_SEGEN41_POSN                      equ 0001h
LCDSE5_SEGEN41_POSITION                  equ 0001h
LCDSE5_SEGEN41_SIZE                      equ 0001h
LCDSE5_SEGEN41_LENGTH                    equ 0001h
LCDSE5_SEGEN41_MASK                      equ 0002h

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
#define ADFM                             BANKMASK(ADCON0), 7
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define AN0                              BANKMASK(ANSEL), 0
#define AN1                              BANKMASK(ANSEL), 1
#define AN2                              BANKMASK(ANSEL), 2
#define AN3                              BANKMASK(ANSEL), 3
#define AN4                              BANKMASK(ANSEL), 4
#define AN5                              BANKMASK(ANSEL), 5
#define AN6                              BANKMASK(ANSEL), 6
#define AN7                              BANKMASK(ANSEL), 7
#define ANS0                             BANKMASK(ANSEL), 0
#define ANS1                             BANKMASK(ANSEL), 1
#define ANS2                             BANKMASK(ANSEL), 2
#define ANS3                             BANKMASK(ANSEL), 3
#define ANS4                             BANKMASK(ANSEL), 4
#define ANS5                             BANKMASK(ANSEL), 5
#define ANS6                             BANKMASK(ANSEL), 6
#define ANS7                             BANKMASK(ANSEL), 7
#define BF                               BANKMASK(SSPSTAT), 0
#define BIASMD                           BANKMASK(LCDPS), 6
#define BRGH                             BANKMASK(TXSTA), 2
#define C1IE                             BANKMASK(PIE2), 5
#define C1IF                             BANKMASK(PIR2), 5
#define C1INV                            BANKMASK(CMCON0), 4
#define C1OUT                            BANKMASK(CMCON0), 6
#define C2IE                             BANKMASK(PIE2), 6
#define C2IF                             BANKMASK(PIR2), 6
#define C2INV                            BANKMASK(CMCON0), 5
#define C2OUT                            BANKMASK(CMCON0), 7
#define C2SYNC                           BANKMASK(CMCON1), 0
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
#define CIS                              BANKMASK(CMCON0), 3
#define CKE                              BANKMASK(SSPSTAT), 6
#define CKP                              BANKMASK(SSPCON), 4
#define CM0                              BANKMASK(CMCON0), 0
#define CM1                              BANKMASK(CMCON0), 1
#define CM2                              BANKMASK(CMCON0), 2
#define CREN                             BANKMASK(RCSTA), 4
#define CS0                              BANKMASK(LCDCON), 2
#define CS1                              BANKMASK(LCDCON), 3
#define CSRC                             BANKMASK(TXSTA), 7
#define DATA_ADDRESS                     BANKMASK(SSPSTAT), 5
#define DC                               BANKMASK(STATUS), 1
#define D_A                              BANKMASK(SSPSTAT), 5
#define D_nA                             BANKMASK(SSPSTAT), 5
#define EEADRH0                          BANKMASK(EEADRH), 0
#define EEADRH1                          BANKMASK(EEADRH), 1
#define EEADRH2                          BANKMASK(EEADRH), 2
#define EEADRH3                          BANKMASK(EEADRH), 3
#define EEADRH4                          BANKMASK(EEADRH), 4
#define EEADRL0                          BANKMASK(EEADRL), 0
#define EEADRL1                          BANKMASK(EEADRL), 1
#define EEADRL2                          BANKMASK(EEADRL), 2
#define EEADRL3                          BANKMASK(EEADRL), 3
#define EEADRL4                          BANKMASK(EEADRL), 4
#define EEADRL5                          BANKMASK(EEADRL), 5
#define EEADRL6                          BANKMASK(EEADRL), 6
#define EEADRL7                          BANKMASK(EEADRL), 7
#define EEDATH0                          BANKMASK(EEDATH), 0
#define EEDATH1                          BANKMASK(EEDATH), 1
#define EEDATH2                          BANKMASK(EEDATH), 2
#define EEDATH3                          BANKMASK(EEDATH), 3
#define EEDATH4                          BANKMASK(EEDATH), 4
#define EEDATH5                          BANKMASK(EEDATH), 5
#define EEDATL0                          BANKMASK(EEDATL), 0
#define EEDATL1                          BANKMASK(EEDATL), 1
#define EEDATL2                          BANKMASK(EEDATL), 2
#define EEDATL3                          BANKMASK(EEDATL), 3
#define EEDATL4                          BANKMASK(EEDATL), 4
#define EEDATL5                          BANKMASK(EEDATL), 5
#define EEDATL6                          BANKMASK(EEDATL), 6
#define EEDATL7                          BANKMASK(EEDATL), 7
#define EEIE                             BANKMASK(PIE1), 7
#define EEIF                             BANKMASK(PIR1), 7
#define EEPGD                            BANKMASK(EECON1), 7
#define EERD                             BANKMASK(EECON1), 0
#define EEWR                             BANKMASK(EECON1), 1
#define FERR                             BANKMASK(RCSTA), 2
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
#define IOC4                             BANKMASK(IOCB), 4
#define IOC5                             BANKMASK(IOCB), 5
#define IOC6                             BANKMASK(IOCB), 6
#define IOC7                             BANKMASK(IOCB), 7
#define IOCB4                            BANKMASK(IOCB), 4
#define IOCB5                            BANKMASK(IOCB), 5
#define IOCB6                            BANKMASK(IOCB), 6
#define IOCB7                            BANKMASK(IOCB), 7
#define IRCF0                            BANKMASK(OSCCON), 4
#define IRCF1                            BANKMASK(OSCCON), 5
#define IRCF2                            BANKMASK(OSCCON), 6
#define IRVST                            BANKMASK(LVDCON), 5
#define LCDA                             BANKMASK(LCDPS), 5
#define LCDEN                            BANKMASK(LCDCON), 7
#define LCDIE                            BANKMASK(PIE2), 4
#define LCDIF                            BANKMASK(PIR2), 4
#define LMUX0                            BANKMASK(LCDCON), 0
#define LMUX1                            BANKMASK(LCDCON), 1
#define LP0                              BANKMASK(LCDPS), 0
#define LP1                              BANKMASK(LCDPS), 1
#define LP2                              BANKMASK(LCDPS), 2
#define LP3                              BANKMASK(LCDPS), 3
#define LTS                              BANKMASK(OSCCON), 1
#define LVDEN                            BANKMASK(LVDCON), 4
#define LVDIE                            BANKMASK(PIE2), 2
#define LVDIF                            BANKMASK(PIR2), 2
#define LVDL0                            BANKMASK(LVDCON), 0
#define LVDL1                            BANKMASK(LVDCON), 1
#define LVDL2                            BANKMASK(LVDCON), 2
#define OERR                             BANKMASK(RCSTA), 1
#define OSFIE                            BANKMASK(PIE2), 7
#define OSFIF                            BANKMASK(PIR2), 7
#define OSTS                             BANKMASK(OSCCON), 3
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
#define RD                               BANKMASK(EECON1), 0
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
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define RX9                              BANKMASK(RCSTA), 6
#define RX9D                             BANKMASK(RCSTA), 0
#define R_W                              BANKMASK(SSPSTAT), 2
#define R_nW                             BANKMASK(SSPSTAT), 2
#define S0C0                             BANKMASK(LCDDATA0), 0
#define S0C1                             BANKMASK(LCDDATA3), 0
#define S0C2                             BANKMASK(LCDDATA6), 0
#define S0C3                             BANKMASK(LCDDATA9), 0
#define S10C0                            BANKMASK(LCDDATA1), 2
#define S10C1                            BANKMASK(LCDDATA4), 2
#define S10C2                            BANKMASK(LCDDATA7), 2
#define S10C3                            BANKMASK(LCDDATA10), 2
#define S11C0                            BANKMASK(LCDDATA1), 3
#define S11C1                            BANKMASK(LCDDATA4), 3
#define S11C2                            BANKMASK(LCDDATA7), 3
#define S11C3                            BANKMASK(LCDDATA10), 3
#define S12C0                            BANKMASK(LCDDATA1), 4
#define S12C1                            BANKMASK(LCDDATA4), 4
#define S12C2                            BANKMASK(LCDDATA7), 4
#define S12C3                            BANKMASK(LCDDATA10), 4
#define S13C0                            BANKMASK(LCDDATA1), 5
#define S13C1                            BANKMASK(LCDDATA4), 5
#define S13C2                            BANKMASK(LCDDATA7), 5
#define S13C3                            BANKMASK(LCDDATA10), 5
#define S14C0                            BANKMASK(LCDDATA1), 6
#define S14C1                            BANKMASK(LCDDATA4), 6
#define S14C2                            BANKMASK(LCDDATA7), 6
#define S14C3                            BANKMASK(LCDDATA10), 6
#define S15C0                            BANKMASK(LCDDATA1), 7
#define S15C1                            BANKMASK(LCDDATA4), 7
#define S15C2                            BANKMASK(LCDDATA7), 7
#define S15C3                            BANKMASK(LCDDATA10), 7
#define S16C0                            BANKMASK(LCDDATA2), 0
#define S16C1                            BANKMASK(LCDDATA5), 0
#define S16C2                            BANKMASK(LCDDATA8), 0
#define S16C3                            BANKMASK(LCDDATA11), 0
#define S17C0                            BANKMASK(LCDDATA2), 1
#define S17C1                            BANKMASK(LCDDATA5), 1
#define S17C2                            BANKMASK(LCDDATA8), 1
#define S17C3                            BANKMASK(LCDDATA11), 1
#define S18C0                            BANKMASK(LCDDATA2), 2
#define S18C1                            BANKMASK(LCDDATA5), 2
#define S18C2                            BANKMASK(LCDDATA8), 2
#define S18C3                            BANKMASK(LCDDATA11), 2
#define S19C0                            BANKMASK(LCDDATA2), 3
#define S19C1                            BANKMASK(LCDDATA5), 3
#define S19C2                            BANKMASK(LCDDATA8), 3
#define S19C3                            BANKMASK(LCDDATA11), 3
#define S1C0                             BANKMASK(LCDDATA0), 1
#define S1C1                             BANKMASK(LCDDATA3), 1
#define S1C2                             BANKMASK(LCDDATA6), 1
#define S1C3                             BANKMASK(LCDDATA9), 1
#define S20C0                            BANKMASK(LCDDATA2), 4
#define S20C1                            BANKMASK(LCDDATA5), 4
#define S20C2                            BANKMASK(LCDDATA8), 4
#define S20C3                            BANKMASK(LCDDATA11), 4
#define S21C0                            BANKMASK(LCDDATA2), 5
#define S21C1                            BANKMASK(LCDDATA5), 5
#define S21C2                            BANKMASK(LCDDATA8), 5
#define S21C3                            BANKMASK(LCDDATA11), 5
#define S22C0                            BANKMASK(LCDDATA2), 6
#define S22C1                            BANKMASK(LCDDATA5), 6
#define S22C2                            BANKMASK(LCDDATA8), 6
#define S22C3                            BANKMASK(LCDDATA11), 6
#define S23C0                            BANKMASK(LCDDATA2), 7
#define S23C1                            BANKMASK(LCDDATA5), 7
#define S23C2                            BANKMASK(LCDDATA8), 7
#define S23C3                            BANKMASK(LCDDATA11), 7
#define S24C0                            BANKMASK(LCDDATA12), 0
#define S24C1                            BANKMASK(LCDDATA15), 0
#define S24C2                            BANKMASK(LCDDATA18), 0
#define S24C3                            BANKMASK(LCDDATA21), 0
#define S25C0                            BANKMASK(LCDDATA12), 1
#define S25C1                            BANKMASK(LCDDATA15), 1
#define S25C2                            BANKMASK(LCDDATA18), 1
#define S25C3                            BANKMASK(LCDDATA21), 1
#define S26C0                            BANKMASK(LCDDATA12), 2
#define S26C1                            BANKMASK(LCDDATA15), 2
#define S26C2                            BANKMASK(LCDDATA18), 2
#define S26C3                            BANKMASK(LCDDATA21), 2
#define S27C0                            BANKMASK(LCDDATA12), 3
#define S27C1                            BANKMASK(LCDDATA15), 3
#define S27C2                            BANKMASK(LCDDATA18), 3
#define S27C3                            BANKMASK(LCDDATA21), 3
#define S28C0                            BANKMASK(LCDDATA12), 4
#define S28C1                            BANKMASK(LCDDATA15), 4
#define S28C2                            BANKMASK(LCDDATA18), 4
#define S28C3                            BANKMASK(LCDDATA21), 4
#define S29C0                            BANKMASK(LCDDATA12), 5
#define S29C1                            BANKMASK(LCDDATA15), 5
#define S29C2                            BANKMASK(LCDDATA18), 5
#define S29C3                            BANKMASK(LCDDATA21), 5
#define S2C0                             BANKMASK(LCDDATA0), 2
#define S2C1                             BANKMASK(LCDDATA3), 2
#define S2C2                             BANKMASK(LCDDATA6), 2
#define S2C3                             BANKMASK(LCDDATA9), 2
#define S30C0                            BANKMASK(LCDDATA12), 6
#define S30C1                            BANKMASK(LCDDATA15), 6
#define S30C2                            BANKMASK(LCDDATA18), 6
#define S30C3                            BANKMASK(LCDDATA21), 6
#define S31C0                            BANKMASK(LCDDATA12), 7
#define S31C1                            BANKMASK(LCDDATA15), 7
#define S31C2                            BANKMASK(LCDDATA18), 7
#define S31C3                            BANKMASK(LCDDATA21), 7
#define S32C0                            BANKMASK(LCDDATA13), 0
#define S32C1                            BANKMASK(LCDDATA16), 0
#define S32C2                            BANKMASK(LCDDATA19), 0
#define S32C3                            BANKMASK(LCDDATA22), 0
#define S33C0                            BANKMASK(LCDDATA13), 1
#define S33C1                            BANKMASK(LCDDATA16), 1
#define S33C2                            BANKMASK(LCDDATA19), 1
#define S33C3                            BANKMASK(LCDDATA22), 1
#define S34C0                            BANKMASK(LCDDATA13), 2
#define S34C1                            BANKMASK(LCDDATA16), 2
#define S34C2                            BANKMASK(LCDDATA19), 2
#define S34C3                            BANKMASK(LCDDATA22), 2
#define S35C0                            BANKMASK(LCDDATA13), 3
#define S35C1                            BANKMASK(LCDDATA16), 3
#define S35C2                            BANKMASK(LCDDATA19), 3
#define S35C3                            BANKMASK(LCDDATA22), 3
#define S36C0                            BANKMASK(LCDDATA13), 4
#define S36C1                            BANKMASK(LCDDATA16), 4
#define S36C2                            BANKMASK(LCDDATA19), 4
#define S36C3                            BANKMASK(LCDDATA22), 4
#define S37C0                            BANKMASK(LCDDATA13), 5
#define S37C1                            BANKMASK(LCDDATA16), 5
#define S37C2                            BANKMASK(LCDDATA19), 5
#define S37C3                            BANKMASK(LCDDATA22), 5
#define S38C0                            BANKMASK(LCDDATA13), 6
#define S38C1                            BANKMASK(LCDDATA16), 6
#define S38C2                            BANKMASK(LCDDATA19), 6
#define S38C3                            BANKMASK(LCDDATA22), 6
#define S39C0                            BANKMASK(LCDDATA13), 7
#define S39C1                            BANKMASK(LCDDATA16), 7
#define S39C2                            BANKMASK(LCDDATA19), 7
#define S39C3                            BANKMASK(LCDDATA22), 7
#define S3C0                             BANKMASK(LCDDATA0), 3
#define S3C1                             BANKMASK(LCDDATA3), 3
#define S3C2                             BANKMASK(LCDDATA6), 3
#define S3C3                             BANKMASK(LCDDATA9), 3
#define S40C0                            BANKMASK(LCDDATA14), 0
#define S40C1                            BANKMASK(LCDDATA17), 0
#define S40C2                            BANKMASK(LCDDATA20), 0
#define S40C3                            BANKMASK(LCDDATA23), 0
#define S41C0                            BANKMASK(LCDDATA14), 1
#define S41C1                            BANKMASK(LCDDATA17), 1
#define S41C2                            BANKMASK(LCDDATA20), 1
#define S41C3                            BANKMASK(LCDDATA23), 1
#define S4C0                             BANKMASK(LCDDATA0), 4
#define S4C1                             BANKMASK(LCDDATA3), 4
#define S4C2                             BANKMASK(LCDDATA6), 4
#define S4C3                             BANKMASK(LCDDATA9), 4
#define S5C0                             BANKMASK(LCDDATA0), 5
#define S5C1                             BANKMASK(LCDDATA3), 5
#define S5C2                             BANKMASK(LCDDATA6), 5
#define S5C3                             BANKMASK(LCDDATA9), 5
#define S6C0                             BANKMASK(LCDDATA0), 6
#define S6C1                             BANKMASK(LCDDATA3), 6
#define S6C2                             BANKMASK(LCDDATA6), 6
#define S6C3                             BANKMASK(LCDDATA9), 6
#define S7C0                             BANKMASK(LCDDATA0), 7
#define S7C1                             BANKMASK(LCDDATA3), 7
#define S7C2                             BANKMASK(LCDDATA6), 7
#define S7C3                             BANKMASK(LCDDATA9), 7
#define S8C0                             BANKMASK(LCDDATA1), 0
#define S8C1                             BANKMASK(LCDDATA4), 0
#define S8C2                             BANKMASK(LCDDATA7), 0
#define S8C3                             BANKMASK(LCDDATA10), 0
#define S9C0                             BANKMASK(LCDDATA1), 1
#define S9C1                             BANKMASK(LCDDATA4), 1
#define S9C2                             BANKMASK(LCDDATA7), 1
#define S9C3                             BANKMASK(LCDDATA10), 1
#define SBOREN                           BANKMASK(PCON), 4
#define SCS                              BANKMASK(OSCCON), 0
#define SE0                              BANKMASK(LCDSE0), 0
#define SE1                              BANKMASK(LCDSE0), 1
#define SE10                             BANKMASK(LCDSE1), 2
#define SE11                             BANKMASK(LCDSE1), 3
#define SE12                             BANKMASK(LCDSE1), 4
#define SE13                             BANKMASK(LCDSE1), 5
#define SE14                             BANKMASK(LCDSE1), 6
#define SE15                             BANKMASK(LCDSE1), 7
#define SE16                             BANKMASK(LCDSE2), 0
#define SE17                             BANKMASK(LCDSE2), 1
#define SE18                             BANKMASK(LCDSE2), 2
#define SE19                             BANKMASK(LCDSE2), 3
#define SE2                              BANKMASK(LCDSE0), 2
#define SE20                             BANKMASK(LCDSE2), 4
#define SE21                             BANKMASK(LCDSE2), 5
#define SE22                             BANKMASK(LCDSE2), 6
#define SE23                             BANKMASK(LCDSE2), 7
#define SE24                             BANKMASK(LCDSE3), 0
#define SE25                             BANKMASK(LCDSE3), 1
#define SE26                             BANKMASK(LCDSE3), 2
#define SE27                             BANKMASK(LCDSE3), 3
#define SE28                             BANKMASK(LCDSE3), 4
#define SE29                             BANKMASK(LCDSE3), 5
#define SE3                              BANKMASK(LCDSE0), 3
#define SE30                             BANKMASK(LCDSE3), 6
#define SE31                             BANKMASK(LCDSE3), 7
#define SE32                             BANKMASK(LCDSE4), 0
#define SE33                             BANKMASK(LCDSE4), 1
#define SE34                             BANKMASK(LCDSE4), 2
#define SE35                             BANKMASK(LCDSE4), 3
#define SE36                             BANKMASK(LCDSE4), 4
#define SE37                             BANKMASK(LCDSE4), 5
#define SE38                             BANKMASK(LCDSE4), 6
#define SE39                             BANKMASK(LCDSE4), 7
#define SE4                              BANKMASK(LCDSE0), 4
#define SE40                             BANKMASK(LCDSE5), 0
#define SE41                             BANKMASK(LCDSE5), 1
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
#define SEG16COM0                        BANKMASK(LCDDATA2), 0
#define SEG16COM1                        BANKMASK(LCDDATA5), 0
#define SEG16COM2                        BANKMASK(LCDDATA8), 0
#define SEG16COM3                        BANKMASK(LCDDATA11), 0
#define SEG17COM0                        BANKMASK(LCDDATA2), 1
#define SEG17COM1                        BANKMASK(LCDDATA5), 1
#define SEG17COM2                        BANKMASK(LCDDATA8), 1
#define SEG17COM3                        BANKMASK(LCDDATA11), 1
#define SEG18COM0                        BANKMASK(LCDDATA2), 2
#define SEG18COM1                        BANKMASK(LCDDATA5), 2
#define SEG18COM2                        BANKMASK(LCDDATA8), 2
#define SEG18COM3                        BANKMASK(LCDDATA11), 2
#define SEG19COM0                        BANKMASK(LCDDATA2), 3
#define SEG19COM1                        BANKMASK(LCDDATA5), 3
#define SEG19COM2                        BANKMASK(LCDDATA8), 3
#define SEG19COM3                        BANKMASK(LCDDATA11), 3
#define SEG1COM0                         BANKMASK(LCDDATA0), 1
#define SEG1COM1                         BANKMASK(LCDDATA3), 1
#define SEG1COM2                         BANKMASK(LCDDATA6), 1
#define SEG1COM3                         BANKMASK(LCDDATA9), 1
#define SEG20COM0                        BANKMASK(LCDDATA2), 4
#define SEG20COM1                        BANKMASK(LCDDATA5), 4
#define SEG20COM2                        BANKMASK(LCDDATA8), 4
#define SEG20COM3                        BANKMASK(LCDDATA11), 4
#define SEG21COM0                        BANKMASK(LCDDATA2), 5
#define SEG21COM1                        BANKMASK(LCDDATA5), 5
#define SEG21COM2                        BANKMASK(LCDDATA8), 5
#define SEG21COM3                        BANKMASK(LCDDATA11), 5
#define SEG22COM0                        BANKMASK(LCDDATA2), 6
#define SEG22COM1                        BANKMASK(LCDDATA5), 6
#define SEG22COM2                        BANKMASK(LCDDATA8), 6
#define SEG22COM3                        BANKMASK(LCDDATA11), 6
#define SEG23COM0                        BANKMASK(LCDDATA2), 7
#define SEG23COM1                        BANKMASK(LCDDATA5), 7
#define SEG23COM2                        BANKMASK(LCDDATA8), 7
#define SEG23COM3                        BANKMASK(LCDDATA11), 7
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
#define SEG27COM0                        BANKMASK(LCDDATA12), 3
#define SEG27COM1                        BANKMASK(LCDDATA15), 3
#define SEG27COM2                        BANKMASK(LCDDATA18), 3
#define SEG27COM3                        BANKMASK(LCDDATA21), 3
#define SEG28COM0                        BANKMASK(LCDDATA12), 4
#define SEG28COM1                        BANKMASK(LCDDATA15), 4
#define SEG28COM2                        BANKMASK(LCDDATA18), 4
#define SEG28COM3                        BANKMASK(LCDDATA21), 4
#define SEG29COM0                        BANKMASK(LCDDATA12), 5
#define SEG29COM1                        BANKMASK(LCDDATA15), 5
#define SEG29COM2                        BANKMASK(LCDDATA18), 5
#define SEG29COM3                        BANKMASK(LCDDATA21), 5
#define SEG2COM0                         BANKMASK(LCDDATA0), 2
#define SEG2COM1                         BANKMASK(LCDDATA3), 2
#define SEG2COM2                         BANKMASK(LCDDATA6), 2
#define SEG2COM3                         BANKMASK(LCDDATA9), 2
#define SEG30COM0                        BANKMASK(LCDDATA12), 6
#define SEG30COM1                        BANKMASK(LCDDATA15), 6
#define SEG30COM2                        BANKMASK(LCDDATA18), 6
#define SEG30COM3                        BANKMASK(LCDDATA21), 6
#define SEG31COM0                        BANKMASK(LCDDATA12), 7
#define SEG31COM1                        BANKMASK(LCDDATA15), 7
#define SEG31COM2                        BANKMASK(LCDDATA18), 7
#define SEG31COM3                        BANKMASK(LCDDATA21), 7
#define SEG32COM0                        BANKMASK(LCDDATA13), 0
#define SEG32COM1                        BANKMASK(LCDDATA16), 0
#define SEG32COM2                        BANKMASK(LCDDATA19), 0
#define SEG32COM3                        BANKMASK(LCDDATA22), 0
#define SEG33COM0                        BANKMASK(LCDDATA13), 1
#define SEG33COM1                        BANKMASK(LCDDATA16), 1
#define SEG33COM2                        BANKMASK(LCDDATA19), 1
#define SEG33COM3                        BANKMASK(LCDDATA22), 1
#define SEG34COM0                        BANKMASK(LCDDATA13), 2
#define SEG34COM1                        BANKMASK(LCDDATA16), 2
#define SEG34COM2                        BANKMASK(LCDDATA19), 2
#define SEG34COM3                        BANKMASK(LCDDATA22), 2
#define SEG35COM0                        BANKMASK(LCDDATA13), 3
#define SEG35COM1                        BANKMASK(LCDDATA16), 3
#define SEG35COM2                        BANKMASK(LCDDATA19), 3
#define SEG35COM3                        BANKMASK(LCDDATA22), 3
#define SEG36COM0                        BANKMASK(LCDDATA13), 4
#define SEG36COM1                        BANKMASK(LCDDATA16), 4
#define SEG36COM2                        BANKMASK(LCDDATA19), 4
#define SEG36COM3                        BANKMASK(LCDDATA22), 4
#define SEG37COM0                        BANKMASK(LCDDATA13), 5
#define SEG37COM1                        BANKMASK(LCDDATA16), 5
#define SEG37COM2                        BANKMASK(LCDDATA19), 5
#define SEG37COM3                        BANKMASK(LCDDATA22), 5
#define SEG38COM0                        BANKMASK(LCDDATA13), 6
#define SEG38COM1                        BANKMASK(LCDDATA16), 6
#define SEG38COM2                        BANKMASK(LCDDATA19), 6
#define SEG38COM3                        BANKMASK(LCDDATA22), 6
#define SEG39COM0                        BANKMASK(LCDDATA13), 7
#define SEG39COM1                        BANKMASK(LCDDATA16), 7
#define SEG39COM2                        BANKMASK(LCDDATA19), 7
#define SEG39COM3                        BANKMASK(LCDDATA22), 7
#define SEG3COM0                         BANKMASK(LCDDATA0), 3
#define SEG3COM1                         BANKMASK(LCDDATA3), 3
#define SEG3COM2                         BANKMASK(LCDDATA6), 3
#define SEG3COM3                         BANKMASK(LCDDATA9), 3
#define SEG40COM0                        BANKMASK(LCDDATA14), 0
#define SEG40COM1                        BANKMASK(LCDDATA17), 0
#define SEG40COM2                        BANKMASK(LCDDATA20), 0
#define SEG40COM3                        BANKMASK(LCDDATA23), 0
#define SEG41COM0                        BANKMASK(LCDDATA14), 1
#define SEG41COM1                        BANKMASK(LCDDATA17), 1
#define SEG41COM2                        BANKMASK(LCDDATA20), 1
#define SEG41COM3                        BANKMASK(LCDDATA23), 1
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
#define SEGEN0                           BANKMASK(LCDSE0), 0
#define SEGEN1                           BANKMASK(LCDSE0), 1
#define SEGEN10                          BANKMASK(LCDSE1), 2
#define SEGEN11                          BANKMASK(LCDSE1), 3
#define SEGEN12                          BANKMASK(LCDSE1), 4
#define SEGEN13                          BANKMASK(LCDSE1), 5
#define SEGEN14                          BANKMASK(LCDSE1), 6
#define SEGEN15                          BANKMASK(LCDSE1), 7
#define SEGEN16                          BANKMASK(LCDSE2), 0
#define SEGEN17                          BANKMASK(LCDSE2), 1
#define SEGEN18                          BANKMASK(LCDSE2), 2
#define SEGEN19                          BANKMASK(LCDSE2), 3
#define SEGEN2                           BANKMASK(LCDSE0), 2
#define SEGEN20                          BANKMASK(LCDSE2), 4
#define SEGEN21                          BANKMASK(LCDSE2), 5
#define SEGEN22                          BANKMASK(LCDSE2), 6
#define SEGEN23                          BANKMASK(LCDSE2), 7
#define SEGEN24                          BANKMASK(LCDSE3), 0
#define SEGEN25                          BANKMASK(LCDSE3), 1
#define SEGEN26                          BANKMASK(LCDSE3), 2
#define SEGEN27                          BANKMASK(LCDSE3), 3
#define SEGEN28                          BANKMASK(LCDSE3), 4
#define SEGEN29                          BANKMASK(LCDSE3), 5
#define SEGEN3                           BANKMASK(LCDSE0), 3
#define SEGEN30                          BANKMASK(LCDSE3), 6
#define SEGEN31                          BANKMASK(LCDSE3), 7
#define SEGEN32                          BANKMASK(LCDSE4), 0
#define SEGEN33                          BANKMASK(LCDSE4), 1
#define SEGEN34                          BANKMASK(LCDSE4), 2
#define SEGEN35                          BANKMASK(LCDSE4), 3
#define SEGEN36                          BANKMASK(LCDSE4), 4
#define SEGEN37                          BANKMASK(LCDSE4), 5
#define SEGEN38                          BANKMASK(LCDSE4), 6
#define SEGEN39                          BANKMASK(LCDSE4), 7
#define SEGEN4                           BANKMASK(LCDSE0), 4
#define SEGEN40                          BANKMASK(LCDSE5), 0
#define SEGEN41                          BANKMASK(LCDSE5), 1
#define SEGEN5                           BANKMASK(LCDSE0), 5
#define SEGEN6                           BANKMASK(LCDSE0), 6
#define SEGEN7                           BANKMASK(LCDSE0), 7
#define SEGEN8                           BANKMASK(LCDSE1), 0
#define SEGEN9                           BANKMASK(LCDSE1), 1
#define SLPEN                            BANKMASK(LCDCON), 6
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
#define SWDTE                            BANKMASK(WDTCON), 0
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC                             BANKMASK(TXSTA), 4
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GE                             BANKMASK(T1CON), 6
#define T1GINV                           BANKMASK(T1CON), 7
#define T1GSS                            BANKMASK(CMCON1), 1
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
#define VCFG0                            BANKMASK(ADCON0), 5
#define VCFG1                            BANKMASK(ADCON0), 6
#define VLCDEN                           BANKMASK(LCDCON), 4
#define VR0                              BANKMASK(VRCON), 0
#define VR1                              BANKMASK(VRCON), 1
#define VR2                              BANKMASK(VRCON), 2
#define VR3                              BANKMASK(VRCON), 3
#define VREN                             BANKMASK(VRCON), 7
#define VRR                              BANKMASK(VRCON), 5
#define WA                               BANKMASK(LCDPS), 4
#define WCOL                             BANKMASK(SSPCON), 7
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WERR                             BANKMASK(LCDCON), 5
#define WFT                              BANKMASK(LCDPS), 7
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
#define WR                               BANKMASK(EECON1), 1
#define WREN                             BANKMASK(EECON1), 2
#define WRERR                            BANKMASK(EECON1), 3
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
psect udata_bank3,class=BANK3,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,delta=2
psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16F946_INC_
