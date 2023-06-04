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

#ifndef _PIC16F785_INC_
#define _PIC16F785_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC16F785
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

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 000Ah
// bitfield definitions
PCLATH_PCLATH_POSN                       equ 0000h
PCLATH_PCLATH_POSITION                   equ 0000h
PCLATH_PCLATH_SIZE                       equ 0005h
PCLATH_PCLATH_LENGTH                     equ 0005h
PCLATH_PCLATH_MASK                       equ 001Fh

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 000Bh
// bitfield definitions
INTCON_RAIF_POSN                         equ 0000h
INTCON_RAIF_POSITION                     equ 0000h
INTCON_RAIF_SIZE                         equ 0001h
INTCON_RAIF_LENGTH                       equ 0001h
INTCON_RAIF_MASK                         equ 0001h
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
INTCON_RAIE_POSN                         equ 0003h
INTCON_RAIE_POSITION                     equ 0003h
INTCON_RAIE_SIZE                         equ 0001h
INTCON_RAIE_LENGTH                       equ 0001h
INTCON_RAIE_MASK                         equ 0008h
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
PIR1_OSFIF_POSN                          equ 0002h
PIR1_OSFIF_POSITION                      equ 0002h
PIR1_OSFIF_SIZE                          equ 0001h
PIR1_OSFIF_LENGTH                        equ 0001h
PIR1_OSFIF_MASK                          equ 0004h
PIR1_C1IF_POSN                           equ 0003h
PIR1_C1IF_POSITION                       equ 0003h
PIR1_C1IF_SIZE                           equ 0001h
PIR1_C1IF_LENGTH                         equ 0001h
PIR1_C1IF_MASK                           equ 0008h
PIR1_C2IF_POSN                           equ 0004h
PIR1_C2IF_POSITION                       equ 0004h
PIR1_C2IF_SIZE                           equ 0001h
PIR1_C2IF_LENGTH                         equ 0001h
PIR1_C2IF_MASK                           equ 0010h
PIR1_CCP1IF_POSN                         equ 0005h
PIR1_CCP1IF_POSITION                     equ 0005h
PIR1_CCP1IF_SIZE                         equ 0001h
PIR1_CCP1IF_LENGTH                       equ 0001h
PIR1_CCP1IF_MASK                         equ 0020h
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
PIR1_T1IF_POSN                           equ 0000h
PIR1_T1IF_POSITION                       equ 0000h
PIR1_T1IF_SIZE                           equ 0001h
PIR1_T1IF_LENGTH                         equ 0001h
PIR1_T1IF_MASK                           equ 0001h
PIR1_T2IF_POSN                           equ 0001h
PIR1_T2IF_POSITION                       equ 0001h
PIR1_T2IF_SIZE                           equ 0001h
PIR1_T2IF_LENGTH                         equ 0001h
PIR1_T2IF_MASK                           equ 0002h

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
CCPR1L                                   equ 0013h

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0014h

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0015h
// bitfield definitions
CCP1CON_CCP1M_POSN                       equ 0000h
CCP1CON_CCP1M_POSITION                   equ 0000h
CCP1CON_CCP1M_SIZE                       equ 0004h
CCP1CON_CCP1M_LENGTH                     equ 0004h
CCP1CON_CCP1M_MASK                       equ 000Fh
CCP1CON_DCB_POSN                         equ 0004h
CCP1CON_DCB_POSITION                     equ 0004h
CCP1CON_DCB_SIZE                         equ 0002h
CCP1CON_DCB_LENGTH                       equ 0002h
CCP1CON_DCB_MASK                         equ 0030h
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

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0018h
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
ADCON0_VCFG_POSN                         equ 0006h
ADCON0_VCFG_POSITION                     equ 0006h
ADCON0_VCFG_SIZE                         equ 0001h
ADCON0_VCFG_LENGTH                       equ 0001h
ADCON0_VCFG_MASK                         equ 0040h
ADCON0_ADFM_POSN                         equ 0007h
ADCON0_ADFM_POSITION                     equ 0007h
ADCON0_ADFM_SIZE                         equ 0001h
ADCON0_ADFM_LENGTH                       equ 0001h
ADCON0_ADFM_MASK                         equ 0080h
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
OPTION_REG_nRAPU_POSN                    equ 0007h
OPTION_REG_nRAPU_POSITION                equ 0007h
OPTION_REG_nRAPU_SIZE                    equ 0001h
OPTION_REG_nRAPU_LENGTH                  equ 0001h
OPTION_REG_nRAPU_MASK                    equ 0080h
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
PIE1_OSFIE_POSN                          equ 0002h
PIE1_OSFIE_POSITION                      equ 0002h
PIE1_OSFIE_SIZE                          equ 0001h
PIE1_OSFIE_LENGTH                        equ 0001h
PIE1_OSFIE_MASK                          equ 0004h
PIE1_C1IE_POSN                           equ 0003h
PIE1_C1IE_POSITION                       equ 0003h
PIE1_C1IE_SIZE                           equ 0001h
PIE1_C1IE_LENGTH                         equ 0001h
PIE1_C1IE_MASK                           equ 0008h
PIE1_C2IE_POSN                           equ 0004h
PIE1_C2IE_POSITION                       equ 0004h
PIE1_C2IE_SIZE                           equ 0001h
PIE1_C2IE_LENGTH                         equ 0001h
PIE1_C2IE_MASK                           equ 0010h
PIE1_CCP1IE_POSN                         equ 0005h
PIE1_CCP1IE_POSITION                     equ 0005h
PIE1_CCP1IE_SIZE                         equ 0001h
PIE1_CCP1IE_LENGTH                       equ 0001h
PIE1_CCP1IE_MASK                         equ 0020h
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
PIE1_T1IE_POSN                           equ 0000h
PIE1_T1IE_POSITION                       equ 0000h
PIE1_T1IE_SIZE                           equ 0001h
PIE1_T1IE_LENGTH                         equ 0001h
PIE1_T1IE_MASK                           equ 0001h
PIE1_T2IE_POSN                           equ 0001h
PIE1_T2IE_POSITION                       equ 0001h
PIE1_T2IE_SIZE                           equ 0001h
PIE1_T2IE_LENGTH                         equ 0001h
PIE1_T2IE_MASK                           equ 0002h

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
PCON_nBOD_POSN                           equ 0000h
PCON_nBOD_POSITION                       equ 0000h
PCON_nBOD_SIZE                           equ 0001h
PCON_nBOD_LENGTH                         equ 0001h
PCON_nBOD_MASK                           equ 0001h
PCON_SBODEN_POSN                         equ 0004h
PCON_SBODEN_POSITION                     equ 0004h
PCON_SBODEN_SIZE                         equ 0001h
PCON_SBODEN_LENGTH                       equ 0001h
PCON_SBODEN_MASK                         equ 0010h

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

// Register: ANSEL0
#define ANSEL0 ANSEL0
ANSEL0                                   equ 0091h
// bitfield definitions
ANSEL0_ANS0_POSN                         equ 0000h
ANSEL0_ANS0_POSITION                     equ 0000h
ANSEL0_ANS0_SIZE                         equ 0001h
ANSEL0_ANS0_LENGTH                       equ 0001h
ANSEL0_ANS0_MASK                         equ 0001h
ANSEL0_ANS1_POSN                         equ 0001h
ANSEL0_ANS1_POSITION                     equ 0001h
ANSEL0_ANS1_SIZE                         equ 0001h
ANSEL0_ANS1_LENGTH                       equ 0001h
ANSEL0_ANS1_MASK                         equ 0002h
ANSEL0_ANS2_POSN                         equ 0002h
ANSEL0_ANS2_POSITION                     equ 0002h
ANSEL0_ANS2_SIZE                         equ 0001h
ANSEL0_ANS2_LENGTH                       equ 0001h
ANSEL0_ANS2_MASK                         equ 0004h
ANSEL0_ANS3_POSN                         equ 0003h
ANSEL0_ANS3_POSITION                     equ 0003h
ANSEL0_ANS3_SIZE                         equ 0001h
ANSEL0_ANS3_LENGTH                       equ 0001h
ANSEL0_ANS3_MASK                         equ 0008h
ANSEL0_ANS4_POSN                         equ 0004h
ANSEL0_ANS4_POSITION                     equ 0004h
ANSEL0_ANS4_SIZE                         equ 0001h
ANSEL0_ANS4_LENGTH                       equ 0001h
ANSEL0_ANS4_MASK                         equ 0010h
ANSEL0_ANS5_POSN                         equ 0005h
ANSEL0_ANS5_POSITION                     equ 0005h
ANSEL0_ANS5_SIZE                         equ 0001h
ANSEL0_ANS5_LENGTH                       equ 0001h
ANSEL0_ANS5_MASK                         equ 0020h
ANSEL0_ANS6_POSN                         equ 0006h
ANSEL0_ANS6_POSITION                     equ 0006h
ANSEL0_ANS6_SIZE                         equ 0001h
ANSEL0_ANS6_LENGTH                       equ 0001h
ANSEL0_ANS6_MASK                         equ 0040h
ANSEL0_ANS7_POSN                         equ 0007h
ANSEL0_ANS7_POSITION                     equ 0007h
ANSEL0_ANS7_SIZE                         equ 0001h
ANSEL0_ANS7_LENGTH                       equ 0001h
ANSEL0_ANS7_MASK                         equ 0080h

// Register: PR2
#define PR2 PR2
PR2                                      equ 0092h

// Register: ANSEL1
#define ANSEL1 ANSEL1
ANSEL1                                   equ 0093h
// bitfield definitions
ANSEL1_ANS8_POSN                         equ 0000h
ANSEL1_ANS8_POSITION                     equ 0000h
ANSEL1_ANS8_SIZE                         equ 0001h
ANSEL1_ANS8_LENGTH                       equ 0001h
ANSEL1_ANS8_MASK                         equ 0001h
ANSEL1_ANS9_POSN                         equ 0001h
ANSEL1_ANS9_POSITION                     equ 0001h
ANSEL1_ANS9_SIZE                         equ 0001h
ANSEL1_ANS9_LENGTH                       equ 0001h
ANSEL1_ANS9_MASK                         equ 0002h
ANSEL1_ANS10_POSN                        equ 0002h
ANSEL1_ANS10_POSITION                    equ 0002h
ANSEL1_ANS10_SIZE                        equ 0001h
ANSEL1_ANS10_LENGTH                      equ 0001h
ANSEL1_ANS10_MASK                        equ 0004h
ANSEL1_ANS11_POSN                        equ 0003h
ANSEL1_ANS11_POSITION                    equ 0003h
ANSEL1_ANS11_SIZE                        equ 0001h
ANSEL1_ANS11_LENGTH                      equ 0001h
ANSEL1_ANS11_MASK                        equ 0008h

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 0095h
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
WPUA_WPU0_POSN                           equ 0000h
WPUA_WPU0_POSITION                       equ 0000h
WPUA_WPU0_SIZE                           equ 0001h
WPUA_WPU0_LENGTH                         equ 0001h
WPUA_WPU0_MASK                           equ 0001h
WPUA_WPU1_POSN                           equ 0001h
WPUA_WPU1_POSITION                       equ 0001h
WPUA_WPU1_SIZE                           equ 0001h
WPUA_WPU1_LENGTH                         equ 0001h
WPUA_WPU1_MASK                           equ 0002h
WPUA_WPU2_POSN                           equ 0002h
WPUA_WPU2_POSITION                       equ 0002h
WPUA_WPU2_SIZE                           equ 0001h
WPUA_WPU2_LENGTH                         equ 0001h
WPUA_WPU2_MASK                           equ 0004h
WPUA_WPU3_POSN                           equ 0003h
WPUA_WPU3_POSITION                       equ 0003h
WPUA_WPU3_SIZE                           equ 0001h
WPUA_WPU3_LENGTH                         equ 0001h
WPUA_WPU3_MASK                           equ 0008h
WPUA_WPU4_POSN                           equ 0004h
WPUA_WPU4_POSITION                       equ 0004h
WPUA_WPU4_SIZE                           equ 0001h
WPUA_WPU4_LENGTH                         equ 0001h
WPUA_WPU4_MASK                           equ 0010h
WPUA_WPU5_POSN                           equ 0005h
WPUA_WPU5_POSITION                       equ 0005h
WPUA_WPU5_SIZE                           equ 0001h
WPUA_WPU5_LENGTH                         equ 0001h
WPUA_WPU5_MASK                           equ 0020h

// Register: IOCA
#define IOCA IOCA
IOCA                                     equ 0096h
// bitfield definitions
IOCA_IOCA0_POSN                          equ 0000h
IOCA_IOCA0_POSITION                      equ 0000h
IOCA_IOCA0_SIZE                          equ 0001h
IOCA_IOCA0_LENGTH                        equ 0001h
IOCA_IOCA0_MASK                          equ 0001h
IOCA_IOCA1_POSN                          equ 0001h
IOCA_IOCA1_POSITION                      equ 0001h
IOCA_IOCA1_SIZE                          equ 0001h
IOCA_IOCA1_LENGTH                        equ 0001h
IOCA_IOCA1_MASK                          equ 0002h
IOCA_IOCA2_POSN                          equ 0002h
IOCA_IOCA2_POSITION                      equ 0002h
IOCA_IOCA2_SIZE                          equ 0001h
IOCA_IOCA2_LENGTH                        equ 0001h
IOCA_IOCA2_MASK                          equ 0004h
IOCA_IOCA3_POSN                          equ 0003h
IOCA_IOCA3_POSITION                      equ 0003h
IOCA_IOCA3_SIZE                          equ 0001h
IOCA_IOCA3_LENGTH                        equ 0001h
IOCA_IOCA3_MASK                          equ 0008h
IOCA_IOCA4_POSN                          equ 0004h
IOCA_IOCA4_POSITION                      equ 0004h
IOCA_IOCA4_SIZE                          equ 0001h
IOCA_IOCA4_LENGTH                        equ 0001h
IOCA_IOCA4_MASK                          equ 0010h
IOCA_IOCA5_POSN                          equ 0005h
IOCA_IOCA5_POSITION                      equ 0005h
IOCA_IOCA5_SIZE                          equ 0001h
IOCA_IOCA5_LENGTH                        equ 0001h
IOCA_IOCA5_MASK                          equ 0020h
IOCA_IOC0_POSN                           equ 0000h
IOCA_IOC0_POSITION                       equ 0000h
IOCA_IOC0_SIZE                           equ 0001h
IOCA_IOC0_LENGTH                         equ 0001h
IOCA_IOC0_MASK                           equ 0001h
IOCA_IOC1_POSN                           equ 0001h
IOCA_IOC1_POSITION                       equ 0001h
IOCA_IOC1_SIZE                           equ 0001h
IOCA_IOC1_LENGTH                         equ 0001h
IOCA_IOC1_MASK                           equ 0002h
IOCA_IOC2_POSN                           equ 0002h
IOCA_IOC2_POSITION                       equ 0002h
IOCA_IOC2_SIZE                           equ 0001h
IOCA_IOC2_LENGTH                         equ 0001h
IOCA_IOC2_MASK                           equ 0004h
IOCA_IOC3_POSN                           equ 0003h
IOCA_IOC3_POSITION                       equ 0003h
IOCA_IOC3_SIZE                           equ 0001h
IOCA_IOC3_LENGTH                         equ 0001h
IOCA_IOC3_MASK                           equ 0008h
IOCA_IOC4_POSN                           equ 0004h
IOCA_IOC4_POSITION                       equ 0004h
IOCA_IOC4_SIZE                           equ 0001h
IOCA_IOC4_LENGTH                         equ 0001h
IOCA_IOC4_MASK                           equ 0010h
IOCA_IOC5_POSN                           equ 0005h
IOCA_IOC5_POSITION                       equ 0005h
IOCA_IOC5_SIZE                           equ 0001h
IOCA_IOC5_LENGTH                         equ 0001h
IOCA_IOC5_MASK                           equ 0020h

// Register: REFCON
#define REFCON REFCON
REFCON                                   equ 0098h
// bitfield definitions
REFCON_CVROE_POSN                        equ 0001h
REFCON_CVROE_POSITION                    equ 0001h
REFCON_CVROE_SIZE                        equ 0001h
REFCON_CVROE_LENGTH                      equ 0001h
REFCON_CVROE_MASK                        equ 0002h
REFCON_VROE_POSN                         equ 0002h
REFCON_VROE_POSITION                     equ 0002h
REFCON_VROE_SIZE                         equ 0001h
REFCON_VROE_LENGTH                       equ 0001h
REFCON_VROE_MASK                         equ 0004h
REFCON_VREN_POSN                         equ 0003h
REFCON_VREN_POSITION                     equ 0003h
REFCON_VREN_SIZE                         equ 0001h
REFCON_VREN_LENGTH                       equ 0001h
REFCON_VREN_MASK                         equ 0008h
REFCON_VRBB_POSN                         equ 0004h
REFCON_VRBB_POSITION                     equ 0004h
REFCON_VRBB_SIZE                         equ 0001h
REFCON_VRBB_LENGTH                       equ 0001h
REFCON_VRBB_MASK                         equ 0010h
REFCON_BGST_POSN                         equ 0005h
REFCON_BGST_POSITION                     equ 0005h
REFCON_BGST_SIZE                         equ 0001h
REFCON_BGST_LENGTH                       equ 0001h
REFCON_BGST_MASK                         equ 0020h

// Register: VRCON
#define VRCON VRCON
VRCON                                    equ 0099h
// bitfield definitions
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
VRCON_VRR_POSN                           equ 0005h
VRCON_VRR_POSITION                       equ 0005h
VRCON_VRR_SIZE                           equ 0001h
VRCON_VRR_LENGTH                         equ 0001h
VRCON_VRR_MASK                           equ 0020h
VRCON_C2VREN_POSN                        equ 0006h
VRCON_C2VREN_POSITION                    equ 0006h
VRCON_C2VREN_SIZE                        equ 0001h
VRCON_C2VREN_LENGTH                      equ 0001h
VRCON_C2VREN_MASK                        equ 0040h
VRCON_C1VREN_POSN                        equ 0007h
VRCON_C1VREN_POSITION                    equ 0007h
VRCON_C1VREN_SIZE                        equ 0001h
VRCON_C1VREN_LENGTH                      equ 0001h
VRCON_C1VREN_MASK                        equ 0080h

// Register: EEDATA
#define EEDATA EEDATA
EEDATA                                   equ 009Ah

// Register: EEADR
#define EEADR EEADR
EEADR                                    equ 009Bh

// Register: EECON1
#define EECON1 EECON1
EECON1                                   equ 009Ch
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

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 009Dh

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

// Register: PWMCON1
#define PWMCON1 PWMCON1
PWMCON1                                  equ 0110h
// bitfield definitions
PWMCON1_CMDLY_POSN                       equ 0000h
PWMCON1_CMDLY_POSITION                   equ 0000h
PWMCON1_CMDLY_SIZE                       equ 0005h
PWMCON1_CMDLY_LENGTH                     equ 0005h
PWMCON1_CMDLY_MASK                       equ 001Fh
PWMCON1_COMOD_POSN                       equ 0005h
PWMCON1_COMOD_POSITION                   equ 0005h
PWMCON1_COMOD_SIZE                       equ 0002h
PWMCON1_COMOD_LENGTH                     equ 0002h
PWMCON1_COMOD_MASK                       equ 0060h
PWMCON1_OVRLP_POSN                       equ 0007h
PWMCON1_OVRLP_POSITION                   equ 0007h
PWMCON1_OVRLP_SIZE                       equ 0001h
PWMCON1_OVRLP_LENGTH                     equ 0001h
PWMCON1_OVRLP_MASK                       equ 0080h
PWMCON1_CMDLY0_POSN                      equ 0000h
PWMCON1_CMDLY0_POSITION                  equ 0000h
PWMCON1_CMDLY0_SIZE                      equ 0001h
PWMCON1_CMDLY0_LENGTH                    equ 0001h
PWMCON1_CMDLY0_MASK                      equ 0001h
PWMCON1_CMDLY1_POSN                      equ 0001h
PWMCON1_CMDLY1_POSITION                  equ 0001h
PWMCON1_CMDLY1_SIZE                      equ 0001h
PWMCON1_CMDLY1_LENGTH                    equ 0001h
PWMCON1_CMDLY1_MASK                      equ 0002h
PWMCON1_CMDLY2_POSN                      equ 0002h
PWMCON1_CMDLY2_POSITION                  equ 0002h
PWMCON1_CMDLY2_SIZE                      equ 0001h
PWMCON1_CMDLY2_LENGTH                    equ 0001h
PWMCON1_CMDLY2_MASK                      equ 0004h
PWMCON1_CMDLY3_POSN                      equ 0003h
PWMCON1_CMDLY3_POSITION                  equ 0003h
PWMCON1_CMDLY3_SIZE                      equ 0001h
PWMCON1_CMDLY3_LENGTH                    equ 0001h
PWMCON1_CMDLY3_MASK                      equ 0008h
PWMCON1_CMDLY4_POSN                      equ 0004h
PWMCON1_CMDLY4_POSITION                  equ 0004h
PWMCON1_CMDLY4_SIZE                      equ 0001h
PWMCON1_CMDLY4_LENGTH                    equ 0001h
PWMCON1_CMDLY4_MASK                      equ 0010h
PWMCON1_COMOD0_POSN                      equ 0005h
PWMCON1_COMOD0_POSITION                  equ 0005h
PWMCON1_COMOD0_SIZE                      equ 0001h
PWMCON1_COMOD0_LENGTH                    equ 0001h
PWMCON1_COMOD0_MASK                      equ 0020h
PWMCON1_COMOD1_POSN                      equ 0006h
PWMCON1_COMOD1_POSITION                  equ 0006h
PWMCON1_COMOD1_SIZE                      equ 0001h
PWMCON1_COMOD1_LENGTH                    equ 0001h
PWMCON1_COMOD1_MASK                      equ 0040h

// Register: PWMCON0
#define PWMCON0 PWMCON0
PWMCON0                                  equ 0111h
// bitfield definitions
PWMCON0_PH1EN_POSN                       equ 0000h
PWMCON0_PH1EN_POSITION                   equ 0000h
PWMCON0_PH1EN_SIZE                       equ 0001h
PWMCON0_PH1EN_LENGTH                     equ 0001h
PWMCON0_PH1EN_MASK                       equ 0001h
PWMCON0_PH2EN_POSN                       equ 0001h
PWMCON0_PH2EN_POSITION                   equ 0001h
PWMCON0_PH2EN_SIZE                       equ 0001h
PWMCON0_PH2EN_LENGTH                     equ 0001h
PWMCON0_PH2EN_MASK                       equ 0002h
PWMCON0_SYNC_POSN                        equ 0002h
PWMCON0_SYNC_POSITION                    equ 0002h
PWMCON0_SYNC_SIZE                        equ 0002h
PWMCON0_SYNC_LENGTH                      equ 0002h
PWMCON0_SYNC_MASK                        equ 000Ch
PWMCON0_BLANK1_POSN                      equ 0004h
PWMCON0_BLANK1_POSITION                  equ 0004h
PWMCON0_BLANK1_SIZE                      equ 0001h
PWMCON0_BLANK1_LENGTH                    equ 0001h
PWMCON0_BLANK1_MASK                      equ 0010h
PWMCON0_BLANK2_POSN                      equ 0005h
PWMCON0_BLANK2_POSITION                  equ 0005h
PWMCON0_BLANK2_SIZE                      equ 0001h
PWMCON0_BLANK2_LENGTH                    equ 0001h
PWMCON0_BLANK2_MASK                      equ 0020h
PWMCON0_PASEN_POSN                       equ 0006h
PWMCON0_PASEN_POSITION                   equ 0006h
PWMCON0_PASEN_SIZE                       equ 0001h
PWMCON0_PASEN_LENGTH                     equ 0001h
PWMCON0_PASEN_MASK                       equ 0040h
PWMCON0_PRSEN_POSN                       equ 0007h
PWMCON0_PRSEN_POSITION                   equ 0007h
PWMCON0_PRSEN_SIZE                       equ 0001h
PWMCON0_PRSEN_LENGTH                     equ 0001h
PWMCON0_PRSEN_MASK                       equ 0080h
PWMCON0_SYNC0_POSN                       equ 0002h
PWMCON0_SYNC0_POSITION                   equ 0002h
PWMCON0_SYNC0_SIZE                       equ 0001h
PWMCON0_SYNC0_LENGTH                     equ 0001h
PWMCON0_SYNC0_MASK                       equ 0004h
PWMCON0_SYNC1_POSN                       equ 0003h
PWMCON0_SYNC1_POSITION                   equ 0003h
PWMCON0_SYNC1_SIZE                       equ 0001h
PWMCON0_SYNC1_LENGTH                     equ 0001h
PWMCON0_SYNC1_MASK                       equ 0008h

// Register: PWMCLK
#define PWMCLK PWMCLK
PWMCLK                                   equ 0112h
// bitfield definitions
PWMCLK_PER_POSN                          equ 0000h
PWMCLK_PER_POSITION                      equ 0000h
PWMCLK_PER_SIZE                          equ 0005h
PWMCLK_PER_LENGTH                        equ 0005h
PWMCLK_PER_MASK                          equ 001Fh
PWMCLK_PWMP_POSN                         equ 0005h
PWMCLK_PWMP_POSITION                     equ 0005h
PWMCLK_PWMP_SIZE                         equ 0002h
PWMCLK_PWMP_LENGTH                       equ 0002h
PWMCLK_PWMP_MASK                         equ 0060h
PWMCLK_PWMASE_POSN                       equ 0007h
PWMCLK_PWMASE_POSITION                   equ 0007h
PWMCLK_PWMASE_SIZE                       equ 0001h
PWMCLK_PWMASE_LENGTH                     equ 0001h
PWMCLK_PWMASE_MASK                       equ 0080h
PWMCLK_PER0_POSN                         equ 0000h
PWMCLK_PER0_POSITION                     equ 0000h
PWMCLK_PER0_SIZE                         equ 0001h
PWMCLK_PER0_LENGTH                       equ 0001h
PWMCLK_PER0_MASK                         equ 0001h
PWMCLK_PER1_POSN                         equ 0001h
PWMCLK_PER1_POSITION                     equ 0001h
PWMCLK_PER1_SIZE                         equ 0001h
PWMCLK_PER1_LENGTH                       equ 0001h
PWMCLK_PER1_MASK                         equ 0002h
PWMCLK_PER2_POSN                         equ 0002h
PWMCLK_PER2_POSITION                     equ 0002h
PWMCLK_PER2_SIZE                         equ 0001h
PWMCLK_PER2_LENGTH                       equ 0001h
PWMCLK_PER2_MASK                         equ 0004h
PWMCLK_PER3_POSN                         equ 0003h
PWMCLK_PER3_POSITION                     equ 0003h
PWMCLK_PER3_SIZE                         equ 0001h
PWMCLK_PER3_LENGTH                       equ 0001h
PWMCLK_PER3_MASK                         equ 0008h
PWMCLK_PER4_POSN                         equ 0004h
PWMCLK_PER4_POSITION                     equ 0004h
PWMCLK_PER4_SIZE                         equ 0001h
PWMCLK_PER4_LENGTH                       equ 0001h
PWMCLK_PER4_MASK                         equ 0010h
PWMCLK_PWMP0_POSN                        equ 0005h
PWMCLK_PWMP0_POSITION                    equ 0005h
PWMCLK_PWMP0_SIZE                        equ 0001h
PWMCLK_PWMP0_LENGTH                      equ 0001h
PWMCLK_PWMP0_MASK                        equ 0020h
PWMCLK_PWMP1_POSN                        equ 0006h
PWMCLK_PWMP1_POSITION                    equ 0006h
PWMCLK_PWMP1_SIZE                        equ 0001h
PWMCLK_PWMP1_LENGTH                      equ 0001h
PWMCLK_PWMP1_MASK                        equ 0040h

// Register: PWMPH1
#define PWMPH1 PWMPH1
PWMPH1                                   equ 0113h
// bitfield definitions
PWMPH1_PH_POSN                           equ 0000h
PWMPH1_PH_POSITION                       equ 0000h
PWMPH1_PH_SIZE                           equ 0005h
PWMPH1_PH_LENGTH                         equ 0005h
PWMPH1_PH_MASK                           equ 001Fh
PWMPH1_C1EN_POSN                         equ 0005h
PWMPH1_C1EN_POSITION                     equ 0005h
PWMPH1_C1EN_SIZE                         equ 0001h
PWMPH1_C1EN_LENGTH                       equ 0001h
PWMPH1_C1EN_MASK                         equ 0020h
PWMPH1_C2EN_POSN                         equ 0006h
PWMPH1_C2EN_POSITION                     equ 0006h
PWMPH1_C2EN_SIZE                         equ 0001h
PWMPH1_C2EN_LENGTH                       equ 0001h
PWMPH1_C2EN_MASK                         equ 0040h
PWMPH1_POL_POSN                          equ 0007h
PWMPH1_POL_POSITION                      equ 0007h
PWMPH1_POL_SIZE                          equ 0001h
PWMPH1_POL_LENGTH                        equ 0001h
PWMPH1_POL_MASK                          equ 0080h
PWMPH1_PH0_POSN                          equ 0000h
PWMPH1_PH0_POSITION                      equ 0000h
PWMPH1_PH0_SIZE                          equ 0001h
PWMPH1_PH0_LENGTH                        equ 0001h
PWMPH1_PH0_MASK                          equ 0001h
PWMPH1_PH1_POSN                          equ 0001h
PWMPH1_PH1_POSITION                      equ 0001h
PWMPH1_PH1_SIZE                          equ 0001h
PWMPH1_PH1_LENGTH                        equ 0001h
PWMPH1_PH1_MASK                          equ 0002h
PWMPH1_PH2_POSN                          equ 0002h
PWMPH1_PH2_POSITION                      equ 0002h
PWMPH1_PH2_SIZE                          equ 0001h
PWMPH1_PH2_LENGTH                        equ 0001h
PWMPH1_PH2_MASK                          equ 0004h
PWMPH1_PH3_POSN                          equ 0003h
PWMPH1_PH3_POSITION                      equ 0003h
PWMPH1_PH3_SIZE                          equ 0001h
PWMPH1_PH3_LENGTH                        equ 0001h
PWMPH1_PH3_MASK                          equ 0008h
PWMPH1_PH4_POSN                          equ 0004h
PWMPH1_PH4_POSITION                      equ 0004h
PWMPH1_PH4_SIZE                          equ 0001h
PWMPH1_PH4_LENGTH                        equ 0001h
PWMPH1_PH4_MASK                          equ 0010h

// Register: PWMPH2
#define PWMPH2 PWMPH2
PWMPH2                                   equ 0114h
// bitfield definitions
PWMPH2_PH_POSN                           equ 0000h
PWMPH2_PH_POSITION                       equ 0000h
PWMPH2_PH_SIZE                           equ 0005h
PWMPH2_PH_LENGTH                         equ 0005h
PWMPH2_PH_MASK                           equ 001Fh
PWMPH2_C1EN_POSN                         equ 0005h
PWMPH2_C1EN_POSITION                     equ 0005h
PWMPH2_C1EN_SIZE                         equ 0001h
PWMPH2_C1EN_LENGTH                       equ 0001h
PWMPH2_C1EN_MASK                         equ 0020h
PWMPH2_C2EN_POSN                         equ 0006h
PWMPH2_C2EN_POSITION                     equ 0006h
PWMPH2_C2EN_SIZE                         equ 0001h
PWMPH2_C2EN_LENGTH                       equ 0001h
PWMPH2_C2EN_MASK                         equ 0040h
PWMPH2_POL_POSN                          equ 0007h
PWMPH2_POL_POSITION                      equ 0007h
PWMPH2_POL_SIZE                          equ 0001h
PWMPH2_POL_LENGTH                        equ 0001h
PWMPH2_POL_MASK                          equ 0080h
PWMPH2_PH0_POSN                          equ 0000h
PWMPH2_PH0_POSITION                      equ 0000h
PWMPH2_PH0_SIZE                          equ 0001h
PWMPH2_PH0_LENGTH                        equ 0001h
PWMPH2_PH0_MASK                          equ 0001h
PWMPH2_PH1_POSN                          equ 0001h
PWMPH2_PH1_POSITION                      equ 0001h
PWMPH2_PH1_SIZE                          equ 0001h
PWMPH2_PH1_LENGTH                        equ 0001h
PWMPH2_PH1_MASK                          equ 0002h
PWMPH2_PH2_POSN                          equ 0002h
PWMPH2_PH2_POSITION                      equ 0002h
PWMPH2_PH2_SIZE                          equ 0001h
PWMPH2_PH2_LENGTH                        equ 0001h
PWMPH2_PH2_MASK                          equ 0004h
PWMPH2_PH3_POSN                          equ 0003h
PWMPH2_PH3_POSITION                      equ 0003h
PWMPH2_PH3_SIZE                          equ 0001h
PWMPH2_PH3_LENGTH                        equ 0001h
PWMPH2_PH3_MASK                          equ 0008h
PWMPH2_PH4_POSN                          equ 0004h
PWMPH2_PH4_POSITION                      equ 0004h
PWMPH2_PH4_SIZE                          equ 0001h
PWMPH2_PH4_LENGTH                        equ 0001h
PWMPH2_PH4_MASK                          equ 0010h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0119h
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
CM1CON0_C1SP_POSN                        equ 0003h
CM1CON0_C1SP_POSITION                    equ 0003h
CM1CON0_C1SP_SIZE                        equ 0001h
CM1CON0_C1SP_LENGTH                      equ 0001h
CM1CON0_C1SP_MASK                        equ 0008h
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
CM2CON0                                  equ 011Ah
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
CM2CON0_C2SP_POSN                        equ 0003h
CM2CON0_C2SP_POSITION                    equ 0003h
CM2CON0_C2SP_SIZE                        equ 0001h
CM2CON0_C2SP_LENGTH                      equ 0001h
CM2CON0_C2SP_MASK                        equ 0008h
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
CM2CON1                                  equ 011Bh
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

// Register: OPA1CON
#define OPA1CON OPA1CON
OPA1CON                                  equ 011Ch
// bitfield definitions
OPA1CON_OPAON_POSN                       equ 0007h
OPA1CON_OPAON_POSITION                   equ 0007h
OPA1CON_OPAON_SIZE                       equ 0001h
OPA1CON_OPAON_LENGTH                     equ 0001h
OPA1CON_OPAON_MASK                       equ 0080h

// Register: OPA2CON
#define OPA2CON OPA2CON
OPA2CON                                  equ 011Dh
// bitfield definitions
OPA2CON_OPAON_POSN                       equ 0007h
OPA2CON_OPAON_POSITION                   equ 0007h
OPA2CON_OPAON_SIZE                       equ 0001h
OPA2CON_OPAON_LENGTH                     equ 0001h
OPA2CON_OPAON_MASK                       equ 0080h

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
#define ADFM                             BANKMASK(ADCON0), 7
#define ADIE                             BANKMASK(PIE1), 6
#define ADIF                             BANKMASK(PIR1), 6
#define ADON                             BANKMASK(ADCON0), 0
#define ANS0                             BANKMASK(ANSEL0), 0
#define ANS1                             BANKMASK(ANSEL0), 1
#define ANS10                            BANKMASK(ANSEL1), 2
#define ANS11                            BANKMASK(ANSEL1), 3
#define ANS2                             BANKMASK(ANSEL0), 2
#define ANS3                             BANKMASK(ANSEL0), 3
#define ANS4                             BANKMASK(ANSEL0), 4
#define ANS5                             BANKMASK(ANSEL0), 5
#define ANS6                             BANKMASK(ANSEL0), 6
#define ANS7                             BANKMASK(ANSEL0), 7
#define ANS8                             BANKMASK(ANSEL1), 0
#define ANS9                             BANKMASK(ANSEL1), 1
#define BGST                             BANKMASK(REFCON), 5
#define BLANK1                           BANKMASK(PWMCON0), 4
#define BLANK2                           BANKMASK(PWMCON0), 5
#define C1CH0                            BANKMASK(CM1CON0), 0
#define C1CH1                            BANKMASK(CM1CON0), 1
#define C1IE                             BANKMASK(PIE1), 3
#define C1IF                             BANKMASK(PIR1), 3
#define C1OE                             BANKMASK(CM1CON0), 5
#define C1ON                             BANKMASK(CM1CON0), 7
#define C1OUT                            BANKMASK(CM1CON0), 6
#define C1POL                            BANKMASK(CM1CON0), 4
#define C1R                              BANKMASK(CM1CON0), 2
#define C1SP                             BANKMASK(CM1CON0), 3
#define C1VREN                           BANKMASK(VRCON), 7
#define C2CH0                            BANKMASK(CM2CON0), 0
#define C2CH1                            BANKMASK(CM2CON0), 1
#define C2IE                             BANKMASK(PIE1), 4
#define C2IF                             BANKMASK(PIR1), 4
#define C2OE                             BANKMASK(CM2CON0), 5
#define C2ON                             BANKMASK(CM2CON0), 7
#define C2OUT                            BANKMASK(CM2CON0), 6
#define C2POL                            BANKMASK(CM2CON0), 4
#define C2R                              BANKMASK(CM2CON0), 2
#define C2SP                             BANKMASK(CM2CON0), 3
#define C2SYNC                           BANKMASK(CM2CON1), 0
#define C2VREN                           BANKMASK(VRCON), 6
#define CARRY                            BANKMASK(STATUS), 0
#define CCP1IE                           BANKMASK(PIE1), 5
#define CCP1IF                           BANKMASK(PIR1), 5
#define CCP1M0                           BANKMASK(CCP1CON), 0
#define CCP1M1                           BANKMASK(CCP1CON), 1
#define CCP1M2                           BANKMASK(CCP1CON), 2
#define CCP1M3                           BANKMASK(CCP1CON), 3
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CHS2                             BANKMASK(ADCON0), 4
#define CHS3                             BANKMASK(ADCON0), 5
#define CMDLY0                           BANKMASK(PWMCON1), 0
#define CMDLY1                           BANKMASK(PWMCON1), 1
#define CMDLY2                           BANKMASK(PWMCON1), 2
#define CMDLY3                           BANKMASK(PWMCON1), 3
#define CMDLY4                           BANKMASK(PWMCON1), 4
#define COMOD0                           BANKMASK(PWMCON1), 5
#define COMOD1                           BANKMASK(PWMCON1), 6
#define CVROE                            BANKMASK(REFCON), 1
#define DC                               BANKMASK(STATUS), 1
#define DC1B0                            BANKMASK(CCP1CON), 4
#define DC1B1                            BANKMASK(CCP1CON), 5
#define EEIE                             BANKMASK(PIE1), 7
#define EEIF                             BANKMASK(PIR1), 7
#define GIE                              BANKMASK(INTCON), 7
#define GO                               BANKMASK(ADCON0), 1
#define GO_DONE                          BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define HTS                              BANKMASK(OSCCON), 2
#define INTE                             BANKMASK(INTCON), 4
#define INTEDG                           BANKMASK(OPTION_REG), 6
#define INTF                             BANKMASK(INTCON), 1
#define IOC0                             BANKMASK(IOCA), 0
#define IOC1                             BANKMASK(IOCA), 1
#define IOC2                             BANKMASK(IOCA), 2
#define IOC3                             BANKMASK(IOCA), 3
#define IOC4                             BANKMASK(IOCA), 4
#define IOC5                             BANKMASK(IOCA), 5
#define IOCA0                            BANKMASK(IOCA), 0
#define IOCA1                            BANKMASK(IOCA), 1
#define IOCA2                            BANKMASK(IOCA), 2
#define IOCA3                            BANKMASK(IOCA), 3
#define IOCA4                            BANKMASK(IOCA), 4
#define IOCA5                            BANKMASK(IOCA), 5
#define IRCF0                            BANKMASK(OSCCON), 4
#define IRCF1                            BANKMASK(OSCCON), 5
#define IRCF2                            BANKMASK(OSCCON), 6
#define LTS                              BANKMASK(OSCCON), 1
#define MC1OUT                           BANKMASK(CM2CON1), 7
#define MC2OUT                           BANKMASK(CM2CON1), 6
#define OSFIE                            BANKMASK(PIE1), 2
#define OSFIF                            BANKMASK(PIR1), 2
#define OSTS                             BANKMASK(OSCCON), 3
#define OVRLP                            BANKMASK(PWMCON1), 7
#define PASEN                            BANKMASK(PWMCON0), 6
#define PEIE                             BANKMASK(INTCON), 6
#define PER0                             BANKMASK(PWMCLK), 0
#define PER1                             BANKMASK(PWMCLK), 1
#define PER2                             BANKMASK(PWMCLK), 2
#define PER3                             BANKMASK(PWMCLK), 3
#define PER4                             BANKMASK(PWMCLK), 4
#define PH1EN                            BANKMASK(PWMCON0), 0
#define PH2EN                            BANKMASK(PWMCON0), 1
#define PRSEN                            BANKMASK(PWMCON0), 7
#define PS0                              BANKMASK(OPTION_REG), 0
#define PS1                              BANKMASK(OPTION_REG), 1
#define PS2                              BANKMASK(OPTION_REG), 2
#define PSA                              BANKMASK(OPTION_REG), 3
#define PWMASE                           BANKMASK(PWMCLK), 7
#define PWMP0                            BANKMASK(PWMCLK), 5
#define PWMP1                            BANKMASK(PWMCLK), 6
#define RA0                              BANKMASK(PORTA), 0
#define RA1                              BANKMASK(PORTA), 1
#define RA2                              BANKMASK(PORTA), 2
#define RA3                              BANKMASK(PORTA), 3
#define RA4                              BANKMASK(PORTA), 4
#define RA5                              BANKMASK(PORTA), 5
#define RAIE                             BANKMASK(INTCON), 3
#define RAIF                             BANKMASK(INTCON), 0
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
#define RD                               BANKMASK(EECON1), 0
#define RP0                              BANKMASK(STATUS), 5
#define RP1                              BANKMASK(STATUS), 6
#define SBODEN                           BANKMASK(PCON), 4
#define SBOREN                           BANKMASK(PCON), 4
#define SCS                              BANKMASK(OSCCON), 0
#define SWDTEN                           BANKMASK(WDTCON), 0
#define SYNC0                            BANKMASK(PWMCON0), 2
#define SYNC1                            BANKMASK(PWMCON0), 3
#define T0CS                             BANKMASK(OPTION_REG), 5
#define T0IE                             BANKMASK(INTCON), 5
#define T0IF                             BANKMASK(INTCON), 2
#define T0SE                             BANKMASK(OPTION_REG), 4
#define T1CKPS0                          BANKMASK(T1CON), 4
#define T1CKPS1                          BANKMASK(T1CON), 5
#define T1GE                             BANKMASK(T1CON), 6
#define T1GINV                           BANKMASK(T1CON), 7
#define T1GSS                            BANKMASK(CM2CON1), 1
#define T1IE                             BANKMASK(PIE1), 0
#define T1IF                             BANKMASK(PIR1), 0
#define T1OSCEN                          BANKMASK(T1CON), 3
#define T2CKPS0                          BANKMASK(T2CON), 0
#define T2CKPS1                          BANKMASK(T2CON), 1
#define T2IE                             BANKMASK(PIE1), 1
#define T2IF                             BANKMASK(PIR1), 1
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
#define TUN0                             BANKMASK(OSCTUNE), 0
#define TUN1                             BANKMASK(OSCTUNE), 1
#define TUN2                             BANKMASK(OSCTUNE), 2
#define TUN3                             BANKMASK(OSCTUNE), 3
#define TUN4                             BANKMASK(OSCTUNE), 4
#define VCFG                             BANKMASK(ADCON0), 6
#define VR0                              BANKMASK(VRCON), 0
#define VR1                              BANKMASK(VRCON), 1
#define VR2                              BANKMASK(VRCON), 2
#define VR3                              BANKMASK(VRCON), 3
#define VRBB                             BANKMASK(REFCON), 4
#define VREN                             BANKMASK(REFCON), 3
#define VROE                             BANKMASK(REFCON), 2
#define VRR                              BANKMASK(VRCON), 5
#define WDTPS0                           BANKMASK(WDTCON), 1
#define WDTPS1                           BANKMASK(WDTCON), 2
#define WDTPS2                           BANKMASK(WDTCON), 3
#define WDTPS3                           BANKMASK(WDTCON), 4
#define WPU0                             BANKMASK(WPUA), 0
#define WPU1                             BANKMASK(WPUA), 1
#define WPU2                             BANKMASK(WPUA), 2
#define WPU3                             BANKMASK(WPUA), 3
#define WPU4                             BANKMASK(WPUA), 4
#define WPU5                             BANKMASK(WPUA), 5
#define WPUA0                            BANKMASK(WPUA), 0
#define WPUA1                            BANKMASK(WPUA), 1
#define WPUA2                            BANKMASK(WPUA), 2
#define WPUA3                            BANKMASK(WPUA), 3
#define WPUA4                            BANKMASK(WPUA), 4
#define WPUA5                            BANKMASK(WPUA), 5
#define WR                               BANKMASK(EECON1), 1
#define WREN                             BANKMASK(EECON1), 2
#define WRERR                            BANKMASK(EECON1), 3
#define ZERO                             BANKMASK(STATUS), 2
#define nBOD                             BANKMASK(PCON), 0
#define nBOR                             BANKMASK(PCON), 0
#define nDONE                            BANKMASK(ADCON0), 1
#define nPD                              BANKMASK(STATUS), 3
#define nPOR                             BANKMASK(PCON), 1
#define nRAPU                            BANKMASK(OPTION_REG), 7
#define nT1SYNC                          BANKMASK(T1CON), 2
#define nTO                              BANKMASK(STATUS), 4

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
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=2,noexec

#endif // _XC_INC_

#endif // _PIC16F785_INC_
