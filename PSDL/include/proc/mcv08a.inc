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

#ifndef _MCV08A_INC_
#define _MCV08A_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * MCV08A
 */

/*
 * Device Registers
 */

// Register: INDF
#define INDF INDF
INDF                                     equ 0000h
// bitfield definitions
INDF_INDF_POSN                           equ 0000h
INDF_INDF_POSITION                       equ 0000h
INDF_INDF_SIZE                           equ 0008h
INDF_INDF_LENGTH                         equ 0008h
INDF_INDF_MASK                           equ 00FFh

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0001h
// bitfield definitions
TMR0_TMR0_POSN                           equ 0000h
TMR0_TMR0_POSITION                       equ 0000h
TMR0_TMR0_SIZE                           equ 0008h
TMR0_TMR0_LENGTH                         equ 0008h
TMR0_TMR0_MASK                           equ 00FFh

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
STATUS_PA0_POSN                          equ 0005h
STATUS_PA0_POSITION                      equ 0005h
STATUS_PA0_SIZE                          equ 0001h
STATUS_PA0_LENGTH                        equ 0001h
STATUS_PA0_MASK                          equ 0020h
STATUS_CWUF_POSN                         equ 0006h
STATUS_CWUF_POSITION                     equ 0006h
STATUS_CWUF_SIZE                         equ 0001h
STATUS_CWUF_LENGTH                       equ 0001h
STATUS_CWUF_MASK                         equ 0040h
STATUS_GPWUF_POSN                        equ 0007h
STATUS_GPWUF_POSITION                    equ 0007h
STATUS_GPWUF_SIZE                        equ 0001h
STATUS_GPWUF_LENGTH                      equ 0001h
STATUS_GPWUF_MASK                        equ 0080h
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
// bitfield definitions
FSR_FSR_POSN                             equ 0000h
FSR_FSR_POSITION                         equ 0000h
FSR_FSR_SIZE                             equ 0008h
FSR_FSR_LENGTH                           equ 0008h
FSR_FSR_MASK                             equ 00FFh

// Register: OSCCAL
#define OSCCAL OSCCAL
OSCCAL                                   equ 0005h
// bitfield definitions
OSCCAL_CAL_POSN                          equ 0001h
OSCCAL_CAL_POSITION                      equ 0001h
OSCCAL_CAL_SIZE                          equ 0007h
OSCCAL_CAL_LENGTH                        equ 0007h
OSCCAL_CAL_MASK                          equ 00FEh
OSCCAL_CAL0_POSN                         equ 0001h
OSCCAL_CAL0_POSITION                     equ 0001h
OSCCAL_CAL0_SIZE                         equ 0001h
OSCCAL_CAL0_LENGTH                       equ 0001h
OSCCAL_CAL0_MASK                         equ 0002h
OSCCAL_CAL1_POSN                         equ 0002h
OSCCAL_CAL1_POSITION                     equ 0002h
OSCCAL_CAL1_SIZE                         equ 0001h
OSCCAL_CAL1_LENGTH                       equ 0001h
OSCCAL_CAL1_MASK                         equ 0004h
OSCCAL_CAL2_POSN                         equ 0003h
OSCCAL_CAL2_POSITION                     equ 0003h
OSCCAL_CAL2_SIZE                         equ 0001h
OSCCAL_CAL2_LENGTH                       equ 0001h
OSCCAL_CAL2_MASK                         equ 0008h
OSCCAL_CAL3_POSN                         equ 0004h
OSCCAL_CAL3_POSITION                     equ 0004h
OSCCAL_CAL3_SIZE                         equ 0001h
OSCCAL_CAL3_LENGTH                       equ 0001h
OSCCAL_CAL3_MASK                         equ 0010h
OSCCAL_CAL4_POSN                         equ 0005h
OSCCAL_CAL4_POSITION                     equ 0005h
OSCCAL_CAL4_SIZE                         equ 0001h
OSCCAL_CAL4_LENGTH                       equ 0001h
OSCCAL_CAL4_MASK                         equ 0020h
OSCCAL_CAL5_POSN                         equ 0006h
OSCCAL_CAL5_POSITION                     equ 0006h
OSCCAL_CAL5_SIZE                         equ 0001h
OSCCAL_CAL5_LENGTH                       equ 0001h
OSCCAL_CAL5_MASK                         equ 0040h
OSCCAL_CAL6_POSN                         equ 0007h
OSCCAL_CAL6_POSITION                     equ 0007h
OSCCAL_CAL6_SIZE                         equ 0001h
OSCCAL_CAL6_LENGTH                       equ 0001h
OSCCAL_CAL6_MASK                         equ 0080h

// Register: GPIO
#define GPIO GPIO
GPIO                                     equ 0006h
// bitfield definitions
GPIO_GP_POSN                             equ 0000h
GPIO_GP_POSITION                         equ 0000h
GPIO_GP_SIZE                             equ 0006h
GPIO_GP_LENGTH                           equ 0006h
GPIO_GP_MASK                             equ 003Fh
GPIO_GP0_POSN                            equ 0000h
GPIO_GP0_POSITION                        equ 0000h
GPIO_GP0_SIZE                            equ 0001h
GPIO_GP0_LENGTH                          equ 0001h
GPIO_GP0_MASK                            equ 0001h
GPIO_GP1_POSN                            equ 0001h
GPIO_GP1_POSITION                        equ 0001h
GPIO_GP1_SIZE                            equ 0001h
GPIO_GP1_LENGTH                          equ 0001h
GPIO_GP1_MASK                            equ 0002h
GPIO_GP2_POSN                            equ 0002h
GPIO_GP2_POSITION                        equ 0002h
GPIO_GP2_SIZE                            equ 0001h
GPIO_GP2_LENGTH                          equ 0001h
GPIO_GP2_MASK                            equ 0004h
GPIO_GP3_POSN                            equ 0003h
GPIO_GP3_POSITION                        equ 0003h
GPIO_GP3_SIZE                            equ 0001h
GPIO_GP3_LENGTH                          equ 0001h
GPIO_GP3_MASK                            equ 0008h
GPIO_GP4_POSN                            equ 0004h
GPIO_GP4_POSITION                        equ 0004h
GPIO_GP4_SIZE                            equ 0001h
GPIO_GP4_LENGTH                          equ 0001h
GPIO_GP4_MASK                            equ 0010h
GPIO_GP5_POSN                            equ 0005h
GPIO_GP5_POSITION                        equ 0005h
GPIO_GP5_SIZE                            equ 0001h
GPIO_GP5_LENGTH                          equ 0001h
GPIO_GP5_MASK                            equ 0020h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0007h
// bitfield definitions
CM1CON0_nC1WU_POSN                       equ 0000h
CM1CON0_nC1WU_POSITION                   equ 0000h
CM1CON0_nC1WU_SIZE                       equ 0001h
CM1CON0_nC1WU_LENGTH                     equ 0001h
CM1CON0_nC1WU_MASK                       equ 0001h
CM1CON0_C1PREF_POSN                      equ 0001h
CM1CON0_C1PREF_POSITION                  equ 0001h
CM1CON0_C1PREF_SIZE                      equ 0001h
CM1CON0_C1PREF_LENGTH                    equ 0001h
CM1CON0_C1PREF_MASK                      equ 0002h
CM1CON0_C1NREF_POSN                      equ 0002h
CM1CON0_C1NREF_POSITION                  equ 0002h
CM1CON0_C1NREF_SIZE                      equ 0001h
CM1CON0_C1NREF_LENGTH                    equ 0001h
CM1CON0_C1NREF_MASK                      equ 0004h
CM1CON0_C1ON_POSN                        equ 0003h
CM1CON0_C1ON_POSITION                    equ 0003h
CM1CON0_C1ON_SIZE                        equ 0001h
CM1CON0_C1ON_LENGTH                      equ 0001h
CM1CON0_C1ON_MASK                        equ 0008h
CM1CON0_nC1T0CS_POSN                     equ 0004h
CM1CON0_nC1T0CS_POSITION                 equ 0004h
CM1CON0_nC1T0CS_SIZE                     equ 0001h
CM1CON0_nC1T0CS_LENGTH                   equ 0001h
CM1CON0_nC1T0CS_MASK                     equ 0010h
CM1CON0_C1POL_POSN                       equ 0005h
CM1CON0_C1POL_POSITION                   equ 0005h
CM1CON0_C1POL_SIZE                       equ 0001h
CM1CON0_C1POL_LENGTH                     equ 0001h
CM1CON0_C1POL_MASK                       equ 0020h
CM1CON0_nC1OUTEN_POSN                    equ 0006h
CM1CON0_nC1OUTEN_POSITION                equ 0006h
CM1CON0_nC1OUTEN_SIZE                    equ 0001h
CM1CON0_nC1OUTEN_LENGTH                  equ 0001h
CM1CON0_nC1OUTEN_MASK                    equ 0040h
CM1CON0_C1OUT_POSN                       equ 0007h
CM1CON0_C1OUT_POSITION                   equ 0007h
CM1CON0_C1OUT_SIZE                       equ 0001h
CM1CON0_C1OUT_LENGTH                     equ 0001h
CM1CON0_C1OUT_MASK                       equ 0080h

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 0008h
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
ADCON0_CHS_SIZE                          equ 0002h
ADCON0_CHS_LENGTH                        equ 0002h
ADCON0_CHS_MASK                          equ 000Ch
ADCON0_ADCS_POSN                         equ 0004h
ADCON0_ADCS_POSITION                     equ 0004h
ADCON0_ADCS_SIZE                         equ 0002h
ADCON0_ADCS_LENGTH                       equ 0002h
ADCON0_ADCS_MASK                         equ 0030h
ADCON0_ANS_POSN                          equ 0006h
ADCON0_ANS_POSITION                      equ 0006h
ADCON0_ANS_SIZE                          equ 0002h
ADCON0_ANS_LENGTH                        equ 0002h
ADCON0_ANS_MASK                          equ 00C0h
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
ADCON0_ADCS0_POSN                        equ 0004h
ADCON0_ADCS0_POSITION                    equ 0004h
ADCON0_ADCS0_SIZE                        equ 0001h
ADCON0_ADCS0_LENGTH                      equ 0001h
ADCON0_ADCS0_MASK                        equ 0010h
ADCON0_ADCS1_POSN                        equ 0005h
ADCON0_ADCS1_POSITION                    equ 0005h
ADCON0_ADCS1_SIZE                        equ 0001h
ADCON0_ADCS1_LENGTH                      equ 0001h
ADCON0_ADCS1_MASK                        equ 0020h
ADCON0_ANS0_POSN                         equ 0006h
ADCON0_ANS0_POSITION                     equ 0006h
ADCON0_ANS0_SIZE                         equ 0001h
ADCON0_ANS0_LENGTH                       equ 0001h
ADCON0_ANS0_MASK                         equ 0040h
ADCON0_ANS1_POSN                         equ 0007h
ADCON0_ANS1_POSITION                     equ 0007h
ADCON0_ANS1_SIZE                         equ 0001h
ADCON0_ANS1_LENGTH                       equ 0001h
ADCON0_ANS1_MASK                         equ 0080h
ADCON0_nDONE_POSN                        equ 0001h
ADCON0_nDONE_POSITION                    equ 0001h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0002h

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 0009h
// bitfield definitions
ADRES_ADRES_POSN                         equ 0000h
ADRES_ADRES_POSITION                     equ 0000h
ADRES_ADRES_SIZE                         equ 0008h
ADRES_ADRES_LENGTH                       equ 0008h
ADRES_ADRES_MASK                         equ 00FFh

// Register: TRISGPIO
#define TRISGPIO TRISGPIO

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 01FFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 01Fh)
#endif
#define ADCS0                            BANKMASK(ADCON0), 4
#define ADCS1                            BANKMASK(ADCON0), 5
#define ADON                             BANKMASK(ADCON0), 0
#define ANS0                             BANKMASK(ADCON0), 6
#define ANS1                             BANKMASK(ADCON0), 7
#define C1NREF                           BANKMASK(CM1CON0), 2
#define C1ON                             BANKMASK(CM1CON0), 3
#define C1OUT                            BANKMASK(CM1CON0), 7
#define C1POL                            BANKMASK(CM1CON0), 5
#define C1PREF                           BANKMASK(CM1CON0), 1
#define CAL0                             BANKMASK(OSCCAL), 1
#define CAL1                             BANKMASK(OSCCAL), 2
#define CAL2                             BANKMASK(OSCCAL), 3
#define CAL3                             BANKMASK(OSCCAL), 4
#define CAL4                             BANKMASK(OSCCAL), 5
#define CAL5                             BANKMASK(OSCCAL), 6
#define CAL6                             BANKMASK(OSCCAL), 7
#define CARRY                            BANKMASK(STATUS), 0
#define CHS0                             BANKMASK(ADCON0), 2
#define CHS1                             BANKMASK(ADCON0), 3
#define CWUF                             BANKMASK(STATUS), 6
#define DC                               BANKMASK(STATUS), 1
#define GO                               BANKMASK(ADCON0), 1
#define GO_nDONE                         BANKMASK(ADCON0), 1
#define GP0                              BANKMASK(GPIO), 0
#define GP1                              BANKMASK(GPIO), 1
#define GP2                              BANKMASK(GPIO), 2
#define GP3                              BANKMASK(GPIO), 3
#define GP4                              BANKMASK(GPIO), 4
#define GP5                              BANKMASK(GPIO), 5
#define GPWUF                            BANKMASK(STATUS), 7
#define PA0                              BANKMASK(STATUS), 5
#define ZERO                             BANKMASK(STATUS), 2
#define nC1OUTEN                         BANKMASK(CM1CON0), 6
#define nC1T0CS                          BANKMASK(CM1CON0), 4
#define nC1WU                            BANKMASK(CM1CON0), 0
#define nDONE                            BANKMASK(ADCON0), 1
#define nPD                              BANKMASK(STATUS), 3
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

#endif // _XC_INC_

#endif // _MCV08A_INC_
