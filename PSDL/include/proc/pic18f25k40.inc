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

#ifndef _PIC18F25K40_INC_
#define _PIC18F25K40_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F25K40
 */

/*
 * Device Registers
 */

// Register: PPSLOCK
#define PPSLOCK PPSLOCK
PPSLOCK                                  equ 0EA0h
// bitfield definitions
PPSLOCK_PPSLOCKED_POSN                   equ 0000h
PPSLOCK_PPSLOCKED_POSITION               equ 0000h
PPSLOCK_PPSLOCKED_SIZE                   equ 0001h
PPSLOCK_PPSLOCKED_LENGTH                 equ 0001h
PPSLOCK_PPSLOCKED_MASK                   equ 0001h

// Register: INT0PPS
#define INT0PPS INT0PPS
INT0PPS                                  equ 0EA1h
// bitfield definitions
INT0PPS_PIN_POSN                         equ 0000h
INT0PPS_PIN_POSITION                     equ 0000h
INT0PPS_PIN_SIZE                         equ 0003h
INT0PPS_PIN_LENGTH                       equ 0003h
INT0PPS_PIN_MASK                         equ 0007h
INT0PPS_PORT_POSN                        equ 0003h
INT0PPS_PORT_POSITION                    equ 0003h
INT0PPS_PORT_SIZE                        equ 0001h
INT0PPS_PORT_LENGTH                      equ 0001h
INT0PPS_PORT_MASK                        equ 0008h
INT0PPS_INT0PPS_POSN                     equ 0000h
INT0PPS_INT0PPS_POSITION                 equ 0000h
INT0PPS_INT0PPS_SIZE                     equ 0004h
INT0PPS_INT0PPS_LENGTH                   equ 0004h
INT0PPS_INT0PPS_MASK                     equ 000Fh
INT0PPS_INT0PPS0_POSN                    equ 0000h
INT0PPS_INT0PPS0_POSITION                equ 0000h
INT0PPS_INT0PPS0_SIZE                    equ 0001h
INT0PPS_INT0PPS0_LENGTH                  equ 0001h
INT0PPS_INT0PPS0_MASK                    equ 0001h
INT0PPS_INT0PPS1_POSN                    equ 0001h
INT0PPS_INT0PPS1_POSITION                equ 0001h
INT0PPS_INT0PPS1_SIZE                    equ 0001h
INT0PPS_INT0PPS1_LENGTH                  equ 0001h
INT0PPS_INT0PPS1_MASK                    equ 0002h
INT0PPS_INT0PPS2_POSN                    equ 0002h
INT0PPS_INT0PPS2_POSITION                equ 0002h
INT0PPS_INT0PPS2_SIZE                    equ 0001h
INT0PPS_INT0PPS2_LENGTH                  equ 0001h
INT0PPS_INT0PPS2_MASK                    equ 0004h
INT0PPS_INT0PPS3_POSN                    equ 0003h
INT0PPS_INT0PPS3_POSITION                equ 0003h
INT0PPS_INT0PPS3_SIZE                    equ 0001h
INT0PPS_INT0PPS3_LENGTH                  equ 0001h
INT0PPS_INT0PPS3_MASK                    equ 0008h

// Register: INT1PPS
#define INT1PPS INT1PPS
INT1PPS                                  equ 0EA2h
// bitfield definitions
INT1PPS_PIN_POSN                         equ 0000h
INT1PPS_PIN_POSITION                     equ 0000h
INT1PPS_PIN_SIZE                         equ 0003h
INT1PPS_PIN_LENGTH                       equ 0003h
INT1PPS_PIN_MASK                         equ 0007h
INT1PPS_PORT_POSN                        equ 0003h
INT1PPS_PORT_POSITION                    equ 0003h
INT1PPS_PORT_SIZE                        equ 0001h
INT1PPS_PORT_LENGTH                      equ 0001h
INT1PPS_PORT_MASK                        equ 0008h
INT1PPS_INT1PPS_POSN                     equ 0000h
INT1PPS_INT1PPS_POSITION                 equ 0000h
INT1PPS_INT1PPS_SIZE                     equ 0004h
INT1PPS_INT1PPS_LENGTH                   equ 0004h
INT1PPS_INT1PPS_MASK                     equ 000Fh
INT1PPS_INT1PPS0_POSN                    equ 0000h
INT1PPS_INT1PPS0_POSITION                equ 0000h
INT1PPS_INT1PPS0_SIZE                    equ 0001h
INT1PPS_INT1PPS0_LENGTH                  equ 0001h
INT1PPS_INT1PPS0_MASK                    equ 0001h
INT1PPS_INT1PPS1_POSN                    equ 0001h
INT1PPS_INT1PPS1_POSITION                equ 0001h
INT1PPS_INT1PPS1_SIZE                    equ 0001h
INT1PPS_INT1PPS1_LENGTH                  equ 0001h
INT1PPS_INT1PPS1_MASK                    equ 0002h
INT1PPS_INT1PPS2_POSN                    equ 0002h
INT1PPS_INT1PPS2_POSITION                equ 0002h
INT1PPS_INT1PPS2_SIZE                    equ 0001h
INT1PPS_INT1PPS2_LENGTH                  equ 0001h
INT1PPS_INT1PPS2_MASK                    equ 0004h
INT1PPS_INT1PPS3_POSN                    equ 0003h
INT1PPS_INT1PPS3_POSITION                equ 0003h
INT1PPS_INT1PPS3_SIZE                    equ 0001h
INT1PPS_INT1PPS3_LENGTH                  equ 0001h
INT1PPS_INT1PPS3_MASK                    equ 0008h

// Register: INT2PPS
#define INT2PPS INT2PPS
INT2PPS                                  equ 0EA3h
// bitfield definitions
INT2PPS_PIN_POSN                         equ 0000h
INT2PPS_PIN_POSITION                     equ 0000h
INT2PPS_PIN_SIZE                         equ 0003h
INT2PPS_PIN_LENGTH                       equ 0003h
INT2PPS_PIN_MASK                         equ 0007h
INT2PPS_PORT_POSN                        equ 0003h
INT2PPS_PORT_POSITION                    equ 0003h
INT2PPS_PORT_SIZE                        equ 0001h
INT2PPS_PORT_LENGTH                      equ 0001h
INT2PPS_PORT_MASK                        equ 0008h
INT2PPS_INT2PPS_POSN                     equ 0000h
INT2PPS_INT2PPS_POSITION                 equ 0000h
INT2PPS_INT2PPS_SIZE                     equ 0004h
INT2PPS_INT2PPS_LENGTH                   equ 0004h
INT2PPS_INT2PPS_MASK                     equ 000Fh
INT2PPS_INT2PPS0_POSN                    equ 0000h
INT2PPS_INT2PPS0_POSITION                equ 0000h
INT2PPS_INT2PPS0_SIZE                    equ 0001h
INT2PPS_INT2PPS0_LENGTH                  equ 0001h
INT2PPS_INT2PPS0_MASK                    equ 0001h
INT2PPS_INT2PPS1_POSN                    equ 0001h
INT2PPS_INT2PPS1_POSITION                equ 0001h
INT2PPS_INT2PPS1_SIZE                    equ 0001h
INT2PPS_INT2PPS1_LENGTH                  equ 0001h
INT2PPS_INT2PPS1_MASK                    equ 0002h
INT2PPS_INT2PPS2_POSN                    equ 0002h
INT2PPS_INT2PPS2_POSITION                equ 0002h
INT2PPS_INT2PPS2_SIZE                    equ 0001h
INT2PPS_INT2PPS2_LENGTH                  equ 0001h
INT2PPS_INT2PPS2_MASK                    equ 0004h
INT2PPS_INT2PPS3_POSN                    equ 0003h
INT2PPS_INT2PPS3_POSITION                equ 0003h
INT2PPS_INT2PPS3_SIZE                    equ 0001h
INT2PPS_INT2PPS3_LENGTH                  equ 0001h
INT2PPS_INT2PPS3_MASK                    equ 0008h

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
T0CKIPPS                                 equ 0EA4h
// bitfield definitions
T0CKIPPS_PIN_POSN                        equ 0000h
T0CKIPPS_PIN_POSITION                    equ 0000h
T0CKIPPS_PIN_SIZE                        equ 0003h
T0CKIPPS_PIN_LENGTH                      equ 0003h
T0CKIPPS_PIN_MASK                        equ 0007h
T0CKIPPS_PORT_POSN                       equ 0003h
T0CKIPPS_PORT_POSITION                   equ 0003h
T0CKIPPS_PORT_SIZE                       equ 0001h
T0CKIPPS_PORT_LENGTH                     equ 0001h
T0CKIPPS_PORT_MASK                       equ 0008h
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

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
T1CKIPPS                                 equ 0EA5h
// bitfield definitions
T1CKIPPS_PIN_POSN                        equ 0000h
T1CKIPPS_PIN_POSITION                    equ 0000h
T1CKIPPS_PIN_SIZE                        equ 0003h
T1CKIPPS_PIN_LENGTH                      equ 0003h
T1CKIPPS_PIN_MASK                        equ 0007h
T1CKIPPS_PORT_POSN                       equ 0003h
T1CKIPPS_PORT_POSITION                   equ 0003h
T1CKIPPS_PORT_SIZE                       equ 0002h
T1CKIPPS_PORT_LENGTH                     equ 0002h
T1CKIPPS_PORT_MASK                       equ 0018h
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
T1GPPS                                   equ 0EA6h
// bitfield definitions
T1GPPS_PIN_POSN                          equ 0000h
T1GPPS_PIN_POSITION                      equ 0000h
T1GPPS_PIN_SIZE                          equ 0003h
T1GPPS_PIN_LENGTH                        equ 0003h
T1GPPS_PIN_MASK                          equ 0007h
T1GPPS_PORT_POSN                         equ 0003h
T1GPPS_PORT_POSITION                     equ 0003h
T1GPPS_PORT_SIZE                         equ 0002h
T1GPPS_PORT_LENGTH                       equ 0002h
T1GPPS_PORT_MASK                         equ 0018h
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

// Register: T3CKIPPS
#define T3CKIPPS T3CKIPPS
T3CKIPPS                                 equ 0EA7h
// bitfield definitions
T3CKIPPS_PIN_POSN                        equ 0000h
T3CKIPPS_PIN_POSITION                    equ 0000h
T3CKIPPS_PIN_SIZE                        equ 0003h
T3CKIPPS_PIN_LENGTH                      equ 0003h
T3CKIPPS_PIN_MASK                        equ 0007h
T3CKIPPS_PORT_POSN                       equ 0003h
T3CKIPPS_PORT_POSITION                   equ 0003h
T3CKIPPS_PORT_SIZE                       equ 0002h
T3CKIPPS_PORT_LENGTH                     equ 0002h
T3CKIPPS_PORT_MASK                       equ 0018h
T3CKIPPS_T3CKIPPS_POSN                   equ 0000h
T3CKIPPS_T3CKIPPS_POSITION               equ 0000h
T3CKIPPS_T3CKIPPS_SIZE                   equ 0005h
T3CKIPPS_T3CKIPPS_LENGTH                 equ 0005h
T3CKIPPS_T3CKIPPS_MASK                   equ 001Fh
T3CKIPPS_T3CKIPPS0_POSN                  equ 0000h
T3CKIPPS_T3CKIPPS0_POSITION              equ 0000h
T3CKIPPS_T3CKIPPS0_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS0_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS0_MASK                  equ 0001h
T3CKIPPS_T3CKIPPS1_POSN                  equ 0001h
T3CKIPPS_T3CKIPPS1_POSITION              equ 0001h
T3CKIPPS_T3CKIPPS1_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS1_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS1_MASK                  equ 0002h
T3CKIPPS_T3CKIPPS2_POSN                  equ 0002h
T3CKIPPS_T3CKIPPS2_POSITION              equ 0002h
T3CKIPPS_T3CKIPPS2_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS2_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS2_MASK                  equ 0004h
T3CKIPPS_T3CKIPPS3_POSN                  equ 0003h
T3CKIPPS_T3CKIPPS3_POSITION              equ 0003h
T3CKIPPS_T3CKIPPS3_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS3_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS3_MASK                  equ 0008h
T3CKIPPS_T3CKIPPS4_POSN                  equ 0004h
T3CKIPPS_T3CKIPPS4_POSITION              equ 0004h
T3CKIPPS_T3CKIPPS4_SIZE                  equ 0001h
T3CKIPPS_T3CKIPPS4_LENGTH                equ 0001h
T3CKIPPS_T3CKIPPS4_MASK                  equ 0010h

// Register: T3GPPS
#define T3GPPS T3GPPS
T3GPPS                                   equ 0EA8h
// bitfield definitions
T3GPPS_PIN_POSN                          equ 0000h
T3GPPS_PIN_POSITION                      equ 0000h
T3GPPS_PIN_SIZE                          equ 0003h
T3GPPS_PIN_LENGTH                        equ 0003h
T3GPPS_PIN_MASK                          equ 0007h
T3GPPS_PORT_POSN                         equ 0003h
T3GPPS_PORT_POSITION                     equ 0003h
T3GPPS_PORT_SIZE                         equ 0002h
T3GPPS_PORT_LENGTH                       equ 0002h
T3GPPS_PORT_MASK                         equ 0018h
T3GPPS_T3GPPS_POSN                       equ 0000h
T3GPPS_T3GPPS_POSITION                   equ 0000h
T3GPPS_T3GPPS_SIZE                       equ 0005h
T3GPPS_T3GPPS_LENGTH                     equ 0005h
T3GPPS_T3GPPS_MASK                       equ 001Fh
T3GPPS_T3GPPS0_POSN                      equ 0000h
T3GPPS_T3GPPS0_POSITION                  equ 0000h
T3GPPS_T3GPPS0_SIZE                      equ 0001h
T3GPPS_T3GPPS0_LENGTH                    equ 0001h
T3GPPS_T3GPPS0_MASK                      equ 0001h
T3GPPS_T3GPPS1_POSN                      equ 0001h
T3GPPS_T3GPPS1_POSITION                  equ 0001h
T3GPPS_T3GPPS1_SIZE                      equ 0001h
T3GPPS_T3GPPS1_LENGTH                    equ 0001h
T3GPPS_T3GPPS1_MASK                      equ 0002h
T3GPPS_T3GPPS2_POSN                      equ 0002h
T3GPPS_T3GPPS2_POSITION                  equ 0002h
T3GPPS_T3GPPS2_SIZE                      equ 0001h
T3GPPS_T3GPPS2_LENGTH                    equ 0001h
T3GPPS_T3GPPS2_MASK                      equ 0004h
T3GPPS_T3GPPS3_POSN                      equ 0003h
T3GPPS_T3GPPS3_POSITION                  equ 0003h
T3GPPS_T3GPPS3_SIZE                      equ 0001h
T3GPPS_T3GPPS3_LENGTH                    equ 0001h
T3GPPS_T3GPPS3_MASK                      equ 0008h
T3GPPS_T3GPPS4_POSN                      equ 0004h
T3GPPS_T3GPPS4_POSITION                  equ 0004h
T3GPPS_T3GPPS4_SIZE                      equ 0001h
T3GPPS_T3GPPS4_LENGTH                    equ 0001h
T3GPPS_T3GPPS4_MASK                      equ 0010h

// Register: T5CKIPPS
#define T5CKIPPS T5CKIPPS
T5CKIPPS                                 equ 0EA9h
// bitfield definitions
T5CKIPPS_PIN_POSN                        equ 0000h
T5CKIPPS_PIN_POSITION                    equ 0000h
T5CKIPPS_PIN_SIZE                        equ 0003h
T5CKIPPS_PIN_LENGTH                      equ 0003h
T5CKIPPS_PIN_MASK                        equ 0007h
T5CKIPPS_PORT_POSN                       equ 0003h
T5CKIPPS_PORT_POSITION                   equ 0003h
T5CKIPPS_PORT_SIZE                       equ 0002h
T5CKIPPS_PORT_LENGTH                     equ 0002h
T5CKIPPS_PORT_MASK                       equ 0018h
T5CKIPPS_T5CKIPPS_POSN                   equ 0000h
T5CKIPPS_T5CKIPPS_POSITION               equ 0000h
T5CKIPPS_T5CKIPPS_SIZE                   equ 0005h
T5CKIPPS_T5CKIPPS_LENGTH                 equ 0005h
T5CKIPPS_T5CKIPPS_MASK                   equ 001Fh
T5CKIPPS_T5CKIPPS0_POSN                  equ 0000h
T5CKIPPS_T5CKIPPS0_POSITION              equ 0000h
T5CKIPPS_T5CKIPPS0_SIZE                  equ 0001h
T5CKIPPS_T5CKIPPS0_LENGTH                equ 0001h
T5CKIPPS_T5CKIPPS0_MASK                  equ 0001h
T5CKIPPS_T5CKIPPS1_POSN                  equ 0001h
T5CKIPPS_T5CKIPPS1_POSITION              equ 0001h
T5CKIPPS_T5CKIPPS1_SIZE                  equ 0001h
T5CKIPPS_T5CKIPPS1_LENGTH                equ 0001h
T5CKIPPS_T5CKIPPS1_MASK                  equ 0002h
T5CKIPPS_T5CKIPPS2_POSN                  equ 0002h
T5CKIPPS_T5CKIPPS2_POSITION              equ 0002h
T5CKIPPS_T5CKIPPS2_SIZE                  equ 0001h
T5CKIPPS_T5CKIPPS2_LENGTH                equ 0001h
T5CKIPPS_T5CKIPPS2_MASK                  equ 0004h
T5CKIPPS_T5CKIPPS3_POSN                  equ 0003h
T5CKIPPS_T5CKIPPS3_POSITION              equ 0003h
T5CKIPPS_T5CKIPPS3_SIZE                  equ 0001h
T5CKIPPS_T5CKIPPS3_LENGTH                equ 0001h
T5CKIPPS_T5CKIPPS3_MASK                  equ 0008h
T5CKIPPS_T5CKIPPS4_POSN                  equ 0004h
T5CKIPPS_T5CKIPPS4_POSITION              equ 0004h
T5CKIPPS_T5CKIPPS4_SIZE                  equ 0001h
T5CKIPPS_T5CKIPPS4_LENGTH                equ 0001h
T5CKIPPS_T5CKIPPS4_MASK                  equ 0010h

// Register: T5GPPS
#define T5GPPS T5GPPS
T5GPPS                                   equ 0EAAh
// bitfield definitions
T5GPPS_PIN_POSN                          equ 0000h
T5GPPS_PIN_POSITION                      equ 0000h
T5GPPS_PIN_SIZE                          equ 0003h
T5GPPS_PIN_LENGTH                        equ 0003h
T5GPPS_PIN_MASK                          equ 0007h
T5GPPS_PORT_POSN                         equ 0003h
T5GPPS_PORT_POSITION                     equ 0003h
T5GPPS_PORT_SIZE                         equ 0002h
T5GPPS_PORT_LENGTH                       equ 0002h
T5GPPS_PORT_MASK                         equ 0018h
T5GPPS_T5GPPS_POSN                       equ 0000h
T5GPPS_T5GPPS_POSITION                   equ 0000h
T5GPPS_T5GPPS_SIZE                       equ 0005h
T5GPPS_T5GPPS_LENGTH                     equ 0005h
T5GPPS_T5GPPS_MASK                       equ 001Fh
T5GPPS_T5GPPS0_POSN                      equ 0000h
T5GPPS_T5GPPS0_POSITION                  equ 0000h
T5GPPS_T5GPPS0_SIZE                      equ 0001h
T5GPPS_T5GPPS0_LENGTH                    equ 0001h
T5GPPS_T5GPPS0_MASK                      equ 0001h
T5GPPS_T5GPPS1_POSN                      equ 0001h
T5GPPS_T5GPPS1_POSITION                  equ 0001h
T5GPPS_T5GPPS1_SIZE                      equ 0001h
T5GPPS_T5GPPS1_LENGTH                    equ 0001h
T5GPPS_T5GPPS1_MASK                      equ 0002h
T5GPPS_T5GPPS2_POSN                      equ 0002h
T5GPPS_T5GPPS2_POSITION                  equ 0002h
T5GPPS_T5GPPS2_SIZE                      equ 0001h
T5GPPS_T5GPPS2_LENGTH                    equ 0001h
T5GPPS_T5GPPS2_MASK                      equ 0004h
T5GPPS_T5GPPS3_POSN                      equ 0003h
T5GPPS_T5GPPS3_POSITION                  equ 0003h
T5GPPS_T5GPPS3_SIZE                      equ 0001h
T5GPPS_T5GPPS3_LENGTH                    equ 0001h
T5GPPS_T5GPPS3_MASK                      equ 0008h
T5GPPS_T5GPPS4_POSN                      equ 0004h
T5GPPS_T5GPPS4_POSITION                  equ 0004h
T5GPPS_T5GPPS4_SIZE                      equ 0001h
T5GPPS_T5GPPS4_LENGTH                    equ 0001h
T5GPPS_T5GPPS4_MASK                      equ 0010h

// Register: T2INPPS
#define T2INPPS T2INPPS
T2INPPS                                  equ 0EABh
// bitfield definitions
T2INPPS_PIN_POSN                         equ 0000h
T2INPPS_PIN_POSITION                     equ 0000h
T2INPPS_PIN_SIZE                         equ 0003h
T2INPPS_PIN_LENGTH                       equ 0003h
T2INPPS_PIN_MASK                         equ 0007h
T2INPPS_PORT_POSN                        equ 0003h
T2INPPS_PORT_POSITION                    equ 0003h
T2INPPS_PORT_SIZE                        equ 0002h
T2INPPS_PORT_LENGTH                      equ 0002h
T2INPPS_PORT_MASK                        equ 0018h
T2INPPS_T2INPPS_POSN                     equ 0000h
T2INPPS_T2INPPS_POSITION                 equ 0000h
T2INPPS_T2INPPS_SIZE                     equ 0005h
T2INPPS_T2INPPS_LENGTH                   equ 0005h
T2INPPS_T2INPPS_MASK                     equ 001Fh
T2INPPS_T2INPPS0_POSN                    equ 0000h
T2INPPS_T2INPPS0_POSITION                equ 0000h
T2INPPS_T2INPPS0_SIZE                    equ 0001h
T2INPPS_T2INPPS0_LENGTH                  equ 0001h
T2INPPS_T2INPPS0_MASK                    equ 0001h
T2INPPS_T2INPPS1_POSN                    equ 0001h
T2INPPS_T2INPPS1_POSITION                equ 0001h
T2INPPS_T2INPPS1_SIZE                    equ 0001h
T2INPPS_T2INPPS1_LENGTH                  equ 0001h
T2INPPS_T2INPPS1_MASK                    equ 0002h
T2INPPS_T2INPPS2_POSN                    equ 0002h
T2INPPS_T2INPPS2_POSITION                equ 0002h
T2INPPS_T2INPPS2_SIZE                    equ 0001h
T2INPPS_T2INPPS2_LENGTH                  equ 0001h
T2INPPS_T2INPPS2_MASK                    equ 0004h
T2INPPS_T2INPPS3_POSN                    equ 0003h
T2INPPS_T2INPPS3_POSITION                equ 0003h
T2INPPS_T2INPPS3_SIZE                    equ 0001h
T2INPPS_T2INPPS3_LENGTH                  equ 0001h
T2INPPS_T2INPPS3_MASK                    equ 0008h
T2INPPS_T2INPPS4_POSN                    equ 0004h
T2INPPS_T2INPPS4_POSITION                equ 0004h
T2INPPS_T2INPPS4_SIZE                    equ 0001h
T2INPPS_T2INPPS4_LENGTH                  equ 0001h
T2INPPS_T2INPPS4_MASK                    equ 0010h

// Register: T4INPPS
#define T4INPPS T4INPPS
T4INPPS                                  equ 0EACh
// bitfield definitions
T4INPPS_PIN_POSN                         equ 0000h
T4INPPS_PIN_POSITION                     equ 0000h
T4INPPS_PIN_SIZE                         equ 0003h
T4INPPS_PIN_LENGTH                       equ 0003h
T4INPPS_PIN_MASK                         equ 0007h
T4INPPS_PORT_POSN                        equ 0003h
T4INPPS_PORT_POSITION                    equ 0003h
T4INPPS_PORT_SIZE                        equ 0002h
T4INPPS_PORT_LENGTH                      equ 0002h
T4INPPS_PORT_MASK                        equ 0018h
T4INPPS_T4INPPS_POSN                     equ 0000h
T4INPPS_T4INPPS_POSITION                 equ 0000h
T4INPPS_T4INPPS_SIZE                     equ 0005h
T4INPPS_T4INPPS_LENGTH                   equ 0005h
T4INPPS_T4INPPS_MASK                     equ 001Fh
T4INPPS_T4INPPS0_POSN                    equ 0000h
T4INPPS_T4INPPS0_POSITION                equ 0000h
T4INPPS_T4INPPS0_SIZE                    equ 0001h
T4INPPS_T4INPPS0_LENGTH                  equ 0001h
T4INPPS_T4INPPS0_MASK                    equ 0001h
T4INPPS_T4INPPS1_POSN                    equ 0001h
T4INPPS_T4INPPS1_POSITION                equ 0001h
T4INPPS_T4INPPS1_SIZE                    equ 0001h
T4INPPS_T4INPPS1_LENGTH                  equ 0001h
T4INPPS_T4INPPS1_MASK                    equ 0002h
T4INPPS_T4INPPS2_POSN                    equ 0002h
T4INPPS_T4INPPS2_POSITION                equ 0002h
T4INPPS_T4INPPS2_SIZE                    equ 0001h
T4INPPS_T4INPPS2_LENGTH                  equ 0001h
T4INPPS_T4INPPS2_MASK                    equ 0004h
T4INPPS_T4INPPS3_POSN                    equ 0003h
T4INPPS_T4INPPS3_POSITION                equ 0003h
T4INPPS_T4INPPS3_SIZE                    equ 0001h
T4INPPS_T4INPPS3_LENGTH                  equ 0001h
T4INPPS_T4INPPS3_MASK                    equ 0008h
T4INPPS_T4INPPS4_POSN                    equ 0004h
T4INPPS_T4INPPS4_POSITION                equ 0004h
T4INPPS_T4INPPS4_SIZE                    equ 0001h
T4INPPS_T4INPPS4_LENGTH                  equ 0001h
T4INPPS_T4INPPS4_MASK                    equ 0010h

// Register: T6INPPS
#define T6INPPS T6INPPS
T6INPPS                                  equ 0EADh
// bitfield definitions
T6INPPS_PIN_POSN                         equ 0000h
T6INPPS_PIN_POSITION                     equ 0000h
T6INPPS_PIN_SIZE                         equ 0003h
T6INPPS_PIN_LENGTH                       equ 0003h
T6INPPS_PIN_MASK                         equ 0007h
T6INPPS_PORT_POSN                        equ 0003h
T6INPPS_PORT_POSITION                    equ 0003h
T6INPPS_PORT_SIZE                        equ 0002h
T6INPPS_PORT_LENGTH                      equ 0002h
T6INPPS_PORT_MASK                        equ 0018h
T6INPPS_T6INPPS_POSN                     equ 0000h
T6INPPS_T6INPPS_POSITION                 equ 0000h
T6INPPS_T6INPPS_SIZE                     equ 0005h
T6INPPS_T6INPPS_LENGTH                   equ 0005h
T6INPPS_T6INPPS_MASK                     equ 001Fh
T6INPPS_T6INPPS0_POSN                    equ 0000h
T6INPPS_T6INPPS0_POSITION                equ 0000h
T6INPPS_T6INPPS0_SIZE                    equ 0001h
T6INPPS_T6INPPS0_LENGTH                  equ 0001h
T6INPPS_T6INPPS0_MASK                    equ 0001h
T6INPPS_T6INPPS1_POSN                    equ 0001h
T6INPPS_T6INPPS1_POSITION                equ 0001h
T6INPPS_T6INPPS1_SIZE                    equ 0001h
T6INPPS_T6INPPS1_LENGTH                  equ 0001h
T6INPPS_T6INPPS1_MASK                    equ 0002h
T6INPPS_T6INPPS2_POSN                    equ 0002h
T6INPPS_T6INPPS2_POSITION                equ 0002h
T6INPPS_T6INPPS2_SIZE                    equ 0001h
T6INPPS_T6INPPS2_LENGTH                  equ 0001h
T6INPPS_T6INPPS2_MASK                    equ 0004h
T6INPPS_T6INPPS3_POSN                    equ 0003h
T6INPPS_T6INPPS3_POSITION                equ 0003h
T6INPPS_T6INPPS3_SIZE                    equ 0001h
T6INPPS_T6INPPS3_LENGTH                  equ 0001h
T6INPPS_T6INPPS3_MASK                    equ 0008h
T6INPPS_T6INPPS4_POSN                    equ 0004h
T6INPPS_T6INPPS4_POSITION                equ 0004h
T6INPPS_T6INPPS4_SIZE                    equ 0001h
T6INPPS_T6INPPS4_LENGTH                  equ 0001h
T6INPPS_T6INPPS4_MASK                    equ 0010h

// Register: ADACTPPS
#define ADACTPPS ADACTPPS
ADACTPPS                                 equ 0EAEh
// bitfield definitions
ADACTPPS_PIN_POSN                        equ 0000h
ADACTPPS_PIN_POSITION                    equ 0000h
ADACTPPS_PIN_SIZE                        equ 0003h
ADACTPPS_PIN_LENGTH                      equ 0003h
ADACTPPS_PIN_MASK                        equ 0007h
ADACTPPS_PORT_POSN                       equ 0003h
ADACTPPS_PORT_POSITION                   equ 0003h
ADACTPPS_PORT_SIZE                       equ 0002h
ADACTPPS_PORT_LENGTH                     equ 0002h
ADACTPPS_PORT_MASK                       equ 0018h
ADACTPPS_ADACTPPS_POSN                   equ 0000h
ADACTPPS_ADACTPPS_POSITION               equ 0000h
ADACTPPS_ADACTPPS_SIZE                   equ 0005h
ADACTPPS_ADACTPPS_LENGTH                 equ 0005h
ADACTPPS_ADACTPPS_MASK                   equ 001Fh
ADACTPPS_ADACTPPS0_POSN                  equ 0000h
ADACTPPS_ADACTPPS0_POSITION              equ 0000h
ADACTPPS_ADACTPPS0_SIZE                  equ 0001h
ADACTPPS_ADACTPPS0_LENGTH                equ 0001h
ADACTPPS_ADACTPPS0_MASK                  equ 0001h
ADACTPPS_ADACTPPS1_POSN                  equ 0001h
ADACTPPS_ADACTPPS1_POSITION              equ 0001h
ADACTPPS_ADACTPPS1_SIZE                  equ 0001h
ADACTPPS_ADACTPPS1_LENGTH                equ 0001h
ADACTPPS_ADACTPPS1_MASK                  equ 0002h
ADACTPPS_ADACTPPS2_POSN                  equ 0002h
ADACTPPS_ADACTPPS2_POSITION              equ 0002h
ADACTPPS_ADACTPPS2_SIZE                  equ 0001h
ADACTPPS_ADACTPPS2_LENGTH                equ 0001h
ADACTPPS_ADACTPPS2_MASK                  equ 0004h
ADACTPPS_ADACTPPS3_POSN                  equ 0003h
ADACTPPS_ADACTPPS3_POSITION              equ 0003h
ADACTPPS_ADACTPPS3_SIZE                  equ 0001h
ADACTPPS_ADACTPPS3_LENGTH                equ 0001h
ADACTPPS_ADACTPPS3_MASK                  equ 0008h
ADACTPPS_ADACTPPS4_POSN                  equ 0004h
ADACTPPS_ADACTPPS4_POSITION              equ 0004h
ADACTPPS_ADACTPPS4_SIZE                  equ 0001h
ADACTPPS_ADACTPPS4_LENGTH                equ 0001h
ADACTPPS_ADACTPPS4_MASK                  equ 0010h

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
CCP1PPS                                  equ 0EAFh
// bitfield definitions
CCP1PPS_PIN_POSN                         equ 0000h
CCP1PPS_PIN_POSITION                     equ 0000h
CCP1PPS_PIN_SIZE                         equ 0003h
CCP1PPS_PIN_LENGTH                       equ 0003h
CCP1PPS_PIN_MASK                         equ 0007h
CCP1PPS_PORT_POSN                        equ 0003h
CCP1PPS_PORT_POSITION                    equ 0003h
CCP1PPS_PORT_SIZE                        equ 0002h
CCP1PPS_PORT_LENGTH                      equ 0002h
CCP1PPS_PORT_MASK                        equ 0018h
CCP1PPS_CCP1PPS_POSN                     equ 0000h
CCP1PPS_CCP1PPS_POSITION                 equ 0000h
CCP1PPS_CCP1PPS_SIZE                     equ 0005h
CCP1PPS_CCP1PPS_LENGTH                   equ 0005h
CCP1PPS_CCP1PPS_MASK                     equ 001Fh
CCP1PPS_CCP1PPS0_POSN                    equ 0000h
CCP1PPS_CCP1PPS0_POSITION                equ 0000h
CCP1PPS_CCP1PPS0_SIZE                    equ 0001h
CCP1PPS_CCP1PPS0_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS0_MASK                    equ 0001h
CCP1PPS_CCP1PPS1_POSN                    equ 0001h
CCP1PPS_CCP1PPS1_POSITION                equ 0001h
CCP1PPS_CCP1PPS1_SIZE                    equ 0001h
CCP1PPS_CCP1PPS1_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS1_MASK                    equ 0002h
CCP1PPS_CCP1PPS2_POSN                    equ 0002h
CCP1PPS_CCP1PPS2_POSITION                equ 0002h
CCP1PPS_CCP1PPS2_SIZE                    equ 0001h
CCP1PPS_CCP1PPS2_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS2_MASK                    equ 0004h
CCP1PPS_CCP1PPS3_POSN                    equ 0003h
CCP1PPS_CCP1PPS3_POSITION                equ 0003h
CCP1PPS_CCP1PPS3_SIZE                    equ 0001h
CCP1PPS_CCP1PPS3_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS3_MASK                    equ 0008h
CCP1PPS_CCP1PPS4_POSN                    equ 0004h
CCP1PPS_CCP1PPS4_POSITION                equ 0004h
CCP1PPS_CCP1PPS4_SIZE                    equ 0001h
CCP1PPS_CCP1PPS4_LENGTH                  equ 0001h
CCP1PPS_CCP1PPS4_MASK                    equ 0010h

// Register: CCP2PPS
#define CCP2PPS CCP2PPS
CCP2PPS                                  equ 0EB0h
// bitfield definitions
CCP2PPS_PIN_POSN                         equ 0000h
CCP2PPS_PIN_POSITION                     equ 0000h
CCP2PPS_PIN_SIZE                         equ 0003h
CCP2PPS_PIN_LENGTH                       equ 0003h
CCP2PPS_PIN_MASK                         equ 0007h
CCP2PPS_PORT_POSN                        equ 0003h
CCP2PPS_PORT_POSITION                    equ 0003h
CCP2PPS_PORT_SIZE                        equ 0002h
CCP2PPS_PORT_LENGTH                      equ 0002h
CCP2PPS_PORT_MASK                        equ 0018h
CCP2PPS_CCP2PPS_POSN                     equ 0000h
CCP2PPS_CCP2PPS_POSITION                 equ 0000h
CCP2PPS_CCP2PPS_SIZE                     equ 0005h
CCP2PPS_CCP2PPS_LENGTH                   equ 0005h
CCP2PPS_CCP2PPS_MASK                     equ 001Fh
CCP2PPS_CCP2PPS0_POSN                    equ 0000h
CCP2PPS_CCP2PPS0_POSITION                equ 0000h
CCP2PPS_CCP2PPS0_SIZE                    equ 0001h
CCP2PPS_CCP2PPS0_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS0_MASK                    equ 0001h
CCP2PPS_CCP2PPS1_POSN                    equ 0001h
CCP2PPS_CCP2PPS1_POSITION                equ 0001h
CCP2PPS_CCP2PPS1_SIZE                    equ 0001h
CCP2PPS_CCP2PPS1_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS1_MASK                    equ 0002h
CCP2PPS_CCP2PPS2_POSN                    equ 0002h
CCP2PPS_CCP2PPS2_POSITION                equ 0002h
CCP2PPS_CCP2PPS2_SIZE                    equ 0001h
CCP2PPS_CCP2PPS2_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS2_MASK                    equ 0004h
CCP2PPS_CCP2PPS3_POSN                    equ 0003h
CCP2PPS_CCP2PPS3_POSITION                equ 0003h
CCP2PPS_CCP2PPS3_SIZE                    equ 0001h
CCP2PPS_CCP2PPS3_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS3_MASK                    equ 0008h
CCP2PPS_CCP2PPS4_POSN                    equ 0004h
CCP2PPS_CCP2PPS4_POSITION                equ 0004h
CCP2PPS_CCP2PPS4_SIZE                    equ 0001h
CCP2PPS_CCP2PPS4_LENGTH                  equ 0001h
CCP2PPS_CCP2PPS4_MASK                    equ 0010h

// Register: CWG1PPS
#define CWG1PPS CWG1PPS
CWG1PPS                                  equ 0EB1h
// bitfield definitions
CWG1PPS_PIN_POSN                         equ 0000h
CWG1PPS_PIN_POSITION                     equ 0000h
CWG1PPS_PIN_SIZE                         equ 0003h
CWG1PPS_PIN_LENGTH                       equ 0003h
CWG1PPS_PIN_MASK                         equ 0007h
CWG1PPS_PORT_POSN                        equ 0003h
CWG1PPS_PORT_POSITION                    equ 0003h
CWG1PPS_PORT_SIZE                        equ 0002h
CWG1PPS_PORT_LENGTH                      equ 0002h
CWG1PPS_PORT_MASK                        equ 0018h
CWG1PPS_CWGINPPS_POSN                    equ 0000h
CWG1PPS_CWGINPPS_POSITION                equ 0000h
CWG1PPS_CWGINPPS_SIZE                    equ 0005h
CWG1PPS_CWGINPPS_LENGTH                  equ 0005h
CWG1PPS_CWGINPPS_MASK                    equ 001Fh
CWG1PPS_CWGINPPS0_POSN                   equ 0000h
CWG1PPS_CWGINPPS0_POSITION               equ 0000h
CWG1PPS_CWGINPPS0_SIZE                   equ 0001h
CWG1PPS_CWGINPPS0_LENGTH                 equ 0001h
CWG1PPS_CWGINPPS0_MASK                   equ 0001h
CWG1PPS_CWGINPPS1_POSN                   equ 0001h
CWG1PPS_CWGINPPS1_POSITION               equ 0001h
CWG1PPS_CWGINPPS1_SIZE                   equ 0001h
CWG1PPS_CWGINPPS1_LENGTH                 equ 0001h
CWG1PPS_CWGINPPS1_MASK                   equ 0002h
CWG1PPS_CWGINPPS2_POSN                   equ 0002h
CWG1PPS_CWGINPPS2_POSITION               equ 0002h
CWG1PPS_CWGINPPS2_SIZE                   equ 0001h
CWG1PPS_CWGINPPS2_LENGTH                 equ 0001h
CWG1PPS_CWGINPPS2_MASK                   equ 0004h
CWG1PPS_CWGINPPS3_POSN                   equ 0003h
CWG1PPS_CWGINPPS3_POSITION               equ 0003h
CWG1PPS_CWGINPPS3_SIZE                   equ 0001h
CWG1PPS_CWGINPPS3_LENGTH                 equ 0001h
CWG1PPS_CWGINPPS3_MASK                   equ 0008h
CWG1PPS_CWGINPPS4_POSN                   equ 0004h
CWG1PPS_CWGINPPS4_POSITION               equ 0004h
CWG1PPS_CWGINPPS4_SIZE                   equ 0001h
CWG1PPS_CWGINPPS4_LENGTH                 equ 0001h
CWG1PPS_CWGINPPS4_MASK                   equ 0010h
CWG1PPS_CWG1INPPS_POSN                   equ 0000h
CWG1PPS_CWG1INPPS_POSITION               equ 0000h
CWG1PPS_CWG1INPPS_SIZE                   equ 0005h
CWG1PPS_CWG1INPPS_LENGTH                 equ 0005h
CWG1PPS_CWG1INPPS_MASK                   equ 001Fh
CWG1PPS_CWG1INPPS0_POSN                  equ 0000h
CWG1PPS_CWG1INPPS0_POSITION              equ 0000h
CWG1PPS_CWG1INPPS0_SIZE                  equ 0001h
CWG1PPS_CWG1INPPS0_LENGTH                equ 0001h
CWG1PPS_CWG1INPPS0_MASK                  equ 0001h
CWG1PPS_CWG1INPPS1_POSN                  equ 0001h
CWG1PPS_CWG1INPPS1_POSITION              equ 0001h
CWG1PPS_CWG1INPPS1_SIZE                  equ 0001h
CWG1PPS_CWG1INPPS1_LENGTH                equ 0001h
CWG1PPS_CWG1INPPS1_MASK                  equ 0002h
CWG1PPS_CWG1INPPS2_POSN                  equ 0002h
CWG1PPS_CWG1INPPS2_POSITION              equ 0002h
CWG1PPS_CWG1INPPS2_SIZE                  equ 0001h
CWG1PPS_CWG1INPPS2_LENGTH                equ 0001h
CWG1PPS_CWG1INPPS2_MASK                  equ 0004h
CWG1PPS_CWG1INPPS3_POSN                  equ 0003h
CWG1PPS_CWG1INPPS3_POSITION              equ 0003h
CWG1PPS_CWG1INPPS3_SIZE                  equ 0001h
CWG1PPS_CWG1INPPS3_LENGTH                equ 0001h
CWG1PPS_CWG1INPPS3_MASK                  equ 0008h
CWG1PPS_CWG1INPPS4_POSN                  equ 0004h
CWG1PPS_CWG1INPPS4_POSITION              equ 0004h
CWG1PPS_CWG1INPPS4_SIZE                  equ 0001h
CWG1PPS_CWG1INPPS4_LENGTH                equ 0001h
CWG1PPS_CWG1INPPS4_MASK                  equ 0010h

// Register: MDCARLPPS
#define MDCARLPPS MDCARLPPS
MDCARLPPS                                equ 0EB2h
// bitfield definitions
MDCARLPPS_PIN_POSN                       equ 0000h
MDCARLPPS_PIN_POSITION                   equ 0000h
MDCARLPPS_PIN_SIZE                       equ 0003h
MDCARLPPS_PIN_LENGTH                     equ 0003h
MDCARLPPS_PIN_MASK                       equ 0007h
MDCARLPPS_PORT_POSN                      equ 0003h
MDCARLPPS_PORT_POSITION                  equ 0003h
MDCARLPPS_PORT_SIZE                      equ 0002h
MDCARLPPS_PORT_LENGTH                    equ 0002h
MDCARLPPS_PORT_MASK                      equ 0018h
MDCARLPPS_MDCARLPPS_POSN                 equ 0000h
MDCARLPPS_MDCARLPPS_POSITION             equ 0000h
MDCARLPPS_MDCARLPPS_SIZE                 equ 0005h
MDCARLPPS_MDCARLPPS_LENGTH               equ 0005h
MDCARLPPS_MDCARLPPS_MASK                 equ 001Fh
MDCARLPPS_MDCARLPPS0_POSN                equ 0000h
MDCARLPPS_MDCARLPPS0_POSITION            equ 0000h
MDCARLPPS_MDCARLPPS0_SIZE                equ 0001h
MDCARLPPS_MDCARLPPS0_LENGTH              equ 0001h
MDCARLPPS_MDCARLPPS0_MASK                equ 0001h
MDCARLPPS_MDCARLPPS1_POSN                equ 0001h
MDCARLPPS_MDCARLPPS1_POSITION            equ 0001h
MDCARLPPS_MDCARLPPS1_SIZE                equ 0001h
MDCARLPPS_MDCARLPPS1_LENGTH              equ 0001h
MDCARLPPS_MDCARLPPS1_MASK                equ 0002h
MDCARLPPS_MDCARLPPS2_POSN                equ 0002h
MDCARLPPS_MDCARLPPS2_POSITION            equ 0002h
MDCARLPPS_MDCARLPPS2_SIZE                equ 0001h
MDCARLPPS_MDCARLPPS2_LENGTH              equ 0001h
MDCARLPPS_MDCARLPPS2_MASK                equ 0004h
MDCARLPPS_MDCARLPPS3_POSN                equ 0003h
MDCARLPPS_MDCARLPPS3_POSITION            equ 0003h
MDCARLPPS_MDCARLPPS3_SIZE                equ 0001h
MDCARLPPS_MDCARLPPS3_LENGTH              equ 0001h
MDCARLPPS_MDCARLPPS3_MASK                equ 0008h
MDCARLPPS_MDCARLPPS4_POSN                equ 0004h
MDCARLPPS_MDCARLPPS4_POSITION            equ 0004h
MDCARLPPS_MDCARLPPS4_SIZE                equ 0001h
MDCARLPPS_MDCARLPPS4_LENGTH              equ 0001h
MDCARLPPS_MDCARLPPS4_MASK                equ 0010h

// Register: MDCARHPPS
#define MDCARHPPS MDCARHPPS
MDCARHPPS                                equ 0EB3h
// bitfield definitions
MDCARHPPS_PIN_POSN                       equ 0000h
MDCARHPPS_PIN_POSITION                   equ 0000h
MDCARHPPS_PIN_SIZE                       equ 0003h
MDCARHPPS_PIN_LENGTH                     equ 0003h
MDCARHPPS_PIN_MASK                       equ 0007h
MDCARHPPS_PORT_POSN                      equ 0003h
MDCARHPPS_PORT_POSITION                  equ 0003h
MDCARHPPS_PORT_SIZE                      equ 0002h
MDCARHPPS_PORT_LENGTH                    equ 0002h
MDCARHPPS_PORT_MASK                      equ 0018h
MDCARHPPS_MDCARHPPS_POSN                 equ 0000h
MDCARHPPS_MDCARHPPS_POSITION             equ 0000h
MDCARHPPS_MDCARHPPS_SIZE                 equ 0005h
MDCARHPPS_MDCARHPPS_LENGTH               equ 0005h
MDCARHPPS_MDCARHPPS_MASK                 equ 001Fh
MDCARHPPS_MDCARHPPS0_POSN                equ 0000h
MDCARHPPS_MDCARHPPS0_POSITION            equ 0000h
MDCARHPPS_MDCARHPPS0_SIZE                equ 0001h
MDCARHPPS_MDCARHPPS0_LENGTH              equ 0001h
MDCARHPPS_MDCARHPPS0_MASK                equ 0001h
MDCARHPPS_MDCARHPPS1_POSN                equ 0001h
MDCARHPPS_MDCARHPPS1_POSITION            equ 0001h
MDCARHPPS_MDCARHPPS1_SIZE                equ 0001h
MDCARHPPS_MDCARHPPS1_LENGTH              equ 0001h
MDCARHPPS_MDCARHPPS1_MASK                equ 0002h
MDCARHPPS_MDCARHPPS2_POSN                equ 0002h
MDCARHPPS_MDCARHPPS2_POSITION            equ 0002h
MDCARHPPS_MDCARHPPS2_SIZE                equ 0001h
MDCARHPPS_MDCARHPPS2_LENGTH              equ 0001h
MDCARHPPS_MDCARHPPS2_MASK                equ 0004h
MDCARHPPS_MDCARHPPS3_POSN                equ 0003h
MDCARHPPS_MDCARHPPS3_POSITION            equ 0003h
MDCARHPPS_MDCARHPPS3_SIZE                equ 0001h
MDCARHPPS_MDCARHPPS3_LENGTH              equ 0001h
MDCARHPPS_MDCARHPPS3_MASK                equ 0008h
MDCARHPPS_MDCARHPPS4_POSN                equ 0004h
MDCARHPPS_MDCARHPPS4_POSITION            equ 0004h
MDCARHPPS_MDCARHPPS4_SIZE                equ 0001h
MDCARHPPS_MDCARHPPS4_LENGTH              equ 0001h
MDCARHPPS_MDCARHPPS4_MASK                equ 0010h

// Register: MDSRCPPS
#define MDSRCPPS MDSRCPPS
MDSRCPPS                                 equ 0EB4h
// bitfield definitions
MDSRCPPS_PIN_POSN                        equ 0000h
MDSRCPPS_PIN_POSITION                    equ 0000h
MDSRCPPS_PIN_SIZE                        equ 0003h
MDSRCPPS_PIN_LENGTH                      equ 0003h
MDSRCPPS_PIN_MASK                        equ 0007h
MDSRCPPS_PORT_POSN                       equ 0003h
MDSRCPPS_PORT_POSITION                   equ 0003h
MDSRCPPS_PORT_SIZE                       equ 0002h
MDSRCPPS_PORT_LENGTH                     equ 0002h
MDSRCPPS_PORT_MASK                       equ 0018h
MDSRCPPS_MDSRCPPS_POSN                   equ 0000h
MDSRCPPS_MDSRCPPS_POSITION               equ 0000h
MDSRCPPS_MDSRCPPS_SIZE                   equ 0005h
MDSRCPPS_MDSRCPPS_LENGTH                 equ 0005h
MDSRCPPS_MDSRCPPS_MASK                   equ 001Fh
MDSRCPPS_MDSRCPPS0_POSN                  equ 0000h
MDSRCPPS_MDSRCPPS0_POSITION              equ 0000h
MDSRCPPS_MDSRCPPS0_SIZE                  equ 0001h
MDSRCPPS_MDSRCPPS0_LENGTH                equ 0001h
MDSRCPPS_MDSRCPPS0_MASK                  equ 0001h
MDSRCPPS_MDSRCPPS1_POSN                  equ 0001h
MDSRCPPS_MDSRCPPS1_POSITION              equ 0001h
MDSRCPPS_MDSRCPPS1_SIZE                  equ 0001h
MDSRCPPS_MDSRCPPS1_LENGTH                equ 0001h
MDSRCPPS_MDSRCPPS1_MASK                  equ 0002h
MDSRCPPS_MDSRCPPS2_POSN                  equ 0002h
MDSRCPPS_MDSRCPPS2_POSITION              equ 0002h
MDSRCPPS_MDSRCPPS2_SIZE                  equ 0001h
MDSRCPPS_MDSRCPPS2_LENGTH                equ 0001h
MDSRCPPS_MDSRCPPS2_MASK                  equ 0004h
MDSRCPPS_MDSRCPPS3_POSN                  equ 0003h
MDSRCPPS_MDSRCPPS3_POSITION              equ 0003h
MDSRCPPS_MDSRCPPS3_SIZE                  equ 0001h
MDSRCPPS_MDSRCPPS3_LENGTH                equ 0001h
MDSRCPPS_MDSRCPPS3_MASK                  equ 0008h
MDSRCPPS_MDSRCPPS4_POSN                  equ 0004h
MDSRCPPS_MDSRCPPS4_POSITION              equ 0004h
MDSRCPPS_MDSRCPPS4_SIZE                  equ 0001h
MDSRCPPS_MDSRCPPS4_LENGTH                equ 0001h
MDSRCPPS_MDSRCPPS4_MASK                  equ 0010h

// Register: RX1PPS
#define RX1PPS RX1PPS
RX1PPS                                   equ 0EB5h
// bitfield definitions
RX1PPS_PIN_POSN                          equ 0000h
RX1PPS_PIN_POSITION                      equ 0000h
RX1PPS_PIN_SIZE                          equ 0003h
RX1PPS_PIN_LENGTH                        equ 0003h
RX1PPS_PIN_MASK                          equ 0007h
RX1PPS_PORT_POSN                         equ 0003h
RX1PPS_PORT_POSITION                     equ 0003h
RX1PPS_PORT_SIZE                         equ 0002h
RX1PPS_PORT_LENGTH                       equ 0002h
RX1PPS_PORT_MASK                         equ 0018h
RX1PPS_RXPPS_POSN                        equ 0000h
RX1PPS_RXPPS_POSITION                    equ 0000h
RX1PPS_RXPPS_SIZE                        equ 0005h
RX1PPS_RXPPS_LENGTH                      equ 0005h
RX1PPS_RXPPS_MASK                        equ 001Fh
RX1PPS_RXPPS0_POSN                       equ 0000h
RX1PPS_RXPPS0_POSITION                   equ 0000h
RX1PPS_RXPPS0_SIZE                       equ 0001h
RX1PPS_RXPPS0_LENGTH                     equ 0001h
RX1PPS_RXPPS0_MASK                       equ 0001h
RX1PPS_RXPPS1_POSN                       equ 0001h
RX1PPS_RXPPS1_POSITION                   equ 0001h
RX1PPS_RXPPS1_SIZE                       equ 0001h
RX1PPS_RXPPS1_LENGTH                     equ 0001h
RX1PPS_RXPPS1_MASK                       equ 0002h
RX1PPS_RXPPS2_POSN                       equ 0002h
RX1PPS_RXPPS2_POSITION                   equ 0002h
RX1PPS_RXPPS2_SIZE                       equ 0001h
RX1PPS_RXPPS2_LENGTH                     equ 0001h
RX1PPS_RXPPS2_MASK                       equ 0004h
RX1PPS_RXPPS3_POSN                       equ 0003h
RX1PPS_RXPPS3_POSITION                   equ 0003h
RX1PPS_RXPPS3_SIZE                       equ 0001h
RX1PPS_RXPPS3_LENGTH                     equ 0001h
RX1PPS_RXPPS3_MASK                       equ 0008h
RX1PPS_RXPPS4_POSN                       equ 0004h
RX1PPS_RXPPS4_POSITION                   equ 0004h
RX1PPS_RXPPS4_SIZE                       equ 0001h
RX1PPS_RXPPS4_LENGTH                     equ 0001h
RX1PPS_RXPPS4_MASK                       equ 0010h
RX1PPS_RX1PPS_POSN                       equ 0000h
RX1PPS_RX1PPS_POSITION                   equ 0000h
RX1PPS_RX1PPS_SIZE                       equ 0005h
RX1PPS_RX1PPS_LENGTH                     equ 0005h
RX1PPS_RX1PPS_MASK                       equ 001Fh
RX1PPS_RX1PPS0_POSN                      equ 0000h
RX1PPS_RX1PPS0_POSITION                  equ 0000h
RX1PPS_RX1PPS0_SIZE                      equ 0001h
RX1PPS_RX1PPS0_LENGTH                    equ 0001h
RX1PPS_RX1PPS0_MASK                      equ 0001h
RX1PPS_RX1PPS1_POSN                      equ 0001h
RX1PPS_RX1PPS1_POSITION                  equ 0001h
RX1PPS_RX1PPS1_SIZE                      equ 0001h
RX1PPS_RX1PPS1_LENGTH                    equ 0001h
RX1PPS_RX1PPS1_MASK                      equ 0002h
RX1PPS_RX1PPS2_POSN                      equ 0002h
RX1PPS_RX1PPS2_POSITION                  equ 0002h
RX1PPS_RX1PPS2_SIZE                      equ 0001h
RX1PPS_RX1PPS2_LENGTH                    equ 0001h
RX1PPS_RX1PPS2_MASK                      equ 0004h
RX1PPS_RX1PPS3_POSN                      equ 0003h
RX1PPS_RX1PPS3_POSITION                  equ 0003h
RX1PPS_RX1PPS3_SIZE                      equ 0001h
RX1PPS_RX1PPS3_LENGTH                    equ 0001h
RX1PPS_RX1PPS3_MASK                      equ 0008h
RX1PPS_RX1PPS4_POSN                      equ 0004h
RX1PPS_RX1PPS4_POSITION                  equ 0004h
RX1PPS_RX1PPS4_SIZE                      equ 0001h
RX1PPS_RX1PPS4_LENGTH                    equ 0001h
RX1PPS_RX1PPS4_MASK                      equ 0010h

// Register: CK1PPS
#define CK1PPS CK1PPS
CK1PPS                                   equ 0EB6h
// bitfield definitions
CK1PPS_PIN_POSN                          equ 0000h
CK1PPS_PIN_POSITION                      equ 0000h
CK1PPS_PIN_SIZE                          equ 0003h
CK1PPS_PIN_LENGTH                        equ 0003h
CK1PPS_PIN_MASK                          equ 0007h
CK1PPS_PORT_POSN                         equ 0003h
CK1PPS_PORT_POSITION                     equ 0003h
CK1PPS_PORT_SIZE                         equ 0002h
CK1PPS_PORT_LENGTH                       equ 0002h
CK1PPS_PORT_MASK                         equ 0018h
CK1PPS_TXPPS_POSN                        equ 0000h
CK1PPS_TXPPS_POSITION                    equ 0000h
CK1PPS_TXPPS_SIZE                        equ 0005h
CK1PPS_TXPPS_LENGTH                      equ 0005h
CK1PPS_TXPPS_MASK                        equ 001Fh
CK1PPS_TXPPS0_POSN                       equ 0000h
CK1PPS_TXPPS0_POSITION                   equ 0000h
CK1PPS_TXPPS0_SIZE                       equ 0001h
CK1PPS_TXPPS0_LENGTH                     equ 0001h
CK1PPS_TXPPS0_MASK                       equ 0001h
CK1PPS_TXPPS1_POSN                       equ 0001h
CK1PPS_TXPPS1_POSITION                   equ 0001h
CK1PPS_TXPPS1_SIZE                       equ 0001h
CK1PPS_TXPPS1_LENGTH                     equ 0001h
CK1PPS_TXPPS1_MASK                       equ 0002h
CK1PPS_TXPPS2_POSN                       equ 0002h
CK1PPS_TXPPS2_POSITION                   equ 0002h
CK1PPS_TXPPS2_SIZE                       equ 0001h
CK1PPS_TXPPS2_LENGTH                     equ 0001h
CK1PPS_TXPPS2_MASK                       equ 0004h
CK1PPS_TXPPS3_POSN                       equ 0003h
CK1PPS_TXPPS3_POSITION                   equ 0003h
CK1PPS_TXPPS3_SIZE                       equ 0001h
CK1PPS_TXPPS3_LENGTH                     equ 0001h
CK1PPS_TXPPS3_MASK                       equ 0008h
CK1PPS_TXPPS4_POSN                       equ 0004h
CK1PPS_TXPPS4_POSITION                   equ 0004h
CK1PPS_TXPPS4_SIZE                       equ 0001h
CK1PPS_TXPPS4_LENGTH                     equ 0001h
CK1PPS_TXPPS4_MASK                       equ 0010h
CK1PPS_TX1PPS_POSN                       equ 0000h
CK1PPS_TX1PPS_POSITION                   equ 0000h
CK1PPS_TX1PPS_SIZE                       equ 0005h
CK1PPS_TX1PPS_LENGTH                     equ 0005h
CK1PPS_TX1PPS_MASK                       equ 001Fh
CK1PPS_TX1PPS0_POSN                      equ 0000h
CK1PPS_TX1PPS0_POSITION                  equ 0000h
CK1PPS_TX1PPS0_SIZE                      equ 0001h
CK1PPS_TX1PPS0_LENGTH                    equ 0001h
CK1PPS_TX1PPS0_MASK                      equ 0001h
CK1PPS_TX1PPS1_POSN                      equ 0001h
CK1PPS_TX1PPS1_POSITION                  equ 0001h
CK1PPS_TX1PPS1_SIZE                      equ 0001h
CK1PPS_TX1PPS1_LENGTH                    equ 0001h
CK1PPS_TX1PPS1_MASK                      equ 0002h
CK1PPS_TX1PPS2_POSN                      equ 0002h
CK1PPS_TX1PPS2_POSITION                  equ 0002h
CK1PPS_TX1PPS2_SIZE                      equ 0001h
CK1PPS_TX1PPS2_LENGTH                    equ 0001h
CK1PPS_TX1PPS2_MASK                      equ 0004h
CK1PPS_TX1PPS3_POSN                      equ 0003h
CK1PPS_TX1PPS3_POSITION                  equ 0003h
CK1PPS_TX1PPS3_SIZE                      equ 0001h
CK1PPS_TX1PPS3_LENGTH                    equ 0001h
CK1PPS_TX1PPS3_MASK                      equ 0008h
CK1PPS_TX1PPS4_POSN                      equ 0004h
CK1PPS_TX1PPS4_POSITION                  equ 0004h
CK1PPS_TX1PPS4_SIZE                      equ 0001h
CK1PPS_TX1PPS4_LENGTH                    equ 0001h
CK1PPS_TX1PPS4_MASK                      equ 0010h

// Register: SSP1CLKPPS
#define SSP1CLKPPS SSP1CLKPPS
SSP1CLKPPS                               equ 0EB7h
// bitfield definitions
SSP1CLKPPS_PIN_POSN                      equ 0000h
SSP1CLKPPS_PIN_POSITION                  equ 0000h
SSP1CLKPPS_PIN_SIZE                      equ 0003h
SSP1CLKPPS_PIN_LENGTH                    equ 0003h
SSP1CLKPPS_PIN_MASK                      equ 0007h
SSP1CLKPPS_PORT_POSN                     equ 0003h
SSP1CLKPPS_PORT_POSITION                 equ 0003h
SSP1CLKPPS_PORT_SIZE                     equ 0002h
SSP1CLKPPS_PORT_LENGTH                   equ 0002h
SSP1CLKPPS_PORT_MASK                     equ 0018h
SSP1CLKPPS_SSPCLKPPS_POSN                equ 0000h
SSP1CLKPPS_SSPCLKPPS_POSITION            equ 0000h
SSP1CLKPPS_SSPCLKPPS_SIZE                equ 0005h
SSP1CLKPPS_SSPCLKPPS_LENGTH              equ 0005h
SSP1CLKPPS_SSPCLKPPS_MASK                equ 001Fh
SSP1CLKPPS_SSPCLKPPS0_POSN               equ 0000h
SSP1CLKPPS_SSPCLKPPS0_POSITION           equ 0000h
SSP1CLKPPS_SSPCLKPPS0_SIZE               equ 0001h
SSP1CLKPPS_SSPCLKPPS0_LENGTH             equ 0001h
SSP1CLKPPS_SSPCLKPPS0_MASK               equ 0001h
SSP1CLKPPS_SSPCLKPPS1_POSN               equ 0001h
SSP1CLKPPS_SSPCLKPPS1_POSITION           equ 0001h
SSP1CLKPPS_SSPCLKPPS1_SIZE               equ 0001h
SSP1CLKPPS_SSPCLKPPS1_LENGTH             equ 0001h
SSP1CLKPPS_SSPCLKPPS1_MASK               equ 0002h
SSP1CLKPPS_SSPCLKPPS2_POSN               equ 0002h
SSP1CLKPPS_SSPCLKPPS2_POSITION           equ 0002h
SSP1CLKPPS_SSPCLKPPS2_SIZE               equ 0001h
SSP1CLKPPS_SSPCLKPPS2_LENGTH             equ 0001h
SSP1CLKPPS_SSPCLKPPS2_MASK               equ 0004h
SSP1CLKPPS_SSPCLKPPS3_POSN               equ 0003h
SSP1CLKPPS_SSPCLKPPS3_POSITION           equ 0003h
SSP1CLKPPS_SSPCLKPPS3_SIZE               equ 0001h
SSP1CLKPPS_SSPCLKPPS3_LENGTH             equ 0001h
SSP1CLKPPS_SSPCLKPPS3_MASK               equ 0008h
SSP1CLKPPS_SSPCLKPPS4_POSN               equ 0004h
SSP1CLKPPS_SSPCLKPPS4_POSITION           equ 0004h
SSP1CLKPPS_SSPCLKPPS4_SIZE               equ 0001h
SSP1CLKPPS_SSPCLKPPS4_LENGTH             equ 0001h
SSP1CLKPPS_SSPCLKPPS4_MASK               equ 0010h
SSP1CLKPPS_SSP1CLKPPS_POSN               equ 0000h
SSP1CLKPPS_SSP1CLKPPS_POSITION           equ 0000h
SSP1CLKPPS_SSP1CLKPPS_SIZE               equ 0005h
SSP1CLKPPS_SSP1CLKPPS_LENGTH             equ 0005h
SSP1CLKPPS_SSP1CLKPPS_MASK               equ 001Fh
SSP1CLKPPS_SSP1CLKPPS0_POSN              equ 0000h
SSP1CLKPPS_SSP1CLKPPS0_POSITION          equ 0000h
SSP1CLKPPS_SSP1CLKPPS0_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS0_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS0_MASK              equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_POSN              equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_POSITION          equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS1_MASK              equ 0002h
SSP1CLKPPS_SSP1CLKPPS2_POSN              equ 0002h
SSP1CLKPPS_SSP1CLKPPS2_POSITION          equ 0002h
SSP1CLKPPS_SSP1CLKPPS2_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS2_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS2_MASK              equ 0004h
SSP1CLKPPS_SSP1CLKPPS3_POSN              equ 0003h
SSP1CLKPPS_SSP1CLKPPS3_POSITION          equ 0003h
SSP1CLKPPS_SSP1CLKPPS3_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS3_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS3_MASK              equ 0008h
SSP1CLKPPS_SSP1CLKPPS4_POSN              equ 0004h
SSP1CLKPPS_SSP1CLKPPS4_POSITION          equ 0004h
SSP1CLKPPS_SSP1CLKPPS4_SIZE              equ 0001h
SSP1CLKPPS_SSP1CLKPPS4_LENGTH            equ 0001h
SSP1CLKPPS_SSP1CLKPPS4_MASK              equ 0010h

// Register: SSP1DATPPS
#define SSP1DATPPS SSP1DATPPS
SSP1DATPPS                               equ 0EB8h
// bitfield definitions
SSP1DATPPS_PIN_POSN                      equ 0000h
SSP1DATPPS_PIN_POSITION                  equ 0000h
SSP1DATPPS_PIN_SIZE                      equ 0003h
SSP1DATPPS_PIN_LENGTH                    equ 0003h
SSP1DATPPS_PIN_MASK                      equ 0007h
SSP1DATPPS_PORT_POSN                     equ 0003h
SSP1DATPPS_PORT_POSITION                 equ 0003h
SSP1DATPPS_PORT_SIZE                     equ 0002h
SSP1DATPPS_PORT_LENGTH                   equ 0002h
SSP1DATPPS_PORT_MASK                     equ 0018h
SSP1DATPPS_SSPDATPPS_POSN                equ 0000h
SSP1DATPPS_SSPDATPPS_POSITION            equ 0000h
SSP1DATPPS_SSPDATPPS_SIZE                equ 0005h
SSP1DATPPS_SSPDATPPS_LENGTH              equ 0005h
SSP1DATPPS_SSPDATPPS_MASK                equ 001Fh
SSP1DATPPS_SSPDATPPS0_POSN               equ 0000h
SSP1DATPPS_SSPDATPPS0_POSITION           equ 0000h
SSP1DATPPS_SSPDATPPS0_SIZE               equ 0001h
SSP1DATPPS_SSPDATPPS0_LENGTH             equ 0001h
SSP1DATPPS_SSPDATPPS0_MASK               equ 0001h
SSP1DATPPS_SSPDATPPS1_POSN               equ 0001h
SSP1DATPPS_SSPDATPPS1_POSITION           equ 0001h
SSP1DATPPS_SSPDATPPS1_SIZE               equ 0001h
SSP1DATPPS_SSPDATPPS1_LENGTH             equ 0001h
SSP1DATPPS_SSPDATPPS1_MASK               equ 0002h
SSP1DATPPS_SSPDATPPS2_POSN               equ 0002h
SSP1DATPPS_SSPDATPPS2_POSITION           equ 0002h
SSP1DATPPS_SSPDATPPS2_SIZE               equ 0001h
SSP1DATPPS_SSPDATPPS2_LENGTH             equ 0001h
SSP1DATPPS_SSPDATPPS2_MASK               equ 0004h
SSP1DATPPS_SSPDATPPS3_POSN               equ 0003h
SSP1DATPPS_SSPDATPPS3_POSITION           equ 0003h
SSP1DATPPS_SSPDATPPS3_SIZE               equ 0001h
SSP1DATPPS_SSPDATPPS3_LENGTH             equ 0001h
SSP1DATPPS_SSPDATPPS3_MASK               equ 0008h
SSP1DATPPS_SSPDATPPS4_POSN               equ 0004h
SSP1DATPPS_SSPDATPPS4_POSITION           equ 0004h
SSP1DATPPS_SSPDATPPS4_SIZE               equ 0001h
SSP1DATPPS_SSPDATPPS4_LENGTH             equ 0001h
SSP1DATPPS_SSPDATPPS4_MASK               equ 0010h
SSP1DATPPS_SSP1DATPPS_POSN               equ 0000h
SSP1DATPPS_SSP1DATPPS_POSITION           equ 0000h
SSP1DATPPS_SSP1DATPPS_SIZE               equ 0005h
SSP1DATPPS_SSP1DATPPS_LENGTH             equ 0005h
SSP1DATPPS_SSP1DATPPS_MASK               equ 001Fh
SSP1DATPPS_SSP1DATPPS0_POSN              equ 0000h
SSP1DATPPS_SSP1DATPPS0_POSITION          equ 0000h
SSP1DATPPS_SSP1DATPPS0_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS0_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS0_MASK              equ 0001h
SSP1DATPPS_SSP1DATPPS1_POSN              equ 0001h
SSP1DATPPS_SSP1DATPPS1_POSITION          equ 0001h
SSP1DATPPS_SSP1DATPPS1_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS1_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS1_MASK              equ 0002h
SSP1DATPPS_SSP1DATPPS2_POSN              equ 0002h
SSP1DATPPS_SSP1DATPPS2_POSITION          equ 0002h
SSP1DATPPS_SSP1DATPPS2_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS2_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS2_MASK              equ 0004h
SSP1DATPPS_SSP1DATPPS3_POSN              equ 0003h
SSP1DATPPS_SSP1DATPPS3_POSITION          equ 0003h
SSP1DATPPS_SSP1DATPPS3_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS3_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS3_MASK              equ 0008h
SSP1DATPPS_SSP1DATPPS4_POSN              equ 0004h
SSP1DATPPS_SSP1DATPPS4_POSITION          equ 0004h
SSP1DATPPS_SSP1DATPPS4_SIZE              equ 0001h
SSP1DATPPS_SSP1DATPPS4_LENGTH            equ 0001h
SSP1DATPPS_SSP1DATPPS4_MASK              equ 0010h

// Register: SSP1SSPPS
#define SSP1SSPPS SSP1SSPPS
SSP1SSPPS                                equ 0EB9h
// bitfield definitions
SSP1SSPPS_PIN_POSN                       equ 0000h
SSP1SSPPS_PIN_POSITION                   equ 0000h
SSP1SSPPS_PIN_SIZE                       equ 0003h
SSP1SSPPS_PIN_LENGTH                     equ 0003h
SSP1SSPPS_PIN_MASK                       equ 0007h
SSP1SSPPS_PORT_POSN                      equ 0003h
SSP1SSPPS_PORT_POSITION                  equ 0003h
SSP1SSPPS_PORT_SIZE                      equ 0002h
SSP1SSPPS_PORT_LENGTH                    equ 0002h
SSP1SSPPS_PORT_MASK                      equ 0018h
SSP1SSPPS_SSPSSPPS_POSN                  equ 0000h
SSP1SSPPS_SSPSSPPS_POSITION              equ 0000h
SSP1SSPPS_SSPSSPPS_SIZE                  equ 0005h
SSP1SSPPS_SSPSSPPS_LENGTH                equ 0005h
SSP1SSPPS_SSPSSPPS_MASK                  equ 001Fh
SSP1SSPPS_SSPSSPPS0_POSN                 equ 0000h
SSP1SSPPS_SSPSSPPS0_POSITION             equ 0000h
SSP1SSPPS_SSPSSPPS0_SIZE                 equ 0001h
SSP1SSPPS_SSPSSPPS0_LENGTH               equ 0001h
SSP1SSPPS_SSPSSPPS0_MASK                 equ 0001h
SSP1SSPPS_SSPSSPPS1_POSN                 equ 0001h
SSP1SSPPS_SSPSSPPS1_POSITION             equ 0001h
SSP1SSPPS_SSPSSPPS1_SIZE                 equ 0001h
SSP1SSPPS_SSPSSPPS1_LENGTH               equ 0001h
SSP1SSPPS_SSPSSPPS1_MASK                 equ 0002h
SSP1SSPPS_SSPSSPPS2_POSN                 equ 0002h
SSP1SSPPS_SSPSSPPS2_POSITION             equ 0002h
SSP1SSPPS_SSPSSPPS2_SIZE                 equ 0001h
SSP1SSPPS_SSPSSPPS2_LENGTH               equ 0001h
SSP1SSPPS_SSPSSPPS2_MASK                 equ 0004h
SSP1SSPPS_SSPSSPPS3_POSN                 equ 0003h
SSP1SSPPS_SSPSSPPS3_POSITION             equ 0003h
SSP1SSPPS_SSPSSPPS3_SIZE                 equ 0001h
SSP1SSPPS_SSPSSPPS3_LENGTH               equ 0001h
SSP1SSPPS_SSPSSPPS3_MASK                 equ 0008h
SSP1SSPPS_SSPSSPPS4_POSN                 equ 0004h
SSP1SSPPS_SSPSSPPS4_POSITION             equ 0004h
SSP1SSPPS_SSPSSPPS4_SIZE                 equ 0001h
SSP1SSPPS_SSPSSPPS4_LENGTH               equ 0001h
SSP1SSPPS_SSPSSPPS4_MASK                 equ 0010h
SSP1SSPPS_SSP1SSPPS_POSN                 equ 0000h
SSP1SSPPS_SSP1SSPPS_POSITION             equ 0000h
SSP1SSPPS_SSP1SSPPS_SIZE                 equ 0005h
SSP1SSPPS_SSP1SSPPS_LENGTH               equ 0005h
SSP1SSPPS_SSP1SSPPS_MASK                 equ 001Fh
SSP1SSPPS_SSP1SSPPS0_POSN                equ 0000h
SSP1SSPPS_SSP1SSPPS0_POSITION            equ 0000h
SSP1SSPPS_SSP1SSPPS0_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS0_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS0_MASK                equ 0001h
SSP1SSPPS_SSP1SSPPS1_POSN                equ 0001h
SSP1SSPPS_SSP1SSPPS1_POSITION            equ 0001h
SSP1SSPPS_SSP1SSPPS1_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS1_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS1_MASK                equ 0002h
SSP1SSPPS_SSP1SSPPS2_POSN                equ 0002h
SSP1SSPPS_SSP1SSPPS2_POSITION            equ 0002h
SSP1SSPPS_SSP1SSPPS2_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS2_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS2_MASK                equ 0004h
SSP1SSPPS_SSP1SSPPS3_POSN                equ 0003h
SSP1SSPPS_SSP1SSPPS3_POSITION            equ 0003h
SSP1SSPPS_SSP1SSPPS3_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS3_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS3_MASK                equ 0008h
SSP1SSPPS_SSP1SSPPS4_POSN                equ 0004h
SSP1SSPPS_SSP1SSPPS4_POSITION            equ 0004h
SSP1SSPPS_SSP1SSPPS4_SIZE                equ 0001h
SSP1SSPPS_SSP1SSPPS4_LENGTH              equ 0001h
SSP1SSPPS_SSP1SSPPS4_MASK                equ 0010h

// Register: IPR0
#define IPR0 IPR0
IPR0                                     equ 0EBAh
// bitfield definitions
IPR0_INT0IP_POSN                         equ 0000h
IPR0_INT0IP_POSITION                     equ 0000h
IPR0_INT0IP_SIZE                         equ 0001h
IPR0_INT0IP_LENGTH                       equ 0001h
IPR0_INT0IP_MASK                         equ 0001h
IPR0_INT1IP_POSN                         equ 0001h
IPR0_INT1IP_POSITION                     equ 0001h
IPR0_INT1IP_SIZE                         equ 0001h
IPR0_INT1IP_LENGTH                       equ 0001h
IPR0_INT1IP_MASK                         equ 0002h
IPR0_INT2IP_POSN                         equ 0002h
IPR0_INT2IP_POSITION                     equ 0002h
IPR0_INT2IP_SIZE                         equ 0001h
IPR0_INT2IP_LENGTH                       equ 0001h
IPR0_INT2IP_MASK                         equ 0004h
IPR0_IOCIP_POSN                          equ 0004h
IPR0_IOCIP_POSITION                      equ 0004h
IPR0_IOCIP_SIZE                          equ 0001h
IPR0_IOCIP_LENGTH                        equ 0001h
IPR0_IOCIP_MASK                          equ 0010h
IPR0_TMR0IP_POSN                         equ 0005h
IPR0_TMR0IP_POSITION                     equ 0005h
IPR0_TMR0IP_SIZE                         equ 0001h
IPR0_TMR0IP_LENGTH                       equ 0001h
IPR0_TMR0IP_MASK                         equ 0020h

// Register: IPR1
#define IPR1 IPR1
IPR1                                     equ 0EBBh
// bitfield definitions
IPR1_ADIP_POSN                           equ 0000h
IPR1_ADIP_POSITION                       equ 0000h
IPR1_ADIP_SIZE                           equ 0001h
IPR1_ADIP_LENGTH                         equ 0001h
IPR1_ADIP_MASK                           equ 0001h
IPR1_ADTIP_POSN                          equ 0001h
IPR1_ADTIP_POSITION                      equ 0001h
IPR1_ADTIP_SIZE                          equ 0001h
IPR1_ADTIP_LENGTH                        equ 0001h
IPR1_ADTIP_MASK                          equ 0002h
IPR1_CSWIP_POSN                          equ 0006h
IPR1_CSWIP_POSITION                      equ 0006h
IPR1_CSWIP_SIZE                          equ 0001h
IPR1_CSWIP_LENGTH                        equ 0001h
IPR1_CSWIP_MASK                          equ 0040h
IPR1_OSCFIP_POSN                         equ 0007h
IPR1_OSCFIP_POSITION                     equ 0007h
IPR1_OSCFIP_SIZE                         equ 0001h
IPR1_OSCFIP_LENGTH                       equ 0001h
IPR1_OSCFIP_MASK                         equ 0080h
IPR1_PSPIP_POSN                          equ 0007h
IPR1_PSPIP_POSITION                      equ 0007h
IPR1_PSPIP_SIZE                          equ 0001h
IPR1_PSPIP_LENGTH                        equ 0001h
IPR1_PSPIP_MASK                          equ 0080h

// Register: IPR2
#define IPR2 IPR2
IPR2                                     equ 0EBCh
// bitfield definitions
IPR2_C1IP_POSN                           equ 0000h
IPR2_C1IP_POSITION                       equ 0000h
IPR2_C1IP_SIZE                           equ 0001h
IPR2_C1IP_LENGTH                         equ 0001h
IPR2_C1IP_MASK                           equ 0001h
IPR2_C2IP_POSN                           equ 0001h
IPR2_C2IP_POSITION                       equ 0001h
IPR2_C2IP_SIZE                           equ 0001h
IPR2_C2IP_LENGTH                         equ 0001h
IPR2_C2IP_MASK                           equ 0002h
IPR2_ZCDIP_POSN                          equ 0006h
IPR2_ZCDIP_POSITION                      equ 0006h
IPR2_ZCDIP_SIZE                          equ 0001h
IPR2_ZCDIP_LENGTH                        equ 0001h
IPR2_ZCDIP_MASK                          equ 0040h
IPR2_HLVDIP_POSN                         equ 0007h
IPR2_HLVDIP_POSITION                     equ 0007h
IPR2_HLVDIP_SIZE                         equ 0001h
IPR2_HLVDIP_LENGTH                       equ 0001h
IPR2_HLVDIP_MASK                         equ 0080h
IPR2_CMIP_POSN                           equ 0006h
IPR2_CMIP_POSITION                       equ 0006h
IPR2_CMIP_SIZE                           equ 0001h
IPR2_CMIP_LENGTH                         equ 0001h
IPR2_CMIP_MASK                           equ 0040h

// Register: IPR3
#define IPR3 IPR3
IPR3                                     equ 0EBDh
// bitfield definitions
IPR3_SSPIP_POSN                          equ 0000h
IPR3_SSPIP_POSITION                      equ 0000h
IPR3_SSPIP_SIZE                          equ 0001h
IPR3_SSPIP_LENGTH                        equ 0001h
IPR3_SSPIP_MASK                          equ 0001h
IPR3_BCLIP_POSN                          equ 0001h
IPR3_BCLIP_POSITION                      equ 0001h
IPR3_BCLIP_SIZE                          equ 0001h
IPR3_BCLIP_LENGTH                        equ 0001h
IPR3_BCLIP_MASK                          equ 0002h
IPR3_TXIP_POSN                           equ 0004h
IPR3_TXIP_POSITION                       equ 0004h
IPR3_TXIP_SIZE                           equ 0001h
IPR3_TXIP_LENGTH                         equ 0001h
IPR3_TXIP_MASK                           equ 0010h
IPR3_RCIP_POSN                           equ 0005h
IPR3_RCIP_POSITION                       equ 0005h
IPR3_RCIP_SIZE                           equ 0001h
IPR3_RCIP_LENGTH                         equ 0001h
IPR3_RCIP_MASK                           equ 0020h
IPR3_SSP1IP_POSN                         equ 0000h
IPR3_SSP1IP_POSITION                     equ 0000h
IPR3_SSP1IP_SIZE                         equ 0001h
IPR3_SSP1IP_LENGTH                       equ 0001h
IPR3_SSP1IP_MASK                         equ 0001h
IPR3_BCL1IP_POSN                         equ 0001h
IPR3_BCL1IP_POSITION                     equ 0001h
IPR3_BCL1IP_SIZE                         equ 0001h
IPR3_BCL1IP_LENGTH                       equ 0001h
IPR3_BCL1IP_MASK                         equ 0002h
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

// Register: IPR4
#define IPR4 IPR4
IPR4                                     equ 0EBEh
// bitfield definitions
IPR4_TMR1IP_POSN                         equ 0000h
IPR4_TMR1IP_POSITION                     equ 0000h
IPR4_TMR1IP_SIZE                         equ 0001h
IPR4_TMR1IP_LENGTH                       equ 0001h
IPR4_TMR1IP_MASK                         equ 0001h
IPR4_TMR2IP_POSN                         equ 0001h
IPR4_TMR2IP_POSITION                     equ 0001h
IPR4_TMR2IP_SIZE                         equ 0001h
IPR4_TMR2IP_LENGTH                       equ 0001h
IPR4_TMR2IP_MASK                         equ 0002h
IPR4_TMR3IP_POSN                         equ 0002h
IPR4_TMR3IP_POSITION                     equ 0002h
IPR4_TMR3IP_SIZE                         equ 0001h
IPR4_TMR3IP_LENGTH                       equ 0001h
IPR4_TMR3IP_MASK                         equ 0004h
IPR4_TMR4IP_POSN                         equ 0003h
IPR4_TMR4IP_POSITION                     equ 0003h
IPR4_TMR4IP_SIZE                         equ 0001h
IPR4_TMR4IP_LENGTH                       equ 0001h
IPR4_TMR4IP_MASK                         equ 0008h
IPR4_TMR5IP_POSN                         equ 0004h
IPR4_TMR5IP_POSITION                     equ 0004h
IPR4_TMR5IP_SIZE                         equ 0001h
IPR4_TMR5IP_LENGTH                       equ 0001h
IPR4_TMR5IP_MASK                         equ 0010h
IPR4_TMR6IP_POSN                         equ 0005h
IPR4_TMR6IP_POSITION                     equ 0005h
IPR4_TMR6IP_SIZE                         equ 0001h
IPR4_TMR6IP_LENGTH                       equ 0001h
IPR4_TMR6IP_MASK                         equ 0020h
IPR4_CCIP3IP_POSN                        equ 0000h
IPR4_CCIP3IP_POSITION                    equ 0000h
IPR4_CCIP3IP_SIZE                        equ 0001h
IPR4_CCIP3IP_LENGTH                      equ 0001h
IPR4_CCIP3IP_MASK                        equ 0001h

// Register: IPR5
#define IPR5 IPR5
IPR5                                     equ 0EBFh
// bitfield definitions
IPR5_TMR1GIP_POSN                        equ 0000h
IPR5_TMR1GIP_POSITION                    equ 0000h
IPR5_TMR1GIP_SIZE                        equ 0001h
IPR5_TMR1GIP_LENGTH                      equ 0001h
IPR5_TMR1GIP_MASK                        equ 0001h
IPR5_TMR3GIP_POSN                        equ 0001h
IPR5_TMR3GIP_POSITION                    equ 0001h
IPR5_TMR3GIP_SIZE                        equ 0001h
IPR5_TMR3GIP_LENGTH                      equ 0001h
IPR5_TMR3GIP_MASK                        equ 0002h
IPR5_TMR5GIP_POSN                        equ 0002h
IPR5_TMR5GIP_POSITION                    equ 0002h
IPR5_TMR5GIP_SIZE                        equ 0001h
IPR5_TMR5GIP_LENGTH                      equ 0001h
IPR5_TMR5GIP_MASK                        equ 0004h
IPR5_CCH05_POSN                          equ 0000h
IPR5_CCH05_POSITION                      equ 0000h
IPR5_CCH05_SIZE                          equ 0001h
IPR5_CCH05_LENGTH                        equ 0001h
IPR5_CCH05_MASK                          equ 0001h
IPR5_CCH15_POSN                          equ 0001h
IPR5_CCH15_POSITION                      equ 0001h
IPR5_CCH15_SIZE                          equ 0001h
IPR5_CCH15_LENGTH                        equ 0001h
IPR5_CCH15_MASK                          equ 0002h

// Register: IPR6
#define IPR6 IPR6
IPR6                                     equ 0EC0h
// bitfield definitions
IPR6_CCP1IP_POSN                         equ 0000h
IPR6_CCP1IP_POSITION                     equ 0000h
IPR6_CCP1IP_SIZE                         equ 0001h
IPR6_CCP1IP_LENGTH                       equ 0001h
IPR6_CCP1IP_MASK                         equ 0001h
IPR6_CCP2IP_POSN                         equ 0001h
IPR6_CCP2IP_POSITION                     equ 0001h
IPR6_CCP2IP_SIZE                         equ 0001h
IPR6_CCP2IP_LENGTH                       equ 0001h
IPR6_CCP2IP_MASK                         equ 0002h

// Register: IPR7
#define IPR7 IPR7
IPR7                                     equ 0EC1h
// bitfield definitions
IPR7_CWGIP_POSN                          equ 0000h
IPR7_CWGIP_POSITION                      equ 0000h
IPR7_CWGIP_SIZE                          equ 0001h
IPR7_CWGIP_LENGTH                        equ 0001h
IPR7_CWGIP_MASK                          equ 0001h
IPR7_NVMIP_POSN                          equ 0005h
IPR7_NVMIP_POSITION                      equ 0005h
IPR7_NVMIP_SIZE                          equ 0001h
IPR7_NVMIP_LENGTH                        equ 0001h
IPR7_NVMIP_MASK                          equ 0020h
IPR7_CRCIP_POSN                          equ 0006h
IPR7_CRCIP_POSITION                      equ 0006h
IPR7_CRCIP_SIZE                          equ 0001h
IPR7_CRCIP_LENGTH                        equ 0001h
IPR7_CRCIP_MASK                          equ 0040h
IPR7_SCANIP_POSN                         equ 0007h
IPR7_SCANIP_POSITION                     equ 0007h
IPR7_SCANIP_SIZE                         equ 0001h
IPR7_SCANIP_LENGTH                       equ 0001h
IPR7_SCANIP_MASK                         equ 0080h
IPR7_CWG1IP_POSN                         equ 0000h
IPR7_CWG1IP_POSITION                     equ 0000h
IPR7_CWG1IP_SIZE                         equ 0001h
IPR7_CWG1IP_LENGTH                       equ 0001h
IPR7_CWG1IP_MASK                         equ 0001h

// Register: PIE0
#define PIE0 PIE0
PIE0                                     equ 0EC2h
// bitfield definitions
PIE0_INT0IE_POSN                         equ 0000h
PIE0_INT0IE_POSITION                     equ 0000h
PIE0_INT0IE_SIZE                         equ 0001h
PIE0_INT0IE_LENGTH                       equ 0001h
PIE0_INT0IE_MASK                         equ 0001h
PIE0_INT1IE_POSN                         equ 0001h
PIE0_INT1IE_POSITION                     equ 0001h
PIE0_INT1IE_SIZE                         equ 0001h
PIE0_INT1IE_LENGTH                       equ 0001h
PIE0_INT1IE_MASK                         equ 0002h
PIE0_INT2IE_POSN                         equ 0002h
PIE0_INT2IE_POSITION                     equ 0002h
PIE0_INT2IE_SIZE                         equ 0001h
PIE0_INT2IE_LENGTH                       equ 0001h
PIE0_INT2IE_MASK                         equ 0004h
PIE0_IOCIE_POSN                          equ 0004h
PIE0_IOCIE_POSITION                      equ 0004h
PIE0_IOCIE_SIZE                          equ 0001h
PIE0_IOCIE_LENGTH                        equ 0001h
PIE0_IOCIE_MASK                          equ 0010h
PIE0_TMR0IE_POSN                         equ 0005h
PIE0_TMR0IE_POSITION                     equ 0005h
PIE0_TMR0IE_SIZE                         equ 0001h
PIE0_TMR0IE_LENGTH                       equ 0001h
PIE0_TMR0IE_MASK                         equ 0020h

// Register: PIE1
#define PIE1 PIE1
PIE1                                     equ 0EC3h
// bitfield definitions
PIE1_ADIE_POSN                           equ 0000h
PIE1_ADIE_POSITION                       equ 0000h
PIE1_ADIE_SIZE                           equ 0001h
PIE1_ADIE_LENGTH                         equ 0001h
PIE1_ADIE_MASK                           equ 0001h
PIE1_ADTIE_POSN                          equ 0001h
PIE1_ADTIE_POSITION                      equ 0001h
PIE1_ADTIE_SIZE                          equ 0001h
PIE1_ADTIE_LENGTH                        equ 0001h
PIE1_ADTIE_MASK                          equ 0002h
PIE1_CSWIE_POSN                          equ 0006h
PIE1_CSWIE_POSITION                      equ 0006h
PIE1_CSWIE_SIZE                          equ 0001h
PIE1_CSWIE_LENGTH                        equ 0001h
PIE1_CSWIE_MASK                          equ 0040h
PIE1_OSCFIE_POSN                         equ 0007h
PIE1_OSCFIE_POSITION                     equ 0007h
PIE1_OSCFIE_SIZE                         equ 0001h
PIE1_OSCFIE_LENGTH                       equ 0001h
PIE1_OSCFIE_MASK                         equ 0080h
PIE1_PSPIE_POSN                          equ 0007h
PIE1_PSPIE_POSITION                      equ 0007h
PIE1_PSPIE_SIZE                          equ 0001h
PIE1_PSPIE_LENGTH                        equ 0001h
PIE1_PSPIE_MASK                          equ 0080h

// Register: PIE2
#define PIE2 PIE2
PIE2                                     equ 0EC4h
// bitfield definitions
PIE2_C1IE_POSN                           equ 0000h
PIE2_C1IE_POSITION                       equ 0000h
PIE2_C1IE_SIZE                           equ 0001h
PIE2_C1IE_LENGTH                         equ 0001h
PIE2_C1IE_MASK                           equ 0001h
PIE2_C2IE_POSN                           equ 0001h
PIE2_C2IE_POSITION                       equ 0001h
PIE2_C2IE_SIZE                           equ 0001h
PIE2_C2IE_LENGTH                         equ 0001h
PIE2_C2IE_MASK                           equ 0002h
PIE2_ZCDIE_POSN                          equ 0006h
PIE2_ZCDIE_POSITION                      equ 0006h
PIE2_ZCDIE_SIZE                          equ 0001h
PIE2_ZCDIE_LENGTH                        equ 0001h
PIE2_ZCDIE_MASK                          equ 0040h
PIE2_HLVDIE_POSN                         equ 0007h
PIE2_HLVDIE_POSITION                     equ 0007h
PIE2_HLVDIE_SIZE                         equ 0001h
PIE2_HLVDIE_LENGTH                       equ 0001h
PIE2_HLVDIE_MASK                         equ 0080h
PIE2_CMIE_POSN                           equ 0006h
PIE2_CMIE_POSITION                       equ 0006h
PIE2_CMIE_SIZE                           equ 0001h
PIE2_CMIE_LENGTH                         equ 0001h
PIE2_CMIE_MASK                           equ 0040h

// Register: PIE3
#define PIE3 PIE3
PIE3                                     equ 0EC5h
// bitfield definitions
PIE3_SSP1IE_POSN                         equ 0000h
PIE3_SSP1IE_POSITION                     equ 0000h
PIE3_SSP1IE_SIZE                         equ 0001h
PIE3_SSP1IE_LENGTH                       equ 0001h
PIE3_SSP1IE_MASK                         equ 0001h
PIE3_BCL1IE_POSN                         equ 0001h
PIE3_BCL1IE_POSITION                     equ 0001h
PIE3_BCL1IE_SIZE                         equ 0001h
PIE3_BCL1IE_LENGTH                       equ 0001h
PIE3_BCL1IE_MASK                         equ 0002h
PIE3_TX1IE_POSN                          equ 0004h
PIE3_TX1IE_POSITION                      equ 0004h
PIE3_TX1IE_SIZE                          equ 0001h
PIE3_TX1IE_LENGTH                        equ 0001h
PIE3_TX1IE_MASK                          equ 0010h
PIE3_RC1IE_POSN                          equ 0005h
PIE3_RC1IE_POSITION                      equ 0005h
PIE3_RC1IE_SIZE                          equ 0001h
PIE3_RC1IE_LENGTH                        equ 0001h
PIE3_RC1IE_MASK                          equ 0020h
PIE3_SSPIE_POSN                          equ 0000h
PIE3_SSPIE_POSITION                      equ 0000h
PIE3_SSPIE_SIZE                          equ 0001h
PIE3_SSPIE_LENGTH                        equ 0001h
PIE3_SSPIE_MASK                          equ 0001h
PIE3_BCLIE_POSN                          equ 0001h
PIE3_BCLIE_POSITION                      equ 0001h
PIE3_BCLIE_SIZE                          equ 0001h
PIE3_BCLIE_LENGTH                        equ 0001h
PIE3_BCLIE_MASK                          equ 0002h
PIE3_TXIE_POSN                           equ 0004h
PIE3_TXIE_POSITION                       equ 0004h
PIE3_TXIE_SIZE                           equ 0001h
PIE3_TXIE_LENGTH                         equ 0001h
PIE3_TXIE_MASK                           equ 0010h
PIE3_RCIE_POSN                           equ 0005h
PIE3_RCIE_POSITION                       equ 0005h
PIE3_RCIE_SIZE                           equ 0001h
PIE3_RCIE_LENGTH                         equ 0001h
PIE3_RCIE_MASK                           equ 0020h
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

// Register: PIE4
#define PIE4 PIE4
PIE4                                     equ 0EC6h
// bitfield definitions
PIE4_TMR1IE_POSN                         equ 0000h
PIE4_TMR1IE_POSITION                     equ 0000h
PIE4_TMR1IE_SIZE                         equ 0001h
PIE4_TMR1IE_LENGTH                       equ 0001h
PIE4_TMR1IE_MASK                         equ 0001h
PIE4_TMR2IE_POSN                         equ 0001h
PIE4_TMR2IE_POSITION                     equ 0001h
PIE4_TMR2IE_SIZE                         equ 0001h
PIE4_TMR2IE_LENGTH                       equ 0001h
PIE4_TMR2IE_MASK                         equ 0002h
PIE4_TMR3IE_POSN                         equ 0002h
PIE4_TMR3IE_POSITION                     equ 0002h
PIE4_TMR3IE_SIZE                         equ 0001h
PIE4_TMR3IE_LENGTH                       equ 0001h
PIE4_TMR3IE_MASK                         equ 0004h
PIE4_TMR4IE_POSN                         equ 0003h
PIE4_TMR4IE_POSITION                     equ 0003h
PIE4_TMR4IE_SIZE                         equ 0001h
PIE4_TMR4IE_LENGTH                       equ 0001h
PIE4_TMR4IE_MASK                         equ 0008h
PIE4_TMR5IE_POSN                         equ 0004h
PIE4_TMR5IE_POSITION                     equ 0004h
PIE4_TMR5IE_SIZE                         equ 0001h
PIE4_TMR5IE_LENGTH                       equ 0001h
PIE4_TMR5IE_MASK                         equ 0010h
PIE4_TMR6IE_POSN                         equ 0005h
PIE4_TMR6IE_POSITION                     equ 0005h
PIE4_TMR6IE_SIZE                         equ 0001h
PIE4_TMR6IE_LENGTH                       equ 0001h
PIE4_TMR6IE_MASK                         equ 0020h

// Register: PIE5
#define PIE5 PIE5
PIE5                                     equ 0EC7h
// bitfield definitions
PIE5_TMR1GIE_POSN                        equ 0000h
PIE5_TMR1GIE_POSITION                    equ 0000h
PIE5_TMR1GIE_SIZE                        equ 0001h
PIE5_TMR1GIE_LENGTH                      equ 0001h
PIE5_TMR1GIE_MASK                        equ 0001h
PIE5_TMR3GIE_POSN                        equ 0001h
PIE5_TMR3GIE_POSITION                    equ 0001h
PIE5_TMR3GIE_SIZE                        equ 0001h
PIE5_TMR3GIE_LENGTH                      equ 0001h
PIE5_TMR3GIE_MASK                        equ 0002h
PIE5_TMR5GIE_POSN                        equ 0002h
PIE5_TMR5GIE_POSITION                    equ 0002h
PIE5_TMR5GIE_SIZE                        equ 0001h
PIE5_TMR5GIE_LENGTH                      equ 0001h
PIE5_TMR5GIE_MASK                        equ 0004h

// Register: PIE6
#define PIE6 PIE6
PIE6                                     equ 0EC8h
// bitfield definitions
PIE6_CCP1IE_POSN                         equ 0000h
PIE6_CCP1IE_POSITION                     equ 0000h
PIE6_CCP1IE_SIZE                         equ 0001h
PIE6_CCP1IE_LENGTH                       equ 0001h
PIE6_CCP1IE_MASK                         equ 0001h
PIE6_CCP2IE_POSN                         equ 0001h
PIE6_CCP2IE_POSITION                     equ 0001h
PIE6_CCP2IE_SIZE                         equ 0001h
PIE6_CCP2IE_LENGTH                       equ 0001h
PIE6_CCP2IE_MASK                         equ 0002h

// Register: PIE7
#define PIE7 PIE7
PIE7                                     equ 0EC9h
// bitfield definitions
PIE7_CWGIE_POSN                          equ 0000h
PIE7_CWGIE_POSITION                      equ 0000h
PIE7_CWGIE_SIZE                          equ 0001h
PIE7_CWGIE_LENGTH                        equ 0001h
PIE7_CWGIE_MASK                          equ 0001h
PIE7_NVMIE_POSN                          equ 0005h
PIE7_NVMIE_POSITION                      equ 0005h
PIE7_NVMIE_SIZE                          equ 0001h
PIE7_NVMIE_LENGTH                        equ 0001h
PIE7_NVMIE_MASK                          equ 0020h
PIE7_CRCIE_POSN                          equ 0006h
PIE7_CRCIE_POSITION                      equ 0006h
PIE7_CRCIE_SIZE                          equ 0001h
PIE7_CRCIE_LENGTH                        equ 0001h
PIE7_CRCIE_MASK                          equ 0040h
PIE7_SCANIE_POSN                         equ 0007h
PIE7_SCANIE_POSITION                     equ 0007h
PIE7_SCANIE_SIZE                         equ 0001h
PIE7_SCANIE_LENGTH                       equ 0001h
PIE7_SCANIE_MASK                         equ 0080h
PIE7_CWG1IE_POSN                         equ 0000h
PIE7_CWG1IE_POSITION                     equ 0000h
PIE7_CWG1IE_SIZE                         equ 0001h
PIE7_CWG1IE_LENGTH                       equ 0001h
PIE7_CWG1IE_MASK                         equ 0001h

// Register: PIR0
#define PIR0 PIR0
PIR0                                     equ 0ECAh
// bitfield definitions
PIR0_INT0IF_POSN                         equ 0000h
PIR0_INT0IF_POSITION                     equ 0000h
PIR0_INT0IF_SIZE                         equ 0001h
PIR0_INT0IF_LENGTH                       equ 0001h
PIR0_INT0IF_MASK                         equ 0001h
PIR0_INT1IF_POSN                         equ 0001h
PIR0_INT1IF_POSITION                     equ 0001h
PIR0_INT1IF_SIZE                         equ 0001h
PIR0_INT1IF_LENGTH                       equ 0001h
PIR0_INT1IF_MASK                         equ 0002h
PIR0_INT2IF_POSN                         equ 0002h
PIR0_INT2IF_POSITION                     equ 0002h
PIR0_INT2IF_SIZE                         equ 0001h
PIR0_INT2IF_LENGTH                       equ 0001h
PIR0_INT2IF_MASK                         equ 0004h
PIR0_IOCIF_POSN                          equ 0004h
PIR0_IOCIF_POSITION                      equ 0004h
PIR0_IOCIF_SIZE                          equ 0001h
PIR0_IOCIF_LENGTH                        equ 0001h
PIR0_IOCIF_MASK                          equ 0010h
PIR0_TMR0IF_POSN                         equ 0005h
PIR0_TMR0IF_POSITION                     equ 0005h
PIR0_TMR0IF_SIZE                         equ 0001h
PIR0_TMR0IF_LENGTH                       equ 0001h
PIR0_TMR0IF_MASK                         equ 0020h

// Register: PIR1
#define PIR1 PIR1
PIR1                                     equ 0ECBh
// bitfield definitions
PIR1_ADIF_POSN                           equ 0000h
PIR1_ADIF_POSITION                       equ 0000h
PIR1_ADIF_SIZE                           equ 0001h
PIR1_ADIF_LENGTH                         equ 0001h
PIR1_ADIF_MASK                           equ 0001h
PIR1_ADTIF_POSN                          equ 0001h
PIR1_ADTIF_POSITION                      equ 0001h
PIR1_ADTIF_SIZE                          equ 0001h
PIR1_ADTIF_LENGTH                        equ 0001h
PIR1_ADTIF_MASK                          equ 0002h
PIR1_CSWIF_POSN                          equ 0006h
PIR1_CSWIF_POSITION                      equ 0006h
PIR1_CSWIF_SIZE                          equ 0001h
PIR1_CSWIF_LENGTH                        equ 0001h
PIR1_CSWIF_MASK                          equ 0040h
PIR1_OSCFIF_POSN                         equ 0007h
PIR1_OSCFIF_POSITION                     equ 0007h
PIR1_OSCFIF_SIZE                         equ 0001h
PIR1_OSCFIF_LENGTH                       equ 0001h
PIR1_OSCFIF_MASK                         equ 0080h
PIR1_PSPIF_POSN                          equ 0007h
PIR1_PSPIF_POSITION                      equ 0007h
PIR1_PSPIF_SIZE                          equ 0001h
PIR1_PSPIF_LENGTH                        equ 0001h
PIR1_PSPIF_MASK                          equ 0080h

// Register: PIR2
#define PIR2 PIR2
PIR2                                     equ 0ECCh
// bitfield definitions
PIR2_C1IF_POSN                           equ 0000h
PIR2_C1IF_POSITION                       equ 0000h
PIR2_C1IF_SIZE                           equ 0001h
PIR2_C1IF_LENGTH                         equ 0001h
PIR2_C1IF_MASK                           equ 0001h
PIR2_C2IF_POSN                           equ 0001h
PIR2_C2IF_POSITION                       equ 0001h
PIR2_C2IF_SIZE                           equ 0001h
PIR2_C2IF_LENGTH                         equ 0001h
PIR2_C2IF_MASK                           equ 0002h
PIR2_ZCDIF_POSN                          equ 0006h
PIR2_ZCDIF_POSITION                      equ 0006h
PIR2_ZCDIF_SIZE                          equ 0001h
PIR2_ZCDIF_LENGTH                        equ 0001h
PIR2_ZCDIF_MASK                          equ 0040h
PIR2_HLVDIF_POSN                         equ 0007h
PIR2_HLVDIF_POSITION                     equ 0007h
PIR2_HLVDIF_SIZE                         equ 0001h
PIR2_HLVDIF_LENGTH                       equ 0001h
PIR2_HLVDIF_MASK                         equ 0080h
PIR2_CMIF_POSN                           equ 0006h
PIR2_CMIF_POSITION                       equ 0006h
PIR2_CMIF_SIZE                           equ 0001h
PIR2_CMIF_LENGTH                         equ 0001h
PIR2_CMIF_MASK                           equ 0040h

// Register: PIR3
#define PIR3 PIR3
PIR3                                     equ 0ECDh
// bitfield definitions
PIR3_SSP1IF_POSN                         equ 0000h
PIR3_SSP1IF_POSITION                     equ 0000h
PIR3_SSP1IF_SIZE                         equ 0001h
PIR3_SSP1IF_LENGTH                       equ 0001h
PIR3_SSP1IF_MASK                         equ 0001h
PIR3_BCL1IF_POSN                         equ 0001h
PIR3_BCL1IF_POSITION                     equ 0001h
PIR3_BCL1IF_SIZE                         equ 0001h
PIR3_BCL1IF_LENGTH                       equ 0001h
PIR3_BCL1IF_MASK                         equ 0002h
PIR3_TX1IF_POSN                          equ 0004h
PIR3_TX1IF_POSITION                      equ 0004h
PIR3_TX1IF_SIZE                          equ 0001h
PIR3_TX1IF_LENGTH                        equ 0001h
PIR3_TX1IF_MASK                          equ 0010h
PIR3_RC1IF_POSN                          equ 0005h
PIR3_RC1IF_POSITION                      equ 0005h
PIR3_RC1IF_SIZE                          equ 0001h
PIR3_RC1IF_LENGTH                        equ 0001h
PIR3_RC1IF_MASK                          equ 0020h
PIR3_SSPIF_POSN                          equ 0000h
PIR3_SSPIF_POSITION                      equ 0000h
PIR3_SSPIF_SIZE                          equ 0001h
PIR3_SSPIF_LENGTH                        equ 0001h
PIR3_SSPIF_MASK                          equ 0001h
PIR3_BCLIF_POSN                          equ 0001h
PIR3_BCLIF_POSITION                      equ 0001h
PIR3_BCLIF_SIZE                          equ 0001h
PIR3_BCLIF_LENGTH                        equ 0001h
PIR3_BCLIF_MASK                          equ 0002h
PIR3_TXIF_POSN                           equ 0004h
PIR3_TXIF_POSITION                       equ 0004h
PIR3_TXIF_SIZE                           equ 0001h
PIR3_TXIF_LENGTH                         equ 0001h
PIR3_TXIF_MASK                           equ 0010h
PIR3_RCIF_POSN                           equ 0005h
PIR3_RCIF_POSITION                       equ 0005h
PIR3_RCIF_SIZE                           equ 0001h
PIR3_RCIF_LENGTH                         equ 0001h
PIR3_RCIF_MASK                           equ 0020h
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

// Register: PIR4
#define PIR4 PIR4
PIR4                                     equ 0ECEh
// bitfield definitions
PIR4_TMR1IF_POSN                         equ 0000h
PIR4_TMR1IF_POSITION                     equ 0000h
PIR4_TMR1IF_SIZE                         equ 0001h
PIR4_TMR1IF_LENGTH                       equ 0001h
PIR4_TMR1IF_MASK                         equ 0001h
PIR4_TMR2IF_POSN                         equ 0001h
PIR4_TMR2IF_POSITION                     equ 0001h
PIR4_TMR2IF_SIZE                         equ 0001h
PIR4_TMR2IF_LENGTH                       equ 0001h
PIR4_TMR2IF_MASK                         equ 0002h
PIR4_TMR3IF_POSN                         equ 0002h
PIR4_TMR3IF_POSITION                     equ 0002h
PIR4_TMR3IF_SIZE                         equ 0001h
PIR4_TMR3IF_LENGTH                       equ 0001h
PIR4_TMR3IF_MASK                         equ 0004h
PIR4_TMR4IF_POSN                         equ 0003h
PIR4_TMR4IF_POSITION                     equ 0003h
PIR4_TMR4IF_SIZE                         equ 0001h
PIR4_TMR4IF_LENGTH                       equ 0001h
PIR4_TMR4IF_MASK                         equ 0008h
PIR4_TMR5IF_POSN                         equ 0004h
PIR4_TMR5IF_POSITION                     equ 0004h
PIR4_TMR5IF_SIZE                         equ 0001h
PIR4_TMR5IF_LENGTH                       equ 0001h
PIR4_TMR5IF_MASK                         equ 0010h
PIR4_TMR6IF_POSN                         equ 0005h
PIR4_TMR6IF_POSITION                     equ 0005h
PIR4_TMR6IF_SIZE                         equ 0001h
PIR4_TMR6IF_LENGTH                       equ 0001h
PIR4_TMR6IF_MASK                         equ 0020h

// Register: PIR5
#define PIR5 PIR5
PIR5                                     equ 0ECFh
// bitfield definitions
PIR5_TMR1GIF_POSN                        equ 0000h
PIR5_TMR1GIF_POSITION                    equ 0000h
PIR5_TMR1GIF_SIZE                        equ 0001h
PIR5_TMR1GIF_LENGTH                      equ 0001h
PIR5_TMR1GIF_MASK                        equ 0001h
PIR5_TMR3GIF_POSN                        equ 0001h
PIR5_TMR3GIF_POSITION                    equ 0001h
PIR5_TMR3GIF_SIZE                        equ 0001h
PIR5_TMR3GIF_LENGTH                      equ 0001h
PIR5_TMR3GIF_MASK                        equ 0002h
PIR5_TMR5GIF_POSN                        equ 0002h
PIR5_TMR5GIF_POSITION                    equ 0002h
PIR5_TMR5GIF_SIZE                        equ 0001h
PIR5_TMR5GIF_LENGTH                      equ 0001h
PIR5_TMR5GIF_MASK                        equ 0004h

// Register: PIR6
#define PIR6 PIR6
PIR6                                     equ 0ED0h
// bitfield definitions
PIR6_CCP1IF_POSN                         equ 0000h
PIR6_CCP1IF_POSITION                     equ 0000h
PIR6_CCP1IF_SIZE                         equ 0001h
PIR6_CCP1IF_LENGTH                       equ 0001h
PIR6_CCP1IF_MASK                         equ 0001h
PIR6_CCP2IF_POSN                         equ 0001h
PIR6_CCP2IF_POSITION                     equ 0001h
PIR6_CCP2IF_SIZE                         equ 0001h
PIR6_CCP2IF_LENGTH                       equ 0001h
PIR6_CCP2IF_MASK                         equ 0002h

// Register: PIR7
#define PIR7 PIR7
PIR7                                     equ 0ED1h
// bitfield definitions
PIR7_CWGIF_POSN                          equ 0000h
PIR7_CWGIF_POSITION                      equ 0000h
PIR7_CWGIF_SIZE                          equ 0001h
PIR7_CWGIF_LENGTH                        equ 0001h
PIR7_CWGIF_MASK                          equ 0001h
PIR7_NVMIF_POSN                          equ 0005h
PIR7_NVMIF_POSITION                      equ 0005h
PIR7_NVMIF_SIZE                          equ 0001h
PIR7_NVMIF_LENGTH                        equ 0001h
PIR7_NVMIF_MASK                          equ 0020h
PIR7_CRCIF_POSN                          equ 0006h
PIR7_CRCIF_POSITION                      equ 0006h
PIR7_CRCIF_SIZE                          equ 0001h
PIR7_CRCIF_LENGTH                        equ 0001h
PIR7_CRCIF_MASK                          equ 0040h
PIR7_SCANIF_POSN                         equ 0007h
PIR7_SCANIF_POSITION                     equ 0007h
PIR7_SCANIF_SIZE                         equ 0001h
PIR7_SCANIF_LENGTH                       equ 0001h
PIR7_SCANIF_MASK                         equ 0080h
PIR7_CWG1IF_POSN                         equ 0000h
PIR7_CWG1IF_POSITION                     equ 0000h
PIR7_CWG1IF_SIZE                         equ 0001h
PIR7_CWG1IF_LENGTH                       equ 0001h
PIR7_CWG1IF_MASK                         equ 0001h

// Register: WDTCON0
#define WDTCON0 WDTCON0
WDTCON0                                  equ 0ED2h
// bitfield definitions
WDTCON0_SEN_POSN                         equ 0000h
WDTCON0_SEN_POSITION                     equ 0000h
WDTCON0_SEN_SIZE                         equ 0001h
WDTCON0_SEN_LENGTH                       equ 0001h
WDTCON0_SEN_MASK                         equ 0001h
WDTCON0_WDTPS_POSN                       equ 0001h
WDTCON0_WDTPS_POSITION                   equ 0001h
WDTCON0_WDTPS_SIZE                       equ 0005h
WDTCON0_WDTPS_LENGTH                     equ 0005h
WDTCON0_WDTPS_MASK                       equ 003Eh
WDTCON0_SWDTEN_POSN                      equ 0000h
WDTCON0_SWDTEN_POSITION                  equ 0000h
WDTCON0_SWDTEN_SIZE                      equ 0001h
WDTCON0_SWDTEN_LENGTH                    equ 0001h
WDTCON0_SWDTEN_MASK                      equ 0001h
WDTCON0_WDTSEN_POSN                      equ 0000h
WDTCON0_WDTSEN_POSITION                  equ 0000h
WDTCON0_WDTSEN_SIZE                      equ 0001h
WDTCON0_WDTSEN_LENGTH                    equ 0001h
WDTCON0_WDTSEN_MASK                      equ 0001h
WDTCON0_WDTPS0_POSN                      equ 0001h
WDTCON0_WDTPS0_POSITION                  equ 0001h
WDTCON0_WDTPS0_SIZE                      equ 0001h
WDTCON0_WDTPS0_LENGTH                    equ 0001h
WDTCON0_WDTPS0_MASK                      equ 0002h
WDTCON0_WDTPS1_POSN                      equ 0002h
WDTCON0_WDTPS1_POSITION                  equ 0002h
WDTCON0_WDTPS1_SIZE                      equ 0001h
WDTCON0_WDTPS1_LENGTH                    equ 0001h
WDTCON0_WDTPS1_MASK                      equ 0004h
WDTCON0_WDTPS2_POSN                      equ 0003h
WDTCON0_WDTPS2_POSITION                  equ 0003h
WDTCON0_WDTPS2_SIZE                      equ 0001h
WDTCON0_WDTPS2_LENGTH                    equ 0001h
WDTCON0_WDTPS2_MASK                      equ 0008h
WDTCON0_WDTPS3_POSN                      equ 0004h
WDTCON0_WDTPS3_POSITION                  equ 0004h
WDTCON0_WDTPS3_SIZE                      equ 0001h
WDTCON0_WDTPS3_LENGTH                    equ 0001h
WDTCON0_WDTPS3_MASK                      equ 0010h
WDTCON0_WDTPS4_POSN                      equ 0005h
WDTCON0_WDTPS4_POSITION                  equ 0005h
WDTCON0_WDTPS4_SIZE                      equ 0001h
WDTCON0_WDTPS4_LENGTH                    equ 0001h
WDTCON0_WDTPS4_MASK                      equ 0020h

// Register: WDTCON1
#define WDTCON1 WDTCON1
WDTCON1                                  equ 0ED3h
// bitfield definitions
WDTCON1_WINDOW_POSN                      equ 0000h
WDTCON1_WINDOW_POSITION                  equ 0000h
WDTCON1_WINDOW_SIZE                      equ 0003h
WDTCON1_WINDOW_LENGTH                    equ 0003h
WDTCON1_WINDOW_MASK                      equ 0007h
WDTCON1_WDTCS_POSN                       equ 0004h
WDTCON1_WDTCS_POSITION                   equ 0004h
WDTCON1_WDTCS_SIZE                       equ 0003h
WDTCON1_WDTCS_LENGTH                     equ 0003h
WDTCON1_WDTCS_MASK                       equ 0070h
WDTCON1_WINDOW0_POSN                     equ 0000h
WDTCON1_WINDOW0_POSITION                 equ 0000h
WDTCON1_WINDOW0_SIZE                     equ 0001h
WDTCON1_WINDOW0_LENGTH                   equ 0001h
WDTCON1_WINDOW0_MASK                     equ 0001h
WDTCON1_WINDOW1_POSN                     equ 0001h
WDTCON1_WINDOW1_POSITION                 equ 0001h
WDTCON1_WINDOW1_SIZE                     equ 0001h
WDTCON1_WINDOW1_LENGTH                   equ 0001h
WDTCON1_WINDOW1_MASK                     equ 0002h
WDTCON1_WINDOW2_POSN                     equ 0002h
WDTCON1_WINDOW2_POSITION                 equ 0002h
WDTCON1_WINDOW2_SIZE                     equ 0001h
WDTCON1_WINDOW2_LENGTH                   equ 0001h
WDTCON1_WINDOW2_MASK                     equ 0004h
WDTCON1_WDTWINDOW_POSN                   equ 0000h
WDTCON1_WDTWINDOW_POSITION               equ 0000h
WDTCON1_WDTWINDOW_SIZE                   equ 0003h
WDTCON1_WDTWINDOW_LENGTH                 equ 0003h
WDTCON1_WDTWINDOW_MASK                   equ 0007h
WDTCON1_WDTWINDOW0_POSN                  equ 0000h
WDTCON1_WDTWINDOW0_POSITION              equ 0000h
WDTCON1_WDTWINDOW0_SIZE                  equ 0001h
WDTCON1_WDTWINDOW0_LENGTH                equ 0001h
WDTCON1_WDTWINDOW0_MASK                  equ 0001h
WDTCON1_WDTWINDOW1_POSN                  equ 0001h
WDTCON1_WDTWINDOW1_POSITION              equ 0001h
WDTCON1_WDTWINDOW1_SIZE                  equ 0001h
WDTCON1_WDTWINDOW1_LENGTH                equ 0001h
WDTCON1_WDTWINDOW1_MASK                  equ 0002h
WDTCON1_WDTWINDOW2_POSN                  equ 0002h
WDTCON1_WDTWINDOW2_POSITION              equ 0002h
WDTCON1_WDTWINDOW2_SIZE                  equ 0001h
WDTCON1_WDTWINDOW2_LENGTH                equ 0001h
WDTCON1_WDTWINDOW2_MASK                  equ 0004h
WDTCON1_WDTCS0_POSN                      equ 0004h
WDTCON1_WDTCS0_POSITION                  equ 0004h
WDTCON1_WDTCS0_SIZE                      equ 0001h
WDTCON1_WDTCS0_LENGTH                    equ 0001h
WDTCON1_WDTCS0_MASK                      equ 0010h
WDTCON1_WDTCS1_POSN                      equ 0005h
WDTCON1_WDTCS1_POSITION                  equ 0005h
WDTCON1_WDTCS1_SIZE                      equ 0001h
WDTCON1_WDTCS1_LENGTH                    equ 0001h
WDTCON1_WDTCS1_MASK                      equ 0020h
WDTCON1_WDTCS2_POSN                      equ 0006h
WDTCON1_WDTCS2_POSITION                  equ 0006h
WDTCON1_WDTCS2_SIZE                      equ 0001h
WDTCON1_WDTCS2_LENGTH                    equ 0001h
WDTCON1_WDTCS2_MASK                      equ 0040h

// Register: WDTPSL
#define WDTPSL WDTPSL
WDTPSL                                   equ 0ED4h
// bitfield definitions
WDTPSL_PSCNT_POSN                        equ 0000h
WDTPSL_PSCNT_POSITION                    equ 0000h
WDTPSL_PSCNT_SIZE                        equ 0008h
WDTPSL_PSCNT_LENGTH                      equ 0008h
WDTPSL_PSCNT_MASK                        equ 00FFh
WDTPSL_PSCNT0_POSN                       equ 0000h
WDTPSL_PSCNT0_POSITION                   equ 0000h
WDTPSL_PSCNT0_SIZE                       equ 0001h
WDTPSL_PSCNT0_LENGTH                     equ 0001h
WDTPSL_PSCNT0_MASK                       equ 0001h
WDTPSL_PSCNT1_POSN                       equ 0001h
WDTPSL_PSCNT1_POSITION                   equ 0001h
WDTPSL_PSCNT1_SIZE                       equ 0001h
WDTPSL_PSCNT1_LENGTH                     equ 0001h
WDTPSL_PSCNT1_MASK                       equ 0002h
WDTPSL_PSCNT2_POSN                       equ 0002h
WDTPSL_PSCNT2_POSITION                   equ 0002h
WDTPSL_PSCNT2_SIZE                       equ 0001h
WDTPSL_PSCNT2_LENGTH                     equ 0001h
WDTPSL_PSCNT2_MASK                       equ 0004h
WDTPSL_PSCNT3_POSN                       equ 0003h
WDTPSL_PSCNT3_POSITION                   equ 0003h
WDTPSL_PSCNT3_SIZE                       equ 0001h
WDTPSL_PSCNT3_LENGTH                     equ 0001h
WDTPSL_PSCNT3_MASK                       equ 0008h
WDTPSL_PSCNT4_POSN                       equ 0004h
WDTPSL_PSCNT4_POSITION                   equ 0004h
WDTPSL_PSCNT4_SIZE                       equ 0001h
WDTPSL_PSCNT4_LENGTH                     equ 0001h
WDTPSL_PSCNT4_MASK                       equ 0010h
WDTPSL_PSCNT5_POSN                       equ 0005h
WDTPSL_PSCNT5_POSITION                   equ 0005h
WDTPSL_PSCNT5_SIZE                       equ 0001h
WDTPSL_PSCNT5_LENGTH                     equ 0001h
WDTPSL_PSCNT5_MASK                       equ 0020h
WDTPSL_PSCNT6_POSN                       equ 0006h
WDTPSL_PSCNT6_POSITION                   equ 0006h
WDTPSL_PSCNT6_SIZE                       equ 0001h
WDTPSL_PSCNT6_LENGTH                     equ 0001h
WDTPSL_PSCNT6_MASK                       equ 0040h
WDTPSL_PSCNT7_POSN                       equ 0007h
WDTPSL_PSCNT7_POSITION                   equ 0007h
WDTPSL_PSCNT7_SIZE                       equ 0001h
WDTPSL_PSCNT7_LENGTH                     equ 0001h
WDTPSL_PSCNT7_MASK                       equ 0080h
WDTPSL_WDTPSCNT_POSN                     equ 0000h
WDTPSL_WDTPSCNT_POSITION                 equ 0000h
WDTPSL_WDTPSCNT_SIZE                     equ 0008h
WDTPSL_WDTPSCNT_LENGTH                   equ 0008h
WDTPSL_WDTPSCNT_MASK                     equ 00FFh
WDTPSL_WDTPSCNT0_POSN                    equ 0000h
WDTPSL_WDTPSCNT0_POSITION                equ 0000h
WDTPSL_WDTPSCNT0_SIZE                    equ 0001h
WDTPSL_WDTPSCNT0_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT0_MASK                    equ 0001h
WDTPSL_WDTPSCNT1_POSN                    equ 0001h
WDTPSL_WDTPSCNT1_POSITION                equ 0001h
WDTPSL_WDTPSCNT1_SIZE                    equ 0001h
WDTPSL_WDTPSCNT1_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT1_MASK                    equ 0002h
WDTPSL_WDTPSCNT2_POSN                    equ 0002h
WDTPSL_WDTPSCNT2_POSITION                equ 0002h
WDTPSL_WDTPSCNT2_SIZE                    equ 0001h
WDTPSL_WDTPSCNT2_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT2_MASK                    equ 0004h
WDTPSL_WDTPSCNT3_POSN                    equ 0003h
WDTPSL_WDTPSCNT3_POSITION                equ 0003h
WDTPSL_WDTPSCNT3_SIZE                    equ 0001h
WDTPSL_WDTPSCNT3_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT3_MASK                    equ 0008h
WDTPSL_WDTPSCNT4_POSN                    equ 0004h
WDTPSL_WDTPSCNT4_POSITION                equ 0004h
WDTPSL_WDTPSCNT4_SIZE                    equ 0001h
WDTPSL_WDTPSCNT4_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT4_MASK                    equ 0010h
WDTPSL_WDTPSCNT5_POSN                    equ 0005h
WDTPSL_WDTPSCNT5_POSITION                equ 0005h
WDTPSL_WDTPSCNT5_SIZE                    equ 0001h
WDTPSL_WDTPSCNT5_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT5_MASK                    equ 0020h
WDTPSL_WDTPSCNT6_POSN                    equ 0006h
WDTPSL_WDTPSCNT6_POSITION                equ 0006h
WDTPSL_WDTPSCNT6_SIZE                    equ 0001h
WDTPSL_WDTPSCNT6_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT6_MASK                    equ 0040h
WDTPSL_WDTPSCNT7_POSN                    equ 0007h
WDTPSL_WDTPSCNT7_POSITION                equ 0007h
WDTPSL_WDTPSCNT7_SIZE                    equ 0001h
WDTPSL_WDTPSCNT7_LENGTH                  equ 0001h
WDTPSL_WDTPSCNT7_MASK                    equ 0080h

// Register: WDTPSH
#define WDTPSH WDTPSH
WDTPSH                                   equ 0ED5h
// bitfield definitions
WDTPSH_PSCNT_POSN                        equ 0000h
WDTPSH_PSCNT_POSITION                    equ 0000h
WDTPSH_PSCNT_SIZE                        equ 0008h
WDTPSH_PSCNT_LENGTH                      equ 0008h
WDTPSH_PSCNT_MASK                        equ 00FFh
WDTPSH_PSCNT8_POSN                       equ 0000h
WDTPSH_PSCNT8_POSITION                   equ 0000h
WDTPSH_PSCNT8_SIZE                       equ 0001h
WDTPSH_PSCNT8_LENGTH                     equ 0001h
WDTPSH_PSCNT8_MASK                       equ 0001h
WDTPSH_PSCNT9_POSN                       equ 0001h
WDTPSH_PSCNT9_POSITION                   equ 0001h
WDTPSH_PSCNT9_SIZE                       equ 0001h
WDTPSH_PSCNT9_LENGTH                     equ 0001h
WDTPSH_PSCNT9_MASK                       equ 0002h
WDTPSH_PSCNT10_POSN                      equ 0002h
WDTPSH_PSCNT10_POSITION                  equ 0002h
WDTPSH_PSCNT10_SIZE                      equ 0001h
WDTPSH_PSCNT10_LENGTH                    equ 0001h
WDTPSH_PSCNT10_MASK                      equ 0004h
WDTPSH_PSCNT11_POSN                      equ 0003h
WDTPSH_PSCNT11_POSITION                  equ 0003h
WDTPSH_PSCNT11_SIZE                      equ 0001h
WDTPSH_PSCNT11_LENGTH                    equ 0001h
WDTPSH_PSCNT11_MASK                      equ 0008h
WDTPSH_PSCNT12_POSN                      equ 0004h
WDTPSH_PSCNT12_POSITION                  equ 0004h
WDTPSH_PSCNT12_SIZE                      equ 0001h
WDTPSH_PSCNT12_LENGTH                    equ 0001h
WDTPSH_PSCNT12_MASK                      equ 0010h
WDTPSH_PSCNT13_POSN                      equ 0005h
WDTPSH_PSCNT13_POSITION                  equ 0005h
WDTPSH_PSCNT13_SIZE                      equ 0001h
WDTPSH_PSCNT13_LENGTH                    equ 0001h
WDTPSH_PSCNT13_MASK                      equ 0020h
WDTPSH_PSCNT14_POSN                      equ 0006h
WDTPSH_PSCNT14_POSITION                  equ 0006h
WDTPSH_PSCNT14_SIZE                      equ 0001h
WDTPSH_PSCNT14_LENGTH                    equ 0001h
WDTPSH_PSCNT14_MASK                      equ 0040h
WDTPSH_PSCNT15_POSN                      equ 0007h
WDTPSH_PSCNT15_POSITION                  equ 0007h
WDTPSH_PSCNT15_SIZE                      equ 0001h
WDTPSH_PSCNT15_LENGTH                    equ 0001h
WDTPSH_PSCNT15_MASK                      equ 0080h
WDTPSH_WDTPSCNT_POSN                     equ 0000h
WDTPSH_WDTPSCNT_POSITION                 equ 0000h
WDTPSH_WDTPSCNT_SIZE                     equ 0008h
WDTPSH_WDTPSCNT_LENGTH                   equ 0008h
WDTPSH_WDTPSCNT_MASK                     equ 00FFh
WDTPSH_WDTPSCNT8_POSN                    equ 0000h
WDTPSH_WDTPSCNT8_POSITION                equ 0000h
WDTPSH_WDTPSCNT8_SIZE                    equ 0001h
WDTPSH_WDTPSCNT8_LENGTH                  equ 0001h
WDTPSH_WDTPSCNT8_MASK                    equ 0001h
WDTPSH_WDTPSCNT9_POSN                    equ 0001h
WDTPSH_WDTPSCNT9_POSITION                equ 0001h
WDTPSH_WDTPSCNT9_SIZE                    equ 0001h
WDTPSH_WDTPSCNT9_LENGTH                  equ 0001h
WDTPSH_WDTPSCNT9_MASK                    equ 0002h
WDTPSH_WDTPSCNT10_POSN                   equ 0002h
WDTPSH_WDTPSCNT10_POSITION               equ 0002h
WDTPSH_WDTPSCNT10_SIZE                   equ 0001h
WDTPSH_WDTPSCNT10_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT10_MASK                   equ 0004h
WDTPSH_WDTPSCNT11_POSN                   equ 0003h
WDTPSH_WDTPSCNT11_POSITION               equ 0003h
WDTPSH_WDTPSCNT11_SIZE                   equ 0001h
WDTPSH_WDTPSCNT11_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT11_MASK                   equ 0008h
WDTPSH_WDTPSCNT12_POSN                   equ 0004h
WDTPSH_WDTPSCNT12_POSITION               equ 0004h
WDTPSH_WDTPSCNT12_SIZE                   equ 0001h
WDTPSH_WDTPSCNT12_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT12_MASK                   equ 0010h
WDTPSH_WDTPSCNT13_POSN                   equ 0005h
WDTPSH_WDTPSCNT13_POSITION               equ 0005h
WDTPSH_WDTPSCNT13_SIZE                   equ 0001h
WDTPSH_WDTPSCNT13_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT13_MASK                   equ 0020h
WDTPSH_WDTPSCNT14_POSN                   equ 0006h
WDTPSH_WDTPSCNT14_POSITION               equ 0006h
WDTPSH_WDTPSCNT14_SIZE                   equ 0001h
WDTPSH_WDTPSCNT14_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT14_MASK                   equ 0040h
WDTPSH_WDTPSCNT15_POSN                   equ 0007h
WDTPSH_WDTPSCNT15_POSITION               equ 0007h
WDTPSH_WDTPSCNT15_SIZE                   equ 0001h
WDTPSH_WDTPSCNT15_LENGTH                 equ 0001h
WDTPSH_WDTPSCNT15_MASK                   equ 0080h

// Register: WDTTMR
#define WDTTMR WDTTMR
WDTTMR                                   equ 0ED6h
// bitfield definitions
WDTTMR_PSCNT16_POSN                      equ 0000h
WDTTMR_PSCNT16_POSITION                  equ 0000h
WDTTMR_PSCNT16_SIZE                      equ 0001h
WDTTMR_PSCNT16_LENGTH                    equ 0001h
WDTTMR_PSCNT16_MASK                      equ 0001h
WDTTMR_PSCNT17_POSN                      equ 0001h
WDTTMR_PSCNT17_POSITION                  equ 0001h
WDTTMR_PSCNT17_SIZE                      equ 0001h
WDTTMR_PSCNT17_LENGTH                    equ 0001h
WDTTMR_PSCNT17_MASK                      equ 0002h
WDTTMR_STATE_POSN                        equ 0002h
WDTTMR_STATE_POSITION                    equ 0002h
WDTTMR_STATE_SIZE                        equ 0001h
WDTTMR_STATE_LENGTH                      equ 0001h
WDTTMR_STATE_MASK                        equ 0004h
WDTTMR_WDTTMR_POSN                       equ 0003h
WDTTMR_WDTTMR_POSITION                   equ 0003h
WDTTMR_WDTTMR_SIZE                       equ 0005h
WDTTMR_WDTTMR_LENGTH                     equ 0005h
WDTTMR_WDTTMR_MASK                       equ 00F8h
WDTTMR_WDTPSCNT16_POSN                   equ 0000h
WDTTMR_WDTPSCNT16_POSITION               equ 0000h
WDTTMR_WDTPSCNT16_SIZE                   equ 0001h
WDTTMR_WDTPSCNT16_LENGTH                 equ 0001h
WDTTMR_WDTPSCNT16_MASK                   equ 0001h
WDTTMR_WDTPSCNT17_POSN                   equ 0001h
WDTTMR_WDTPSCNT17_POSITION               equ 0001h
WDTTMR_WDTPSCNT17_SIZE                   equ 0001h
WDTTMR_WDTPSCNT17_LENGTH                 equ 0001h
WDTTMR_WDTPSCNT17_MASK                   equ 0002h
WDTTMR_WDTSTATE_POSN                     equ 0002h
WDTTMR_WDTSTATE_POSITION                 equ 0002h
WDTTMR_WDTSTATE_SIZE                     equ 0001h
WDTTMR_WDTSTATE_LENGTH                   equ 0001h
WDTTMR_WDTSTATE_MASK                     equ 0004h
WDTTMR_WDTTMR0_POSN                      equ 0003h
WDTTMR_WDTTMR0_POSITION                  equ 0003h
WDTTMR_WDTTMR0_SIZE                      equ 0001h
WDTTMR_WDTTMR0_LENGTH                    equ 0001h
WDTTMR_WDTTMR0_MASK                      equ 0008h
WDTTMR_WDTTMR1_POSN                      equ 0004h
WDTTMR_WDTTMR1_POSITION                  equ 0004h
WDTTMR_WDTTMR1_SIZE                      equ 0001h
WDTTMR_WDTTMR1_LENGTH                    equ 0001h
WDTTMR_WDTTMR1_MASK                      equ 0010h
WDTTMR_WDTTMR2_POSN                      equ 0005h
WDTTMR_WDTTMR2_POSITION                  equ 0005h
WDTTMR_WDTTMR2_SIZE                      equ 0001h
WDTTMR_WDTTMR2_LENGTH                    equ 0001h
WDTTMR_WDTTMR2_MASK                      equ 0020h
WDTTMR_WDTTMR3_POSN                      equ 0006h
WDTTMR_WDTTMR3_POSITION                  equ 0006h
WDTTMR_WDTTMR3_SIZE                      equ 0001h
WDTTMR_WDTTMR3_LENGTH                    equ 0001h
WDTTMR_WDTTMR3_MASK                      equ 0040h
WDTTMR_WDTTMR4_POSN                      equ 0007h
WDTTMR_WDTTMR4_POSITION                  equ 0007h
WDTTMR_WDTTMR4_SIZE                      equ 0001h
WDTTMR_WDTTMR4_LENGTH                    equ 0001h
WDTTMR_WDTTMR4_MASK                      equ 0080h

// Register: CPUDOZE
#define CPUDOZE CPUDOZE
CPUDOZE                                  equ 0ED7h
// bitfield definitions
CPUDOZE_DOZE_POSN                        equ 0000h
CPUDOZE_DOZE_POSITION                    equ 0000h
CPUDOZE_DOZE_SIZE                        equ 0003h
CPUDOZE_DOZE_LENGTH                      equ 0003h
CPUDOZE_DOZE_MASK                        equ 0007h
CPUDOZE_DOE_POSN                         equ 0004h
CPUDOZE_DOE_POSITION                     equ 0004h
CPUDOZE_DOE_SIZE                         equ 0001h
CPUDOZE_DOE_LENGTH                       equ 0001h
CPUDOZE_DOE_MASK                         equ 0010h
CPUDOZE_ROI_POSN                         equ 0005h
CPUDOZE_ROI_POSITION                     equ 0005h
CPUDOZE_ROI_SIZE                         equ 0001h
CPUDOZE_ROI_LENGTH                       equ 0001h
CPUDOZE_ROI_MASK                         equ 0020h
CPUDOZE_DOZEN_POSN                       equ 0006h
CPUDOZE_DOZEN_POSITION                   equ 0006h
CPUDOZE_DOZEN_SIZE                       equ 0001h
CPUDOZE_DOZEN_LENGTH                     equ 0001h
CPUDOZE_DOZEN_MASK                       equ 0040h
CPUDOZE_IDLEN_POSN                       equ 0007h
CPUDOZE_IDLEN_POSITION                   equ 0007h
CPUDOZE_IDLEN_SIZE                       equ 0001h
CPUDOZE_IDLEN_LENGTH                     equ 0001h
CPUDOZE_IDLEN_MASK                       equ 0080h
CPUDOZE_DOZE0_POSN                       equ 0000h
CPUDOZE_DOZE0_POSITION                   equ 0000h
CPUDOZE_DOZE0_SIZE                       equ 0001h
CPUDOZE_DOZE0_LENGTH                     equ 0001h
CPUDOZE_DOZE0_MASK                       equ 0001h
CPUDOZE_DOZE1_POSN                       equ 0001h
CPUDOZE_DOZE1_POSITION                   equ 0001h
CPUDOZE_DOZE1_SIZE                       equ 0001h
CPUDOZE_DOZE1_LENGTH                     equ 0001h
CPUDOZE_DOZE1_MASK                       equ 0002h
CPUDOZE_DOZE2_POSN                       equ 0002h
CPUDOZE_DOZE2_POSITION                   equ 0002h
CPUDOZE_DOZE2_SIZE                       equ 0001h
CPUDOZE_DOZE2_LENGTH                     equ 0001h
CPUDOZE_DOZE2_MASK                       equ 0004h

// Register: OSCCON1
#define OSCCON1 OSCCON1
OSCCON1                                  equ 0ED8h
// bitfield definitions
OSCCON1_NDIV_POSN                        equ 0000h
OSCCON1_NDIV_POSITION                    equ 0000h
OSCCON1_NDIV_SIZE                        equ 0004h
OSCCON1_NDIV_LENGTH                      equ 0004h
OSCCON1_NDIV_MASK                        equ 000Fh
OSCCON1_NOSC_POSN                        equ 0004h
OSCCON1_NOSC_POSITION                    equ 0004h
OSCCON1_NOSC_SIZE                        equ 0003h
OSCCON1_NOSC_LENGTH                      equ 0003h
OSCCON1_NOSC_MASK                        equ 0070h
OSCCON1_NDIV0_POSN                       equ 0000h
OSCCON1_NDIV0_POSITION                   equ 0000h
OSCCON1_NDIV0_SIZE                       equ 0001h
OSCCON1_NDIV0_LENGTH                     equ 0001h
OSCCON1_NDIV0_MASK                       equ 0001h
OSCCON1_NDIV1_POSN                       equ 0001h
OSCCON1_NDIV1_POSITION                   equ 0001h
OSCCON1_NDIV1_SIZE                       equ 0001h
OSCCON1_NDIV1_LENGTH                     equ 0001h
OSCCON1_NDIV1_MASK                       equ 0002h
OSCCON1_NDIV2_POSN                       equ 0002h
OSCCON1_NDIV2_POSITION                   equ 0002h
OSCCON1_NDIV2_SIZE                       equ 0001h
OSCCON1_NDIV2_LENGTH                     equ 0001h
OSCCON1_NDIV2_MASK                       equ 0004h
OSCCON1_NDIV3_POSN                       equ 0003h
OSCCON1_NDIV3_POSITION                   equ 0003h
OSCCON1_NDIV3_SIZE                       equ 0001h
OSCCON1_NDIV3_LENGTH                     equ 0001h
OSCCON1_NDIV3_MASK                       equ 0008h
OSCCON1_NOSC0_POSN                       equ 0004h
OSCCON1_NOSC0_POSITION                   equ 0004h
OSCCON1_NOSC0_SIZE                       equ 0001h
OSCCON1_NOSC0_LENGTH                     equ 0001h
OSCCON1_NOSC0_MASK                       equ 0010h
OSCCON1_NOSC1_POSN                       equ 0005h
OSCCON1_NOSC1_POSITION                   equ 0005h
OSCCON1_NOSC1_SIZE                       equ 0001h
OSCCON1_NOSC1_LENGTH                     equ 0001h
OSCCON1_NOSC1_MASK                       equ 0020h
OSCCON1_NOSC2_POSN                       equ 0006h
OSCCON1_NOSC2_POSITION                   equ 0006h
OSCCON1_NOSC2_SIZE                       equ 0001h
OSCCON1_NOSC2_LENGTH                     equ 0001h
OSCCON1_NOSC2_MASK                       equ 0040h

// Register: OSCCON2
#define OSCCON2 OSCCON2
OSCCON2                                  equ 0ED9h
// bitfield definitions
OSCCON2_CDIV_POSN                        equ 0000h
OSCCON2_CDIV_POSITION                    equ 0000h
OSCCON2_CDIV_SIZE                        equ 0004h
OSCCON2_CDIV_LENGTH                      equ 0004h
OSCCON2_CDIV_MASK                        equ 000Fh
OSCCON2_COSC_POSN                        equ 0004h
OSCCON2_COSC_POSITION                    equ 0004h
OSCCON2_COSC_SIZE                        equ 0003h
OSCCON2_COSC_LENGTH                      equ 0003h
OSCCON2_COSC_MASK                        equ 0070h
OSCCON2_CDIV0_POSN                       equ 0000h
OSCCON2_CDIV0_POSITION                   equ 0000h
OSCCON2_CDIV0_SIZE                       equ 0001h
OSCCON2_CDIV0_LENGTH                     equ 0001h
OSCCON2_CDIV0_MASK                       equ 0001h
OSCCON2_CDIV1_POSN                       equ 0001h
OSCCON2_CDIV1_POSITION                   equ 0001h
OSCCON2_CDIV1_SIZE                       equ 0001h
OSCCON2_CDIV1_LENGTH                     equ 0001h
OSCCON2_CDIV1_MASK                       equ 0002h
OSCCON2_CDIV2_POSN                       equ 0002h
OSCCON2_CDIV2_POSITION                   equ 0002h
OSCCON2_CDIV2_SIZE                       equ 0001h
OSCCON2_CDIV2_LENGTH                     equ 0001h
OSCCON2_CDIV2_MASK                       equ 0004h
OSCCON2_CDIV3_POSN                       equ 0003h
OSCCON2_CDIV3_POSITION                   equ 0003h
OSCCON2_CDIV3_SIZE                       equ 0001h
OSCCON2_CDIV3_LENGTH                     equ 0001h
OSCCON2_CDIV3_MASK                       equ 0008h
OSCCON2_COSC0_POSN                       equ 0004h
OSCCON2_COSC0_POSITION                   equ 0004h
OSCCON2_COSC0_SIZE                       equ 0001h
OSCCON2_COSC0_LENGTH                     equ 0001h
OSCCON2_COSC0_MASK                       equ 0010h
OSCCON2_COSC1_POSN                       equ 0005h
OSCCON2_COSC1_POSITION                   equ 0005h
OSCCON2_COSC1_SIZE                       equ 0001h
OSCCON2_COSC1_LENGTH                     equ 0001h
OSCCON2_COSC1_MASK                       equ 0020h
OSCCON2_COSC2_POSN                       equ 0006h
OSCCON2_COSC2_POSITION                   equ 0006h
OSCCON2_COSC2_SIZE                       equ 0001h
OSCCON2_COSC2_LENGTH                     equ 0001h
OSCCON2_COSC2_MASK                       equ 0040h

// Register: OSCCON3
#define OSCCON3 OSCCON3
OSCCON3                                  equ 0EDAh
// bitfield definitions
OSCCON3_NOSCR_POSN                       equ 0003h
OSCCON3_NOSCR_POSITION                   equ 0003h
OSCCON3_NOSCR_SIZE                       equ 0001h
OSCCON3_NOSCR_LENGTH                     equ 0001h
OSCCON3_NOSCR_MASK                       equ 0008h
OSCCON3_ORDY_POSN                        equ 0004h
OSCCON3_ORDY_POSITION                    equ 0004h
OSCCON3_ORDY_SIZE                        equ 0001h
OSCCON3_ORDY_LENGTH                      equ 0001h
OSCCON3_ORDY_MASK                        equ 0010h
OSCCON3_SOSCPWR_POSN                     equ 0006h
OSCCON3_SOSCPWR_POSITION                 equ 0006h
OSCCON3_SOSCPWR_SIZE                     equ 0001h
OSCCON3_SOSCPWR_LENGTH                   equ 0001h
OSCCON3_SOSCPWR_MASK                     equ 0040h
OSCCON3_CSWHOLD_POSN                     equ 0007h
OSCCON3_CSWHOLD_POSITION                 equ 0007h
OSCCON3_CSWHOLD_SIZE                     equ 0001h
OSCCON3_CSWHOLD_LENGTH                   equ 0001h
OSCCON3_CSWHOLD_MASK                     equ 0080h

// Register: OSCSTAT
#define OSCSTAT OSCSTAT
OSCSTAT                                  equ 0EDBh
// bitfield definitions
OSCSTAT_PLLR_POSN                        equ 0000h
OSCSTAT_PLLR_POSITION                    equ 0000h
OSCSTAT_PLLR_SIZE                        equ 0001h
OSCSTAT_PLLR_LENGTH                      equ 0001h
OSCSTAT_PLLR_MASK                        equ 0001h
OSCSTAT_ADOR_POSN                        equ 0002h
OSCSTAT_ADOR_POSITION                    equ 0002h
OSCSTAT_ADOR_SIZE                        equ 0001h
OSCSTAT_ADOR_LENGTH                      equ 0001h
OSCSTAT_ADOR_MASK                        equ 0004h
OSCSTAT_SOR_POSN                         equ 0003h
OSCSTAT_SOR_POSITION                     equ 0003h
OSCSTAT_SOR_SIZE                         equ 0001h
OSCSTAT_SOR_LENGTH                       equ 0001h
OSCSTAT_SOR_MASK                         equ 0008h
OSCSTAT_LFOR_POSN                        equ 0004h
OSCSTAT_LFOR_POSITION                    equ 0004h
OSCSTAT_LFOR_SIZE                        equ 0001h
OSCSTAT_LFOR_LENGTH                      equ 0001h
OSCSTAT_LFOR_MASK                        equ 0010h
OSCSTAT_MFOR_POSN                        equ 0005h
OSCSTAT_MFOR_POSITION                    equ 0005h
OSCSTAT_MFOR_SIZE                        equ 0001h
OSCSTAT_MFOR_LENGTH                      equ 0001h
OSCSTAT_MFOR_MASK                        equ 0020h
OSCSTAT_HFOR_POSN                        equ 0006h
OSCSTAT_HFOR_POSITION                    equ 0006h
OSCSTAT_HFOR_SIZE                        equ 0001h
OSCSTAT_HFOR_LENGTH                      equ 0001h
OSCSTAT_HFOR_MASK                        equ 0040h
OSCSTAT_EXTOR_POSN                       equ 0007h
OSCSTAT_EXTOR_POSITION                   equ 0007h
OSCSTAT_EXTOR_SIZE                       equ 0001h
OSCSTAT_EXTOR_LENGTH                     equ 0001h
OSCSTAT_EXTOR_MASK                       equ 0080h

// Register: OSCEN
#define OSCEN OSCEN
OSCEN                                    equ 0EDCh
// bitfield definitions
OSCEN_ADOEN_POSN                         equ 0002h
OSCEN_ADOEN_POSITION                     equ 0002h
OSCEN_ADOEN_SIZE                         equ 0001h
OSCEN_ADOEN_LENGTH                       equ 0001h
OSCEN_ADOEN_MASK                         equ 0004h
OSCEN_SOSCEN_POSN                        equ 0003h
OSCEN_SOSCEN_POSITION                    equ 0003h
OSCEN_SOSCEN_SIZE                        equ 0001h
OSCEN_SOSCEN_LENGTH                      equ 0001h
OSCEN_SOSCEN_MASK                        equ 0008h
OSCEN_LFOEN_POSN                         equ 0004h
OSCEN_LFOEN_POSITION                     equ 0004h
OSCEN_LFOEN_SIZE                         equ 0001h
OSCEN_LFOEN_LENGTH                       equ 0001h
OSCEN_LFOEN_MASK                         equ 0010h
OSCEN_MFOEN_POSN                         equ 0005h
OSCEN_MFOEN_POSITION                     equ 0005h
OSCEN_MFOEN_SIZE                         equ 0001h
OSCEN_MFOEN_LENGTH                       equ 0001h
OSCEN_MFOEN_MASK                         equ 0020h
OSCEN_HFOEN_POSN                         equ 0006h
OSCEN_HFOEN_POSITION                     equ 0006h
OSCEN_HFOEN_SIZE                         equ 0001h
OSCEN_HFOEN_LENGTH                       equ 0001h
OSCEN_HFOEN_MASK                         equ 0040h
OSCEN_EXTOEN_POSN                        equ 0007h
OSCEN_EXTOEN_POSITION                    equ 0007h
OSCEN_EXTOEN_SIZE                        equ 0001h
OSCEN_EXTOEN_LENGTH                      equ 0001h
OSCEN_EXTOEN_MASK                        equ 0080h

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
OSCTUNE                                  equ 0EDDh
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

// Register: OSCFRQ
#define OSCFRQ OSCFRQ
OSCFRQ                                   equ 0EDEh
// bitfield definitions
OSCFRQ_HFFRQ_POSN                        equ 0000h
OSCFRQ_HFFRQ_POSITION                    equ 0000h
OSCFRQ_HFFRQ_SIZE                        equ 0004h
OSCFRQ_HFFRQ_LENGTH                      equ 0004h
OSCFRQ_HFFRQ_MASK                        equ 000Fh
OSCFRQ_FRQ0_POSN                         equ 0000h
OSCFRQ_FRQ0_POSITION                     equ 0000h
OSCFRQ_FRQ0_SIZE                         equ 0001h
OSCFRQ_FRQ0_LENGTH                       equ 0001h
OSCFRQ_FRQ0_MASK                         equ 0001h
OSCFRQ_FRQ1_POSN                         equ 0001h
OSCFRQ_FRQ1_POSITION                     equ 0001h
OSCFRQ_FRQ1_SIZE                         equ 0001h
OSCFRQ_FRQ1_LENGTH                       equ 0001h
OSCFRQ_FRQ1_MASK                         equ 0002h
OSCFRQ_FRQ2_POSN                         equ 0002h
OSCFRQ_FRQ2_POSITION                     equ 0002h
OSCFRQ_FRQ2_SIZE                         equ 0001h
OSCFRQ_FRQ2_LENGTH                       equ 0001h
OSCFRQ_FRQ2_MASK                         equ 0004h
OSCFRQ_FRQ3_POSN                         equ 0003h
OSCFRQ_FRQ3_POSITION                     equ 0003h
OSCFRQ_FRQ3_SIZE                         equ 0001h
OSCFRQ_FRQ3_LENGTH                       equ 0001h
OSCFRQ_FRQ3_MASK                         equ 0008h

// Register: VREGCON
#define VREGCON VREGCON
VREGCON                                  equ 0EDFh
// bitfield definitions
VREGCON_VREGPM_POSN                      equ 0000h
VREGCON_VREGPM_POSITION                  equ 0000h
VREGCON_VREGPM_SIZE                      equ 0002h
VREGCON_VREGPM_LENGTH                    equ 0002h
VREGCON_VREGPM_MASK                      equ 0003h
VREGCON_VREGPM0_POSN                     equ 0000h
VREGCON_VREGPM0_POSITION                 equ 0000h
VREGCON_VREGPM0_SIZE                     equ 0001h
VREGCON_VREGPM0_LENGTH                   equ 0001h
VREGCON_VREGPM0_MASK                     equ 0001h
VREGCON_VREGPM1_POSN                     equ 0001h
VREGCON_VREGPM1_POSITION                 equ 0001h
VREGCON_VREGPM1_SIZE                     equ 0001h
VREGCON_VREGPM1_LENGTH                   equ 0001h
VREGCON_VREGPM1_MASK                     equ 0002h

// Register: BORCON
#define BORCON BORCON
BORCON                                   equ 0EE0h
// bitfield definitions
BORCON_BORRDY_POSN                       equ 0000h
BORCON_BORRDY_POSITION                   equ 0000h
BORCON_BORRDY_SIZE                       equ 0001h
BORCON_BORRDY_LENGTH                     equ 0001h
BORCON_BORRDY_MASK                       equ 0001h
BORCON_SBOREN_POSN                       equ 0007h
BORCON_SBOREN_POSITION                   equ 0007h
BORCON_SBOREN_SIZE                       equ 0001h
BORCON_SBOREN_LENGTH                     equ 0001h
BORCON_SBOREN_MASK                       equ 0080h

// Register: PMD0
#define PMD0 PMD0
PMD0                                     equ 0EE1h
// bitfield definitions
PMD0_IOCMD_POSN                          equ 0000h
PMD0_IOCMD_POSITION                      equ 0000h
PMD0_IOCMD_SIZE                          equ 0001h
PMD0_IOCMD_LENGTH                        equ 0001h
PMD0_IOCMD_MASK                          equ 0001h
PMD0_CLKRMD_POSN                         equ 0001h
PMD0_CLKRMD_POSITION                     equ 0001h
PMD0_CLKRMD_SIZE                         equ 0001h
PMD0_CLKRMD_LENGTH                       equ 0001h
PMD0_CLKRMD_MASK                         equ 0002h
PMD0_NVMMD_POSN                          equ 0002h
PMD0_NVMMD_POSITION                      equ 0002h
PMD0_NVMMD_SIZE                          equ 0001h
PMD0_NVMMD_LENGTH                        equ 0001h
PMD0_NVMMD_MASK                          equ 0004h
PMD0_SCANMD_POSN                         equ 0003h
PMD0_SCANMD_POSITION                     equ 0003h
PMD0_SCANMD_SIZE                         equ 0001h
PMD0_SCANMD_LENGTH                       equ 0001h
PMD0_SCANMD_MASK                         equ 0008h
PMD0_CRCMD_POSN                          equ 0004h
PMD0_CRCMD_POSITION                      equ 0004h
PMD0_CRCMD_SIZE                          equ 0001h
PMD0_CRCMD_LENGTH                        equ 0001h
PMD0_CRCMD_MASK                          equ 0010h
PMD0_HLVDMD_POSN                         equ 0005h
PMD0_HLVDMD_POSITION                     equ 0005h
PMD0_HLVDMD_SIZE                         equ 0001h
PMD0_HLVDMD_LENGTH                       equ 0001h
PMD0_HLVDMD_MASK                         equ 0020h
PMD0_FVRMD_POSN                          equ 0006h
PMD0_FVRMD_POSITION                      equ 0006h
PMD0_FVRMD_SIZE                          equ 0001h
PMD0_FVRMD_LENGTH                        equ 0001h
PMD0_FVRMD_MASK                          equ 0040h
PMD0_SYSCMD_POSN                         equ 0007h
PMD0_SYSCMD_POSITION                     equ 0007h
PMD0_SYSCMD_SIZE                         equ 0001h
PMD0_SYSCMD_LENGTH                       equ 0001h
PMD0_SYSCMD_MASK                         equ 0080h
PMD0_SPI1MD_POSN                         equ 0001h
PMD0_SPI1MD_POSITION                     equ 0001h
PMD0_SPI1MD_SIZE                         equ 0001h
PMD0_SPI1MD_LENGTH                       equ 0001h
PMD0_SPI1MD_MASK                         equ 0002h
PMD0_SPI2MD_POSN                         equ 0002h
PMD0_SPI2MD_POSITION                     equ 0002h
PMD0_SPI2MD_SIZE                         equ 0001h
PMD0_SPI2MD_LENGTH                       equ 0001h
PMD0_SPI2MD_MASK                         equ 0004h

// Register: PMD1
#define PMD1 PMD1
PMD1                                     equ 0EE2h
// bitfield definitions
PMD1_TMR0MD_POSN                         equ 0000h
PMD1_TMR0MD_POSITION                     equ 0000h
PMD1_TMR0MD_SIZE                         equ 0001h
PMD1_TMR0MD_LENGTH                       equ 0001h
PMD1_TMR0MD_MASK                         equ 0001h
PMD1_TMR1MD_POSN                         equ 0001h
PMD1_TMR1MD_POSITION                     equ 0001h
PMD1_TMR1MD_SIZE                         equ 0001h
PMD1_TMR1MD_LENGTH                       equ 0001h
PMD1_TMR1MD_MASK                         equ 0002h
PMD1_TMR2MD_POSN                         equ 0002h
PMD1_TMR2MD_POSITION                     equ 0002h
PMD1_TMR2MD_SIZE                         equ 0001h
PMD1_TMR2MD_LENGTH                       equ 0001h
PMD1_TMR2MD_MASK                         equ 0004h
PMD1_TMR3MD_POSN                         equ 0003h
PMD1_TMR3MD_POSITION                     equ 0003h
PMD1_TMR3MD_SIZE                         equ 0001h
PMD1_TMR3MD_LENGTH                       equ 0001h
PMD1_TMR3MD_MASK                         equ 0008h
PMD1_TMR4MD_POSN                         equ 0004h
PMD1_TMR4MD_POSITION                     equ 0004h
PMD1_TMR4MD_SIZE                         equ 0001h
PMD1_TMR4MD_LENGTH                       equ 0001h
PMD1_TMR4MD_MASK                         equ 0010h
PMD1_TMR5MD_POSN                         equ 0005h
PMD1_TMR5MD_POSITION                     equ 0005h
PMD1_TMR5MD_SIZE                         equ 0001h
PMD1_TMR5MD_LENGTH                       equ 0001h
PMD1_TMR5MD_MASK                         equ 0020h
PMD1_TMR6MD_POSN                         equ 0006h
PMD1_TMR6MD_POSITION                     equ 0006h
PMD1_TMR6MD_SIZE                         equ 0001h
PMD1_TMR6MD_LENGTH                       equ 0001h
PMD1_TMR6MD_MASK                         equ 0040h
PMD1_EMBMD_POSN                          equ 0000h
PMD1_EMBMD_POSITION                      equ 0000h
PMD1_EMBMD_SIZE                          equ 0001h
PMD1_EMBMD_LENGTH                        equ 0001h
PMD1_EMBMD_MASK                          equ 0001h

// Register: PMD2
#define PMD2 PMD2
PMD2                                     equ 0EE3h
// bitfield definitions
PMD2_ZCDMD_POSN                          equ 0000h
PMD2_ZCDMD_POSITION                      equ 0000h
PMD2_ZCDMD_SIZE                          equ 0001h
PMD2_ZCDMD_LENGTH                        equ 0001h
PMD2_ZCDMD_MASK                          equ 0001h
PMD2_CMP1MD_POSN                         equ 0001h
PMD2_CMP1MD_POSITION                     equ 0001h
PMD2_CMP1MD_SIZE                         equ 0001h
PMD2_CMP1MD_LENGTH                       equ 0001h
PMD2_CMP1MD_MASK                         equ 0002h
PMD2_CMP2MD_POSN                         equ 0002h
PMD2_CMP2MD_POSITION                     equ 0002h
PMD2_CMP2MD_SIZE                         equ 0001h
PMD2_CMP2MD_LENGTH                       equ 0001h
PMD2_CMP2MD_MASK                         equ 0004h
PMD2_ADCMD_POSN                          equ 0005h
PMD2_ADCMD_POSITION                      equ 0005h
PMD2_ADCMD_SIZE                          equ 0001h
PMD2_ADCMD_LENGTH                        equ 0001h
PMD2_ADCMD_MASK                          equ 0020h
PMD2_DACMD_POSN                          equ 0006h
PMD2_DACMD_POSITION                      equ 0006h
PMD2_DACMD_SIZE                          equ 0001h
PMD2_DACMD_LENGTH                        equ 0001h
PMD2_DACMD_MASK                          equ 0040h

// Register: PMD3
#define PMD3 PMD3
PMD3                                     equ 0EE4h
// bitfield definitions
PMD3_CCP1MD_POSN                         equ 0000h
PMD3_CCP1MD_POSITION                     equ 0000h
PMD3_CCP1MD_SIZE                         equ 0001h
PMD3_CCP1MD_LENGTH                       equ 0001h
PMD3_CCP1MD_MASK                         equ 0001h
PMD3_CCP2MD_POSN                         equ 0001h
PMD3_CCP2MD_POSITION                     equ 0001h
PMD3_CCP2MD_SIZE                         equ 0001h
PMD3_CCP2MD_LENGTH                       equ 0001h
PMD3_CCP2MD_MASK                         equ 0002h
PMD3_PWM3MD_POSN                         equ 0002h
PMD3_PWM3MD_POSITION                     equ 0002h
PMD3_PWM3MD_SIZE                         equ 0001h
PMD3_PWM3MD_LENGTH                       equ 0001h
PMD3_PWM3MD_MASK                         equ 0004h
PMD3_PWM4MD_POSN                         equ 0003h
PMD3_PWM4MD_POSITION                     equ 0003h
PMD3_PWM4MD_SIZE                         equ 0001h
PMD3_PWM4MD_LENGTH                       equ 0001h
PMD3_PWM4MD_MASK                         equ 0008h

// Register: PMD4
#define PMD4 PMD4
PMD4                                     equ 0EE5h
// bitfield definitions
PMD4_CWGMD_POSN                          equ 0000h
PMD4_CWGMD_POSITION                      equ 0000h
PMD4_CWGMD_SIZE                          equ 0001h
PMD4_CWGMD_LENGTH                        equ 0001h
PMD4_CWGMD_MASK                          equ 0001h
PMD4_MSSP1MD_POSN                        equ 0004h
PMD4_MSSP1MD_POSITION                    equ 0004h
PMD4_MSSP1MD_SIZE                        equ 0001h
PMD4_MSSP1MD_LENGTH                      equ 0001h
PMD4_MSSP1MD_MASK                        equ 0010h
PMD4_UART1MD_POSN                        equ 0006h
PMD4_UART1MD_POSITION                    equ 0006h
PMD4_UART1MD_SIZE                        equ 0001h
PMD4_UART1MD_LENGTH                      equ 0001h
PMD4_UART1MD_MASK                        equ 0040h
PMD4_CWG1MD_POSN                         equ 0000h
PMD4_CWG1MD_POSITION                     equ 0000h
PMD4_CWG1MD_SIZE                         equ 0001h
PMD4_CWG1MD_LENGTH                       equ 0001h
PMD4_CWG1MD_MASK                         equ 0001h

// Register: PMD5
#define PMD5 PMD5
PMD5                                     equ 0EE6h
// bitfield definitions
PMD5_DSMMD_POSN                          equ 0000h
PMD5_DSMMD_POSITION                      equ 0000h
PMD5_DSMMD_SIZE                          equ 0001h
PMD5_DSMMD_LENGTH                        equ 0001h
PMD5_DSMMD_MASK                          equ 0001h

// Register: RA0PPS
#define RA0PPS RA0PPS
RA0PPS                                   equ 0EE7h
// bitfield definitions
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
RA0PPS_RA0PPS4_POSN                      equ 0004h
RA0PPS_RA0PPS4_POSITION                  equ 0004h
RA0PPS_RA0PPS4_SIZE                      equ 0001h
RA0PPS_RA0PPS4_LENGTH                    equ 0001h
RA0PPS_RA0PPS4_MASK                      equ 0010h

// Register: RA1PPS
#define RA1PPS RA1PPS
RA1PPS                                   equ 0EE8h
// bitfield definitions
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
RA1PPS_RA1PPS4_POSN                      equ 0004h
RA1PPS_RA1PPS4_POSITION                  equ 0004h
RA1PPS_RA1PPS4_SIZE                      equ 0001h
RA1PPS_RA1PPS4_LENGTH                    equ 0001h
RA1PPS_RA1PPS4_MASK                      equ 0010h

// Register: RA2PPS
#define RA2PPS RA2PPS
RA2PPS                                   equ 0EE9h
// bitfield definitions
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
RA2PPS_RA2PPS4_POSN                      equ 0004h
RA2PPS_RA2PPS4_POSITION                  equ 0004h
RA2PPS_RA2PPS4_SIZE                      equ 0001h
RA2PPS_RA2PPS4_LENGTH                    equ 0001h
RA2PPS_RA2PPS4_MASK                      equ 0010h

// Register: RA3PPS
#define RA3PPS RA3PPS
RA3PPS                                   equ 0EEAh
// bitfield definitions
RA3PPS_RA3PPS0_POSN                      equ 0000h
RA3PPS_RA3PPS0_POSITION                  equ 0000h
RA3PPS_RA3PPS0_SIZE                      equ 0001h
RA3PPS_RA3PPS0_LENGTH                    equ 0001h
RA3PPS_RA3PPS0_MASK                      equ 0001h
RA3PPS_RA3PPS1_POSN                      equ 0001h
RA3PPS_RA3PPS1_POSITION                  equ 0001h
RA3PPS_RA3PPS1_SIZE                      equ 0001h
RA3PPS_RA3PPS1_LENGTH                    equ 0001h
RA3PPS_RA3PPS1_MASK                      equ 0002h
RA3PPS_RA3PPS2_POSN                      equ 0002h
RA3PPS_RA3PPS2_POSITION                  equ 0002h
RA3PPS_RA3PPS2_SIZE                      equ 0001h
RA3PPS_RA3PPS2_LENGTH                    equ 0001h
RA3PPS_RA3PPS2_MASK                      equ 0004h
RA3PPS_RA3PPS3_POSN                      equ 0003h
RA3PPS_RA3PPS3_POSITION                  equ 0003h
RA3PPS_RA3PPS3_SIZE                      equ 0001h
RA3PPS_RA3PPS3_LENGTH                    equ 0001h
RA3PPS_RA3PPS3_MASK                      equ 0008h
RA3PPS_RA3PPS4_POSN                      equ 0004h
RA3PPS_RA3PPS4_POSITION                  equ 0004h
RA3PPS_RA3PPS4_SIZE                      equ 0001h
RA3PPS_RA3PPS4_LENGTH                    equ 0001h
RA3PPS_RA3PPS4_MASK                      equ 0010h

// Register: RA4PPS
#define RA4PPS RA4PPS
RA4PPS                                   equ 0EEBh
// bitfield definitions
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
RA4PPS_RA4PPS4_POSN                      equ 0004h
RA4PPS_RA4PPS4_POSITION                  equ 0004h
RA4PPS_RA4PPS4_SIZE                      equ 0001h
RA4PPS_RA4PPS4_LENGTH                    equ 0001h
RA4PPS_RA4PPS4_MASK                      equ 0010h

// Register: RA5PPS
#define RA5PPS RA5PPS
RA5PPS                                   equ 0EECh
// bitfield definitions
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
RA5PPS_RA5PPS4_POSN                      equ 0004h
RA5PPS_RA5PPS4_POSITION                  equ 0004h
RA5PPS_RA5PPS4_SIZE                      equ 0001h
RA5PPS_RA5PPS4_LENGTH                    equ 0001h
RA5PPS_RA5PPS4_MASK                      equ 0010h

// Register: RA6PPS
#define RA6PPS RA6PPS
RA6PPS                                   equ 0EEDh
// bitfield definitions
RA6PPS_RA6PPS0_POSN                      equ 0000h
RA6PPS_RA6PPS0_POSITION                  equ 0000h
RA6PPS_RA6PPS0_SIZE                      equ 0001h
RA6PPS_RA6PPS0_LENGTH                    equ 0001h
RA6PPS_RA6PPS0_MASK                      equ 0001h
RA6PPS_RA6PPS1_POSN                      equ 0001h
RA6PPS_RA6PPS1_POSITION                  equ 0001h
RA6PPS_RA6PPS1_SIZE                      equ 0001h
RA6PPS_RA6PPS1_LENGTH                    equ 0001h
RA6PPS_RA6PPS1_MASK                      equ 0002h
RA6PPS_RA6PPS2_POSN                      equ 0002h
RA6PPS_RA6PPS2_POSITION                  equ 0002h
RA6PPS_RA6PPS2_SIZE                      equ 0001h
RA6PPS_RA6PPS2_LENGTH                    equ 0001h
RA6PPS_RA6PPS2_MASK                      equ 0004h
RA6PPS_RA6PPS3_POSN                      equ 0003h
RA6PPS_RA6PPS3_POSITION                  equ 0003h
RA6PPS_RA6PPS3_SIZE                      equ 0001h
RA6PPS_RA6PPS3_LENGTH                    equ 0001h
RA6PPS_RA6PPS3_MASK                      equ 0008h
RA6PPS_RA6PPS4_POSN                      equ 0004h
RA6PPS_RA6PPS4_POSITION                  equ 0004h
RA6PPS_RA6PPS4_SIZE                      equ 0001h
RA6PPS_RA6PPS4_LENGTH                    equ 0001h
RA6PPS_RA6PPS4_MASK                      equ 0010h

// Register: RA7PPS
#define RA7PPS RA7PPS
RA7PPS                                   equ 0EEEh
// bitfield definitions
RA7PPS_RA7PPS0_POSN                      equ 0000h
RA7PPS_RA7PPS0_POSITION                  equ 0000h
RA7PPS_RA7PPS0_SIZE                      equ 0001h
RA7PPS_RA7PPS0_LENGTH                    equ 0001h
RA7PPS_RA7PPS0_MASK                      equ 0001h
RA7PPS_RA7PPS1_POSN                      equ 0001h
RA7PPS_RA7PPS1_POSITION                  equ 0001h
RA7PPS_RA7PPS1_SIZE                      equ 0001h
RA7PPS_RA7PPS1_LENGTH                    equ 0001h
RA7PPS_RA7PPS1_MASK                      equ 0002h
RA7PPS_RA7PPS2_POSN                      equ 0002h
RA7PPS_RA7PPS2_POSITION                  equ 0002h
RA7PPS_RA7PPS2_SIZE                      equ 0001h
RA7PPS_RA7PPS2_LENGTH                    equ 0001h
RA7PPS_RA7PPS2_MASK                      equ 0004h
RA7PPS_RA7PPS3_POSN                      equ 0003h
RA7PPS_RA7PPS3_POSITION                  equ 0003h
RA7PPS_RA7PPS3_SIZE                      equ 0001h
RA7PPS_RA7PPS3_LENGTH                    equ 0001h
RA7PPS_RA7PPS3_MASK                      equ 0008h
RA7PPS_RA7PPS4_POSN                      equ 0004h
RA7PPS_RA7PPS4_POSITION                  equ 0004h
RA7PPS_RA7PPS4_SIZE                      equ 0001h
RA7PPS_RA7PPS4_LENGTH                    equ 0001h
RA7PPS_RA7PPS4_MASK                      equ 0010h

// Register: RB0PPS
#define RB0PPS RB0PPS
RB0PPS                                   equ 0EEFh
// bitfield definitions
RB0PPS_RB0PPS0_POSN                      equ 0000h
RB0PPS_RB0PPS0_POSITION                  equ 0000h
RB0PPS_RB0PPS0_SIZE                      equ 0001h
RB0PPS_RB0PPS0_LENGTH                    equ 0001h
RB0PPS_RB0PPS0_MASK                      equ 0001h
RB0PPS_RB0PPS1_POSN                      equ 0001h
RB0PPS_RB0PPS1_POSITION                  equ 0001h
RB0PPS_RB0PPS1_SIZE                      equ 0001h
RB0PPS_RB0PPS1_LENGTH                    equ 0001h
RB0PPS_RB0PPS1_MASK                      equ 0002h
RB0PPS_RB0PPS2_POSN                      equ 0002h
RB0PPS_RB0PPS2_POSITION                  equ 0002h
RB0PPS_RB0PPS2_SIZE                      equ 0001h
RB0PPS_RB0PPS2_LENGTH                    equ 0001h
RB0PPS_RB0PPS2_MASK                      equ 0004h
RB0PPS_RB0PPS3_POSN                      equ 0003h
RB0PPS_RB0PPS3_POSITION                  equ 0003h
RB0PPS_RB0PPS3_SIZE                      equ 0001h
RB0PPS_RB0PPS3_LENGTH                    equ 0001h
RB0PPS_RB0PPS3_MASK                      equ 0008h
RB0PPS_RB0PPS4_POSN                      equ 0004h
RB0PPS_RB0PPS4_POSITION                  equ 0004h
RB0PPS_RB0PPS4_SIZE                      equ 0001h
RB0PPS_RB0PPS4_LENGTH                    equ 0001h
RB0PPS_RB0PPS4_MASK                      equ 0010h

// Register: RB1PPS
#define RB1PPS RB1PPS
RB1PPS                                   equ 0EF0h
// bitfield definitions
RB1PPS_RB1PPS0_POSN                      equ 0000h
RB1PPS_RB1PPS0_POSITION                  equ 0000h
RB1PPS_RB1PPS0_SIZE                      equ 0001h
RB1PPS_RB1PPS0_LENGTH                    equ 0001h
RB1PPS_RB1PPS0_MASK                      equ 0001h
RB1PPS_RB1PPS1_POSN                      equ 0001h
RB1PPS_RB1PPS1_POSITION                  equ 0001h
RB1PPS_RB1PPS1_SIZE                      equ 0001h
RB1PPS_RB1PPS1_LENGTH                    equ 0001h
RB1PPS_RB1PPS1_MASK                      equ 0002h
RB1PPS_RB1PPS2_POSN                      equ 0002h
RB1PPS_RB1PPS2_POSITION                  equ 0002h
RB1PPS_RB1PPS2_SIZE                      equ 0001h
RB1PPS_RB1PPS2_LENGTH                    equ 0001h
RB1PPS_RB1PPS2_MASK                      equ 0004h
RB1PPS_RB1PPS3_POSN                      equ 0003h
RB1PPS_RB1PPS3_POSITION                  equ 0003h
RB1PPS_RB1PPS3_SIZE                      equ 0001h
RB1PPS_RB1PPS3_LENGTH                    equ 0001h
RB1PPS_RB1PPS3_MASK                      equ 0008h
RB1PPS_RB1PPS4_POSN                      equ 0004h
RB1PPS_RB1PPS4_POSITION                  equ 0004h
RB1PPS_RB1PPS4_SIZE                      equ 0001h
RB1PPS_RB1PPS4_LENGTH                    equ 0001h
RB1PPS_RB1PPS4_MASK                      equ 0010h

// Register: RB2PPS
#define RB2PPS RB2PPS
RB2PPS                                   equ 0EF1h
// bitfield definitions
RB2PPS_RB2PPS0_POSN                      equ 0000h
RB2PPS_RB2PPS0_POSITION                  equ 0000h
RB2PPS_RB2PPS0_SIZE                      equ 0001h
RB2PPS_RB2PPS0_LENGTH                    equ 0001h
RB2PPS_RB2PPS0_MASK                      equ 0001h
RB2PPS_RB2PPS1_POSN                      equ 0001h
RB2PPS_RB2PPS1_POSITION                  equ 0001h
RB2PPS_RB2PPS1_SIZE                      equ 0001h
RB2PPS_RB2PPS1_LENGTH                    equ 0001h
RB2PPS_RB2PPS1_MASK                      equ 0002h
RB2PPS_RB2PPS2_POSN                      equ 0002h
RB2PPS_RB2PPS2_POSITION                  equ 0002h
RB2PPS_RB2PPS2_SIZE                      equ 0001h
RB2PPS_RB2PPS2_LENGTH                    equ 0001h
RB2PPS_RB2PPS2_MASK                      equ 0004h
RB2PPS_RB2PPS3_POSN                      equ 0003h
RB2PPS_RB2PPS3_POSITION                  equ 0003h
RB2PPS_RB2PPS3_SIZE                      equ 0001h
RB2PPS_RB2PPS3_LENGTH                    equ 0001h
RB2PPS_RB2PPS3_MASK                      equ 0008h
RB2PPS_RB2PPS4_POSN                      equ 0004h
RB2PPS_RB2PPS4_POSITION                  equ 0004h
RB2PPS_RB2PPS4_SIZE                      equ 0001h
RB2PPS_RB2PPS4_LENGTH                    equ 0001h
RB2PPS_RB2PPS4_MASK                      equ 0010h

// Register: RB3PPS
#define RB3PPS RB3PPS
RB3PPS                                   equ 0EF2h
// bitfield definitions
RB3PPS_RB3PPS0_POSN                      equ 0000h
RB3PPS_RB3PPS0_POSITION                  equ 0000h
RB3PPS_RB3PPS0_SIZE                      equ 0001h
RB3PPS_RB3PPS0_LENGTH                    equ 0001h
RB3PPS_RB3PPS0_MASK                      equ 0001h
RB3PPS_RB3PPS1_POSN                      equ 0001h
RB3PPS_RB3PPS1_POSITION                  equ 0001h
RB3PPS_RB3PPS1_SIZE                      equ 0001h
RB3PPS_RB3PPS1_LENGTH                    equ 0001h
RB3PPS_RB3PPS1_MASK                      equ 0002h
RB3PPS_RB3PPS2_POSN                      equ 0002h
RB3PPS_RB3PPS2_POSITION                  equ 0002h
RB3PPS_RB3PPS2_SIZE                      equ 0001h
RB3PPS_RB3PPS2_LENGTH                    equ 0001h
RB3PPS_RB3PPS2_MASK                      equ 0004h
RB3PPS_RB3PPS3_POSN                      equ 0003h
RB3PPS_RB3PPS3_POSITION                  equ 0003h
RB3PPS_RB3PPS3_SIZE                      equ 0001h
RB3PPS_RB3PPS3_LENGTH                    equ 0001h
RB3PPS_RB3PPS3_MASK                      equ 0008h
RB3PPS_RB3PPS4_POSN                      equ 0004h
RB3PPS_RB3PPS4_POSITION                  equ 0004h
RB3PPS_RB3PPS4_SIZE                      equ 0001h
RB3PPS_RB3PPS4_LENGTH                    equ 0001h
RB3PPS_RB3PPS4_MASK                      equ 0010h

// Register: RB4PPS
#define RB4PPS RB4PPS
RB4PPS                                   equ 0EF3h
// bitfield definitions
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
RB4PPS_RB4PPS4_POSN                      equ 0004h
RB4PPS_RB4PPS4_POSITION                  equ 0004h
RB4PPS_RB4PPS4_SIZE                      equ 0001h
RB4PPS_RB4PPS4_LENGTH                    equ 0001h
RB4PPS_RB4PPS4_MASK                      equ 0010h

// Register: RB5PPS
#define RB5PPS RB5PPS
RB5PPS                                   equ 0EF4h
// bitfield definitions
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
RB5PPS_RB5PPS4_POSN                      equ 0004h
RB5PPS_RB5PPS4_POSITION                  equ 0004h
RB5PPS_RB5PPS4_SIZE                      equ 0001h
RB5PPS_RB5PPS4_LENGTH                    equ 0001h
RB5PPS_RB5PPS4_MASK                      equ 0010h

// Register: RB6PPS
#define RB6PPS RB6PPS
RB6PPS                                   equ 0EF5h
// bitfield definitions
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
RB6PPS_RB6PPS4_POSN                      equ 0004h
RB6PPS_RB6PPS4_POSITION                  equ 0004h
RB6PPS_RB6PPS4_SIZE                      equ 0001h
RB6PPS_RB6PPS4_LENGTH                    equ 0001h
RB6PPS_RB6PPS4_MASK                      equ 0010h

// Register: RB7PPS
#define RB7PPS RB7PPS
RB7PPS                                   equ 0EF6h
// bitfield definitions
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
RB7PPS_RB7PPS4_POSN                      equ 0004h
RB7PPS_RB7PPS4_POSITION                  equ 0004h
RB7PPS_RB7PPS4_SIZE                      equ 0001h
RB7PPS_RB7PPS4_LENGTH                    equ 0001h
RB7PPS_RB7PPS4_MASK                      equ 0010h

// Register: RC0PPS
#define RC0PPS RC0PPS
RC0PPS                                   equ 0EF7h
// bitfield definitions
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
RC0PPS_RC0PPS4_POSN                      equ 0004h
RC0PPS_RC0PPS4_POSITION                  equ 0004h
RC0PPS_RC0PPS4_SIZE                      equ 0001h
RC0PPS_RC0PPS4_LENGTH                    equ 0001h
RC0PPS_RC0PPS4_MASK                      equ 0010h

// Register: RC1PPS
#define RC1PPS RC1PPS
RC1PPS                                   equ 0EF8h
// bitfield definitions
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
RC1PPS_RC1PPS4_POSN                      equ 0004h
RC1PPS_RC1PPS4_POSITION                  equ 0004h
RC1PPS_RC1PPS4_SIZE                      equ 0001h
RC1PPS_RC1PPS4_LENGTH                    equ 0001h
RC1PPS_RC1PPS4_MASK                      equ 0010h

// Register: RC2PPS
#define RC2PPS RC2PPS
RC2PPS                                   equ 0EF9h
// bitfield definitions
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
RC2PPS_RC2PPS4_POSN                      equ 0004h
RC2PPS_RC2PPS4_POSITION                  equ 0004h
RC2PPS_RC2PPS4_SIZE                      equ 0001h
RC2PPS_RC2PPS4_LENGTH                    equ 0001h
RC2PPS_RC2PPS4_MASK                      equ 0010h

// Register: RC3PPS
#define RC3PPS RC3PPS
RC3PPS                                   equ 0EFAh
// bitfield definitions
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
RC3PPS_RC3PPS4_POSN                      equ 0004h
RC3PPS_RC3PPS4_POSITION                  equ 0004h
RC3PPS_RC3PPS4_SIZE                      equ 0001h
RC3PPS_RC3PPS4_LENGTH                    equ 0001h
RC3PPS_RC3PPS4_MASK                      equ 0010h

// Register: RC4PPS
#define RC4PPS RC4PPS
RC4PPS                                   equ 0EFBh
// bitfield definitions
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
RC4PPS_RC4PPS4_POSN                      equ 0004h
RC4PPS_RC4PPS4_POSITION                  equ 0004h
RC4PPS_RC4PPS4_SIZE                      equ 0001h
RC4PPS_RC4PPS4_LENGTH                    equ 0001h
RC4PPS_RC4PPS4_MASK                      equ 0010h

// Register: RC5PPS
#define RC5PPS RC5PPS
RC5PPS                                   equ 0EFCh
// bitfield definitions
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
RC5PPS_RC5PPS4_POSN                      equ 0004h
RC5PPS_RC5PPS4_POSITION                  equ 0004h
RC5PPS_RC5PPS4_SIZE                      equ 0001h
RC5PPS_RC5PPS4_LENGTH                    equ 0001h
RC5PPS_RC5PPS4_MASK                      equ 0010h

// Register: RC6PPS
#define RC6PPS RC6PPS
RC6PPS                                   equ 0EFDh
// bitfield definitions
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
RC6PPS_RC6PPS4_POSN                      equ 0004h
RC6PPS_RC6PPS4_POSITION                  equ 0004h
RC6PPS_RC6PPS4_SIZE                      equ 0001h
RC6PPS_RC6PPS4_LENGTH                    equ 0001h
RC6PPS_RC6PPS4_MASK                      equ 0010h

// Register: RC7PPS
#define RC7PPS RC7PPS
RC7PPS                                   equ 0EFEh
// bitfield definitions
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
RC7PPS_RC7PPS4_POSN                      equ 0004h
RC7PPS_RC7PPS4_POSITION                  equ 0004h
RC7PPS_RC7PPS4_SIZE                      equ 0001h
RC7PPS_RC7PPS4_LENGTH                    equ 0001h
RC7PPS_RC7PPS4_MASK                      equ 0010h

// Register: IOCAF
#define IOCAF IOCAF
IOCAF                                    equ 0F0Ah
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
IOCAF_IOCAF6_POSN                        equ 0006h
IOCAF_IOCAF6_POSITION                    equ 0006h
IOCAF_IOCAF6_SIZE                        equ 0001h
IOCAF_IOCAF6_LENGTH                      equ 0001h
IOCAF_IOCAF6_MASK                        equ 0040h
IOCAF_IOCAF7_POSN                        equ 0007h
IOCAF_IOCAF7_POSITION                    equ 0007h
IOCAF_IOCAF7_SIZE                        equ 0001h
IOCAF_IOCAF7_LENGTH                      equ 0001h
IOCAF_IOCAF7_MASK                        equ 0080h

// Register: IOCAN
#define IOCAN IOCAN
IOCAN                                    equ 0F0Bh
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
IOCAN_IOCAN6_POSN                        equ 0006h
IOCAN_IOCAN6_POSITION                    equ 0006h
IOCAN_IOCAN6_SIZE                        equ 0001h
IOCAN_IOCAN6_LENGTH                      equ 0001h
IOCAN_IOCAN6_MASK                        equ 0040h
IOCAN_IOCAN7_POSN                        equ 0007h
IOCAN_IOCAN7_POSITION                    equ 0007h
IOCAN_IOCAN7_SIZE                        equ 0001h
IOCAN_IOCAN7_LENGTH                      equ 0001h
IOCAN_IOCAN7_MASK                        equ 0080h

// Register: IOCAP
#define IOCAP IOCAP
IOCAP                                    equ 0F0Ch
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
IOCAP_IOCAP6_POSN                        equ 0006h
IOCAP_IOCAP6_POSITION                    equ 0006h
IOCAP_IOCAP6_SIZE                        equ 0001h
IOCAP_IOCAP6_LENGTH                      equ 0001h
IOCAP_IOCAP6_MASK                        equ 0040h
IOCAP_IOCAP7_POSN                        equ 0007h
IOCAP_IOCAP7_POSITION                    equ 0007h
IOCAP_IOCAP7_SIZE                        equ 0001h
IOCAP_IOCAP7_LENGTH                      equ 0001h
IOCAP_IOCAP7_MASK                        equ 0080h

// Register: INLVLA
#define INLVLA INLVLA
INLVLA                                   equ 0F0Dh
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
INLVLA_INLVLA6_POSN                      equ 0006h
INLVLA_INLVLA6_POSITION                  equ 0006h
INLVLA_INLVLA6_SIZE                      equ 0001h
INLVLA_INLVLA6_LENGTH                    equ 0001h
INLVLA_INLVLA6_MASK                      equ 0040h
INLVLA_INLVLA7_POSN                      equ 0007h
INLVLA_INLVLA7_POSITION                  equ 0007h
INLVLA_INLVLA7_SIZE                      equ 0001h
INLVLA_INLVLA7_LENGTH                    equ 0001h
INLVLA_INLVLA7_MASK                      equ 0080h

// Register: SLRCONA
#define SLRCONA SLRCONA
SLRCONA                                  equ 0F0Eh
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
SLRCONA_SLRA3_POSN                       equ 0003h
SLRCONA_SLRA3_POSITION                   equ 0003h
SLRCONA_SLRA3_SIZE                       equ 0001h
SLRCONA_SLRA3_LENGTH                     equ 0001h
SLRCONA_SLRA3_MASK                       equ 0008h
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
SLRCONA_SLRA6_POSN                       equ 0006h
SLRCONA_SLRA6_POSITION                   equ 0006h
SLRCONA_SLRA6_SIZE                       equ 0001h
SLRCONA_SLRA6_LENGTH                     equ 0001h
SLRCONA_SLRA6_MASK                       equ 0040h
SLRCONA_SLRA7_POSN                       equ 0007h
SLRCONA_SLRA7_POSITION                   equ 0007h
SLRCONA_SLRA7_SIZE                       equ 0001h
SLRCONA_SLRA7_LENGTH                     equ 0001h
SLRCONA_SLRA7_MASK                       equ 0080h

// Register: ODCONA
#define ODCONA ODCONA
ODCONA                                   equ 0F0Fh
// bitfield definitions
ODCONA_ODCA0_POSN                        equ 0000h
ODCONA_ODCA0_POSITION                    equ 0000h
ODCONA_ODCA0_SIZE                        equ 0001h
ODCONA_ODCA0_LENGTH                      equ 0001h
ODCONA_ODCA0_MASK                        equ 0001h
ODCONA_ODCA1_POSN                        equ 0001h
ODCONA_ODCA1_POSITION                    equ 0001h
ODCONA_ODCA1_SIZE                        equ 0001h
ODCONA_ODCA1_LENGTH                      equ 0001h
ODCONA_ODCA1_MASK                        equ 0002h
ODCONA_ODCA2_POSN                        equ 0002h
ODCONA_ODCA2_POSITION                    equ 0002h
ODCONA_ODCA2_SIZE                        equ 0001h
ODCONA_ODCA2_LENGTH                      equ 0001h
ODCONA_ODCA2_MASK                        equ 0004h
ODCONA_ODCA3_POSN                        equ 0003h
ODCONA_ODCA3_POSITION                    equ 0003h
ODCONA_ODCA3_SIZE                        equ 0001h
ODCONA_ODCA3_LENGTH                      equ 0001h
ODCONA_ODCA3_MASK                        equ 0008h
ODCONA_ODCA4_POSN                        equ 0004h
ODCONA_ODCA4_POSITION                    equ 0004h
ODCONA_ODCA4_SIZE                        equ 0001h
ODCONA_ODCA4_LENGTH                      equ 0001h
ODCONA_ODCA4_MASK                        equ 0010h
ODCONA_ODCA5_POSN                        equ 0005h
ODCONA_ODCA5_POSITION                    equ 0005h
ODCONA_ODCA5_SIZE                        equ 0001h
ODCONA_ODCA5_LENGTH                      equ 0001h
ODCONA_ODCA5_MASK                        equ 0020h
ODCONA_ODCA6_POSN                        equ 0006h
ODCONA_ODCA6_POSITION                    equ 0006h
ODCONA_ODCA6_SIZE                        equ 0001h
ODCONA_ODCA6_LENGTH                      equ 0001h
ODCONA_ODCA6_MASK                        equ 0040h
ODCONA_ODCA7_POSN                        equ 0007h
ODCONA_ODCA7_POSITION                    equ 0007h
ODCONA_ODCA7_SIZE                        equ 0001h
ODCONA_ODCA7_LENGTH                      equ 0001h
ODCONA_ODCA7_MASK                        equ 0080h

// Register: WPUA
#define WPUA WPUA
WPUA                                     equ 0F10h
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
WPUA_WPUA6_POSN                          equ 0006h
WPUA_WPUA6_POSITION                      equ 0006h
WPUA_WPUA6_SIZE                          equ 0001h
WPUA_WPUA6_LENGTH                        equ 0001h
WPUA_WPUA6_MASK                          equ 0040h
WPUA_WPUA7_POSN                          equ 0007h
WPUA_WPUA7_POSITION                      equ 0007h
WPUA_WPUA7_SIZE                          equ 0001h
WPUA_WPUA7_LENGTH                        equ 0001h
WPUA_WPUA7_MASK                          equ 0080h

// Register: ANSELA
#define ANSELA ANSELA
ANSELA                                   equ 0F11h
// bitfield definitions
ANSELA_ANSELA0_POSN                      equ 0000h
ANSELA_ANSELA0_POSITION                  equ 0000h
ANSELA_ANSELA0_SIZE                      equ 0001h
ANSELA_ANSELA0_LENGTH                    equ 0001h
ANSELA_ANSELA0_MASK                      equ 0001h
ANSELA_ANSELA1_POSN                      equ 0001h
ANSELA_ANSELA1_POSITION                  equ 0001h
ANSELA_ANSELA1_SIZE                      equ 0001h
ANSELA_ANSELA1_LENGTH                    equ 0001h
ANSELA_ANSELA1_MASK                      equ 0002h
ANSELA_ANSELA2_POSN                      equ 0002h
ANSELA_ANSELA2_POSITION                  equ 0002h
ANSELA_ANSELA2_SIZE                      equ 0001h
ANSELA_ANSELA2_LENGTH                    equ 0001h
ANSELA_ANSELA2_MASK                      equ 0004h
ANSELA_ANSELA3_POSN                      equ 0003h
ANSELA_ANSELA3_POSITION                  equ 0003h
ANSELA_ANSELA3_SIZE                      equ 0001h
ANSELA_ANSELA3_LENGTH                    equ 0001h
ANSELA_ANSELA3_MASK                      equ 0008h
ANSELA_ANSELA4_POSN                      equ 0004h
ANSELA_ANSELA4_POSITION                  equ 0004h
ANSELA_ANSELA4_SIZE                      equ 0001h
ANSELA_ANSELA4_LENGTH                    equ 0001h
ANSELA_ANSELA4_MASK                      equ 0010h
ANSELA_ANSELA5_POSN                      equ 0005h
ANSELA_ANSELA5_POSITION                  equ 0005h
ANSELA_ANSELA5_SIZE                      equ 0001h
ANSELA_ANSELA5_LENGTH                    equ 0001h
ANSELA_ANSELA5_MASK                      equ 0020h
ANSELA_ANSELA6_POSN                      equ 0006h
ANSELA_ANSELA6_POSITION                  equ 0006h
ANSELA_ANSELA6_SIZE                      equ 0001h
ANSELA_ANSELA6_LENGTH                    equ 0001h
ANSELA_ANSELA6_MASK                      equ 0040h
ANSELA_ANSELA7_POSN                      equ 0007h
ANSELA_ANSELA7_POSITION                  equ 0007h
ANSELA_ANSELA7_SIZE                      equ 0001h
ANSELA_ANSELA7_LENGTH                    equ 0001h
ANSELA_ANSELA7_MASK                      equ 0080h

// Register: IOCBF
#define IOCBF IOCBF
IOCBF                                    equ 0F12h
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

// Register: IOCBN
#define IOCBN IOCBN
IOCBN                                    equ 0F13h
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

// Register: IOCBP
#define IOCBP IOCBP
IOCBP                                    equ 0F14h
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

// Register: INLVLB
#define INLVLB INLVLB
INLVLB                                   equ 0F15h
// bitfield definitions
INLVLB_INLVLB0_POSN                      equ 0000h
INLVLB_INLVLB0_POSITION                  equ 0000h
INLVLB_INLVLB0_SIZE                      equ 0001h
INLVLB_INLVLB0_LENGTH                    equ 0001h
INLVLB_INLVLB0_MASK                      equ 0001h
INLVLB_INLVLB1_POSN                      equ 0001h
INLVLB_INLVLB1_POSITION                  equ 0001h
INLVLB_INLVLB1_SIZE                      equ 0001h
INLVLB_INLVLB1_LENGTH                    equ 0001h
INLVLB_INLVLB1_MASK                      equ 0002h
INLVLB_INLVLB2_POSN                      equ 0002h
INLVLB_INLVLB2_POSITION                  equ 0002h
INLVLB_INLVLB2_SIZE                      equ 0001h
INLVLB_INLVLB2_LENGTH                    equ 0001h
INLVLB_INLVLB2_MASK                      equ 0004h
INLVLB_INLVLB3_POSN                      equ 0003h
INLVLB_INLVLB3_POSITION                  equ 0003h
INLVLB_INLVLB3_SIZE                      equ 0001h
INLVLB_INLVLB3_LENGTH                    equ 0001h
INLVLB_INLVLB3_MASK                      equ 0008h
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

// Register: SLRCONB
#define SLRCONB SLRCONB
SLRCONB                                  equ 0F16h
// bitfield definitions
SLRCONB_SLRB0_POSN                       equ 0000h
SLRCONB_SLRB0_POSITION                   equ 0000h
SLRCONB_SLRB0_SIZE                       equ 0001h
SLRCONB_SLRB0_LENGTH                     equ 0001h
SLRCONB_SLRB0_MASK                       equ 0001h
SLRCONB_SLRB1_POSN                       equ 0001h
SLRCONB_SLRB1_POSITION                   equ 0001h
SLRCONB_SLRB1_SIZE                       equ 0001h
SLRCONB_SLRB1_LENGTH                     equ 0001h
SLRCONB_SLRB1_MASK                       equ 0002h
SLRCONB_SLRB2_POSN                       equ 0002h
SLRCONB_SLRB2_POSITION                   equ 0002h
SLRCONB_SLRB2_SIZE                       equ 0001h
SLRCONB_SLRB2_LENGTH                     equ 0001h
SLRCONB_SLRB2_MASK                       equ 0004h
SLRCONB_SLRB3_POSN                       equ 0003h
SLRCONB_SLRB3_POSITION                   equ 0003h
SLRCONB_SLRB3_SIZE                       equ 0001h
SLRCONB_SLRB3_LENGTH                     equ 0001h
SLRCONB_SLRB3_MASK                       equ 0008h
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

// Register: ODCONB
#define ODCONB ODCONB
ODCONB                                   equ 0F17h
// bitfield definitions
ODCONB_ODCB0_POSN                        equ 0000h
ODCONB_ODCB0_POSITION                    equ 0000h
ODCONB_ODCB0_SIZE                        equ 0001h
ODCONB_ODCB0_LENGTH                      equ 0001h
ODCONB_ODCB0_MASK                        equ 0001h
ODCONB_ODCB1_POSN                        equ 0001h
ODCONB_ODCB1_POSITION                    equ 0001h
ODCONB_ODCB1_SIZE                        equ 0001h
ODCONB_ODCB1_LENGTH                      equ 0001h
ODCONB_ODCB1_MASK                        equ 0002h
ODCONB_ODCB2_POSN                        equ 0002h
ODCONB_ODCB2_POSITION                    equ 0002h
ODCONB_ODCB2_SIZE                        equ 0001h
ODCONB_ODCB2_LENGTH                      equ 0001h
ODCONB_ODCB2_MASK                        equ 0004h
ODCONB_ODCB3_POSN                        equ 0003h
ODCONB_ODCB3_POSITION                    equ 0003h
ODCONB_ODCB3_SIZE                        equ 0001h
ODCONB_ODCB3_LENGTH                      equ 0001h
ODCONB_ODCB3_MASK                        equ 0008h
ODCONB_ODCB4_POSN                        equ 0004h
ODCONB_ODCB4_POSITION                    equ 0004h
ODCONB_ODCB4_SIZE                        equ 0001h
ODCONB_ODCB4_LENGTH                      equ 0001h
ODCONB_ODCB4_MASK                        equ 0010h
ODCONB_ODCB5_POSN                        equ 0005h
ODCONB_ODCB5_POSITION                    equ 0005h
ODCONB_ODCB5_SIZE                        equ 0001h
ODCONB_ODCB5_LENGTH                      equ 0001h
ODCONB_ODCB5_MASK                        equ 0020h
ODCONB_ODCB6_POSN                        equ 0006h
ODCONB_ODCB6_POSITION                    equ 0006h
ODCONB_ODCB6_SIZE                        equ 0001h
ODCONB_ODCB6_LENGTH                      equ 0001h
ODCONB_ODCB6_MASK                        equ 0040h
ODCONB_ODCB7_POSN                        equ 0007h
ODCONB_ODCB7_POSITION                    equ 0007h
ODCONB_ODCB7_SIZE                        equ 0001h
ODCONB_ODCB7_LENGTH                      equ 0001h
ODCONB_ODCB7_MASK                        equ 0080h

// Register: WPUB
#define WPUB WPUB
WPUB                                     equ 0F18h
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

// Register: ANSELB
#define ANSELB ANSELB
ANSELB                                   equ 0F19h
// bitfield definitions
ANSELB_ANSELB0_POSN                      equ 0000h
ANSELB_ANSELB0_POSITION                  equ 0000h
ANSELB_ANSELB0_SIZE                      equ 0001h
ANSELB_ANSELB0_LENGTH                    equ 0001h
ANSELB_ANSELB0_MASK                      equ 0001h
ANSELB_ANSELB1_POSN                      equ 0001h
ANSELB_ANSELB1_POSITION                  equ 0001h
ANSELB_ANSELB1_SIZE                      equ 0001h
ANSELB_ANSELB1_LENGTH                    equ 0001h
ANSELB_ANSELB1_MASK                      equ 0002h
ANSELB_ANSELB2_POSN                      equ 0002h
ANSELB_ANSELB2_POSITION                  equ 0002h
ANSELB_ANSELB2_SIZE                      equ 0001h
ANSELB_ANSELB2_LENGTH                    equ 0001h
ANSELB_ANSELB2_MASK                      equ 0004h
ANSELB_ANSELB3_POSN                      equ 0003h
ANSELB_ANSELB3_POSITION                  equ 0003h
ANSELB_ANSELB3_SIZE                      equ 0001h
ANSELB_ANSELB3_LENGTH                    equ 0001h
ANSELB_ANSELB3_MASK                      equ 0008h
ANSELB_ANSELB4_POSN                      equ 0004h
ANSELB_ANSELB4_POSITION                  equ 0004h
ANSELB_ANSELB4_SIZE                      equ 0001h
ANSELB_ANSELB4_LENGTH                    equ 0001h
ANSELB_ANSELB4_MASK                      equ 0010h
ANSELB_ANSELB5_POSN                      equ 0005h
ANSELB_ANSELB5_POSITION                  equ 0005h
ANSELB_ANSELB5_SIZE                      equ 0001h
ANSELB_ANSELB5_LENGTH                    equ 0001h
ANSELB_ANSELB5_MASK                      equ 0020h
ANSELB_ANSELB6_POSN                      equ 0006h
ANSELB_ANSELB6_POSITION                  equ 0006h
ANSELB_ANSELB6_SIZE                      equ 0001h
ANSELB_ANSELB6_LENGTH                    equ 0001h
ANSELB_ANSELB6_MASK                      equ 0040h
ANSELB_ANSELB7_POSN                      equ 0007h
ANSELB_ANSELB7_POSITION                  equ 0007h
ANSELB_ANSELB7_SIZE                      equ 0001h
ANSELB_ANSELB7_LENGTH                    equ 0001h
ANSELB_ANSELB7_MASK                      equ 0080h

// Register: IOCCF
#define IOCCF IOCCF
IOCCF                                    equ 0F1Ah
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

// Register: IOCCN
#define IOCCN IOCCN
IOCCN                                    equ 0F1Bh
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

// Register: IOCCP
#define IOCCP IOCCP
IOCCP                                    equ 0F1Ch
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

// Register: INLVLC
#define INLVLC INLVLC
INLVLC                                   equ 0F1Dh
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

// Register: SLRCONC
#define SLRCONC SLRCONC
SLRCONC                                  equ 0F1Eh
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

// Register: ODCONC
#define ODCONC ODCONC
ODCONC                                   equ 0F1Fh
// bitfield definitions
ODCONC_ODCC0_POSN                        equ 0000h
ODCONC_ODCC0_POSITION                    equ 0000h
ODCONC_ODCC0_SIZE                        equ 0001h
ODCONC_ODCC0_LENGTH                      equ 0001h
ODCONC_ODCC0_MASK                        equ 0001h
ODCONC_ODCC1_POSN                        equ 0001h
ODCONC_ODCC1_POSITION                    equ 0001h
ODCONC_ODCC1_SIZE                        equ 0001h
ODCONC_ODCC1_LENGTH                      equ 0001h
ODCONC_ODCC1_MASK                        equ 0002h
ODCONC_ODCC2_POSN                        equ 0002h
ODCONC_ODCC2_POSITION                    equ 0002h
ODCONC_ODCC2_SIZE                        equ 0001h
ODCONC_ODCC2_LENGTH                      equ 0001h
ODCONC_ODCC2_MASK                        equ 0004h
ODCONC_ODCC3_POSN                        equ 0003h
ODCONC_ODCC3_POSITION                    equ 0003h
ODCONC_ODCC3_SIZE                        equ 0001h
ODCONC_ODCC3_LENGTH                      equ 0001h
ODCONC_ODCC3_MASK                        equ 0008h
ODCONC_ODCC4_POSN                        equ 0004h
ODCONC_ODCC4_POSITION                    equ 0004h
ODCONC_ODCC4_SIZE                        equ 0001h
ODCONC_ODCC4_LENGTH                      equ 0001h
ODCONC_ODCC4_MASK                        equ 0010h
ODCONC_ODCC5_POSN                        equ 0005h
ODCONC_ODCC5_POSITION                    equ 0005h
ODCONC_ODCC5_SIZE                        equ 0001h
ODCONC_ODCC5_LENGTH                      equ 0001h
ODCONC_ODCC5_MASK                        equ 0020h
ODCONC_ODCC6_POSN                        equ 0006h
ODCONC_ODCC6_POSITION                    equ 0006h
ODCONC_ODCC6_SIZE                        equ 0001h
ODCONC_ODCC6_LENGTH                      equ 0001h
ODCONC_ODCC6_MASK                        equ 0040h
ODCONC_ODCC7_POSN                        equ 0007h
ODCONC_ODCC7_POSITION                    equ 0007h
ODCONC_ODCC7_SIZE                        equ 0001h
ODCONC_ODCC7_LENGTH                      equ 0001h
ODCONC_ODCC7_MASK                        equ 0080h

// Register: WPUC
#define WPUC WPUC
WPUC                                     equ 0F20h
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

// Register: ANSELC
#define ANSELC ANSELC
ANSELC                                   equ 0F21h
// bitfield definitions
ANSELC_ANSELC0_POSN                      equ 0000h
ANSELC_ANSELC0_POSITION                  equ 0000h
ANSELC_ANSELC0_SIZE                      equ 0001h
ANSELC_ANSELC0_LENGTH                    equ 0001h
ANSELC_ANSELC0_MASK                      equ 0001h
ANSELC_ANSELC1_POSN                      equ 0001h
ANSELC_ANSELC1_POSITION                  equ 0001h
ANSELC_ANSELC1_SIZE                      equ 0001h
ANSELC_ANSELC1_LENGTH                    equ 0001h
ANSELC_ANSELC1_MASK                      equ 0002h
ANSELC_ANSELC2_POSN                      equ 0002h
ANSELC_ANSELC2_POSITION                  equ 0002h
ANSELC_ANSELC2_SIZE                      equ 0001h
ANSELC_ANSELC2_LENGTH                    equ 0001h
ANSELC_ANSELC2_MASK                      equ 0004h
ANSELC_ANSELC3_POSN                      equ 0003h
ANSELC_ANSELC3_POSITION                  equ 0003h
ANSELC_ANSELC3_SIZE                      equ 0001h
ANSELC_ANSELC3_LENGTH                    equ 0001h
ANSELC_ANSELC3_MASK                      equ 0008h
ANSELC_ANSELC4_POSN                      equ 0004h
ANSELC_ANSELC4_POSITION                  equ 0004h
ANSELC_ANSELC4_SIZE                      equ 0001h
ANSELC_ANSELC4_LENGTH                    equ 0001h
ANSELC_ANSELC4_MASK                      equ 0010h
ANSELC_ANSELC5_POSN                      equ 0005h
ANSELC_ANSELC5_POSITION                  equ 0005h
ANSELC_ANSELC5_SIZE                      equ 0001h
ANSELC_ANSELC5_LENGTH                    equ 0001h
ANSELC_ANSELC5_MASK                      equ 0020h
ANSELC_ANSELC6_POSN                      equ 0006h
ANSELC_ANSELC6_POSITION                  equ 0006h
ANSELC_ANSELC6_SIZE                      equ 0001h
ANSELC_ANSELC6_LENGTH                    equ 0001h
ANSELC_ANSELC6_MASK                      equ 0040h
ANSELC_ANSELC7_POSN                      equ 0007h
ANSELC_ANSELC7_POSITION                  equ 0007h
ANSELC_ANSELC7_SIZE                      equ 0001h
ANSELC_ANSELC7_LENGTH                    equ 0001h
ANSELC_ANSELC7_MASK                      equ 0080h

// Register: IOCEF
#define IOCEF IOCEF
IOCEF                                    equ 0F27h
// bitfield definitions
IOCEF_IOCEF3_POSN                        equ 0003h
IOCEF_IOCEF3_POSITION                    equ 0003h
IOCEF_IOCEF3_SIZE                        equ 0001h
IOCEF_IOCEF3_LENGTH                      equ 0001h
IOCEF_IOCEF3_MASK                        equ 0008h

// Register: IOCEN
#define IOCEN IOCEN
IOCEN                                    equ 0F28h
// bitfield definitions
IOCEN_IOCEN3_POSN                        equ 0003h
IOCEN_IOCEN3_POSITION                    equ 0003h
IOCEN_IOCEN3_SIZE                        equ 0001h
IOCEN_IOCEN3_LENGTH                      equ 0001h
IOCEN_IOCEN3_MASK                        equ 0008h

// Register: IOCEP
#define IOCEP IOCEP
IOCEP                                    equ 0F29h
// bitfield definitions
IOCEP_IOCEP3_POSN                        equ 0003h
IOCEP_IOCEP3_POSITION                    equ 0003h
IOCEP_IOCEP3_SIZE                        equ 0001h
IOCEP_IOCEP3_LENGTH                      equ 0001h
IOCEP_IOCEP3_MASK                        equ 0008h

// Register: INLVLE
#define INLVLE INLVLE
INLVLE                                   equ 0F2Ah
// bitfield definitions
INLVLE_INLVLE3_POSN                      equ 0003h
INLVLE_INLVLE3_POSITION                  equ 0003h
INLVLE_INLVLE3_SIZE                      equ 0001h
INLVLE_INLVLE3_LENGTH                    equ 0001h
INLVLE_INLVLE3_MASK                      equ 0008h

// Register: WPUE
#define WPUE WPUE
WPUE                                     equ 0F2Dh
// bitfield definitions
WPUE_WPUE3_POSN                          equ 0003h
WPUE_WPUE3_POSITION                      equ 0003h
WPUE_WPUE3_SIZE                          equ 0001h
WPUE_WPUE3_LENGTH                        equ 0001h
WPUE_WPUE3_MASK                          equ 0008h

// Register: HLVDCON0
#define HLVDCON0 HLVDCON0
HLVDCON0                                 equ 0F2Fh
// bitfield definitions
HLVDCON0_INTL_POSN                       equ 0000h
HLVDCON0_INTL_POSITION                   equ 0000h
HLVDCON0_INTL_SIZE                       equ 0001h
HLVDCON0_INTL_LENGTH                     equ 0001h
HLVDCON0_INTL_MASK                       equ 0001h
HLVDCON0_INTH_POSN                       equ 0001h
HLVDCON0_INTH_POSITION                   equ 0001h
HLVDCON0_INTH_SIZE                       equ 0001h
HLVDCON0_INTH_LENGTH                     equ 0001h
HLVDCON0_INTH_MASK                       equ 0002h
HLVDCON0_RDY_POSN                        equ 0004h
HLVDCON0_RDY_POSITION                    equ 0004h
HLVDCON0_RDY_SIZE                        equ 0001h
HLVDCON0_RDY_LENGTH                      equ 0001h
HLVDCON0_RDY_MASK                        equ 0010h
HLVDCON0_OUT_POSN                        equ 0005h
HLVDCON0_OUT_POSITION                    equ 0005h
HLVDCON0_OUT_SIZE                        equ 0001h
HLVDCON0_OUT_LENGTH                      equ 0001h
HLVDCON0_OUT_MASK                        equ 0020h
HLVDCON0_EN_POSN                         equ 0007h
HLVDCON0_EN_POSITION                     equ 0007h
HLVDCON0_EN_SIZE                         equ 0001h
HLVDCON0_EN_LENGTH                       equ 0001h
HLVDCON0_EN_MASK                         equ 0080h
HLVDCON0_HLVDINTL_POSN                   equ 0000h
HLVDCON0_HLVDINTL_POSITION               equ 0000h
HLVDCON0_HLVDINTL_SIZE                   equ 0001h
HLVDCON0_HLVDINTL_LENGTH                 equ 0001h
HLVDCON0_HLVDINTL_MASK                   equ 0001h
HLVDCON0_HLVDINTH_POSN                   equ 0001h
HLVDCON0_HLVDINTH_POSITION               equ 0001h
HLVDCON0_HLVDINTH_SIZE                   equ 0001h
HLVDCON0_HLVDINTH_LENGTH                 equ 0001h
HLVDCON0_HLVDINTH_MASK                   equ 0002h
HLVDCON0_HLVDRDY_POSN                    equ 0004h
HLVDCON0_HLVDRDY_POSITION                equ 0004h
HLVDCON0_HLVDRDY_SIZE                    equ 0001h
HLVDCON0_HLVDRDY_LENGTH                  equ 0001h
HLVDCON0_HLVDRDY_MASK                    equ 0010h
HLVDCON0_HLVDOUT_POSN                    equ 0005h
HLVDCON0_HLVDOUT_POSITION                equ 0005h
HLVDCON0_HLVDOUT_SIZE                    equ 0001h
HLVDCON0_HLVDOUT_LENGTH                  equ 0001h
HLVDCON0_HLVDOUT_MASK                    equ 0020h
HLVDCON0_HLVDEN_POSN                     equ 0007h
HLVDCON0_HLVDEN_POSITION                 equ 0007h
HLVDCON0_HLVDEN_SIZE                     equ 0001h
HLVDCON0_HLVDEN_LENGTH                   equ 0001h
HLVDCON0_HLVDEN_MASK                     equ 0080h

// Register: HLVDCON1
#define HLVDCON1 HLVDCON1
HLVDCON1                                 equ 0F30h
// bitfield definitions
HLVDCON1_SEL_POSN                        equ 0000h
HLVDCON1_SEL_POSITION                    equ 0000h
HLVDCON1_SEL_SIZE                        equ 0004h
HLVDCON1_SEL_LENGTH                      equ 0004h
HLVDCON1_SEL_MASK                        equ 000Fh
HLVDCON1_SEL0_POSN                       equ 0000h
HLVDCON1_SEL0_POSITION                   equ 0000h
HLVDCON1_SEL0_SIZE                       equ 0001h
HLVDCON1_SEL0_LENGTH                     equ 0001h
HLVDCON1_SEL0_MASK                       equ 0001h
HLVDCON1_SEL1_POSN                       equ 0001h
HLVDCON1_SEL1_POSITION                   equ 0001h
HLVDCON1_SEL1_SIZE                       equ 0001h
HLVDCON1_SEL1_LENGTH                     equ 0001h
HLVDCON1_SEL1_MASK                       equ 0002h
HLVDCON1_SEL2_POSN                       equ 0002h
HLVDCON1_SEL2_POSITION                   equ 0002h
HLVDCON1_SEL2_SIZE                       equ 0001h
HLVDCON1_SEL2_LENGTH                     equ 0001h
HLVDCON1_SEL2_MASK                       equ 0004h
HLVDCON1_SEL3_POSN                       equ 0003h
HLVDCON1_SEL3_POSITION                   equ 0003h
HLVDCON1_SEL3_SIZE                       equ 0001h
HLVDCON1_SEL3_LENGTH                     equ 0001h
HLVDCON1_SEL3_MASK                       equ 0008h
HLVDCON1_HLVDSEL0_POSN                   equ 0000h
HLVDCON1_HLVDSEL0_POSITION               equ 0000h
HLVDCON1_HLVDSEL0_SIZE                   equ 0001h
HLVDCON1_HLVDSEL0_LENGTH                 equ 0001h
HLVDCON1_HLVDSEL0_MASK                   equ 0001h
HLVDCON1_HLVDSEL1_POSN                   equ 0001h
HLVDCON1_HLVDSEL1_POSITION               equ 0001h
HLVDCON1_HLVDSEL1_SIZE                   equ 0001h
HLVDCON1_HLVDSEL1_LENGTH                 equ 0001h
HLVDCON1_HLVDSEL1_MASK                   equ 0002h
HLVDCON1_HLVDSEL2_POSN                   equ 0002h
HLVDCON1_HLVDSEL2_POSITION               equ 0002h
HLVDCON1_HLVDSEL2_SIZE                   equ 0001h
HLVDCON1_HLVDSEL2_LENGTH                 equ 0001h
HLVDCON1_HLVDSEL2_MASK                   equ 0004h
HLVDCON1_HLVDSEL3_POSN                   equ 0003h
HLVDCON1_HLVDSEL3_POSITION               equ 0003h
HLVDCON1_HLVDSEL3_SIZE                   equ 0001h
HLVDCON1_HLVDSEL3_LENGTH                 equ 0001h
HLVDCON1_HLVDSEL3_MASK                   equ 0008h

// Register: FVRCON
#define FVRCON FVRCON
FVRCON                                   equ 0F31h
// bitfield definitions
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
FVRCON_RDY_POSN                          equ 0006h
FVRCON_RDY_POSITION                      equ 0006h
FVRCON_RDY_SIZE                          equ 0001h
FVRCON_RDY_LENGTH                        equ 0001h
FVRCON_RDY_MASK                          equ 0040h
FVRCON_EN_POSN                           equ 0007h
FVRCON_EN_POSITION                       equ 0007h
FVRCON_EN_SIZE                           equ 0001h
FVRCON_EN_LENGTH                         equ 0001h
FVRCON_EN_MASK                           equ 0080h
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

// Register: ZCDCON
#define ZCDCON ZCDCON
ZCDCON                                   equ 0F32h
// bitfield definitions
ZCDCON_INTN_POSN                         equ 0000h
ZCDCON_INTN_POSITION                     equ 0000h
ZCDCON_INTN_SIZE                         equ 0001h
ZCDCON_INTN_LENGTH                       equ 0001h
ZCDCON_INTN_MASK                         equ 0001h
ZCDCON_INTP_POSN                         equ 0001h
ZCDCON_INTP_POSITION                     equ 0001h
ZCDCON_INTP_SIZE                         equ 0001h
ZCDCON_INTP_LENGTH                       equ 0001h
ZCDCON_INTP_MASK                         equ 0002h
ZCDCON_POL_POSN                          equ 0004h
ZCDCON_POL_POSITION                      equ 0004h
ZCDCON_POL_SIZE                          equ 0001h
ZCDCON_POL_LENGTH                        equ 0001h
ZCDCON_POL_MASK                          equ 0010h
ZCDCON_OUT_POSN                          equ 0005h
ZCDCON_OUT_POSITION                      equ 0005h
ZCDCON_OUT_SIZE                          equ 0001h
ZCDCON_OUT_LENGTH                        equ 0001h
ZCDCON_OUT_MASK                          equ 0020h
ZCDCON_SEN_POSN                          equ 0007h
ZCDCON_SEN_POSITION                      equ 0007h
ZCDCON_SEN_SIZE                          equ 0001h
ZCDCON_SEN_LENGTH                        equ 0001h
ZCDCON_SEN_MASK                          equ 0080h
ZCDCON_ZCDINTN_POSN                      equ 0000h
ZCDCON_ZCDINTN_POSITION                  equ 0000h
ZCDCON_ZCDINTN_SIZE                      equ 0001h
ZCDCON_ZCDINTN_LENGTH                    equ 0001h
ZCDCON_ZCDINTN_MASK                      equ 0001h
ZCDCON_ZCDINTP_POSN                      equ 0001h
ZCDCON_ZCDINTP_POSITION                  equ 0001h
ZCDCON_ZCDINTP_SIZE                      equ 0001h
ZCDCON_ZCDINTP_LENGTH                    equ 0001h
ZCDCON_ZCDINTP_MASK                      equ 0002h
ZCDCON_ZCDPOL_POSN                       equ 0004h
ZCDCON_ZCDPOL_POSITION                   equ 0004h
ZCDCON_ZCDPOL_SIZE                       equ 0001h
ZCDCON_ZCDPOL_LENGTH                     equ 0001h
ZCDCON_ZCDPOL_MASK                       equ 0010h
ZCDCON_ZCDOUT_POSN                       equ 0005h
ZCDCON_ZCDOUT_POSITION                   equ 0005h
ZCDCON_ZCDOUT_SIZE                       equ 0001h
ZCDCON_ZCDOUT_LENGTH                     equ 0001h
ZCDCON_ZCDOUT_MASK                       equ 0020h
ZCDCON_ZCDSEN_POSN                       equ 0007h
ZCDCON_ZCDSEN_POSITION                   equ 0007h
ZCDCON_ZCDSEN_SIZE                       equ 0001h
ZCDCON_ZCDSEN_LENGTH                     equ 0001h
ZCDCON_ZCDSEN_MASK                       equ 0080h

// Register: DAC1CON0
#define DAC1CON0 DAC1CON0
DAC1CON0                                 equ 0F33h
// bitfield definitions
DAC1CON0_NSS_POSN                        equ 0000h
DAC1CON0_NSS_POSITION                    equ 0000h
DAC1CON0_NSS_SIZE                        equ 0001h
DAC1CON0_NSS_LENGTH                      equ 0001h
DAC1CON0_NSS_MASK                        equ 0001h
DAC1CON0_PSS_POSN                        equ 0002h
DAC1CON0_PSS_POSITION                    equ 0002h
DAC1CON0_PSS_SIZE                        equ 0002h
DAC1CON0_PSS_LENGTH                      equ 0002h
DAC1CON0_PSS_MASK                        equ 000Ch
DAC1CON0_OE2_POSN                        equ 0004h
DAC1CON0_OE2_POSITION                    equ 0004h
DAC1CON0_OE2_SIZE                        equ 0001h
DAC1CON0_OE2_LENGTH                      equ 0001h
DAC1CON0_OE2_MASK                        equ 0010h
DAC1CON0_OE1_POSN                        equ 0005h
DAC1CON0_OE1_POSITION                    equ 0005h
DAC1CON0_OE1_SIZE                        equ 0001h
DAC1CON0_OE1_LENGTH                      equ 0001h
DAC1CON0_OE1_MASK                        equ 0020h
DAC1CON0_EN_POSN                         equ 0007h
DAC1CON0_EN_POSITION                     equ 0007h
DAC1CON0_EN_SIZE                         equ 0001h
DAC1CON0_EN_LENGTH                       equ 0001h
DAC1CON0_EN_MASK                         equ 0080h
DAC1CON0_DAC1NSS_POSN                    equ 0000h
DAC1CON0_DAC1NSS_POSITION                equ 0000h
DAC1CON0_DAC1NSS_SIZE                    equ 0001h
DAC1CON0_DAC1NSS_LENGTH                  equ 0001h
DAC1CON0_DAC1NSS_MASK                    equ 0001h
DAC1CON0_DAC1PSS0_POSN                   equ 0002h
DAC1CON0_DAC1PSS0_POSITION               equ 0002h
DAC1CON0_DAC1PSS0_SIZE                   equ 0001h
DAC1CON0_DAC1PSS0_LENGTH                 equ 0001h
DAC1CON0_DAC1PSS0_MASK                   equ 0004h
DAC1CON0_DAC1PSS1_POSN                   equ 0003h
DAC1CON0_DAC1PSS1_POSITION               equ 0003h
DAC1CON0_DAC1PSS1_SIZE                   equ 0001h
DAC1CON0_DAC1PSS1_LENGTH                 equ 0001h
DAC1CON0_DAC1PSS1_MASK                   equ 0008h
DAC1CON0_DAC1OE2_POSN                    equ 0004h
DAC1CON0_DAC1OE2_POSITION                equ 0004h
DAC1CON0_DAC1OE2_SIZE                    equ 0001h
DAC1CON0_DAC1OE2_LENGTH                  equ 0001h
DAC1CON0_DAC1OE2_MASK                    equ 0010h
DAC1CON0_DAC1OE1_POSN                    equ 0005h
DAC1CON0_DAC1OE1_POSITION                equ 0005h
DAC1CON0_DAC1OE1_SIZE                    equ 0001h
DAC1CON0_DAC1OE1_LENGTH                  equ 0001h
DAC1CON0_DAC1OE1_MASK                    equ 0020h
DAC1CON0_DAC1EN_POSN                     equ 0007h
DAC1CON0_DAC1EN_POSITION                 equ 0007h
DAC1CON0_DAC1EN_SIZE                     equ 0001h
DAC1CON0_DAC1EN_LENGTH                   equ 0001h
DAC1CON0_DAC1EN_MASK                     equ 0080h
DAC1CON0_PSS0_POSN                       equ 0002h
DAC1CON0_PSS0_POSITION                   equ 0002h
DAC1CON0_PSS0_SIZE                       equ 0001h
DAC1CON0_PSS0_LENGTH                     equ 0001h
DAC1CON0_PSS0_MASK                       equ 0004h
DAC1CON0_PSS1_POSN                       equ 0003h
DAC1CON0_PSS1_POSITION                   equ 0003h
DAC1CON0_PSS1_SIZE                       equ 0001h
DAC1CON0_PSS1_LENGTH                     equ 0001h
DAC1CON0_PSS1_MASK                       equ 0008h

// Register: DAC1CON1
#define DAC1CON1 DAC1CON1
DAC1CON1                                 equ 0F34h
// bitfield definitions
DAC1CON1_DAC1R_POSN                      equ 0000h
DAC1CON1_DAC1R_POSITION                  equ 0000h
DAC1CON1_DAC1R_SIZE                      equ 0005h
DAC1CON1_DAC1R_LENGTH                    equ 0005h
DAC1CON1_DAC1R_MASK                      equ 001Fh
DAC1CON1_DAC1R0_POSN                     equ 0000h
DAC1CON1_DAC1R0_POSITION                 equ 0000h
DAC1CON1_DAC1R0_SIZE                     equ 0001h
DAC1CON1_DAC1R0_LENGTH                   equ 0001h
DAC1CON1_DAC1R0_MASK                     equ 0001h
DAC1CON1_DAC1R1_POSN                     equ 0001h
DAC1CON1_DAC1R1_POSITION                 equ 0001h
DAC1CON1_DAC1R1_SIZE                     equ 0001h
DAC1CON1_DAC1R1_LENGTH                   equ 0001h
DAC1CON1_DAC1R1_MASK                     equ 0002h
DAC1CON1_DAC1R2_POSN                     equ 0002h
DAC1CON1_DAC1R2_POSITION                 equ 0002h
DAC1CON1_DAC1R2_SIZE                     equ 0001h
DAC1CON1_DAC1R2_LENGTH                   equ 0001h
DAC1CON1_DAC1R2_MASK                     equ 0004h
DAC1CON1_DAC1R3_POSN                     equ 0003h
DAC1CON1_DAC1R3_POSITION                 equ 0003h
DAC1CON1_DAC1R3_SIZE                     equ 0001h
DAC1CON1_DAC1R3_LENGTH                   equ 0001h
DAC1CON1_DAC1R3_MASK                     equ 0008h
DAC1CON1_DAC1R4_POSN                     equ 0004h
DAC1CON1_DAC1R4_POSITION                 equ 0004h
DAC1CON1_DAC1R4_SIZE                     equ 0001h
DAC1CON1_DAC1R4_LENGTH                   equ 0001h
DAC1CON1_DAC1R4_MASK                     equ 0010h

// Register: CM2CON0
#define CM2CON0 CM2CON0
CM2CON0                                  equ 0F35h
// bitfield definitions
CM2CON0_SYNC_POSN                        equ 0000h
CM2CON0_SYNC_POSITION                    equ 0000h
CM2CON0_SYNC_SIZE                        equ 0001h
CM2CON0_SYNC_LENGTH                      equ 0001h
CM2CON0_SYNC_MASK                        equ 0001h
CM2CON0_HYS_POSN                         equ 0001h
CM2CON0_HYS_POSITION                     equ 0001h
CM2CON0_HYS_SIZE                         equ 0001h
CM2CON0_HYS_LENGTH                       equ 0001h
CM2CON0_HYS_MASK                         equ 0002h
CM2CON0_POL_POSN                         equ 0004h
CM2CON0_POL_POSITION                     equ 0004h
CM2CON0_POL_SIZE                         equ 0001h
CM2CON0_POL_LENGTH                       equ 0001h
CM2CON0_POL_MASK                         equ 0010h
CM2CON0_OUT_POSN                         equ 0006h
CM2CON0_OUT_POSITION                     equ 0006h
CM2CON0_OUT_SIZE                         equ 0001h
CM2CON0_OUT_LENGTH                       equ 0001h
CM2CON0_OUT_MASK                         equ 0040h
CM2CON0_EN_POSN                          equ 0007h
CM2CON0_EN_POSITION                      equ 0007h
CM2CON0_EN_SIZE                          equ 0001h
CM2CON0_EN_LENGTH                        equ 0001h
CM2CON0_EN_MASK                          equ 0080h
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
CM2CON0_C2POL_POSN                       equ 0004h
CM2CON0_C2POL_POSITION                   equ 0004h
CM2CON0_C2POL_SIZE                       equ 0001h
CM2CON0_C2POL_LENGTH                     equ 0001h
CM2CON0_C2POL_MASK                       equ 0010h
CM2CON0_C2OUT_POSN                       equ 0006h
CM2CON0_C2OUT_POSITION                   equ 0006h
CM2CON0_C2OUT_SIZE                       equ 0001h
CM2CON0_C2OUT_LENGTH                     equ 0001h
CM2CON0_C2OUT_MASK                       equ 0040h
CM2CON0_C2EN_POSN                        equ 0007h
CM2CON0_C2EN_POSITION                    equ 0007h
CM2CON0_C2EN_SIZE                        equ 0001h
CM2CON0_C2EN_LENGTH                      equ 0001h
CM2CON0_C2EN_MASK                        equ 0080h

// Register: CM2CON1
#define CM2CON1 CM2CON1
CM2CON1                                  equ 0F36h
// bitfield definitions
CM2CON1_INTN_POSN                        equ 0000h
CM2CON1_INTN_POSITION                    equ 0000h
CM2CON1_INTN_SIZE                        equ 0001h
CM2CON1_INTN_LENGTH                      equ 0001h
CM2CON1_INTN_MASK                        equ 0001h
CM2CON1_INTP_POSN                        equ 0001h
CM2CON1_INTP_POSITION                    equ 0001h
CM2CON1_INTP_SIZE                        equ 0001h
CM2CON1_INTP_LENGTH                      equ 0001h
CM2CON1_INTP_MASK                        equ 0002h
CM2CON1_C2INTN_POSN                      equ 0000h
CM2CON1_C2INTN_POSITION                  equ 0000h
CM2CON1_C2INTN_SIZE                      equ 0001h
CM2CON1_C2INTN_LENGTH                    equ 0001h
CM2CON1_C2INTN_MASK                      equ 0001h
CM2CON1_C2INTP_POSN                      equ 0001h
CM2CON1_C2INTP_POSITION                  equ 0001h
CM2CON1_C2INTP_SIZE                      equ 0001h
CM2CON1_C2INTP_LENGTH                    equ 0001h
CM2CON1_C2INTP_MASK                      equ 0002h

// Register: CM2NCH
#define CM2NCH CM2NCH
CM2NCH                                   equ 0F37h
// bitfield definitions
CM2NCH_NCH_POSN                          equ 0000h
CM2NCH_NCH_POSITION                      equ 0000h
CM2NCH_NCH_SIZE                          equ 0003h
CM2NCH_NCH_LENGTH                        equ 0003h
CM2NCH_NCH_MASK                          equ 0007h
CM2NCH_NCH0_POSN                         equ 0000h
CM2NCH_NCH0_POSITION                     equ 0000h
CM2NCH_NCH0_SIZE                         equ 0001h
CM2NCH_NCH0_LENGTH                       equ 0001h
CM2NCH_NCH0_MASK                         equ 0001h
CM2NCH_NCH1_POSN                         equ 0001h
CM2NCH_NCH1_POSITION                     equ 0001h
CM2NCH_NCH1_SIZE                         equ 0001h
CM2NCH_NCH1_LENGTH                       equ 0001h
CM2NCH_NCH1_MASK                         equ 0002h
CM2NCH_NCH2_POSN                         equ 0002h
CM2NCH_NCH2_POSITION                     equ 0002h
CM2NCH_NCH2_SIZE                         equ 0001h
CM2NCH_NCH2_LENGTH                       equ 0001h
CM2NCH_NCH2_MASK                         equ 0004h
CM2NCH_C2NCH0_POSN                       equ 0000h
CM2NCH_C2NCH0_POSITION                   equ 0000h
CM2NCH_C2NCH0_SIZE                       equ 0001h
CM2NCH_C2NCH0_LENGTH                     equ 0001h
CM2NCH_C2NCH0_MASK                       equ 0001h
CM2NCH_C2NCH1_POSN                       equ 0001h
CM2NCH_C2NCH1_POSITION                   equ 0001h
CM2NCH_C2NCH1_SIZE                       equ 0001h
CM2NCH_C2NCH1_LENGTH                     equ 0001h
CM2NCH_C2NCH1_MASK                       equ 0002h
CM2NCH_C2NCH2_POSN                       equ 0002h
CM2NCH_C2NCH2_POSITION                   equ 0002h
CM2NCH_C2NCH2_SIZE                       equ 0001h
CM2NCH_C2NCH2_LENGTH                     equ 0001h
CM2NCH_C2NCH2_MASK                       equ 0004h

// Register: CM2PCH
#define CM2PCH CM2PCH
CM2PCH                                   equ 0F38h
// bitfield definitions
CM2PCH_PCH_POSN                          equ 0000h
CM2PCH_PCH_POSITION                      equ 0000h
CM2PCH_PCH_SIZE                          equ 0003h
CM2PCH_PCH_LENGTH                        equ 0003h
CM2PCH_PCH_MASK                          equ 0007h
CM2PCH_PCH0_POSN                         equ 0000h
CM2PCH_PCH0_POSITION                     equ 0000h
CM2PCH_PCH0_SIZE                         equ 0001h
CM2PCH_PCH0_LENGTH                       equ 0001h
CM2PCH_PCH0_MASK                         equ 0001h
CM2PCH_PCH1_POSN                         equ 0001h
CM2PCH_PCH1_POSITION                     equ 0001h
CM2PCH_PCH1_SIZE                         equ 0001h
CM2PCH_PCH1_LENGTH                       equ 0001h
CM2PCH_PCH1_MASK                         equ 0002h
CM2PCH_PCH2_POSN                         equ 0002h
CM2PCH_PCH2_POSITION                     equ 0002h
CM2PCH_PCH2_SIZE                         equ 0001h
CM2PCH_PCH2_LENGTH                       equ 0001h
CM2PCH_PCH2_MASK                         equ 0004h
CM2PCH_C2PCH0_POSN                       equ 0000h
CM2PCH_C2PCH0_POSITION                   equ 0000h
CM2PCH_C2PCH0_SIZE                       equ 0001h
CM2PCH_C2PCH0_LENGTH                     equ 0001h
CM2PCH_C2PCH0_MASK                       equ 0001h
CM2PCH_C2PCH1_POSN                       equ 0001h
CM2PCH_C2PCH1_POSITION                   equ 0001h
CM2PCH_C2PCH1_SIZE                       equ 0001h
CM2PCH_C2PCH1_LENGTH                     equ 0001h
CM2PCH_C2PCH1_MASK                       equ 0002h
CM2PCH_C2PCH2_POSN                       equ 0002h
CM2PCH_C2PCH2_POSITION                   equ 0002h
CM2PCH_C2PCH2_SIZE                       equ 0001h
CM2PCH_C2PCH2_LENGTH                     equ 0001h
CM2PCH_C2PCH2_MASK                       equ 0004h

// Register: CM1CON0
#define CM1CON0 CM1CON0
CM1CON0                                  equ 0F39h
// bitfield definitions
CM1CON0_SYNC_POSN                        equ 0000h
CM1CON0_SYNC_POSITION                    equ 0000h
CM1CON0_SYNC_SIZE                        equ 0001h
CM1CON0_SYNC_LENGTH                      equ 0001h
CM1CON0_SYNC_MASK                        equ 0001h
CM1CON0_HYS_POSN                         equ 0001h
CM1CON0_HYS_POSITION                     equ 0001h
CM1CON0_HYS_SIZE                         equ 0001h
CM1CON0_HYS_LENGTH                       equ 0001h
CM1CON0_HYS_MASK                         equ 0002h
CM1CON0_POL_POSN                         equ 0004h
CM1CON0_POL_POSITION                     equ 0004h
CM1CON0_POL_SIZE                         equ 0001h
CM1CON0_POL_LENGTH                       equ 0001h
CM1CON0_POL_MASK                         equ 0010h
CM1CON0_OUT_POSN                         equ 0006h
CM1CON0_OUT_POSITION                     equ 0006h
CM1CON0_OUT_SIZE                         equ 0001h
CM1CON0_OUT_LENGTH                       equ 0001h
CM1CON0_OUT_MASK                         equ 0040h
CM1CON0_EN_POSN                          equ 0007h
CM1CON0_EN_POSITION                      equ 0007h
CM1CON0_EN_SIZE                          equ 0001h
CM1CON0_EN_LENGTH                        equ 0001h
CM1CON0_EN_MASK                          equ 0080h
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
CM1CON0_C1POL_POSN                       equ 0004h
CM1CON0_C1POL_POSITION                   equ 0004h
CM1CON0_C1POL_SIZE                       equ 0001h
CM1CON0_C1POL_LENGTH                     equ 0001h
CM1CON0_C1POL_MASK                       equ 0010h
CM1CON0_C1OUT_POSN                       equ 0006h
CM1CON0_C1OUT_POSITION                   equ 0006h
CM1CON0_C1OUT_SIZE                       equ 0001h
CM1CON0_C1OUT_LENGTH                     equ 0001h
CM1CON0_C1OUT_MASK                       equ 0040h
CM1CON0_C1EN_POSN                        equ 0007h
CM1CON0_C1EN_POSITION                    equ 0007h
CM1CON0_C1EN_SIZE                        equ 0001h
CM1CON0_C1EN_LENGTH                      equ 0001h
CM1CON0_C1EN_MASK                        equ 0080h

// Register: CM1CON1
#define CM1CON1 CM1CON1
CM1CON1                                  equ 0F3Ah
// bitfield definitions
CM1CON1_INTN_POSN                        equ 0000h
CM1CON1_INTN_POSITION                    equ 0000h
CM1CON1_INTN_SIZE                        equ 0001h
CM1CON1_INTN_LENGTH                      equ 0001h
CM1CON1_INTN_MASK                        equ 0001h
CM1CON1_INTP_POSN                        equ 0001h
CM1CON1_INTP_POSITION                    equ 0001h
CM1CON1_INTP_SIZE                        equ 0001h
CM1CON1_INTP_LENGTH                      equ 0001h
CM1CON1_INTP_MASK                        equ 0002h
CM1CON1_C1INTN_POSN                      equ 0000h
CM1CON1_C1INTN_POSITION                  equ 0000h
CM1CON1_C1INTN_SIZE                      equ 0001h
CM1CON1_C1INTN_LENGTH                    equ 0001h
CM1CON1_C1INTN_MASK                      equ 0001h
CM1CON1_C1INTP_POSN                      equ 0001h
CM1CON1_C1INTP_POSITION                  equ 0001h
CM1CON1_C1INTP_SIZE                      equ 0001h
CM1CON1_C1INTP_LENGTH                    equ 0001h
CM1CON1_C1INTP_MASK                      equ 0002h

// Register: CM1NCH
#define CM1NCH CM1NCH
CM1NCH                                   equ 0F3Bh
// bitfield definitions
CM1NCH_NCH_POSN                          equ 0000h
CM1NCH_NCH_POSITION                      equ 0000h
CM1NCH_NCH_SIZE                          equ 0003h
CM1NCH_NCH_LENGTH                        equ 0003h
CM1NCH_NCH_MASK                          equ 0007h
CM1NCH_NCH0_POSN                         equ 0000h
CM1NCH_NCH0_POSITION                     equ 0000h
CM1NCH_NCH0_SIZE                         equ 0001h
CM1NCH_NCH0_LENGTH                       equ 0001h
CM1NCH_NCH0_MASK                         equ 0001h
CM1NCH_NCH1_POSN                         equ 0001h
CM1NCH_NCH1_POSITION                     equ 0001h
CM1NCH_NCH1_SIZE                         equ 0001h
CM1NCH_NCH1_LENGTH                       equ 0001h
CM1NCH_NCH1_MASK                         equ 0002h
CM1NCH_NCH2_POSN                         equ 0002h
CM1NCH_NCH2_POSITION                     equ 0002h
CM1NCH_NCH2_SIZE                         equ 0001h
CM1NCH_NCH2_LENGTH                       equ 0001h
CM1NCH_NCH2_MASK                         equ 0004h
CM1NCH_C1NCH0_POSN                       equ 0000h
CM1NCH_C1NCH0_POSITION                   equ 0000h
CM1NCH_C1NCH0_SIZE                       equ 0001h
CM1NCH_C1NCH0_LENGTH                     equ 0001h
CM1NCH_C1NCH0_MASK                       equ 0001h
CM1NCH_C1NCH1_POSN                       equ 0001h
CM1NCH_C1NCH1_POSITION                   equ 0001h
CM1NCH_C1NCH1_SIZE                       equ 0001h
CM1NCH_C1NCH1_LENGTH                     equ 0001h
CM1NCH_C1NCH1_MASK                       equ 0002h
CM1NCH_C1NCH2_POSN                       equ 0002h
CM1NCH_C1NCH2_POSITION                   equ 0002h
CM1NCH_C1NCH2_SIZE                       equ 0001h
CM1NCH_C1NCH2_LENGTH                     equ 0001h
CM1NCH_C1NCH2_MASK                       equ 0004h

// Register: CM1PCH
#define CM1PCH CM1PCH
CM1PCH                                   equ 0F3Ch
// bitfield definitions
CM1PCH_PCH_POSN                          equ 0000h
CM1PCH_PCH_POSITION                      equ 0000h
CM1PCH_PCH_SIZE                          equ 0003h
CM1PCH_PCH_LENGTH                        equ 0003h
CM1PCH_PCH_MASK                          equ 0007h
CM1PCH_PCH0_POSN                         equ 0000h
CM1PCH_PCH0_POSITION                     equ 0000h
CM1PCH_PCH0_SIZE                         equ 0001h
CM1PCH_PCH0_LENGTH                       equ 0001h
CM1PCH_PCH0_MASK                         equ 0001h
CM1PCH_PCH1_POSN                         equ 0001h
CM1PCH_PCH1_POSITION                     equ 0001h
CM1PCH_PCH1_SIZE                         equ 0001h
CM1PCH_PCH1_LENGTH                       equ 0001h
CM1PCH_PCH1_MASK                         equ 0002h
CM1PCH_PCH2_POSN                         equ 0002h
CM1PCH_PCH2_POSITION                     equ 0002h
CM1PCH_PCH2_SIZE                         equ 0001h
CM1PCH_PCH2_LENGTH                       equ 0001h
CM1PCH_PCH2_MASK                         equ 0004h
CM1PCH_C1PCH0_POSN                       equ 0000h
CM1PCH_C1PCH0_POSITION                   equ 0000h
CM1PCH_C1PCH0_SIZE                       equ 0001h
CM1PCH_C1PCH0_LENGTH                     equ 0001h
CM1PCH_C1PCH0_MASK                       equ 0001h
CM1PCH_C1PCH1_POSN                       equ 0001h
CM1PCH_C1PCH1_POSITION                   equ 0001h
CM1PCH_C1PCH1_SIZE                       equ 0001h
CM1PCH_C1PCH1_LENGTH                     equ 0001h
CM1PCH_C1PCH1_MASK                       equ 0002h
CM1PCH_C1PCH2_POSN                       equ 0002h
CM1PCH_C1PCH2_POSITION                   equ 0002h
CM1PCH_C1PCH2_SIZE                       equ 0001h
CM1PCH_C1PCH2_LENGTH                     equ 0001h
CM1PCH_C1PCH2_MASK                       equ 0004h

// Register: CMOUT
#define CMOUT CMOUT
CMOUT                                    equ 0F3Dh
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

// Register: CLKRCON
#define CLKRCON CLKRCON
CLKRCON                                  equ 0F3Eh
// bitfield definitions
CLKRCON_DIV_POSN                         equ 0000h
CLKRCON_DIV_POSITION                     equ 0000h
CLKRCON_DIV_SIZE                         equ 0003h
CLKRCON_DIV_LENGTH                       equ 0003h
CLKRCON_DIV_MASK                         equ 0007h
CLKRCON_DC_POSN                          equ 0003h
CLKRCON_DC_POSITION                      equ 0003h
CLKRCON_DC_SIZE                          equ 0002h
CLKRCON_DC_LENGTH                        equ 0002h
CLKRCON_DC_MASK                          equ 0018h
CLKRCON_EN_POSN                          equ 0007h
CLKRCON_EN_POSITION                      equ 0007h
CLKRCON_EN_SIZE                          equ 0001h
CLKRCON_EN_LENGTH                        equ 0001h
CLKRCON_EN_MASK                          equ 0080h
CLKRCON_CLKRDIV0_POSN                    equ 0000h
CLKRCON_CLKRDIV0_POSITION                equ 0000h
CLKRCON_CLKRDIV0_SIZE                    equ 0001h
CLKRCON_CLKRDIV0_LENGTH                  equ 0001h
CLKRCON_CLKRDIV0_MASK                    equ 0001h
CLKRCON_CLKRDIV1_POSN                    equ 0001h
CLKRCON_CLKRDIV1_POSITION                equ 0001h
CLKRCON_CLKRDIV1_SIZE                    equ 0001h
CLKRCON_CLKRDIV1_LENGTH                  equ 0001h
CLKRCON_CLKRDIV1_MASK                    equ 0002h
CLKRCON_CLKRDIV2_POSN                    equ 0002h
CLKRCON_CLKRDIV2_POSITION                equ 0002h
CLKRCON_CLKRDIV2_SIZE                    equ 0001h
CLKRCON_CLKRDIV2_LENGTH                  equ 0001h
CLKRCON_CLKRDIV2_MASK                    equ 0004h
CLKRCON_CLKRDC0_POSN                     equ 0003h
CLKRCON_CLKRDC0_POSITION                 equ 0003h
CLKRCON_CLKRDC0_SIZE                     equ 0001h
CLKRCON_CLKRDC0_LENGTH                   equ 0001h
CLKRCON_CLKRDC0_MASK                     equ 0008h
CLKRCON_CLKRDC1_POSN                     equ 0004h
CLKRCON_CLKRDC1_POSITION                 equ 0004h
CLKRCON_CLKRDC1_SIZE                     equ 0001h
CLKRCON_CLKRDC1_LENGTH                   equ 0001h
CLKRCON_CLKRDC1_MASK                     equ 0010h
CLKRCON_CLKREN_POSN                      equ 0007h
CLKRCON_CLKREN_POSITION                  equ 0007h
CLKRCON_CLKREN_SIZE                      equ 0001h
CLKRCON_CLKREN_LENGTH                    equ 0001h
CLKRCON_CLKREN_MASK                      equ 0080h
CLKRCON_DIV0_POSN                        equ 0000h
CLKRCON_DIV0_POSITION                    equ 0000h
CLKRCON_DIV0_SIZE                        equ 0001h
CLKRCON_DIV0_LENGTH                      equ 0001h
CLKRCON_DIV0_MASK                        equ 0001h
CLKRCON_DIV1_POSN                        equ 0001h
CLKRCON_DIV1_POSITION                    equ 0001h
CLKRCON_DIV1_SIZE                        equ 0001h
CLKRCON_DIV1_LENGTH                      equ 0001h
CLKRCON_DIV1_MASK                        equ 0002h
CLKRCON_DIV2_POSN                        equ 0002h
CLKRCON_DIV2_POSITION                    equ 0002h
CLKRCON_DIV2_SIZE                        equ 0001h
CLKRCON_DIV2_LENGTH                      equ 0001h
CLKRCON_DIV2_MASK                        equ 0004h
CLKRCON_DC0_POSN                         equ 0003h
CLKRCON_DC0_POSITION                     equ 0003h
CLKRCON_DC0_SIZE                         equ 0001h
CLKRCON_DC0_LENGTH                       equ 0001h
CLKRCON_DC0_MASK                         equ 0008h
CLKRCON_DC1_POSN                         equ 0004h
CLKRCON_DC1_POSITION                     equ 0004h
CLKRCON_DC1_SIZE                         equ 0001h
CLKRCON_DC1_LENGTH                       equ 0001h
CLKRCON_DC1_MASK                         equ 0010h

// Register: CLKRCLK
#define CLKRCLK CLKRCLK
CLKRCLK                                  equ 0F3Fh
// bitfield definitions
CLKRCLK_CLK_POSN                         equ 0000h
CLKRCLK_CLK_POSITION                     equ 0000h
CLKRCLK_CLK_SIZE                         equ 0003h
CLKRCLK_CLK_LENGTH                       equ 0003h
CLKRCLK_CLK_MASK                         equ 0007h
CLKRCLK_CLKRCLK0_POSN                    equ 0000h
CLKRCLK_CLKRCLK0_POSITION                equ 0000h
CLKRCLK_CLKRCLK0_SIZE                    equ 0001h
CLKRCLK_CLKRCLK0_LENGTH                  equ 0001h
CLKRCLK_CLKRCLK0_MASK                    equ 0001h
CLKRCLK_CLKRCLK1_POSN                    equ 0001h
CLKRCLK_CLKRCLK1_POSITION                equ 0001h
CLKRCLK_CLKRCLK1_SIZE                    equ 0001h
CLKRCLK_CLKRCLK1_LENGTH                  equ 0001h
CLKRCLK_CLKRCLK1_MASK                    equ 0002h
CLKRCLK_CLKRCLK2_POSN                    equ 0002h
CLKRCLK_CLKRCLK2_POSITION                equ 0002h
CLKRCLK_CLKRCLK2_SIZE                    equ 0001h
CLKRCLK_CLKRCLK2_LENGTH                  equ 0001h
CLKRCLK_CLKRCLK2_MASK                    equ 0004h
CLKRCLK_CLK0_POSN                        equ 0000h
CLKRCLK_CLK0_POSITION                    equ 0000h
CLKRCLK_CLK0_SIZE                        equ 0001h
CLKRCLK_CLK0_LENGTH                      equ 0001h
CLKRCLK_CLK0_MASK                        equ 0001h
CLKRCLK_CLK1_POSN                        equ 0001h
CLKRCLK_CLK1_POSITION                    equ 0001h
CLKRCLK_CLK1_SIZE                        equ 0001h
CLKRCLK_CLK1_LENGTH                      equ 0001h
CLKRCLK_CLK1_MASK                        equ 0002h
CLKRCLK_CLK2_POSN                        equ 0002h
CLKRCLK_CLK2_POSITION                    equ 0002h
CLKRCLK_CLK2_SIZE                        equ 0001h
CLKRCLK_CLK2_LENGTH                      equ 0001h
CLKRCLK_CLK2_MASK                        equ 0004h

// Register: CWG1CLK
#define CWG1CLK CWG1CLK
CWG1CLK                                  equ 0F40h
// bitfield definitions
CWG1CLK_CS_POSN                          equ 0000h
CWG1CLK_CS_POSITION                      equ 0000h
CWG1CLK_CS_SIZE                          equ 0001h
CWG1CLK_CS_LENGTH                        equ 0001h
CWG1CLK_CS_MASK                          equ 0001h
CWG1CLK_CWG1CS_POSN                      equ 0000h
CWG1CLK_CWG1CS_POSITION                  equ 0000h
CWG1CLK_CWG1CS_SIZE                      equ 0001h
CWG1CLK_CWG1CS_LENGTH                    equ 0001h
CWG1CLK_CWG1CS_MASK                      equ 0001h

// Register: CWG1ISM
#define CWG1ISM CWG1ISM
CWG1ISM                                  equ 0F41h
// bitfield definitions
CWG1ISM_IS_POSN                          equ 0000h
CWG1ISM_IS_POSITION                      equ 0000h
CWG1ISM_IS_SIZE                          equ 0004h
CWG1ISM_IS_LENGTH                        equ 0004h
CWG1ISM_IS_MASK                          equ 000Fh
CWG1ISM_CWG1ISM0_POSN                    equ 0000h
CWG1ISM_CWG1ISM0_POSITION                equ 0000h
CWG1ISM_CWG1ISM0_SIZE                    equ 0001h
CWG1ISM_CWG1ISM0_LENGTH                  equ 0001h
CWG1ISM_CWG1ISM0_MASK                    equ 0001h
CWG1ISM_CWG1ISM1_POSN                    equ 0001h
CWG1ISM_CWG1ISM1_POSITION                equ 0001h
CWG1ISM_CWG1ISM1_SIZE                    equ 0001h
CWG1ISM_CWG1ISM1_LENGTH                  equ 0001h
CWG1ISM_CWG1ISM1_MASK                    equ 0002h
CWG1ISM_CWG1ISM2_POSN                    equ 0002h
CWG1ISM_CWG1ISM2_POSITION                equ 0002h
CWG1ISM_CWG1ISM2_SIZE                    equ 0001h
CWG1ISM_CWG1ISM2_LENGTH                  equ 0001h
CWG1ISM_CWG1ISM2_MASK                    equ 0004h

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
CWG1DBR                                  equ 0F42h
// bitfield definitions
CWG1DBR_DBR_POSN                         equ 0000h
CWG1DBR_DBR_POSITION                     equ 0000h
CWG1DBR_DBR_SIZE                         equ 0006h
CWG1DBR_DBR_LENGTH                       equ 0006h
CWG1DBR_DBR_MASK                         equ 003Fh
CWG1DBR_DBR0_POSN                        equ 0000h
CWG1DBR_DBR0_POSITION                    equ 0000h
CWG1DBR_DBR0_SIZE                        equ 0001h
CWG1DBR_DBR0_LENGTH                      equ 0001h
CWG1DBR_DBR0_MASK                        equ 0001h
CWG1DBR_DBR1_POSN                        equ 0001h
CWG1DBR_DBR1_POSITION                    equ 0001h
CWG1DBR_DBR1_SIZE                        equ 0001h
CWG1DBR_DBR1_LENGTH                      equ 0001h
CWG1DBR_DBR1_MASK                        equ 0002h
CWG1DBR_DBR2_POSN                        equ 0002h
CWG1DBR_DBR2_POSITION                    equ 0002h
CWG1DBR_DBR2_SIZE                        equ 0001h
CWG1DBR_DBR2_LENGTH                      equ 0001h
CWG1DBR_DBR2_MASK                        equ 0004h
CWG1DBR_DBR3_POSN                        equ 0003h
CWG1DBR_DBR3_POSITION                    equ 0003h
CWG1DBR_DBR3_SIZE                        equ 0001h
CWG1DBR_DBR3_LENGTH                      equ 0001h
CWG1DBR_DBR3_MASK                        equ 0008h
CWG1DBR_DBR4_POSN                        equ 0004h
CWG1DBR_DBR4_POSITION                    equ 0004h
CWG1DBR_DBR4_SIZE                        equ 0001h
CWG1DBR_DBR4_LENGTH                      equ 0001h
CWG1DBR_DBR4_MASK                        equ 0010h
CWG1DBR_DBR5_POSN                        equ 0005h
CWG1DBR_DBR5_POSITION                    equ 0005h
CWG1DBR_DBR5_SIZE                        equ 0001h
CWG1DBR_DBR5_LENGTH                      equ 0001h
CWG1DBR_DBR5_MASK                        equ 0020h
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
CWG1DBF                                  equ 0F43h
// bitfield definitions
CWG1DBF_DBF_POSN                         equ 0000h
CWG1DBF_DBF_POSITION                     equ 0000h
CWG1DBF_DBF_SIZE                         equ 0006h
CWG1DBF_DBF_LENGTH                       equ 0006h
CWG1DBF_DBF_MASK                         equ 003Fh
CWG1DBF_DBF0_POSN                        equ 0000h
CWG1DBF_DBF0_POSITION                    equ 0000h
CWG1DBF_DBF0_SIZE                        equ 0001h
CWG1DBF_DBF0_LENGTH                      equ 0001h
CWG1DBF_DBF0_MASK                        equ 0001h
CWG1DBF_DBF1_POSN                        equ 0001h
CWG1DBF_DBF1_POSITION                    equ 0001h
CWG1DBF_DBF1_SIZE                        equ 0001h
CWG1DBF_DBF1_LENGTH                      equ 0001h
CWG1DBF_DBF1_MASK                        equ 0002h
CWG1DBF_DBF2_POSN                        equ 0002h
CWG1DBF_DBF2_POSITION                    equ 0002h
CWG1DBF_DBF2_SIZE                        equ 0001h
CWG1DBF_DBF2_LENGTH                      equ 0001h
CWG1DBF_DBF2_MASK                        equ 0004h
CWG1DBF_DBF3_POSN                        equ 0003h
CWG1DBF_DBF3_POSITION                    equ 0003h
CWG1DBF_DBF3_SIZE                        equ 0001h
CWG1DBF_DBF3_LENGTH                      equ 0001h
CWG1DBF_DBF3_MASK                        equ 0008h
CWG1DBF_DBF4_POSN                        equ 0004h
CWG1DBF_DBF4_POSITION                    equ 0004h
CWG1DBF_DBF4_SIZE                        equ 0001h
CWG1DBF_DBF4_LENGTH                      equ 0001h
CWG1DBF_DBF4_MASK                        equ 0010h
CWG1DBF_DBF5_POSN                        equ 0005h
CWG1DBF_DBF5_POSITION                    equ 0005h
CWG1DBF_DBF5_SIZE                        equ 0001h
CWG1DBF_DBF5_LENGTH                      equ 0001h
CWG1DBF_DBF5_MASK                        equ 0020h
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
CWG1CON0                                 equ 0F44h
// bitfield definitions
CWG1CON0_MODE_POSN                       equ 0000h
CWG1CON0_MODE_POSITION                   equ 0000h
CWG1CON0_MODE_SIZE                       equ 0003h
CWG1CON0_MODE_LENGTH                     equ 0003h
CWG1CON0_MODE_MASK                       equ 0007h
CWG1CON0_LD_POSN                         equ 0006h
CWG1CON0_LD_POSITION                     equ 0006h
CWG1CON0_LD_SIZE                         equ 0001h
CWG1CON0_LD_LENGTH                       equ 0001h
CWG1CON0_LD_MASK                         equ 0040h
CWG1CON0_EN_POSN                         equ 0007h
CWG1CON0_EN_POSITION                     equ 0007h
CWG1CON0_EN_SIZE                         equ 0001h
CWG1CON0_EN_LENGTH                       equ 0001h
CWG1CON0_EN_MASK                         equ 0080h
CWG1CON0_MODE0_POSN                      equ 0000h
CWG1CON0_MODE0_POSITION                  equ 0000h
CWG1CON0_MODE0_SIZE                      equ 0001h
CWG1CON0_MODE0_LENGTH                    equ 0001h
CWG1CON0_MODE0_MASK                      equ 0001h
CWG1CON0_MODE1_POSN                      equ 0001h
CWG1CON0_MODE1_POSITION                  equ 0001h
CWG1CON0_MODE1_SIZE                      equ 0001h
CWG1CON0_MODE1_LENGTH                    equ 0001h
CWG1CON0_MODE1_MASK                      equ 0002h
CWG1CON0_MODE2_POSN                      equ 0002h
CWG1CON0_MODE2_POSITION                  equ 0002h
CWG1CON0_MODE2_SIZE                      equ 0001h
CWG1CON0_MODE2_LENGTH                    equ 0001h
CWG1CON0_MODE2_MASK                      equ 0004h
CWG1CON0_G1EN_POSN                       equ 0007h
CWG1CON0_G1EN_POSITION                   equ 0007h
CWG1CON0_G1EN_SIZE                       equ 0001h
CWG1CON0_G1EN_LENGTH                     equ 0001h
CWG1CON0_G1EN_MASK                       equ 0080h
CWG1CON0_CWG1MODE_POSN                   equ 0000h
CWG1CON0_CWG1MODE_POSITION               equ 0000h
CWG1CON0_CWG1MODE_SIZE                   equ 0003h
CWG1CON0_CWG1MODE_LENGTH                 equ 0003h
CWG1CON0_CWG1MODE_MASK                   equ 0007h
CWG1CON0_CWG1LD_POSN                     equ 0006h
CWG1CON0_CWG1LD_POSITION                 equ 0006h
CWG1CON0_CWG1LD_SIZE                     equ 0001h
CWG1CON0_CWG1LD_LENGTH                   equ 0001h
CWG1CON0_CWG1LD_MASK                     equ 0040h
CWG1CON0_CWG1EN_POSN                     equ 0007h
CWG1CON0_CWG1EN_POSITION                 equ 0007h
CWG1CON0_CWG1EN_SIZE                     equ 0001h
CWG1CON0_CWG1EN_LENGTH                   equ 0001h
CWG1CON0_CWG1EN_MASK                     equ 0080h
CWG1CON0_CWG1MODE0_POSN                  equ 0000h
CWG1CON0_CWG1MODE0_POSITION              equ 0000h
CWG1CON0_CWG1MODE0_SIZE                  equ 0001h
CWG1CON0_CWG1MODE0_LENGTH                equ 0001h
CWG1CON0_CWG1MODE0_MASK                  equ 0001h
CWG1CON0_CWG1MODE1_POSN                  equ 0001h
CWG1CON0_CWG1MODE1_POSITION              equ 0001h
CWG1CON0_CWG1MODE1_SIZE                  equ 0001h
CWG1CON0_CWG1MODE1_LENGTH                equ 0001h
CWG1CON0_CWG1MODE1_MASK                  equ 0002h
CWG1CON0_CWG1MODE2_POSN                  equ 0002h
CWG1CON0_CWG1MODE2_POSITION              equ 0002h
CWG1CON0_CWG1MODE2_SIZE                  equ 0001h
CWG1CON0_CWG1MODE2_LENGTH                equ 0001h
CWG1CON0_CWG1MODE2_MASK                  equ 0004h

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
CWG1CON1                                 equ 0F45h
// bitfield definitions
CWG1CON1_POLA_POSN                       equ 0000h
CWG1CON1_POLA_POSITION                   equ 0000h
CWG1CON1_POLA_SIZE                       equ 0001h
CWG1CON1_POLA_LENGTH                     equ 0001h
CWG1CON1_POLA_MASK                       equ 0001h
CWG1CON1_POLB_POSN                       equ 0001h
CWG1CON1_POLB_POSITION                   equ 0001h
CWG1CON1_POLB_SIZE                       equ 0001h
CWG1CON1_POLB_LENGTH                     equ 0001h
CWG1CON1_POLB_MASK                       equ 0002h
CWG1CON1_POLC_POSN                       equ 0002h
CWG1CON1_POLC_POSITION                   equ 0002h
CWG1CON1_POLC_SIZE                       equ 0001h
CWG1CON1_POLC_LENGTH                     equ 0001h
CWG1CON1_POLC_MASK                       equ 0004h
CWG1CON1_POLD_POSN                       equ 0003h
CWG1CON1_POLD_POSITION                   equ 0003h
CWG1CON1_POLD_SIZE                       equ 0001h
CWG1CON1_POLD_LENGTH                     equ 0001h
CWG1CON1_POLD_MASK                       equ 0008h
CWG1CON1_IN_POSN                         equ 0005h
CWG1CON1_IN_POSITION                     equ 0005h
CWG1CON1_IN_SIZE                         equ 0001h
CWG1CON1_IN_LENGTH                       equ 0001h
CWG1CON1_IN_MASK                         equ 0020h
CWG1CON1_CWG1POLA_POSN                   equ 0000h
CWG1CON1_CWG1POLA_POSITION               equ 0000h
CWG1CON1_CWG1POLA_SIZE                   equ 0001h
CWG1CON1_CWG1POLA_LENGTH                 equ 0001h
CWG1CON1_CWG1POLA_MASK                   equ 0001h
CWG1CON1_CWG1POLB_POSN                   equ 0001h
CWG1CON1_CWG1POLB_POSITION               equ 0001h
CWG1CON1_CWG1POLB_SIZE                   equ 0001h
CWG1CON1_CWG1POLB_LENGTH                 equ 0001h
CWG1CON1_CWG1POLB_MASK                   equ 0002h
CWG1CON1_CWG1POLC_POSN                   equ 0002h
CWG1CON1_CWG1POLC_POSITION               equ 0002h
CWG1CON1_CWG1POLC_SIZE                   equ 0001h
CWG1CON1_CWG1POLC_LENGTH                 equ 0001h
CWG1CON1_CWG1POLC_MASK                   equ 0004h
CWG1CON1_CWG1POLD_POSN                   equ 0003h
CWG1CON1_CWG1POLD_POSITION               equ 0003h
CWG1CON1_CWG1POLD_SIZE                   equ 0001h
CWG1CON1_CWG1POLD_LENGTH                 equ 0001h
CWG1CON1_CWG1POLD_MASK                   equ 0008h
CWG1CON1_CWG1IN_POSN                     equ 0005h
CWG1CON1_CWG1IN_POSITION                 equ 0005h
CWG1CON1_CWG1IN_SIZE                     equ 0001h
CWG1CON1_CWG1IN_LENGTH                   equ 0001h
CWG1CON1_CWG1IN_MASK                     equ 0020h

// Register: CWG1AS0
#define CWG1AS0 CWG1AS0
CWG1AS0                                  equ 0F46h
// bitfield definitions
CWG1AS0_LSAC_POSN                        equ 0002h
CWG1AS0_LSAC_POSITION                    equ 0002h
CWG1AS0_LSAC_SIZE                        equ 0002h
CWG1AS0_LSAC_LENGTH                      equ 0002h
CWG1AS0_LSAC_MASK                        equ 000Ch
CWG1AS0_LSBD_POSN                        equ 0004h
CWG1AS0_LSBD_POSITION                    equ 0004h
CWG1AS0_LSBD_SIZE                        equ 0002h
CWG1AS0_LSBD_LENGTH                      equ 0002h
CWG1AS0_LSBD_MASK                        equ 0030h
CWG1AS0_REN_POSN                         equ 0006h
CWG1AS0_REN_POSITION                     equ 0006h
CWG1AS0_REN_SIZE                         equ 0001h
CWG1AS0_REN_LENGTH                       equ 0001h
CWG1AS0_REN_MASK                         equ 0040h
CWG1AS0_SHUTDOWN_POSN                    equ 0007h
CWG1AS0_SHUTDOWN_POSITION                equ 0007h
CWG1AS0_SHUTDOWN_SIZE                    equ 0001h
CWG1AS0_SHUTDOWN_LENGTH                  equ 0001h
CWG1AS0_SHUTDOWN_MASK                    equ 0080h
CWG1AS0_LSAC0_POSN                       equ 0002h
CWG1AS0_LSAC0_POSITION                   equ 0002h
CWG1AS0_LSAC0_SIZE                       equ 0001h
CWG1AS0_LSAC0_LENGTH                     equ 0001h
CWG1AS0_LSAC0_MASK                       equ 0004h
CWG1AS0_LSAC1_POSN                       equ 0003h
CWG1AS0_LSAC1_POSITION                   equ 0003h
CWG1AS0_LSAC1_SIZE                       equ 0001h
CWG1AS0_LSAC1_LENGTH                     equ 0001h
CWG1AS0_LSAC1_MASK                       equ 0008h
CWG1AS0_LSBD0_POSN                       equ 0004h
CWG1AS0_LSBD0_POSITION                   equ 0004h
CWG1AS0_LSBD0_SIZE                       equ 0001h
CWG1AS0_LSBD0_LENGTH                     equ 0001h
CWG1AS0_LSBD0_MASK                       equ 0010h
CWG1AS0_LSBD1_POSN                       equ 0005h
CWG1AS0_LSBD1_POSITION                   equ 0005h
CWG1AS0_LSBD1_SIZE                       equ 0001h
CWG1AS0_LSBD1_LENGTH                     equ 0001h
CWG1AS0_LSBD1_MASK                       equ 0020h
CWG1AS0_CWG1LSAC_POSN                    equ 0002h
CWG1AS0_CWG1LSAC_POSITION                equ 0002h
CWG1AS0_CWG1LSAC_SIZE                    equ 0002h
CWG1AS0_CWG1LSAC_LENGTH                  equ 0002h
CWG1AS0_CWG1LSAC_MASK                    equ 000Ch
CWG1AS0_CWG1LSBD_POSN                    equ 0004h
CWG1AS0_CWG1LSBD_POSITION                equ 0004h
CWG1AS0_CWG1LSBD_SIZE                    equ 0002h
CWG1AS0_CWG1LSBD_LENGTH                  equ 0002h
CWG1AS0_CWG1LSBD_MASK                    equ 0030h
CWG1AS0_CWG1REN_POSN                     equ 0006h
CWG1AS0_CWG1REN_POSITION                 equ 0006h
CWG1AS0_CWG1REN_SIZE                     equ 0001h
CWG1AS0_CWG1REN_LENGTH                   equ 0001h
CWG1AS0_CWG1REN_MASK                     equ 0040h
CWG1AS0_CWG1SHUTDOWN_POSN                equ 0007h
CWG1AS0_CWG1SHUTDOWN_POSITION            equ 0007h
CWG1AS0_CWG1SHUTDOWN_SIZE                equ 0001h
CWG1AS0_CWG1SHUTDOWN_LENGTH              equ 0001h
CWG1AS0_CWG1SHUTDOWN_MASK                equ 0080h
CWG1AS0_CWG1LSAC0_POSN                   equ 0002h
CWG1AS0_CWG1LSAC0_POSITION               equ 0002h
CWG1AS0_CWG1LSAC0_SIZE                   equ 0001h
CWG1AS0_CWG1LSAC0_LENGTH                 equ 0001h
CWG1AS0_CWG1LSAC0_MASK                   equ 0004h
CWG1AS0_CWG1LSAC1_POSN                   equ 0003h
CWG1AS0_CWG1LSAC1_POSITION               equ 0003h
CWG1AS0_CWG1LSAC1_SIZE                   equ 0001h
CWG1AS0_CWG1LSAC1_LENGTH                 equ 0001h
CWG1AS0_CWG1LSAC1_MASK                   equ 0008h
CWG1AS0_CWG1LSBD0_POSN                   equ 0004h
CWG1AS0_CWG1LSBD0_POSITION               equ 0004h
CWG1AS0_CWG1LSBD0_SIZE                   equ 0001h
CWG1AS0_CWG1LSBD0_LENGTH                 equ 0001h
CWG1AS0_CWG1LSBD0_MASK                   equ 0010h
CWG1AS0_CWG1LSBD1_POSN                   equ 0005h
CWG1AS0_CWG1LSBD1_POSITION               equ 0005h
CWG1AS0_CWG1LSBD1_SIZE                   equ 0001h
CWG1AS0_CWG1LSBD1_LENGTH                 equ 0001h
CWG1AS0_CWG1LSBD1_MASK                   equ 0020h

// Register: CWG1AS1
#define CWG1AS1 CWG1AS1
CWG1AS1                                  equ 0F47h
// bitfield definitions
CWG1AS1_AS0E_POSN                        equ 0000h
CWG1AS1_AS0E_POSITION                    equ 0000h
CWG1AS1_AS0E_SIZE                        equ 0001h
CWG1AS1_AS0E_LENGTH                      equ 0001h
CWG1AS1_AS0E_MASK                        equ 0001h
CWG1AS1_AS1E_POSN                        equ 0001h
CWG1AS1_AS1E_POSITION                    equ 0001h
CWG1AS1_AS1E_SIZE                        equ 0001h
CWG1AS1_AS1E_LENGTH                      equ 0001h
CWG1AS1_AS1E_MASK                        equ 0002h
CWG1AS1_AS2E_POSN                        equ 0002h
CWG1AS1_AS2E_POSITION                    equ 0002h
CWG1AS1_AS2E_SIZE                        equ 0001h
CWG1AS1_AS2E_LENGTH                      equ 0001h
CWG1AS1_AS2E_MASK                        equ 0004h
CWG1AS1_AS3E_POSN                        equ 0003h
CWG1AS1_AS3E_POSITION                    equ 0003h
CWG1AS1_AS3E_SIZE                        equ 0001h
CWG1AS1_AS3E_LENGTH                      equ 0001h
CWG1AS1_AS3E_MASK                        equ 0008h
CWG1AS1_AS4E_POSN                        equ 0004h
CWG1AS1_AS4E_POSITION                    equ 0004h
CWG1AS1_AS4E_SIZE                        equ 0001h
CWG1AS1_AS4E_LENGTH                      equ 0001h
CWG1AS1_AS4E_MASK                        equ 0010h
CWG1AS1_AS5E_POSN                        equ 0005h
CWG1AS1_AS5E_POSITION                    equ 0005h
CWG1AS1_AS5E_SIZE                        equ 0001h
CWG1AS1_AS5E_LENGTH                      equ 0001h
CWG1AS1_AS5E_MASK                        equ 0020h

// Register: CWG1STR
#define CWG1STR CWG1STR
CWG1STR                                  equ 0F48h
// bitfield definitions
CWG1STR_STRA_POSN                        equ 0000h
CWG1STR_STRA_POSITION                    equ 0000h
CWG1STR_STRA_SIZE                        equ 0001h
CWG1STR_STRA_LENGTH                      equ 0001h
CWG1STR_STRA_MASK                        equ 0001h
CWG1STR_STRB_POSN                        equ 0001h
CWG1STR_STRB_POSITION                    equ 0001h
CWG1STR_STRB_SIZE                        equ 0001h
CWG1STR_STRB_LENGTH                      equ 0001h
CWG1STR_STRB_MASK                        equ 0002h
CWG1STR_STRC_POSN                        equ 0002h
CWG1STR_STRC_POSITION                    equ 0002h
CWG1STR_STRC_SIZE                        equ 0001h
CWG1STR_STRC_LENGTH                      equ 0001h
CWG1STR_STRC_MASK                        equ 0004h
CWG1STR_STRD_POSN                        equ 0003h
CWG1STR_STRD_POSITION                    equ 0003h
CWG1STR_STRD_SIZE                        equ 0001h
CWG1STR_STRD_LENGTH                      equ 0001h
CWG1STR_STRD_MASK                        equ 0008h
CWG1STR_OVRA_POSN                        equ 0004h
CWG1STR_OVRA_POSITION                    equ 0004h
CWG1STR_OVRA_SIZE                        equ 0001h
CWG1STR_OVRA_LENGTH                      equ 0001h
CWG1STR_OVRA_MASK                        equ 0010h
CWG1STR_OVRB_POSN                        equ 0005h
CWG1STR_OVRB_POSITION                    equ 0005h
CWG1STR_OVRB_SIZE                        equ 0001h
CWG1STR_OVRB_LENGTH                      equ 0001h
CWG1STR_OVRB_MASK                        equ 0020h
CWG1STR_OVRC_POSN                        equ 0006h
CWG1STR_OVRC_POSITION                    equ 0006h
CWG1STR_OVRC_SIZE                        equ 0001h
CWG1STR_OVRC_LENGTH                      equ 0001h
CWG1STR_OVRC_MASK                        equ 0040h
CWG1STR_OVRD_POSN                        equ 0007h
CWG1STR_OVRD_POSITION                    equ 0007h
CWG1STR_OVRD_SIZE                        equ 0001h
CWG1STR_OVRD_LENGTH                      equ 0001h
CWG1STR_OVRD_MASK                        equ 0080h
CWG1STR_CWG1STRA_POSN                    equ 0000h
CWG1STR_CWG1STRA_POSITION                equ 0000h
CWG1STR_CWG1STRA_SIZE                    equ 0001h
CWG1STR_CWG1STRA_LENGTH                  equ 0001h
CWG1STR_CWG1STRA_MASK                    equ 0001h
CWG1STR_CWG1STRB_POSN                    equ 0001h
CWG1STR_CWG1STRB_POSITION                equ 0001h
CWG1STR_CWG1STRB_SIZE                    equ 0001h
CWG1STR_CWG1STRB_LENGTH                  equ 0001h
CWG1STR_CWG1STRB_MASK                    equ 0002h
CWG1STR_CWG1STRC_POSN                    equ 0002h
CWG1STR_CWG1STRC_POSITION                equ 0002h
CWG1STR_CWG1STRC_SIZE                    equ 0001h
CWG1STR_CWG1STRC_LENGTH                  equ 0001h
CWG1STR_CWG1STRC_MASK                    equ 0004h
CWG1STR_CWG1STRD_POSN                    equ 0003h
CWG1STR_CWG1STRD_POSITION                equ 0003h
CWG1STR_CWG1STRD_SIZE                    equ 0001h
CWG1STR_CWG1STRD_LENGTH                  equ 0001h
CWG1STR_CWG1STRD_MASK                    equ 0008h
CWG1STR_CWG1OVRA_POSN                    equ 0004h
CWG1STR_CWG1OVRA_POSITION                equ 0004h
CWG1STR_CWG1OVRA_SIZE                    equ 0001h
CWG1STR_CWG1OVRA_LENGTH                  equ 0001h
CWG1STR_CWG1OVRA_MASK                    equ 0010h
CWG1STR_CWG1OVRB_POSN                    equ 0005h
CWG1STR_CWG1OVRB_POSITION                equ 0005h
CWG1STR_CWG1OVRB_SIZE                    equ 0001h
CWG1STR_CWG1OVRB_LENGTH                  equ 0001h
CWG1STR_CWG1OVRB_MASK                    equ 0020h
CWG1STR_CWG1OVRC_POSN                    equ 0006h
CWG1STR_CWG1OVRC_POSITION                equ 0006h
CWG1STR_CWG1OVRC_SIZE                    equ 0001h
CWG1STR_CWG1OVRC_LENGTH                  equ 0001h
CWG1STR_CWG1OVRC_MASK                    equ 0040h
CWG1STR_CWG1OVRD_POSN                    equ 0007h
CWG1STR_CWG1OVRD_POSITION                equ 0007h
CWG1STR_CWG1OVRD_SIZE                    equ 0001h
CWG1STR_CWG1OVRD_LENGTH                  equ 0001h
CWG1STR_CWG1OVRD_MASK                    equ 0080h

// Register: SCANLADR
#define SCANLADR SCANLADR
SCANLADR                                 equ 0F49h

// Register: SCANLADRL
#define SCANLADRL SCANLADRL
SCANLADRL                                equ 0F49h
// bitfield definitions
SCANLADRL_LADR_POSN                      equ 0000h
SCANLADRL_LADR_POSITION                  equ 0000h
SCANLADRL_LADR_SIZE                      equ 0008h
SCANLADRL_LADR_LENGTH                    equ 0008h
SCANLADRL_LADR_MASK                      equ 00FFh
SCANLADRL_LADR0_POSN                     equ 0000h
SCANLADRL_LADR0_POSITION                 equ 0000h
SCANLADRL_LADR0_SIZE                     equ 0001h
SCANLADRL_LADR0_LENGTH                   equ 0001h
SCANLADRL_LADR0_MASK                     equ 0001h
SCANLADRL_LADR1_POSN                     equ 0001h
SCANLADRL_LADR1_POSITION                 equ 0001h
SCANLADRL_LADR1_SIZE                     equ 0001h
SCANLADRL_LADR1_LENGTH                   equ 0001h
SCANLADRL_LADR1_MASK                     equ 0002h
SCANLADRL_LADR2_POSN                     equ 0002h
SCANLADRL_LADR2_POSITION                 equ 0002h
SCANLADRL_LADR2_SIZE                     equ 0001h
SCANLADRL_LADR2_LENGTH                   equ 0001h
SCANLADRL_LADR2_MASK                     equ 0004h
SCANLADRL_LADR3_POSN                     equ 0003h
SCANLADRL_LADR3_POSITION                 equ 0003h
SCANLADRL_LADR3_SIZE                     equ 0001h
SCANLADRL_LADR3_LENGTH                   equ 0001h
SCANLADRL_LADR3_MASK                     equ 0008h
SCANLADRL_LADR4_POSN                     equ 0004h
SCANLADRL_LADR4_POSITION                 equ 0004h
SCANLADRL_LADR4_SIZE                     equ 0001h
SCANLADRL_LADR4_LENGTH                   equ 0001h
SCANLADRL_LADR4_MASK                     equ 0010h
SCANLADRL_LADR5_POSN                     equ 0005h
SCANLADRL_LADR5_POSITION                 equ 0005h
SCANLADRL_LADR5_SIZE                     equ 0001h
SCANLADRL_LADR5_LENGTH                   equ 0001h
SCANLADRL_LADR5_MASK                     equ 0020h
SCANLADRL_LADR6_POSN                     equ 0006h
SCANLADRL_LADR6_POSITION                 equ 0006h
SCANLADRL_LADR6_SIZE                     equ 0001h
SCANLADRL_LADR6_LENGTH                   equ 0001h
SCANLADRL_LADR6_MASK                     equ 0040h
SCANLADRL_LADR7_POSN                     equ 0007h
SCANLADRL_LADR7_POSITION                 equ 0007h
SCANLADRL_LADR7_SIZE                     equ 0001h
SCANLADRL_LADR7_LENGTH                   equ 0001h
SCANLADRL_LADR7_MASK                     equ 0080h
SCANLADRL_SCANLADR_POSN                  equ 0000h
SCANLADRL_SCANLADR_POSITION              equ 0000h
SCANLADRL_SCANLADR_SIZE                  equ 0008h
SCANLADRL_SCANLADR_LENGTH                equ 0008h
SCANLADRL_SCANLADR_MASK                  equ 00FFh
SCANLADRL_SCANLADR0_POSN                 equ 0000h
SCANLADRL_SCANLADR0_POSITION             equ 0000h
SCANLADRL_SCANLADR0_SIZE                 equ 0001h
SCANLADRL_SCANLADR0_LENGTH               equ 0001h
SCANLADRL_SCANLADR0_MASK                 equ 0001h
SCANLADRL_SCANLADR1_POSN                 equ 0001h
SCANLADRL_SCANLADR1_POSITION             equ 0001h
SCANLADRL_SCANLADR1_SIZE                 equ 0001h
SCANLADRL_SCANLADR1_LENGTH               equ 0001h
SCANLADRL_SCANLADR1_MASK                 equ 0002h
SCANLADRL_SCANLADR2_POSN                 equ 0002h
SCANLADRL_SCANLADR2_POSITION             equ 0002h
SCANLADRL_SCANLADR2_SIZE                 equ 0001h
SCANLADRL_SCANLADR2_LENGTH               equ 0001h
SCANLADRL_SCANLADR2_MASK                 equ 0004h
SCANLADRL_SCANLADR3_POSN                 equ 0003h
SCANLADRL_SCANLADR3_POSITION             equ 0003h
SCANLADRL_SCANLADR3_SIZE                 equ 0001h
SCANLADRL_SCANLADR3_LENGTH               equ 0001h
SCANLADRL_SCANLADR3_MASK                 equ 0008h
SCANLADRL_SCANLADR4_POSN                 equ 0004h
SCANLADRL_SCANLADR4_POSITION             equ 0004h
SCANLADRL_SCANLADR4_SIZE                 equ 0001h
SCANLADRL_SCANLADR4_LENGTH               equ 0001h
SCANLADRL_SCANLADR4_MASK                 equ 0010h
SCANLADRL_SCANLADR5_POSN                 equ 0005h
SCANLADRL_SCANLADR5_POSITION             equ 0005h
SCANLADRL_SCANLADR5_SIZE                 equ 0001h
SCANLADRL_SCANLADR5_LENGTH               equ 0001h
SCANLADRL_SCANLADR5_MASK                 equ 0020h
SCANLADRL_SCANLADR6_POSN                 equ 0006h
SCANLADRL_SCANLADR6_POSITION             equ 0006h
SCANLADRL_SCANLADR6_SIZE                 equ 0001h
SCANLADRL_SCANLADR6_LENGTH               equ 0001h
SCANLADRL_SCANLADR6_MASK                 equ 0040h
SCANLADRL_SCANLADR7_POSN                 equ 0007h
SCANLADRL_SCANLADR7_POSITION             equ 0007h
SCANLADRL_SCANLADR7_SIZE                 equ 0001h
SCANLADRL_SCANLADR7_LENGTH               equ 0001h
SCANLADRL_SCANLADR7_MASK                 equ 0080h

// Register: SCANLADRH
#define SCANLADRH SCANLADRH
SCANLADRH                                equ 0F4Ah
// bitfield definitions
SCANLADRH_LADR_POSN                      equ 0000h
SCANLADRH_LADR_POSITION                  equ 0000h
SCANLADRH_LADR_SIZE                      equ 0008h
SCANLADRH_LADR_LENGTH                    equ 0008h
SCANLADRH_LADR_MASK                      equ 00FFh
SCANLADRH_LADR8_POSN                     equ 0000h
SCANLADRH_LADR8_POSITION                 equ 0000h
SCANLADRH_LADR8_SIZE                     equ 0001h
SCANLADRH_LADR8_LENGTH                   equ 0001h
SCANLADRH_LADR8_MASK                     equ 0001h
SCANLADRH_LADR9_POSN                     equ 0001h
SCANLADRH_LADR9_POSITION                 equ 0001h
SCANLADRH_LADR9_SIZE                     equ 0001h
SCANLADRH_LADR9_LENGTH                   equ 0001h
SCANLADRH_LADR9_MASK                     equ 0002h
SCANLADRH_LADR10_POSN                    equ 0002h
SCANLADRH_LADR10_POSITION                equ 0002h
SCANLADRH_LADR10_SIZE                    equ 0001h
SCANLADRH_LADR10_LENGTH                  equ 0001h
SCANLADRH_LADR10_MASK                    equ 0004h
SCANLADRH_LADR11_POSN                    equ 0003h
SCANLADRH_LADR11_POSITION                equ 0003h
SCANLADRH_LADR11_SIZE                    equ 0001h
SCANLADRH_LADR11_LENGTH                  equ 0001h
SCANLADRH_LADR11_MASK                    equ 0008h
SCANLADRH_LADR12_POSN                    equ 0004h
SCANLADRH_LADR12_POSITION                equ 0004h
SCANLADRH_LADR12_SIZE                    equ 0001h
SCANLADRH_LADR12_LENGTH                  equ 0001h
SCANLADRH_LADR12_MASK                    equ 0010h
SCANLADRH_LADR13_POSN                    equ 0005h
SCANLADRH_LADR13_POSITION                equ 0005h
SCANLADRH_LADR13_SIZE                    equ 0001h
SCANLADRH_LADR13_LENGTH                  equ 0001h
SCANLADRH_LADR13_MASK                    equ 0020h
SCANLADRH_LADR14_POSN                    equ 0006h
SCANLADRH_LADR14_POSITION                equ 0006h
SCANLADRH_LADR14_SIZE                    equ 0001h
SCANLADRH_LADR14_LENGTH                  equ 0001h
SCANLADRH_LADR14_MASK                    equ 0040h
SCANLADRH_LADR15_POSN                    equ 0007h
SCANLADRH_LADR15_POSITION                equ 0007h
SCANLADRH_LADR15_SIZE                    equ 0001h
SCANLADRH_LADR15_LENGTH                  equ 0001h
SCANLADRH_LADR15_MASK                    equ 0080h
SCANLADRH_SCANLADR_POSN                  equ 0000h
SCANLADRH_SCANLADR_POSITION              equ 0000h
SCANLADRH_SCANLADR_SIZE                  equ 0008h
SCANLADRH_SCANLADR_LENGTH                equ 0008h
SCANLADRH_SCANLADR_MASK                  equ 00FFh
SCANLADRH_SCANLADR8_POSN                 equ 0000h
SCANLADRH_SCANLADR8_POSITION             equ 0000h
SCANLADRH_SCANLADR8_SIZE                 equ 0001h
SCANLADRH_SCANLADR8_LENGTH               equ 0001h
SCANLADRH_SCANLADR8_MASK                 equ 0001h
SCANLADRH_SCANLADR9_POSN                 equ 0001h
SCANLADRH_SCANLADR9_POSITION             equ 0001h
SCANLADRH_SCANLADR9_SIZE                 equ 0001h
SCANLADRH_SCANLADR9_LENGTH               equ 0001h
SCANLADRH_SCANLADR9_MASK                 equ 0002h
SCANLADRH_SCANLADR10_POSN                equ 0002h
SCANLADRH_SCANLADR10_POSITION            equ 0002h
SCANLADRH_SCANLADR10_SIZE                equ 0001h
SCANLADRH_SCANLADR10_LENGTH              equ 0001h
SCANLADRH_SCANLADR10_MASK                equ 0004h
SCANLADRH_SCANLADR11_POSN                equ 0003h
SCANLADRH_SCANLADR11_POSITION            equ 0003h
SCANLADRH_SCANLADR11_SIZE                equ 0001h
SCANLADRH_SCANLADR11_LENGTH              equ 0001h
SCANLADRH_SCANLADR11_MASK                equ 0008h
SCANLADRH_SCANLADR12_POSN                equ 0004h
SCANLADRH_SCANLADR12_POSITION            equ 0004h
SCANLADRH_SCANLADR12_SIZE                equ 0001h
SCANLADRH_SCANLADR12_LENGTH              equ 0001h
SCANLADRH_SCANLADR12_MASK                equ 0010h
SCANLADRH_SCANLADR13_POSN                equ 0005h
SCANLADRH_SCANLADR13_POSITION            equ 0005h
SCANLADRH_SCANLADR13_SIZE                equ 0001h
SCANLADRH_SCANLADR13_LENGTH              equ 0001h
SCANLADRH_SCANLADR13_MASK                equ 0020h
SCANLADRH_SCANLADR14_POSN                equ 0006h
SCANLADRH_SCANLADR14_POSITION            equ 0006h
SCANLADRH_SCANLADR14_SIZE                equ 0001h
SCANLADRH_SCANLADR14_LENGTH              equ 0001h
SCANLADRH_SCANLADR14_MASK                equ 0040h
SCANLADRH_SCANLADR15_POSN                equ 0007h
SCANLADRH_SCANLADR15_POSITION            equ 0007h
SCANLADRH_SCANLADR15_SIZE                equ 0001h
SCANLADRH_SCANLADR15_LENGTH              equ 0001h
SCANLADRH_SCANLADR15_MASK                equ 0080h

// Register: SCANLADRU
#define SCANLADRU SCANLADRU
SCANLADRU                                equ 0F4Bh
// bitfield definitions
SCANLADRU_LADR_POSN                      equ 0000h
SCANLADRU_LADR_POSITION                  equ 0000h
SCANLADRU_LADR_SIZE                      equ 0006h
SCANLADRU_LADR_LENGTH                    equ 0006h
SCANLADRU_LADR_MASK                      equ 003Fh
SCANLADRU_LADR16_POSN                    equ 0000h
SCANLADRU_LADR16_POSITION                equ 0000h
SCANLADRU_LADR16_SIZE                    equ 0001h
SCANLADRU_LADR16_LENGTH                  equ 0001h
SCANLADRU_LADR16_MASK                    equ 0001h
SCANLADRU_LADR17_POSN                    equ 0001h
SCANLADRU_LADR17_POSITION                equ 0001h
SCANLADRU_LADR17_SIZE                    equ 0001h
SCANLADRU_LADR17_LENGTH                  equ 0001h
SCANLADRU_LADR17_MASK                    equ 0002h
SCANLADRU_LADR18_POSN                    equ 0002h
SCANLADRU_LADR18_POSITION                equ 0002h
SCANLADRU_LADR18_SIZE                    equ 0001h
SCANLADRU_LADR18_LENGTH                  equ 0001h
SCANLADRU_LADR18_MASK                    equ 0004h
SCANLADRU_LADR19_POSN                    equ 0003h
SCANLADRU_LADR19_POSITION                equ 0003h
SCANLADRU_LADR19_SIZE                    equ 0001h
SCANLADRU_LADR19_LENGTH                  equ 0001h
SCANLADRU_LADR19_MASK                    equ 0008h
SCANLADRU_LADR20_POSN                    equ 0004h
SCANLADRU_LADR20_POSITION                equ 0004h
SCANLADRU_LADR20_SIZE                    equ 0001h
SCANLADRU_LADR20_LENGTH                  equ 0001h
SCANLADRU_LADR20_MASK                    equ 0010h
SCANLADRU_LADR21_POSN                    equ 0005h
SCANLADRU_LADR21_POSITION                equ 0005h
SCANLADRU_LADR21_SIZE                    equ 0001h
SCANLADRU_LADR21_LENGTH                  equ 0001h
SCANLADRU_LADR21_MASK                    equ 0020h
SCANLADRU_SCANLADR_POSN                  equ 0000h
SCANLADRU_SCANLADR_POSITION              equ 0000h
SCANLADRU_SCANLADR_SIZE                  equ 0006h
SCANLADRU_SCANLADR_LENGTH                equ 0006h
SCANLADRU_SCANLADR_MASK                  equ 003Fh
SCANLADRU_SCANLADR16_POSN                equ 0000h
SCANLADRU_SCANLADR16_POSITION            equ 0000h
SCANLADRU_SCANLADR16_SIZE                equ 0001h
SCANLADRU_SCANLADR16_LENGTH              equ 0001h
SCANLADRU_SCANLADR16_MASK                equ 0001h
SCANLADRU_SCANLADR17_POSN                equ 0001h
SCANLADRU_SCANLADR17_POSITION            equ 0001h
SCANLADRU_SCANLADR17_SIZE                equ 0001h
SCANLADRU_SCANLADR17_LENGTH              equ 0001h
SCANLADRU_SCANLADR17_MASK                equ 0002h
SCANLADRU_SCANLADR18_POSN                equ 0002h
SCANLADRU_SCANLADR18_POSITION            equ 0002h
SCANLADRU_SCANLADR18_SIZE                equ 0001h
SCANLADRU_SCANLADR18_LENGTH              equ 0001h
SCANLADRU_SCANLADR18_MASK                equ 0004h
SCANLADRU_SCANLADR19_POSN                equ 0003h
SCANLADRU_SCANLADR19_POSITION            equ 0003h
SCANLADRU_SCANLADR19_SIZE                equ 0001h
SCANLADRU_SCANLADR19_LENGTH              equ 0001h
SCANLADRU_SCANLADR19_MASK                equ 0008h
SCANLADRU_SCANLADR20_POSN                equ 0004h
SCANLADRU_SCANLADR20_POSITION            equ 0004h
SCANLADRU_SCANLADR20_SIZE                equ 0001h
SCANLADRU_SCANLADR20_LENGTH              equ 0001h
SCANLADRU_SCANLADR20_MASK                equ 0010h
SCANLADRU_SCANLADR21_POSN                equ 0005h
SCANLADRU_SCANLADR21_POSITION            equ 0005h
SCANLADRU_SCANLADR21_SIZE                equ 0001h
SCANLADRU_SCANLADR21_LENGTH              equ 0001h
SCANLADRU_SCANLADR21_MASK                equ 0020h

// Register: SCANHADR
#define SCANHADR SCANHADR
SCANHADR                                 equ 0F4Ch

// Register: SCANHADRL
#define SCANHADRL SCANHADRL
SCANHADRL                                equ 0F4Ch
// bitfield definitions
SCANHADRL_HADR_POSN                      equ 0000h
SCANHADRL_HADR_POSITION                  equ 0000h
SCANHADRL_HADR_SIZE                      equ 0008h
SCANHADRL_HADR_LENGTH                    equ 0008h
SCANHADRL_HADR_MASK                      equ 00FFh
SCANHADRL_HADR0_POSN                     equ 0000h
SCANHADRL_HADR0_POSITION                 equ 0000h
SCANHADRL_HADR0_SIZE                     equ 0001h
SCANHADRL_HADR0_LENGTH                   equ 0001h
SCANHADRL_HADR0_MASK                     equ 0001h
SCANHADRL_HADR1_POSN                     equ 0001h
SCANHADRL_HADR1_POSITION                 equ 0001h
SCANHADRL_HADR1_SIZE                     equ 0001h
SCANHADRL_HADR1_LENGTH                   equ 0001h
SCANHADRL_HADR1_MASK                     equ 0002h
SCANHADRL_HADR2_POSN                     equ 0002h
SCANHADRL_HADR2_POSITION                 equ 0002h
SCANHADRL_HADR2_SIZE                     equ 0001h
SCANHADRL_HADR2_LENGTH                   equ 0001h
SCANHADRL_HADR2_MASK                     equ 0004h
SCANHADRL_HADR3_POSN                     equ 0003h
SCANHADRL_HADR3_POSITION                 equ 0003h
SCANHADRL_HADR3_SIZE                     equ 0001h
SCANHADRL_HADR3_LENGTH                   equ 0001h
SCANHADRL_HADR3_MASK                     equ 0008h
SCANHADRL_HADR4_POSN                     equ 0004h
SCANHADRL_HADR4_POSITION                 equ 0004h
SCANHADRL_HADR4_SIZE                     equ 0001h
SCANHADRL_HADR4_LENGTH                   equ 0001h
SCANHADRL_HADR4_MASK                     equ 0010h
SCANHADRL_HADR5_POSN                     equ 0005h
SCANHADRL_HADR5_POSITION                 equ 0005h
SCANHADRL_HADR5_SIZE                     equ 0001h
SCANHADRL_HADR5_LENGTH                   equ 0001h
SCANHADRL_HADR5_MASK                     equ 0020h
SCANHADRL_HADR6_POSN                     equ 0006h
SCANHADRL_HADR6_POSITION                 equ 0006h
SCANHADRL_HADR6_SIZE                     equ 0001h
SCANHADRL_HADR6_LENGTH                   equ 0001h
SCANHADRL_HADR6_MASK                     equ 0040h
SCANHADRL_HADR7_POSN                     equ 0007h
SCANHADRL_HADR7_POSITION                 equ 0007h
SCANHADRL_HADR7_SIZE                     equ 0001h
SCANHADRL_HADR7_LENGTH                   equ 0001h
SCANHADRL_HADR7_MASK                     equ 0080h
SCANHADRL_SCANHADR_POSN                  equ 0000h
SCANHADRL_SCANHADR_POSITION              equ 0000h
SCANHADRL_SCANHADR_SIZE                  equ 0008h
SCANHADRL_SCANHADR_LENGTH                equ 0008h
SCANHADRL_SCANHADR_MASK                  equ 00FFh
SCANHADRL_SCANHADR0_POSN                 equ 0000h
SCANHADRL_SCANHADR0_POSITION             equ 0000h
SCANHADRL_SCANHADR0_SIZE                 equ 0001h
SCANHADRL_SCANHADR0_LENGTH               equ 0001h
SCANHADRL_SCANHADR0_MASK                 equ 0001h
SCANHADRL_SCANHADR1_POSN                 equ 0001h
SCANHADRL_SCANHADR1_POSITION             equ 0001h
SCANHADRL_SCANHADR1_SIZE                 equ 0001h
SCANHADRL_SCANHADR1_LENGTH               equ 0001h
SCANHADRL_SCANHADR1_MASK                 equ 0002h
SCANHADRL_SCANHADR2_POSN                 equ 0002h
SCANHADRL_SCANHADR2_POSITION             equ 0002h
SCANHADRL_SCANHADR2_SIZE                 equ 0001h
SCANHADRL_SCANHADR2_LENGTH               equ 0001h
SCANHADRL_SCANHADR2_MASK                 equ 0004h
SCANHADRL_SCANHADR3_POSN                 equ 0003h
SCANHADRL_SCANHADR3_POSITION             equ 0003h
SCANHADRL_SCANHADR3_SIZE                 equ 0001h
SCANHADRL_SCANHADR3_LENGTH               equ 0001h
SCANHADRL_SCANHADR3_MASK                 equ 0008h
SCANHADRL_SCANHADR4_POSN                 equ 0004h
SCANHADRL_SCANHADR4_POSITION             equ 0004h
SCANHADRL_SCANHADR4_SIZE                 equ 0001h
SCANHADRL_SCANHADR4_LENGTH               equ 0001h
SCANHADRL_SCANHADR4_MASK                 equ 0010h
SCANHADRL_SCANHADR5_POSN                 equ 0005h
SCANHADRL_SCANHADR5_POSITION             equ 0005h
SCANHADRL_SCANHADR5_SIZE                 equ 0001h
SCANHADRL_SCANHADR5_LENGTH               equ 0001h
SCANHADRL_SCANHADR5_MASK                 equ 0020h
SCANHADRL_SCANHADR6_POSN                 equ 0006h
SCANHADRL_SCANHADR6_POSITION             equ 0006h
SCANHADRL_SCANHADR6_SIZE                 equ 0001h
SCANHADRL_SCANHADR6_LENGTH               equ 0001h
SCANHADRL_SCANHADR6_MASK                 equ 0040h
SCANHADRL_SCANHADR7_POSN                 equ 0007h
SCANHADRL_SCANHADR7_POSITION             equ 0007h
SCANHADRL_SCANHADR7_SIZE                 equ 0001h
SCANHADRL_SCANHADR7_LENGTH               equ 0001h
SCANHADRL_SCANHADR7_MASK                 equ 0080h

// Register: SCANHADRH
#define SCANHADRH SCANHADRH
SCANHADRH                                equ 0F4Dh
// bitfield definitions
SCANHADRH_HADR_POSN                      equ 0000h
SCANHADRH_HADR_POSITION                  equ 0000h
SCANHADRH_HADR_SIZE                      equ 0008h
SCANHADRH_HADR_LENGTH                    equ 0008h
SCANHADRH_HADR_MASK                      equ 00FFh
SCANHADRH_HADR8_POSN                     equ 0000h
SCANHADRH_HADR8_POSITION                 equ 0000h
SCANHADRH_HADR8_SIZE                     equ 0001h
SCANHADRH_HADR8_LENGTH                   equ 0001h
SCANHADRH_HADR8_MASK                     equ 0001h
SCANHADRH_HADR9_POSN                     equ 0001h
SCANHADRH_HADR9_POSITION                 equ 0001h
SCANHADRH_HADR9_SIZE                     equ 0001h
SCANHADRH_HADR9_LENGTH                   equ 0001h
SCANHADRH_HADR9_MASK                     equ 0002h
SCANHADRH_HADR10_POSN                    equ 0002h
SCANHADRH_HADR10_POSITION                equ 0002h
SCANHADRH_HADR10_SIZE                    equ 0001h
SCANHADRH_HADR10_LENGTH                  equ 0001h
SCANHADRH_HADR10_MASK                    equ 0004h
SCANHADRH_HADR11_POSN                    equ 0003h
SCANHADRH_HADR11_POSITION                equ 0003h
SCANHADRH_HADR11_SIZE                    equ 0001h
SCANHADRH_HADR11_LENGTH                  equ 0001h
SCANHADRH_HADR11_MASK                    equ 0008h
SCANHADRH_HADR12_POSN                    equ 0004h
SCANHADRH_HADR12_POSITION                equ 0004h
SCANHADRH_HADR12_SIZE                    equ 0001h
SCANHADRH_HADR12_LENGTH                  equ 0001h
SCANHADRH_HADR12_MASK                    equ 0010h
SCANHADRH_HADR13_POSN                    equ 0005h
SCANHADRH_HADR13_POSITION                equ 0005h
SCANHADRH_HADR13_SIZE                    equ 0001h
SCANHADRH_HADR13_LENGTH                  equ 0001h
SCANHADRH_HADR13_MASK                    equ 0020h
SCANHADRH_HADR14_POSN                    equ 0006h
SCANHADRH_HADR14_POSITION                equ 0006h
SCANHADRH_HADR14_SIZE                    equ 0001h
SCANHADRH_HADR14_LENGTH                  equ 0001h
SCANHADRH_HADR14_MASK                    equ 0040h
SCANHADRH_HADR15_POSN                    equ 0007h
SCANHADRH_HADR15_POSITION                equ 0007h
SCANHADRH_HADR15_SIZE                    equ 0001h
SCANHADRH_HADR15_LENGTH                  equ 0001h
SCANHADRH_HADR15_MASK                    equ 0080h
SCANHADRH_SCANHADR_POSN                  equ 0000h
SCANHADRH_SCANHADR_POSITION              equ 0000h
SCANHADRH_SCANHADR_SIZE                  equ 0008h
SCANHADRH_SCANHADR_LENGTH                equ 0008h
SCANHADRH_SCANHADR_MASK                  equ 00FFh
SCANHADRH_SCANHADR8_POSN                 equ 0000h
SCANHADRH_SCANHADR8_POSITION             equ 0000h
SCANHADRH_SCANHADR8_SIZE                 equ 0001h
SCANHADRH_SCANHADR8_LENGTH               equ 0001h
SCANHADRH_SCANHADR8_MASK                 equ 0001h
SCANHADRH_SCANHADR9_POSN                 equ 0001h
SCANHADRH_SCANHADR9_POSITION             equ 0001h
SCANHADRH_SCANHADR9_SIZE                 equ 0001h
SCANHADRH_SCANHADR9_LENGTH               equ 0001h
SCANHADRH_SCANHADR9_MASK                 equ 0002h
SCANHADRH_SCANHADR10_POSN                equ 0002h
SCANHADRH_SCANHADR10_POSITION            equ 0002h
SCANHADRH_SCANHADR10_SIZE                equ 0001h
SCANHADRH_SCANHADR10_LENGTH              equ 0001h
SCANHADRH_SCANHADR10_MASK                equ 0004h
SCANHADRH_SCANHADR11_POSN                equ 0003h
SCANHADRH_SCANHADR11_POSITION            equ 0003h
SCANHADRH_SCANHADR11_SIZE                equ 0001h
SCANHADRH_SCANHADR11_LENGTH              equ 0001h
SCANHADRH_SCANHADR11_MASK                equ 0008h
SCANHADRH_SCANHADR12_POSN                equ 0004h
SCANHADRH_SCANHADR12_POSITION            equ 0004h
SCANHADRH_SCANHADR12_SIZE                equ 0001h
SCANHADRH_SCANHADR12_LENGTH              equ 0001h
SCANHADRH_SCANHADR12_MASK                equ 0010h
SCANHADRH_SCANHADR13_POSN                equ 0005h
SCANHADRH_SCANHADR13_POSITION            equ 0005h
SCANHADRH_SCANHADR13_SIZE                equ 0001h
SCANHADRH_SCANHADR13_LENGTH              equ 0001h
SCANHADRH_SCANHADR13_MASK                equ 0020h
SCANHADRH_SCANHADR14_POSN                equ 0006h
SCANHADRH_SCANHADR14_POSITION            equ 0006h
SCANHADRH_SCANHADR14_SIZE                equ 0001h
SCANHADRH_SCANHADR14_LENGTH              equ 0001h
SCANHADRH_SCANHADR14_MASK                equ 0040h
SCANHADRH_SCANHADR15_POSN                equ 0007h
SCANHADRH_SCANHADR15_POSITION            equ 0007h
SCANHADRH_SCANHADR15_SIZE                equ 0001h
SCANHADRH_SCANHADR15_LENGTH              equ 0001h
SCANHADRH_SCANHADR15_MASK                equ 0080h

// Register: SCANHADRU
#define SCANHADRU SCANHADRU
SCANHADRU                                equ 0F4Eh
// bitfield definitions
SCANHADRU_HADR_POSN                      equ 0000h
SCANHADRU_HADR_POSITION                  equ 0000h
SCANHADRU_HADR_SIZE                      equ 0006h
SCANHADRU_HADR_LENGTH                    equ 0006h
SCANHADRU_HADR_MASK                      equ 003Fh
SCANHADRU_HADR16_POSN                    equ 0000h
SCANHADRU_HADR16_POSITION                equ 0000h
SCANHADRU_HADR16_SIZE                    equ 0001h
SCANHADRU_HADR16_LENGTH                  equ 0001h
SCANHADRU_HADR16_MASK                    equ 0001h
SCANHADRU_HADR17_POSN                    equ 0001h
SCANHADRU_HADR17_POSITION                equ 0001h
SCANHADRU_HADR17_SIZE                    equ 0001h
SCANHADRU_HADR17_LENGTH                  equ 0001h
SCANHADRU_HADR17_MASK                    equ 0002h
SCANHADRU_HADR18_POSN                    equ 0002h
SCANHADRU_HADR18_POSITION                equ 0002h
SCANHADRU_HADR18_SIZE                    equ 0001h
SCANHADRU_HADR18_LENGTH                  equ 0001h
SCANHADRU_HADR18_MASK                    equ 0004h
SCANHADRU_HADR19_POSN                    equ 0003h
SCANHADRU_HADR19_POSITION                equ 0003h
SCANHADRU_HADR19_SIZE                    equ 0001h
SCANHADRU_HADR19_LENGTH                  equ 0001h
SCANHADRU_HADR19_MASK                    equ 0008h
SCANHADRU_HADR20_POSN                    equ 0004h
SCANHADRU_HADR20_POSITION                equ 0004h
SCANHADRU_HADR20_SIZE                    equ 0001h
SCANHADRU_HADR20_LENGTH                  equ 0001h
SCANHADRU_HADR20_MASK                    equ 0010h
SCANHADRU_HADR21_POSN                    equ 0005h
SCANHADRU_HADR21_POSITION                equ 0005h
SCANHADRU_HADR21_SIZE                    equ 0001h
SCANHADRU_HADR21_LENGTH                  equ 0001h
SCANHADRU_HADR21_MASK                    equ 0020h
SCANHADRU_SCANHADR_POSN                  equ 0000h
SCANHADRU_SCANHADR_POSITION              equ 0000h
SCANHADRU_SCANHADR_SIZE                  equ 0006h
SCANHADRU_SCANHADR_LENGTH                equ 0006h
SCANHADRU_SCANHADR_MASK                  equ 003Fh
SCANHADRU_SCANHADR16_POSN                equ 0000h
SCANHADRU_SCANHADR16_POSITION            equ 0000h
SCANHADRU_SCANHADR16_SIZE                equ 0001h
SCANHADRU_SCANHADR16_LENGTH              equ 0001h
SCANHADRU_SCANHADR16_MASK                equ 0001h
SCANHADRU_SCANHADR17_POSN                equ 0001h
SCANHADRU_SCANHADR17_POSITION            equ 0001h
SCANHADRU_SCANHADR17_SIZE                equ 0001h
SCANHADRU_SCANHADR17_LENGTH              equ 0001h
SCANHADRU_SCANHADR17_MASK                equ 0002h
SCANHADRU_SCANHADR18_POSN                equ 0002h
SCANHADRU_SCANHADR18_POSITION            equ 0002h
SCANHADRU_SCANHADR18_SIZE                equ 0001h
SCANHADRU_SCANHADR18_LENGTH              equ 0001h
SCANHADRU_SCANHADR18_MASK                equ 0004h
SCANHADRU_SCANHADR19_POSN                equ 0003h
SCANHADRU_SCANHADR19_POSITION            equ 0003h
SCANHADRU_SCANHADR19_SIZE                equ 0001h
SCANHADRU_SCANHADR19_LENGTH              equ 0001h
SCANHADRU_SCANHADR19_MASK                equ 0008h
SCANHADRU_SCANHADR20_POSN                equ 0004h
SCANHADRU_SCANHADR20_POSITION            equ 0004h
SCANHADRU_SCANHADR20_SIZE                equ 0001h
SCANHADRU_SCANHADR20_LENGTH              equ 0001h
SCANHADRU_SCANHADR20_MASK                equ 0010h
SCANHADRU_SCANHADR21_POSN                equ 0005h
SCANHADRU_SCANHADR21_POSITION            equ 0005h
SCANHADRU_SCANHADR21_SIZE                equ 0001h
SCANHADRU_SCANHADR21_LENGTH              equ 0001h
SCANHADRU_SCANHADR21_MASK                equ 0020h

// Register: SCANCON0
#define SCANCON0 SCANCON0
SCANCON0                                 equ 0F4Fh
// bitfield definitions
SCANCON0_MODE_POSN                       equ 0000h
SCANCON0_MODE_POSITION                   equ 0000h
SCANCON0_MODE_SIZE                       equ 0002h
SCANCON0_MODE_LENGTH                     equ 0002h
SCANCON0_MODE_MASK                       equ 0003h
SCANCON0_INTM_POSN                       equ 0003h
SCANCON0_INTM_POSITION                   equ 0003h
SCANCON0_INTM_SIZE                       equ 0001h
SCANCON0_INTM_LENGTH                     equ 0001h
SCANCON0_INTM_MASK                       equ 0008h
SCANCON0_INVALID_POSN                    equ 0004h
SCANCON0_INVALID_POSITION                equ 0004h
SCANCON0_INVALID_SIZE                    equ 0001h
SCANCON0_INVALID_LENGTH                  equ 0001h
SCANCON0_INVALID_MASK                    equ 0010h
SCANCON0_BUSY_POSN                       equ 0005h
SCANCON0_BUSY_POSITION                   equ 0005h
SCANCON0_BUSY_SIZE                       equ 0001h
SCANCON0_BUSY_LENGTH                     equ 0001h
SCANCON0_BUSY_MASK                       equ 0020h
SCANCON0_GO_POSN                         equ 0006h
SCANCON0_GO_POSITION                     equ 0006h
SCANCON0_GO_SIZE                         equ 0001h
SCANCON0_GO_LENGTH                       equ 0001h
SCANCON0_GO_MASK                         equ 0040h
SCANCON0_EN_POSN                         equ 0007h
SCANCON0_EN_POSITION                     equ 0007h
SCANCON0_EN_SIZE                         equ 0001h
SCANCON0_EN_LENGTH                       equ 0001h
SCANCON0_EN_MASK                         equ 0080h
SCANCON0_MODE0_POSN                      equ 0000h
SCANCON0_MODE0_POSITION                  equ 0000h
SCANCON0_MODE0_SIZE                      equ 0001h
SCANCON0_MODE0_LENGTH                    equ 0001h
SCANCON0_MODE0_MASK                      equ 0001h
SCANCON0_MODE1_POSN                      equ 0001h
SCANCON0_MODE1_POSITION                  equ 0001h
SCANCON0_MODE1_SIZE                      equ 0001h
SCANCON0_MODE1_LENGTH                    equ 0001h
SCANCON0_MODE1_MASK                      equ 0002h
SCANCON0_SCANMODE_POSN                   equ 0000h
SCANCON0_SCANMODE_POSITION               equ 0000h
SCANCON0_SCANMODE_SIZE                   equ 0002h
SCANCON0_SCANMODE_LENGTH                 equ 0002h
SCANCON0_SCANMODE_MASK                   equ 0003h
SCANCON0_SCANINTM_POSN                   equ 0003h
SCANCON0_SCANINTM_POSITION               equ 0003h
SCANCON0_SCANINTM_SIZE                   equ 0001h
SCANCON0_SCANINTM_LENGTH                 equ 0001h
SCANCON0_SCANINTM_MASK                   equ 0008h
SCANCON0_SCANINVALID_POSN                equ 0004h
SCANCON0_SCANINVALID_POSITION            equ 0004h
SCANCON0_SCANINVALID_SIZE                equ 0001h
SCANCON0_SCANINVALID_LENGTH              equ 0001h
SCANCON0_SCANINVALID_MASK                equ 0010h
SCANCON0_SCANBUSY_POSN                   equ 0005h
SCANCON0_SCANBUSY_POSITION               equ 0005h
SCANCON0_SCANBUSY_SIZE                   equ 0001h
SCANCON0_SCANBUSY_LENGTH                 equ 0001h
SCANCON0_SCANBUSY_MASK                   equ 0020h
SCANCON0_SCANGO_POSN                     equ 0006h
SCANCON0_SCANGO_POSITION                 equ 0006h
SCANCON0_SCANGO_SIZE                     equ 0001h
SCANCON0_SCANGO_LENGTH                   equ 0001h
SCANCON0_SCANGO_MASK                     equ 0040h
SCANCON0_SCANEN_POSN                     equ 0007h
SCANCON0_SCANEN_POSITION                 equ 0007h
SCANCON0_SCANEN_SIZE                     equ 0001h
SCANCON0_SCANEN_LENGTH                   equ 0001h
SCANCON0_SCANEN_MASK                     equ 0080h
SCANCON0_SCANMODE0_POSN                  equ 0000h
SCANCON0_SCANMODE0_POSITION              equ 0000h
SCANCON0_SCANMODE0_SIZE                  equ 0001h
SCANCON0_SCANMODE0_LENGTH                equ 0001h
SCANCON0_SCANMODE0_MASK                  equ 0001h
SCANCON0_SCANMODE1_POSN                  equ 0001h
SCANCON0_SCANMODE1_POSITION              equ 0001h
SCANCON0_SCANMODE1_SIZE                  equ 0001h
SCANCON0_SCANMODE1_LENGTH                equ 0001h
SCANCON0_SCANMODE1_MASK                  equ 0002h
SCANCON0_DABORT_POSN                     equ 0004h
SCANCON0_DABORT_POSITION                 equ 0004h
SCANCON0_DABORT_SIZE                     equ 0001h
SCANCON0_DABORT_LENGTH                   equ 0001h
SCANCON0_DABORT_MASK                     equ 0010h

// Register: SCANTRIG
#define SCANTRIG SCANTRIG
SCANTRIG                                 equ 0F50h
// bitfield definitions
SCANTRIG_TSEL_POSN                       equ 0000h
SCANTRIG_TSEL_POSITION                   equ 0000h
SCANTRIG_TSEL_SIZE                       equ 0004h
SCANTRIG_TSEL_LENGTH                     equ 0004h
SCANTRIG_TSEL_MASK                       equ 000Fh
SCANTRIG_TSEL0_POSN                      equ 0000h
SCANTRIG_TSEL0_POSITION                  equ 0000h
SCANTRIG_TSEL0_SIZE                      equ 0001h
SCANTRIG_TSEL0_LENGTH                    equ 0001h
SCANTRIG_TSEL0_MASK                      equ 0001h
SCANTRIG_TSEL1_POSN                      equ 0001h
SCANTRIG_TSEL1_POSITION                  equ 0001h
SCANTRIG_TSEL1_SIZE                      equ 0001h
SCANTRIG_TSEL1_LENGTH                    equ 0001h
SCANTRIG_TSEL1_MASK                      equ 0002h
SCANTRIG_TSEL2_POSN                      equ 0002h
SCANTRIG_TSEL2_POSITION                  equ 0002h
SCANTRIG_TSEL2_SIZE                      equ 0001h
SCANTRIG_TSEL2_LENGTH                    equ 0001h
SCANTRIG_TSEL2_MASK                      equ 0004h
SCANTRIG_TSEL3_POSN                      equ 0003h
SCANTRIG_TSEL3_POSITION                  equ 0003h
SCANTRIG_TSEL3_SIZE                      equ 0001h
SCANTRIG_TSEL3_LENGTH                    equ 0001h
SCANTRIG_TSEL3_MASK                      equ 0008h
SCANTRIG_SCANTSEL_POSN                   equ 0000h
SCANTRIG_SCANTSEL_POSITION               equ 0000h
SCANTRIG_SCANTSEL_SIZE                   equ 0004h
SCANTRIG_SCANTSEL_LENGTH                 equ 0004h
SCANTRIG_SCANTSEL_MASK                   equ 000Fh
SCANTRIG_SCANTSEL0_POSN                  equ 0000h
SCANTRIG_SCANTSEL0_POSITION              equ 0000h
SCANTRIG_SCANTSEL0_SIZE                  equ 0001h
SCANTRIG_SCANTSEL0_LENGTH                equ 0001h
SCANTRIG_SCANTSEL0_MASK                  equ 0001h
SCANTRIG_SCANTSEL1_POSN                  equ 0001h
SCANTRIG_SCANTSEL1_POSITION              equ 0001h
SCANTRIG_SCANTSEL1_SIZE                  equ 0001h
SCANTRIG_SCANTSEL1_LENGTH                equ 0001h
SCANTRIG_SCANTSEL1_MASK                  equ 0002h
SCANTRIG_SCANTSEL2_POSN                  equ 0002h
SCANTRIG_SCANTSEL2_POSITION              equ 0002h
SCANTRIG_SCANTSEL2_SIZE                  equ 0001h
SCANTRIG_SCANTSEL2_LENGTH                equ 0001h
SCANTRIG_SCANTSEL2_MASK                  equ 0004h
SCANTRIG_SCANTSEL3_POSN                  equ 0003h
SCANTRIG_SCANTSEL3_POSITION              equ 0003h
SCANTRIG_SCANTSEL3_SIZE                  equ 0001h
SCANTRIG_SCANTSEL3_LENGTH                equ 0001h
SCANTRIG_SCANTSEL3_MASK                  equ 0008h

// Register: MDCON0
#define MDCON0 MDCON0
MDCON0                                   equ 0F51h
// bitfield definitions
MDCON0_BIT_POSN                          equ 0000h
MDCON0_BIT_POSITION                      equ 0000h
MDCON0_BIT_SIZE                          equ 0001h
MDCON0_BIT_LENGTH                        equ 0001h
MDCON0_BIT_MASK                          equ 0001h
MDCON0_OPOL_POSN                         equ 0004h
MDCON0_OPOL_POSITION                     equ 0004h
MDCON0_OPOL_SIZE                         equ 0001h
MDCON0_OPOL_LENGTH                       equ 0001h
MDCON0_OPOL_MASK                         equ 0010h
MDCON0_OUT_POSN                          equ 0005h
MDCON0_OUT_POSITION                      equ 0005h
MDCON0_OUT_SIZE                          equ 0001h
MDCON0_OUT_LENGTH                        equ 0001h
MDCON0_OUT_MASK                          equ 0020h
MDCON0_EN_POSN                           equ 0007h
MDCON0_EN_POSITION                       equ 0007h
MDCON0_EN_SIZE                           equ 0001h
MDCON0_EN_LENGTH                         equ 0001h
MDCON0_EN_MASK                           equ 0080h
MDCON0_MDBIT_POSN                        equ 0000h
MDCON0_MDBIT_POSITION                    equ 0000h
MDCON0_MDBIT_SIZE                        equ 0001h
MDCON0_MDBIT_LENGTH                      equ 0001h
MDCON0_MDBIT_MASK                        equ 0001h
MDCON0_MDOPOL_POSN                       equ 0004h
MDCON0_MDOPOL_POSITION                   equ 0004h
MDCON0_MDOPOL_SIZE                       equ 0001h
MDCON0_MDOPOL_LENGTH                     equ 0001h
MDCON0_MDOPOL_MASK                       equ 0010h
MDCON0_MDOUT_POSN                        equ 0005h
MDCON0_MDOUT_POSITION                    equ 0005h
MDCON0_MDOUT_SIZE                        equ 0001h
MDCON0_MDOUT_LENGTH                      equ 0001h
MDCON0_MDOUT_MASK                        equ 0020h
MDCON0_MDEN_POSN                         equ 0007h
MDCON0_MDEN_POSITION                     equ 0007h
MDCON0_MDEN_SIZE                         equ 0001h
MDCON0_MDEN_LENGTH                       equ 0001h
MDCON0_MDEN_MASK                         equ 0080h

// Register: MDCON1
#define MDCON1 MDCON1
MDCON1                                   equ 0F52h
// bitfield definitions
MDCON1_CLSYNC_POSN                       equ 0000h
MDCON1_CLSYNC_POSITION                   equ 0000h
MDCON1_CLSYNC_SIZE                       equ 0001h
MDCON1_CLSYNC_LENGTH                     equ 0001h
MDCON1_CLSYNC_MASK                       equ 0001h
MDCON1_CLPOL_POSN                        equ 0001h
MDCON1_CLPOL_POSITION                    equ 0001h
MDCON1_CLPOL_SIZE                        equ 0001h
MDCON1_CLPOL_LENGTH                      equ 0001h
MDCON1_CLPOL_MASK                        equ 0002h
MDCON1_CHSYNC_POSN                       equ 0004h
MDCON1_CHSYNC_POSITION                   equ 0004h
MDCON1_CHSYNC_SIZE                       equ 0001h
MDCON1_CHSYNC_LENGTH                     equ 0001h
MDCON1_CHSYNC_MASK                       equ 0010h
MDCON1_CHPOL_POSN                        equ 0005h
MDCON1_CHPOL_POSITION                    equ 0005h
MDCON1_CHPOL_SIZE                        equ 0001h
MDCON1_CHPOL_LENGTH                      equ 0001h
MDCON1_CHPOL_MASK                        equ 0020h
MDCON1_MDCLSYNC_POSN                     equ 0000h
MDCON1_MDCLSYNC_POSITION                 equ 0000h
MDCON1_MDCLSYNC_SIZE                     equ 0001h
MDCON1_MDCLSYNC_LENGTH                   equ 0001h
MDCON1_MDCLSYNC_MASK                     equ 0001h
MDCON1_MDCLPOL_POSN                      equ 0001h
MDCON1_MDCLPOL_POSITION                  equ 0001h
MDCON1_MDCLPOL_SIZE                      equ 0001h
MDCON1_MDCLPOL_LENGTH                    equ 0001h
MDCON1_MDCLPOL_MASK                      equ 0002h
MDCON1_MDCHSYNC_POSN                     equ 0004h
MDCON1_MDCHSYNC_POSITION                 equ 0004h
MDCON1_MDCHSYNC_SIZE                     equ 0001h
MDCON1_MDCHSYNC_LENGTH                   equ 0001h
MDCON1_MDCHSYNC_MASK                     equ 0010h
MDCON1_MDCHPOL_POSN                      equ 0005h
MDCON1_MDCHPOL_POSITION                  equ 0005h
MDCON1_MDCHPOL_SIZE                      equ 0001h
MDCON1_MDCHPOL_LENGTH                    equ 0001h
MDCON1_MDCHPOL_MASK                      equ 0020h

// Register: MDSRC
#define MDSRC MDSRC
MDSRC                                    equ 0F53h
// bitfield definitions
MDSRC_SRCS0_POSN                         equ 0000h
MDSRC_SRCS0_POSITION                     equ 0000h
MDSRC_SRCS0_SIZE                         equ 0001h
MDSRC_SRCS0_LENGTH                       equ 0001h
MDSRC_SRCS0_MASK                         equ 0001h
MDSRC_SRCS1_POSN                         equ 0001h
MDSRC_SRCS1_POSITION                     equ 0001h
MDSRC_SRCS1_SIZE                         equ 0001h
MDSRC_SRCS1_LENGTH                       equ 0001h
MDSRC_SRCS1_MASK                         equ 0002h
MDSRC_SRCS2_POSN                         equ 0002h
MDSRC_SRCS2_POSITION                     equ 0002h
MDSRC_SRCS2_SIZE                         equ 0001h
MDSRC_SRCS2_LENGTH                       equ 0001h
MDSRC_SRCS2_MASK                         equ 0004h
MDSRC_SRCS3_POSN                         equ 0003h
MDSRC_SRCS3_POSITION                     equ 0003h
MDSRC_SRCS3_SIZE                         equ 0001h
MDSRC_SRCS3_LENGTH                       equ 0001h
MDSRC_SRCS3_MASK                         equ 0008h
MDSRC_SRCS_POSN                          equ 0000h
MDSRC_SRCS_POSITION                      equ 0000h
MDSRC_SRCS_SIZE                          equ 0004h
MDSRC_SRCS_LENGTH                        equ 0004h
MDSRC_SRCS_MASK                          equ 000Fh
MDSRC_MDSRCS_POSN                        equ 0000h
MDSRC_MDSRCS_POSITION                    equ 0000h
MDSRC_MDSRCS_SIZE                        equ 0004h
MDSRC_MDSRCS_LENGTH                      equ 0004h
MDSRC_MDSRCS_MASK                        equ 000Fh
MDSRC_MDSRCS0_POSN                       equ 0000h
MDSRC_MDSRCS0_POSITION                   equ 0000h
MDSRC_MDSRCS0_SIZE                       equ 0001h
MDSRC_MDSRCS0_LENGTH                     equ 0001h
MDSRC_MDSRCS0_MASK                       equ 0001h
MDSRC_MDSRCS1_POSN                       equ 0001h
MDSRC_MDSRCS1_POSITION                   equ 0001h
MDSRC_MDSRCS1_SIZE                       equ 0001h
MDSRC_MDSRCS1_LENGTH                     equ 0001h
MDSRC_MDSRCS1_MASK                       equ 0002h
MDSRC_MDSRCS2_POSN                       equ 0002h
MDSRC_MDSRCS2_POSITION                   equ 0002h
MDSRC_MDSRCS2_SIZE                       equ 0001h
MDSRC_MDSRCS2_LENGTH                     equ 0001h
MDSRC_MDSRCS2_MASK                       equ 0004h
MDSRC_MDSRCS3_POSN                       equ 0003h
MDSRC_MDSRCS3_POSITION                   equ 0003h
MDSRC_MDSRCS3_SIZE                       equ 0001h
MDSRC_MDSRCS3_LENGTH                     equ 0001h
MDSRC_MDSRCS3_MASK                       equ 0008h

// Register: MDCARL
#define MDCARL MDCARL
MDCARL                                   equ 0F54h
// bitfield definitions
MDCARL_CLS_POSN                          equ 0000h
MDCARL_CLS_POSITION                      equ 0000h
MDCARL_CLS_SIZE                          equ 0003h
MDCARL_CLS_LENGTH                        equ 0003h
MDCARL_CLS_MASK                          equ 0007h
MDCARL_MDCLS_POSN                        equ 0000h
MDCARL_MDCLS_POSITION                    equ 0000h
MDCARL_MDCLS_SIZE                        equ 0003h
MDCARL_MDCLS_LENGTH                      equ 0003h
MDCARL_MDCLS_MASK                        equ 0007h
MDCARL_MDCLS0_POSN                       equ 0000h
MDCARL_MDCLS0_POSITION                   equ 0000h
MDCARL_MDCLS0_SIZE                       equ 0001h
MDCARL_MDCLS0_LENGTH                     equ 0001h
MDCARL_MDCLS0_MASK                       equ 0001h
MDCARL_MDCLS1_POSN                       equ 0001h
MDCARL_MDCLS1_POSITION                   equ 0001h
MDCARL_MDCLS1_SIZE                       equ 0001h
MDCARL_MDCLS1_LENGTH                     equ 0001h
MDCARL_MDCLS1_MASK                       equ 0002h
MDCARL_MDCLS2_POSN                       equ 0002h
MDCARL_MDCLS2_POSITION                   equ 0002h
MDCARL_MDCLS2_SIZE                       equ 0001h
MDCARL_MDCLS2_LENGTH                     equ 0001h
MDCARL_MDCLS2_MASK                       equ 0004h
MDCARL_CLS0_POSN                         equ 0000h
MDCARL_CLS0_POSITION                     equ 0000h
MDCARL_CLS0_SIZE                         equ 0001h
MDCARL_CLS0_LENGTH                       equ 0001h
MDCARL_CLS0_MASK                         equ 0001h
MDCARL_CLS1_POSN                         equ 0001h
MDCARL_CLS1_POSITION                     equ 0001h
MDCARL_CLS1_SIZE                         equ 0001h
MDCARL_CLS1_LENGTH                       equ 0001h
MDCARL_CLS1_MASK                         equ 0002h
MDCARL_CLS2_POSN                         equ 0002h
MDCARL_CLS2_POSITION                     equ 0002h
MDCARL_CLS2_SIZE                         equ 0001h
MDCARL_CLS2_LENGTH                       equ 0001h
MDCARL_CLS2_MASK                         equ 0004h

// Register: MDCARH
#define MDCARH MDCARH
MDCARH                                   equ 0F55h
// bitfield definitions
MDCARH_CHS_POSN                          equ 0000h
MDCARH_CHS_POSITION                      equ 0000h
MDCARH_CHS_SIZE                          equ 0003h
MDCARH_CHS_LENGTH                        equ 0003h
MDCARH_CHS_MASK                          equ 0007h
MDCARH_CHS0_POSN                         equ 0000h
MDCARH_CHS0_POSITION                     equ 0000h
MDCARH_CHS0_SIZE                         equ 0001h
MDCARH_CHS0_LENGTH                       equ 0001h
MDCARH_CHS0_MASK                         equ 0001h
MDCARH_CHS1_POSN                         equ 0001h
MDCARH_CHS1_POSITION                     equ 0001h
MDCARH_CHS1_SIZE                         equ 0001h
MDCARH_CHS1_LENGTH                       equ 0001h
MDCARH_CHS1_MASK                         equ 0002h
MDCARH_CHS2_POSN                         equ 0002h
MDCARH_CHS2_POSITION                     equ 0002h
MDCARH_CHS2_SIZE                         equ 0001h
MDCARH_CHS2_LENGTH                       equ 0001h
MDCARH_CHS2_MASK                         equ 0004h
MDCARH_MDCHS_POSN                        equ 0000h
MDCARH_MDCHS_POSITION                    equ 0000h
MDCARH_MDCHS_SIZE                        equ 0003h
MDCARH_MDCHS_LENGTH                      equ 0003h
MDCARH_MDCHS_MASK                        equ 0007h
MDCARH_MDCHS0_POSN                       equ 0000h
MDCARH_MDCHS0_POSITION                   equ 0000h
MDCARH_MDCHS0_SIZE                       equ 0001h
MDCARH_MDCHS0_LENGTH                     equ 0001h
MDCARH_MDCHS0_MASK                       equ 0001h
MDCARH_MDCHS1_POSN                       equ 0001h
MDCARH_MDCHS1_POSITION                   equ 0001h
MDCARH_MDCHS1_SIZE                       equ 0001h
MDCARH_MDCHS1_LENGTH                     equ 0001h
MDCARH_MDCHS1_MASK                       equ 0002h
MDCARH_MDCHS2_POSN                       equ 0002h
MDCARH_MDCHS2_POSITION                   equ 0002h
MDCARH_MDCHS2_SIZE                       equ 0001h
MDCARH_MDCHS2_LENGTH                     equ 0001h
MDCARH_MDCHS2_MASK                       equ 0004h

// Register: ADACT
#define ADACT ADACT
ADACT                                    equ 0F56h
// bitfield definitions
ADACT_ADACT_POSN                         equ 0000h
ADACT_ADACT_POSITION                     equ 0000h
ADACT_ADACT_SIZE                         equ 0005h
ADACT_ADACT_LENGTH                       equ 0005h
ADACT_ADACT_MASK                         equ 001Fh
ADACT_ADACT0_POSN                        equ 0000h
ADACT_ADACT0_POSITION                    equ 0000h
ADACT_ADACT0_SIZE                        equ 0001h
ADACT_ADACT0_LENGTH                      equ 0001h
ADACT_ADACT0_MASK                        equ 0001h
ADACT_ADACT1_POSN                        equ 0001h
ADACT_ADACT1_POSITION                    equ 0001h
ADACT_ADACT1_SIZE                        equ 0001h
ADACT_ADACT1_LENGTH                      equ 0001h
ADACT_ADACT1_MASK                        equ 0002h
ADACT_ADACT2_POSN                        equ 0002h
ADACT_ADACT2_POSITION                    equ 0002h
ADACT_ADACT2_SIZE                        equ 0001h
ADACT_ADACT2_LENGTH                      equ 0001h
ADACT_ADACT2_MASK                        equ 0004h
ADACT_ADACT3_POSN                        equ 0003h
ADACT_ADACT3_POSITION                    equ 0003h
ADACT_ADACT3_SIZE                        equ 0001h
ADACT_ADACT3_LENGTH                      equ 0001h
ADACT_ADACT3_MASK                        equ 0008h
ADACT_ADACT4_POSN                        equ 0004h
ADACT_ADACT4_POSITION                    equ 0004h
ADACT_ADACT4_SIZE                        equ 0001h
ADACT_ADACT4_LENGTH                      equ 0001h
ADACT_ADACT4_MASK                        equ 0010h

// Register: ADCLK
#define ADCLK ADCLK
ADCLK                                    equ 0F57h
// bitfield definitions
ADCLK_ADCS_POSN                          equ 0000h
ADCLK_ADCS_POSITION                      equ 0000h
ADCLK_ADCS_SIZE                          equ 0006h
ADCLK_ADCS_LENGTH                        equ 0006h
ADCLK_ADCS_MASK                          equ 003Fh
ADCLK_ADCS0_POSN                         equ 0000h
ADCLK_ADCS0_POSITION                     equ 0000h
ADCLK_ADCS0_SIZE                         equ 0001h
ADCLK_ADCS0_LENGTH                       equ 0001h
ADCLK_ADCS0_MASK                         equ 0001h
ADCLK_ADCS1_POSN                         equ 0001h
ADCLK_ADCS1_POSITION                     equ 0001h
ADCLK_ADCS1_SIZE                         equ 0001h
ADCLK_ADCS1_LENGTH                       equ 0001h
ADCLK_ADCS1_MASK                         equ 0002h
ADCLK_ADCS2_POSN                         equ 0002h
ADCLK_ADCS2_POSITION                     equ 0002h
ADCLK_ADCS2_SIZE                         equ 0001h
ADCLK_ADCS2_LENGTH                       equ 0001h
ADCLK_ADCS2_MASK                         equ 0004h
ADCLK_ADCS3_POSN                         equ 0003h
ADCLK_ADCS3_POSITION                     equ 0003h
ADCLK_ADCS3_SIZE                         equ 0001h
ADCLK_ADCS3_LENGTH                       equ 0001h
ADCLK_ADCS3_MASK                         equ 0008h
ADCLK_ADCS4_POSN                         equ 0004h
ADCLK_ADCS4_POSITION                     equ 0004h
ADCLK_ADCS4_SIZE                         equ 0001h
ADCLK_ADCS4_LENGTH                       equ 0001h
ADCLK_ADCS4_MASK                         equ 0010h
ADCLK_ADCS5_POSN                         equ 0005h
ADCLK_ADCS5_POSITION                     equ 0005h
ADCLK_ADCS5_SIZE                         equ 0001h
ADCLK_ADCS5_LENGTH                       equ 0001h
ADCLK_ADCS5_MASK                         equ 0020h

// Register: ADREF
#define ADREF ADREF
ADREF                                    equ 0F58h
// bitfield definitions
ADREF_ADPREF_POSN                        equ 0000h
ADREF_ADPREF_POSITION                    equ 0000h
ADREF_ADPREF_SIZE                        equ 0002h
ADREF_ADPREF_LENGTH                      equ 0002h
ADREF_ADPREF_MASK                        equ 0003h
ADREF_ADNREF_POSN                        equ 0004h
ADREF_ADNREF_POSITION                    equ 0004h
ADREF_ADNREF_SIZE                        equ 0001h
ADREF_ADNREF_LENGTH                      equ 0001h
ADREF_ADNREF_MASK                        equ 0010h
ADREF_ADPREF0_POSN                       equ 0000h
ADREF_ADPREF0_POSITION                   equ 0000h
ADREF_ADPREF0_SIZE                       equ 0001h
ADREF_ADPREF0_LENGTH                     equ 0001h
ADREF_ADPREF0_MASK                       equ 0001h
ADREF_ADPREF1_POSN                       equ 0001h
ADREF_ADPREF1_POSITION                   equ 0001h
ADREF_ADPREF1_SIZE                       equ 0001h
ADREF_ADPREF1_LENGTH                     equ 0001h
ADREF_ADPREF1_MASK                       equ 0002h

// Register: ADCON1
#define ADCON1 ADCON1
ADCON1                                   equ 0F59h
// bitfield definitions
ADCON1_ADDSEN_POSN                       equ 0000h
ADCON1_ADDSEN_POSITION                   equ 0000h
ADCON1_ADDSEN_SIZE                       equ 0001h
ADCON1_ADDSEN_LENGTH                     equ 0001h
ADCON1_ADDSEN_MASK                       equ 0001h
ADCON1_ADGPOL_POSN                       equ 0005h
ADCON1_ADGPOL_POSITION                   equ 0005h
ADCON1_ADGPOL_SIZE                       equ 0001h
ADCON1_ADGPOL_LENGTH                     equ 0001h
ADCON1_ADGPOL_MASK                       equ 0020h
ADCON1_ADIPEN_POSN                       equ 0006h
ADCON1_ADIPEN_POSITION                   equ 0006h
ADCON1_ADIPEN_SIZE                       equ 0001h
ADCON1_ADIPEN_LENGTH                     equ 0001h
ADCON1_ADIPEN_MASK                       equ 0040h
ADCON1_ADPPOL_POSN                       equ 0007h
ADCON1_ADPPOL_POSITION                   equ 0007h
ADCON1_ADPPOL_SIZE                       equ 0001h
ADCON1_ADPPOL_LENGTH                     equ 0001h
ADCON1_ADPPOL_MASK                       equ 0080h

// Register: ADCON2
#define ADCON2 ADCON2
ADCON2                                   equ 0F5Ah
// bitfield definitions
ADCON2_ADMD_POSN                         equ 0000h
ADCON2_ADMD_POSITION                     equ 0000h
ADCON2_ADMD_SIZE                         equ 0003h
ADCON2_ADMD_LENGTH                       equ 0003h
ADCON2_ADMD_MASK                         equ 0007h
ADCON2_ADACLR_POSN                       equ 0003h
ADCON2_ADACLR_POSITION                   equ 0003h
ADCON2_ADACLR_SIZE                       equ 0001h
ADCON2_ADACLR_LENGTH                     equ 0001h
ADCON2_ADACLR_MASK                       equ 0008h
ADCON2_ADCRS_POSN                        equ 0004h
ADCON2_ADCRS_POSITION                    equ 0004h
ADCON2_ADCRS_SIZE                        equ 0003h
ADCON2_ADCRS_LENGTH                      equ 0003h
ADCON2_ADCRS_MASK                        equ 0070h
ADCON2_ADPSIS_POSN                       equ 0007h
ADCON2_ADPSIS_POSITION                   equ 0007h
ADCON2_ADPSIS_SIZE                       equ 0001h
ADCON2_ADPSIS_LENGTH                     equ 0001h
ADCON2_ADPSIS_MASK                       equ 0080h
ADCON2_ADMD0_POSN                        equ 0000h
ADCON2_ADMD0_POSITION                    equ 0000h
ADCON2_ADMD0_SIZE                        equ 0001h
ADCON2_ADMD0_LENGTH                      equ 0001h
ADCON2_ADMD0_MASK                        equ 0001h
ADCON2_ADMD1_POSN                        equ 0001h
ADCON2_ADMD1_POSITION                    equ 0001h
ADCON2_ADMD1_SIZE                        equ 0001h
ADCON2_ADMD1_LENGTH                      equ 0001h
ADCON2_ADMD1_MASK                        equ 0002h
ADCON2_ADMD2_POSN                        equ 0002h
ADCON2_ADMD2_POSITION                    equ 0002h
ADCON2_ADMD2_SIZE                        equ 0001h
ADCON2_ADMD2_LENGTH                      equ 0001h
ADCON2_ADMD2_MASK                        equ 0004h
ADCON2_ADCRS0_POSN                       equ 0004h
ADCON2_ADCRS0_POSITION                   equ 0004h
ADCON2_ADCRS0_SIZE                       equ 0001h
ADCON2_ADCRS0_LENGTH                     equ 0001h
ADCON2_ADCRS0_MASK                       equ 0010h
ADCON2_ADCRS1_POSN                       equ 0005h
ADCON2_ADCRS1_POSITION                   equ 0005h
ADCON2_ADCRS1_SIZE                       equ 0001h
ADCON2_ADCRS1_LENGTH                     equ 0001h
ADCON2_ADCRS1_MASK                       equ 0020h
ADCON2_ADCRS2_POSN                       equ 0006h
ADCON2_ADCRS2_POSITION                   equ 0006h
ADCON2_ADCRS2_SIZE                       equ 0001h
ADCON2_ADCRS2_LENGTH                     equ 0001h
ADCON2_ADCRS2_MASK                       equ 0040h

// Register: ADCON3
#define ADCON3 ADCON3
ADCON3                                   equ 0F5Bh
// bitfield definitions
ADCON3_ADTMD_POSN                        equ 0000h
ADCON3_ADTMD_POSITION                    equ 0000h
ADCON3_ADTMD_SIZE                        equ 0003h
ADCON3_ADTMD_LENGTH                      equ 0003h
ADCON3_ADTMD_MASK                        equ 0007h
ADCON3_ADSOI_POSN                        equ 0003h
ADCON3_ADSOI_POSITION                    equ 0003h
ADCON3_ADSOI_SIZE                        equ 0001h
ADCON3_ADSOI_LENGTH                      equ 0001h
ADCON3_ADSOI_MASK                        equ 0008h
ADCON3_ADCALC_POSN                       equ 0004h
ADCON3_ADCALC_POSITION                   equ 0004h
ADCON3_ADCALC_SIZE                       equ 0003h
ADCON3_ADCALC_LENGTH                     equ 0003h
ADCON3_ADCALC_MASK                       equ 0070h
ADCON3_ADTMD0_POSN                       equ 0000h
ADCON3_ADTMD0_POSITION                   equ 0000h
ADCON3_ADTMD0_SIZE                       equ 0001h
ADCON3_ADTMD0_LENGTH                     equ 0001h
ADCON3_ADTMD0_MASK                       equ 0001h
ADCON3_ADTMD1_POSN                       equ 0001h
ADCON3_ADTMD1_POSITION                   equ 0001h
ADCON3_ADTMD1_SIZE                       equ 0001h
ADCON3_ADTMD1_LENGTH                     equ 0001h
ADCON3_ADTMD1_MASK                       equ 0002h
ADCON3_ADTMD2_POSN                       equ 0002h
ADCON3_ADTMD2_POSITION                   equ 0002h
ADCON3_ADTMD2_SIZE                       equ 0001h
ADCON3_ADTMD2_LENGTH                     equ 0001h
ADCON3_ADTMD2_MASK                       equ 0004h
ADCON3_ADCALC0_POSN                      equ 0004h
ADCON3_ADCALC0_POSITION                  equ 0004h
ADCON3_ADCALC0_SIZE                      equ 0001h
ADCON3_ADCALC0_LENGTH                    equ 0001h
ADCON3_ADCALC0_MASK                      equ 0010h
ADCON3_ADCALC1_POSN                      equ 0005h
ADCON3_ADCALC1_POSITION                  equ 0005h
ADCON3_ADCALC1_SIZE                      equ 0001h
ADCON3_ADCALC1_LENGTH                    equ 0001h
ADCON3_ADCALC1_MASK                      equ 0020h
ADCON3_ADCALC2_POSN                      equ 0006h
ADCON3_ADCALC2_POSITION                  equ 0006h
ADCON3_ADCALC2_SIZE                      equ 0001h
ADCON3_ADCALC2_LENGTH                    equ 0001h
ADCON3_ADCALC2_MASK                      equ 0040h

// Register: ADACQ
#define ADACQ ADACQ
ADACQ                                    equ 0F5Ch
// bitfield definitions
ADACQ_ADACQ_POSN                         equ 0000h
ADACQ_ADACQ_POSITION                     equ 0000h
ADACQ_ADACQ_SIZE                         equ 0008h
ADACQ_ADACQ_LENGTH                       equ 0008h
ADACQ_ADACQ_MASK                         equ 00FFh
ADACQ_ADACQ0_POSN                        equ 0000h
ADACQ_ADACQ0_POSITION                    equ 0000h
ADACQ_ADACQ0_SIZE                        equ 0001h
ADACQ_ADACQ0_LENGTH                      equ 0001h
ADACQ_ADACQ0_MASK                        equ 0001h
ADACQ_ADACQ1_POSN                        equ 0001h
ADACQ_ADACQ1_POSITION                    equ 0001h
ADACQ_ADACQ1_SIZE                        equ 0001h
ADACQ_ADACQ1_LENGTH                      equ 0001h
ADACQ_ADACQ1_MASK                        equ 0002h
ADACQ_ADACQ2_POSN                        equ 0002h
ADACQ_ADACQ2_POSITION                    equ 0002h
ADACQ_ADACQ2_SIZE                        equ 0001h
ADACQ_ADACQ2_LENGTH                      equ 0001h
ADACQ_ADACQ2_MASK                        equ 0004h
ADACQ_ADACQ3_POSN                        equ 0003h
ADACQ_ADACQ3_POSITION                    equ 0003h
ADACQ_ADACQ3_SIZE                        equ 0001h
ADACQ_ADACQ3_LENGTH                      equ 0001h
ADACQ_ADACQ3_MASK                        equ 0008h
ADACQ_ADACQ4_POSN                        equ 0004h
ADACQ_ADACQ4_POSITION                    equ 0004h
ADACQ_ADACQ4_SIZE                        equ 0001h
ADACQ_ADACQ4_LENGTH                      equ 0001h
ADACQ_ADACQ4_MASK                        equ 0010h
ADACQ_ADACQ5_POSN                        equ 0005h
ADACQ_ADACQ5_POSITION                    equ 0005h
ADACQ_ADACQ5_SIZE                        equ 0001h
ADACQ_ADACQ5_LENGTH                      equ 0001h
ADACQ_ADACQ5_MASK                        equ 0020h
ADACQ_ADACQ6_POSN                        equ 0006h
ADACQ_ADACQ6_POSITION                    equ 0006h
ADACQ_ADACQ6_SIZE                        equ 0001h
ADACQ_ADACQ6_LENGTH                      equ 0001h
ADACQ_ADACQ6_MASK                        equ 0040h
ADACQ_ADACQ7_POSN                        equ 0007h
ADACQ_ADACQ7_POSITION                    equ 0007h
ADACQ_ADACQ7_SIZE                        equ 0001h
ADACQ_ADACQ7_LENGTH                      equ 0001h
ADACQ_ADACQ7_MASK                        equ 0080h

// Register: ADCAP
#define ADCAP ADCAP
ADCAP                                    equ 0F5Dh
// bitfield definitions
ADCAP_ADCAP_POSN                         equ 0000h
ADCAP_ADCAP_POSITION                     equ 0000h
ADCAP_ADCAP_SIZE                         equ 0005h
ADCAP_ADCAP_LENGTH                       equ 0005h
ADCAP_ADCAP_MASK                         equ 001Fh
ADCAP_ADCAP0_POSN                        equ 0000h
ADCAP_ADCAP0_POSITION                    equ 0000h
ADCAP_ADCAP0_SIZE                        equ 0001h
ADCAP_ADCAP0_LENGTH                      equ 0001h
ADCAP_ADCAP0_MASK                        equ 0001h
ADCAP_ADCAP1_POSN                        equ 0001h
ADCAP_ADCAP1_POSITION                    equ 0001h
ADCAP_ADCAP1_SIZE                        equ 0001h
ADCAP_ADCAP1_LENGTH                      equ 0001h
ADCAP_ADCAP1_MASK                        equ 0002h
ADCAP_ADCAP2_POSN                        equ 0002h
ADCAP_ADCAP2_POSITION                    equ 0002h
ADCAP_ADCAP2_SIZE                        equ 0001h
ADCAP_ADCAP2_LENGTH                      equ 0001h
ADCAP_ADCAP2_MASK                        equ 0004h
ADCAP_ADCAP3_POSN                        equ 0003h
ADCAP_ADCAP3_POSITION                    equ 0003h
ADCAP_ADCAP3_SIZE                        equ 0001h
ADCAP_ADCAP3_LENGTH                      equ 0001h
ADCAP_ADCAP3_MASK                        equ 0008h
ADCAP_ADCAP4_POSN                        equ 0004h
ADCAP_ADCAP4_POSITION                    equ 0004h
ADCAP_ADCAP4_SIZE                        equ 0001h
ADCAP_ADCAP4_LENGTH                      equ 0001h
ADCAP_ADCAP4_MASK                        equ 0010h

// Register: ADPRE
#define ADPRE ADPRE
ADPRE                                    equ 0F5Eh
// bitfield definitions
ADPRE_ADPRE_POSN                         equ 0000h
ADPRE_ADPRE_POSITION                     equ 0000h
ADPRE_ADPRE_SIZE                         equ 0008h
ADPRE_ADPRE_LENGTH                       equ 0008h
ADPRE_ADPRE_MASK                         equ 00FFh
ADPRE_ADPRE0_POSN                        equ 0000h
ADPRE_ADPRE0_POSITION                    equ 0000h
ADPRE_ADPRE0_SIZE                        equ 0001h
ADPRE_ADPRE0_LENGTH                      equ 0001h
ADPRE_ADPRE0_MASK                        equ 0001h
ADPRE_ADPRE1_POSN                        equ 0001h
ADPRE_ADPRE1_POSITION                    equ 0001h
ADPRE_ADPRE1_SIZE                        equ 0001h
ADPRE_ADPRE1_LENGTH                      equ 0001h
ADPRE_ADPRE1_MASK                        equ 0002h
ADPRE_ADPRE2_POSN                        equ 0002h
ADPRE_ADPRE2_POSITION                    equ 0002h
ADPRE_ADPRE2_SIZE                        equ 0001h
ADPRE_ADPRE2_LENGTH                      equ 0001h
ADPRE_ADPRE2_MASK                        equ 0004h
ADPRE_ADPRE3_POSN                        equ 0003h
ADPRE_ADPRE3_POSITION                    equ 0003h
ADPRE_ADPRE3_SIZE                        equ 0001h
ADPRE_ADPRE3_LENGTH                      equ 0001h
ADPRE_ADPRE3_MASK                        equ 0008h
ADPRE_ADPRE4_POSN                        equ 0004h
ADPRE_ADPRE4_POSITION                    equ 0004h
ADPRE_ADPRE4_SIZE                        equ 0001h
ADPRE_ADPRE4_LENGTH                      equ 0001h
ADPRE_ADPRE4_MASK                        equ 0010h
ADPRE_ADPRE5_POSN                        equ 0005h
ADPRE_ADPRE5_POSITION                    equ 0005h
ADPRE_ADPRE5_SIZE                        equ 0001h
ADPRE_ADPRE5_LENGTH                      equ 0001h
ADPRE_ADPRE5_MASK                        equ 0020h
ADPRE_ADPRE6_POSN                        equ 0006h
ADPRE_ADPRE6_POSITION                    equ 0006h
ADPRE_ADPRE6_SIZE                        equ 0001h
ADPRE_ADPRE6_LENGTH                      equ 0001h
ADPRE_ADPRE6_MASK                        equ 0040h
ADPRE_ADPRE7_POSN                        equ 0007h
ADPRE_ADPRE7_POSITION                    equ 0007h
ADPRE_ADPRE7_SIZE                        equ 0001h
ADPRE_ADPRE7_LENGTH                      equ 0001h
ADPRE_ADPRE7_MASK                        equ 0080h

// Register: ADPCH
#define ADPCH ADPCH
ADPCH                                    equ 0F5Fh
// bitfield definitions
ADPCH_ADPCH_POSN                         equ 0000h
ADPCH_ADPCH_POSITION                     equ 0000h
ADPCH_ADPCH_SIZE                         equ 0006h
ADPCH_ADPCH_LENGTH                       equ 0006h
ADPCH_ADPCH_MASK                         equ 003Fh
ADPCH_ADPCH0_POSN                        equ 0000h
ADPCH_ADPCH0_POSITION                    equ 0000h
ADPCH_ADPCH0_SIZE                        equ 0001h
ADPCH_ADPCH0_LENGTH                      equ 0001h
ADPCH_ADPCH0_MASK                        equ 0001h
ADPCH_ADPCH1_POSN                        equ 0001h
ADPCH_ADPCH1_POSITION                    equ 0001h
ADPCH_ADPCH1_SIZE                        equ 0001h
ADPCH_ADPCH1_LENGTH                      equ 0001h
ADPCH_ADPCH1_MASK                        equ 0002h
ADPCH_ADPCH2_POSN                        equ 0002h
ADPCH_ADPCH2_POSITION                    equ 0002h
ADPCH_ADPCH2_SIZE                        equ 0001h
ADPCH_ADPCH2_LENGTH                      equ 0001h
ADPCH_ADPCH2_MASK                        equ 0004h
ADPCH_ADPCH3_POSN                        equ 0003h
ADPCH_ADPCH3_POSITION                    equ 0003h
ADPCH_ADPCH3_SIZE                        equ 0001h
ADPCH_ADPCH3_LENGTH                      equ 0001h
ADPCH_ADPCH3_MASK                        equ 0008h
ADPCH_ADPCH4_POSN                        equ 0004h
ADPCH_ADPCH4_POSITION                    equ 0004h
ADPCH_ADPCH4_SIZE                        equ 0001h
ADPCH_ADPCH4_LENGTH                      equ 0001h
ADPCH_ADPCH4_MASK                        equ 0010h
ADPCH_ADPCH5_POSN                        equ 0005h
ADPCH_ADPCH5_POSITION                    equ 0005h
ADPCH_ADPCH5_SIZE                        equ 0001h
ADPCH_ADPCH5_LENGTH                      equ 0001h
ADPCH_ADPCH5_MASK                        equ 0020h

// Register: ADCON0
#define ADCON0 ADCON0
ADCON0                                   equ 0F60h
// bitfield definitions
ADCON0_ADGO_POSN                         equ 0000h
ADCON0_ADGO_POSITION                     equ 0000h
ADCON0_ADGO_SIZE                         equ 0001h
ADCON0_ADGO_LENGTH                       equ 0001h
ADCON0_ADGO_MASK                         equ 0001h
ADCON0_ADFM_POSN                         equ 0002h
ADCON0_ADFM_POSITION                     equ 0002h
ADCON0_ADFM_SIZE                         equ 0001h
ADCON0_ADFM_LENGTH                       equ 0001h
ADCON0_ADFM_MASK                         equ 0004h
ADCON0_ADCS_POSN                         equ 0004h
ADCON0_ADCS_POSITION                     equ 0004h
ADCON0_ADCS_SIZE                         equ 0001h
ADCON0_ADCS_LENGTH                       equ 0001h
ADCON0_ADCS_MASK                         equ 0010h
ADCON0_ADCONT_POSN                       equ 0006h
ADCON0_ADCONT_POSITION                   equ 0006h
ADCON0_ADCONT_SIZE                       equ 0001h
ADCON0_ADCONT_LENGTH                     equ 0001h
ADCON0_ADCONT_MASK                       equ 0040h
ADCON0_ADON_POSN                         equ 0007h
ADCON0_ADON_POSITION                     equ 0007h
ADCON0_ADON_SIZE                         equ 0001h
ADCON0_ADON_LENGTH                       equ 0001h
ADCON0_ADON_MASK                         equ 0080h
ADCON0_GO_POSN                           equ 0000h
ADCON0_GO_POSITION                       equ 0000h
ADCON0_GO_SIZE                           equ 0001h
ADCON0_GO_LENGTH                         equ 0001h
ADCON0_GO_MASK                           equ 0001h
ADCON0_ADFM0_POSN                        equ 0002h
ADCON0_ADFM0_POSITION                    equ 0002h
ADCON0_ADFM0_SIZE                        equ 0001h
ADCON0_ADFM0_LENGTH                      equ 0001h
ADCON0_ADFM0_MASK                        equ 0004h
ADCON0_DONE_POSN                         equ 0000h
ADCON0_DONE_POSITION                     equ 0000h
ADCON0_DONE_SIZE                         equ 0001h
ADCON0_DONE_LENGTH                       equ 0001h
ADCON0_DONE_MASK                         equ 0001h
ADCON0_GO_NOT_DONE_POSN                  equ 0000h
ADCON0_GO_NOT_DONE_POSITION              equ 0000h
ADCON0_GO_NOT_DONE_SIZE                  equ 0001h
ADCON0_GO_NOT_DONE_LENGTH                equ 0001h
ADCON0_GO_NOT_DONE_MASK                  equ 0001h
ADCON0_GO_nDONE_POSN                     equ 0000h
ADCON0_GO_nDONE_POSITION                 equ 0000h
ADCON0_GO_nDONE_SIZE                     equ 0001h
ADCON0_GO_nDONE_LENGTH                   equ 0001h
ADCON0_GO_nDONE_MASK                     equ 0001h
ADCON0_ADCAL_POSN                        equ 0007h
ADCON0_ADCAL_POSITION                    equ 0007h
ADCON0_ADCAL_SIZE                        equ 0001h
ADCON0_ADCAL_LENGTH                      equ 0001h
ADCON0_ADCAL_MASK                        equ 0080h

// Register: ADPREV
#define ADPREV ADPREV
ADPREV                                   equ 0F61h

// Register: ADPREVL
#define ADPREVL ADPREVL
ADPREVL                                  equ 0F61h
// bitfield definitions
ADPREVL_ADPREVL_POSN                     equ 0000h
ADPREVL_ADPREVL_POSITION                 equ 0000h
ADPREVL_ADPREVL_SIZE                     equ 0008h
ADPREVL_ADPREVL_LENGTH                   equ 0008h
ADPREVL_ADPREVL_MASK                     equ 00FFh
ADPREVL_ADPREV0_POSN                     equ 0000h
ADPREVL_ADPREV0_POSITION                 equ 0000h
ADPREVL_ADPREV0_SIZE                     equ 0001h
ADPREVL_ADPREV0_LENGTH                   equ 0001h
ADPREVL_ADPREV0_MASK                     equ 0001h
ADPREVL_ADPREV1_POSN                     equ 0001h
ADPREVL_ADPREV1_POSITION                 equ 0001h
ADPREVL_ADPREV1_SIZE                     equ 0001h
ADPREVL_ADPREV1_LENGTH                   equ 0001h
ADPREVL_ADPREV1_MASK                     equ 0002h
ADPREVL_ADPREV2_POSN                     equ 0002h
ADPREVL_ADPREV2_POSITION                 equ 0002h
ADPREVL_ADPREV2_SIZE                     equ 0001h
ADPREVL_ADPREV2_LENGTH                   equ 0001h
ADPREVL_ADPREV2_MASK                     equ 0004h
ADPREVL_ADPREV3_POSN                     equ 0003h
ADPREVL_ADPREV3_POSITION                 equ 0003h
ADPREVL_ADPREV3_SIZE                     equ 0001h
ADPREVL_ADPREV3_LENGTH                   equ 0001h
ADPREVL_ADPREV3_MASK                     equ 0008h
ADPREVL_ADPREV4_POSN                     equ 0004h
ADPREVL_ADPREV4_POSITION                 equ 0004h
ADPREVL_ADPREV4_SIZE                     equ 0001h
ADPREVL_ADPREV4_LENGTH                   equ 0001h
ADPREVL_ADPREV4_MASK                     equ 0010h
ADPREVL_ADPREV5_POSN                     equ 0005h
ADPREVL_ADPREV5_POSITION                 equ 0005h
ADPREVL_ADPREV5_SIZE                     equ 0001h
ADPREVL_ADPREV5_LENGTH                   equ 0001h
ADPREVL_ADPREV5_MASK                     equ 0020h
ADPREVL_ADPREV6_POSN                     equ 0006h
ADPREVL_ADPREV6_POSITION                 equ 0006h
ADPREVL_ADPREV6_SIZE                     equ 0001h
ADPREVL_ADPREV6_LENGTH                   equ 0001h
ADPREVL_ADPREV6_MASK                     equ 0040h
ADPREVL_ADPREV7_POSN                     equ 0007h
ADPREVL_ADPREV7_POSITION                 equ 0007h
ADPREVL_ADPREV7_SIZE                     equ 0001h
ADPREVL_ADPREV7_LENGTH                   equ 0001h
ADPREVL_ADPREV7_MASK                     equ 0080h

// Register: ADPREVH
#define ADPREVH ADPREVH
ADPREVH                                  equ 0F62h
// bitfield definitions
ADPREVH_ADPREVH_POSN                     equ 0000h
ADPREVH_ADPREVH_POSITION                 equ 0000h
ADPREVH_ADPREVH_SIZE                     equ 0008h
ADPREVH_ADPREVH_LENGTH                   equ 0008h
ADPREVH_ADPREVH_MASK                     equ 00FFh
ADPREVH_ADPREV8_POSN                     equ 0000h
ADPREVH_ADPREV8_POSITION                 equ 0000h
ADPREVH_ADPREV8_SIZE                     equ 0001h
ADPREVH_ADPREV8_LENGTH                   equ 0001h
ADPREVH_ADPREV8_MASK                     equ 0001h
ADPREVH_ADPREV9_POSN                     equ 0001h
ADPREVH_ADPREV9_POSITION                 equ 0001h
ADPREVH_ADPREV9_SIZE                     equ 0001h
ADPREVH_ADPREV9_LENGTH                   equ 0001h
ADPREVH_ADPREV9_MASK                     equ 0002h
ADPREVH_ADPREV10_POSN                    equ 0002h
ADPREVH_ADPREV10_POSITION                equ 0002h
ADPREVH_ADPREV10_SIZE                    equ 0001h
ADPREVH_ADPREV10_LENGTH                  equ 0001h
ADPREVH_ADPREV10_MASK                    equ 0004h
ADPREVH_ADPREV11_POSN                    equ 0003h
ADPREVH_ADPREV11_POSITION                equ 0003h
ADPREVH_ADPREV11_SIZE                    equ 0001h
ADPREVH_ADPREV11_LENGTH                  equ 0001h
ADPREVH_ADPREV11_MASK                    equ 0008h
ADPREVH_ADPREV12_POSN                    equ 0004h
ADPREVH_ADPREV12_POSITION                equ 0004h
ADPREVH_ADPREV12_SIZE                    equ 0001h
ADPREVH_ADPREV12_LENGTH                  equ 0001h
ADPREVH_ADPREV12_MASK                    equ 0010h
ADPREVH_ADPREV13_POSN                    equ 0005h
ADPREVH_ADPREV13_POSITION                equ 0005h
ADPREVH_ADPREV13_SIZE                    equ 0001h
ADPREVH_ADPREV13_LENGTH                  equ 0001h
ADPREVH_ADPREV13_MASK                    equ 0020h
ADPREVH_ADPREV14_POSN                    equ 0006h
ADPREVH_ADPREV14_POSITION                equ 0006h
ADPREVH_ADPREV14_SIZE                    equ 0001h
ADPREVH_ADPREV14_LENGTH                  equ 0001h
ADPREVH_ADPREV14_MASK                    equ 0040h
ADPREVH_ADPREV15_POSN                    equ 0007h
ADPREVH_ADPREV15_POSITION                equ 0007h
ADPREVH_ADPREV15_SIZE                    equ 0001h
ADPREVH_ADPREV15_LENGTH                  equ 0001h
ADPREVH_ADPREV15_MASK                    equ 0080h

// Register: ADRES
#define ADRES ADRES
ADRES                                    equ 0F63h

// Register: ADRESL
#define ADRESL ADRESL
ADRESL                                   equ 0F63h
// bitfield definitions
ADRESL_ADRESL_POSN                       equ 0000h
ADRESL_ADRESL_POSITION                   equ 0000h
ADRESL_ADRESL_SIZE                       equ 0008h
ADRESL_ADRESL_LENGTH                     equ 0008h
ADRESL_ADRESL_MASK                       equ 00FFh
ADRESL_ADRES0_POSN                       equ 0000h
ADRESL_ADRES0_POSITION                   equ 0000h
ADRESL_ADRES0_SIZE                       equ 0001h
ADRESL_ADRES0_LENGTH                     equ 0001h
ADRESL_ADRES0_MASK                       equ 0001h
ADRESL_ADRES1_POSN                       equ 0001h
ADRESL_ADRES1_POSITION                   equ 0001h
ADRESL_ADRES1_SIZE                       equ 0001h
ADRESL_ADRES1_LENGTH                     equ 0001h
ADRESL_ADRES1_MASK                       equ 0002h
ADRESL_ADRES2_POSN                       equ 0002h
ADRESL_ADRES2_POSITION                   equ 0002h
ADRESL_ADRES2_SIZE                       equ 0001h
ADRESL_ADRES2_LENGTH                     equ 0001h
ADRESL_ADRES2_MASK                       equ 0004h
ADRESL_ADRES3_POSN                       equ 0003h
ADRESL_ADRES3_POSITION                   equ 0003h
ADRESL_ADRES3_SIZE                       equ 0001h
ADRESL_ADRES3_LENGTH                     equ 0001h
ADRESL_ADRES3_MASK                       equ 0008h
ADRESL_ADRES4_POSN                       equ 0004h
ADRESL_ADRES4_POSITION                   equ 0004h
ADRESL_ADRES4_SIZE                       equ 0001h
ADRESL_ADRES4_LENGTH                     equ 0001h
ADRESL_ADRES4_MASK                       equ 0010h
ADRESL_ADRES5_POSN                       equ 0005h
ADRESL_ADRES5_POSITION                   equ 0005h
ADRESL_ADRES5_SIZE                       equ 0001h
ADRESL_ADRES5_LENGTH                     equ 0001h
ADRESL_ADRES5_MASK                       equ 0020h
ADRESL_ADRES6_POSN                       equ 0006h
ADRESL_ADRES6_POSITION                   equ 0006h
ADRESL_ADRES6_SIZE                       equ 0001h
ADRESL_ADRES6_LENGTH                     equ 0001h
ADRESL_ADRES6_MASK                       equ 0040h
ADRESL_ADRES7_POSN                       equ 0007h
ADRESL_ADRES7_POSITION                   equ 0007h
ADRESL_ADRES7_SIZE                       equ 0001h
ADRESL_ADRES7_LENGTH                     equ 0001h
ADRESL_ADRES7_MASK                       equ 0080h

// Register: ADRESH
#define ADRESH ADRESH
ADRESH                                   equ 0F64h
// bitfield definitions
ADRESH_ADRES8_POSN                       equ 0000h
ADRESH_ADRES8_POSITION                   equ 0000h
ADRESH_ADRES8_SIZE                       equ 0001h
ADRESH_ADRES8_LENGTH                     equ 0001h
ADRESH_ADRES8_MASK                       equ 0001h
ADRESH_ADRES9_POSN                       equ 0001h
ADRESH_ADRES9_POSITION                   equ 0001h
ADRESH_ADRES9_SIZE                       equ 0001h
ADRESH_ADRES9_LENGTH                     equ 0001h
ADRESH_ADRES9_MASK                       equ 0002h
ADRESH_ADRES10_POSN                      equ 0002h
ADRESH_ADRES10_POSITION                  equ 0002h
ADRESH_ADRES10_SIZE                      equ 0001h
ADRESH_ADRES10_LENGTH                    equ 0001h
ADRESH_ADRES10_MASK                      equ 0004h
ADRESH_ADRES11_POSN                      equ 0003h
ADRESH_ADRES11_POSITION                  equ 0003h
ADRESH_ADRES11_SIZE                      equ 0001h
ADRESH_ADRES11_LENGTH                    equ 0001h
ADRESH_ADRES11_MASK                      equ 0008h
ADRESH_ADRES12_POSN                      equ 0004h
ADRESH_ADRES12_POSITION                  equ 0004h
ADRESH_ADRES12_SIZE                      equ 0001h
ADRESH_ADRES12_LENGTH                    equ 0001h
ADRESH_ADRES12_MASK                      equ 0010h
ADRESH_ADRES13_POSN                      equ 0005h
ADRESH_ADRES13_POSITION                  equ 0005h
ADRESH_ADRES13_SIZE                      equ 0001h
ADRESH_ADRES13_LENGTH                    equ 0001h
ADRESH_ADRES13_MASK                      equ 0020h
ADRESH_ADRES14_POSN                      equ 0006h
ADRESH_ADRES14_POSITION                  equ 0006h
ADRESH_ADRES14_SIZE                      equ 0001h
ADRESH_ADRES14_LENGTH                    equ 0001h
ADRESH_ADRES14_MASK                      equ 0040h
ADRESH_ADRES15_POSN                      equ 0007h
ADRESH_ADRES15_POSITION                  equ 0007h
ADRESH_ADRES15_SIZE                      equ 0001h
ADRESH_ADRES15_LENGTH                    equ 0001h
ADRESH_ADRES15_MASK                      equ 0080h

// Register: ADSTAT
#define ADSTAT ADSTAT
ADSTAT                                   equ 0F65h
// bitfield definitions
ADSTAT_ADSTAT_POSN                       equ 0000h
ADSTAT_ADSTAT_POSITION                   equ 0000h
ADSTAT_ADSTAT_SIZE                       equ 0003h
ADSTAT_ADSTAT_LENGTH                     equ 0003h
ADSTAT_ADSTAT_MASK                       equ 0007h
ADSTAT_ADMATH_POSN                       equ 0004h
ADSTAT_ADMATH_POSITION                   equ 0004h
ADSTAT_ADMATH_SIZE                       equ 0001h
ADSTAT_ADMATH_LENGTH                     equ 0001h
ADSTAT_ADMATH_MASK                       equ 0010h
ADSTAT_ADLTHR_POSN                       equ 0005h
ADSTAT_ADLTHR_POSITION                   equ 0005h
ADSTAT_ADLTHR_SIZE                       equ 0001h
ADSTAT_ADLTHR_LENGTH                     equ 0001h
ADSTAT_ADLTHR_MASK                       equ 0020h
ADSTAT_ADUTHR_POSN                       equ 0006h
ADSTAT_ADUTHR_POSITION                   equ 0006h
ADSTAT_ADUTHR_SIZE                       equ 0001h
ADSTAT_ADUTHR_LENGTH                     equ 0001h
ADSTAT_ADUTHR_MASK                       equ 0040h
ADSTAT_ADAOV_POSN                        equ 0007h
ADSTAT_ADAOV_POSITION                    equ 0007h
ADSTAT_ADAOV_SIZE                        equ 0001h
ADSTAT_ADAOV_LENGTH                      equ 0001h
ADSTAT_ADAOV_MASK                        equ 0080h
ADSTAT_ADSTAT0_POSN                      equ 0000h
ADSTAT_ADSTAT0_POSITION                  equ 0000h
ADSTAT_ADSTAT0_SIZE                      equ 0001h
ADSTAT_ADSTAT0_LENGTH                    equ 0001h
ADSTAT_ADSTAT0_MASK                      equ 0001h
ADSTAT_ADSTAT1_POSN                      equ 0001h
ADSTAT_ADSTAT1_POSITION                  equ 0001h
ADSTAT_ADSTAT1_SIZE                      equ 0001h
ADSTAT_ADSTAT1_LENGTH                    equ 0001h
ADSTAT_ADSTAT1_MASK                      equ 0002h
ADSTAT_ADSTAT2_POSN                      equ 0002h
ADSTAT_ADSTAT2_POSITION                  equ 0002h
ADSTAT_ADSTAT2_SIZE                      equ 0001h
ADSTAT_ADSTAT2_LENGTH                    equ 0001h
ADSTAT_ADSTAT2_MASK                      equ 0004h

// Register: ADRPT
#define ADRPT ADRPT
ADRPT                                    equ 0F66h
// bitfield definitions
ADRPT_ADRPT_POSN                         equ 0000h
ADRPT_ADRPT_POSITION                     equ 0000h
ADRPT_ADRPT_SIZE                         equ 0008h
ADRPT_ADRPT_LENGTH                       equ 0008h
ADRPT_ADRPT_MASK                         equ 00FFh
ADRPT_ADRPT0_POSN                        equ 0000h
ADRPT_ADRPT0_POSITION                    equ 0000h
ADRPT_ADRPT0_SIZE                        equ 0001h
ADRPT_ADRPT0_LENGTH                      equ 0001h
ADRPT_ADRPT0_MASK                        equ 0001h
ADRPT_ADRPT1_POSN                        equ 0001h
ADRPT_ADRPT1_POSITION                    equ 0001h
ADRPT_ADRPT1_SIZE                        equ 0001h
ADRPT_ADRPT1_LENGTH                      equ 0001h
ADRPT_ADRPT1_MASK                        equ 0002h
ADRPT_ADRPT2_POSN                        equ 0002h
ADRPT_ADRPT2_POSITION                    equ 0002h
ADRPT_ADRPT2_SIZE                        equ 0001h
ADRPT_ADRPT2_LENGTH                      equ 0001h
ADRPT_ADRPT2_MASK                        equ 0004h
ADRPT_ADRPT3_POSN                        equ 0003h
ADRPT_ADRPT3_POSITION                    equ 0003h
ADRPT_ADRPT3_SIZE                        equ 0001h
ADRPT_ADRPT3_LENGTH                      equ 0001h
ADRPT_ADRPT3_MASK                        equ 0008h
ADRPT_ADRPT4_POSN                        equ 0004h
ADRPT_ADRPT4_POSITION                    equ 0004h
ADRPT_ADRPT4_SIZE                        equ 0001h
ADRPT_ADRPT4_LENGTH                      equ 0001h
ADRPT_ADRPT4_MASK                        equ 0010h
ADRPT_ADRPT5_POSN                        equ 0005h
ADRPT_ADRPT5_POSITION                    equ 0005h
ADRPT_ADRPT5_SIZE                        equ 0001h
ADRPT_ADRPT5_LENGTH                      equ 0001h
ADRPT_ADRPT5_MASK                        equ 0020h
ADRPT_ADRPT6_POSN                        equ 0006h
ADRPT_ADRPT6_POSITION                    equ 0006h
ADRPT_ADRPT6_SIZE                        equ 0001h
ADRPT_ADRPT6_LENGTH                      equ 0001h
ADRPT_ADRPT6_MASK                        equ 0040h
ADRPT_ADRPT7_POSN                        equ 0007h
ADRPT_ADRPT7_POSITION                    equ 0007h
ADRPT_ADRPT7_SIZE                        equ 0001h
ADRPT_ADRPT7_LENGTH                      equ 0001h
ADRPT_ADRPT7_MASK                        equ 0080h

// Register: ADCNT
#define ADCNT ADCNT
ADCNT                                    equ 0F67h
// bitfield definitions
ADCNT_ADCNT_POSN                         equ 0000h
ADCNT_ADCNT_POSITION                     equ 0000h
ADCNT_ADCNT_SIZE                         equ 0008h
ADCNT_ADCNT_LENGTH                       equ 0008h
ADCNT_ADCNT_MASK                         equ 00FFh
ADCNT_ADCNT0_POSN                        equ 0000h
ADCNT_ADCNT0_POSITION                    equ 0000h
ADCNT_ADCNT0_SIZE                        equ 0001h
ADCNT_ADCNT0_LENGTH                      equ 0001h
ADCNT_ADCNT0_MASK                        equ 0001h
ADCNT_ADCNT1_POSN                        equ 0001h
ADCNT_ADCNT1_POSITION                    equ 0001h
ADCNT_ADCNT1_SIZE                        equ 0001h
ADCNT_ADCNT1_LENGTH                      equ 0001h
ADCNT_ADCNT1_MASK                        equ 0002h
ADCNT_ADCNT2_POSN                        equ 0002h
ADCNT_ADCNT2_POSITION                    equ 0002h
ADCNT_ADCNT2_SIZE                        equ 0001h
ADCNT_ADCNT2_LENGTH                      equ 0001h
ADCNT_ADCNT2_MASK                        equ 0004h
ADCNT_ADCNT3_POSN                        equ 0003h
ADCNT_ADCNT3_POSITION                    equ 0003h
ADCNT_ADCNT3_SIZE                        equ 0001h
ADCNT_ADCNT3_LENGTH                      equ 0001h
ADCNT_ADCNT3_MASK                        equ 0008h
ADCNT_ADCNT4_POSN                        equ 0004h
ADCNT_ADCNT4_POSITION                    equ 0004h
ADCNT_ADCNT4_SIZE                        equ 0001h
ADCNT_ADCNT4_LENGTH                      equ 0001h
ADCNT_ADCNT4_MASK                        equ 0010h
ADCNT_ADCNT5_POSN                        equ 0005h
ADCNT_ADCNT5_POSITION                    equ 0005h
ADCNT_ADCNT5_SIZE                        equ 0001h
ADCNT_ADCNT5_LENGTH                      equ 0001h
ADCNT_ADCNT5_MASK                        equ 0020h
ADCNT_ADCNT6_POSN                        equ 0006h
ADCNT_ADCNT6_POSITION                    equ 0006h
ADCNT_ADCNT6_SIZE                        equ 0001h
ADCNT_ADCNT6_LENGTH                      equ 0001h
ADCNT_ADCNT6_MASK                        equ 0040h
ADCNT_ADCNT7_POSN                        equ 0007h
ADCNT_ADCNT7_POSITION                    equ 0007h
ADCNT_ADCNT7_SIZE                        equ 0001h
ADCNT_ADCNT7_LENGTH                      equ 0001h
ADCNT_ADCNT7_MASK                        equ 0080h

// Register: ADSTPT
#define ADSTPT ADSTPT
ADSTPT                                   equ 0F68h

// Register: ADSTPTL
#define ADSTPTL ADSTPTL
ADSTPTL                                  equ 0F68h
// bitfield definitions
ADSTPTL_ADSTPTL_POSN                     equ 0000h
ADSTPTL_ADSTPTL_POSITION                 equ 0000h
ADSTPTL_ADSTPTL_SIZE                     equ 0008h
ADSTPTL_ADSTPTL_LENGTH                   equ 0008h
ADSTPTL_ADSTPTL_MASK                     equ 00FFh
ADSTPTL_ADSTPT0_POSN                     equ 0000h
ADSTPTL_ADSTPT0_POSITION                 equ 0000h
ADSTPTL_ADSTPT0_SIZE                     equ 0001h
ADSTPTL_ADSTPT0_LENGTH                   equ 0001h
ADSTPTL_ADSTPT0_MASK                     equ 0001h
ADSTPTL_ADSTPT1_POSN                     equ 0001h
ADSTPTL_ADSTPT1_POSITION                 equ 0001h
ADSTPTL_ADSTPT1_SIZE                     equ 0001h
ADSTPTL_ADSTPT1_LENGTH                   equ 0001h
ADSTPTL_ADSTPT1_MASK                     equ 0002h
ADSTPTL_ADSTPT2_POSN                     equ 0002h
ADSTPTL_ADSTPT2_POSITION                 equ 0002h
ADSTPTL_ADSTPT2_SIZE                     equ 0001h
ADSTPTL_ADSTPT2_LENGTH                   equ 0001h
ADSTPTL_ADSTPT2_MASK                     equ 0004h
ADSTPTL_ADSTPT3_POSN                     equ 0003h
ADSTPTL_ADSTPT3_POSITION                 equ 0003h
ADSTPTL_ADSTPT3_SIZE                     equ 0001h
ADSTPTL_ADSTPT3_LENGTH                   equ 0001h
ADSTPTL_ADSTPT3_MASK                     equ 0008h
ADSTPTL_ADSTPT4_POSN                     equ 0004h
ADSTPTL_ADSTPT4_POSITION                 equ 0004h
ADSTPTL_ADSTPT4_SIZE                     equ 0001h
ADSTPTL_ADSTPT4_LENGTH                   equ 0001h
ADSTPTL_ADSTPT4_MASK                     equ 0010h
ADSTPTL_ADSTPT5_POSN                     equ 0005h
ADSTPTL_ADSTPT5_POSITION                 equ 0005h
ADSTPTL_ADSTPT5_SIZE                     equ 0001h
ADSTPTL_ADSTPT5_LENGTH                   equ 0001h
ADSTPTL_ADSTPT5_MASK                     equ 0020h
ADSTPTL_ADSTPT6_POSN                     equ 0006h
ADSTPTL_ADSTPT6_POSITION                 equ 0006h
ADSTPTL_ADSTPT6_SIZE                     equ 0001h
ADSTPTL_ADSTPT6_LENGTH                   equ 0001h
ADSTPTL_ADSTPT6_MASK                     equ 0040h
ADSTPTL_ADSTPT7_POSN                     equ 0007h
ADSTPTL_ADSTPT7_POSITION                 equ 0007h
ADSTPTL_ADSTPT7_SIZE                     equ 0001h
ADSTPTL_ADSTPT7_LENGTH                   equ 0001h
ADSTPTL_ADSTPT7_MASK                     equ 0080h

// Register: ADSTPTH
#define ADSTPTH ADSTPTH
ADSTPTH                                  equ 0F69h
// bitfield definitions
ADSTPTH_ADSTPTH_POSN                     equ 0000h
ADSTPTH_ADSTPTH_POSITION                 equ 0000h
ADSTPTH_ADSTPTH_SIZE                     equ 0008h
ADSTPTH_ADSTPTH_LENGTH                   equ 0008h
ADSTPTH_ADSTPTH_MASK                     equ 00FFh
ADSTPTH_ADSTPT8_POSN                     equ 0000h
ADSTPTH_ADSTPT8_POSITION                 equ 0000h
ADSTPTH_ADSTPT8_SIZE                     equ 0001h
ADSTPTH_ADSTPT8_LENGTH                   equ 0001h
ADSTPTH_ADSTPT8_MASK                     equ 0001h
ADSTPTH_ADSTPT9_POSN                     equ 0001h
ADSTPTH_ADSTPT9_POSITION                 equ 0001h
ADSTPTH_ADSTPT9_SIZE                     equ 0001h
ADSTPTH_ADSTPT9_LENGTH                   equ 0001h
ADSTPTH_ADSTPT9_MASK                     equ 0002h
ADSTPTH_ADSTPT10_POSN                    equ 0002h
ADSTPTH_ADSTPT10_POSITION                equ 0002h
ADSTPTH_ADSTPT10_SIZE                    equ 0001h
ADSTPTH_ADSTPT10_LENGTH                  equ 0001h
ADSTPTH_ADSTPT10_MASK                    equ 0004h
ADSTPTH_ADSTPT11_POSN                    equ 0003h
ADSTPTH_ADSTPT11_POSITION                equ 0003h
ADSTPTH_ADSTPT11_SIZE                    equ 0001h
ADSTPTH_ADSTPT11_LENGTH                  equ 0001h
ADSTPTH_ADSTPT11_MASK                    equ 0008h
ADSTPTH_ADSTPT12_POSN                    equ 0004h
ADSTPTH_ADSTPT12_POSITION                equ 0004h
ADSTPTH_ADSTPT12_SIZE                    equ 0001h
ADSTPTH_ADSTPT12_LENGTH                  equ 0001h
ADSTPTH_ADSTPT12_MASK                    equ 0010h
ADSTPTH_ADSTPT13_POSN                    equ 0005h
ADSTPTH_ADSTPT13_POSITION                equ 0005h
ADSTPTH_ADSTPT13_SIZE                    equ 0001h
ADSTPTH_ADSTPT13_LENGTH                  equ 0001h
ADSTPTH_ADSTPT13_MASK                    equ 0020h
ADSTPTH_ADSTPT14_POSN                    equ 0006h
ADSTPTH_ADSTPT14_POSITION                equ 0006h
ADSTPTH_ADSTPT14_SIZE                    equ 0001h
ADSTPTH_ADSTPT14_LENGTH                  equ 0001h
ADSTPTH_ADSTPT14_MASK                    equ 0040h
ADSTPTH_ADSTPT15_POSN                    equ 0007h
ADSTPTH_ADSTPT15_POSITION                equ 0007h
ADSTPTH_ADSTPT15_SIZE                    equ 0001h
ADSTPTH_ADSTPT15_LENGTH                  equ 0001h
ADSTPTH_ADSTPT15_MASK                    equ 0080h

// Register: ADLTH
#define ADLTH ADLTH
ADLTH                                    equ 0F6Ah

// Register: ADLTHL
#define ADLTHL ADLTHL
ADLTHL                                   equ 0F6Ah
// bitfield definitions
ADLTHL_ADLTHL_POSN                       equ 0000h
ADLTHL_ADLTHL_POSITION                   equ 0000h
ADLTHL_ADLTHL_SIZE                       equ 0008h
ADLTHL_ADLTHL_LENGTH                     equ 0008h
ADLTHL_ADLTHL_MASK                       equ 00FFh
ADLTHL_ADLTH0_POSN                       equ 0000h
ADLTHL_ADLTH0_POSITION                   equ 0000h
ADLTHL_ADLTH0_SIZE                       equ 0001h
ADLTHL_ADLTH0_LENGTH                     equ 0001h
ADLTHL_ADLTH0_MASK                       equ 0001h
ADLTHL_ADLTH1_POSN                       equ 0001h
ADLTHL_ADLTH1_POSITION                   equ 0001h
ADLTHL_ADLTH1_SIZE                       equ 0001h
ADLTHL_ADLTH1_LENGTH                     equ 0001h
ADLTHL_ADLTH1_MASK                       equ 0002h
ADLTHL_ADLTH2_POSN                       equ 0002h
ADLTHL_ADLTH2_POSITION                   equ 0002h
ADLTHL_ADLTH2_SIZE                       equ 0001h
ADLTHL_ADLTH2_LENGTH                     equ 0001h
ADLTHL_ADLTH2_MASK                       equ 0004h
ADLTHL_ADLTH3_POSN                       equ 0003h
ADLTHL_ADLTH3_POSITION                   equ 0003h
ADLTHL_ADLTH3_SIZE                       equ 0001h
ADLTHL_ADLTH3_LENGTH                     equ 0001h
ADLTHL_ADLTH3_MASK                       equ 0008h
ADLTHL_ADLTH4_POSN                       equ 0004h
ADLTHL_ADLTH4_POSITION                   equ 0004h
ADLTHL_ADLTH4_SIZE                       equ 0001h
ADLTHL_ADLTH4_LENGTH                     equ 0001h
ADLTHL_ADLTH4_MASK                       equ 0010h
ADLTHL_ADLTH5_POSN                       equ 0005h
ADLTHL_ADLTH5_POSITION                   equ 0005h
ADLTHL_ADLTH5_SIZE                       equ 0001h
ADLTHL_ADLTH5_LENGTH                     equ 0001h
ADLTHL_ADLTH5_MASK                       equ 0020h
ADLTHL_ADLTH6_POSN                       equ 0006h
ADLTHL_ADLTH6_POSITION                   equ 0006h
ADLTHL_ADLTH6_SIZE                       equ 0001h
ADLTHL_ADLTH6_LENGTH                     equ 0001h
ADLTHL_ADLTH6_MASK                       equ 0040h
ADLTHL_ADLTH7_POSN                       equ 0007h
ADLTHL_ADLTH7_POSITION                   equ 0007h
ADLTHL_ADLTH7_SIZE                       equ 0001h
ADLTHL_ADLTH7_LENGTH                     equ 0001h
ADLTHL_ADLTH7_MASK                       equ 0080h

// Register: ADLTHH
#define ADLTHH ADLTHH
ADLTHH                                   equ 0F6Bh
// bitfield definitions
ADLTHH_ADLTHH_POSN                       equ 0000h
ADLTHH_ADLTHH_POSITION                   equ 0000h
ADLTHH_ADLTHH_SIZE                       equ 0008h
ADLTHH_ADLTHH_LENGTH                     equ 0008h
ADLTHH_ADLTHH_MASK                       equ 00FFh
ADLTHH_ADLTH8_POSN                       equ 0000h
ADLTHH_ADLTH8_POSITION                   equ 0000h
ADLTHH_ADLTH8_SIZE                       equ 0001h
ADLTHH_ADLTH8_LENGTH                     equ 0001h
ADLTHH_ADLTH8_MASK                       equ 0001h
ADLTHH_ADLTH9_POSN                       equ 0001h
ADLTHH_ADLTH9_POSITION                   equ 0001h
ADLTHH_ADLTH9_SIZE                       equ 0001h
ADLTHH_ADLTH9_LENGTH                     equ 0001h
ADLTHH_ADLTH9_MASK                       equ 0002h
ADLTHH_ADLTH10_POSN                      equ 0002h
ADLTHH_ADLTH10_POSITION                  equ 0002h
ADLTHH_ADLTH10_SIZE                      equ 0001h
ADLTHH_ADLTH10_LENGTH                    equ 0001h
ADLTHH_ADLTH10_MASK                      equ 0004h
ADLTHH_ADLTH11_POSN                      equ 0003h
ADLTHH_ADLTH11_POSITION                  equ 0003h
ADLTHH_ADLTH11_SIZE                      equ 0001h
ADLTHH_ADLTH11_LENGTH                    equ 0001h
ADLTHH_ADLTH11_MASK                      equ 0008h
ADLTHH_ADLTH12_POSN                      equ 0004h
ADLTHH_ADLTH12_POSITION                  equ 0004h
ADLTHH_ADLTH12_SIZE                      equ 0001h
ADLTHH_ADLTH12_LENGTH                    equ 0001h
ADLTHH_ADLTH12_MASK                      equ 0010h
ADLTHH_ADLTH13_POSN                      equ 0005h
ADLTHH_ADLTH13_POSITION                  equ 0005h
ADLTHH_ADLTH13_SIZE                      equ 0001h
ADLTHH_ADLTH13_LENGTH                    equ 0001h
ADLTHH_ADLTH13_MASK                      equ 0020h
ADLTHH_ADLTH14_POSN                      equ 0006h
ADLTHH_ADLTH14_POSITION                  equ 0006h
ADLTHH_ADLTH14_SIZE                      equ 0001h
ADLTHH_ADLTH14_LENGTH                    equ 0001h
ADLTHH_ADLTH14_MASK                      equ 0040h
ADLTHH_ADLTH15_POSN                      equ 0007h
ADLTHH_ADLTH15_POSITION                  equ 0007h
ADLTHH_ADLTH15_SIZE                      equ 0001h
ADLTHH_ADLTH15_LENGTH                    equ 0001h
ADLTHH_ADLTH15_MASK                      equ 0080h

// Register: ADUTH
#define ADUTH ADUTH
ADUTH                                    equ 0F6Ch

// Register: ADUTHL
#define ADUTHL ADUTHL
ADUTHL                                   equ 0F6Ch
// bitfield definitions
ADUTHL_ADUTHL_POSN                       equ 0000h
ADUTHL_ADUTHL_POSITION                   equ 0000h
ADUTHL_ADUTHL_SIZE                       equ 0008h
ADUTHL_ADUTHL_LENGTH                     equ 0008h
ADUTHL_ADUTHL_MASK                       equ 00FFh
ADUTHL_ADUTH0_POSN                       equ 0000h
ADUTHL_ADUTH0_POSITION                   equ 0000h
ADUTHL_ADUTH0_SIZE                       equ 0001h
ADUTHL_ADUTH0_LENGTH                     equ 0001h
ADUTHL_ADUTH0_MASK                       equ 0001h
ADUTHL_ADUTH1_POSN                       equ 0001h
ADUTHL_ADUTH1_POSITION                   equ 0001h
ADUTHL_ADUTH1_SIZE                       equ 0001h
ADUTHL_ADUTH1_LENGTH                     equ 0001h
ADUTHL_ADUTH1_MASK                       equ 0002h
ADUTHL_ADUTH2_POSN                       equ 0002h
ADUTHL_ADUTH2_POSITION                   equ 0002h
ADUTHL_ADUTH2_SIZE                       equ 0001h
ADUTHL_ADUTH2_LENGTH                     equ 0001h
ADUTHL_ADUTH2_MASK                       equ 0004h
ADUTHL_ADUTH3_POSN                       equ 0003h
ADUTHL_ADUTH3_POSITION                   equ 0003h
ADUTHL_ADUTH3_SIZE                       equ 0001h
ADUTHL_ADUTH3_LENGTH                     equ 0001h
ADUTHL_ADUTH3_MASK                       equ 0008h
ADUTHL_ADUTH4_POSN                       equ 0004h
ADUTHL_ADUTH4_POSITION                   equ 0004h
ADUTHL_ADUTH4_SIZE                       equ 0001h
ADUTHL_ADUTH4_LENGTH                     equ 0001h
ADUTHL_ADUTH4_MASK                       equ 0010h
ADUTHL_ADUTH5_POSN                       equ 0005h
ADUTHL_ADUTH5_POSITION                   equ 0005h
ADUTHL_ADUTH5_SIZE                       equ 0001h
ADUTHL_ADUTH5_LENGTH                     equ 0001h
ADUTHL_ADUTH5_MASK                       equ 0020h
ADUTHL_ADUTH6_POSN                       equ 0006h
ADUTHL_ADUTH6_POSITION                   equ 0006h
ADUTHL_ADUTH6_SIZE                       equ 0001h
ADUTHL_ADUTH6_LENGTH                     equ 0001h
ADUTHL_ADUTH6_MASK                       equ 0040h
ADUTHL_ADUTH7_POSN                       equ 0007h
ADUTHL_ADUTH7_POSITION                   equ 0007h
ADUTHL_ADUTH7_SIZE                       equ 0001h
ADUTHL_ADUTH7_LENGTH                     equ 0001h
ADUTHL_ADUTH7_MASK                       equ 0080h

// Register: ADUTHH
#define ADUTHH ADUTHH
ADUTHH                                   equ 0F6Dh
// bitfield definitions
ADUTHH_ADUTHH_POSN                       equ 0000h
ADUTHH_ADUTHH_POSITION                   equ 0000h
ADUTHH_ADUTHH_SIZE                       equ 0008h
ADUTHH_ADUTHH_LENGTH                     equ 0008h
ADUTHH_ADUTHH_MASK                       equ 00FFh
ADUTHH_ADUTH8_POSN                       equ 0000h
ADUTHH_ADUTH8_POSITION                   equ 0000h
ADUTHH_ADUTH8_SIZE                       equ 0001h
ADUTHH_ADUTH8_LENGTH                     equ 0001h
ADUTHH_ADUTH8_MASK                       equ 0001h
ADUTHH_ADUTH9_POSN                       equ 0001h
ADUTHH_ADUTH9_POSITION                   equ 0001h
ADUTHH_ADUTH9_SIZE                       equ 0001h
ADUTHH_ADUTH9_LENGTH                     equ 0001h
ADUTHH_ADUTH9_MASK                       equ 0002h
ADUTHH_ADUTH10_POSN                      equ 0002h
ADUTHH_ADUTH10_POSITION                  equ 0002h
ADUTHH_ADUTH10_SIZE                      equ 0001h
ADUTHH_ADUTH10_LENGTH                    equ 0001h
ADUTHH_ADUTH10_MASK                      equ 0004h
ADUTHH_ADUTH11_POSN                      equ 0003h
ADUTHH_ADUTH11_POSITION                  equ 0003h
ADUTHH_ADUTH11_SIZE                      equ 0001h
ADUTHH_ADUTH11_LENGTH                    equ 0001h
ADUTHH_ADUTH11_MASK                      equ 0008h
ADUTHH_ADUTH12_POSN                      equ 0004h
ADUTHH_ADUTH12_POSITION                  equ 0004h
ADUTHH_ADUTH12_SIZE                      equ 0001h
ADUTHH_ADUTH12_LENGTH                    equ 0001h
ADUTHH_ADUTH12_MASK                      equ 0010h
ADUTHH_ADUTH13_POSN                      equ 0005h
ADUTHH_ADUTH13_POSITION                  equ 0005h
ADUTHH_ADUTH13_SIZE                      equ 0001h
ADUTHH_ADUTH13_LENGTH                    equ 0001h
ADUTHH_ADUTH13_MASK                      equ 0020h
ADUTHH_ADUTH14_POSN                      equ 0006h
ADUTHH_ADUTH14_POSITION                  equ 0006h
ADUTHH_ADUTH14_SIZE                      equ 0001h
ADUTHH_ADUTH14_LENGTH                    equ 0001h
ADUTHH_ADUTH14_MASK                      equ 0040h
ADUTHH_ADUTH15_POSN                      equ 0007h
ADUTHH_ADUTH15_POSITION                  equ 0007h
ADUTHH_ADUTH15_SIZE                      equ 0001h
ADUTHH_ADUTH15_LENGTH                    equ 0001h
ADUTHH_ADUTH15_MASK                      equ 0080h

// Register: ADERR
#define ADERR ADERR
ADERR                                    equ 0F6Eh

// Register: ADERRL
#define ADERRL ADERRL
ADERRL                                   equ 0F6Eh
// bitfield definitions
ADERRL_ADERRL_POSN                       equ 0000h
ADERRL_ADERRL_POSITION                   equ 0000h
ADERRL_ADERRL_SIZE                       equ 0008h
ADERRL_ADERRL_LENGTH                     equ 0008h
ADERRL_ADERRL_MASK                       equ 00FFh
ADERRL_ADERR0_POSN                       equ 0000h
ADERRL_ADERR0_POSITION                   equ 0000h
ADERRL_ADERR0_SIZE                       equ 0001h
ADERRL_ADERR0_LENGTH                     equ 0001h
ADERRL_ADERR0_MASK                       equ 0001h
ADERRL_ADERR1_POSN                       equ 0001h
ADERRL_ADERR1_POSITION                   equ 0001h
ADERRL_ADERR1_SIZE                       equ 0001h
ADERRL_ADERR1_LENGTH                     equ 0001h
ADERRL_ADERR1_MASK                       equ 0002h
ADERRL_ADERR2_POSN                       equ 0002h
ADERRL_ADERR2_POSITION                   equ 0002h
ADERRL_ADERR2_SIZE                       equ 0001h
ADERRL_ADERR2_LENGTH                     equ 0001h
ADERRL_ADERR2_MASK                       equ 0004h
ADERRL_ADERR3_POSN                       equ 0003h
ADERRL_ADERR3_POSITION                   equ 0003h
ADERRL_ADERR3_SIZE                       equ 0001h
ADERRL_ADERR3_LENGTH                     equ 0001h
ADERRL_ADERR3_MASK                       equ 0008h
ADERRL_ADERR4_POSN                       equ 0004h
ADERRL_ADERR4_POSITION                   equ 0004h
ADERRL_ADERR4_SIZE                       equ 0001h
ADERRL_ADERR4_LENGTH                     equ 0001h
ADERRL_ADERR4_MASK                       equ 0010h
ADERRL_ADERR5_POSN                       equ 0005h
ADERRL_ADERR5_POSITION                   equ 0005h
ADERRL_ADERR5_SIZE                       equ 0001h
ADERRL_ADERR5_LENGTH                     equ 0001h
ADERRL_ADERR5_MASK                       equ 0020h
ADERRL_ADERR6_POSN                       equ 0006h
ADERRL_ADERR6_POSITION                   equ 0006h
ADERRL_ADERR6_SIZE                       equ 0001h
ADERRL_ADERR6_LENGTH                     equ 0001h
ADERRL_ADERR6_MASK                       equ 0040h
ADERRL_ADERR7_POSN                       equ 0007h
ADERRL_ADERR7_POSITION                   equ 0007h
ADERRL_ADERR7_SIZE                       equ 0001h
ADERRL_ADERR7_LENGTH                     equ 0001h
ADERRL_ADERR7_MASK                       equ 0080h

// Register: ADERRH
#define ADERRH ADERRH
ADERRH                                   equ 0F6Fh
// bitfield definitions
ADERRH_ADERRH_POSN                       equ 0000h
ADERRH_ADERRH_POSITION                   equ 0000h
ADERRH_ADERRH_SIZE                       equ 0008h
ADERRH_ADERRH_LENGTH                     equ 0008h
ADERRH_ADERRH_MASK                       equ 00FFh
ADERRH_ADERR8_POSN                       equ 0000h
ADERRH_ADERR8_POSITION                   equ 0000h
ADERRH_ADERR8_SIZE                       equ 0001h
ADERRH_ADERR8_LENGTH                     equ 0001h
ADERRH_ADERR8_MASK                       equ 0001h
ADERRH_ADERR9_POSN                       equ 0001h
ADERRH_ADERR9_POSITION                   equ 0001h
ADERRH_ADERR9_SIZE                       equ 0001h
ADERRH_ADERR9_LENGTH                     equ 0001h
ADERRH_ADERR9_MASK                       equ 0002h
ADERRH_ADERR10_POSN                      equ 0002h
ADERRH_ADERR10_POSITION                  equ 0002h
ADERRH_ADERR10_SIZE                      equ 0001h
ADERRH_ADERR10_LENGTH                    equ 0001h
ADERRH_ADERR10_MASK                      equ 0004h
ADERRH_ADERR11_POSN                      equ 0003h
ADERRH_ADERR11_POSITION                  equ 0003h
ADERRH_ADERR11_SIZE                      equ 0001h
ADERRH_ADERR11_LENGTH                    equ 0001h
ADERRH_ADERR11_MASK                      equ 0008h
ADERRH_ADERR12_POSN                      equ 0004h
ADERRH_ADERR12_POSITION                  equ 0004h
ADERRH_ADERR12_SIZE                      equ 0001h
ADERRH_ADERR12_LENGTH                    equ 0001h
ADERRH_ADERR12_MASK                      equ 0010h
ADERRH_ADERR13_POSN                      equ 0005h
ADERRH_ADERR13_POSITION                  equ 0005h
ADERRH_ADERR13_SIZE                      equ 0001h
ADERRH_ADERR13_LENGTH                    equ 0001h
ADERRH_ADERR13_MASK                      equ 0020h
ADERRH_ADERR14_POSN                      equ 0006h
ADERRH_ADERR14_POSITION                  equ 0006h
ADERRH_ADERR14_SIZE                      equ 0001h
ADERRH_ADERR14_LENGTH                    equ 0001h
ADERRH_ADERR14_MASK                      equ 0040h
ADERRH_ADERR15_POSN                      equ 0007h
ADERRH_ADERR15_POSITION                  equ 0007h
ADERRH_ADERR15_SIZE                      equ 0001h
ADERRH_ADERR15_LENGTH                    equ 0001h
ADERRH_ADERR15_MASK                      equ 0080h

// Register: ADACC
#define ADACC ADACC
ADACC                                    equ 0F70h

// Register: ADACCL
#define ADACCL ADACCL
ADACCL                                   equ 0F70h
// bitfield definitions
ADACCL_ADACCL_POSN                       equ 0000h
ADACCL_ADACCL_POSITION                   equ 0000h
ADACCL_ADACCL_SIZE                       equ 0008h
ADACCL_ADACCL_LENGTH                     equ 0008h
ADACCL_ADACCL_MASK                       equ 00FFh
ADACCL_ADACC0_POSN                       equ 0000h
ADACCL_ADACC0_POSITION                   equ 0000h
ADACCL_ADACC0_SIZE                       equ 0001h
ADACCL_ADACC0_LENGTH                     equ 0001h
ADACCL_ADACC0_MASK                       equ 0001h
ADACCL_ADACC1_POSN                       equ 0001h
ADACCL_ADACC1_POSITION                   equ 0001h
ADACCL_ADACC1_SIZE                       equ 0001h
ADACCL_ADACC1_LENGTH                     equ 0001h
ADACCL_ADACC1_MASK                       equ 0002h
ADACCL_ADACC2_POSN                       equ 0002h
ADACCL_ADACC2_POSITION                   equ 0002h
ADACCL_ADACC2_SIZE                       equ 0001h
ADACCL_ADACC2_LENGTH                     equ 0001h
ADACCL_ADACC2_MASK                       equ 0004h
ADACCL_ADACC3_POSN                       equ 0003h
ADACCL_ADACC3_POSITION                   equ 0003h
ADACCL_ADACC3_SIZE                       equ 0001h
ADACCL_ADACC3_LENGTH                     equ 0001h
ADACCL_ADACC3_MASK                       equ 0008h
ADACCL_ADACC4_POSN                       equ 0004h
ADACCL_ADACC4_POSITION                   equ 0004h
ADACCL_ADACC4_SIZE                       equ 0001h
ADACCL_ADACC4_LENGTH                     equ 0001h
ADACCL_ADACC4_MASK                       equ 0010h
ADACCL_ADACC5_POSN                       equ 0005h
ADACCL_ADACC5_POSITION                   equ 0005h
ADACCL_ADACC5_SIZE                       equ 0001h
ADACCL_ADACC5_LENGTH                     equ 0001h
ADACCL_ADACC5_MASK                       equ 0020h
ADACCL_ADACC6_POSN                       equ 0006h
ADACCL_ADACC6_POSITION                   equ 0006h
ADACCL_ADACC6_SIZE                       equ 0001h
ADACCL_ADACC6_LENGTH                     equ 0001h
ADACCL_ADACC6_MASK                       equ 0040h
ADACCL_ADACC7_POSN                       equ 0007h
ADACCL_ADACC7_POSITION                   equ 0007h
ADACCL_ADACC7_SIZE                       equ 0001h
ADACCL_ADACC7_LENGTH                     equ 0001h
ADACCL_ADACC7_MASK                       equ 0080h

// Register: ADACCH
#define ADACCH ADACCH
ADACCH                                   equ 0F71h
// bitfield definitions
ADACCH_ADACCH_POSN                       equ 0000h
ADACCH_ADACCH_POSITION                   equ 0000h
ADACCH_ADACCH_SIZE                       equ 0008h
ADACCH_ADACCH_LENGTH                     equ 0008h
ADACCH_ADACCH_MASK                       equ 00FFh
ADACCH_ADACC8_POSN                       equ 0000h
ADACCH_ADACC8_POSITION                   equ 0000h
ADACCH_ADACC8_SIZE                       equ 0001h
ADACCH_ADACC8_LENGTH                     equ 0001h
ADACCH_ADACC8_MASK                       equ 0001h
ADACCH_ADACC9_POSN                       equ 0001h
ADACCH_ADACC9_POSITION                   equ 0001h
ADACCH_ADACC9_SIZE                       equ 0001h
ADACCH_ADACC9_LENGTH                     equ 0001h
ADACCH_ADACC9_MASK                       equ 0002h
ADACCH_ADACC10_POSN                      equ 0002h
ADACCH_ADACC10_POSITION                  equ 0002h
ADACCH_ADACC10_SIZE                      equ 0001h
ADACCH_ADACC10_LENGTH                    equ 0001h
ADACCH_ADACC10_MASK                      equ 0004h
ADACCH_ADACC11_POSN                      equ 0003h
ADACCH_ADACC11_POSITION                  equ 0003h
ADACCH_ADACC11_SIZE                      equ 0001h
ADACCH_ADACC11_LENGTH                    equ 0001h
ADACCH_ADACC11_MASK                      equ 0008h
ADACCH_ADACC12_POSN                      equ 0004h
ADACCH_ADACC12_POSITION                  equ 0004h
ADACCH_ADACC12_SIZE                      equ 0001h
ADACCH_ADACC12_LENGTH                    equ 0001h
ADACCH_ADACC12_MASK                      equ 0010h
ADACCH_ADACC13_POSN                      equ 0005h
ADACCH_ADACC13_POSITION                  equ 0005h
ADACCH_ADACC13_SIZE                      equ 0001h
ADACCH_ADACC13_LENGTH                    equ 0001h
ADACCH_ADACC13_MASK                      equ 0020h
ADACCH_ADACC14_POSN                      equ 0006h
ADACCH_ADACC14_POSITION                  equ 0006h
ADACCH_ADACC14_SIZE                      equ 0001h
ADACCH_ADACC14_LENGTH                    equ 0001h
ADACCH_ADACC14_MASK                      equ 0040h
ADACCH_ADACC15_POSN                      equ 0007h
ADACCH_ADACC15_POSITION                  equ 0007h
ADACCH_ADACC15_SIZE                      equ 0001h
ADACCH_ADACC15_LENGTH                    equ 0001h
ADACCH_ADACC15_MASK                      equ 0080h

// Register: ADFLTR
#define ADFLTR ADFLTR
ADFLTR                                   equ 0F72h

// Register: ADFLTRL
#define ADFLTRL ADFLTRL
ADFLTRL                                  equ 0F72h
// bitfield definitions
ADFLTRL_ADFLTRL_POSN                     equ 0000h
ADFLTRL_ADFLTRL_POSITION                 equ 0000h
ADFLTRL_ADFLTRL_SIZE                     equ 0008h
ADFLTRL_ADFLTRL_LENGTH                   equ 0008h
ADFLTRL_ADFLTRL_MASK                     equ 00FFh
ADFLTRL_ADFLTR0_POSN                     equ 0000h
ADFLTRL_ADFLTR0_POSITION                 equ 0000h
ADFLTRL_ADFLTR0_SIZE                     equ 0001h
ADFLTRL_ADFLTR0_LENGTH                   equ 0001h
ADFLTRL_ADFLTR0_MASK                     equ 0001h
ADFLTRL_ADFLTR1_POSN                     equ 0001h
ADFLTRL_ADFLTR1_POSITION                 equ 0001h
ADFLTRL_ADFLTR1_SIZE                     equ 0001h
ADFLTRL_ADFLTR1_LENGTH                   equ 0001h
ADFLTRL_ADFLTR1_MASK                     equ 0002h
ADFLTRL_ADFLTR2_POSN                     equ 0002h
ADFLTRL_ADFLTR2_POSITION                 equ 0002h
ADFLTRL_ADFLTR2_SIZE                     equ 0001h
ADFLTRL_ADFLTR2_LENGTH                   equ 0001h
ADFLTRL_ADFLTR2_MASK                     equ 0004h
ADFLTRL_ADFLTR3_POSN                     equ 0003h
ADFLTRL_ADFLTR3_POSITION                 equ 0003h
ADFLTRL_ADFLTR3_SIZE                     equ 0001h
ADFLTRL_ADFLTR3_LENGTH                   equ 0001h
ADFLTRL_ADFLTR3_MASK                     equ 0008h
ADFLTRL_ADFLTR4_POSN                     equ 0004h
ADFLTRL_ADFLTR4_POSITION                 equ 0004h
ADFLTRL_ADFLTR4_SIZE                     equ 0001h
ADFLTRL_ADFLTR4_LENGTH                   equ 0001h
ADFLTRL_ADFLTR4_MASK                     equ 0010h
ADFLTRL_ADFLTR5_POSN                     equ 0005h
ADFLTRL_ADFLTR5_POSITION                 equ 0005h
ADFLTRL_ADFLTR5_SIZE                     equ 0001h
ADFLTRL_ADFLTR5_LENGTH                   equ 0001h
ADFLTRL_ADFLTR5_MASK                     equ 0020h
ADFLTRL_ADFLTR6_POSN                     equ 0006h
ADFLTRL_ADFLTR6_POSITION                 equ 0006h
ADFLTRL_ADFLTR6_SIZE                     equ 0001h
ADFLTRL_ADFLTR6_LENGTH                   equ 0001h
ADFLTRL_ADFLTR6_MASK                     equ 0040h
ADFLTRL_ADFLTR7_POSN                     equ 0007h
ADFLTRL_ADFLTR7_POSITION                 equ 0007h
ADFLTRL_ADFLTR7_SIZE                     equ 0001h
ADFLTRL_ADFLTR7_LENGTH                   equ 0001h
ADFLTRL_ADFLTR7_MASK                     equ 0080h

// Register: ADFLTRH
#define ADFLTRH ADFLTRH
ADFLTRH                                  equ 0F73h
// bitfield definitions
ADFLTRH_ADFLTRH_POSN                     equ 0000h
ADFLTRH_ADFLTRH_POSITION                 equ 0000h
ADFLTRH_ADFLTRH_SIZE                     equ 0008h
ADFLTRH_ADFLTRH_LENGTH                   equ 0008h
ADFLTRH_ADFLTRH_MASK                     equ 00FFh
ADFLTRH_ADFLTR8_POSN                     equ 0000h
ADFLTRH_ADFLTR8_POSITION                 equ 0000h
ADFLTRH_ADFLTR8_SIZE                     equ 0001h
ADFLTRH_ADFLTR8_LENGTH                   equ 0001h
ADFLTRH_ADFLTR8_MASK                     equ 0001h
ADFLTRH_ADFLTR9_POSN                     equ 0001h
ADFLTRH_ADFLTR9_POSITION                 equ 0001h
ADFLTRH_ADFLTR9_SIZE                     equ 0001h
ADFLTRH_ADFLTR9_LENGTH                   equ 0001h
ADFLTRH_ADFLTR9_MASK                     equ 0002h
ADFLTRH_ADFLTR10_POSN                    equ 0002h
ADFLTRH_ADFLTR10_POSITION                equ 0002h
ADFLTRH_ADFLTR10_SIZE                    equ 0001h
ADFLTRH_ADFLTR10_LENGTH                  equ 0001h
ADFLTRH_ADFLTR10_MASK                    equ 0004h
ADFLTRH_ADFLTR11_POSN                    equ 0003h
ADFLTRH_ADFLTR11_POSITION                equ 0003h
ADFLTRH_ADFLTR11_SIZE                    equ 0001h
ADFLTRH_ADFLTR11_LENGTH                  equ 0001h
ADFLTRH_ADFLTR11_MASK                    equ 0008h
ADFLTRH_ADFLTR12_POSN                    equ 0004h
ADFLTRH_ADFLTR12_POSITION                equ 0004h
ADFLTRH_ADFLTR12_SIZE                    equ 0001h
ADFLTRH_ADFLTR12_LENGTH                  equ 0001h
ADFLTRH_ADFLTR12_MASK                    equ 0010h
ADFLTRH_ADFLTR13_POSN                    equ 0005h
ADFLTRH_ADFLTR13_POSITION                equ 0005h
ADFLTRH_ADFLTR13_SIZE                    equ 0001h
ADFLTRH_ADFLTR13_LENGTH                  equ 0001h
ADFLTRH_ADFLTR13_MASK                    equ 0020h
ADFLTRH_ADFLTR14_POSN                    equ 0006h
ADFLTRH_ADFLTR14_POSITION                equ 0006h
ADFLTRH_ADFLTR14_SIZE                    equ 0001h
ADFLTRH_ADFLTR14_LENGTH                  equ 0001h
ADFLTRH_ADFLTR14_MASK                    equ 0040h
ADFLTRH_ADFLTR15_POSN                    equ 0007h
ADFLTRH_ADFLTR15_POSITION                equ 0007h
ADFLTRH_ADFLTR15_SIZE                    equ 0001h
ADFLTRH_ADFLTR15_LENGTH                  equ 0001h
ADFLTRH_ADFLTR15_MASK                    equ 0080h

// Register: CRCDATA
#define CRCDATA CRCDATA
CRCDATA                                  equ 0F74h

// Register: CRCDATL
#define CRCDATL CRCDATL
CRCDATL                                  equ 0F74h
// bitfield definitions
CRCDATL_DATA0_POSN                       equ 0000h
CRCDATL_DATA0_POSITION                   equ 0000h
CRCDATL_DATA0_SIZE                       equ 0001h
CRCDATL_DATA0_LENGTH                     equ 0001h
CRCDATL_DATA0_MASK                       equ 0001h
CRCDATL_DATA1_POSN                       equ 0001h
CRCDATL_DATA1_POSITION                   equ 0001h
CRCDATL_DATA1_SIZE                       equ 0001h
CRCDATL_DATA1_LENGTH                     equ 0001h
CRCDATL_DATA1_MASK                       equ 0002h
CRCDATL_DATA2_POSN                       equ 0002h
CRCDATL_DATA2_POSITION                   equ 0002h
CRCDATL_DATA2_SIZE                       equ 0001h
CRCDATL_DATA2_LENGTH                     equ 0001h
CRCDATL_DATA2_MASK                       equ 0004h
CRCDATL_DATA3_POSN                       equ 0003h
CRCDATL_DATA3_POSITION                   equ 0003h
CRCDATL_DATA3_SIZE                       equ 0001h
CRCDATL_DATA3_LENGTH                     equ 0001h
CRCDATL_DATA3_MASK                       equ 0008h
CRCDATL_DATA4_POSN                       equ 0004h
CRCDATL_DATA4_POSITION                   equ 0004h
CRCDATL_DATA4_SIZE                       equ 0001h
CRCDATL_DATA4_LENGTH                     equ 0001h
CRCDATL_DATA4_MASK                       equ 0010h
CRCDATL_DATA5_POSN                       equ 0005h
CRCDATL_DATA5_POSITION                   equ 0005h
CRCDATL_DATA5_SIZE                       equ 0001h
CRCDATL_DATA5_LENGTH                     equ 0001h
CRCDATL_DATA5_MASK                       equ 0020h
CRCDATL_DATA6_POSN                       equ 0006h
CRCDATL_DATA6_POSITION                   equ 0006h
CRCDATL_DATA6_SIZE                       equ 0001h
CRCDATL_DATA6_LENGTH                     equ 0001h
CRCDATL_DATA6_MASK                       equ 0040h
CRCDATL_DATA7_POSN                       equ 0007h
CRCDATL_DATA7_POSITION                   equ 0007h
CRCDATL_DATA7_SIZE                       equ 0001h
CRCDATL_DATA7_LENGTH                     equ 0001h
CRCDATL_DATA7_MASK                       equ 0080h

// Register: CRCDATH
#define CRCDATH CRCDATH
CRCDATH                                  equ 0F75h
// bitfield definitions
CRCDATH_DATA8_POSN                       equ 0000h
CRCDATH_DATA8_POSITION                   equ 0000h
CRCDATH_DATA8_SIZE                       equ 0001h
CRCDATH_DATA8_LENGTH                     equ 0001h
CRCDATH_DATA8_MASK                       equ 0001h
CRCDATH_DATA9_POSN                       equ 0001h
CRCDATH_DATA9_POSITION                   equ 0001h
CRCDATH_DATA9_SIZE                       equ 0001h
CRCDATH_DATA9_LENGTH                     equ 0001h
CRCDATH_DATA9_MASK                       equ 0002h
CRCDATH_DATA10_POSN                      equ 0002h
CRCDATH_DATA10_POSITION                  equ 0002h
CRCDATH_DATA10_SIZE                      equ 0001h
CRCDATH_DATA10_LENGTH                    equ 0001h
CRCDATH_DATA10_MASK                      equ 0004h
CRCDATH_DATA11_POSN                      equ 0003h
CRCDATH_DATA11_POSITION                  equ 0003h
CRCDATH_DATA11_SIZE                      equ 0001h
CRCDATH_DATA11_LENGTH                    equ 0001h
CRCDATH_DATA11_MASK                      equ 0008h
CRCDATH_DATA12_POSN                      equ 0004h
CRCDATH_DATA12_POSITION                  equ 0004h
CRCDATH_DATA12_SIZE                      equ 0001h
CRCDATH_DATA12_LENGTH                    equ 0001h
CRCDATH_DATA12_MASK                      equ 0010h
CRCDATH_DATA13_POSN                      equ 0005h
CRCDATH_DATA13_POSITION                  equ 0005h
CRCDATH_DATA13_SIZE                      equ 0001h
CRCDATH_DATA13_LENGTH                    equ 0001h
CRCDATH_DATA13_MASK                      equ 0020h
CRCDATH_DATA14_POSN                      equ 0006h
CRCDATH_DATA14_POSITION                  equ 0006h
CRCDATH_DATA14_SIZE                      equ 0001h
CRCDATH_DATA14_LENGTH                    equ 0001h
CRCDATH_DATA14_MASK                      equ 0040h
CRCDATH_DATA15_POSN                      equ 0007h
CRCDATH_DATA15_POSITION                  equ 0007h
CRCDATH_DATA15_SIZE                      equ 0001h
CRCDATH_DATA15_LENGTH                    equ 0001h
CRCDATH_DATA15_MASK                      equ 0080h

// Register: CRCACC
#define CRCACC CRCACC
CRCACC                                   equ 0F76h

// Register: CRCACCL
#define CRCACCL CRCACCL
CRCACCL                                  equ 0F76h
// bitfield definitions
CRCACCL_ACC0_POSN                        equ 0000h
CRCACCL_ACC0_POSITION                    equ 0000h
CRCACCL_ACC0_SIZE                        equ 0001h
CRCACCL_ACC0_LENGTH                      equ 0001h
CRCACCL_ACC0_MASK                        equ 0001h
CRCACCL_ACC1_POSN                        equ 0001h
CRCACCL_ACC1_POSITION                    equ 0001h
CRCACCL_ACC1_SIZE                        equ 0001h
CRCACCL_ACC1_LENGTH                      equ 0001h
CRCACCL_ACC1_MASK                        equ 0002h
CRCACCL_ACC2_POSN                        equ 0002h
CRCACCL_ACC2_POSITION                    equ 0002h
CRCACCL_ACC2_SIZE                        equ 0001h
CRCACCL_ACC2_LENGTH                      equ 0001h
CRCACCL_ACC2_MASK                        equ 0004h
CRCACCL_ACC3_POSN                        equ 0003h
CRCACCL_ACC3_POSITION                    equ 0003h
CRCACCL_ACC3_SIZE                        equ 0001h
CRCACCL_ACC3_LENGTH                      equ 0001h
CRCACCL_ACC3_MASK                        equ 0008h
CRCACCL_ACC4_POSN                        equ 0004h
CRCACCL_ACC4_POSITION                    equ 0004h
CRCACCL_ACC4_SIZE                        equ 0001h
CRCACCL_ACC4_LENGTH                      equ 0001h
CRCACCL_ACC4_MASK                        equ 0010h
CRCACCL_ACC5_POSN                        equ 0005h
CRCACCL_ACC5_POSITION                    equ 0005h
CRCACCL_ACC5_SIZE                        equ 0001h
CRCACCL_ACC5_LENGTH                      equ 0001h
CRCACCL_ACC5_MASK                        equ 0020h
CRCACCL_ACC6_POSN                        equ 0006h
CRCACCL_ACC6_POSITION                    equ 0006h
CRCACCL_ACC6_SIZE                        equ 0001h
CRCACCL_ACC6_LENGTH                      equ 0001h
CRCACCL_ACC6_MASK                        equ 0040h
CRCACCL_ACC7_POSN                        equ 0007h
CRCACCL_ACC7_POSITION                    equ 0007h
CRCACCL_ACC7_SIZE                        equ 0001h
CRCACCL_ACC7_LENGTH                      equ 0001h
CRCACCL_ACC7_MASK                        equ 0080h

// Register: CRCACCH
#define CRCACCH CRCACCH
CRCACCH                                  equ 0F77h
// bitfield definitions
CRCACCH_ACC8_POSN                        equ 0000h
CRCACCH_ACC8_POSITION                    equ 0000h
CRCACCH_ACC8_SIZE                        equ 0001h
CRCACCH_ACC8_LENGTH                      equ 0001h
CRCACCH_ACC8_MASK                        equ 0001h
CRCACCH_ACC9_POSN                        equ 0001h
CRCACCH_ACC9_POSITION                    equ 0001h
CRCACCH_ACC9_SIZE                        equ 0001h
CRCACCH_ACC9_LENGTH                      equ 0001h
CRCACCH_ACC9_MASK                        equ 0002h
CRCACCH_ACC10_POSN                       equ 0002h
CRCACCH_ACC10_POSITION                   equ 0002h
CRCACCH_ACC10_SIZE                       equ 0001h
CRCACCH_ACC10_LENGTH                     equ 0001h
CRCACCH_ACC10_MASK                       equ 0004h
CRCACCH_ACC11_POSN                       equ 0003h
CRCACCH_ACC11_POSITION                   equ 0003h
CRCACCH_ACC11_SIZE                       equ 0001h
CRCACCH_ACC11_LENGTH                     equ 0001h
CRCACCH_ACC11_MASK                       equ 0008h
CRCACCH_ACC12_POSN                       equ 0004h
CRCACCH_ACC12_POSITION                   equ 0004h
CRCACCH_ACC12_SIZE                       equ 0001h
CRCACCH_ACC12_LENGTH                     equ 0001h
CRCACCH_ACC12_MASK                       equ 0010h
CRCACCH_ACC13_POSN                       equ 0005h
CRCACCH_ACC13_POSITION                   equ 0005h
CRCACCH_ACC13_SIZE                       equ 0001h
CRCACCH_ACC13_LENGTH                     equ 0001h
CRCACCH_ACC13_MASK                       equ 0020h
CRCACCH_ACC14_POSN                       equ 0006h
CRCACCH_ACC14_POSITION                   equ 0006h
CRCACCH_ACC14_SIZE                       equ 0001h
CRCACCH_ACC14_LENGTH                     equ 0001h
CRCACCH_ACC14_MASK                       equ 0040h
CRCACCH_ACC15_POSN                       equ 0007h
CRCACCH_ACC15_POSITION                   equ 0007h
CRCACCH_ACC15_SIZE                       equ 0001h
CRCACCH_ACC15_LENGTH                     equ 0001h
CRCACCH_ACC15_MASK                       equ 0080h

// Register: CRCSHFT
#define CRCSHFT CRCSHFT
CRCSHFT                                  equ 0F78h

// Register: CRCSHIFTL
#define CRCSHIFTL CRCSHIFTL
CRCSHIFTL                                equ 0F78h
// bitfield definitions
CRCSHIFTL_SHFT0_POSN                     equ 0000h
CRCSHIFTL_SHFT0_POSITION                 equ 0000h
CRCSHIFTL_SHFT0_SIZE                     equ 0001h
CRCSHIFTL_SHFT0_LENGTH                   equ 0001h
CRCSHIFTL_SHFT0_MASK                     equ 0001h
CRCSHIFTL_SHFT1_POSN                     equ 0001h
CRCSHIFTL_SHFT1_POSITION                 equ 0001h
CRCSHIFTL_SHFT1_SIZE                     equ 0001h
CRCSHIFTL_SHFT1_LENGTH                   equ 0001h
CRCSHIFTL_SHFT1_MASK                     equ 0002h
CRCSHIFTL_SHFT2_POSN                     equ 0002h
CRCSHIFTL_SHFT2_POSITION                 equ 0002h
CRCSHIFTL_SHFT2_SIZE                     equ 0001h
CRCSHIFTL_SHFT2_LENGTH                   equ 0001h
CRCSHIFTL_SHFT2_MASK                     equ 0004h
CRCSHIFTL_SHFT3_POSN                     equ 0003h
CRCSHIFTL_SHFT3_POSITION                 equ 0003h
CRCSHIFTL_SHFT3_SIZE                     equ 0001h
CRCSHIFTL_SHFT3_LENGTH                   equ 0001h
CRCSHIFTL_SHFT3_MASK                     equ 0008h
CRCSHIFTL_SHFT4_POSN                     equ 0004h
CRCSHIFTL_SHFT4_POSITION                 equ 0004h
CRCSHIFTL_SHFT4_SIZE                     equ 0001h
CRCSHIFTL_SHFT4_LENGTH                   equ 0001h
CRCSHIFTL_SHFT4_MASK                     equ 0010h
CRCSHIFTL_SHFT5_POSN                     equ 0005h
CRCSHIFTL_SHFT5_POSITION                 equ 0005h
CRCSHIFTL_SHFT5_SIZE                     equ 0001h
CRCSHIFTL_SHFT5_LENGTH                   equ 0001h
CRCSHIFTL_SHFT5_MASK                     equ 0020h
CRCSHIFTL_SHFT6_POSN                     equ 0006h
CRCSHIFTL_SHFT6_POSITION                 equ 0006h
CRCSHIFTL_SHFT6_SIZE                     equ 0001h
CRCSHIFTL_SHFT6_LENGTH                   equ 0001h
CRCSHIFTL_SHFT6_MASK                     equ 0040h
CRCSHIFTL_SHFT7_POSN                     equ 0007h
CRCSHIFTL_SHFT7_POSITION                 equ 0007h
CRCSHIFTL_SHFT7_SIZE                     equ 0001h
CRCSHIFTL_SHFT7_LENGTH                   equ 0001h
CRCSHIFTL_SHFT7_MASK                     equ 0080h

// Register: CRCSHIFTH
#define CRCSHIFTH CRCSHIFTH
CRCSHIFTH                                equ 0F79h
// bitfield definitions
CRCSHIFTH_SHFT8_POSN                     equ 0000h
CRCSHIFTH_SHFT8_POSITION                 equ 0000h
CRCSHIFTH_SHFT8_SIZE                     equ 0001h
CRCSHIFTH_SHFT8_LENGTH                   equ 0001h
CRCSHIFTH_SHFT8_MASK                     equ 0001h
CRCSHIFTH_SHFT9_POSN                     equ 0001h
CRCSHIFTH_SHFT9_POSITION                 equ 0001h
CRCSHIFTH_SHFT9_SIZE                     equ 0001h
CRCSHIFTH_SHFT9_LENGTH                   equ 0001h
CRCSHIFTH_SHFT9_MASK                     equ 0002h
CRCSHIFTH_SHFT10_POSN                    equ 0002h
CRCSHIFTH_SHFT10_POSITION                equ 0002h
CRCSHIFTH_SHFT10_SIZE                    equ 0001h
CRCSHIFTH_SHFT10_LENGTH                  equ 0001h
CRCSHIFTH_SHFT10_MASK                    equ 0004h
CRCSHIFTH_SHFT11_POSN                    equ 0003h
CRCSHIFTH_SHFT11_POSITION                equ 0003h
CRCSHIFTH_SHFT11_SIZE                    equ 0001h
CRCSHIFTH_SHFT11_LENGTH                  equ 0001h
CRCSHIFTH_SHFT11_MASK                    equ 0008h
CRCSHIFTH_SHFT12_POSN                    equ 0004h
CRCSHIFTH_SHFT12_POSITION                equ 0004h
CRCSHIFTH_SHFT12_SIZE                    equ 0001h
CRCSHIFTH_SHFT12_LENGTH                  equ 0001h
CRCSHIFTH_SHFT12_MASK                    equ 0010h
CRCSHIFTH_SHFT13_POSN                    equ 0005h
CRCSHIFTH_SHFT13_POSITION                equ 0005h
CRCSHIFTH_SHFT13_SIZE                    equ 0001h
CRCSHIFTH_SHFT13_LENGTH                  equ 0001h
CRCSHIFTH_SHFT13_MASK                    equ 0020h
CRCSHIFTH_SHFT14_POSN                    equ 0006h
CRCSHIFTH_SHFT14_POSITION                equ 0006h
CRCSHIFTH_SHFT14_SIZE                    equ 0001h
CRCSHIFTH_SHFT14_LENGTH                  equ 0001h
CRCSHIFTH_SHFT14_MASK                    equ 0040h
CRCSHIFTH_SHFT15_POSN                    equ 0007h
CRCSHIFTH_SHFT15_POSITION                equ 0007h
CRCSHIFTH_SHFT15_SIZE                    equ 0001h
CRCSHIFTH_SHFT15_LENGTH                  equ 0001h
CRCSHIFTH_SHFT15_MASK                    equ 0080h

// Register: CRCXOR
#define CRCXOR CRCXOR
CRCXOR                                   equ 0F7Ah

// Register: CRCXORL
#define CRCXORL CRCXORL
CRCXORL                                  equ 0F7Ah
// bitfield definitions
CRCXORL_X1_POSN                          equ 0001h
CRCXORL_X1_POSITION                      equ 0001h
CRCXORL_X1_SIZE                          equ 0001h
CRCXORL_X1_LENGTH                        equ 0001h
CRCXORL_X1_MASK                          equ 0002h
CRCXORL_X2_POSN                          equ 0002h
CRCXORL_X2_POSITION                      equ 0002h
CRCXORL_X2_SIZE                          equ 0001h
CRCXORL_X2_LENGTH                        equ 0001h
CRCXORL_X2_MASK                          equ 0004h
CRCXORL_X3_POSN                          equ 0003h
CRCXORL_X3_POSITION                      equ 0003h
CRCXORL_X3_SIZE                          equ 0001h
CRCXORL_X3_LENGTH                        equ 0001h
CRCXORL_X3_MASK                          equ 0008h
CRCXORL_X4_POSN                          equ 0004h
CRCXORL_X4_POSITION                      equ 0004h
CRCXORL_X4_SIZE                          equ 0001h
CRCXORL_X4_LENGTH                        equ 0001h
CRCXORL_X4_MASK                          equ 0010h
CRCXORL_X5_POSN                          equ 0005h
CRCXORL_X5_POSITION                      equ 0005h
CRCXORL_X5_SIZE                          equ 0001h
CRCXORL_X5_LENGTH                        equ 0001h
CRCXORL_X5_MASK                          equ 0020h
CRCXORL_X6_POSN                          equ 0006h
CRCXORL_X6_POSITION                      equ 0006h
CRCXORL_X6_SIZE                          equ 0001h
CRCXORL_X6_LENGTH                        equ 0001h
CRCXORL_X6_MASK                          equ 0040h
CRCXORL_X7_POSN                          equ 0007h
CRCXORL_X7_POSITION                      equ 0007h
CRCXORL_X7_SIZE                          equ 0001h
CRCXORL_X7_LENGTH                        equ 0001h
CRCXORL_X7_MASK                          equ 0080h

// Register: CRCXORH
#define CRCXORH CRCXORH
CRCXORH                                  equ 0F7Bh
// bitfield definitions
CRCXORH_X8_POSN                          equ 0000h
CRCXORH_X8_POSITION                      equ 0000h
CRCXORH_X8_SIZE                          equ 0001h
CRCXORH_X8_LENGTH                        equ 0001h
CRCXORH_X8_MASK                          equ 0001h
CRCXORH_X9_POSN                          equ 0001h
CRCXORH_X9_POSITION                      equ 0001h
CRCXORH_X9_SIZE                          equ 0001h
CRCXORH_X9_LENGTH                        equ 0001h
CRCXORH_X9_MASK                          equ 0002h
CRCXORH_X10_POSN                         equ 0002h
CRCXORH_X10_POSITION                     equ 0002h
CRCXORH_X10_SIZE                         equ 0001h
CRCXORH_X10_LENGTH                       equ 0001h
CRCXORH_X10_MASK                         equ 0004h
CRCXORH_X11_POSN                         equ 0003h
CRCXORH_X11_POSITION                     equ 0003h
CRCXORH_X11_SIZE                         equ 0001h
CRCXORH_X11_LENGTH                       equ 0001h
CRCXORH_X11_MASK                         equ 0008h
CRCXORH_X12_POSN                         equ 0004h
CRCXORH_X12_POSITION                     equ 0004h
CRCXORH_X12_SIZE                         equ 0001h
CRCXORH_X12_LENGTH                       equ 0001h
CRCXORH_X12_MASK                         equ 0010h
CRCXORH_X13_POSN                         equ 0005h
CRCXORH_X13_POSITION                     equ 0005h
CRCXORH_X13_SIZE                         equ 0001h
CRCXORH_X13_LENGTH                       equ 0001h
CRCXORH_X13_MASK                         equ 0020h
CRCXORH_X14_POSN                         equ 0006h
CRCXORH_X14_POSITION                     equ 0006h
CRCXORH_X14_SIZE                         equ 0001h
CRCXORH_X14_LENGTH                       equ 0001h
CRCXORH_X14_MASK                         equ 0040h
CRCXORH_X15_POSN                         equ 0007h
CRCXORH_X15_POSITION                     equ 0007h
CRCXORH_X15_SIZE                         equ 0001h
CRCXORH_X15_LENGTH                       equ 0001h
CRCXORH_X15_MASK                         equ 0080h

// Register: CRCCON0
#define CRCCON0 CRCCON0
CRCCON0                                  equ 0F7Ch
// bitfield definitions
CRCCON0_FULL_POSN                        equ 0000h
CRCCON0_FULL_POSITION                    equ 0000h
CRCCON0_FULL_SIZE                        equ 0001h
CRCCON0_FULL_LENGTH                      equ 0001h
CRCCON0_FULL_MASK                        equ 0001h
CRCCON0_SHIFTM_POSN                      equ 0001h
CRCCON0_SHIFTM_POSITION                  equ 0001h
CRCCON0_SHIFTM_SIZE                      equ 0001h
CRCCON0_SHIFTM_LENGTH                    equ 0001h
CRCCON0_SHIFTM_MASK                      equ 0002h
CRCCON0_ACCM_POSN                        equ 0004h
CRCCON0_ACCM_POSITION                    equ 0004h
CRCCON0_ACCM_SIZE                        equ 0001h
CRCCON0_ACCM_LENGTH                      equ 0001h
CRCCON0_ACCM_MASK                        equ 0010h
CRCCON0_BUSY_POSN                        equ 0005h
CRCCON0_BUSY_POSITION                    equ 0005h
CRCCON0_BUSY_SIZE                        equ 0001h
CRCCON0_BUSY_LENGTH                      equ 0001h
CRCCON0_BUSY_MASK                        equ 0020h
CRCCON0_CRCGO_POSN                       equ 0006h
CRCCON0_CRCGO_POSITION                   equ 0006h
CRCCON0_CRCGO_SIZE                       equ 0001h
CRCCON0_CRCGO_LENGTH                     equ 0001h
CRCCON0_CRCGO_MASK                       equ 0040h
CRCCON0_EN_POSN                          equ 0007h
CRCCON0_EN_POSITION                      equ 0007h
CRCCON0_EN_SIZE                          equ 0001h
CRCCON0_EN_LENGTH                        equ 0001h
CRCCON0_EN_MASK                          equ 0080h
CRCCON0_CRCEN_POSN                       equ 0007h
CRCCON0_CRCEN_POSITION                   equ 0007h
CRCCON0_CRCEN_SIZE                       equ 0001h
CRCCON0_CRCEN_LENGTH                     equ 0001h
CRCCON0_CRCEN_MASK                       equ 0080h

// Register: CRCCON1
#define CRCCON1 CRCCON1
CRCCON1                                  equ 0F7Dh
// bitfield definitions
CRCCON1_PLEN_POSN                        equ 0000h
CRCCON1_PLEN_POSITION                    equ 0000h
CRCCON1_PLEN_SIZE                        equ 0004h
CRCCON1_PLEN_LENGTH                      equ 0004h
CRCCON1_PLEN_MASK                        equ 000Fh
CRCCON1_DLEN_POSN                        equ 0004h
CRCCON1_DLEN_POSITION                    equ 0004h
CRCCON1_DLEN_SIZE                        equ 0004h
CRCCON1_DLEN_LENGTH                      equ 0004h
CRCCON1_DLEN_MASK                        equ 00F0h
CRCCON1_PLEN0_POSN                       equ 0000h
CRCCON1_PLEN0_POSITION                   equ 0000h
CRCCON1_PLEN0_SIZE                       equ 0001h
CRCCON1_PLEN0_LENGTH                     equ 0001h
CRCCON1_PLEN0_MASK                       equ 0001h
CRCCON1_PLEN1_POSN                       equ 0001h
CRCCON1_PLEN1_POSITION                   equ 0001h
CRCCON1_PLEN1_SIZE                       equ 0001h
CRCCON1_PLEN1_LENGTH                     equ 0001h
CRCCON1_PLEN1_MASK                       equ 0002h
CRCCON1_PLEN2_POSN                       equ 0002h
CRCCON1_PLEN2_POSITION                   equ 0002h
CRCCON1_PLEN2_SIZE                       equ 0001h
CRCCON1_PLEN2_LENGTH                     equ 0001h
CRCCON1_PLEN2_MASK                       equ 0004h
CRCCON1_PLEN3_POSN                       equ 0003h
CRCCON1_PLEN3_POSITION                   equ 0003h
CRCCON1_PLEN3_SIZE                       equ 0001h
CRCCON1_PLEN3_LENGTH                     equ 0001h
CRCCON1_PLEN3_MASK                       equ 0008h
CRCCON1_DLEN0_POSN                       equ 0004h
CRCCON1_DLEN0_POSITION                   equ 0004h
CRCCON1_DLEN0_SIZE                       equ 0001h
CRCCON1_DLEN0_LENGTH                     equ 0001h
CRCCON1_DLEN0_MASK                       equ 0010h
CRCCON1_DLEN1_POSN                       equ 0005h
CRCCON1_DLEN1_POSITION                   equ 0005h
CRCCON1_DLEN1_SIZE                       equ 0001h
CRCCON1_DLEN1_LENGTH                     equ 0001h
CRCCON1_DLEN1_MASK                       equ 0020h
CRCCON1_DLEN2_POSN                       equ 0006h
CRCCON1_DLEN2_POSITION                   equ 0006h
CRCCON1_DLEN2_SIZE                       equ 0001h
CRCCON1_DLEN2_LENGTH                     equ 0001h
CRCCON1_DLEN2_MASK                       equ 0040h
CRCCON1_DLEN3_POSN                       equ 0007h
CRCCON1_DLEN3_POSITION                   equ 0007h
CRCCON1_DLEN3_SIZE                       equ 0001h
CRCCON1_DLEN3_LENGTH                     equ 0001h
CRCCON1_DLEN3_MASK                       equ 0080h

// Register: NVMADR
#define NVMADR NVMADR
NVMADR                                   equ 0F7Eh
// bitfield definitions
NVMADR_ADR_POSN                          equ 0000h
NVMADR_ADR_POSITION                      equ 0000h
NVMADR_ADR_SIZE                          equ 0008h
NVMADR_ADR_LENGTH                        equ 0008h
NVMADR_ADR_MASK                          equ 00FFh
NVMADR_ADR0_POSN                         equ 0000h
NVMADR_ADR0_POSITION                     equ 0000h
NVMADR_ADR0_SIZE                         equ 0001h
NVMADR_ADR0_LENGTH                       equ 0001h
NVMADR_ADR0_MASK                         equ 0001h
NVMADR_ADR1_POSN                         equ 0001h
NVMADR_ADR1_POSITION                     equ 0001h
NVMADR_ADR1_SIZE                         equ 0001h
NVMADR_ADR1_LENGTH                       equ 0001h
NVMADR_ADR1_MASK                         equ 0002h
NVMADR_ADR2_POSN                         equ 0002h
NVMADR_ADR2_POSITION                     equ 0002h
NVMADR_ADR2_SIZE                         equ 0001h
NVMADR_ADR2_LENGTH                       equ 0001h
NVMADR_ADR2_MASK                         equ 0004h
NVMADR_ADR3_POSN                         equ 0003h
NVMADR_ADR3_POSITION                     equ 0003h
NVMADR_ADR3_SIZE                         equ 0001h
NVMADR_ADR3_LENGTH                       equ 0001h
NVMADR_ADR3_MASK                         equ 0008h
NVMADR_ADR4_POSN                         equ 0004h
NVMADR_ADR4_POSITION                     equ 0004h
NVMADR_ADR4_SIZE                         equ 0001h
NVMADR_ADR4_LENGTH                       equ 0001h
NVMADR_ADR4_MASK                         equ 0010h
NVMADR_ADR5_POSN                         equ 0005h
NVMADR_ADR5_POSITION                     equ 0005h
NVMADR_ADR5_SIZE                         equ 0001h
NVMADR_ADR5_LENGTH                       equ 0001h
NVMADR_ADR5_MASK                         equ 0020h
NVMADR_ADR6_POSN                         equ 0006h
NVMADR_ADR6_POSITION                     equ 0006h
NVMADR_ADR6_SIZE                         equ 0001h
NVMADR_ADR6_LENGTH                       equ 0001h
NVMADR_ADR6_MASK                         equ 0040h
NVMADR_ADR7_POSN                         equ 0007h
NVMADR_ADR7_POSITION                     equ 0007h
NVMADR_ADR7_SIZE                         equ 0001h
NVMADR_ADR7_LENGTH                       equ 0001h
NVMADR_ADR7_MASK                         equ 0080h
NVMADR_NVMADR0_POSN                      equ 0000h
NVMADR_NVMADR0_POSITION                  equ 0000h
NVMADR_NVMADR0_SIZE                      equ 0001h
NVMADR_NVMADR0_LENGTH                    equ 0001h
NVMADR_NVMADR0_MASK                      equ 0001h
NVMADR_NVMADR1_POSN                      equ 0001h
NVMADR_NVMADR1_POSITION                  equ 0001h
NVMADR_NVMADR1_SIZE                      equ 0001h
NVMADR_NVMADR1_LENGTH                    equ 0001h
NVMADR_NVMADR1_MASK                      equ 0002h
NVMADR_NVMADR2_POSN                      equ 0002h
NVMADR_NVMADR2_POSITION                  equ 0002h
NVMADR_NVMADR2_SIZE                      equ 0001h
NVMADR_NVMADR2_LENGTH                    equ 0001h
NVMADR_NVMADR2_MASK                      equ 0004h
NVMADR_NVMADR3_POSN                      equ 0003h
NVMADR_NVMADR3_POSITION                  equ 0003h
NVMADR_NVMADR3_SIZE                      equ 0001h
NVMADR_NVMADR3_LENGTH                    equ 0001h
NVMADR_NVMADR3_MASK                      equ 0008h
NVMADR_NVMADR4_POSN                      equ 0004h
NVMADR_NVMADR4_POSITION                  equ 0004h
NVMADR_NVMADR4_SIZE                      equ 0001h
NVMADR_NVMADR4_LENGTH                    equ 0001h
NVMADR_NVMADR4_MASK                      equ 0010h
NVMADR_NVMADR5_POSN                      equ 0005h
NVMADR_NVMADR5_POSITION                  equ 0005h
NVMADR_NVMADR5_SIZE                      equ 0001h
NVMADR_NVMADR5_LENGTH                    equ 0001h
NVMADR_NVMADR5_MASK                      equ 0020h
NVMADR_NVMADR6_POSN                      equ 0006h
NVMADR_NVMADR6_POSITION                  equ 0006h
NVMADR_NVMADR6_SIZE                      equ 0001h
NVMADR_NVMADR6_LENGTH                    equ 0001h
NVMADR_NVMADR6_MASK                      equ 0040h
NVMADR_NVMADR7_POSN                      equ 0007h
NVMADR_NVMADR7_POSITION                  equ 0007h
NVMADR_NVMADR7_SIZE                      equ 0001h
NVMADR_NVMADR7_LENGTH                    equ 0001h
NVMADR_NVMADR7_MASK                      equ 0080h
NVMADR_ADRL_POSN                         equ 0000h
NVMADR_ADRL_POSITION                     equ 0000h
NVMADR_ADRL_SIZE                         equ 0008h
NVMADR_ADRL_LENGTH                       equ 0008h
NVMADR_ADRL_MASK                         equ 00FFh

// Register: NVMDAT
#define NVMDAT NVMDAT
NVMDAT                                   equ 0F80h
// bitfield definitions
NVMDAT_NVMDAT_POSN                       equ 0000h
NVMDAT_NVMDAT_POSITION                   equ 0000h
NVMDAT_NVMDAT_SIZE                       equ 0008h
NVMDAT_NVMDAT_LENGTH                     equ 0008h
NVMDAT_NVMDAT_MASK                       equ 00FFh
NVMDAT_NVMDAT0_POSN                      equ 0000h
NVMDAT_NVMDAT0_POSITION                  equ 0000h
NVMDAT_NVMDAT0_SIZE                      equ 0001h
NVMDAT_NVMDAT0_LENGTH                    equ 0001h
NVMDAT_NVMDAT0_MASK                      equ 0001h
NVMDAT_NVMDAT1_POSN                      equ 0001h
NVMDAT_NVMDAT1_POSITION                  equ 0001h
NVMDAT_NVMDAT1_SIZE                      equ 0001h
NVMDAT_NVMDAT1_LENGTH                    equ 0001h
NVMDAT_NVMDAT1_MASK                      equ 0002h
NVMDAT_NVMDAT2_POSN                      equ 0002h
NVMDAT_NVMDAT2_POSITION                  equ 0002h
NVMDAT_NVMDAT2_SIZE                      equ 0001h
NVMDAT_NVMDAT2_LENGTH                    equ 0001h
NVMDAT_NVMDAT2_MASK                      equ 0004h
NVMDAT_NVMDAT3_POSN                      equ 0003h
NVMDAT_NVMDAT3_POSITION                  equ 0003h
NVMDAT_NVMDAT3_SIZE                      equ 0001h
NVMDAT_NVMDAT3_LENGTH                    equ 0001h
NVMDAT_NVMDAT3_MASK                      equ 0008h
NVMDAT_NVMDAT4_POSN                      equ 0004h
NVMDAT_NVMDAT4_POSITION                  equ 0004h
NVMDAT_NVMDAT4_SIZE                      equ 0001h
NVMDAT_NVMDAT4_LENGTH                    equ 0001h
NVMDAT_NVMDAT4_MASK                      equ 0010h
NVMDAT_NVMDAT5_POSN                      equ 0005h
NVMDAT_NVMDAT5_POSITION                  equ 0005h
NVMDAT_NVMDAT5_SIZE                      equ 0001h
NVMDAT_NVMDAT5_LENGTH                    equ 0001h
NVMDAT_NVMDAT5_MASK                      equ 0020h
NVMDAT_NVMDAT6_POSN                      equ 0006h
NVMDAT_NVMDAT6_POSITION                  equ 0006h
NVMDAT_NVMDAT6_SIZE                      equ 0001h
NVMDAT_NVMDAT6_LENGTH                    equ 0001h
NVMDAT_NVMDAT6_MASK                      equ 0040h
NVMDAT_NVMDAT7_POSN                      equ 0007h
NVMDAT_NVMDAT7_POSITION                  equ 0007h
NVMDAT_NVMDAT7_SIZE                      equ 0001h
NVMDAT_NVMDAT7_LENGTH                    equ 0001h
NVMDAT_NVMDAT7_MASK                      equ 0080h

// Register: NVMCON1
#define NVMCON1 NVMCON1
NVMCON1                                  equ 0F81h
// bitfield definitions
NVMCON1_RD_POSN                          equ 0000h
NVMCON1_RD_POSITION                      equ 0000h
NVMCON1_RD_SIZE                          equ 0001h
NVMCON1_RD_LENGTH                        equ 0001h
NVMCON1_RD_MASK                          equ 0001h
NVMCON1_WR_POSN                          equ 0001h
NVMCON1_WR_POSITION                      equ 0001h
NVMCON1_WR_SIZE                          equ 0001h
NVMCON1_WR_LENGTH                        equ 0001h
NVMCON1_WR_MASK                          equ 0002h
NVMCON1_WREN_POSN                        equ 0002h
NVMCON1_WREN_POSITION                    equ 0002h
NVMCON1_WREN_SIZE                        equ 0001h
NVMCON1_WREN_LENGTH                      equ 0001h
NVMCON1_WREN_MASK                        equ 0004h
NVMCON1_WRERR_POSN                       equ 0003h
NVMCON1_WRERR_POSITION                   equ 0003h
NVMCON1_WRERR_SIZE                       equ 0001h
NVMCON1_WRERR_LENGTH                     equ 0001h
NVMCON1_WRERR_MASK                       equ 0008h
NVMCON1_FREE_POSN                        equ 0004h
NVMCON1_FREE_POSITION                    equ 0004h
NVMCON1_FREE_SIZE                        equ 0001h
NVMCON1_FREE_LENGTH                      equ 0001h
NVMCON1_FREE_MASK                        equ 0010h
NVMCON1_NVMREG_POSN                      equ 0006h
NVMCON1_NVMREG_POSITION                  equ 0006h
NVMCON1_NVMREG_SIZE                      equ 0002h
NVMCON1_NVMREG_LENGTH                    equ 0002h
NVMCON1_NVMREG_MASK                      equ 00C0h
NVMCON1_NVMREG0_POSN                     equ 0006h
NVMCON1_NVMREG0_POSITION                 equ 0006h
NVMCON1_NVMREG0_SIZE                     equ 0001h
NVMCON1_NVMREG0_LENGTH                   equ 0001h
NVMCON1_NVMREG0_MASK                     equ 0040h
NVMCON1_NVMREG1_POSN                     equ 0007h
NVMCON1_NVMREG1_POSITION                 equ 0007h
NVMCON1_NVMREG1_SIZE                     equ 0001h
NVMCON1_NVMREG1_LENGTH                   equ 0001h
NVMCON1_NVMREG1_MASK                     equ 0080h

// Register: NVMCON2
#define NVMCON2 NVMCON2
NVMCON2                                  equ 0F82h
// bitfield definitions
NVMCON2_NVMCON2_POSN                     equ 0000h
NVMCON2_NVMCON2_POSITION                 equ 0000h
NVMCON2_NVMCON2_SIZE                     equ 0008h
NVMCON2_NVMCON2_LENGTH                   equ 0008h
NVMCON2_NVMCON2_MASK                     equ 00FFh

// Register: LATA
#define LATA LATA
LATA                                     equ 0F83h
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
LATA_LA4_POSN                            equ 0004h
LATA_LA4_POSITION                        equ 0004h
LATA_LA4_SIZE                            equ 0001h
LATA_LA4_LENGTH                          equ 0001h
LATA_LA4_MASK                            equ 0010h
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
LATB                                     equ 0F84h
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
LATC                                     equ 0F85h
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
LATC_LC3_POSN                            equ 0003h
LATC_LC3_POSITION                        equ 0003h
LATC_LC3_SIZE                            equ 0001h
LATC_LC3_LENGTH                          equ 0001h
LATC_LC3_MASK                            equ 0008h
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

// Register: TRISA
#define TRISA TRISA
TRISA                                    equ 0F88h
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
TRISB                                    equ 0F89h
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
TRISC                                    equ 0F8Ah
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

// Register: PORTA
#define PORTA PORTA
PORTA                                    equ 0F8Dh
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
PORTB                                    equ 0F8Eh
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
PORTB_CCP2_PA2_POSN                      equ 0003h
PORTB_CCP2_PA2_POSITION                  equ 0003h
PORTB_CCP2_PA2_SIZE                      equ 0001h
PORTB_CCP2_PA2_LENGTH                    equ 0001h
PORTB_CCP2_PA2_MASK                      equ 0008h

// Register: PORTC
#define PORTC PORTC
PORTC                                    equ 0F8Fh
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

// Register: PORTE
#define PORTE PORTE
PORTE                                    equ 0F91h
// bitfield definitions
PORTE_RE3_POSN                           equ 0003h
PORTE_RE3_POSITION                       equ 0003h
PORTE_RE3_SIZE                           equ 0001h
PORTE_RE3_LENGTH                         equ 0001h
PORTE_RE3_MASK                           equ 0008h
PORTE_CCP9E_POSN                         equ 0003h
PORTE_CCP9E_POSITION                     equ 0003h
PORTE_CCP9E_SIZE                         equ 0001h
PORTE_CCP9E_LENGTH                       equ 0001h
PORTE_CCP9E_MASK                         equ 0008h
PORTE_PC3E_POSN                          equ 0003h
PORTE_PC3E_POSITION                      equ 0003h
PORTE_PC3E_SIZE                          equ 0001h
PORTE_PC3E_LENGTH                        equ 0001h
PORTE_PC3E_MASK                          equ 0008h

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
SSP1BUF                                  equ 0F92h
// bitfield definitions
SSP1BUF_SSPBUF_POSN                      equ 0000h
SSP1BUF_SSPBUF_POSITION                  equ 0000h
SSP1BUF_SSPBUF_SIZE                      equ 0008h
SSP1BUF_SSPBUF_LENGTH                    equ 0008h
SSP1BUF_SSPBUF_MASK                      equ 00FFh

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
SSP1ADD                                  equ 0F93h
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

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
SSP1MSK                                  equ 0F94h
// bitfield definitions
SSP1MSK_SSPMSK_POSN                      equ 0000h
SSP1MSK_SSPMSK_POSITION                  equ 0000h
SSP1MSK_SSPMSK_SIZE                      equ 0008h
SSP1MSK_SSPMSK_LENGTH                    equ 0008h
SSP1MSK_SSPMSK_MASK                      equ 00FFh
SSP1MSK_MSK0_POSN                        equ 0000h
SSP1MSK_MSK0_POSITION                    equ 0000h
SSP1MSK_MSK0_SIZE                        equ 0001h
SSP1MSK_MSK0_LENGTH                      equ 0001h
SSP1MSK_MSK0_MASK                        equ 0001h
SSP1MSK_MSK1_POSN                        equ 0001h
SSP1MSK_MSK1_POSITION                    equ 0001h
SSP1MSK_MSK1_SIZE                        equ 0001h
SSP1MSK_MSK1_LENGTH                      equ 0001h
SSP1MSK_MSK1_MASK                        equ 0002h
SSP1MSK_MSK2_POSN                        equ 0002h
SSP1MSK_MSK2_POSITION                    equ 0002h
SSP1MSK_MSK2_SIZE                        equ 0001h
SSP1MSK_MSK2_LENGTH                      equ 0001h
SSP1MSK_MSK2_MASK                        equ 0004h
SSP1MSK_MSK3_POSN                        equ 0003h
SSP1MSK_MSK3_POSITION                    equ 0003h
SSP1MSK_MSK3_SIZE                        equ 0001h
SSP1MSK_MSK3_LENGTH                      equ 0001h
SSP1MSK_MSK3_MASK                        equ 0008h
SSP1MSK_MSK4_POSN                        equ 0004h
SSP1MSK_MSK4_POSITION                    equ 0004h
SSP1MSK_MSK4_SIZE                        equ 0001h
SSP1MSK_MSK4_LENGTH                      equ 0001h
SSP1MSK_MSK4_MASK                        equ 0010h
SSP1MSK_MSK5_POSN                        equ 0005h
SSP1MSK_MSK5_POSITION                    equ 0005h
SSP1MSK_MSK5_SIZE                        equ 0001h
SSP1MSK_MSK5_LENGTH                      equ 0001h
SSP1MSK_MSK5_MASK                        equ 0020h
SSP1MSK_MSK6_POSN                        equ 0006h
SSP1MSK_MSK6_POSITION                    equ 0006h
SSP1MSK_MSK6_SIZE                        equ 0001h
SSP1MSK_MSK6_LENGTH                      equ 0001h
SSP1MSK_MSK6_MASK                        equ 0040h
SSP1MSK_MSK7_POSN                        equ 0007h
SSP1MSK_MSK7_POSITION                    equ 0007h
SSP1MSK_MSK7_SIZE                        equ 0001h
SSP1MSK_MSK7_LENGTH                      equ 0001h
SSP1MSK_MSK7_MASK                        equ 0080h

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
SSP1STAT                                 equ 0F95h
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
SSP1STAT_R_POSN                          equ 0002h
SSP1STAT_R_POSITION                      equ 0002h
SSP1STAT_R_SIZE                          equ 0001h
SSP1STAT_R_LENGTH                        equ 0001h
SSP1STAT_R_MASK                          equ 0004h
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
SSP1STAT_D_POSN                          equ 0005h
SSP1STAT_D_POSITION                      equ 0005h
SSP1STAT_D_SIZE                          equ 0001h
SSP1STAT_D_LENGTH                        equ 0001h
SSP1STAT_D_MASK                          equ 0020h
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
SSP1STAT_RW_POSN                         equ 0002h
SSP1STAT_RW_POSITION                     equ 0002h
SSP1STAT_RW_SIZE                         equ 0001h
SSP1STAT_RW_LENGTH                       equ 0001h
SSP1STAT_RW_MASK                         equ 0004h
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
SSP1STAT_I2C_START1_POSN                 equ 0003h
SSP1STAT_I2C_START1_POSITION             equ 0003h
SSP1STAT_I2C_START1_SIZE                 equ 0001h
SSP1STAT_I2C_START1_LENGTH               equ 0001h
SSP1STAT_I2C_START1_MASK                 equ 0008h
SSP1STAT_I2C_STOP2_POSN                  equ 0004h
SSP1STAT_I2C_STOP2_POSITION              equ 0004h
SSP1STAT_I2C_STOP2_SIZE                  equ 0001h
SSP1STAT_I2C_STOP2_LENGTH                equ 0001h
SSP1STAT_I2C_STOP2_MASK                  equ 0010h
SSP1STAT_DA1_POSN                        equ 0005h
SSP1STAT_DA1_POSITION                    equ 0005h
SSP1STAT_DA1_SIZE                        equ 0001h
SSP1STAT_DA1_LENGTH                      equ 0001h
SSP1STAT_DA1_MASK                        equ 0020h
SSP1STAT_I2C_READ1_POSN                  equ 0002h
SSP1STAT_I2C_READ1_POSITION              equ 0002h
SSP1STAT_I2C_READ1_SIZE                  equ 0001h
SSP1STAT_I2C_READ1_LENGTH                equ 0001h
SSP1STAT_I2C_READ1_MASK                  equ 0004h
SSP1STAT_S2_POSN                         equ 0003h
SSP1STAT_S2_POSITION                     equ 0003h
SSP1STAT_S2_SIZE                         equ 0001h
SSP1STAT_S2_LENGTH                       equ 0001h
SSP1STAT_S2_MASK                         equ 0008h
SSP1STAT_P2_POSN                         equ 0004h
SSP1STAT_P2_POSITION                     equ 0004h
SSP1STAT_P2_SIZE                         equ 0001h
SSP1STAT_P2_LENGTH                       equ 0001h
SSP1STAT_P2_MASK                         equ 0010h
SSP1STAT_DATA_ADDRESS1_POSN              equ 0005h
SSP1STAT_DATA_ADDRESS1_POSITION          equ 0005h
SSP1STAT_DATA_ADDRESS1_SIZE              equ 0001h
SSP1STAT_DATA_ADDRESS1_LENGTH            equ 0001h
SSP1STAT_DATA_ADDRESS1_MASK              equ 0020h
SSP1STAT_READ_WRITE1_POSN                equ 0002h
SSP1STAT_READ_WRITE1_POSITION            equ 0002h
SSP1STAT_READ_WRITE1_SIZE                equ 0001h
SSP1STAT_READ_WRITE1_LENGTH              equ 0001h
SSP1STAT_READ_WRITE1_MASK                equ 0004h
SSP1STAT_D_A1_POSN                       equ 0005h
SSP1STAT_D_A1_POSITION                   equ 0005h
SSP1STAT_D_A1_SIZE                       equ 0001h
SSP1STAT_D_A1_LENGTH                     equ 0001h
SSP1STAT_D_A1_MASK                       equ 0020h
SSP1STAT_D_NOT_A1_POSN                   equ 0005h
SSP1STAT_D_NOT_A1_POSITION               equ 0005h
SSP1STAT_D_NOT_A1_SIZE                   equ 0001h
SSP1STAT_D_NOT_A1_LENGTH                 equ 0001h
SSP1STAT_D_NOT_A1_MASK                   equ 0020h
SSP1STAT_R_W1_POSN                       equ 0002h
SSP1STAT_R_W1_POSITION                   equ 0002h
SSP1STAT_R_W1_SIZE                       equ 0001h
SSP1STAT_R_W1_LENGTH                     equ 0001h
SSP1STAT_R_W1_MASK                       equ 0004h
SSP1STAT_D_nA1_POSN                      equ 0005h
SSP1STAT_D_nA1_POSITION                  equ 0005h
SSP1STAT_D_nA1_SIZE                      equ 0001h
SSP1STAT_D_nA1_LENGTH                    equ 0001h
SSP1STAT_D_nA1_MASK                      equ 0020h
SSP1STAT_R_NOT_W1_POSN                   equ 0002h
SSP1STAT_R_NOT_W1_POSITION               equ 0002h
SSP1STAT_R_NOT_W1_SIZE                   equ 0001h
SSP1STAT_R_NOT_W1_LENGTH                 equ 0001h
SSP1STAT_R_NOT_W1_MASK                   equ 0004h
SSP1STAT_R_nW1_POSN                      equ 0002h
SSP1STAT_R_nW1_POSITION                  equ 0002h
SSP1STAT_R_nW1_SIZE                      equ 0001h
SSP1STAT_R_nW1_LENGTH                    equ 0001h
SSP1STAT_R_nW1_MASK                      equ 0004h
SSP1STAT_I2C_DAT1_POSN                   equ 0005h
SSP1STAT_I2C_DAT1_POSITION               equ 0005h
SSP1STAT_I2C_DAT1_SIZE                   equ 0001h
SSP1STAT_I2C_DAT1_LENGTH                 equ 0001h
SSP1STAT_I2C_DAT1_MASK                   equ 0020h
SSP1STAT_NOT_W2_POSN                     equ 0002h
SSP1STAT_NOT_W2_POSITION                 equ 0002h
SSP1STAT_NOT_W2_SIZE                     equ 0001h
SSP1STAT_NOT_W2_LENGTH                   equ 0001h
SSP1STAT_NOT_W2_MASK                     equ 0004h
SSP1STAT_NOT_A2_POSN                     equ 0005h
SSP1STAT_NOT_A2_POSITION                 equ 0005h
SSP1STAT_NOT_A2_SIZE                     equ 0001h
SSP1STAT_NOT_A2_LENGTH                   equ 0001h
SSP1STAT_NOT_A2_MASK                     equ 0020h
SSP1STAT_nW2_POSN                        equ 0002h
SSP1STAT_nW2_POSITION                    equ 0002h
SSP1STAT_nW2_SIZE                        equ 0001h
SSP1STAT_nW2_LENGTH                      equ 0001h
SSP1STAT_nW2_MASK                        equ 0004h
SSP1STAT_nA2_POSN                        equ 0005h
SSP1STAT_nA2_POSITION                    equ 0005h
SSP1STAT_nA2_SIZE                        equ 0001h
SSP1STAT_nA2_LENGTH                      equ 0001h
SSP1STAT_nA2_MASK                        equ 0020h
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

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
SSP1CON1                                 equ 0F96h
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

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
SSP1CON2                                 equ 0F97h
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
SSP1CON2_ADMSK_POSN                      equ 0001h
SSP1CON2_ADMSK_POSITION                  equ 0001h
SSP1CON2_ADMSK_SIZE                      equ 0005h
SSP1CON2_ADMSK_LENGTH                    equ 0005h
SSP1CON2_ADMSK_MASK                      equ 003Eh
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

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
SSP1CON3                                 equ 0F98h
// bitfield definitions
SSP1CON3_DHEN_POSN                       equ 0000h
SSP1CON3_DHEN_POSITION                   equ 0000h
SSP1CON3_DHEN_SIZE                       equ 0001h
SSP1CON3_DHEN_LENGTH                     equ 0001h
SSP1CON3_DHEN_MASK                       equ 0001h
SSP1CON3_AHEN_POSN                       equ 0001h
SSP1CON3_AHEN_POSITION                   equ 0001h
SSP1CON3_AHEN_SIZE                       equ 0001h
SSP1CON3_AHEN_LENGTH                     equ 0001h
SSP1CON3_AHEN_MASK                       equ 0002h
SSP1CON3_SBCDE_POSN                      equ 0002h
SSP1CON3_SBCDE_POSITION                  equ 0002h
SSP1CON3_SBCDE_SIZE                      equ 0001h
SSP1CON3_SBCDE_LENGTH                    equ 0001h
SSP1CON3_SBCDE_MASK                      equ 0004h
SSP1CON3_SDAHT_POSN                      equ 0003h
SSP1CON3_SDAHT_POSITION                  equ 0003h
SSP1CON3_SDAHT_SIZE                      equ 0001h
SSP1CON3_SDAHT_LENGTH                    equ 0001h
SSP1CON3_SDAHT_MASK                      equ 0008h
SSP1CON3_BOEN_POSN                       equ 0004h
SSP1CON3_BOEN_POSITION                   equ 0004h
SSP1CON3_BOEN_SIZE                       equ 0001h
SSP1CON3_BOEN_LENGTH                     equ 0001h
SSP1CON3_BOEN_MASK                       equ 0010h
SSP1CON3_SCIE_POSN                       equ 0005h
SSP1CON3_SCIE_POSITION                   equ 0005h
SSP1CON3_SCIE_SIZE                       equ 0001h
SSP1CON3_SCIE_LENGTH                     equ 0001h
SSP1CON3_SCIE_MASK                       equ 0020h
SSP1CON3_PCIE_POSN                       equ 0006h
SSP1CON3_PCIE_POSITION                   equ 0006h
SSP1CON3_PCIE_SIZE                       equ 0001h
SSP1CON3_PCIE_LENGTH                     equ 0001h
SSP1CON3_PCIE_MASK                       equ 0040h
SSP1CON3_ACKTIM_POSN                     equ 0007h
SSP1CON3_ACKTIM_POSITION                 equ 0007h
SSP1CON3_ACKTIM_SIZE                     equ 0001h
SSP1CON3_ACKTIM_LENGTH                   equ 0001h
SSP1CON3_ACKTIM_MASK                     equ 0080h

// Register: RC1REG
#define RC1REG RC1REG
RC1REG                                   equ 0F99h
// bitfield definitions
RC1REG_RC1REG_POSN                       equ 0000h
RC1REG_RC1REG_POSITION                   equ 0000h
RC1REG_RC1REG_SIZE                       equ 0008h
RC1REG_RC1REG_LENGTH                     equ 0008h
RC1REG_RC1REG_MASK                       equ 00FFh

// Register: TX1REG
#define TX1REG TX1REG
TX1REG                                   equ 0F9Ah
// bitfield definitions
TX1REG_TX1REG_POSN                       equ 0000h
TX1REG_TX1REG_POSITION                   equ 0000h
TX1REG_TX1REG_SIZE                       equ 0008h
TX1REG_TX1REG_LENGTH                     equ 0008h
TX1REG_TX1REG_MASK                       equ 00FFh

// Register: SP1BRG
#define SP1BRG SP1BRG
SP1BRG                                   equ 0F9Bh

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
SP1BRGL                                  equ 0F9Bh
// bitfield definitions
SP1BRGL_SP1BRGL_POSN                     equ 0000h
SP1BRGL_SP1BRGL_POSITION                 equ 0000h
SP1BRGL_SP1BRGL_SIZE                     equ 0008h
SP1BRGL_SP1BRGL_LENGTH                   equ 0008h
SP1BRGL_SP1BRGL_MASK                     equ 00FFh

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
SP1BRGH                                  equ 0F9Ch
// bitfield definitions
SP1BRGH_SP1BRGH_POSN                     equ 0000h
SP1BRGH_SP1BRGH_POSITION                 equ 0000h
SP1BRGH_SP1BRGH_SIZE                     equ 0008h
SP1BRGH_SP1BRGH_LENGTH                   equ 0008h
SP1BRGH_SP1BRGH_MASK                     equ 00FFh

// Register: RC1STA
#define RC1STA RC1STA
RC1STA                                   equ 0F9Dh
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
RC1STA_RC8_9_POSN                        equ 0006h
RC1STA_RC8_9_POSITION                    equ 0006h
RC1STA_RC8_9_SIZE                        equ 0001h
RC1STA_RC8_9_LENGTH                      equ 0001h
RC1STA_RC8_9_MASK                        equ 0040h
RC1STA_RC9_POSN                          equ 0006h
RC1STA_RC9_POSITION                      equ 0006h
RC1STA_RC9_SIZE                          equ 0001h
RC1STA_RC9_LENGTH                        equ 0001h
RC1STA_RC9_MASK                          equ 0040h
RC1STA_RCD8_POSN                         equ 0000h
RC1STA_RCD8_POSITION                     equ 0000h
RC1STA_RCD8_SIZE                         equ 0001h
RC1STA_RCD8_LENGTH                       equ 0001h
RC1STA_RCD8_MASK                         equ 0001h
RC1STA_SRENA_POSN                        equ 0005h
RC1STA_SRENA_POSITION                    equ 0005h
RC1STA_SRENA_SIZE                        equ 0001h
RC1STA_SRENA_LENGTH                      equ 0001h
RC1STA_SRENA_MASK                        equ 0020h

// Register: TX1STA
#define TX1STA TX1STA
TX1STA                                   equ 0F9Eh
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
TX1STA_TX8_9_POSN                        equ 0006h
TX1STA_TX8_9_POSITION                    equ 0006h
TX1STA_TX8_9_SIZE                        equ 0001h
TX1STA_TX8_9_LENGTH                      equ 0001h
TX1STA_TX8_9_MASK                        equ 0040h
TX1STA_TXD8_POSN                         equ 0000h
TX1STA_TXD8_POSITION                     equ 0000h
TX1STA_TXD8_SIZE                         equ 0001h
TX1STA_TXD8_LENGTH                       equ 0001h
TX1STA_TXD8_MASK                         equ 0001h
TX1STA_BRGH1_POSN                        equ 0002h
TX1STA_BRGH1_POSITION                    equ 0002h
TX1STA_BRGH1_SIZE                        equ 0001h
TX1STA_BRGH1_LENGTH                      equ 0001h
TX1STA_BRGH1_MASK                        equ 0004h
TX1STA_CSRC1_POSN                        equ 0007h
TX1STA_CSRC1_POSITION                    equ 0007h
TX1STA_CSRC1_SIZE                        equ 0001h
TX1STA_CSRC1_LENGTH                      equ 0001h
TX1STA_CSRC1_MASK                        equ 0080h
TX1STA_SENDB1_POSN                       equ 0003h
TX1STA_SENDB1_POSITION                   equ 0003h
TX1STA_SENDB1_SIZE                       equ 0001h
TX1STA_SENDB1_LENGTH                     equ 0001h
TX1STA_SENDB1_MASK                       equ 0008h
TX1STA_SYNC1_POSN                        equ 0004h
TX1STA_SYNC1_POSITION                    equ 0004h
TX1STA_SYNC1_SIZE                        equ 0001h
TX1STA_SYNC1_LENGTH                      equ 0001h
TX1STA_SYNC1_MASK                        equ 0010h
TX1STA_TRMT1_POSN                        equ 0001h
TX1STA_TRMT1_POSITION                    equ 0001h
TX1STA_TRMT1_SIZE                        equ 0001h
TX1STA_TRMT1_LENGTH                      equ 0001h
TX1STA_TRMT1_MASK                        equ 0002h
TX1STA_TX91_POSN                         equ 0006h
TX1STA_TX91_POSITION                     equ 0006h
TX1STA_TX91_SIZE                         equ 0001h
TX1STA_TX91_LENGTH                       equ 0001h
TX1STA_TX91_MASK                         equ 0040h
TX1STA_TX9D1_POSN                        equ 0000h
TX1STA_TX9D1_POSITION                    equ 0000h
TX1STA_TX9D1_SIZE                        equ 0001h
TX1STA_TX9D1_LENGTH                      equ 0001h
TX1STA_TX9D1_MASK                        equ 0001h
TX1STA_TXEN1_POSN                        equ 0005h
TX1STA_TXEN1_POSITION                    equ 0005h
TX1STA_TXEN1_SIZE                        equ 0001h
TX1STA_TXEN1_LENGTH                      equ 0001h
TX1STA_TXEN1_MASK                        equ 0020h

// Register: BAUD1CON
#define BAUD1CON BAUD1CON
BAUD1CON                                 equ 0F9Fh
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
BAUD1CON_ABDEN1_POSN                     equ 0000h
BAUD1CON_ABDEN1_POSITION                 equ 0000h
BAUD1CON_ABDEN1_SIZE                     equ 0001h
BAUD1CON_ABDEN1_LENGTH                   equ 0001h
BAUD1CON_ABDEN1_MASK                     equ 0001h
BAUD1CON_ABDOVF1_POSN                    equ 0007h
BAUD1CON_ABDOVF1_POSITION                equ 0007h
BAUD1CON_ABDOVF1_SIZE                    equ 0001h
BAUD1CON_ABDOVF1_LENGTH                  equ 0001h
BAUD1CON_ABDOVF1_MASK                    equ 0080h
BAUD1CON_BRG161_POSN                     equ 0003h
BAUD1CON_BRG161_POSITION                 equ 0003h
BAUD1CON_BRG161_SIZE                     equ 0001h
BAUD1CON_BRG161_LENGTH                   equ 0001h
BAUD1CON_BRG161_MASK                     equ 0008h
BAUD1CON_CKTXP_POSN                      equ 0004h
BAUD1CON_CKTXP_POSITION                  equ 0004h
BAUD1CON_CKTXP_SIZE                      equ 0001h
BAUD1CON_CKTXP_LENGTH                    equ 0001h
BAUD1CON_CKTXP_MASK                      equ 0010h
BAUD1CON_RCIDL1_POSN                     equ 0006h
BAUD1CON_RCIDL1_POSITION                 equ 0006h
BAUD1CON_RCIDL1_SIZE                     equ 0001h
BAUD1CON_RCIDL1_LENGTH                   equ 0001h
BAUD1CON_RCIDL1_MASK                     equ 0040h
BAUD1CON_RCMT_POSN                       equ 0006h
BAUD1CON_RCMT_POSITION                   equ 0006h
BAUD1CON_RCMT_SIZE                       equ 0001h
BAUD1CON_RCMT_LENGTH                     equ 0001h
BAUD1CON_RCMT_MASK                       equ 0040h
BAUD1CON_RCMT1_POSN                      equ 0006h
BAUD1CON_RCMT1_POSITION                  equ 0006h
BAUD1CON_RCMT1_SIZE                      equ 0001h
BAUD1CON_RCMT1_LENGTH                    equ 0001h
BAUD1CON_RCMT1_MASK                      equ 0040h
BAUD1CON_SCKP1_POSN                      equ 0004h
BAUD1CON_SCKP1_POSITION                  equ 0004h
BAUD1CON_SCKP1_SIZE                      equ 0001h
BAUD1CON_SCKP1_LENGTH                    equ 0001h
BAUD1CON_SCKP1_MASK                      equ 0010h
BAUD1CON_TXCKP_POSN                      equ 0004h
BAUD1CON_TXCKP_POSITION                  equ 0004h
BAUD1CON_TXCKP_SIZE                      equ 0001h
BAUD1CON_TXCKP_LENGTH                    equ 0001h
BAUD1CON_TXCKP_MASK                      equ 0010h
BAUD1CON_TXCKP1_POSN                     equ 0004h
BAUD1CON_TXCKP1_POSITION                 equ 0004h
BAUD1CON_TXCKP1_SIZE                     equ 0001h
BAUD1CON_TXCKP1_LENGTH                   equ 0001h
BAUD1CON_TXCKP1_MASK                     equ 0010h
BAUD1CON_WUE1_POSN                       equ 0001h
BAUD1CON_WUE1_POSITION                   equ 0001h
BAUD1CON_WUE1_SIZE                       equ 0001h
BAUD1CON_WUE1_LENGTH                     equ 0001h
BAUD1CON_WUE1_MASK                       equ 0002h
BAUD1CON_W4E_POSN                        equ 0001h
BAUD1CON_W4E_POSITION                    equ 0001h
BAUD1CON_W4E_SIZE                        equ 0001h
BAUD1CON_W4E_LENGTH                      equ 0001h
BAUD1CON_W4E_MASK                        equ 0002h

// Register: PWM4DC
#define PWM4DC PWM4DC
PWM4DC                                   equ 0FA0h

// Register: PWM4DCL
#define PWM4DCL PWM4DCL
PWM4DCL                                  equ 0FA0h
// bitfield definitions
PWM4DCL_DC_POSN                          equ 0006h
PWM4DCL_DC_POSITION                      equ 0006h
PWM4DCL_DC_SIZE                          equ 0002h
PWM4DCL_DC_LENGTH                        equ 0002h
PWM4DCL_DC_MASK                          equ 00C0h
PWM4DCL_DC0_POSN                         equ 0006h
PWM4DCL_DC0_POSITION                     equ 0006h
PWM4DCL_DC0_SIZE                         equ 0001h
PWM4DCL_DC0_LENGTH                       equ 0001h
PWM4DCL_DC0_MASK                         equ 0040h
PWM4DCL_DC1_POSN                         equ 0007h
PWM4DCL_DC1_POSITION                     equ 0007h
PWM4DCL_DC1_SIZE                         equ 0001h
PWM4DCL_DC1_LENGTH                       equ 0001h
PWM4DCL_DC1_MASK                         equ 0080h
PWM4DCL_PWM4DC0_POSN                     equ 0006h
PWM4DCL_PWM4DC0_POSITION                 equ 0006h
PWM4DCL_PWM4DC0_SIZE                     equ 0001h
PWM4DCL_PWM4DC0_LENGTH                   equ 0001h
PWM4DCL_PWM4DC0_MASK                     equ 0040h
PWM4DCL_PWM4DC1_POSN                     equ 0007h
PWM4DCL_PWM4DC1_POSITION                 equ 0007h
PWM4DCL_PWM4DC1_SIZE                     equ 0001h
PWM4DCL_PWM4DC1_LENGTH                   equ 0001h
PWM4DCL_PWM4DC1_MASK                     equ 0080h
PWM4DCL_PWMPW0_POSN                      equ 0006h
PWM4DCL_PWMPW0_POSITION                  equ 0006h
PWM4DCL_PWMPW0_SIZE                      equ 0001h
PWM4DCL_PWMPW0_LENGTH                    equ 0001h
PWM4DCL_PWMPW0_MASK                      equ 0040h
PWM4DCL_PWMPW1_POSN                      equ 0007h
PWM4DCL_PWMPW1_POSITION                  equ 0007h
PWM4DCL_PWMPW1_SIZE                      equ 0001h
PWM4DCL_PWMPW1_LENGTH                    equ 0001h
PWM4DCL_PWMPW1_MASK                      equ 0080h

// Register: PWM4DCH
#define PWM4DCH PWM4DCH
PWM4DCH                                  equ 0FA1h
// bitfield definitions
PWM4DCH_DC_POSN                          equ 0000h
PWM4DCH_DC_POSITION                      equ 0000h
PWM4DCH_DC_SIZE                          equ 0008h
PWM4DCH_DC_LENGTH                        equ 0008h
PWM4DCH_DC_MASK                          equ 00FFh
PWM4DCH_DC2_POSN                         equ 0000h
PWM4DCH_DC2_POSITION                     equ 0000h
PWM4DCH_DC2_SIZE                         equ 0001h
PWM4DCH_DC2_LENGTH                       equ 0001h
PWM4DCH_DC2_MASK                         equ 0001h
PWM4DCH_DC3_POSN                         equ 0001h
PWM4DCH_DC3_POSITION                     equ 0001h
PWM4DCH_DC3_SIZE                         equ 0001h
PWM4DCH_DC3_LENGTH                       equ 0001h
PWM4DCH_DC3_MASK                         equ 0002h
PWM4DCH_DC4_POSN                         equ 0002h
PWM4DCH_DC4_POSITION                     equ 0002h
PWM4DCH_DC4_SIZE                         equ 0001h
PWM4DCH_DC4_LENGTH                       equ 0001h
PWM4DCH_DC4_MASK                         equ 0004h
PWM4DCH_DC5_POSN                         equ 0003h
PWM4DCH_DC5_POSITION                     equ 0003h
PWM4DCH_DC5_SIZE                         equ 0001h
PWM4DCH_DC5_LENGTH                       equ 0001h
PWM4DCH_DC5_MASK                         equ 0008h
PWM4DCH_DC6_POSN                         equ 0004h
PWM4DCH_DC6_POSITION                     equ 0004h
PWM4DCH_DC6_SIZE                         equ 0001h
PWM4DCH_DC6_LENGTH                       equ 0001h
PWM4DCH_DC6_MASK                         equ 0010h
PWM4DCH_DC7_POSN                         equ 0005h
PWM4DCH_DC7_POSITION                     equ 0005h
PWM4DCH_DC7_SIZE                         equ 0001h
PWM4DCH_DC7_LENGTH                       equ 0001h
PWM4DCH_DC7_MASK                         equ 0020h
PWM4DCH_DC8_POSN                         equ 0006h
PWM4DCH_DC8_POSITION                     equ 0006h
PWM4DCH_DC8_SIZE                         equ 0001h
PWM4DCH_DC8_LENGTH                       equ 0001h
PWM4DCH_DC8_MASK                         equ 0040h
PWM4DCH_DC9_POSN                         equ 0007h
PWM4DCH_DC9_POSITION                     equ 0007h
PWM4DCH_DC9_SIZE                         equ 0001h
PWM4DCH_DC9_LENGTH                       equ 0001h
PWM4DCH_DC9_MASK                         equ 0080h
PWM4DCH_PWM4DC2_POSN                     equ 0000h
PWM4DCH_PWM4DC2_POSITION                 equ 0000h
PWM4DCH_PWM4DC2_SIZE                     equ 0001h
PWM4DCH_PWM4DC2_LENGTH                   equ 0001h
PWM4DCH_PWM4DC2_MASK                     equ 0001h
PWM4DCH_PWM4DC3_POSN                     equ 0001h
PWM4DCH_PWM4DC3_POSITION                 equ 0001h
PWM4DCH_PWM4DC3_SIZE                     equ 0001h
PWM4DCH_PWM4DC3_LENGTH                   equ 0001h
PWM4DCH_PWM4DC3_MASK                     equ 0002h
PWM4DCH_PWM4DC4_POSN                     equ 0002h
PWM4DCH_PWM4DC4_POSITION                 equ 0002h
PWM4DCH_PWM4DC4_SIZE                     equ 0001h
PWM4DCH_PWM4DC4_LENGTH                   equ 0001h
PWM4DCH_PWM4DC4_MASK                     equ 0004h
PWM4DCH_PWM4DC5_POSN                     equ 0003h
PWM4DCH_PWM4DC5_POSITION                 equ 0003h
PWM4DCH_PWM4DC5_SIZE                     equ 0001h
PWM4DCH_PWM4DC5_LENGTH                   equ 0001h
PWM4DCH_PWM4DC5_MASK                     equ 0008h
PWM4DCH_PWM4DC6_POSN                     equ 0004h
PWM4DCH_PWM4DC6_POSITION                 equ 0004h
PWM4DCH_PWM4DC6_SIZE                     equ 0001h
PWM4DCH_PWM4DC6_LENGTH                   equ 0001h
PWM4DCH_PWM4DC6_MASK                     equ 0010h
PWM4DCH_PWM4DC7_POSN                     equ 0005h
PWM4DCH_PWM4DC7_POSITION                 equ 0005h
PWM4DCH_PWM4DC7_SIZE                     equ 0001h
PWM4DCH_PWM4DC7_LENGTH                   equ 0001h
PWM4DCH_PWM4DC7_MASK                     equ 0020h
PWM4DCH_PWM4DC8_POSN                     equ 0006h
PWM4DCH_PWM4DC8_POSITION                 equ 0006h
PWM4DCH_PWM4DC8_SIZE                     equ 0001h
PWM4DCH_PWM4DC8_LENGTH                   equ 0001h
PWM4DCH_PWM4DC8_MASK                     equ 0040h
PWM4DCH_PWM4DC9_POSN                     equ 0007h
PWM4DCH_PWM4DC9_POSITION                 equ 0007h
PWM4DCH_PWM4DC9_SIZE                     equ 0001h
PWM4DCH_PWM4DC9_LENGTH                   equ 0001h
PWM4DCH_PWM4DC9_MASK                     equ 0080h
PWM4DCH_PWMPW2_POSN                      equ 0000h
PWM4DCH_PWMPW2_POSITION                  equ 0000h
PWM4DCH_PWMPW2_SIZE                      equ 0001h
PWM4DCH_PWMPW2_LENGTH                    equ 0001h
PWM4DCH_PWMPW2_MASK                      equ 0001h
PWM4DCH_PWMPW3_POSN                      equ 0001h
PWM4DCH_PWMPW3_POSITION                  equ 0001h
PWM4DCH_PWMPW3_SIZE                      equ 0001h
PWM4DCH_PWMPW3_LENGTH                    equ 0001h
PWM4DCH_PWMPW3_MASK                      equ 0002h
PWM4DCH_PWMPW4_POSN                      equ 0002h
PWM4DCH_PWMPW4_POSITION                  equ 0002h
PWM4DCH_PWMPW4_SIZE                      equ 0001h
PWM4DCH_PWMPW4_LENGTH                    equ 0001h
PWM4DCH_PWMPW4_MASK                      equ 0004h
PWM4DCH_PWMPW5_POSN                      equ 0003h
PWM4DCH_PWMPW5_POSITION                  equ 0003h
PWM4DCH_PWMPW5_SIZE                      equ 0001h
PWM4DCH_PWMPW5_LENGTH                    equ 0001h
PWM4DCH_PWMPW5_MASK                      equ 0008h
PWM4DCH_PWMPW6_POSN                      equ 0004h
PWM4DCH_PWMPW6_POSITION                  equ 0004h
PWM4DCH_PWMPW6_SIZE                      equ 0001h
PWM4DCH_PWMPW6_LENGTH                    equ 0001h
PWM4DCH_PWMPW6_MASK                      equ 0010h
PWM4DCH_PWMPW7_POSN                      equ 0005h
PWM4DCH_PWMPW7_POSITION                  equ 0005h
PWM4DCH_PWMPW7_SIZE                      equ 0001h
PWM4DCH_PWMPW7_LENGTH                    equ 0001h
PWM4DCH_PWMPW7_MASK                      equ 0020h
PWM4DCH_PWMPW8_POSN                      equ 0006h
PWM4DCH_PWMPW8_POSITION                  equ 0006h
PWM4DCH_PWMPW8_SIZE                      equ 0001h
PWM4DCH_PWMPW8_LENGTH                    equ 0001h
PWM4DCH_PWMPW8_MASK                      equ 0040h
PWM4DCH_PWMPW9_POSN                      equ 0007h
PWM4DCH_PWMPW9_POSITION                  equ 0007h
PWM4DCH_PWMPW9_SIZE                      equ 0001h
PWM4DCH_PWMPW9_LENGTH                    equ 0001h
PWM4DCH_PWMPW9_MASK                      equ 0080h

// Register: PWM4CON
#define PWM4CON PWM4CON
PWM4CON                                  equ 0FA2h
// bitfield definitions
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
PWM4CON_EN_POSN                          equ 0007h
PWM4CON_EN_POSITION                      equ 0007h
PWM4CON_EN_SIZE                          equ 0001h
PWM4CON_EN_LENGTH                        equ 0001h
PWM4CON_EN_MASK                          equ 0080h
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
PWM4CON_PWM4EN_POSN                      equ 0007h
PWM4CON_PWM4EN_POSITION                  equ 0007h
PWM4CON_PWM4EN_SIZE                      equ 0001h
PWM4CON_PWM4EN_LENGTH                    equ 0001h
PWM4CON_PWM4EN_MASK                      equ 0080h

// Register: PWM3DC
#define PWM3DC PWM3DC
PWM3DC                                   equ 0FA3h

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
PWM3DCL                                  equ 0FA3h
// bitfield definitions
PWM3DCL_DC_POSN                          equ 0006h
PWM3DCL_DC_POSITION                      equ 0006h
PWM3DCL_DC_SIZE                          equ 0002h
PWM3DCL_DC_LENGTH                        equ 0002h
PWM3DCL_DC_MASK                          equ 00C0h
PWM3DCL_DC0_POSN                         equ 0006h
PWM3DCL_DC0_POSITION                     equ 0006h
PWM3DCL_DC0_SIZE                         equ 0001h
PWM3DCL_DC0_LENGTH                       equ 0001h
PWM3DCL_DC0_MASK                         equ 0040h
PWM3DCL_DC1_POSN                         equ 0007h
PWM3DCL_DC1_POSITION                     equ 0007h
PWM3DCL_DC1_SIZE                         equ 0001h
PWM3DCL_DC1_LENGTH                       equ 0001h
PWM3DCL_DC1_MASK                         equ 0080h
PWM3DCL_PWM3DC0_POSN                     equ 0006h
PWM3DCL_PWM3DC0_POSITION                 equ 0006h
PWM3DCL_PWM3DC0_SIZE                     equ 0001h
PWM3DCL_PWM3DC0_LENGTH                   equ 0001h
PWM3DCL_PWM3DC0_MASK                     equ 0040h
PWM3DCL_PWM3DC1_POSN                     equ 0007h
PWM3DCL_PWM3DC1_POSITION                 equ 0007h
PWM3DCL_PWM3DC1_SIZE                     equ 0001h
PWM3DCL_PWM3DC1_LENGTH                   equ 0001h
PWM3DCL_PWM3DC1_MASK                     equ 0080h
PWM3DCL_PWMPW0_POSN                      equ 0006h
PWM3DCL_PWMPW0_POSITION                  equ 0006h
PWM3DCL_PWMPW0_SIZE                      equ 0001h
PWM3DCL_PWMPW0_LENGTH                    equ 0001h
PWM3DCL_PWMPW0_MASK                      equ 0040h
PWM3DCL_PWMPW1_POSN                      equ 0007h
PWM3DCL_PWMPW1_POSITION                  equ 0007h
PWM3DCL_PWMPW1_SIZE                      equ 0001h
PWM3DCL_PWMPW1_LENGTH                    equ 0001h
PWM3DCL_PWMPW1_MASK                      equ 0080h

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
PWM3DCH                                  equ 0FA4h
// bitfield definitions
PWM3DCH_DC_POSN                          equ 0000h
PWM3DCH_DC_POSITION                      equ 0000h
PWM3DCH_DC_SIZE                          equ 0008h
PWM3DCH_DC_LENGTH                        equ 0008h
PWM3DCH_DC_MASK                          equ 00FFh
PWM3DCH_DC2_POSN                         equ 0000h
PWM3DCH_DC2_POSITION                     equ 0000h
PWM3DCH_DC2_SIZE                         equ 0001h
PWM3DCH_DC2_LENGTH                       equ 0001h
PWM3DCH_DC2_MASK                         equ 0001h
PWM3DCH_DC3_POSN                         equ 0001h
PWM3DCH_DC3_POSITION                     equ 0001h
PWM3DCH_DC3_SIZE                         equ 0001h
PWM3DCH_DC3_LENGTH                       equ 0001h
PWM3DCH_DC3_MASK                         equ 0002h
PWM3DCH_DC4_POSN                         equ 0002h
PWM3DCH_DC4_POSITION                     equ 0002h
PWM3DCH_DC4_SIZE                         equ 0001h
PWM3DCH_DC4_LENGTH                       equ 0001h
PWM3DCH_DC4_MASK                         equ 0004h
PWM3DCH_DC5_POSN                         equ 0003h
PWM3DCH_DC5_POSITION                     equ 0003h
PWM3DCH_DC5_SIZE                         equ 0001h
PWM3DCH_DC5_LENGTH                       equ 0001h
PWM3DCH_DC5_MASK                         equ 0008h
PWM3DCH_DC6_POSN                         equ 0004h
PWM3DCH_DC6_POSITION                     equ 0004h
PWM3DCH_DC6_SIZE                         equ 0001h
PWM3DCH_DC6_LENGTH                       equ 0001h
PWM3DCH_DC6_MASK                         equ 0010h
PWM3DCH_DC7_POSN                         equ 0005h
PWM3DCH_DC7_POSITION                     equ 0005h
PWM3DCH_DC7_SIZE                         equ 0001h
PWM3DCH_DC7_LENGTH                       equ 0001h
PWM3DCH_DC7_MASK                         equ 0020h
PWM3DCH_DC8_POSN                         equ 0006h
PWM3DCH_DC8_POSITION                     equ 0006h
PWM3DCH_DC8_SIZE                         equ 0001h
PWM3DCH_DC8_LENGTH                       equ 0001h
PWM3DCH_DC8_MASK                         equ 0040h
PWM3DCH_DC9_POSN                         equ 0007h
PWM3DCH_DC9_POSITION                     equ 0007h
PWM3DCH_DC9_SIZE                         equ 0001h
PWM3DCH_DC9_LENGTH                       equ 0001h
PWM3DCH_DC9_MASK                         equ 0080h
PWM3DCH_PWM3DC2_POSN                     equ 0000h
PWM3DCH_PWM3DC2_POSITION                 equ 0000h
PWM3DCH_PWM3DC2_SIZE                     equ 0001h
PWM3DCH_PWM3DC2_LENGTH                   equ 0001h
PWM3DCH_PWM3DC2_MASK                     equ 0001h
PWM3DCH_PWM3DC3_POSN                     equ 0001h
PWM3DCH_PWM3DC3_POSITION                 equ 0001h
PWM3DCH_PWM3DC3_SIZE                     equ 0001h
PWM3DCH_PWM3DC3_LENGTH                   equ 0001h
PWM3DCH_PWM3DC3_MASK                     equ 0002h
PWM3DCH_PWM3DC4_POSN                     equ 0002h
PWM3DCH_PWM3DC4_POSITION                 equ 0002h
PWM3DCH_PWM3DC4_SIZE                     equ 0001h
PWM3DCH_PWM3DC4_LENGTH                   equ 0001h
PWM3DCH_PWM3DC4_MASK                     equ 0004h
PWM3DCH_PWM3DC5_POSN                     equ 0003h
PWM3DCH_PWM3DC5_POSITION                 equ 0003h
PWM3DCH_PWM3DC5_SIZE                     equ 0001h
PWM3DCH_PWM3DC5_LENGTH                   equ 0001h
PWM3DCH_PWM3DC5_MASK                     equ 0008h
PWM3DCH_PWM3DC6_POSN                     equ 0004h
PWM3DCH_PWM3DC6_POSITION                 equ 0004h
PWM3DCH_PWM3DC6_SIZE                     equ 0001h
PWM3DCH_PWM3DC6_LENGTH                   equ 0001h
PWM3DCH_PWM3DC6_MASK                     equ 0010h
PWM3DCH_PWM3DC7_POSN                     equ 0005h
PWM3DCH_PWM3DC7_POSITION                 equ 0005h
PWM3DCH_PWM3DC7_SIZE                     equ 0001h
PWM3DCH_PWM3DC7_LENGTH                   equ 0001h
PWM3DCH_PWM3DC7_MASK                     equ 0020h
PWM3DCH_PWM3DC8_POSN                     equ 0006h
PWM3DCH_PWM3DC8_POSITION                 equ 0006h
PWM3DCH_PWM3DC8_SIZE                     equ 0001h
PWM3DCH_PWM3DC8_LENGTH                   equ 0001h
PWM3DCH_PWM3DC8_MASK                     equ 0040h
PWM3DCH_PWM3DC9_POSN                     equ 0007h
PWM3DCH_PWM3DC9_POSITION                 equ 0007h
PWM3DCH_PWM3DC9_SIZE                     equ 0001h
PWM3DCH_PWM3DC9_LENGTH                   equ 0001h
PWM3DCH_PWM3DC9_MASK                     equ 0080h
PWM3DCH_PWMPW2_POSN                      equ 0000h
PWM3DCH_PWMPW2_POSITION                  equ 0000h
PWM3DCH_PWMPW2_SIZE                      equ 0001h
PWM3DCH_PWMPW2_LENGTH                    equ 0001h
PWM3DCH_PWMPW2_MASK                      equ 0001h
PWM3DCH_PWMPW3_POSN                      equ 0001h
PWM3DCH_PWMPW3_POSITION                  equ 0001h
PWM3DCH_PWMPW3_SIZE                      equ 0001h
PWM3DCH_PWMPW3_LENGTH                    equ 0001h
PWM3DCH_PWMPW3_MASK                      equ 0002h
PWM3DCH_PWMPW4_POSN                      equ 0002h
PWM3DCH_PWMPW4_POSITION                  equ 0002h
PWM3DCH_PWMPW4_SIZE                      equ 0001h
PWM3DCH_PWMPW4_LENGTH                    equ 0001h
PWM3DCH_PWMPW4_MASK                      equ 0004h
PWM3DCH_PWMPW5_POSN                      equ 0003h
PWM3DCH_PWMPW5_POSITION                  equ 0003h
PWM3DCH_PWMPW5_SIZE                      equ 0001h
PWM3DCH_PWMPW5_LENGTH                    equ 0001h
PWM3DCH_PWMPW5_MASK                      equ 0008h
PWM3DCH_PWMPW6_POSN                      equ 0004h
PWM3DCH_PWMPW6_POSITION                  equ 0004h
PWM3DCH_PWMPW6_SIZE                      equ 0001h
PWM3DCH_PWMPW6_LENGTH                    equ 0001h
PWM3DCH_PWMPW6_MASK                      equ 0010h
PWM3DCH_PWMPW7_POSN                      equ 0005h
PWM3DCH_PWMPW7_POSITION                  equ 0005h
PWM3DCH_PWMPW7_SIZE                      equ 0001h
PWM3DCH_PWMPW7_LENGTH                    equ 0001h
PWM3DCH_PWMPW7_MASK                      equ 0020h
PWM3DCH_PWMPW8_POSN                      equ 0006h
PWM3DCH_PWMPW8_POSITION                  equ 0006h
PWM3DCH_PWMPW8_SIZE                      equ 0001h
PWM3DCH_PWMPW8_LENGTH                    equ 0001h
PWM3DCH_PWMPW8_MASK                      equ 0040h
PWM3DCH_PWMPW9_POSN                      equ 0007h
PWM3DCH_PWMPW9_POSITION                  equ 0007h
PWM3DCH_PWMPW9_SIZE                      equ 0001h
PWM3DCH_PWMPW9_LENGTH                    equ 0001h
PWM3DCH_PWMPW9_MASK                      equ 0080h

// Register: PWM3CON
#define PWM3CON PWM3CON
PWM3CON                                  equ 0FA5h
// bitfield definitions
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
PWM3CON_EN_POSN                          equ 0007h
PWM3CON_EN_POSITION                      equ 0007h
PWM3CON_EN_SIZE                          equ 0001h
PWM3CON_EN_LENGTH                        equ 0001h
PWM3CON_EN_MASK                          equ 0080h
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
PWM3CON_PWM3EN_POSN                      equ 0007h
PWM3CON_PWM3EN_POSITION                  equ 0007h
PWM3CON_PWM3EN_SIZE                      equ 0001h
PWM3CON_PWM3EN_LENGTH                    equ 0001h
PWM3CON_PWM3EN_MASK                      equ 0080h

// Register: CCPR2
#define CCPR2 CCPR2
CCPR2                                    equ 0FA6h

// Register: CCPR2L
#define CCPR2L CCPR2L
CCPR2L                                   equ 0FA6h
// bitfield definitions
CCPR2L_RL_POSN                           equ 0000h
CCPR2L_RL_POSITION                       equ 0000h
CCPR2L_RL_SIZE                           equ 0008h
CCPR2L_RL_LENGTH                         equ 0008h
CCPR2L_RL_MASK                           equ 00FFh

// Register: CCPR2H
#define CCPR2H CCPR2H
CCPR2H                                   equ 0FA7h
// bitfield definitions
CCPR2H_RH_POSN                           equ 0000h
CCPR2H_RH_POSITION                       equ 0000h
CCPR2H_RH_SIZE                           equ 0008h
CCPR2H_RH_LENGTH                         equ 0008h
CCPR2H_RH_MASK                           equ 00FFh

// Register: CCP2CON
#define CCP2CON CCP2CON
CCP2CON                                  equ 0FA8h
// bitfield definitions
CCP2CON_MODE_POSN                        equ 0000h
CCP2CON_MODE_POSITION                    equ 0000h
CCP2CON_MODE_SIZE                        equ 0004h
CCP2CON_MODE_LENGTH                      equ 0004h
CCP2CON_MODE_MASK                        equ 000Fh
CCP2CON_FMT_POSN                         equ 0004h
CCP2CON_FMT_POSITION                     equ 0004h
CCP2CON_FMT_SIZE                         equ 0001h
CCP2CON_FMT_LENGTH                       equ 0001h
CCP2CON_FMT_MASK                         equ 0010h
CCP2CON_OUT_POSN                         equ 0005h
CCP2CON_OUT_POSITION                     equ 0005h
CCP2CON_OUT_SIZE                         equ 0001h
CCP2CON_OUT_LENGTH                       equ 0001h
CCP2CON_OUT_MASK                         equ 0020h
CCP2CON_EN_POSN                          equ 0007h
CCP2CON_EN_POSITION                      equ 0007h
CCP2CON_EN_SIZE                          equ 0001h
CCP2CON_EN_LENGTH                        equ 0001h
CCP2CON_EN_MASK                          equ 0080h
CCP2CON_MODE0_POSN                       equ 0000h
CCP2CON_MODE0_POSITION                   equ 0000h
CCP2CON_MODE0_SIZE                       equ 0001h
CCP2CON_MODE0_LENGTH                     equ 0001h
CCP2CON_MODE0_MASK                       equ 0001h
CCP2CON_MODE1_POSN                       equ 0001h
CCP2CON_MODE1_POSITION                   equ 0001h
CCP2CON_MODE1_SIZE                       equ 0001h
CCP2CON_MODE1_LENGTH                     equ 0001h
CCP2CON_MODE1_MASK                       equ 0002h
CCP2CON_MODE2_POSN                       equ 0002h
CCP2CON_MODE2_POSITION                   equ 0002h
CCP2CON_MODE2_SIZE                       equ 0001h
CCP2CON_MODE2_LENGTH                     equ 0001h
CCP2CON_MODE2_MASK                       equ 0004h
CCP2CON_MODE3_POSN                       equ 0003h
CCP2CON_MODE3_POSITION                   equ 0003h
CCP2CON_MODE3_SIZE                       equ 0001h
CCP2CON_MODE3_LENGTH                     equ 0001h
CCP2CON_MODE3_MASK                       equ 0008h
CCP2CON_CCP2MODE_POSN                    equ 0000h
CCP2CON_CCP2MODE_POSITION                equ 0000h
CCP2CON_CCP2MODE_SIZE                    equ 0004h
CCP2CON_CCP2MODE_LENGTH                  equ 0004h
CCP2CON_CCP2MODE_MASK                    equ 000Fh
CCP2CON_CCP2FMT_POSN                     equ 0004h
CCP2CON_CCP2FMT_POSITION                 equ 0004h
CCP2CON_CCP2FMT_SIZE                     equ 0001h
CCP2CON_CCP2FMT_LENGTH                   equ 0001h
CCP2CON_CCP2FMT_MASK                     equ 0010h
CCP2CON_CCP2OUT_POSN                     equ 0005h
CCP2CON_CCP2OUT_POSITION                 equ 0005h
CCP2CON_CCP2OUT_SIZE                     equ 0001h
CCP2CON_CCP2OUT_LENGTH                   equ 0001h
CCP2CON_CCP2OUT_MASK                     equ 0020h
CCP2CON_CCP2EN_POSN                      equ 0007h
CCP2CON_CCP2EN_POSITION                  equ 0007h
CCP2CON_CCP2EN_SIZE                      equ 0001h
CCP2CON_CCP2EN_LENGTH                    equ 0001h
CCP2CON_CCP2EN_MASK                      equ 0080h
CCP2CON_CCP2MODE0_POSN                   equ 0000h
CCP2CON_CCP2MODE0_POSITION               equ 0000h
CCP2CON_CCP2MODE0_SIZE                   equ 0001h
CCP2CON_CCP2MODE0_LENGTH                 equ 0001h
CCP2CON_CCP2MODE0_MASK                   equ 0001h
CCP2CON_CCP2MODE1_POSN                   equ 0001h
CCP2CON_CCP2MODE1_POSITION               equ 0001h
CCP2CON_CCP2MODE1_SIZE                   equ 0001h
CCP2CON_CCP2MODE1_LENGTH                 equ 0001h
CCP2CON_CCP2MODE1_MASK                   equ 0002h
CCP2CON_CCP2MODE2_POSN                   equ 0002h
CCP2CON_CCP2MODE2_POSITION               equ 0002h
CCP2CON_CCP2MODE2_SIZE                   equ 0001h
CCP2CON_CCP2MODE2_LENGTH                 equ 0001h
CCP2CON_CCP2MODE2_MASK                   equ 0004h
CCP2CON_CCP2MODE3_POSN                   equ 0003h
CCP2CON_CCP2MODE3_POSITION               equ 0003h
CCP2CON_CCP2MODE3_SIZE                   equ 0001h
CCP2CON_CCP2MODE3_LENGTH                 equ 0001h
CCP2CON_CCP2MODE3_MASK                   equ 0008h

// Register: CCP2CAP
#define CCP2CAP CCP2CAP
CCP2CAP                                  equ 0FA9h
// bitfield definitions
CCP2CAP_CTS_POSN                         equ 0000h
CCP2CAP_CTS_POSITION                     equ 0000h
CCP2CAP_CTS_SIZE                         equ 0008h
CCP2CAP_CTS_LENGTH                       equ 0008h
CCP2CAP_CTS_MASK                         equ 00FFh
CCP2CAP_CTS0_POSN                        equ 0000h
CCP2CAP_CTS0_POSITION                    equ 0000h
CCP2CAP_CTS0_SIZE                        equ 0001h
CCP2CAP_CTS0_LENGTH                      equ 0001h
CCP2CAP_CTS0_MASK                        equ 0001h
CCP2CAP_CTS1_POSN                        equ 0001h
CCP2CAP_CTS1_POSITION                    equ 0001h
CCP2CAP_CTS1_SIZE                        equ 0001h
CCP2CAP_CTS1_LENGTH                      equ 0001h
CCP2CAP_CTS1_MASK                        equ 0002h
CCP2CAP_CCP2CTS_POSN                     equ 0000h
CCP2CAP_CCP2CTS_POSITION                 equ 0000h
CCP2CAP_CCP2CTS_SIZE                     equ 0008h
CCP2CAP_CCP2CTS_LENGTH                   equ 0008h
CCP2CAP_CCP2CTS_MASK                     equ 00FFh
CCP2CAP_CCP2CTS0_POSN                    equ 0000h
CCP2CAP_CCP2CTS0_POSITION                equ 0000h
CCP2CAP_CCP2CTS0_SIZE                    equ 0001h
CCP2CAP_CCP2CTS0_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS0_MASK                    equ 0001h
CCP2CAP_CCP2CTS1_POSN                    equ 0001h
CCP2CAP_CCP2CTS1_POSITION                equ 0001h
CCP2CAP_CCP2CTS1_SIZE                    equ 0001h
CCP2CAP_CCP2CTS1_LENGTH                  equ 0001h
CCP2CAP_CCP2CTS1_MASK                    equ 0002h

// Register: CCPR1
#define CCPR1 CCPR1
CCPR1                                    equ 0FAAh

// Register: CCPR1L
#define CCPR1L CCPR1L
CCPR1L                                   equ 0FAAh
// bitfield definitions
CCPR1L_RL_POSN                           equ 0000h
CCPR1L_RL_POSITION                       equ 0000h
CCPR1L_RL_SIZE                           equ 0008h
CCPR1L_RL_LENGTH                         equ 0008h
CCPR1L_RL_MASK                           equ 00FFh

// Register: CCPR1H
#define CCPR1H CCPR1H
CCPR1H                                   equ 0FABh
// bitfield definitions
CCPR1H_RH_POSN                           equ 0000h
CCPR1H_RH_POSITION                       equ 0000h
CCPR1H_RH_SIZE                           equ 0008h
CCPR1H_RH_LENGTH                         equ 0008h
CCPR1H_RH_MASK                           equ 00FFh

// Register: CCP1CON
#define CCP1CON CCP1CON
CCP1CON                                  equ 0FACh
// bitfield definitions
CCP1CON_MODE_POSN                        equ 0000h
CCP1CON_MODE_POSITION                    equ 0000h
CCP1CON_MODE_SIZE                        equ 0004h
CCP1CON_MODE_LENGTH                      equ 0004h
CCP1CON_MODE_MASK                        equ 000Fh
CCP1CON_FMT_POSN                         equ 0004h
CCP1CON_FMT_POSITION                     equ 0004h
CCP1CON_FMT_SIZE                         equ 0001h
CCP1CON_FMT_LENGTH                       equ 0001h
CCP1CON_FMT_MASK                         equ 0010h
CCP1CON_OUT_POSN                         equ 0005h
CCP1CON_OUT_POSITION                     equ 0005h
CCP1CON_OUT_SIZE                         equ 0001h
CCP1CON_OUT_LENGTH                       equ 0001h
CCP1CON_OUT_MASK                         equ 0020h
CCP1CON_EN_POSN                          equ 0007h
CCP1CON_EN_POSITION                      equ 0007h
CCP1CON_EN_SIZE                          equ 0001h
CCP1CON_EN_LENGTH                        equ 0001h
CCP1CON_EN_MASK                          equ 0080h
CCP1CON_MODE0_POSN                       equ 0000h
CCP1CON_MODE0_POSITION                   equ 0000h
CCP1CON_MODE0_SIZE                       equ 0001h
CCP1CON_MODE0_LENGTH                     equ 0001h
CCP1CON_MODE0_MASK                       equ 0001h
CCP1CON_MODE1_POSN                       equ 0001h
CCP1CON_MODE1_POSITION                   equ 0001h
CCP1CON_MODE1_SIZE                       equ 0001h
CCP1CON_MODE1_LENGTH                     equ 0001h
CCP1CON_MODE1_MASK                       equ 0002h
CCP1CON_MODE2_POSN                       equ 0002h
CCP1CON_MODE2_POSITION                   equ 0002h
CCP1CON_MODE2_SIZE                       equ 0001h
CCP1CON_MODE2_LENGTH                     equ 0001h
CCP1CON_MODE2_MASK                       equ 0004h
CCP1CON_MODE3_POSN                       equ 0003h
CCP1CON_MODE3_POSITION                   equ 0003h
CCP1CON_MODE3_SIZE                       equ 0001h
CCP1CON_MODE3_LENGTH                     equ 0001h
CCP1CON_MODE3_MASK                       equ 0008h
CCP1CON_CCP1MODE_POSN                    equ 0000h
CCP1CON_CCP1MODE_POSITION                equ 0000h
CCP1CON_CCP1MODE_SIZE                    equ 0004h
CCP1CON_CCP1MODE_LENGTH                  equ 0004h
CCP1CON_CCP1MODE_MASK                    equ 000Fh
CCP1CON_CCP1FMT_POSN                     equ 0004h
CCP1CON_CCP1FMT_POSITION                 equ 0004h
CCP1CON_CCP1FMT_SIZE                     equ 0001h
CCP1CON_CCP1FMT_LENGTH                   equ 0001h
CCP1CON_CCP1FMT_MASK                     equ 0010h
CCP1CON_CCP1OUT_POSN                     equ 0005h
CCP1CON_CCP1OUT_POSITION                 equ 0005h
CCP1CON_CCP1OUT_SIZE                     equ 0001h
CCP1CON_CCP1OUT_LENGTH                   equ 0001h
CCP1CON_CCP1OUT_MASK                     equ 0020h
CCP1CON_CCP1EN_POSN                      equ 0007h
CCP1CON_CCP1EN_POSITION                  equ 0007h
CCP1CON_CCP1EN_SIZE                      equ 0001h
CCP1CON_CCP1EN_LENGTH                    equ 0001h
CCP1CON_CCP1EN_MASK                      equ 0080h
CCP1CON_CCP1MODE0_POSN                   equ 0000h
CCP1CON_CCP1MODE0_POSITION               equ 0000h
CCP1CON_CCP1MODE0_SIZE                   equ 0001h
CCP1CON_CCP1MODE0_LENGTH                 equ 0001h
CCP1CON_CCP1MODE0_MASK                   equ 0001h
CCP1CON_CCP1MODE1_POSN                   equ 0001h
CCP1CON_CCP1MODE1_POSITION               equ 0001h
CCP1CON_CCP1MODE1_SIZE                   equ 0001h
CCP1CON_CCP1MODE1_LENGTH                 equ 0001h
CCP1CON_CCP1MODE1_MASK                   equ 0002h
CCP1CON_CCP1MODE2_POSN                   equ 0002h
CCP1CON_CCP1MODE2_POSITION               equ 0002h
CCP1CON_CCP1MODE2_SIZE                   equ 0001h
CCP1CON_CCP1MODE2_LENGTH                 equ 0001h
CCP1CON_CCP1MODE2_MASK                   equ 0004h
CCP1CON_CCP1MODE3_POSN                   equ 0003h
CCP1CON_CCP1MODE3_POSITION               equ 0003h
CCP1CON_CCP1MODE3_SIZE                   equ 0001h
CCP1CON_CCP1MODE3_LENGTH                 equ 0001h
CCP1CON_CCP1MODE3_MASK                   equ 0008h
CCP1CON_P1M1_POSN                        equ 0007h
CCP1CON_P1M1_POSITION                    equ 0007h
CCP1CON_P1M1_SIZE                        equ 0001h
CCP1CON_P1M1_LENGTH                      equ 0001h
CCP1CON_P1M1_MASK                        equ 0080h

// Register: CCP1CAP
#define CCP1CAP CCP1CAP
CCP1CAP                                  equ 0FADh
// bitfield definitions
CCP1CAP_CTS_POSN                         equ 0000h
CCP1CAP_CTS_POSITION                     equ 0000h
CCP1CAP_CTS_SIZE                         equ 0008h
CCP1CAP_CTS_LENGTH                       equ 0008h
CCP1CAP_CTS_MASK                         equ 00FFh
CCP1CAP_CTS0_POSN                        equ 0000h
CCP1CAP_CTS0_POSITION                    equ 0000h
CCP1CAP_CTS0_SIZE                        equ 0001h
CCP1CAP_CTS0_LENGTH                      equ 0001h
CCP1CAP_CTS0_MASK                        equ 0001h
CCP1CAP_CTS1_POSN                        equ 0001h
CCP1CAP_CTS1_POSITION                    equ 0001h
CCP1CAP_CTS1_SIZE                        equ 0001h
CCP1CAP_CTS1_LENGTH                      equ 0001h
CCP1CAP_CTS1_MASK                        equ 0002h
CCP1CAP_CCP1CTS_POSN                     equ 0000h
CCP1CAP_CCP1CTS_POSITION                 equ 0000h
CCP1CAP_CCP1CTS_SIZE                     equ 0008h
CCP1CAP_CCP1CTS_LENGTH                   equ 0008h
CCP1CAP_CCP1CTS_MASK                     equ 00FFh
CCP1CAP_CCP1CTS0_POSN                    equ 0000h
CCP1CAP_CCP1CTS0_POSITION                equ 0000h
CCP1CAP_CCP1CTS0_SIZE                    equ 0001h
CCP1CAP_CCP1CTS0_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS0_MASK                    equ 0001h
CCP1CAP_CCP1CTS1_POSN                    equ 0001h
CCP1CAP_CCP1CTS1_POSITION                equ 0001h
CCP1CAP_CCP1CTS1_SIZE                    equ 0001h
CCP1CAP_CCP1CTS1_LENGTH                  equ 0001h
CCP1CAP_CCP1CTS1_MASK                    equ 0002h

// Register: CCPTMRS
#define CCPTMRS CCPTMRS
CCPTMRS                                  equ 0FAEh
// bitfield definitions
CCPTMRS_C1TSEL_POSN                      equ 0000h
CCPTMRS_C1TSEL_POSITION                  equ 0000h
CCPTMRS_C1TSEL_SIZE                      equ 0002h
CCPTMRS_C1TSEL_LENGTH                    equ 0002h
CCPTMRS_C1TSEL_MASK                      equ 0003h
CCPTMRS_C2TSEL_POSN                      equ 0002h
CCPTMRS_C2TSEL_POSITION                  equ 0002h
CCPTMRS_C2TSEL_SIZE                      equ 0002h
CCPTMRS_C2TSEL_LENGTH                    equ 0002h
CCPTMRS_C2TSEL_MASK                      equ 000Ch
CCPTMRS_P3TSEL_POSN                      equ 0004h
CCPTMRS_P3TSEL_POSITION                  equ 0004h
CCPTMRS_P3TSEL_SIZE                      equ 0002h
CCPTMRS_P3TSEL_LENGTH                    equ 0002h
CCPTMRS_P3TSEL_MASK                      equ 0030h
CCPTMRS_P4TSEL_POSN                      equ 0006h
CCPTMRS_P4TSEL_POSITION                  equ 0006h
CCPTMRS_P4TSEL_SIZE                      equ 0002h
CCPTMRS_P4TSEL_LENGTH                    equ 0002h
CCPTMRS_P4TSEL_MASK                      equ 00C0h
CCPTMRS_C1TSEL0_POSN                     equ 0000h
CCPTMRS_C1TSEL0_POSITION                 equ 0000h
CCPTMRS_C1TSEL0_SIZE                     equ 0001h
CCPTMRS_C1TSEL0_LENGTH                   equ 0001h
CCPTMRS_C1TSEL0_MASK                     equ 0001h
CCPTMRS_C1TSEL1_POSN                     equ 0001h
CCPTMRS_C1TSEL1_POSITION                 equ 0001h
CCPTMRS_C1TSEL1_SIZE                     equ 0001h
CCPTMRS_C1TSEL1_LENGTH                   equ 0001h
CCPTMRS_C1TSEL1_MASK                     equ 0002h
CCPTMRS_C2TSEL0_POSN                     equ 0002h
CCPTMRS_C2TSEL0_POSITION                 equ 0002h
CCPTMRS_C2TSEL0_SIZE                     equ 0001h
CCPTMRS_C2TSEL0_LENGTH                   equ 0001h
CCPTMRS_C2TSEL0_MASK                     equ 0004h
CCPTMRS_C2TSEL1_POSN                     equ 0003h
CCPTMRS_C2TSEL1_POSITION                 equ 0003h
CCPTMRS_C2TSEL1_SIZE                     equ 0001h
CCPTMRS_C2TSEL1_LENGTH                   equ 0001h
CCPTMRS_C2TSEL1_MASK                     equ 0008h
CCPTMRS_P3TSEL0_POSN                     equ 0004h
CCPTMRS_P3TSEL0_POSITION                 equ 0004h
CCPTMRS_P3TSEL0_SIZE                     equ 0001h
CCPTMRS_P3TSEL0_LENGTH                   equ 0001h
CCPTMRS_P3TSEL0_MASK                     equ 0010h
CCPTMRS_P3TSEL1_POSN                     equ 0005h
CCPTMRS_P3TSEL1_POSITION                 equ 0005h
CCPTMRS_P3TSEL1_SIZE                     equ 0001h
CCPTMRS_P3TSEL1_LENGTH                   equ 0001h
CCPTMRS_P3TSEL1_MASK                     equ 0020h
CCPTMRS_P4TSEL0_POSN                     equ 0006h
CCPTMRS_P4TSEL0_POSITION                 equ 0006h
CCPTMRS_P4TSEL0_SIZE                     equ 0001h
CCPTMRS_P4TSEL0_LENGTH                   equ 0001h
CCPTMRS_P4TSEL0_MASK                     equ 0040h
CCPTMRS_P4TSEL1_POSN                     equ 0007h
CCPTMRS_P4TSEL1_POSITION                 equ 0007h
CCPTMRS_P4TSEL1_SIZE                     equ 0001h
CCPTMRS_P4TSEL1_LENGTH                   equ 0001h
CCPTMRS_P4TSEL1_MASK                     equ 0080h

// Register: T6TMR
#define T6TMR T6TMR
T6TMR                                    equ 0FAFh
// bitfield definitions
T6TMR_TMR6_POSN                          equ 0000h
T6TMR_TMR6_POSITION                      equ 0000h
T6TMR_TMR6_SIZE                          equ 0008h
T6TMR_TMR6_LENGTH                        equ 0008h
T6TMR_TMR6_MASK                          equ 00FFh

// Register: T6PR
#define T6PR T6PR
T6PR                                     equ 0FB0h
// bitfield definitions
T6PR_PR6_POSN                            equ 0000h
T6PR_PR6_POSITION                        equ 0000h
T6PR_PR6_SIZE                            equ 0008h
T6PR_PR6_LENGTH                          equ 0008h
T6PR_PR6_MASK                            equ 00FFh

// Register: T6CON
#define T6CON T6CON
T6CON                                    equ 0FB1h
// bitfield definitions
T6CON_OUTPS_POSN                         equ 0000h
T6CON_OUTPS_POSITION                     equ 0000h
T6CON_OUTPS_SIZE                         equ 0004h
T6CON_OUTPS_LENGTH                       equ 0004h
T6CON_OUTPS_MASK                         equ 000Fh
T6CON_CKPS_POSN                          equ 0004h
T6CON_CKPS_POSITION                      equ 0004h
T6CON_CKPS_SIZE                          equ 0003h
T6CON_CKPS_LENGTH                        equ 0003h
T6CON_CKPS_MASK                          equ 0070h
T6CON_ON_POSN                            equ 0007h
T6CON_ON_POSITION                        equ 0007h
T6CON_ON_SIZE                            equ 0001h
T6CON_ON_LENGTH                          equ 0001h
T6CON_ON_MASK                            equ 0080h
T6CON_T6OUTPS_POSN                       equ 0000h
T6CON_T6OUTPS_POSITION                   equ 0000h
T6CON_T6OUTPS_SIZE                       equ 0004h
T6CON_T6OUTPS_LENGTH                     equ 0004h
T6CON_T6OUTPS_MASK                       equ 000Fh
T6CON_T6CKPS_POSN                        equ 0004h
T6CON_T6CKPS_POSITION                    equ 0004h
T6CON_T6CKPS_SIZE                        equ 0003h
T6CON_T6CKPS_LENGTH                      equ 0003h
T6CON_T6CKPS_MASK                        equ 0070h
T6CON_T6ON_POSN                          equ 0007h
T6CON_T6ON_POSITION                      equ 0007h
T6CON_T6ON_SIZE                          equ 0001h
T6CON_T6ON_LENGTH                        equ 0001h
T6CON_T6ON_MASK                          equ 0080h
T6CON_T6OUTPS0_POSN                      equ 0000h
T6CON_T6OUTPS0_POSITION                  equ 0000h
T6CON_T6OUTPS0_SIZE                      equ 0001h
T6CON_T6OUTPS0_LENGTH                    equ 0001h
T6CON_T6OUTPS0_MASK                      equ 0001h
T6CON_T6OUTPS1_POSN                      equ 0001h
T6CON_T6OUTPS1_POSITION                  equ 0001h
T6CON_T6OUTPS1_SIZE                      equ 0001h
T6CON_T6OUTPS1_LENGTH                    equ 0001h
T6CON_T6OUTPS1_MASK                      equ 0002h
T6CON_T6OUTPS2_POSN                      equ 0002h
T6CON_T6OUTPS2_POSITION                  equ 0002h
T6CON_T6OUTPS2_SIZE                      equ 0001h
T6CON_T6OUTPS2_LENGTH                    equ 0001h
T6CON_T6OUTPS2_MASK                      equ 0004h
T6CON_T6OUTPS3_POSN                      equ 0003h
T6CON_T6OUTPS3_POSITION                  equ 0003h
T6CON_T6OUTPS3_SIZE                      equ 0001h
T6CON_T6OUTPS3_LENGTH                    equ 0001h
T6CON_T6OUTPS3_MASK                      equ 0008h
T6CON_T6CKPS0_POSN                       equ 0004h
T6CON_T6CKPS0_POSITION                   equ 0004h
T6CON_T6CKPS0_SIZE                       equ 0001h
T6CON_T6CKPS0_LENGTH                     equ 0001h
T6CON_T6CKPS0_MASK                       equ 0010h
T6CON_T6CKPS1_POSN                       equ 0005h
T6CON_T6CKPS1_POSITION                   equ 0005h
T6CON_T6CKPS1_SIZE                       equ 0001h
T6CON_T6CKPS1_LENGTH                     equ 0001h
T6CON_T6CKPS1_MASK                       equ 0020h
T6CON_T6CKPS2_POSN                       equ 0006h
T6CON_T6CKPS2_POSITION                   equ 0006h
T6CON_T6CKPS2_SIZE                       equ 0001h
T6CON_T6CKPS2_LENGTH                     equ 0001h
T6CON_T6CKPS2_MASK                       equ 0040h
T6CON_OUTPS0_POSN                        equ 0000h
T6CON_OUTPS0_POSITION                    equ 0000h
T6CON_OUTPS0_SIZE                        equ 0001h
T6CON_OUTPS0_LENGTH                      equ 0001h
T6CON_OUTPS0_MASK                        equ 0001h
T6CON_OUTPS1_POSN                        equ 0001h
T6CON_OUTPS1_POSITION                    equ 0001h
T6CON_OUTPS1_SIZE                        equ 0001h
T6CON_OUTPS1_LENGTH                      equ 0001h
T6CON_OUTPS1_MASK                        equ 0002h
T6CON_OUTPS2_POSN                        equ 0002h
T6CON_OUTPS2_POSITION                    equ 0002h
T6CON_OUTPS2_SIZE                        equ 0001h
T6CON_OUTPS2_LENGTH                      equ 0001h
T6CON_OUTPS2_MASK                        equ 0004h
T6CON_OUTPS3_POSN                        equ 0003h
T6CON_OUTPS3_POSITION                    equ 0003h
T6CON_OUTPS3_SIZE                        equ 0001h
T6CON_OUTPS3_LENGTH                      equ 0001h
T6CON_OUTPS3_MASK                        equ 0008h
T6CON_CKPS0_POSN                         equ 0004h
T6CON_CKPS0_POSITION                     equ 0004h
T6CON_CKPS0_SIZE                         equ 0001h
T6CON_CKPS0_LENGTH                       equ 0001h
T6CON_CKPS0_MASK                         equ 0010h
T6CON_CKPS1_POSN                         equ 0005h
T6CON_CKPS1_POSITION                     equ 0005h
T6CON_CKPS1_SIZE                         equ 0001h
T6CON_CKPS1_LENGTH                       equ 0001h
T6CON_CKPS1_MASK                         equ 0020h
T6CON_CKPS2_POSN                         equ 0006h
T6CON_CKPS2_POSITION                     equ 0006h
T6CON_CKPS2_SIZE                         equ 0001h
T6CON_CKPS2_LENGTH                       equ 0001h
T6CON_CKPS2_MASK                         equ 0040h
T6CON_TMR6ON_POSN                        equ 0007h
T6CON_TMR6ON_POSITION                    equ 0007h
T6CON_TMR6ON_SIZE                        equ 0001h
T6CON_TMR6ON_LENGTH                      equ 0001h
T6CON_TMR6ON_MASK                        equ 0080h

// Register: T6HLT
#define T6HLT T6HLT
T6HLT                                    equ 0FB2h
// bitfield definitions
T6HLT_MODE_POSN                          equ 0000h
T6HLT_MODE_POSITION                      equ 0000h
T6HLT_MODE_SIZE                          equ 0005h
T6HLT_MODE_LENGTH                        equ 0005h
T6HLT_MODE_MASK                          equ 001Fh
T6HLT_CKSYNC_POSN                        equ 0005h
T6HLT_CKSYNC_POSITION                    equ 0005h
T6HLT_CKSYNC_SIZE                        equ 0001h
T6HLT_CKSYNC_LENGTH                      equ 0001h
T6HLT_CKSYNC_MASK                        equ 0020h
T6HLT_CKPOL_POSN                         equ 0006h
T6HLT_CKPOL_POSITION                     equ 0006h
T6HLT_CKPOL_SIZE                         equ 0001h
T6HLT_CKPOL_LENGTH                       equ 0001h
T6HLT_CKPOL_MASK                         equ 0040h
T6HLT_PSYNC_POSN                         equ 0007h
T6HLT_PSYNC_POSITION                     equ 0007h
T6HLT_PSYNC_SIZE                         equ 0001h
T6HLT_PSYNC_LENGTH                       equ 0001h
T6HLT_PSYNC_MASK                         equ 0080h
T6HLT_MODE0_POSN                         equ 0000h
T6HLT_MODE0_POSITION                     equ 0000h
T6HLT_MODE0_SIZE                         equ 0001h
T6HLT_MODE0_LENGTH                       equ 0001h
T6HLT_MODE0_MASK                         equ 0001h
T6HLT_MODE1_POSN                         equ 0001h
T6HLT_MODE1_POSITION                     equ 0001h
T6HLT_MODE1_SIZE                         equ 0001h
T6HLT_MODE1_LENGTH                       equ 0001h
T6HLT_MODE1_MASK                         equ 0002h
T6HLT_MODE2_POSN                         equ 0002h
T6HLT_MODE2_POSITION                     equ 0002h
T6HLT_MODE2_SIZE                         equ 0001h
T6HLT_MODE2_LENGTH                       equ 0001h
T6HLT_MODE2_MASK                         equ 0004h
T6HLT_MODE3_POSN                         equ 0003h
T6HLT_MODE3_POSITION                     equ 0003h
T6HLT_MODE3_SIZE                         equ 0001h
T6HLT_MODE3_LENGTH                       equ 0001h
T6HLT_MODE3_MASK                         equ 0008h
T6HLT_MODE4_POSN                         equ 0004h
T6HLT_MODE4_POSITION                     equ 0004h
T6HLT_MODE4_SIZE                         equ 0001h
T6HLT_MODE4_LENGTH                       equ 0001h
T6HLT_MODE4_MASK                         equ 0010h
T6HLT_T6MODE_POSN                        equ 0000h
T6HLT_T6MODE_POSITION                    equ 0000h
T6HLT_T6MODE_SIZE                        equ 0005h
T6HLT_T6MODE_LENGTH                      equ 0005h
T6HLT_T6MODE_MASK                        equ 001Fh
T6HLT_T6CKSYNC_POSN                      equ 0005h
T6HLT_T6CKSYNC_POSITION                  equ 0005h
T6HLT_T6CKSYNC_SIZE                      equ 0001h
T6HLT_T6CKSYNC_LENGTH                    equ 0001h
T6HLT_T6CKSYNC_MASK                      equ 0020h
T6HLT_T6CKPOL_POSN                       equ 0006h
T6HLT_T6CKPOL_POSITION                   equ 0006h
T6HLT_T6CKPOL_SIZE                       equ 0001h
T6HLT_T6CKPOL_LENGTH                     equ 0001h
T6HLT_T6CKPOL_MASK                       equ 0040h
T6HLT_T6PSYNC_POSN                       equ 0007h
T6HLT_T6PSYNC_POSITION                   equ 0007h
T6HLT_T6PSYNC_SIZE                       equ 0001h
T6HLT_T6PSYNC_LENGTH                     equ 0001h
T6HLT_T6PSYNC_MASK                       equ 0080h
T6HLT_T6MODE0_POSN                       equ 0000h
T6HLT_T6MODE0_POSITION                   equ 0000h
T6HLT_T6MODE0_SIZE                       equ 0001h
T6HLT_T6MODE0_LENGTH                     equ 0001h
T6HLT_T6MODE0_MASK                       equ 0001h
T6HLT_T6MODE1_POSN                       equ 0001h
T6HLT_T6MODE1_POSITION                   equ 0001h
T6HLT_T6MODE1_SIZE                       equ 0001h
T6HLT_T6MODE1_LENGTH                     equ 0001h
T6HLT_T6MODE1_MASK                       equ 0002h
T6HLT_T6MODE2_POSN                       equ 0002h
T6HLT_T6MODE2_POSITION                   equ 0002h
T6HLT_T6MODE2_SIZE                       equ 0001h
T6HLT_T6MODE2_LENGTH                     equ 0001h
T6HLT_T6MODE2_MASK                       equ 0004h
T6HLT_T6MODE3_POSN                       equ 0003h
T6HLT_T6MODE3_POSITION                   equ 0003h
T6HLT_T6MODE3_SIZE                       equ 0001h
T6HLT_T6MODE3_LENGTH                     equ 0001h
T6HLT_T6MODE3_MASK                       equ 0008h
T6HLT_T6MODE4_POSN                       equ 0004h
T6HLT_T6MODE4_POSITION                   equ 0004h
T6HLT_T6MODE4_SIZE                       equ 0001h
T6HLT_T6MODE4_LENGTH                     equ 0001h
T6HLT_T6MODE4_MASK                       equ 0010h

// Register: T6CLKCON
#define T6CLKCON T6CLKCON
T6CLKCON                                 equ 0FB3h
// bitfield definitions
T6CLKCON_CS_POSN                         equ 0000h
T6CLKCON_CS_POSITION                     equ 0000h
T6CLKCON_CS_SIZE                         equ 0004h
T6CLKCON_CS_LENGTH                       equ 0004h
T6CLKCON_CS_MASK                         equ 000Fh
T6CLKCON_CS0_POSN                        equ 0000h
T6CLKCON_CS0_POSITION                    equ 0000h
T6CLKCON_CS0_SIZE                        equ 0001h
T6CLKCON_CS0_LENGTH                      equ 0001h
T6CLKCON_CS0_MASK                        equ 0001h
T6CLKCON_CS1_POSN                        equ 0001h
T6CLKCON_CS1_POSITION                    equ 0001h
T6CLKCON_CS1_SIZE                        equ 0001h
T6CLKCON_CS1_LENGTH                      equ 0001h
T6CLKCON_CS1_MASK                        equ 0002h
T6CLKCON_CS2_POSN                        equ 0002h
T6CLKCON_CS2_POSITION                    equ 0002h
T6CLKCON_CS2_SIZE                        equ 0001h
T6CLKCON_CS2_LENGTH                      equ 0001h
T6CLKCON_CS2_MASK                        equ 0004h
T6CLKCON_CS3_POSN                        equ 0003h
T6CLKCON_CS3_POSITION                    equ 0003h
T6CLKCON_CS3_SIZE                        equ 0001h
T6CLKCON_CS3_LENGTH                      equ 0001h
T6CLKCON_CS3_MASK                        equ 0008h
T6CLKCON_T6CS_POSN                       equ 0000h
T6CLKCON_T6CS_POSITION                   equ 0000h
T6CLKCON_T6CS_SIZE                       equ 0004h
T6CLKCON_T6CS_LENGTH                     equ 0004h
T6CLKCON_T6CS_MASK                       equ 000Fh
T6CLKCON_T6CS0_POSN                      equ 0000h
T6CLKCON_T6CS0_POSITION                  equ 0000h
T6CLKCON_T6CS0_SIZE                      equ 0001h
T6CLKCON_T6CS0_LENGTH                    equ 0001h
T6CLKCON_T6CS0_MASK                      equ 0001h
T6CLKCON_T6CS1_POSN                      equ 0001h
T6CLKCON_T6CS1_POSITION                  equ 0001h
T6CLKCON_T6CS1_SIZE                      equ 0001h
T6CLKCON_T6CS1_LENGTH                    equ 0001h
T6CLKCON_T6CS1_MASK                      equ 0002h
T6CLKCON_T6CS2_POSN                      equ 0002h
T6CLKCON_T6CS2_POSITION                  equ 0002h
T6CLKCON_T6CS2_SIZE                      equ 0001h
T6CLKCON_T6CS2_LENGTH                    equ 0001h
T6CLKCON_T6CS2_MASK                      equ 0004h
T6CLKCON_T6CS3_POSN                      equ 0003h
T6CLKCON_T6CS3_POSITION                  equ 0003h
T6CLKCON_T6CS3_SIZE                      equ 0001h
T6CLKCON_T6CS3_LENGTH                    equ 0001h
T6CLKCON_T6CS3_MASK                      equ 0008h

// Register: T6RST
#define T6RST T6RST
T6RST                                    equ 0FB4h
// bitfield definitions
T6RST_RSEL_POSN                          equ 0000h
T6RST_RSEL_POSITION                      equ 0000h
T6RST_RSEL_SIZE                          equ 0005h
T6RST_RSEL_LENGTH                        equ 0005h
T6RST_RSEL_MASK                          equ 001Fh
T6RST_RSEL0_POSN                         equ 0000h
T6RST_RSEL0_POSITION                     equ 0000h
T6RST_RSEL0_SIZE                         equ 0001h
T6RST_RSEL0_LENGTH                       equ 0001h
T6RST_RSEL0_MASK                         equ 0001h
T6RST_RSEL1_POSN                         equ 0001h
T6RST_RSEL1_POSITION                     equ 0001h
T6RST_RSEL1_SIZE                         equ 0001h
T6RST_RSEL1_LENGTH                       equ 0001h
T6RST_RSEL1_MASK                         equ 0002h
T6RST_RSEL2_POSN                         equ 0002h
T6RST_RSEL2_POSITION                     equ 0002h
T6RST_RSEL2_SIZE                         equ 0001h
T6RST_RSEL2_LENGTH                       equ 0001h
T6RST_RSEL2_MASK                         equ 0004h
T6RST_RSEL3_POSN                         equ 0003h
T6RST_RSEL3_POSITION                     equ 0003h
T6RST_RSEL3_SIZE                         equ 0001h
T6RST_RSEL3_LENGTH                       equ 0001h
T6RST_RSEL3_MASK                         equ 0008h
T6RST_T6RSEL_POSN                        equ 0000h
T6RST_T6RSEL_POSITION                    equ 0000h
T6RST_T6RSEL_SIZE                        equ 0005h
T6RST_T6RSEL_LENGTH                      equ 0005h
T6RST_T6RSEL_MASK                        equ 001Fh
T6RST_T6RSEL0_POSN                       equ 0000h
T6RST_T6RSEL0_POSITION                   equ 0000h
T6RST_T6RSEL0_SIZE                       equ 0001h
T6RST_T6RSEL0_LENGTH                     equ 0001h
T6RST_T6RSEL0_MASK                       equ 0001h
T6RST_T6RSEL1_POSN                       equ 0001h
T6RST_T6RSEL1_POSITION                   equ 0001h
T6RST_T6RSEL1_SIZE                       equ 0001h
T6RST_T6RSEL1_LENGTH                     equ 0001h
T6RST_T6RSEL1_MASK                       equ 0002h
T6RST_T6RSEL2_POSN                       equ 0002h
T6RST_T6RSEL2_POSITION                   equ 0002h
T6RST_T6RSEL2_SIZE                       equ 0001h
T6RST_T6RSEL2_LENGTH                     equ 0001h
T6RST_T6RSEL2_MASK                       equ 0004h
T6RST_T6RSEL3_POSN                       equ 0003h
T6RST_T6RSEL3_POSITION                   equ 0003h
T6RST_T6RSEL3_SIZE                       equ 0001h
T6RST_T6RSEL3_LENGTH                     equ 0001h
T6RST_T6RSEL3_MASK                       equ 0008h

// Register: T4TMR
#define T4TMR T4TMR
T4TMR                                    equ 0FB5h
// bitfield definitions
T4TMR_TMR4_POSN                          equ 0000h
T4TMR_TMR4_POSITION                      equ 0000h
T4TMR_TMR4_SIZE                          equ 0008h
T4TMR_TMR4_LENGTH                        equ 0008h
T4TMR_TMR4_MASK                          equ 00FFh

// Register: T4PR
#define T4PR T4PR
T4PR                                     equ 0FB6h
// bitfield definitions
T4PR_PR4_POSN                            equ 0000h
T4PR_PR4_POSITION                        equ 0000h
T4PR_PR4_SIZE                            equ 0008h
T4PR_PR4_LENGTH                          equ 0008h
T4PR_PR4_MASK                            equ 00FFh

// Register: T4CON
#define T4CON T4CON
T4CON                                    equ 0FB7h
// bitfield definitions
T4CON_OUTPS_POSN                         equ 0000h
T4CON_OUTPS_POSITION                     equ 0000h
T4CON_OUTPS_SIZE                         equ 0004h
T4CON_OUTPS_LENGTH                       equ 0004h
T4CON_OUTPS_MASK                         equ 000Fh
T4CON_CKPS_POSN                          equ 0004h
T4CON_CKPS_POSITION                      equ 0004h
T4CON_CKPS_SIZE                          equ 0003h
T4CON_CKPS_LENGTH                        equ 0003h
T4CON_CKPS_MASK                          equ 0070h
T4CON_ON_POSN                            equ 0007h
T4CON_ON_POSITION                        equ 0007h
T4CON_ON_SIZE                            equ 0001h
T4CON_ON_LENGTH                          equ 0001h
T4CON_ON_MASK                            equ 0080h
T4CON_T4OUTPS_POSN                       equ 0000h
T4CON_T4OUTPS_POSITION                   equ 0000h
T4CON_T4OUTPS_SIZE                       equ 0004h
T4CON_T4OUTPS_LENGTH                     equ 0004h
T4CON_T4OUTPS_MASK                       equ 000Fh
T4CON_T4CKPS_POSN                        equ 0004h
T4CON_T4CKPS_POSITION                    equ 0004h
T4CON_T4CKPS_SIZE                        equ 0003h
T4CON_T4CKPS_LENGTH                      equ 0003h
T4CON_T4CKPS_MASK                        equ 0070h
T4CON_T4ON_POSN                          equ 0007h
T4CON_T4ON_POSITION                      equ 0007h
T4CON_T4ON_SIZE                          equ 0001h
T4CON_T4ON_LENGTH                        equ 0001h
T4CON_T4ON_MASK                          equ 0080h
T4CON_T4OUTPS0_POSN                      equ 0000h
T4CON_T4OUTPS0_POSITION                  equ 0000h
T4CON_T4OUTPS0_SIZE                      equ 0001h
T4CON_T4OUTPS0_LENGTH                    equ 0001h
T4CON_T4OUTPS0_MASK                      equ 0001h
T4CON_T4OUTPS1_POSN                      equ 0001h
T4CON_T4OUTPS1_POSITION                  equ 0001h
T4CON_T4OUTPS1_SIZE                      equ 0001h
T4CON_T4OUTPS1_LENGTH                    equ 0001h
T4CON_T4OUTPS1_MASK                      equ 0002h
T4CON_T4OUTPS2_POSN                      equ 0002h
T4CON_T4OUTPS2_POSITION                  equ 0002h
T4CON_T4OUTPS2_SIZE                      equ 0001h
T4CON_T4OUTPS2_LENGTH                    equ 0001h
T4CON_T4OUTPS2_MASK                      equ 0004h
T4CON_T4OUTPS3_POSN                      equ 0003h
T4CON_T4OUTPS3_POSITION                  equ 0003h
T4CON_T4OUTPS3_SIZE                      equ 0001h
T4CON_T4OUTPS3_LENGTH                    equ 0001h
T4CON_T4OUTPS3_MASK                      equ 0008h
T4CON_T4CKPS0_POSN                       equ 0004h
T4CON_T4CKPS0_POSITION                   equ 0004h
T4CON_T4CKPS0_SIZE                       equ 0001h
T4CON_T4CKPS0_LENGTH                     equ 0001h
T4CON_T4CKPS0_MASK                       equ 0010h
T4CON_T4CKPS1_POSN                       equ 0005h
T4CON_T4CKPS1_POSITION                   equ 0005h
T4CON_T4CKPS1_SIZE                       equ 0001h
T4CON_T4CKPS1_LENGTH                     equ 0001h
T4CON_T4CKPS1_MASK                       equ 0020h
T4CON_T4CKPS2_POSN                       equ 0006h
T4CON_T4CKPS2_POSITION                   equ 0006h
T4CON_T4CKPS2_SIZE                       equ 0001h
T4CON_T4CKPS2_LENGTH                     equ 0001h
T4CON_T4CKPS2_MASK                       equ 0040h
T4CON_OUTPS0_POSN                        equ 0000h
T4CON_OUTPS0_POSITION                    equ 0000h
T4CON_OUTPS0_SIZE                        equ 0001h
T4CON_OUTPS0_LENGTH                      equ 0001h
T4CON_OUTPS0_MASK                        equ 0001h
T4CON_OUTPS1_POSN                        equ 0001h
T4CON_OUTPS1_POSITION                    equ 0001h
T4CON_OUTPS1_SIZE                        equ 0001h
T4CON_OUTPS1_LENGTH                      equ 0001h
T4CON_OUTPS1_MASK                        equ 0002h
T4CON_OUTPS2_POSN                        equ 0002h
T4CON_OUTPS2_POSITION                    equ 0002h
T4CON_OUTPS2_SIZE                        equ 0001h
T4CON_OUTPS2_LENGTH                      equ 0001h
T4CON_OUTPS2_MASK                        equ 0004h
T4CON_OUTPS3_POSN                        equ 0003h
T4CON_OUTPS3_POSITION                    equ 0003h
T4CON_OUTPS3_SIZE                        equ 0001h
T4CON_OUTPS3_LENGTH                      equ 0001h
T4CON_OUTPS3_MASK                        equ 0008h
T4CON_CKPS0_POSN                         equ 0004h
T4CON_CKPS0_POSITION                     equ 0004h
T4CON_CKPS0_SIZE                         equ 0001h
T4CON_CKPS0_LENGTH                       equ 0001h
T4CON_CKPS0_MASK                         equ 0010h
T4CON_CKPS1_POSN                         equ 0005h
T4CON_CKPS1_POSITION                     equ 0005h
T4CON_CKPS1_SIZE                         equ 0001h
T4CON_CKPS1_LENGTH                       equ 0001h
T4CON_CKPS1_MASK                         equ 0020h
T4CON_CKPS2_POSN                         equ 0006h
T4CON_CKPS2_POSITION                     equ 0006h
T4CON_CKPS2_SIZE                         equ 0001h
T4CON_CKPS2_LENGTH                       equ 0001h
T4CON_CKPS2_MASK                         equ 0040h
T4CON_TMR4ON_POSN                        equ 0007h
T4CON_TMR4ON_POSITION                    equ 0007h
T4CON_TMR4ON_SIZE                        equ 0001h
T4CON_TMR4ON_LENGTH                      equ 0001h
T4CON_TMR4ON_MASK                        equ 0080h

// Register: T4HLT
#define T4HLT T4HLT
T4HLT                                    equ 0FB8h
// bitfield definitions
T4HLT_MODE_POSN                          equ 0000h
T4HLT_MODE_POSITION                      equ 0000h
T4HLT_MODE_SIZE                          equ 0005h
T4HLT_MODE_LENGTH                        equ 0005h
T4HLT_MODE_MASK                          equ 001Fh
T4HLT_CKSYNC_POSN                        equ 0005h
T4HLT_CKSYNC_POSITION                    equ 0005h
T4HLT_CKSYNC_SIZE                        equ 0001h
T4HLT_CKSYNC_LENGTH                      equ 0001h
T4HLT_CKSYNC_MASK                        equ 0020h
T4HLT_CKPOL_POSN                         equ 0006h
T4HLT_CKPOL_POSITION                     equ 0006h
T4HLT_CKPOL_SIZE                         equ 0001h
T4HLT_CKPOL_LENGTH                       equ 0001h
T4HLT_CKPOL_MASK                         equ 0040h
T4HLT_PSYNC_POSN                         equ 0007h
T4HLT_PSYNC_POSITION                     equ 0007h
T4HLT_PSYNC_SIZE                         equ 0001h
T4HLT_PSYNC_LENGTH                       equ 0001h
T4HLT_PSYNC_MASK                         equ 0080h
T4HLT_MODE0_POSN                         equ 0000h
T4HLT_MODE0_POSITION                     equ 0000h
T4HLT_MODE0_SIZE                         equ 0001h
T4HLT_MODE0_LENGTH                       equ 0001h
T4HLT_MODE0_MASK                         equ 0001h
T4HLT_MODE1_POSN                         equ 0001h
T4HLT_MODE1_POSITION                     equ 0001h
T4HLT_MODE1_SIZE                         equ 0001h
T4HLT_MODE1_LENGTH                       equ 0001h
T4HLT_MODE1_MASK                         equ 0002h
T4HLT_MODE2_POSN                         equ 0002h
T4HLT_MODE2_POSITION                     equ 0002h
T4HLT_MODE2_SIZE                         equ 0001h
T4HLT_MODE2_LENGTH                       equ 0001h
T4HLT_MODE2_MASK                         equ 0004h
T4HLT_MODE3_POSN                         equ 0003h
T4HLT_MODE3_POSITION                     equ 0003h
T4HLT_MODE3_SIZE                         equ 0001h
T4HLT_MODE3_LENGTH                       equ 0001h
T4HLT_MODE3_MASK                         equ 0008h
T4HLT_MODE4_POSN                         equ 0004h
T4HLT_MODE4_POSITION                     equ 0004h
T4HLT_MODE4_SIZE                         equ 0001h
T4HLT_MODE4_LENGTH                       equ 0001h
T4HLT_MODE4_MASK                         equ 0010h
T4HLT_T4MODE_POSN                        equ 0000h
T4HLT_T4MODE_POSITION                    equ 0000h
T4HLT_T4MODE_SIZE                        equ 0005h
T4HLT_T4MODE_LENGTH                      equ 0005h
T4HLT_T4MODE_MASK                        equ 001Fh
T4HLT_T4CKSYNC_POSN                      equ 0005h
T4HLT_T4CKSYNC_POSITION                  equ 0005h
T4HLT_T4CKSYNC_SIZE                      equ 0001h
T4HLT_T4CKSYNC_LENGTH                    equ 0001h
T4HLT_T4CKSYNC_MASK                      equ 0020h
T4HLT_T4CKPOL_POSN                       equ 0006h
T4HLT_T4CKPOL_POSITION                   equ 0006h
T4HLT_T4CKPOL_SIZE                       equ 0001h
T4HLT_T4CKPOL_LENGTH                     equ 0001h
T4HLT_T4CKPOL_MASK                       equ 0040h
T4HLT_T4PSYNC_POSN                       equ 0007h
T4HLT_T4PSYNC_POSITION                   equ 0007h
T4HLT_T4PSYNC_SIZE                       equ 0001h
T4HLT_T4PSYNC_LENGTH                     equ 0001h
T4HLT_T4PSYNC_MASK                       equ 0080h
T4HLT_T4MODE0_POSN                       equ 0000h
T4HLT_T4MODE0_POSITION                   equ 0000h
T4HLT_T4MODE0_SIZE                       equ 0001h
T4HLT_T4MODE0_LENGTH                     equ 0001h
T4HLT_T4MODE0_MASK                       equ 0001h
T4HLT_T4MODE1_POSN                       equ 0001h
T4HLT_T4MODE1_POSITION                   equ 0001h
T4HLT_T4MODE1_SIZE                       equ 0001h
T4HLT_T4MODE1_LENGTH                     equ 0001h
T4HLT_T4MODE1_MASK                       equ 0002h
T4HLT_T4MODE2_POSN                       equ 0002h
T4HLT_T4MODE2_POSITION                   equ 0002h
T4HLT_T4MODE2_SIZE                       equ 0001h
T4HLT_T4MODE2_LENGTH                     equ 0001h
T4HLT_T4MODE2_MASK                       equ 0004h
T4HLT_T4MODE3_POSN                       equ 0003h
T4HLT_T4MODE3_POSITION                   equ 0003h
T4HLT_T4MODE3_SIZE                       equ 0001h
T4HLT_T4MODE3_LENGTH                     equ 0001h
T4HLT_T4MODE3_MASK                       equ 0008h
T4HLT_T4MODE4_POSN                       equ 0004h
T4HLT_T4MODE4_POSITION                   equ 0004h
T4HLT_T4MODE4_SIZE                       equ 0001h
T4HLT_T4MODE4_LENGTH                     equ 0001h
T4HLT_T4MODE4_MASK                       equ 0010h

// Register: T4CLKCON
#define T4CLKCON T4CLKCON
T4CLKCON                                 equ 0FB9h
// bitfield definitions
T4CLKCON_CS_POSN                         equ 0000h
T4CLKCON_CS_POSITION                     equ 0000h
T4CLKCON_CS_SIZE                         equ 0004h
T4CLKCON_CS_LENGTH                       equ 0004h
T4CLKCON_CS_MASK                         equ 000Fh
T4CLKCON_CS0_POSN                        equ 0000h
T4CLKCON_CS0_POSITION                    equ 0000h
T4CLKCON_CS0_SIZE                        equ 0001h
T4CLKCON_CS0_LENGTH                      equ 0001h
T4CLKCON_CS0_MASK                        equ 0001h
T4CLKCON_CS1_POSN                        equ 0001h
T4CLKCON_CS1_POSITION                    equ 0001h
T4CLKCON_CS1_SIZE                        equ 0001h
T4CLKCON_CS1_LENGTH                      equ 0001h
T4CLKCON_CS1_MASK                        equ 0002h
T4CLKCON_CS2_POSN                        equ 0002h
T4CLKCON_CS2_POSITION                    equ 0002h
T4CLKCON_CS2_SIZE                        equ 0001h
T4CLKCON_CS2_LENGTH                      equ 0001h
T4CLKCON_CS2_MASK                        equ 0004h
T4CLKCON_CS3_POSN                        equ 0003h
T4CLKCON_CS3_POSITION                    equ 0003h
T4CLKCON_CS3_SIZE                        equ 0001h
T4CLKCON_CS3_LENGTH                      equ 0001h
T4CLKCON_CS3_MASK                        equ 0008h
T4CLKCON_T4CS_POSN                       equ 0000h
T4CLKCON_T4CS_POSITION                   equ 0000h
T4CLKCON_T4CS_SIZE                       equ 0004h
T4CLKCON_T4CS_LENGTH                     equ 0004h
T4CLKCON_T4CS_MASK                       equ 000Fh
T4CLKCON_T4CS0_POSN                      equ 0000h
T4CLKCON_T4CS0_POSITION                  equ 0000h
T4CLKCON_T4CS0_SIZE                      equ 0001h
T4CLKCON_T4CS0_LENGTH                    equ 0001h
T4CLKCON_T4CS0_MASK                      equ 0001h
T4CLKCON_T4CS1_POSN                      equ 0001h
T4CLKCON_T4CS1_POSITION                  equ 0001h
T4CLKCON_T4CS1_SIZE                      equ 0001h
T4CLKCON_T4CS1_LENGTH                    equ 0001h
T4CLKCON_T4CS1_MASK                      equ 0002h
T4CLKCON_T4CS2_POSN                      equ 0002h
T4CLKCON_T4CS2_POSITION                  equ 0002h
T4CLKCON_T4CS2_SIZE                      equ 0001h
T4CLKCON_T4CS2_LENGTH                    equ 0001h
T4CLKCON_T4CS2_MASK                      equ 0004h
T4CLKCON_T4CS3_POSN                      equ 0003h
T4CLKCON_T4CS3_POSITION                  equ 0003h
T4CLKCON_T4CS3_SIZE                      equ 0001h
T4CLKCON_T4CS3_LENGTH                    equ 0001h
T4CLKCON_T4CS3_MASK                      equ 0008h

// Register: T4RST
#define T4RST T4RST
T4RST                                    equ 0FBAh
// bitfield definitions
T4RST_RSEL_POSN                          equ 0000h
T4RST_RSEL_POSITION                      equ 0000h
T4RST_RSEL_SIZE                          equ 0005h
T4RST_RSEL_LENGTH                        equ 0005h
T4RST_RSEL_MASK                          equ 001Fh
T4RST_RSEL0_POSN                         equ 0000h
T4RST_RSEL0_POSITION                     equ 0000h
T4RST_RSEL0_SIZE                         equ 0001h
T4RST_RSEL0_LENGTH                       equ 0001h
T4RST_RSEL0_MASK                         equ 0001h
T4RST_RSEL1_POSN                         equ 0001h
T4RST_RSEL1_POSITION                     equ 0001h
T4RST_RSEL1_SIZE                         equ 0001h
T4RST_RSEL1_LENGTH                       equ 0001h
T4RST_RSEL1_MASK                         equ 0002h
T4RST_RSEL2_POSN                         equ 0002h
T4RST_RSEL2_POSITION                     equ 0002h
T4RST_RSEL2_SIZE                         equ 0001h
T4RST_RSEL2_LENGTH                       equ 0001h
T4RST_RSEL2_MASK                         equ 0004h
T4RST_RSEL3_POSN                         equ 0003h
T4RST_RSEL3_POSITION                     equ 0003h
T4RST_RSEL3_SIZE                         equ 0001h
T4RST_RSEL3_LENGTH                       equ 0001h
T4RST_RSEL3_MASK                         equ 0008h
T4RST_T4RSEL_POSN                        equ 0000h
T4RST_T4RSEL_POSITION                    equ 0000h
T4RST_T4RSEL_SIZE                        equ 0005h
T4RST_T4RSEL_LENGTH                      equ 0005h
T4RST_T4RSEL_MASK                        equ 001Fh
T4RST_T4RSEL0_POSN                       equ 0000h
T4RST_T4RSEL0_POSITION                   equ 0000h
T4RST_T4RSEL0_SIZE                       equ 0001h
T4RST_T4RSEL0_LENGTH                     equ 0001h
T4RST_T4RSEL0_MASK                       equ 0001h
T4RST_T4RSEL1_POSN                       equ 0001h
T4RST_T4RSEL1_POSITION                   equ 0001h
T4RST_T4RSEL1_SIZE                       equ 0001h
T4RST_T4RSEL1_LENGTH                     equ 0001h
T4RST_T4RSEL1_MASK                       equ 0002h
T4RST_T4RSEL2_POSN                       equ 0002h
T4RST_T4RSEL2_POSITION                   equ 0002h
T4RST_T4RSEL2_SIZE                       equ 0001h
T4RST_T4RSEL2_LENGTH                     equ 0001h
T4RST_T4RSEL2_MASK                       equ 0004h
T4RST_T4RSEL3_POSN                       equ 0003h
T4RST_T4RSEL3_POSITION                   equ 0003h
T4RST_T4RSEL3_SIZE                       equ 0001h
T4RST_T4RSEL3_LENGTH                     equ 0001h
T4RST_T4RSEL3_MASK                       equ 0008h

// Register: T2TMR
#define T2TMR T2TMR
T2TMR                                    equ 0FBBh
// bitfield definitions
T2TMR_TMR2_POSN                          equ 0000h
T2TMR_TMR2_POSITION                      equ 0000h
T2TMR_TMR2_SIZE                          equ 0008h
T2TMR_TMR2_LENGTH                        equ 0008h
T2TMR_TMR2_MASK                          equ 00FFh

// Register: T2PR
#define T2PR T2PR
T2PR                                     equ 0FBCh
// bitfield definitions
T2PR_PR2_POSN                            equ 0000h
T2PR_PR2_POSITION                        equ 0000h
T2PR_PR2_SIZE                            equ 0008h
T2PR_PR2_LENGTH                          equ 0008h
T2PR_PR2_MASK                            equ 00FFh

// Register: T2CON
#define T2CON T2CON
T2CON                                    equ 0FBDh
// bitfield definitions
T2CON_OUTPS_POSN                         equ 0000h
T2CON_OUTPS_POSITION                     equ 0000h
T2CON_OUTPS_SIZE                         equ 0004h
T2CON_OUTPS_LENGTH                       equ 0004h
T2CON_OUTPS_MASK                         equ 000Fh
T2CON_CKPS_POSN                          equ 0004h
T2CON_CKPS_POSITION                      equ 0004h
T2CON_CKPS_SIZE                          equ 0003h
T2CON_CKPS_LENGTH                        equ 0003h
T2CON_CKPS_MASK                          equ 0070h
T2CON_ON_POSN                            equ 0007h
T2CON_ON_POSITION                        equ 0007h
T2CON_ON_SIZE                            equ 0001h
T2CON_ON_LENGTH                          equ 0001h
T2CON_ON_MASK                            equ 0080h
T2CON_T2OUTPS_POSN                       equ 0000h
T2CON_T2OUTPS_POSITION                   equ 0000h
T2CON_T2OUTPS_SIZE                       equ 0004h
T2CON_T2OUTPS_LENGTH                     equ 0004h
T2CON_T2OUTPS_MASK                       equ 000Fh
T2CON_T2CKPS_POSN                        equ 0004h
T2CON_T2CKPS_POSITION                    equ 0004h
T2CON_T2CKPS_SIZE                        equ 0003h
T2CON_T2CKPS_LENGTH                      equ 0003h
T2CON_T2CKPS_MASK                        equ 0070h
T2CON_T2ON_POSN                          equ 0007h
T2CON_T2ON_POSITION                      equ 0007h
T2CON_T2ON_SIZE                          equ 0001h
T2CON_T2ON_LENGTH                        equ 0001h
T2CON_T2ON_MASK                          equ 0080h
T2CON_T2OUTPS0_POSN                      equ 0000h
T2CON_T2OUTPS0_POSITION                  equ 0000h
T2CON_T2OUTPS0_SIZE                      equ 0001h
T2CON_T2OUTPS0_LENGTH                    equ 0001h
T2CON_T2OUTPS0_MASK                      equ 0001h
T2CON_T2OUTPS1_POSN                      equ 0001h
T2CON_T2OUTPS1_POSITION                  equ 0001h
T2CON_T2OUTPS1_SIZE                      equ 0001h
T2CON_T2OUTPS1_LENGTH                    equ 0001h
T2CON_T2OUTPS1_MASK                      equ 0002h
T2CON_T2OUTPS2_POSN                      equ 0002h
T2CON_T2OUTPS2_POSITION                  equ 0002h
T2CON_T2OUTPS2_SIZE                      equ 0001h
T2CON_T2OUTPS2_LENGTH                    equ 0001h
T2CON_T2OUTPS2_MASK                      equ 0004h
T2CON_T2OUTPS3_POSN                      equ 0003h
T2CON_T2OUTPS3_POSITION                  equ 0003h
T2CON_T2OUTPS3_SIZE                      equ 0001h
T2CON_T2OUTPS3_LENGTH                    equ 0001h
T2CON_T2OUTPS3_MASK                      equ 0008h
T2CON_T2CKPS0_POSN                       equ 0004h
T2CON_T2CKPS0_POSITION                   equ 0004h
T2CON_T2CKPS0_SIZE                       equ 0001h
T2CON_T2CKPS0_LENGTH                     equ 0001h
T2CON_T2CKPS0_MASK                       equ 0010h
T2CON_T2CKPS1_POSN                       equ 0005h
T2CON_T2CKPS1_POSITION                   equ 0005h
T2CON_T2CKPS1_SIZE                       equ 0001h
T2CON_T2CKPS1_LENGTH                     equ 0001h
T2CON_T2CKPS1_MASK                       equ 0020h
T2CON_T2CKPS2_POSN                       equ 0006h
T2CON_T2CKPS2_POSITION                   equ 0006h
T2CON_T2CKPS2_SIZE                       equ 0001h
T2CON_T2CKPS2_LENGTH                     equ 0001h
T2CON_T2CKPS2_MASK                       equ 0040h
T2CON_OUTPS0_POSN                        equ 0000h
T2CON_OUTPS0_POSITION                    equ 0000h
T2CON_OUTPS0_SIZE                        equ 0001h
T2CON_OUTPS0_LENGTH                      equ 0001h
T2CON_OUTPS0_MASK                        equ 0001h
T2CON_OUTPS1_POSN                        equ 0001h
T2CON_OUTPS1_POSITION                    equ 0001h
T2CON_OUTPS1_SIZE                        equ 0001h
T2CON_OUTPS1_LENGTH                      equ 0001h
T2CON_OUTPS1_MASK                        equ 0002h
T2CON_OUTPS2_POSN                        equ 0002h
T2CON_OUTPS2_POSITION                    equ 0002h
T2CON_OUTPS2_SIZE                        equ 0001h
T2CON_OUTPS2_LENGTH                      equ 0001h
T2CON_OUTPS2_MASK                        equ 0004h
T2CON_OUTPS3_POSN                        equ 0003h
T2CON_OUTPS3_POSITION                    equ 0003h
T2CON_OUTPS3_SIZE                        equ 0001h
T2CON_OUTPS3_LENGTH                      equ 0001h
T2CON_OUTPS3_MASK                        equ 0008h
T2CON_CKPS0_POSN                         equ 0004h
T2CON_CKPS0_POSITION                     equ 0004h
T2CON_CKPS0_SIZE                         equ 0001h
T2CON_CKPS0_LENGTH                       equ 0001h
T2CON_CKPS0_MASK                         equ 0010h
T2CON_CKPS1_POSN                         equ 0005h
T2CON_CKPS1_POSITION                     equ 0005h
T2CON_CKPS1_SIZE                         equ 0001h
T2CON_CKPS1_LENGTH                       equ 0001h
T2CON_CKPS1_MASK                         equ 0020h
T2CON_CKPS2_POSN                         equ 0006h
T2CON_CKPS2_POSITION                     equ 0006h
T2CON_CKPS2_SIZE                         equ 0001h
T2CON_CKPS2_LENGTH                       equ 0001h
T2CON_CKPS2_MASK                         equ 0040h
T2CON_TMR2ON_POSN                        equ 0007h
T2CON_TMR2ON_POSITION                    equ 0007h
T2CON_TMR2ON_SIZE                        equ 0001h
T2CON_TMR2ON_LENGTH                      equ 0001h
T2CON_TMR2ON_MASK                        equ 0080h

// Register: T2HLT
#define T2HLT T2HLT
T2HLT                                    equ 0FBEh
// bitfield definitions
T2HLT_MODE_POSN                          equ 0000h
T2HLT_MODE_POSITION                      equ 0000h
T2HLT_MODE_SIZE                          equ 0005h
T2HLT_MODE_LENGTH                        equ 0005h
T2HLT_MODE_MASK                          equ 001Fh
T2HLT_CKSYNC_POSN                        equ 0005h
T2HLT_CKSYNC_POSITION                    equ 0005h
T2HLT_CKSYNC_SIZE                        equ 0001h
T2HLT_CKSYNC_LENGTH                      equ 0001h
T2HLT_CKSYNC_MASK                        equ 0020h
T2HLT_CKPOL_POSN                         equ 0006h
T2HLT_CKPOL_POSITION                     equ 0006h
T2HLT_CKPOL_SIZE                         equ 0001h
T2HLT_CKPOL_LENGTH                       equ 0001h
T2HLT_CKPOL_MASK                         equ 0040h
T2HLT_PSYNC_POSN                         equ 0007h
T2HLT_PSYNC_POSITION                     equ 0007h
T2HLT_PSYNC_SIZE                         equ 0001h
T2HLT_PSYNC_LENGTH                       equ 0001h
T2HLT_PSYNC_MASK                         equ 0080h
T2HLT_MODE0_POSN                         equ 0000h
T2HLT_MODE0_POSITION                     equ 0000h
T2HLT_MODE0_SIZE                         equ 0001h
T2HLT_MODE0_LENGTH                       equ 0001h
T2HLT_MODE0_MASK                         equ 0001h
T2HLT_MODE1_POSN                         equ 0001h
T2HLT_MODE1_POSITION                     equ 0001h
T2HLT_MODE1_SIZE                         equ 0001h
T2HLT_MODE1_LENGTH                       equ 0001h
T2HLT_MODE1_MASK                         equ 0002h
T2HLT_MODE2_POSN                         equ 0002h
T2HLT_MODE2_POSITION                     equ 0002h
T2HLT_MODE2_SIZE                         equ 0001h
T2HLT_MODE2_LENGTH                       equ 0001h
T2HLT_MODE2_MASK                         equ 0004h
T2HLT_MODE3_POSN                         equ 0003h
T2HLT_MODE3_POSITION                     equ 0003h
T2HLT_MODE3_SIZE                         equ 0001h
T2HLT_MODE3_LENGTH                       equ 0001h
T2HLT_MODE3_MASK                         equ 0008h
T2HLT_MODE4_POSN                         equ 0004h
T2HLT_MODE4_POSITION                     equ 0004h
T2HLT_MODE4_SIZE                         equ 0001h
T2HLT_MODE4_LENGTH                       equ 0001h
T2HLT_MODE4_MASK                         equ 0010h
T2HLT_T2MODE_POSN                        equ 0000h
T2HLT_T2MODE_POSITION                    equ 0000h
T2HLT_T2MODE_SIZE                        equ 0005h
T2HLT_T2MODE_LENGTH                      equ 0005h
T2HLT_T2MODE_MASK                        equ 001Fh
T2HLT_T2CKSYNC_POSN                      equ 0005h
T2HLT_T2CKSYNC_POSITION                  equ 0005h
T2HLT_T2CKSYNC_SIZE                      equ 0001h
T2HLT_T2CKSYNC_LENGTH                    equ 0001h
T2HLT_T2CKSYNC_MASK                      equ 0020h
T2HLT_T2CKPOL_POSN                       equ 0006h
T2HLT_T2CKPOL_POSITION                   equ 0006h
T2HLT_T2CKPOL_SIZE                       equ 0001h
T2HLT_T2CKPOL_LENGTH                     equ 0001h
T2HLT_T2CKPOL_MASK                       equ 0040h
T2HLT_T2PSYNC_POSN                       equ 0007h
T2HLT_T2PSYNC_POSITION                   equ 0007h
T2HLT_T2PSYNC_SIZE                       equ 0001h
T2HLT_T2PSYNC_LENGTH                     equ 0001h
T2HLT_T2PSYNC_MASK                       equ 0080h
T2HLT_T2MODE0_POSN                       equ 0000h
T2HLT_T2MODE0_POSITION                   equ 0000h
T2HLT_T2MODE0_SIZE                       equ 0001h
T2HLT_T2MODE0_LENGTH                     equ 0001h
T2HLT_T2MODE0_MASK                       equ 0001h
T2HLT_T2MODE1_POSN                       equ 0001h
T2HLT_T2MODE1_POSITION                   equ 0001h
T2HLT_T2MODE1_SIZE                       equ 0001h
T2HLT_T2MODE1_LENGTH                     equ 0001h
T2HLT_T2MODE1_MASK                       equ 0002h
T2HLT_T2MODE2_POSN                       equ 0002h
T2HLT_T2MODE2_POSITION                   equ 0002h
T2HLT_T2MODE2_SIZE                       equ 0001h
T2HLT_T2MODE2_LENGTH                     equ 0001h
T2HLT_T2MODE2_MASK                       equ 0004h
T2HLT_T2MODE3_POSN                       equ 0003h
T2HLT_T2MODE3_POSITION                   equ 0003h
T2HLT_T2MODE3_SIZE                       equ 0001h
T2HLT_T2MODE3_LENGTH                     equ 0001h
T2HLT_T2MODE3_MASK                       equ 0008h
T2HLT_T2MODE4_POSN                       equ 0004h
T2HLT_T2MODE4_POSITION                   equ 0004h
T2HLT_T2MODE4_SIZE                       equ 0001h
T2HLT_T2MODE4_LENGTH                     equ 0001h
T2HLT_T2MODE4_MASK                       equ 0010h

// Register: T2CLKCON
#define T2CLKCON T2CLKCON
T2CLKCON                                 equ 0FBFh
// bitfield definitions
T2CLKCON_CS_POSN                         equ 0000h
T2CLKCON_CS_POSITION                     equ 0000h
T2CLKCON_CS_SIZE                         equ 0004h
T2CLKCON_CS_LENGTH                       equ 0004h
T2CLKCON_CS_MASK                         equ 000Fh
T2CLKCON_CS0_POSN                        equ 0000h
T2CLKCON_CS0_POSITION                    equ 0000h
T2CLKCON_CS0_SIZE                        equ 0001h
T2CLKCON_CS0_LENGTH                      equ 0001h
T2CLKCON_CS0_MASK                        equ 0001h
T2CLKCON_CS1_POSN                        equ 0001h
T2CLKCON_CS1_POSITION                    equ 0001h
T2CLKCON_CS1_SIZE                        equ 0001h
T2CLKCON_CS1_LENGTH                      equ 0001h
T2CLKCON_CS1_MASK                        equ 0002h
T2CLKCON_CS2_POSN                        equ 0002h
T2CLKCON_CS2_POSITION                    equ 0002h
T2CLKCON_CS2_SIZE                        equ 0001h
T2CLKCON_CS2_LENGTH                      equ 0001h
T2CLKCON_CS2_MASK                        equ 0004h
T2CLKCON_CS3_POSN                        equ 0003h
T2CLKCON_CS3_POSITION                    equ 0003h
T2CLKCON_CS3_SIZE                        equ 0001h
T2CLKCON_CS3_LENGTH                      equ 0001h
T2CLKCON_CS3_MASK                        equ 0008h
T2CLKCON_T2CS_POSN                       equ 0000h
T2CLKCON_T2CS_POSITION                   equ 0000h
T2CLKCON_T2CS_SIZE                       equ 0004h
T2CLKCON_T2CS_LENGTH                     equ 0004h
T2CLKCON_T2CS_MASK                       equ 000Fh
T2CLKCON_T2CS0_POSN                      equ 0000h
T2CLKCON_T2CS0_POSITION                  equ 0000h
T2CLKCON_T2CS0_SIZE                      equ 0001h
T2CLKCON_T2CS0_LENGTH                    equ 0001h
T2CLKCON_T2CS0_MASK                      equ 0001h
T2CLKCON_T2CS1_POSN                      equ 0001h
T2CLKCON_T2CS1_POSITION                  equ 0001h
T2CLKCON_T2CS1_SIZE                      equ 0001h
T2CLKCON_T2CS1_LENGTH                    equ 0001h
T2CLKCON_T2CS1_MASK                      equ 0002h
T2CLKCON_T2CS2_POSN                      equ 0002h
T2CLKCON_T2CS2_POSITION                  equ 0002h
T2CLKCON_T2CS2_SIZE                      equ 0001h
T2CLKCON_T2CS2_LENGTH                    equ 0001h
T2CLKCON_T2CS2_MASK                      equ 0004h
T2CLKCON_T2CS3_POSN                      equ 0003h
T2CLKCON_T2CS3_POSITION                  equ 0003h
T2CLKCON_T2CS3_SIZE                      equ 0001h
T2CLKCON_T2CS3_LENGTH                    equ 0001h
T2CLKCON_T2CS3_MASK                      equ 0008h

// Register: T2RST
#define T2RST T2RST
T2RST                                    equ 0FC0h
// bitfield definitions
T2RST_RSEL_POSN                          equ 0000h
T2RST_RSEL_POSITION                      equ 0000h
T2RST_RSEL_SIZE                          equ 0005h
T2RST_RSEL_LENGTH                        equ 0005h
T2RST_RSEL_MASK                          equ 001Fh
T2RST_RSEL0_POSN                         equ 0000h
T2RST_RSEL0_POSITION                     equ 0000h
T2RST_RSEL0_SIZE                         equ 0001h
T2RST_RSEL0_LENGTH                       equ 0001h
T2RST_RSEL0_MASK                         equ 0001h
T2RST_RSEL1_POSN                         equ 0001h
T2RST_RSEL1_POSITION                     equ 0001h
T2RST_RSEL1_SIZE                         equ 0001h
T2RST_RSEL1_LENGTH                       equ 0001h
T2RST_RSEL1_MASK                         equ 0002h
T2RST_RSEL2_POSN                         equ 0002h
T2RST_RSEL2_POSITION                     equ 0002h
T2RST_RSEL2_SIZE                         equ 0001h
T2RST_RSEL2_LENGTH                       equ 0001h
T2RST_RSEL2_MASK                         equ 0004h
T2RST_RSEL3_POSN                         equ 0003h
T2RST_RSEL3_POSITION                     equ 0003h
T2RST_RSEL3_SIZE                         equ 0001h
T2RST_RSEL3_LENGTH                       equ 0001h
T2RST_RSEL3_MASK                         equ 0008h
T2RST_T2RSEL_POSN                        equ 0000h
T2RST_T2RSEL_POSITION                    equ 0000h
T2RST_T2RSEL_SIZE                        equ 0005h
T2RST_T2RSEL_LENGTH                      equ 0005h
T2RST_T2RSEL_MASK                        equ 001Fh
T2RST_T2RSEL0_POSN                       equ 0000h
T2RST_T2RSEL0_POSITION                   equ 0000h
T2RST_T2RSEL0_SIZE                       equ 0001h
T2RST_T2RSEL0_LENGTH                     equ 0001h
T2RST_T2RSEL0_MASK                       equ 0001h
T2RST_T2RSEL1_POSN                       equ 0001h
T2RST_T2RSEL1_POSITION                   equ 0001h
T2RST_T2RSEL1_SIZE                       equ 0001h
T2RST_T2RSEL1_LENGTH                     equ 0001h
T2RST_T2RSEL1_MASK                       equ 0002h
T2RST_T2RSEL2_POSN                       equ 0002h
T2RST_T2RSEL2_POSITION                   equ 0002h
T2RST_T2RSEL2_SIZE                       equ 0001h
T2RST_T2RSEL2_LENGTH                     equ 0001h
T2RST_T2RSEL2_MASK                       equ 0004h
T2RST_T2RSEL3_POSN                       equ 0003h
T2RST_T2RSEL3_POSITION                   equ 0003h
T2RST_T2RSEL3_SIZE                       equ 0001h
T2RST_T2RSEL3_LENGTH                     equ 0001h
T2RST_T2RSEL3_MASK                       equ 0008h

// Register: TMR5
#define TMR5 TMR5
TMR5                                     equ 0FC1h

// Register: TMR5L
#define TMR5L TMR5L
TMR5L                                    equ 0FC1h
// bitfield definitions
TMR5L_TMR5L0_POSN                        equ 0000h
TMR5L_TMR5L0_POSITION                    equ 0000h
TMR5L_TMR5L0_SIZE                        equ 0001h
TMR5L_TMR5L0_LENGTH                      equ 0001h
TMR5L_TMR5L0_MASK                        equ 0001h
TMR5L_TMR5L1_POSN                        equ 0001h
TMR5L_TMR5L1_POSITION                    equ 0001h
TMR5L_TMR5L1_SIZE                        equ 0001h
TMR5L_TMR5L1_LENGTH                      equ 0001h
TMR5L_TMR5L1_MASK                        equ 0002h
TMR5L_TMR5L2_POSN                        equ 0002h
TMR5L_TMR5L2_POSITION                    equ 0002h
TMR5L_TMR5L2_SIZE                        equ 0001h
TMR5L_TMR5L2_LENGTH                      equ 0001h
TMR5L_TMR5L2_MASK                        equ 0004h
TMR5L_TMR5L3_POSN                        equ 0003h
TMR5L_TMR5L3_POSITION                    equ 0003h
TMR5L_TMR5L3_SIZE                        equ 0001h
TMR5L_TMR5L3_LENGTH                      equ 0001h
TMR5L_TMR5L3_MASK                        equ 0008h
TMR5L_TMR5L4_POSN                        equ 0004h
TMR5L_TMR5L4_POSITION                    equ 0004h
TMR5L_TMR5L4_SIZE                        equ 0001h
TMR5L_TMR5L4_LENGTH                      equ 0001h
TMR5L_TMR5L4_MASK                        equ 0010h
TMR5L_TMR5L5_POSN                        equ 0005h
TMR5L_TMR5L5_POSITION                    equ 0005h
TMR5L_TMR5L5_SIZE                        equ 0001h
TMR5L_TMR5L5_LENGTH                      equ 0001h
TMR5L_TMR5L5_MASK                        equ 0020h
TMR5L_TMR5L6_POSN                        equ 0006h
TMR5L_TMR5L6_POSITION                    equ 0006h
TMR5L_TMR5L6_SIZE                        equ 0001h
TMR5L_TMR5L6_LENGTH                      equ 0001h
TMR5L_TMR5L6_MASK                        equ 0040h
TMR5L_TMR5L7_POSN                        equ 0007h
TMR5L_TMR5L7_POSITION                    equ 0007h
TMR5L_TMR5L7_SIZE                        equ 0001h
TMR5L_TMR5L7_LENGTH                      equ 0001h
TMR5L_TMR5L7_MASK                        equ 0080h
TMR5L_TMR5L_POSN                         equ 0000h
TMR5L_TMR5L_POSITION                     equ 0000h
TMR5L_TMR5L_SIZE                         equ 0008h
TMR5L_TMR5L_LENGTH                       equ 0008h
TMR5L_TMR5L_MASK                         equ 00FFh
TMR5L_TMR50_POSN                         equ 0000h
TMR5L_TMR50_POSITION                     equ 0000h
TMR5L_TMR50_SIZE                         equ 0001h
TMR5L_TMR50_LENGTH                       equ 0001h
TMR5L_TMR50_MASK                         equ 0001h
TMR5L_TMR51_POSN                         equ 0001h
TMR5L_TMR51_POSITION                     equ 0001h
TMR5L_TMR51_SIZE                         equ 0001h
TMR5L_TMR51_LENGTH                       equ 0001h
TMR5L_TMR51_MASK                         equ 0002h
TMR5L_TMR52_POSN                         equ 0002h
TMR5L_TMR52_POSITION                     equ 0002h
TMR5L_TMR52_SIZE                         equ 0001h
TMR5L_TMR52_LENGTH                       equ 0001h
TMR5L_TMR52_MASK                         equ 0004h
TMR5L_TMR53_POSN                         equ 0003h
TMR5L_TMR53_POSITION                     equ 0003h
TMR5L_TMR53_SIZE                         equ 0001h
TMR5L_TMR53_LENGTH                       equ 0001h
TMR5L_TMR53_MASK                         equ 0008h
TMR5L_TMR54_POSN                         equ 0004h
TMR5L_TMR54_POSITION                     equ 0004h
TMR5L_TMR54_SIZE                         equ 0001h
TMR5L_TMR54_LENGTH                       equ 0001h
TMR5L_TMR54_MASK                         equ 0010h
TMR5L_TMR55_POSN                         equ 0005h
TMR5L_TMR55_POSITION                     equ 0005h
TMR5L_TMR55_SIZE                         equ 0001h
TMR5L_TMR55_LENGTH                       equ 0001h
TMR5L_TMR55_MASK                         equ 0020h
TMR5L_TMR56_POSN                         equ 0006h
TMR5L_TMR56_POSITION                     equ 0006h
TMR5L_TMR56_SIZE                         equ 0001h
TMR5L_TMR56_LENGTH                       equ 0001h
TMR5L_TMR56_MASK                         equ 0040h
TMR5L_TMR57_POSN                         equ 0007h
TMR5L_TMR57_POSITION                     equ 0007h
TMR5L_TMR57_SIZE                         equ 0001h
TMR5L_TMR57_LENGTH                       equ 0001h
TMR5L_TMR57_MASK                         equ 0080h
TMR5L_CAL05_POSN                         equ 0000h
TMR5L_CAL05_POSITION                     equ 0000h
TMR5L_CAL05_SIZE                         equ 0001h
TMR5L_CAL05_LENGTH                       equ 0001h
TMR5L_CAL05_MASK                         equ 0001h
TMR5L_CAL15_POSN                         equ 0001h
TMR5L_CAL15_POSITION                     equ 0001h
TMR5L_CAL15_SIZE                         equ 0001h
TMR5L_CAL15_LENGTH                       equ 0001h
TMR5L_CAL15_MASK                         equ 0002h
TMR5L_CAL25_POSN                         equ 0002h
TMR5L_CAL25_POSITION                     equ 0002h
TMR5L_CAL25_SIZE                         equ 0001h
TMR5L_CAL25_LENGTH                       equ 0001h
TMR5L_CAL25_MASK                         equ 0004h
TMR5L_CAL35_POSN                         equ 0003h
TMR5L_CAL35_POSITION                     equ 0003h
TMR5L_CAL35_SIZE                         equ 0001h
TMR5L_CAL35_LENGTH                       equ 0001h
TMR5L_CAL35_MASK                         equ 0008h
TMR5L_CAL45_POSN                         equ 0004h
TMR5L_CAL45_POSITION                     equ 0004h
TMR5L_CAL45_SIZE                         equ 0001h
TMR5L_CAL45_LENGTH                       equ 0001h
TMR5L_CAL45_MASK                         equ 0010h
TMR5L_CAL55_POSN                         equ 0005h
TMR5L_CAL55_POSITION                     equ 0005h
TMR5L_CAL55_SIZE                         equ 0001h
TMR5L_CAL55_LENGTH                       equ 0001h
TMR5L_CAL55_MASK                         equ 0020h
TMR5L_CAL65_POSN                         equ 0006h
TMR5L_CAL65_POSITION                     equ 0006h
TMR5L_CAL65_SIZE                         equ 0001h
TMR5L_CAL65_LENGTH                       equ 0001h
TMR5L_CAL65_MASK                         equ 0040h
TMR5L_CAL75_POSN                         equ 0007h
TMR5L_CAL75_POSITION                     equ 0007h
TMR5L_CAL75_SIZE                         equ 0001h
TMR5L_CAL75_LENGTH                       equ 0001h
TMR5L_CAL75_MASK                         equ 0080h

// Register: TMR5H
#define TMR5H TMR5H
TMR5H                                    equ 0FC2h
// bitfield definitions
TMR5H_TMR5H0_POSN                        equ 0000h
TMR5H_TMR5H0_POSITION                    equ 0000h
TMR5H_TMR5H0_SIZE                        equ 0001h
TMR5H_TMR5H0_LENGTH                      equ 0001h
TMR5H_TMR5H0_MASK                        equ 0001h
TMR5H_TMR5H1_POSN                        equ 0001h
TMR5H_TMR5H1_POSITION                    equ 0001h
TMR5H_TMR5H1_SIZE                        equ 0001h
TMR5H_TMR5H1_LENGTH                      equ 0001h
TMR5H_TMR5H1_MASK                        equ 0002h
TMR5H_TMR5H2_POSN                        equ 0002h
TMR5H_TMR5H2_POSITION                    equ 0002h
TMR5H_TMR5H2_SIZE                        equ 0001h
TMR5H_TMR5H2_LENGTH                      equ 0001h
TMR5H_TMR5H2_MASK                        equ 0004h
TMR5H_TMR5H3_POSN                        equ 0003h
TMR5H_TMR5H3_POSITION                    equ 0003h
TMR5H_TMR5H3_SIZE                        equ 0001h
TMR5H_TMR5H3_LENGTH                      equ 0001h
TMR5H_TMR5H3_MASK                        equ 0008h
TMR5H_TMR5H4_POSN                        equ 0004h
TMR5H_TMR5H4_POSITION                    equ 0004h
TMR5H_TMR5H4_SIZE                        equ 0001h
TMR5H_TMR5H4_LENGTH                      equ 0001h
TMR5H_TMR5H4_MASK                        equ 0010h
TMR5H_TMR5H5_POSN                        equ 0005h
TMR5H_TMR5H5_POSITION                    equ 0005h
TMR5H_TMR5H5_SIZE                        equ 0001h
TMR5H_TMR5H5_LENGTH                      equ 0001h
TMR5H_TMR5H5_MASK                        equ 0020h
TMR5H_TMR5H6_POSN                        equ 0006h
TMR5H_TMR5H6_POSITION                    equ 0006h
TMR5H_TMR5H6_SIZE                        equ 0001h
TMR5H_TMR5H6_LENGTH                      equ 0001h
TMR5H_TMR5H6_MASK                        equ 0040h
TMR5H_TMR5H7_POSN                        equ 0007h
TMR5H_TMR5H7_POSITION                    equ 0007h
TMR5H_TMR5H7_SIZE                        equ 0001h
TMR5H_TMR5H7_LENGTH                      equ 0001h
TMR5H_TMR5H7_MASK                        equ 0080h
TMR5H_TMR5H_POSN                         equ 0000h
TMR5H_TMR5H_POSITION                     equ 0000h
TMR5H_TMR5H_SIZE                         equ 0008h
TMR5H_TMR5H_LENGTH                       equ 0008h
TMR5H_TMR5H_MASK                         equ 00FFh
TMR5H_TMR58_POSN                         equ 0000h
TMR5H_TMR58_POSITION                     equ 0000h
TMR5H_TMR58_SIZE                         equ 0001h
TMR5H_TMR58_LENGTH                       equ 0001h
TMR5H_TMR58_MASK                         equ 0001h
TMR5H_TMR59_POSN                         equ 0001h
TMR5H_TMR59_POSITION                     equ 0001h
TMR5H_TMR59_SIZE                         equ 0001h
TMR5H_TMR59_LENGTH                       equ 0001h
TMR5H_TMR59_MASK                         equ 0002h
TMR5H_TMR510_POSN                        equ 0002h
TMR5H_TMR510_POSITION                    equ 0002h
TMR5H_TMR510_SIZE                        equ 0001h
TMR5H_TMR510_LENGTH                      equ 0001h
TMR5H_TMR510_MASK                        equ 0004h
TMR5H_TMR511_POSN                        equ 0003h
TMR5H_TMR511_POSITION                    equ 0003h
TMR5H_TMR511_SIZE                        equ 0001h
TMR5H_TMR511_LENGTH                      equ 0001h
TMR5H_TMR511_MASK                        equ 0008h
TMR5H_TMR512_POSN                        equ 0004h
TMR5H_TMR512_POSITION                    equ 0004h
TMR5H_TMR512_SIZE                        equ 0001h
TMR5H_TMR512_LENGTH                      equ 0001h
TMR5H_TMR512_MASK                        equ 0010h
TMR5H_TMR513_POSN                        equ 0005h
TMR5H_TMR513_POSITION                    equ 0005h
TMR5H_TMR513_SIZE                        equ 0001h
TMR5H_TMR513_LENGTH                      equ 0001h
TMR5H_TMR513_MASK                        equ 0020h
TMR5H_TMR514_POSN                        equ 0006h
TMR5H_TMR514_POSITION                    equ 0006h
TMR5H_TMR514_SIZE                        equ 0001h
TMR5H_TMR514_LENGTH                      equ 0001h
TMR5H_TMR514_MASK                        equ 0040h
TMR5H_TMR515_POSN                        equ 0007h
TMR5H_TMR515_POSITION                    equ 0007h
TMR5H_TMR515_SIZE                        equ 0001h
TMR5H_TMR515_LENGTH                      equ 0001h
TMR5H_TMR515_MASK                        equ 0080h

// Register: T5CON
#define T5CON T5CON
T5CON                                    equ 0FC3h
// bitfield definitions
T5CON_NOT_SYNC_POSN                      equ 0002h
T5CON_NOT_SYNC_POSITION                  equ 0002h
T5CON_NOT_SYNC_SIZE                      equ 0001h
T5CON_NOT_SYNC_LENGTH                    equ 0001h
T5CON_NOT_SYNC_MASK                      equ 0004h
T5CON_ON_POSN                            equ 0000h
T5CON_ON_POSITION                        equ 0000h
T5CON_ON_SIZE                            equ 0001h
T5CON_ON_LENGTH                          equ 0001h
T5CON_ON_MASK                            equ 0001h
T5CON_RD16_POSN                          equ 0001h
T5CON_RD16_POSITION                      equ 0001h
T5CON_RD16_SIZE                          equ 0001h
T5CON_RD16_LENGTH                        equ 0001h
T5CON_RD16_MASK                          equ 0002h
T5CON_nSYNC_POSN                         equ 0002h
T5CON_nSYNC_POSITION                     equ 0002h
T5CON_nSYNC_SIZE                         equ 0001h
T5CON_nSYNC_LENGTH                       equ 0001h
T5CON_nSYNC_MASK                         equ 0004h
T5CON_CKPS_POSN                          equ 0004h
T5CON_CKPS_POSITION                      equ 0004h
T5CON_CKPS_SIZE                          equ 0002h
T5CON_CKPS_LENGTH                        equ 0002h
T5CON_CKPS_MASK                          equ 0030h
T5CON_NOT_T5SYNC_POSN                    equ 0002h
T5CON_NOT_T5SYNC_POSITION                equ 0002h
T5CON_NOT_T5SYNC_SIZE                    equ 0001h
T5CON_NOT_T5SYNC_LENGTH                  equ 0001h
T5CON_NOT_T5SYNC_MASK                    equ 0004h
T5CON_TMR5ON_POSN                        equ 0000h
T5CON_TMR5ON_POSITION                    equ 0000h
T5CON_TMR5ON_SIZE                        equ 0001h
T5CON_TMR5ON_LENGTH                      equ 0001h
T5CON_TMR5ON_MASK                        equ 0001h
T5CON_T5RD16_POSN                        equ 0001h
T5CON_T5RD16_POSITION                    equ 0001h
T5CON_T5RD16_SIZE                        equ 0001h
T5CON_T5RD16_LENGTH                      equ 0001h
T5CON_T5RD16_MASK                        equ 0002h
T5CON_nT5SYNC_POSN                       equ 0002h
T5CON_nT5SYNC_POSITION                   equ 0002h
T5CON_nT5SYNC_SIZE                       equ 0001h
T5CON_nT5SYNC_LENGTH                     equ 0001h
T5CON_nT5SYNC_MASK                       equ 0004h
T5CON_T5CKPS0_POSN                       equ 0004h
T5CON_T5CKPS0_POSITION                   equ 0004h
T5CON_T5CKPS0_SIZE                       equ 0001h
T5CON_T5CKPS0_LENGTH                     equ 0001h
T5CON_T5CKPS0_MASK                       equ 0010h
T5CON_T5CKPS1_POSN                       equ 0005h
T5CON_T5CKPS1_POSITION                   equ 0005h
T5CON_T5CKPS1_SIZE                       equ 0001h
T5CON_T5CKPS1_LENGTH                     equ 0001h
T5CON_T5CKPS1_MASK                       equ 0020h
T5CON_CKPS0_POSN                         equ 0004h
T5CON_CKPS0_POSITION                     equ 0004h
T5CON_CKPS0_SIZE                         equ 0001h
T5CON_CKPS0_LENGTH                       equ 0001h
T5CON_CKPS0_MASK                         equ 0010h
T5CON_CKPS1_POSN                         equ 0005h
T5CON_CKPS1_POSITION                     equ 0005h
T5CON_CKPS1_SIZE                         equ 0001h
T5CON_CKPS1_LENGTH                       equ 0001h
T5CON_CKPS1_MASK                         equ 0020h
T5CON_RD165_POSN                         equ 0001h
T5CON_RD165_POSITION                     equ 0001h
T5CON_RD165_SIZE                         equ 0001h
T5CON_RD165_LENGTH                       equ 0001h
T5CON_RD165_MASK                         equ 0002h

// Register: T5GCON
#define T5GCON T5GCON
T5GCON                                   equ 0FC4h
// bitfield definitions
T5GCON_GGO_NOT_DONE_POSN                 equ 0003h
T5GCON_GGO_NOT_DONE_POSITION             equ 0003h
T5GCON_GGO_NOT_DONE_SIZE                 equ 0001h
T5GCON_GGO_NOT_DONE_LENGTH               equ 0001h
T5GCON_GGO_NOT_DONE_MASK                 equ 0008h
T5GCON_GVAL_POSN                         equ 0002h
T5GCON_GVAL_POSITION                     equ 0002h
T5GCON_GVAL_SIZE                         equ 0001h
T5GCON_GVAL_LENGTH                       equ 0001h
T5GCON_GVAL_MASK                         equ 0004h
T5GCON_GGO_nDONE_POSN                    equ 0003h
T5GCON_GGO_nDONE_POSITION                equ 0003h
T5GCON_GGO_nDONE_SIZE                    equ 0001h
T5GCON_GGO_nDONE_LENGTH                  equ 0001h
T5GCON_GGO_nDONE_MASK                    equ 0008h
T5GCON_GSPM_POSN                         equ 0004h
T5GCON_GSPM_POSITION                     equ 0004h
T5GCON_GSPM_SIZE                         equ 0001h
T5GCON_GSPM_LENGTH                       equ 0001h
T5GCON_GSPM_MASK                         equ 0010h
T5GCON_GTM_POSN                          equ 0005h
T5GCON_GTM_POSITION                      equ 0005h
T5GCON_GTM_SIZE                          equ 0001h
T5GCON_GTM_LENGTH                        equ 0001h
T5GCON_GTM_MASK                          equ 0020h
T5GCON_GPOL_POSN                         equ 0006h
T5GCON_GPOL_POSITION                     equ 0006h
T5GCON_GPOL_SIZE                         equ 0001h
T5GCON_GPOL_LENGTH                       equ 0001h
T5GCON_GPOL_MASK                         equ 0040h
T5GCON_GE_POSN                           equ 0007h
T5GCON_GE_POSITION                       equ 0007h
T5GCON_GE_SIZE                           equ 0001h
T5GCON_GE_LENGTH                         equ 0001h
T5GCON_GE_MASK                           equ 0080h
T5GCON_T5GGO_NOT_DONE_POSN               equ 0003h
T5GCON_T5GGO_NOT_DONE_POSITION           equ 0003h
T5GCON_T5GGO_NOT_DONE_SIZE               equ 0001h
T5GCON_T5GGO_NOT_DONE_LENGTH             equ 0001h
T5GCON_T5GGO_NOT_DONE_MASK               equ 0008h
T5GCON_T5GVAL_POSN                       equ 0002h
T5GCON_T5GVAL_POSITION                   equ 0002h
T5GCON_T5GVAL_SIZE                       equ 0001h
T5GCON_T5GVAL_LENGTH                     equ 0001h
T5GCON_T5GVAL_MASK                       equ 0004h
T5GCON_T5GGO_nDONE_POSN                  equ 0003h
T5GCON_T5GGO_nDONE_POSITION              equ 0003h
T5GCON_T5GGO_nDONE_SIZE                  equ 0001h
T5GCON_T5GGO_nDONE_LENGTH                equ 0001h
T5GCON_T5GGO_nDONE_MASK                  equ 0008h
T5GCON_T5GSPM_POSN                       equ 0004h
T5GCON_T5GSPM_POSITION                   equ 0004h
T5GCON_T5GSPM_SIZE                       equ 0001h
T5GCON_T5GSPM_LENGTH                     equ 0001h
T5GCON_T5GSPM_MASK                       equ 0010h
T5GCON_T5GTM_POSN                        equ 0005h
T5GCON_T5GTM_POSITION                    equ 0005h
T5GCON_T5GTM_SIZE                        equ 0001h
T5GCON_T5GTM_LENGTH                      equ 0001h
T5GCON_T5GTM_MASK                        equ 0020h
T5GCON_T5GPOL_POSN                       equ 0006h
T5GCON_T5GPOL_POSITION                   equ 0006h
T5GCON_T5GPOL_SIZE                       equ 0001h
T5GCON_T5GPOL_LENGTH                     equ 0001h
T5GCON_T5GPOL_MASK                       equ 0040h
T5GCON_T5GE_POSN                         equ 0007h
T5GCON_T5GE_POSITION                     equ 0007h
T5GCON_T5GE_SIZE                         equ 0001h
T5GCON_T5GE_LENGTH                       equ 0001h
T5GCON_T5GE_MASK                         equ 0080h
T5GCON_T5GGO_POSN                        equ 0003h
T5GCON_T5GGO_POSITION                    equ 0003h
T5GCON_T5GGO_SIZE                        equ 0001h
T5GCON_T5GGO_LENGTH                      equ 0001h
T5GCON_T5GGO_MASK                        equ 0008h

// Register: T5GATE
#define T5GATE T5GATE
T5GATE                                   equ 0FC5h
// bitfield definitions
T5GATE_GSS_POSN                          equ 0000h
T5GATE_GSS_POSITION                      equ 0000h
T5GATE_GSS_SIZE                          equ 0005h
T5GATE_GSS_LENGTH                        equ 0005h
T5GATE_GSS_MASK                          equ 001Fh
T5GATE_GSS0_POSN                         equ 0000h
T5GATE_GSS0_POSITION                     equ 0000h
T5GATE_GSS0_SIZE                         equ 0001h
T5GATE_GSS0_LENGTH                       equ 0001h
T5GATE_GSS0_MASK                         equ 0001h
T5GATE_GSS1_POSN                         equ 0001h
T5GATE_GSS1_POSITION                     equ 0001h
T5GATE_GSS1_SIZE                         equ 0001h
T5GATE_GSS1_LENGTH                       equ 0001h
T5GATE_GSS1_MASK                         equ 0002h
T5GATE_GSS2_POSN                         equ 0002h
T5GATE_GSS2_POSITION                     equ 0002h
T5GATE_GSS2_SIZE                         equ 0001h
T5GATE_GSS2_LENGTH                       equ 0001h
T5GATE_GSS2_MASK                         equ 0004h
T5GATE_GSS3_POSN                         equ 0003h
T5GATE_GSS3_POSITION                     equ 0003h
T5GATE_GSS3_SIZE                         equ 0001h
T5GATE_GSS3_LENGTH                       equ 0001h
T5GATE_GSS3_MASK                         equ 0008h
T5GATE_T5GSS0_POSN                       equ 0000h
T5GATE_T5GSS0_POSITION                   equ 0000h
T5GATE_T5GSS0_SIZE                       equ 0001h
T5GATE_T5GSS0_LENGTH                     equ 0001h
T5GATE_T5GSS0_MASK                       equ 0001h
T5GATE_T5GSS1_POSN                       equ 0001h
T5GATE_T5GSS1_POSITION                   equ 0001h
T5GATE_T5GSS1_SIZE                       equ 0001h
T5GATE_T5GSS1_LENGTH                     equ 0001h
T5GATE_T5GSS1_MASK                       equ 0002h
T5GATE_T5GSS2_POSN                       equ 0002h
T5GATE_T5GSS2_POSITION                   equ 0002h
T5GATE_T5GSS2_SIZE                       equ 0001h
T5GATE_T5GSS2_LENGTH                     equ 0001h
T5GATE_T5GSS2_MASK                       equ 0004h
T5GATE_T5GSS3_POSN                       equ 0003h
T5GATE_T5GSS3_POSITION                   equ 0003h
T5GATE_T5GSS3_SIZE                       equ 0001h
T5GATE_T5GSS3_LENGTH                     equ 0001h
T5GATE_T5GSS3_MASK                       equ 0008h

// Register: T5CLK
#define T5CLK T5CLK
T5CLK                                    equ 0FC6h
// bitfield definitions
T5CLK_CS_POSN                            equ 0000h
T5CLK_CS_POSITION                        equ 0000h
T5CLK_CS_SIZE                            equ 0004h
T5CLK_CS_LENGTH                          equ 0004h
T5CLK_CS_MASK                            equ 000Fh
T5CLK_T5CS0_POSN                         equ 0000h
T5CLK_T5CS0_POSITION                     equ 0000h
T5CLK_T5CS0_SIZE                         equ 0001h
T5CLK_T5CS0_LENGTH                       equ 0001h
T5CLK_T5CS0_MASK                         equ 0001h
T5CLK_T5CS1_POSN                         equ 0001h
T5CLK_T5CS1_POSITION                     equ 0001h
T5CLK_T5CS1_SIZE                         equ 0001h
T5CLK_T5CS1_LENGTH                       equ 0001h
T5CLK_T5CS1_MASK                         equ 0002h
T5CLK_T5CS2_POSN                         equ 0002h
T5CLK_T5CS2_POSITION                     equ 0002h
T5CLK_T5CS2_SIZE                         equ 0001h
T5CLK_T5CS2_LENGTH                       equ 0001h
T5CLK_T5CS2_MASK                         equ 0004h
T5CLK_T5CS3_POSN                         equ 0003h
T5CLK_T5CS3_POSITION                     equ 0003h
T5CLK_T5CS3_SIZE                         equ 0001h
T5CLK_T5CS3_LENGTH                       equ 0001h
T5CLK_T5CS3_MASK                         equ 0008h
T5CLK_CS0_POSN                           equ 0000h
T5CLK_CS0_POSITION                       equ 0000h
T5CLK_CS0_SIZE                           equ 0001h
T5CLK_CS0_LENGTH                         equ 0001h
T5CLK_CS0_MASK                           equ 0001h
T5CLK_CS1_POSN                           equ 0001h
T5CLK_CS1_POSITION                       equ 0001h
T5CLK_CS1_SIZE                           equ 0001h
T5CLK_CS1_LENGTH                         equ 0001h
T5CLK_CS1_MASK                           equ 0002h
T5CLK_CS2_POSN                           equ 0002h
T5CLK_CS2_POSITION                       equ 0002h
T5CLK_CS2_SIZE                           equ 0001h
T5CLK_CS2_LENGTH                         equ 0001h
T5CLK_CS2_MASK                           equ 0004h
T5CLK_CS3_POSN                           equ 0003h
T5CLK_CS3_POSITION                       equ 0003h
T5CLK_CS3_SIZE                           equ 0001h
T5CLK_CS3_LENGTH                         equ 0001h
T5CLK_CS3_MASK                           equ 0008h

// Register: TMR3
#define TMR3 TMR3
TMR3                                     equ 0FC7h

// Register: TMR3L
#define TMR3L TMR3L
TMR3L                                    equ 0FC7h
// bitfield definitions
TMR3L_TMR3L0_POSN                        equ 0000h
TMR3L_TMR3L0_POSITION                    equ 0000h
TMR3L_TMR3L0_SIZE                        equ 0001h
TMR3L_TMR3L0_LENGTH                      equ 0001h
TMR3L_TMR3L0_MASK                        equ 0001h
TMR3L_TMR3L1_POSN                        equ 0001h
TMR3L_TMR3L1_POSITION                    equ 0001h
TMR3L_TMR3L1_SIZE                        equ 0001h
TMR3L_TMR3L1_LENGTH                      equ 0001h
TMR3L_TMR3L1_MASK                        equ 0002h
TMR3L_TMR3L2_POSN                        equ 0002h
TMR3L_TMR3L2_POSITION                    equ 0002h
TMR3L_TMR3L2_SIZE                        equ 0001h
TMR3L_TMR3L2_LENGTH                      equ 0001h
TMR3L_TMR3L2_MASK                        equ 0004h
TMR3L_TMR3L3_POSN                        equ 0003h
TMR3L_TMR3L3_POSITION                    equ 0003h
TMR3L_TMR3L3_SIZE                        equ 0001h
TMR3L_TMR3L3_LENGTH                      equ 0001h
TMR3L_TMR3L3_MASK                        equ 0008h
TMR3L_TMR3L4_POSN                        equ 0004h
TMR3L_TMR3L4_POSITION                    equ 0004h
TMR3L_TMR3L4_SIZE                        equ 0001h
TMR3L_TMR3L4_LENGTH                      equ 0001h
TMR3L_TMR3L4_MASK                        equ 0010h
TMR3L_TMR3L5_POSN                        equ 0005h
TMR3L_TMR3L5_POSITION                    equ 0005h
TMR3L_TMR3L5_SIZE                        equ 0001h
TMR3L_TMR3L5_LENGTH                      equ 0001h
TMR3L_TMR3L5_MASK                        equ 0020h
TMR3L_TMR3L6_POSN                        equ 0006h
TMR3L_TMR3L6_POSITION                    equ 0006h
TMR3L_TMR3L6_SIZE                        equ 0001h
TMR3L_TMR3L6_LENGTH                      equ 0001h
TMR3L_TMR3L6_MASK                        equ 0040h
TMR3L_TMR3L7_POSN                        equ 0007h
TMR3L_TMR3L7_POSITION                    equ 0007h
TMR3L_TMR3L7_SIZE                        equ 0001h
TMR3L_TMR3L7_LENGTH                      equ 0001h
TMR3L_TMR3L7_MASK                        equ 0080h
TMR3L_TMR3L_POSN                         equ 0000h
TMR3L_TMR3L_POSITION                     equ 0000h
TMR3L_TMR3L_SIZE                         equ 0008h
TMR3L_TMR3L_LENGTH                       equ 0008h
TMR3L_TMR3L_MASK                         equ 00FFh
TMR3L_TMR30_POSN                         equ 0000h
TMR3L_TMR30_POSITION                     equ 0000h
TMR3L_TMR30_SIZE                         equ 0001h
TMR3L_TMR30_LENGTH                       equ 0001h
TMR3L_TMR30_MASK                         equ 0001h
TMR3L_TMR31_POSN                         equ 0001h
TMR3L_TMR31_POSITION                     equ 0001h
TMR3L_TMR31_SIZE                         equ 0001h
TMR3L_TMR31_LENGTH                       equ 0001h
TMR3L_TMR31_MASK                         equ 0002h
TMR3L_TMR32_POSN                         equ 0002h
TMR3L_TMR32_POSITION                     equ 0002h
TMR3L_TMR32_SIZE                         equ 0001h
TMR3L_TMR32_LENGTH                       equ 0001h
TMR3L_TMR32_MASK                         equ 0004h
TMR3L_TMR33_POSN                         equ 0003h
TMR3L_TMR33_POSITION                     equ 0003h
TMR3L_TMR33_SIZE                         equ 0001h
TMR3L_TMR33_LENGTH                       equ 0001h
TMR3L_TMR33_MASK                         equ 0008h
TMR3L_TMR34_POSN                         equ 0004h
TMR3L_TMR34_POSITION                     equ 0004h
TMR3L_TMR34_SIZE                         equ 0001h
TMR3L_TMR34_LENGTH                       equ 0001h
TMR3L_TMR34_MASK                         equ 0010h
TMR3L_TMR35_POSN                         equ 0005h
TMR3L_TMR35_POSITION                     equ 0005h
TMR3L_TMR35_SIZE                         equ 0001h
TMR3L_TMR35_LENGTH                       equ 0001h
TMR3L_TMR35_MASK                         equ 0020h
TMR3L_TMR36_POSN                         equ 0006h
TMR3L_TMR36_POSITION                     equ 0006h
TMR3L_TMR36_SIZE                         equ 0001h
TMR3L_TMR36_LENGTH                       equ 0001h
TMR3L_TMR36_MASK                         equ 0040h
TMR3L_TMR37_POSN                         equ 0007h
TMR3L_TMR37_POSITION                     equ 0007h
TMR3L_TMR37_SIZE                         equ 0001h
TMR3L_TMR37_LENGTH                       equ 0001h
TMR3L_TMR37_MASK                         equ 0080h
TMR3L_CAL03_POSN                         equ 0000h
TMR3L_CAL03_POSITION                     equ 0000h
TMR3L_CAL03_SIZE                         equ 0001h
TMR3L_CAL03_LENGTH                       equ 0001h
TMR3L_CAL03_MASK                         equ 0001h
TMR3L_CAL13_POSN                         equ 0001h
TMR3L_CAL13_POSITION                     equ 0001h
TMR3L_CAL13_SIZE                         equ 0001h
TMR3L_CAL13_LENGTH                       equ 0001h
TMR3L_CAL13_MASK                         equ 0002h
TMR3L_CAL23_POSN                         equ 0002h
TMR3L_CAL23_POSITION                     equ 0002h
TMR3L_CAL23_SIZE                         equ 0001h
TMR3L_CAL23_LENGTH                       equ 0001h
TMR3L_CAL23_MASK                         equ 0004h
TMR3L_CAL33_POSN                         equ 0003h
TMR3L_CAL33_POSITION                     equ 0003h
TMR3L_CAL33_SIZE                         equ 0001h
TMR3L_CAL33_LENGTH                       equ 0001h
TMR3L_CAL33_MASK                         equ 0008h
TMR3L_CAL43_POSN                         equ 0004h
TMR3L_CAL43_POSITION                     equ 0004h
TMR3L_CAL43_SIZE                         equ 0001h
TMR3L_CAL43_LENGTH                       equ 0001h
TMR3L_CAL43_MASK                         equ 0010h
TMR3L_CAL53_POSN                         equ 0005h
TMR3L_CAL53_POSITION                     equ 0005h
TMR3L_CAL53_SIZE                         equ 0001h
TMR3L_CAL53_LENGTH                       equ 0001h
TMR3L_CAL53_MASK                         equ 0020h
TMR3L_CAL63_POSN                         equ 0006h
TMR3L_CAL63_POSITION                     equ 0006h
TMR3L_CAL63_SIZE                         equ 0001h
TMR3L_CAL63_LENGTH                       equ 0001h
TMR3L_CAL63_MASK                         equ 0040h
TMR3L_CAL73_POSN                         equ 0007h
TMR3L_CAL73_POSITION                     equ 0007h
TMR3L_CAL73_SIZE                         equ 0001h
TMR3L_CAL73_LENGTH                       equ 0001h
TMR3L_CAL73_MASK                         equ 0080h

// Register: TMR3H
#define TMR3H TMR3H
TMR3H                                    equ 0FC8h
// bitfield definitions
TMR3H_TMR3H0_POSN                        equ 0000h
TMR3H_TMR3H0_POSITION                    equ 0000h
TMR3H_TMR3H0_SIZE                        equ 0001h
TMR3H_TMR3H0_LENGTH                      equ 0001h
TMR3H_TMR3H0_MASK                        equ 0001h
TMR3H_TMR3H1_POSN                        equ 0001h
TMR3H_TMR3H1_POSITION                    equ 0001h
TMR3H_TMR3H1_SIZE                        equ 0001h
TMR3H_TMR3H1_LENGTH                      equ 0001h
TMR3H_TMR3H1_MASK                        equ 0002h
TMR3H_TMR3H2_POSN                        equ 0002h
TMR3H_TMR3H2_POSITION                    equ 0002h
TMR3H_TMR3H2_SIZE                        equ 0001h
TMR3H_TMR3H2_LENGTH                      equ 0001h
TMR3H_TMR3H2_MASK                        equ 0004h
TMR3H_TMR3H3_POSN                        equ 0003h
TMR3H_TMR3H3_POSITION                    equ 0003h
TMR3H_TMR3H3_SIZE                        equ 0001h
TMR3H_TMR3H3_LENGTH                      equ 0001h
TMR3H_TMR3H3_MASK                        equ 0008h
TMR3H_TMR3H4_POSN                        equ 0004h
TMR3H_TMR3H4_POSITION                    equ 0004h
TMR3H_TMR3H4_SIZE                        equ 0001h
TMR3H_TMR3H4_LENGTH                      equ 0001h
TMR3H_TMR3H4_MASK                        equ 0010h
TMR3H_TMR3H5_POSN                        equ 0005h
TMR3H_TMR3H5_POSITION                    equ 0005h
TMR3H_TMR3H5_SIZE                        equ 0001h
TMR3H_TMR3H5_LENGTH                      equ 0001h
TMR3H_TMR3H5_MASK                        equ 0020h
TMR3H_TMR3H6_POSN                        equ 0006h
TMR3H_TMR3H6_POSITION                    equ 0006h
TMR3H_TMR3H6_SIZE                        equ 0001h
TMR3H_TMR3H6_LENGTH                      equ 0001h
TMR3H_TMR3H6_MASK                        equ 0040h
TMR3H_TMR3H7_POSN                        equ 0007h
TMR3H_TMR3H7_POSITION                    equ 0007h
TMR3H_TMR3H7_SIZE                        equ 0001h
TMR3H_TMR3H7_LENGTH                      equ 0001h
TMR3H_TMR3H7_MASK                        equ 0080h
TMR3H_TMR3H_POSN                         equ 0000h
TMR3H_TMR3H_POSITION                     equ 0000h
TMR3H_TMR3H_SIZE                         equ 0008h
TMR3H_TMR3H_LENGTH                       equ 0008h
TMR3H_TMR3H_MASK                         equ 00FFh
TMR3H_TMR38_POSN                         equ 0000h
TMR3H_TMR38_POSITION                     equ 0000h
TMR3H_TMR38_SIZE                         equ 0001h
TMR3H_TMR38_LENGTH                       equ 0001h
TMR3H_TMR38_MASK                         equ 0001h
TMR3H_TMR39_POSN                         equ 0001h
TMR3H_TMR39_POSITION                     equ 0001h
TMR3H_TMR39_SIZE                         equ 0001h
TMR3H_TMR39_LENGTH                       equ 0001h
TMR3H_TMR39_MASK                         equ 0002h
TMR3H_TMR310_POSN                        equ 0002h
TMR3H_TMR310_POSITION                    equ 0002h
TMR3H_TMR310_SIZE                        equ 0001h
TMR3H_TMR310_LENGTH                      equ 0001h
TMR3H_TMR310_MASK                        equ 0004h
TMR3H_TMR311_POSN                        equ 0003h
TMR3H_TMR311_POSITION                    equ 0003h
TMR3H_TMR311_SIZE                        equ 0001h
TMR3H_TMR311_LENGTH                      equ 0001h
TMR3H_TMR311_MASK                        equ 0008h
TMR3H_TMR312_POSN                        equ 0004h
TMR3H_TMR312_POSITION                    equ 0004h
TMR3H_TMR312_SIZE                        equ 0001h
TMR3H_TMR312_LENGTH                      equ 0001h
TMR3H_TMR312_MASK                        equ 0010h
TMR3H_TMR313_POSN                        equ 0005h
TMR3H_TMR313_POSITION                    equ 0005h
TMR3H_TMR313_SIZE                        equ 0001h
TMR3H_TMR313_LENGTH                      equ 0001h
TMR3H_TMR313_MASK                        equ 0020h
TMR3H_TMR314_POSN                        equ 0006h
TMR3H_TMR314_POSITION                    equ 0006h
TMR3H_TMR314_SIZE                        equ 0001h
TMR3H_TMR314_LENGTH                      equ 0001h
TMR3H_TMR314_MASK                        equ 0040h
TMR3H_TMR315_POSN                        equ 0007h
TMR3H_TMR315_POSITION                    equ 0007h
TMR3H_TMR315_SIZE                        equ 0001h
TMR3H_TMR315_LENGTH                      equ 0001h
TMR3H_TMR315_MASK                        equ 0080h

// Register: T3CON
#define T3CON T3CON
T3CON                                    equ 0FC9h
// bitfield definitions
T3CON_NOT_SYNC_POSN                      equ 0002h
T3CON_NOT_SYNC_POSITION                  equ 0002h
T3CON_NOT_SYNC_SIZE                      equ 0001h
T3CON_NOT_SYNC_LENGTH                    equ 0001h
T3CON_NOT_SYNC_MASK                      equ 0004h
T3CON_ON_POSN                            equ 0000h
T3CON_ON_POSITION                        equ 0000h
T3CON_ON_SIZE                            equ 0001h
T3CON_ON_LENGTH                          equ 0001h
T3CON_ON_MASK                            equ 0001h
T3CON_RD16_POSN                          equ 0001h
T3CON_RD16_POSITION                      equ 0001h
T3CON_RD16_SIZE                          equ 0001h
T3CON_RD16_LENGTH                        equ 0001h
T3CON_RD16_MASK                          equ 0002h
T3CON_nSYNC_POSN                         equ 0002h
T3CON_nSYNC_POSITION                     equ 0002h
T3CON_nSYNC_SIZE                         equ 0001h
T3CON_nSYNC_LENGTH                       equ 0001h
T3CON_nSYNC_MASK                         equ 0004h
T3CON_CKPS_POSN                          equ 0004h
T3CON_CKPS_POSITION                      equ 0004h
T3CON_CKPS_SIZE                          equ 0002h
T3CON_CKPS_LENGTH                        equ 0002h
T3CON_CKPS_MASK                          equ 0030h
T3CON_NOT_T3SYNC_POSN                    equ 0002h
T3CON_NOT_T3SYNC_POSITION                equ 0002h
T3CON_NOT_T3SYNC_SIZE                    equ 0001h
T3CON_NOT_T3SYNC_LENGTH                  equ 0001h
T3CON_NOT_T3SYNC_MASK                    equ 0004h
T3CON_TMR3ON_POSN                        equ 0000h
T3CON_TMR3ON_POSITION                    equ 0000h
T3CON_TMR3ON_SIZE                        equ 0001h
T3CON_TMR3ON_LENGTH                      equ 0001h
T3CON_TMR3ON_MASK                        equ 0001h
T3CON_T3RD16_POSN                        equ 0001h
T3CON_T3RD16_POSITION                    equ 0001h
T3CON_T3RD16_SIZE                        equ 0001h
T3CON_T3RD16_LENGTH                      equ 0001h
T3CON_T3RD16_MASK                        equ 0002h
T3CON_nT3SYNC_POSN                       equ 0002h
T3CON_nT3SYNC_POSITION                   equ 0002h
T3CON_nT3SYNC_SIZE                       equ 0001h
T3CON_nT3SYNC_LENGTH                     equ 0001h
T3CON_nT3SYNC_MASK                       equ 0004h
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
T3CON_CKPS0_POSN                         equ 0004h
T3CON_CKPS0_POSITION                     equ 0004h
T3CON_CKPS0_SIZE                         equ 0001h
T3CON_CKPS0_LENGTH                       equ 0001h
T3CON_CKPS0_MASK                         equ 0010h
T3CON_CKPS1_POSN                         equ 0005h
T3CON_CKPS1_POSITION                     equ 0005h
T3CON_CKPS1_SIZE                         equ 0001h
T3CON_CKPS1_LENGTH                       equ 0001h
T3CON_CKPS1_MASK                         equ 0020h
T3CON_RD163_POSN                         equ 0001h
T3CON_RD163_POSITION                     equ 0001h
T3CON_RD163_SIZE                         equ 0001h
T3CON_RD163_LENGTH                       equ 0001h
T3CON_RD163_MASK                         equ 0002h

// Register: T3GCON
#define T3GCON T3GCON
T3GCON                                   equ 0FCAh
// bitfield definitions
T3GCON_GGO_NOT_DONE_POSN                 equ 0003h
T3GCON_GGO_NOT_DONE_POSITION             equ 0003h
T3GCON_GGO_NOT_DONE_SIZE                 equ 0001h
T3GCON_GGO_NOT_DONE_LENGTH               equ 0001h
T3GCON_GGO_NOT_DONE_MASK                 equ 0008h
T3GCON_GVAL_POSN                         equ 0002h
T3GCON_GVAL_POSITION                     equ 0002h
T3GCON_GVAL_SIZE                         equ 0001h
T3GCON_GVAL_LENGTH                       equ 0001h
T3GCON_GVAL_MASK                         equ 0004h
T3GCON_GGO_nDONE_POSN                    equ 0003h
T3GCON_GGO_nDONE_POSITION                equ 0003h
T3GCON_GGO_nDONE_SIZE                    equ 0001h
T3GCON_GGO_nDONE_LENGTH                  equ 0001h
T3GCON_GGO_nDONE_MASK                    equ 0008h
T3GCON_GSPM_POSN                         equ 0004h
T3GCON_GSPM_POSITION                     equ 0004h
T3GCON_GSPM_SIZE                         equ 0001h
T3GCON_GSPM_LENGTH                       equ 0001h
T3GCON_GSPM_MASK                         equ 0010h
T3GCON_GTM_POSN                          equ 0005h
T3GCON_GTM_POSITION                      equ 0005h
T3GCON_GTM_SIZE                          equ 0001h
T3GCON_GTM_LENGTH                        equ 0001h
T3GCON_GTM_MASK                          equ 0020h
T3GCON_GPOL_POSN                         equ 0006h
T3GCON_GPOL_POSITION                     equ 0006h
T3GCON_GPOL_SIZE                         equ 0001h
T3GCON_GPOL_LENGTH                       equ 0001h
T3GCON_GPOL_MASK                         equ 0040h
T3GCON_GE_POSN                           equ 0007h
T3GCON_GE_POSITION                       equ 0007h
T3GCON_GE_SIZE                           equ 0001h
T3GCON_GE_LENGTH                         equ 0001h
T3GCON_GE_MASK                           equ 0080h
T3GCON_T3GGO_NOT_DONE_POSN               equ 0003h
T3GCON_T3GGO_NOT_DONE_POSITION           equ 0003h
T3GCON_T3GGO_NOT_DONE_SIZE               equ 0001h
T3GCON_T3GGO_NOT_DONE_LENGTH             equ 0001h
T3GCON_T3GGO_NOT_DONE_MASK               equ 0008h
T3GCON_T3GVAL_POSN                       equ 0002h
T3GCON_T3GVAL_POSITION                   equ 0002h
T3GCON_T3GVAL_SIZE                       equ 0001h
T3GCON_T3GVAL_LENGTH                     equ 0001h
T3GCON_T3GVAL_MASK                       equ 0004h
T3GCON_T3GGO_nDONE_POSN                  equ 0003h
T3GCON_T3GGO_nDONE_POSITION              equ 0003h
T3GCON_T3GGO_nDONE_SIZE                  equ 0001h
T3GCON_T3GGO_nDONE_LENGTH                equ 0001h
T3GCON_T3GGO_nDONE_MASK                  equ 0008h
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
T3GCON_T3GE_POSN                         equ 0007h
T3GCON_T3GE_POSITION                     equ 0007h
T3GCON_T3GE_SIZE                         equ 0001h
T3GCON_T3GE_LENGTH                       equ 0001h
T3GCON_T3GE_MASK                         equ 0080h
T3GCON_T3GGO_POSN                        equ 0003h
T3GCON_T3GGO_POSITION                    equ 0003h
T3GCON_T3GGO_SIZE                        equ 0001h
T3GCON_T3GGO_LENGTH                      equ 0001h
T3GCON_T3GGO_MASK                        equ 0008h

// Register: T3GATE
#define T3GATE T3GATE
T3GATE                                   equ 0FCBh
// bitfield definitions
T3GATE_GSS_POSN                          equ 0000h
T3GATE_GSS_POSITION                      equ 0000h
T3GATE_GSS_SIZE                          equ 0005h
T3GATE_GSS_LENGTH                        equ 0005h
T3GATE_GSS_MASK                          equ 001Fh
T3GATE_GSS0_POSN                         equ 0000h
T3GATE_GSS0_POSITION                     equ 0000h
T3GATE_GSS0_SIZE                         equ 0001h
T3GATE_GSS0_LENGTH                       equ 0001h
T3GATE_GSS0_MASK                         equ 0001h
T3GATE_GSS1_POSN                         equ 0001h
T3GATE_GSS1_POSITION                     equ 0001h
T3GATE_GSS1_SIZE                         equ 0001h
T3GATE_GSS1_LENGTH                       equ 0001h
T3GATE_GSS1_MASK                         equ 0002h
T3GATE_GSS2_POSN                         equ 0002h
T3GATE_GSS2_POSITION                     equ 0002h
T3GATE_GSS2_SIZE                         equ 0001h
T3GATE_GSS2_LENGTH                       equ 0001h
T3GATE_GSS2_MASK                         equ 0004h
T3GATE_GSS3_POSN                         equ 0003h
T3GATE_GSS3_POSITION                     equ 0003h
T3GATE_GSS3_SIZE                         equ 0001h
T3GATE_GSS3_LENGTH                       equ 0001h
T3GATE_GSS3_MASK                         equ 0008h
T3GATE_T3GSS0_POSN                       equ 0000h
T3GATE_T3GSS0_POSITION                   equ 0000h
T3GATE_T3GSS0_SIZE                       equ 0001h
T3GATE_T3GSS0_LENGTH                     equ 0001h
T3GATE_T3GSS0_MASK                       equ 0001h
T3GATE_T3GSS1_POSN                       equ 0001h
T3GATE_T3GSS1_POSITION                   equ 0001h
T3GATE_T3GSS1_SIZE                       equ 0001h
T3GATE_T3GSS1_LENGTH                     equ 0001h
T3GATE_T3GSS1_MASK                       equ 0002h
T3GATE_T3GSS2_POSN                       equ 0002h
T3GATE_T3GSS2_POSITION                   equ 0002h
T3GATE_T3GSS2_SIZE                       equ 0001h
T3GATE_T3GSS2_LENGTH                     equ 0001h
T3GATE_T3GSS2_MASK                       equ 0004h
T3GATE_T3GSS3_POSN                       equ 0003h
T3GATE_T3GSS3_POSITION                   equ 0003h
T3GATE_T3GSS3_SIZE                       equ 0001h
T3GATE_T3GSS3_LENGTH                     equ 0001h
T3GATE_T3GSS3_MASK                       equ 0008h

// Register: T3CLK
#define T3CLK T3CLK
T3CLK                                    equ 0FCCh
// bitfield definitions
T3CLK_CS_POSN                            equ 0000h
T3CLK_CS_POSITION                        equ 0000h
T3CLK_CS_SIZE                            equ 0004h
T3CLK_CS_LENGTH                          equ 0004h
T3CLK_CS_MASK                            equ 000Fh
T3CLK_T3CS0_POSN                         equ 0000h
T3CLK_T3CS0_POSITION                     equ 0000h
T3CLK_T3CS0_SIZE                         equ 0001h
T3CLK_T3CS0_LENGTH                       equ 0001h
T3CLK_T3CS0_MASK                         equ 0001h
T3CLK_T3CS1_POSN                         equ 0001h
T3CLK_T3CS1_POSITION                     equ 0001h
T3CLK_T3CS1_SIZE                         equ 0001h
T3CLK_T3CS1_LENGTH                       equ 0001h
T3CLK_T3CS1_MASK                         equ 0002h
T3CLK_T3CS2_POSN                         equ 0002h
T3CLK_T3CS2_POSITION                     equ 0002h
T3CLK_T3CS2_SIZE                         equ 0001h
T3CLK_T3CS2_LENGTH                       equ 0001h
T3CLK_T3CS2_MASK                         equ 0004h
T3CLK_T3CS3_POSN                         equ 0003h
T3CLK_T3CS3_POSITION                     equ 0003h
T3CLK_T3CS3_SIZE                         equ 0001h
T3CLK_T3CS3_LENGTH                       equ 0001h
T3CLK_T3CS3_MASK                         equ 0008h
T3CLK_CS0_POSN                           equ 0000h
T3CLK_CS0_POSITION                       equ 0000h
T3CLK_CS0_SIZE                           equ 0001h
T3CLK_CS0_LENGTH                         equ 0001h
T3CLK_CS0_MASK                           equ 0001h
T3CLK_CS1_POSN                           equ 0001h
T3CLK_CS1_POSITION                       equ 0001h
T3CLK_CS1_SIZE                           equ 0001h
T3CLK_CS1_LENGTH                         equ 0001h
T3CLK_CS1_MASK                           equ 0002h
T3CLK_CS2_POSN                           equ 0002h
T3CLK_CS2_POSITION                       equ 0002h
T3CLK_CS2_SIZE                           equ 0001h
T3CLK_CS2_LENGTH                         equ 0001h
T3CLK_CS2_MASK                           equ 0004h
T3CLK_CS3_POSN                           equ 0003h
T3CLK_CS3_POSITION                       equ 0003h
T3CLK_CS3_SIZE                           equ 0001h
T3CLK_CS3_LENGTH                         equ 0001h
T3CLK_CS3_MASK                           equ 0008h

// Register: TMR1
#define TMR1 TMR1
TMR1                                     equ 0FCDh

// Register: TMR1L
#define TMR1L TMR1L
TMR1L                                    equ 0FCDh
// bitfield definitions
TMR1L_TMR1L0_POSN                        equ 0000h
TMR1L_TMR1L0_POSITION                    equ 0000h
TMR1L_TMR1L0_SIZE                        equ 0001h
TMR1L_TMR1L0_LENGTH                      equ 0001h
TMR1L_TMR1L0_MASK                        equ 0001h
TMR1L_TMR1L1_POSN                        equ 0001h
TMR1L_TMR1L1_POSITION                    equ 0001h
TMR1L_TMR1L1_SIZE                        equ 0001h
TMR1L_TMR1L1_LENGTH                      equ 0001h
TMR1L_TMR1L1_MASK                        equ 0002h
TMR1L_TMR1L2_POSN                        equ 0002h
TMR1L_TMR1L2_POSITION                    equ 0002h
TMR1L_TMR1L2_SIZE                        equ 0001h
TMR1L_TMR1L2_LENGTH                      equ 0001h
TMR1L_TMR1L2_MASK                        equ 0004h
TMR1L_TMR1L3_POSN                        equ 0003h
TMR1L_TMR1L3_POSITION                    equ 0003h
TMR1L_TMR1L3_SIZE                        equ 0001h
TMR1L_TMR1L3_LENGTH                      equ 0001h
TMR1L_TMR1L3_MASK                        equ 0008h
TMR1L_TMR1L4_POSN                        equ 0004h
TMR1L_TMR1L4_POSITION                    equ 0004h
TMR1L_TMR1L4_SIZE                        equ 0001h
TMR1L_TMR1L4_LENGTH                      equ 0001h
TMR1L_TMR1L4_MASK                        equ 0010h
TMR1L_TMR1L5_POSN                        equ 0005h
TMR1L_TMR1L5_POSITION                    equ 0005h
TMR1L_TMR1L5_SIZE                        equ 0001h
TMR1L_TMR1L5_LENGTH                      equ 0001h
TMR1L_TMR1L5_MASK                        equ 0020h
TMR1L_TMR1L6_POSN                        equ 0006h
TMR1L_TMR1L6_POSITION                    equ 0006h
TMR1L_TMR1L6_SIZE                        equ 0001h
TMR1L_TMR1L6_LENGTH                      equ 0001h
TMR1L_TMR1L6_MASK                        equ 0040h
TMR1L_TMR1L7_POSN                        equ 0007h
TMR1L_TMR1L7_POSITION                    equ 0007h
TMR1L_TMR1L7_SIZE                        equ 0001h
TMR1L_TMR1L7_LENGTH                      equ 0001h
TMR1L_TMR1L7_MASK                        equ 0080h
TMR1L_TMR1L_POSN                         equ 0000h
TMR1L_TMR1L_POSITION                     equ 0000h
TMR1L_TMR1L_SIZE                         equ 0008h
TMR1L_TMR1L_LENGTH                       equ 0008h
TMR1L_TMR1L_MASK                         equ 00FFh
TMR1L_TMR10_POSN                         equ 0000h
TMR1L_TMR10_POSITION                     equ 0000h
TMR1L_TMR10_SIZE                         equ 0001h
TMR1L_TMR10_LENGTH                       equ 0001h
TMR1L_TMR10_MASK                         equ 0001h
TMR1L_TMR11_POSN                         equ 0001h
TMR1L_TMR11_POSITION                     equ 0001h
TMR1L_TMR11_SIZE                         equ 0001h
TMR1L_TMR11_LENGTH                       equ 0001h
TMR1L_TMR11_MASK                         equ 0002h
TMR1L_TMR12_POSN                         equ 0002h
TMR1L_TMR12_POSITION                     equ 0002h
TMR1L_TMR12_SIZE                         equ 0001h
TMR1L_TMR12_LENGTH                       equ 0001h
TMR1L_TMR12_MASK                         equ 0004h
TMR1L_TMR13_POSN                         equ 0003h
TMR1L_TMR13_POSITION                     equ 0003h
TMR1L_TMR13_SIZE                         equ 0001h
TMR1L_TMR13_LENGTH                       equ 0001h
TMR1L_TMR13_MASK                         equ 0008h
TMR1L_TMR14_POSN                         equ 0004h
TMR1L_TMR14_POSITION                     equ 0004h
TMR1L_TMR14_SIZE                         equ 0001h
TMR1L_TMR14_LENGTH                       equ 0001h
TMR1L_TMR14_MASK                         equ 0010h
TMR1L_TMR15_POSN                         equ 0005h
TMR1L_TMR15_POSITION                     equ 0005h
TMR1L_TMR15_SIZE                         equ 0001h
TMR1L_TMR15_LENGTH                       equ 0001h
TMR1L_TMR15_MASK                         equ 0020h
TMR1L_TMR16_POSN                         equ 0006h
TMR1L_TMR16_POSITION                     equ 0006h
TMR1L_TMR16_SIZE                         equ 0001h
TMR1L_TMR16_LENGTH                       equ 0001h
TMR1L_TMR16_MASK                         equ 0040h
TMR1L_TMR17_POSN                         equ 0007h
TMR1L_TMR17_POSITION                     equ 0007h
TMR1L_TMR17_SIZE                         equ 0001h
TMR1L_TMR17_LENGTH                       equ 0001h
TMR1L_TMR17_MASK                         equ 0080h
TMR1L_CAL01_POSN                         equ 0000h
TMR1L_CAL01_POSITION                     equ 0000h
TMR1L_CAL01_SIZE                         equ 0001h
TMR1L_CAL01_LENGTH                       equ 0001h
TMR1L_CAL01_MASK                         equ 0001h
TMR1L_CAL11_POSN                         equ 0001h
TMR1L_CAL11_POSITION                     equ 0001h
TMR1L_CAL11_SIZE                         equ 0001h
TMR1L_CAL11_LENGTH                       equ 0001h
TMR1L_CAL11_MASK                         equ 0002h
TMR1L_CAL21_POSN                         equ 0002h
TMR1L_CAL21_POSITION                     equ 0002h
TMR1L_CAL21_SIZE                         equ 0001h
TMR1L_CAL21_LENGTH                       equ 0001h
TMR1L_CAL21_MASK                         equ 0004h
TMR1L_CAL31_POSN                         equ 0003h
TMR1L_CAL31_POSITION                     equ 0003h
TMR1L_CAL31_SIZE                         equ 0001h
TMR1L_CAL31_LENGTH                       equ 0001h
TMR1L_CAL31_MASK                         equ 0008h
TMR1L_CAL41_POSN                         equ 0004h
TMR1L_CAL41_POSITION                     equ 0004h
TMR1L_CAL41_SIZE                         equ 0001h
TMR1L_CAL41_LENGTH                       equ 0001h
TMR1L_CAL41_MASK                         equ 0010h
TMR1L_CAL51_POSN                         equ 0005h
TMR1L_CAL51_POSITION                     equ 0005h
TMR1L_CAL51_SIZE                         equ 0001h
TMR1L_CAL51_LENGTH                       equ 0001h
TMR1L_CAL51_MASK                         equ 0020h
TMR1L_CAL61_POSN                         equ 0006h
TMR1L_CAL61_POSITION                     equ 0006h
TMR1L_CAL61_SIZE                         equ 0001h
TMR1L_CAL61_LENGTH                       equ 0001h
TMR1L_CAL61_MASK                         equ 0040h
TMR1L_CAL71_POSN                         equ 0007h
TMR1L_CAL71_POSITION                     equ 0007h
TMR1L_CAL71_SIZE                         equ 0001h
TMR1L_CAL71_LENGTH                       equ 0001h
TMR1L_CAL71_MASK                         equ 0080h

// Register: TMR1H
#define TMR1H TMR1H
TMR1H                                    equ 0FCEh
// bitfield definitions
TMR1H_TMR1H0_POSN                        equ 0000h
TMR1H_TMR1H0_POSITION                    equ 0000h
TMR1H_TMR1H0_SIZE                        equ 0001h
TMR1H_TMR1H0_LENGTH                      equ 0001h
TMR1H_TMR1H0_MASK                        equ 0001h
TMR1H_TMR1H1_POSN                        equ 0001h
TMR1H_TMR1H1_POSITION                    equ 0001h
TMR1H_TMR1H1_SIZE                        equ 0001h
TMR1H_TMR1H1_LENGTH                      equ 0001h
TMR1H_TMR1H1_MASK                        equ 0002h
TMR1H_TMR1H2_POSN                        equ 0002h
TMR1H_TMR1H2_POSITION                    equ 0002h
TMR1H_TMR1H2_SIZE                        equ 0001h
TMR1H_TMR1H2_LENGTH                      equ 0001h
TMR1H_TMR1H2_MASK                        equ 0004h
TMR1H_TMR1H3_POSN                        equ 0003h
TMR1H_TMR1H3_POSITION                    equ 0003h
TMR1H_TMR1H3_SIZE                        equ 0001h
TMR1H_TMR1H3_LENGTH                      equ 0001h
TMR1H_TMR1H3_MASK                        equ 0008h
TMR1H_TMR1H4_POSN                        equ 0004h
TMR1H_TMR1H4_POSITION                    equ 0004h
TMR1H_TMR1H4_SIZE                        equ 0001h
TMR1H_TMR1H4_LENGTH                      equ 0001h
TMR1H_TMR1H4_MASK                        equ 0010h
TMR1H_TMR1H5_POSN                        equ 0005h
TMR1H_TMR1H5_POSITION                    equ 0005h
TMR1H_TMR1H5_SIZE                        equ 0001h
TMR1H_TMR1H5_LENGTH                      equ 0001h
TMR1H_TMR1H5_MASK                        equ 0020h
TMR1H_TMR1H6_POSN                        equ 0006h
TMR1H_TMR1H6_POSITION                    equ 0006h
TMR1H_TMR1H6_SIZE                        equ 0001h
TMR1H_TMR1H6_LENGTH                      equ 0001h
TMR1H_TMR1H6_MASK                        equ 0040h
TMR1H_TMR1H7_POSN                        equ 0007h
TMR1H_TMR1H7_POSITION                    equ 0007h
TMR1H_TMR1H7_SIZE                        equ 0001h
TMR1H_TMR1H7_LENGTH                      equ 0001h
TMR1H_TMR1H7_MASK                        equ 0080h
TMR1H_TMR1H_POSN                         equ 0000h
TMR1H_TMR1H_POSITION                     equ 0000h
TMR1H_TMR1H_SIZE                         equ 0008h
TMR1H_TMR1H_LENGTH                       equ 0008h
TMR1H_TMR1H_MASK                         equ 00FFh
TMR1H_TMR18_POSN                         equ 0000h
TMR1H_TMR18_POSITION                     equ 0000h
TMR1H_TMR18_SIZE                         equ 0001h
TMR1H_TMR18_LENGTH                       equ 0001h
TMR1H_TMR18_MASK                         equ 0001h
TMR1H_TMR19_POSN                         equ 0001h
TMR1H_TMR19_POSITION                     equ 0001h
TMR1H_TMR19_SIZE                         equ 0001h
TMR1H_TMR19_LENGTH                       equ 0001h
TMR1H_TMR19_MASK                         equ 0002h
TMR1H_TMR110_POSN                        equ 0002h
TMR1H_TMR110_POSITION                    equ 0002h
TMR1H_TMR110_SIZE                        equ 0001h
TMR1H_TMR110_LENGTH                      equ 0001h
TMR1H_TMR110_MASK                        equ 0004h
TMR1H_TMR111_POSN                        equ 0003h
TMR1H_TMR111_POSITION                    equ 0003h
TMR1H_TMR111_SIZE                        equ 0001h
TMR1H_TMR111_LENGTH                      equ 0001h
TMR1H_TMR111_MASK                        equ 0008h
TMR1H_TMR112_POSN                        equ 0004h
TMR1H_TMR112_POSITION                    equ 0004h
TMR1H_TMR112_SIZE                        equ 0001h
TMR1H_TMR112_LENGTH                      equ 0001h
TMR1H_TMR112_MASK                        equ 0010h
TMR1H_TMR113_POSN                        equ 0005h
TMR1H_TMR113_POSITION                    equ 0005h
TMR1H_TMR113_SIZE                        equ 0001h
TMR1H_TMR113_LENGTH                      equ 0001h
TMR1H_TMR113_MASK                        equ 0020h
TMR1H_TMR114_POSN                        equ 0006h
TMR1H_TMR114_POSITION                    equ 0006h
TMR1H_TMR114_SIZE                        equ 0001h
TMR1H_TMR114_LENGTH                      equ 0001h
TMR1H_TMR114_MASK                        equ 0040h
TMR1H_TMR115_POSN                        equ 0007h
TMR1H_TMR115_POSITION                    equ 0007h
TMR1H_TMR115_SIZE                        equ 0001h
TMR1H_TMR115_LENGTH                      equ 0001h
TMR1H_TMR115_MASK                        equ 0080h

// Register: T1CON
#define T1CON T1CON
T1CON                                    equ 0FCFh
// bitfield definitions
T1CON_NOT_SYNC_POSN                      equ 0002h
T1CON_NOT_SYNC_POSITION                  equ 0002h
T1CON_NOT_SYNC_SIZE                      equ 0001h
T1CON_NOT_SYNC_LENGTH                    equ 0001h
T1CON_NOT_SYNC_MASK                      equ 0004h
T1CON_ON_POSN                            equ 0000h
T1CON_ON_POSITION                        equ 0000h
T1CON_ON_SIZE                            equ 0001h
T1CON_ON_LENGTH                          equ 0001h
T1CON_ON_MASK                            equ 0001h
T1CON_RD16_POSN                          equ 0001h
T1CON_RD16_POSITION                      equ 0001h
T1CON_RD16_SIZE                          equ 0001h
T1CON_RD16_LENGTH                        equ 0001h
T1CON_RD16_MASK                          equ 0002h
T1CON_nSYNC_POSN                         equ 0002h
T1CON_nSYNC_POSITION                     equ 0002h
T1CON_nSYNC_SIZE                         equ 0001h
T1CON_nSYNC_LENGTH                       equ 0001h
T1CON_nSYNC_MASK                         equ 0004h
T1CON_CKPS_POSN                          equ 0004h
T1CON_CKPS_POSITION                      equ 0004h
T1CON_CKPS_SIZE                          equ 0002h
T1CON_CKPS_LENGTH                        equ 0002h
T1CON_CKPS_MASK                          equ 0030h
T1CON_NOT_T1SYNC_POSN                    equ 0002h
T1CON_NOT_T1SYNC_POSITION                equ 0002h
T1CON_NOT_T1SYNC_SIZE                    equ 0001h
T1CON_NOT_T1SYNC_LENGTH                  equ 0001h
T1CON_NOT_T1SYNC_MASK                    equ 0004h
T1CON_TMR1ON_POSN                        equ 0000h
T1CON_TMR1ON_POSITION                    equ 0000h
T1CON_TMR1ON_SIZE                        equ 0001h
T1CON_TMR1ON_LENGTH                      equ 0001h
T1CON_TMR1ON_MASK                        equ 0001h
T1CON_T1RD16_POSN                        equ 0001h
T1CON_T1RD16_POSITION                    equ 0001h
T1CON_T1RD16_SIZE                        equ 0001h
T1CON_T1RD16_LENGTH                      equ 0001h
T1CON_T1RD16_MASK                        equ 0002h
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
T1CON_CKPS0_POSN                         equ 0004h
T1CON_CKPS0_POSITION                     equ 0004h
T1CON_CKPS0_SIZE                         equ 0001h
T1CON_CKPS0_LENGTH                       equ 0001h
T1CON_CKPS0_MASK                         equ 0010h
T1CON_CKPS1_POSN                         equ 0005h
T1CON_CKPS1_POSITION                     equ 0005h
T1CON_CKPS1_SIZE                         equ 0001h
T1CON_CKPS1_LENGTH                       equ 0001h
T1CON_CKPS1_MASK                         equ 0020h
T1CON_RD161_POSN                         equ 0001h
T1CON_RD161_POSITION                     equ 0001h
T1CON_RD161_SIZE                         equ 0001h
T1CON_RD161_LENGTH                       equ 0001h
T1CON_RD161_MASK                         equ 0002h

// Register: T1GCON
#define T1GCON T1GCON
T1GCON                                   equ 0FD0h
// bitfield definitions
T1GCON_GGO_NOT_DONE_POSN                 equ 0003h
T1GCON_GGO_NOT_DONE_POSITION             equ 0003h
T1GCON_GGO_NOT_DONE_SIZE                 equ 0001h
T1GCON_GGO_NOT_DONE_LENGTH               equ 0001h
T1GCON_GGO_NOT_DONE_MASK                 equ 0008h
T1GCON_GVAL_POSN                         equ 0002h
T1GCON_GVAL_POSITION                     equ 0002h
T1GCON_GVAL_SIZE                         equ 0001h
T1GCON_GVAL_LENGTH                       equ 0001h
T1GCON_GVAL_MASK                         equ 0004h
T1GCON_GGO_nDONE_POSN                    equ 0003h
T1GCON_GGO_nDONE_POSITION                equ 0003h
T1GCON_GGO_nDONE_SIZE                    equ 0001h
T1GCON_GGO_nDONE_LENGTH                  equ 0001h
T1GCON_GGO_nDONE_MASK                    equ 0008h
T1GCON_GSPM_POSN                         equ 0004h
T1GCON_GSPM_POSITION                     equ 0004h
T1GCON_GSPM_SIZE                         equ 0001h
T1GCON_GSPM_LENGTH                       equ 0001h
T1GCON_GSPM_MASK                         equ 0010h
T1GCON_GTM_POSN                          equ 0005h
T1GCON_GTM_POSITION                      equ 0005h
T1GCON_GTM_SIZE                          equ 0001h
T1GCON_GTM_LENGTH                        equ 0001h
T1GCON_GTM_MASK                          equ 0020h
T1GCON_GPOL_POSN                         equ 0006h
T1GCON_GPOL_POSITION                     equ 0006h
T1GCON_GPOL_SIZE                         equ 0001h
T1GCON_GPOL_LENGTH                       equ 0001h
T1GCON_GPOL_MASK                         equ 0040h
T1GCON_GE_POSN                           equ 0007h
T1GCON_GE_POSITION                       equ 0007h
T1GCON_GE_SIZE                           equ 0001h
T1GCON_GE_LENGTH                         equ 0001h
T1GCON_GE_MASK                           equ 0080h
T1GCON_T1GGO_NOT_DONE_POSN               equ 0003h
T1GCON_T1GGO_NOT_DONE_POSITION           equ 0003h
T1GCON_T1GGO_NOT_DONE_SIZE               equ 0001h
T1GCON_T1GGO_NOT_DONE_LENGTH             equ 0001h
T1GCON_T1GGO_NOT_DONE_MASK               equ 0008h
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
T1GCON_T1GE_POSN                         equ 0007h
T1GCON_T1GE_POSITION                     equ 0007h
T1GCON_T1GE_SIZE                         equ 0001h
T1GCON_T1GE_LENGTH                       equ 0001h
T1GCON_T1GE_MASK                         equ 0080h
T1GCON_T1GGO_POSN                        equ 0003h
T1GCON_T1GGO_POSITION                    equ 0003h
T1GCON_T1GGO_SIZE                        equ 0001h
T1GCON_T1GGO_LENGTH                      equ 0001h
T1GCON_T1GGO_MASK                        equ 0008h

// Register: T1GATE
#define T1GATE T1GATE
T1GATE                                   equ 0FD1h
// bitfield definitions
T1GATE_GSS_POSN                          equ 0000h
T1GATE_GSS_POSITION                      equ 0000h
T1GATE_GSS_SIZE                          equ 0005h
T1GATE_GSS_LENGTH                        equ 0005h
T1GATE_GSS_MASK                          equ 001Fh
T1GATE_GSS0_POSN                         equ 0000h
T1GATE_GSS0_POSITION                     equ 0000h
T1GATE_GSS0_SIZE                         equ 0001h
T1GATE_GSS0_LENGTH                       equ 0001h
T1GATE_GSS0_MASK                         equ 0001h
T1GATE_GSS1_POSN                         equ 0001h
T1GATE_GSS1_POSITION                     equ 0001h
T1GATE_GSS1_SIZE                         equ 0001h
T1GATE_GSS1_LENGTH                       equ 0001h
T1GATE_GSS1_MASK                         equ 0002h
T1GATE_GSS2_POSN                         equ 0002h
T1GATE_GSS2_POSITION                     equ 0002h
T1GATE_GSS2_SIZE                         equ 0001h
T1GATE_GSS2_LENGTH                       equ 0001h
T1GATE_GSS2_MASK                         equ 0004h
T1GATE_GSS3_POSN                         equ 0003h
T1GATE_GSS3_POSITION                     equ 0003h
T1GATE_GSS3_SIZE                         equ 0001h
T1GATE_GSS3_LENGTH                       equ 0001h
T1GATE_GSS3_MASK                         equ 0008h
T1GATE_T1GSS0_POSN                       equ 0000h
T1GATE_T1GSS0_POSITION                   equ 0000h
T1GATE_T1GSS0_SIZE                       equ 0001h
T1GATE_T1GSS0_LENGTH                     equ 0001h
T1GATE_T1GSS0_MASK                       equ 0001h
T1GATE_T1GSS1_POSN                       equ 0001h
T1GATE_T1GSS1_POSITION                   equ 0001h
T1GATE_T1GSS1_SIZE                       equ 0001h
T1GATE_T1GSS1_LENGTH                     equ 0001h
T1GATE_T1GSS1_MASK                       equ 0002h
T1GATE_T1GSS2_POSN                       equ 0002h
T1GATE_T1GSS2_POSITION                   equ 0002h
T1GATE_T1GSS2_SIZE                       equ 0001h
T1GATE_T1GSS2_LENGTH                     equ 0001h
T1GATE_T1GSS2_MASK                       equ 0004h
T1GATE_T1GSS3_POSN                       equ 0003h
T1GATE_T1GSS3_POSITION                   equ 0003h
T1GATE_T1GSS3_SIZE                       equ 0001h
T1GATE_T1GSS3_LENGTH                     equ 0001h
T1GATE_T1GSS3_MASK                       equ 0008h

// Register: T1CLK
#define T1CLK T1CLK
T1CLK                                    equ 0FD2h
// bitfield definitions
T1CLK_CS_POSN                            equ 0000h
T1CLK_CS_POSITION                        equ 0000h
T1CLK_CS_SIZE                            equ 0004h
T1CLK_CS_LENGTH                          equ 0004h
T1CLK_CS_MASK                            equ 000Fh
T1CLK_T1CS0_POSN                         equ 0000h
T1CLK_T1CS0_POSITION                     equ 0000h
T1CLK_T1CS0_SIZE                         equ 0001h
T1CLK_T1CS0_LENGTH                       equ 0001h
T1CLK_T1CS0_MASK                         equ 0001h
T1CLK_T1CS1_POSN                         equ 0001h
T1CLK_T1CS1_POSITION                     equ 0001h
T1CLK_T1CS1_SIZE                         equ 0001h
T1CLK_T1CS1_LENGTH                       equ 0001h
T1CLK_T1CS1_MASK                         equ 0002h
T1CLK_T1CS2_POSN                         equ 0002h
T1CLK_T1CS2_POSITION                     equ 0002h
T1CLK_T1CS2_SIZE                         equ 0001h
T1CLK_T1CS2_LENGTH                       equ 0001h
T1CLK_T1CS2_MASK                         equ 0004h
T1CLK_T1CS3_POSN                         equ 0003h
T1CLK_T1CS3_POSITION                     equ 0003h
T1CLK_T1CS3_SIZE                         equ 0001h
T1CLK_T1CS3_LENGTH                       equ 0001h
T1CLK_T1CS3_MASK                         equ 0008h
T1CLK_CS0_POSN                           equ 0000h
T1CLK_CS0_POSITION                       equ 0000h
T1CLK_CS0_SIZE                           equ 0001h
T1CLK_CS0_LENGTH                         equ 0001h
T1CLK_CS0_MASK                           equ 0001h
T1CLK_CS1_POSN                           equ 0001h
T1CLK_CS1_POSITION                       equ 0001h
T1CLK_CS1_SIZE                           equ 0001h
T1CLK_CS1_LENGTH                         equ 0001h
T1CLK_CS1_MASK                           equ 0002h
T1CLK_CS2_POSN                           equ 0002h
T1CLK_CS2_POSITION                       equ 0002h
T1CLK_CS2_SIZE                           equ 0001h
T1CLK_CS2_LENGTH                         equ 0001h
T1CLK_CS2_MASK                           equ 0004h
T1CLK_CS3_POSN                           equ 0003h
T1CLK_CS3_POSITION                       equ 0003h
T1CLK_CS3_SIZE                           equ 0001h
T1CLK_CS3_LENGTH                         equ 0001h
T1CLK_CS3_MASK                           equ 0008h

// Register: TMR0L
#define TMR0L TMR0L
TMR0L                                    equ 0FD3h
// bitfield definitions
TMR0L_TMR0L_POSN                         equ 0000h
TMR0L_TMR0L_POSITION                     equ 0000h
TMR0L_TMR0L_SIZE                         equ 0008h
TMR0L_TMR0L_LENGTH                       equ 0008h
TMR0L_TMR0L_MASK                         equ 00FFh
TMR0L_TMR0L0_POSN                        equ 0000h
TMR0L_TMR0L0_POSITION                    equ 0000h
TMR0L_TMR0L0_SIZE                        equ 0001h
TMR0L_TMR0L0_LENGTH                      equ 0001h
TMR0L_TMR0L0_MASK                        equ 0001h
TMR0L_TMR0L1_POSN                        equ 0001h
TMR0L_TMR0L1_POSITION                    equ 0001h
TMR0L_TMR0L1_SIZE                        equ 0001h
TMR0L_TMR0L1_LENGTH                      equ 0001h
TMR0L_TMR0L1_MASK                        equ 0002h
TMR0L_TMR0L2_POSN                        equ 0002h
TMR0L_TMR0L2_POSITION                    equ 0002h
TMR0L_TMR0L2_SIZE                        equ 0001h
TMR0L_TMR0L2_LENGTH                      equ 0001h
TMR0L_TMR0L2_MASK                        equ 0004h
TMR0L_TMR0L3_POSN                        equ 0003h
TMR0L_TMR0L3_POSITION                    equ 0003h
TMR0L_TMR0L3_SIZE                        equ 0001h
TMR0L_TMR0L3_LENGTH                      equ 0001h
TMR0L_TMR0L3_MASK                        equ 0008h
TMR0L_TMR0L4_POSN                        equ 0004h
TMR0L_TMR0L4_POSITION                    equ 0004h
TMR0L_TMR0L4_SIZE                        equ 0001h
TMR0L_TMR0L4_LENGTH                      equ 0001h
TMR0L_TMR0L4_MASK                        equ 0010h
TMR0L_TMR0L5_POSN                        equ 0005h
TMR0L_TMR0L5_POSITION                    equ 0005h
TMR0L_TMR0L5_SIZE                        equ 0001h
TMR0L_TMR0L5_LENGTH                      equ 0001h
TMR0L_TMR0L5_MASK                        equ 0020h
TMR0L_TMR0L6_POSN                        equ 0006h
TMR0L_TMR0L6_POSITION                    equ 0006h
TMR0L_TMR0L6_SIZE                        equ 0001h
TMR0L_TMR0L6_LENGTH                      equ 0001h
TMR0L_TMR0L6_MASK                        equ 0040h
TMR0L_TMR0L7_POSN                        equ 0007h
TMR0L_TMR0L7_POSITION                    equ 0007h
TMR0L_TMR0L7_SIZE                        equ 0001h
TMR0L_TMR0L7_LENGTH                      equ 0001h
TMR0L_TMR0L7_MASK                        equ 0080h

// Register: TMR0H
#define TMR0H TMR0H
TMR0H                                    equ 0FD4h
// bitfield definitions
TMR0H_TMR0H_POSN                         equ 0000h
TMR0H_TMR0H_POSITION                     equ 0000h
TMR0H_TMR0H_SIZE                         equ 0008h
TMR0H_TMR0H_LENGTH                       equ 0008h
TMR0H_TMR0H_MASK                         equ 00FFh
TMR0H_T0PR_POSN                          equ 0000h
TMR0H_T0PR_POSITION                      equ 0000h
TMR0H_T0PR_SIZE                          equ 0008h
TMR0H_T0PR_LENGTH                        equ 0008h
TMR0H_T0PR_MASK                          equ 00FFh
TMR0H_TMR0H0_POSN                        equ 0000h
TMR0H_TMR0H0_POSITION                    equ 0000h
TMR0H_TMR0H0_SIZE                        equ 0001h
TMR0H_TMR0H0_LENGTH                      equ 0001h
TMR0H_TMR0H0_MASK                        equ 0001h
TMR0H_TMR0H1_POSN                        equ 0001h
TMR0H_TMR0H1_POSITION                    equ 0001h
TMR0H_TMR0H1_SIZE                        equ 0001h
TMR0H_TMR0H1_LENGTH                      equ 0001h
TMR0H_TMR0H1_MASK                        equ 0002h
TMR0H_TMR0H2_POSN                        equ 0002h
TMR0H_TMR0H2_POSITION                    equ 0002h
TMR0H_TMR0H2_SIZE                        equ 0001h
TMR0H_TMR0H2_LENGTH                      equ 0001h
TMR0H_TMR0H2_MASK                        equ 0004h
TMR0H_TMR0H3_POSN                        equ 0003h
TMR0H_TMR0H3_POSITION                    equ 0003h
TMR0H_TMR0H3_SIZE                        equ 0001h
TMR0H_TMR0H3_LENGTH                      equ 0001h
TMR0H_TMR0H3_MASK                        equ 0008h
TMR0H_TMR0H4_POSN                        equ 0004h
TMR0H_TMR0H4_POSITION                    equ 0004h
TMR0H_TMR0H4_SIZE                        equ 0001h
TMR0H_TMR0H4_LENGTH                      equ 0001h
TMR0H_TMR0H4_MASK                        equ 0010h
TMR0H_TMR0H5_POSN                        equ 0005h
TMR0H_TMR0H5_POSITION                    equ 0005h
TMR0H_TMR0H5_SIZE                        equ 0001h
TMR0H_TMR0H5_LENGTH                      equ 0001h
TMR0H_TMR0H5_MASK                        equ 0020h
TMR0H_TMR0H6_POSN                        equ 0006h
TMR0H_TMR0H6_POSITION                    equ 0006h
TMR0H_TMR0H6_SIZE                        equ 0001h
TMR0H_TMR0H6_LENGTH                      equ 0001h
TMR0H_TMR0H6_MASK                        equ 0040h
TMR0H_TMR0H7_POSN                        equ 0007h
TMR0H_TMR0H7_POSITION                    equ 0007h
TMR0H_TMR0H7_SIZE                        equ 0001h
TMR0H_TMR0H7_LENGTH                      equ 0001h
TMR0H_TMR0H7_MASK                        equ 0080h
TMR0H_T0PR0_POSN                         equ 0000h
TMR0H_T0PR0_POSITION                     equ 0000h
TMR0H_T0PR0_SIZE                         equ 0001h
TMR0H_T0PR0_LENGTH                       equ 0001h
TMR0H_T0PR0_MASK                         equ 0001h
TMR0H_T0PR1_POSN                         equ 0001h
TMR0H_T0PR1_POSITION                     equ 0001h
TMR0H_T0PR1_SIZE                         equ 0001h
TMR0H_T0PR1_LENGTH                       equ 0001h
TMR0H_T0PR1_MASK                         equ 0002h
TMR0H_T0PR2_POSN                         equ 0002h
TMR0H_T0PR2_POSITION                     equ 0002h
TMR0H_T0PR2_SIZE                         equ 0001h
TMR0H_T0PR2_LENGTH                       equ 0001h
TMR0H_T0PR2_MASK                         equ 0004h
TMR0H_T0PR3_POSN                         equ 0003h
TMR0H_T0PR3_POSITION                     equ 0003h
TMR0H_T0PR3_SIZE                         equ 0001h
TMR0H_T0PR3_LENGTH                       equ 0001h
TMR0H_T0PR3_MASK                         equ 0008h
TMR0H_T0PR4_POSN                         equ 0004h
TMR0H_T0PR4_POSITION                     equ 0004h
TMR0H_T0PR4_SIZE                         equ 0001h
TMR0H_T0PR4_LENGTH                       equ 0001h
TMR0H_T0PR4_MASK                         equ 0010h
TMR0H_T0PR5_POSN                         equ 0005h
TMR0H_T0PR5_POSITION                     equ 0005h
TMR0H_T0PR5_SIZE                         equ 0001h
TMR0H_T0PR5_LENGTH                       equ 0001h
TMR0H_T0PR5_MASK                         equ 0020h
TMR0H_T0PR6_POSN                         equ 0006h
TMR0H_T0PR6_POSITION                     equ 0006h
TMR0H_T0PR6_SIZE                         equ 0001h
TMR0H_T0PR6_LENGTH                       equ 0001h
TMR0H_T0PR6_MASK                         equ 0040h
TMR0H_T0PR7_POSN                         equ 0007h
TMR0H_T0PR7_POSITION                     equ 0007h
TMR0H_T0PR7_SIZE                         equ 0001h
TMR0H_T0PR7_LENGTH                       equ 0001h
TMR0H_T0PR7_MASK                         equ 0080h

// Register: T0CON0
#define T0CON0 T0CON0
T0CON0                                   equ 0FD5h
// bitfield definitions
T0CON0_T0OUTPS_POSN                      equ 0000h
T0CON0_T0OUTPS_POSITION                  equ 0000h
T0CON0_T0OUTPS_SIZE                      equ 0004h
T0CON0_T0OUTPS_LENGTH                    equ 0004h
T0CON0_T0OUTPS_MASK                      equ 000Fh
T0CON0_T016BIT_POSN                      equ 0004h
T0CON0_T016BIT_POSITION                  equ 0004h
T0CON0_T016BIT_SIZE                      equ 0001h
T0CON0_T016BIT_LENGTH                    equ 0001h
T0CON0_T016BIT_MASK                      equ 0010h
T0CON0_T0OUT_POSN                        equ 0005h
T0CON0_T0OUT_POSITION                    equ 0005h
T0CON0_T0OUT_SIZE                        equ 0001h
T0CON0_T0OUT_LENGTH                      equ 0001h
T0CON0_T0OUT_MASK                        equ 0020h
T0CON0_T0EN_POSN                         equ 0007h
T0CON0_T0EN_POSITION                     equ 0007h
T0CON0_T0EN_SIZE                         equ 0001h
T0CON0_T0EN_LENGTH                       equ 0001h
T0CON0_T0EN_MASK                         equ 0080h
T0CON0_T0OUTPS0_POSN                     equ 0000h
T0CON0_T0OUTPS0_POSITION                 equ 0000h
T0CON0_T0OUTPS0_SIZE                     equ 0001h
T0CON0_T0OUTPS0_LENGTH                   equ 0001h
T0CON0_T0OUTPS0_MASK                     equ 0001h
T0CON0_T0OUTPS1_POSN                     equ 0001h
T0CON0_T0OUTPS1_POSITION                 equ 0001h
T0CON0_T0OUTPS1_SIZE                     equ 0001h
T0CON0_T0OUTPS1_LENGTH                   equ 0001h
T0CON0_T0OUTPS1_MASK                     equ 0002h
T0CON0_T0OUTPS2_POSN                     equ 0002h
T0CON0_T0OUTPS2_POSITION                 equ 0002h
T0CON0_T0OUTPS2_SIZE                     equ 0001h
T0CON0_T0OUTPS2_LENGTH                   equ 0001h
T0CON0_T0OUTPS2_MASK                     equ 0004h
T0CON0_T0OUTPS3_POSN                     equ 0003h
T0CON0_T0OUTPS3_POSITION                 equ 0003h
T0CON0_T0OUTPS3_SIZE                     equ 0001h
T0CON0_T0OUTPS3_LENGTH                   equ 0001h
T0CON0_T0OUTPS3_MASK                     equ 0008h

// Register: T0CON1
#define T0CON1 T0CON1
T0CON1                                   equ 0FD6h
// bitfield definitions
T0CON1_T0CKPS_POSN                       equ 0000h
T0CON1_T0CKPS_POSITION                   equ 0000h
T0CON1_T0CKPS_SIZE                       equ 0004h
T0CON1_T0CKPS_LENGTH                     equ 0004h
T0CON1_T0CKPS_MASK                       equ 000Fh
T0CON1_T0ASYNC_POSN                      equ 0004h
T0CON1_T0ASYNC_POSITION                  equ 0004h
T0CON1_T0ASYNC_SIZE                      equ 0001h
T0CON1_T0ASYNC_LENGTH                    equ 0001h
T0CON1_T0ASYNC_MASK                      equ 0010h
T0CON1_T0CS_POSN                         equ 0005h
T0CON1_T0CS_POSITION                     equ 0005h
T0CON1_T0CS_SIZE                         equ 0003h
T0CON1_T0CS_LENGTH                       equ 0003h
T0CON1_T0CS_MASK                         equ 00E0h
T0CON1_T0CKPS0_POSN                      equ 0000h
T0CON1_T0CKPS0_POSITION                  equ 0000h
T0CON1_T0CKPS0_SIZE                      equ 0001h
T0CON1_T0CKPS0_LENGTH                    equ 0001h
T0CON1_T0CKPS0_MASK                      equ 0001h
T0CON1_T0CKPS1_POSN                      equ 0001h
T0CON1_T0CKPS1_POSITION                  equ 0001h
T0CON1_T0CKPS1_SIZE                      equ 0001h
T0CON1_T0CKPS1_LENGTH                    equ 0001h
T0CON1_T0CKPS1_MASK                      equ 0002h
T0CON1_T0CKPS2_POSN                      equ 0002h
T0CON1_T0CKPS2_POSITION                  equ 0002h
T0CON1_T0CKPS2_SIZE                      equ 0001h
T0CON1_T0CKPS2_LENGTH                    equ 0001h
T0CON1_T0CKPS2_MASK                      equ 0004h
T0CON1_T0CKPS3_POSN                      equ 0003h
T0CON1_T0CKPS3_POSITION                  equ 0003h
T0CON1_T0CKPS3_SIZE                      equ 0001h
T0CON1_T0CKPS3_LENGTH                    equ 0001h
T0CON1_T0CKPS3_MASK                      equ 0008h
T0CON1_T0CS0_POSN                        equ 0005h
T0CON1_T0CS0_POSITION                    equ 0005h
T0CON1_T0CS0_SIZE                        equ 0001h
T0CON1_T0CS0_LENGTH                      equ 0001h
T0CON1_T0CS0_MASK                        equ 0020h
T0CON1_T0CS1_POSN                        equ 0006h
T0CON1_T0CS1_POSITION                    equ 0006h
T0CON1_T0CS1_SIZE                        equ 0001h
T0CON1_T0CS1_LENGTH                      equ 0001h
T0CON1_T0CS1_MASK                        equ 0040h
T0CON1_T0CS2_POSN                        equ 0007h
T0CON1_T0CS2_POSITION                    equ 0007h
T0CON1_T0CS2_SIZE                        equ 0001h
T0CON1_T0CS2_LENGTH                      equ 0001h
T0CON1_T0CS2_MASK                        equ 0080h
T0CON1_T0PS0_POSN                        equ 0000h
T0CON1_T0PS0_POSITION                    equ 0000h
T0CON1_T0PS0_SIZE                        equ 0001h
T0CON1_T0PS0_LENGTH                      equ 0001h
T0CON1_T0PS0_MASK                        equ 0001h
T0CON1_T0PS1_POSN                        equ 0001h
T0CON1_T0PS1_POSITION                    equ 0001h
T0CON1_T0PS1_SIZE                        equ 0001h
T0CON1_T0PS1_LENGTH                      equ 0001h
T0CON1_T0PS1_MASK                        equ 0002h
T0CON1_T0PS2_POSN                        equ 0002h
T0CON1_T0PS2_POSITION                    equ 0002h
T0CON1_T0PS2_SIZE                        equ 0001h
T0CON1_T0PS2_LENGTH                      equ 0001h
T0CON1_T0PS2_MASK                        equ 0004h
T0CON1_T0PS3_POSN                        equ 0003h
T0CON1_T0PS3_POSITION                    equ 0003h
T0CON1_T0PS3_SIZE                        equ 0001h
T0CON1_T0PS3_LENGTH                      equ 0001h
T0CON1_T0PS3_MASK                        equ 0008h
T0CON1_T0PS_POSN                         equ 0000h
T0CON1_T0PS_POSITION                     equ 0000h
T0CON1_T0PS_SIZE                         equ 0004h
T0CON1_T0PS_LENGTH                       equ 0004h
T0CON1_T0PS_MASK                         equ 000Fh

// Register: PCON0
#define PCON0 PCON0
PCON0                                    equ 0FD7h
// bitfield definitions
PCON0_NOT_BOR_POSN                       equ 0000h
PCON0_NOT_BOR_POSITION                   equ 0000h
PCON0_NOT_BOR_SIZE                       equ 0001h
PCON0_NOT_BOR_LENGTH                     equ 0001h
PCON0_NOT_BOR_MASK                       equ 0001h
PCON0_NOT_POR_POSN                       equ 0001h
PCON0_NOT_POR_POSITION                   equ 0001h
PCON0_NOT_POR_SIZE                       equ 0001h
PCON0_NOT_POR_LENGTH                     equ 0001h
PCON0_NOT_POR_MASK                       equ 0002h
PCON0_NOT_RI_POSN                        equ 0002h
PCON0_NOT_RI_POSITION                    equ 0002h
PCON0_NOT_RI_SIZE                        equ 0001h
PCON0_NOT_RI_LENGTH                      equ 0001h
PCON0_NOT_RI_MASK                        equ 0004h
PCON0_NOT_RMCLR_POSN                     equ 0003h
PCON0_NOT_RMCLR_POSITION                 equ 0003h
PCON0_NOT_RMCLR_SIZE                     equ 0001h
PCON0_NOT_RMCLR_LENGTH                   equ 0001h
PCON0_NOT_RMCLR_MASK                     equ 0008h
PCON0_NOT_RWDT_POSN                      equ 0004h
PCON0_NOT_RWDT_POSITION                  equ 0004h
PCON0_NOT_RWDT_SIZE                      equ 0001h
PCON0_NOT_RWDT_LENGTH                    equ 0001h
PCON0_NOT_RWDT_MASK                      equ 0010h
PCON0_NOT_WDTWV_POSN                     equ 0005h
PCON0_NOT_WDTWV_POSITION                 equ 0005h
PCON0_NOT_WDTWV_SIZE                     equ 0001h
PCON0_NOT_WDTWV_LENGTH                   equ 0001h
PCON0_NOT_WDTWV_MASK                     equ 0020h
PCON0_nBOR_POSN                          equ 0000h
PCON0_nBOR_POSITION                      equ 0000h
PCON0_nBOR_SIZE                          equ 0001h
PCON0_nBOR_LENGTH                        equ 0001h
PCON0_nBOR_MASK                          equ 0001h
PCON0_nPOR_POSN                          equ 0001h
PCON0_nPOR_POSITION                      equ 0001h
PCON0_nPOR_SIZE                          equ 0001h
PCON0_nPOR_LENGTH                        equ 0001h
PCON0_nPOR_MASK                          equ 0002h
PCON0_nRI_POSN                           equ 0002h
PCON0_nRI_POSITION                       equ 0002h
PCON0_nRI_SIZE                           equ 0001h
PCON0_nRI_LENGTH                         equ 0001h
PCON0_nRI_MASK                           equ 0004h
PCON0_nRMCLR_POSN                        equ 0003h
PCON0_nRMCLR_POSITION                    equ 0003h
PCON0_nRMCLR_SIZE                        equ 0001h
PCON0_nRMCLR_LENGTH                      equ 0001h
PCON0_nRMCLR_MASK                        equ 0008h
PCON0_nRWDT_POSN                         equ 0004h
PCON0_nRWDT_POSITION                     equ 0004h
PCON0_nRWDT_SIZE                         equ 0001h
PCON0_nRWDT_LENGTH                       equ 0001h
PCON0_nRWDT_MASK                         equ 0010h
PCON0_nWDTWV_POSN                        equ 0005h
PCON0_nWDTWV_POSITION                    equ 0005h
PCON0_nWDTWV_SIZE                        equ 0001h
PCON0_nWDTWV_LENGTH                      equ 0001h
PCON0_nWDTWV_MASK                        equ 0020h
PCON0_STKUNF_POSN                        equ 0006h
PCON0_STKUNF_POSITION                    equ 0006h
PCON0_STKUNF_SIZE                        equ 0001h
PCON0_STKUNF_LENGTH                      equ 0001h
PCON0_STKUNF_MASK                        equ 0040h
PCON0_STKOVF_POSN                        equ 0007h
PCON0_STKOVF_POSITION                    equ 0007h
PCON0_STKOVF_SIZE                        equ 0001h
PCON0_STKOVF_LENGTH                      equ 0001h
PCON0_STKOVF_MASK                        equ 0080h
PCON0_BOR_POSN                           equ 0000h
PCON0_BOR_POSITION                       equ 0000h
PCON0_BOR_SIZE                           equ 0001h
PCON0_BOR_LENGTH                         equ 0001h
PCON0_BOR_MASK                           equ 0001h
PCON0_POR_POSN                           equ 0001h
PCON0_POR_POSITION                       equ 0001h
PCON0_POR_SIZE                           equ 0001h
PCON0_POR_LENGTH                         equ 0001h
PCON0_POR_MASK                           equ 0002h
PCON0_RI_POSN                            equ 0002h
PCON0_RI_POSITION                        equ 0002h
PCON0_RI_SIZE                            equ 0001h
PCON0_RI_LENGTH                          equ 0001h
PCON0_RI_MASK                            equ 0004h
PCON0_RMCLR_POSN                         equ 0003h
PCON0_RMCLR_POSITION                     equ 0003h
PCON0_RMCLR_SIZE                         equ 0001h
PCON0_RMCLR_LENGTH                       equ 0001h
PCON0_RMCLR_MASK                         equ 0008h
PCON0_RWDT_POSN                          equ 0004h
PCON0_RWDT_POSITION                      equ 0004h
PCON0_RWDT_SIZE                          equ 0001h
PCON0_RWDT_LENGTH                        equ 0001h
PCON0_RWDT_MASK                          equ 0010h
PCON0_WDTWV_POSN                         equ 0005h
PCON0_WDTWV_POSITION                     equ 0005h
PCON0_WDTWV_SIZE                         equ 0001h
PCON0_WDTWV_LENGTH                       equ 0001h
PCON0_WDTWV_MASK                         equ 0020h

// Register: STATUS
#define STATUS STATUS
STATUS                                   equ 0FD8h
// bitfield definitions
STATUS_NOT_PD_POSN                       equ 0005h
STATUS_NOT_PD_POSITION                   equ 0005h
STATUS_NOT_PD_SIZE                       equ 0001h
STATUS_NOT_PD_LENGTH                     equ 0001h
STATUS_NOT_PD_MASK                       equ 0020h
STATUS_NOT_TO_POSN                       equ 0006h
STATUS_NOT_TO_POSITION                   equ 0006h
STATUS_NOT_TO_SIZE                       equ 0001h
STATUS_NOT_TO_LENGTH                     equ 0001h
STATUS_NOT_TO_MASK                       equ 0040h
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
STATUS_nPD_POSN                          equ 0005h
STATUS_nPD_POSITION                      equ 0005h
STATUS_nPD_SIZE                          equ 0001h
STATUS_nPD_LENGTH                        equ 0001h
STATUS_nPD_MASK                          equ 0020h
STATUS_nTO_POSN                          equ 0006h
STATUS_nTO_POSITION                      equ 0006h
STATUS_nTO_SIZE                          equ 0001h
STATUS_nTO_LENGTH                        equ 0001h
STATUS_nTO_MASK                          equ 0040h
STATUS_PD_POSN                           equ 0005h
STATUS_PD_POSITION                       equ 0005h
STATUS_PD_SIZE                           equ 0001h
STATUS_PD_LENGTH                         equ 0001h
STATUS_PD_MASK                           equ 0020h
STATUS_TO_POSN                           equ 0006h
STATUS_TO_POSITION                       equ 0006h
STATUS_TO_SIZE                           equ 0001h
STATUS_TO_LENGTH                         equ 0001h
STATUS_TO_MASK                           equ 0040h
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

// Register: INTCON
#define INTCON INTCON
INTCON                                   equ 0FF2h
// bitfield definitions
INTCON_INT0EDG_POSN                      equ 0000h
INTCON_INT0EDG_POSITION                  equ 0000h
INTCON_INT0EDG_SIZE                      equ 0001h
INTCON_INT0EDG_LENGTH                    equ 0001h
INTCON_INT0EDG_MASK                      equ 0001h
INTCON_INT1EDG_POSN                      equ 0001h
INTCON_INT1EDG_POSITION                  equ 0001h
INTCON_INT1EDG_SIZE                      equ 0001h
INTCON_INT1EDG_LENGTH                    equ 0001h
INTCON_INT1EDG_MASK                      equ 0002h
INTCON_INT2EDG_POSN                      equ 0002h
INTCON_INT2EDG_POSITION                  equ 0002h
INTCON_INT2EDG_SIZE                      equ 0001h
INTCON_INT2EDG_LENGTH                    equ 0001h
INTCON_INT2EDG_MASK                      equ 0004h
INTCON_IPEN_POSN                         equ 0005h
INTCON_IPEN_POSITION                     equ 0005h
INTCON_IPEN_SIZE                         equ 0001h
INTCON_IPEN_LENGTH                       equ 0001h
INTCON_IPEN_MASK                         equ 0020h
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
// bitfield definitions
TBLPTRU_TBLPTRU_POSN                     equ 0000h
TBLPTRU_TBLPTRU_POSITION                 equ 0000h
TBLPTRU_TBLPTRU_SIZE                     equ 0006h
TBLPTRU_TBLPTRU_LENGTH                   equ 0006h
TBLPTRU_TBLPTRU_MASK                     equ 003Fh
TBLPTRU_ACSS_POSN                        equ 0005h
TBLPTRU_ACSS_POSITION                    equ 0005h
TBLPTRU_ACSS_SIZE                        equ 0001h
TBLPTRU_ACSS_LENGTH                      equ 0001h
TBLPTRU_ACSS_MASK                        equ 0020h

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
// bitfield definitions
PCLATU_PCU_POSN                          equ 0000h
PCLATU_PCU_POSITION                      equ 0000h
PCLATU_PCU_SIZE                          equ 0005h
PCLATU_PCU_LENGTH                        equ 0005h
PCLATU_PCU_MASK                          equ 001Fh

// Register: STKPTR
#define STKPTR STKPTR
STKPTR                                   equ 0FFCh
// bitfield definitions
STKPTR_STKPTR_POSN                       equ 0000h
STKPTR_STKPTR_POSITION                   equ 0000h
STKPTR_STKPTR_SIZE                       equ 0006h
STKPTR_STKPTR_LENGTH                     equ 0006h
STKPTR_STKPTR_MASK                       equ 003Fh
STKPTR_STKPTR0_POSN                      equ 0000h
STKPTR_STKPTR0_POSITION                  equ 0000h
STKPTR_STKPTR0_SIZE                      equ 0001h
STKPTR_STKPTR0_LENGTH                    equ 0001h
STKPTR_STKPTR0_MASK                      equ 0001h
STKPTR_STKPTR1_POSN                      equ 0001h
STKPTR_STKPTR1_POSITION                  equ 0001h
STKPTR_STKPTR1_SIZE                      equ 0001h
STKPTR_STKPTR1_LENGTH                    equ 0001h
STKPTR_STKPTR1_MASK                      equ 0002h
STKPTR_STKPTR2_POSN                      equ 0002h
STKPTR_STKPTR2_POSITION                  equ 0002h
STKPTR_STKPTR2_SIZE                      equ 0001h
STKPTR_STKPTR2_LENGTH                    equ 0001h
STKPTR_STKPTR2_MASK                      equ 0004h
STKPTR_STKPTR3_POSN                      equ 0003h
STKPTR_STKPTR3_POSITION                  equ 0003h
STKPTR_STKPTR3_SIZE                      equ 0001h
STKPTR_STKPTR3_LENGTH                    equ 0001h
STKPTR_STKPTR3_MASK                      equ 0008h
STKPTR_STKPTR4_POSN                      equ 0004h
STKPTR_STKPTR4_POSITION                  equ 0004h
STKPTR_STKPTR4_SIZE                      equ 0001h
STKPTR_STKPTR4_LENGTH                    equ 0001h
STKPTR_STKPTR4_MASK                      equ 0010h
STKPTR_STKPTR5_POSN                      equ 0005h
STKPTR_STKPTR5_POSITION                  equ 0005h
STKPTR_STKPTR5_SIZE                      equ 0001h
STKPTR_STKPTR5_LENGTH                    equ 0001h
STKPTR_STKPTR5_MASK                      equ 0020h
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
STKPTR_SP5_POSN                          equ 0005h
STKPTR_SP5_POSITION                      equ 0005h
STKPTR_SP5_SIZE                          equ 0001h
STKPTR_SP5_LENGTH                        equ 0001h
STKPTR_SP5_MASK                          equ 0020h

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
#define ABDEN                            BANKMASK(BAUD1CON), 0, a
#define ABDEN1                           BANKMASK(BAUD1CON), 0, a
#define ABDOVF                           BANKMASK(BAUD1CON), 7, a
#define ABDOVF1                          BANKMASK(BAUD1CON), 7, a
#define ACC0                             BANKMASK(CRCACCL), 0, a
#define ACC1                             BANKMASK(CRCACCL), 1, a
#define ACC10                            BANKMASK(CRCACCH), 2, a
#define ACC11                            BANKMASK(CRCACCH), 3, a
#define ACC12                            BANKMASK(CRCACCH), 4, a
#define ACC13                            BANKMASK(CRCACCH), 5, a
#define ACC14                            BANKMASK(CRCACCH), 6, a
#define ACC15                            BANKMASK(CRCACCH), 7, a
#define ACC2                             BANKMASK(CRCACCL), 2, a
#define ACC3                             BANKMASK(CRCACCL), 3, a
#define ACC4                             BANKMASK(CRCACCL), 4, a
#define ACC5                             BANKMASK(CRCACCL), 5, a
#define ACC6                             BANKMASK(CRCACCL), 6, a
#define ACC7                             BANKMASK(CRCACCL), 7, a
#define ACC8                             BANKMASK(CRCACCH), 0, a
#define ACC9                             BANKMASK(CRCACCH), 1, a
#define ACCM                             BANKMASK(CRCCON0), 4, a
#define ACKDT                            BANKMASK(SSP1CON2), 5, a
#define ACKDT1                           BANKMASK(SSP1CON2), 5, a
#define ACKEN                            BANKMASK(SSP1CON2), 4, a
#define ACKEN1                           BANKMASK(SSP1CON2), 4, a
#define ACKSTAT                          BANKMASK(SSP1CON2), 6, a
#define ACKSTAT1                         BANKMASK(SSP1CON2), 6, a
#define ACKTIM                           BANKMASK(SSP1CON3), 7, a
#define ACSS                             BANKMASK(TBLPTRU), 5, a
#define ADACC0                           BANKMASK(ADACCL), 0, a
#define ADACC1                           BANKMASK(ADACCL), 1, a
#define ADACC10                          BANKMASK(ADACCH), 2, a
#define ADACC11                          BANKMASK(ADACCH), 3, a
#define ADACC12                          BANKMASK(ADACCH), 4, a
#define ADACC13                          BANKMASK(ADACCH), 5, a
#define ADACC14                          BANKMASK(ADACCH), 6, a
#define ADACC15                          BANKMASK(ADACCH), 7, a
#define ADACC2                           BANKMASK(ADACCL), 2, a
#define ADACC3                           BANKMASK(ADACCL), 3, a
#define ADACC4                           BANKMASK(ADACCL), 4, a
#define ADACC5                           BANKMASK(ADACCL), 5, a
#define ADACC6                           BANKMASK(ADACCL), 6, a
#define ADACC7                           BANKMASK(ADACCL), 7, a
#define ADACC8                           BANKMASK(ADACCH), 0, a
#define ADACC9                           BANKMASK(ADACCH), 1, a
#define ADACLR                           BANKMASK(ADCON2), 3, b
#define ADACQ0                           BANKMASK(ADACQ), 0, b
#define ADACQ1                           BANKMASK(ADACQ), 1, b
#define ADACQ2                           BANKMASK(ADACQ), 2, b
#define ADACQ3                           BANKMASK(ADACQ), 3, b
#define ADACQ4                           BANKMASK(ADACQ), 4, b
#define ADACQ5                           BANKMASK(ADACQ), 5, b
#define ADACQ6                           BANKMASK(ADACQ), 6, b
#define ADACQ7                           BANKMASK(ADACQ), 7, b
#define ADACT0                           BANKMASK(ADACT), 0, b
#define ADACT1                           BANKMASK(ADACT), 1, b
#define ADACT2                           BANKMASK(ADACT), 2, b
#define ADACT3                           BANKMASK(ADACT), 3, b
#define ADACT4                           BANKMASK(ADACT), 4, b
#define ADACTPPS0                        BANKMASK(ADACTPPS), 0, b
#define ADACTPPS1                        BANKMASK(ADACTPPS), 1, b
#define ADACTPPS2                        BANKMASK(ADACTPPS), 2, b
#define ADACTPPS3                        BANKMASK(ADACTPPS), 3, b
#define ADACTPPS4                        BANKMASK(ADACTPPS), 4, b
#define ADAOV                            BANKMASK(ADSTAT), 7, a
#define ADCAL                            BANKMASK(ADCON0), 7, a
#define ADCALC0                          BANKMASK(ADCON3), 4, b
#define ADCALC1                          BANKMASK(ADCON3), 5, b
#define ADCALC2                          BANKMASK(ADCON3), 6, b
#define ADCAP0                           BANKMASK(ADCAP), 0, b
#define ADCAP1                           BANKMASK(ADCAP), 1, b
#define ADCAP2                           BANKMASK(ADCAP), 2, b
#define ADCAP3                           BANKMASK(ADCAP), 3, b
#define ADCAP4                           BANKMASK(ADCAP), 4, b
#define ADCMD                            BANKMASK(PMD2), 5, b
#define ADCNT0                           BANKMASK(ADCNT), 0, a
#define ADCNT1                           BANKMASK(ADCNT), 1, a
#define ADCNT2                           BANKMASK(ADCNT), 2, a
#define ADCNT3                           BANKMASK(ADCNT), 3, a
#define ADCNT4                           BANKMASK(ADCNT), 4, a
#define ADCNT5                           BANKMASK(ADCNT), 5, a
#define ADCNT6                           BANKMASK(ADCNT), 6, a
#define ADCNT7                           BANKMASK(ADCNT), 7, a
#define ADCONT                           BANKMASK(ADCON0), 6, a
#define ADCRS0                           BANKMASK(ADCON2), 4, b
#define ADCRS1                           BANKMASK(ADCON2), 5, b
#define ADCRS2                           BANKMASK(ADCON2), 6, b
#define ADCS                             BANKMASK(ADCON0), 4, a
#define ADCS0                            BANKMASK(ADCLK), 0, b
#define ADCS1                            BANKMASK(ADCLK), 1, b
#define ADCS2                            BANKMASK(ADCLK), 2, b
#define ADCS3                            BANKMASK(ADCLK), 3, b
#define ADCS4                            BANKMASK(ADCLK), 4, b
#define ADCS5                            BANKMASK(ADCLK), 5, b
#define ADDEN                            BANKMASK(RC1STA), 3, a
#define ADDSEN                           BANKMASK(ADCON1), 0, b
#define ADERR0                           BANKMASK(ADERRL), 0, a
#define ADERR1                           BANKMASK(ADERRL), 1, a
#define ADERR10                          BANKMASK(ADERRH), 2, a
#define ADERR11                          BANKMASK(ADERRH), 3, a
#define ADERR12                          BANKMASK(ADERRH), 4, a
#define ADERR13                          BANKMASK(ADERRH), 5, a
#define ADERR14                          BANKMASK(ADERRH), 6, a
#define ADERR15                          BANKMASK(ADERRH), 7, a
#define ADERR2                           BANKMASK(ADERRL), 2, a
#define ADERR3                           BANKMASK(ADERRL), 3, a
#define ADERR4                           BANKMASK(ADERRL), 4, a
#define ADERR5                           BANKMASK(ADERRL), 5, a
#define ADERR6                           BANKMASK(ADERRL), 6, a
#define ADERR7                           BANKMASK(ADERRL), 7, a
#define ADERR8                           BANKMASK(ADERRH), 0, a
#define ADERR9                           BANKMASK(ADERRH), 1, a
#define ADFLTR0                          BANKMASK(ADFLTRL), 0, a
#define ADFLTR1                          BANKMASK(ADFLTRL), 1, a
#define ADFLTR10                         BANKMASK(ADFLTRH), 2, a
#define ADFLTR11                         BANKMASK(ADFLTRH), 3, a
#define ADFLTR12                         BANKMASK(ADFLTRH), 4, a
#define ADFLTR13                         BANKMASK(ADFLTRH), 5, a
#define ADFLTR14                         BANKMASK(ADFLTRH), 6, a
#define ADFLTR15                         BANKMASK(ADFLTRH), 7, a
#define ADFLTR2                          BANKMASK(ADFLTRL), 2, a
#define ADFLTR3                          BANKMASK(ADFLTRL), 3, a
#define ADFLTR4                          BANKMASK(ADFLTRL), 4, a
#define ADFLTR5                          BANKMASK(ADFLTRL), 5, a
#define ADFLTR6                          BANKMASK(ADFLTRL), 6, a
#define ADFLTR7                          BANKMASK(ADFLTRL), 7, a
#define ADFLTR8                          BANKMASK(ADFLTRH), 0, a
#define ADFLTR9                          BANKMASK(ADFLTRH), 1, a
#define ADFM                             BANKMASK(ADCON0), 2, a
#define ADFM0                            BANKMASK(ADCON0), 2, a
#define ADFVR0                           BANKMASK(FVRCON), 0, b
#define ADFVR1                           BANKMASK(FVRCON), 1, b
#define ADGO                             BANKMASK(ADCON0), 0, a
#define ADGPOL                           BANKMASK(ADCON1), 5, b
#define ADIE                             BANKMASK(PIE1), 0, b
#define ADIF                             BANKMASK(PIR1), 0, b
#define ADIP                             BANKMASK(IPR1), 0, b
#define ADIPEN                           BANKMASK(ADCON1), 6, b
#define ADLTH0                           BANKMASK(ADLTHL), 0, a
#define ADLTH1                           BANKMASK(ADLTHL), 1, a
#define ADLTH10                          BANKMASK(ADLTHH), 2, a
#define ADLTH11                          BANKMASK(ADLTHH), 3, a
#define ADLTH12                          BANKMASK(ADLTHH), 4, a
#define ADLTH13                          BANKMASK(ADLTHH), 5, a
#define ADLTH14                          BANKMASK(ADLTHH), 6, a
#define ADLTH15                          BANKMASK(ADLTHH), 7, a
#define ADLTH2                           BANKMASK(ADLTHL), 2, a
#define ADLTH3                           BANKMASK(ADLTHL), 3, a
#define ADLTH4                           BANKMASK(ADLTHL), 4, a
#define ADLTH5                           BANKMASK(ADLTHL), 5, a
#define ADLTH6                           BANKMASK(ADLTHL), 6, a
#define ADLTH7                           BANKMASK(ADLTHL), 7, a
#define ADLTH8                           BANKMASK(ADLTHH), 0, a
#define ADLTH9                           BANKMASK(ADLTHH), 1, a
#define ADLTHR                           BANKMASK(ADSTAT), 5, a
#define ADMATH                           BANKMASK(ADSTAT), 4, a
#define ADMD0                            BANKMASK(ADCON2), 0, b
#define ADMD1                            BANKMASK(ADCON2), 1, b
#define ADMD2                            BANKMASK(ADCON2), 2, b
#define ADMSK1                           BANKMASK(SSP1CON2), 1, a
#define ADMSK11                          BANKMASK(SSP1CON2), 1, a
#define ADMSK2                           BANKMASK(SSP1CON2), 2, a
#define ADMSK21                          BANKMASK(SSP1CON2), 2, a
#define ADMSK3                           BANKMASK(SSP1CON2), 3, a
#define ADMSK31                          BANKMASK(SSP1CON2), 3, a
#define ADMSK4                           BANKMASK(SSP1CON2), 4, a
#define ADMSK41                          BANKMASK(SSP1CON2), 4, a
#define ADMSK5                           BANKMASK(SSP1CON2), 5, a
#define ADMSK51                          BANKMASK(SSP1CON2), 5, a
#define ADNREF                           BANKMASK(ADREF), 4, b
#define ADOEN                            BANKMASK(OSCEN), 2, b
#define ADON                             BANKMASK(ADCON0), 7, a
#define ADOR                             BANKMASK(OSCSTAT), 2, b
#define ADPCH0                           BANKMASK(ADPCH), 0, b
#define ADPCH1                           BANKMASK(ADPCH), 1, b
#define ADPCH2                           BANKMASK(ADPCH), 2, b
#define ADPCH3                           BANKMASK(ADPCH), 3, b
#define ADPCH4                           BANKMASK(ADPCH), 4, b
#define ADPCH5                           BANKMASK(ADPCH), 5, b
#define ADPPOL                           BANKMASK(ADCON1), 7, b
#define ADPRE0                           BANKMASK(ADPRE), 0, b
#define ADPRE1                           BANKMASK(ADPRE), 1, b
#define ADPRE2                           BANKMASK(ADPRE), 2, b
#define ADPRE3                           BANKMASK(ADPRE), 3, b
#define ADPRE4                           BANKMASK(ADPRE), 4, b
#define ADPRE5                           BANKMASK(ADPRE), 5, b
#define ADPRE6                           BANKMASK(ADPRE), 6, b
#define ADPRE7                           BANKMASK(ADPRE), 7, b
#define ADPREF0                          BANKMASK(ADREF), 0, b
#define ADPREF1                          BANKMASK(ADREF), 1, b
#define ADPREV0                          BANKMASK(ADPREVL), 0, a
#define ADPREV1                          BANKMASK(ADPREVL), 1, a
#define ADPREV10                         BANKMASK(ADPREVH), 2, a
#define ADPREV11                         BANKMASK(ADPREVH), 3, a
#define ADPREV12                         BANKMASK(ADPREVH), 4, a
#define ADPREV13                         BANKMASK(ADPREVH), 5, a
#define ADPREV14                         BANKMASK(ADPREVH), 6, a
#define ADPREV15                         BANKMASK(ADPREVH), 7, a
#define ADPREV2                          BANKMASK(ADPREVL), 2, a
#define ADPREV3                          BANKMASK(ADPREVL), 3, a
#define ADPREV4                          BANKMASK(ADPREVL), 4, a
#define ADPREV5                          BANKMASK(ADPREVL), 5, a
#define ADPREV6                          BANKMASK(ADPREVL), 6, a
#define ADPREV7                          BANKMASK(ADPREVL), 7, a
#define ADPREV8                          BANKMASK(ADPREVH), 0, a
#define ADPREV9                          BANKMASK(ADPREVH), 1, a
#define ADPSIS                           BANKMASK(ADCON2), 7, b
#define ADR0                             BANKMASK(NVMADR), 0, a
#define ADR1                             BANKMASK(NVMADR), 1, a
#define ADR2                             BANKMASK(NVMADR), 2, a
#define ADR3                             BANKMASK(NVMADR), 3, a
#define ADR4                             BANKMASK(NVMADR), 4, a
#define ADR5                             BANKMASK(NVMADR), 5, a
#define ADR6                             BANKMASK(NVMADR), 6, a
#define ADR7                             BANKMASK(NVMADR), 7, a
#define ADRES0                           BANKMASK(ADRESL), 0, a
#define ADRES1                           BANKMASK(ADRESL), 1, a
#define ADRES10                          BANKMASK(ADRESH), 2, a
#define ADRES11                          BANKMASK(ADRESH), 3, a
#define ADRES12                          BANKMASK(ADRESH), 4, a
#define ADRES13                          BANKMASK(ADRESH), 5, a
#define ADRES14                          BANKMASK(ADRESH), 6, a
#define ADRES15                          BANKMASK(ADRESH), 7, a
#define ADRES2                           BANKMASK(ADRESL), 2, a
#define ADRES3                           BANKMASK(ADRESL), 3, a
#define ADRES4                           BANKMASK(ADRESL), 4, a
#define ADRES5                           BANKMASK(ADRESL), 5, a
#define ADRES6                           BANKMASK(ADRESL), 6, a
#define ADRES7                           BANKMASK(ADRESL), 7, a
#define ADRES8                           BANKMASK(ADRESH), 0, a
#define ADRES9                           BANKMASK(ADRESH), 1, a
#define ADRPT0                           BANKMASK(ADRPT), 0, a
#define ADRPT1                           BANKMASK(ADRPT), 1, a
#define ADRPT2                           BANKMASK(ADRPT), 2, a
#define ADRPT3                           BANKMASK(ADRPT), 3, a
#define ADRPT4                           BANKMASK(ADRPT), 4, a
#define ADRPT5                           BANKMASK(ADRPT), 5, a
#define ADRPT6                           BANKMASK(ADRPT), 6, a
#define ADRPT7                           BANKMASK(ADRPT), 7, a
#define ADSOI                            BANKMASK(ADCON3), 3, b
#define ADSTAT0                          BANKMASK(ADSTAT), 0, a
#define ADSTAT1                          BANKMASK(ADSTAT), 1, a
#define ADSTAT2                          BANKMASK(ADSTAT), 2, a
#define ADSTPT0                          BANKMASK(ADSTPTL), 0, a
#define ADSTPT1                          BANKMASK(ADSTPTL), 1, a
#define ADSTPT10                         BANKMASK(ADSTPTH), 2, a
#define ADSTPT11                         BANKMASK(ADSTPTH), 3, a
#define ADSTPT12                         BANKMASK(ADSTPTH), 4, a
#define ADSTPT13                         BANKMASK(ADSTPTH), 5, a
#define ADSTPT14                         BANKMASK(ADSTPTH), 6, a
#define ADSTPT15                         BANKMASK(ADSTPTH), 7, a
#define ADSTPT2                          BANKMASK(ADSTPTL), 2, a
#define ADSTPT3                          BANKMASK(ADSTPTL), 3, a
#define ADSTPT4                          BANKMASK(ADSTPTL), 4, a
#define ADSTPT5                          BANKMASK(ADSTPTL), 5, a
#define ADSTPT6                          BANKMASK(ADSTPTL), 6, a
#define ADSTPT7                          BANKMASK(ADSTPTL), 7, a
#define ADSTPT8                          BANKMASK(ADSTPTH), 0, a
#define ADSTPT9                          BANKMASK(ADSTPTH), 1, a
#define ADTIE                            BANKMASK(PIE1), 1, b
#define ADTIF                            BANKMASK(PIR1), 1, b
#define ADTIP                            BANKMASK(IPR1), 1, b
#define ADTMD0                           BANKMASK(ADCON3), 0, b
#define ADTMD1                           BANKMASK(ADCON3), 1, b
#define ADTMD2                           BANKMASK(ADCON3), 2, b
#define ADUTH0                           BANKMASK(ADUTHL), 0, a
#define ADUTH1                           BANKMASK(ADUTHL), 1, a
#define ADUTH10                          BANKMASK(ADUTHH), 2, a
#define ADUTH11                          BANKMASK(ADUTHH), 3, a
#define ADUTH12                          BANKMASK(ADUTHH), 4, a
#define ADUTH13                          BANKMASK(ADUTHH), 5, a
#define ADUTH14                          BANKMASK(ADUTHH), 6, a
#define ADUTH15                          BANKMASK(ADUTHH), 7, a
#define ADUTH2                           BANKMASK(ADUTHL), 2, a
#define ADUTH3                           BANKMASK(ADUTHL), 3, a
#define ADUTH4                           BANKMASK(ADUTHL), 4, a
#define ADUTH5                           BANKMASK(ADUTHL), 5, a
#define ADUTH6                           BANKMASK(ADUTHL), 6, a
#define ADUTH7                           BANKMASK(ADUTHL), 7, a
#define ADUTH8                           BANKMASK(ADUTHH), 0, a
#define ADUTH9                           BANKMASK(ADUTHH), 1, a
#define ADUTHR                           BANKMASK(ADSTAT), 6, a
#define AHEN                             BANKMASK(SSP1CON3), 1, a
#define ANSELA0                          BANKMASK(ANSELA), 0, b
#define ANSELA1                          BANKMASK(ANSELA), 1, b
#define ANSELA2                          BANKMASK(ANSELA), 2, b
#define ANSELA3                          BANKMASK(ANSELA), 3, b
#define ANSELA4                          BANKMASK(ANSELA), 4, b
#define ANSELA5                          BANKMASK(ANSELA), 5, b
#define ANSELA6                          BANKMASK(ANSELA), 6, b
#define ANSELA7                          BANKMASK(ANSELA), 7, b
#define ANSELB0                          BANKMASK(ANSELB), 0, b
#define ANSELB1                          BANKMASK(ANSELB), 1, b
#define ANSELB2                          BANKMASK(ANSELB), 2, b
#define ANSELB3                          BANKMASK(ANSELB), 3, b
#define ANSELB4                          BANKMASK(ANSELB), 4, b
#define ANSELB5                          BANKMASK(ANSELB), 5, b
#define ANSELB6                          BANKMASK(ANSELB), 6, b
#define ANSELB7                          BANKMASK(ANSELB), 7, b
#define ANSELC0                          BANKMASK(ANSELC), 0, b
#define ANSELC1                          BANKMASK(ANSELC), 1, b
#define ANSELC2                          BANKMASK(ANSELC), 2, b
#define ANSELC3                          BANKMASK(ANSELC), 3, b
#define ANSELC4                          BANKMASK(ANSELC), 4, b
#define ANSELC5                          BANKMASK(ANSELC), 5, b
#define ANSELC6                          BANKMASK(ANSELC), 6, b
#define ANSELC7                          BANKMASK(ANSELC), 7, b
#define AS0E                             BANKMASK(CWG1AS1), 0, b
#define AS1E                             BANKMASK(CWG1AS1), 1, b
#define AS2E                             BANKMASK(CWG1AS1), 2, b
#define AS3E                             BANKMASK(CWG1AS1), 3, b
#define AS4E                             BANKMASK(CWG1AS1), 4, b
#define AS5E                             BANKMASK(CWG1AS1), 5, b
#define BCL1IE                           BANKMASK(PIE3), 1, b
#define BCL1IF                           BANKMASK(PIR3), 1, b
#define BCL1IP                           BANKMASK(IPR3), 1, b
#define BCLIE                            BANKMASK(PIE3), 1, b
#define BCLIF                            BANKMASK(PIR3), 1, b
#define BCLIP                            BANKMASK(IPR3), 1, b
#define BF                               BANKMASK(SSP1STAT), 0, a
#define BF1                              BANKMASK(SSP1STAT), 0, a
#define BOEN                             BANKMASK(SSP1CON3), 4, a
#define BOR                              BANKMASK(PCON0), 0, a
#define BORRDY                           BANKMASK(BORCON), 0, b
#define BRG16                            BANKMASK(BAUD1CON), 3, a
#define BRG161                           BANKMASK(BAUD1CON), 3, a
#define BRGH                             BANKMASK(TX1STA), 2, a
#define BRGH1                            BANKMASK(TX1STA), 2, a
#define C1EN                             BANKMASK(CM1CON0), 7, b
#define C1HYS                            BANKMASK(CM1CON0), 1, b
#define C1IE                             BANKMASK(PIE2), 0, b
#define C1IF                             BANKMASK(PIR2), 0, b
#define C1INTN                           BANKMASK(CM1CON1), 0, b
#define C1INTP                           BANKMASK(CM1CON1), 1, b
#define C1IP                             BANKMASK(IPR2), 0, b
#define C1NCH0                           BANKMASK(CM1NCH), 0, b
#define C1NCH1                           BANKMASK(CM1NCH), 1, b
#define C1NCH2                           BANKMASK(CM1NCH), 2, b
#define C1OUT                            BANKMASK(CM1CON0), 6, b
#define C1PCH0                           BANKMASK(CM1PCH), 0, b
#define C1PCH1                           BANKMASK(CM1PCH), 1, b
#define C1PCH2                           BANKMASK(CM1PCH), 2, b
#define C1POL                            BANKMASK(CM1CON0), 4, b
#define C1SYNC                           BANKMASK(CM1CON0), 0, b
#define C1TSEL0                          BANKMASK(CCPTMRS), 0, a
#define C1TSEL1                          BANKMASK(CCPTMRS), 1, a
#define C2EN                             BANKMASK(CM2CON0), 7, b
#define C2HYS                            BANKMASK(CM2CON0), 1, b
#define C2IE                             BANKMASK(PIE2), 1, b
#define C2IF                             BANKMASK(PIR2), 1, b
#define C2INTN                           BANKMASK(CM2CON1), 0, b
#define C2INTP                           BANKMASK(CM2CON1), 1, b
#define C2IP                             BANKMASK(IPR2), 1, b
#define C2NCH0                           BANKMASK(CM2NCH), 0, b
#define C2NCH1                           BANKMASK(CM2NCH), 1, b
#define C2NCH2                           BANKMASK(CM2NCH), 2, b
#define C2OUT                            BANKMASK(CM2CON0), 6, b
#define C2PCH0                           BANKMASK(CM2PCH), 0, b
#define C2PCH1                           BANKMASK(CM2PCH), 1, b
#define C2PCH2                           BANKMASK(CM2PCH), 2, b
#define C2POL                            BANKMASK(CM2CON0), 4, b
#define C2SYNC                           BANKMASK(CM2CON0), 0, b
#define C2TSEL0                          BANKMASK(CCPTMRS), 2, a
#define C2TSEL1                          BANKMASK(CCPTMRS), 3, a
#define CAL01                            BANKMASK(TMR1L), 0, a
#define CAL03                            BANKMASK(TMR3L), 0, a
#define CAL05                            BANKMASK(TMR5L), 0, a
#define CAL11                            BANKMASK(TMR1L), 1, a
#define CAL13                            BANKMASK(TMR3L), 1, a
#define CAL15                            BANKMASK(TMR5L), 1, a
#define CAL21                            BANKMASK(TMR1L), 2, a
#define CAL23                            BANKMASK(TMR3L), 2, a
#define CAL25                            BANKMASK(TMR5L), 2, a
#define CAL31                            BANKMASK(TMR1L), 3, a
#define CAL33                            BANKMASK(TMR3L), 3, a
#define CAL35                            BANKMASK(TMR5L), 3, a
#define CAL41                            BANKMASK(TMR1L), 4, a
#define CAL43                            BANKMASK(TMR3L), 4, a
#define CAL45                            BANKMASK(TMR5L), 4, a
#define CAL51                            BANKMASK(TMR1L), 5, a
#define CAL53                            BANKMASK(TMR3L), 5, a
#define CAL55                            BANKMASK(TMR5L), 5, a
#define CAL61                            BANKMASK(TMR1L), 6, a
#define CAL63                            BANKMASK(TMR3L), 6, a
#define CAL65                            BANKMASK(TMR5L), 6, a
#define CAL71                            BANKMASK(TMR1L), 7, a
#define CAL73                            BANKMASK(TMR3L), 7, a
#define CAL75                            BANKMASK(TMR5L), 7, a
#define CARRY                            BANKMASK(STATUS), 0, a
#define CCH05                            BANKMASK(IPR5), 0, b
#define CCH15                            BANKMASK(IPR5), 1, b
#define CCIP3IP                          BANKMASK(IPR4), 0, b
#define CCP1CTS0                         BANKMASK(CCP1CAP), 0, a
#define CCP1CTS1                         BANKMASK(CCP1CAP), 1, a
#define CCP1EN                           BANKMASK(CCP1CON), 7, a
#define CCP1FMT                          BANKMASK(CCP1CON), 4, a
#define CCP1IE                           BANKMASK(PIE6), 0, b
#define CCP1IF                           BANKMASK(PIR6), 0, b
#define CCP1IP                           BANKMASK(IPR6), 0, b
#define CCP1MD                           BANKMASK(PMD3), 0, b
#define CCP1MODE0                        BANKMASK(CCP1CON), 0, a
#define CCP1MODE1                        BANKMASK(CCP1CON), 1, a
#define CCP1MODE2                        BANKMASK(CCP1CON), 2, a
#define CCP1MODE3                        BANKMASK(CCP1CON), 3, a
#define CCP1OUT                          BANKMASK(CCP1CON), 5, a
#define CCP1PPS0                         BANKMASK(CCP1PPS), 0, b
#define CCP1PPS1                         BANKMASK(CCP1PPS), 1, b
#define CCP1PPS2                         BANKMASK(CCP1PPS), 2, b
#define CCP1PPS3                         BANKMASK(CCP1PPS), 3, b
#define CCP1PPS4                         BANKMASK(CCP1PPS), 4, b
#define CCP2                             BANKMASK(PORTC), 1, a
#define CCP2CTS0                         BANKMASK(CCP2CAP), 0, a
#define CCP2CTS1                         BANKMASK(CCP2CAP), 1, a
#define CCP2EN                           BANKMASK(CCP2CON), 7, a
#define CCP2FMT                          BANKMASK(CCP2CON), 4, a
#define CCP2IE                           BANKMASK(PIE6), 1, b
#define CCP2IF                           BANKMASK(PIR6), 1, b
#define CCP2IP                           BANKMASK(IPR6), 1, b
#define CCP2MD                           BANKMASK(PMD3), 1, b
#define CCP2MODE0                        BANKMASK(CCP2CON), 0, a
#define CCP2MODE1                        BANKMASK(CCP2CON), 1, a
#define CCP2MODE2                        BANKMASK(CCP2CON), 2, a
#define CCP2MODE3                        BANKMASK(CCP2CON), 3, a
#define CCP2OUT                          BANKMASK(CCP2CON), 5, a
#define CCP2PPS0                         BANKMASK(CCP2PPS), 0, b
#define CCP2PPS1                         BANKMASK(CCP2PPS), 1, b
#define CCP2PPS2                         BANKMASK(CCP2PPS), 2, b
#define CCP2PPS3                         BANKMASK(CCP2PPS), 3, b
#define CCP2PPS4                         BANKMASK(CCP2PPS), 4, b
#define CCP2_PA2                         BANKMASK(PORTB), 3, a
#define CCP9E                            BANKMASK(PORTE), 3, a
#define CDAFVR0                          BANKMASK(FVRCON), 2, b
#define CDAFVR1                          BANKMASK(FVRCON), 3, b
#define CDIV0                            BANKMASK(OSCCON2), 0, b
#define CDIV1                            BANKMASK(OSCCON2), 1, b
#define CDIV2                            BANKMASK(OSCCON2), 2, b
#define CDIV3                            BANKMASK(OSCCON2), 3, b
#define CHPOL                            BANKMASK(MDCON1), 5, b
#define CHS0                             BANKMASK(MDCARH), 0, b
#define CHS1                             BANKMASK(MDCARH), 1, b
#define CHS2                             BANKMASK(MDCARH), 2, b
#define CHSYNC                           BANKMASK(MDCON1), 4, b
#define CKE                              BANKMASK(SSP1STAT), 6, a
#define CKE1                             BANKMASK(SSP1STAT), 6, a
#define CKP                              BANKMASK(SSP1CON1), 4, a
#define CKP1                             BANKMASK(SSP1CON1), 4, a
#define CKTXP                            BANKMASK(BAUD1CON), 4, a
#define CLK0                             BANKMASK(CLKRCLK), 0, b
#define CLK1                             BANKMASK(CLKRCLK), 1, b
#define CLK2                             BANKMASK(CLKRCLK), 2, b
#define CLKRCLK0                         BANKMASK(CLKRCLK), 0, b
#define CLKRCLK1                         BANKMASK(CLKRCLK), 1, b
#define CLKRCLK2                         BANKMASK(CLKRCLK), 2, b
#define CLKRDC0                          BANKMASK(CLKRCON), 3, b
#define CLKRDC1                          BANKMASK(CLKRCON), 4, b
#define CLKRDIV0                         BANKMASK(CLKRCON), 0, b
#define CLKRDIV1                         BANKMASK(CLKRCON), 1, b
#define CLKRDIV2                         BANKMASK(CLKRCON), 2, b
#define CLKREN                           BANKMASK(CLKRCON), 7, b
#define CLKRMD                           BANKMASK(PMD0), 1, b
#define CLPOL                            BANKMASK(MDCON1), 1, b
#define CLS0                             BANKMASK(MDCARL), 0, b
#define CLS1                             BANKMASK(MDCARL), 1, b
#define CLS2                             BANKMASK(MDCARL), 2, b
#define CLSYNC                           BANKMASK(MDCON1), 0, b
#define CMIE                             BANKMASK(PIE2), 6, b
#define CMIF                             BANKMASK(PIR2), 6, b
#define CMIP                             BANKMASK(IPR2), 6, b
#define CMP1MD                           BANKMASK(PMD2), 1, b
#define CMP2MD                           BANKMASK(PMD2), 2, b
#define COSC0                            BANKMASK(OSCCON2), 4, b
#define COSC1                            BANKMASK(OSCCON2), 5, b
#define COSC2                            BANKMASK(OSCCON2), 6, b
#define CRCEN                            BANKMASK(CRCCON0), 7, a
#define CRCGO                            BANKMASK(CRCCON0), 6, a
#define CRCIE                            BANKMASK(PIE7), 6, b
#define CRCIF                            BANKMASK(PIR7), 6, b
#define CRCIP                            BANKMASK(IPR7), 6, b
#define CRCMD                            BANKMASK(PMD0), 4, b
#define CREN                             BANKMASK(RC1STA), 4, a
#define CS                               BANKMASK(CWG1CLK), 0, b
#define CSRC                             BANKMASK(TX1STA), 7, a
#define CSRC1                            BANKMASK(TX1STA), 7, a
#define CSWHOLD                          BANKMASK(OSCCON3), 7, b
#define CSWIE                            BANKMASK(PIE1), 6, b
#define CSWIF                            BANKMASK(PIR1), 6, b
#define CSWIP                            BANKMASK(IPR1), 6, b
#define CWG1CS                           BANKMASK(CWG1CLK), 0, b
#define CWG1DBF0                         BANKMASK(CWG1DBF), 0, b
#define CWG1DBF1                         BANKMASK(CWG1DBF), 1, b
#define CWG1DBF2                         BANKMASK(CWG1DBF), 2, b
#define CWG1DBF3                         BANKMASK(CWG1DBF), 3, b
#define CWG1DBF4                         BANKMASK(CWG1DBF), 4, b
#define CWG1DBF5                         BANKMASK(CWG1DBF), 5, b
#define CWG1DBR0                         BANKMASK(CWG1DBR), 0, b
#define CWG1DBR1                         BANKMASK(CWG1DBR), 1, b
#define CWG1DBR2                         BANKMASK(CWG1DBR), 2, b
#define CWG1DBR3                         BANKMASK(CWG1DBR), 3, b
#define CWG1DBR4                         BANKMASK(CWG1DBR), 4, b
#define CWG1DBR5                         BANKMASK(CWG1DBR), 5, b
#define CWG1EN                           BANKMASK(CWG1CON0), 7, b
#define CWG1IE                           BANKMASK(PIE7), 0, b
#define CWG1IF                           BANKMASK(PIR7), 0, b
#define CWG1IN                           BANKMASK(CWG1CON1), 5, b
#define CWG1INPPS0                       BANKMASK(CWG1PPS), 0, b
#define CWG1INPPS1                       BANKMASK(CWG1PPS), 1, b
#define CWG1INPPS2                       BANKMASK(CWG1PPS), 2, b
#define CWG1INPPS3                       BANKMASK(CWG1PPS), 3, b
#define CWG1INPPS4                       BANKMASK(CWG1PPS), 4, b
#define CWG1IP                           BANKMASK(IPR7), 0, b
#define CWG1ISM0                         BANKMASK(CWG1ISM), 0, b
#define CWG1ISM1                         BANKMASK(CWG1ISM), 1, b
#define CWG1ISM2                         BANKMASK(CWG1ISM), 2, b
#define CWG1LD                           BANKMASK(CWG1CON0), 6, b
#define CWG1LSAC0                        BANKMASK(CWG1AS0), 2, b
#define CWG1LSAC1                        BANKMASK(CWG1AS0), 3, b
#define CWG1LSBD0                        BANKMASK(CWG1AS0), 4, b
#define CWG1LSBD1                        BANKMASK(CWG1AS0), 5, b
#define CWG1MD                           BANKMASK(PMD4), 0, b
#define CWG1MODE0                        BANKMASK(CWG1CON0), 0, b
#define CWG1MODE1                        BANKMASK(CWG1CON0), 1, b
#define CWG1MODE2                        BANKMASK(CWG1CON0), 2, b
#define CWG1OVRA                         BANKMASK(CWG1STR), 4, b
#define CWG1OVRB                         BANKMASK(CWG1STR), 5, b
#define CWG1OVRC                         BANKMASK(CWG1STR), 6, b
#define CWG1OVRD                         BANKMASK(CWG1STR), 7, b
#define CWG1POLA                         BANKMASK(CWG1CON1), 0, b
#define CWG1POLB                         BANKMASK(CWG1CON1), 1, b
#define CWG1POLC                         BANKMASK(CWG1CON1), 2, b
#define CWG1POLD                         BANKMASK(CWG1CON1), 3, b
#define CWG1REN                          BANKMASK(CWG1AS0), 6, b
#define CWG1SHUTDOWN                     BANKMASK(CWG1AS0), 7, b
#define CWG1STRA                         BANKMASK(CWG1STR), 0, b
#define CWG1STRB                         BANKMASK(CWG1STR), 1, b
#define CWG1STRC                         BANKMASK(CWG1STR), 2, b
#define CWG1STRD                         BANKMASK(CWG1STR), 3, b
#define CWGIE                            BANKMASK(PIE7), 0, b
#define CWGIF                            BANKMASK(PIR7), 0, b
#define CWGINPPS0                        BANKMASK(CWG1PPS), 0, b
#define CWGINPPS1                        BANKMASK(CWG1PPS), 1, b
#define CWGINPPS2                        BANKMASK(CWG1PPS), 2, b
#define CWGINPPS3                        BANKMASK(CWG1PPS), 3, b
#define CWGINPPS4                        BANKMASK(CWG1PPS), 4, b
#define CWGIP                            BANKMASK(IPR7), 0, b
#define CWGMD                            BANKMASK(PMD4), 0, b
#define DA                               BANKMASK(SSP1STAT), 5, a
#define DA1                              BANKMASK(SSP1STAT), 5, a
#define DABORT                           BANKMASK(SCANCON0), 4, b
#define DAC1EN                           BANKMASK(DAC1CON0), 7, b
#define DAC1NSS                          BANKMASK(DAC1CON0), 0, b
#define DAC1OE1                          BANKMASK(DAC1CON0), 5, b
#define DAC1OE2                          BANKMASK(DAC1CON0), 4, b
#define DAC1PSS0                         BANKMASK(DAC1CON0), 2, b
#define DAC1PSS1                         BANKMASK(DAC1CON0), 3, b
#define DAC1R0                           BANKMASK(DAC1CON1), 0, b
#define DAC1R1                           BANKMASK(DAC1CON1), 1, b
#define DAC1R2                           BANKMASK(DAC1CON1), 2, b
#define DAC1R3                           BANKMASK(DAC1CON1), 3, b
#define DAC1R4                           BANKMASK(DAC1CON1), 4, b
#define DACMD                            BANKMASK(PMD2), 6, b
#define DATA0                            BANKMASK(CRCDATL), 0, a
#define DATA1                            BANKMASK(CRCDATL), 1, a
#define DATA10                           BANKMASK(CRCDATH), 2, a
#define DATA11                           BANKMASK(CRCDATH), 3, a
#define DATA12                           BANKMASK(CRCDATH), 4, a
#define DATA13                           BANKMASK(CRCDATH), 5, a
#define DATA14                           BANKMASK(CRCDATH), 6, a
#define DATA15                           BANKMASK(CRCDATH), 7, a
#define DATA2                            BANKMASK(CRCDATL), 2, a
#define DATA3                            BANKMASK(CRCDATL), 3, a
#define DATA4                            BANKMASK(CRCDATL), 4, a
#define DATA5                            BANKMASK(CRCDATL), 5, a
#define DATA6                            BANKMASK(CRCDATL), 6, a
#define DATA7                            BANKMASK(CRCDATL), 7, a
#define DATA8                            BANKMASK(CRCDATH), 0, a
#define DATA9                            BANKMASK(CRCDATH), 1, a
#define DATA_ADDRESS                     BANKMASK(SSP1STAT), 5, a
#define DATA_ADDRESS1                    BANKMASK(SSP1STAT), 5, a
#define DBF0                             BANKMASK(CWG1DBF), 0, b
#define DBF1                             BANKMASK(CWG1DBF), 1, b
#define DBF2                             BANKMASK(CWG1DBF), 2, b
#define DBF3                             BANKMASK(CWG1DBF), 3, b
#define DBF4                             BANKMASK(CWG1DBF), 4, b
#define DBF5                             BANKMASK(CWG1DBF), 5, b
#define DBR0                             BANKMASK(CWG1DBR), 0, b
#define DBR1                             BANKMASK(CWG1DBR), 1, b
#define DBR2                             BANKMASK(CWG1DBR), 2, b
#define DBR3                             BANKMASK(CWG1DBR), 3, b
#define DBR4                             BANKMASK(CWG1DBR), 4, b
#define DBR5                             BANKMASK(CWG1DBR), 5, b
#define DC                               BANKMASK(STATUS), 1, a
#define DHEN                             BANKMASK(SSP1CON3), 0, a
#define DIV0                             BANKMASK(CLKRCON), 0, b
#define DIV1                             BANKMASK(CLKRCON), 1, b
#define DIV2                             BANKMASK(CLKRCON), 2, b
#define DLEN0                            BANKMASK(CRCCON1), 4, a
#define DLEN1                            BANKMASK(CRCCON1), 5, a
#define DLEN2                            BANKMASK(CRCCON1), 6, a
#define DLEN3                            BANKMASK(CRCCON1), 7, a
#define DOE                              BANKMASK(CPUDOZE), 4, b
#define DONE                             BANKMASK(ADCON0), 0, a
#define DOZE0                            BANKMASK(CPUDOZE), 0, b
#define DOZE1                            BANKMASK(CPUDOZE), 1, b
#define DOZE2                            BANKMASK(CPUDOZE), 2, b
#define DOZEN                            BANKMASK(CPUDOZE), 6, b
#define DSMMD                            BANKMASK(PMD5), 0, b
#define D_A                              BANKMASK(SSP1STAT), 5, a
#define D_A1                             BANKMASK(SSP1STAT), 5, a
#define D_NOT_A                          BANKMASK(SSP1STAT), 5, a
#define D_NOT_A1                         BANKMASK(SSP1STAT), 5, a
#define D_nA                             BANKMASK(SSP1STAT), 5, a
#define D_nA1                            BANKMASK(SSP1STAT), 5, a
#define EMBMD                            BANKMASK(PMD1), 0, b
#define EXTOEN                           BANKMASK(OSCEN), 7, b
#define EXTOR                            BANKMASK(OSCSTAT), 7, b
#define FERR                             BANKMASK(RC1STA), 2, a
#define FREE                             BANKMASK(NVMCON1), 4, a
#define FRQ0                             BANKMASK(OSCFRQ), 0, b
#define FRQ1                             BANKMASK(OSCFRQ), 1, b
#define FRQ2                             BANKMASK(OSCFRQ), 2, b
#define FRQ3                             BANKMASK(OSCFRQ), 3, b
#define FULL                             BANKMASK(CRCCON0), 0, a
#define FVREN                            BANKMASK(FVRCON), 7, b
#define FVRMD                            BANKMASK(PMD0), 6, b
#define FVRRDY                           BANKMASK(FVRCON), 6, b
#define G1EN                             BANKMASK(CWG1CON0), 7, b
#define GCEN                             BANKMASK(SSP1CON2), 7, a
#define GCEN1                            BANKMASK(SSP1CON2), 7, a
#define GIE                              BANKMASK(INTCON), 7, a
#define GIEH                             BANKMASK(INTCON), 7, a
#define GIEL                             BANKMASK(INTCON), 6, a
#define GIE_GIEH                         BANKMASK(INTCON), 7, a
#define GO_NOT_DONE                      BANKMASK(ADCON0), 0, a
#define GO_nDONE                         BANKMASK(ADCON0), 0, a
#define HADR0                            BANKMASK(SCANHADRL), 0, b
#define HADR1                            BANKMASK(SCANHADRL), 1, b
#define HADR10                           BANKMASK(SCANHADRH), 2, b
#define HADR11                           BANKMASK(SCANHADRH), 3, b
#define HADR12                           BANKMASK(SCANHADRH), 4, b
#define HADR13                           BANKMASK(SCANHADRH), 5, b
#define HADR14                           BANKMASK(SCANHADRH), 6, b
#define HADR15                           BANKMASK(SCANHADRH), 7, b
#define HADR16                           BANKMASK(SCANHADRU), 0, b
#define HADR17                           BANKMASK(SCANHADRU), 1, b
#define HADR18                           BANKMASK(SCANHADRU), 2, b
#define HADR19                           BANKMASK(SCANHADRU), 3, b
#define HADR2                            BANKMASK(SCANHADRL), 2, b
#define HADR20                           BANKMASK(SCANHADRU), 4, b
#define HADR21                           BANKMASK(SCANHADRU), 5, b
#define HADR3                            BANKMASK(SCANHADRL), 3, b
#define HADR4                            BANKMASK(SCANHADRL), 4, b
#define HADR5                            BANKMASK(SCANHADRL), 5, b
#define HADR6                            BANKMASK(SCANHADRL), 6, b
#define HADR7                            BANKMASK(SCANHADRL), 7, b
#define HADR8                            BANKMASK(SCANHADRH), 0, b
#define HADR9                            BANKMASK(SCANHADRH), 1, b
#define HFOEN                            BANKMASK(OSCEN), 6, b
#define HFOR                             BANKMASK(OSCSTAT), 6, b
#define HLVDEN                           BANKMASK(HLVDCON0), 7, b
#define HLVDIE                           BANKMASK(PIE2), 7, b
#define HLVDIF                           BANKMASK(PIR2), 7, b
#define HLVDINTH                         BANKMASK(HLVDCON0), 1, b
#define HLVDINTL                         BANKMASK(HLVDCON0), 0, b
#define HLVDIP                           BANKMASK(IPR2), 7, b
#define HLVDMD                           BANKMASK(PMD0), 5, b
#define HLVDOUT                          BANKMASK(HLVDCON0), 5, b
#define HLVDRDY                          BANKMASK(HLVDCON0), 4, b
#define HLVDSEL0                         BANKMASK(HLVDCON1), 0, b
#define HLVDSEL1                         BANKMASK(HLVDCON1), 1, b
#define HLVDSEL2                         BANKMASK(HLVDCON1), 2, b
#define HLVDSEL3                         BANKMASK(HLVDCON1), 3, b
#define I2C_DAT                          BANKMASK(SSP1STAT), 5, a
#define I2C_DAT1                         BANKMASK(SSP1STAT), 5, a
#define I2C_READ                         BANKMASK(SSP1STAT), 2, a
#define I2C_READ1                        BANKMASK(SSP1STAT), 2, a
#define I2C_START                        BANKMASK(SSP1STAT), 3, a
#define I2C_START1                       BANKMASK(SSP1STAT), 3, a
#define I2C_STOP                         BANKMASK(SSP1STAT), 4, a
#define I2C_STOP2                        BANKMASK(SSP1STAT), 4, a
#define IDLEN                            BANKMASK(CPUDOZE), 7, b
#define IN                               BANKMASK(CWG1CON1), 5, b
#define INLVLA0                          BANKMASK(INLVLA), 0, b
#define INLVLA1                          BANKMASK(INLVLA), 1, b
#define INLVLA2                          BANKMASK(INLVLA), 2, b
#define INLVLA3                          BANKMASK(INLVLA), 3, b
#define INLVLA4                          BANKMASK(INLVLA), 4, b
#define INLVLA5                          BANKMASK(INLVLA), 5, b
#define INLVLA6                          BANKMASK(INLVLA), 6, b
#define INLVLA7                          BANKMASK(INLVLA), 7, b
#define INLVLB0                          BANKMASK(INLVLB), 0, b
#define INLVLB1                          BANKMASK(INLVLB), 1, b
#define INLVLB2                          BANKMASK(INLVLB), 2, b
#define INLVLB3                          BANKMASK(INLVLB), 3, b
#define INLVLB4                          BANKMASK(INLVLB), 4, b
#define INLVLB5                          BANKMASK(INLVLB), 5, b
#define INLVLB6                          BANKMASK(INLVLB), 6, b
#define INLVLB7                          BANKMASK(INLVLB), 7, b
#define INLVLC0                          BANKMASK(INLVLC), 0, b
#define INLVLC1                          BANKMASK(INLVLC), 1, b
#define INLVLC2                          BANKMASK(INLVLC), 2, b
#define INLVLC3                          BANKMASK(INLVLC), 3, b
#define INLVLC4                          BANKMASK(INLVLC), 4, b
#define INLVLC5                          BANKMASK(INLVLC), 5, b
#define INLVLC6                          BANKMASK(INLVLC), 6, b
#define INLVLC7                          BANKMASK(INLVLC), 7, b
#define INLVLE3                          BANKMASK(INLVLE), 3, b
#define INT0EDG                          BANKMASK(INTCON), 0, a
#define INT0IE                           BANKMASK(PIE0), 0, b
#define INT0IF                           BANKMASK(PIR0), 0, b
#define INT0IP                           BANKMASK(IPR0), 0, b
#define INT0PPS0                         BANKMASK(INT0PPS), 0, b
#define INT0PPS1                         BANKMASK(INT0PPS), 1, b
#define INT0PPS2                         BANKMASK(INT0PPS), 2, b
#define INT0PPS3                         BANKMASK(INT0PPS), 3, b
#define INT1EDG                          BANKMASK(INTCON), 1, a
#define INT1IE                           BANKMASK(PIE0), 1, b
#define INT1IF                           BANKMASK(PIR0), 1, b
#define INT1IP                           BANKMASK(IPR0), 1, b
#define INT1PPS0                         BANKMASK(INT1PPS), 0, b
#define INT1PPS1                         BANKMASK(INT1PPS), 1, b
#define INT1PPS2                         BANKMASK(INT1PPS), 2, b
#define INT1PPS3                         BANKMASK(INT1PPS), 3, b
#define INT2EDG                          BANKMASK(INTCON), 2, a
#define INT2IE                           BANKMASK(PIE0), 2, b
#define INT2IF                           BANKMASK(PIR0), 2, b
#define INT2IP                           BANKMASK(IPR0), 2, b
#define INT2PPS0                         BANKMASK(INT2PPS), 0, b
#define INT2PPS1                         BANKMASK(INT2PPS), 1, b
#define INT2PPS2                         BANKMASK(INT2PPS), 2, b
#define INT2PPS3                         BANKMASK(INT2PPS), 3, b
#define INTH                             BANKMASK(HLVDCON0), 1, b
#define INTL                             BANKMASK(HLVDCON0), 0, b
#define INTM                             BANKMASK(SCANCON0), 3, b
#define INVALID                          BANKMASK(SCANCON0), 4, b
#define IOCAF0                           BANKMASK(IOCAF), 0, b
#define IOCAF1                           BANKMASK(IOCAF), 1, b
#define IOCAF2                           BANKMASK(IOCAF), 2, b
#define IOCAF3                           BANKMASK(IOCAF), 3, b
#define IOCAF4                           BANKMASK(IOCAF), 4, b
#define IOCAF5                           BANKMASK(IOCAF), 5, b
#define IOCAF6                           BANKMASK(IOCAF), 6, b
#define IOCAF7                           BANKMASK(IOCAF), 7, b
#define IOCAN0                           BANKMASK(IOCAN), 0, b
#define IOCAN1                           BANKMASK(IOCAN), 1, b
#define IOCAN2                           BANKMASK(IOCAN), 2, b
#define IOCAN3                           BANKMASK(IOCAN), 3, b
#define IOCAN4                           BANKMASK(IOCAN), 4, b
#define IOCAN5                           BANKMASK(IOCAN), 5, b
#define IOCAN6                           BANKMASK(IOCAN), 6, b
#define IOCAN7                           BANKMASK(IOCAN), 7, b
#define IOCAP0                           BANKMASK(IOCAP), 0, b
#define IOCAP1                           BANKMASK(IOCAP), 1, b
#define IOCAP2                           BANKMASK(IOCAP), 2, b
#define IOCAP3                           BANKMASK(IOCAP), 3, b
#define IOCAP4                           BANKMASK(IOCAP), 4, b
#define IOCAP5                           BANKMASK(IOCAP), 5, b
#define IOCAP6                           BANKMASK(IOCAP), 6, b
#define IOCAP7                           BANKMASK(IOCAP), 7, b
#define IOCBF0                           BANKMASK(IOCBF), 0, b
#define IOCBF1                           BANKMASK(IOCBF), 1, b
#define IOCBF2                           BANKMASK(IOCBF), 2, b
#define IOCBF3                           BANKMASK(IOCBF), 3, b
#define IOCBF4                           BANKMASK(IOCBF), 4, b
#define IOCBF5                           BANKMASK(IOCBF), 5, b
#define IOCBF6                           BANKMASK(IOCBF), 6, b
#define IOCBF7                           BANKMASK(IOCBF), 7, b
#define IOCBN0                           BANKMASK(IOCBN), 0, b
#define IOCBN1                           BANKMASK(IOCBN), 1, b
#define IOCBN2                           BANKMASK(IOCBN), 2, b
#define IOCBN3                           BANKMASK(IOCBN), 3, b
#define IOCBN4                           BANKMASK(IOCBN), 4, b
#define IOCBN5                           BANKMASK(IOCBN), 5, b
#define IOCBN6                           BANKMASK(IOCBN), 6, b
#define IOCBN7                           BANKMASK(IOCBN), 7, b
#define IOCBP0                           BANKMASK(IOCBP), 0, b
#define IOCBP1                           BANKMASK(IOCBP), 1, b
#define IOCBP2                           BANKMASK(IOCBP), 2, b
#define IOCBP3                           BANKMASK(IOCBP), 3, b
#define IOCBP4                           BANKMASK(IOCBP), 4, b
#define IOCBP5                           BANKMASK(IOCBP), 5, b
#define IOCBP6                           BANKMASK(IOCBP), 6, b
#define IOCBP7                           BANKMASK(IOCBP), 7, b
#define IOCCF0                           BANKMASK(IOCCF), 0, b
#define IOCCF1                           BANKMASK(IOCCF), 1, b
#define IOCCF2                           BANKMASK(IOCCF), 2, b
#define IOCCF3                           BANKMASK(IOCCF), 3, b
#define IOCCF4                           BANKMASK(IOCCF), 4, b
#define IOCCF5                           BANKMASK(IOCCF), 5, b
#define IOCCF6                           BANKMASK(IOCCF), 6, b
#define IOCCF7                           BANKMASK(IOCCF), 7, b
#define IOCCN0                           BANKMASK(IOCCN), 0, b
#define IOCCN1                           BANKMASK(IOCCN), 1, b
#define IOCCN2                           BANKMASK(IOCCN), 2, b
#define IOCCN3                           BANKMASK(IOCCN), 3, b
#define IOCCN4                           BANKMASK(IOCCN), 4, b
#define IOCCN5                           BANKMASK(IOCCN), 5, b
#define IOCCN6                           BANKMASK(IOCCN), 6, b
#define IOCCN7                           BANKMASK(IOCCN), 7, b
#define IOCCP0                           BANKMASK(IOCCP), 0, b
#define IOCCP1                           BANKMASK(IOCCP), 1, b
#define IOCCP2                           BANKMASK(IOCCP), 2, b
#define IOCCP3                           BANKMASK(IOCCP), 3, b
#define IOCCP4                           BANKMASK(IOCCP), 4, b
#define IOCCP5                           BANKMASK(IOCCP), 5, b
#define IOCCP6                           BANKMASK(IOCCP), 6, b
#define IOCCP7                           BANKMASK(IOCCP), 7, b
#define IOCEF3                           BANKMASK(IOCEF), 3, b
#define IOCEN3                           BANKMASK(IOCEN), 3, b
#define IOCEP3                           BANKMASK(IOCEP), 3, b
#define IOCIE                            BANKMASK(PIE0), 4, b
#define IOCIF                            BANKMASK(PIR0), 4, b
#define IOCIP                            BANKMASK(IPR0), 4, b
#define IOCMD                            BANKMASK(PMD0), 0, b
#define IPEN                             BANKMASK(INTCON), 5, a
#define LA0                              BANKMASK(LATA), 0, a
#define LA1                              BANKMASK(LATA), 1, a
#define LA2                              BANKMASK(LATA), 2, a
#define LA3                              BANKMASK(LATA), 3, a
#define LA4                              BANKMASK(LATA), 4, a
#define LA5                              BANKMASK(LATA), 5, a
#define LA6                              BANKMASK(LATA), 6, a
#define LA7                              BANKMASK(LATA), 7, a
#define LADR0                            BANKMASK(SCANLADRL), 0, b
#define LADR1                            BANKMASK(SCANLADRL), 1, b
#define LADR10                           BANKMASK(SCANLADRH), 2, b
#define LADR11                           BANKMASK(SCANLADRH), 3, b
#define LADR12                           BANKMASK(SCANLADRH), 4, b
#define LADR13                           BANKMASK(SCANLADRH), 5, b
#define LADR14                           BANKMASK(SCANLADRH), 6, b
#define LADR15                           BANKMASK(SCANLADRH), 7, b
#define LADR16                           BANKMASK(SCANLADRU), 0, b
#define LADR17                           BANKMASK(SCANLADRU), 1, b
#define LADR18                           BANKMASK(SCANLADRU), 2, b
#define LADR19                           BANKMASK(SCANLADRU), 3, b
#define LADR2                            BANKMASK(SCANLADRL), 2, b
#define LADR20                           BANKMASK(SCANLADRU), 4, b
#define LADR21                           BANKMASK(SCANLADRU), 5, b
#define LADR3                            BANKMASK(SCANLADRL), 3, b
#define LADR4                            BANKMASK(SCANLADRL), 4, b
#define LADR5                            BANKMASK(SCANLADRL), 5, b
#define LADR6                            BANKMASK(SCANLADRL), 6, b
#define LADR7                            BANKMASK(SCANLADRL), 7, b
#define LADR8                            BANKMASK(SCANLADRH), 0, b
#define LADR9                            BANKMASK(SCANLADRH), 1, b
#define LATA0                            BANKMASK(LATA), 0, a
#define LATA1                            BANKMASK(LATA), 1, a
#define LATA2                            BANKMASK(LATA), 2, a
#define LATA3                            BANKMASK(LATA), 3, a
#define LATA4                            BANKMASK(LATA), 4, a
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
#define LATC3                            BANKMASK(LATC), 3, a
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
#define LC3                              BANKMASK(LATC), 3, a
#define LC4                              BANKMASK(LATC), 4, a
#define LC5                              BANKMASK(LATC), 5, a
#define LC6                              BANKMASK(LATC), 6, a
#define LC7                              BANKMASK(LATC), 7, a
#define LD                               BANKMASK(CWG1CON0), 6, b
#define LFOEN                            BANKMASK(OSCEN), 4, b
#define LFOR                             BANKMASK(OSCSTAT), 4, b
#define LSAC0                            BANKMASK(CWG1AS0), 2, b
#define LSAC1                            BANKMASK(CWG1AS0), 3, b
#define LSBD0                            BANKMASK(CWG1AS0), 4, b
#define LSBD1                            BANKMASK(CWG1AS0), 5, b
#define LVDIN                            BANKMASK(PORTA), 5, a
#define MC1OUT                           BANKMASK(CMOUT), 0, b
#define MC2OUT                           BANKMASK(CMOUT), 1, b
#define MDBIT                            BANKMASK(MDCON0), 0, b
#define MDCARHPPS0                       BANKMASK(MDCARHPPS), 0, b
#define MDCARHPPS1                       BANKMASK(MDCARHPPS), 1, b
#define MDCARHPPS2                       BANKMASK(MDCARHPPS), 2, b
#define MDCARHPPS3                       BANKMASK(MDCARHPPS), 3, b
#define MDCARHPPS4                       BANKMASK(MDCARHPPS), 4, b
#define MDCARLPPS0                       BANKMASK(MDCARLPPS), 0, b
#define MDCARLPPS1                       BANKMASK(MDCARLPPS), 1, b
#define MDCARLPPS2                       BANKMASK(MDCARLPPS), 2, b
#define MDCARLPPS3                       BANKMASK(MDCARLPPS), 3, b
#define MDCARLPPS4                       BANKMASK(MDCARLPPS), 4, b
#define MDCHPOL                          BANKMASK(MDCON1), 5, b
#define MDCHS0                           BANKMASK(MDCARH), 0, b
#define MDCHS1                           BANKMASK(MDCARH), 1, b
#define MDCHS2                           BANKMASK(MDCARH), 2, b
#define MDCHSYNC                         BANKMASK(MDCON1), 4, b
#define MDCLPOL                          BANKMASK(MDCON1), 1, b
#define MDCLS0                           BANKMASK(MDCARL), 0, b
#define MDCLS1                           BANKMASK(MDCARL), 1, b
#define MDCLS2                           BANKMASK(MDCARL), 2, b
#define MDCLSYNC                         BANKMASK(MDCON1), 0, b
#define MDEN                             BANKMASK(MDCON0), 7, b
#define MDOPOL                           BANKMASK(MDCON0), 4, b
#define MDOUT                            BANKMASK(MDCON0), 5, b
#define MDSRCPPS0                        BANKMASK(MDSRCPPS), 0, b
#define MDSRCPPS1                        BANKMASK(MDSRCPPS), 1, b
#define MDSRCPPS2                        BANKMASK(MDSRCPPS), 2, b
#define MDSRCPPS3                        BANKMASK(MDSRCPPS), 3, b
#define MDSRCPPS4                        BANKMASK(MDSRCPPS), 4, b
#define MDSRCS0                          BANKMASK(MDSRC), 0, b
#define MDSRCS1                          BANKMASK(MDSRC), 1, b
#define MDSRCS2                          BANKMASK(MDSRC), 2, b
#define MDSRCS3                          BANKMASK(MDSRC), 3, b
#define MFOEN                            BANKMASK(OSCEN), 5, b
#define MFOR                             BANKMASK(OSCSTAT), 5, b
#define MSK01                            BANKMASK(SSP1ADD), 0, a
#define MSK11                            BANKMASK(SSP1ADD), 1, a
#define MSK21                            BANKMASK(SSP1ADD), 2, a
#define MSK31                            BANKMASK(SSP1ADD), 3, a
#define MSK41                            BANKMASK(SSP1ADD), 4, a
#define MSK51                            BANKMASK(SSP1ADD), 5, a
#define MSK61                            BANKMASK(SSP1ADD), 6, a
#define MSK71                            BANKMASK(SSP1ADD), 7, a
#define MSSP1MD                          BANKMASK(PMD4), 4, b
#define NDIV0                            BANKMASK(OSCCON1), 0, b
#define NDIV1                            BANKMASK(OSCCON1), 1, b
#define NDIV2                            BANKMASK(OSCCON1), 2, b
#define NDIV3                            BANKMASK(OSCCON1), 3, b
#define NEGATIVE                         BANKMASK(STATUS), 4, a
#define NOSC0                            BANKMASK(OSCCON1), 4, b
#define NOSC1                            BANKMASK(OSCCON1), 5, b
#define NOSC2                            BANKMASK(OSCCON1), 6, b
#define NOSCR                            BANKMASK(OSCCON3), 3, b
#define NOT_A2                           BANKMASK(SSP1STAT), 5, a
#define NOT_ADDRESS                      BANKMASK(SSP1STAT), 5, a
#define NOT_ADDRESS1                     BANKMASK(SSP1STAT), 5, a
#define NOT_BOR                          BANKMASK(PCON0), 0, a
#define NOT_PD                           BANKMASK(STATUS), 5, a
#define NOT_POR                          BANKMASK(PCON0), 1, a
#define NOT_RI                           BANKMASK(PCON0), 2, a
#define NOT_RMCLR                        BANKMASK(PCON0), 3, a
#define NOT_RWDT                         BANKMASK(PCON0), 4, a
#define NOT_T1SYNC                       BANKMASK(T1CON), 2, a
#define NOT_T3SYNC                       BANKMASK(T3CON), 2, a
#define NOT_T5SYNC                       BANKMASK(T5CON), 2, a
#define NOT_TO                           BANKMASK(STATUS), 6, a
#define NOT_W2                           BANKMASK(SSP1STAT), 2, a
#define NOT_WDTWV                        BANKMASK(PCON0), 5, a
#define NOT_WRITE                        BANKMASK(SSP1STAT), 2, a
#define NOT_WRITE1                       BANKMASK(SSP1STAT), 2, a
#define NSS                              BANKMASK(DAC1CON0), 0, b
#define NVMADR0                          BANKMASK(NVMADR), 0, a
#define NVMADR1                          BANKMASK(NVMADR), 1, a
#define NVMADR2                          BANKMASK(NVMADR), 2, a
#define NVMADR3                          BANKMASK(NVMADR), 3, a
#define NVMADR4                          BANKMASK(NVMADR), 4, a
#define NVMADR5                          BANKMASK(NVMADR), 5, a
#define NVMADR6                          BANKMASK(NVMADR), 6, a
#define NVMADR7                          BANKMASK(NVMADR), 7, a
#define NVMDAT0                          BANKMASK(NVMDAT), 0, a
#define NVMDAT1                          BANKMASK(NVMDAT), 1, a
#define NVMDAT2                          BANKMASK(NVMDAT), 2, a
#define NVMDAT3                          BANKMASK(NVMDAT), 3, a
#define NVMDAT4                          BANKMASK(NVMDAT), 4, a
#define NVMDAT5                          BANKMASK(NVMDAT), 5, a
#define NVMDAT6                          BANKMASK(NVMDAT), 6, a
#define NVMDAT7                          BANKMASK(NVMDAT), 7, a
#define NVMIE                            BANKMASK(PIE7), 5, b
#define NVMIF                            BANKMASK(PIR7), 5, b
#define NVMIP                            BANKMASK(IPR7), 5, b
#define NVMMD                            BANKMASK(PMD0), 2, b
#define NVMREG0                          BANKMASK(NVMCON1), 6, a
#define NVMREG1                          BANKMASK(NVMCON1), 7, a
#define ODCA0                            BANKMASK(ODCONA), 0, b
#define ODCA1                            BANKMASK(ODCONA), 1, b
#define ODCA2                            BANKMASK(ODCONA), 2, b
#define ODCA3                            BANKMASK(ODCONA), 3, b
#define ODCA4                            BANKMASK(ODCONA), 4, b
#define ODCA5                            BANKMASK(ODCONA), 5, b
#define ODCA6                            BANKMASK(ODCONA), 6, b
#define ODCA7                            BANKMASK(ODCONA), 7, b
#define ODCB0                            BANKMASK(ODCONB), 0, b
#define ODCB1                            BANKMASK(ODCONB), 1, b
#define ODCB2                            BANKMASK(ODCONB), 2, b
#define ODCB3                            BANKMASK(ODCONB), 3, b
#define ODCB4                            BANKMASK(ODCONB), 4, b
#define ODCB5                            BANKMASK(ODCONB), 5, b
#define ODCB6                            BANKMASK(ODCONB), 6, b
#define ODCB7                            BANKMASK(ODCONB), 7, b
#define ODCC0                            BANKMASK(ODCONC), 0, b
#define ODCC1                            BANKMASK(ODCONC), 1, b
#define ODCC2                            BANKMASK(ODCONC), 2, b
#define ODCC3                            BANKMASK(ODCONC), 3, b
#define ODCC4                            BANKMASK(ODCONC), 4, b
#define ODCC5                            BANKMASK(ODCONC), 5, b
#define ODCC6                            BANKMASK(ODCONC), 6, b
#define ODCC7                            BANKMASK(ODCONC), 7, b
#define OE1                              BANKMASK(DAC1CON0), 5, b
#define OE2                              BANKMASK(DAC1CON0), 4, b
#define OERR                             BANKMASK(RC1STA), 1, a
#define OPOL                             BANKMASK(MDCON0), 4, b
#define ORDY                             BANKMASK(OSCCON3), 4, b
#define OSCFIE                           BANKMASK(PIE1), 7, b
#define OSCFIF                           BANKMASK(PIR1), 7, b
#define OSCFIP                           BANKMASK(IPR1), 7, b
#define OV                               BANKMASK(STATUS), 3, a
#define OVERFLOW                         BANKMASK(STATUS), 3, a
#define OVRA                             BANKMASK(CWG1STR), 4, b
#define OVRB                             BANKMASK(CWG1STR), 5, b
#define OVRC                             BANKMASK(CWG1STR), 6, b
#define OVRD                             BANKMASK(CWG1STR), 7, b
#define P1M1                             BANKMASK(CCP1CON), 7, a
#define P2                               BANKMASK(SSP1STAT), 4, a
#define P3TSEL0                          BANKMASK(CCPTMRS), 4, a
#define P3TSEL1                          BANKMASK(CCPTMRS), 5, a
#define P4TSEL0                          BANKMASK(CCPTMRS), 6, a
#define P4TSEL1                          BANKMASK(CCPTMRS), 7, a
#define PA1                              BANKMASK(PORTC), 2, a
#define PA2                              BANKMASK(PORTC), 1, a
#define PC3E                             BANKMASK(PORTE), 3, a
#define PCIE                             BANKMASK(SSP1CON3), 6, a
#define PD                               BANKMASK(STATUS), 5, a
#define PEIE                             BANKMASK(INTCON), 6, a
#define PEIE_GIEL                        BANKMASK(INTCON), 6, a
#define PEN                              BANKMASK(SSP1CON2), 2, a
#define PEN1                             BANKMASK(SSP1CON2), 2, a
#define PLEN0                            BANKMASK(CRCCON1), 0, a
#define PLEN1                            BANKMASK(CRCCON1), 1, a
#define PLEN2                            BANKMASK(CRCCON1), 2, a
#define PLEN3                            BANKMASK(CRCCON1), 3, a
#define PLLR                             BANKMASK(OSCSTAT), 0, b
#define POLA                             BANKMASK(CWG1CON1), 0, b
#define POLB                             BANKMASK(CWG1CON1), 1, b
#define POLC                             BANKMASK(CWG1CON1), 2, b
#define POLD                             BANKMASK(CWG1CON1), 3, b
#define POR                              BANKMASK(PCON0), 1, a
#define PPSLOCKED                        BANKMASK(PPSLOCK), 0, b
#define PSCNT0                           BANKMASK(WDTPSL), 0, b
#define PSCNT1                           BANKMASK(WDTPSL), 1, b
#define PSCNT10                          BANKMASK(WDTPSH), 2, b
#define PSCNT11                          BANKMASK(WDTPSH), 3, b
#define PSCNT12                          BANKMASK(WDTPSH), 4, b
#define PSCNT13                          BANKMASK(WDTPSH), 5, b
#define PSCNT14                          BANKMASK(WDTPSH), 6, b
#define PSCNT15                          BANKMASK(WDTPSH), 7, b
#define PSCNT16                          BANKMASK(WDTTMR), 0, b
#define PSCNT17                          BANKMASK(WDTTMR), 1, b
#define PSCNT2                           BANKMASK(WDTPSL), 2, b
#define PSCNT3                           BANKMASK(WDTPSL), 3, b
#define PSCNT4                           BANKMASK(WDTPSL), 4, b
#define PSCNT5                           BANKMASK(WDTPSL), 5, b
#define PSCNT6                           BANKMASK(WDTPSL), 6, b
#define PSCNT7                           BANKMASK(WDTPSL), 7, b
#define PSCNT8                           BANKMASK(WDTPSH), 0, b
#define PSCNT9                           BANKMASK(WDTPSH), 1, b
#define PSPIE                            BANKMASK(PIE1), 7, b
#define PSPIF                            BANKMASK(PIR1), 7, b
#define PSPIP                            BANKMASK(IPR1), 7, b
#define PSS0                             BANKMASK(DAC1CON0), 2, b
#define PSS1                             BANKMASK(DAC1CON0), 3, b
#define PWM3DC0                          BANKMASK(PWM3DCL), 6, a
#define PWM3DC1                          BANKMASK(PWM3DCL), 7, a
#define PWM3DC2                          BANKMASK(PWM3DCH), 0, a
#define PWM3DC3                          BANKMASK(PWM3DCH), 1, a
#define PWM3DC4                          BANKMASK(PWM3DCH), 2, a
#define PWM3DC5                          BANKMASK(PWM3DCH), 3, a
#define PWM3DC6                          BANKMASK(PWM3DCH), 4, a
#define PWM3DC7                          BANKMASK(PWM3DCH), 5, a
#define PWM3DC8                          BANKMASK(PWM3DCH), 6, a
#define PWM3DC9                          BANKMASK(PWM3DCH), 7, a
#define PWM3EN                           BANKMASK(PWM3CON), 7, a
#define PWM3MD                           BANKMASK(PMD3), 2, b
#define PWM3OUT                          BANKMASK(PWM3CON), 5, a
#define PWM3POL                          BANKMASK(PWM3CON), 4, a
#define PWM4DC0                          BANKMASK(PWM4DCL), 6, a
#define PWM4DC1                          BANKMASK(PWM4DCL), 7, a
#define PWM4DC2                          BANKMASK(PWM4DCH), 0, a
#define PWM4DC3                          BANKMASK(PWM4DCH), 1, a
#define PWM4DC4                          BANKMASK(PWM4DCH), 2, a
#define PWM4DC5                          BANKMASK(PWM4DCH), 3, a
#define PWM4DC6                          BANKMASK(PWM4DCH), 4, a
#define PWM4DC7                          BANKMASK(PWM4DCH), 5, a
#define PWM4DC8                          BANKMASK(PWM4DCH), 6, a
#define PWM4DC9                          BANKMASK(PWM4DCH), 7, a
#define PWM4EN                           BANKMASK(PWM4CON), 7, a
#define PWM4MD                           BANKMASK(PMD3), 3, b
#define PWM4OUT                          BANKMASK(PWM4CON), 5, a
#define PWM4POL                          BANKMASK(PWM4CON), 4, a
#define RA0                              BANKMASK(PORTA), 0, a
#define RA0PPS0                          BANKMASK(RA0PPS), 0, b
#define RA0PPS1                          BANKMASK(RA0PPS), 1, b
#define RA0PPS2                          BANKMASK(RA0PPS), 2, b
#define RA0PPS3                          BANKMASK(RA0PPS), 3, b
#define RA0PPS4                          BANKMASK(RA0PPS), 4, b
#define RA1                              BANKMASK(PORTA), 1, a
#define RA1PPS0                          BANKMASK(RA1PPS), 0, b
#define RA1PPS1                          BANKMASK(RA1PPS), 1, b
#define RA1PPS2                          BANKMASK(RA1PPS), 2, b
#define RA1PPS3                          BANKMASK(RA1PPS), 3, b
#define RA1PPS4                          BANKMASK(RA1PPS), 4, b
#define RA2                              BANKMASK(PORTA), 2, a
#define RA2PPS0                          BANKMASK(RA2PPS), 0, b
#define RA2PPS1                          BANKMASK(RA2PPS), 1, b
#define RA2PPS2                          BANKMASK(RA2PPS), 2, b
#define RA2PPS3                          BANKMASK(RA2PPS), 3, b
#define RA2PPS4                          BANKMASK(RA2PPS), 4, b
#define RA3                              BANKMASK(PORTA), 3, a
#define RA3PPS0                          BANKMASK(RA3PPS), 0, b
#define RA3PPS1                          BANKMASK(RA3PPS), 1, b
#define RA3PPS2                          BANKMASK(RA3PPS), 2, b
#define RA3PPS3                          BANKMASK(RA3PPS), 3, b
#define RA3PPS4                          BANKMASK(RA3PPS), 4, b
#define RA4                              BANKMASK(PORTA), 4, a
#define RA4PPS0                          BANKMASK(RA4PPS), 0, b
#define RA4PPS1                          BANKMASK(RA4PPS), 1, b
#define RA4PPS2                          BANKMASK(RA4PPS), 2, b
#define RA4PPS3                          BANKMASK(RA4PPS), 3, b
#define RA4PPS4                          BANKMASK(RA4PPS), 4, b
#define RA5                              BANKMASK(PORTA), 5, a
#define RA5PPS0                          BANKMASK(RA5PPS), 0, b
#define RA5PPS1                          BANKMASK(RA5PPS), 1, b
#define RA5PPS2                          BANKMASK(RA5PPS), 2, b
#define RA5PPS3                          BANKMASK(RA5PPS), 3, b
#define RA5PPS4                          BANKMASK(RA5PPS), 4, b
#define RA6                              BANKMASK(PORTA), 6, a
#define RA6PPS0                          BANKMASK(RA6PPS), 0, b
#define RA6PPS1                          BANKMASK(RA6PPS), 1, b
#define RA6PPS2                          BANKMASK(RA6PPS), 2, b
#define RA6PPS3                          BANKMASK(RA6PPS), 3, b
#define RA6PPS4                          BANKMASK(RA6PPS), 4, b
#define RA7                              BANKMASK(PORTA), 7, a
#define RA7PPS0                          BANKMASK(RA7PPS), 0, b
#define RA7PPS1                          BANKMASK(RA7PPS), 1, b
#define RA7PPS2                          BANKMASK(RA7PPS), 2, b
#define RA7PPS3                          BANKMASK(RA7PPS), 3, b
#define RA7PPS4                          BANKMASK(RA7PPS), 4, b
#define RB0                              BANKMASK(PORTB), 0, a
#define RB0PPS0                          BANKMASK(RB0PPS), 0, b
#define RB0PPS1                          BANKMASK(RB0PPS), 1, b
#define RB0PPS2                          BANKMASK(RB0PPS), 2, b
#define RB0PPS3                          BANKMASK(RB0PPS), 3, b
#define RB0PPS4                          BANKMASK(RB0PPS), 4, b
#define RB1                              BANKMASK(PORTB), 1, a
#define RB1PPS0                          BANKMASK(RB1PPS), 0, b
#define RB1PPS1                          BANKMASK(RB1PPS), 1, b
#define RB1PPS2                          BANKMASK(RB1PPS), 2, b
#define RB1PPS3                          BANKMASK(RB1PPS), 3, b
#define RB1PPS4                          BANKMASK(RB1PPS), 4, b
#define RB2                              BANKMASK(PORTB), 2, a
#define RB2PPS0                          BANKMASK(RB2PPS), 0, b
#define RB2PPS1                          BANKMASK(RB2PPS), 1, b
#define RB2PPS2                          BANKMASK(RB2PPS), 2, b
#define RB2PPS3                          BANKMASK(RB2PPS), 3, b
#define RB2PPS4                          BANKMASK(RB2PPS), 4, b
#define RB3                              BANKMASK(PORTB), 3, a
#define RB3PPS0                          BANKMASK(RB3PPS), 0, b
#define RB3PPS1                          BANKMASK(RB3PPS), 1, b
#define RB3PPS2                          BANKMASK(RB3PPS), 2, b
#define RB3PPS3                          BANKMASK(RB3PPS), 3, b
#define RB3PPS4                          BANKMASK(RB3PPS), 4, b
#define RB4                              BANKMASK(PORTB), 4, a
#define RB4PPS0                          BANKMASK(RB4PPS), 0, b
#define RB4PPS1                          BANKMASK(RB4PPS), 1, b
#define RB4PPS2                          BANKMASK(RB4PPS), 2, b
#define RB4PPS3                          BANKMASK(RB4PPS), 3, b
#define RB4PPS4                          BANKMASK(RB4PPS), 4, b
#define RB5                              BANKMASK(PORTB), 5, a
#define RB5PPS0                          BANKMASK(RB5PPS), 0, b
#define RB5PPS1                          BANKMASK(RB5PPS), 1, b
#define RB5PPS2                          BANKMASK(RB5PPS), 2, b
#define RB5PPS3                          BANKMASK(RB5PPS), 3, b
#define RB5PPS4                          BANKMASK(RB5PPS), 4, b
#define RB6                              BANKMASK(PORTB), 6, a
#define RB6PPS0                          BANKMASK(RB6PPS), 0, b
#define RB6PPS1                          BANKMASK(RB6PPS), 1, b
#define RB6PPS2                          BANKMASK(RB6PPS), 2, b
#define RB6PPS3                          BANKMASK(RB6PPS), 3, b
#define RB6PPS4                          BANKMASK(RB6PPS), 4, b
#define RB7                              BANKMASK(PORTB), 7, a
#define RB7PPS0                          BANKMASK(RB7PPS), 0, b
#define RB7PPS1                          BANKMASK(RB7PPS), 1, b
#define RB7PPS2                          BANKMASK(RB7PPS), 2, b
#define RB7PPS3                          BANKMASK(RB7PPS), 3, b
#define RB7PPS4                          BANKMASK(RB7PPS), 4, b
#define RC0                              BANKMASK(PORTC), 0, a
#define RC0PPS0                          BANKMASK(RC0PPS), 0, b
#define RC0PPS1                          BANKMASK(RC0PPS), 1, b
#define RC0PPS2                          BANKMASK(RC0PPS), 2, b
#define RC0PPS3                          BANKMASK(RC0PPS), 3, b
#define RC0PPS4                          BANKMASK(RC0PPS), 4, b
#define RC1                              BANKMASK(PORTC), 1, a
#define RC1IE                            BANKMASK(PIE3), 5, b
#define RC1IF                            BANKMASK(PIR3), 5, b
#define RC1PPS0                          BANKMASK(RC1PPS), 0, b
#define RC1PPS1                          BANKMASK(RC1PPS), 1, b
#define RC1PPS2                          BANKMASK(RC1PPS), 2, b
#define RC1PPS3                          BANKMASK(RC1PPS), 3, b
#define RC1PPS4                          BANKMASK(RC1PPS), 4, b
#define RC2                              BANKMASK(PORTC), 2, a
#define RC2PPS0                          BANKMASK(RC2PPS), 0, b
#define RC2PPS1                          BANKMASK(RC2PPS), 1, b
#define RC2PPS2                          BANKMASK(RC2PPS), 2, b
#define RC2PPS3                          BANKMASK(RC2PPS), 3, b
#define RC2PPS4                          BANKMASK(RC2PPS), 4, b
#define RC3                              BANKMASK(PORTC), 3, a
#define RC3PPS0                          BANKMASK(RC3PPS), 0, b
#define RC3PPS1                          BANKMASK(RC3PPS), 1, b
#define RC3PPS2                          BANKMASK(RC3PPS), 2, b
#define RC3PPS3                          BANKMASK(RC3PPS), 3, b
#define RC3PPS4                          BANKMASK(RC3PPS), 4, b
#define RC4                              BANKMASK(PORTC), 4, a
#define RC4PPS0                          BANKMASK(RC4PPS), 0, b
#define RC4PPS1                          BANKMASK(RC4PPS), 1, b
#define RC4PPS2                          BANKMASK(RC4PPS), 2, b
#define RC4PPS3                          BANKMASK(RC4PPS), 3, b
#define RC4PPS4                          BANKMASK(RC4PPS), 4, b
#define RC5                              BANKMASK(PORTC), 5, a
#define RC5PPS0                          BANKMASK(RC5PPS), 0, b
#define RC5PPS1                          BANKMASK(RC5PPS), 1, b
#define RC5PPS2                          BANKMASK(RC5PPS), 2, b
#define RC5PPS3                          BANKMASK(RC5PPS), 3, b
#define RC5PPS4                          BANKMASK(RC5PPS), 4, b
#define RC6                              BANKMASK(PORTC), 6, a
#define RC6PPS0                          BANKMASK(RC6PPS), 0, b
#define RC6PPS1                          BANKMASK(RC6PPS), 1, b
#define RC6PPS2                          BANKMASK(RC6PPS), 2, b
#define RC6PPS3                          BANKMASK(RC6PPS), 3, b
#define RC6PPS4                          BANKMASK(RC6PPS), 4, b
#define RC7                              BANKMASK(PORTC), 7, a
#define RC7PPS0                          BANKMASK(RC7PPS), 0, b
#define RC7PPS1                          BANKMASK(RC7PPS), 1, b
#define RC7PPS2                          BANKMASK(RC7PPS), 2, b
#define RC7PPS3                          BANKMASK(RC7PPS), 3, b
#define RC7PPS4                          BANKMASK(RC7PPS), 4, b
#define RC8_9                            BANKMASK(RC1STA), 6, a
#define RC9                              BANKMASK(RC1STA), 6, a
#define RCD8                             BANKMASK(RC1STA), 0, a
#define RCEN                             BANKMASK(SSP1CON2), 3, a
#define RCEN1                            BANKMASK(SSP1CON2), 3, a
#define RCIDL                            BANKMASK(BAUD1CON), 6, a
#define RCIDL1                           BANKMASK(BAUD1CON), 6, a
#define RCIE                             BANKMASK(PIE3), 5, b
#define RCIF                             BANKMASK(PIR3), 5, b
#define RCIP                             BANKMASK(IPR3), 5, b
#define RCMT                             BANKMASK(BAUD1CON), 6, a
#define RCMT1                            BANKMASK(BAUD1CON), 6, a
#define RD                               BANKMASK(NVMCON1), 0, a
#define RD161                            BANKMASK(T1CON), 1, a
#define RD163                            BANKMASK(T3CON), 1, a
#define RD165                            BANKMASK(T5CON), 1, a
#define RE3                              BANKMASK(PORTE), 3, a
#define READ_WRITE                       BANKMASK(SSP1STAT), 2, a
#define READ_WRITE1                      BANKMASK(SSP1STAT), 2, a
#define REN                              BANKMASK(CWG1AS0), 6, b
#define RI                               BANKMASK(PCON0), 2, a
#define RJPU                             BANKMASK(PORTA), 7, a
#define RMCLR                            BANKMASK(PCON0), 3, a
#define ROI                              BANKMASK(CPUDOZE), 5, b
#define RSEN                             BANKMASK(SSP1CON2), 1, a
#define RSEN1                            BANKMASK(SSP1CON2), 1, a
#define RW                               BANKMASK(SSP1STAT), 2, a
#define RW1                              BANKMASK(SSP1STAT), 2, a
#define RWDT                             BANKMASK(PCON0), 4, a
#define RX1PPS0                          BANKMASK(RX1PPS), 0, b
#define RX1PPS1                          BANKMASK(RX1PPS), 1, b
#define RX1PPS2                          BANKMASK(RX1PPS), 2, b
#define RX1PPS3                          BANKMASK(RX1PPS), 3, b
#define RX1PPS4                          BANKMASK(RX1PPS), 4, b
#define RX9                              BANKMASK(RC1STA), 6, a
#define RX9D                             BANKMASK(RC1STA), 0, a
#define RXB0IE                           BANKMASK(PIE3), 0, b
#define RXB1IE                           BANKMASK(PIE3), 1, b
#define RXBNIE                           BANKMASK(PIE3), 1, b
#define RXBNIF                           BANKMASK(PIR3), 1, b
#define RXBNIP                           BANKMASK(IPR3), 1, b
#define RXPPS0                           BANKMASK(RX1PPS), 0, b
#define RXPPS1                           BANKMASK(RX1PPS), 1, b
#define RXPPS2                           BANKMASK(RX1PPS), 2, b
#define RXPPS3                           BANKMASK(RX1PPS), 3, b
#define RXPPS4                           BANKMASK(RX1PPS), 4, b
#define R_NOT_W                          BANKMASK(SSP1STAT), 2, a
#define R_NOT_W1                         BANKMASK(SSP1STAT), 2, a
#define R_W                              BANKMASK(SSP1STAT), 2, a
#define R_W1                             BANKMASK(SSP1STAT), 2, a
#define R_nW                             BANKMASK(SSP1STAT), 2, a
#define R_nW1                            BANKMASK(SSP1STAT), 2, a
#define S2                               BANKMASK(SSP1STAT), 3, a
#define SBCDE                            BANKMASK(SSP1CON3), 2, a
#define SBOREN                           BANKMASK(BORCON), 7, b
#define SCANBUSY                         BANKMASK(SCANCON0), 5, b
#define SCANEN                           BANKMASK(SCANCON0), 7, b
#define SCANGO                           BANKMASK(SCANCON0), 6, b
#define SCANHADR0                        BANKMASK(SCANHADRL), 0, b
#define SCANHADR1                        BANKMASK(SCANHADRL), 1, b
#define SCANHADR10                       BANKMASK(SCANHADRH), 2, b
#define SCANHADR11                       BANKMASK(SCANHADRH), 3, b
#define SCANHADR12                       BANKMASK(SCANHADRH), 4, b
#define SCANHADR13                       BANKMASK(SCANHADRH), 5, b
#define SCANHADR14                       BANKMASK(SCANHADRH), 6, b
#define SCANHADR15                       BANKMASK(SCANHADRH), 7, b
#define SCANHADR16                       BANKMASK(SCANHADRU), 0, b
#define SCANHADR17                       BANKMASK(SCANHADRU), 1, b
#define SCANHADR18                       BANKMASK(SCANHADRU), 2, b
#define SCANHADR19                       BANKMASK(SCANHADRU), 3, b
#define SCANHADR2                        BANKMASK(SCANHADRL), 2, b
#define SCANHADR20                       BANKMASK(SCANHADRU), 4, b
#define SCANHADR21                       BANKMASK(SCANHADRU), 5, b
#define SCANHADR3                        BANKMASK(SCANHADRL), 3, b
#define SCANHADR4                        BANKMASK(SCANHADRL), 4, b
#define SCANHADR5                        BANKMASK(SCANHADRL), 5, b
#define SCANHADR6                        BANKMASK(SCANHADRL), 6, b
#define SCANHADR7                        BANKMASK(SCANHADRL), 7, b
#define SCANHADR8                        BANKMASK(SCANHADRH), 0, b
#define SCANHADR9                        BANKMASK(SCANHADRH), 1, b
#define SCANIE                           BANKMASK(PIE7), 7, b
#define SCANIF                           BANKMASK(PIR7), 7, b
#define SCANINTM                         BANKMASK(SCANCON0), 3, b
#define SCANINVALID                      BANKMASK(SCANCON0), 4, b
#define SCANIP                           BANKMASK(IPR7), 7, b
#define SCANLADR0                        BANKMASK(SCANLADRL), 0, b
#define SCANLADR1                        BANKMASK(SCANLADRL), 1, b
#define SCANLADR10                       BANKMASK(SCANLADRH), 2, b
#define SCANLADR11                       BANKMASK(SCANLADRH), 3, b
#define SCANLADR12                       BANKMASK(SCANLADRH), 4, b
#define SCANLADR13                       BANKMASK(SCANLADRH), 5, b
#define SCANLADR14                       BANKMASK(SCANLADRH), 6, b
#define SCANLADR15                       BANKMASK(SCANLADRH), 7, b
#define SCANLADR16                       BANKMASK(SCANLADRU), 0, b
#define SCANLADR17                       BANKMASK(SCANLADRU), 1, b
#define SCANLADR18                       BANKMASK(SCANLADRU), 2, b
#define SCANLADR19                       BANKMASK(SCANLADRU), 3, b
#define SCANLADR2                        BANKMASK(SCANLADRL), 2, b
#define SCANLADR20                       BANKMASK(SCANLADRU), 4, b
#define SCANLADR21                       BANKMASK(SCANLADRU), 5, b
#define SCANLADR3                        BANKMASK(SCANLADRL), 3, b
#define SCANLADR4                        BANKMASK(SCANLADRL), 4, b
#define SCANLADR5                        BANKMASK(SCANLADRL), 5, b
#define SCANLADR6                        BANKMASK(SCANLADRL), 6, b
#define SCANLADR7                        BANKMASK(SCANLADRL), 7, b
#define SCANLADR8                        BANKMASK(SCANLADRH), 0, b
#define SCANLADR9                        BANKMASK(SCANLADRH), 1, b
#define SCANMD                           BANKMASK(PMD0), 3, b
#define SCANMODE0                        BANKMASK(SCANCON0), 0, b
#define SCANMODE1                        BANKMASK(SCANCON0), 1, b
#define SCANTSEL0                        BANKMASK(SCANTRIG), 0, b
#define SCANTSEL1                        BANKMASK(SCANTRIG), 1, b
#define SCANTSEL2                        BANKMASK(SCANTRIG), 2, b
#define SCANTSEL3                        BANKMASK(SCANTRIG), 3, b
#define SCIE                             BANKMASK(SSP1CON3), 5, a
#define SCKP                             BANKMASK(BAUD1CON), 4, a
#define SCKP1                            BANKMASK(BAUD1CON), 4, a
#define SDAHT                            BANKMASK(SSP1CON3), 3, a
#define SEL0                             BANKMASK(HLVDCON1), 0, b
#define SEL1                             BANKMASK(HLVDCON1), 1, b
#define SEL2                             BANKMASK(HLVDCON1), 2, b
#define SEL3                             BANKMASK(HLVDCON1), 3, b
#define SEN1                             BANKMASK(SSP1CON2), 0, a
#define SENDB                            BANKMASK(TX1STA), 3, a
#define SENDB1                           BANKMASK(TX1STA), 3, a
#define SHFT0                            BANKMASK(CRCSHIFTL), 0, a
#define SHFT1                            BANKMASK(CRCSHIFTL), 1, a
#define SHFT10                           BANKMASK(CRCSHIFTH), 2, a
#define SHFT11                           BANKMASK(CRCSHIFTH), 3, a
#define SHFT12                           BANKMASK(CRCSHIFTH), 4, a
#define SHFT13                           BANKMASK(CRCSHIFTH), 5, a
#define SHFT14                           BANKMASK(CRCSHIFTH), 6, a
#define SHFT15                           BANKMASK(CRCSHIFTH), 7, a
#define SHFT2                            BANKMASK(CRCSHIFTL), 2, a
#define SHFT3                            BANKMASK(CRCSHIFTL), 3, a
#define SHFT4                            BANKMASK(CRCSHIFTL), 4, a
#define SHFT5                            BANKMASK(CRCSHIFTL), 5, a
#define SHFT6                            BANKMASK(CRCSHIFTL), 6, a
#define SHFT7                            BANKMASK(CRCSHIFTL), 7, a
#define SHFT8                            BANKMASK(CRCSHIFTH), 0, a
#define SHFT9                            BANKMASK(CRCSHIFTH), 1, a
#define SHIFTM                           BANKMASK(CRCCON0), 1, a
#define SHUTDOWN                         BANKMASK(CWG1AS0), 7, b
#define SLRA0                            BANKMASK(SLRCONA), 0, b
#define SLRA1                            BANKMASK(SLRCONA), 1, b
#define SLRA2                            BANKMASK(SLRCONA), 2, b
#define SLRA3                            BANKMASK(SLRCONA), 3, b
#define SLRA4                            BANKMASK(SLRCONA), 4, b
#define SLRA5                            BANKMASK(SLRCONA), 5, b
#define SLRA6                            BANKMASK(SLRCONA), 6, b
#define SLRA7                            BANKMASK(SLRCONA), 7, b
#define SLRB0                            BANKMASK(SLRCONB), 0, b
#define SLRB1                            BANKMASK(SLRCONB), 1, b
#define SLRB2                            BANKMASK(SLRCONB), 2, b
#define SLRB3                            BANKMASK(SLRCONB), 3, b
#define SLRB4                            BANKMASK(SLRCONB), 4, b
#define SLRB5                            BANKMASK(SLRCONB), 5, b
#define SLRB6                            BANKMASK(SLRCONB), 6, b
#define SLRB7                            BANKMASK(SLRCONB), 7, b
#define SLRC0                            BANKMASK(SLRCONC), 0, b
#define SLRC1                            BANKMASK(SLRCONC), 1, b
#define SLRC2                            BANKMASK(SLRCONC), 2, b
#define SLRC3                            BANKMASK(SLRCONC), 3, b
#define SLRC4                            BANKMASK(SLRCONC), 4, b
#define SLRC5                            BANKMASK(SLRCONC), 5, b
#define SLRC6                            BANKMASK(SLRCONC), 6, b
#define SLRC7                            BANKMASK(SLRCONC), 7, b
#define SMP                              BANKMASK(SSP1STAT), 7, a
#define SMP1                             BANKMASK(SSP1STAT), 7, a
#define SOR                              BANKMASK(OSCSTAT), 3, b
#define SOSCEN                           BANKMASK(OSCEN), 3, b
#define SOSCPWR                          BANKMASK(OSCCON3), 6, b
#define SP0                              BANKMASK(STKPTR), 0, a
#define SP1                              BANKMASK(STKPTR), 1, a
#define SP2                              BANKMASK(STKPTR), 2, a
#define SP3                              BANKMASK(STKPTR), 3, a
#define SP4                              BANKMASK(STKPTR), 4, a
#define SP5                              BANKMASK(STKPTR), 5, a
#define SPEN                             BANKMASK(RC1STA), 7, a
#define SPI1MD                           BANKMASK(PMD0), 1, b
#define SPI2MD                           BANKMASK(PMD0), 2, b
#define SRCS0                            BANKMASK(MDSRC), 0, b
#define SRCS1                            BANKMASK(MDSRC), 1, b
#define SRCS2                            BANKMASK(MDSRC), 2, b
#define SRCS3                            BANKMASK(MDSRC), 3, b
#define SREN                             BANKMASK(RC1STA), 5, a
#define SRENA                            BANKMASK(RC1STA), 5, a
#define SSP1CLKPPS0                      BANKMASK(SSP1CLKPPS), 0, b
#define SSP1CLKPPS1                      BANKMASK(SSP1CLKPPS), 1, b
#define SSP1CLKPPS2                      BANKMASK(SSP1CLKPPS), 2, b
#define SSP1CLKPPS3                      BANKMASK(SSP1CLKPPS), 3, b
#define SSP1CLKPPS4                      BANKMASK(SSP1CLKPPS), 4, b
#define SSP1DATPPS0                      BANKMASK(SSP1DATPPS), 0, b
#define SSP1DATPPS1                      BANKMASK(SSP1DATPPS), 1, b
#define SSP1DATPPS2                      BANKMASK(SSP1DATPPS), 2, b
#define SSP1DATPPS3                      BANKMASK(SSP1DATPPS), 3, b
#define SSP1DATPPS4                      BANKMASK(SSP1DATPPS), 4, b
#define SSP1IE                           BANKMASK(PIE3), 0, b
#define SSP1IF                           BANKMASK(PIR3), 0, b
#define SSP1IP                           BANKMASK(IPR3), 0, b
#define SSP1SSPPS0                       BANKMASK(SSP1SSPPS), 0, b
#define SSP1SSPPS1                       BANKMASK(SSP1SSPPS), 1, b
#define SSP1SSPPS2                       BANKMASK(SSP1SSPPS), 2, b
#define SSP1SSPPS3                       BANKMASK(SSP1SSPPS), 3, b
#define SSP1SSPPS4                       BANKMASK(SSP1SSPPS), 4, b
#define SSPCLKPPS0                       BANKMASK(SSP1CLKPPS), 0, b
#define SSPCLKPPS1                       BANKMASK(SSP1CLKPPS), 1, b
#define SSPCLKPPS2                       BANKMASK(SSP1CLKPPS), 2, b
#define SSPCLKPPS3                       BANKMASK(SSP1CLKPPS), 3, b
#define SSPCLKPPS4                       BANKMASK(SSP1CLKPPS), 4, b
#define SSPDATPPS0                       BANKMASK(SSP1DATPPS), 0, b
#define SSPDATPPS1                       BANKMASK(SSP1DATPPS), 1, b
#define SSPDATPPS2                       BANKMASK(SSP1DATPPS), 2, b
#define SSPDATPPS3                       BANKMASK(SSP1DATPPS), 3, b
#define SSPDATPPS4                       BANKMASK(SSP1DATPPS), 4, b
#define SSPEN                            BANKMASK(SSP1CON1), 5, a
#define SSPEN1                           BANKMASK(SSP1CON1), 5, a
#define SSPIE                            BANKMASK(PIE3), 0, b
#define SSPIF                            BANKMASK(PIR3), 0, b
#define SSPIP                            BANKMASK(IPR3), 0, b
#define SSPM0                            BANKMASK(SSP1CON1), 0, a
#define SSPM01                           BANKMASK(SSP1CON1), 0, a
#define SSPM1                            BANKMASK(SSP1CON1), 1, a
#define SSPM11                           BANKMASK(SSP1CON1), 1, a
#define SSPM2                            BANKMASK(SSP1CON1), 2, a
#define SSPM21                           BANKMASK(SSP1CON1), 2, a
#define SSPM3                            BANKMASK(SSP1CON1), 3, a
#define SSPM31                           BANKMASK(SSP1CON1), 3, a
#define SSPOV                            BANKMASK(SSP1CON1), 6, a
#define SSPOV1                           BANKMASK(SSP1CON1), 6, a
#define SSPSSPPS0                        BANKMASK(SSP1SSPPS), 0, b
#define SSPSSPPS1                        BANKMASK(SSP1SSPPS), 1, b
#define SSPSSPPS2                        BANKMASK(SSP1SSPPS), 2, b
#define SSPSSPPS3                        BANKMASK(SSP1SSPPS), 3, b
#define SSPSSPPS4                        BANKMASK(SSP1SSPPS), 4, b
#define START                            BANKMASK(SSP1STAT), 3, a
#define START1                           BANKMASK(SSP1STAT), 3, a
#define STATE                            BANKMASK(WDTTMR), 2, b
#define STKOVF                           BANKMASK(PCON0), 7, a
#define STKPTR0                          BANKMASK(STKPTR), 0, a
#define STKPTR1                          BANKMASK(STKPTR), 1, a
#define STKPTR2                          BANKMASK(STKPTR), 2, a
#define STKPTR3                          BANKMASK(STKPTR), 3, a
#define STKPTR4                          BANKMASK(STKPTR), 4, a
#define STKPTR5                          BANKMASK(STKPTR), 5, a
#define STKUNF                           BANKMASK(PCON0), 6, a
#define STOP                             BANKMASK(SSP1STAT), 4, a
#define STOP1                            BANKMASK(SSP1STAT), 4, a
#define STRA                             BANKMASK(CWG1STR), 0, b
#define STRB                             BANKMASK(CWG1STR), 1, b
#define STRC                             BANKMASK(CWG1STR), 2, b
#define STRD                             BANKMASK(CWG1STR), 3, b
#define SWDTEN                           BANKMASK(WDTCON0), 0, b
#define SYNC1                            BANKMASK(TX1STA), 4, a
#define SYSCMD                           BANKMASK(PMD0), 7, b
#define T016BIT                          BANKMASK(T0CON0), 4, a
#define T0ASYNC                          BANKMASK(T0CON1), 4, a
#define T0CKIPPS0                        BANKMASK(T0CKIPPS), 0, b
#define T0CKIPPS1                        BANKMASK(T0CKIPPS), 1, b
#define T0CKIPPS2                        BANKMASK(T0CKIPPS), 2, b
#define T0CKIPPS3                        BANKMASK(T0CKIPPS), 3, b
#define T0CKPS0                          BANKMASK(T0CON1), 0, a
#define T0CKPS1                          BANKMASK(T0CON1), 1, a
#define T0CKPS2                          BANKMASK(T0CON1), 2, a
#define T0CKPS3                          BANKMASK(T0CON1), 3, a
#define T0CS0                            BANKMASK(T0CON1), 5, a
#define T0CS1                            BANKMASK(T0CON1), 6, a
#define T0CS2                            BANKMASK(T0CON1), 7, a
#define T0EN                             BANKMASK(T0CON0), 7, a
#define T0OUT                            BANKMASK(T0CON0), 5, a
#define T0OUTPS0                         BANKMASK(T0CON0), 0, a
#define T0OUTPS1                         BANKMASK(T0CON0), 1, a
#define T0OUTPS2                         BANKMASK(T0CON0), 2, a
#define T0OUTPS3                         BANKMASK(T0CON0), 3, a
#define T0PR0                            BANKMASK(TMR0H), 0, a
#define T0PR1                            BANKMASK(TMR0H), 1, a
#define T0PR2                            BANKMASK(TMR0H), 2, a
#define T0PR3                            BANKMASK(TMR0H), 3, a
#define T0PR4                            BANKMASK(TMR0H), 4, a
#define T0PR5                            BANKMASK(TMR0H), 5, a
#define T0PR6                            BANKMASK(TMR0H), 6, a
#define T0PR7                            BANKMASK(TMR0H), 7, a
#define T0PS0                            BANKMASK(T0CON1), 0, a
#define T0PS1                            BANKMASK(T0CON1), 1, a
#define T0PS2                            BANKMASK(T0CON1), 2, a
#define T0PS3                            BANKMASK(T0CON1), 3, a
#define T1CKIPPS0                        BANKMASK(T1CKIPPS), 0, b
#define T1CKIPPS1                        BANKMASK(T1CKIPPS), 1, b
#define T1CKIPPS2                        BANKMASK(T1CKIPPS), 2, b
#define T1CKIPPS3                        BANKMASK(T1CKIPPS), 3, b
#define T1CKIPPS4                        BANKMASK(T1CKIPPS), 4, b
#define T1CKPS0                          BANKMASK(T1CON), 4, a
#define T1CKPS1                          BANKMASK(T1CON), 5, a
#define T1CS0                            BANKMASK(T1CLK), 0, a
#define T1CS1                            BANKMASK(T1CLK), 1, a
#define T1CS2                            BANKMASK(T1CLK), 2, a
#define T1CS3                            BANKMASK(T1CLK), 3, a
#define T1GE                             BANKMASK(T1GCON), 7, a
#define T1GGO                            BANKMASK(T1GCON), 3, a
#define T1GGO_NOT_DONE                   BANKMASK(T1GCON), 3, a
#define T1GGO_nDONE                      BANKMASK(T1GCON), 3, a
#define T1GPOL                           BANKMASK(T1GCON), 6, a
#define T1GPPS0                          BANKMASK(T1GPPS), 0, b
#define T1GPPS1                          BANKMASK(T1GPPS), 1, b
#define T1GPPS2                          BANKMASK(T1GPPS), 2, b
#define T1GPPS3                          BANKMASK(T1GPPS), 3, b
#define T1GPPS4                          BANKMASK(T1GPPS), 4, b
#define T1GSPM                           BANKMASK(T1GCON), 4, a
#define T1GSS0                           BANKMASK(T1GATE), 0, a
#define T1GSS1                           BANKMASK(T1GATE), 1, a
#define T1GSS2                           BANKMASK(T1GATE), 2, a
#define T1GSS3                           BANKMASK(T1GATE), 3, a
#define T1GTM                            BANKMASK(T1GCON), 5, a
#define T1GVAL                           BANKMASK(T1GCON), 2, a
#define T1RD16                           BANKMASK(T1CON), 1, a
#define T2CKPOL                          BANKMASK(T2HLT), 6, a
#define T2CKPS0                          BANKMASK(T2CON), 4, a
#define T2CKPS1                          BANKMASK(T2CON), 5, a
#define T2CKPS2                          BANKMASK(T2CON), 6, a
#define T2CKSYNC                         BANKMASK(T2HLT), 5, a
#define T2CS0                            BANKMASK(T2CLKCON), 0, a
#define T2CS1                            BANKMASK(T2CLKCON), 1, a
#define T2CS2                            BANKMASK(T2CLKCON), 2, a
#define T2CS3                            BANKMASK(T2CLKCON), 3, a
#define T2INPPS0                         BANKMASK(T2INPPS), 0, b
#define T2INPPS1                         BANKMASK(T2INPPS), 1, b
#define T2INPPS2                         BANKMASK(T2INPPS), 2, b
#define T2INPPS3                         BANKMASK(T2INPPS), 3, b
#define T2INPPS4                         BANKMASK(T2INPPS), 4, b
#define T2MODE0                          BANKMASK(T2HLT), 0, a
#define T2MODE1                          BANKMASK(T2HLT), 1, a
#define T2MODE2                          BANKMASK(T2HLT), 2, a
#define T2MODE3                          BANKMASK(T2HLT), 3, a
#define T2MODE4                          BANKMASK(T2HLT), 4, a
#define T2ON                             BANKMASK(T2CON), 7, a
#define T2OUTPS0                         BANKMASK(T2CON), 0, a
#define T2OUTPS1                         BANKMASK(T2CON), 1, a
#define T2OUTPS2                         BANKMASK(T2CON), 2, a
#define T2OUTPS3                         BANKMASK(T2CON), 3, a
#define T2PSYNC                          BANKMASK(T2HLT), 7, a
#define T2RSEL0                          BANKMASK(T2RST), 0, a
#define T2RSEL1                          BANKMASK(T2RST), 1, a
#define T2RSEL2                          BANKMASK(T2RST), 2, a
#define T2RSEL3                          BANKMASK(T2RST), 3, a
#define T3CKIPPS0                        BANKMASK(T3CKIPPS), 0, b
#define T3CKIPPS1                        BANKMASK(T3CKIPPS), 1, b
#define T3CKIPPS2                        BANKMASK(T3CKIPPS), 2, b
#define T3CKIPPS3                        BANKMASK(T3CKIPPS), 3, b
#define T3CKIPPS4                        BANKMASK(T3CKIPPS), 4, b
#define T3CKPS0                          BANKMASK(T3CON), 4, a
#define T3CKPS1                          BANKMASK(T3CON), 5, a
#define T3CS0                            BANKMASK(T3CLK), 0, a
#define T3CS1                            BANKMASK(T3CLK), 1, a
#define T3CS2                            BANKMASK(T3CLK), 2, a
#define T3CS3                            BANKMASK(T3CLK), 3, a
#define T3GE                             BANKMASK(T3GCON), 7, a
#define T3GGO                            BANKMASK(T3GCON), 3, a
#define T3GGO_NOT_DONE                   BANKMASK(T3GCON), 3, a
#define T3GGO_nDONE                      BANKMASK(T3GCON), 3, a
#define T3GPOL                           BANKMASK(T3GCON), 6, a
#define T3GPPS0                          BANKMASK(T3GPPS), 0, b
#define T3GPPS1                          BANKMASK(T3GPPS), 1, b
#define T3GPPS2                          BANKMASK(T3GPPS), 2, b
#define T3GPPS3                          BANKMASK(T3GPPS), 3, b
#define T3GPPS4                          BANKMASK(T3GPPS), 4, b
#define T3GSPM                           BANKMASK(T3GCON), 4, a
#define T3GSS0                           BANKMASK(T3GATE), 0, a
#define T3GSS1                           BANKMASK(T3GATE), 1, a
#define T3GSS2                           BANKMASK(T3GATE), 2, a
#define T3GSS3                           BANKMASK(T3GATE), 3, a
#define T3GTM                            BANKMASK(T3GCON), 5, a
#define T3GVAL                           BANKMASK(T3GCON), 2, a
#define T3RD16                           BANKMASK(T3CON), 1, a
#define T4CKPOL                          BANKMASK(T4HLT), 6, a
#define T4CKPS0                          BANKMASK(T4CON), 4, a
#define T4CKPS1                          BANKMASK(T4CON), 5, a
#define T4CKPS2                          BANKMASK(T4CON), 6, a
#define T4CKSYNC                         BANKMASK(T4HLT), 5, a
#define T4CS0                            BANKMASK(T4CLKCON), 0, a
#define T4CS1                            BANKMASK(T4CLKCON), 1, a
#define T4CS2                            BANKMASK(T4CLKCON), 2, a
#define T4CS3                            BANKMASK(T4CLKCON), 3, a
#define T4INPPS0                         BANKMASK(T4INPPS), 0, b
#define T4INPPS1                         BANKMASK(T4INPPS), 1, b
#define T4INPPS2                         BANKMASK(T4INPPS), 2, b
#define T4INPPS3                         BANKMASK(T4INPPS), 3, b
#define T4INPPS4                         BANKMASK(T4INPPS), 4, b
#define T4MODE0                          BANKMASK(T4HLT), 0, a
#define T4MODE1                          BANKMASK(T4HLT), 1, a
#define T4MODE2                          BANKMASK(T4HLT), 2, a
#define T4MODE3                          BANKMASK(T4HLT), 3, a
#define T4MODE4                          BANKMASK(T4HLT), 4, a
#define T4ON                             BANKMASK(T4CON), 7, a
#define T4OUTPS0                         BANKMASK(T4CON), 0, a
#define T4OUTPS1                         BANKMASK(T4CON), 1, a
#define T4OUTPS2                         BANKMASK(T4CON), 2, a
#define T4OUTPS3                         BANKMASK(T4CON), 3, a
#define T4PSYNC                          BANKMASK(T4HLT), 7, a
#define T4RSEL0                          BANKMASK(T4RST), 0, a
#define T4RSEL1                          BANKMASK(T4RST), 1, a
#define T4RSEL2                          BANKMASK(T4RST), 2, a
#define T4RSEL3                          BANKMASK(T4RST), 3, a
#define T5CKIPPS0                        BANKMASK(T5CKIPPS), 0, b
#define T5CKIPPS1                        BANKMASK(T5CKIPPS), 1, b
#define T5CKIPPS2                        BANKMASK(T5CKIPPS), 2, b
#define T5CKIPPS3                        BANKMASK(T5CKIPPS), 3, b
#define T5CKIPPS4                        BANKMASK(T5CKIPPS), 4, b
#define T5CKPS0                          BANKMASK(T5CON), 4, a
#define T5CKPS1                          BANKMASK(T5CON), 5, a
#define T5CS0                            BANKMASK(T5CLK), 0, a
#define T5CS1                            BANKMASK(T5CLK), 1, a
#define T5CS2                            BANKMASK(T5CLK), 2, a
#define T5CS3                            BANKMASK(T5CLK), 3, a
#define T5GE                             BANKMASK(T5GCON), 7, a
#define T5GGO                            BANKMASK(T5GCON), 3, a
#define T5GGO_NOT_DONE                   BANKMASK(T5GCON), 3, a
#define T5GGO_nDONE                      BANKMASK(T5GCON), 3, a
#define T5GPOL                           BANKMASK(T5GCON), 6, a
#define T5GPPS0                          BANKMASK(T5GPPS), 0, b
#define T5GPPS1                          BANKMASK(T5GPPS), 1, b
#define T5GPPS2                          BANKMASK(T5GPPS), 2, b
#define T5GPPS3                          BANKMASK(T5GPPS), 3, b
#define T5GPPS4                          BANKMASK(T5GPPS), 4, b
#define T5GSPM                           BANKMASK(T5GCON), 4, a
#define T5GSS0                           BANKMASK(T5GATE), 0, a
#define T5GSS1                           BANKMASK(T5GATE), 1, a
#define T5GSS2                           BANKMASK(T5GATE), 2, a
#define T5GSS3                           BANKMASK(T5GATE), 3, a
#define T5GTM                            BANKMASK(T5GCON), 5, a
#define T5GVAL                           BANKMASK(T5GCON), 2, a
#define T5RD16                           BANKMASK(T5CON), 1, a
#define T6CKPOL                          BANKMASK(T6HLT), 6, a
#define T6CKPS0                          BANKMASK(T6CON), 4, a
#define T6CKPS1                          BANKMASK(T6CON), 5, a
#define T6CKPS2                          BANKMASK(T6CON), 6, a
#define T6CKSYNC                         BANKMASK(T6HLT), 5, a
#define T6CS0                            BANKMASK(T6CLKCON), 0, a
#define T6CS1                            BANKMASK(T6CLKCON), 1, a
#define T6CS2                            BANKMASK(T6CLKCON), 2, a
#define T6CS3                            BANKMASK(T6CLKCON), 3, a
#define T6INPPS0                         BANKMASK(T6INPPS), 0, b
#define T6INPPS1                         BANKMASK(T6INPPS), 1, b
#define T6INPPS2                         BANKMASK(T6INPPS), 2, b
#define T6INPPS3                         BANKMASK(T6INPPS), 3, b
#define T6INPPS4                         BANKMASK(T6INPPS), 4, b
#define T6MODE0                          BANKMASK(T6HLT), 0, a
#define T6MODE1                          BANKMASK(T6HLT), 1, a
#define T6MODE2                          BANKMASK(T6HLT), 2, a
#define T6MODE3                          BANKMASK(T6HLT), 3, a
#define T6MODE4                          BANKMASK(T6HLT), 4, a
#define T6ON                             BANKMASK(T6CON), 7, a
#define T6OUTPS0                         BANKMASK(T6CON), 0, a
#define T6OUTPS1                         BANKMASK(T6CON), 1, a
#define T6OUTPS2                         BANKMASK(T6CON), 2, a
#define T6OUTPS3                         BANKMASK(T6CON), 3, a
#define T6PSYNC                          BANKMASK(T6HLT), 7, a
#define T6RSEL0                          BANKMASK(T6RST), 0, a
#define T6RSEL1                          BANKMASK(T6RST), 1, a
#define T6RSEL2                          BANKMASK(T6RST), 2, a
#define T6RSEL3                          BANKMASK(T6RST), 3, a
#define TMR0H0                           BANKMASK(TMR0H), 0, a
#define TMR0H1                           BANKMASK(TMR0H), 1, a
#define TMR0H2                           BANKMASK(TMR0H), 2, a
#define TMR0H3                           BANKMASK(TMR0H), 3, a
#define TMR0H4                           BANKMASK(TMR0H), 4, a
#define TMR0H5                           BANKMASK(TMR0H), 5, a
#define TMR0H6                           BANKMASK(TMR0H), 6, a
#define TMR0H7                           BANKMASK(TMR0H), 7, a
#define TMR0IE                           BANKMASK(PIE0), 5, b
#define TMR0IF                           BANKMASK(PIR0), 5, b
#define TMR0IP                           BANKMASK(IPR0), 5, b
#define TMR0L0                           BANKMASK(TMR0L), 0, a
#define TMR0L1                           BANKMASK(TMR0L), 1, a
#define TMR0L2                           BANKMASK(TMR0L), 2, a
#define TMR0L3                           BANKMASK(TMR0L), 3, a
#define TMR0L4                           BANKMASK(TMR0L), 4, a
#define TMR0L5                           BANKMASK(TMR0L), 5, a
#define TMR0L6                           BANKMASK(TMR0L), 6, a
#define TMR0L7                           BANKMASK(TMR0L), 7, a
#define TMR0MD                           BANKMASK(PMD1), 0, b
#define TMR10                            BANKMASK(TMR1L), 0, a
#define TMR11                            BANKMASK(TMR1L), 1, a
#define TMR110                           BANKMASK(TMR1H), 2, a
#define TMR111                           BANKMASK(TMR1H), 3, a
#define TMR112                           BANKMASK(TMR1H), 4, a
#define TMR113                           BANKMASK(TMR1H), 5, a
#define TMR114                           BANKMASK(TMR1H), 6, a
#define TMR115                           BANKMASK(TMR1H), 7, a
#define TMR12                            BANKMASK(TMR1L), 2, a
#define TMR13                            BANKMASK(TMR1L), 3, a
#define TMR14                            BANKMASK(TMR1L), 4, a
#define TMR15                            BANKMASK(TMR1L), 5, a
#define TMR16                            BANKMASK(TMR1L), 6, a
#define TMR17                            BANKMASK(TMR1L), 7, a
#define TMR18                            BANKMASK(TMR1H), 0, a
#define TMR19                            BANKMASK(TMR1H), 1, a
#define TMR1GIE                          BANKMASK(PIE5), 0, b
#define TMR1GIF                          BANKMASK(PIR5), 0, b
#define TMR1GIP                          BANKMASK(IPR5), 0, b
#define TMR1H0                           BANKMASK(TMR1H), 0, a
#define TMR1H1                           BANKMASK(TMR1H), 1, a
#define TMR1H2                           BANKMASK(TMR1H), 2, a
#define TMR1H3                           BANKMASK(TMR1H), 3, a
#define TMR1H4                           BANKMASK(TMR1H), 4, a
#define TMR1H5                           BANKMASK(TMR1H), 5, a
#define TMR1H6                           BANKMASK(TMR1H), 6, a
#define TMR1H7                           BANKMASK(TMR1H), 7, a
#define TMR1IE                           BANKMASK(PIE4), 0, b
#define TMR1IF                           BANKMASK(PIR4), 0, b
#define TMR1IP                           BANKMASK(IPR4), 0, b
#define TMR1L0                           BANKMASK(TMR1L), 0, a
#define TMR1L1                           BANKMASK(TMR1L), 1, a
#define TMR1L2                           BANKMASK(TMR1L), 2, a
#define TMR1L3                           BANKMASK(TMR1L), 3, a
#define TMR1L4                           BANKMASK(TMR1L), 4, a
#define TMR1L5                           BANKMASK(TMR1L), 5, a
#define TMR1L6                           BANKMASK(TMR1L), 6, a
#define TMR1L7                           BANKMASK(TMR1L), 7, a
#define TMR1MD                           BANKMASK(PMD1), 1, b
#define TMR1ON                           BANKMASK(T1CON), 0, a
#define TMR2IE                           BANKMASK(PIE4), 1, b
#define TMR2IF                           BANKMASK(PIR4), 1, b
#define TMR2IP                           BANKMASK(IPR4), 1, b
#define TMR2MD                           BANKMASK(PMD1), 2, b
#define TMR2ON                           BANKMASK(T2CON), 7, a
#define TMR30                            BANKMASK(TMR3L), 0, a
#define TMR31                            BANKMASK(TMR3L), 1, a
#define TMR310                           BANKMASK(TMR3H), 2, a
#define TMR311                           BANKMASK(TMR3H), 3, a
#define TMR312                           BANKMASK(TMR3H), 4, a
#define TMR313                           BANKMASK(TMR3H), 5, a
#define TMR314                           BANKMASK(TMR3H), 6, a
#define TMR315                           BANKMASK(TMR3H), 7, a
#define TMR32                            BANKMASK(TMR3L), 2, a
#define TMR33                            BANKMASK(TMR3L), 3, a
#define TMR34                            BANKMASK(TMR3L), 4, a
#define TMR35                            BANKMASK(TMR3L), 5, a
#define TMR36                            BANKMASK(TMR3L), 6, a
#define TMR37                            BANKMASK(TMR3L), 7, a
#define TMR38                            BANKMASK(TMR3H), 0, a
#define TMR39                            BANKMASK(TMR3H), 1, a
#define TMR3GIE                          BANKMASK(PIE5), 1, b
#define TMR3GIF                          BANKMASK(PIR5), 1, b
#define TMR3GIP                          BANKMASK(IPR5), 1, b
#define TMR3H0                           BANKMASK(TMR3H), 0, a
#define TMR3H1                           BANKMASK(TMR3H), 1, a
#define TMR3H2                           BANKMASK(TMR3H), 2, a
#define TMR3H3                           BANKMASK(TMR3H), 3, a
#define TMR3H4                           BANKMASK(TMR3H), 4, a
#define TMR3H5                           BANKMASK(TMR3H), 5, a
#define TMR3H6                           BANKMASK(TMR3H), 6, a
#define TMR3H7                           BANKMASK(TMR3H), 7, a
#define TMR3IE                           BANKMASK(PIE4), 2, b
#define TMR3IF                           BANKMASK(PIR4), 2, b
#define TMR3IP                           BANKMASK(IPR4), 2, b
#define TMR3L0                           BANKMASK(TMR3L), 0, a
#define TMR3L1                           BANKMASK(TMR3L), 1, a
#define TMR3L2                           BANKMASK(TMR3L), 2, a
#define TMR3L3                           BANKMASK(TMR3L), 3, a
#define TMR3L4                           BANKMASK(TMR3L), 4, a
#define TMR3L5                           BANKMASK(TMR3L), 5, a
#define TMR3L6                           BANKMASK(TMR3L), 6, a
#define TMR3L7                           BANKMASK(TMR3L), 7, a
#define TMR3MD                           BANKMASK(PMD1), 3, b
#define TMR3ON                           BANKMASK(T3CON), 0, a
#define TMR4IE                           BANKMASK(PIE4), 3, b
#define TMR4IF                           BANKMASK(PIR4), 3, b
#define TMR4IP                           BANKMASK(IPR4), 3, b
#define TMR4MD                           BANKMASK(PMD1), 4, b
#define TMR4ON                           BANKMASK(T4CON), 7, a
#define TMR50                            BANKMASK(TMR5L), 0, a
#define TMR51                            BANKMASK(TMR5L), 1, a
#define TMR510                           BANKMASK(TMR5H), 2, a
#define TMR511                           BANKMASK(TMR5H), 3, a
#define TMR512                           BANKMASK(TMR5H), 4, a
#define TMR513                           BANKMASK(TMR5H), 5, a
#define TMR514                           BANKMASK(TMR5H), 6, a
#define TMR515                           BANKMASK(TMR5H), 7, a
#define TMR52                            BANKMASK(TMR5L), 2, a
#define TMR53                            BANKMASK(TMR5L), 3, a
#define TMR54                            BANKMASK(TMR5L), 4, a
#define TMR55                            BANKMASK(TMR5L), 5, a
#define TMR56                            BANKMASK(TMR5L), 6, a
#define TMR57                            BANKMASK(TMR5L), 7, a
#define TMR58                            BANKMASK(TMR5H), 0, a
#define TMR59                            BANKMASK(TMR5H), 1, a
#define TMR5GIE                          BANKMASK(PIE5), 2, b
#define TMR5GIF                          BANKMASK(PIR5), 2, b
#define TMR5GIP                          BANKMASK(IPR5), 2, b
#define TMR5H0                           BANKMASK(TMR5H), 0, a
#define TMR5H1                           BANKMASK(TMR5H), 1, a
#define TMR5H2                           BANKMASK(TMR5H), 2, a
#define TMR5H3                           BANKMASK(TMR5H), 3, a
#define TMR5H4                           BANKMASK(TMR5H), 4, a
#define TMR5H5                           BANKMASK(TMR5H), 5, a
#define TMR5H6                           BANKMASK(TMR5H), 6, a
#define TMR5H7                           BANKMASK(TMR5H), 7, a
#define TMR5IE                           BANKMASK(PIE4), 4, b
#define TMR5IF                           BANKMASK(PIR4), 4, b
#define TMR5IP                           BANKMASK(IPR4), 4, b
#define TMR5L0                           BANKMASK(TMR5L), 0, a
#define TMR5L1                           BANKMASK(TMR5L), 1, a
#define TMR5L2                           BANKMASK(TMR5L), 2, a
#define TMR5L3                           BANKMASK(TMR5L), 3, a
#define TMR5L4                           BANKMASK(TMR5L), 4, a
#define TMR5L5                           BANKMASK(TMR5L), 5, a
#define TMR5L6                           BANKMASK(TMR5L), 6, a
#define TMR5L7                           BANKMASK(TMR5L), 7, a
#define TMR5MD                           BANKMASK(PMD1), 5, b
#define TMR5ON                           BANKMASK(T5CON), 0, a
#define TMR6IE                           BANKMASK(PIE4), 5, b
#define TMR6IF                           BANKMASK(PIR4), 5, b
#define TMR6IP                           BANKMASK(IPR4), 5, b
#define TMR6MD                           BANKMASK(PMD1), 6, b
#define TMR6ON                           BANKMASK(T6CON), 7, a
#define TO                               BANKMASK(STATUS), 6, a
#define TRISA0                           BANKMASK(TRISA), 0, a
#define TRISA1                           BANKMASK(TRISA), 1, a
#define TRISA2                           BANKMASK(TRISA), 2, a
#define TRISA3                           BANKMASK(TRISA), 3, a
#define TRISA4                           BANKMASK(TRISA), 4, a
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
#define TRISC3                           BANKMASK(TRISC), 3, a
#define TRISC4                           BANKMASK(TRISC), 4, a
#define TRISC5                           BANKMASK(TRISC), 5, a
#define TRISC6                           BANKMASK(TRISC), 6, a
#define TRISC7                           BANKMASK(TRISC), 7, a
#define TRMT                             BANKMASK(TX1STA), 1, a
#define TRMT1                            BANKMASK(TX1STA), 1, a
#define TSEL0                            BANKMASK(SCANTRIG), 0, b
#define TSEL1                            BANKMASK(SCANTRIG), 1, b
#define TSEL2                            BANKMASK(SCANTRIG), 2, b
#define TSEL3                            BANKMASK(SCANTRIG), 3, b
#define TSEN                             BANKMASK(FVRCON), 5, b
#define TSRNG                            BANKMASK(FVRCON), 4, b
#define TUN0                             BANKMASK(OSCTUNE), 0, b
#define TUN1                             BANKMASK(OSCTUNE), 1, b
#define TUN2                             BANKMASK(OSCTUNE), 2, b
#define TUN3                             BANKMASK(OSCTUNE), 3, b
#define TUN4                             BANKMASK(OSCTUNE), 4, b
#define TUN5                             BANKMASK(OSCTUNE), 5, b
#define TX1IE                            BANKMASK(PIE3), 4, b
#define TX1IF                            BANKMASK(PIR3), 4, b
#define TX1PPS0                          BANKMASK(CK1PPS), 0, b
#define TX1PPS1                          BANKMASK(CK1PPS), 1, b
#define TX1PPS2                          BANKMASK(CK1PPS), 2, b
#define TX1PPS3                          BANKMASK(CK1PPS), 3, b
#define TX1PPS4                          BANKMASK(CK1PPS), 4, b
#define TX8_9                            BANKMASK(TX1STA), 6, a
#define TX9                              BANKMASK(TX1STA), 6, a
#define TX91                             BANKMASK(TX1STA), 6, a
#define TX9D                             BANKMASK(TX1STA), 0, a
#define TX9D1                            BANKMASK(TX1STA), 0, a
#define TXB2IE                           BANKMASK(PIE3), 4, b
#define TXBNIE                           BANKMASK(PIE3), 4, b
#define TXBNIF                           BANKMASK(PIR3), 4, b
#define TXBNIP                           BANKMASK(IPR3), 4, b
#define TXCKP                            BANKMASK(BAUD1CON), 4, a
#define TXCKP1                           BANKMASK(BAUD1CON), 4, a
#define TXD8                             BANKMASK(TX1STA), 0, a
#define TXEN                             BANKMASK(TX1STA), 5, a
#define TXEN1                            BANKMASK(TX1STA), 5, a
#define TXIE                             BANKMASK(PIE3), 4, b
#define TXIF                             BANKMASK(PIR3), 4, b
#define TXIP                             BANKMASK(IPR3), 4, b
#define TXPPS0                           BANKMASK(CK1PPS), 0, b
#define TXPPS1                           BANKMASK(CK1PPS), 1, b
#define TXPPS2                           BANKMASK(CK1PPS), 2, b
#define TXPPS3                           BANKMASK(CK1PPS), 3, b
#define TXPPS4                           BANKMASK(CK1PPS), 4, b
#define UA                               BANKMASK(SSP1STAT), 1, a
#define UA1                              BANKMASK(SSP1STAT), 1, a
#define UART1MD                          BANKMASK(PMD4), 6, b
#define ULPWUIN                          BANKMASK(PORTA), 0, a
#define VREGPM0                          BANKMASK(VREGCON), 0, b
#define VREGPM1                          BANKMASK(VREGCON), 1, b
#define W4E                              BANKMASK(BAUD1CON), 1, a
#define WCOL                             BANKMASK(SSP1CON1), 7, a
#define WCOL1                            BANKMASK(SSP1CON1), 7, a
#define WDTCS0                           BANKMASK(WDTCON1), 4, b
#define WDTCS1                           BANKMASK(WDTCON1), 5, b
#define WDTCS2                           BANKMASK(WDTCON1), 6, b
#define WDTPS0                           BANKMASK(WDTCON0), 1, b
#define WDTPS1                           BANKMASK(WDTCON0), 2, b
#define WDTPS2                           BANKMASK(WDTCON0), 3, b
#define WDTPS3                           BANKMASK(WDTCON0), 4, b
#define WDTPS4                           BANKMASK(WDTCON0), 5, b
#define WDTPSCNT0                        BANKMASK(WDTPSL), 0, b
#define WDTPSCNT1                        BANKMASK(WDTPSL), 1, b
#define WDTPSCNT10                       BANKMASK(WDTPSH), 2, b
#define WDTPSCNT11                       BANKMASK(WDTPSH), 3, b
#define WDTPSCNT12                       BANKMASK(WDTPSH), 4, b
#define WDTPSCNT13                       BANKMASK(WDTPSH), 5, b
#define WDTPSCNT14                       BANKMASK(WDTPSH), 6, b
#define WDTPSCNT15                       BANKMASK(WDTPSH), 7, b
#define WDTPSCNT16                       BANKMASK(WDTTMR), 0, b
#define WDTPSCNT17                       BANKMASK(WDTTMR), 1, b
#define WDTPSCNT2                        BANKMASK(WDTPSL), 2, b
#define WDTPSCNT3                        BANKMASK(WDTPSL), 3, b
#define WDTPSCNT4                        BANKMASK(WDTPSL), 4, b
#define WDTPSCNT5                        BANKMASK(WDTPSL), 5, b
#define WDTPSCNT6                        BANKMASK(WDTPSL), 6, b
#define WDTPSCNT7                        BANKMASK(WDTPSL), 7, b
#define WDTPSCNT8                        BANKMASK(WDTPSH), 0, b
#define WDTPSCNT9                        BANKMASK(WDTPSH), 1, b
#define WDTSEN                           BANKMASK(WDTCON0), 0, b
#define WDTSTATE                         BANKMASK(WDTTMR), 2, b
#define WDTTMR0                          BANKMASK(WDTTMR), 3, b
#define WDTTMR1                          BANKMASK(WDTTMR), 4, b
#define WDTTMR2                          BANKMASK(WDTTMR), 5, b
#define WDTTMR3                          BANKMASK(WDTTMR), 6, b
#define WDTTMR4                          BANKMASK(WDTTMR), 7, b
#define WDTWINDOW0                       BANKMASK(WDTCON1), 0, b
#define WDTWINDOW1                       BANKMASK(WDTCON1), 1, b
#define WDTWINDOW2                       BANKMASK(WDTCON1), 2, b
#define WDTWV                            BANKMASK(PCON0), 5, a
#define WINDOW0                          BANKMASK(WDTCON1), 0, b
#define WINDOW1                          BANKMASK(WDTCON1), 1, b
#define WINDOW2                          BANKMASK(WDTCON1), 2, b
#define WPUA0                            BANKMASK(WPUA), 0, b
#define WPUA1                            BANKMASK(WPUA), 1, b
#define WPUA2                            BANKMASK(WPUA), 2, b
#define WPUA3                            BANKMASK(WPUA), 3, b
#define WPUA4                            BANKMASK(WPUA), 4, b
#define WPUA5                            BANKMASK(WPUA), 5, b
#define WPUA6                            BANKMASK(WPUA), 6, b
#define WPUA7                            BANKMASK(WPUA), 7, b
#define WPUB0                            BANKMASK(WPUB), 0, b
#define WPUB1                            BANKMASK(WPUB), 1, b
#define WPUB2                            BANKMASK(WPUB), 2, b
#define WPUB3                            BANKMASK(WPUB), 3, b
#define WPUB4                            BANKMASK(WPUB), 4, b
#define WPUB5                            BANKMASK(WPUB), 5, b
#define WPUB6                            BANKMASK(WPUB), 6, b
#define WPUB7                            BANKMASK(WPUB), 7, b
#define WPUC0                            BANKMASK(WPUC), 0, b
#define WPUC1                            BANKMASK(WPUC), 1, b
#define WPUC2                            BANKMASK(WPUC), 2, b
#define WPUC3                            BANKMASK(WPUC), 3, b
#define WPUC4                            BANKMASK(WPUC), 4, b
#define WPUC5                            BANKMASK(WPUC), 5, b
#define WPUC6                            BANKMASK(WPUC), 6, b
#define WPUC7                            BANKMASK(WPUC), 7, b
#define WPUE3                            BANKMASK(WPUE), 3, b
#define WR                               BANKMASK(NVMCON1), 1, a
#define WREN                             BANKMASK(NVMCON1), 2, a
#define WRERR                            BANKMASK(NVMCON1), 3, a
#define WUE                              BANKMASK(BAUD1CON), 1, a
#define WUE1                             BANKMASK(BAUD1CON), 1, a
#define X1                               BANKMASK(CRCXORL), 1, a
#define X10                              BANKMASK(CRCXORH), 2, a
#define X11                              BANKMASK(CRCXORH), 3, a
#define X12                              BANKMASK(CRCXORH), 4, a
#define X13                              BANKMASK(CRCXORH), 5, a
#define X14                              BANKMASK(CRCXORH), 6, a
#define X15                              BANKMASK(CRCXORH), 7, a
#define X2                               BANKMASK(CRCXORL), 2, a
#define X3                               BANKMASK(CRCXORL), 3, a
#define X4                               BANKMASK(CRCXORL), 4, a
#define X5                               BANKMASK(CRCXORL), 5, a
#define X6                               BANKMASK(CRCXORL), 6, a
#define X7                               BANKMASK(CRCXORL), 7, a
#define X8                               BANKMASK(CRCXORH), 0, a
#define X9                               BANKMASK(CRCXORH), 1, a
#define ZCDIE                            BANKMASK(PIE2), 6, b
#define ZCDIF                            BANKMASK(PIR2), 6, b
#define ZCDINTN                          BANKMASK(ZCDCON), 0, b
#define ZCDINTP                          BANKMASK(ZCDCON), 1, b
#define ZCDIP                            BANKMASK(IPR2), 6, b
#define ZCDMD                            BANKMASK(PMD2), 0, b
#define ZCDOUT                           BANKMASK(ZCDCON), 5, b
#define ZCDPOL                           BANKMASK(ZCDCON), 4, b
#define ZCDSEN                           BANKMASK(ZCDCON), 7, b
#define ZERO                             BANKMASK(STATUS), 2, a
#define nA                               BANKMASK(SSP1STAT), 5, a
#define nA2                              BANKMASK(SSP1STAT), 5, a
#define nADDRESS                         BANKMASK(SSP1STAT), 5, a
#define nADDRESS1                        BANKMASK(SSP1STAT), 5, a
#define nBOR                             BANKMASK(PCON0), 0, a
#define nPD                              BANKMASK(STATUS), 5, a
#define nPOR                             BANKMASK(PCON0), 1, a
#define nRI                              BANKMASK(PCON0), 2, a
#define nRMCLR                           BANKMASK(PCON0), 3, a
#define nRWDT                            BANKMASK(PCON0), 4, a
#define nT1SYNC                          BANKMASK(T1CON), 2, a
#define nT3SYNC                          BANKMASK(T3CON), 2, a
#define nT5SYNC                          BANKMASK(T5CON), 2, a
#define nTO                              BANKMASK(STATUS), 6, a
#define nW                               BANKMASK(SSP1STAT), 2, a
#define nW2                              BANKMASK(SSP1STAT), 2, a
#define nWDTWV                           BANKMASK(PCON0), 5, a
#define nWRITE                           BANKMASK(SSP1STAT), 2, a
#define nWRITE1                          BANKMASK(SSP1STAT), 2, a

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
psect udata,class=RAM,space=SPACE_DATA,noexec
psect code,class=CODE,space=SPACE_CODE,reloc=2
psect data,class=CONST,space=SPACE_CODE,reloc=2,noexec
psect edata,class=EEDATA,space=SPACE_EEPROM,delta=1,noexec

#endif // _XC_INC_

#endif // _PIC18F25K40_INC_
