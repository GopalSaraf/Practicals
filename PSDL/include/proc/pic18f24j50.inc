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

#ifndef _PIC18F24J50_INC_
#define _PIC18F24J50_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F24J50
 */

/*
 * Device Registers
 */

// Register: RPOR0
#define RPOR0 RPOR0
RPOR0                                    equ 0EC6h

// Register: RPOR1
#define RPOR1 RPOR1
RPOR1                                    equ 0EC7h

// Register: RPOR2
#define RPOR2 RPOR2
RPOR2                                    equ 0EC8h

// Register: RPOR3
#define RPOR3 RPOR3
RPOR3                                    equ 0EC9h

// Register: RPOR4
#define RPOR4 RPOR4
RPOR4                                    equ 0ECAh

// Register: RPOR5
#define RPOR5 RPOR5
RPOR5                                    equ 0ECBh

// Register: RPOR6
#define RPOR6 RPOR6
RPOR6                                    equ 0ECCh

// Register: RPOR7
#define RPOR7 RPOR7
RPOR7                                    equ 0ECDh

// Register: RPOR8
#define RPOR8 RPOR8
RPOR8                                    equ 0ECEh

// Register: RPOR9
#define RPOR9 RPOR9
RPOR9                                    equ 0ECFh

// Register: RPOR10
#define RPOR10 RPOR10
RPOR10                                   equ 0ED0h

// Register: RPOR11
#define RPOR11 RPOR11
RPOR11                                   equ 0ED1h

// Register: RPOR12
#define RPOR12 RPOR12
RPOR12                                   equ 0ED2h

// Register: RPOR13
#define RPOR13 RPOR13
RPOR13                                   equ 0ED3h

// Register: RPOR17
#define RPOR17 RPOR17
RPOR17                                   equ 0ED7h

// Register: RPOR18
#define RPOR18 RPOR18
RPOR18                                   equ 0ED8h

// Register: RPINR1
#define RPINR1 RPINR1
RPINR1                                   equ 0EE7h

// Register: RPINR2
#define RPINR2 RPINR2
RPINR2                                   equ 0EE8h

// Register: RPINR3
#define RPINR3 RPINR3
RPINR3                                   equ 0EE9h

// Register: RPINR4
#define RPINR4 RPINR4
RPINR4                                   equ 0EEAh

// Register: RPINR6
#define RPINR6 RPINR6
RPINR6                                   equ 0EECh

// Register: RPINR7
#define RPINR7 RPINR7
RPINR7                                   equ 0EEDh

// Register: RPINR8
#define RPINR8 RPINR8
RPINR8                                   equ 0EEEh

// Register: RPINR12
#define RPINR12 RPINR12
RPINR12                                  equ 0EF2h

// Register: RPINR13
#define RPINR13 RPINR13
RPINR13                                  equ 0EF3h

// Register: RPINR16
#define RPINR16 RPINR16
RPINR16                                  equ 0EF6h

// Register: RPINR17
#define RPINR17 RPINR17
RPINR17                                  equ 0EF7h

// Register: RPINR21
#define RPINR21 RPINR21
RPINR21                                  equ 0EFBh

// Register: RPINR22
#define RPINR22 RPINR22
RPINR22                                  equ 0EFCh

// Register: RPINR23
#define RPINR23 RPINR23
RPINR23                                  equ 0EFDh

// Register: RPINR24
#define RPINR24 RPINR24
RPINR24                                  equ 0EFEh

// Register: PPSCON
#define PPSCON PPSCON
PPSCON                                   equ 0EFFh
// bitfield definitions
PPSCON_IOLOCK_POSN                       equ 0000h
PPSCON_IOLOCK_POSITION                   equ 0000h
PPSCON_IOLOCK_SIZE                       equ 0001h
PPSCON_IOLOCK_LENGTH                     equ 0001h
PPSCON_IOLOCK_MASK                       equ 0001h

// Register: UEP0
#define UEP0 UEP0
UEP0                                     equ 0F26h
// bitfield definitions
UEP0_EPSTALL_POSN                        equ 0000h
UEP0_EPSTALL_POSITION                    equ 0000h
UEP0_EPSTALL_SIZE                        equ 0001h
UEP0_EPSTALL_LENGTH                      equ 0001h
UEP0_EPSTALL_MASK                        equ 0001h
UEP0_EPINEN_POSN                         equ 0001h
UEP0_EPINEN_POSITION                     equ 0001h
UEP0_EPINEN_SIZE                         equ 0001h
UEP0_EPINEN_LENGTH                       equ 0001h
UEP0_EPINEN_MASK                         equ 0002h
UEP0_EPOUTEN_POSN                        equ 0002h
UEP0_EPOUTEN_POSITION                    equ 0002h
UEP0_EPOUTEN_SIZE                        equ 0001h
UEP0_EPOUTEN_LENGTH                      equ 0001h
UEP0_EPOUTEN_MASK                        equ 0004h
UEP0_EPCONDIS_POSN                       equ 0003h
UEP0_EPCONDIS_POSITION                   equ 0003h
UEP0_EPCONDIS_SIZE                       equ 0001h
UEP0_EPCONDIS_LENGTH                     equ 0001h
UEP0_EPCONDIS_MASK                       equ 0008h
UEP0_EPHSHK_POSN                         equ 0004h
UEP0_EPHSHK_POSITION                     equ 0004h
UEP0_EPHSHK_SIZE                         equ 0001h
UEP0_EPHSHK_LENGTH                       equ 0001h
UEP0_EPHSHK_MASK                         equ 0010h
UEP0_EP0STALL_POSN                       equ 0000h
UEP0_EP0STALL_POSITION                   equ 0000h
UEP0_EP0STALL_SIZE                       equ 0001h
UEP0_EP0STALL_LENGTH                     equ 0001h
UEP0_EP0STALL_MASK                       equ 0001h
UEP0_EP0INEN_POSN                        equ 0001h
UEP0_EP0INEN_POSITION                    equ 0001h
UEP0_EP0INEN_SIZE                        equ 0001h
UEP0_EP0INEN_LENGTH                      equ 0001h
UEP0_EP0INEN_MASK                        equ 0002h
UEP0_EP0OUTEN_POSN                       equ 0002h
UEP0_EP0OUTEN_POSITION                   equ 0002h
UEP0_EP0OUTEN_SIZE                       equ 0001h
UEP0_EP0OUTEN_LENGTH                     equ 0001h
UEP0_EP0OUTEN_MASK                       equ 0004h
UEP0_EP0CONDIS_POSN                      equ 0003h
UEP0_EP0CONDIS_POSITION                  equ 0003h
UEP0_EP0CONDIS_SIZE                      equ 0001h
UEP0_EP0CONDIS_LENGTH                    equ 0001h
UEP0_EP0CONDIS_MASK                      equ 0008h
UEP0_EP0HSHK_POSN                        equ 0004h
UEP0_EP0HSHK_POSITION                    equ 0004h
UEP0_EP0HSHK_SIZE                        equ 0001h
UEP0_EP0HSHK_LENGTH                      equ 0001h
UEP0_EP0HSHK_MASK                        equ 0010h
UEP0_EPSTALL0_POSN                       equ 0000h
UEP0_EPSTALL0_POSITION                   equ 0000h
UEP0_EPSTALL0_SIZE                       equ 0001h
UEP0_EPSTALL0_LENGTH                     equ 0001h
UEP0_EPSTALL0_MASK                       equ 0001h
UEP0_EPINEN0_POSN                        equ 0001h
UEP0_EPINEN0_POSITION                    equ 0001h
UEP0_EPINEN0_SIZE                        equ 0001h
UEP0_EPINEN0_LENGTH                      equ 0001h
UEP0_EPINEN0_MASK                        equ 0002h
UEP0_EPOUTEN0_POSN                       equ 0002h
UEP0_EPOUTEN0_POSITION                   equ 0002h
UEP0_EPOUTEN0_SIZE                       equ 0001h
UEP0_EPOUTEN0_LENGTH                     equ 0001h
UEP0_EPOUTEN0_MASK                       equ 0004h
UEP0_EPCONDIS0_POSN                      equ 0003h
UEP0_EPCONDIS0_POSITION                  equ 0003h
UEP0_EPCONDIS0_SIZE                      equ 0001h
UEP0_EPCONDIS0_LENGTH                    equ 0001h
UEP0_EPCONDIS0_MASK                      equ 0008h
UEP0_EPHSHK0_POSN                        equ 0004h
UEP0_EPHSHK0_POSITION                    equ 0004h
UEP0_EPHSHK0_SIZE                        equ 0001h
UEP0_EPHSHK0_LENGTH                      equ 0001h
UEP0_EPHSHK0_MASK                        equ 0010h

// Register: UEP1
#define UEP1 UEP1
UEP1                                     equ 0F27h
// bitfield definitions
UEP1_EPSTALL_POSN                        equ 0000h
UEP1_EPSTALL_POSITION                    equ 0000h
UEP1_EPSTALL_SIZE                        equ 0001h
UEP1_EPSTALL_LENGTH                      equ 0001h
UEP1_EPSTALL_MASK                        equ 0001h
UEP1_EPINEN_POSN                         equ 0001h
UEP1_EPINEN_POSITION                     equ 0001h
UEP1_EPINEN_SIZE                         equ 0001h
UEP1_EPINEN_LENGTH                       equ 0001h
UEP1_EPINEN_MASK                         equ 0002h
UEP1_EPOUTEN_POSN                        equ 0002h
UEP1_EPOUTEN_POSITION                    equ 0002h
UEP1_EPOUTEN_SIZE                        equ 0001h
UEP1_EPOUTEN_LENGTH                      equ 0001h
UEP1_EPOUTEN_MASK                        equ 0004h
UEP1_EPCONDIS_POSN                       equ 0003h
UEP1_EPCONDIS_POSITION                   equ 0003h
UEP1_EPCONDIS_SIZE                       equ 0001h
UEP1_EPCONDIS_LENGTH                     equ 0001h
UEP1_EPCONDIS_MASK                       equ 0008h
UEP1_EPHSHK_POSN                         equ 0004h
UEP1_EPHSHK_POSITION                     equ 0004h
UEP1_EPHSHK_SIZE                         equ 0001h
UEP1_EPHSHK_LENGTH                       equ 0001h
UEP1_EPHSHK_MASK                         equ 0010h
UEP1_EP1STALL_POSN                       equ 0000h
UEP1_EP1STALL_POSITION                   equ 0000h
UEP1_EP1STALL_SIZE                       equ 0001h
UEP1_EP1STALL_LENGTH                     equ 0001h
UEP1_EP1STALL_MASK                       equ 0001h
UEP1_EP1INEN_POSN                        equ 0001h
UEP1_EP1INEN_POSITION                    equ 0001h
UEP1_EP1INEN_SIZE                        equ 0001h
UEP1_EP1INEN_LENGTH                      equ 0001h
UEP1_EP1INEN_MASK                        equ 0002h
UEP1_EP1OUTEN_POSN                       equ 0002h
UEP1_EP1OUTEN_POSITION                   equ 0002h
UEP1_EP1OUTEN_SIZE                       equ 0001h
UEP1_EP1OUTEN_LENGTH                     equ 0001h
UEP1_EP1OUTEN_MASK                       equ 0004h
UEP1_EP1CONDIS_POSN                      equ 0003h
UEP1_EP1CONDIS_POSITION                  equ 0003h
UEP1_EP1CONDIS_SIZE                      equ 0001h
UEP1_EP1CONDIS_LENGTH                    equ 0001h
UEP1_EP1CONDIS_MASK                      equ 0008h
UEP1_EP1HSHK_POSN                        equ 0004h
UEP1_EP1HSHK_POSITION                    equ 0004h
UEP1_EP1HSHK_SIZE                        equ 0001h
UEP1_EP1HSHK_LENGTH                      equ 0001h
UEP1_EP1HSHK_MASK                        equ 0010h
UEP1_EPSTALL1_POSN                       equ 0000h
UEP1_EPSTALL1_POSITION                   equ 0000h
UEP1_EPSTALL1_SIZE                       equ 0001h
UEP1_EPSTALL1_LENGTH                     equ 0001h
UEP1_EPSTALL1_MASK                       equ 0001h
UEP1_EPINEN1_POSN                        equ 0001h
UEP1_EPINEN1_POSITION                    equ 0001h
UEP1_EPINEN1_SIZE                        equ 0001h
UEP1_EPINEN1_LENGTH                      equ 0001h
UEP1_EPINEN1_MASK                        equ 0002h
UEP1_EPOUTEN1_POSN                       equ 0002h
UEP1_EPOUTEN1_POSITION                   equ 0002h
UEP1_EPOUTEN1_SIZE                       equ 0001h
UEP1_EPOUTEN1_LENGTH                     equ 0001h
UEP1_EPOUTEN1_MASK                       equ 0004h
UEP1_EPCONDIS1_POSN                      equ 0003h
UEP1_EPCONDIS1_POSITION                  equ 0003h
UEP1_EPCONDIS1_SIZE                      equ 0001h
UEP1_EPCONDIS1_LENGTH                    equ 0001h
UEP1_EPCONDIS1_MASK                      equ 0008h
UEP1_EPHSHK1_POSN                        equ 0004h
UEP1_EPHSHK1_POSITION                    equ 0004h
UEP1_EPHSHK1_SIZE                        equ 0001h
UEP1_EPHSHK1_LENGTH                      equ 0001h
UEP1_EPHSHK1_MASK                        equ 0010h

// Register: UEP2
#define UEP2 UEP2
UEP2                                     equ 0F28h
// bitfield definitions
UEP2_EPSTALL_POSN                        equ 0000h
UEP2_EPSTALL_POSITION                    equ 0000h
UEP2_EPSTALL_SIZE                        equ 0001h
UEP2_EPSTALL_LENGTH                      equ 0001h
UEP2_EPSTALL_MASK                        equ 0001h
UEP2_EPINEN_POSN                         equ 0001h
UEP2_EPINEN_POSITION                     equ 0001h
UEP2_EPINEN_SIZE                         equ 0001h
UEP2_EPINEN_LENGTH                       equ 0001h
UEP2_EPINEN_MASK                         equ 0002h
UEP2_EPOUTEN_POSN                        equ 0002h
UEP2_EPOUTEN_POSITION                    equ 0002h
UEP2_EPOUTEN_SIZE                        equ 0001h
UEP2_EPOUTEN_LENGTH                      equ 0001h
UEP2_EPOUTEN_MASK                        equ 0004h
UEP2_EPCONDIS_POSN                       equ 0003h
UEP2_EPCONDIS_POSITION                   equ 0003h
UEP2_EPCONDIS_SIZE                       equ 0001h
UEP2_EPCONDIS_LENGTH                     equ 0001h
UEP2_EPCONDIS_MASK                       equ 0008h
UEP2_EPHSHK_POSN                         equ 0004h
UEP2_EPHSHK_POSITION                     equ 0004h
UEP2_EPHSHK_SIZE                         equ 0001h
UEP2_EPHSHK_LENGTH                       equ 0001h
UEP2_EPHSHK_MASK                         equ 0010h
UEP2_EP2STALL_POSN                       equ 0000h
UEP2_EP2STALL_POSITION                   equ 0000h
UEP2_EP2STALL_SIZE                       equ 0001h
UEP2_EP2STALL_LENGTH                     equ 0001h
UEP2_EP2STALL_MASK                       equ 0001h
UEP2_EP2INEN_POSN                        equ 0001h
UEP2_EP2INEN_POSITION                    equ 0001h
UEP2_EP2INEN_SIZE                        equ 0001h
UEP2_EP2INEN_LENGTH                      equ 0001h
UEP2_EP2INEN_MASK                        equ 0002h
UEP2_EP2OUTEN_POSN                       equ 0002h
UEP2_EP2OUTEN_POSITION                   equ 0002h
UEP2_EP2OUTEN_SIZE                       equ 0001h
UEP2_EP2OUTEN_LENGTH                     equ 0001h
UEP2_EP2OUTEN_MASK                       equ 0004h
UEP2_EP2CONDIS_POSN                      equ 0003h
UEP2_EP2CONDIS_POSITION                  equ 0003h
UEP2_EP2CONDIS_SIZE                      equ 0001h
UEP2_EP2CONDIS_LENGTH                    equ 0001h
UEP2_EP2CONDIS_MASK                      equ 0008h
UEP2_EP2HSHK_POSN                        equ 0004h
UEP2_EP2HSHK_POSITION                    equ 0004h
UEP2_EP2HSHK_SIZE                        equ 0001h
UEP2_EP2HSHK_LENGTH                      equ 0001h
UEP2_EP2HSHK_MASK                        equ 0010h
UEP2_EPSTALL2_POSN                       equ 0000h
UEP2_EPSTALL2_POSITION                   equ 0000h
UEP2_EPSTALL2_SIZE                       equ 0001h
UEP2_EPSTALL2_LENGTH                     equ 0001h
UEP2_EPSTALL2_MASK                       equ 0001h
UEP2_EPINEN2_POSN                        equ 0001h
UEP2_EPINEN2_POSITION                    equ 0001h
UEP2_EPINEN2_SIZE                        equ 0001h
UEP2_EPINEN2_LENGTH                      equ 0001h
UEP2_EPINEN2_MASK                        equ 0002h
UEP2_EPOUTEN2_POSN                       equ 0002h
UEP2_EPOUTEN2_POSITION                   equ 0002h
UEP2_EPOUTEN2_SIZE                       equ 0001h
UEP2_EPOUTEN2_LENGTH                     equ 0001h
UEP2_EPOUTEN2_MASK                       equ 0004h
UEP2_EPCONDIS2_POSN                      equ 0003h
UEP2_EPCONDIS2_POSITION                  equ 0003h
UEP2_EPCONDIS2_SIZE                      equ 0001h
UEP2_EPCONDIS2_LENGTH                    equ 0001h
UEP2_EPCONDIS2_MASK                      equ 0008h
UEP2_EPHSHK2_POSN                        equ 0004h
UEP2_EPHSHK2_POSITION                    equ 0004h
UEP2_EPHSHK2_SIZE                        equ 0001h
UEP2_EPHSHK2_LENGTH                      equ 0001h
UEP2_EPHSHK2_MASK                        equ 0010h

// Register: UEP3
#define UEP3 UEP3
UEP3                                     equ 0F29h
// bitfield definitions
UEP3_EPSTALL_POSN                        equ 0000h
UEP3_EPSTALL_POSITION                    equ 0000h
UEP3_EPSTALL_SIZE                        equ 0001h
UEP3_EPSTALL_LENGTH                      equ 0001h
UEP3_EPSTALL_MASK                        equ 0001h
UEP3_EPINEN_POSN                         equ 0001h
UEP3_EPINEN_POSITION                     equ 0001h
UEP3_EPINEN_SIZE                         equ 0001h
UEP3_EPINEN_LENGTH                       equ 0001h
UEP3_EPINEN_MASK                         equ 0002h
UEP3_EPOUTEN_POSN                        equ 0002h
UEP3_EPOUTEN_POSITION                    equ 0002h
UEP3_EPOUTEN_SIZE                        equ 0001h
UEP3_EPOUTEN_LENGTH                      equ 0001h
UEP3_EPOUTEN_MASK                        equ 0004h
UEP3_EPCONDIS_POSN                       equ 0003h
UEP3_EPCONDIS_POSITION                   equ 0003h
UEP3_EPCONDIS_SIZE                       equ 0001h
UEP3_EPCONDIS_LENGTH                     equ 0001h
UEP3_EPCONDIS_MASK                       equ 0008h
UEP3_EPHSHK_POSN                         equ 0004h
UEP3_EPHSHK_POSITION                     equ 0004h
UEP3_EPHSHK_SIZE                         equ 0001h
UEP3_EPHSHK_LENGTH                       equ 0001h
UEP3_EPHSHK_MASK                         equ 0010h
UEP3_EP3STALL_POSN                       equ 0000h
UEP3_EP3STALL_POSITION                   equ 0000h
UEP3_EP3STALL_SIZE                       equ 0001h
UEP3_EP3STALL_LENGTH                     equ 0001h
UEP3_EP3STALL_MASK                       equ 0001h
UEP3_EP3INEN_POSN                        equ 0001h
UEP3_EP3INEN_POSITION                    equ 0001h
UEP3_EP3INEN_SIZE                        equ 0001h
UEP3_EP3INEN_LENGTH                      equ 0001h
UEP3_EP3INEN_MASK                        equ 0002h
UEP3_EP3OUTEN_POSN                       equ 0002h
UEP3_EP3OUTEN_POSITION                   equ 0002h
UEP3_EP3OUTEN_SIZE                       equ 0001h
UEP3_EP3OUTEN_LENGTH                     equ 0001h
UEP3_EP3OUTEN_MASK                       equ 0004h
UEP3_EP3CONDIS_POSN                      equ 0003h
UEP3_EP3CONDIS_POSITION                  equ 0003h
UEP3_EP3CONDIS_SIZE                      equ 0001h
UEP3_EP3CONDIS_LENGTH                    equ 0001h
UEP3_EP3CONDIS_MASK                      equ 0008h
UEP3_EP3HSHK_POSN                        equ 0004h
UEP3_EP3HSHK_POSITION                    equ 0004h
UEP3_EP3HSHK_SIZE                        equ 0001h
UEP3_EP3HSHK_LENGTH                      equ 0001h
UEP3_EP3HSHK_MASK                        equ 0010h
UEP3_EPSTALL3_POSN                       equ 0000h
UEP3_EPSTALL3_POSITION                   equ 0000h
UEP3_EPSTALL3_SIZE                       equ 0001h
UEP3_EPSTALL3_LENGTH                     equ 0001h
UEP3_EPSTALL3_MASK                       equ 0001h
UEP3_EPINEN3_POSN                        equ 0001h
UEP3_EPINEN3_POSITION                    equ 0001h
UEP3_EPINEN3_SIZE                        equ 0001h
UEP3_EPINEN3_LENGTH                      equ 0001h
UEP3_EPINEN3_MASK                        equ 0002h
UEP3_EPOUTEN3_POSN                       equ 0002h
UEP3_EPOUTEN3_POSITION                   equ 0002h
UEP3_EPOUTEN3_SIZE                       equ 0001h
UEP3_EPOUTEN3_LENGTH                     equ 0001h
UEP3_EPOUTEN3_MASK                       equ 0004h
UEP3_EPCONDIS3_POSN                      equ 0003h
UEP3_EPCONDIS3_POSITION                  equ 0003h
UEP3_EPCONDIS3_SIZE                      equ 0001h
UEP3_EPCONDIS3_LENGTH                    equ 0001h
UEP3_EPCONDIS3_MASK                      equ 0008h
UEP3_EPHSHK3_POSN                        equ 0004h
UEP3_EPHSHK3_POSITION                    equ 0004h
UEP3_EPHSHK3_SIZE                        equ 0001h
UEP3_EPHSHK3_LENGTH                      equ 0001h
UEP3_EPHSHK3_MASK                        equ 0010h

// Register: UEP4
#define UEP4 UEP4
UEP4                                     equ 0F2Ah
// bitfield definitions
UEP4_EPSTALL_POSN                        equ 0000h
UEP4_EPSTALL_POSITION                    equ 0000h
UEP4_EPSTALL_SIZE                        equ 0001h
UEP4_EPSTALL_LENGTH                      equ 0001h
UEP4_EPSTALL_MASK                        equ 0001h
UEP4_EPINEN_POSN                         equ 0001h
UEP4_EPINEN_POSITION                     equ 0001h
UEP4_EPINEN_SIZE                         equ 0001h
UEP4_EPINEN_LENGTH                       equ 0001h
UEP4_EPINEN_MASK                         equ 0002h
UEP4_EPOUTEN_POSN                        equ 0002h
UEP4_EPOUTEN_POSITION                    equ 0002h
UEP4_EPOUTEN_SIZE                        equ 0001h
UEP4_EPOUTEN_LENGTH                      equ 0001h
UEP4_EPOUTEN_MASK                        equ 0004h
UEP4_EPCONDIS_POSN                       equ 0003h
UEP4_EPCONDIS_POSITION                   equ 0003h
UEP4_EPCONDIS_SIZE                       equ 0001h
UEP4_EPCONDIS_LENGTH                     equ 0001h
UEP4_EPCONDIS_MASK                       equ 0008h
UEP4_EPHSHK_POSN                         equ 0004h
UEP4_EPHSHK_POSITION                     equ 0004h
UEP4_EPHSHK_SIZE                         equ 0001h
UEP4_EPHSHK_LENGTH                       equ 0001h
UEP4_EPHSHK_MASK                         equ 0010h
UEP4_EP4STALL_POSN                       equ 0000h
UEP4_EP4STALL_POSITION                   equ 0000h
UEP4_EP4STALL_SIZE                       equ 0001h
UEP4_EP4STALL_LENGTH                     equ 0001h
UEP4_EP4STALL_MASK                       equ 0001h
UEP4_EP4INEN_POSN                        equ 0001h
UEP4_EP4INEN_POSITION                    equ 0001h
UEP4_EP4INEN_SIZE                        equ 0001h
UEP4_EP4INEN_LENGTH                      equ 0001h
UEP4_EP4INEN_MASK                        equ 0002h
UEP4_EP4OUTEN_POSN                       equ 0002h
UEP4_EP4OUTEN_POSITION                   equ 0002h
UEP4_EP4OUTEN_SIZE                       equ 0001h
UEP4_EP4OUTEN_LENGTH                     equ 0001h
UEP4_EP4OUTEN_MASK                       equ 0004h
UEP4_EP4CONDIS_POSN                      equ 0003h
UEP4_EP4CONDIS_POSITION                  equ 0003h
UEP4_EP4CONDIS_SIZE                      equ 0001h
UEP4_EP4CONDIS_LENGTH                    equ 0001h
UEP4_EP4CONDIS_MASK                      equ 0008h
UEP4_EP4HSHK_POSN                        equ 0004h
UEP4_EP4HSHK_POSITION                    equ 0004h
UEP4_EP4HSHK_SIZE                        equ 0001h
UEP4_EP4HSHK_LENGTH                      equ 0001h
UEP4_EP4HSHK_MASK                        equ 0010h
UEP4_EPSTALL4_POSN                       equ 0000h
UEP4_EPSTALL4_POSITION                   equ 0000h
UEP4_EPSTALL4_SIZE                       equ 0001h
UEP4_EPSTALL4_LENGTH                     equ 0001h
UEP4_EPSTALL4_MASK                       equ 0001h
UEP4_EPINEN4_POSN                        equ 0001h
UEP4_EPINEN4_POSITION                    equ 0001h
UEP4_EPINEN4_SIZE                        equ 0001h
UEP4_EPINEN4_LENGTH                      equ 0001h
UEP4_EPINEN4_MASK                        equ 0002h
UEP4_EPOUTEN4_POSN                       equ 0002h
UEP4_EPOUTEN4_POSITION                   equ 0002h
UEP4_EPOUTEN4_SIZE                       equ 0001h
UEP4_EPOUTEN4_LENGTH                     equ 0001h
UEP4_EPOUTEN4_MASK                       equ 0004h
UEP4_EPCONDIS4_POSN                      equ 0003h
UEP4_EPCONDIS4_POSITION                  equ 0003h
UEP4_EPCONDIS4_SIZE                      equ 0001h
UEP4_EPCONDIS4_LENGTH                    equ 0001h
UEP4_EPCONDIS4_MASK                      equ 0008h
UEP4_EPHSHK4_POSN                        equ 0004h
UEP4_EPHSHK4_POSITION                    equ 0004h
UEP4_EPHSHK4_SIZE                        equ 0001h
UEP4_EPHSHK4_LENGTH                      equ 0001h
UEP4_EPHSHK4_MASK                        equ 0010h

// Register: UEP5
#define UEP5 UEP5
UEP5                                     equ 0F2Bh
// bitfield definitions
UEP5_EPSTALL_POSN                        equ 0000h
UEP5_EPSTALL_POSITION                    equ 0000h
UEP5_EPSTALL_SIZE                        equ 0001h
UEP5_EPSTALL_LENGTH                      equ 0001h
UEP5_EPSTALL_MASK                        equ 0001h
UEP5_EPINEN_POSN                         equ 0001h
UEP5_EPINEN_POSITION                     equ 0001h
UEP5_EPINEN_SIZE                         equ 0001h
UEP5_EPINEN_LENGTH                       equ 0001h
UEP5_EPINEN_MASK                         equ 0002h
UEP5_EPOUTEN_POSN                        equ 0002h
UEP5_EPOUTEN_POSITION                    equ 0002h
UEP5_EPOUTEN_SIZE                        equ 0001h
UEP5_EPOUTEN_LENGTH                      equ 0001h
UEP5_EPOUTEN_MASK                        equ 0004h
UEP5_EPCONDIS_POSN                       equ 0003h
UEP5_EPCONDIS_POSITION                   equ 0003h
UEP5_EPCONDIS_SIZE                       equ 0001h
UEP5_EPCONDIS_LENGTH                     equ 0001h
UEP5_EPCONDIS_MASK                       equ 0008h
UEP5_EPHSHK_POSN                         equ 0004h
UEP5_EPHSHK_POSITION                     equ 0004h
UEP5_EPHSHK_SIZE                         equ 0001h
UEP5_EPHSHK_LENGTH                       equ 0001h
UEP5_EPHSHK_MASK                         equ 0010h
UEP5_EP5STALL_POSN                       equ 0000h
UEP5_EP5STALL_POSITION                   equ 0000h
UEP5_EP5STALL_SIZE                       equ 0001h
UEP5_EP5STALL_LENGTH                     equ 0001h
UEP5_EP5STALL_MASK                       equ 0001h
UEP5_EP5INEN_POSN                        equ 0001h
UEP5_EP5INEN_POSITION                    equ 0001h
UEP5_EP5INEN_SIZE                        equ 0001h
UEP5_EP5INEN_LENGTH                      equ 0001h
UEP5_EP5INEN_MASK                        equ 0002h
UEP5_EP5OUTEN_POSN                       equ 0002h
UEP5_EP5OUTEN_POSITION                   equ 0002h
UEP5_EP5OUTEN_SIZE                       equ 0001h
UEP5_EP5OUTEN_LENGTH                     equ 0001h
UEP5_EP5OUTEN_MASK                       equ 0004h
UEP5_EP5CONDIS_POSN                      equ 0003h
UEP5_EP5CONDIS_POSITION                  equ 0003h
UEP5_EP5CONDIS_SIZE                      equ 0001h
UEP5_EP5CONDIS_LENGTH                    equ 0001h
UEP5_EP5CONDIS_MASK                      equ 0008h
UEP5_EP5HSHK_POSN                        equ 0004h
UEP5_EP5HSHK_POSITION                    equ 0004h
UEP5_EP5HSHK_SIZE                        equ 0001h
UEP5_EP5HSHK_LENGTH                      equ 0001h
UEP5_EP5HSHK_MASK                        equ 0010h
UEP5_EPSTALL5_POSN                       equ 0000h
UEP5_EPSTALL5_POSITION                   equ 0000h
UEP5_EPSTALL5_SIZE                       equ 0001h
UEP5_EPSTALL5_LENGTH                     equ 0001h
UEP5_EPSTALL5_MASK                       equ 0001h
UEP5_EPINEN5_POSN                        equ 0001h
UEP5_EPINEN5_POSITION                    equ 0001h
UEP5_EPINEN5_SIZE                        equ 0001h
UEP5_EPINEN5_LENGTH                      equ 0001h
UEP5_EPINEN5_MASK                        equ 0002h
UEP5_EPOUTEN5_POSN                       equ 0002h
UEP5_EPOUTEN5_POSITION                   equ 0002h
UEP5_EPOUTEN5_SIZE                       equ 0001h
UEP5_EPOUTEN5_LENGTH                     equ 0001h
UEP5_EPOUTEN5_MASK                       equ 0004h
UEP5_EPCONDIS5_POSN                      equ 0003h
UEP5_EPCONDIS5_POSITION                  equ 0003h
UEP5_EPCONDIS5_SIZE                      equ 0001h
UEP5_EPCONDIS5_LENGTH                    equ 0001h
UEP5_EPCONDIS5_MASK                      equ 0008h
UEP5_EPHSHK5_POSN                        equ 0004h
UEP5_EPHSHK5_POSITION                    equ 0004h
UEP5_EPHSHK5_SIZE                        equ 0001h
UEP5_EPHSHK5_LENGTH                      equ 0001h
UEP5_EPHSHK5_MASK                        equ 0010h

// Register: UEP6
#define UEP6 UEP6
UEP6                                     equ 0F2Ch
// bitfield definitions
UEP6_EPSTALL_POSN                        equ 0000h
UEP6_EPSTALL_POSITION                    equ 0000h
UEP6_EPSTALL_SIZE                        equ 0001h
UEP6_EPSTALL_LENGTH                      equ 0001h
UEP6_EPSTALL_MASK                        equ 0001h
UEP6_EPINEN_POSN                         equ 0001h
UEP6_EPINEN_POSITION                     equ 0001h
UEP6_EPINEN_SIZE                         equ 0001h
UEP6_EPINEN_LENGTH                       equ 0001h
UEP6_EPINEN_MASK                         equ 0002h
UEP6_EPOUTEN_POSN                        equ 0002h
UEP6_EPOUTEN_POSITION                    equ 0002h
UEP6_EPOUTEN_SIZE                        equ 0001h
UEP6_EPOUTEN_LENGTH                      equ 0001h
UEP6_EPOUTEN_MASK                        equ 0004h
UEP6_EPCONDIS_POSN                       equ 0003h
UEP6_EPCONDIS_POSITION                   equ 0003h
UEP6_EPCONDIS_SIZE                       equ 0001h
UEP6_EPCONDIS_LENGTH                     equ 0001h
UEP6_EPCONDIS_MASK                       equ 0008h
UEP6_EPHSHK_POSN                         equ 0004h
UEP6_EPHSHK_POSITION                     equ 0004h
UEP6_EPHSHK_SIZE                         equ 0001h
UEP6_EPHSHK_LENGTH                       equ 0001h
UEP6_EPHSHK_MASK                         equ 0010h
UEP6_EP6STALL_POSN                       equ 0000h
UEP6_EP6STALL_POSITION                   equ 0000h
UEP6_EP6STALL_SIZE                       equ 0001h
UEP6_EP6STALL_LENGTH                     equ 0001h
UEP6_EP6STALL_MASK                       equ 0001h
UEP6_EP6INEN_POSN                        equ 0001h
UEP6_EP6INEN_POSITION                    equ 0001h
UEP6_EP6INEN_SIZE                        equ 0001h
UEP6_EP6INEN_LENGTH                      equ 0001h
UEP6_EP6INEN_MASK                        equ 0002h
UEP6_EP6OUTEN_POSN                       equ 0002h
UEP6_EP6OUTEN_POSITION                   equ 0002h
UEP6_EP6OUTEN_SIZE                       equ 0001h
UEP6_EP6OUTEN_LENGTH                     equ 0001h
UEP6_EP6OUTEN_MASK                       equ 0004h
UEP6_EP6CONDIS_POSN                      equ 0003h
UEP6_EP6CONDIS_POSITION                  equ 0003h
UEP6_EP6CONDIS_SIZE                      equ 0001h
UEP6_EP6CONDIS_LENGTH                    equ 0001h
UEP6_EP6CONDIS_MASK                      equ 0008h
UEP6_EP6HSHK_POSN                        equ 0004h
UEP6_EP6HSHK_POSITION                    equ 0004h
UEP6_EP6HSHK_SIZE                        equ 0001h
UEP6_EP6HSHK_LENGTH                      equ 0001h
UEP6_EP6HSHK_MASK                        equ 0010h
UEP6_EPSTALL6_POSN                       equ 0000h
UEP6_EPSTALL6_POSITION                   equ 0000h
UEP6_EPSTALL6_SIZE                       equ 0001h
UEP6_EPSTALL6_LENGTH                     equ 0001h
UEP6_EPSTALL6_MASK                       equ 0001h
UEP6_EPINEN6_POSN                        equ 0001h
UEP6_EPINEN6_POSITION                    equ 0001h
UEP6_EPINEN6_SIZE                        equ 0001h
UEP6_EPINEN6_LENGTH                      equ 0001h
UEP6_EPINEN6_MASK                        equ 0002h
UEP6_EPOUTEN6_POSN                       equ 0002h
UEP6_EPOUTEN6_POSITION                   equ 0002h
UEP6_EPOUTEN6_SIZE                       equ 0001h
UEP6_EPOUTEN6_LENGTH                     equ 0001h
UEP6_EPOUTEN6_MASK                       equ 0004h
UEP6_EPCONDIS6_POSN                      equ 0003h
UEP6_EPCONDIS6_POSITION                  equ 0003h
UEP6_EPCONDIS6_SIZE                      equ 0001h
UEP6_EPCONDIS6_LENGTH                    equ 0001h
UEP6_EPCONDIS6_MASK                      equ 0008h
UEP6_EPHSHK6_POSN                        equ 0004h
UEP6_EPHSHK6_POSITION                    equ 0004h
UEP6_EPHSHK6_SIZE                        equ 0001h
UEP6_EPHSHK6_LENGTH                      equ 0001h
UEP6_EPHSHK6_MASK                        equ 0010h

// Register: UEP7
#define UEP7 UEP7
UEP7                                     equ 0F2Dh
// bitfield definitions
UEP7_EPSTALL_POSN                        equ 0000h
UEP7_EPSTALL_POSITION                    equ 0000h
UEP7_EPSTALL_SIZE                        equ 0001h
UEP7_EPSTALL_LENGTH                      equ 0001h
UEP7_EPSTALL_MASK                        equ 0001h
UEP7_EPINEN_POSN                         equ 0001h
UEP7_EPINEN_POSITION                     equ 0001h
UEP7_EPINEN_SIZE                         equ 0001h
UEP7_EPINEN_LENGTH                       equ 0001h
UEP7_EPINEN_MASK                         equ 0002h
UEP7_EPOUTEN_POSN                        equ 0002h
UEP7_EPOUTEN_POSITION                    equ 0002h
UEP7_EPOUTEN_SIZE                        equ 0001h
UEP7_EPOUTEN_LENGTH                      equ 0001h
UEP7_EPOUTEN_MASK                        equ 0004h
UEP7_EPCONDIS_POSN                       equ 0003h
UEP7_EPCONDIS_POSITION                   equ 0003h
UEP7_EPCONDIS_SIZE                       equ 0001h
UEP7_EPCONDIS_LENGTH                     equ 0001h
UEP7_EPCONDIS_MASK                       equ 0008h
UEP7_EPHSHK_POSN                         equ 0004h
UEP7_EPHSHK_POSITION                     equ 0004h
UEP7_EPHSHK_SIZE                         equ 0001h
UEP7_EPHSHK_LENGTH                       equ 0001h
UEP7_EPHSHK_MASK                         equ 0010h
UEP7_EP7STALL_POSN                       equ 0000h
UEP7_EP7STALL_POSITION                   equ 0000h
UEP7_EP7STALL_SIZE                       equ 0001h
UEP7_EP7STALL_LENGTH                     equ 0001h
UEP7_EP7STALL_MASK                       equ 0001h
UEP7_EP7INEN_POSN                        equ 0001h
UEP7_EP7INEN_POSITION                    equ 0001h
UEP7_EP7INEN_SIZE                        equ 0001h
UEP7_EP7INEN_LENGTH                      equ 0001h
UEP7_EP7INEN_MASK                        equ 0002h
UEP7_EP7OUTEN_POSN                       equ 0002h
UEP7_EP7OUTEN_POSITION                   equ 0002h
UEP7_EP7OUTEN_SIZE                       equ 0001h
UEP7_EP7OUTEN_LENGTH                     equ 0001h
UEP7_EP7OUTEN_MASK                       equ 0004h
UEP7_EP7CONDIS_POSN                      equ 0003h
UEP7_EP7CONDIS_POSITION                  equ 0003h
UEP7_EP7CONDIS_SIZE                      equ 0001h
UEP7_EP7CONDIS_LENGTH                    equ 0001h
UEP7_EP7CONDIS_MASK                      equ 0008h
UEP7_EP7HSHK_POSN                        equ 0004h
UEP7_EP7HSHK_POSITION                    equ 0004h
UEP7_EP7HSHK_SIZE                        equ 0001h
UEP7_EP7HSHK_LENGTH                      equ 0001h
UEP7_EP7HSHK_MASK                        equ 0010h
UEP7_EPSTALL7_POSN                       equ 0000h
UEP7_EPSTALL7_POSITION                   equ 0000h
UEP7_EPSTALL7_SIZE                       equ 0001h
UEP7_EPSTALL7_LENGTH                     equ 0001h
UEP7_EPSTALL7_MASK                       equ 0001h
UEP7_EPINEN7_POSN                        equ 0001h
UEP7_EPINEN7_POSITION                    equ 0001h
UEP7_EPINEN7_SIZE                        equ 0001h
UEP7_EPINEN7_LENGTH                      equ 0001h
UEP7_EPINEN7_MASK                        equ 0002h
UEP7_EPOUTEN7_POSN                       equ 0002h
UEP7_EPOUTEN7_POSITION                   equ 0002h
UEP7_EPOUTEN7_SIZE                       equ 0001h
UEP7_EPOUTEN7_LENGTH                     equ 0001h
UEP7_EPOUTEN7_MASK                       equ 0004h
UEP7_EPCONDIS7_POSN                      equ 0003h
UEP7_EPCONDIS7_POSITION                  equ 0003h
UEP7_EPCONDIS7_SIZE                      equ 0001h
UEP7_EPCONDIS7_LENGTH                    equ 0001h
UEP7_EPCONDIS7_MASK                      equ 0008h
UEP7_EPHSHK7_POSN                        equ 0004h
UEP7_EPHSHK7_POSITION                    equ 0004h
UEP7_EPHSHK7_SIZE                        equ 0001h
UEP7_EPHSHK7_LENGTH                      equ 0001h
UEP7_EPHSHK7_MASK                        equ 0010h

// Register: UEP8
#define UEP8 UEP8
UEP8                                     equ 0F2Eh
// bitfield definitions
UEP8_EPSTALL_POSN                        equ 0000h
UEP8_EPSTALL_POSITION                    equ 0000h
UEP8_EPSTALL_SIZE                        equ 0001h
UEP8_EPSTALL_LENGTH                      equ 0001h
UEP8_EPSTALL_MASK                        equ 0001h
UEP8_EPINEN_POSN                         equ 0001h
UEP8_EPINEN_POSITION                     equ 0001h
UEP8_EPINEN_SIZE                         equ 0001h
UEP8_EPINEN_LENGTH                       equ 0001h
UEP8_EPINEN_MASK                         equ 0002h
UEP8_EPOUTEN_POSN                        equ 0002h
UEP8_EPOUTEN_POSITION                    equ 0002h
UEP8_EPOUTEN_SIZE                        equ 0001h
UEP8_EPOUTEN_LENGTH                      equ 0001h
UEP8_EPOUTEN_MASK                        equ 0004h
UEP8_EPCONDIS_POSN                       equ 0003h
UEP8_EPCONDIS_POSITION                   equ 0003h
UEP8_EPCONDIS_SIZE                       equ 0001h
UEP8_EPCONDIS_LENGTH                     equ 0001h
UEP8_EPCONDIS_MASK                       equ 0008h
UEP8_EPHSHK_POSN                         equ 0004h
UEP8_EPHSHK_POSITION                     equ 0004h
UEP8_EPHSHK_SIZE                         equ 0001h
UEP8_EPHSHK_LENGTH                       equ 0001h
UEP8_EPHSHK_MASK                         equ 0010h
UEP8_EPSTALL8_POSN                       equ 0000h
UEP8_EPSTALL8_POSITION                   equ 0000h
UEP8_EPSTALL8_SIZE                       equ 0001h
UEP8_EPSTALL8_LENGTH                     equ 0001h
UEP8_EPSTALL8_MASK                       equ 0001h
UEP8_EPINEN8_POSN                        equ 0001h
UEP8_EPINEN8_POSITION                    equ 0001h
UEP8_EPINEN8_SIZE                        equ 0001h
UEP8_EPINEN8_LENGTH                      equ 0001h
UEP8_EPINEN8_MASK                        equ 0002h
UEP8_EPOUTEN8_POSN                       equ 0002h
UEP8_EPOUTEN8_POSITION                   equ 0002h
UEP8_EPOUTEN8_SIZE                       equ 0001h
UEP8_EPOUTEN8_LENGTH                     equ 0001h
UEP8_EPOUTEN8_MASK                       equ 0004h
UEP8_EPCONDIS8_POSN                      equ 0003h
UEP8_EPCONDIS8_POSITION                  equ 0003h
UEP8_EPCONDIS8_SIZE                      equ 0001h
UEP8_EPCONDIS8_LENGTH                    equ 0001h
UEP8_EPCONDIS8_MASK                      equ 0008h
UEP8_EPHSHK8_POSN                        equ 0004h
UEP8_EPHSHK8_POSITION                    equ 0004h
UEP8_EPHSHK8_SIZE                        equ 0001h
UEP8_EPHSHK8_LENGTH                      equ 0001h
UEP8_EPHSHK8_MASK                        equ 0010h

// Register: UEP9
#define UEP9 UEP9
UEP9                                     equ 0F2Fh
// bitfield definitions
UEP9_EPSTALL_POSN                        equ 0000h
UEP9_EPSTALL_POSITION                    equ 0000h
UEP9_EPSTALL_SIZE                        equ 0001h
UEP9_EPSTALL_LENGTH                      equ 0001h
UEP9_EPSTALL_MASK                        equ 0001h
UEP9_EPINEN_POSN                         equ 0001h
UEP9_EPINEN_POSITION                     equ 0001h
UEP9_EPINEN_SIZE                         equ 0001h
UEP9_EPINEN_LENGTH                       equ 0001h
UEP9_EPINEN_MASK                         equ 0002h
UEP9_EPOUTEN_POSN                        equ 0002h
UEP9_EPOUTEN_POSITION                    equ 0002h
UEP9_EPOUTEN_SIZE                        equ 0001h
UEP9_EPOUTEN_LENGTH                      equ 0001h
UEP9_EPOUTEN_MASK                        equ 0004h
UEP9_EPCONDIS_POSN                       equ 0003h
UEP9_EPCONDIS_POSITION                   equ 0003h
UEP9_EPCONDIS_SIZE                       equ 0001h
UEP9_EPCONDIS_LENGTH                     equ 0001h
UEP9_EPCONDIS_MASK                       equ 0008h
UEP9_EPHSHK_POSN                         equ 0004h
UEP9_EPHSHK_POSITION                     equ 0004h
UEP9_EPHSHK_SIZE                         equ 0001h
UEP9_EPHSHK_LENGTH                       equ 0001h
UEP9_EPHSHK_MASK                         equ 0010h
UEP9_EPSTALL9_POSN                       equ 0000h
UEP9_EPSTALL9_POSITION                   equ 0000h
UEP9_EPSTALL9_SIZE                       equ 0001h
UEP9_EPSTALL9_LENGTH                     equ 0001h
UEP9_EPSTALL9_MASK                       equ 0001h
UEP9_EPINEN9_POSN                        equ 0001h
UEP9_EPINEN9_POSITION                    equ 0001h
UEP9_EPINEN9_SIZE                        equ 0001h
UEP9_EPINEN9_LENGTH                      equ 0001h
UEP9_EPINEN9_MASK                        equ 0002h
UEP9_EPOUTEN9_POSN                       equ 0002h
UEP9_EPOUTEN9_POSITION                   equ 0002h
UEP9_EPOUTEN9_SIZE                       equ 0001h
UEP9_EPOUTEN9_LENGTH                     equ 0001h
UEP9_EPOUTEN9_MASK                       equ 0004h
UEP9_EPCONDIS9_POSN                      equ 0003h
UEP9_EPCONDIS9_POSITION                  equ 0003h
UEP9_EPCONDIS9_SIZE                      equ 0001h
UEP9_EPCONDIS9_LENGTH                    equ 0001h
UEP9_EPCONDIS9_MASK                      equ 0008h
UEP9_EPHSHK9_POSN                        equ 0004h
UEP9_EPHSHK9_POSITION                    equ 0004h
UEP9_EPHSHK9_SIZE                        equ 0001h
UEP9_EPHSHK9_LENGTH                      equ 0001h
UEP9_EPHSHK9_MASK                        equ 0010h

// Register: UEP10
#define UEP10 UEP10
UEP10                                    equ 0F30h
// bitfield definitions
UEP10_EPSTALL_POSN                       equ 0000h
UEP10_EPSTALL_POSITION                   equ 0000h
UEP10_EPSTALL_SIZE                       equ 0001h
UEP10_EPSTALL_LENGTH                     equ 0001h
UEP10_EPSTALL_MASK                       equ 0001h
UEP10_EPINEN_POSN                        equ 0001h
UEP10_EPINEN_POSITION                    equ 0001h
UEP10_EPINEN_SIZE                        equ 0001h
UEP10_EPINEN_LENGTH                      equ 0001h
UEP10_EPINEN_MASK                        equ 0002h
UEP10_EPOUTEN_POSN                       equ 0002h
UEP10_EPOUTEN_POSITION                   equ 0002h
UEP10_EPOUTEN_SIZE                       equ 0001h
UEP10_EPOUTEN_LENGTH                     equ 0001h
UEP10_EPOUTEN_MASK                       equ 0004h
UEP10_EPCONDIS_POSN                      equ 0003h
UEP10_EPCONDIS_POSITION                  equ 0003h
UEP10_EPCONDIS_SIZE                      equ 0001h
UEP10_EPCONDIS_LENGTH                    equ 0001h
UEP10_EPCONDIS_MASK                      equ 0008h
UEP10_EPHSHK_POSN                        equ 0004h
UEP10_EPHSHK_POSITION                    equ 0004h
UEP10_EPHSHK_SIZE                        equ 0001h
UEP10_EPHSHK_LENGTH                      equ 0001h
UEP10_EPHSHK_MASK                        equ 0010h
UEP10_EPSTALL10_POSN                     equ 0000h
UEP10_EPSTALL10_POSITION                 equ 0000h
UEP10_EPSTALL10_SIZE                     equ 0001h
UEP10_EPSTALL10_LENGTH                   equ 0001h
UEP10_EPSTALL10_MASK                     equ 0001h
UEP10_EPINEN10_POSN                      equ 0001h
UEP10_EPINEN10_POSITION                  equ 0001h
UEP10_EPINEN10_SIZE                      equ 0001h
UEP10_EPINEN10_LENGTH                    equ 0001h
UEP10_EPINEN10_MASK                      equ 0002h
UEP10_EPOUTEN10_POSN                     equ 0002h
UEP10_EPOUTEN10_POSITION                 equ 0002h
UEP10_EPOUTEN10_SIZE                     equ 0001h
UEP10_EPOUTEN10_LENGTH                   equ 0001h
UEP10_EPOUTEN10_MASK                     equ 0004h
UEP10_EPCONDIS10_POSN                    equ 0003h
UEP10_EPCONDIS10_POSITION                equ 0003h
UEP10_EPCONDIS10_SIZE                    equ 0001h
UEP10_EPCONDIS10_LENGTH                  equ 0001h
UEP10_EPCONDIS10_MASK                    equ 0008h
UEP10_EPHSHK10_POSN                      equ 0004h
UEP10_EPHSHK10_POSITION                  equ 0004h
UEP10_EPHSHK10_SIZE                      equ 0001h
UEP10_EPHSHK10_LENGTH                    equ 0001h
UEP10_EPHSHK10_MASK                      equ 0010h

// Register: UEP11
#define UEP11 UEP11
UEP11                                    equ 0F31h
// bitfield definitions
UEP11_EPSTALL_POSN                       equ 0000h
UEP11_EPSTALL_POSITION                   equ 0000h
UEP11_EPSTALL_SIZE                       equ 0001h
UEP11_EPSTALL_LENGTH                     equ 0001h
UEP11_EPSTALL_MASK                       equ 0001h
UEP11_EPINEN_POSN                        equ 0001h
UEP11_EPINEN_POSITION                    equ 0001h
UEP11_EPINEN_SIZE                        equ 0001h
UEP11_EPINEN_LENGTH                      equ 0001h
UEP11_EPINEN_MASK                        equ 0002h
UEP11_EPOUTEN_POSN                       equ 0002h
UEP11_EPOUTEN_POSITION                   equ 0002h
UEP11_EPOUTEN_SIZE                       equ 0001h
UEP11_EPOUTEN_LENGTH                     equ 0001h
UEP11_EPOUTEN_MASK                       equ 0004h
UEP11_EPCONDIS_POSN                      equ 0003h
UEP11_EPCONDIS_POSITION                  equ 0003h
UEP11_EPCONDIS_SIZE                      equ 0001h
UEP11_EPCONDIS_LENGTH                    equ 0001h
UEP11_EPCONDIS_MASK                      equ 0008h
UEP11_EPHSHK_POSN                        equ 0004h
UEP11_EPHSHK_POSITION                    equ 0004h
UEP11_EPHSHK_SIZE                        equ 0001h
UEP11_EPHSHK_LENGTH                      equ 0001h
UEP11_EPHSHK_MASK                        equ 0010h
UEP11_EPSTALL11_POSN                     equ 0000h
UEP11_EPSTALL11_POSITION                 equ 0000h
UEP11_EPSTALL11_SIZE                     equ 0001h
UEP11_EPSTALL11_LENGTH                   equ 0001h
UEP11_EPSTALL11_MASK                     equ 0001h
UEP11_EPINEN11_POSN                      equ 0001h
UEP11_EPINEN11_POSITION                  equ 0001h
UEP11_EPINEN11_SIZE                      equ 0001h
UEP11_EPINEN11_LENGTH                    equ 0001h
UEP11_EPINEN11_MASK                      equ 0002h
UEP11_EPOUTEN11_POSN                     equ 0002h
UEP11_EPOUTEN11_POSITION                 equ 0002h
UEP11_EPOUTEN11_SIZE                     equ 0001h
UEP11_EPOUTEN11_LENGTH                   equ 0001h
UEP11_EPOUTEN11_MASK                     equ 0004h
UEP11_EPCONDIS11_POSN                    equ 0003h
UEP11_EPCONDIS11_POSITION                equ 0003h
UEP11_EPCONDIS11_SIZE                    equ 0001h
UEP11_EPCONDIS11_LENGTH                  equ 0001h
UEP11_EPCONDIS11_MASK                    equ 0008h
UEP11_EPHSHK11_POSN                      equ 0004h
UEP11_EPHSHK11_POSITION                  equ 0004h
UEP11_EPHSHK11_SIZE                      equ 0001h
UEP11_EPHSHK11_LENGTH                    equ 0001h
UEP11_EPHSHK11_MASK                      equ 0010h

// Register: UEP12
#define UEP12 UEP12
UEP12                                    equ 0F32h
// bitfield definitions
UEP12_EPSTALL_POSN                       equ 0000h
UEP12_EPSTALL_POSITION                   equ 0000h
UEP12_EPSTALL_SIZE                       equ 0001h
UEP12_EPSTALL_LENGTH                     equ 0001h
UEP12_EPSTALL_MASK                       equ 0001h
UEP12_EPINEN_POSN                        equ 0001h
UEP12_EPINEN_POSITION                    equ 0001h
UEP12_EPINEN_SIZE                        equ 0001h
UEP12_EPINEN_LENGTH                      equ 0001h
UEP12_EPINEN_MASK                        equ 0002h
UEP12_EPOUTEN_POSN                       equ 0002h
UEP12_EPOUTEN_POSITION                   equ 0002h
UEP12_EPOUTEN_SIZE                       equ 0001h
UEP12_EPOUTEN_LENGTH                     equ 0001h
UEP12_EPOUTEN_MASK                       equ 0004h
UEP12_EPCONDIS_POSN                      equ 0003h
UEP12_EPCONDIS_POSITION                  equ 0003h
UEP12_EPCONDIS_SIZE                      equ 0001h
UEP12_EPCONDIS_LENGTH                    equ 0001h
UEP12_EPCONDIS_MASK                      equ 0008h
UEP12_EPHSHK_POSN                        equ 0004h
UEP12_EPHSHK_POSITION                    equ 0004h
UEP12_EPHSHK_SIZE                        equ 0001h
UEP12_EPHSHK_LENGTH                      equ 0001h
UEP12_EPHSHK_MASK                        equ 0010h
UEP12_EPSTALL12_POSN                     equ 0000h
UEP12_EPSTALL12_POSITION                 equ 0000h
UEP12_EPSTALL12_SIZE                     equ 0001h
UEP12_EPSTALL12_LENGTH                   equ 0001h
UEP12_EPSTALL12_MASK                     equ 0001h
UEP12_EPINEN12_POSN                      equ 0001h
UEP12_EPINEN12_POSITION                  equ 0001h
UEP12_EPINEN12_SIZE                      equ 0001h
UEP12_EPINEN12_LENGTH                    equ 0001h
UEP12_EPINEN12_MASK                      equ 0002h
UEP12_EPOUTEN12_POSN                     equ 0002h
UEP12_EPOUTEN12_POSITION                 equ 0002h
UEP12_EPOUTEN12_SIZE                     equ 0001h
UEP12_EPOUTEN12_LENGTH                   equ 0001h
UEP12_EPOUTEN12_MASK                     equ 0004h
UEP12_EPCONDIS12_POSN                    equ 0003h
UEP12_EPCONDIS12_POSITION                equ 0003h
UEP12_EPCONDIS12_SIZE                    equ 0001h
UEP12_EPCONDIS12_LENGTH                  equ 0001h
UEP12_EPCONDIS12_MASK                    equ 0008h
UEP12_EPHSHK12_POSN                      equ 0004h
UEP12_EPHSHK12_POSITION                  equ 0004h
UEP12_EPHSHK12_SIZE                      equ 0001h
UEP12_EPHSHK12_LENGTH                    equ 0001h
UEP12_EPHSHK12_MASK                      equ 0010h

// Register: UEP13
#define UEP13 UEP13
UEP13                                    equ 0F33h
// bitfield definitions
UEP13_EPSTALL_POSN                       equ 0000h
UEP13_EPSTALL_POSITION                   equ 0000h
UEP13_EPSTALL_SIZE                       equ 0001h
UEP13_EPSTALL_LENGTH                     equ 0001h
UEP13_EPSTALL_MASK                       equ 0001h
UEP13_EPINEN_POSN                        equ 0001h
UEP13_EPINEN_POSITION                    equ 0001h
UEP13_EPINEN_SIZE                        equ 0001h
UEP13_EPINEN_LENGTH                      equ 0001h
UEP13_EPINEN_MASK                        equ 0002h
UEP13_EPOUTEN_POSN                       equ 0002h
UEP13_EPOUTEN_POSITION                   equ 0002h
UEP13_EPOUTEN_SIZE                       equ 0001h
UEP13_EPOUTEN_LENGTH                     equ 0001h
UEP13_EPOUTEN_MASK                       equ 0004h
UEP13_EPCONDIS_POSN                      equ 0003h
UEP13_EPCONDIS_POSITION                  equ 0003h
UEP13_EPCONDIS_SIZE                      equ 0001h
UEP13_EPCONDIS_LENGTH                    equ 0001h
UEP13_EPCONDIS_MASK                      equ 0008h
UEP13_EPHSHK_POSN                        equ 0004h
UEP13_EPHSHK_POSITION                    equ 0004h
UEP13_EPHSHK_SIZE                        equ 0001h
UEP13_EPHSHK_LENGTH                      equ 0001h
UEP13_EPHSHK_MASK                        equ 0010h
UEP13_EPSTALL13_POSN                     equ 0000h
UEP13_EPSTALL13_POSITION                 equ 0000h
UEP13_EPSTALL13_SIZE                     equ 0001h
UEP13_EPSTALL13_LENGTH                   equ 0001h
UEP13_EPSTALL13_MASK                     equ 0001h
UEP13_EPINEN13_POSN                      equ 0001h
UEP13_EPINEN13_POSITION                  equ 0001h
UEP13_EPINEN13_SIZE                      equ 0001h
UEP13_EPINEN13_LENGTH                    equ 0001h
UEP13_EPINEN13_MASK                      equ 0002h
UEP13_EPOUTEN13_POSN                     equ 0002h
UEP13_EPOUTEN13_POSITION                 equ 0002h
UEP13_EPOUTEN13_SIZE                     equ 0001h
UEP13_EPOUTEN13_LENGTH                   equ 0001h
UEP13_EPOUTEN13_MASK                     equ 0004h
UEP13_EPCONDIS13_POSN                    equ 0003h
UEP13_EPCONDIS13_POSITION                equ 0003h
UEP13_EPCONDIS13_SIZE                    equ 0001h
UEP13_EPCONDIS13_LENGTH                  equ 0001h
UEP13_EPCONDIS13_MASK                    equ 0008h
UEP13_EPHSHK13_POSN                      equ 0004h
UEP13_EPHSHK13_POSITION                  equ 0004h
UEP13_EPHSHK13_SIZE                      equ 0001h
UEP13_EPHSHK13_LENGTH                    equ 0001h
UEP13_EPHSHK13_MASK                      equ 0010h

// Register: UEP14
#define UEP14 UEP14
UEP14                                    equ 0F34h
// bitfield definitions
UEP14_EPSTALL_POSN                       equ 0000h
UEP14_EPSTALL_POSITION                   equ 0000h
UEP14_EPSTALL_SIZE                       equ 0001h
UEP14_EPSTALL_LENGTH                     equ 0001h
UEP14_EPSTALL_MASK                       equ 0001h
UEP14_EPINEN_POSN                        equ 0001h
UEP14_EPINEN_POSITION                    equ 0001h
UEP14_EPINEN_SIZE                        equ 0001h
UEP14_EPINEN_LENGTH                      equ 0001h
UEP14_EPINEN_MASK                        equ 0002h
UEP14_EPOUTEN_POSN                       equ 0002h
UEP14_EPOUTEN_POSITION                   equ 0002h
UEP14_EPOUTEN_SIZE                       equ 0001h
UEP14_EPOUTEN_LENGTH                     equ 0001h
UEP14_EPOUTEN_MASK                       equ 0004h
UEP14_EPCONDIS_POSN                      equ 0003h
UEP14_EPCONDIS_POSITION                  equ 0003h
UEP14_EPCONDIS_SIZE                      equ 0001h
UEP14_EPCONDIS_LENGTH                    equ 0001h
UEP14_EPCONDIS_MASK                      equ 0008h
UEP14_EPHSHK_POSN                        equ 0004h
UEP14_EPHSHK_POSITION                    equ 0004h
UEP14_EPHSHK_SIZE                        equ 0001h
UEP14_EPHSHK_LENGTH                      equ 0001h
UEP14_EPHSHK_MASK                        equ 0010h
UEP14_EPSTALL14_POSN                     equ 0000h
UEP14_EPSTALL14_POSITION                 equ 0000h
UEP14_EPSTALL14_SIZE                     equ 0001h
UEP14_EPSTALL14_LENGTH                   equ 0001h
UEP14_EPSTALL14_MASK                     equ 0001h
UEP14_EPINEN14_POSN                      equ 0001h
UEP14_EPINEN14_POSITION                  equ 0001h
UEP14_EPINEN14_SIZE                      equ 0001h
UEP14_EPINEN14_LENGTH                    equ 0001h
UEP14_EPINEN14_MASK                      equ 0002h
UEP14_EPOUTEN14_POSN                     equ 0002h
UEP14_EPOUTEN14_POSITION                 equ 0002h
UEP14_EPOUTEN14_SIZE                     equ 0001h
UEP14_EPOUTEN14_LENGTH                   equ 0001h
UEP14_EPOUTEN14_MASK                     equ 0004h
UEP14_EPCONDIS14_POSN                    equ 0003h
UEP14_EPCONDIS14_POSITION                equ 0003h
UEP14_EPCONDIS14_SIZE                    equ 0001h
UEP14_EPCONDIS14_LENGTH                  equ 0001h
UEP14_EPCONDIS14_MASK                    equ 0008h
UEP14_EPHSHK14_POSN                      equ 0004h
UEP14_EPHSHK14_POSITION                  equ 0004h
UEP14_EPHSHK14_SIZE                      equ 0001h
UEP14_EPHSHK14_LENGTH                    equ 0001h
UEP14_EPHSHK14_MASK                      equ 0010h

// Register: UEP15
#define UEP15 UEP15
UEP15                                    equ 0F35h
// bitfield definitions
UEP15_EPSTALL_POSN                       equ 0000h
UEP15_EPSTALL_POSITION                   equ 0000h
UEP15_EPSTALL_SIZE                       equ 0001h
UEP15_EPSTALL_LENGTH                     equ 0001h
UEP15_EPSTALL_MASK                       equ 0001h
UEP15_EPINEN_POSN                        equ 0001h
UEP15_EPINEN_POSITION                    equ 0001h
UEP15_EPINEN_SIZE                        equ 0001h
UEP15_EPINEN_LENGTH                      equ 0001h
UEP15_EPINEN_MASK                        equ 0002h
UEP15_EPOUTEN_POSN                       equ 0002h
UEP15_EPOUTEN_POSITION                   equ 0002h
UEP15_EPOUTEN_SIZE                       equ 0001h
UEP15_EPOUTEN_LENGTH                     equ 0001h
UEP15_EPOUTEN_MASK                       equ 0004h
UEP15_EPCONDIS_POSN                      equ 0003h
UEP15_EPCONDIS_POSITION                  equ 0003h
UEP15_EPCONDIS_SIZE                      equ 0001h
UEP15_EPCONDIS_LENGTH                    equ 0001h
UEP15_EPCONDIS_MASK                      equ 0008h
UEP15_EPHSHK_POSN                        equ 0004h
UEP15_EPHSHK_POSITION                    equ 0004h
UEP15_EPHSHK_SIZE                        equ 0001h
UEP15_EPHSHK_LENGTH                      equ 0001h
UEP15_EPHSHK_MASK                        equ 0010h
UEP15_EPSTALL15_POSN                     equ 0000h
UEP15_EPSTALL15_POSITION                 equ 0000h
UEP15_EPSTALL15_SIZE                     equ 0001h
UEP15_EPSTALL15_LENGTH                   equ 0001h
UEP15_EPSTALL15_MASK                     equ 0001h
UEP15_EPINEN15_POSN                      equ 0001h
UEP15_EPINEN15_POSITION                  equ 0001h
UEP15_EPINEN15_SIZE                      equ 0001h
UEP15_EPINEN15_LENGTH                    equ 0001h
UEP15_EPINEN15_MASK                      equ 0002h
UEP15_EPOUTEN15_POSN                     equ 0002h
UEP15_EPOUTEN15_POSITION                 equ 0002h
UEP15_EPOUTEN15_SIZE                     equ 0001h
UEP15_EPOUTEN15_LENGTH                   equ 0001h
UEP15_EPOUTEN15_MASK                     equ 0004h
UEP15_EPCONDIS15_POSN                    equ 0003h
UEP15_EPCONDIS15_POSITION                equ 0003h
UEP15_EPCONDIS15_SIZE                    equ 0001h
UEP15_EPCONDIS15_LENGTH                  equ 0001h
UEP15_EPCONDIS15_MASK                    equ 0008h
UEP15_EPHSHK15_POSN                      equ 0004h
UEP15_EPHSHK15_POSITION                  equ 0004h
UEP15_EPHSHK15_SIZE                      equ 0001h
UEP15_EPHSHK15_LENGTH                    equ 0001h
UEP15_EPHSHK15_MASK                      equ 0010h

// Register: UIE
#define UIE UIE
UIE                                      equ 0F36h
// bitfield definitions
UIE_URSTIE_POSN                          equ 0000h
UIE_URSTIE_POSITION                      equ 0000h
UIE_URSTIE_SIZE                          equ 0001h
UIE_URSTIE_LENGTH                        equ 0001h
UIE_URSTIE_MASK                          equ 0001h
UIE_UERRIE_POSN                          equ 0001h
UIE_UERRIE_POSITION                      equ 0001h
UIE_UERRIE_SIZE                          equ 0001h
UIE_UERRIE_LENGTH                        equ 0001h
UIE_UERRIE_MASK                          equ 0002h
UIE_ACTVIE_POSN                          equ 0002h
UIE_ACTVIE_POSITION                      equ 0002h
UIE_ACTVIE_SIZE                          equ 0001h
UIE_ACTVIE_LENGTH                        equ 0001h
UIE_ACTVIE_MASK                          equ 0004h
UIE_TRNIE_POSN                           equ 0003h
UIE_TRNIE_POSITION                       equ 0003h
UIE_TRNIE_SIZE                           equ 0001h
UIE_TRNIE_LENGTH                         equ 0001h
UIE_TRNIE_MASK                           equ 0008h
UIE_IDLEIE_POSN                          equ 0004h
UIE_IDLEIE_POSITION                      equ 0004h
UIE_IDLEIE_SIZE                          equ 0001h
UIE_IDLEIE_LENGTH                        equ 0001h
UIE_IDLEIE_MASK                          equ 0010h
UIE_STALLIE_POSN                         equ 0005h
UIE_STALLIE_POSITION                     equ 0005h
UIE_STALLIE_SIZE                         equ 0001h
UIE_STALLIE_LENGTH                       equ 0001h
UIE_STALLIE_MASK                         equ 0020h
UIE_SOFIE_POSN                           equ 0006h
UIE_SOFIE_POSITION                       equ 0006h
UIE_SOFIE_SIZE                           equ 0001h
UIE_SOFIE_LENGTH                         equ 0001h
UIE_SOFIE_MASK                           equ 0040h

// Register: UEIE
#define UEIE UEIE
UEIE                                     equ 0F37h
// bitfield definitions
UEIE_PIDEE_POSN                          equ 0000h
UEIE_PIDEE_POSITION                      equ 0000h
UEIE_PIDEE_SIZE                          equ 0001h
UEIE_PIDEE_LENGTH                        equ 0001h
UEIE_PIDEE_MASK                          equ 0001h
UEIE_CRC5EE_POSN                         equ 0001h
UEIE_CRC5EE_POSITION                     equ 0001h
UEIE_CRC5EE_SIZE                         equ 0001h
UEIE_CRC5EE_LENGTH                       equ 0001h
UEIE_CRC5EE_MASK                         equ 0002h
UEIE_CRC16EE_POSN                        equ 0002h
UEIE_CRC16EE_POSITION                    equ 0002h
UEIE_CRC16EE_SIZE                        equ 0001h
UEIE_CRC16EE_LENGTH                      equ 0001h
UEIE_CRC16EE_MASK                        equ 0004h
UEIE_DFN8EE_POSN                         equ 0003h
UEIE_DFN8EE_POSITION                     equ 0003h
UEIE_DFN8EE_SIZE                         equ 0001h
UEIE_DFN8EE_LENGTH                       equ 0001h
UEIE_DFN8EE_MASK                         equ 0008h
UEIE_BTOEE_POSN                          equ 0004h
UEIE_BTOEE_POSITION                      equ 0004h
UEIE_BTOEE_SIZE                          equ 0001h
UEIE_BTOEE_LENGTH                        equ 0001h
UEIE_BTOEE_MASK                          equ 0010h
UEIE_BTSEE_POSN                          equ 0007h
UEIE_BTSEE_POSITION                      equ 0007h
UEIE_BTSEE_SIZE                          equ 0001h
UEIE_BTSEE_LENGTH                        equ 0001h
UEIE_BTSEE_MASK                          equ 0080h

// Register: UADDR
#define UADDR UADDR
UADDR                                    equ 0F38h
// bitfield definitions
UADDR_ADDR_POSN                          equ 0000h
UADDR_ADDR_POSITION                      equ 0000h
UADDR_ADDR_SIZE                          equ 0007h
UADDR_ADDR_LENGTH                        equ 0007h
UADDR_ADDR_MASK                          equ 007Fh
UADDR_ADDR0_POSN                         equ 0000h
UADDR_ADDR0_POSITION                     equ 0000h
UADDR_ADDR0_SIZE                         equ 0001h
UADDR_ADDR0_LENGTH                       equ 0001h
UADDR_ADDR0_MASK                         equ 0001h
UADDR_ADDR1_POSN                         equ 0001h
UADDR_ADDR1_POSITION                     equ 0001h
UADDR_ADDR1_SIZE                         equ 0001h
UADDR_ADDR1_LENGTH                       equ 0001h
UADDR_ADDR1_MASK                         equ 0002h
UADDR_ADDR2_POSN                         equ 0002h
UADDR_ADDR2_POSITION                     equ 0002h
UADDR_ADDR2_SIZE                         equ 0001h
UADDR_ADDR2_LENGTH                       equ 0001h
UADDR_ADDR2_MASK                         equ 0004h
UADDR_ADDR3_POSN                         equ 0003h
UADDR_ADDR3_POSITION                     equ 0003h
UADDR_ADDR3_SIZE                         equ 0001h
UADDR_ADDR3_LENGTH                       equ 0001h
UADDR_ADDR3_MASK                         equ 0008h
UADDR_ADDR4_POSN                         equ 0004h
UADDR_ADDR4_POSITION                     equ 0004h
UADDR_ADDR4_SIZE                         equ 0001h
UADDR_ADDR4_LENGTH                       equ 0001h
UADDR_ADDR4_MASK                         equ 0010h
UADDR_ADDR5_POSN                         equ 0005h
UADDR_ADDR5_POSITION                     equ 0005h
UADDR_ADDR5_SIZE                         equ 0001h
UADDR_ADDR5_LENGTH                       equ 0001h
UADDR_ADDR5_MASK                         equ 0020h
UADDR_ADDR6_POSN                         equ 0006h
UADDR_ADDR6_POSITION                     equ 0006h
UADDR_ADDR6_SIZE                         equ 0001h
UADDR_ADDR6_LENGTH                       equ 0001h
UADDR_ADDR6_MASK                         equ 0040h

// Register: UCFG
#define UCFG UCFG
UCFG                                     equ 0F39h
// bitfield definitions
UCFG_PPB0_POSN                           equ 0000h
UCFG_PPB0_POSITION                       equ 0000h
UCFG_PPB0_SIZE                           equ 0001h
UCFG_PPB0_LENGTH                         equ 0001h
UCFG_PPB0_MASK                           equ 0001h
UCFG_PPB1_POSN                           equ 0001h
UCFG_PPB1_POSITION                       equ 0001h
UCFG_PPB1_SIZE                           equ 0001h
UCFG_PPB1_LENGTH                         equ 0001h
UCFG_PPB1_MASK                           equ 0002h
UCFG_FSEN_POSN                           equ 0002h
UCFG_FSEN_POSITION                       equ 0002h
UCFG_FSEN_SIZE                           equ 0001h
UCFG_FSEN_LENGTH                         equ 0001h
UCFG_FSEN_MASK                           equ 0004h
UCFG_UTRDIS_POSN                         equ 0003h
UCFG_UTRDIS_POSITION                     equ 0003h
UCFG_UTRDIS_SIZE                         equ 0001h
UCFG_UTRDIS_LENGTH                       equ 0001h
UCFG_UTRDIS_MASK                         equ 0008h
UCFG_UPUEN_POSN                          equ 0004h
UCFG_UPUEN_POSITION                      equ 0004h
UCFG_UPUEN_SIZE                          equ 0001h
UCFG_UPUEN_LENGTH                        equ 0001h
UCFG_UPUEN_MASK                          equ 0010h
UCFG_UOEMON_POSN                         equ 0006h
UCFG_UOEMON_POSITION                     equ 0006h
UCFG_UOEMON_SIZE                         equ 0001h
UCFG_UOEMON_LENGTH                       equ 0001h
UCFG_UOEMON_MASK                         equ 0040h
UCFG_UTEYE_POSN                          equ 0007h
UCFG_UTEYE_POSITION                      equ 0007h
UCFG_UTEYE_SIZE                          equ 0001h
UCFG_UTEYE_LENGTH                        equ 0001h
UCFG_UTEYE_MASK                          equ 0080h
UCFG_UPP0_POSN                           equ 0000h
UCFG_UPP0_POSITION                       equ 0000h
UCFG_UPP0_SIZE                           equ 0001h
UCFG_UPP0_LENGTH                         equ 0001h
UCFG_UPP0_MASK                           equ 0001h
UCFG_UPP1_POSN                           equ 0001h
UCFG_UPP1_POSITION                       equ 0001h
UCFG_UPP1_SIZE                           equ 0001h
UCFG_UPP1_LENGTH                         equ 0001h
UCFG_UPP1_MASK                           equ 0002h

// Register: PADCFG1
#define PADCFG1 PADCFG1
PADCFG1                                  equ 0F3Ch
// bitfield definitions
PADCFG1_PMPTTL_POSN                      equ 0000h
PADCFG1_PMPTTL_POSITION                  equ 0000h
PADCFG1_PMPTTL_SIZE                      equ 0001h
PADCFG1_PMPTTL_LENGTH                    equ 0001h
PADCFG1_PMPTTL_MASK                      equ 0001h
PADCFG1_RTSECSEL0_POSN                   equ 0001h
PADCFG1_RTSECSEL0_POSITION               equ 0001h
PADCFG1_RTSECSEL0_SIZE                   equ 0001h
PADCFG1_RTSECSEL0_LENGTH                 equ 0001h
PADCFG1_RTSECSEL0_MASK                   equ 0002h
PADCFG1_RTSECSEL1_POSN                   equ 0002h
PADCFG1_RTSECSEL1_POSITION               equ 0002h
PADCFG1_RTSECSEL1_SIZE                   equ 0001h
PADCFG1_RTSECSEL1_LENGTH                 equ 0001h
PADCFG1_RTSECSEL1_MASK                   equ 0004h

// Register: REFOCON
#define REFOCON REFOCON
REFOCON                                  equ 0F3Dh
// bitfield definitions
REFOCON_RODIV_POSN                       equ 0000h
REFOCON_RODIV_POSITION                   equ 0000h
REFOCON_RODIV_SIZE                       equ 0004h
REFOCON_RODIV_LENGTH                     equ 0004h
REFOCON_RODIV_MASK                       equ 000Fh
REFOCON_ROSEL_POSN                       equ 0004h
REFOCON_ROSEL_POSITION                   equ 0004h
REFOCON_ROSEL_SIZE                       equ 0001h
REFOCON_ROSEL_LENGTH                     equ 0001h
REFOCON_ROSEL_MASK                       equ 0010h
REFOCON_ROSSLP_POSN                      equ 0005h
REFOCON_ROSSLP_POSITION                  equ 0005h
REFOCON_ROSSLP_SIZE                      equ 0001h
REFOCON_ROSSLP_LENGTH                    equ 0001h
REFOCON_ROSSLP_MASK                      equ 0020h
REFOCON_ROON_POSN                        equ 0007h
REFOCON_ROON_POSITION                    equ 0007h
REFOCON_ROON_SIZE                        equ 0001h
REFOCON_ROON_LENGTH                      equ 0001h
REFOCON_ROON_MASK                        equ 0080h
REFOCON_RODIV0_POSN                      equ 0000h
REFOCON_RODIV0_POSITION                  equ 0000h
REFOCON_RODIV0_SIZE                      equ 0001h
REFOCON_RODIV0_LENGTH                    equ 0001h
REFOCON_RODIV0_MASK                      equ 0001h
REFOCON_RODIV1_POSN                      equ 0001h
REFOCON_RODIV1_POSITION                  equ 0001h
REFOCON_RODIV1_SIZE                      equ 0001h
REFOCON_RODIV1_LENGTH                    equ 0001h
REFOCON_RODIV1_MASK                      equ 0002h
REFOCON_RODIV2_POSN                      equ 0002h
REFOCON_RODIV2_POSITION                  equ 0002h
REFOCON_RODIV2_SIZE                      equ 0001h
REFOCON_RODIV2_LENGTH                    equ 0001h
REFOCON_RODIV2_MASK                      equ 0004h
REFOCON_RODIV3_POSN                      equ 0003h
REFOCON_RODIV3_POSITION                  equ 0003h
REFOCON_RODIV3_SIZE                      equ 0001h
REFOCON_RODIV3_LENGTH                    equ 0001h
REFOCON_RODIV3_MASK                      equ 0008h

// Register: RTCCAL
#define RTCCAL RTCCAL
RTCCAL                                   equ 0F3Eh
// bitfield definitions
RTCCAL_CAL_POSN                          equ 0000h
RTCCAL_CAL_POSITION                      equ 0000h
RTCCAL_CAL_SIZE                          equ 0008h
RTCCAL_CAL_LENGTH                        equ 0008h
RTCCAL_CAL_MASK                          equ 00FFh
RTCCAL_CAL0_POSN                         equ 0000h
RTCCAL_CAL0_POSITION                     equ 0000h
RTCCAL_CAL0_SIZE                         equ 0001h
RTCCAL_CAL0_LENGTH                       equ 0001h
RTCCAL_CAL0_MASK                         equ 0001h
RTCCAL_CAL1_POSN                         equ 0001h
RTCCAL_CAL1_POSITION                     equ 0001h
RTCCAL_CAL1_SIZE                         equ 0001h
RTCCAL_CAL1_LENGTH                       equ 0001h
RTCCAL_CAL1_MASK                         equ 0002h
RTCCAL_CAL2_POSN                         equ 0002h
RTCCAL_CAL2_POSITION                     equ 0002h
RTCCAL_CAL2_SIZE                         equ 0001h
RTCCAL_CAL2_LENGTH                       equ 0001h
RTCCAL_CAL2_MASK                         equ 0004h
RTCCAL_CAL3_POSN                         equ 0003h
RTCCAL_CAL3_POSITION                     equ 0003h
RTCCAL_CAL3_SIZE                         equ 0001h
RTCCAL_CAL3_LENGTH                       equ 0001h
RTCCAL_CAL3_MASK                         equ 0008h
RTCCAL_CAL4_POSN                         equ 0004h
RTCCAL_CAL4_POSITION                     equ 0004h
RTCCAL_CAL4_SIZE                         equ 0001h
RTCCAL_CAL4_LENGTH                       equ 0001h
RTCCAL_CAL4_MASK                         equ 0010h
RTCCAL_CAL5_POSN                         equ 0005h
RTCCAL_CAL5_POSITION                     equ 0005h
RTCCAL_CAL5_SIZE                         equ 0001h
RTCCAL_CAL5_LENGTH                       equ 0001h
RTCCAL_CAL5_MASK                         equ 0020h
RTCCAL_CAL6_POSN                         equ 0006h
RTCCAL_CAL6_POSITION                     equ 0006h
RTCCAL_CAL6_SIZE                         equ 0001h
RTCCAL_CAL6_LENGTH                       equ 0001h
RTCCAL_CAL6_MASK                         equ 0040h
RTCCAL_CAL7_POSN                         equ 0007h
RTCCAL_CAL7_POSITION                     equ 0007h
RTCCAL_CAL7_SIZE                         equ 0001h
RTCCAL_CAL7_LENGTH                       equ 0001h
RTCCAL_CAL7_MASK                         equ 0080h

// Register: RTCCFG
#define RTCCFG RTCCFG
RTCCFG                                   equ 0F3Fh
// bitfield definitions
RTCCFG_RTCPTR0_POSN                      equ 0000h
RTCCFG_RTCPTR0_POSITION                  equ 0000h
RTCCFG_RTCPTR0_SIZE                      equ 0001h
RTCCFG_RTCPTR0_LENGTH                    equ 0001h
RTCCFG_RTCPTR0_MASK                      equ 0001h
RTCCFG_RTCPTR1_POSN                      equ 0001h
RTCCFG_RTCPTR1_POSITION                  equ 0001h
RTCCFG_RTCPTR1_SIZE                      equ 0001h
RTCCFG_RTCPTR1_LENGTH                    equ 0001h
RTCCFG_RTCPTR1_MASK                      equ 0002h
RTCCFG_RTCOE_POSN                        equ 0002h
RTCCFG_RTCOE_POSITION                    equ 0002h
RTCCFG_RTCOE_SIZE                        equ 0001h
RTCCFG_RTCOE_LENGTH                      equ 0001h
RTCCFG_RTCOE_MASK                        equ 0004h
RTCCFG_HALFSEC_POSN                      equ 0003h
RTCCFG_HALFSEC_POSITION                  equ 0003h
RTCCFG_HALFSEC_SIZE                      equ 0001h
RTCCFG_HALFSEC_LENGTH                    equ 0001h
RTCCFG_HALFSEC_MASK                      equ 0008h
RTCCFG_RTCSYNC_POSN                      equ 0004h
RTCCFG_RTCSYNC_POSITION                  equ 0004h
RTCCFG_RTCSYNC_SIZE                      equ 0001h
RTCCFG_RTCSYNC_LENGTH                    equ 0001h
RTCCFG_RTCSYNC_MASK                      equ 0010h
RTCCFG_RTCWREN_POSN                      equ 0005h
RTCCFG_RTCWREN_POSITION                  equ 0005h
RTCCFG_RTCWREN_SIZE                      equ 0001h
RTCCFG_RTCWREN_LENGTH                    equ 0001h
RTCCFG_RTCWREN_MASK                      equ 0020h
RTCCFG_RTCEN_POSN                        equ 0007h
RTCCFG_RTCEN_POSITION                    equ 0007h
RTCCFG_RTCEN_SIZE                        equ 0001h
RTCCFG_RTCEN_LENGTH                      equ 0001h
RTCCFG_RTCEN_MASK                        equ 0080h

// Register: ODCON3
#define ODCON3 ODCON3
ODCON3                                   equ 0F40h
// bitfield definitions
ODCON3_SPI1OD_POSN                       equ 0000h
ODCON3_SPI1OD_POSITION                   equ 0000h
ODCON3_SPI1OD_SIZE                       equ 0001h
ODCON3_SPI1OD_LENGTH                     equ 0001h
ODCON3_SPI1OD_MASK                       equ 0001h
ODCON3_SPI2OD_POSN                       equ 0001h
ODCON3_SPI2OD_POSITION                   equ 0001h
ODCON3_SPI2OD_SIZE                       equ 0001h
ODCON3_SPI2OD_LENGTH                     equ 0001h
ODCON3_SPI2OD_MASK                       equ 0002h

// Register: ODCON2
#define ODCON2 ODCON2
ODCON2                                   equ 0F41h
// bitfield definitions
ODCON2_U1OD_POSN                         equ 0000h
ODCON2_U1OD_POSITION                     equ 0000h
ODCON2_U1OD_SIZE                         equ 0001h
ODCON2_U1OD_LENGTH                       equ 0001h
ODCON2_U1OD_MASK                         equ 0001h
ODCON2_U2OD_POSN                         equ 0001h
ODCON2_U2OD_POSITION                     equ 0001h
ODCON2_U2OD_SIZE                         equ 0001h
ODCON2_U2OD_LENGTH                       equ 0001h
ODCON2_U2OD_MASK                         equ 0002h

// Register: ODCON1
#define ODCON1 ODCON1
ODCON1                                   equ 0F42h
// bitfield definitions
ODCON1_ECCP1OD_POSN                      equ 0000h
ODCON1_ECCP1OD_POSITION                  equ 0000h
ODCON1_ECCP1OD_SIZE                      equ 0001h
ODCON1_ECCP1OD_LENGTH                    equ 0001h
ODCON1_ECCP1OD_MASK                      equ 0001h
ODCON1_ECCP2OD_POSN                      equ 0001h
ODCON1_ECCP2OD_POSITION                  equ 0001h
ODCON1_ECCP2OD_SIZE                      equ 0001h
ODCON1_ECCP2OD_LENGTH                    equ 0001h
ODCON1_ECCP2OD_MASK                      equ 0002h

// Register: ANCON0
#define ANCON0 ANCON0
ANCON0                                   equ 0F48h
// bitfield definitions
ANCON0_PCFG0_POSN                        equ 0000h
ANCON0_PCFG0_POSITION                    equ 0000h
ANCON0_PCFG0_SIZE                        equ 0001h
ANCON0_PCFG0_LENGTH                      equ 0001h
ANCON0_PCFG0_MASK                        equ 0001h
ANCON0_PCFG1_POSN                        equ 0001h
ANCON0_PCFG1_POSITION                    equ 0001h
ANCON0_PCFG1_SIZE                        equ 0001h
ANCON0_PCFG1_LENGTH                      equ 0001h
ANCON0_PCFG1_MASK                        equ 0002h
ANCON0_PCFG2_POSN                        equ 0002h
ANCON0_PCFG2_POSITION                    equ 0002h
ANCON0_PCFG2_SIZE                        equ 0001h
ANCON0_PCFG2_LENGTH                      equ 0001h
ANCON0_PCFG2_MASK                        equ 0004h
ANCON0_PCFG3_POSN                        equ 0003h
ANCON0_PCFG3_POSITION                    equ 0003h
ANCON0_PCFG3_SIZE                        equ 0001h
ANCON0_PCFG3_LENGTH                      equ 0001h
ANCON0_PCFG3_MASK                        equ 0008h
ANCON0_PCFG4_POSN                        equ 0004h
ANCON0_PCFG4_POSITION                    equ 0004h
ANCON0_PCFG4_SIZE                        equ 0001h
ANCON0_PCFG4_LENGTH                      equ 0001h
ANCON0_PCFG4_MASK                        equ 0010h

// Register: ANCON1
#define ANCON1 ANCON1
ANCON1                                   equ 0F49h
// bitfield definitions
ANCON1_PCFG8_POSN                        equ 0000h
ANCON1_PCFG8_POSITION                    equ 0000h
ANCON1_PCFG8_SIZE                        equ 0001h
ANCON1_PCFG8_LENGTH                      equ 0001h
ANCON1_PCFG8_MASK                        equ 0001h
ANCON1_PCFG9_POSN                        equ 0001h
ANCON1_PCFG9_POSITION                    equ 0001h
ANCON1_PCFG9_SIZE                        equ 0001h
ANCON1_PCFG9_LENGTH                      equ 0001h
ANCON1_PCFG9_MASK                        equ 0002h
ANCON1_PCFG10_POSN                       equ 0002h
ANCON1_PCFG10_POSITION                   equ 0002h
ANCON1_PCFG10_SIZE                       equ 0001h
ANCON1_PCFG10_LENGTH                     equ 0001h
ANCON1_PCFG10_MASK                       equ 0004h
ANCON1_PCFG11_POSN                       equ 0003h
ANCON1_PCFG11_POSITION                   equ 0003h
ANCON1_PCFG11_SIZE                       equ 0001h
ANCON1_PCFG11_LENGTH                     equ 0001h
ANCON1_PCFG11_MASK                       equ 0008h
ANCON1_PCFG12_POSN                       equ 0004h
ANCON1_PCFG12_POSITION                   equ 0004h
ANCON1_PCFG12_SIZE                       equ 0001h
ANCON1_PCFG12_LENGTH                     equ 0001h
ANCON1_PCFG12_MASK                       equ 0010h
ANCON1_VBG2EN_POSN                       equ 0006h
ANCON1_VBG2EN_POSITION                   equ 0006h
ANCON1_VBG2EN_SIZE                       equ 0001h
ANCON1_VBG2EN_LENGTH                     equ 0001h
ANCON1_VBG2EN_MASK                       equ 0040h
ANCON1_VBGEN_POSN                        equ 0007h
ANCON1_VBGEN_POSITION                    equ 0007h
ANCON1_VBGEN_SIZE                        equ 0001h
ANCON1_VBGEN_LENGTH                      equ 0001h
ANCON1_VBGEN_MASK                        equ 0080h
ANCON1_PCFG14_POSN                       equ 0006h
ANCON1_PCFG14_POSITION                   equ 0006h
ANCON1_PCFG14_SIZE                       equ 0001h
ANCON1_PCFG14_LENGTH                     equ 0001h
ANCON1_PCFG14_MASK                       equ 0040h
ANCON1_PCFG15_POSN                       equ 0007h
ANCON1_PCFG15_POSITION                   equ 0007h
ANCON1_PCFG15_SIZE                       equ 0001h
ANCON1_PCFG15_LENGTH                     equ 0001h
ANCON1_PCFG15_MASK                       equ 0080h

// Register: DSWAKEL
#define DSWAKEL DSWAKEL
DSWAKEL                                  equ 0F4Ah
// bitfield definitions
DSWAKEL_DSPOR_POSN                       equ 0000h
DSWAKEL_DSPOR_POSITION                   equ 0000h
DSWAKEL_DSPOR_SIZE                       equ 0001h
DSWAKEL_DSPOR_LENGTH                     equ 0001h
DSWAKEL_DSPOR_MASK                       equ 0001h
DSWAKEL_DSMCLR_POSN                      equ 0002h
DSWAKEL_DSMCLR_POSITION                  equ 0002h
DSWAKEL_DSMCLR_SIZE                      equ 0001h
DSWAKEL_DSMCLR_LENGTH                    equ 0001h
DSWAKEL_DSMCLR_MASK                      equ 0004h
DSWAKEL_DSRTC_POSN                       equ 0003h
DSWAKEL_DSRTC_POSITION                   equ 0003h
DSWAKEL_DSRTC_SIZE                       equ 0001h
DSWAKEL_DSRTC_LENGTH                     equ 0001h
DSWAKEL_DSRTC_MASK                       equ 0008h
DSWAKEL_DSWDT_POSN                       equ 0004h
DSWAKEL_DSWDT_POSITION                   equ 0004h
DSWAKEL_DSWDT_SIZE                       equ 0001h
DSWAKEL_DSWDT_LENGTH                     equ 0001h
DSWAKEL_DSWDT_MASK                       equ 0010h
DSWAKEL_DSULP_POSN                       equ 0005h
DSWAKEL_DSULP_POSITION                   equ 0005h
DSWAKEL_DSULP_SIZE                       equ 0001h
DSWAKEL_DSULP_LENGTH                     equ 0001h
DSWAKEL_DSULP_MASK                       equ 0020h
DSWAKEL_DSFLT_POSN                       equ 0007h
DSWAKEL_DSFLT_POSITION                   equ 0007h
DSWAKEL_DSFLT_SIZE                       equ 0001h
DSWAKEL_DSFLT_LENGTH                     equ 0001h
DSWAKEL_DSFLT_MASK                       equ 0080h

// Register: DSWAKEH
#define DSWAKEH DSWAKEH
DSWAKEH                                  equ 0F4Bh
// bitfield definitions
DSWAKEH_DSINT0_POSN                      equ 0000h
DSWAKEH_DSINT0_POSITION                  equ 0000h
DSWAKEH_DSINT0_SIZE                      equ 0001h
DSWAKEH_DSINT0_LENGTH                    equ 0001h
DSWAKEH_DSINT0_MASK                      equ 0001h

// Register: DSCONL
#define DSCONL DSCONL
DSCONL                                   equ 0F4Ch
// bitfield definitions
DSCONL_RELEASE_POSN                      equ 0000h
DSCONL_RELEASE_POSITION                  equ 0000h
DSCONL_RELEASE_SIZE                      equ 0001h
DSCONL_RELEASE_LENGTH                    equ 0001h
DSCONL_RELEASE_MASK                      equ 0001h
DSCONL_DSBOR_POSN                        equ 0001h
DSCONL_DSBOR_POSITION                    equ 0001h
DSCONL_DSBOR_SIZE                        equ 0001h
DSCONL_DSBOR_LENGTH                      equ 0001h
DSCONL_DSBOR_MASK                        equ 0002h
DSCONL_ULPWDIS_POSN                      equ 0002h
DSCONL_ULPWDIS_POSITION                  equ 0002h
DSCONL_ULPWDIS_SIZE                      equ 0001h
DSCONL_ULPWDIS_LENGTH                    equ 0001h
DSCONL_ULPWDIS_MASK                      equ 0004h

// Register: DSCONH
#define DSCONH DSCONH
DSCONH                                   equ 0F4Dh
// bitfield definitions
DSCONH_RTCWDIS_POSN                      equ 0000h
DSCONH_RTCWDIS_POSITION                  equ 0000h
DSCONH_RTCWDIS_SIZE                      equ 0001h
DSCONH_RTCWDIS_LENGTH                    equ 0001h
DSCONH_RTCWDIS_MASK                      equ 0001h
DSCONH_DSULPEN_POSN                      equ 0001h
DSCONH_DSULPEN_POSITION                  equ 0001h
DSCONH_DSULPEN_SIZE                      equ 0001h
DSCONH_DSULPEN_LENGTH                    equ 0001h
DSCONH_DSULPEN_MASK                      equ 0002h
DSCONH_DSEN_POSN                         equ 0007h
DSCONH_DSEN_POSITION                     equ 0007h
DSCONH_DSEN_SIZE                         equ 0001h
DSCONH_DSEN_LENGTH                       equ 0001h
DSCONH_DSEN_MASK                         equ 0080h

// Register: DSGPR0
#define DSGPR0 DSGPR0
DSGPR0                                   equ 0F4Eh
// bitfield definitions
DSGPR0_DSGPR0_POSN                       equ 0000h
DSGPR0_DSGPR0_POSITION                   equ 0000h
DSGPR0_DSGPR0_SIZE                       equ 0008h
DSGPR0_DSGPR0_LENGTH                     equ 0008h
DSGPR0_DSGPR0_MASK                       equ 00FFh

// Register: DSGPR1
#define DSGPR1 DSGPR1
DSGPR1                                   equ 0F4Fh
// bitfield definitions
DSGPR1_DSGPR1_POSN                       equ 0000h
DSGPR1_DSGPR1_POSITION                   equ 0000h
DSGPR1_DSGPR1_SIZE                       equ 0008h
DSGPR1_DSGPR1_LENGTH                     equ 0008h
DSGPR1_DSGPR1_MASK                       equ 00FFh

// Register: TCLKCON
#define TCLKCON TCLKCON
TCLKCON                                  equ 0F52h
// bitfield definitions
TCLKCON_T3CCP1_POSN                      equ 0000h
TCLKCON_T3CCP1_POSITION                  equ 0000h
TCLKCON_T3CCP1_SIZE                      equ 0001h
TCLKCON_T3CCP1_LENGTH                    equ 0001h
TCLKCON_T3CCP1_MASK                      equ 0001h
TCLKCON_T3CCP2_POSN                      equ 0001h
TCLKCON_T3CCP2_POSITION                  equ 0001h
TCLKCON_T3CCP2_SIZE                      equ 0001h
TCLKCON_T3CCP2_LENGTH                    equ 0001h
TCLKCON_T3CCP2_MASK                      equ 0002h
TCLKCON_T1RUN_POSN                       equ 0004h
TCLKCON_T1RUN_POSITION                   equ 0004h
TCLKCON_T1RUN_SIZE                       equ 0001h
TCLKCON_T1RUN_LENGTH                     equ 0001h
TCLKCON_T1RUN_MASK                       equ 0010h

// Register: CVRCON
#define CVRCON CVRCON
CVRCON                                   equ 0F53h
// bitfield definitions
CVRCON_CVR_POSN                          equ 0000h
CVRCON_CVR_POSITION                      equ 0000h
CVRCON_CVR_SIZE                          equ 0004h
CVRCON_CVR_LENGTH                        equ 0004h
CVRCON_CVR_MASK                          equ 000Fh
CVRCON_CVRSS_POSN                        equ 0004h
CVRCON_CVRSS_POSITION                    equ 0004h
CVRCON_CVRSS_SIZE                        equ 0001h
CVRCON_CVRSS_LENGTH                      equ 0001h
CVRCON_CVRSS_MASK                        equ 0010h
CVRCON_CVRR_POSN                         equ 0005h
CVRCON_CVRR_POSITION                     equ 0005h
CVRCON_CVRR_SIZE                         equ 0001h
CVRCON_CVRR_LENGTH                       equ 0001h
CVRCON_CVRR_MASK                         equ 0020h
CVRCON_CVROE_POSN                        equ 0006h
CVRCON_CVROE_POSITION                    equ 0006h
CVRCON_CVROE_SIZE                        equ 0001h
CVRCON_CVROE_LENGTH                      equ 0001h
CVRCON_CVROE_MASK                        equ 0040h
CVRCON_CVREN_POSN                        equ 0007h
CVRCON_CVREN_POSITION                    equ 0007h
CVRCON_CVREN_SIZE                        equ 0001h
CVRCON_CVREN_LENGTH                      equ 0001h
CVRCON_CVREN_MASK                        equ 0080h
CVRCON_CVR0_POSN                         equ 0000h
CVRCON_CVR0_POSITION                     equ 0000h
CVRCON_CVR0_SIZE                         equ 0001h
CVRCON_CVR0_LENGTH                       equ 0001h
CVRCON_CVR0_MASK                         equ 0001h
CVRCON_CVR1_POSN                         equ 0001h
CVRCON_CVR1_POSITION                     equ 0001h
CVRCON_CVR1_SIZE                         equ 0001h
CVRCON_CVR1_LENGTH                       equ 0001h
CVRCON_CVR1_MASK                         equ 0002h
CVRCON_CVR2_POSN                         equ 0002h
CVRCON_CVR2_POSITION                     equ 0002h
CVRCON_CVR2_SIZE                         equ 0001h
CVRCON_CVR2_LENGTH                       equ 0001h
CVRCON_CVR2_MASK                         equ 0004h
CVRCON_CVR3_POSN                         equ 0003h
CVRCON_CVR3_POSITION                     equ 0003h
CVRCON_CVR3_SIZE                         equ 0001h
CVRCON_CVR3_LENGTH                       equ 0001h
CVRCON_CVR3_MASK                         equ 0008h
CVRCON_CVROEN_POSN                       equ 0006h
CVRCON_CVROEN_POSITION                   equ 0006h
CVRCON_CVROEN_SIZE                       equ 0001h
CVRCON_CVROEN_LENGTH                     equ 0001h
CVRCON_CVROEN_MASK                       equ 0040h

// Register: UFRM
#define UFRM UFRM
UFRM                                     equ 0F60h

// Register: UFRML
#define UFRML UFRML
UFRML                                    equ 0F60h
// bitfield definitions
UFRML_FRM_POSN                           equ 0000h
UFRML_FRM_POSITION                       equ 0000h
UFRML_FRM_SIZE                           equ 0008h
UFRML_FRM_LENGTH                         equ 0008h
UFRML_FRM_MASK                           equ 00FFh
UFRML_FRM0_POSN                          equ 0000h
UFRML_FRM0_POSITION                      equ 0000h
UFRML_FRM0_SIZE                          equ 0001h
UFRML_FRM0_LENGTH                        equ 0001h
UFRML_FRM0_MASK                          equ 0001h
UFRML_FRM1_POSN                          equ 0001h
UFRML_FRM1_POSITION                      equ 0001h
UFRML_FRM1_SIZE                          equ 0001h
UFRML_FRM1_LENGTH                        equ 0001h
UFRML_FRM1_MASK                          equ 0002h
UFRML_FRM2_POSN                          equ 0002h
UFRML_FRM2_POSITION                      equ 0002h
UFRML_FRM2_SIZE                          equ 0001h
UFRML_FRM2_LENGTH                        equ 0001h
UFRML_FRM2_MASK                          equ 0004h
UFRML_FRM3_POSN                          equ 0003h
UFRML_FRM3_POSITION                      equ 0003h
UFRML_FRM3_SIZE                          equ 0001h
UFRML_FRM3_LENGTH                        equ 0001h
UFRML_FRM3_MASK                          equ 0008h
UFRML_FRM4_POSN                          equ 0004h
UFRML_FRM4_POSITION                      equ 0004h
UFRML_FRM4_SIZE                          equ 0001h
UFRML_FRM4_LENGTH                        equ 0001h
UFRML_FRM4_MASK                          equ 0010h
UFRML_FRM5_POSN                          equ 0005h
UFRML_FRM5_POSITION                      equ 0005h
UFRML_FRM5_SIZE                          equ 0001h
UFRML_FRM5_LENGTH                        equ 0001h
UFRML_FRM5_MASK                          equ 0020h
UFRML_FRM6_POSN                          equ 0006h
UFRML_FRM6_POSITION                      equ 0006h
UFRML_FRM6_SIZE                          equ 0001h
UFRML_FRM6_LENGTH                        equ 0001h
UFRML_FRM6_MASK                          equ 0040h
UFRML_FRM7_POSN                          equ 0007h
UFRML_FRM7_POSITION                      equ 0007h
UFRML_FRM7_SIZE                          equ 0001h
UFRML_FRM7_LENGTH                        equ 0001h
UFRML_FRM7_MASK                          equ 0080h
UFRML_FRML_POSN                          equ 0000h
UFRML_FRML_POSITION                      equ 0000h
UFRML_FRML_SIZE                          equ 0008h
UFRML_FRML_LENGTH                        equ 0008h
UFRML_FRML_MASK                          equ 00FFh

// Register: UFRMH
#define UFRMH UFRMH
UFRMH                                    equ 0F61h
// bitfield definitions
UFRMH_FRM_POSN                           equ 0000h
UFRMH_FRM_POSITION                       equ 0000h
UFRMH_FRM_SIZE                           equ 0003h
UFRMH_FRM_LENGTH                         equ 0003h
UFRMH_FRM_MASK                           equ 0007h
UFRMH_FRM8_POSN                          equ 0000h
UFRMH_FRM8_POSITION                      equ 0000h
UFRMH_FRM8_SIZE                          equ 0001h
UFRMH_FRM8_LENGTH                        equ 0001h
UFRMH_FRM8_MASK                          equ 0001h
UFRMH_FRM9_POSN                          equ 0001h
UFRMH_FRM9_POSITION                      equ 0001h
UFRMH_FRM9_SIZE                          equ 0001h
UFRMH_FRM9_LENGTH                        equ 0001h
UFRMH_FRM9_MASK                          equ 0002h
UFRMH_FRM10_POSN                         equ 0002h
UFRMH_FRM10_POSITION                     equ 0002h
UFRMH_FRM10_SIZE                         equ 0001h
UFRMH_FRM10_LENGTH                       equ 0001h
UFRMH_FRM10_MASK                         equ 0004h

// Register: UIR
#define UIR UIR
UIR                                      equ 0F62h
// bitfield definitions
UIR_URSTIF_POSN                          equ 0000h
UIR_URSTIF_POSITION                      equ 0000h
UIR_URSTIF_SIZE                          equ 0001h
UIR_URSTIF_LENGTH                        equ 0001h
UIR_URSTIF_MASK                          equ 0001h
UIR_UERRIF_POSN                          equ 0001h
UIR_UERRIF_POSITION                      equ 0001h
UIR_UERRIF_SIZE                          equ 0001h
UIR_UERRIF_LENGTH                        equ 0001h
UIR_UERRIF_MASK                          equ 0002h
UIR_ACTVIF_POSN                          equ 0002h
UIR_ACTVIF_POSITION                      equ 0002h
UIR_ACTVIF_SIZE                          equ 0001h
UIR_ACTVIF_LENGTH                        equ 0001h
UIR_ACTVIF_MASK                          equ 0004h
UIR_TRNIF_POSN                           equ 0003h
UIR_TRNIF_POSITION                       equ 0003h
UIR_TRNIF_SIZE                           equ 0001h
UIR_TRNIF_LENGTH                         equ 0001h
UIR_TRNIF_MASK                           equ 0008h
UIR_IDLEIF_POSN                          equ 0004h
UIR_IDLEIF_POSITION                      equ 0004h
UIR_IDLEIF_SIZE                          equ 0001h
UIR_IDLEIF_LENGTH                        equ 0001h
UIR_IDLEIF_MASK                          equ 0010h
UIR_STALLIF_POSN                         equ 0005h
UIR_STALLIF_POSITION                     equ 0005h
UIR_STALLIF_SIZE                         equ 0001h
UIR_STALLIF_LENGTH                       equ 0001h
UIR_STALLIF_MASK                         equ 0020h
UIR_SOFIF_POSN                           equ 0006h
UIR_SOFIF_POSITION                       equ 0006h
UIR_SOFIF_SIZE                           equ 0001h
UIR_SOFIF_LENGTH                         equ 0001h
UIR_SOFIF_MASK                           equ 0040h

// Register: UEIR
#define UEIR UEIR
UEIR                                     equ 0F63h
// bitfield definitions
UEIR_PIDEF_POSN                          equ 0000h
UEIR_PIDEF_POSITION                      equ 0000h
UEIR_PIDEF_SIZE                          equ 0001h
UEIR_PIDEF_LENGTH                        equ 0001h
UEIR_PIDEF_MASK                          equ 0001h
UEIR_CRC5EF_POSN                         equ 0001h
UEIR_CRC5EF_POSITION                     equ 0001h
UEIR_CRC5EF_SIZE                         equ 0001h
UEIR_CRC5EF_LENGTH                       equ 0001h
UEIR_CRC5EF_MASK                         equ 0002h
UEIR_CRC16EF_POSN                        equ 0002h
UEIR_CRC16EF_POSITION                    equ 0002h
UEIR_CRC16EF_SIZE                        equ 0001h
UEIR_CRC16EF_LENGTH                      equ 0001h
UEIR_CRC16EF_MASK                        equ 0004h
UEIR_DFN8EF_POSN                         equ 0003h
UEIR_DFN8EF_POSITION                     equ 0003h
UEIR_DFN8EF_SIZE                         equ 0001h
UEIR_DFN8EF_LENGTH                       equ 0001h
UEIR_DFN8EF_MASK                         equ 0008h
UEIR_BTOEF_POSN                          equ 0004h
UEIR_BTOEF_POSITION                      equ 0004h
UEIR_BTOEF_SIZE                          equ 0001h
UEIR_BTOEF_LENGTH                        equ 0001h
UEIR_BTOEF_MASK                          equ 0010h
UEIR_BTSEF_POSN                          equ 0007h
UEIR_BTSEF_POSITION                      equ 0007h
UEIR_BTSEF_SIZE                          equ 0001h
UEIR_BTSEF_LENGTH                        equ 0001h
UEIR_BTSEF_MASK                          equ 0080h

// Register: USTAT
#define USTAT USTAT
USTAT                                    equ 0F64h
// bitfield definitions
USTAT_PPBI_POSN                          equ 0001h
USTAT_PPBI_POSITION                      equ 0001h
USTAT_PPBI_SIZE                          equ 0001h
USTAT_PPBI_LENGTH                        equ 0001h
USTAT_PPBI_MASK                          equ 0002h
USTAT_DIR_POSN                           equ 0002h
USTAT_DIR_POSITION                       equ 0002h
USTAT_DIR_SIZE                           equ 0001h
USTAT_DIR_LENGTH                         equ 0001h
USTAT_DIR_MASK                           equ 0004h
USTAT_ENDP_POSN                          equ 0003h
USTAT_ENDP_POSITION                      equ 0003h
USTAT_ENDP_SIZE                          equ 0004h
USTAT_ENDP_LENGTH                        equ 0004h
USTAT_ENDP_MASK                          equ 0078h
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
USTAT_ENDP2_POSN                         equ 0005h
USTAT_ENDP2_POSITION                     equ 0005h
USTAT_ENDP2_SIZE                         equ 0001h
USTAT_ENDP2_LENGTH                       equ 0001h
USTAT_ENDP2_MASK                         equ 0020h
USTAT_ENDP3_POSN                         equ 0006h
USTAT_ENDP3_POSITION                     equ 0006h
USTAT_ENDP3_SIZE                         equ 0001h
USTAT_ENDP3_LENGTH                       equ 0001h
USTAT_ENDP3_MASK                         equ 0040h

// Register: UCON
#define UCON UCON
UCON                                     equ 0F65h
// bitfield definitions
UCON_SUSPND_POSN                         equ 0001h
UCON_SUSPND_POSITION                     equ 0001h
UCON_SUSPND_SIZE                         equ 0001h
UCON_SUSPND_LENGTH                       equ 0001h
UCON_SUSPND_MASK                         equ 0002h
UCON_RESUME_POSN                         equ 0002h
UCON_RESUME_POSITION                     equ 0002h
UCON_RESUME_SIZE                         equ 0001h
UCON_RESUME_LENGTH                       equ 0001h
UCON_RESUME_MASK                         equ 0004h
UCON_USBEN_POSN                          equ 0003h
UCON_USBEN_POSITION                      equ 0003h
UCON_USBEN_SIZE                          equ 0001h
UCON_USBEN_LENGTH                        equ 0001h
UCON_USBEN_MASK                          equ 0008h
UCON_PKTDIS_POSN                         equ 0004h
UCON_PKTDIS_POSITION                     equ 0004h
UCON_PKTDIS_SIZE                         equ 0001h
UCON_PKTDIS_LENGTH                       equ 0001h
UCON_PKTDIS_MASK                         equ 0010h
UCON_SE0_POSN                            equ 0005h
UCON_SE0_POSITION                        equ 0005h
UCON_SE0_SIZE                            equ 0001h
UCON_SE0_LENGTH                          equ 0001h
UCON_SE0_MASK                            equ 0020h
UCON_PPBRST_POSN                         equ 0006h
UCON_PPBRST_POSITION                     equ 0006h
UCON_PPBRST_SIZE                         equ 0001h
UCON_PPBRST_LENGTH                       equ 0001h
UCON_PPBRST_MASK                         equ 0040h

// Register: DMABCH
#define DMABCH DMABCH
DMABCH                                   equ 0F66h
// bitfield definitions
DMABCH_DMACNTHB_POSN                     equ 0000h
DMABCH_DMACNTHB_POSITION                 equ 0000h
DMABCH_DMACNTHB_SIZE                     equ 0002h
DMABCH_DMACNTHB_LENGTH                   equ 0002h
DMABCH_DMACNTHB_MASK                     equ 0003h

// Register: DMABCL
#define DMABCL DMABCL
DMABCL                                   equ 0F67h
// bitfield definitions
DMABCL_DMACNTLB_POSN                     equ 0000h
DMABCL_DMACNTLB_POSITION                 equ 0000h
DMABCL_DMACNTLB_SIZE                     equ 0008h
DMABCL_DMACNTLB_LENGTH                   equ 0008h
DMABCL_DMACNTLB_MASK                     equ 00FFh

// Register: RXADDRH
#define RXADDRH RXADDRH
RXADDRH                                  equ 0F68h
// bitfield definitions
RXADDRH_DMARCPTRHB_POSN                  equ 0000h
RXADDRH_DMARCPTRHB_POSITION              equ 0000h
RXADDRH_DMARCPTRHB_SIZE                  equ 0004h
RXADDRH_DMARCPTRHB_LENGTH                equ 0004h
RXADDRH_DMARCPTRHB_MASK                  equ 000Fh

// Register: RXADDRL
#define RXADDRL RXADDRL
RXADDRL                                  equ 0F69h
// bitfield definitions
RXADDRL_DMARCVPTRLB_POSN                 equ 0000h
RXADDRL_DMARCVPTRLB_POSITION             equ 0000h
RXADDRL_DMARCVPTRLB_SIZE                 equ 0008h
RXADDRL_DMARCVPTRLB_LENGTH               equ 0008h
RXADDRL_DMARCVPTRLB_MASK                 equ 00FFh

// Register: TXADDRH
#define TXADDRH TXADDRH
TXADDRH                                  equ 0F6Ah
// bitfield definitions
TXADDRH_DMATXPTRHB_POSN                  equ 0000h
TXADDRH_DMATXPTRHB_POSITION              equ 0000h
TXADDRH_DMATXPTRHB_SIZE                  equ 0004h
TXADDRH_DMATXPTRHB_LENGTH                equ 0004h
TXADDRH_DMATXPTRHB_MASK                  equ 000Fh

// Register: TXADDRL
#define TXADDRL TXADDRL
TXADDRL                                  equ 0F6Bh
// bitfield definitions
TXADDRL_DMATXPTRLB_POSN                  equ 0000h
TXADDRL_DMATXPTRLB_POSITION              equ 0000h
TXADDRL_DMATXPTRLB_SIZE                  equ 0008h
TXADDRL_DMATXPTRLB_LENGTH                equ 0008h
TXADDRL_DMATXPTRLB_MASK                  equ 00FFh

// Register: CMSTAT
#define CMSTAT CMSTAT
CMSTAT                                   equ 0F70h
// bitfield definitions
CMSTAT_COUT1_POSN                        equ 0000h
CMSTAT_COUT1_POSITION                    equ 0000h
CMSTAT_COUT1_SIZE                        equ 0001h
CMSTAT_COUT1_LENGTH                      equ 0001h
CMSTAT_COUT1_MASK                        equ 0001h
CMSTAT_COUT2_POSN                        equ 0001h
CMSTAT_COUT2_POSITION                    equ 0001h
CMSTAT_COUT2_SIZE                        equ 0001h
CMSTAT_COUT2_LENGTH                      equ 0001h
CMSTAT_COUT2_MASK                        equ 0002h

// Register: SSP2CON2
#define SSP2CON2 SSP2CON2
SSP2CON2                                 equ 0F71h
// bitfield definitions
SSP2CON2_SEN_POSN                        equ 0000h
SSP2CON2_SEN_POSITION                    equ 0000h
SSP2CON2_SEN_SIZE                        equ 0001h
SSP2CON2_SEN_LENGTH                      equ 0001h
SSP2CON2_SEN_MASK                        equ 0001h
SSP2CON2_RSEN_POSN                       equ 0001h
SSP2CON2_RSEN_POSITION                   equ 0001h
SSP2CON2_RSEN_SIZE                       equ 0001h
SSP2CON2_RSEN_LENGTH                     equ 0001h
SSP2CON2_RSEN_MASK                       equ 0002h
SSP2CON2_PEN_POSN                        equ 0002h
SSP2CON2_PEN_POSITION                    equ 0002h
SSP2CON2_PEN_SIZE                        equ 0001h
SSP2CON2_PEN_LENGTH                      equ 0001h
SSP2CON2_PEN_MASK                        equ 0004h
SSP2CON2_RCEN_POSN                       equ 0003h
SSP2CON2_RCEN_POSITION                   equ 0003h
SSP2CON2_RCEN_SIZE                       equ 0001h
SSP2CON2_RCEN_LENGTH                     equ 0001h
SSP2CON2_RCEN_MASK                       equ 0008h
SSP2CON2_ACKEN_POSN                      equ 0004h
SSP2CON2_ACKEN_POSITION                  equ 0004h
SSP2CON2_ACKEN_SIZE                      equ 0001h
SSP2CON2_ACKEN_LENGTH                    equ 0001h
SSP2CON2_ACKEN_MASK                      equ 0010h
SSP2CON2_ACKDT_POSN                      equ 0005h
SSP2CON2_ACKDT_POSITION                  equ 0005h
SSP2CON2_ACKDT_SIZE                      equ 0001h
SSP2CON2_ACKDT_LENGTH                    equ 0001h
SSP2CON2_ACKDT_MASK                      equ 0020h
SSP2CON2_ACKSTAT_POSN                    equ 0006h
SSP2CON2_ACKSTAT_POSITION                equ 0006h
SSP2CON2_ACKSTAT_SIZE                    equ 0001h
SSP2CON2_ACKSTAT_LENGTH                  equ 0001h
SSP2CON2_ACKSTAT_MASK                    equ 0040h
SSP2CON2_GCEN_POSN                       equ 0007h
SSP2CON2_GCEN_POSITION                   equ 0007h
SSP2CON2_GCEN_SIZE                       equ 0001h
SSP2CON2_GCEN_LENGTH                     equ 0001h
SSP2CON2_GCEN_MASK                       equ 0080h
SSP2CON2_ADMSK1_POSN                     equ 0001h
SSP2CON2_ADMSK1_POSITION                 equ 0001h
SSP2CON2_ADMSK1_SIZE                     equ 0001h
SSP2CON2_ADMSK1_LENGTH                   equ 0001h
SSP2CON2_ADMSK1_MASK                     equ 0002h
SSP2CON2_ADMSK2_POSN                     equ 0002h
SSP2CON2_ADMSK2_POSITION                 equ 0002h
SSP2CON2_ADMSK2_SIZE                     equ 0001h
SSP2CON2_ADMSK2_LENGTH                   equ 0001h
SSP2CON2_ADMSK2_MASK                     equ 0004h
SSP2CON2_ADMSK3_POSN                     equ 0003h
SSP2CON2_ADMSK3_POSITION                 equ 0003h
SSP2CON2_ADMSK3_SIZE                     equ 0001h
SSP2CON2_ADMSK3_LENGTH                   equ 0001h
SSP2CON2_ADMSK3_MASK                     equ 0008h
SSP2CON2_ADMSK4_POSN                     equ 0004h
SSP2CON2_ADMSK4_POSITION                 equ 0004h
SSP2CON2_ADMSK4_SIZE                     equ 0001h
SSP2CON2_ADMSK4_LENGTH                   equ 0001h
SSP2CON2_ADMSK4_MASK                     equ 0010h
SSP2CON2_ADMSK5_POSN                     equ 0005h
SSP2CON2_ADMSK5_POSITION                 equ 0005h
SSP2CON2_ADMSK5_SIZE                     equ 0001h
SSP2CON2_ADMSK5_LENGTH                   equ 0001h
SSP2CON2_ADMSK5_MASK                     equ 0020h
SSP2CON2_SEN2_POSN                       equ 0000h
SSP2CON2_SEN2_POSITION                   equ 0000h
SSP2CON2_SEN2_SIZE                       equ 0001h
SSP2CON2_SEN2_LENGTH                     equ 0001h
SSP2CON2_SEN2_MASK                       equ 0001h
SSP2CON2_ADMSK12_POSN                    equ 0001h
SSP2CON2_ADMSK12_POSITION                equ 0001h
SSP2CON2_ADMSK12_SIZE                    equ 0001h
SSP2CON2_ADMSK12_LENGTH                  equ 0001h
SSP2CON2_ADMSK12_MASK                    equ 0002h
SSP2CON2_ADMSK22_POSN                    equ 0002h
SSP2CON2_ADMSK22_POSITION                equ 0002h
SSP2CON2_ADMSK22_SIZE                    equ 0001h
SSP2CON2_ADMSK22_LENGTH                  equ 0001h
SSP2CON2_ADMSK22_MASK                    equ 0004h
SSP2CON2_ADMSK32_POSN                    equ 0003h
SSP2CON2_ADMSK32_POSITION                equ 0003h
SSP2CON2_ADMSK32_SIZE                    equ 0001h
SSP2CON2_ADMSK32_LENGTH                  equ 0001h
SSP2CON2_ADMSK32_MASK                    equ 0008h
SSP2CON2_ACKEN2_POSN                     equ 0004h
SSP2CON2_ACKEN2_POSITION                 equ 0004h
SSP2CON2_ACKEN2_SIZE                     equ 0001h
SSP2CON2_ACKEN2_LENGTH                   equ 0001h
SSP2CON2_ACKEN2_MASK                     equ 0010h
SSP2CON2_ACKDT2_POSN                     equ 0005h
SSP2CON2_ACKDT2_POSITION                 equ 0005h
SSP2CON2_ACKDT2_SIZE                     equ 0001h
SSP2CON2_ACKDT2_LENGTH                   equ 0001h
SSP2CON2_ACKDT2_MASK                     equ 0020h
SSP2CON2_ACKSTAT2_POSN                   equ 0006h
SSP2CON2_ACKSTAT2_POSITION               equ 0006h
SSP2CON2_ACKSTAT2_SIZE                   equ 0001h
SSP2CON2_ACKSTAT2_LENGTH                 equ 0001h
SSP2CON2_ACKSTAT2_MASK                   equ 0040h
SSP2CON2_GCEN2_POSN                      equ 0007h
SSP2CON2_GCEN2_POSITION                  equ 0007h
SSP2CON2_GCEN2_SIZE                      equ 0001h
SSP2CON2_GCEN2_LENGTH                    equ 0001h
SSP2CON2_GCEN2_MASK                      equ 0080h
SSP2CON2_RSEN2_POSN                      equ 0001h
SSP2CON2_RSEN2_POSITION                  equ 0001h
SSP2CON2_RSEN2_SIZE                      equ 0001h
SSP2CON2_RSEN2_LENGTH                    equ 0001h
SSP2CON2_RSEN2_MASK                      equ 0002h
SSP2CON2_PEN2_POSN                       equ 0002h
SSP2CON2_PEN2_POSITION                   equ 0002h
SSP2CON2_PEN2_SIZE                       equ 0001h
SSP2CON2_PEN2_LENGTH                     equ 0001h
SSP2CON2_PEN2_MASK                       equ 0004h
SSP2CON2_RCEN2_POSN                      equ 0003h
SSP2CON2_RCEN2_POSITION                  equ 0003h
SSP2CON2_RCEN2_SIZE                      equ 0001h
SSP2CON2_RCEN2_LENGTH                    equ 0001h
SSP2CON2_RCEN2_MASK                      equ 0008h
SSP2CON2_ADMSK42_POSN                    equ 0004h
SSP2CON2_ADMSK42_POSITION                equ 0004h
SSP2CON2_ADMSK42_SIZE                    equ 0001h
SSP2CON2_ADMSK42_LENGTH                  equ 0001h
SSP2CON2_ADMSK42_MASK                    equ 0010h
SSP2CON2_ADMSK52_POSN                    equ 0005h
SSP2CON2_ADMSK52_POSITION                equ 0005h
SSP2CON2_ADMSK52_SIZE                    equ 0001h
SSP2CON2_ADMSK52_LENGTH                  equ 0001h
SSP2CON2_ADMSK52_MASK                    equ 0020h

// Register: SSP2CON1
#define SSP2CON1 SSP2CON1
SSP2CON1                                 equ 0F72h
// bitfield definitions
SSP2CON1_SSPM_POSN                       equ 0000h
SSP2CON1_SSPM_POSITION                   equ 0000h
SSP2CON1_SSPM_SIZE                       equ 0004h
SSP2CON1_SSPM_LENGTH                     equ 0004h
SSP2CON1_SSPM_MASK                       equ 000Fh
SSP2CON1_CKP_POSN                        equ 0004h
SSP2CON1_CKP_POSITION                    equ 0004h
SSP2CON1_CKP_SIZE                        equ 0001h
SSP2CON1_CKP_LENGTH                      equ 0001h
SSP2CON1_CKP_MASK                        equ 0010h
SSP2CON1_SSPEN_POSN                      equ 0005h
SSP2CON1_SSPEN_POSITION                  equ 0005h
SSP2CON1_SSPEN_SIZE                      equ 0001h
SSP2CON1_SSPEN_LENGTH                    equ 0001h
SSP2CON1_SSPEN_MASK                      equ 0020h
SSP2CON1_SSPOV_POSN                      equ 0006h
SSP2CON1_SSPOV_POSITION                  equ 0006h
SSP2CON1_SSPOV_SIZE                      equ 0001h
SSP2CON1_SSPOV_LENGTH                    equ 0001h
SSP2CON1_SSPOV_MASK                      equ 0040h
SSP2CON1_WCOL_POSN                       equ 0007h
SSP2CON1_WCOL_POSITION                   equ 0007h
SSP2CON1_WCOL_SIZE                       equ 0001h
SSP2CON1_WCOL_LENGTH                     equ 0001h
SSP2CON1_WCOL_MASK                       equ 0080h
SSP2CON1_SSPM0_POSN                      equ 0000h
SSP2CON1_SSPM0_POSITION                  equ 0000h
SSP2CON1_SSPM0_SIZE                      equ 0001h
SSP2CON1_SSPM0_LENGTH                    equ 0001h
SSP2CON1_SSPM0_MASK                      equ 0001h
SSP2CON1_SSPM1_POSN                      equ 0001h
SSP2CON1_SSPM1_POSITION                  equ 0001h
SSP2CON1_SSPM1_SIZE                      equ 0001h
SSP2CON1_SSPM1_LENGTH                    equ 0001h
SSP2CON1_SSPM1_MASK                      equ 0002h
SSP2CON1_SSPM2_POSN                      equ 0002h
SSP2CON1_SSPM2_POSITION                  equ 0002h
SSP2CON1_SSPM2_SIZE                      equ 0001h
SSP2CON1_SSPM2_LENGTH                    equ 0001h
SSP2CON1_SSPM2_MASK                      equ 0004h
SSP2CON1_SSPM3_POSN                      equ 0003h
SSP2CON1_SSPM3_POSITION                  equ 0003h
SSP2CON1_SSPM3_SIZE                      equ 0001h
SSP2CON1_SSPM3_LENGTH                    equ 0001h
SSP2CON1_SSPM3_MASK                      equ 0008h
SSP2CON1_SSPM02_POSN                     equ 0000h
SSP2CON1_SSPM02_POSITION                 equ 0000h
SSP2CON1_SSPM02_SIZE                     equ 0001h
SSP2CON1_SSPM02_LENGTH                   equ 0001h
SSP2CON1_SSPM02_MASK                     equ 0001h
SSP2CON1_SSPM12_POSN                     equ 0001h
SSP2CON1_SSPM12_POSITION                 equ 0001h
SSP2CON1_SSPM12_SIZE                     equ 0001h
SSP2CON1_SSPM12_LENGTH                   equ 0001h
SSP2CON1_SSPM12_MASK                     equ 0002h
SSP2CON1_SSPM22_POSN                     equ 0002h
SSP2CON1_SSPM22_POSITION                 equ 0002h
SSP2CON1_SSPM22_SIZE                     equ 0001h
SSP2CON1_SSPM22_LENGTH                   equ 0001h
SSP2CON1_SSPM22_MASK                     equ 0004h
SSP2CON1_SSPM32_POSN                     equ 0003h
SSP2CON1_SSPM32_POSITION                 equ 0003h
SSP2CON1_SSPM32_SIZE                     equ 0001h
SSP2CON1_SSPM32_LENGTH                   equ 0001h
SSP2CON1_SSPM32_MASK                     equ 0008h
SSP2CON1_CKP2_POSN                       equ 0004h
SSP2CON1_CKP2_POSITION                   equ 0004h
SSP2CON1_CKP2_SIZE                       equ 0001h
SSP2CON1_CKP2_LENGTH                     equ 0001h
SSP2CON1_CKP2_MASK                       equ 0010h
SSP2CON1_SSPEN2_POSN                     equ 0005h
SSP2CON1_SSPEN2_POSITION                 equ 0005h
SSP2CON1_SSPEN2_SIZE                     equ 0001h
SSP2CON1_SSPEN2_LENGTH                   equ 0001h
SSP2CON1_SSPEN2_MASK                     equ 0020h
SSP2CON1_SSPOV2_POSN                     equ 0006h
SSP2CON1_SSPOV2_POSITION                 equ 0006h
SSP2CON1_SSPOV2_SIZE                     equ 0001h
SSP2CON1_SSPOV2_LENGTH                   equ 0001h
SSP2CON1_SSPOV2_MASK                     equ 0040h
SSP2CON1_WCOL2_POSN                      equ 0007h
SSP2CON1_WCOL2_POSITION                  equ 0007h
SSP2CON1_WCOL2_SIZE                      equ 0001h
SSP2CON1_WCOL2_LENGTH                    equ 0001h
SSP2CON1_WCOL2_MASK                      equ 0080h

// Register: SSP2STAT
#define SSP2STAT SSP2STAT
SSP2STAT                                 equ 0F73h
// bitfield definitions
SSP2STAT_R_NOT_W_POSN                    equ 0002h
SSP2STAT_R_NOT_W_POSITION                equ 0002h
SSP2STAT_R_NOT_W_SIZE                    equ 0001h
SSP2STAT_R_NOT_W_LENGTH                  equ 0001h
SSP2STAT_R_NOT_W_MASK                    equ 0004h
SSP2STAT_D_NOT_A_POSN                    equ 0005h
SSP2STAT_D_NOT_A_POSITION                equ 0005h
SSP2STAT_D_NOT_A_SIZE                    equ 0001h
SSP2STAT_D_NOT_A_LENGTH                  equ 0001h
SSP2STAT_D_NOT_A_MASK                    equ 0020h
SSP2STAT_BF_POSN                         equ 0000h
SSP2STAT_BF_POSITION                     equ 0000h
SSP2STAT_BF_SIZE                         equ 0001h
SSP2STAT_BF_LENGTH                       equ 0001h
SSP2STAT_BF_MASK                         equ 0001h
SSP2STAT_UA_POSN                         equ 0001h
SSP2STAT_UA_POSITION                     equ 0001h
SSP2STAT_UA_SIZE                         equ 0001h
SSP2STAT_UA_LENGTH                       equ 0001h
SSP2STAT_UA_MASK                         equ 0002h
SSP2STAT_R_nW_POSN                       equ 0002h
SSP2STAT_R_nW_POSITION                   equ 0002h
SSP2STAT_R_nW_SIZE                       equ 0001h
SSP2STAT_R_nW_LENGTH                     equ 0001h
SSP2STAT_R_nW_MASK                       equ 0004h
SSP2STAT_S_POSN                          equ 0003h
SSP2STAT_S_POSITION                      equ 0003h
SSP2STAT_S_SIZE                          equ 0001h
SSP2STAT_S_LENGTH                        equ 0001h
SSP2STAT_S_MASK                          equ 0008h
SSP2STAT_P_POSN                          equ 0004h
SSP2STAT_P_POSITION                      equ 0004h
SSP2STAT_P_SIZE                          equ 0001h
SSP2STAT_P_LENGTH                        equ 0001h
SSP2STAT_P_MASK                          equ 0010h
SSP2STAT_D_nA_POSN                       equ 0005h
SSP2STAT_D_nA_POSITION                   equ 0005h
SSP2STAT_D_nA_SIZE                       equ 0001h
SSP2STAT_D_nA_LENGTH                     equ 0001h
SSP2STAT_D_nA_MASK                       equ 0020h
SSP2STAT_CKE_POSN                        equ 0006h
SSP2STAT_CKE_POSITION                    equ 0006h
SSP2STAT_CKE_SIZE                        equ 0001h
SSP2STAT_CKE_LENGTH                      equ 0001h
SSP2STAT_CKE_MASK                        equ 0040h
SSP2STAT_SMP_POSN                        equ 0007h
SSP2STAT_SMP_POSITION                    equ 0007h
SSP2STAT_SMP_SIZE                        equ 0001h
SSP2STAT_SMP_LENGTH                      equ 0001h
SSP2STAT_SMP_MASK                        equ 0080h
SSP2STAT_BF2_POSN                        equ 0000h
SSP2STAT_BF2_POSITION                    equ 0000h
SSP2STAT_BF2_SIZE                        equ 0001h
SSP2STAT_BF2_LENGTH                      equ 0001h
SSP2STAT_BF2_MASK                        equ 0001h
SSP2STAT_UA2_POSN                        equ 0001h
SSP2STAT_UA2_POSITION                    equ 0001h
SSP2STAT_UA2_SIZE                        equ 0001h
SSP2STAT_UA2_LENGTH                      equ 0001h
SSP2STAT_UA2_MASK                        equ 0002h
SSP2STAT_I2C_READ2_POSN                  equ 0002h
SSP2STAT_I2C_READ2_POSITION              equ 0002h
SSP2STAT_I2C_READ2_SIZE                  equ 0001h
SSP2STAT_I2C_READ2_LENGTH                equ 0001h
SSP2STAT_I2C_READ2_MASK                  equ 0004h
SSP2STAT_I2C_START2_POSN                 equ 0003h
SSP2STAT_I2C_START2_POSITION             equ 0003h
SSP2STAT_I2C_START2_SIZE                 equ 0001h
SSP2STAT_I2C_START2_LENGTH               equ 0001h
SSP2STAT_I2C_START2_MASK                 equ 0008h
SSP2STAT_I2C_STOP2_POSN                  equ 0004h
SSP2STAT_I2C_STOP2_POSITION              equ 0004h
SSP2STAT_I2C_STOP2_SIZE                  equ 0001h
SSP2STAT_I2C_STOP2_LENGTH                equ 0001h
SSP2STAT_I2C_STOP2_MASK                  equ 0010h
SSP2STAT_DA2_POSN                        equ 0005h
SSP2STAT_DA2_POSITION                    equ 0005h
SSP2STAT_DA2_SIZE                        equ 0001h
SSP2STAT_DA2_LENGTH                      equ 0001h
SSP2STAT_DA2_MASK                        equ 0020h
SSP2STAT_CKE2_POSN                       equ 0006h
SSP2STAT_CKE2_POSITION                   equ 0006h
SSP2STAT_CKE2_SIZE                       equ 0001h
SSP2STAT_CKE2_LENGTH                     equ 0001h
SSP2STAT_CKE2_MASK                       equ 0040h
SSP2STAT_SMP2_POSN                       equ 0007h
SSP2STAT_SMP2_POSITION                   equ 0007h
SSP2STAT_SMP2_SIZE                       equ 0001h
SSP2STAT_SMP2_LENGTH                     equ 0001h
SSP2STAT_SMP2_MASK                       equ 0080h
SSP2STAT_READ_WRITE2_POSN                equ 0002h
SSP2STAT_READ_WRITE2_POSITION            equ 0002h
SSP2STAT_READ_WRITE2_SIZE                equ 0001h
SSP2STAT_READ_WRITE2_LENGTH              equ 0001h
SSP2STAT_READ_WRITE2_MASK                equ 0004h
SSP2STAT_S2_POSN                         equ 0003h
SSP2STAT_S2_POSITION                     equ 0003h
SSP2STAT_S2_SIZE                         equ 0001h
SSP2STAT_S2_LENGTH                       equ 0001h
SSP2STAT_S2_MASK                         equ 0008h
SSP2STAT_P2_POSN                         equ 0004h
SSP2STAT_P2_POSITION                     equ 0004h
SSP2STAT_P2_SIZE                         equ 0001h
SSP2STAT_P2_LENGTH                       equ 0001h
SSP2STAT_P2_MASK                         equ 0010h
SSP2STAT_DATA_ADDRESS2_POSN              equ 0005h
SSP2STAT_DATA_ADDRESS2_POSITION          equ 0005h
SSP2STAT_DATA_ADDRESS2_SIZE              equ 0001h
SSP2STAT_DATA_ADDRESS2_LENGTH            equ 0001h
SSP2STAT_DATA_ADDRESS2_MASK              equ 0020h
SSP2STAT_RW2_POSN                        equ 0002h
SSP2STAT_RW2_POSITION                    equ 0002h
SSP2STAT_RW2_SIZE                        equ 0001h
SSP2STAT_RW2_LENGTH                      equ 0001h
SSP2STAT_RW2_MASK                        equ 0004h
SSP2STAT_START2_POSN                     equ 0003h
SSP2STAT_START2_POSITION                 equ 0003h
SSP2STAT_START2_SIZE                     equ 0001h
SSP2STAT_START2_LENGTH                   equ 0001h
SSP2STAT_START2_MASK                     equ 0008h
SSP2STAT_STOP2_POSN                      equ 0004h
SSP2STAT_STOP2_POSITION                  equ 0004h
SSP2STAT_STOP2_SIZE                      equ 0001h
SSP2STAT_STOP2_LENGTH                    equ 0001h
SSP2STAT_STOP2_MASK                      equ 0010h
SSP2STAT_D_A2_POSN                       equ 0005h
SSP2STAT_D_A2_POSITION                   equ 0005h
SSP2STAT_D_A2_SIZE                       equ 0001h
SSP2STAT_D_A2_LENGTH                     equ 0001h
SSP2STAT_D_A2_MASK                       equ 0020h
SSP2STAT_D_NOT_A2_POSN                   equ 0005h
SSP2STAT_D_NOT_A2_POSITION               equ 0005h
SSP2STAT_D_NOT_A2_SIZE                   equ 0001h
SSP2STAT_D_NOT_A2_LENGTH                 equ 0001h
SSP2STAT_D_NOT_A2_MASK                   equ 0020h
SSP2STAT_R_W2_POSN                       equ 0002h
SSP2STAT_R_W2_POSITION                   equ 0002h
SSP2STAT_R_W2_SIZE                       equ 0001h
SSP2STAT_R_W2_LENGTH                     equ 0001h
SSP2STAT_R_W2_MASK                       equ 0004h
SSP2STAT_D_nA2_POSN                      equ 0005h
SSP2STAT_D_nA2_POSITION                  equ 0005h
SSP2STAT_D_nA2_SIZE                      equ 0001h
SSP2STAT_D_nA2_LENGTH                    equ 0001h
SSP2STAT_D_nA2_MASK                      equ 0020h
SSP2STAT_R_NOT_W2_POSN                   equ 0002h
SSP2STAT_R_NOT_W2_POSITION               equ 0002h
SSP2STAT_R_NOT_W2_SIZE                   equ 0001h
SSP2STAT_R_NOT_W2_LENGTH                 equ 0001h
SSP2STAT_R_NOT_W2_MASK                   equ 0004h
SSP2STAT_R_nW2_POSN                      equ 0002h
SSP2STAT_R_nW2_POSITION                  equ 0002h
SSP2STAT_R_nW2_SIZE                      equ 0001h
SSP2STAT_R_nW2_LENGTH                    equ 0001h
SSP2STAT_R_nW2_MASK                      equ 0004h
SSP2STAT_I2C_DAT2_POSN                   equ 0005h
SSP2STAT_I2C_DAT2_POSITION               equ 0005h
SSP2STAT_I2C_DAT2_SIZE                   equ 0001h
SSP2STAT_I2C_DAT2_LENGTH                 equ 0001h
SSP2STAT_I2C_DAT2_MASK                   equ 0020h
SSP2STAT_NOT_W2_POSN                     equ 0002h
SSP2STAT_NOT_W2_POSITION                 equ 0002h
SSP2STAT_NOT_W2_SIZE                     equ 0001h
SSP2STAT_NOT_W2_LENGTH                   equ 0001h
SSP2STAT_NOT_W2_MASK                     equ 0004h
SSP2STAT_NOT_A2_POSN                     equ 0005h
SSP2STAT_NOT_A2_POSITION                 equ 0005h
SSP2STAT_NOT_A2_SIZE                     equ 0001h
SSP2STAT_NOT_A2_LENGTH                   equ 0001h
SSP2STAT_NOT_A2_MASK                     equ 0020h
SSP2STAT_nW2_POSN                        equ 0002h
SSP2STAT_nW2_POSITION                    equ 0002h
SSP2STAT_nW2_SIZE                        equ 0001h
SSP2STAT_nW2_LENGTH                      equ 0001h
SSP2STAT_nW2_MASK                        equ 0004h
SSP2STAT_nA2_POSN                        equ 0005h
SSP2STAT_nA2_POSITION                    equ 0005h
SSP2STAT_nA2_SIZE                        equ 0001h
SSP2STAT_nA2_LENGTH                      equ 0001h
SSP2STAT_nA2_MASK                        equ 0020h
SSP2STAT_NOT_WRITE2_POSN                 equ 0002h
SSP2STAT_NOT_WRITE2_POSITION             equ 0002h
SSP2STAT_NOT_WRITE2_SIZE                 equ 0001h
SSP2STAT_NOT_WRITE2_LENGTH               equ 0001h
SSP2STAT_NOT_WRITE2_MASK                 equ 0004h
SSP2STAT_NOT_ADDRESS2_POSN               equ 0005h
SSP2STAT_NOT_ADDRESS2_POSITION           equ 0005h
SSP2STAT_NOT_ADDRESS2_SIZE               equ 0001h
SSP2STAT_NOT_ADDRESS2_LENGTH             equ 0001h
SSP2STAT_NOT_ADDRESS2_MASK               equ 0020h
SSP2STAT_nWRITE2_POSN                    equ 0002h
SSP2STAT_nWRITE2_POSITION                equ 0002h
SSP2STAT_nWRITE2_SIZE                    equ 0001h
SSP2STAT_nWRITE2_LENGTH                  equ 0001h
SSP2STAT_nWRITE2_MASK                    equ 0004h
SSP2STAT_nADDRESS2_POSN                  equ 0005h
SSP2STAT_nADDRESS2_POSITION              equ 0005h
SSP2STAT_nADDRESS2_SIZE                  equ 0001h
SSP2STAT_nADDRESS2_LENGTH                equ 0001h
SSP2STAT_nADDRESS2_MASK                  equ 0020h

// Register: SSP2ADD
#define SSP2ADD SSP2ADD
SSP2ADD                                  equ 0F74h
// bitfield definitions
SSP2ADD_SSPADD_POSN                      equ 0000h
SSP2ADD_SSPADD_POSITION                  equ 0000h
SSP2ADD_SSPADD_SIZE                      equ 0008h
SSP2ADD_SSPADD_LENGTH                    equ 0008h
SSP2ADD_SSPADD_MASK                      equ 00FFh
SSP2ADD_MSK0_POSN                        equ 0000h
SSP2ADD_MSK0_POSITION                    equ 0000h
SSP2ADD_MSK0_SIZE                        equ 0001h
SSP2ADD_MSK0_LENGTH                      equ 0001h
SSP2ADD_MSK0_MASK                        equ 0001h
SSP2ADD_MSK1_POSN                        equ 0001h
SSP2ADD_MSK1_POSITION                    equ 0001h
SSP2ADD_MSK1_SIZE                        equ 0001h
SSP2ADD_MSK1_LENGTH                      equ 0001h
SSP2ADD_MSK1_MASK                        equ 0002h
SSP2ADD_MSK2_POSN                        equ 0002h
SSP2ADD_MSK2_POSITION                    equ 0002h
SSP2ADD_MSK2_SIZE                        equ 0001h
SSP2ADD_MSK2_LENGTH                      equ 0001h
SSP2ADD_MSK2_MASK                        equ 0004h
SSP2ADD_MSK3_POSN                        equ 0003h
SSP2ADD_MSK3_POSITION                    equ 0003h
SSP2ADD_MSK3_SIZE                        equ 0001h
SSP2ADD_MSK3_LENGTH                      equ 0001h
SSP2ADD_MSK3_MASK                        equ 0008h
SSP2ADD_MSK4_POSN                        equ 0004h
SSP2ADD_MSK4_POSITION                    equ 0004h
SSP2ADD_MSK4_SIZE                        equ 0001h
SSP2ADD_MSK4_LENGTH                      equ 0001h
SSP2ADD_MSK4_MASK                        equ 0010h
SSP2ADD_MSK5_POSN                        equ 0005h
SSP2ADD_MSK5_POSITION                    equ 0005h
SSP2ADD_MSK5_SIZE                        equ 0001h
SSP2ADD_MSK5_LENGTH                      equ 0001h
SSP2ADD_MSK5_MASK                        equ 0020h
SSP2ADD_MSK6_POSN                        equ 0006h
SSP2ADD_MSK6_POSITION                    equ 0006h
SSP2ADD_MSK6_SIZE                        equ 0001h
SSP2ADD_MSK6_LENGTH                      equ 0001h
SSP2ADD_MSK6_MASK                        equ 0040h
SSP2ADD_MSK7_POSN                        equ 0007h
SSP2ADD_MSK7_POSITION                    equ 0007h
SSP2ADD_MSK7_SIZE                        equ 0001h
SSP2ADD_MSK7_LENGTH                      equ 0001h
SSP2ADD_MSK7_MASK                        equ 0080h
SSP2ADD_MSK02_POSN                       equ 0000h
SSP2ADD_MSK02_POSITION                   equ 0000h
SSP2ADD_MSK02_SIZE                       equ 0001h
SSP2ADD_MSK02_LENGTH                     equ 0001h
SSP2ADD_MSK02_MASK                       equ 0001h
SSP2ADD_MSK12_POSN                       equ 0001h
SSP2ADD_MSK12_POSITION                   equ 0001h
SSP2ADD_MSK12_SIZE                       equ 0001h
SSP2ADD_MSK12_LENGTH                     equ 0001h
SSP2ADD_MSK12_MASK                       equ 0002h
SSP2ADD_MSK22_POSN                       equ 0002h
SSP2ADD_MSK22_POSITION                   equ 0002h
SSP2ADD_MSK22_SIZE                       equ 0001h
SSP2ADD_MSK22_LENGTH                     equ 0001h
SSP2ADD_MSK22_MASK                       equ 0004h
SSP2ADD_MSK32_POSN                       equ 0003h
SSP2ADD_MSK32_POSITION                   equ 0003h
SSP2ADD_MSK32_SIZE                       equ 0001h
SSP2ADD_MSK32_LENGTH                     equ 0001h
SSP2ADD_MSK32_MASK                       equ 0008h
SSP2ADD_MSK42_POSN                       equ 0004h
SSP2ADD_MSK42_POSITION                   equ 0004h
SSP2ADD_MSK42_SIZE                       equ 0001h
SSP2ADD_MSK42_LENGTH                     equ 0001h
SSP2ADD_MSK42_MASK                       equ 0010h
SSP2ADD_MSK52_POSN                       equ 0005h
SSP2ADD_MSK52_POSITION                   equ 0005h
SSP2ADD_MSK52_SIZE                       equ 0001h
SSP2ADD_MSK52_LENGTH                     equ 0001h
SSP2ADD_MSK52_MASK                       equ 0020h
SSP2ADD_MSK62_POSN                       equ 0006h
SSP2ADD_MSK62_POSITION                   equ 0006h
SSP2ADD_MSK62_SIZE                       equ 0001h
SSP2ADD_MSK62_LENGTH                     equ 0001h
SSP2ADD_MSK62_MASK                       equ 0040h
SSP2ADD_MSK72_POSN                       equ 0007h
SSP2ADD_MSK72_POSITION                   equ 0007h
SSP2ADD_MSK72_SIZE                       equ 0001h
SSP2ADD_MSK72_LENGTH                     equ 0001h
SSP2ADD_MSK72_MASK                       equ 0080h

// Register: SSP2BUF
#define SSP2BUF SSP2BUF
SSP2BUF                                  equ 0F75h
// bitfield definitions
SSP2BUF_SSPBUF_POSN                      equ 0000h
SSP2BUF_SSPBUF_POSITION                  equ 0000h
SSP2BUF_SSPBUF_SIZE                      equ 0008h
SSP2BUF_SSPBUF_LENGTH                    equ 0008h
SSP2BUF_SSPBUF_MASK                      equ 00FFh

// Register: T4CON
#define T4CON T4CON
T4CON                                    equ 0F76h
// bitfield definitions
T4CON_T4CKPS_POSN                        equ 0000h
T4CON_T4CKPS_POSITION                    equ 0000h
T4CON_T4CKPS_SIZE                        equ 0002h
T4CON_T4CKPS_LENGTH                      equ 0002h
T4CON_T4CKPS_MASK                        equ 0003h
T4CON_TMR4ON_POSN                        equ 0002h
T4CON_TMR4ON_POSITION                    equ 0002h
T4CON_TMR4ON_SIZE                        equ 0001h
T4CON_TMR4ON_LENGTH                      equ 0001h
T4CON_TMR4ON_MASK                        equ 0004h
T4CON_T4OUTPS_POSN                       equ 0003h
T4CON_T4OUTPS_POSITION                   equ 0003h
T4CON_T4OUTPS_SIZE                       equ 0004h
T4CON_T4OUTPS_LENGTH                     equ 0004h
T4CON_T4OUTPS_MASK                       equ 0078h
T4CON_T4CKPS0_POSN                       equ 0000h
T4CON_T4CKPS0_POSITION                   equ 0000h
T4CON_T4CKPS0_SIZE                       equ 0001h
T4CON_T4CKPS0_LENGTH                     equ 0001h
T4CON_T4CKPS0_MASK                       equ 0001h
T4CON_T4CKPS1_POSN                       equ 0001h
T4CON_T4CKPS1_POSITION                   equ 0001h
T4CON_T4CKPS1_SIZE                       equ 0001h
T4CON_T4CKPS1_LENGTH                     equ 0001h
T4CON_T4CKPS1_MASK                       equ 0002h
T4CON_T4OUTPS0_POSN                      equ 0003h
T4CON_T4OUTPS0_POSITION                  equ 0003h
T4CON_T4OUTPS0_SIZE                      equ 0001h
T4CON_T4OUTPS0_LENGTH                    equ 0001h
T4CON_T4OUTPS0_MASK                      equ 0008h
T4CON_T4OUTPS1_POSN                      equ 0004h
T4CON_T4OUTPS1_POSITION                  equ 0004h
T4CON_T4OUTPS1_SIZE                      equ 0001h
T4CON_T4OUTPS1_LENGTH                    equ 0001h
T4CON_T4OUTPS1_MASK                      equ 0010h
T4CON_T4OUTPS2_POSN                      equ 0005h
T4CON_T4OUTPS2_POSITION                  equ 0005h
T4CON_T4OUTPS2_SIZE                      equ 0001h
T4CON_T4OUTPS2_LENGTH                    equ 0001h
T4CON_T4OUTPS2_MASK                      equ 0020h
T4CON_T4OUTPS3_POSN                      equ 0006h
T4CON_T4OUTPS3_POSITION                  equ 0006h
T4CON_T4OUTPS3_SIZE                      equ 0001h
T4CON_T4OUTPS3_LENGTH                    equ 0001h
T4CON_T4OUTPS3_MASK                      equ 0040h

// Register: PR4
#define PR4 PR4
PR4                                      equ 0F77h
// bitfield definitions
PR4_PR4_POSN                             equ 0000h
PR4_PR4_POSITION                         equ 0000h
PR4_PR4_SIZE                             equ 0008h
PR4_PR4_LENGTH                           equ 0008h
PR4_PR4_MASK                             equ 00FFh

// Register: TMR4
#define TMR4 TMR4
TMR4                                     equ 0F78h
// bitfield definitions
TMR4_TMR4_POSN                           equ 0000h
TMR4_TMR4_POSITION                       equ 0000h
TMR4_TMR4_SIZE                           equ 0008h
TMR4_TMR4_LENGTH                         equ 0008h
TMR4_TMR4_MASK                           equ 00FFh

// Register: T3CON
#define T3CON T3CON
T3CON                                    equ 0F79h
// bitfield definitions
T3CON_TMR3ON_POSN                        equ 0000h
T3CON_TMR3ON_POSITION                    equ 0000h
T3CON_TMR3ON_SIZE                        equ 0001h
T3CON_TMR3ON_LENGTH                      equ 0001h
T3CON_TMR3ON_MASK                        equ 0001h
T3CON_RD16_POSN                          equ 0001h
T3CON_RD16_POSITION                      equ 0001h
T3CON_RD16_SIZE                          equ 0001h
T3CON_RD16_LENGTH                        equ 0001h
T3CON_RD16_MASK                          equ 0002h
T3CON_T3SYNC_POSN                        equ 0002h
T3CON_T3SYNC_POSITION                    equ 0002h
T3CON_T3SYNC_SIZE                        equ 0001h
T3CON_T3SYNC_LENGTH                      equ 0001h
T3CON_T3SYNC_MASK                        equ 0004h
T3CON_T3OSCEN_POSN                       equ 0003h
T3CON_T3OSCEN_POSITION                   equ 0003h
T3CON_T3OSCEN_SIZE                       equ 0001h
T3CON_T3OSCEN_LENGTH                     equ 0001h
T3CON_T3OSCEN_MASK                       equ 0008h
T3CON_T3CKPS_POSN                        equ 0004h
T3CON_T3CKPS_POSITION                    equ 0004h
T3CON_T3CKPS_SIZE                        equ 0002h
T3CON_T3CKPS_LENGTH                      equ 0002h
T3CON_T3CKPS_MASK                        equ 0030h
T3CON_TMR3CS_POSN                        equ 0006h
T3CON_TMR3CS_POSITION                    equ 0006h
T3CON_TMR3CS_SIZE                        equ 0002h
T3CON_TMR3CS_LENGTH                      equ 0002h
T3CON_TMR3CS_MASK                        equ 00C0h
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
T3CON_SOSCEN3_POSN                       equ 0003h
T3CON_SOSCEN3_POSITION                   equ 0003h
T3CON_SOSCEN3_SIZE                       equ 0001h
T3CON_SOSCEN3_LENGTH                     equ 0001h
T3CON_SOSCEN3_MASK                       equ 0008h
T3CON_RD163_POSN                         equ 0007h
T3CON_RD163_POSITION                     equ 0007h
T3CON_RD163_SIZE                         equ 0001h
T3CON_RD163_LENGTH                       equ 0001h
T3CON_RD163_MASK                         equ 0080h
T3CON_T3RD16_POSN                        equ 0007h
T3CON_T3RD16_POSITION                    equ 0007h
T3CON_T3RD16_SIZE                        equ 0001h
T3CON_T3RD16_LENGTH                      equ 0001h
T3CON_T3RD16_MASK                        equ 0080h

// Register: TMR3
#define TMR3 TMR3
TMR3                                     equ 0F7Ah

// Register: TMR3L
#define TMR3L TMR3L
TMR3L                                    equ 0F7Ah
// bitfield definitions
TMR3L_TMR3L_POSN                         equ 0000h
TMR3L_TMR3L_POSITION                     equ 0000h
TMR3L_TMR3L_SIZE                         equ 0008h
TMR3L_TMR3L_LENGTH                       equ 0008h
TMR3L_TMR3L_MASK                         equ 00FFh

// Register: TMR3H
#define TMR3H TMR3H
TMR3H                                    equ 0F7Bh
// bitfield definitions
TMR3H_TMR3H_POSN                         equ 0000h
TMR3H_TMR3H_POSITION                     equ 0000h
TMR3H_TMR3H_SIZE                         equ 0008h
TMR3H_TMR3H_LENGTH                       equ 0008h
TMR3H_TMR3H_MASK                         equ 00FFh

// Register: BAUDCON2
#define BAUDCON2 BAUDCON2
BAUDCON2                                 equ 0F7Ch
// bitfield definitions
BAUDCON2_ABDEN_POSN                      equ 0000h
BAUDCON2_ABDEN_POSITION                  equ 0000h
BAUDCON2_ABDEN_SIZE                      equ 0001h
BAUDCON2_ABDEN_LENGTH                    equ 0001h
BAUDCON2_ABDEN_MASK                      equ 0001h
BAUDCON2_WUE_POSN                        equ 0001h
BAUDCON2_WUE_POSITION                    equ 0001h
BAUDCON2_WUE_SIZE                        equ 0001h
BAUDCON2_WUE_LENGTH                      equ 0001h
BAUDCON2_WUE_MASK                        equ 0002h
BAUDCON2_BRG16_POSN                      equ 0003h
BAUDCON2_BRG16_POSITION                  equ 0003h
BAUDCON2_BRG16_SIZE                      equ 0001h
BAUDCON2_BRG16_LENGTH                    equ 0001h
BAUDCON2_BRG16_MASK                      equ 0008h
BAUDCON2_TXCKP_POSN                      equ 0004h
BAUDCON2_TXCKP_POSITION                  equ 0004h
BAUDCON2_TXCKP_SIZE                      equ 0001h
BAUDCON2_TXCKP_LENGTH                    equ 0001h
BAUDCON2_TXCKP_MASK                      equ 0010h
BAUDCON2_RXDTP_POSN                      equ 0005h
BAUDCON2_RXDTP_POSITION                  equ 0005h
BAUDCON2_RXDTP_SIZE                      equ 0001h
BAUDCON2_RXDTP_LENGTH                    equ 0001h
BAUDCON2_RXDTP_MASK                      equ 0020h
BAUDCON2_RCIDL_POSN                      equ 0006h
BAUDCON2_RCIDL_POSITION                  equ 0006h
BAUDCON2_RCIDL_SIZE                      equ 0001h
BAUDCON2_RCIDL_LENGTH                    equ 0001h
BAUDCON2_RCIDL_MASK                      equ 0040h
BAUDCON2_ABDOVF_POSN                     equ 0007h
BAUDCON2_ABDOVF_POSITION                 equ 0007h
BAUDCON2_ABDOVF_SIZE                     equ 0001h
BAUDCON2_ABDOVF_LENGTH                   equ 0001h
BAUDCON2_ABDOVF_MASK                     equ 0080h
BAUDCON2_ABDEN2_POSN                     equ 0000h
BAUDCON2_ABDEN2_POSITION                 equ 0000h
BAUDCON2_ABDEN2_SIZE                     equ 0001h
BAUDCON2_ABDEN2_LENGTH                   equ 0001h
BAUDCON2_ABDEN2_MASK                     equ 0001h
BAUDCON2_WUE2_POSN                       equ 0001h
BAUDCON2_WUE2_POSITION                   equ 0001h
BAUDCON2_WUE2_SIZE                       equ 0001h
BAUDCON2_WUE2_LENGTH                     equ 0001h
BAUDCON2_WUE2_MASK                       equ 0002h
BAUDCON2_BRG162_POSN                     equ 0003h
BAUDCON2_BRG162_POSITION                 equ 0003h
BAUDCON2_BRG162_SIZE                     equ 0001h
BAUDCON2_BRG162_LENGTH                   equ 0001h
BAUDCON2_BRG162_MASK                     equ 0008h
BAUDCON2_SCKP2_POSN                      equ 0004h
BAUDCON2_SCKP2_POSITION                  equ 0004h
BAUDCON2_SCKP2_SIZE                      equ 0001h
BAUDCON2_SCKP2_LENGTH                    equ 0001h
BAUDCON2_SCKP2_MASK                      equ 0010h
BAUDCON2_DTRXP2_POSN                     equ 0005h
BAUDCON2_DTRXP2_POSITION                 equ 0005h
BAUDCON2_DTRXP2_SIZE                     equ 0001h
BAUDCON2_DTRXP2_LENGTH                   equ 0001h
BAUDCON2_DTRXP2_MASK                     equ 0020h
BAUDCON2_RCIDL2_POSN                     equ 0006h
BAUDCON2_RCIDL2_POSITION                 equ 0006h
BAUDCON2_RCIDL2_SIZE                     equ 0001h
BAUDCON2_RCIDL2_LENGTH                   equ 0001h
BAUDCON2_RCIDL2_MASK                     equ 0040h
BAUDCON2_ABDOVF2_POSN                    equ 0007h
BAUDCON2_ABDOVF2_POSITION                equ 0007h
BAUDCON2_ABDOVF2_SIZE                    equ 0001h
BAUDCON2_ABDOVF2_LENGTH                  equ 0001h
BAUDCON2_ABDOVF2_MASK                    equ 0080h
BAUDCON2_TXCKP2_POSN                     equ 0004h
BAUDCON2_TXCKP2_POSITION                 equ 0004h
BAUDCON2_TXCKP2_SIZE                     equ 0001h
BAUDCON2_TXCKP2_LENGTH                   equ 0001h
BAUDCON2_TXCKP2_MASK                     equ 0010h
BAUDCON2_RXDTP2_POSN                     equ 0005h
BAUDCON2_RXDTP2_POSITION                 equ 0005h
BAUDCON2_RXDTP2_SIZE                     equ 0001h
BAUDCON2_RXDTP2_LENGTH                   equ 0001h
BAUDCON2_RXDTP2_MASK                     equ 0020h
BAUDCON2_RCMT2_POSN                      equ 0006h
BAUDCON2_RCMT2_POSITION                  equ 0006h
BAUDCON2_RCMT2_SIZE                      equ 0001h
BAUDCON2_RCMT2_LENGTH                    equ 0001h
BAUDCON2_RCMT2_MASK                      equ 0040h

// Register: SPBRGH2
#define SPBRGH2 SPBRGH2
SPBRGH2                                  equ 0F7Dh
// bitfield definitions
SPBRGH2_SPBRGH2_POSN                     equ 0000h
SPBRGH2_SPBRGH2_POSITION                 equ 0000h
SPBRGH2_SPBRGH2_SIZE                     equ 0008h
SPBRGH2_SPBRGH2_LENGTH                   equ 0008h
SPBRGH2_SPBRGH2_MASK                     equ 00FFh

// Register: BAUDCON1
#define BAUDCON1 BAUDCON1
BAUDCON1                                 equ 0F7Eh
// bitfield definitions
BAUDCON1_ABDEN_POSN                      equ 0000h
BAUDCON1_ABDEN_POSITION                  equ 0000h
BAUDCON1_ABDEN_SIZE                      equ 0001h
BAUDCON1_ABDEN_LENGTH                    equ 0001h
BAUDCON1_ABDEN_MASK                      equ 0001h
BAUDCON1_WUE_POSN                        equ 0001h
BAUDCON1_WUE_POSITION                    equ 0001h
BAUDCON1_WUE_SIZE                        equ 0001h
BAUDCON1_WUE_LENGTH                      equ 0001h
BAUDCON1_WUE_MASK                        equ 0002h
BAUDCON1_BRG16_POSN                      equ 0003h
BAUDCON1_BRG16_POSITION                  equ 0003h
BAUDCON1_BRG16_SIZE                      equ 0001h
BAUDCON1_BRG16_LENGTH                    equ 0001h
BAUDCON1_BRG16_MASK                      equ 0008h
BAUDCON1_TXCKP_POSN                      equ 0004h
BAUDCON1_TXCKP_POSITION                  equ 0004h
BAUDCON1_TXCKP_SIZE                      equ 0001h
BAUDCON1_TXCKP_LENGTH                    equ 0001h
BAUDCON1_TXCKP_MASK                      equ 0010h
BAUDCON1_RXDTP_POSN                      equ 0005h
BAUDCON1_RXDTP_POSITION                  equ 0005h
BAUDCON1_RXDTP_SIZE                      equ 0001h
BAUDCON1_RXDTP_LENGTH                    equ 0001h
BAUDCON1_RXDTP_MASK                      equ 0020h
BAUDCON1_RCIDL_POSN                      equ 0006h
BAUDCON1_RCIDL_POSITION                  equ 0006h
BAUDCON1_RCIDL_SIZE                      equ 0001h
BAUDCON1_RCIDL_LENGTH                    equ 0001h
BAUDCON1_RCIDL_MASK                      equ 0040h
BAUDCON1_ABDOVF_POSN                     equ 0007h
BAUDCON1_ABDOVF_POSITION                 equ 0007h
BAUDCON1_ABDOVF_SIZE                     equ 0001h
BAUDCON1_ABDOVF_LENGTH                   equ 0001h
BAUDCON1_ABDOVF_MASK                     equ 0080h
BAUDCON1_ABDEN1_POSN                     equ 0000h
BAUDCON1_ABDEN1_POSITION                 equ 0000h
BAUDCON1_ABDEN1_SIZE                     equ 0001h
BAUDCON1_ABDEN1_LENGTH                   equ 0001h
BAUDCON1_ABDEN1_MASK                     equ 0001h
BAUDCON1_WUE1_POSN                       equ 0001h
BAUDCON1_WUE1_POSITION                   equ 0001h
BAUDCON1_WUE1_SIZE                       equ 0001h
BAUDCON1_WUE1_LENGTH                     equ 0001h
BAUDCON1_WUE1_MASK                       equ 0002h
BAUDCON1_BRG161_POSN                     equ 0003h
BAUDCON1_BRG161_POSITION                 equ 0003h
BAUDCON1_BRG161_SIZE                     equ 0001h
BAUDCON1_BRG161_LENGTH                   equ 0001h
BAUDCON1_BRG161_MASK                     equ 0008h
BAUDCON1_CKTXP_POSN                      equ 0004h
BAUDCON1_CKTXP_POSITION                  equ 0004h
BAUDCON1_CKTXP_SIZE                      equ 0001h
BAUDCON1_CKTXP_LENGTH                    equ 0001h
BAUDCON1_CKTXP_MASK                      equ 0010h
BAUDCON1_DTRXP_POSN                      equ 0005h
BAUDCON1_DTRXP_POSITION                  equ 0005h
BAUDCON1_DTRXP_SIZE                      equ 0001h
BAUDCON1_DTRXP_LENGTH                    equ 0001h
BAUDCON1_DTRXP_MASK                      equ 0020h
BAUDCON1_RCIDL1_POSN                     equ 0006h
BAUDCON1_RCIDL1_POSITION                 equ 0006h
BAUDCON1_RCIDL1_SIZE                     equ 0001h
BAUDCON1_RCIDL1_LENGTH                   equ 0001h
BAUDCON1_RCIDL1_MASK                     equ 0040h
BAUDCON1_ABDOVF1_POSN                    equ 0007h
BAUDCON1_ABDOVF1_POSITION                equ 0007h
BAUDCON1_ABDOVF1_SIZE                    equ 0001h
BAUDCON1_ABDOVF1_LENGTH                  equ 0001h
BAUDCON1_ABDOVF1_MASK                    equ 0080h
BAUDCON1_SCKP_POSN                       equ 0004h
BAUDCON1_SCKP_POSITION                   equ 0004h
BAUDCON1_SCKP_SIZE                       equ 0001h
BAUDCON1_SCKP_LENGTH                     equ 0001h
BAUDCON1_SCKP_MASK                       equ 0010h
BAUDCON1_DTRXP1_POSN                     equ 0005h
BAUDCON1_DTRXP1_POSITION                 equ 0005h
BAUDCON1_DTRXP1_SIZE                     equ 0001h
BAUDCON1_DTRXP1_LENGTH                   equ 0001h
BAUDCON1_DTRXP1_MASK                     equ 0020h
BAUDCON1_RCMT_POSN                       equ 0006h
BAUDCON1_RCMT_POSITION                   equ 0006h
BAUDCON1_RCMT_SIZE                       equ 0001h
BAUDCON1_RCMT_LENGTH                     equ 0001h
BAUDCON1_RCMT_MASK                       equ 0040h
BAUDCON1_SCKP1_POSN                      equ 0004h
BAUDCON1_SCKP1_POSITION                  equ 0004h
BAUDCON1_SCKP1_SIZE                      equ 0001h
BAUDCON1_SCKP1_LENGTH                    equ 0001h
BAUDCON1_SCKP1_MASK                      equ 0010h
BAUDCON1_RXDTP1_POSN                     equ 0005h
BAUDCON1_RXDTP1_POSITION                 equ 0005h
BAUDCON1_RXDTP1_SIZE                     equ 0001h
BAUDCON1_RXDTP1_LENGTH                   equ 0001h
BAUDCON1_RXDTP1_MASK                     equ 0020h
BAUDCON1_RCMT1_POSN                      equ 0006h
BAUDCON1_RCMT1_POSITION                  equ 0006h
BAUDCON1_RCMT1_SIZE                      equ 0001h
BAUDCON1_RCMT1_LENGTH                    equ 0001h
BAUDCON1_RCMT1_MASK                      equ 0040h
BAUDCON1_TXCKP1_POSN                     equ 0004h
BAUDCON1_TXCKP1_POSITION                 equ 0004h
BAUDCON1_TXCKP1_SIZE                     equ 0001h
BAUDCON1_TXCKP1_LENGTH                   equ 0001h
BAUDCON1_TXCKP1_MASK                     equ 0010h
BAUDCON1_RXCKP_POSN                      equ 0005h
BAUDCON1_RXCKP_POSITION                  equ 0005h
BAUDCON1_RXCKP_SIZE                      equ 0001h
BAUDCON1_RXCKP_LENGTH                    equ 0001h
BAUDCON1_RXCKP_MASK                      equ 0020h
BAUDCON1_W4E_POSN                        equ 0001h
BAUDCON1_W4E_POSITION                    equ 0001h
BAUDCON1_W4E_SIZE                        equ 0001h
BAUDCON1_W4E_LENGTH                      equ 0001h
BAUDCON1_W4E_MASK                        equ 0002h

// Register: SPBRGH1
#define SPBRGH1 SPBRGH1
SPBRGH1                                  equ 0F7Fh
// bitfield definitions
SPBRGH1_SPBRGH1_POSN                     equ 0000h
SPBRGH1_SPBRGH1_POSITION                 equ 0000h
SPBRGH1_SPBRGH1_SIZE                     equ 0008h
SPBRGH1_SPBRGH1_LENGTH                   equ 0008h
SPBRGH1_SPBRGH1_MASK                     equ 00FFh

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 0F80h
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
PORTA_AN0_POSN                           equ 0000h
PORTA_AN0_POSITION                       equ 0000h
PORTA_AN0_SIZE                           equ 0001h
PORTA_AN0_LENGTH                         equ 0001h
PORTA_AN0_MASK                           equ 0001h
PORTA_AN1_POSN                           equ 0001h
PORTA_AN1_POSITION                       equ 0001h
PORTA_AN1_SIZE                           equ 0001h
PORTA_AN1_LENGTH                         equ 0001h
PORTA_AN1_MASK                           equ 0002h
PORTA_AN2_POSN                           equ 0002h
PORTA_AN2_POSITION                       equ 0002h
PORTA_AN2_SIZE                           equ 0001h
PORTA_AN2_LENGTH                         equ 0001h
PORTA_AN2_MASK                           equ 0004h
PORTA_AN3_POSN                           equ 0003h
PORTA_AN3_POSITION                       equ 0003h
PORTA_AN3_SIZE                           equ 0001h
PORTA_AN3_LENGTH                         equ 0001h
PORTA_AN3_MASK                           equ 0008h
PORTA_AN4_POSN                           equ 0005h
PORTA_AN4_POSITION                       equ 0005h
PORTA_AN4_SIZE                           equ 0001h
PORTA_AN4_LENGTH                         equ 0001h
PORTA_AN4_MASK                           equ 0020h
PORTA_OSC2_POSN                          equ 0006h
PORTA_OSC2_POSITION                      equ 0006h
PORTA_OSC2_SIZE                          equ 0001h
PORTA_OSC2_LENGTH                        equ 0001h
PORTA_OSC2_MASK                          equ 0040h
PORTA_OSC1_POSN                          equ 0007h
PORTA_OSC1_POSITION                      equ 0007h
PORTA_OSC1_SIZE                          equ 0001h
PORTA_OSC1_LENGTH                        equ 0001h
PORTA_OSC1_MASK                          equ 0080h
PORTA_NOT_SS1_POSN                       equ 0005h
PORTA_NOT_SS1_POSITION                   equ 0005h
PORTA_NOT_SS1_SIZE                       equ 0001h
PORTA_NOT_SS1_LENGTH                     equ 0001h
PORTA_NOT_SS1_MASK                       equ 0020h
PORTA_C1INA_POSN                         equ 0000h
PORTA_C1INA_POSITION                     equ 0000h
PORTA_C1INA_SIZE                         equ 0001h
PORTA_C1INA_LENGTH                       equ 0001h
PORTA_C1INA_MASK                         equ 0001h
PORTA_C2INA_POSN                         equ 0001h
PORTA_C2INA_POSITION                     equ 0001h
PORTA_C2INA_SIZE                         equ 0001h
PORTA_C2INA_LENGTH                       equ 0001h
PORTA_C2INA_MASK                         equ 0002h
PORTA_VREF_MINUS_POSN                    equ 0002h
PORTA_VREF_MINUS_POSITION                equ 0002h
PORTA_VREF_MINUS_SIZE                    equ 0001h
PORTA_VREF_MINUS_LENGTH                  equ 0001h
PORTA_VREF_MINUS_MASK                    equ 0004h
PORTA_VREF_PLUS_POSN                     equ 0003h
PORTA_VREF_PLUS_POSITION                 equ 0003h
PORTA_VREF_PLUS_SIZE                     equ 0001h
PORTA_VREF_PLUS_LENGTH                   equ 0001h
PORTA_VREF_PLUS_MASK                     equ 0008h
PORTA_nSS1_POSN                          equ 0005h
PORTA_nSS1_POSITION                      equ 0005h
PORTA_nSS1_SIZE                          equ 0001h
PORTA_nSS1_LENGTH                        equ 0001h
PORTA_nSS1_MASK                          equ 0020h
PORTA_CLKO_POSN                          equ 0006h
PORTA_CLKO_POSITION                      equ 0006h
PORTA_CLKO_SIZE                          equ 0001h
PORTA_CLKO_LENGTH                        equ 0001h
PORTA_CLKO_MASK                          equ 0040h
PORTA_CLKI_POSN                          equ 0007h
PORTA_CLKI_POSITION                      equ 0007h
PORTA_CLKI_SIZE                          equ 0001h
PORTA_CLKI_LENGTH                        equ 0001h
PORTA_CLKI_MASK                          equ 0080h
PORTA_CVREF_MINUS_POSN                   equ 0002h
PORTA_CVREF_MINUS_POSITION               equ 0002h
PORTA_CVREF_MINUS_SIZE                   equ 0001h
PORTA_CVREF_MINUS_LENGTH                 equ 0001h
PORTA_CVREF_MINUS_MASK                   equ 0004h
PORTA_C1INB_POSN                         equ 0003h
PORTA_C1INB_POSITION                     equ 0003h
PORTA_C1INB_SIZE                         equ 0001h
PORTA_C1INB_LENGTH                       equ 0001h
PORTA_C1INB_MASK                         equ 0008h
PORTA_HLVDIN_POSN                        equ 0005h
PORTA_HLVDIN_POSITION                    equ 0005h
PORTA_HLVDIN_SIZE                        equ 0001h
PORTA_HLVDIN_LENGTH                      equ 0001h
PORTA_HLVDIN_MASK                        equ 0020h
PORTA_RP0_POSN                           equ 0000h
PORTA_RP0_POSITION                       equ 0000h
PORTA_RP0_SIZE                           equ 0001h
PORTA_RP0_LENGTH                         equ 0001h
PORTA_RP0_MASK                           equ 0001h
PORTA_RP1_POSN                           equ 0001h
PORTA_RP1_POSITION                       equ 0001h
PORTA_RP1_SIZE                           equ 0001h
PORTA_RP1_LENGTH                         equ 0001h
PORTA_RP1_MASK                           equ 0002h
PORTA_C2INB_POSN                         equ 0002h
PORTA_C2INB_POSITION                     equ 0002h
PORTA_C2INB_SIZE                         equ 0001h
PORTA_C2INB_LENGTH                       equ 0001h
PORTA_C2INB_MASK                         equ 0004h
PORTA_RCV_POSN                           equ 0005h
PORTA_RCV_POSITION                       equ 0005h
PORTA_RCV_SIZE                           equ 0001h
PORTA_RCV_LENGTH                         equ 0001h
PORTA_RCV_MASK                           equ 0020h
PORTA_ULPWU_POSN                         equ 0000h
PORTA_ULPWU_POSITION                     equ 0000h
PORTA_ULPWU_SIZE                         equ 0001h
PORTA_ULPWU_LENGTH                       equ 0001h
PORTA_ULPWU_MASK                         equ 0001h
PORTA_RP2_POSN                           equ 0005h
PORTA_RP2_POSITION                       equ 0005h
PORTA_RP2_SIZE                           equ 0001h
PORTA_RP2_LENGTH                         equ 0001h
PORTA_RP2_MASK                           equ 0020h
PORTA_ULPWUIN_POSN                       equ 0000h
PORTA_ULPWUIN_POSITION                   equ 0000h
PORTA_ULPWUIN_SIZE                       equ 0001h
PORTA_ULPWUIN_LENGTH                     equ 0001h
PORTA_ULPWUIN_MASK                       equ 0001h
PORTA_LVDIN_POSN                         equ 0005h
PORTA_LVDIN_POSITION                     equ 0005h
PORTA_LVDIN_SIZE                         equ 0001h
PORTA_LVDIN_LENGTH                       equ 0001h
PORTA_LVDIN_MASK                         equ 0020h
PORTA_RJPU_POSN                          equ 0007h
PORTA_RJPU_POSITION                      equ 0007h
PORTA_RJPU_SIZE                          equ 0001h
PORTA_RJPU_LENGTH                        equ 0001h
PORTA_RJPU_MASK                          equ 0080h

// Register: PORTB
#define PORTB PORTB
PORTB                                    equ 0F81h
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
PORTB_AN12_POSN                          equ 0000h
PORTB_AN12_POSITION                      equ 0000h
PORTB_AN12_SIZE                          equ 0001h
PORTB_AN12_LENGTH                        equ 0001h
PORTB_AN12_MASK                          equ 0001h
PORTB_AN10_POSN                          equ 0001h
PORTB_AN10_POSITION                      equ 0001h
PORTB_AN10_SIZE                          equ 0001h
PORTB_AN10_LENGTH                        equ 0001h
PORTB_AN10_MASK                          equ 0002h
PORTB_AN8_POSN                           equ 0002h
PORTB_AN8_POSITION                       equ 0002h
PORTB_AN8_SIZE                           equ 0001h
PORTB_AN8_LENGTH                         equ 0001h
PORTB_AN8_MASK                           equ 0004h
PORTB_AN9_POSN                           equ 0003h
PORTB_AN9_POSITION                       equ 0003h
PORTB_AN9_SIZE                           equ 0001h
PORTB_AN9_LENGTH                         equ 0001h
PORTB_AN9_MASK                           equ 0008h
PORTB_KBI2_POSN                          equ 0006h
PORTB_KBI2_POSITION                      equ 0006h
PORTB_KBI2_SIZE                          equ 0001h
PORTB_KBI2_LENGTH                        equ 0001h
PORTB_KBI2_MASK                          equ 0040h
PORTB_KBI3_POSN                          equ 0007h
PORTB_KBI3_POSITION                      equ 0007h
PORTB_KBI3_SIZE                          equ 0001h
PORTB_KBI3_LENGTH                        equ 0001h
PORTB_KBI3_MASK                          equ 0080h
PORTB_INT0_POSN                          equ 0000h
PORTB_INT0_POSITION                      equ 0000h
PORTB_INT0_SIZE                          equ 0001h
PORTB_INT0_LENGTH                        equ 0001h
PORTB_INT0_MASK                          equ 0001h
PORTB_CTEDG1_POSN                        equ 0002h
PORTB_CTEDG1_POSITION                    equ 0002h
PORTB_CTEDG1_SIZE                        equ 0001h
PORTB_CTEDG1_LENGTH                      equ 0001h
PORTB_CTEDG1_MASK                        equ 0004h
PORTB_CTEDG2_POSN                        equ 0003h
PORTB_CTEDG2_POSITION                    equ 0003h
PORTB_CTEDG2_SIZE                        equ 0001h
PORTB_CTEDG2_LENGTH                      equ 0001h
PORTB_CTEDG2_MASK                        equ 0008h
PORTB_KBI0_POSN                          equ 0004h
PORTB_KBI0_POSITION                      equ 0004h
PORTB_KBI0_SIZE                          equ 0001h
PORTB_KBI0_LENGTH                        equ 0001h
PORTB_KBI0_MASK                          equ 0010h
PORTB_KBI1_POSN                          equ 0005h
PORTB_KBI1_POSITION                      equ 0005h
PORTB_KBI1_SIZE                          equ 0001h
PORTB_KBI1_LENGTH                        equ 0001h
PORTB_KBI1_MASK                          equ 0020h
PORTB_PGC_POSN                           equ 0006h
PORTB_PGC_POSITION                       equ 0006h
PORTB_PGC_SIZE                           equ 0001h
PORTB_PGC_LENGTH                         equ 0001h
PORTB_PGC_MASK                           equ 0040h
PORTB_PGD_POSN                           equ 0007h
PORTB_PGD_POSITION                       equ 0007h
PORTB_PGD_SIZE                           equ 0001h
PORTB_PGD_LENGTH                         equ 0001h
PORTB_PGD_MASK                           equ 0080h
PORTB_RP3_POSN                           equ 0000h
PORTB_RP3_POSITION                       equ 0000h
PORTB_RP3_SIZE                           equ 0001h
PORTB_RP3_LENGTH                         equ 0001h
PORTB_RP3_MASK                           equ 0001h
PORTB_RTCC_POSN                          equ 0001h
PORTB_RTCC_POSITION                      equ 0001h
PORTB_RTCC_SIZE                          equ 0001h
PORTB_RTCC_LENGTH                        equ 0001h
PORTB_RTCC_MASK                          equ 0002h
PORTB_SCK1_POSN                          equ 0004h
PORTB_SCK1_POSITION                      equ 0004h
PORTB_SCK1_SIZE                          equ 0001h
PORTB_SCK1_LENGTH                        equ 0001h
PORTB_SCK1_MASK                          equ 0010h
PORTB_SDI1_POSN                          equ 0005h
PORTB_SDI1_POSITION                      equ 0005h
PORTB_SDI1_SIZE                          equ 0001h
PORTB_SDI1_LENGTH                        equ 0001h
PORTB_SDI1_MASK                          equ 0020h
PORTB_RP9_POSN                           equ 0006h
PORTB_RP9_POSITION                       equ 0006h
PORTB_RP9_SIZE                           equ 0001h
PORTB_RP9_LENGTH                         equ 0001h
PORTB_RP9_MASK                           equ 0040h
PORTB_RP10_POSN                          equ 0007h
PORTB_RP10_POSITION                      equ 0007h
PORTB_RP10_SIZE                          equ 0001h
PORTB_RP10_LENGTH                        equ 0001h
PORTB_RP10_MASK                          equ 0080h
PORTB_RP4_POSN                           equ 0001h
PORTB_RP4_POSITION                       equ 0001h
PORTB_RP4_SIZE                           equ 0001h
PORTB_RP4_LENGTH                         equ 0001h
PORTB_RP4_MASK                           equ 0002h
PORTB_VMO_POSN                           equ 0002h
PORTB_VMO_POSITION                       equ 0002h
PORTB_VMO_SIZE                           equ 0001h
PORTB_VMO_LENGTH                         equ 0001h
PORTB_VMO_MASK                           equ 0004h
PORTB_VPO_POSN                           equ 0003h
PORTB_VPO_POSITION                       equ 0003h
PORTB_VPO_SIZE                           equ 0001h
PORTB_VPO_LENGTH                         equ 0001h
PORTB_VPO_MASK                           equ 0008h
PORTB_SCL1_POSN                          equ 0004h
PORTB_SCL1_POSITION                      equ 0004h
PORTB_SCL1_SIZE                          equ 0001h
PORTB_SCL1_LENGTH                        equ 0001h
PORTB_SCL1_MASK                          equ 0010h
PORTB_SDA1_POSN                          equ 0005h
PORTB_SDA1_POSITION                      equ 0005h
PORTB_SDA1_SIZE                          equ 0001h
PORTB_SDA1_LENGTH                        equ 0001h
PORTB_SDA1_MASK                          equ 0020h
PORTB_REFO_POSN                          equ 0002h
PORTB_REFO_POSITION                      equ 0002h
PORTB_REFO_SIZE                          equ 0001h
PORTB_REFO_LENGTH                        equ 0001h
PORTB_REFO_MASK                          equ 0004h
PORTB_RP6_POSN                           equ 0003h
PORTB_RP6_POSITION                       equ 0003h
PORTB_RP6_SIZE                           equ 0001h
PORTB_RP6_LENGTH                         equ 0001h
PORTB_RP6_MASK                           equ 0008h
PORTB_RP7_POSN                           equ 0004h
PORTB_RP7_POSITION                       equ 0004h
PORTB_RP7_SIZE                           equ 0001h
PORTB_RP7_LENGTH                         equ 0001h
PORTB_RP7_MASK                           equ 0010h
PORTB_RP8_POSN                           equ 0005h
PORTB_RP8_POSITION                       equ 0005h
PORTB_RP8_SIZE                           equ 0001h
PORTB_RP8_LENGTH                         equ 0001h
PORTB_RP8_MASK                           equ 0020h
PORTB_RP5_POSN                           equ 0002h
PORTB_RP5_POSITION                       equ 0002h
PORTB_RP5_SIZE                           equ 0001h
PORTB_RP5_LENGTH                         equ 0001h
PORTB_RP5_MASK                           equ 0004h
PORTB_CCP2_PA2_POSN                      equ 0003h
PORTB_CCP2_PA2_POSITION                  equ 0003h
PORTB_CCP2_PA2_SIZE                      equ 0001h
PORTB_CCP2_PA2_LENGTH                    equ 0001h
PORTB_CCP2_PA2_MASK                      equ 0008h

// Register: PORTC
#define PORTC PORTC
PORTC                                    equ 0F82h
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
PORTC_T1OSO_POSN                         equ 0000h
PORTC_T1OSO_POSITION                     equ 0000h
PORTC_T1OSO_SIZE                         equ 0001h
PORTC_T1OSO_LENGTH                       equ 0001h
PORTC_T1OSO_MASK                         equ 0001h
PORTC_T1OSI_POSN                         equ 0001h
PORTC_T1OSI_POSITION                     equ 0001h
PORTC_T1OSI_SIZE                         equ 0001h
PORTC_T1OSI_LENGTH                       equ 0001h
PORTC_T1OSI_MASK                         equ 0002h
PORTC_AN11_POSN                          equ 0002h
PORTC_AN11_POSITION                      equ 0002h
PORTC_AN11_SIZE                          equ 0001h
PORTC_AN11_LENGTH                        equ 0001h
PORTC_AN11_MASK                          equ 0004h
PORTC_D_MINUS_POSN                       equ 0004h
PORTC_D_MINUS_POSITION                   equ 0004h
PORTC_D_MINUS_SIZE                       equ 0001h
PORTC_D_MINUS_LENGTH                     equ 0001h
PORTC_D_MINUS_MASK                       equ 0010h
PORTC_D_PLUS_POSN                        equ 0005h
PORTC_D_PLUS_POSITION                    equ 0005h
PORTC_D_PLUS_SIZE                        equ 0001h
PORTC_D_PLUS_LENGTH                      equ 0001h
PORTC_D_PLUS_MASK                        equ 0020h
PORTC_NOT_UOE_POSN                       equ 0001h
PORTC_NOT_UOE_POSITION                   equ 0001h
PORTC_NOT_UOE_SIZE                       equ 0001h
PORTC_NOT_UOE_LENGTH                     equ 0001h
PORTC_NOT_UOE_MASK                       equ 0002h
PORTC_T1CK_POSN                          equ 0000h
PORTC_T1CK_POSITION                      equ 0000h
PORTC_T1CK_SIZE                          equ 0001h
PORTC_T1CK_LENGTH                        equ 0001h
PORTC_T1CK_MASK                          equ 0001h
PORTC_nUOE_POSN                          equ 0001h
PORTC_nUOE_POSITION                      equ 0001h
PORTC_nUOE_SIZE                          equ 0001h
PORTC_nUOE_LENGTH                        equ 0001h
PORTC_nUOE_MASK                          equ 0002h
PORTC_CTPLS_POSN                         equ 0002h
PORTC_CTPLS_POSITION                     equ 0002h
PORTC_CTPLS_SIZE                         equ 0001h
PORTC_CTPLS_LENGTH                       equ 0001h
PORTC_CTPLS_MASK                         equ 0004h
PORTC_VM_POSN                            equ 0004h
PORTC_VM_POSITION                        equ 0004h
PORTC_VM_SIZE                            equ 0001h
PORTC_VM_LENGTH                          equ 0001h
PORTC_VM_MASK                            equ 0010h
PORTC_VP_POSN                            equ 0005h
PORTC_VP_POSITION                        equ 0005h
PORTC_VP_SIZE                            equ 0001h
PORTC_VP_LENGTH                          equ 0001h
PORTC_VP_MASK                            equ 0020h
PORTC_TX1_POSN                           equ 0006h
PORTC_TX1_POSITION                       equ 0006h
PORTC_TX1_SIZE                           equ 0001h
PORTC_TX1_LENGTH                         equ 0001h
PORTC_TX1_MASK                           equ 0040h
PORTC_RX1_POSN                           equ 0007h
PORTC_RX1_POSITION                       equ 0007h
PORTC_RX1_SIZE                           equ 0001h
PORTC_RX1_LENGTH                         equ 0001h
PORTC_RX1_MASK                           equ 0080h
PORTC_RP11_POSN                          equ 0000h
PORTC_RP11_POSITION                      equ 0000h
PORTC_RP11_SIZE                          equ 0001h
PORTC_RP11_LENGTH                        equ 0001h
PORTC_RP11_MASK                          equ 0001h
PORTC_RP12_POSN                          equ 0001h
PORTC_RP12_POSITION                      equ 0001h
PORTC_RP12_SIZE                          equ 0001h
PORTC_RP12_LENGTH                        equ 0001h
PORTC_RP12_MASK                          equ 0002h
PORTC_RP13_POSN                          equ 0002h
PORTC_RP13_POSITION                      equ 0002h
PORTC_RP13_SIZE                          equ 0001h
PORTC_RP13_LENGTH                        equ 0001h
PORTC_RP13_MASK                          equ 0004h
PORTC_CK1_POSN                           equ 0006h
PORTC_CK1_POSITION                       equ 0006h
PORTC_CK1_SIZE                           equ 0001h
PORTC_CK1_LENGTH                         equ 0001h
PORTC_CK1_MASK                           equ 0040h
PORTC_DT1_POSN                           equ 0007h
PORTC_DT1_POSITION                       equ 0007h
PORTC_DT1_SIZE                           equ 0001h
PORTC_DT1_LENGTH                         equ 0001h
PORTC_DT1_MASK                           equ 0080h
PORTC_RP17_POSN                          equ 0006h
PORTC_RP17_POSITION                      equ 0006h
PORTC_RP17_SIZE                          equ 0001h
PORTC_RP17_LENGTH                        equ 0001h
PORTC_RP17_MASK                          equ 0040h
PORTC_SDO1_POSN                          equ 0007h
PORTC_SDO1_POSITION                      equ 0007h
PORTC_SDO1_SIZE                          equ 0001h
PORTC_SDO1_LENGTH                        equ 0001h
PORTC_SDO1_MASK                          equ 0080h
PORTC_RP18_POSN                          equ 0007h
PORTC_RP18_POSITION                      equ 0007h
PORTC_RP18_SIZE                          equ 0001h
PORTC_RP18_LENGTH                        equ 0001h
PORTC_RP18_MASK                          equ 0080h
PORTC_CCP2_POSN                          equ 0001h
PORTC_CCP2_POSITION                      equ 0001h
PORTC_CCP2_SIZE                          equ 0001h
PORTC_CCP2_LENGTH                        equ 0001h
PORTC_CCP2_MASK                          equ 0002h
PORTC_PA1_POSN                           equ 0002h
PORTC_PA1_POSITION                       equ 0002h
PORTC_PA1_SIZE                           equ 0001h
PORTC_PA1_LENGTH                         equ 0001h
PORTC_PA1_MASK                           equ 0004h
PORTC_PA2_POSN                           equ 0001h
PORTC_PA2_POSITION                       equ 0001h
PORTC_PA2_SIZE                           equ 0001h
PORTC_PA2_LENGTH                         equ 0001h
PORTC_PA2_MASK                           equ 0002h

// Register: HLVDCON
#define HLVDCON HLVDCON
HLVDCON                                  equ 0F85h
// bitfield definitions
HLVDCON_HLVDL_POSN                       equ 0000h
HLVDCON_HLVDL_POSITION                   equ 0000h
HLVDCON_HLVDL_SIZE                       equ 0004h
HLVDCON_HLVDL_LENGTH                     equ 0004h
HLVDCON_HLVDL_MASK                       equ 000Fh
HLVDCON_HLVDEN_POSN                      equ 0004h
HLVDCON_HLVDEN_POSITION                  equ 0004h
HLVDCON_HLVDEN_SIZE                      equ 0001h
HLVDCON_HLVDEN_LENGTH                    equ 0001h
HLVDCON_HLVDEN_MASK                      equ 0010h
HLVDCON_IRVST_POSN                       equ 0005h
HLVDCON_IRVST_POSITION                   equ 0005h
HLVDCON_IRVST_SIZE                       equ 0001h
HLVDCON_IRVST_LENGTH                     equ 0001h
HLVDCON_IRVST_MASK                       equ 0020h
HLVDCON_BGVST_POSN                       equ 0006h
HLVDCON_BGVST_POSITION                   equ 0006h
HLVDCON_BGVST_SIZE                       equ 0001h
HLVDCON_BGVST_LENGTH                     equ 0001h
HLVDCON_BGVST_MASK                       equ 0040h
HLVDCON_VDIRMAG_POSN                     equ 0007h
HLVDCON_VDIRMAG_POSITION                 equ 0007h
HLVDCON_VDIRMAG_SIZE                     equ 0001h
HLVDCON_VDIRMAG_LENGTH                   equ 0001h
HLVDCON_VDIRMAG_MASK                     equ 0080h
HLVDCON_HLVDL0_POSN                      equ 0000h
HLVDCON_HLVDL0_POSITION                  equ 0000h
HLVDCON_HLVDL0_SIZE                      equ 0001h
HLVDCON_HLVDL0_LENGTH                    equ 0001h
HLVDCON_HLVDL0_MASK                      equ 0001h
HLVDCON_HLVDL1_POSN                      equ 0001h
HLVDCON_HLVDL1_POSITION                  equ 0001h
HLVDCON_HLVDL1_SIZE                      equ 0001h
HLVDCON_HLVDL1_LENGTH                    equ 0001h
HLVDCON_HLVDL1_MASK                      equ 0002h
HLVDCON_HLVDL2_POSN                      equ 0002h
HLVDCON_HLVDL2_POSITION                  equ 0002h
HLVDCON_HLVDL2_SIZE                      equ 0001h
HLVDCON_HLVDL2_LENGTH                    equ 0001h
HLVDCON_HLVDL2_MASK                      equ 0004h
HLVDCON_HLVDL3_POSN                      equ 0003h
HLVDCON_HLVDL3_POSITION                  equ 0003h
HLVDCON_HLVDL3_SIZE                      equ 0001h
HLVDCON_HLVDL3_LENGTH                    equ 0001h
HLVDCON_HLVDL3_MASK                      equ 0008h

// Register: DMACON2
#define DMACON2 DMACON2
DMACON2                                  equ 0F86h
// bitfield definitions
DMACON2_INTLVL_POSN                      equ 0000h
DMACON2_INTLVL_POSITION                  equ 0000h
DMACON2_INTLVL_SIZE                      equ 0004h
DMACON2_INTLVL_LENGTH                    equ 0004h
DMACON2_INTLVL_MASK                      equ 000Fh
DMACON2_DLYCYC_POSN                      equ 0004h
DMACON2_DLYCYC_POSITION                  equ 0004h
DMACON2_DLYCYC_SIZE                      equ 0004h
DMACON2_DLYCYC_LENGTH                    equ 0004h
DMACON2_DLYCYC_MASK                      equ 00F0h
DMACON2_INTLVL0_POSN                     equ 0000h
DMACON2_INTLVL0_POSITION                 equ 0000h
DMACON2_INTLVL0_SIZE                     equ 0001h
DMACON2_INTLVL0_LENGTH                   equ 0001h
DMACON2_INTLVL0_MASK                     equ 0001h
DMACON2_INTLVL1_POSN                     equ 0001h
DMACON2_INTLVL1_POSITION                 equ 0001h
DMACON2_INTLVL1_SIZE                     equ 0001h
DMACON2_INTLVL1_LENGTH                   equ 0001h
DMACON2_INTLVL1_MASK                     equ 0002h
DMACON2_INTLVL2_POSN                     equ 0002h
DMACON2_INTLVL2_POSITION                 equ 0002h
DMACON2_INTLVL2_SIZE                     equ 0001h
DMACON2_INTLVL2_LENGTH                   equ 0001h
DMACON2_INTLVL2_MASK                     equ 0004h
DMACON2_INTLVL3_POSN                     equ 0003h
DMACON2_INTLVL3_POSITION                 equ 0003h
DMACON2_INTLVL3_SIZE                     equ 0001h
DMACON2_INTLVL3_LENGTH                   equ 0001h
DMACON2_INTLVL3_MASK                     equ 0008h
DMACON2_DLYCYC0_POSN                     equ 0004h
DMACON2_DLYCYC0_POSITION                 equ 0004h
DMACON2_DLYCYC0_SIZE                     equ 0001h
DMACON2_DLYCYC0_LENGTH                   equ 0001h
DMACON2_DLYCYC0_MASK                     equ 0010h
DMACON2_DLYCYC1_POSN                     equ 0005h
DMACON2_DLYCYC1_POSITION                 equ 0005h
DMACON2_DLYCYC1_SIZE                     equ 0001h
DMACON2_DLYCYC1_LENGTH                   equ 0001h
DMACON2_DLYCYC1_MASK                     equ 0020h
DMACON2_DLYCYC2_POSN                     equ 0006h
DMACON2_DLYCYC2_POSITION                 equ 0006h
DMACON2_DLYCYC2_SIZE                     equ 0001h
DMACON2_DLYCYC2_LENGTH                   equ 0001h
DMACON2_DLYCYC2_MASK                     equ 0040h
DMACON2_DLYCYC3_POSN                     equ 0007h
DMACON2_DLYCYC3_POSITION                 equ 0007h
DMACON2_DLYCYC3_SIZE                     equ 0001h
DMACON2_DLYCYC3_LENGTH                   equ 0001h
DMACON2_DLYCYC3_MASK                     equ 0080h

// Register: DMACON1
#define DMACON1 DMACON1
DMACON1                                  equ 0F88h
// bitfield definitions
DMACON1_DMAEN_POSN                       equ 0000h
DMACON1_DMAEN_POSITION                   equ 0000h
DMACON1_DMAEN_SIZE                       equ 0001h
DMACON1_DMAEN_LENGTH                     equ 0001h
DMACON1_DMAEN_MASK                       equ 0001h
DMACON1_DLYINTEN_POSN                    equ 0001h
DMACON1_DLYINTEN_POSITION                equ 0001h
DMACON1_DLYINTEN_SIZE                    equ 0001h
DMACON1_DLYINTEN_LENGTH                  equ 0001h
DMACON1_DLYINTEN_MASK                    equ 0002h
DMACON1_DUPLEX0_POSN                     equ 0002h
DMACON1_DUPLEX0_POSITION                 equ 0002h
DMACON1_DUPLEX0_SIZE                     equ 0001h
DMACON1_DUPLEX0_LENGTH                   equ 0001h
DMACON1_DUPLEX0_MASK                     equ 0004h
DMACON1_DUPLEX1_POSN                     equ 0003h
DMACON1_DUPLEX1_POSITION                 equ 0003h
DMACON1_DUPLEX1_SIZE                     equ 0001h
DMACON1_DUPLEX1_LENGTH                   equ 0001h
DMACON1_DUPLEX1_MASK                     equ 0008h
DMACON1_RXINC_POSN                       equ 0004h
DMACON1_RXINC_POSITION                   equ 0004h
DMACON1_RXINC_SIZE                       equ 0001h
DMACON1_RXINC_LENGTH                     equ 0001h
DMACON1_RXINC_MASK                       equ 0010h
DMACON1_TXINC_POSN                       equ 0005h
DMACON1_TXINC_POSITION                   equ 0005h
DMACON1_TXINC_SIZE                       equ 0001h
DMACON1_TXINC_LENGTH                     equ 0001h
DMACON1_TXINC_MASK                       equ 0020h
DMACON1_SSCON0_POSN                      equ 0006h
DMACON1_SSCON0_POSITION                  equ 0006h
DMACON1_SSCON0_SIZE                      equ 0001h
DMACON1_SSCON0_LENGTH                    equ 0001h
DMACON1_SSCON0_MASK                      equ 0040h
DMACON1_SSCON1_POSN                      equ 0007h
DMACON1_SSCON1_POSITION                  equ 0007h
DMACON1_SSCON1_SIZE                      equ 0001h
DMACON1_SSCON1_LENGTH                    equ 0001h
DMACON1_SSCON1_MASK                      equ 0080h

// Register: LATA
#define LATA LATA
LATA                                     equ 0F89h
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
LATA_LA0_POSN                            equ 0000h
LATA_LA0_POSITION                        equ 0000h
LATA_LA0_SIZE                            equ 0001h
LATA_LA0_LENGTH                          equ 0001h
LATA_LA0_MASK                            equ 0001h
LATA_LA1_POSN                            equ 0001h
LATA_LA1_POSITION                        equ 0001h
LATA_LA1_SIZE                            equ 0001h
LATA_LA1_LENGTH                          equ 0001h
LATA_LA1_MASK                            equ 0002h
LATA_LA2_POSN                            equ 0002h
LATA_LA2_POSITION                        equ 0002h
LATA_LA2_SIZE                            equ 0001h
LATA_LA2_LENGTH                          equ 0001h
LATA_LA2_MASK                            equ 0004h
LATA_LA3_POSN                            equ 0003h
LATA_LA3_POSITION                        equ 0003h
LATA_LA3_SIZE                            equ 0001h
LATA_LA3_LENGTH                          equ 0001h
LATA_LA3_MASK                            equ 0008h
LATA_LA5_POSN                            equ 0005h
LATA_LA5_POSITION                        equ 0005h
LATA_LA5_SIZE                            equ 0001h
LATA_LA5_LENGTH                          equ 0001h
LATA_LA5_MASK                            equ 0020h
LATA_LA6_POSN                            equ 0006h
LATA_LA6_POSITION                        equ 0006h
LATA_LA6_SIZE                            equ 0001h
LATA_LA6_LENGTH                          equ 0001h
LATA_LA6_MASK                            equ 0040h
LATA_LA7_POSN                            equ 0007h
LATA_LA7_POSITION                        equ 0007h
LATA_LA7_SIZE                            equ 0001h
LATA_LA7_LENGTH                          equ 0001h
LATA_LA7_MASK                            equ 0080h

// Register: LATB
#define LATB LATB
LATB                                     equ 0F8Ah
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
LATB_LB0_POSN                            equ 0000h
LATB_LB0_POSITION                        equ 0000h
LATB_LB0_SIZE                            equ 0001h
LATB_LB0_LENGTH                          equ 0001h
LATB_LB0_MASK                            equ 0001h
LATB_LB1_POSN                            equ 0001h
LATB_LB1_POSITION                        equ 0001h
LATB_LB1_SIZE                            equ 0001h
LATB_LB1_LENGTH                          equ 0001h
LATB_LB1_MASK                            equ 0002h
LATB_LB2_POSN                            equ 0002h
LATB_LB2_POSITION                        equ 0002h
LATB_LB2_SIZE                            equ 0001h
LATB_LB2_LENGTH                          equ 0001h
LATB_LB2_MASK                            equ 0004h
LATB_LB3_POSN                            equ 0003h
LATB_LB3_POSITION                        equ 0003h
LATB_LB3_SIZE                            equ 0001h
LATB_LB3_LENGTH                          equ 0001h
LATB_LB3_MASK                            equ 0008h
LATB_LB4_POSN                            equ 0004h
LATB_LB4_POSITION                        equ 0004h
LATB_LB4_SIZE                            equ 0001h
LATB_LB4_LENGTH                          equ 0001h
LATB_LB4_MASK                            equ 0010h
LATB_LB5_POSN                            equ 0005h
LATB_LB5_POSITION                        equ 0005h
LATB_LB5_SIZE                            equ 0001h
LATB_LB5_LENGTH                          equ 0001h
LATB_LB5_MASK                            equ 0020h
LATB_LB6_POSN                            equ 0006h
LATB_LB6_POSITION                        equ 0006h
LATB_LB6_SIZE                            equ 0001h
LATB_LB6_LENGTH                          equ 0001h
LATB_LB6_MASK                            equ 0040h
LATB_LB7_POSN                            equ 0007h
LATB_LB7_POSITION                        equ 0007h
LATB_LB7_SIZE                            equ 0001h
LATB_LB7_LENGTH                          equ 0001h
LATB_LB7_MASK                            equ 0080h

// Register: LATC
#define LATC LATC
LATC                                     equ 0F8Bh
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
LATC_LC0_POSN                            equ 0000h
LATC_LC0_POSITION                        equ 0000h
LATC_LC0_SIZE                            equ 0001h
LATC_LC0_LENGTH                          equ 0001h
LATC_LC0_MASK                            equ 0001h
LATC_LC1_POSN                            equ 0001h
LATC_LC1_POSITION                        equ 0001h
LATC_LC1_SIZE                            equ 0001h
LATC_LC1_LENGTH                          equ 0001h
LATC_LC1_MASK                            equ 0002h
LATC_LC2_POSN                            equ 0002h
LATC_LC2_POSITION                        equ 0002h
LATC_LC2_SIZE                            equ 0001h
LATC_LC2_LENGTH                          equ 0001h
LATC_LC2_MASK                            equ 0004h
LATC_LC4_POSN                            equ 0004h
LATC_LC4_POSITION                        equ 0004h
LATC_LC4_SIZE                            equ 0001h
LATC_LC4_LENGTH                          equ 0001h
LATC_LC4_MASK                            equ 0010h
LATC_LC5_POSN                            equ 0005h
LATC_LC5_POSITION                        equ 0005h
LATC_LC5_SIZE                            equ 0001h
LATC_LC5_LENGTH                          equ 0001h
LATC_LC5_MASK                            equ 0020h
LATC_LC6_POSN                            equ 0006h
LATC_LC6_POSITION                        equ 0006h
LATC_LC6_SIZE                            equ 0001h
LATC_LC6_LENGTH                          equ 0001h
LATC_LC6_MASK                            equ 0040h
LATC_LC7_POSN                            equ 0007h
LATC_LC7_POSITION                        equ 0007h
LATC_LC7_SIZE                            equ 0001h
LATC_LC7_LENGTH                          equ 0001h
LATC_LC7_MASK                            equ 0080h

// Register: ALRMVALL
#define ALRMVALL ALRMVALL
ALRMVALL                                 equ 0F8Eh
// bitfield definitions
ALRMVALL_ALRMVALL_POSN                   equ 0000h
ALRMVALL_ALRMVALL_POSITION               equ 0000h
ALRMVALL_ALRMVALL_SIZE                   equ 0008h
ALRMVALL_ALRMVALL_LENGTH                 equ 0008h
ALRMVALL_ALRMVALL_MASK                   equ 00FFh

// Register: ALRMVALH
#define ALRMVALH ALRMVALH
ALRMVALH                                 equ 0F8Fh
// bitfield definitions
ALRMVALH_ALRMVALH_POSN                   equ 0000h
ALRMVALH_ALRMVALH_POSITION               equ 0000h
ALRMVALH_ALRMVALH_SIZE                   equ 0008h
ALRMVALH_ALRMVALH_LENGTH                 equ 0008h
ALRMVALH_ALRMVALH_MASK                   equ 00FFh

// Register: ALRMRPT
#define ALRMRPT ALRMRPT
ALRMRPT                                  equ 0F90h
// bitfield definitions
ALRMRPT_ARPT_POSN                        equ 0000h
ALRMRPT_ARPT_POSITION                    equ 0000h
ALRMRPT_ARPT_SIZE                        equ 0008h
ALRMRPT_ARPT_LENGTH                      equ 0008h
ALRMRPT_ARPT_MASK                        equ 00FFh
ALRMRPT_ARPT0_POSN                       equ 0000h
ALRMRPT_ARPT0_POSITION                   equ 0000h
ALRMRPT_ARPT0_SIZE                       equ 0001h
ALRMRPT_ARPT0_LENGTH                     equ 0001h
ALRMRPT_ARPT0_MASK                       equ 0001h
ALRMRPT_ARPT1_POSN                       equ 0001h
ALRMRPT_ARPT1_POSITION                   equ 0001h
ALRMRPT_ARPT1_SIZE                       equ 0001h
ALRMRPT_ARPT1_LENGTH                     equ 0001h
ALRMRPT_ARPT1_MASK                       equ 0002h
ALRMRPT_ARPT2_POSN                       equ 0002h
ALRMRPT_ARPT2_POSITION                   equ 0002h
ALRMRPT_ARPT2_SIZE                       equ 0001h
ALRMRPT_ARPT2_LENGTH                     equ 0001h
ALRMRPT_ARPT2_MASK                       equ 0004h
ALRMRPT_ARPT3_POSN                       equ 0003h
ALRMRPT_ARPT3_POSITION                   equ 0003h
ALRMRPT_ARPT3_SIZE                       equ 0001h
ALRMRPT_ARPT3_LENGTH                     equ 0001h
ALRMRPT_ARPT3_MASK                       equ 0008h
ALRMRPT_ARPT4_POSN                       equ 0004h
ALRMRPT_ARPT4_POSITION                   equ 0004h
ALRMRPT_ARPT4_SIZE                       equ 0001h
ALRMRPT_ARPT4_LENGTH                     equ 0001h
ALRMRPT_ARPT4_MASK                       equ 0010h
ALRMRPT_ARPT5_POSN                       equ 0005h
ALRMRPT_ARPT5_POSITION                   equ 0005h
ALRMRPT_ARPT5_SIZE                       equ 0001h
ALRMRPT_ARPT5_LENGTH                     equ 0001h
ALRMRPT_ARPT5_MASK                       equ 0020h
ALRMRPT_ARPT6_POSN                       equ 0006h
ALRMRPT_ARPT6_POSITION                   equ 0006h
ALRMRPT_ARPT6_SIZE                       equ 0001h
ALRMRPT_ARPT6_LENGTH                     equ 0001h
ALRMRPT_ARPT6_MASK                       equ 0040h
ALRMRPT_ARPT7_POSN                       equ 0007h
ALRMRPT_ARPT7_POSITION                   equ 0007h
ALRMRPT_ARPT7_SIZE                       equ 0001h
ALRMRPT_ARPT7_LENGTH                     equ 0001h
ALRMRPT_ARPT7_MASK                       equ 0080h

// Register: ALRMCFG
#define ALRMCFG ALRMCFG
ALRMCFG                                  equ 0F91h
// bitfield definitions
ALRMCFG_ALRMPTR_POSN                     equ 0000h
ALRMCFG_ALRMPTR_POSITION                 equ 0000h
ALRMCFG_ALRMPTR_SIZE                     equ 0002h
ALRMCFG_ALRMPTR_LENGTH                   equ 0002h
ALRMCFG_ALRMPTR_MASK                     equ 0003h
ALRMCFG_AMASK_POSN                       equ 0002h
ALRMCFG_AMASK_POSITION                   equ 0002h
ALRMCFG_AMASK_SIZE                       equ 0004h
ALRMCFG_AMASK_LENGTH                     equ 0004h
ALRMCFG_AMASK_MASK                       equ 003Ch
ALRMCFG_CHIME_POSN                       equ 0006h
ALRMCFG_CHIME_POSITION                   equ 0006h
ALRMCFG_CHIME_SIZE                       equ 0001h
ALRMCFG_CHIME_LENGTH                     equ 0001h
ALRMCFG_CHIME_MASK                       equ 0040h
ALRMCFG_ALRMEN_POSN                      equ 0007h
ALRMCFG_ALRMEN_POSITION                  equ 0007h
ALRMCFG_ALRMEN_SIZE                      equ 0001h
ALRMCFG_ALRMEN_LENGTH                    equ 0001h
ALRMCFG_ALRMEN_MASK                      equ 0080h
ALRMCFG_ALRMPTR0_POSN                    equ 0000h
ALRMCFG_ALRMPTR0_POSITION                equ 0000h
ALRMCFG_ALRMPTR0_SIZE                    equ 0001h
ALRMCFG_ALRMPTR0_LENGTH                  equ 0001h
ALRMCFG_ALRMPTR0_MASK                    equ 0001h
ALRMCFG_ALRMPTR1_POSN                    equ 0001h
ALRMCFG_ALRMPTR1_POSITION                equ 0001h
ALRMCFG_ALRMPTR1_SIZE                    equ 0001h
ALRMCFG_ALRMPTR1_LENGTH                  equ 0001h
ALRMCFG_ALRMPTR1_MASK                    equ 0002h
ALRMCFG_AMASK0_POSN                      equ 0002h
ALRMCFG_AMASK0_POSITION                  equ 0002h
ALRMCFG_AMASK0_SIZE                      equ 0001h
ALRMCFG_AMASK0_LENGTH                    equ 0001h
ALRMCFG_AMASK0_MASK                      equ 0004h
ALRMCFG_AMASK1_POSN                      equ 0003h
ALRMCFG_AMASK1_POSITION                  equ 0003h
ALRMCFG_AMASK1_SIZE                      equ 0001h
ALRMCFG_AMASK1_LENGTH                    equ 0001h
ALRMCFG_AMASK1_MASK                      equ 0008h
ALRMCFG_AMASK2_POSN                      equ 0004h
ALRMCFG_AMASK2_POSITION                  equ 0004h
ALRMCFG_AMASK2_SIZE                      equ 0001h
ALRMCFG_AMASK2_LENGTH                    equ 0001h
ALRMCFG_AMASK2_MASK                      equ 0010h
ALRMCFG_AMASK3_POSN                      equ 0005h
ALRMCFG_AMASK3_POSITION                  equ 0005h
ALRMCFG_AMASK3_SIZE                      equ 0001h
ALRMCFG_AMASK3_LENGTH                    equ 0001h
ALRMCFG_AMASK3_MASK                      equ 0020h

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0F92h
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
TRISB                                    equ 0F93h
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
TRISC                                    equ 0F94h
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

// Register: T3GCON
#define T3GCON T3GCON
T3GCON                                   equ 0F97h
// bitfield definitions
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
T3GCON_T3GVAL_POSN                       equ 0002h
T3GCON_T3GVAL_POSITION                   equ 0002h
T3GCON_T3GVAL_SIZE                       equ 0001h
T3GCON_T3GVAL_LENGTH                     equ 0001h
T3GCON_T3GVAL_MASK                       equ 0004h
T3GCON_T3GGO_T3DONE_POSN                 equ 0003h
T3GCON_T3GGO_T3DONE_POSITION             equ 0003h
T3GCON_T3GGO_T3DONE_SIZE                 equ 0001h
T3GCON_T3GGO_T3DONE_LENGTH               equ 0001h
T3GCON_T3GGO_T3DONE_MASK                 equ 0008h
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
T3GCON_T3GGO_POSN                        equ 0003h
T3GCON_T3GGO_POSITION                    equ 0003h
T3GCON_T3GGO_SIZE                        equ 0001h
T3GCON_T3GGO_LENGTH                      equ 0001h
T3GCON_T3GGO_MASK                        equ 0008h
T3GCON_T3DONE_POSN                       equ 0003h
T3GCON_T3DONE_POSITION                   equ 0003h
T3GCON_T3DONE_SIZE                       equ 0001h
T3GCON_T3DONE_LENGTH                     equ 0001h
T3GCON_T3DONE_MASK                       equ 0008h

// Register: RTCVALL
#define RTCVALL RTCVALL
RTCVALL                                  equ 0F98h
// bitfield definitions
RTCVALL_RTCVALL_POSN                     equ 0000h
RTCVALL_RTCVALL_POSITION                 equ 0000h
RTCVALL_RTCVALL_SIZE                     equ 0008h
RTCVALL_RTCVALL_LENGTH                   equ 0008h
RTCVALL_RTCVALL_MASK                     equ 00FFh

// Register: RTCVALH
#define RTCVALH RTCVALH
RTCVALH                                  equ 0F99h
// bitfield definitions
RTCVALH_RTCVALH_POSN                     equ 0000h
RTCVALH_RTCVALH_POSITION                 equ 0000h
RTCVALH_RTCVALH_SIZE                     equ 0008h
RTCVALH_RTCVALH_LENGTH                   equ 0008h
RTCVALH_RTCVALH_MASK                     equ 00FFh
RTCVALH_WAITE0_POSN                      equ 0000h
RTCVALH_WAITE0_POSITION                  equ 0000h
RTCVALH_WAITE0_SIZE                      equ 0001h
RTCVALH_WAITE0_LENGTH                    equ 0001h
RTCVALH_WAITE0_MASK                      equ 0001h
RTCVALH_WAITE1_POSN                      equ 0001h
RTCVALH_WAITE1_POSITION                  equ 0001h
RTCVALH_WAITE1_SIZE                      equ 0001h
RTCVALH_WAITE1_LENGTH                    equ 0001h
RTCVALH_WAITE1_MASK                      equ 0002h
RTCVALH_WAITM0_POSN                      equ 0002h
RTCVALH_WAITM0_POSITION                  equ 0002h
RTCVALH_WAITM0_SIZE                      equ 0001h
RTCVALH_WAITM0_LENGTH                    equ 0001h
RTCVALH_WAITM0_MASK                      equ 0004h
RTCVALH_WAITM1_POSN                      equ 0003h
RTCVALH_WAITM1_POSITION                  equ 0003h
RTCVALH_WAITM1_SIZE                      equ 0001h
RTCVALH_WAITM1_LENGTH                    equ 0001h
RTCVALH_WAITM1_MASK                      equ 0008h
RTCVALH_WAITM2_POSN                      equ 0004h
RTCVALH_WAITM2_POSITION                  equ 0004h
RTCVALH_WAITM2_SIZE                      equ 0001h
RTCVALH_WAITM2_LENGTH                    equ 0001h
RTCVALH_WAITM2_MASK                      equ 0010h
RTCVALH_WAITM3_POSN                      equ 0005h
RTCVALH_WAITM3_POSITION                  equ 0005h
RTCVALH_WAITM3_SIZE                      equ 0001h
RTCVALH_WAITM3_LENGTH                    equ 0001h
RTCVALH_WAITM3_MASK                      equ 0020h
RTCVALH_WAITB0_POSN                      equ 0006h
RTCVALH_WAITB0_POSITION                  equ 0006h
RTCVALH_WAITB0_SIZE                      equ 0001h
RTCVALH_WAITB0_LENGTH                    equ 0001h
RTCVALH_WAITB0_MASK                      equ 0040h
RTCVALH_WAITB1_POSN                      equ 0007h
RTCVALH_WAITB1_POSITION                  equ 0007h
RTCVALH_WAITB1_SIZE                      equ 0001h
RTCVALH_WAITB1_LENGTH                    equ 0001h
RTCVALH_WAITB1_MASK                      equ 0080h

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 0F9Ah
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
T1GCON_T1GGO_T1DONE_POSN                 equ 0003h
T1GCON_T1GGO_T1DONE_POSITION             equ 0003h
T1GCON_T1GGO_T1DONE_SIZE                 equ 0001h
T1GCON_T1GGO_T1DONE_LENGTH               equ 0001h
T1GCON_T1GGO_T1DONE_MASK                 equ 0008h
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
T1GCON_T1GGO_POSN                        equ 0003h
T1GCON_T1GGO_POSITION                    equ 0003h
T1GCON_T1GGO_SIZE                        equ 0001h
T1GCON_T1GGO_LENGTH                      equ 0001h
T1GCON_T1GGO_MASK                        equ 0008h
T1GCON_T1DONE_POSN                       equ 0003h
T1GCON_T1DONE_POSITION                   equ 0003h
T1GCON_T1DONE_SIZE                       equ 0001h
T1GCON_T1DONE_LENGTH                     equ 0001h
T1GCON_T1DONE_MASK                       equ 0008h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0F9Bh
// bitfield definitions
OSCTUNE_TUN_POSN                         equ 0000h
OSCTUNE_TUN_POSITION                     equ 0000h
OSCTUNE_TUN_SIZE                         equ 0006h
OSCTUNE_TUN_LENGTH                       equ 0006h
OSCTUNE_TUN_MASK                         equ 003Fh
OSCTUNE_PLLEN_POSN                       equ 0006h
OSCTUNE_PLLEN_POSITION                   equ 0006h
OSCTUNE_PLLEN_SIZE                       equ 0001h
OSCTUNE_PLLEN_LENGTH                     equ 0001h
OSCTUNE_PLLEN_MASK                       equ 0040h
OSCTUNE_INTSRC_POSN                      equ 0007h
OSCTUNE_INTSRC_POSITION                  equ 0007h
OSCTUNE_INTSRC_SIZE                      equ 0001h
OSCTUNE_INTSRC_LENGTH                    equ 0001h
OSCTUNE_INTSRC_MASK                      equ 0080h
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

// Register: RCSTA2
#define RCSTA2 RCSTA2
RCSTA2                                   equ 0F9Ch
// bitfield definitions
RCSTA2_RX9D_POSN                         equ 0000h
RCSTA2_RX9D_POSITION                     equ 0000h
RCSTA2_RX9D_SIZE                         equ 0001h
RCSTA2_RX9D_LENGTH                       equ 0001h
RCSTA2_RX9D_MASK                         equ 0001h
RCSTA2_OERR_POSN                         equ 0001h
RCSTA2_OERR_POSITION                     equ 0001h
RCSTA2_OERR_SIZE                         equ 0001h
RCSTA2_OERR_LENGTH                       equ 0001h
RCSTA2_OERR_MASK                         equ 0002h
RCSTA2_FERR_POSN                         equ 0002h
RCSTA2_FERR_POSITION                     equ 0002h
RCSTA2_FERR_SIZE                         equ 0001h
RCSTA2_FERR_LENGTH                       equ 0001h
RCSTA2_FERR_MASK                         equ 0004h
RCSTA2_ADDEN_POSN                        equ 0003h
RCSTA2_ADDEN_POSITION                    equ 0003h
RCSTA2_ADDEN_SIZE                        equ 0001h
RCSTA2_ADDEN_LENGTH                      equ 0001h
RCSTA2_ADDEN_MASK                        equ 0008h
RCSTA2_CREN_POSN                         equ 0004h
RCSTA2_CREN_POSITION                     equ 0004h
RCSTA2_CREN_SIZE                         equ 0001h
RCSTA2_CREN_LENGTH                       equ 0001h
RCSTA2_CREN_MASK                         equ 0010h
RCSTA2_SREN_POSN                         equ 0005h
RCSTA2_SREN_POSITION                     equ 0005h
RCSTA2_SREN_SIZE                         equ 0001h
RCSTA2_SREN_LENGTH                       equ 0001h
RCSTA2_SREN_MASK                         equ 0020h
RCSTA2_RX9_POSN                          equ 0006h
RCSTA2_RX9_POSITION                      equ 0006h
RCSTA2_RX9_SIZE                          equ 0001h
RCSTA2_RX9_LENGTH                        equ 0001h
RCSTA2_RX9_MASK                          equ 0040h
RCSTA2_SPEN_POSN                         equ 0007h
RCSTA2_SPEN_POSITION                     equ 0007h
RCSTA2_SPEN_SIZE                         equ 0001h
RCSTA2_SPEN_LENGTH                       equ 0001h
RCSTA2_SPEN_MASK                         equ 0080h
RCSTA2_RX9D2_POSN                        equ 0000h
RCSTA2_RX9D2_POSITION                    equ 0000h
RCSTA2_RX9D2_SIZE                        equ 0001h
RCSTA2_RX9D2_LENGTH                      equ 0001h
RCSTA2_RX9D2_MASK                        equ 0001h
RCSTA2_OERR2_POSN                        equ 0001h
RCSTA2_OERR2_POSITION                    equ 0001h
RCSTA2_OERR2_SIZE                        equ 0001h
RCSTA2_OERR2_LENGTH                      equ 0001h
RCSTA2_OERR2_MASK                        equ 0002h
RCSTA2_FERR2_POSN                        equ 0002h
RCSTA2_FERR2_POSITION                    equ 0002h
RCSTA2_FERR2_SIZE                        equ 0001h
RCSTA2_FERR2_LENGTH                      equ 0001h
RCSTA2_FERR2_MASK                        equ 0004h
RCSTA2_ADDEN2_POSN                       equ 0003h
RCSTA2_ADDEN2_POSITION                   equ 0003h
RCSTA2_ADDEN2_SIZE                       equ 0001h
RCSTA2_ADDEN2_LENGTH                     equ 0001h
RCSTA2_ADDEN2_MASK                       equ 0008h
RCSTA2_CREN2_POSN                        equ 0004h
RCSTA2_CREN2_POSITION                    equ 0004h
RCSTA2_CREN2_SIZE                        equ 0001h
RCSTA2_CREN2_LENGTH                      equ 0001h
RCSTA2_CREN2_MASK                        equ 0010h
RCSTA2_SREN2_POSN                        equ 0005h
RCSTA2_SREN2_POSITION                    equ 0005h
RCSTA2_SREN2_SIZE                        equ 0001h
RCSTA2_SREN2_LENGTH                      equ 0001h
RCSTA2_SREN2_MASK                        equ 0020h
RCSTA2_RX92_POSN                         equ 0006h
RCSTA2_RX92_POSITION                     equ 0006h
RCSTA2_RX92_SIZE                         equ 0001h
RCSTA2_RX92_LENGTH                       equ 0001h
RCSTA2_RX92_MASK                         equ 0040h
RCSTA2_SPEN2_POSN                        equ 0007h
RCSTA2_SPEN2_POSITION                    equ 0007h
RCSTA2_SPEN2_SIZE                        equ 0001h
RCSTA2_SPEN2_LENGTH                      equ 0001h
RCSTA2_SPEN2_MASK                        equ 0080h
RCSTA2_RCD82_POSN                        equ 0000h
RCSTA2_RCD82_POSITION                    equ 0000h
RCSTA2_RCD82_SIZE                        equ 0001h
RCSTA2_RCD82_LENGTH                      equ 0001h
RCSTA2_RCD82_MASK                        equ 0001h
RCSTA2_RC8_92_POSN                       equ 0006h
RCSTA2_RC8_92_POSITION                   equ 0006h
RCSTA2_RC8_92_SIZE                       equ 0001h
RCSTA2_RC8_92_LENGTH                     equ 0001h
RCSTA2_RC8_92_MASK                       equ 0040h
RCSTA2_RC92_POSN                         equ 0006h
RCSTA2_RC92_POSITION                     equ 0006h
RCSTA2_RC92_SIZE                         equ 0001h
RCSTA2_RC92_LENGTH                       equ 0001h
RCSTA2_RC92_MASK                         equ 0040h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0F9Dh
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
PIE1_TX1IE_POSN                          equ 0004h
PIE1_TX1IE_POSITION                      equ 0004h
PIE1_TX1IE_SIZE                          equ 0001h
PIE1_TX1IE_LENGTH                        equ 0001h
PIE1_TX1IE_MASK                          equ 0010h
PIE1_RC1IE_POSN                          equ 0005h
PIE1_RC1IE_POSITION                      equ 0005h
PIE1_RC1IE_SIZE                          equ 0001h
PIE1_RC1IE_LENGTH                        equ 0001h
PIE1_RC1IE_MASK                          equ 0020h
PIE1_ADIE_POSN                           equ 0006h
PIE1_ADIE_POSITION                       equ 0006h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0040h
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

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 0F9Eh
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
PIR1_TX1IF_POSN                          equ 0004h
PIR1_TX1IF_POSITION                      equ 0004h
PIR1_TX1IF_SIZE                          equ 0001h
PIR1_TX1IF_LENGTH                        equ 0001h
PIR1_TX1IF_MASK                          equ 0010h
PIR1_RC1IF_POSN                          equ 0005h
PIR1_RC1IF_POSITION                      equ 0005h
PIR1_RC1IF_SIZE                          equ 0001h
PIR1_RC1IF_LENGTH                        equ 0001h
PIR1_RC1IF_MASK                          equ 0020h
PIR1_ADIF_POSN                           equ 0006h
PIR1_ADIF_POSITION                       equ 0006h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0040h
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

// Register: IPR1
#define IPR1 IPR1
IPR1                                     equ 0F9Fh
// bitfield definitions
IPR1_TMR1IP_POSN                         equ 0000h
IPR1_TMR1IP_POSITION                     equ 0000h
IPR1_TMR1IP_SIZE                         equ 0001h
IPR1_TMR1IP_LENGTH                       equ 0001h
IPR1_TMR1IP_MASK                         equ 0001h
IPR1_TMR2IP_POSN                         equ 0001h
IPR1_TMR2IP_POSITION                     equ 0001h
IPR1_TMR2IP_SIZE                         equ 0001h
IPR1_TMR2IP_LENGTH                       equ 0001h
IPR1_TMR2IP_MASK                         equ 0002h
IPR1_CCP1IP_POSN                         equ 0002h
IPR1_CCP1IP_POSITION                     equ 0002h
IPR1_CCP1IP_SIZE                         equ 0001h
IPR1_CCP1IP_LENGTH                       equ 0001h
IPR1_CCP1IP_MASK                         equ 0004h
IPR1_SSP1IP_POSN                         equ 0003h
IPR1_SSP1IP_POSITION                     equ 0003h
IPR1_SSP1IP_SIZE                         equ 0001h
IPR1_SSP1IP_LENGTH                       equ 0001h
IPR1_SSP1IP_MASK                         equ 0008h
IPR1_TX1IP_POSN                          equ 0004h
IPR1_TX1IP_POSITION                      equ 0004h
IPR1_TX1IP_SIZE                          equ 0001h
IPR1_TX1IP_LENGTH                        equ 0001h
IPR1_TX1IP_MASK                          equ 0010h
IPR1_RC1IP_POSN                          equ 0005h
IPR1_RC1IP_POSITION                      equ 0005h
IPR1_RC1IP_SIZE                          equ 0001h
IPR1_RC1IP_LENGTH                        equ 0001h
IPR1_RC1IP_MASK                          equ 0020h
IPR1_ADIP_POSN                           equ 0006h
IPR1_ADIP_POSITION                       equ 0006h
IPR1_ADIP_SIZE                           equ 0001h
IPR1_ADIP_LENGTH                         equ 0001h
IPR1_ADIP_MASK                           equ 0040h
IPR1_SSPIP_POSN                          equ 0003h
IPR1_SSPIP_POSITION                      equ 0003h
IPR1_SSPIP_SIZE                          equ 0001h
IPR1_SSPIP_LENGTH                        equ 0001h
IPR1_SSPIP_MASK                          equ 0008h
IPR1_TXIP_POSN                           equ 0004h
IPR1_TXIP_POSITION                       equ 0004h
IPR1_TXIP_SIZE                           equ 0001h
IPR1_TXIP_LENGTH                         equ 0001h
IPR1_TXIP_MASK                           equ 0010h
IPR1_RCIP_POSN                           equ 0005h
IPR1_RCIP_POSITION                       equ 0005h
IPR1_RCIP_SIZE                           equ 0001h
IPR1_RCIP_LENGTH                         equ 0001h
IPR1_RCIP_MASK                           equ 0020h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0FA0h
// bitfield definitions
PIE2_CCP2IE_POSN                         equ 0000h
PIE2_CCP2IE_POSITION                     equ 0000h
PIE2_CCP2IE_SIZE                         equ 0001h
PIE2_CCP2IE_LENGTH                       equ 0001h
PIE2_CCP2IE_MASK                         equ 0001h
PIE2_TMR3IE_POSN                         equ 0001h
PIE2_TMR3IE_POSITION                     equ 0001h
PIE2_TMR3IE_SIZE                         equ 0001h
PIE2_TMR3IE_LENGTH                       equ 0001h
PIE2_TMR3IE_MASK                         equ 0002h
PIE2_LVDIE_POSN                          equ 0002h
PIE2_LVDIE_POSITION                      equ 0002h
PIE2_LVDIE_SIZE                          equ 0001h
PIE2_LVDIE_LENGTH                        equ 0001h
PIE2_LVDIE_MASK                          equ 0004h
PIE2_BCL1IE_POSN                         equ 0003h
PIE2_BCL1IE_POSITION                     equ 0003h
PIE2_BCL1IE_SIZE                         equ 0001h
PIE2_BCL1IE_LENGTH                       equ 0001h
PIE2_BCL1IE_MASK                         equ 0008h
PIE2_USBIE_POSN                          equ 0004h
PIE2_USBIE_POSITION                      equ 0004h
PIE2_USBIE_SIZE                          equ 0001h
PIE2_USBIE_LENGTH                        equ 0001h
PIE2_USBIE_MASK                          equ 0010h
PIE2_CM1IE_POSN                          equ 0005h
PIE2_CM1IE_POSITION                      equ 0005h
PIE2_CM1IE_SIZE                          equ 0001h
PIE2_CM1IE_LENGTH                        equ 0001h
PIE2_CM1IE_MASK                          equ 0020h
PIE2_CM2IE_POSN                          equ 0006h
PIE2_CM2IE_POSITION                      equ 0006h
PIE2_CM2IE_SIZE                          equ 0001h
PIE2_CM2IE_LENGTH                        equ 0001h
PIE2_CM2IE_MASK                          equ 0040h
PIE2_OSCFIE_POSN                         equ 0007h
PIE2_OSCFIE_POSITION                     equ 0007h
PIE2_OSCFIE_SIZE                         equ 0001h
PIE2_OSCFIE_LENGTH                       equ 0001h
PIE2_OSCFIE_MASK                         equ 0080h
PIE2_BCLIE_POSN                          equ 0003h
PIE2_BCLIE_POSITION                      equ 0003h
PIE2_BCLIE_SIZE                          equ 0001h
PIE2_BCLIE_LENGTH                        equ 0001h
PIE2_BCLIE_MASK                          equ 0008h
PIE2_CMIE_POSN                           equ 0006h
PIE2_CMIE_POSITION                       equ 0006h
PIE2_CMIE_SIZE                           equ 0001h
PIE2_CMIE_LENGTH                         equ 0001h
PIE2_CMIE_MASK                           equ 0040h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0FA1h
// bitfield definitions
PIR2_CCP2IF_POSN                         equ 0000h
PIR2_CCP2IF_POSITION                     equ 0000h
PIR2_CCP2IF_SIZE                         equ 0001h
PIR2_CCP2IF_LENGTH                       equ 0001h
PIR2_CCP2IF_MASK                         equ 0001h
PIR2_TMR3IF_POSN                         equ 0001h
PIR2_TMR3IF_POSITION                     equ 0001h
PIR2_TMR3IF_SIZE                         equ 0001h
PIR2_TMR3IF_LENGTH                       equ 0001h
PIR2_TMR3IF_MASK                         equ 0002h
PIR2_LVDIF_POSN                          equ 0002h
PIR2_LVDIF_POSITION                      equ 0002h
PIR2_LVDIF_SIZE                          equ 0001h
PIR2_LVDIF_LENGTH                        equ 0001h
PIR2_LVDIF_MASK                          equ 0004h
PIR2_BCL1IF_POSN                         equ 0003h
PIR2_BCL1IF_POSITION                     equ 0003h
PIR2_BCL1IF_SIZE                         equ 0001h
PIR2_BCL1IF_LENGTH                       equ 0001h
PIR2_BCL1IF_MASK                         equ 0008h
PIR2_USBIF_POSN                          equ 0004h
PIR2_USBIF_POSITION                      equ 0004h
PIR2_USBIF_SIZE                          equ 0001h
PIR2_USBIF_LENGTH                        equ 0001h
PIR2_USBIF_MASK                          equ 0010h
PIR2_CM1IF_POSN                          equ 0005h
PIR2_CM1IF_POSITION                      equ 0005h
PIR2_CM1IF_SIZE                          equ 0001h
PIR2_CM1IF_LENGTH                        equ 0001h
PIR2_CM1IF_MASK                          equ 0020h
PIR2_CM2IF_POSN                          equ 0006h
PIR2_CM2IF_POSITION                      equ 0006h
PIR2_CM2IF_SIZE                          equ 0001h
PIR2_CM2IF_LENGTH                        equ 0001h
PIR2_CM2IF_MASK                          equ 0040h
PIR2_OSCFIF_POSN                         equ 0007h
PIR2_OSCFIF_POSITION                     equ 0007h
PIR2_OSCFIF_SIZE                         equ 0001h
PIR2_OSCFIF_LENGTH                       equ 0001h
PIR2_OSCFIF_MASK                         equ 0080h
PIR2_BCLIF_POSN                          equ 0003h
PIR2_BCLIF_POSITION                      equ 0003h
PIR2_BCLIF_SIZE                          equ 0001h
PIR2_BCLIF_LENGTH                        equ 0001h
PIR2_BCLIF_MASK                          equ 0008h
PIR2_CMIF_POSN                           equ 0006h
PIR2_CMIF_POSITION                       equ 0006h
PIR2_CMIF_SIZE                           equ 0001h
PIR2_CMIF_LENGTH                         equ 0001h
PIR2_CMIF_MASK                           equ 0040h

// Register: IPR2
#define IPR2 IPR2
IPR2                                     equ 0FA2h
// bitfield definitions
IPR2_CCP2IP_POSN                         equ 0000h
IPR2_CCP2IP_POSITION                     equ 0000h
IPR2_CCP2IP_SIZE                         equ 0001h
IPR2_CCP2IP_LENGTH                       equ 0001h
IPR2_CCP2IP_MASK                         equ 0001h
IPR2_TMR3IP_POSN                         equ 0001h
IPR2_TMR3IP_POSITION                     equ 0001h
IPR2_TMR3IP_SIZE                         equ 0001h
IPR2_TMR3IP_LENGTH                       equ 0001h
IPR2_TMR3IP_MASK                         equ 0002h
IPR2_LVDIP_POSN                          equ 0002h
IPR2_LVDIP_POSITION                      equ 0002h
IPR2_LVDIP_SIZE                          equ 0001h
IPR2_LVDIP_LENGTH                        equ 0001h
IPR2_LVDIP_MASK                          equ 0004h
IPR2_BCL1IP_POSN                         equ 0003h
IPR2_BCL1IP_POSITION                     equ 0003h
IPR2_BCL1IP_SIZE                         equ 0001h
IPR2_BCL1IP_LENGTH                       equ 0001h
IPR2_BCL1IP_MASK                         equ 0008h
IPR2_USBIP_POSN                          equ 0004h
IPR2_USBIP_POSITION                      equ 0004h
IPR2_USBIP_SIZE                          equ 0001h
IPR2_USBIP_LENGTH                        equ 0001h
IPR2_USBIP_MASK                          equ 0010h
IPR2_CM1IP_POSN                          equ 0005h
IPR2_CM1IP_POSITION                      equ 0005h
IPR2_CM1IP_SIZE                          equ 0001h
IPR2_CM1IP_LENGTH                        equ 0001h
IPR2_CM1IP_MASK                          equ 0020h
IPR2_CM2IP_POSN                          equ 0006h
IPR2_CM2IP_POSITION                      equ 0006h
IPR2_CM2IP_SIZE                          equ 0001h
IPR2_CM2IP_LENGTH                        equ 0001h
IPR2_CM2IP_MASK                          equ 0040h
IPR2_OSCFIP_POSN                         equ 0007h
IPR2_OSCFIP_POSITION                     equ 0007h
IPR2_OSCFIP_SIZE                         equ 0001h
IPR2_OSCFIP_LENGTH                       equ 0001h
IPR2_OSCFIP_MASK                         equ 0080h
IPR2_BCLIP_POSN                          equ 0003h
IPR2_BCLIP_POSITION                      equ 0003h
IPR2_BCLIP_SIZE                          equ 0001h
IPR2_BCLIP_LENGTH                        equ 0001h
IPR2_BCLIP_MASK                          equ 0008h
IPR2_CMIP_POSN                           equ 0006h
IPR2_CMIP_POSITION                       equ 0006h
IPR2_CMIP_SIZE                           equ 0001h
IPR2_CMIP_LENGTH                         equ 0001h
IPR2_CMIP_MASK                           equ 0040h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0FA3h
// bitfield definitions
PIE3_RTCCIE_POSN                         equ 0000h
PIE3_RTCCIE_POSITION                     equ 0000h
PIE3_RTCCIE_SIZE                         equ 0001h
PIE3_RTCCIE_LENGTH                       equ 0001h
PIE3_RTCCIE_MASK                         equ 0001h
PIE3_TMR3GIE_POSN                        equ 0001h
PIE3_TMR3GIE_POSITION                    equ 0001h
PIE3_TMR3GIE_SIZE                        equ 0001h
PIE3_TMR3GIE_LENGTH                      equ 0001h
PIE3_TMR3GIE_MASK                        equ 0002h
PIE3_CTMUIE_POSN                         equ 0002h
PIE3_CTMUIE_POSITION                     equ 0002h
PIE3_CTMUIE_SIZE                         equ 0001h
PIE3_CTMUIE_LENGTH                       equ 0001h
PIE3_CTMUIE_MASK                         equ 0004h
PIE3_TMR4IE_POSN                         equ 0003h
PIE3_TMR4IE_POSITION                     equ 0003h
PIE3_TMR4IE_SIZE                         equ 0001h
PIE3_TMR4IE_LENGTH                       equ 0001h
PIE3_TMR4IE_MASK                         equ 0008h
PIE3_TX2IE_POSN                          equ 0004h
PIE3_TX2IE_POSITION                      equ 0004h
PIE3_TX2IE_SIZE                          equ 0001h
PIE3_TX2IE_LENGTH                        equ 0001h
PIE3_TX2IE_MASK                          equ 0010h
PIE3_RC2IE_POSN                          equ 0005h
PIE3_RC2IE_POSITION                      equ 0005h
PIE3_RC2IE_SIZE                          equ 0001h
PIE3_RC2IE_LENGTH                        equ 0001h
PIE3_RC2IE_MASK                          equ 0020h
PIE3_BCL2IE_POSN                         equ 0006h
PIE3_BCL2IE_POSITION                     equ 0006h
PIE3_BCL2IE_SIZE                         equ 0001h
PIE3_BCL2IE_LENGTH                       equ 0001h
PIE3_BCL2IE_MASK                         equ 0040h
PIE3_SSP2IE_POSN                         equ 0007h
PIE3_SSP2IE_POSITION                     equ 0007h
PIE3_SSP2IE_SIZE                         equ 0001h
PIE3_SSP2IE_LENGTH                       equ 0001h
PIE3_SSP2IE_MASK                         equ 0080h
PIE3_RXB0IE_POSN                         equ 0000h
PIE3_RXB0IE_POSITION                     equ 0000h
PIE3_RXB0IE_SIZE                         equ 0001h
PIE3_RXB0IE_LENGTH                       equ 0001h
PIE3_RXB0IE_MASK                         equ 0001h
PIE3_RXB1IE_POSN                         equ 0001h
PIE3_RXB1IE_POSITION                     equ 0001h
PIE3_RXB1IE_SIZE                         equ 0001h
PIE3_RXB1IE_LENGTH                       equ 0001h
PIE3_RXB1IE_MASK                         equ 0002h
PIE3_TXB0IE_POSN                         equ 0002h
PIE3_TXB0IE_POSITION                     equ 0002h
PIE3_TXB0IE_SIZE                         equ 0001h
PIE3_TXB0IE_LENGTH                       equ 0001h
PIE3_TXB0IE_MASK                         equ 0004h
PIE3_TXB1IE_POSN                         equ 0003h
PIE3_TXB1IE_POSITION                     equ 0003h
PIE3_TXB1IE_SIZE                         equ 0001h
PIE3_TXB1IE_LENGTH                       equ 0001h
PIE3_TXB1IE_MASK                         equ 0008h
PIE3_TXB2IE_POSN                         equ 0004h
PIE3_TXB2IE_POSITION                     equ 0004h
PIE3_TXB2IE_SIZE                         equ 0001h
PIE3_TXB2IE_LENGTH                       equ 0001h
PIE3_TXB2IE_MASK                         equ 0010h
PIE3_RXBNIE_POSN                         equ 0001h
PIE3_RXBNIE_POSITION                     equ 0001h
PIE3_RXBNIE_SIZE                         equ 0001h
PIE3_RXBNIE_LENGTH                       equ 0001h
PIE3_RXBNIE_MASK                         equ 0002h
PIE3_TXBNIE_POSN                         equ 0004h
PIE3_TXBNIE_POSITION                     equ 0004h
PIE3_TXBNIE_SIZE                         equ 0001h
PIE3_TXBNIE_LENGTH                       equ 0001h
PIE3_TXBNIE_MASK                         equ 0010h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0FA4h
// bitfield definitions
PIR3_RTCCIF_POSN                         equ 0000h
PIR3_RTCCIF_POSITION                     equ 0000h
PIR3_RTCCIF_SIZE                         equ 0001h
PIR3_RTCCIF_LENGTH                       equ 0001h
PIR3_RTCCIF_MASK                         equ 0001h
PIR3_TMR3GIF_POSN                        equ 0001h
PIR3_TMR3GIF_POSITION                    equ 0001h
PIR3_TMR3GIF_SIZE                        equ 0001h
PIR3_TMR3GIF_LENGTH                      equ 0001h
PIR3_TMR3GIF_MASK                        equ 0002h
PIR3_CTMUIF_POSN                         equ 0002h
PIR3_CTMUIF_POSITION                     equ 0002h
PIR3_CTMUIF_SIZE                         equ 0001h
PIR3_CTMUIF_LENGTH                       equ 0001h
PIR3_CTMUIF_MASK                         equ 0004h
PIR3_TMR4IF_POSN                         equ 0003h
PIR3_TMR4IF_POSITION                     equ 0003h
PIR3_TMR4IF_SIZE                         equ 0001h
PIR3_TMR4IF_LENGTH                       equ 0001h
PIR3_TMR4IF_MASK                         equ 0008h
PIR3_TX2IF_POSN                          equ 0004h
PIR3_TX2IF_POSITION                      equ 0004h
PIR3_TX2IF_SIZE                          equ 0001h
PIR3_TX2IF_LENGTH                        equ 0001h
PIR3_TX2IF_MASK                          equ 0010h
PIR3_RC2IF_POSN                          equ 0005h
PIR3_RC2IF_POSITION                      equ 0005h
PIR3_RC2IF_SIZE                          equ 0001h
PIR3_RC2IF_LENGTH                        equ 0001h
PIR3_RC2IF_MASK                          equ 0020h
PIR3_BCL2IF_POSN                         equ 0006h
PIR3_BCL2IF_POSITION                     equ 0006h
PIR3_BCL2IF_SIZE                         equ 0001h
PIR3_BCL2IF_LENGTH                       equ 0001h
PIR3_BCL2IF_MASK                         equ 0040h
PIR3_SSP2IF_POSN                         equ 0007h
PIR3_SSP2IF_POSITION                     equ 0007h
PIR3_SSP2IF_SIZE                         equ 0001h
PIR3_SSP2IF_LENGTH                       equ 0001h
PIR3_SSP2IF_MASK                         equ 0080h
PIR3_RXBNIF_POSN                         equ 0001h
PIR3_RXBNIF_POSITION                     equ 0001h
PIR3_RXBNIF_SIZE                         equ 0001h
PIR3_RXBNIF_LENGTH                       equ 0001h
PIR3_RXBNIF_MASK                         equ 0002h
PIR3_TXBNIF_POSN                         equ 0004h
PIR3_TXBNIF_POSITION                     equ 0004h
PIR3_TXBNIF_SIZE                         equ 0001h
PIR3_TXBNIF_LENGTH                       equ 0001h
PIR3_TXBNIF_MASK                         equ 0010h

// Register: IPR3
#define IPR3 IPR3
IPR3                                     equ 0FA5h
// bitfield definitions
IPR3_RTCCIP_POSN                         equ 0000h
IPR3_RTCCIP_POSITION                     equ 0000h
IPR3_RTCCIP_SIZE                         equ 0001h
IPR3_RTCCIP_LENGTH                       equ 0001h
IPR3_RTCCIP_MASK                         equ 0001h
IPR3_TMR3GIP_POSN                        equ 0001h
IPR3_TMR3GIP_POSITION                    equ 0001h
IPR3_TMR3GIP_SIZE                        equ 0001h
IPR3_TMR3GIP_LENGTH                      equ 0001h
IPR3_TMR3GIP_MASK                        equ 0002h
IPR3_CTMUIP_POSN                         equ 0002h
IPR3_CTMUIP_POSITION                     equ 0002h
IPR3_CTMUIP_SIZE                         equ 0001h
IPR3_CTMUIP_LENGTH                       equ 0001h
IPR3_CTMUIP_MASK                         equ 0004h
IPR3_TMR4IP_POSN                         equ 0003h
IPR3_TMR4IP_POSITION                     equ 0003h
IPR3_TMR4IP_SIZE                         equ 0001h
IPR3_TMR4IP_LENGTH                       equ 0001h
IPR3_TMR4IP_MASK                         equ 0008h
IPR3_TX2IP_POSN                          equ 0004h
IPR3_TX2IP_POSITION                      equ 0004h
IPR3_TX2IP_SIZE                          equ 0001h
IPR3_TX2IP_LENGTH                        equ 0001h
IPR3_TX2IP_MASK                          equ 0010h
IPR3_RC2IP_POSN                          equ 0005h
IPR3_RC2IP_POSITION                      equ 0005h
IPR3_RC2IP_SIZE                          equ 0001h
IPR3_RC2IP_LENGTH                        equ 0001h
IPR3_RC2IP_MASK                          equ 0020h
IPR3_BCL2IP_POSN                         equ 0006h
IPR3_BCL2IP_POSITION                     equ 0006h
IPR3_BCL2IP_SIZE                         equ 0001h
IPR3_BCL2IP_LENGTH                       equ 0001h
IPR3_BCL2IP_MASK                         equ 0040h
IPR3_SSP2IP_POSN                         equ 0007h
IPR3_SSP2IP_POSITION                     equ 0007h
IPR3_SSP2IP_SIZE                         equ 0001h
IPR3_SSP2IP_LENGTH                       equ 0001h
IPR3_SSP2IP_MASK                         equ 0080h
IPR3_RXBNIP_POSN                         equ 0001h
IPR3_RXBNIP_POSITION                     equ 0001h
IPR3_RXBNIP_SIZE                         equ 0001h
IPR3_RXBNIP_LENGTH                       equ 0001h
IPR3_RXBNIP_MASK                         equ 0002h
IPR3_TXBNIP_POSN                         equ 0004h
IPR3_TXBNIP_POSITION                     equ 0004h
IPR3_TXBNIP_SIZE                         equ 0001h
IPR3_TXBNIP_LENGTH                       equ 0001h
IPR3_TXBNIP_MASK                         equ 0010h

// Register: EECON1
#define EECON1 EECON1
EECON1                                   equ 0FA6h
// bitfield definitions
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
EECON1_FREE_POSN                         equ 0004h
EECON1_FREE_POSITION                     equ 0004h
EECON1_FREE_SIZE                         equ 0001h
EECON1_FREE_LENGTH                       equ 0001h
EECON1_FREE_MASK                         equ 0010h
EECON1_WPROG_POSN                        equ 0005h
EECON1_WPROG_POSITION                    equ 0005h
EECON1_WPROG_SIZE                        equ 0001h
EECON1_WPROG_LENGTH                      equ 0001h
EECON1_WPROG_MASK                        equ 0020h

// Register: EECON2
#define EECON2 EECON2
EECON2                                   equ 0FA7h
// bitfield definitions
EECON2_EECON2_POSN                       equ 0000h
EECON2_EECON2_POSITION                   equ 0000h
EECON2_EECON2_SIZE                       equ 0008h
EECON2_EECON2_LENGTH                     equ 0008h
EECON2_EECON2_MASK                       equ 00FFh

// Register: TXSTA2
#define TXSTA2 TXSTA2
TXSTA2                                   equ 0FA8h
// bitfield definitions
TXSTA2_TX9D_POSN                         equ 0000h
TXSTA2_TX9D_POSITION                     equ 0000h
TXSTA2_TX9D_SIZE                         equ 0001h
TXSTA2_TX9D_LENGTH                       equ 0001h
TXSTA2_TX9D_MASK                         equ 0001h
TXSTA2_TRMT_POSN                         equ 0001h
TXSTA2_TRMT_POSITION                     equ 0001h
TXSTA2_TRMT_SIZE                         equ 0001h
TXSTA2_TRMT_LENGTH                       equ 0001h
TXSTA2_TRMT_MASK                         equ 0002h
TXSTA2_BRGH_POSN                         equ 0002h
TXSTA2_BRGH_POSITION                     equ 0002h
TXSTA2_BRGH_SIZE                         equ 0001h
TXSTA2_BRGH_LENGTH                       equ 0001h
TXSTA2_BRGH_MASK                         equ 0004h
TXSTA2_SENDB_POSN                        equ 0003h
TXSTA2_SENDB_POSITION                    equ 0003h
TXSTA2_SENDB_SIZE                        equ 0001h
TXSTA2_SENDB_LENGTH                      equ 0001h
TXSTA2_SENDB_MASK                        equ 0008h
TXSTA2_SYNC_POSN                         equ 0004h
TXSTA2_SYNC_POSITION                     equ 0004h
TXSTA2_SYNC_SIZE                         equ 0001h
TXSTA2_SYNC_LENGTH                       equ 0001h
TXSTA2_SYNC_MASK                         equ 0010h
TXSTA2_TXEN_POSN                         equ 0005h
TXSTA2_TXEN_POSITION                     equ 0005h
TXSTA2_TXEN_SIZE                         equ 0001h
TXSTA2_TXEN_LENGTH                       equ 0001h
TXSTA2_TXEN_MASK                         equ 0020h
TXSTA2_TX9_POSN                          equ 0006h
TXSTA2_TX9_POSITION                      equ 0006h
TXSTA2_TX9_SIZE                          equ 0001h
TXSTA2_TX9_LENGTH                        equ 0001h
TXSTA2_TX9_MASK                          equ 0040h
TXSTA2_CSRC_POSN                         equ 0007h
TXSTA2_CSRC_POSITION                     equ 0007h
TXSTA2_CSRC_SIZE                         equ 0001h
TXSTA2_CSRC_LENGTH                       equ 0001h
TXSTA2_CSRC_MASK                         equ 0080h
TXSTA2_TX9D2_POSN                        equ 0000h
TXSTA2_TX9D2_POSITION                    equ 0000h
TXSTA2_TX9D2_SIZE                        equ 0001h
TXSTA2_TX9D2_LENGTH                      equ 0001h
TXSTA2_TX9D2_MASK                        equ 0001h
TXSTA2_TRMT2_POSN                        equ 0001h
TXSTA2_TRMT2_POSITION                    equ 0001h
TXSTA2_TRMT2_SIZE                        equ 0001h
TXSTA2_TRMT2_LENGTH                      equ 0001h
TXSTA2_TRMT2_MASK                        equ 0002h
TXSTA2_BRGH2_POSN                        equ 0002h
TXSTA2_BRGH2_POSITION                    equ 0002h
TXSTA2_BRGH2_SIZE                        equ 0001h
TXSTA2_BRGH2_LENGTH                      equ 0001h
TXSTA2_BRGH2_MASK                        equ 0004h
TXSTA2_SENDB2_POSN                       equ 0003h
TXSTA2_SENDB2_POSITION                   equ 0003h
TXSTA2_SENDB2_SIZE                       equ 0001h
TXSTA2_SENDB2_LENGTH                     equ 0001h
TXSTA2_SENDB2_MASK                       equ 0008h
TXSTA2_SYNC2_POSN                        equ 0004h
TXSTA2_SYNC2_POSITION                    equ 0004h
TXSTA2_SYNC2_SIZE                        equ 0001h
TXSTA2_SYNC2_LENGTH                      equ 0001h
TXSTA2_SYNC2_MASK                        equ 0010h
TXSTA2_TXEN2_POSN                        equ 0005h
TXSTA2_TXEN2_POSITION                    equ 0005h
TXSTA2_TXEN2_SIZE                        equ 0001h
TXSTA2_TXEN2_LENGTH                      equ 0001h
TXSTA2_TXEN2_MASK                        equ 0020h
TXSTA2_TX92_POSN                         equ 0006h
TXSTA2_TX92_POSITION                     equ 0006h
TXSTA2_TX92_SIZE                         equ 0001h
TXSTA2_TX92_LENGTH                       equ 0001h
TXSTA2_TX92_MASK                         equ 0040h
TXSTA2_CSRC2_POSN                        equ 0007h
TXSTA2_CSRC2_POSITION                    equ 0007h
TXSTA2_CSRC2_SIZE                        equ 0001h
TXSTA2_CSRC2_LENGTH                      equ 0001h
TXSTA2_CSRC2_MASK                        equ 0080h
TXSTA2_TXD82_POSN                        equ 0000h
TXSTA2_TXD82_POSITION                    equ 0000h
TXSTA2_TXD82_SIZE                        equ 0001h
TXSTA2_TXD82_LENGTH                      equ 0001h
TXSTA2_TXD82_MASK                        equ 0001h
TXSTA2_TX8_92_POSN                       equ 0006h
TXSTA2_TX8_92_POSITION                   equ 0006h
TXSTA2_TX8_92_SIZE                       equ 0001h
TXSTA2_TX8_92_LENGTH                     equ 0001h
TXSTA2_TX8_92_MASK                       equ 0040h

// Register: TXREG2
#define TXREG2 TXREG2
TXREG2                                   equ 0FA9h
// bitfield definitions
TXREG2_TXREG2_POSN                       equ 0000h
TXREG2_TXREG2_POSITION                   equ 0000h
TXREG2_TXREG2_SIZE                       equ 0008h
TXREG2_TXREG2_LENGTH                     equ 0008h
TXREG2_TXREG2_MASK                       equ 00FFh

// Register: RCREG2
#define RCREG2 RCREG2
RCREG2                                   equ 0FAAh
// bitfield definitions
RCREG2_RCREG2_POSN                       equ 0000h
RCREG2_RCREG2_POSITION                   equ 0000h
RCREG2_RCREG2_SIZE                       equ 0008h
RCREG2_RCREG2_LENGTH                     equ 0008h
RCREG2_RCREG2_MASK                       equ 00FFh

// Register: SPBRG2
#define SPBRG2 SPBRG2
SPBRG2                                   equ 0FABh
// bitfield definitions
SPBRG2_SPBRG2_POSN                       equ 0000h
SPBRG2_SPBRG2_POSITION                   equ 0000h
SPBRG2_SPBRG2_SIZE                       equ 0008h
SPBRG2_SPBRG2_LENGTH                     equ 0008h
SPBRG2_SPBRG2_MASK                       equ 00FFh

// Register: RCSTA1
#define RCSTA1 RCSTA1
RCSTA1                                   equ 0FACh
// bitfield definitions
RCSTA1_RX9D_POSN                         equ 0000h
RCSTA1_RX9D_POSITION                     equ 0000h
RCSTA1_RX9D_SIZE                         equ 0001h
RCSTA1_RX9D_LENGTH                       equ 0001h
RCSTA1_RX9D_MASK                         equ 0001h
RCSTA1_OERR_POSN                         equ 0001h
RCSTA1_OERR_POSITION                     equ 0001h
RCSTA1_OERR_SIZE                         equ 0001h
RCSTA1_OERR_LENGTH                       equ 0001h
RCSTA1_OERR_MASK                         equ 0002h
RCSTA1_FERR_POSN                         equ 0002h
RCSTA1_FERR_POSITION                     equ 0002h
RCSTA1_FERR_SIZE                         equ 0001h
RCSTA1_FERR_LENGTH                       equ 0001h
RCSTA1_FERR_MASK                         equ 0004h
RCSTA1_ADDEN_POSN                        equ 0003h
RCSTA1_ADDEN_POSITION                    equ 0003h
RCSTA1_ADDEN_SIZE                        equ 0001h
RCSTA1_ADDEN_LENGTH                      equ 0001h
RCSTA1_ADDEN_MASK                        equ 0008h
RCSTA1_CREN_POSN                         equ 0004h
RCSTA1_CREN_POSITION                     equ 0004h
RCSTA1_CREN_SIZE                         equ 0001h
RCSTA1_CREN_LENGTH                       equ 0001h
RCSTA1_CREN_MASK                         equ 0010h
RCSTA1_SREN_POSN                         equ 0005h
RCSTA1_SREN_POSITION                     equ 0005h
RCSTA1_SREN_SIZE                         equ 0001h
RCSTA1_SREN_LENGTH                       equ 0001h
RCSTA1_SREN_MASK                         equ 0020h
RCSTA1_RX9_POSN                          equ 0006h
RCSTA1_RX9_POSITION                      equ 0006h
RCSTA1_RX9_SIZE                          equ 0001h
RCSTA1_RX9_LENGTH                        equ 0001h
RCSTA1_RX9_MASK                          equ 0040h
RCSTA1_SPEN_POSN                         equ 0007h
RCSTA1_SPEN_POSITION                     equ 0007h
RCSTA1_SPEN_SIZE                         equ 0001h
RCSTA1_SPEN_LENGTH                       equ 0001h
RCSTA1_SPEN_MASK                         equ 0080h
RCSTA1_RCD8_POSN                         equ 0000h
RCSTA1_RCD8_POSITION                     equ 0000h
RCSTA1_RCD8_SIZE                         equ 0001h
RCSTA1_RCD8_LENGTH                       equ 0001h
RCSTA1_RCD8_MASK                         equ 0001h
RCSTA1_ADEN_POSN                         equ 0003h
RCSTA1_ADEN_POSITION                     equ 0003h
RCSTA1_ADEN_SIZE                         equ 0001h
RCSTA1_ADEN_LENGTH                       equ 0001h
RCSTA1_ADEN_MASK                         equ 0008h
RCSTA1_RC9_POSN                          equ 0006h
RCSTA1_RC9_POSITION                      equ 0006h
RCSTA1_RC9_SIZE                          equ 0001h
RCSTA1_RC9_LENGTH                        equ 0001h
RCSTA1_RC9_MASK                          equ 0040h
RCSTA1_NOT_RC8_POSN                      equ 0006h
RCSTA1_NOT_RC8_POSITION                  equ 0006h
RCSTA1_NOT_RC8_SIZE                      equ 0001h
RCSTA1_NOT_RC8_LENGTH                    equ 0001h
RCSTA1_NOT_RC8_MASK                      equ 0040h
RCSTA1_nRC8_POSN                         equ 0006h
RCSTA1_nRC8_POSITION                     equ 0006h
RCSTA1_nRC8_SIZE                         equ 0001h
RCSTA1_nRC8_LENGTH                       equ 0001h
RCSTA1_nRC8_MASK                         equ 0040h
RCSTA1_RC8_9_POSN                        equ 0006h
RCSTA1_RC8_9_POSITION                    equ 0006h
RCSTA1_RC8_9_SIZE                        equ 0001h
RCSTA1_RC8_9_LENGTH                      equ 0001h
RCSTA1_RC8_9_MASK                        equ 0040h
RCSTA1_RX9D1_POSN                        equ 0000h
RCSTA1_RX9D1_POSITION                    equ 0000h
RCSTA1_RX9D1_SIZE                        equ 0001h
RCSTA1_RX9D1_LENGTH                      equ 0001h
RCSTA1_RX9D1_MASK                        equ 0001h
RCSTA1_OERR1_POSN                        equ 0001h
RCSTA1_OERR1_POSITION                    equ 0001h
RCSTA1_OERR1_SIZE                        equ 0001h
RCSTA1_OERR1_LENGTH                      equ 0001h
RCSTA1_OERR1_MASK                        equ 0002h
RCSTA1_FERR1_POSN                        equ 0002h
RCSTA1_FERR1_POSITION                    equ 0002h
RCSTA1_FERR1_SIZE                        equ 0001h
RCSTA1_FERR1_LENGTH                      equ 0001h
RCSTA1_FERR1_MASK                        equ 0004h
RCSTA1_ADDEN1_POSN                       equ 0003h
RCSTA1_ADDEN1_POSITION                   equ 0003h
RCSTA1_ADDEN1_SIZE                       equ 0001h
RCSTA1_ADDEN1_LENGTH                     equ 0001h
RCSTA1_ADDEN1_MASK                       equ 0008h
RCSTA1_CREN1_POSN                        equ 0004h
RCSTA1_CREN1_POSITION                    equ 0004h
RCSTA1_CREN1_SIZE                        equ 0001h
RCSTA1_CREN1_LENGTH                      equ 0001h
RCSTA1_CREN1_MASK                        equ 0010h
RCSTA1_SREN1_POSN                        equ 0005h
RCSTA1_SREN1_POSITION                    equ 0005h
RCSTA1_SREN1_SIZE                        equ 0001h
RCSTA1_SREN1_LENGTH                      equ 0001h
RCSTA1_SREN1_MASK                        equ 0020h
RCSTA1_RX91_POSN                         equ 0006h
RCSTA1_RX91_POSITION                     equ 0006h
RCSTA1_RX91_SIZE                         equ 0001h
RCSTA1_RX91_LENGTH                       equ 0001h
RCSTA1_RX91_MASK                         equ 0040h
RCSTA1_SPEN1_POSN                        equ 0007h
RCSTA1_SPEN1_POSITION                    equ 0007h
RCSTA1_SPEN1_SIZE                        equ 0001h
RCSTA1_SPEN1_LENGTH                      equ 0001h
RCSTA1_SPEN1_MASK                        equ 0080h
RCSTA1_SRENA_POSN                        equ 0005h
RCSTA1_SRENA_POSITION                    equ 0005h
RCSTA1_SRENA_SIZE                        equ 0001h
RCSTA1_SRENA_LENGTH                      equ 0001h
RCSTA1_SRENA_MASK                        equ 0020h

// Register: TXSTA1
#define TXSTA1 TXSTA1
TXSTA1                                   equ 0FADh
// bitfield definitions
TXSTA1_TX9D_POSN                         equ 0000h
TXSTA1_TX9D_POSITION                     equ 0000h
TXSTA1_TX9D_SIZE                         equ 0001h
TXSTA1_TX9D_LENGTH                       equ 0001h
TXSTA1_TX9D_MASK                         equ 0001h
TXSTA1_TRMT_POSN                         equ 0001h
TXSTA1_TRMT_POSITION                     equ 0001h
TXSTA1_TRMT_SIZE                         equ 0001h
TXSTA1_TRMT_LENGTH                       equ 0001h
TXSTA1_TRMT_MASK                         equ 0002h
TXSTA1_BRGH_POSN                         equ 0002h
TXSTA1_BRGH_POSITION                     equ 0002h
TXSTA1_BRGH_SIZE                         equ 0001h
TXSTA1_BRGH_LENGTH                       equ 0001h
TXSTA1_BRGH_MASK                         equ 0004h
TXSTA1_SENDB_POSN                        equ 0003h
TXSTA1_SENDB_POSITION                    equ 0003h
TXSTA1_SENDB_SIZE                        equ 0001h
TXSTA1_SENDB_LENGTH                      equ 0001h
TXSTA1_SENDB_MASK                        equ 0008h
TXSTA1_SYNC_POSN                         equ 0004h
TXSTA1_SYNC_POSITION                     equ 0004h
TXSTA1_SYNC_SIZE                         equ 0001h
TXSTA1_SYNC_LENGTH                       equ 0001h
TXSTA1_SYNC_MASK                         equ 0010h
TXSTA1_TXEN_POSN                         equ 0005h
TXSTA1_TXEN_POSITION                     equ 0005h
TXSTA1_TXEN_SIZE                         equ 0001h
TXSTA1_TXEN_LENGTH                       equ 0001h
TXSTA1_TXEN_MASK                         equ 0020h
TXSTA1_TX9_POSN                          equ 0006h
TXSTA1_TX9_POSITION                      equ 0006h
TXSTA1_TX9_SIZE                          equ 0001h
TXSTA1_TX9_LENGTH                        equ 0001h
TXSTA1_TX9_MASK                          equ 0040h
TXSTA1_CSRC_POSN                         equ 0007h
TXSTA1_CSRC_POSITION                     equ 0007h
TXSTA1_CSRC_SIZE                         equ 0001h
TXSTA1_CSRC_LENGTH                       equ 0001h
TXSTA1_CSRC_MASK                         equ 0080h
TXSTA1_TXD8_POSN                         equ 0000h
TXSTA1_TXD8_POSITION                     equ 0000h
TXSTA1_TXD8_SIZE                         equ 0001h
TXSTA1_TXD8_LENGTH                       equ 0001h
TXSTA1_TXD8_MASK                         equ 0001h
TXSTA1_TX8_9_POSN                        equ 0006h
TXSTA1_TX8_9_POSITION                    equ 0006h
TXSTA1_TX8_9_SIZE                        equ 0001h
TXSTA1_TX8_9_LENGTH                      equ 0001h
TXSTA1_TX8_9_MASK                        equ 0040h
TXSTA1_NOT_TX8_POSN                      equ 0006h
TXSTA1_NOT_TX8_POSITION                  equ 0006h
TXSTA1_NOT_TX8_SIZE                      equ 0001h
TXSTA1_NOT_TX8_LENGTH                    equ 0001h
TXSTA1_NOT_TX8_MASK                      equ 0040h
TXSTA1_nTX8_POSN                         equ 0006h
TXSTA1_nTX8_POSITION                     equ 0006h
TXSTA1_nTX8_SIZE                         equ 0001h
TXSTA1_nTX8_LENGTH                       equ 0001h
TXSTA1_nTX8_MASK                         equ 0040h
TXSTA1_TX9D1_POSN                        equ 0000h
TXSTA1_TX9D1_POSITION                    equ 0000h
TXSTA1_TX9D1_SIZE                        equ 0001h
TXSTA1_TX9D1_LENGTH                      equ 0001h
TXSTA1_TX9D1_MASK                        equ 0001h
TXSTA1_TRMT1_POSN                        equ 0001h
TXSTA1_TRMT1_POSITION                    equ 0001h
TXSTA1_TRMT1_SIZE                        equ 0001h
TXSTA1_TRMT1_LENGTH                      equ 0001h
TXSTA1_TRMT1_MASK                        equ 0002h
TXSTA1_BRGH1_POSN                        equ 0002h
TXSTA1_BRGH1_POSITION                    equ 0002h
TXSTA1_BRGH1_SIZE                        equ 0001h
TXSTA1_BRGH1_LENGTH                      equ 0001h
TXSTA1_BRGH1_MASK                        equ 0004h
TXSTA1_SENDB1_POSN                       equ 0003h
TXSTA1_SENDB1_POSITION                   equ 0003h
TXSTA1_SENDB1_SIZE                       equ 0001h
TXSTA1_SENDB1_LENGTH                     equ 0001h
TXSTA1_SENDB1_MASK                       equ 0008h
TXSTA1_SYNC1_POSN                        equ 0004h
TXSTA1_SYNC1_POSITION                    equ 0004h
TXSTA1_SYNC1_SIZE                        equ 0001h
TXSTA1_SYNC1_LENGTH                      equ 0001h
TXSTA1_SYNC1_MASK                        equ 0010h
TXSTA1_TXEN1_POSN                        equ 0005h
TXSTA1_TXEN1_POSITION                    equ 0005h
TXSTA1_TXEN1_SIZE                        equ 0001h
TXSTA1_TXEN1_LENGTH                      equ 0001h
TXSTA1_TXEN1_MASK                        equ 0020h
TXSTA1_TX91_POSN                         equ 0006h
TXSTA1_TX91_POSITION                     equ 0006h
TXSTA1_TX91_SIZE                         equ 0001h
TXSTA1_TX91_LENGTH                       equ 0001h
TXSTA1_TX91_MASK                         equ 0040h
TXSTA1_CSRC1_POSN                        equ 0007h
TXSTA1_CSRC1_POSITION                    equ 0007h
TXSTA1_CSRC1_SIZE                        equ 0001h
TXSTA1_CSRC1_LENGTH                      equ 0001h
TXSTA1_CSRC1_MASK                        equ 0080h

// Register: TXREG1
#define TXREG1 TXREG1
TXREG1                                   equ 0FAEh
// bitfield definitions
TXREG1_TXREG1_POSN                       equ 0000h
TXREG1_TXREG1_POSITION                   equ 0000h
TXREG1_TXREG1_SIZE                       equ 0008h
TXREG1_TXREG1_LENGTH                     equ 0008h
TXREG1_TXREG1_MASK                       equ 00FFh

// Register: RCREG1
#define RCREG1 RCREG1
RCREG1                                   equ 0FAFh
// bitfield definitions
RCREG1_RCREG1_POSN                       equ 0000h
RCREG1_RCREG1_POSITION                   equ 0000h
RCREG1_RCREG1_SIZE                       equ 0008h
RCREG1_RCREG1_LENGTH                     equ 0008h
RCREG1_RCREG1_MASK                       equ 00FFh

// Register: SPBRG1
#define SPBRG1 SPBRG1
SPBRG1                                   equ 0FB0h
// bitfield definitions
SPBRG1_SPBRG1_POSN                       equ 0000h
SPBRG1_SPBRG1_POSITION                   equ 0000h
SPBRG1_SPBRG1_SIZE                       equ 0008h
SPBRG1_SPBRG1_LENGTH                     equ 0008h
SPBRG1_SPBRG1_MASK                       equ 00FFh

// Register: CTMUICON
#define CTMUICON CTMUICON
CTMUICON                                 equ 0FB1h
// bitfield definitions
CTMUICON_IRNG_POSN                       equ 0000h
CTMUICON_IRNG_POSITION                   equ 0000h
CTMUICON_IRNG_SIZE                       equ 0002h
CTMUICON_IRNG_LENGTH                     equ 0002h
CTMUICON_IRNG_MASK                       equ 0003h
CTMUICON_ITRIM_POSN                      equ 0002h
CTMUICON_ITRIM_POSITION                  equ 0002h
CTMUICON_ITRIM_SIZE                      equ 0006h
CTMUICON_ITRIM_LENGTH                    equ 0006h
CTMUICON_ITRIM_MASK                      equ 00FCh
CTMUICON_IRNG0_POSN                      equ 0000h
CTMUICON_IRNG0_POSITION                  equ 0000h
CTMUICON_IRNG0_SIZE                      equ 0001h
CTMUICON_IRNG0_LENGTH                    equ 0001h
CTMUICON_IRNG0_MASK                      equ 0001h
CTMUICON_IRNG1_POSN                      equ 0001h
CTMUICON_IRNG1_POSITION                  equ 0001h
CTMUICON_IRNG1_SIZE                      equ 0001h
CTMUICON_IRNG1_LENGTH                    equ 0001h
CTMUICON_IRNG1_MASK                      equ 0002h
CTMUICON_ITRIM0_POSN                     equ 0002h
CTMUICON_ITRIM0_POSITION                 equ 0002h
CTMUICON_ITRIM0_SIZE                     equ 0001h
CTMUICON_ITRIM0_LENGTH                   equ 0001h
CTMUICON_ITRIM0_MASK                     equ 0004h
CTMUICON_ITRIM1_POSN                     equ 0003h
CTMUICON_ITRIM1_POSITION                 equ 0003h
CTMUICON_ITRIM1_SIZE                     equ 0001h
CTMUICON_ITRIM1_LENGTH                   equ 0001h
CTMUICON_ITRIM1_MASK                     equ 0008h
CTMUICON_ITRIM2_POSN                     equ 0004h
CTMUICON_ITRIM2_POSITION                 equ 0004h
CTMUICON_ITRIM2_SIZE                     equ 0001h
CTMUICON_ITRIM2_LENGTH                   equ 0001h
CTMUICON_ITRIM2_MASK                     equ 0010h
CTMUICON_ITRIM3_POSN                     equ 0005h
CTMUICON_ITRIM3_POSITION                 equ 0005h
CTMUICON_ITRIM3_SIZE                     equ 0001h
CTMUICON_ITRIM3_LENGTH                   equ 0001h
CTMUICON_ITRIM3_MASK                     equ 0020h
CTMUICON_ITRIM4_POSN                     equ 0006h
CTMUICON_ITRIM4_POSITION                 equ 0006h
CTMUICON_ITRIM4_SIZE                     equ 0001h
CTMUICON_ITRIM4_LENGTH                   equ 0001h
CTMUICON_ITRIM4_MASK                     equ 0040h
CTMUICON_ITRIM5_POSN                     equ 0007h
CTMUICON_ITRIM5_POSITION                 equ 0007h
CTMUICON_ITRIM5_SIZE                     equ 0001h
CTMUICON_ITRIM5_LENGTH                   equ 0001h
CTMUICON_ITRIM5_MASK                     equ 0080h

// Register: CTMUCONL
#define CTMUCONL CTMUCONL
CTMUCONL                                 equ 0FB2h
// bitfield definitions
CTMUCONL_EDG1STAT_POSN                   equ 0000h
CTMUCONL_EDG1STAT_POSITION               equ 0000h
CTMUCONL_EDG1STAT_SIZE                   equ 0001h
CTMUCONL_EDG1STAT_LENGTH                 equ 0001h
CTMUCONL_EDG1STAT_MASK                   equ 0001h
CTMUCONL_EDG2STAT_POSN                   equ 0001h
CTMUCONL_EDG2STAT_POSITION               equ 0001h
CTMUCONL_EDG2STAT_SIZE                   equ 0001h
CTMUCONL_EDG2STAT_LENGTH                 equ 0001h
CTMUCONL_EDG2STAT_MASK                   equ 0002h
CTMUCONL_EDG1SEL_POSN                    equ 0002h
CTMUCONL_EDG1SEL_POSITION                equ 0002h
CTMUCONL_EDG1SEL_SIZE                    equ 0002h
CTMUCONL_EDG1SEL_LENGTH                  equ 0002h
CTMUCONL_EDG1SEL_MASK                    equ 000Ch
CTMUCONL_EDG1POL_POSN                    equ 0004h
CTMUCONL_EDG1POL_POSITION                equ 0004h
CTMUCONL_EDG1POL_SIZE                    equ 0001h
CTMUCONL_EDG1POL_LENGTH                  equ 0001h
CTMUCONL_EDG1POL_MASK                    equ 0010h
CTMUCONL_EDG2SEL_POSN                    equ 0005h
CTMUCONL_EDG2SEL_POSITION                equ 0005h
CTMUCONL_EDG2SEL_SIZE                    equ 0002h
CTMUCONL_EDG2SEL_LENGTH                  equ 0002h
CTMUCONL_EDG2SEL_MASK                    equ 0060h
CTMUCONL_EDG2POL_POSN                    equ 0007h
CTMUCONL_EDG2POL_POSITION                equ 0007h
CTMUCONL_EDG2POL_SIZE                    equ 0001h
CTMUCONL_EDG2POL_LENGTH                  equ 0001h
CTMUCONL_EDG2POL_MASK                    equ 0080h
CTMUCONL_EDG1SEL0_POSN                   equ 0002h
CTMUCONL_EDG1SEL0_POSITION               equ 0002h
CTMUCONL_EDG1SEL0_SIZE                   equ 0001h
CTMUCONL_EDG1SEL0_LENGTH                 equ 0001h
CTMUCONL_EDG1SEL0_MASK                   equ 0004h
CTMUCONL_EDG1SEL1_POSN                   equ 0003h
CTMUCONL_EDG1SEL1_POSITION               equ 0003h
CTMUCONL_EDG1SEL1_SIZE                   equ 0001h
CTMUCONL_EDG1SEL1_LENGTH                 equ 0001h
CTMUCONL_EDG1SEL1_MASK                   equ 0008h
CTMUCONL_EDG2SEL0_POSN                   equ 0005h
CTMUCONL_EDG2SEL0_POSITION               equ 0005h
CTMUCONL_EDG2SEL0_SIZE                   equ 0001h
CTMUCONL_EDG2SEL0_LENGTH                 equ 0001h
CTMUCONL_EDG2SEL0_MASK                   equ 0020h
CTMUCONL_EDG2SEL1_POSN                   equ 0006h
CTMUCONL_EDG2SEL1_POSITION               equ 0006h
CTMUCONL_EDG2SEL1_SIZE                   equ 0001h
CTMUCONL_EDG2SEL1_LENGTH                 equ 0001h
CTMUCONL_EDG2SEL1_MASK                   equ 0040h

// Register: CTMUCONH
#define CTMUCONH CTMUCONH
CTMUCONH                                 equ 0FB3h
// bitfield definitions
CTMUCONH_CTTRIG_POSN                     equ 0000h
CTMUCONH_CTTRIG_POSITION                 equ 0000h
CTMUCONH_CTTRIG_SIZE                     equ 0001h
CTMUCONH_CTTRIG_LENGTH                   equ 0001h
CTMUCONH_CTTRIG_MASK                     equ 0001h
CTMUCONH_IDISSEN_POSN                    equ 0001h
CTMUCONH_IDISSEN_POSITION                equ 0001h
CTMUCONH_IDISSEN_SIZE                    equ 0001h
CTMUCONH_IDISSEN_LENGTH                  equ 0001h
CTMUCONH_IDISSEN_MASK                    equ 0002h
CTMUCONH_EDGSEQEN_POSN                   equ 0002h
CTMUCONH_EDGSEQEN_POSITION               equ 0002h
CTMUCONH_EDGSEQEN_SIZE                   equ 0001h
CTMUCONH_EDGSEQEN_LENGTH                 equ 0001h
CTMUCONH_EDGSEQEN_MASK                   equ 0004h
CTMUCONH_EDGEN_POSN                      equ 0003h
CTMUCONH_EDGEN_POSITION                  equ 0003h
CTMUCONH_EDGEN_SIZE                      equ 0001h
CTMUCONH_EDGEN_LENGTH                    equ 0001h
CTMUCONH_EDGEN_MASK                      equ 0008h
CTMUCONH_TGEN_POSN                       equ 0004h
CTMUCONH_TGEN_POSITION                   equ 0004h
CTMUCONH_TGEN_SIZE                       equ 0001h
CTMUCONH_TGEN_LENGTH                     equ 0001h
CTMUCONH_TGEN_MASK                       equ 0010h
CTMUCONH_CTMUSIDL_POSN                   equ 0005h
CTMUCONH_CTMUSIDL_POSITION               equ 0005h
CTMUCONH_CTMUSIDL_SIZE                   equ 0001h
CTMUCONH_CTMUSIDL_LENGTH                 equ 0001h
CTMUCONH_CTMUSIDL_MASK                   equ 0020h
CTMUCONH_CTMUEN_POSN                     equ 0007h
CTMUCONH_CTMUEN_POSITION                 equ 0007h
CTMUCONH_CTMUEN_SIZE                     equ 0001h
CTMUCONH_CTMUEN_LENGTH                   equ 0001h
CTMUCONH_CTMUEN_MASK                     equ 0080h

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0FB4h
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
CCP2CON_P2M_POSN                         equ 0006h
CCP2CON_P2M_POSITION                     equ 0006h
CCP2CON_P2M_SIZE                         equ 0002h
CCP2CON_P2M_LENGTH                       equ 0002h
CCP2CON_P2M_MASK                         equ 00C0h
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
CCP2CON_P2M0_POSN                        equ 0006h
CCP2CON_P2M0_POSITION                    equ 0006h
CCP2CON_P2M0_SIZE                        equ 0001h
CCP2CON_P2M0_LENGTH                      equ 0001h
CCP2CON_P2M0_MASK                        equ 0040h
CCP2CON_P2M1_POSN                        equ 0007h
CCP2CON_P2M1_POSITION                    equ 0007h
CCP2CON_P2M1_SIZE                        equ 0001h
CCP2CON_P2M1_LENGTH                      equ 0001h
CCP2CON_P2M1_MASK                        equ 0080h
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

// Register: CCPR2
#define CCPR2 CCPR2
CCPR2                                    equ 0FB5h

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0FB5h
// bitfield definitions
CCPR2L_CCPR2L_POSN                       equ 0000h
CCPR2L_CCPR2L_POSITION                   equ 0000h
CCPR2L_CCPR2L_SIZE                       equ 0008h
CCPR2L_CCPR2L_LENGTH                     equ 0008h
CCPR2L_CCPR2L_MASK                       equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0FB6h
// bitfield definitions
CCPR2H_CCPR2H_POSN                       equ 0000h
CCPR2H_CCPR2H_POSITION                   equ 0000h
CCPR2H_CCPR2H_SIZE                       equ 0008h
CCPR2H_CCPR2H_LENGTH                     equ 0008h
CCPR2H_CCPR2H_MASK                       equ 00FFh

// Register: ECCP2DEL
#define ECCP2DEL ECCP2DEL
ECCP2DEL                                 equ 0FB7h
// bitfield definitions
ECCP2DEL_P2DC_POSN                       equ 0000h
ECCP2DEL_P2DC_POSITION                   equ 0000h
ECCP2DEL_P2DC_SIZE                       equ 0007h
ECCP2DEL_P2DC_LENGTH                     equ 0007h
ECCP2DEL_P2DC_MASK                       equ 007Fh
ECCP2DEL_P2RSEN_POSN                     equ 0007h
ECCP2DEL_P2RSEN_POSITION                 equ 0007h
ECCP2DEL_P2RSEN_SIZE                     equ 0001h
ECCP2DEL_P2RSEN_LENGTH                   equ 0001h
ECCP2DEL_P2RSEN_MASK                     equ 0080h
ECCP2DEL_P2DC0_POSN                      equ 0000h
ECCP2DEL_P2DC0_POSITION                  equ 0000h
ECCP2DEL_P2DC0_SIZE                      equ 0001h
ECCP2DEL_P2DC0_LENGTH                    equ 0001h
ECCP2DEL_P2DC0_MASK                      equ 0001h
ECCP2DEL_P2DC1_POSN                      equ 0001h
ECCP2DEL_P2DC1_POSITION                  equ 0001h
ECCP2DEL_P2DC1_SIZE                      equ 0001h
ECCP2DEL_P2DC1_LENGTH                    equ 0001h
ECCP2DEL_P2DC1_MASK                      equ 0002h
ECCP2DEL_P2DC2_POSN                      equ 0002h
ECCP2DEL_P2DC2_POSITION                  equ 0002h
ECCP2DEL_P2DC2_SIZE                      equ 0001h
ECCP2DEL_P2DC2_LENGTH                    equ 0001h
ECCP2DEL_P2DC2_MASK                      equ 0004h
ECCP2DEL_P2DC3_POSN                      equ 0003h
ECCP2DEL_P2DC3_POSITION                  equ 0003h
ECCP2DEL_P2DC3_SIZE                      equ 0001h
ECCP2DEL_P2DC3_LENGTH                    equ 0001h
ECCP2DEL_P2DC3_MASK                      equ 0008h
ECCP2DEL_P2DC4_POSN                      equ 0004h
ECCP2DEL_P2DC4_POSITION                  equ 0004h
ECCP2DEL_P2DC4_SIZE                      equ 0001h
ECCP2DEL_P2DC4_LENGTH                    equ 0001h
ECCP2DEL_P2DC4_MASK                      equ 0010h
ECCP2DEL_P2DC5_POSN                      equ 0005h
ECCP2DEL_P2DC5_POSITION                  equ 0005h
ECCP2DEL_P2DC5_SIZE                      equ 0001h
ECCP2DEL_P2DC5_LENGTH                    equ 0001h
ECCP2DEL_P2DC5_MASK                      equ 0020h
ECCP2DEL_P2DC6_POSN                      equ 0006h
ECCP2DEL_P2DC6_POSITION                  equ 0006h
ECCP2DEL_P2DC6_SIZE                      equ 0001h
ECCP2DEL_P2DC6_LENGTH                    equ 0001h
ECCP2DEL_P2DC6_MASK                      equ 0040h

// Register: ECCP2AS
#define ECCP2AS ECCP2AS
ECCP2AS                                  equ 0FB8h
// bitfield definitions
ECCP2AS_PSS2BD_POSN                      equ 0000h
ECCP2AS_PSS2BD_POSITION                  equ 0000h
ECCP2AS_PSS2BD_SIZE                      equ 0002h
ECCP2AS_PSS2BD_LENGTH                    equ 0002h
ECCP2AS_PSS2BD_MASK                      equ 0003h
ECCP2AS_PSS2AC_POSN                      equ 0002h
ECCP2AS_PSS2AC_POSITION                  equ 0002h
ECCP2AS_PSS2AC_SIZE                      equ 0002h
ECCP2AS_PSS2AC_LENGTH                    equ 0002h
ECCP2AS_PSS2AC_MASK                      equ 000Ch
ECCP2AS_ECCP2AS_POSN                     equ 0004h
ECCP2AS_ECCP2AS_POSITION                 equ 0004h
ECCP2AS_ECCP2AS_SIZE                     equ 0003h
ECCP2AS_ECCP2AS_LENGTH                   equ 0003h
ECCP2AS_ECCP2AS_MASK                     equ 0070h
ECCP2AS_ECCP2ASE_POSN                    equ 0007h
ECCP2AS_ECCP2ASE_POSITION                equ 0007h
ECCP2AS_ECCP2ASE_SIZE                    equ 0001h
ECCP2AS_ECCP2ASE_LENGTH                  equ 0001h
ECCP2AS_ECCP2ASE_MASK                    equ 0080h
ECCP2AS_PSS2BD0_POSN                     equ 0000h
ECCP2AS_PSS2BD0_POSITION                 equ 0000h
ECCP2AS_PSS2BD0_SIZE                     equ 0001h
ECCP2AS_PSS2BD0_LENGTH                   equ 0001h
ECCP2AS_PSS2BD0_MASK                     equ 0001h
ECCP2AS_PSS2BD1_POSN                     equ 0001h
ECCP2AS_PSS2BD1_POSITION                 equ 0001h
ECCP2AS_PSS2BD1_SIZE                     equ 0001h
ECCP2AS_PSS2BD1_LENGTH                   equ 0001h
ECCP2AS_PSS2BD1_MASK                     equ 0002h
ECCP2AS_PSS2AC0_POSN                     equ 0002h
ECCP2AS_PSS2AC0_POSITION                 equ 0002h
ECCP2AS_PSS2AC0_SIZE                     equ 0001h
ECCP2AS_PSS2AC0_LENGTH                   equ 0001h
ECCP2AS_PSS2AC0_MASK                     equ 0004h
ECCP2AS_PSS2AC1_POSN                     equ 0003h
ECCP2AS_PSS2AC1_POSITION                 equ 0003h
ECCP2AS_PSS2AC1_SIZE                     equ 0001h
ECCP2AS_PSS2AC1_LENGTH                   equ 0001h
ECCP2AS_PSS2AC1_MASK                     equ 0008h
ECCP2AS_ECCP2AS0_POSN                    equ 0004h
ECCP2AS_ECCP2AS0_POSITION                equ 0004h
ECCP2AS_ECCP2AS0_SIZE                    equ 0001h
ECCP2AS_ECCP2AS0_LENGTH                  equ 0001h
ECCP2AS_ECCP2AS0_MASK                    equ 0010h
ECCP2AS_ECCP2AS1_POSN                    equ 0005h
ECCP2AS_ECCP2AS1_POSITION                equ 0005h
ECCP2AS_ECCP2AS1_SIZE                    equ 0001h
ECCP2AS_ECCP2AS1_LENGTH                  equ 0001h
ECCP2AS_ECCP2AS1_MASK                    equ 0020h
ECCP2AS_ECCP2AS2_POSN                    equ 0006h
ECCP2AS_ECCP2AS2_POSITION                equ 0006h
ECCP2AS_ECCP2AS2_SIZE                    equ 0001h
ECCP2AS_ECCP2AS2_LENGTH                  equ 0001h
ECCP2AS_ECCP2AS2_MASK                    equ 0040h

// Register: PSTR2CON
#define PSTR2CON PSTR2CON
PSTR2CON                                 equ 0FB9h
// bitfield definitions
PSTR2CON_STRA_POSN                       equ 0000h
PSTR2CON_STRA_POSITION                   equ 0000h
PSTR2CON_STRA_SIZE                       equ 0001h
PSTR2CON_STRA_LENGTH                     equ 0001h
PSTR2CON_STRA_MASK                       equ 0001h
PSTR2CON_STRB_POSN                       equ 0001h
PSTR2CON_STRB_POSITION                   equ 0001h
PSTR2CON_STRB_SIZE                       equ 0001h
PSTR2CON_STRB_LENGTH                     equ 0001h
PSTR2CON_STRB_MASK                       equ 0002h
PSTR2CON_STRC_POSN                       equ 0002h
PSTR2CON_STRC_POSITION                   equ 0002h
PSTR2CON_STRC_SIZE                       equ 0001h
PSTR2CON_STRC_LENGTH                     equ 0001h
PSTR2CON_STRC_MASK                       equ 0004h
PSTR2CON_STRD_POSN                       equ 0003h
PSTR2CON_STRD_POSITION                   equ 0003h
PSTR2CON_STRD_SIZE                       equ 0001h
PSTR2CON_STRD_LENGTH                     equ 0001h
PSTR2CON_STRD_MASK                       equ 0008h
PSTR2CON_STRSYNC_POSN                    equ 0004h
PSTR2CON_STRSYNC_POSITION                equ 0004h
PSTR2CON_STRSYNC_SIZE                    equ 0001h
PSTR2CON_STRSYNC_LENGTH                  equ 0001h
PSTR2CON_STRSYNC_MASK                    equ 0010h
PSTR2CON_CMPL0_POSN                      equ 0006h
PSTR2CON_CMPL0_POSITION                  equ 0006h
PSTR2CON_CMPL0_SIZE                      equ 0001h
PSTR2CON_CMPL0_LENGTH                    equ 0001h
PSTR2CON_CMPL0_MASK                      equ 0040h
PSTR2CON_CMPL1_POSN                      equ 0007h
PSTR2CON_CMPL1_POSITION                  equ 0007h
PSTR2CON_CMPL1_SIZE                      equ 0001h
PSTR2CON_CMPL1_LENGTH                    equ 0001h
PSTR2CON_CMPL1_MASK                      equ 0080h
PSTR2CON_P2DC0_POSN                      equ 0000h
PSTR2CON_P2DC0_POSITION                  equ 0000h
PSTR2CON_P2DC0_SIZE                      equ 0001h
PSTR2CON_P2DC0_LENGTH                    equ 0001h
PSTR2CON_P2DC0_MASK                      equ 0001h
PSTR2CON_P2DC1_POSN                      equ 0001h
PSTR2CON_P2DC1_POSITION                  equ 0001h
PSTR2CON_P2DC1_SIZE                      equ 0001h
PSTR2CON_P2DC1_LENGTH                    equ 0001h
PSTR2CON_P2DC1_MASK                      equ 0002h
PSTR2CON_P2DC2_POSN                      equ 0002h
PSTR2CON_P2DC2_POSITION                  equ 0002h
PSTR2CON_P2DC2_SIZE                      equ 0001h
PSTR2CON_P2DC2_LENGTH                    equ 0001h
PSTR2CON_P2DC2_MASK                      equ 0004h
PSTR2CON_P2DC3_POSN                      equ 0003h
PSTR2CON_P2DC3_POSITION                  equ 0003h
PSTR2CON_P2DC3_SIZE                      equ 0001h
PSTR2CON_P2DC3_LENGTH                    equ 0001h
PSTR2CON_P2DC3_MASK                      equ 0008h
PSTR2CON_P2DC4_POSN                      equ 0004h
PSTR2CON_P2DC4_POSITION                  equ 0004h
PSTR2CON_P2DC4_SIZE                      equ 0001h
PSTR2CON_P2DC4_LENGTH                    equ 0001h
PSTR2CON_P2DC4_MASK                      equ 0010h
PSTR2CON_P2DC5_POSN                      equ 0005h
PSTR2CON_P2DC5_POSITION                  equ 0005h
PSTR2CON_P2DC5_SIZE                      equ 0001h
PSTR2CON_P2DC5_LENGTH                    equ 0001h
PSTR2CON_P2DC5_MASK                      equ 0020h
PSTR2CON_P2DC6_POSN                      equ 0006h
PSTR2CON_P2DC6_POSITION                  equ 0006h
PSTR2CON_P2DC6_SIZE                      equ 0001h
PSTR2CON_P2DC6_LENGTH                    equ 0001h
PSTR2CON_P2DC6_MASK                      equ 0040h
PSTR2CON_P2DC02_POSN                     equ 0000h
PSTR2CON_P2DC02_POSITION                 equ 0000h
PSTR2CON_P2DC02_SIZE                     equ 0001h
PSTR2CON_P2DC02_LENGTH                   equ 0001h
PSTR2CON_P2DC02_MASK                     equ 0001h
PSTR2CON_P2DC12_POSN                     equ 0001h
PSTR2CON_P2DC12_POSITION                 equ 0001h
PSTR2CON_P2DC12_SIZE                     equ 0001h
PSTR2CON_P2DC12_LENGTH                   equ 0001h
PSTR2CON_P2DC12_MASK                     equ 0002h
PSTR2CON_P2DC22_POSN                     equ 0002h
PSTR2CON_P2DC22_POSITION                 equ 0002h
PSTR2CON_P2DC22_SIZE                     equ 0001h
PSTR2CON_P2DC22_LENGTH                   equ 0001h
PSTR2CON_P2DC22_MASK                     equ 0004h
PSTR2CON_P2DC32_POSN                     equ 0003h
PSTR2CON_P2DC32_POSITION                 equ 0003h
PSTR2CON_P2DC32_SIZE                     equ 0001h
PSTR2CON_P2DC32_LENGTH                   equ 0001h
PSTR2CON_P2DC32_MASK                     equ 0008h
PSTR2CON_P2DC42_POSN                     equ 0004h
PSTR2CON_P2DC42_POSITION                 equ 0004h
PSTR2CON_P2DC42_SIZE                     equ 0001h
PSTR2CON_P2DC42_LENGTH                   equ 0001h
PSTR2CON_P2DC42_MASK                     equ 0010h
PSTR2CON_CMPL02_POSN                     equ 0006h
PSTR2CON_CMPL02_POSITION                 equ 0006h
PSTR2CON_CMPL02_SIZE                     equ 0001h
PSTR2CON_CMPL02_LENGTH                   equ 0001h
PSTR2CON_CMPL02_MASK                     equ 0040h
PSTR2CON_CMPL12_POSN                     equ 0007h
PSTR2CON_CMPL12_POSITION                 equ 0007h
PSTR2CON_CMPL12_SIZE                     equ 0001h
PSTR2CON_CMPL12_LENGTH                   equ 0001h
PSTR2CON_CMPL12_MASK                     equ 0080h
PSTR2CON_P2DC0CON_POSN                   equ 0000h
PSTR2CON_P2DC0CON_POSITION               equ 0000h
PSTR2CON_P2DC0CON_SIZE                   equ 0001h
PSTR2CON_P2DC0CON_LENGTH                 equ 0001h
PSTR2CON_P2DC0CON_MASK                   equ 0001h
PSTR2CON_P2DC1CON_POSN                   equ 0001h
PSTR2CON_P2DC1CON_POSITION               equ 0001h
PSTR2CON_P2DC1CON_SIZE                   equ 0001h
PSTR2CON_P2DC1CON_LENGTH                 equ 0001h
PSTR2CON_P2DC1CON_MASK                   equ 0002h
PSTR2CON_P2DC2CON_POSN                   equ 0002h
PSTR2CON_P2DC2CON_POSITION               equ 0002h
PSTR2CON_P2DC2CON_SIZE                   equ 0001h
PSTR2CON_P2DC2CON_LENGTH                 equ 0001h
PSTR2CON_P2DC2CON_MASK                   equ 0004h
PSTR2CON_P2DC3CON_POSN                   equ 0003h
PSTR2CON_P2DC3CON_POSITION               equ 0003h
PSTR2CON_P2DC3CON_SIZE                   equ 0001h
PSTR2CON_P2DC3CON_LENGTH                 equ 0001h
PSTR2CON_P2DC3CON_MASK                   equ 0008h
PSTR2CON_P2DC4CON_POSN                   equ 0004h
PSTR2CON_P2DC4CON_POSITION               equ 0004h
PSTR2CON_P2DC4CON_SIZE                   equ 0001h
PSTR2CON_P2DC4CON_LENGTH                 equ 0001h
PSTR2CON_P2DC4CON_MASK                   equ 0010h
PSTR2CON_P2DC62_POSN                     equ 0006h
PSTR2CON_P2DC62_POSITION                 equ 0006h
PSTR2CON_P2DC62_SIZE                     equ 0001h
PSTR2CON_P2DC62_LENGTH                   equ 0001h
PSTR2CON_P2DC62_MASK                     equ 0040h
PSTR2CON_STRA2_POSN                      equ 0000h
PSTR2CON_STRA2_POSITION                  equ 0000h
PSTR2CON_STRA2_SIZE                      equ 0001h
PSTR2CON_STRA2_LENGTH                    equ 0001h
PSTR2CON_STRA2_MASK                      equ 0001h
PSTR2CON_STRB2_POSN                      equ 0001h
PSTR2CON_STRB2_POSITION                  equ 0001h
PSTR2CON_STRB2_SIZE                      equ 0001h
PSTR2CON_STRB2_LENGTH                    equ 0001h
PSTR2CON_STRB2_MASK                      equ 0002h
PSTR2CON_STRC2_POSN                      equ 0002h
PSTR2CON_STRC2_POSITION                  equ 0002h
PSTR2CON_STRC2_SIZE                      equ 0001h
PSTR2CON_STRC2_LENGTH                    equ 0001h
PSTR2CON_STRC2_MASK                      equ 0004h
PSTR2CON_STRD2_POSN                      equ 0003h
PSTR2CON_STRD2_POSITION                  equ 0003h
PSTR2CON_STRD2_SIZE                      equ 0001h
PSTR2CON_STRD2_LENGTH                    equ 0001h
PSTR2CON_STRD2_MASK                      equ 0008h
PSTR2CON_STRSYNC2_POSN                   equ 0004h
PSTR2CON_STRSYNC2_POSITION               equ 0004h
PSTR2CON_STRSYNC2_SIZE                   equ 0001h
PSTR2CON_STRSYNC2_LENGTH                 equ 0001h
PSTR2CON_STRSYNC2_MASK                   equ 0010h
PSTR2CON_P2DC6CON_POSN                   equ 0006h
PSTR2CON_P2DC6CON_POSITION               equ 0006h
PSTR2CON_P2DC6CON_SIZE                   equ 0001h
PSTR2CON_P2DC6CON_LENGTH                 equ 0001h
PSTR2CON_P2DC6CON_MASK                   equ 0040h
PSTR2CON_P2DC52_POSN                     equ 0005h
PSTR2CON_P2DC52_POSITION                 equ 0005h
PSTR2CON_P2DC52_SIZE                     equ 0001h
PSTR2CON_P2DC52_LENGTH                   equ 0001h
PSTR2CON_P2DC52_MASK                     equ 0020h
PSTR2CON_P2DC5CON_POSN                   equ 0005h
PSTR2CON_P2DC5CON_POSITION               equ 0005h
PSTR2CON_P2DC5CON_SIZE                   equ 0001h
PSTR2CON_P2DC5CON_LENGTH                 equ 0001h
PSTR2CON_P2DC5CON_MASK                   equ 0020h

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0FBAh
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

// Register: CCPR1
#define CCPR1 CCPR1
CCPR1                                    equ 0FBBh

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0FBBh
// bitfield definitions
CCPR1L_CCPR1L_POSN                       equ 0000h
CCPR1L_CCPR1L_POSITION                   equ 0000h
CCPR1L_CCPR1L_SIZE                       equ 0008h
CCPR1L_CCPR1L_LENGTH                     equ 0008h
CCPR1L_CCPR1L_MASK                       equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0FBCh
// bitfield definitions
CCPR1H_CCPR1H_POSN                       equ 0000h
CCPR1H_CCPR1H_POSITION                   equ 0000h
CCPR1H_CCPR1H_SIZE                       equ 0008h
CCPR1H_CCPR1H_LENGTH                     equ 0008h
CCPR1H_CCPR1H_MASK                       equ 00FFh

// Register: ECCP1DEL
#define ECCP1DEL ECCP1DEL
ECCP1DEL                                 equ 0FBDh
// bitfield definitions
ECCP1DEL_P1DC_POSN                       equ 0000h
ECCP1DEL_P1DC_POSITION                   equ 0000h
ECCP1DEL_P1DC_SIZE                       equ 0007h
ECCP1DEL_P1DC_LENGTH                     equ 0007h
ECCP1DEL_P1DC_MASK                       equ 007Fh
ECCP1DEL_P1RSEN_POSN                     equ 0007h
ECCP1DEL_P1RSEN_POSITION                 equ 0007h
ECCP1DEL_P1RSEN_SIZE                     equ 0001h
ECCP1DEL_P1RSEN_LENGTH                   equ 0001h
ECCP1DEL_P1RSEN_MASK                     equ 0080h
ECCP1DEL_P1DC0_POSN                      equ 0000h
ECCP1DEL_P1DC0_POSITION                  equ 0000h
ECCP1DEL_P1DC0_SIZE                      equ 0001h
ECCP1DEL_P1DC0_LENGTH                    equ 0001h
ECCP1DEL_P1DC0_MASK                      equ 0001h
ECCP1DEL_P1DC1_POSN                      equ 0001h
ECCP1DEL_P1DC1_POSITION                  equ 0001h
ECCP1DEL_P1DC1_SIZE                      equ 0001h
ECCP1DEL_P1DC1_LENGTH                    equ 0001h
ECCP1DEL_P1DC1_MASK                      equ 0002h
ECCP1DEL_P1DC2_POSN                      equ 0002h
ECCP1DEL_P1DC2_POSITION                  equ 0002h
ECCP1DEL_P1DC2_SIZE                      equ 0001h
ECCP1DEL_P1DC2_LENGTH                    equ 0001h
ECCP1DEL_P1DC2_MASK                      equ 0004h
ECCP1DEL_P1DC3_POSN                      equ 0003h
ECCP1DEL_P1DC3_POSITION                  equ 0003h
ECCP1DEL_P1DC3_SIZE                      equ 0001h
ECCP1DEL_P1DC3_LENGTH                    equ 0001h
ECCP1DEL_P1DC3_MASK                      equ 0008h
ECCP1DEL_P1DC4_POSN                      equ 0004h
ECCP1DEL_P1DC4_POSITION                  equ 0004h
ECCP1DEL_P1DC4_SIZE                      equ 0001h
ECCP1DEL_P1DC4_LENGTH                    equ 0001h
ECCP1DEL_P1DC4_MASK                      equ 0010h
ECCP1DEL_P1DC5_POSN                      equ 0005h
ECCP1DEL_P1DC5_POSITION                  equ 0005h
ECCP1DEL_P1DC5_SIZE                      equ 0001h
ECCP1DEL_P1DC5_LENGTH                    equ 0001h
ECCP1DEL_P1DC5_MASK                      equ 0020h
ECCP1DEL_P1DC6_POSN                      equ 0006h
ECCP1DEL_P1DC6_POSITION                  equ 0006h
ECCP1DEL_P1DC6_SIZE                      equ 0001h
ECCP1DEL_P1DC6_LENGTH                    equ 0001h
ECCP1DEL_P1DC6_MASK                      equ 0040h

// Register: ECCP1AS
#define ECCP1AS ECCP1AS
ECCP1AS                                  equ 0FBEh
// bitfield definitions
ECCP1AS_PSS1BD_POSN                      equ 0000h
ECCP1AS_PSS1BD_POSITION                  equ 0000h
ECCP1AS_PSS1BD_SIZE                      equ 0002h
ECCP1AS_PSS1BD_LENGTH                    equ 0002h
ECCP1AS_PSS1BD_MASK                      equ 0003h
ECCP1AS_PSS1AC_POSN                      equ 0002h
ECCP1AS_PSS1AC_POSITION                  equ 0002h
ECCP1AS_PSS1AC_SIZE                      equ 0002h
ECCP1AS_PSS1AC_LENGTH                    equ 0002h
ECCP1AS_PSS1AC_MASK                      equ 000Ch
ECCP1AS_ECCP1AS_POSN                     equ 0004h
ECCP1AS_ECCP1AS_POSITION                 equ 0004h
ECCP1AS_ECCP1AS_SIZE                     equ 0003h
ECCP1AS_ECCP1AS_LENGTH                   equ 0003h
ECCP1AS_ECCP1AS_MASK                     equ 0070h
ECCP1AS_ECCP1ASE_POSN                    equ 0007h
ECCP1AS_ECCP1ASE_POSITION                equ 0007h
ECCP1AS_ECCP1ASE_SIZE                    equ 0001h
ECCP1AS_ECCP1ASE_LENGTH                  equ 0001h
ECCP1AS_ECCP1ASE_MASK                    equ 0080h
ECCP1AS_PSS1BD0_POSN                     equ 0000h
ECCP1AS_PSS1BD0_POSITION                 equ 0000h
ECCP1AS_PSS1BD0_SIZE                     equ 0001h
ECCP1AS_PSS1BD0_LENGTH                   equ 0001h
ECCP1AS_PSS1BD0_MASK                     equ 0001h
ECCP1AS_PSS1BD1_POSN                     equ 0001h
ECCP1AS_PSS1BD1_POSITION                 equ 0001h
ECCP1AS_PSS1BD1_SIZE                     equ 0001h
ECCP1AS_PSS1BD1_LENGTH                   equ 0001h
ECCP1AS_PSS1BD1_MASK                     equ 0002h
ECCP1AS_PSS1AC0_POSN                     equ 0002h
ECCP1AS_PSS1AC0_POSITION                 equ 0002h
ECCP1AS_PSS1AC0_SIZE                     equ 0001h
ECCP1AS_PSS1AC0_LENGTH                   equ 0001h
ECCP1AS_PSS1AC0_MASK                     equ 0004h
ECCP1AS_PSS1AC1_POSN                     equ 0003h
ECCP1AS_PSS1AC1_POSITION                 equ 0003h
ECCP1AS_PSS1AC1_SIZE                     equ 0001h
ECCP1AS_PSS1AC1_LENGTH                   equ 0001h
ECCP1AS_PSS1AC1_MASK                     equ 0008h
ECCP1AS_ECCP1AS0_POSN                    equ 0004h
ECCP1AS_ECCP1AS0_POSITION                equ 0004h
ECCP1AS_ECCP1AS0_SIZE                    equ 0001h
ECCP1AS_ECCP1AS0_LENGTH                  equ 0001h
ECCP1AS_ECCP1AS0_MASK                    equ 0010h
ECCP1AS_ECCP1AS1_POSN                    equ 0005h
ECCP1AS_ECCP1AS1_POSITION                equ 0005h
ECCP1AS_ECCP1AS1_SIZE                    equ 0001h
ECCP1AS_ECCP1AS1_LENGTH                  equ 0001h
ECCP1AS_ECCP1AS1_MASK                    equ 0020h
ECCP1AS_ECCP1AS2_POSN                    equ 0006h
ECCP1AS_ECCP1AS2_POSITION                equ 0006h
ECCP1AS_ECCP1AS2_SIZE                    equ 0001h
ECCP1AS_ECCP1AS2_LENGTH                  equ 0001h
ECCP1AS_ECCP1AS2_MASK                    equ 0040h

// Register: PSTR1CON
#define PSTR1CON PSTR1CON
PSTR1CON                                 equ 0FBFh
// bitfield definitions
PSTR1CON_STRA_POSN                       equ 0000h
PSTR1CON_STRA_POSITION                   equ 0000h
PSTR1CON_STRA_SIZE                       equ 0001h
PSTR1CON_STRA_LENGTH                     equ 0001h
PSTR1CON_STRA_MASK                       equ 0001h
PSTR1CON_STRB_POSN                       equ 0001h
PSTR1CON_STRB_POSITION                   equ 0001h
PSTR1CON_STRB_SIZE                       equ 0001h
PSTR1CON_STRB_LENGTH                     equ 0001h
PSTR1CON_STRB_MASK                       equ 0002h
PSTR1CON_STRC_POSN                       equ 0002h
PSTR1CON_STRC_POSITION                   equ 0002h
PSTR1CON_STRC_SIZE                       equ 0001h
PSTR1CON_STRC_LENGTH                     equ 0001h
PSTR1CON_STRC_MASK                       equ 0004h
PSTR1CON_STRD_POSN                       equ 0003h
PSTR1CON_STRD_POSITION                   equ 0003h
PSTR1CON_STRD_SIZE                       equ 0001h
PSTR1CON_STRD_LENGTH                     equ 0001h
PSTR1CON_STRD_MASK                       equ 0008h
PSTR1CON_STRSYNC_POSN                    equ 0004h
PSTR1CON_STRSYNC_POSITION                equ 0004h
PSTR1CON_STRSYNC_SIZE                    equ 0001h
PSTR1CON_STRSYNC_LENGTH                  equ 0001h
PSTR1CON_STRSYNC_MASK                    equ 0010h
PSTR1CON_CMPL0_POSN                      equ 0006h
PSTR1CON_CMPL0_POSITION                  equ 0006h
PSTR1CON_CMPL0_SIZE                      equ 0001h
PSTR1CON_CMPL0_LENGTH                    equ 0001h
PSTR1CON_CMPL0_MASK                      equ 0040h
PSTR1CON_CMPL1_POSN                      equ 0007h
PSTR1CON_CMPL1_POSITION                  equ 0007h
PSTR1CON_CMPL1_SIZE                      equ 0001h
PSTR1CON_CMPL1_LENGTH                    equ 0001h
PSTR1CON_CMPL1_MASK                      equ 0080h

// Register: WDTCON
#define WDTCON WDTCON
WDTCON                                   equ 0FC0h
// bitfield definitions
WDTCON_SWDTEN_POSN                       equ 0000h
WDTCON_SWDTEN_POSITION                   equ 0000h
WDTCON_SWDTEN_SIZE                       equ 0001h
WDTCON_SWDTEN_LENGTH                     equ 0001h
WDTCON_SWDTEN_MASK                       equ 0001h
WDTCON_ULPSINK_POSN                      equ 0001h
WDTCON_ULPSINK_POSITION                  equ 0001h
WDTCON_ULPSINK_SIZE                      equ 0001h
WDTCON_ULPSINK_LENGTH                    equ 0001h
WDTCON_ULPSINK_MASK                      equ 0002h
WDTCON_ULPEN_POSN                        equ 0002h
WDTCON_ULPEN_POSITION                    equ 0002h
WDTCON_ULPEN_SIZE                        equ 0001h
WDTCON_ULPEN_LENGTH                      equ 0001h
WDTCON_ULPEN_MASK                        equ 0004h
WDTCON_DS_POSN                           equ 0003h
WDTCON_DS_POSITION                       equ 0003h
WDTCON_DS_SIZE                           equ 0001h
WDTCON_DS_LENGTH                         equ 0001h
WDTCON_DS_MASK                           equ 0008h
WDTCON_ULPLVL_POSN                       equ 0005h
WDTCON_ULPLVL_POSITION                   equ 0005h
WDTCON_ULPLVL_SIZE                       equ 0001h
WDTCON_ULPLVL_LENGTH                     equ 0001h
WDTCON_ULPLVL_MASK                       equ 0020h
WDTCON_LVDSTAT_POSN                      equ 0006h
WDTCON_LVDSTAT_POSITION                  equ 0006h
WDTCON_LVDSTAT_SIZE                      equ 0001h
WDTCON_LVDSTAT_LENGTH                    equ 0001h
WDTCON_LVDSTAT_MASK                      equ 0040h
WDTCON_REGSLP_POSN                       equ 0007h
WDTCON_REGSLP_POSITION                   equ 0007h
WDTCON_REGSLP_SIZE                       equ 0001h
WDTCON_REGSLP_LENGTH                     equ 0001h
WDTCON_REGSLP_MASK                       equ 0080h
WDTCON_SWDTE_POSN                        equ 0000h
WDTCON_SWDTE_POSITION                    equ 0000h
WDTCON_SWDTE_SIZE                        equ 0001h
WDTCON_SWDTE_LENGTH                      equ 0001h
WDTCON_SWDTE_MASK                        equ 0001h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 0FC1h
// bitfield definitions
ADCON1_ADCS_POSN                         equ 0000h
ADCON1_ADCS_POSITION                     equ 0000h
ADCON1_ADCS_SIZE                         equ 0003h
ADCON1_ADCS_LENGTH                       equ 0003h
ADCON1_ADCS_MASK                         equ 0007h
ADCON1_ACQT_POSN                         equ 0003h
ADCON1_ACQT_POSITION                     equ 0003h
ADCON1_ACQT_SIZE                         equ 0003h
ADCON1_ACQT_LENGTH                       equ 0003h
ADCON1_ACQT_MASK                         equ 0038h
ADCON1_ADCAL_POSN                        equ 0006h
ADCON1_ADCAL_POSITION                    equ 0006h
ADCON1_ADCAL_SIZE                        equ 0001h
ADCON1_ADCAL_LENGTH                      equ 0001h
ADCON1_ADCAL_MASK                        equ 0040h
ADCON1_ADFM_POSN                         equ 0007h
ADCON1_ADFM_POSITION                     equ 0007h
ADCON1_ADFM_SIZE                         equ 0001h
ADCON1_ADFM_LENGTH                       equ 0001h
ADCON1_ADFM_MASK                         equ 0080h
ADCON1_ADCS0_POSN                        equ 0000h
ADCON1_ADCS0_POSITION                    equ 0000h
ADCON1_ADCS0_SIZE                        equ 0001h
ADCON1_ADCS0_LENGTH                      equ 0001h
ADCON1_ADCS0_MASK                        equ 0001h
ADCON1_ADCS1_POSN                        equ 0001h
ADCON1_ADCS1_POSITION                    equ 0001h
ADCON1_ADCS1_SIZE                        equ 0001h
ADCON1_ADCS1_LENGTH                      equ 0001h
ADCON1_ADCS1_MASK                        equ 0002h
ADCON1_ADCS2_POSN                        equ 0002h
ADCON1_ADCS2_POSITION                    equ 0002h
ADCON1_ADCS2_SIZE                        equ 0001h
ADCON1_ADCS2_LENGTH                      equ 0001h
ADCON1_ADCS2_MASK                        equ 0004h
ADCON1_ACQT0_POSN                        equ 0003h
ADCON1_ACQT0_POSITION                    equ 0003h
ADCON1_ACQT0_SIZE                        equ 0001h
ADCON1_ACQT0_LENGTH                      equ 0001h
ADCON1_ACQT0_MASK                        equ 0008h
ADCON1_ACQT1_POSN                        equ 0004h
ADCON1_ACQT1_POSITION                    equ 0004h
ADCON1_ACQT1_SIZE                        equ 0001h
ADCON1_ACQT1_LENGTH                      equ 0001h
ADCON1_ACQT1_MASK                        equ 0010h
ADCON1_ACQT2_POSN                        equ 0005h
ADCON1_ACQT2_POSITION                    equ 0005h
ADCON1_ACQT2_SIZE                        equ 0001h
ADCON1_ACQT2_LENGTH                      equ 0001h
ADCON1_ACQT2_MASK                        equ 0020h
ADCON1_CHSN3_POSN                        equ 0003h
ADCON1_CHSN3_POSITION                    equ 0003h
ADCON1_CHSN3_SIZE                        equ 0001h
ADCON1_CHSN3_LENGTH                      equ 0001h
ADCON1_CHSN3_MASK                        equ 0008h
ADCON1_VCFG01_POSN                       equ 0004h
ADCON1_VCFG01_POSITION                   equ 0004h
ADCON1_VCFG01_SIZE                       equ 0001h
ADCON1_VCFG01_LENGTH                     equ 0001h
ADCON1_VCFG01_MASK                       equ 0010h
ADCON1_VCFG11_POSN                       equ 0005h
ADCON1_VCFG11_POSITION                   equ 0005h
ADCON1_VCFG11_SIZE                       equ 0001h
ADCON1_VCFG11_LENGTH                     equ 0001h
ADCON1_VCFG11_MASK                       equ 0020h

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 0FC2h
// bitfield definitions
ADCON0_GO_NOT_DONE_POSN                  equ 0001h
ADCON0_GO_NOT_DONE_POSITION              equ 0001h
ADCON0_GO_NOT_DONE_SIZE                  equ 0001h
ADCON0_GO_NOT_DONE_LENGTH                equ 0001h
ADCON0_GO_NOT_DONE_MASK                  equ 0002h
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
ADCON0_VCFG_SIZE                         equ 0002h
ADCON0_VCFG_LENGTH                       equ 0002h
ADCON0_VCFG_MASK                         equ 00C0h
ADCON0_GO_DONE_POSN                      equ 0001h
ADCON0_GO_DONE_POSITION                  equ 0001h
ADCON0_GO_DONE_SIZE                      equ 0001h
ADCON0_GO_DONE_LENGTH                    equ 0001h
ADCON0_GO_DONE_MASK                      equ 0002h
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
ADCON0_VCFG0_POSN                        equ 0006h
ADCON0_VCFG0_POSITION                    equ 0006h
ADCON0_VCFG0_SIZE                        equ 0001h
ADCON0_VCFG0_LENGTH                      equ 0001h
ADCON0_VCFG0_MASK                        equ 0040h
ADCON0_VCFG1_POSN                        equ 0007h
ADCON0_VCFG1_POSITION                    equ 0007h
ADCON0_VCFG1_SIZE                        equ 0001h
ADCON0_VCFG1_LENGTH                      equ 0001h
ADCON0_VCFG1_MASK                        equ 0080h
ADCON0_DONE_POSN                         equ 0001h
ADCON0_DONE_POSITION                     equ 0001h
ADCON0_DONE_SIZE                         equ 0001h
ADCON0_DONE_LENGTH                       equ 0001h
ADCON0_DONE_MASK                         equ 0002h
ADCON0_GO_POSN                           equ 0001h
ADCON0_GO_POSITION                       equ 0001h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0002h
ADCON0_NOT_DONE_POSN                     equ 0001h
ADCON0_NOT_DONE_POSITION                 equ 0001h
ADCON0_NOT_DONE_SIZE                     equ 0001h
ADCON0_NOT_DONE_LENGTH                   equ 0001h
ADCON0_NOT_DONE_MASK                     equ 0002h
ADCON0_nDONE_POSN                        equ 0001h
ADCON0_nDONE_POSITION                    equ 0001h
ADCON0_nDONE_SIZE                        equ 0001h
ADCON0_nDONE_LENGTH                      equ 0001h
ADCON0_nDONE_MASK                        equ 0002h
ADCON0_GODONE_POSN                       equ 0001h
ADCON0_GODONE_POSITION                   equ 0001h
ADCON0_GODONE_SIZE                       equ 0001h
ADCON0_GODONE_LENGTH                     equ 0001h
ADCON0_GODONE_MASK                       equ 0002h
ADCON0_ADCAL_POSN                        equ 0007h
ADCON0_ADCAL_POSITION                    equ 0007h
ADCON0_ADCAL_SIZE                        equ 0001h
ADCON0_ADCAL_LENGTH                      equ 0001h
ADCON0_ADCAL_MASK                        equ 0080h

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 0FC3h

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 0FC3h
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 0FC4h
// bitfield definitions
ADRESH_ADRESH_POSN                       equ 0000h
ADRESH_ADRESH_POSITION                   equ 0000h
ADRESH_ADRESH_SIZE                       equ 0008h
ADRESH_ADRESH_LENGTH                     equ 0008h
ADRESH_ADRESH_MASK                       equ 00FFh

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
SSP1CON2                                 equ 0FC5h
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
SSP1CON2_ADMSK1_POSN                     equ 0001h
SSP1CON2_ADMSK1_POSITION                 equ 0001h
SSP1CON2_ADMSK1_SIZE                     equ 0001h
SSP1CON2_ADMSK1_LENGTH                   equ 0001h
SSP1CON2_ADMSK1_MASK                     equ 0002h
SSP1CON2_ADMSK2_POSN                     equ 0002h
SSP1CON2_ADMSK2_POSITION                 equ 0002h
SSP1CON2_ADMSK2_SIZE                     equ 0001h
SSP1CON2_ADMSK2_LENGTH                   equ 0001h
SSP1CON2_ADMSK2_MASK                     equ 0004h
SSP1CON2_ADMSK3_POSN                     equ 0003h
SSP1CON2_ADMSK3_POSITION                 equ 0003h
SSP1CON2_ADMSK3_SIZE                     equ 0001h
SSP1CON2_ADMSK3_LENGTH                   equ 0001h
SSP1CON2_ADMSK3_MASK                     equ 0008h
SSP1CON2_ADMSK4_POSN                     equ 0004h
SSP1CON2_ADMSK4_POSITION                 equ 0004h
SSP1CON2_ADMSK4_SIZE                     equ 0001h
SSP1CON2_ADMSK4_LENGTH                   equ 0001h
SSP1CON2_ADMSK4_MASK                     equ 0010h
SSP1CON2_ADMSK5_POSN                     equ 0005h
SSP1CON2_ADMSK5_POSITION                 equ 0005h
SSP1CON2_ADMSK5_SIZE                     equ 0001h
SSP1CON2_ADMSK5_LENGTH                   equ 0001h
SSP1CON2_ADMSK5_MASK                     equ 0020h
SSP1CON2_SEN1_POSN                       equ 0000h
SSP1CON2_SEN1_POSITION                   equ 0000h
SSP1CON2_SEN1_SIZE                       equ 0001h
SSP1CON2_SEN1_LENGTH                     equ 0001h
SSP1CON2_SEN1_MASK                       equ 0001h
SSP1CON2_ADMSK11_POSN                    equ 0001h
SSP1CON2_ADMSK11_POSITION                equ 0001h
SSP1CON2_ADMSK11_SIZE                    equ 0001h
SSP1CON2_ADMSK11_LENGTH                  equ 0001h
SSP1CON2_ADMSK11_MASK                    equ 0002h
SSP1CON2_ADMSK21_POSN                    equ 0002h
SSP1CON2_ADMSK21_POSITION                equ 0002h
SSP1CON2_ADMSK21_SIZE                    equ 0001h
SSP1CON2_ADMSK21_LENGTH                  equ 0001h
SSP1CON2_ADMSK21_MASK                    equ 0004h
SSP1CON2_ADMSK31_POSN                    equ 0003h
SSP1CON2_ADMSK31_POSITION                equ 0003h
SSP1CON2_ADMSK31_SIZE                    equ 0001h
SSP1CON2_ADMSK31_LENGTH                  equ 0001h
SSP1CON2_ADMSK31_MASK                    equ 0008h
SSP1CON2_ACKEN1_POSN                     equ 0004h
SSP1CON2_ACKEN1_POSITION                 equ 0004h
SSP1CON2_ACKEN1_SIZE                     equ 0001h
SSP1CON2_ACKEN1_LENGTH                   equ 0001h
SSP1CON2_ACKEN1_MASK                     equ 0010h
SSP1CON2_ACKDT1_POSN                     equ 0005h
SSP1CON2_ACKDT1_POSITION                 equ 0005h
SSP1CON2_ACKDT1_SIZE                     equ 0001h
SSP1CON2_ACKDT1_LENGTH                   equ 0001h
SSP1CON2_ACKDT1_MASK                     equ 0020h
SSP1CON2_ACKSTAT1_POSN                   equ 0006h
SSP1CON2_ACKSTAT1_POSITION               equ 0006h
SSP1CON2_ACKSTAT1_SIZE                   equ 0001h
SSP1CON2_ACKSTAT1_LENGTH                 equ 0001h
SSP1CON2_ACKSTAT1_MASK                   equ 0040h
SSP1CON2_GCEN1_POSN                      equ 0007h
SSP1CON2_GCEN1_POSITION                  equ 0007h
SSP1CON2_GCEN1_SIZE                      equ 0001h
SSP1CON2_GCEN1_LENGTH                    equ 0001h
SSP1CON2_GCEN1_MASK                      equ 0080h
SSP1CON2_RSEN1_POSN                      equ 0001h
SSP1CON2_RSEN1_POSITION                  equ 0001h
SSP1CON2_RSEN1_SIZE                      equ 0001h
SSP1CON2_RSEN1_LENGTH                    equ 0001h
SSP1CON2_RSEN1_MASK                      equ 0002h
SSP1CON2_PEN1_POSN                       equ 0002h
SSP1CON2_PEN1_POSITION                   equ 0002h
SSP1CON2_PEN1_SIZE                       equ 0001h
SSP1CON2_PEN1_LENGTH                     equ 0001h
SSP1CON2_PEN1_MASK                       equ 0004h
SSP1CON2_RCEN1_POSN                      equ 0003h
SSP1CON2_RCEN1_POSITION                  equ 0003h
SSP1CON2_RCEN1_SIZE                      equ 0001h
SSP1CON2_RCEN1_LENGTH                    equ 0001h
SSP1CON2_RCEN1_MASK                      equ 0008h
SSP1CON2_ADMSK41_POSN                    equ 0004h
SSP1CON2_ADMSK41_POSITION                equ 0004h
SSP1CON2_ADMSK41_SIZE                    equ 0001h
SSP1CON2_ADMSK41_LENGTH                  equ 0001h
SSP1CON2_ADMSK41_MASK                    equ 0010h
SSP1CON2_ADMSK51_POSN                    equ 0005h
SSP1CON2_ADMSK51_POSITION                equ 0005h
SSP1CON2_ADMSK51_SIZE                    equ 0001h
SSP1CON2_ADMSK51_LENGTH                  equ 0001h
SSP1CON2_ADMSK51_MASK                    equ 0020h

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
SSP1CON1                                 equ 0FC6h
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
SSP1CON1_SSPM01_POSN                     equ 0000h
SSP1CON1_SSPM01_POSITION                 equ 0000h
SSP1CON1_SSPM01_SIZE                     equ 0001h
SSP1CON1_SSPM01_LENGTH                   equ 0001h
SSP1CON1_SSPM01_MASK                     equ 0001h
SSP1CON1_SSPM11_POSN                     equ 0001h
SSP1CON1_SSPM11_POSITION                 equ 0001h
SSP1CON1_SSPM11_SIZE                     equ 0001h
SSP1CON1_SSPM11_LENGTH                   equ 0001h
SSP1CON1_SSPM11_MASK                     equ 0002h
SSP1CON1_SSPM21_POSN                     equ 0002h
SSP1CON1_SSPM21_POSITION                 equ 0002h
SSP1CON1_SSPM21_SIZE                     equ 0001h
SSP1CON1_SSPM21_LENGTH                   equ 0001h
SSP1CON1_SSPM21_MASK                     equ 0004h
SSP1CON1_SSPM31_POSN                     equ 0003h
SSP1CON1_SSPM31_POSITION                 equ 0003h
SSP1CON1_SSPM31_SIZE                     equ 0001h
SSP1CON1_SSPM31_LENGTH                   equ 0001h
SSP1CON1_SSPM31_MASK                     equ 0008h
SSP1CON1_CKP1_POSN                       equ 0004h
SSP1CON1_CKP1_POSITION                   equ 0004h
SSP1CON1_CKP1_SIZE                       equ 0001h
SSP1CON1_CKP1_LENGTH                     equ 0001h
SSP1CON1_CKP1_MASK                       equ 0010h
SSP1CON1_SSPEN1_POSN                     equ 0005h
SSP1CON1_SSPEN1_POSITION                 equ 0005h
SSP1CON1_SSPEN1_SIZE                     equ 0001h
SSP1CON1_SSPEN1_LENGTH                   equ 0001h
SSP1CON1_SSPEN1_MASK                     equ 0020h
SSP1CON1_SSPOV1_POSN                     equ 0006h
SSP1CON1_SSPOV1_POSITION                 equ 0006h
SSP1CON1_SSPOV1_SIZE                     equ 0001h
SSP1CON1_SSPOV1_LENGTH                   equ 0001h
SSP1CON1_SSPOV1_MASK                     equ 0040h
SSP1CON1_WCOL1_POSN                      equ 0007h
SSP1CON1_WCOL1_POSITION                  equ 0007h
SSP1CON1_WCOL1_SIZE                      equ 0001h
SSP1CON1_WCOL1_LENGTH                    equ 0001h
SSP1CON1_WCOL1_MASK                      equ 0080h

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
SSP1STAT                                 equ 0FC7h
// bitfield definitions
SSP1STAT_R_NOT_W_POSN                    equ 0002h
SSP1STAT_R_NOT_W_POSITION                equ 0002h
SSP1STAT_R_NOT_W_SIZE                    equ 0001h
SSP1STAT_R_NOT_W_LENGTH                  equ 0001h
SSP1STAT_R_NOT_W_MASK                    equ 0004h
SSP1STAT_D_NOT_A_POSN                    equ 0005h
SSP1STAT_D_NOT_A_POSITION                equ 0005h
SSP1STAT_D_NOT_A_SIZE                    equ 0001h
SSP1STAT_D_NOT_A_LENGTH                  equ 0001h
SSP1STAT_D_NOT_A_MASK                    equ 0020h
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
SSP1STAT_R_POSN                          equ 0002h
SSP1STAT_R_POSITION                      equ 0002h
SSP1STAT_R_SIZE                          equ 0001h
SSP1STAT_R_LENGTH                        equ 0001h
SSP1STAT_R_MASK                          equ 0004h
SSP1STAT_D_POSN                          equ 0005h
SSP1STAT_D_POSITION                      equ 0005h
SSP1STAT_D_SIZE                          equ 0001h
SSP1STAT_D_LENGTH                        equ 0001h
SSP1STAT_D_MASK                          equ 0020h
SSP1STAT_R_W_POSN                        equ 0002h
SSP1STAT_R_W_POSITION                    equ 0002h
SSP1STAT_R_W_SIZE                        equ 0001h
SSP1STAT_R_W_LENGTH                      equ 0001h
SSP1STAT_R_W_MASK                        equ 0004h
SSP1STAT_D_A_POSN                        equ 0005h
SSP1STAT_D_A_POSITION                    equ 0005h
SSP1STAT_D_A_SIZE                        equ 0001h
SSP1STAT_D_A_LENGTH                      equ 0001h
SSP1STAT_D_A_MASK                        equ 0020h
SSP1STAT_nW_POSN                         equ 0002h
SSP1STAT_nW_POSITION                     equ 0002h
SSP1STAT_nW_SIZE                         equ 0001h
SSP1STAT_nW_LENGTH                       equ 0001h
SSP1STAT_nW_MASK                         equ 0004h
SSP1STAT_nA_POSN                         equ 0005h
SSP1STAT_nA_POSITION                     equ 0005h
SSP1STAT_nA_SIZE                         equ 0001h
SSP1STAT_nA_LENGTH                       equ 0001h
SSP1STAT_nA_MASK                         equ 0020h
SSP1STAT_NOT_WRITE_POSN                  equ 0002h
SSP1STAT_NOT_WRITE_POSITION              equ 0002h
SSP1STAT_NOT_WRITE_SIZE                  equ 0001h
SSP1STAT_NOT_WRITE_LENGTH                equ 0001h
SSP1STAT_NOT_WRITE_MASK                  equ 0004h
SSP1STAT_NOT_ADDRESS_POSN                equ 0005h
SSP1STAT_NOT_ADDRESS_POSITION            equ 0005h
SSP1STAT_NOT_ADDRESS_SIZE                equ 0001h
SSP1STAT_NOT_ADDRESS_LENGTH              equ 0001h
SSP1STAT_NOT_ADDRESS_MASK                equ 0020h
SSP1STAT_nWRITE_POSN                     equ 0002h
SSP1STAT_nWRITE_POSITION                 equ 0002h
SSP1STAT_nWRITE_SIZE                     equ 0001h
SSP1STAT_nWRITE_LENGTH                   equ 0001h
SSP1STAT_nWRITE_MASK                     equ 0004h
SSP1STAT_nADDRESS_POSN                   equ 0005h
SSP1STAT_nADDRESS_POSITION               equ 0005h
SSP1STAT_nADDRESS_SIZE                   equ 0001h
SSP1STAT_nADDRESS_LENGTH                 equ 0001h
SSP1STAT_nADDRESS_MASK                   equ 0020h
SSP1STAT_READ_WRITE_POSN                 equ 0002h
SSP1STAT_READ_WRITE_POSITION             equ 0002h
SSP1STAT_READ_WRITE_SIZE                 equ 0001h
SSP1STAT_READ_WRITE_LENGTH               equ 0001h
SSP1STAT_READ_WRITE_MASK                 equ 0004h
SSP1STAT_DATA_ADDRESS_POSN               equ 0005h
SSP1STAT_DATA_ADDRESS_POSITION           equ 0005h
SSP1STAT_DATA_ADDRESS_SIZE               equ 0001h
SSP1STAT_DATA_ADDRESS_LENGTH             equ 0001h
SSP1STAT_DATA_ADDRESS_MASK               equ 0020h
SSP1STAT_I2C_READ_POSN                   equ 0002h
SSP1STAT_I2C_READ_POSITION               equ 0002h
SSP1STAT_I2C_READ_SIZE                   equ 0001h
SSP1STAT_I2C_READ_LENGTH                 equ 0001h
SSP1STAT_I2C_READ_MASK                   equ 0004h
SSP1STAT_I2C_START_POSN                  equ 0003h
SSP1STAT_I2C_START_POSITION              equ 0003h
SSP1STAT_I2C_START_SIZE                  equ 0001h
SSP1STAT_I2C_START_LENGTH                equ 0001h
SSP1STAT_I2C_START_MASK                  equ 0008h
SSP1STAT_I2C_STOP_POSN                   equ 0004h
SSP1STAT_I2C_STOP_POSITION               equ 0004h
SSP1STAT_I2C_STOP_SIZE                   equ 0001h
SSP1STAT_I2C_STOP_LENGTH                 equ 0001h
SSP1STAT_I2C_STOP_MASK                   equ 0010h
SSP1STAT_I2C_DAT_POSN                    equ 0005h
SSP1STAT_I2C_DAT_POSITION                equ 0005h
SSP1STAT_I2C_DAT_SIZE                    equ 0001h
SSP1STAT_I2C_DAT_LENGTH                  equ 0001h
SSP1STAT_I2C_DAT_MASK                    equ 0020h
SSP1STAT_R_NOT_W1_POSN                   equ 0002h
SSP1STAT_R_NOT_W1_POSITION               equ 0002h
SSP1STAT_R_NOT_W1_SIZE                   equ 0001h
SSP1STAT_R_NOT_W1_LENGTH                 equ 0001h
SSP1STAT_R_NOT_W1_MASK                   equ 0004h
SSP1STAT_D_NOT_A1_POSN                   equ 0005h
SSP1STAT_D_NOT_A1_POSITION               equ 0005h
SSP1STAT_D_NOT_A1_SIZE                   equ 0001h
SSP1STAT_D_NOT_A1_LENGTH                 equ 0001h
SSP1STAT_D_NOT_A1_MASK                   equ 0020h
SSP1STAT_BF1_POSN                        equ 0000h
SSP1STAT_BF1_POSITION                    equ 0000h
SSP1STAT_BF1_SIZE                        equ 0001h
SSP1STAT_BF1_LENGTH                      equ 0001h
SSP1STAT_BF1_MASK                        equ 0001h
SSP1STAT_UA1_POSN                        equ 0001h
SSP1STAT_UA1_POSITION                    equ 0001h
SSP1STAT_UA1_SIZE                        equ 0001h
SSP1STAT_UA1_LENGTH                      equ 0001h
SSP1STAT_UA1_MASK                        equ 0002h
SSP1STAT_R_nW1_POSN                      equ 0002h
SSP1STAT_R_nW1_POSITION                  equ 0002h
SSP1STAT_R_nW1_SIZE                      equ 0001h
SSP1STAT_R_nW1_LENGTH                    equ 0001h
SSP1STAT_R_nW1_MASK                      equ 0004h
SSP1STAT_S1_POSN                         equ 0003h
SSP1STAT_S1_POSITION                     equ 0003h
SSP1STAT_S1_SIZE                         equ 0001h
SSP1STAT_S1_LENGTH                       equ 0001h
SSP1STAT_S1_MASK                         equ 0008h
SSP1STAT_P1_POSN                         equ 0004h
SSP1STAT_P1_POSITION                     equ 0004h
SSP1STAT_P1_SIZE                         equ 0001h
SSP1STAT_P1_LENGTH                       equ 0001h
SSP1STAT_P1_MASK                         equ 0010h
SSP1STAT_D_nA1_POSN                      equ 0005h
SSP1STAT_D_nA1_POSITION                  equ 0005h
SSP1STAT_D_nA1_SIZE                      equ 0001h
SSP1STAT_D_nA1_LENGTH                    equ 0001h
SSP1STAT_D_nA1_MASK                      equ 0020h
SSP1STAT_CKE1_POSN                       equ 0006h
SSP1STAT_CKE1_POSITION                   equ 0006h
SSP1STAT_CKE1_SIZE                       equ 0001h
SSP1STAT_CKE1_LENGTH                     equ 0001h
SSP1STAT_CKE1_MASK                       equ 0040h
SSP1STAT_SMP1_POSN                       equ 0007h
SSP1STAT_SMP1_POSITION                   equ 0007h
SSP1STAT_SMP1_SIZE                       equ 0001h
SSP1STAT_SMP1_LENGTH                     equ 0001h
SSP1STAT_SMP1_MASK                       equ 0080h
SSP1STAT_R1_POSN                         equ 0002h
SSP1STAT_R1_POSITION                     equ 0002h
SSP1STAT_R1_SIZE                         equ 0001h
SSP1STAT_R1_LENGTH                       equ 0001h
SSP1STAT_R1_MASK                         equ 0004h
SSP1STAT_D1_POSN                         equ 0005h
SSP1STAT_D1_POSITION                     equ 0005h
SSP1STAT_D1_SIZE                         equ 0001h
SSP1STAT_D1_LENGTH                       equ 0001h
SSP1STAT_D1_MASK                         equ 0020h
SSP1STAT_D_A1_POSN                       equ 0002h
SSP1STAT_D_A1_POSITION                   equ 0002h
SSP1STAT_D_A1_SIZE                       equ 0001h
SSP1STAT_D_A1_LENGTH                     equ 0001h
SSP1STAT_D_A1_MASK                       equ 0004h
SSP1STAT_R_W1_POSN                       equ 0005h
SSP1STAT_R_W1_POSITION                   equ 0005h
SSP1STAT_R_W1_SIZE                       equ 0001h
SSP1STAT_R_W1_LENGTH                     equ 0001h
SSP1STAT_R_W1_MASK                       equ 0020h
SSP1STAT_NOT_W1_POSN                     equ 0002h
SSP1STAT_NOT_W1_POSITION                 equ 0002h
SSP1STAT_NOT_W1_SIZE                     equ 0001h
SSP1STAT_NOT_W1_LENGTH                   equ 0001h
SSP1STAT_NOT_W1_MASK                     equ 0004h
SSP1STAT_NOT_A1_POSN                     equ 0005h
SSP1STAT_NOT_A1_POSITION                 equ 0005h
SSP1STAT_NOT_A1_SIZE                     equ 0001h
SSP1STAT_NOT_A1_LENGTH                   equ 0001h
SSP1STAT_NOT_A1_MASK                     equ 0020h
SSP1STAT_nW1_POSN                        equ 0002h
SSP1STAT_nW1_POSITION                    equ 0002h
SSP1STAT_nW1_SIZE                        equ 0001h
SSP1STAT_nW1_LENGTH                      equ 0001h
SSP1STAT_nW1_MASK                        equ 0004h
SSP1STAT_nA1_POSN                        equ 0005h
SSP1STAT_nA1_POSITION                    equ 0005h
SSP1STAT_nA1_SIZE                        equ 0001h
SSP1STAT_nA1_LENGTH                      equ 0001h
SSP1STAT_nA1_MASK                        equ 0020h
SSP1STAT_NOT_WRITE1_POSN                 equ 0002h
SSP1STAT_NOT_WRITE1_POSITION             equ 0002h
SSP1STAT_NOT_WRITE1_SIZE                 equ 0001h
SSP1STAT_NOT_WRITE1_LENGTH               equ 0001h
SSP1STAT_NOT_WRITE1_MASK                 equ 0004h
SSP1STAT_NOT_ADDRESS1_POSN               equ 0005h
SSP1STAT_NOT_ADDRESS1_POSITION           equ 0005h
SSP1STAT_NOT_ADDRESS1_SIZE               equ 0001h
SSP1STAT_NOT_ADDRESS1_LENGTH             equ 0001h
SSP1STAT_NOT_ADDRESS1_MASK               equ 0020h
SSP1STAT_nWRITE1_POSN                    equ 0002h
SSP1STAT_nWRITE1_POSITION                equ 0002h
SSP1STAT_nWRITE1_SIZE                    equ 0001h
SSP1STAT_nWRITE1_LENGTH                  equ 0001h
SSP1STAT_nWRITE1_MASK                    equ 0004h
SSP1STAT_nADDRESS1_POSN                  equ 0005h
SSP1STAT_nADDRESS1_POSITION              equ 0005h
SSP1STAT_nADDRESS1_SIZE                  equ 0001h
SSP1STAT_nADDRESS1_LENGTH                equ 0001h
SSP1STAT_nADDRESS1_MASK                  equ 0020h
SSP1STAT_READ_WRITE1_POSN                equ 0002h
SSP1STAT_READ_WRITE1_POSITION            equ 0002h
SSP1STAT_READ_WRITE1_SIZE                equ 0001h
SSP1STAT_READ_WRITE1_LENGTH              equ 0001h
SSP1STAT_READ_WRITE1_MASK                equ 0004h
SSP1STAT_DATA_ADDRESS1_POSN              equ 0005h
SSP1STAT_DATA_ADDRESS1_POSITION          equ 0005h
SSP1STAT_DATA_ADDRESS1_SIZE              equ 0001h
SSP1STAT_DATA_ADDRESS1_LENGTH            equ 0001h
SSP1STAT_DATA_ADDRESS1_MASK              equ 0020h
SSP1STAT_I2C_READ1_POSN                  equ 0002h
SSP1STAT_I2C_READ1_POSITION              equ 0002h
SSP1STAT_I2C_READ1_SIZE                  equ 0001h
SSP1STAT_I2C_READ1_LENGTH                equ 0001h
SSP1STAT_I2C_READ1_MASK                  equ 0004h
SSP1STAT_I2C_START1_POSN                 equ 0003h
SSP1STAT_I2C_START1_POSITION             equ 0003h
SSP1STAT_I2C_START1_SIZE                 equ 0001h
SSP1STAT_I2C_START1_LENGTH               equ 0001h
SSP1STAT_I2C_START1_MASK                 equ 0008h
SSP1STAT_I2C_STOP1_POSN                  equ 0004h
SSP1STAT_I2C_STOP1_POSITION              equ 0004h
SSP1STAT_I2C_STOP1_SIZE                  equ 0001h
SSP1STAT_I2C_STOP1_LENGTH                equ 0001h
SSP1STAT_I2C_STOP1_MASK                  equ 0010h
SSP1STAT_I2C_DAT1_POSN                   equ 0005h
SSP1STAT_I2C_DAT1_POSITION               equ 0005h
SSP1STAT_I2C_DAT1_SIZE                   equ 0001h
SSP1STAT_I2C_DAT1_LENGTH                 equ 0001h
SSP1STAT_I2C_DAT1_MASK                   equ 0020h
SSP1STAT_RW_POSN                         equ 0002h
SSP1STAT_RW_POSITION                     equ 0002h
SSP1STAT_RW_SIZE                         equ 0001h
SSP1STAT_RW_LENGTH                       equ 0001h
SSP1STAT_RW_MASK                         equ 0004h
SSP1STAT_START_POSN                      equ 0003h
SSP1STAT_START_POSITION                  equ 0003h
SSP1STAT_START_SIZE                      equ 0001h
SSP1STAT_START_LENGTH                    equ 0001h
SSP1STAT_START_MASK                      equ 0008h
SSP1STAT_STOP_POSN                       equ 0004h
SSP1STAT_STOP_POSITION                   equ 0004h
SSP1STAT_STOP_SIZE                       equ 0001h
SSP1STAT_STOP_LENGTH                     equ 0001h
SSP1STAT_STOP_MASK                       equ 0010h
SSP1STAT_DA_POSN                         equ 0005h
SSP1STAT_DA_POSITION                     equ 0005h
SSP1STAT_DA_SIZE                         equ 0001h
SSP1STAT_DA_LENGTH                       equ 0001h
SSP1STAT_DA_MASK                         equ 0020h
SSP1STAT_RW1_POSN                        equ 0002h
SSP1STAT_RW1_POSITION                    equ 0002h
SSP1STAT_RW1_SIZE                        equ 0001h
SSP1STAT_RW1_LENGTH                      equ 0001h
SSP1STAT_RW1_MASK                        equ 0004h
SSP1STAT_START1_POSN                     equ 0003h
SSP1STAT_START1_POSITION                 equ 0003h
SSP1STAT_START1_SIZE                     equ 0001h
SSP1STAT_START1_LENGTH                   equ 0001h
SSP1STAT_START1_MASK                     equ 0008h
SSP1STAT_STOP1_POSN                      equ 0004h
SSP1STAT_STOP1_POSITION                  equ 0004h
SSP1STAT_STOP1_SIZE                      equ 0001h
SSP1STAT_STOP1_LENGTH                    equ 0001h
SSP1STAT_STOP1_MASK                      equ 0010h
SSP1STAT_DA1_POSN                        equ 0005h
SSP1STAT_DA1_POSITION                    equ 0005h
SSP1STAT_DA1_SIZE                        equ 0001h
SSP1STAT_DA1_LENGTH                      equ 0001h
SSP1STAT_DA1_MASK                        equ 0020h
SSP1STAT_NOT_W_POSN                      equ 0002h
SSP1STAT_NOT_W_POSITION                  equ 0002h
SSP1STAT_NOT_W_SIZE                      equ 0001h
SSP1STAT_NOT_W_LENGTH                    equ 0001h
SSP1STAT_NOT_W_MASK                      equ 0004h
SSP1STAT_NOT_A_POSN                      equ 0005h
SSP1STAT_NOT_A_POSITION                  equ 0005h
SSP1STAT_NOT_A_SIZE                      equ 0001h
SSP1STAT_NOT_A_LENGTH                    equ 0001h
SSP1STAT_NOT_A_MASK                      equ 0020h

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
SSP1ADD                                  equ 0FC8h
// bitfield definitions
SSP1ADD_SSPADD_POSN                      equ 0000h
SSP1ADD_SSPADD_POSITION                  equ 0000h
SSP1ADD_SSPADD_SIZE                      equ 0008h
SSP1ADD_SSPADD_LENGTH                    equ 0008h
SSP1ADD_SSPADD_MASK                      equ 00FFh
SSP1ADD_MSK0_POSN                        equ 0000h
SSP1ADD_MSK0_POSITION                    equ 0000h
SSP1ADD_MSK0_SIZE                        equ 0001h
SSP1ADD_MSK0_LENGTH                      equ 0001h
SSP1ADD_MSK0_MASK                        equ 0001h
SSP1ADD_MSK1_POSN                        equ 0001h
SSP1ADD_MSK1_POSITION                    equ 0001h
SSP1ADD_MSK1_SIZE                        equ 0001h
SSP1ADD_MSK1_LENGTH                      equ 0001h
SSP1ADD_MSK1_MASK                        equ 0002h
SSP1ADD_MSK2_POSN                        equ 0002h
SSP1ADD_MSK2_POSITION                    equ 0002h
SSP1ADD_MSK2_SIZE                        equ 0001h
SSP1ADD_MSK2_LENGTH                      equ 0001h
SSP1ADD_MSK2_MASK                        equ 0004h
SSP1ADD_MSK3_POSN                        equ 0003h
SSP1ADD_MSK3_POSITION                    equ 0003h
SSP1ADD_MSK3_SIZE                        equ 0001h
SSP1ADD_MSK3_LENGTH                      equ 0001h
SSP1ADD_MSK3_MASK                        equ 0008h
SSP1ADD_MSK4_POSN                        equ 0004h
SSP1ADD_MSK4_POSITION                    equ 0004h
SSP1ADD_MSK4_SIZE                        equ 0001h
SSP1ADD_MSK4_LENGTH                      equ 0001h
SSP1ADD_MSK4_MASK                        equ 0010h
SSP1ADD_MSK5_POSN                        equ 0005h
SSP1ADD_MSK5_POSITION                    equ 0005h
SSP1ADD_MSK5_SIZE                        equ 0001h
SSP1ADD_MSK5_LENGTH                      equ 0001h
SSP1ADD_MSK5_MASK                        equ 0020h
SSP1ADD_MSK6_POSN                        equ 0006h
SSP1ADD_MSK6_POSITION                    equ 0006h
SSP1ADD_MSK6_SIZE                        equ 0001h
SSP1ADD_MSK6_LENGTH                      equ 0001h
SSP1ADD_MSK6_MASK                        equ 0040h
SSP1ADD_MSK7_POSN                        equ 0007h
SSP1ADD_MSK7_POSITION                    equ 0007h
SSP1ADD_MSK7_SIZE                        equ 0001h
SSP1ADD_MSK7_LENGTH                      equ 0001h
SSP1ADD_MSK7_MASK                        equ 0080h
SSP1ADD_MSK01_POSN                       equ 0000h
SSP1ADD_MSK01_POSITION                   equ 0000h
SSP1ADD_MSK01_SIZE                       equ 0001h
SSP1ADD_MSK01_LENGTH                     equ 0001h
SSP1ADD_MSK01_MASK                       equ 0001h
SSP1ADD_MSK11_POSN                       equ 0001h
SSP1ADD_MSK11_POSITION                   equ 0001h
SSP1ADD_MSK11_SIZE                       equ 0001h
SSP1ADD_MSK11_LENGTH                     equ 0001h
SSP1ADD_MSK11_MASK                       equ 0002h
SSP1ADD_MSK21_POSN                       equ 0002h
SSP1ADD_MSK21_POSITION                   equ 0002h
SSP1ADD_MSK21_SIZE                       equ 0001h
SSP1ADD_MSK21_LENGTH                     equ 0001h
SSP1ADD_MSK21_MASK                       equ 0004h
SSP1ADD_MSK31_POSN                       equ 0003h
SSP1ADD_MSK31_POSITION                   equ 0003h
SSP1ADD_MSK31_SIZE                       equ 0001h
SSP1ADD_MSK31_LENGTH                     equ 0001h
SSP1ADD_MSK31_MASK                       equ 0008h
SSP1ADD_MSK41_POSN                       equ 0004h
SSP1ADD_MSK41_POSITION                   equ 0004h
SSP1ADD_MSK41_SIZE                       equ 0001h
SSP1ADD_MSK41_LENGTH                     equ 0001h
SSP1ADD_MSK41_MASK                       equ 0010h
SSP1ADD_MSK51_POSN                       equ 0005h
SSP1ADD_MSK51_POSITION                   equ 0005h
SSP1ADD_MSK51_SIZE                       equ 0001h
SSP1ADD_MSK51_LENGTH                     equ 0001h
SSP1ADD_MSK51_MASK                       equ 0020h
SSP1ADD_MSK61_POSN                       equ 0006h
SSP1ADD_MSK61_POSITION                   equ 0006h
SSP1ADD_MSK61_SIZE                       equ 0001h
SSP1ADD_MSK61_LENGTH                     equ 0001h
SSP1ADD_MSK61_MASK                       equ 0040h
SSP1ADD_MSK71_POSN                       equ 0007h
SSP1ADD_MSK71_POSITION                   equ 0007h
SSP1ADD_MSK71_SIZE                       equ 0001h
SSP1ADD_MSK71_LENGTH                     equ 0001h
SSP1ADD_MSK71_MASK                       equ 0080h

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
SSP1BUF                                  equ 0FC9h
// bitfield definitions
SSP1BUF_SSPBUF_POSN                      equ 0000h
SSP1BUF_SSPBUF_POSITION                  equ 0000h
SSP1BUF_SSPBUF_SIZE                      equ 0008h
SSP1BUF_SSPBUF_LENGTH                    equ 0008h
SSP1BUF_SSPBUF_MASK                      equ 00FFh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0FCAh
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
T2CON_T2OUTPS_POSN                       equ 0003h
T2CON_T2OUTPS_POSITION                   equ 0003h
T2CON_T2OUTPS_SIZE                       equ 0004h
T2CON_T2OUTPS_LENGTH                     equ 0004h
T2CON_T2OUTPS_MASK                       equ 0078h
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

// Register: PR2
#define PR2 PR2
PR2                                      equ 0FCBh
// bitfield definitions
PR2_PR2_POSN                             equ 0000h
PR2_PR2_POSITION                         equ 0000h
PR2_PR2_SIZE                             equ 0008h
PR2_PR2_LENGTH                           equ 0008h
PR2_PR2_MASK                             equ 00FFh
PR2_EBDIS_POSN                           equ 0007h
PR2_EBDIS_POSITION                       equ 0007h
PR2_EBDIS_SIZE                           equ 0001h
PR2_EBDIS_LENGTH                         equ 0001h
PR2_EBDIS_MASK                           equ 0080h
PR2_WAIT0_POSN                           equ 0004h
PR2_WAIT0_POSITION                       equ 0004h
PR2_WAIT0_SIZE                           equ 0001h
PR2_WAIT0_LENGTH                         equ 0001h
PR2_WAIT0_MASK                           equ 0010h
PR2_WAIT1_POSN                           equ 0005h
PR2_WAIT1_POSITION                       equ 0005h
PR2_WAIT1_SIZE                           equ 0001h
PR2_WAIT1_LENGTH                         equ 0001h
PR2_WAIT1_MASK                           equ 0020h
PR2_WM0_POSN                             equ 0000h
PR2_WM0_POSITION                         equ 0000h
PR2_WM0_SIZE                             equ 0001h
PR2_WM0_LENGTH                           equ 0001h
PR2_WM0_MASK                             equ 0001h
PR2_WM1_POSN                             equ 0001h
PR2_WM1_POSITION                         equ 0001h
PR2_WM1_SIZE                             equ 0001h
PR2_WM1_LENGTH                           equ 0001h
PR2_WM1_MASK                             equ 0002h

// Register: TMR2
#define TMR2 TMR2
TMR2                                     equ 0FCCh
// bitfield definitions
TMR2_TMR2_POSN                           equ 0000h
TMR2_TMR2_POSITION                       equ 0000h
TMR2_TMR2_SIZE                           equ 0008h
TMR2_TMR2_LENGTH                         equ 0008h
TMR2_TMR2_MASK                           equ 00FFh

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0FCDh
// bitfield definitions
T1CON_TMR1ON_POSN                        equ 0000h
T1CON_TMR1ON_POSITION                    equ 0000h
T1CON_TMR1ON_SIZE                        equ 0001h
T1CON_TMR1ON_LENGTH                      equ 0001h
T1CON_TMR1ON_MASK                        equ 0001h
T1CON_RD16_POSN                          equ 0001h
T1CON_RD16_POSITION                      equ 0001h
T1CON_RD16_SIZE                          equ 0001h
T1CON_RD16_LENGTH                        equ 0001h
T1CON_RD16_MASK                          equ 0002h
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
T1CON_RD161_POSN                         equ 0001h
T1CON_RD161_POSITION                     equ 0001h
T1CON_RD161_SIZE                         equ 0001h
T1CON_RD161_LENGTH                       equ 0001h
T1CON_RD161_MASK                         equ 0002h
T1CON_T1SYNC1_POSN                       equ 0002h
T1CON_T1SYNC1_POSITION                   equ 0002h
T1CON_T1SYNC1_SIZE                       equ 0001h
T1CON_T1SYNC1_LENGTH                     equ 0001h
T1CON_T1SYNC1_MASK                       equ 0004h
T1CON_T1OSCEN1_POSN                      equ 0003h
T1CON_T1OSCEN1_POSITION                  equ 0003h
T1CON_T1OSCEN1_SIZE                      equ 0001h
T1CON_T1OSCEN1_LENGTH                    equ 0001h
T1CON_T1OSCEN1_MASK                      equ 0008h
T1CON_T1CKPS01_POSN                      equ 0004h
T1CON_T1CKPS01_POSITION                  equ 0004h
T1CON_T1CKPS01_SIZE                      equ 0001h
T1CON_T1CKPS01_LENGTH                    equ 0001h
T1CON_T1CKPS01_MASK                      equ 0010h
T1CON_T1CKPS11_POSN                      equ 0005h
T1CON_T1CKPS11_POSITION                  equ 0005h
T1CON_T1CKPS11_SIZE                      equ 0001h
T1CON_T1CKPS11_LENGTH                    equ 0001h
T1CON_T1CKPS11_MASK                      equ 0020h
T1CON_TMR1CS01_POSN                      equ 0006h
T1CON_TMR1CS01_POSITION                  equ 0006h
T1CON_TMR1CS01_SIZE                      equ 0001h
T1CON_TMR1CS01_LENGTH                    equ 0001h
T1CON_TMR1CS01_MASK                      equ 0040h
T1CON_TMR1CS11_POSN                      equ 0007h
T1CON_TMR1CS11_POSITION                  equ 0007h
T1CON_TMR1CS11_SIZE                      equ 0001h
T1CON_TMR1CS11_LENGTH                    equ 0001h
T1CON_TMR1CS11_MASK                      equ 0080h
T1CON_SOSCEN_POSN                        equ 0003h
T1CON_SOSCEN_POSITION                    equ 0003h
T1CON_SOSCEN_SIZE                        equ 0001h
T1CON_SOSCEN_LENGTH                      equ 0001h
T1CON_SOSCEN_MASK                        equ 0008h
T1CON_T1RD16_POSN                        equ 0007h
T1CON_T1RD16_POSITION                    equ 0007h
T1CON_T1RD16_SIZE                        equ 0001h
T1CON_T1RD16_LENGTH                      equ 0001h
T1CON_T1RD16_MASK                        equ 0080h

// Register: TMR1
#define TMR1 TMR1
TMR1                                     equ 0FCEh

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 0FCEh
// bitfield definitions
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 0FCFh
// bitfield definitions
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh

// Register: RCON
#define RCON RCON
RCON                                     equ 0FD0h
// bitfield definitions
RCON_NOT_BOR_POSN                        equ 0000h
RCON_NOT_BOR_POSITION                    equ 0000h
RCON_NOT_BOR_SIZE                        equ 0001h
RCON_NOT_BOR_LENGTH                      equ 0001h
RCON_NOT_BOR_MASK                        equ 0001h
RCON_NOT_POR_POSN                        equ 0001h
RCON_NOT_POR_POSITION                    equ 0001h
RCON_NOT_POR_SIZE                        equ 0001h
RCON_NOT_POR_LENGTH                      equ 0001h
RCON_NOT_POR_MASK                        equ 0002h
RCON_NOT_PD_POSN                         equ 0002h
RCON_NOT_PD_POSITION                     equ 0002h
RCON_NOT_PD_SIZE                         equ 0001h
RCON_NOT_PD_LENGTH                       equ 0001h
RCON_NOT_PD_MASK                         equ 0004h
RCON_NOT_TO_POSN                         equ 0003h
RCON_NOT_TO_POSITION                     equ 0003h
RCON_NOT_TO_SIZE                         equ 0001h
RCON_NOT_TO_LENGTH                       equ 0001h
RCON_NOT_TO_MASK                         equ 0008h
RCON_NOT_RI_POSN                         equ 0004h
RCON_NOT_RI_POSITION                     equ 0004h
RCON_NOT_RI_SIZE                         equ 0001h
RCON_NOT_RI_LENGTH                       equ 0001h
RCON_NOT_RI_MASK                         equ 0010h
RCON_NOT_CM_POSN                         equ 0005h
RCON_NOT_CM_POSITION                     equ 0005h
RCON_NOT_CM_SIZE                         equ 0001h
RCON_NOT_CM_LENGTH                       equ 0001h
RCON_NOT_CM_MASK                         equ 0020h
RCON_nBOR_POSN                           equ 0000h
RCON_nBOR_POSITION                       equ 0000h
RCON_nBOR_SIZE                           equ 0001h
RCON_nBOR_LENGTH                         equ 0001h
RCON_nBOR_MASK                           equ 0001h
RCON_nPOR_POSN                           equ 0001h
RCON_nPOR_POSITION                       equ 0001h
RCON_nPOR_SIZE                           equ 0001h
RCON_nPOR_LENGTH                         equ 0001h
RCON_nPOR_MASK                           equ 0002h
RCON_nPD_POSN                            equ 0002h
RCON_nPD_POSITION                        equ 0002h
RCON_nPD_SIZE                            equ 0001h
RCON_nPD_LENGTH                          equ 0001h
RCON_nPD_MASK                            equ 0004h
RCON_nTO_POSN                            equ 0003h
RCON_nTO_POSITION                        equ 0003h
RCON_nTO_SIZE                            equ 0001h
RCON_nTO_LENGTH                          equ 0001h
RCON_nTO_MASK                            equ 0008h
RCON_nRI_POSN                            equ 0004h
RCON_nRI_POSITION                        equ 0004h
RCON_nRI_SIZE                            equ 0001h
RCON_nRI_LENGTH                          equ 0001h
RCON_nRI_MASK                            equ 0010h
RCON_nCM_POSN                            equ 0005h
RCON_nCM_POSITION                        equ 0005h
RCON_nCM_SIZE                            equ 0001h
RCON_nCM_LENGTH                          equ 0001h
RCON_nCM_MASK                            equ 0020h
RCON_IPEN_POSN                           equ 0007h
RCON_IPEN_POSITION                       equ 0007h
RCON_IPEN_SIZE                           equ 0001h
RCON_IPEN_LENGTH                         equ 0001h
RCON_IPEN_MASK                           equ 0080h
RCON_BOR_POSN                            equ 0000h
RCON_BOR_POSITION                        equ 0000h
RCON_BOR_SIZE                            equ 0001h
RCON_BOR_LENGTH                          equ 0001h
RCON_BOR_MASK                            equ 0001h
RCON_POR_POSN                            equ 0001h
RCON_POR_POSITION                        equ 0001h
RCON_POR_SIZE                            equ 0001h
RCON_POR_LENGTH                          equ 0001h
RCON_POR_MASK                            equ 0002h
RCON_PD_POSN                             equ 0002h
RCON_PD_POSITION                         equ 0002h
RCON_PD_SIZE                             equ 0001h
RCON_PD_LENGTH                           equ 0001h
RCON_PD_MASK                             equ 0004h
RCON_TO_POSN                             equ 0003h
RCON_TO_POSITION                         equ 0003h
RCON_TO_SIZE                             equ 0001h
RCON_TO_LENGTH                           equ 0001h
RCON_TO_MASK                             equ 0008h
RCON_RI_POSN                             equ 0004h
RCON_RI_POSITION                         equ 0004h
RCON_RI_SIZE                             equ 0001h
RCON_RI_LENGTH                           equ 0001h
RCON_RI_MASK                             equ 0010h
RCON_CM_POSN                             equ 0005h
RCON_CM_POSITION                         equ 0005h
RCON_CM_SIZE                             equ 0001h
RCON_CM_LENGTH                           equ 0001h
RCON_CM_MASK                             equ 0020h

// Register: CM2CON
#define CM2CON CM2CON
CM2CON                                   equ 0FD1h
// bitfield definitions
CM2CON_CCH_POSN                          equ 0000h
CM2CON_CCH_POSITION                      equ 0000h
CM2CON_CCH_SIZE                          equ 0002h
CM2CON_CCH_LENGTH                        equ 0002h
CM2CON_CCH_MASK                          equ 0003h
CM2CON_CREF_POSN                         equ 0002h
CM2CON_CREF_POSITION                     equ 0002h
CM2CON_CREF_SIZE                         equ 0001h
CM2CON_CREF_LENGTH                       equ 0001h
CM2CON_CREF_MASK                         equ 0004h
CM2CON_EVPOL_POSN                        equ 0003h
CM2CON_EVPOL_POSITION                    equ 0003h
CM2CON_EVPOL_SIZE                        equ 0002h
CM2CON_EVPOL_LENGTH                      equ 0002h
CM2CON_EVPOL_MASK                        equ 0018h
CM2CON_CPOL_POSN                         equ 0005h
CM2CON_CPOL_POSITION                     equ 0005h
CM2CON_CPOL_SIZE                         equ 0001h
CM2CON_CPOL_LENGTH                       equ 0001h
CM2CON_CPOL_MASK                         equ 0020h
CM2CON_COE_POSN                          equ 0006h
CM2CON_COE_POSITION                      equ 0006h
CM2CON_COE_SIZE                          equ 0001h
CM2CON_COE_LENGTH                        equ 0001h
CM2CON_COE_MASK                          equ 0040h
CM2CON_CON_POSN                          equ 0007h
CM2CON_CON_POSITION                      equ 0007h
CM2CON_CON_SIZE                          equ 0001h
CM2CON_CON_LENGTH                        equ 0001h
CM2CON_CON_MASK                          equ 0080h
CM2CON_CCH0_POSN                         equ 0000h
CM2CON_CCH0_POSITION                     equ 0000h
CM2CON_CCH0_SIZE                         equ 0001h
CM2CON_CCH0_LENGTH                       equ 0001h
CM2CON_CCH0_MASK                         equ 0001h
CM2CON_CCH1_POSN                         equ 0001h
CM2CON_CCH1_POSITION                     equ 0001h
CM2CON_CCH1_SIZE                         equ 0001h
CM2CON_CCH1_LENGTH                       equ 0001h
CM2CON_CCH1_MASK                         equ 0002h
CM2CON_EVPOL0_POSN                       equ 0003h
CM2CON_EVPOL0_POSITION                   equ 0003h
CM2CON_EVPOL0_SIZE                       equ 0001h
CM2CON_EVPOL0_LENGTH                     equ 0001h
CM2CON_EVPOL0_MASK                       equ 0008h
CM2CON_EVPOL1_POSN                       equ 0004h
CM2CON_EVPOL1_POSITION                   equ 0004h
CM2CON_EVPOL1_SIZE                       equ 0001h
CM2CON_EVPOL1_LENGTH                     equ 0001h
CM2CON_EVPOL1_MASK                       equ 0010h
CM2CON_CCH02_POSN                        equ 0000h
CM2CON_CCH02_POSITION                    equ 0000h
CM2CON_CCH02_SIZE                        equ 0001h
CM2CON_CCH02_LENGTH                      equ 0001h
CM2CON_CCH02_MASK                        equ 0001h
CM2CON_CCH12_POSN                        equ 0001h
CM2CON_CCH12_POSITION                    equ 0001h
CM2CON_CCH12_SIZE                        equ 0001h
CM2CON_CCH12_LENGTH                      equ 0001h
CM2CON_CCH12_MASK                        equ 0002h
CM2CON_CREF2_POSN                        equ 0002h
CM2CON_CREF2_POSITION                    equ 0002h
CM2CON_CREF2_SIZE                        equ 0001h
CM2CON_CREF2_LENGTH                      equ 0001h
CM2CON_CREF2_MASK                        equ 0004h
CM2CON_EVPOL02_POSN                      equ 0003h
CM2CON_EVPOL02_POSITION                  equ 0003h
CM2CON_EVPOL02_SIZE                      equ 0001h
CM2CON_EVPOL02_LENGTH                    equ 0001h
CM2CON_EVPOL02_MASK                      equ 0008h
CM2CON_EVPOL12_POSN                      equ 0004h
CM2CON_EVPOL12_POSITION                  equ 0004h
CM2CON_EVPOL12_SIZE                      equ 0001h
CM2CON_EVPOL12_LENGTH                    equ 0001h
CM2CON_EVPOL12_MASK                      equ 0010h
CM2CON_CPOL2_POSN                        equ 0005h
CM2CON_CPOL2_POSITION                    equ 0005h
CM2CON_CPOL2_SIZE                        equ 0001h
CM2CON_CPOL2_LENGTH                      equ 0001h
CM2CON_CPOL2_MASK                        equ 0020h
CM2CON_COE2_POSN                         equ 0006h
CM2CON_COE2_POSITION                     equ 0006h
CM2CON_COE2_SIZE                         equ 0001h
CM2CON_COE2_LENGTH                       equ 0001h
CM2CON_COE2_MASK                         equ 0040h
CM2CON_CON2_POSN                         equ 0007h
CM2CON_CON2_POSITION                     equ 0007h
CM2CON_CON2_SIZE                         equ 0001h
CM2CON_CON2_LENGTH                       equ 0001h
CM2CON_CON2_MASK                         equ 0080h

// Register: CM1CON
#define CM1CON CM1CON
CM1CON                                   equ 0FD2h
// bitfield definitions
CM1CON_CCH_POSN                          equ 0000h
CM1CON_CCH_POSITION                      equ 0000h
CM1CON_CCH_SIZE                          equ 0002h
CM1CON_CCH_LENGTH                        equ 0002h
CM1CON_CCH_MASK                          equ 0003h
CM1CON_CREF_POSN                         equ 0002h
CM1CON_CREF_POSITION                     equ 0002h
CM1CON_CREF_SIZE                         equ 0001h
CM1CON_CREF_LENGTH                       equ 0001h
CM1CON_CREF_MASK                         equ 0004h
CM1CON_EVPOL_POSN                        equ 0003h
CM1CON_EVPOL_POSITION                    equ 0003h
CM1CON_EVPOL_SIZE                        equ 0002h
CM1CON_EVPOL_LENGTH                      equ 0002h
CM1CON_EVPOL_MASK                        equ 0018h
CM1CON_CPOL_POSN                         equ 0005h
CM1CON_CPOL_POSITION                     equ 0005h
CM1CON_CPOL_SIZE                         equ 0001h
CM1CON_CPOL_LENGTH                       equ 0001h
CM1CON_CPOL_MASK                         equ 0020h
CM1CON_COE_POSN                          equ 0006h
CM1CON_COE_POSITION                      equ 0006h
CM1CON_COE_SIZE                          equ 0001h
CM1CON_COE_LENGTH                        equ 0001h
CM1CON_COE_MASK                          equ 0040h
CM1CON_CON_POSN                          equ 0007h
CM1CON_CON_POSITION                      equ 0007h
CM1CON_CON_SIZE                          equ 0001h
CM1CON_CON_LENGTH                        equ 0001h
CM1CON_CON_MASK                          equ 0080h
CM1CON_CCH0_POSN                         equ 0000h
CM1CON_CCH0_POSITION                     equ 0000h
CM1CON_CCH0_SIZE                         equ 0001h
CM1CON_CCH0_LENGTH                       equ 0001h
CM1CON_CCH0_MASK                         equ 0001h
CM1CON_CCH1_POSN                         equ 0001h
CM1CON_CCH1_POSITION                     equ 0001h
CM1CON_CCH1_SIZE                         equ 0001h
CM1CON_CCH1_LENGTH                       equ 0001h
CM1CON_CCH1_MASK                         equ 0002h
CM1CON_EVPOL0_POSN                       equ 0003h
CM1CON_EVPOL0_POSITION                   equ 0003h
CM1CON_EVPOL0_SIZE                       equ 0001h
CM1CON_EVPOL0_LENGTH                     equ 0001h
CM1CON_EVPOL0_MASK                       equ 0008h
CM1CON_EVPOL1_POSN                       equ 0004h
CM1CON_EVPOL1_POSITION                   equ 0004h
CM1CON_EVPOL1_SIZE                       equ 0001h
CM1CON_EVPOL1_LENGTH                     equ 0001h
CM1CON_EVPOL1_MASK                       equ 0010h
CM1CON_CCH01_POSN                        equ 0000h
CM1CON_CCH01_POSITION                    equ 0000h
CM1CON_CCH01_SIZE                        equ 0001h
CM1CON_CCH01_LENGTH                      equ 0001h
CM1CON_CCH01_MASK                        equ 0001h
CM1CON_CCH11_POSN                        equ 0001h
CM1CON_CCH11_POSITION                    equ 0001h
CM1CON_CCH11_SIZE                        equ 0001h
CM1CON_CCH11_LENGTH                      equ 0001h
CM1CON_CCH11_MASK                        equ 0002h
CM1CON_CREF1_POSN                        equ 0002h
CM1CON_CREF1_POSITION                    equ 0002h
CM1CON_CREF1_SIZE                        equ 0001h
CM1CON_CREF1_LENGTH                      equ 0001h
CM1CON_CREF1_MASK                        equ 0004h
CM1CON_EVPOL01_POSN                      equ 0003h
CM1CON_EVPOL01_POSITION                  equ 0003h
CM1CON_EVPOL01_SIZE                      equ 0001h
CM1CON_EVPOL01_LENGTH                    equ 0001h
CM1CON_EVPOL01_MASK                      equ 0008h
CM1CON_EVPOL11_POSN                      equ 0004h
CM1CON_EVPOL11_POSITION                  equ 0004h
CM1CON_EVPOL11_SIZE                      equ 0001h
CM1CON_EVPOL11_LENGTH                    equ 0001h
CM1CON_EVPOL11_MASK                      equ 0010h
CM1CON_CPOL1_POSN                        equ 0005h
CM1CON_CPOL1_POSITION                    equ 0005h
CM1CON_CPOL1_SIZE                        equ 0001h
CM1CON_CPOL1_LENGTH                      equ 0001h
CM1CON_CPOL1_MASK                        equ 0020h
CM1CON_COE1_POSN                         equ 0006h
CM1CON_COE1_POSITION                     equ 0006h
CM1CON_COE1_SIZE                         equ 0001h
CM1CON_COE1_LENGTH                       equ 0001h
CM1CON_COE1_MASK                         equ 0040h
CM1CON_CON1_POSN                         equ 0007h
CM1CON_CON1_POSITION                     equ 0007h
CM1CON_CON1_SIZE                         equ 0001h
CM1CON_CON1_LENGTH                       equ 0001h
CM1CON_CON1_MASK                         equ 0080h
CM1CON_C1CH0_POSN                        equ 0000h
CM1CON_C1CH0_POSITION                    equ 0000h
CM1CON_C1CH0_SIZE                        equ 0001h
CM1CON_C1CH0_LENGTH                      equ 0001h
CM1CON_C1CH0_MASK                        equ 0001h
CM1CON_C1CH1_POSN                        equ 0001h
CM1CON_C1CH1_POSITION                    equ 0001h
CM1CON_C1CH1_SIZE                        equ 0001h
CM1CON_C1CH1_LENGTH                      equ 0001h
CM1CON_C1CH1_MASK                        equ 0002h

// Register: OSCCON
#define OSCCON OSCCON
OSCCON                                   equ 0FD3h
// bitfield definitions
OSCCON_SCS_POSN                          equ 0000h
OSCCON_SCS_POSITION                      equ 0000h
OSCCON_SCS_SIZE                          equ 0002h
OSCCON_SCS_LENGTH                        equ 0002h
OSCCON_SCS_MASK                          equ 0003h
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
OSCCON_IDLEN_POSN                        equ 0007h
OSCCON_IDLEN_POSITION                    equ 0007h
OSCCON_IDLEN_SIZE                        equ 0001h
OSCCON_IDLEN_LENGTH                      equ 0001h
OSCCON_IDLEN_MASK                        equ 0080h
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

// Register: T0CON
#define T0CON T0CON
T0CON                                    equ 0FD5h
// bitfield definitions
T0CON_T0PS_POSN                          equ 0000h
T0CON_T0PS_POSITION                      equ 0000h
T0CON_T0PS_SIZE                          equ 0003h
T0CON_T0PS_LENGTH                        equ 0003h
T0CON_T0PS_MASK                          equ 0007h
T0CON_PSA_POSN                           equ 0003h
T0CON_PSA_POSITION                       equ 0003h
T0CON_PSA_SIZE                           equ 0001h
T0CON_PSA_LENGTH                         equ 0001h
T0CON_PSA_MASK                           equ 0008h
T0CON_T0SE_POSN                          equ 0004h
T0CON_T0SE_POSITION                      equ 0004h
T0CON_T0SE_SIZE                          equ 0001h
T0CON_T0SE_LENGTH                        equ 0001h
T0CON_T0SE_MASK                          equ 0010h
T0CON_T0CS_POSN                          equ 0005h
T0CON_T0CS_POSITION                      equ 0005h
T0CON_T0CS_SIZE                          equ 0001h
T0CON_T0CS_LENGTH                        equ 0001h
T0CON_T0CS_MASK                          equ 0020h
T0CON_T08BIT_POSN                        equ 0006h
T0CON_T08BIT_POSITION                    equ 0006h
T0CON_T08BIT_SIZE                        equ 0001h
T0CON_T08BIT_LENGTH                      equ 0001h
T0CON_T08BIT_MASK                        equ 0040h
T0CON_TMR0ON_POSN                        equ 0007h
T0CON_TMR0ON_POSITION                    equ 0007h
T0CON_TMR0ON_SIZE                        equ 0001h
T0CON_TMR0ON_LENGTH                      equ 0001h
T0CON_TMR0ON_MASK                        equ 0080h
T0CON_T0PS0_POSN                         equ 0000h
T0CON_T0PS0_POSITION                     equ 0000h
T0CON_T0PS0_SIZE                         equ 0001h
T0CON_T0PS0_LENGTH                       equ 0001h
T0CON_T0PS0_MASK                         equ 0001h
T0CON_T0PS1_POSN                         equ 0001h
T0CON_T0PS1_POSITION                     equ 0001h
T0CON_T0PS1_SIZE                         equ 0001h
T0CON_T0PS1_LENGTH                       equ 0001h
T0CON_T0PS1_MASK                         equ 0002h
T0CON_T0PS2_POSN                         equ 0002h
T0CON_T0PS2_POSITION                     equ 0002h
T0CON_T0PS2_SIZE                         equ 0001h
T0CON_T0PS2_LENGTH                       equ 0001h
T0CON_T0PS2_MASK                         equ 0004h

// Register: TMR0
#define TMR0 TMR0
TMR0                                     equ 0FD6h

// Register: TMR0L
#define TMR0L TMR0L
TMR0L                                    equ 0FD6h
// bitfield definitions
TMR0L_TMR0L_POSN                         equ 0000h
TMR0L_TMR0L_POSITION                     equ 0000h
TMR0L_TMR0L_SIZE                         equ 0008h
TMR0L_TMR0L_LENGTH                       equ 0008h
TMR0L_TMR0L_MASK                         equ 00FFh

// Register: TMR0H
#define TMR0H TMR0H
TMR0H                                    equ 0FD7h
// bitfield definitions
TMR0H_TMR0H_POSN                         equ 0000h
TMR0H_TMR0H_POSITION                     equ 0000h
TMR0H_TMR0H_SIZE                         equ 0008h
TMR0H_TMR0H_LENGTH                       equ 0008h
TMR0H_TMR0H_MASK                         equ 00FFh

// Register: STATUS
#define STATUS STATUS
STATUS                                   equ 0FD8h
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
STATUS_OV_POSN                           equ 0003h
STATUS_OV_POSITION                       equ 0003h
STATUS_OV_SIZE                           equ 0001h
STATUS_OV_LENGTH                         equ 0001h
STATUS_OV_MASK                           equ 0008h
STATUS_N_POSN                            equ 0004h
STATUS_N_POSITION                        equ 0004h
STATUS_N_SIZE                            equ 0001h
STATUS_N_LENGTH                          equ 0001h
STATUS_N_MASK                            equ 0010h
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
STATUS_OVERFLOW_POSN                     equ 0003h
STATUS_OVERFLOW_POSITION                 equ 0003h
STATUS_OVERFLOW_SIZE                     equ 0001h
STATUS_OVERFLOW_LENGTH                   equ 0001h
STATUS_OVERFLOW_MASK                     equ 0008h
STATUS_NEGATIVE_POSN                     equ 0004h
STATUS_NEGATIVE_POSITION                 equ 0004h
STATUS_NEGATIVE_SIZE                     equ 0001h
STATUS_NEGATIVE_LENGTH                   equ 0001h
STATUS_NEGATIVE_MASK                     equ 0010h

// Register: FSR2
#define FSR2 FSR2
FSR2                                     equ 0FD9h

// Register: FSR2L
#define FSR2L FSR2L
FSR2L                                    equ 0FD9h
// bitfield definitions
FSR2L_FSR2L_POSN                         equ 0000h
FSR2L_FSR2L_POSITION                     equ 0000h
FSR2L_FSR2L_SIZE                         equ 0008h
FSR2L_FSR2L_LENGTH                       equ 0008h
FSR2L_FSR2L_MASK                         equ 00FFh

// Register: FSR2H
#define FSR2H FSR2H
FSR2H                                    equ 0FDAh

// Register: PLUSW2
#define PLUSW2 PLUSW2
PLUSW2                                   equ 0FDBh
// bitfield definitions
PLUSW2_PLUSW2_POSN                       equ 0000h
PLUSW2_PLUSW2_POSITION                   equ 0000h
PLUSW2_PLUSW2_SIZE                       equ 0008h
PLUSW2_PLUSW2_LENGTH                     equ 0008h
PLUSW2_PLUSW2_MASK                       equ 00FFh

// Register: PREINC2
#define PREINC2 PREINC2
PREINC2                                  equ 0FDCh
// bitfield definitions
PREINC2_PREINC2_POSN                     equ 0000h
PREINC2_PREINC2_POSITION                 equ 0000h
PREINC2_PREINC2_SIZE                     equ 0008h
PREINC2_PREINC2_LENGTH                   equ 0008h
PREINC2_PREINC2_MASK                     equ 00FFh

// Register: POSTDEC2
#define POSTDEC2 POSTDEC2
POSTDEC2                                 equ 0FDDh
// bitfield definitions
POSTDEC2_POSTDEC2_POSN                   equ 0000h
POSTDEC2_POSTDEC2_POSITION               equ 0000h
POSTDEC2_POSTDEC2_SIZE                   equ 0008h
POSTDEC2_POSTDEC2_LENGTH                 equ 0008h
POSTDEC2_POSTDEC2_MASK                   equ 00FFh

// Register: POSTINC2
#define POSTINC2 POSTINC2
POSTINC2                                 equ 0FDEh
// bitfield definitions
POSTINC2_POSTINC2_POSN                   equ 0000h
POSTINC2_POSTINC2_POSITION               equ 0000h
POSTINC2_POSTINC2_SIZE                   equ 0008h
POSTINC2_POSTINC2_LENGTH                 equ 0008h
POSTINC2_POSTINC2_MASK                   equ 00FFh

// Register: INDF2
#define INDF2 INDF2
INDF2                                    equ 0FDFh
// bitfield definitions
INDF2_INDF2_POSN                         equ 0000h
INDF2_INDF2_POSITION                     equ 0000h
INDF2_INDF2_SIZE                         equ 0008h
INDF2_INDF2_LENGTH                       equ 0008h
INDF2_INDF2_MASK                         equ 00FFh

// Register: BSR
#define BSR BSR
BSR                                      equ 0FE0h

// Register: FSR1
#define FSR1 FSR1
FSR1                                     equ 0FE1h

// Register: FSR1L
#define FSR1L FSR1L
FSR1L                                    equ 0FE1h
// bitfield definitions
FSR1L_FSR1L_POSN                         equ 0000h
FSR1L_FSR1L_POSITION                     equ 0000h
FSR1L_FSR1L_SIZE                         equ 0008h
FSR1L_FSR1L_LENGTH                       equ 0008h
FSR1L_FSR1L_MASK                         equ 00FFh

// Register: FSR1H
#define FSR1H FSR1H
FSR1H                                    equ 0FE2h

// Register: PLUSW1
#define PLUSW1 PLUSW1
PLUSW1                                   equ 0FE3h
// bitfield definitions
PLUSW1_PLUSW1_POSN                       equ 0000h
PLUSW1_PLUSW1_POSITION                   equ 0000h
PLUSW1_PLUSW1_SIZE                       equ 0008h
PLUSW1_PLUSW1_LENGTH                     equ 0008h
PLUSW1_PLUSW1_MASK                       equ 00FFh

// Register: PREINC1
#define PREINC1 PREINC1
PREINC1                                  equ 0FE4h
// bitfield definitions
PREINC1_PREINC1_POSN                     equ 0000h
PREINC1_PREINC1_POSITION                 equ 0000h
PREINC1_PREINC1_SIZE                     equ 0008h
PREINC1_PREINC1_LENGTH                   equ 0008h
PREINC1_PREINC1_MASK                     equ 00FFh

// Register: POSTDEC1
#define POSTDEC1 POSTDEC1
POSTDEC1                                 equ 0FE5h
// bitfield definitions
POSTDEC1_POSTDEC1_POSN                   equ 0000h
POSTDEC1_POSTDEC1_POSITION               equ 0000h
POSTDEC1_POSTDEC1_SIZE                   equ 0008h
POSTDEC1_POSTDEC1_LENGTH                 equ 0008h
POSTDEC1_POSTDEC1_MASK                   equ 00FFh

// Register: POSTINC1
#define POSTINC1 POSTINC1
POSTINC1                                 equ 0FE6h
// bitfield definitions
POSTINC1_POSTINC1_POSN                   equ 0000h
POSTINC1_POSTINC1_POSITION               equ 0000h
POSTINC1_POSTINC1_SIZE                   equ 0008h
POSTINC1_POSTINC1_LENGTH                 equ 0008h
POSTINC1_POSTINC1_MASK                   equ 00FFh

// Register: INDF1
#define INDF1 INDF1
INDF1                                    equ 0FE7h
// bitfield definitions
INDF1_INDF1_POSN                         equ 0000h
INDF1_INDF1_POSITION                     equ 0000h
INDF1_INDF1_SIZE                         equ 0008h
INDF1_INDF1_LENGTH                       equ 0008h
INDF1_INDF1_MASK                         equ 00FFh

// Register: WREG
#define WREG WREG
WREG                                     equ 0FE8h
// bitfield definitions
WREG_WREG_POSN                           equ 0000h
WREG_WREG_POSITION                       equ 0000h
WREG_WREG_SIZE                           equ 0008h
WREG_WREG_LENGTH                         equ 0008h
WREG_WREG_MASK                           equ 00FFh

// Register: FSR0
#define FSR0 FSR0
FSR0                                     equ 0FE9h

// Register: FSR0L
#define FSR0L FSR0L
FSR0L                                    equ 0FE9h
// bitfield definitions
FSR0L_FSR0L_POSN                         equ 0000h
FSR0L_FSR0L_POSITION                     equ 0000h
FSR0L_FSR0L_SIZE                         equ 0008h
FSR0L_FSR0L_LENGTH                       equ 0008h
FSR0L_FSR0L_MASK                         equ 00FFh

// Register: FSR0H
#define FSR0H FSR0H
FSR0H                                    equ 0FEAh

// Register: PLUSW0
#define PLUSW0 PLUSW0
PLUSW0                                   equ 0FEBh
// bitfield definitions
PLUSW0_PLUSW0_POSN                       equ 0000h
PLUSW0_PLUSW0_POSITION                   equ 0000h
PLUSW0_PLUSW0_SIZE                       equ 0008h
PLUSW0_PLUSW0_LENGTH                     equ 0008h
PLUSW0_PLUSW0_MASK                       equ 00FFh

// Register: PREINC0
#define PREINC0 PREINC0
PREINC0                                  equ 0FECh
// bitfield definitions
PREINC0_PREINC0_POSN                     equ 0000h
PREINC0_PREINC0_POSITION                 equ 0000h
PREINC0_PREINC0_SIZE                     equ 0008h
PREINC0_PREINC0_LENGTH                   equ 0008h
PREINC0_PREINC0_MASK                     equ 00FFh

// Register: POSTDEC0
#define POSTDEC0 POSTDEC0
POSTDEC0                                 equ 0FEDh
// bitfield definitions
POSTDEC0_POSTDEC0_POSN                   equ 0000h
POSTDEC0_POSTDEC0_POSITION               equ 0000h
POSTDEC0_POSTDEC0_SIZE                   equ 0008h
POSTDEC0_POSTDEC0_LENGTH                 equ 0008h
POSTDEC0_POSTDEC0_MASK                   equ 00FFh

// Register: POSTINC0
#define POSTINC0 POSTINC0
POSTINC0                                 equ 0FEEh
// bitfield definitions
POSTINC0_POSTINC0_POSN                   equ 0000h
POSTINC0_POSTINC0_POSITION               equ 0000h
POSTINC0_POSTINC0_SIZE                   equ 0008h
POSTINC0_POSTINC0_LENGTH                 equ 0008h
POSTINC0_POSTINC0_MASK                   equ 00FFh

// Register: INDF0
#define INDF0 INDF0
INDF0                                    equ 0FEFh
// bitfield definitions
INDF0_INDF0_POSN                         equ 0000h
INDF0_INDF0_POSITION                     equ 0000h
INDF0_INDF0_SIZE                         equ 0008h
INDF0_INDF0_LENGTH                       equ 0008h
INDF0_INDF0_MASK                         equ 00FFh

// Register: INTCON3
#define INTCON3 INTCON3
INTCON3                                  equ 0FF0h
// bitfield definitions
INTCON3_INT1IF_POSN                      equ 0000h
INTCON3_INT1IF_POSITION                  equ 0000h
INTCON3_INT1IF_SIZE                      equ 0001h
INTCON3_INT1IF_LENGTH                    equ 0001h
INTCON3_INT1IF_MASK                      equ 0001h
INTCON3_INT2IF_POSN                      equ 0001h
INTCON3_INT2IF_POSITION                  equ 0001h
INTCON3_INT2IF_SIZE                      equ 0001h
INTCON3_INT2IF_LENGTH                    equ 0001h
INTCON3_INT2IF_MASK                      equ 0002h
INTCON3_INT3IF_POSN                      equ 0002h
INTCON3_INT3IF_POSITION                  equ 0002h
INTCON3_INT3IF_SIZE                      equ 0001h
INTCON3_INT3IF_LENGTH                    equ 0001h
INTCON3_INT3IF_MASK                      equ 0004h
INTCON3_INT1IE_POSN                      equ 0003h
INTCON3_INT1IE_POSITION                  equ 0003h
INTCON3_INT1IE_SIZE                      equ 0001h
INTCON3_INT1IE_LENGTH                    equ 0001h
INTCON3_INT1IE_MASK                      equ 0008h
INTCON3_INT2IE_POSN                      equ 0004h
INTCON3_INT2IE_POSITION                  equ 0004h
INTCON3_INT2IE_SIZE                      equ 0001h
INTCON3_INT2IE_LENGTH                    equ 0001h
INTCON3_INT2IE_MASK                      equ 0010h
INTCON3_INT3IE_POSN                      equ 0005h
INTCON3_INT3IE_POSITION                  equ 0005h
INTCON3_INT3IE_SIZE                      equ 0001h
INTCON3_INT3IE_LENGTH                    equ 0001h
INTCON3_INT3IE_MASK                      equ 0020h
INTCON3_INT1IP_POSN                      equ 0006h
INTCON3_INT1IP_POSITION                  equ 0006h
INTCON3_INT1IP_SIZE                      equ 0001h
INTCON3_INT1IP_LENGTH                    equ 0001h
INTCON3_INT1IP_MASK                      equ 0040h
INTCON3_INT2IP_POSN                      equ 0007h
INTCON3_INT2IP_POSITION                  equ 0007h
INTCON3_INT2IP_SIZE                      equ 0001h
INTCON3_INT2IP_LENGTH                    equ 0001h
INTCON3_INT2IP_MASK                      equ 0080h
INTCON3_INT1F_POSN                       equ 0000h
INTCON3_INT1F_POSITION                   equ 0000h
INTCON3_INT1F_SIZE                       equ 0001h
INTCON3_INT1F_LENGTH                     equ 0001h
INTCON3_INT1F_MASK                       equ 0001h
INTCON3_INT2F_POSN                       equ 0001h
INTCON3_INT2F_POSITION                   equ 0001h
INTCON3_INT2F_SIZE                       equ 0001h
INTCON3_INT2F_LENGTH                     equ 0001h
INTCON3_INT2F_MASK                       equ 0002h
INTCON3_INT3F_POSN                       equ 0002h
INTCON3_INT3F_POSITION                   equ 0002h
INTCON3_INT3F_SIZE                       equ 0001h
INTCON3_INT3F_LENGTH                     equ 0001h
INTCON3_INT3F_MASK                       equ 0004h
INTCON3_INT1E_POSN                       equ 0003h
INTCON3_INT1E_POSITION                   equ 0003h
INTCON3_INT1E_SIZE                       equ 0001h
INTCON3_INT1E_LENGTH                     equ 0001h
INTCON3_INT1E_MASK                       equ 0008h
INTCON3_INT2E_POSN                       equ 0004h
INTCON3_INT2E_POSITION                   equ 0004h
INTCON3_INT2E_SIZE                       equ 0001h
INTCON3_INT2E_LENGTH                     equ 0001h
INTCON3_INT2E_MASK                       equ 0010h
INTCON3_INT3E_POSN                       equ 0005h
INTCON3_INT3E_POSITION                   equ 0005h
INTCON3_INT3E_SIZE                       equ 0001h
INTCON3_INT3E_LENGTH                     equ 0001h
INTCON3_INT3E_MASK                       equ 0020h
INTCON3_INT1P_POSN                       equ 0006h
INTCON3_INT1P_POSITION                   equ 0006h
INTCON3_INT1P_SIZE                       equ 0001h
INTCON3_INT1P_LENGTH                     equ 0001h
INTCON3_INT1P_MASK                       equ 0040h
INTCON3_INT2P_POSN                       equ 0007h
INTCON3_INT2P_POSITION                   equ 0007h
INTCON3_INT2P_SIZE                       equ 0001h
INTCON3_INT2P_LENGTH                     equ 0001h
INTCON3_INT2P_MASK                       equ 0080h

// Register: INTCON2
#define INTCON2 INTCON2
INTCON2                                  equ 0FF1h
// bitfield definitions
INTCON2_NOT_RBPU_POSN                    equ 0007h
INTCON2_NOT_RBPU_POSITION                equ 0007h
INTCON2_NOT_RBPU_SIZE                    equ 0001h
INTCON2_NOT_RBPU_LENGTH                  equ 0001h
INTCON2_NOT_RBPU_MASK                    equ 0080h
INTCON2_RBIP_POSN                        equ 0000h
INTCON2_RBIP_POSITION                    equ 0000h
INTCON2_RBIP_SIZE                        equ 0001h
INTCON2_RBIP_LENGTH                      equ 0001h
INTCON2_RBIP_MASK                        equ 0001h
INTCON2_INT3IP_POSN                      equ 0001h
INTCON2_INT3IP_POSITION                  equ 0001h
INTCON2_INT3IP_SIZE                      equ 0001h
INTCON2_INT3IP_LENGTH                    equ 0001h
INTCON2_INT3IP_MASK                      equ 0002h
INTCON2_TMR0IP_POSN                      equ 0002h
INTCON2_TMR0IP_POSITION                  equ 0002h
INTCON2_TMR0IP_SIZE                      equ 0001h
INTCON2_TMR0IP_LENGTH                    equ 0001h
INTCON2_TMR0IP_MASK                      equ 0004h
INTCON2_INTEDG3_POSN                     equ 0003h
INTCON2_INTEDG3_POSITION                 equ 0003h
INTCON2_INTEDG3_SIZE                     equ 0001h
INTCON2_INTEDG3_LENGTH                   equ 0001h
INTCON2_INTEDG3_MASK                     equ 0008h
INTCON2_INTEDG2_POSN                     equ 0004h
INTCON2_INTEDG2_POSITION                 equ 0004h
INTCON2_INTEDG2_SIZE                     equ 0001h
INTCON2_INTEDG2_LENGTH                   equ 0001h
INTCON2_INTEDG2_MASK                     equ 0010h
INTCON2_INTEDG1_POSN                     equ 0005h
INTCON2_INTEDG1_POSITION                 equ 0005h
INTCON2_INTEDG1_SIZE                     equ 0001h
INTCON2_INTEDG1_LENGTH                   equ 0001h
INTCON2_INTEDG1_MASK                     equ 0020h
INTCON2_INTEDG0_POSN                     equ 0006h
INTCON2_INTEDG0_POSITION                 equ 0006h
INTCON2_INTEDG0_SIZE                     equ 0001h
INTCON2_INTEDG0_LENGTH                   equ 0001h
INTCON2_INTEDG0_MASK                     equ 0040h
INTCON2_nRBPU_POSN                       equ 0007h
INTCON2_nRBPU_POSITION                   equ 0007h
INTCON2_nRBPU_SIZE                       equ 0001h
INTCON2_nRBPU_LENGTH                     equ 0001h
INTCON2_nRBPU_MASK                       equ 0080h
INTCON2_INT3P_POSN                       equ 0001h
INTCON2_INT3P_POSITION                   equ 0001h
INTCON2_INT3P_SIZE                       equ 0001h
INTCON2_INT3P_LENGTH                     equ 0001h
INTCON2_INT3P_MASK                       equ 0002h
INTCON2_T0IP_POSN                        equ 0002h
INTCON2_T0IP_POSITION                    equ 0002h
INTCON2_T0IP_SIZE                        equ 0001h
INTCON2_T0IP_LENGTH                      equ 0001h
INTCON2_T0IP_MASK                        equ 0004h
INTCON2_RBPU_POSN                        equ 0007h
INTCON2_RBPU_POSITION                    equ 0007h
INTCON2_RBPU_SIZE                        equ 0001h
INTCON2_RBPU_LENGTH                      equ 0001h
INTCON2_RBPU_MASK                        equ 0080h

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 0FF2h
// bitfield definitions
INTCON_RBIF_POSN                         equ 0000h
INTCON_RBIF_POSITION                     equ 0000h
INTCON_RBIF_SIZE                         equ 0001h
INTCON_RBIF_LENGTH                       equ 0001h
INTCON_RBIF_MASK                         equ 0001h
INTCON_INT0IF_POSN                       equ 0001h
INTCON_INT0IF_POSITION                   equ 0001h
INTCON_INT0IF_SIZE                       equ 0001h
INTCON_INT0IF_LENGTH                     equ 0001h
INTCON_INT0IF_MASK                       equ 0002h
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
INTCON_INT0IE_POSN                       equ 0004h
INTCON_INT0IE_POSITION                   equ 0004h
INTCON_INT0IE_SIZE                       equ 0001h
INTCON_INT0IE_LENGTH                     equ 0001h
INTCON_INT0IE_MASK                       equ 0010h
INTCON_TMR0IE_POSN                       equ 0005h
INTCON_TMR0IE_POSITION                   equ 0005h
INTCON_TMR0IE_SIZE                       equ 0001h
INTCON_TMR0IE_LENGTH                     equ 0001h
INTCON_TMR0IE_MASK                       equ 0020h
INTCON_PEIE_GIEL_POSN                    equ 0006h
INTCON_PEIE_GIEL_POSITION                equ 0006h
INTCON_PEIE_GIEL_SIZE                    equ 0001h
INTCON_PEIE_GIEL_LENGTH                  equ 0001h
INTCON_PEIE_GIEL_MASK                    equ 0040h
INTCON_GIE_GIEH_POSN                     equ 0007h
INTCON_GIE_GIEH_POSITION                 equ 0007h
INTCON_GIE_GIEH_SIZE                     equ 0001h
INTCON_GIE_GIEH_LENGTH                   equ 0001h
INTCON_GIE_GIEH_MASK                     equ 0080h
INTCON_INT0F_POSN                        equ 0001h
INTCON_INT0F_POSITION                    equ 0001h
INTCON_INT0F_SIZE                        equ 0001h
INTCON_INT0F_LENGTH                      equ 0001h
INTCON_INT0F_MASK                        equ 0002h
INTCON_T0IF_POSN                         equ 0002h
INTCON_T0IF_POSITION                     equ 0002h
INTCON_T0IF_SIZE                         equ 0001h
INTCON_T0IF_LENGTH                       equ 0001h
INTCON_T0IF_MASK                         equ 0004h
INTCON_INT0E_POSN                        equ 0004h
INTCON_INT0E_POSITION                    equ 0004h
INTCON_INT0E_SIZE                        equ 0001h
INTCON_INT0E_LENGTH                      equ 0001h
INTCON_INT0E_MASK                        equ 0010h
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
INTCON_GIEL_POSN                         equ 0006h
INTCON_GIEL_POSITION                     equ 0006h
INTCON_GIEL_SIZE                         equ 0001h
INTCON_GIEL_LENGTH                       equ 0001h
INTCON_GIEL_MASK                         equ 0040h
INTCON_GIEH_POSN                         equ 0007h
INTCON_GIEH_POSITION                     equ 0007h
INTCON_GIEH_SIZE                         equ 0001h
INTCON_GIEH_LENGTH                       equ 0001h
INTCON_GIEH_MASK                         equ 0080h

// Register: PROD
#define PROD PROD
PROD                                     equ 0FF3h

// Register: PRODL
#define PRODL PRODL
PRODL                                    equ 0FF3h
// bitfield definitions
PRODL_PRODL_POSN                         equ 0000h
PRODL_PRODL_POSITION                     equ 0000h
PRODL_PRODL_SIZE                         equ 0008h
PRODL_PRODL_LENGTH                       equ 0008h
PRODL_PRODL_MASK                         equ 00FFh

// Register: PRODH
#define PRODH PRODH
PRODH                                    equ 0FF4h
// bitfield definitions
PRODH_PRODH_POSN                         equ 0000h
PRODH_PRODH_POSITION                     equ 0000h
PRODH_PRODH_SIZE                         equ 0008h
PRODH_PRODH_LENGTH                       equ 0008h
PRODH_PRODH_MASK                         equ 00FFh

// Register: TABLAT
#define TABLAT TABLAT
TABLAT                                   equ 0FF5h
// bitfield definitions
TABLAT_TABLAT_POSN                       equ 0000h
TABLAT_TABLAT_POSITION                   equ 0000h
TABLAT_TABLAT_SIZE                       equ 0008h
TABLAT_TABLAT_LENGTH                     equ 0008h
TABLAT_TABLAT_MASK                       equ 00FFh

// Register: TBLPTR
#define TBLPTR TBLPTR
TBLPTR                                   equ 0FF6h

// Register: TBLPTRL
#define TBLPTRL TBLPTRL
TBLPTRL                                  equ 0FF6h
// bitfield definitions
TBLPTRL_TBLPTRL_POSN                     equ 0000h
TBLPTRL_TBLPTRL_POSITION                 equ 0000h
TBLPTRL_TBLPTRL_SIZE                     equ 0008h
TBLPTRL_TBLPTRL_LENGTH                   equ 0008h
TBLPTRL_TBLPTRL_MASK                     equ 00FFh

// Register: TBLPTRH
#define TBLPTRH TBLPTRH
TBLPTRH                                  equ 0FF7h
// bitfield definitions
TBLPTRH_TBLPTRH_POSN                     equ 0000h
TBLPTRH_TBLPTRH_POSITION                 equ 0000h
TBLPTRH_TBLPTRH_SIZE                     equ 0008h
TBLPTRH_TBLPTRH_LENGTH                   equ 0008h
TBLPTRH_TBLPTRH_MASK                     equ 00FFh

// Register: TBLPTRU
#define TBLPTRU TBLPTRU
TBLPTRU                                  equ 0FF8h

// Register: PCLAT
#define PCLAT PCLAT
PCLAT                                    equ 0FF9h

// Register: PCL
#define PCL PCL
PCL                                      equ 0FF9h
// bitfield definitions
PCL_PCL_POSN                             equ 0000h
PCL_PCL_POSITION                         equ 0000h
PCL_PCL_SIZE                             equ 0008h
PCL_PCL_LENGTH                           equ 0008h
PCL_PCL_MASK                             equ 00FFh

// Register: PCLATH
#define PCLATH PCLATH
PCLATH                                   equ 0FFAh
// bitfield definitions
PCLATH_PCH_POSN                          equ 0000h
PCLATH_PCH_POSITION                      equ 0000h
PCLATH_PCH_SIZE                          equ 0008h
PCLATH_PCH_LENGTH                        equ 0008h
PCLATH_PCH_MASK                          equ 00FFh

// Register: PCLATU
#define PCLATU PCLATU
PCLATU                                   equ 0FFBh

// Register: STKPTR
#define STKPTR STKPTR
STKPTR                                   equ 0FFCh
// bitfield definitions
STKPTR_STKPTR_POSN                       equ 0000h
STKPTR_STKPTR_POSITION                   equ 0000h
STKPTR_STKPTR_SIZE                       equ 0005h
STKPTR_STKPTR_LENGTH                     equ 0005h
STKPTR_STKPTR_MASK                       equ 001Fh
STKPTR_STKUNF_POSN                       equ 0006h
STKPTR_STKUNF_POSITION                   equ 0006h
STKPTR_STKUNF_SIZE                       equ 0001h
STKPTR_STKUNF_LENGTH                     equ 0001h
STKPTR_STKUNF_MASK                       equ 0040h
STKPTR_STKFUL_POSN                       equ 0007h
STKPTR_STKFUL_POSITION                   equ 0007h
STKPTR_STKFUL_SIZE                       equ 0001h
STKPTR_STKFUL_LENGTH                     equ 0001h
STKPTR_STKFUL_MASK                       equ 0080h
STKPTR_SP0_POSN                          equ 0000h
STKPTR_SP0_POSITION                      equ 0000h
STKPTR_SP0_SIZE                          equ 0001h
STKPTR_SP0_LENGTH                        equ 0001h
STKPTR_SP0_MASK                          equ 0001h
STKPTR_SP1_POSN                          equ 0001h
STKPTR_SP1_POSITION                      equ 0001h
STKPTR_SP1_SIZE                          equ 0001h
STKPTR_SP1_LENGTH                        equ 0001h
STKPTR_SP1_MASK                          equ 0002h
STKPTR_SP2_POSN                          equ 0002h
STKPTR_SP2_POSITION                      equ 0002h
STKPTR_SP2_SIZE                          equ 0001h
STKPTR_SP2_LENGTH                        equ 0001h
STKPTR_SP2_MASK                          equ 0004h
STKPTR_SP3_POSN                          equ 0003h
STKPTR_SP3_POSITION                      equ 0003h
STKPTR_SP3_SIZE                          equ 0001h
STKPTR_SP3_LENGTH                        equ 0001h
STKPTR_SP3_MASK                          equ 0008h
STKPTR_SP4_POSN                          equ 0004h
STKPTR_SP4_POSITION                      equ 0004h
STKPTR_SP4_SIZE                          equ 0001h
STKPTR_SP4_LENGTH                        equ 0001h
STKPTR_SP4_MASK                          equ 0010h
STKPTR_STKOVF_POSN                       equ 0007h
STKPTR_STKOVF_POSITION                   equ 0007h
STKPTR_STKOVF_SIZE                       equ 0001h
STKPTR_STKOVF_LENGTH                     equ 0001h
STKPTR_STKOVF_MASK                       equ 0080h

// Register: TOS
#define TOS TOS
TOS                                      equ 0FFDh

// Register: TOSL
#define TOSL TOSL
TOSL                                     equ 0FFDh
// bitfield definitions
TOSL_TOSL_POSN                           equ 0000h
TOSL_TOSL_POSITION                       equ 0000h
TOSL_TOSL_SIZE                           equ 0008h
TOSL_TOSL_LENGTH                         equ 0008h
TOSL_TOSL_MASK                           equ 00FFh

// Register: TOSH
#define TOSH TOSH
TOSH                                     equ 0FFEh
// bitfield definitions
TOSH_TOSH_POSN                           equ 0000h
TOSH_TOSH_POSITION                       equ 0000h
TOSH_TOSH_SIZE                           equ 0008h
TOSH_TOSH_LENGTH                         equ 0008h
TOSH_TOSH_MASK                           equ 00FFh

// Register: TOSU
#define TOSU TOSU
TOSU                                     equ 0FFFh

/*
 * Bit Access Macros
 */

#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr) and 0FFFFFh)
#endif
#ifndef BANKMASK
#define BANKMASK(addr) ((addr) and 0FFh)
#endif
#define ABDEN                            BANKMASK(BAUDCON1), 0, a
#define ABDEN1                           BANKMASK(BAUDCON1), 0, a
#define ABDEN2                           BANKMASK(BAUDCON2), 0, a
#define ABDOVF                           BANKMASK(BAUDCON1), 7, a
#define ABDOVF1                          BANKMASK(BAUDCON1), 7, a
#define ABDOVF2                          BANKMASK(BAUDCON2), 7, a
#define ACKDT                            BANKMASK(SSP1CON2), 5, a
#define ACKDT1                           BANKMASK(SSP1CON2), 5, a
#define ACKDT2                           BANKMASK(SSP2CON2), 5, a
#define ACKEN                            BANKMASK(SSP1CON2), 4, a
#define ACKEN1                           BANKMASK(SSP1CON2), 4, a
#define ACKEN2                           BANKMASK(SSP2CON2), 4, a
#define ACKSTAT                          BANKMASK(SSP1CON2), 6, a
#define ACKSTAT1                         BANKMASK(SSP1CON2), 6, a
#define ACKSTAT2                         BANKMASK(SSP2CON2), 6, a
#define ACQT0                            BANKMASK(ADCON1), 3, a
#define ACQT1                            BANKMASK(ADCON1), 4, a
#define ACQT2                            BANKMASK(ADCON1), 5, a
#define ACTVIE                           BANKMASK(UIE), 2, b
#define ACTVIF                           BANKMASK(UIR), 2, a
#define ADCAL                            BANKMASK(ADCON1), 6, a
#define ADCS0                            BANKMASK(ADCON1), 0, a
#define ADCS1                            BANKMASK(ADCON1), 1, a
#define ADCS2                            BANKMASK(ADCON1), 2, a
#define ADDEN                            BANKMASK(RCSTA1), 3, a
#define ADDEN1                           BANKMASK(RCSTA1), 3, a
#define ADDEN2                           BANKMASK(RCSTA2), 3, a
#define ADDR0                            BANKMASK(UADDR), 0, b
#define ADDR1                            BANKMASK(UADDR), 1, b
#define ADDR2                            BANKMASK(UADDR), 2, b
#define ADDR3                            BANKMASK(UADDR), 3, b
#define ADDR4                            BANKMASK(UADDR), 4, b
#define ADDR5                            BANKMASK(UADDR), 5, b
#define ADDR6                            BANKMASK(UADDR), 6, b
#define ADEN                             BANKMASK(RCSTA1), 3, a
#define ADFM                             BANKMASK(ADCON1), 7, a
#define ADIE                             BANKMASK(PIE1), 6, a
#define ADIF                             BANKMASK(PIR1), 6, a
#define ADIP                             BANKMASK(IPR1), 6, a
#define ADMSK1                           BANKMASK(SSP1CON2), 1, a
#define ADMSK11                          BANKMASK(SSP1CON2), 1, a
#define ADMSK12                          BANKMASK(SSP2CON2), 1, a
#define ADMSK2                           BANKMASK(SSP1CON2), 2, a
#define ADMSK21                          BANKMASK(SSP1CON2), 2, a
#define ADMSK22                          BANKMASK(SSP2CON2), 2, a
#define ADMSK3                           BANKMASK(SSP1CON2), 3, a
#define ADMSK31                          BANKMASK(SSP1CON2), 3, a
#define ADMSK32                          BANKMASK(SSP2CON2), 3, a
#define ADMSK4                           BANKMASK(SSP1CON2), 4, a
#define ADMSK41                          BANKMASK(SSP1CON2), 4, a
#define ADMSK42                          BANKMASK(SSP2CON2), 4, a
#define ADMSK5                           BANKMASK(SSP1CON2), 5, a
#define ADMSK51                          BANKMASK(SSP1CON2), 5, a
#define ADMSK52                          BANKMASK(SSP2CON2), 5, a
#define ADON                             BANKMASK(ADCON0), 0, a
#define ALRMEN                           BANKMASK(ALRMCFG), 7, a
#define ALRMPTR0                         BANKMASK(ALRMCFG), 0, a
#define ALRMPTR1                         BANKMASK(ALRMCFG), 1, a
#define AMASK0                           BANKMASK(ALRMCFG), 2, a
#define AMASK1                           BANKMASK(ALRMCFG), 3, a
#define AMASK2                           BANKMASK(ALRMCFG), 4, a
#define AMASK3                           BANKMASK(ALRMCFG), 5, a
#define AN0                              BANKMASK(PORTA), 0, a
#define AN1                              BANKMASK(PORTA), 1, a
#define AN10                             BANKMASK(PORTB), 1, a
#define AN11                             BANKMASK(PORTC), 2, a
#define AN12                             BANKMASK(PORTB), 0, a
#define AN2                              BANKMASK(PORTA), 2, a
#define AN3                              BANKMASK(PORTA), 3, a
#define AN4                              BANKMASK(PORTA), 5, a
#define AN8                              BANKMASK(PORTB), 2, a
#define AN9                              BANKMASK(PORTB), 3, a
#define ARPT0                            BANKMASK(ALRMRPT), 0, a
#define ARPT1                            BANKMASK(ALRMRPT), 1, a
#define ARPT2                            BANKMASK(ALRMRPT), 2, a
#define ARPT3                            BANKMASK(ALRMRPT), 3, a
#define ARPT4                            BANKMASK(ALRMRPT), 4, a
#define ARPT5                            BANKMASK(ALRMRPT), 5, a
#define ARPT6                            BANKMASK(ALRMRPT), 6, a
#define ARPT7                            BANKMASK(ALRMRPT), 7, a
#define BCL1IE                           BANKMASK(PIE2), 3, a
#define BCL1IF                           BANKMASK(PIR2), 3, a
#define BCL1IP                           BANKMASK(IPR2), 3, a
#define BCL2IE                           BANKMASK(PIE3), 6, a
#define BCL2IF                           BANKMASK(PIR3), 6, a
#define BCL2IP                           BANKMASK(IPR3), 6, a
#define BCLIE                            BANKMASK(PIE2), 3, a
#define BCLIF                            BANKMASK(PIR2), 3, a
#define BCLIP                            BANKMASK(IPR2), 3, a
#define BF                               BANKMASK(SSP1STAT), 0, a
#define BF1                              BANKMASK(SSP1STAT), 0, a
#define BF2                              BANKMASK(SSP2STAT), 0, a
#define BGVST                            BANKMASK(HLVDCON), 6, a
#define BOR                              BANKMASK(RCON), 0, a
#define BRG16                            BANKMASK(BAUDCON1), 3, a
#define BRG161                           BANKMASK(BAUDCON1), 3, a
#define BRG162                           BANKMASK(BAUDCON2), 3, a
#define BRGH                             BANKMASK(TXSTA1), 2, a
#define BRGH1                            BANKMASK(TXSTA1), 2, a
#define BRGH2                            BANKMASK(TXSTA2), 2, a
#define BTOEE                            BANKMASK(UEIE), 4, b
#define BTOEF                            BANKMASK(UEIR), 4, a
#define BTSEE                            BANKMASK(UEIE), 7, b
#define BTSEF                            BANKMASK(UEIR), 7, a
#define C1CH0                            BANKMASK(CM1CON), 0, a
#define C1CH1                            BANKMASK(CM1CON), 1, a
#define C1INA                            BANKMASK(PORTA), 0, a
#define C1INB                            BANKMASK(PORTA), 3, a
#define C2INA                            BANKMASK(PORTA), 1, a
#define C2INB                            BANKMASK(PORTA), 2, a
#define CAL0                             BANKMASK(RTCCAL), 0, b
#define CAL1                             BANKMASK(RTCCAL), 1, b
#define CAL2                             BANKMASK(RTCCAL), 2, b
#define CAL3                             BANKMASK(RTCCAL), 3, b
#define CAL4                             BANKMASK(RTCCAL), 4, b
#define CAL5                             BANKMASK(RTCCAL), 5, b
#define CAL6                             BANKMASK(RTCCAL), 6, b
#define CAL7                             BANKMASK(RTCCAL), 7, b
#define CARRY                            BANKMASK(STATUS), 0, a
#define CCH0                             BANKMASK(CM1CON), 0, a
#define CCH01                            BANKMASK(CM1CON), 0, a
#define CCH02                            BANKMASK(CM2CON), 0, a
#define CCH1                             BANKMASK(CM1CON), 1, a
#define CCH11                            BANKMASK(CM1CON), 1, a
#define CCH12                            BANKMASK(CM2CON), 1, a
#define CCP1IE                           BANKMASK(PIE1), 2, a
#define CCP1IF                           BANKMASK(PIR1), 2, a
#define CCP1IP                           BANKMASK(IPR1), 2, a
#define CCP1M0                           BANKMASK(CCP1CON), 0, a
#define CCP1M1                           BANKMASK(CCP1CON), 1, a
#define CCP1M2                           BANKMASK(CCP1CON), 2, a
#define CCP1M3                           BANKMASK(CCP1CON), 3, a
#define CCP1X                            BANKMASK(CCP1CON), 5, a
#define CCP1Y                            BANKMASK(CCP1CON), 4, a
#define CCP2                             BANKMASK(PORTC), 1, a
#define CCP2IE                           BANKMASK(PIE2), 0, a
#define CCP2IF                           BANKMASK(PIR2), 0, a
#define CCP2IP                           BANKMASK(IPR2), 0, a
#define CCP2M0                           BANKMASK(CCP2CON), 0, a
#define CCP2M1                           BANKMASK(CCP2CON), 1, a
#define CCP2M2                           BANKMASK(CCP2CON), 2, a
#define CCP2M3                           BANKMASK(CCP2CON), 3, a
#define CCP2X                            BANKMASK(CCP2CON), 5, a
#define CCP2Y                            BANKMASK(CCP2CON), 4, a
#define CCP2_PA2                         BANKMASK(PORTB), 3, a
#define CHIME                            BANKMASK(ALRMCFG), 6, a
#define CHS0                             BANKMASK(ADCON0), 2, a
#define CHS1                             BANKMASK(ADCON0), 3, a
#define CHS2                             BANKMASK(ADCON0), 4, a
#define CHS3                             BANKMASK(ADCON0), 5, a
#define CHSN3                            BANKMASK(ADCON1), 3, a
#define CK1                              BANKMASK(PORTC), 6, a
#define CKE                              BANKMASK(SSP1STAT), 6, a
#define CKE1                             BANKMASK(SSP1STAT), 6, a
#define CKE2                             BANKMASK(SSP2STAT), 6, a
#define CKP                              BANKMASK(SSP1CON1), 4, a
#define CKP1                             BANKMASK(SSP1CON1), 4, a
#define CKP2                             BANKMASK(SSP2CON1), 4, a
#define CKTXP                            BANKMASK(BAUDCON1), 4, a
#define CLKI                             BANKMASK(PORTA), 7, a
#define CLKO                             BANKMASK(PORTA), 6, a
#define CM                               BANKMASK(RCON), 5, a
#define CM1IE                            BANKMASK(PIE2), 5, a
#define CM1IF                            BANKMASK(PIR2), 5, a
#define CM1IP                            BANKMASK(IPR2), 5, a
#define CM2IE                            BANKMASK(PIE2), 6, a
#define CM2IF                            BANKMASK(PIR2), 6, a
#define CM2IP                            BANKMASK(IPR2), 6, a
#define CMIE                             BANKMASK(PIE2), 6, a
#define CMIF                             BANKMASK(PIR2), 6, a
#define CMIP                             BANKMASK(IPR2), 6, a
#define CMPL0                            BANKMASK(PSTR1CON), 6, a
#define CMPL02                           BANKMASK(PSTR2CON), 6, a
#define CMPL1                            BANKMASK(PSTR1CON), 7, a
#define CMPL12                           BANKMASK(PSTR2CON), 7, a
#define COE                              BANKMASK(CM1CON), 6, a
#define COE1                             BANKMASK(CM1CON), 6, a
#define COE2                             BANKMASK(CM2CON), 6, a
#define CON                              BANKMASK(CM1CON), 7, a
#define CON1                             BANKMASK(CM1CON), 7, a
#define CON2                             BANKMASK(CM2CON), 7, a
#define COUT1                            BANKMASK(CMSTAT), 0, a
#define COUT2                            BANKMASK(CMSTAT), 1, a
#define CPOL                             BANKMASK(CM1CON), 5, a
#define CPOL1                            BANKMASK(CM1CON), 5, a
#define CPOL2                            BANKMASK(CM2CON), 5, a
#define CRC16EE                          BANKMASK(UEIE), 2, b
#define CRC16EF                          BANKMASK(UEIR), 2, a
#define CRC5EE                           BANKMASK(UEIE), 1, b
#define CRC5EF                           BANKMASK(UEIR), 1, a
#define CREF                             BANKMASK(CM1CON), 2, a
#define CREF1                            BANKMASK(CM1CON), 2, a
#define CREF2                            BANKMASK(CM2CON), 2, a
#define CREN                             BANKMASK(RCSTA1), 4, a
#define CREN1                            BANKMASK(RCSTA1), 4, a
#define CREN2                            BANKMASK(RCSTA2), 4, a
#define CSRC                             BANKMASK(TXSTA1), 7, a
#define CSRC1                            BANKMASK(TXSTA1), 7, a
#define CSRC2                            BANKMASK(TXSTA2), 7, a
#define CTEDG1                           BANKMASK(PORTB), 2, a
#define CTEDG2                           BANKMASK(PORTB), 3, a
#define CTMUEN                           BANKMASK(CTMUCONH), 7, a
#define CTMUIE                           BANKMASK(PIE3), 2, a
#define CTMUIF                           BANKMASK(PIR3), 2, a
#define CTMUIP                           BANKMASK(IPR3), 2, a
#define CTMUSIDL                         BANKMASK(CTMUCONH), 5, a
#define CTPLS                            BANKMASK(PORTC), 2, a
#define CTTRIG                           BANKMASK(CTMUCONH), 0, a
#define CVR0                             BANKMASK(CVRCON), 0, b
#define CVR1                             BANKMASK(CVRCON), 1, b
#define CVR2                             BANKMASK(CVRCON), 2, b
#define CVR3                             BANKMASK(CVRCON), 3, b
#define CVREF_MINUS                      BANKMASK(PORTA), 2, a
#define CVREN                            BANKMASK(CVRCON), 7, b
#define CVROE                            BANKMASK(CVRCON), 6, b
#define CVROEN                           BANKMASK(CVRCON), 6, b
#define CVRR                             BANKMASK(CVRCON), 5, b
#define CVRSS                            BANKMASK(CVRCON), 4, b
#define D1                               BANKMASK(SSP1STAT), 5, a
#define DA                               BANKMASK(SSP1STAT), 5, a
#define DA1                              BANKMASK(SSP1STAT), 5, a
#define DA2                              BANKMASK(SSP2STAT), 5, a
#define DATA_ADDRESS                     BANKMASK(SSP1STAT), 5, a
#define DATA_ADDRESS1                    BANKMASK(SSP1STAT), 5, a
#define DATA_ADDRESS2                    BANKMASK(SSP2STAT), 5, a
#define DC                               BANKMASK(STATUS), 1, a
#define DC1B0                            BANKMASK(CCP1CON), 4, a
#define DC1B1                            BANKMASK(CCP1CON), 5, a
#define DC2B0                            BANKMASK(CCP2CON), 4, a
#define DC2B1                            BANKMASK(CCP2CON), 5, a
#define DFN8EE                           BANKMASK(UEIE), 3, b
#define DFN8EF                           BANKMASK(UEIR), 3, a
#define DIR                              BANKMASK(USTAT), 2, a
#define DLYCYC0                          BANKMASK(DMACON2), 4, a
#define DLYCYC1                          BANKMASK(DMACON2), 5, a
#define DLYCYC2                          BANKMASK(DMACON2), 6, a
#define DLYCYC3                          BANKMASK(DMACON2), 7, a
#define DLYINTEN                         BANKMASK(DMACON1), 1, a
#define DMAEN                            BANKMASK(DMACON1), 0, a
#define DONE                             BANKMASK(ADCON0), 1, a
#define DSBOR                            BANKMASK(DSCONL), 1, b
#define DSEN                             BANKMASK(DSCONH), 7, b
#define DSFLT                            BANKMASK(DSWAKEL), 7, b
#define DSINT0                           BANKMASK(DSWAKEH), 0, b
#define DSMCLR                           BANKMASK(DSWAKEL), 2, b
#define DSPOR                            BANKMASK(DSWAKEL), 0, b
#define DSRTC                            BANKMASK(DSWAKEL), 3, b
#define DSULP                            BANKMASK(DSWAKEL), 5, b
#define DSULPEN                          BANKMASK(DSCONH), 1, b
#define DSWDT                            BANKMASK(DSWAKEL), 4, b
#define DT1                              BANKMASK(PORTC), 7, a
#define DTRXP                            BANKMASK(BAUDCON1), 5, a
#define DTRXP1                           BANKMASK(BAUDCON1), 5, a
#define DTRXP2                           BANKMASK(BAUDCON2), 5, a
#define DUPLEX0                          BANKMASK(DMACON1), 2, a
#define DUPLEX1                          BANKMASK(DMACON1), 3, a
#define D_A                              BANKMASK(SSP1STAT), 5, a
#define D_A1                             BANKMASK(SSP1STAT), 2, a
#define D_A2                             BANKMASK(SSP2STAT), 5, a
#define D_MINUS                          BANKMASK(PORTC), 4, a
#define D_NOT_A1                         BANKMASK(SSP1STAT), 5, a
#define D_NOT_A2                         BANKMASK(SSP2STAT), 5, a
#define D_PLUS                           BANKMASK(PORTC), 5, a
#define D_nA                             BANKMASK(SSP1STAT), 5, a
#define D_nA1                            BANKMASK(SSP1STAT), 5, a
#define D_nA2                            BANKMASK(SSP2STAT), 5, a
#define EBDIS                            BANKMASK(PR2), 7, a
#define ECCP1AS0                         BANKMASK(ECCP1AS), 4, a
#define ECCP1AS1                         BANKMASK(ECCP1AS), 5, a
#define ECCP1AS2                         BANKMASK(ECCP1AS), 6, a
#define ECCP1ASE                         BANKMASK(ECCP1AS), 7, a
#define ECCP1OD                          BANKMASK(ODCON1), 0, b
#define ECCP2AS0                         BANKMASK(ECCP2AS), 4, a
#define ECCP2AS1                         BANKMASK(ECCP2AS), 5, a
#define ECCP2AS2                         BANKMASK(ECCP2AS), 6, a
#define ECCP2ASE                         BANKMASK(ECCP2AS), 7, a
#define ECCP2OD                          BANKMASK(ODCON1), 1, b
#define EDG1POL                          BANKMASK(CTMUCONL), 4, a
#define EDG1SEL0                         BANKMASK(CTMUCONL), 2, a
#define EDG1SEL1                         BANKMASK(CTMUCONL), 3, a
#define EDG1STAT                         BANKMASK(CTMUCONL), 0, a
#define EDG2POL                          BANKMASK(CTMUCONL), 7, a
#define EDG2SEL0                         BANKMASK(CTMUCONL), 5, a
#define EDG2SEL1                         BANKMASK(CTMUCONL), 6, a
#define EDG2STAT                         BANKMASK(CTMUCONL), 1, a
#define EDGEN                            BANKMASK(CTMUCONH), 3, a
#define EDGSEQEN                         BANKMASK(CTMUCONH), 2, a
#define ENDP0                            BANKMASK(USTAT), 3, a
#define ENDP1                            BANKMASK(USTAT), 4, a
#define ENDP2                            BANKMASK(USTAT), 5, a
#define ENDP3                            BANKMASK(USTAT), 6, a
#define EP0CONDIS                        BANKMASK(UEP0), 3, b
#define EP0HSHK                          BANKMASK(UEP0), 4, b
#define EP0INEN                          BANKMASK(UEP0), 1, b
#define EP0OUTEN                         BANKMASK(UEP0), 2, b
#define EP0STALL                         BANKMASK(UEP0), 0, b
#define EP1CONDIS                        BANKMASK(UEP1), 3, b
#define EP1HSHK                          BANKMASK(UEP1), 4, b
#define EP1INEN                          BANKMASK(UEP1), 1, b
#define EP1OUTEN                         BANKMASK(UEP1), 2, b
#define EP1STALL                         BANKMASK(UEP1), 0, b
#define EP2CONDIS                        BANKMASK(UEP2), 3, b
#define EP2HSHK                          BANKMASK(UEP2), 4, b
#define EP2INEN                          BANKMASK(UEP2), 1, b
#define EP2OUTEN                         BANKMASK(UEP2), 2, b
#define EP2STALL                         BANKMASK(UEP2), 0, b
#define EP3CONDIS                        BANKMASK(UEP3), 3, b
#define EP3HSHK                          BANKMASK(UEP3), 4, b
#define EP3INEN                          BANKMASK(UEP3), 1, b
#define EP3OUTEN                         BANKMASK(UEP3), 2, b
#define EP3STALL                         BANKMASK(UEP3), 0, b
#define EP4CONDIS                        BANKMASK(UEP4), 3, b
#define EP4HSHK                          BANKMASK(UEP4), 4, b
#define EP4INEN                          BANKMASK(UEP4), 1, b
#define EP4OUTEN                         BANKMASK(UEP4), 2, b
#define EP4STALL                         BANKMASK(UEP4), 0, b
#define EP5CONDIS                        BANKMASK(UEP5), 3, b
#define EP5HSHK                          BANKMASK(UEP5), 4, b
#define EP5INEN                          BANKMASK(UEP5), 1, b
#define EP5OUTEN                         BANKMASK(UEP5), 2, b
#define EP5STALL                         BANKMASK(UEP5), 0, b
#define EP6CONDIS                        BANKMASK(UEP6), 3, b
#define EP6HSHK                          BANKMASK(UEP6), 4, b
#define EP6INEN                          BANKMASK(UEP6), 1, b
#define EP6OUTEN                         BANKMASK(UEP6), 2, b
#define EP6STALL                         BANKMASK(UEP6), 0, b
#define EP7CONDIS                        BANKMASK(UEP7), 3, b
#define EP7HSHK                          BANKMASK(UEP7), 4, b
#define EP7INEN                          BANKMASK(UEP7), 1, b
#define EP7OUTEN                         BANKMASK(UEP7), 2, b
#define EP7STALL                         BANKMASK(UEP7), 0, b
#define EPCONDIS                         BANKMASK(UEP0), 3, b
#define EPCONDIS0                        BANKMASK(UEP0), 3, b
#define EPCONDIS1                        BANKMASK(UEP1), 3, b
#define EPCONDIS10                       BANKMASK(UEP10), 3, b
#define EPCONDIS11                       BANKMASK(UEP11), 3, b
#define EPCONDIS12                       BANKMASK(UEP12), 3, b
#define EPCONDIS13                       BANKMASK(UEP13), 3, b
#define EPCONDIS14                       BANKMASK(UEP14), 3, b
#define EPCONDIS15                       BANKMASK(UEP15), 3, b
#define EPCONDIS2                        BANKMASK(UEP2), 3, b
#define EPCONDIS3                        BANKMASK(UEP3), 3, b
#define EPCONDIS4                        BANKMASK(UEP4), 3, b
#define EPCONDIS5                        BANKMASK(UEP5), 3, b
#define EPCONDIS6                        BANKMASK(UEP6), 3, b
#define EPCONDIS7                        BANKMASK(UEP7), 3, b
#define EPCONDIS8                        BANKMASK(UEP8), 3, b
#define EPCONDIS9                        BANKMASK(UEP9), 3, b
#define EPHSHK                           BANKMASK(UEP0), 4, b
#define EPHSHK0                          BANKMASK(UEP0), 4, b
#define EPHSHK1                          BANKMASK(UEP1), 4, b
#define EPHSHK10                         BANKMASK(UEP10), 4, b
#define EPHSHK11                         BANKMASK(UEP11), 4, b
#define EPHSHK12                         BANKMASK(UEP12), 4, b
#define EPHSHK13                         BANKMASK(UEP13), 4, b
#define EPHSHK14                         BANKMASK(UEP14), 4, b
#define EPHSHK15                         BANKMASK(UEP15), 4, b
#define EPHSHK2                          BANKMASK(UEP2), 4, b
#define EPHSHK3                          BANKMASK(UEP3), 4, b
#define EPHSHK4                          BANKMASK(UEP4), 4, b
#define EPHSHK5                          BANKMASK(UEP5), 4, b
#define EPHSHK6                          BANKMASK(UEP6), 4, b
#define EPHSHK7                          BANKMASK(UEP7), 4, b
#define EPHSHK8                          BANKMASK(UEP8), 4, b
#define EPHSHK9                          BANKMASK(UEP9), 4, b
#define EPINEN                           BANKMASK(UEP0), 1, b
#define EPINEN0                          BANKMASK(UEP0), 1, b
#define EPINEN1                          BANKMASK(UEP1), 1, b
#define EPINEN10                         BANKMASK(UEP10), 1, b
#define EPINEN11                         BANKMASK(UEP11), 1, b
#define EPINEN12                         BANKMASK(UEP12), 1, b
#define EPINEN13                         BANKMASK(UEP13), 1, b
#define EPINEN14                         BANKMASK(UEP14), 1, b
#define EPINEN15                         BANKMASK(UEP15), 1, b
#define EPINEN2                          BANKMASK(UEP2), 1, b
#define EPINEN3                          BANKMASK(UEP3), 1, b
#define EPINEN4                          BANKMASK(UEP4), 1, b
#define EPINEN5                          BANKMASK(UEP5), 1, b
#define EPINEN6                          BANKMASK(UEP6), 1, b
#define EPINEN7                          BANKMASK(UEP7), 1, b
#define EPINEN8                          BANKMASK(UEP8), 1, b
#define EPINEN9                          BANKMASK(UEP9), 1, b
#define EPOUTEN                          BANKMASK(UEP0), 2, b
#define EPOUTEN0                         BANKMASK(UEP0), 2, b
#define EPOUTEN1                         BANKMASK(UEP1), 2, b
#define EPOUTEN10                        BANKMASK(UEP10), 2, b
#define EPOUTEN11                        BANKMASK(UEP11), 2, b
#define EPOUTEN12                        BANKMASK(UEP12), 2, b
#define EPOUTEN13                        BANKMASK(UEP13), 2, b
#define EPOUTEN14                        BANKMASK(UEP14), 2, b
#define EPOUTEN15                        BANKMASK(UEP15), 2, b
#define EPOUTEN2                         BANKMASK(UEP2), 2, b
#define EPOUTEN3                         BANKMASK(UEP3), 2, b
#define EPOUTEN4                         BANKMASK(UEP4), 2, b
#define EPOUTEN5                         BANKMASK(UEP5), 2, b
#define EPOUTEN6                         BANKMASK(UEP6), 2, b
#define EPOUTEN7                         BANKMASK(UEP7), 2, b
#define EPOUTEN8                         BANKMASK(UEP8), 2, b
#define EPOUTEN9                         BANKMASK(UEP9), 2, b
#define EPSTALL                          BANKMASK(UEP0), 0, b
#define EPSTALL0                         BANKMASK(UEP0), 0, b
#define EPSTALL1                         BANKMASK(UEP1), 0, b
#define EPSTALL10                        BANKMASK(UEP10), 0, b
#define EPSTALL11                        BANKMASK(UEP11), 0, b
#define EPSTALL12                        BANKMASK(UEP12), 0, b
#define EPSTALL13                        BANKMASK(UEP13), 0, b
#define EPSTALL14                        BANKMASK(UEP14), 0, b
#define EPSTALL15                        BANKMASK(UEP15), 0, b
#define EPSTALL2                         BANKMASK(UEP2), 0, b
#define EPSTALL3                         BANKMASK(UEP3), 0, b
#define EPSTALL4                         BANKMASK(UEP4), 0, b
#define EPSTALL5                         BANKMASK(UEP5), 0, b
#define EPSTALL6                         BANKMASK(UEP6), 0, b
#define EPSTALL7                         BANKMASK(UEP7), 0, b
#define EPSTALL8                         BANKMASK(UEP8), 0, b
#define EPSTALL9                         BANKMASK(UEP9), 0, b
#define EVPOL0                           BANKMASK(CM1CON), 3, a
#define EVPOL01                          BANKMASK(CM1CON), 3, a
#define EVPOL02                          BANKMASK(CM2CON), 3, a
#define EVPOL1                           BANKMASK(CM1CON), 4, a
#define EVPOL11                          BANKMASK(CM1CON), 4, a
#define EVPOL12                          BANKMASK(CM2CON), 4, a
#define FERR                             BANKMASK(RCSTA1), 2, a
#define FERR1                            BANKMASK(RCSTA1), 2, a
#define FERR2                            BANKMASK(RCSTA2), 2, a
#define FREE                             BANKMASK(EECON1), 4, a
#define FRM0                             BANKMASK(UFRML), 0, a
#define FRM1                             BANKMASK(UFRML), 1, a
#define FRM10                            BANKMASK(UFRMH), 2, a
#define FRM2                             BANKMASK(UFRML), 2, a
#define FRM3                             BANKMASK(UFRML), 3, a
#define FRM4                             BANKMASK(UFRML), 4, a
#define FRM5                             BANKMASK(UFRML), 5, a
#define FRM6                             BANKMASK(UFRML), 6, a
#define FRM7                             BANKMASK(UFRML), 7, a
#define FRM8                             BANKMASK(UFRMH), 0, a
#define FRM9                             BANKMASK(UFRMH), 1, a
#define FSEN                             BANKMASK(UCFG), 2, b
#define GCEN                             BANKMASK(SSP1CON2), 7, a
#define GCEN1                            BANKMASK(SSP1CON2), 7, a
#define GCEN2                            BANKMASK(SSP2CON2), 7, a
#define GIE                              BANKMASK(INTCON), 7, a
#define GIEH                             BANKMASK(INTCON), 7, a
#define GIEL                             BANKMASK(INTCON), 6, a
#define GIE_GIEH                         BANKMASK(INTCON), 7, a
#define GO                               BANKMASK(ADCON0), 1, a
#define GODONE                           BANKMASK(ADCON0), 1, a
#define GO_DONE                          BANKMASK(ADCON0), 1, a
#define GO_NOT_DONE                      BANKMASK(ADCON0), 1, a
#define GO_nDONE                         BANKMASK(ADCON0), 1, a
#define HALFSEC                          BANKMASK(RTCCFG), 3, b
#define HLVDEN                           BANKMASK(HLVDCON), 4, a
#define HLVDIN                           BANKMASK(PORTA), 5, a
#define HLVDL0                           BANKMASK(HLVDCON), 0, a
#define HLVDL1                           BANKMASK(HLVDCON), 1, a
#define HLVDL2                           BANKMASK(HLVDCON), 2, a
#define HLVDL3                           BANKMASK(HLVDCON), 3, a
#define I2C_DAT                          BANKMASK(SSP1STAT), 5, a
#define I2C_DAT1                         BANKMASK(SSP1STAT), 5, a
#define I2C_DAT2                         BANKMASK(SSP2STAT), 5, a
#define I2C_READ                         BANKMASK(SSP1STAT), 2, a
#define I2C_READ1                        BANKMASK(SSP1STAT), 2, a
#define I2C_READ2                        BANKMASK(SSP2STAT), 2, a
#define I2C_START                        BANKMASK(SSP1STAT), 3, a
#define I2C_START1                       BANKMASK(SSP1STAT), 3, a
#define I2C_START2                       BANKMASK(SSP2STAT), 3, a
#define I2C_STOP                         BANKMASK(SSP1STAT), 4, a
#define I2C_STOP1                        BANKMASK(SSP1STAT), 4, a
#define I2C_STOP2                        BANKMASK(SSP2STAT), 4, a
#define IDISSEN                          BANKMASK(CTMUCONH), 1, a
#define IDLEIE                           BANKMASK(UIE), 4, b
#define IDLEIF                           BANKMASK(UIR), 4, a
#define IDLEN                            BANKMASK(OSCCON), 7, a
#define INT0                             BANKMASK(PORTB), 0, a
#define INT0E                            BANKMASK(INTCON), 4, a
#define INT0F                            BANKMASK(INTCON), 1, a
#define INT0IE                           BANKMASK(INTCON), 4, a
#define INT0IF                           BANKMASK(INTCON), 1, a
#define INT1E                            BANKMASK(INTCON3), 3, a
#define INT1F                            BANKMASK(INTCON3), 0, a
#define INT1IE                           BANKMASK(INTCON3), 3, a
#define INT1IF                           BANKMASK(INTCON3), 0, a
#define INT1IP                           BANKMASK(INTCON3), 6, a
#define INT1P                            BANKMASK(INTCON3), 6, a
#define INT2E                            BANKMASK(INTCON3), 4, a
#define INT2F                            BANKMASK(INTCON3), 1, a
#define INT2IE                           BANKMASK(INTCON3), 4, a
#define INT2IF                           BANKMASK(INTCON3), 1, a
#define INT2IP                           BANKMASK(INTCON3), 7, a
#define INT2P                            BANKMASK(INTCON3), 7, a
#define INT3E                            BANKMASK(INTCON3), 5, a
#define INT3F                            BANKMASK(INTCON3), 2, a
#define INT3IE                           BANKMASK(INTCON3), 5, a
#define INT3IF                           BANKMASK(INTCON3), 2, a
#define INT3IP                           BANKMASK(INTCON2), 1, a
#define INT3P                            BANKMASK(INTCON2), 1, a
#define INTEDG0                          BANKMASK(INTCON2), 6, a
#define INTEDG1                          BANKMASK(INTCON2), 5, a
#define INTEDG2                          BANKMASK(INTCON2), 4, a
#define INTEDG3                          BANKMASK(INTCON2), 3, a
#define INTLVL0                          BANKMASK(DMACON2), 0, a
#define INTLVL1                          BANKMASK(DMACON2), 1, a
#define INTLVL2                          BANKMASK(DMACON2), 2, a
#define INTLVL3                          BANKMASK(DMACON2), 3, a
#define INTSRC                           BANKMASK(OSCTUNE), 7, a
#define IOLOCK                           BANKMASK(PPSCON), 0, b
#define IPEN                             BANKMASK(RCON), 7, a
#define IRCF0                            BANKMASK(OSCCON), 4, a
#define IRCF1                            BANKMASK(OSCCON), 5, a
#define IRCF2                            BANKMASK(OSCCON), 6, a
#define IRNG0                            BANKMASK(CTMUICON), 0, a
#define IRNG1                            BANKMASK(CTMUICON), 1, a
#define IRVST                            BANKMASK(HLVDCON), 5, a
#define ITRIM0                           BANKMASK(CTMUICON), 2, a
#define ITRIM1                           BANKMASK(CTMUICON), 3, a
#define ITRIM2                           BANKMASK(CTMUICON), 4, a
#define ITRIM3                           BANKMASK(CTMUICON), 5, a
#define ITRIM4                           BANKMASK(CTMUICON), 6, a
#define ITRIM5                           BANKMASK(CTMUICON), 7, a
#define KBI0                             BANKMASK(PORTB), 4, a
#define KBI1                             BANKMASK(PORTB), 5, a
#define KBI2                             BANKMASK(PORTB), 6, a
#define KBI3                             BANKMASK(PORTB), 7, a
#define LA0                              BANKMASK(LATA), 0, a
#define LA1                              BANKMASK(LATA), 1, a
#define LA2                              BANKMASK(LATA), 2, a
#define LA3                              BANKMASK(LATA), 3, a
#define LA5                              BANKMASK(LATA), 5, a
#define LA6                              BANKMASK(LATA), 6, a
#define LA7                              BANKMASK(LATA), 7, a
#define LATA0                            BANKMASK(LATA), 0, a
#define LATA1                            BANKMASK(LATA), 1, a
#define LATA2                            BANKMASK(LATA), 2, a
#define LATA3                            BANKMASK(LATA), 3, a
#define LATA5                            BANKMASK(LATA), 5, a
#define LATA6                            BANKMASK(LATA), 6, a
#define LATA7                            BANKMASK(LATA), 7, a
#define LATB0                            BANKMASK(LATB), 0, a
#define LATB1                            BANKMASK(LATB), 1, a
#define LATB2                            BANKMASK(LATB), 2, a
#define LATB3                            BANKMASK(LATB), 3, a
#define LATB4                            BANKMASK(LATB), 4, a
#define LATB5                            BANKMASK(LATB), 5, a
#define LATB6                            BANKMASK(LATB), 6, a
#define LATB7                            BANKMASK(LATB), 7, a
#define LATC0                            BANKMASK(LATC), 0, a
#define LATC1                            BANKMASK(LATC), 1, a
#define LATC2                            BANKMASK(LATC), 2, a
#define LATC4                            BANKMASK(LATC), 4, a
#define LATC5                            BANKMASK(LATC), 5, a
#define LATC6                            BANKMASK(LATC), 6, a
#define LATC7                            BANKMASK(LATC), 7, a
#define LB0                              BANKMASK(LATB), 0, a
#define LB1                              BANKMASK(LATB), 1, a
#define LB2                              BANKMASK(LATB), 2, a
#define LB3                              BANKMASK(LATB), 3, a
#define LB4                              BANKMASK(LATB), 4, a
#define LB5                              BANKMASK(LATB), 5, a
#define LB6                              BANKMASK(LATB), 6, a
#define LB7                              BANKMASK(LATB), 7, a
#define LC0                              BANKMASK(LATC), 0, a
#define LC1                              BANKMASK(LATC), 1, a
#define LC2                              BANKMASK(LATC), 2, a
#define LC4                              BANKMASK(LATC), 4, a
#define LC5                              BANKMASK(LATC), 5, a
#define LC6                              BANKMASK(LATC), 6, a
#define LC7                              BANKMASK(LATC), 7, a
#define LVDIE                            BANKMASK(PIE2), 2, a
#define LVDIF                            BANKMASK(PIR2), 2, a
#define LVDIN                            BANKMASK(PORTA), 5, a
#define LVDIP                            BANKMASK(IPR2), 2, a
#define LVDSTAT                          BANKMASK(WDTCON), 6, a
#define MSK0                             BANKMASK(SSP1ADD), 0, a
#define MSK01                            BANKMASK(SSP1ADD), 0, a
#define MSK02                            BANKMASK(SSP2ADD), 0, a
#define MSK1                             BANKMASK(SSP1ADD), 1, a
#define MSK11                            BANKMASK(SSP1ADD), 1, a
#define MSK12                            BANKMASK(SSP2ADD), 1, a
#define MSK2                             BANKMASK(SSP1ADD), 2, a
#define MSK21                            BANKMASK(SSP1ADD), 2, a
#define MSK22                            BANKMASK(SSP2ADD), 2, a
#define MSK3                             BANKMASK(SSP1ADD), 3, a
#define MSK31                            BANKMASK(SSP1ADD), 3, a
#define MSK32                            BANKMASK(SSP2ADD), 3, a
#define MSK4                             BANKMASK(SSP1ADD), 4, a
#define MSK41                            BANKMASK(SSP1ADD), 4, a
#define MSK42                            BANKMASK(SSP2ADD), 4, a
#define MSK5                             BANKMASK(SSP1ADD), 5, a
#define MSK51                            BANKMASK(SSP1ADD), 5, a
#define MSK52                            BANKMASK(SSP2ADD), 5, a
#define MSK6                             BANKMASK(SSP1ADD), 6, a
#define MSK61                            BANKMASK(SSP1ADD), 6, a
#define MSK62                            BANKMASK(SSP2ADD), 6, a
#define MSK7                             BANKMASK(SSP1ADD), 7, a
#define MSK71                            BANKMASK(SSP1ADD), 7, a
#define MSK72                            BANKMASK(SSP2ADD), 7, a
#define NEGATIVE                         BANKMASK(STATUS), 4, a
#define NOT_A                            BANKMASK(SSP1STAT), 5, a
#define NOT_A1                           BANKMASK(SSP1STAT), 5, a
#define NOT_A2                           BANKMASK(SSP2STAT), 5, a
#define NOT_ADDRESS                      BANKMASK(SSP1STAT), 5, a
#define NOT_ADDRESS1                     BANKMASK(SSP1STAT), 5, a
#define NOT_ADDRESS2                     BANKMASK(SSP2STAT), 5, a
#define NOT_BOR                          BANKMASK(RCON), 0, a
#define NOT_CM                           BANKMASK(RCON), 5, a
#define NOT_DONE                         BANKMASK(ADCON0), 1, a
#define NOT_PD                           BANKMASK(RCON), 2, a
#define NOT_POR                          BANKMASK(RCON), 1, a
#define NOT_RBPU                         BANKMASK(INTCON2), 7, a
#define NOT_RC8                          BANKMASK(RCSTA1), 6, a
#define NOT_RI                           BANKMASK(RCON), 4, a
#define NOT_SS1                          BANKMASK(PORTA), 5, a
#define NOT_TO                           BANKMASK(RCON), 3, a
#define NOT_TX8                          BANKMASK(TXSTA1), 6, a
#define NOT_UOE                          BANKMASK(PORTC), 1, a
#define NOT_W                            BANKMASK(SSP1STAT), 2, a
#define NOT_W1                           BANKMASK(SSP1STAT), 2, a
#define NOT_W2                           BANKMASK(SSP2STAT), 2, a
#define NOT_WRITE                        BANKMASK(SSP1STAT), 2, a
#define NOT_WRITE1                       BANKMASK(SSP1STAT), 2, a
#define NOT_WRITE2                       BANKMASK(SSP2STAT), 2, a
#define OERR                             BANKMASK(RCSTA1), 1, a
#define OERR1                            BANKMASK(RCSTA1), 1, a
#define OERR2                            BANKMASK(RCSTA2), 1, a
#define OSC1                             BANKMASK(PORTA), 7, a
#define OSC2                             BANKMASK(PORTA), 6, a
#define OSCFIE                           BANKMASK(PIE2), 7, a
#define OSCFIF                           BANKMASK(PIR2), 7, a
#define OSCFIP                           BANKMASK(IPR2), 7, a
#define OSTS                             BANKMASK(OSCCON), 3, a
#define OV                               BANKMASK(STATUS), 3, a
#define OVERFLOW                         BANKMASK(STATUS), 3, a
#define P1                               BANKMASK(SSP1STAT), 4, a
#define P1DC0                            BANKMASK(ECCP1DEL), 0, a
#define P1DC1                            BANKMASK(ECCP1DEL), 1, a
#define P1DC2                            BANKMASK(ECCP1DEL), 2, a
#define P1DC3                            BANKMASK(ECCP1DEL), 3, a
#define P1DC4                            BANKMASK(ECCP1DEL), 4, a
#define P1DC5                            BANKMASK(ECCP1DEL), 5, a
#define P1DC6                            BANKMASK(ECCP1DEL), 6, a
#define P1M0                             BANKMASK(CCP1CON), 6, a
#define P1M1                             BANKMASK(CCP1CON), 7, a
#define P1RSEN                           BANKMASK(ECCP1DEL), 7, a
#define P2                               BANKMASK(SSP2STAT), 4, a
#define P2DC0                            BANKMASK(ECCP2DEL), 0, a
#define P2DC02                           BANKMASK(PSTR2CON), 0, a
#define P2DC0CON                         BANKMASK(PSTR2CON), 0, a
#define P2DC1                            BANKMASK(ECCP2DEL), 1, a
#define P2DC12                           BANKMASK(PSTR2CON), 1, a
#define P2DC1CON                         BANKMASK(PSTR2CON), 1, a
#define P2DC2                            BANKMASK(ECCP2DEL), 2, a
#define P2DC22                           BANKMASK(PSTR2CON), 2, a
#define P2DC2CON                         BANKMASK(PSTR2CON), 2, a
#define P2DC3                            BANKMASK(ECCP2DEL), 3, a
#define P2DC32                           BANKMASK(PSTR2CON), 3, a
#define P2DC3CON                         BANKMASK(PSTR2CON), 3, a
#define P2DC4                            BANKMASK(ECCP2DEL), 4, a
#define P2DC42                           BANKMASK(PSTR2CON), 4, a
#define P2DC4CON                         BANKMASK(PSTR2CON), 4, a
#define P2DC5                            BANKMASK(ECCP2DEL), 5, a
#define P2DC52                           BANKMASK(PSTR2CON), 5, a
#define P2DC5CON                         BANKMASK(PSTR2CON), 5, a
#define P2DC6                            BANKMASK(ECCP2DEL), 6, a
#define P2DC62                           BANKMASK(PSTR2CON), 6, a
#define P2DC6CON                         BANKMASK(PSTR2CON), 6, a
#define P2M0                             BANKMASK(CCP2CON), 6, a
#define P2M1                             BANKMASK(CCP2CON), 7, a
#define P2RSEN                           BANKMASK(ECCP2DEL), 7, a
#define PA1                              BANKMASK(PORTC), 2, a
#define PA2                              BANKMASK(PORTC), 1, a
#define PCFG0                            BANKMASK(ANCON0), 0, b
#define PCFG1                            BANKMASK(ANCON0), 1, b
#define PCFG10                           BANKMASK(ANCON1), 2, b
#define PCFG11                           BANKMASK(ANCON1), 3, b
#define PCFG12                           BANKMASK(ANCON1), 4, b
#define PCFG14                           BANKMASK(ANCON1), 6, b
#define PCFG15                           BANKMASK(ANCON1), 7, b
#define PCFG2                            BANKMASK(ANCON0), 2, b
#define PCFG3                            BANKMASK(ANCON0), 3, b
#define PCFG4                            BANKMASK(ANCON0), 4, b
#define PCFG8                            BANKMASK(ANCON1), 0, b
#define PCFG9                            BANKMASK(ANCON1), 1, b
#define PD                               BANKMASK(RCON), 2, a
#define PEIE                             BANKMASK(INTCON), 6, a
#define PEIE_GIEL                        BANKMASK(INTCON), 6, a
#define PEN                              BANKMASK(SSP1CON2), 2, a
#define PEN1                             BANKMASK(SSP1CON2), 2, a
#define PEN2                             BANKMASK(SSP2CON2), 2, a
#define PGC                              BANKMASK(PORTB), 6, a
#define PGD                              BANKMASK(PORTB), 7, a
#define PIDEE                            BANKMASK(UEIE), 0, b
#define PIDEF                            BANKMASK(UEIR), 0, a
#define PKTDIS                           BANKMASK(UCON), 4, a
#define PLLEN                            BANKMASK(OSCTUNE), 6, a
#define PMPTTL                           BANKMASK(PADCFG1), 0, b
#define POR                              BANKMASK(RCON), 1, a
#define PPB0                             BANKMASK(UCFG), 0, b
#define PPB1                             BANKMASK(UCFG), 1, b
#define PPBI                             BANKMASK(USTAT), 1, a
#define PPBRST                           BANKMASK(UCON), 6, a
#define PSA                              BANKMASK(T0CON), 3, a
#define PSS1AC0                          BANKMASK(ECCP1AS), 2, a
#define PSS1AC1                          BANKMASK(ECCP1AS), 3, a
#define PSS1BD0                          BANKMASK(ECCP1AS), 0, a
#define PSS1BD1                          BANKMASK(ECCP1AS), 1, a
#define PSS2AC0                          BANKMASK(ECCP2AS), 2, a
#define PSS2AC1                          BANKMASK(ECCP2AS), 3, a
#define PSS2BD0                          BANKMASK(ECCP2AS), 0, a
#define PSS2BD1                          BANKMASK(ECCP2AS), 1, a
#define R1                               BANKMASK(SSP1STAT), 2, a
#define RA0                              BANKMASK(PORTA), 0, a
#define RA1                              BANKMASK(PORTA), 1, a
#define RA2                              BANKMASK(PORTA), 2, a
#define RA3                              BANKMASK(PORTA), 3, a
#define RA5                              BANKMASK(PORTA), 5, a
#define RA6                              BANKMASK(PORTA), 6, a
#define RA7                              BANKMASK(PORTA), 7, a
#define RB0                              BANKMASK(PORTB), 0, a
#define RB1                              BANKMASK(PORTB), 1, a
#define RB2                              BANKMASK(PORTB), 2, a
#define RB3                              BANKMASK(PORTB), 3, a
#define RB4                              BANKMASK(PORTB), 4, a
#define RB5                              BANKMASK(PORTB), 5, a
#define RB6                              BANKMASK(PORTB), 6, a
#define RB7                              BANKMASK(PORTB), 7, a
#define RBIE                             BANKMASK(INTCON), 3, a
#define RBIF                             BANKMASK(INTCON), 0, a
#define RBIP                             BANKMASK(INTCON2), 0, a
#define RBPU                             BANKMASK(INTCON2), 7, a
#define RC0                              BANKMASK(PORTC), 0, a
#define RC1                              BANKMASK(PORTC), 1, a
#define RC1IE                            BANKMASK(PIE1), 5, a
#define RC1IF                            BANKMASK(PIR1), 5, a
#define RC1IP                            BANKMASK(IPR1), 5, a
#define RC2                              BANKMASK(PORTC), 2, a
#define RC2IE                            BANKMASK(PIE3), 5, a
#define RC2IF                            BANKMASK(PIR3), 5, a
#define RC2IP                            BANKMASK(IPR3), 5, a
#define RC4                              BANKMASK(PORTC), 4, a
#define RC5                              BANKMASK(PORTC), 5, a
#define RC6                              BANKMASK(PORTC), 6, a
#define RC7                              BANKMASK(PORTC), 7, a
#define RC8_9                            BANKMASK(RCSTA1), 6, a
#define RC8_92                           BANKMASK(RCSTA2), 6, a
#define RC9                              BANKMASK(RCSTA1), 6, a
#define RC92                             BANKMASK(RCSTA2), 6, a
#define RCD8                             BANKMASK(RCSTA1), 0, a
#define RCD82                            BANKMASK(RCSTA2), 0, a
#define RCEN                             BANKMASK(SSP1CON2), 3, a
#define RCEN1                            BANKMASK(SSP1CON2), 3, a
#define RCEN2                            BANKMASK(SSP2CON2), 3, a
#define RCIDL                            BANKMASK(BAUDCON1), 6, a
#define RCIDL1                           BANKMASK(BAUDCON1), 6, a
#define RCIDL2                           BANKMASK(BAUDCON2), 6, a
#define RCIE                             BANKMASK(PIE1), 5, a
#define RCIF                             BANKMASK(PIR1), 5, a
#define RCIP                             BANKMASK(IPR1), 5, a
#define RCMT                             BANKMASK(BAUDCON1), 6, a
#define RCMT1                            BANKMASK(BAUDCON1), 6, a
#define RCMT2                            BANKMASK(BAUDCON2), 6, a
#define RCV                              BANKMASK(PORTA), 5, a
#define RD16                             BANKMASK(T1CON), 1, a
#define RD161                            BANKMASK(T1CON), 1, a
#define RD163                            BANKMASK(T3CON), 7, a
#define READ_WRITE                       BANKMASK(SSP1STAT), 2, a
#define READ_WRITE1                      BANKMASK(SSP1STAT), 2, a
#define READ_WRITE2                      BANKMASK(SSP2STAT), 2, a
#define REFO                             BANKMASK(PORTB), 2, a
#define REGSLP                           BANKMASK(WDTCON), 7, a
#define RELEASE                          BANKMASK(DSCONL), 0, b
#define RESUME                           BANKMASK(UCON), 2, a
#define RI                               BANKMASK(RCON), 4, a
#define RJPU                             BANKMASK(PORTA), 7, a
#define RODIV0                           BANKMASK(REFOCON), 0, b
#define RODIV1                           BANKMASK(REFOCON), 1, b
#define RODIV2                           BANKMASK(REFOCON), 2, b
#define RODIV3                           BANKMASK(REFOCON), 3, b
#define ROON                             BANKMASK(REFOCON), 7, b
#define ROSEL                            BANKMASK(REFOCON), 4, b
#define ROSSLP                           BANKMASK(REFOCON), 5, b
#define RP0                              BANKMASK(PORTA), 0, a
#define RP1                              BANKMASK(PORTA), 1, a
#define RP10                             BANKMASK(PORTB), 7, a
#define RP11                             BANKMASK(PORTC), 0, a
#define RP12                             BANKMASK(PORTC), 1, a
#define RP13                             BANKMASK(PORTC), 2, a
#define RP17                             BANKMASK(PORTC), 6, a
#define RP18                             BANKMASK(PORTC), 7, a
#define RP2                              BANKMASK(PORTA), 5, a
#define RP3                              BANKMASK(PORTB), 0, a
#define RP4                              BANKMASK(PORTB), 1, a
#define RP5                              BANKMASK(PORTB), 2, a
#define RP6                              BANKMASK(PORTB), 3, a
#define RP7                              BANKMASK(PORTB), 4, a
#define RP8                              BANKMASK(PORTB), 5, a
#define RP9                              BANKMASK(PORTB), 6, a
#define RSEN                             BANKMASK(SSP1CON2), 1, a
#define RSEN1                            BANKMASK(SSP1CON2), 1, a
#define RSEN2                            BANKMASK(SSP2CON2), 1, a
#define RTCC                             BANKMASK(PORTB), 1, a
#define RTCCIE                           BANKMASK(PIE3), 0, a
#define RTCCIF                           BANKMASK(PIR3), 0, a
#define RTCCIP                           BANKMASK(IPR3), 0, a
#define RTCEN                            BANKMASK(RTCCFG), 7, b
#define RTCOE                            BANKMASK(RTCCFG), 2, b
#define RTCPTR0                          BANKMASK(RTCCFG), 0, b
#define RTCPTR1                          BANKMASK(RTCCFG), 1, b
#define RTCSYNC                          BANKMASK(RTCCFG), 4, b
#define RTCWDIS                          BANKMASK(DSCONH), 0, b
#define RTCWREN                          BANKMASK(RTCCFG), 5, b
#define RTSECSEL0                        BANKMASK(PADCFG1), 1, b
#define RTSECSEL1                        BANKMASK(PADCFG1), 2, b
#define RW                               BANKMASK(SSP1STAT), 2, a
#define RW1                              BANKMASK(SSP1STAT), 2, a
#define RW2                              BANKMASK(SSP2STAT), 2, a
#define RX1                              BANKMASK(PORTC), 7, a
#define RX9                              BANKMASK(RCSTA1), 6, a
#define RX91                             BANKMASK(RCSTA1), 6, a
#define RX92                             BANKMASK(RCSTA2), 6, a
#define RX9D                             BANKMASK(RCSTA1), 0, a
#define RX9D1                            BANKMASK(RCSTA1), 0, a
#define RX9D2                            BANKMASK(RCSTA2), 0, a
#define RXB0IE                           BANKMASK(PIE3), 0, a
#define RXB1IE                           BANKMASK(PIE3), 1, a
#define RXBNIE                           BANKMASK(PIE3), 1, a
#define RXBNIF                           BANKMASK(PIR3), 1, a
#define RXBNIP                           BANKMASK(IPR3), 1, a
#define RXCKP                            BANKMASK(BAUDCON1), 5, a
#define RXDTP                            BANKMASK(BAUDCON1), 5, a
#define RXDTP1                           BANKMASK(BAUDCON1), 5, a
#define RXDTP2                           BANKMASK(BAUDCON2), 5, a
#define RXINC                            BANKMASK(DMACON1), 4, a
#define R_NOT_W1                         BANKMASK(SSP1STAT), 2, a
#define R_NOT_W2                         BANKMASK(SSP2STAT), 2, a
#define R_W                              BANKMASK(SSP1STAT), 2, a
#define R_W1                             BANKMASK(SSP1STAT), 5, a
#define R_W2                             BANKMASK(SSP2STAT), 2, a
#define R_nW                             BANKMASK(SSP1STAT), 2, a
#define R_nW1                            BANKMASK(SSP1STAT), 2, a
#define R_nW2                            BANKMASK(SSP2STAT), 2, a
#define S1                               BANKMASK(SSP1STAT), 3, a
#define S2                               BANKMASK(SSP2STAT), 3, a
#define SCK1                             BANKMASK(PORTB), 4, a
#define SCKP                             BANKMASK(BAUDCON1), 4, a
#define SCKP1                            BANKMASK(BAUDCON1), 4, a
#define SCKP2                            BANKMASK(BAUDCON2), 4, a
#define SCL1                             BANKMASK(PORTB), 4, a
#define SCS0                             BANKMASK(OSCCON), 0, a
#define SCS1                             BANKMASK(OSCCON), 1, a
#define SDA1                             BANKMASK(PORTB), 5, a
#define SDI1                             BANKMASK(PORTB), 5, a
#define SDO1                             BANKMASK(PORTC), 7, a
#define SE0                              BANKMASK(UCON), 5, a
#define SEN                              BANKMASK(SSP1CON2), 0, a
#define SEN1                             BANKMASK(SSP1CON2), 0, a
#define SEN2                             BANKMASK(SSP2CON2), 0, a
#define SENDB                            BANKMASK(TXSTA1), 3, a
#define SENDB1                           BANKMASK(TXSTA1), 3, a
#define SENDB2                           BANKMASK(TXSTA2), 3, a
#define SMP                              BANKMASK(SSP1STAT), 7, a
#define SMP1                             BANKMASK(SSP1STAT), 7, a
#define SMP2                             BANKMASK(SSP2STAT), 7, a
#define SOFIE                            BANKMASK(UIE), 6, b
#define SOFIF                            BANKMASK(UIR), 6, a
#define SOSCEN                           BANKMASK(T1CON), 3, a
#define SOSCEN3                          BANKMASK(T3CON), 3, a
#define SP0                              BANKMASK(STKPTR), 0, a
#define SP1                              BANKMASK(STKPTR), 1, a
#define SP2                              BANKMASK(STKPTR), 2, a
#define SP3                              BANKMASK(STKPTR), 3, a
#define SP4                              BANKMASK(STKPTR), 4, a
#define SPEN                             BANKMASK(RCSTA1), 7, a
#define SPEN1                            BANKMASK(RCSTA1), 7, a
#define SPEN2                            BANKMASK(RCSTA2), 7, a
#define SPI1OD                           BANKMASK(ODCON3), 0, b
#define SPI2OD                           BANKMASK(ODCON3), 1, b
#define SREN                             BANKMASK(RCSTA1), 5, a
#define SREN1                            BANKMASK(RCSTA1), 5, a
#define SREN2                            BANKMASK(RCSTA2), 5, a
#define SRENA                            BANKMASK(RCSTA1), 5, a
#define SSCON0                           BANKMASK(DMACON1), 6, a
#define SSCON1                           BANKMASK(DMACON1), 7, a
#define SSP1IE                           BANKMASK(PIE1), 3, a
#define SSP1IF                           BANKMASK(PIR1), 3, a
#define SSP1IP                           BANKMASK(IPR1), 3, a
#define SSP2IE                           BANKMASK(PIE3), 7, a
#define SSP2IF                           BANKMASK(PIR3), 7, a
#define SSP2IP                           BANKMASK(IPR3), 7, a
#define SSPEN                            BANKMASK(SSP1CON1), 5, a
#define SSPEN1                           BANKMASK(SSP1CON1), 5, a
#define SSPEN2                           BANKMASK(SSP2CON1), 5, a
#define SSPIE                            BANKMASK(PIE1), 3, a
#define SSPIF                            BANKMASK(PIR1), 3, a
#define SSPIP                            BANKMASK(IPR1), 3, a
#define SSPM0                            BANKMASK(SSP1CON1), 0, a
#define SSPM01                           BANKMASK(SSP1CON1), 0, a
#define SSPM02                           BANKMASK(SSP2CON1), 0, a
#define SSPM1                            BANKMASK(SSP1CON1), 1, a
#define SSPM11                           BANKMASK(SSP1CON1), 1, a
#define SSPM12                           BANKMASK(SSP2CON1), 1, a
#define SSPM2                            BANKMASK(SSP1CON1), 2, a
#define SSPM21                           BANKMASK(SSP1CON1), 2, a
#define SSPM22                           BANKMASK(SSP2CON1), 2, a
#define SSPM3                            BANKMASK(SSP1CON1), 3, a
#define SSPM31                           BANKMASK(SSP1CON1), 3, a
#define SSPM32                           BANKMASK(SSP2CON1), 3, a
#define SSPOV                            BANKMASK(SSP1CON1), 6, a
#define SSPOV1                           BANKMASK(SSP1CON1), 6, a
#define SSPOV2                           BANKMASK(SSP2CON1), 6, a
#define STALLIE                          BANKMASK(UIE), 5, b
#define STALLIF                          BANKMASK(UIR), 5, a
#define START                            BANKMASK(SSP1STAT), 3, a
#define START1                           BANKMASK(SSP1STAT), 3, a
#define START2                           BANKMASK(SSP2STAT), 3, a
#define STKFUL                           BANKMASK(STKPTR), 7, a
#define STKOVF                           BANKMASK(STKPTR), 7, a
#define STKUNF                           BANKMASK(STKPTR), 6, a
#define STOP                             BANKMASK(SSP1STAT), 4, a
#define STOP1                            BANKMASK(SSP1STAT), 4, a
#define STOP2                            BANKMASK(SSP2STAT), 4, a
#define STRA                             BANKMASK(PSTR1CON), 0, a
#define STRA2                            BANKMASK(PSTR2CON), 0, a
#define STRB                             BANKMASK(PSTR1CON), 1, a
#define STRB2                            BANKMASK(PSTR2CON), 1, a
#define STRC                             BANKMASK(PSTR1CON), 2, a
#define STRC2                            BANKMASK(PSTR2CON), 2, a
#define STRD                             BANKMASK(PSTR1CON), 3, a
#define STRD2                            BANKMASK(PSTR2CON), 3, a
#define STRSYNC                          BANKMASK(PSTR1CON), 4, a
#define STRSYNC2                         BANKMASK(PSTR2CON), 4, a
#define SUSPND                           BANKMASK(UCON), 1, a
#define SWDTE                            BANKMASK(WDTCON), 0, a
#define SWDTEN                           BANKMASK(WDTCON), 0, a
#define SYNC                             BANKMASK(TXSTA1), 4, a
#define SYNC1                            BANKMASK(TXSTA1), 4, a
#define SYNC2                            BANKMASK(TXSTA2), 4, a
#define T08BIT                           BANKMASK(T0CON), 6, a
#define T0CS                             BANKMASK(T0CON), 5, a
#define T0IE                             BANKMASK(INTCON), 5, a
#define T0IF                             BANKMASK(INTCON), 2, a
#define T0IP                             BANKMASK(INTCON2), 2, a
#define T0PS0                            BANKMASK(T0CON), 0, a
#define T0PS1                            BANKMASK(T0CON), 1, a
#define T0PS2                            BANKMASK(T0CON), 2, a
#define T0SE                             BANKMASK(T0CON), 4, a
#define T1CK                             BANKMASK(PORTC), 0, a
#define T1CKPS0                          BANKMASK(T1CON), 4, a
#define T1CKPS01                         BANKMASK(T1CON), 4, a
#define T1CKPS1                          BANKMASK(T1CON), 5, a
#define T1CKPS11                         BANKMASK(T1CON), 5, a
#define T1DONE                           BANKMASK(T1GCON), 3, a
#define T1GGO                            BANKMASK(T1GCON), 3, a
#define T1GGO_T1DONE                     BANKMASK(T1GCON), 3, a
#define T1GPOL                           BANKMASK(T1GCON), 6, a
#define T1GSPM                           BANKMASK(T1GCON), 4, a
#define T1GSS0                           BANKMASK(T1GCON), 0, a
#define T1GSS1                           BANKMASK(T1GCON), 1, a
#define T1GTM                            BANKMASK(T1GCON), 5, a
#define T1GVAL                           BANKMASK(T1GCON), 2, a
#define T1OSCEN                          BANKMASK(T1CON), 3, a
#define T1OSCEN1                         BANKMASK(T1CON), 3, a
#define T1OSI                            BANKMASK(PORTC), 1, a
#define T1OSO                            BANKMASK(PORTC), 0, a
#define T1RD16                           BANKMASK(T1CON), 7, a
#define T1RUN                            BANKMASK(TCLKCON), 4, b
#define T1SYNC                           BANKMASK(T1CON), 2, a
#define T1SYNC1                          BANKMASK(T1CON), 2, a
#define T2CKPS0                          BANKMASK(T2CON), 0, a
#define T2CKPS1                          BANKMASK(T2CON), 1, a
#define T2OUTPS0                         BANKMASK(T2CON), 3, a
#define T2OUTPS1                         BANKMASK(T2CON), 4, a
#define T2OUTPS2                         BANKMASK(T2CON), 5, a
#define T2OUTPS3                         BANKMASK(T2CON), 6, a
#define T3CCP1                           BANKMASK(TCLKCON), 0, b
#define T3CCP2                           BANKMASK(TCLKCON), 1, b
#define T3CKPS0                          BANKMASK(T3CON), 4, a
#define T3CKPS1                          BANKMASK(T3CON), 5, a
#define T3DONE                           BANKMASK(T3GCON), 3, a
#define T3GGO                            BANKMASK(T3GCON), 3, a
#define T3GGO_T3DONE                     BANKMASK(T3GCON), 3, a
#define T3GPOL                           BANKMASK(T3GCON), 6, a
#define T3GSPM                           BANKMASK(T3GCON), 4, a
#define T3GSS0                           BANKMASK(T3GCON), 0, a
#define T3GSS1                           BANKMASK(T3GCON), 1, a
#define T3GTM                            BANKMASK(T3GCON), 5, a
#define T3GVAL                           BANKMASK(T3GCON), 2, a
#define T3OSCEN                          BANKMASK(T3CON), 3, a
#define T3RD16                           BANKMASK(T3CON), 7, a
#define T3SYNC                           BANKMASK(T3CON), 2, a
#define T4CKPS0                          BANKMASK(T4CON), 0, a
#define T4CKPS1                          BANKMASK(T4CON), 1, a
#define T4OUTPS0                         BANKMASK(T4CON), 3, a
#define T4OUTPS1                         BANKMASK(T4CON), 4, a
#define T4OUTPS2                         BANKMASK(T4CON), 5, a
#define T4OUTPS3                         BANKMASK(T4CON), 6, a
#define TGEN                             BANKMASK(CTMUCONH), 4, a
#define TMR0IE                           BANKMASK(INTCON), 5, a
#define TMR0IF                           BANKMASK(INTCON), 2, a
#define TMR0IP                           BANKMASK(INTCON2), 2, a
#define TMR0ON                           BANKMASK(T0CON), 7, a
#define TMR1CS0                          BANKMASK(T1CON), 6, a
#define TMR1CS01                         BANKMASK(T1CON), 6, a
#define TMR1CS1                          BANKMASK(T1CON), 7, a
#define TMR1CS11                         BANKMASK(T1CON), 7, a
#define TMR1GE                           BANKMASK(T1GCON), 7, a
#define TMR1IE                           BANKMASK(PIE1), 0, a
#define TMR1IF                           BANKMASK(PIR1), 0, a
#define TMR1IP                           BANKMASK(IPR1), 0, a
#define TMR1ON                           BANKMASK(T1CON), 0, a
#define TMR2IE                           BANKMASK(PIE1), 1, a
#define TMR2IF                           BANKMASK(PIR1), 1, a
#define TMR2IP                           BANKMASK(IPR1), 1, a
#define TMR2ON                           BANKMASK(T2CON), 2, a
#define TMR3CS0                          BANKMASK(T3CON), 6, a
#define TMR3CS1                          BANKMASK(T3CON), 7, a
#define TMR3GE                           BANKMASK(T3GCON), 7, a
#define TMR3GIE                          BANKMASK(PIE3), 1, a
#define TMR3GIF                          BANKMASK(PIR3), 1, a
#define TMR3GIP                          BANKMASK(IPR3), 1, a
#define TMR3IE                           BANKMASK(PIE2), 1, a
#define TMR3IF                           BANKMASK(PIR2), 1, a
#define TMR3IP                           BANKMASK(IPR2), 1, a
#define TMR3ON                           BANKMASK(T3CON), 0, a
#define TMR4IE                           BANKMASK(PIE3), 3, a
#define TMR4IF                           BANKMASK(PIR3), 3, a
#define TMR4IP                           BANKMASK(IPR3), 3, a
#define TMR4ON                           BANKMASK(T4CON), 2, a
#define TO                               BANKMASK(RCON), 3, a
#define TRISA0                           BANKMASK(TRISA), 0, a
#define TRISA1                           BANKMASK(TRISA), 1, a
#define TRISA2                           BANKMASK(TRISA), 2, a
#define TRISA3                           BANKMASK(TRISA), 3, a
#define TRISA5                           BANKMASK(TRISA), 5, a
#define TRISA6                           BANKMASK(TRISA), 6, a
#define TRISA7                           BANKMASK(TRISA), 7, a
#define TRISB0                           BANKMASK(TRISB), 0, a
#define TRISB1                           BANKMASK(TRISB), 1, a
#define TRISB2                           BANKMASK(TRISB), 2, a
#define TRISB3                           BANKMASK(TRISB), 3, a
#define TRISB4                           BANKMASK(TRISB), 4, a
#define TRISB5                           BANKMASK(TRISB), 5, a
#define TRISB6                           BANKMASK(TRISB), 6, a
#define TRISB7                           BANKMASK(TRISB), 7, a
#define TRISC0                           BANKMASK(TRISC), 0, a
#define TRISC1                           BANKMASK(TRISC), 1, a
#define TRISC2                           BANKMASK(TRISC), 2, a
#define TRISC4                           BANKMASK(TRISC), 4, a
#define TRISC5                           BANKMASK(TRISC), 5, a
#define TRISC6                           BANKMASK(TRISC), 6, a
#define TRISC7                           BANKMASK(TRISC), 7, a
#define TRMT                             BANKMASK(TXSTA1), 1, a
#define TRMT1                            BANKMASK(TXSTA1), 1, a
#define TRMT2                            BANKMASK(TXSTA2), 1, a
#define TRNIE                            BANKMASK(UIE), 3, b
#define TRNIF                            BANKMASK(UIR), 3, a
#define TUN0                             BANKMASK(OSCTUNE), 0, a
#define TUN1                             BANKMASK(OSCTUNE), 1, a
#define TUN2                             BANKMASK(OSCTUNE), 2, a
#define TUN3                             BANKMASK(OSCTUNE), 3, a
#define TUN4                             BANKMASK(OSCTUNE), 4, a
#define TUN5                             BANKMASK(OSCTUNE), 5, a
#define TX1                              BANKMASK(PORTC), 6, a
#define TX1IE                            BANKMASK(PIE1), 4, a
#define TX1IF                            BANKMASK(PIR1), 4, a
#define TX1IP                            BANKMASK(IPR1), 4, a
#define TX2IE                            BANKMASK(PIE3), 4, a
#define TX2IF                            BANKMASK(PIR3), 4, a
#define TX2IP                            BANKMASK(IPR3), 4, a
#define TX8_9                            BANKMASK(TXSTA1), 6, a
#define TX8_92                           BANKMASK(TXSTA2), 6, a
#define TX9                              BANKMASK(TXSTA1), 6, a
#define TX91                             BANKMASK(TXSTA1), 6, a
#define TX92                             BANKMASK(TXSTA2), 6, a
#define TX9D                             BANKMASK(TXSTA1), 0, a
#define TX9D1                            BANKMASK(TXSTA1), 0, a
#define TX9D2                            BANKMASK(TXSTA2), 0, a
#define TXB0IE                           BANKMASK(PIE3), 2, a
#define TXB1IE                           BANKMASK(PIE3), 3, a
#define TXB2IE                           BANKMASK(PIE3), 4, a
#define TXBNIE                           BANKMASK(PIE3), 4, a
#define TXBNIF                           BANKMASK(PIR3), 4, a
#define TXBNIP                           BANKMASK(IPR3), 4, a
#define TXCKP                            BANKMASK(BAUDCON1), 4, a
#define TXCKP1                           BANKMASK(BAUDCON1), 4, a
#define TXCKP2                           BANKMASK(BAUDCON2), 4, a
#define TXD8                             BANKMASK(TXSTA1), 0, a
#define TXD82                            BANKMASK(TXSTA2), 0, a
#define TXEN                             BANKMASK(TXSTA1), 5, a
#define TXEN1                            BANKMASK(TXSTA1), 5, a
#define TXEN2                            BANKMASK(TXSTA2), 5, a
#define TXIE                             BANKMASK(PIE1), 4, a
#define TXIF                             BANKMASK(PIR1), 4, a
#define TXINC                            BANKMASK(DMACON1), 5, a
#define TXIP                             BANKMASK(IPR1), 4, a
#define U1OD                             BANKMASK(ODCON2), 0, b
#define U2OD                             BANKMASK(ODCON2), 1, b
#define UA                               BANKMASK(SSP1STAT), 1, a
#define UA1                              BANKMASK(SSP1STAT), 1, a
#define UA2                              BANKMASK(SSP2STAT), 1, a
#define UERRIE                           BANKMASK(UIE), 1, b
#define UERRIF                           BANKMASK(UIR), 1, a
#define ULPEN                            BANKMASK(WDTCON), 2, a
#define ULPLVL                           BANKMASK(WDTCON), 5, a
#define ULPSINK                          BANKMASK(WDTCON), 1, a
#define ULPWDIS                          BANKMASK(DSCONL), 2, b
#define ULPWU                            BANKMASK(PORTA), 0, a
#define ULPWUIN                          BANKMASK(PORTA), 0, a
#define UOEMON                           BANKMASK(UCFG), 6, b
#define UPP0                             BANKMASK(UCFG), 0, b
#define UPP1                             BANKMASK(UCFG), 1, b
#define UPUEN                            BANKMASK(UCFG), 4, b
#define URSTIE                           BANKMASK(UIE), 0, b
#define URSTIF                           BANKMASK(UIR), 0, a
#define USBEN                            BANKMASK(UCON), 3, a
#define USBIE                            BANKMASK(PIE2), 4, a
#define USBIF                            BANKMASK(PIR2), 4, a
#define USBIP                            BANKMASK(IPR2), 4, a
#define UTEYE                            BANKMASK(UCFG), 7, b
#define UTRDIS                           BANKMASK(UCFG), 3, b
#define VBG2EN                           BANKMASK(ANCON1), 6, b
#define VBGEN                            BANKMASK(ANCON1), 7, b
#define VCFG0                            BANKMASK(ADCON0), 6, a
#define VCFG01                           BANKMASK(ADCON1), 4, a
#define VCFG1                            BANKMASK(ADCON0), 7, a
#define VCFG11                           BANKMASK(ADCON1), 5, a
#define VDIRMAG                          BANKMASK(HLVDCON), 7, a
#define VM                               BANKMASK(PORTC), 4, a
#define VMO                              BANKMASK(PORTB), 2, a
#define VP                               BANKMASK(PORTC), 5, a
#define VPO                              BANKMASK(PORTB), 3, a
#define VREF_MINUS                       BANKMASK(PORTA), 2, a
#define VREF_PLUS                        BANKMASK(PORTA), 3, a
#define W4E                              BANKMASK(BAUDCON1), 1, a
#define WAIT0                            BANKMASK(PR2), 4, a
#define WAIT1                            BANKMASK(PR2), 5, a
#define WAITB0                           BANKMASK(RTCVALH), 6, a
#define WAITB1                           BANKMASK(RTCVALH), 7, a
#define WAITE0                           BANKMASK(RTCVALH), 0, a
#define WAITE1                           BANKMASK(RTCVALH), 1, a
#define WAITM0                           BANKMASK(RTCVALH), 2, a
#define WAITM1                           BANKMASK(RTCVALH), 3, a
#define WAITM2                           BANKMASK(RTCVALH), 4, a
#define WAITM3                           BANKMASK(RTCVALH), 5, a
#define WCOL                             BANKMASK(SSP1CON1), 7, a
#define WCOL1                            BANKMASK(SSP1CON1), 7, a
#define WCOL2                            BANKMASK(SSP2CON1), 7, a
#define WM0                              BANKMASK(PR2), 0, a
#define WM1                              BANKMASK(PR2), 1, a
#define WPROG                            BANKMASK(EECON1), 5, a
#define WR                               BANKMASK(EECON1), 1, a
#define WREN                             BANKMASK(EECON1), 2, a
#define WRERR                            BANKMASK(EECON1), 3, a
#define WUE                              BANKMASK(BAUDCON1), 1, a
#define WUE1                             BANKMASK(BAUDCON1), 1, a
#define WUE2                             BANKMASK(BAUDCON2), 1, a
#define ZERO                             BANKMASK(STATUS), 2, a
#define nA                               BANKMASK(SSP1STAT), 5, a
#define nA1                              BANKMASK(SSP1STAT), 5, a
#define nA2                              BANKMASK(SSP2STAT), 5, a
#define nADDRESS                         BANKMASK(SSP1STAT), 5, a
#define nADDRESS1                        BANKMASK(SSP1STAT), 5, a
#define nADDRESS2                        BANKMASK(SSP2STAT), 5, a
#define nBOR                             BANKMASK(RCON), 0, a
#define nCM                              BANKMASK(RCON), 5, a
#define nDONE                            BANKMASK(ADCON0), 1, a
#define nPD                              BANKMASK(RCON), 2, a
#define nPOR                             BANKMASK(RCON), 1, a
#define nRBPU                            BANKMASK(INTCON2), 7, a
#define nRC8                             BANKMASK(RCSTA1), 6, a
#define nRI                              BANKMASK(RCON), 4, a
#define nSS1                             BANKMASK(PORTA), 5, a
#define nTO                              BANKMASK(RCON), 3, a
#define nTX8                             BANKMASK(TXSTA1), 6, a
#define nUOE                             BANKMASK(PORTC), 1, a
#define nW                               BANKMASK(SSP1STAT), 2, a
#define nW1                              BANKMASK(SSP1STAT), 2, a
#define nW2                              BANKMASK(SSP2STAT), 2, a
#define nWRITE                           BANKMASK(SSP1STAT), 2, a
#define nWRITE1                          BANKMASK(SSP1STAT), 2, a
#define nWRITE2                          BANKMASK(SSP2STAT), 2, a

/*
 * Device Psects
 */

#ifdef _XC_INC_

// Memory Spaces
#define SPACE_CODE   0
#define SPACE_DATA   1
#define SPACE_EEPROM 3

#if _COMMON_SIZE_
psect udata_acs,class=COMRAM,space=SPACE_DATA,noexec,lowdata
#endif
psect udata_bank0,class=BANK0,space=SPACE_DATA,noexec,lowdata
psect udata_bank1,class=BANK1,space=SPACE_DATA,noexec,lowdata
psect udata_bank2,class=BANK2,space=SPACE_DATA,noexec,lowdata
psect udata_bank3,class=BANK3,space=SPACE_DATA,noexec,lowdata
psect udata_bank4,class=BANK4,space=SPACE_DATA,noexec,lowdata
psect udata_bank5,class=BANK5,space=SPACE_DATA,noexec,lowdata
psect udata_bank6,class=BANK6,space=SPACE_DATA,noexec,lowdata
psect udata_bank7,class=BANK7,space=SPACE_DATA,noexec,lowdata
psect udata_bank8,class=BANK8,space=SPACE_DATA,noexec,lowdata
psect udata_bank9,class=BANK9,space=SPACE_DATA,noexec,lowdata
psect udata_bank10,class=BANK10,space=SPACE_DATA,noexec,lowdata
psect udata_bank11,class=BANK11,space=SPACE_DATA,noexec,lowdata
psect udata_bank12,class=BANK12,space=SPACE_DATA,noexec,lowdata
psect udata_bank13,class=BANK13,space=SPACE_DATA,noexec,lowdata
psect udata_bank14,class=BANK14,space=SPACE_DATA,noexec,lowdata
psect udata,class=RAM,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,reloc=2
psect data,class=CONST,space=SPACE_CODE,reloc=2,noexec

#endif // _XC_INC_

#endif // _PIC18F24J50_INC_
