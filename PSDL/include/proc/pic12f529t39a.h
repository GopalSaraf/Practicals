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

#ifndef _PIC12F529T39A_H_
#define _PIC12F529T39A_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC12F529T39A
 */
#ifndef _XC_H_
#warning Header file pic12f529t39a.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Register Definitions
 */

// Register: INDF
#define INDF INDF
extern volatile unsigned char           INDF                __at(0x000);
#ifndef _LIB_BUILD
asm("INDF equ 00h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF                   :8;
    };
} INDFbits_t;
extern volatile INDFbits_t INDFbits __at(0x000);
// bitfield macros
#define _INDF_INDF_POSN                                     0x0
#define _INDF_INDF_POSITION                                 0x0
#define _INDF_INDF_SIZE                                     0x8
#define _INDF_INDF_LENGTH                                   0x8
#define _INDF_INDF_MASK                                     0xFF

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned char           TMR0                __at(0x001);
#ifndef _LIB_BUILD
asm("TMR0 equ 01h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0                   :8;
    };
} TMR0bits_t;
extern volatile TMR0bits_t TMR0bits __at(0x001);
// bitfield macros
#define _TMR0_TMR0_POSN                                     0x0
#define _TMR0_TMR0_POSITION                                 0x0
#define _TMR0_TMR0_SIZE                                     0x8
#define _TMR0_TMR0_LENGTH                                   0x8
#define _TMR0_TMR0_MASK                                     0xFF

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0x002);
#ifndef _LIB_BUILD
asm("PCL equ 02h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCL                    :8;
    };
} PCLbits_t;
extern volatile PCLbits_t PCLbits __at(0x002);
// bitfield macros
#define _PCL_PCL_POSN                                       0x0
#define _PCL_PCL_POSITION                                   0x0
#define _PCL_PCL_SIZE                                       0x8
#define _PCL_PCL_LENGTH                                     0x8
#define _PCL_PCL_MASK                                       0xFF

// Register: STATUS
#define STATUS STATUS
extern volatile unsigned char           STATUS              __at(0x003);
#ifndef _LIB_BUILD
asm("STATUS equ 03h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned PA0                    :1;
        unsigned PA1                    :1;
        unsigned RBWUF                  :1;
    };
    struct {
        unsigned CARRY                  :1;
        unsigned                        :1;
        unsigned ZERO                   :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __at(0x003);
// bitfield macros
#define _STATUS_C_POSN                                      0x0
#define _STATUS_C_POSITION                                  0x0
#define _STATUS_C_SIZE                                      0x1
#define _STATUS_C_LENGTH                                    0x1
#define _STATUS_C_MASK                                      0x1
#define _STATUS_DC_POSN                                     0x1
#define _STATUS_DC_POSITION                                 0x1
#define _STATUS_DC_SIZE                                     0x1
#define _STATUS_DC_LENGTH                                   0x1
#define _STATUS_DC_MASK                                     0x2
#define _STATUS_Z_POSN                                      0x2
#define _STATUS_Z_POSITION                                  0x2
#define _STATUS_Z_SIZE                                      0x1
#define _STATUS_Z_LENGTH                                    0x1
#define _STATUS_Z_MASK                                      0x4
#define _STATUS_nPD_POSN                                    0x3
#define _STATUS_nPD_POSITION                                0x3
#define _STATUS_nPD_SIZE                                    0x1
#define _STATUS_nPD_LENGTH                                  0x1
#define _STATUS_nPD_MASK                                    0x8
#define _STATUS_nTO_POSN                                    0x4
#define _STATUS_nTO_POSITION                                0x4
#define _STATUS_nTO_SIZE                                    0x1
#define _STATUS_nTO_LENGTH                                  0x1
#define _STATUS_nTO_MASK                                    0x10
#define _STATUS_PA0_POSN                                    0x5
#define _STATUS_PA0_POSITION                                0x5
#define _STATUS_PA0_SIZE                                    0x1
#define _STATUS_PA0_LENGTH                                  0x1
#define _STATUS_PA0_MASK                                    0x20
#define _STATUS_PA1_POSN                                    0x6
#define _STATUS_PA1_POSITION                                0x6
#define _STATUS_PA1_SIZE                                    0x1
#define _STATUS_PA1_LENGTH                                  0x1
#define _STATUS_PA1_MASK                                    0x40
#define _STATUS_RBWUF_POSN                                  0x7
#define _STATUS_RBWUF_POSITION                              0x7
#define _STATUS_RBWUF_SIZE                                  0x1
#define _STATUS_RBWUF_LENGTH                                0x1
#define _STATUS_RBWUF_MASK                                  0x80
#define _STATUS_CARRY_POSN                                  0x0
#define _STATUS_CARRY_POSITION                              0x0
#define _STATUS_CARRY_SIZE                                  0x1
#define _STATUS_CARRY_LENGTH                                0x1
#define _STATUS_CARRY_MASK                                  0x1
#define _STATUS_ZERO_POSN                                   0x2
#define _STATUS_ZERO_POSITION                               0x2
#define _STATUS_ZERO_SIZE                                   0x1
#define _STATUS_ZERO_LENGTH                                 0x1
#define _STATUS_ZERO_MASK                                   0x4

// Register: FSR
#define FSR FSR
extern volatile unsigned char           FSR                 __at(0x004);
#ifndef _LIB_BUILD
asm("FSR equ 04h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR                    :8;
    };
} FSRbits_t;
extern volatile FSRbits_t FSRbits __at(0x004);
// bitfield macros
#define _FSR_FSR_POSN                                       0x0
#define _FSR_FSR_POSITION                                   0x0
#define _FSR_FSR_SIZE                                       0x8
#define _FSR_FSR_LENGTH                                     0x8
#define _FSR_FSR_MASK                                       0xFF

// Register: OSCCAL
#define OSCCAL OSCCAL
extern volatile unsigned char           OSCCAL              __at(0x005);
#ifndef _LIB_BUILD
asm("OSCCAL equ 05h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned CAL                    :7;
    };
} OSCCALbits_t;
extern volatile OSCCALbits_t OSCCALbits __at(0x005);
// bitfield macros
#define _OSCCAL_CAL_POSN                                    0x1
#define _OSCCAL_CAL_POSITION                                0x1
#define _OSCCAL_CAL_SIZE                                    0x7
#define _OSCCAL_CAL_LENGTH                                  0x7
#define _OSCCAL_CAL_MASK                                    0xFE

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0x006);
#ifndef _LIB_BUILD
asm("PORTB equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0x006);
// bitfield macros
#define _PORTB_RB0_POSN                                     0x0
#define _PORTB_RB0_POSITION                                 0x0
#define _PORTB_RB0_SIZE                                     0x1
#define _PORTB_RB0_LENGTH                                   0x1
#define _PORTB_RB0_MASK                                     0x1
#define _PORTB_RB1_POSN                                     0x1
#define _PORTB_RB1_POSITION                                 0x1
#define _PORTB_RB1_SIZE                                     0x1
#define _PORTB_RB1_LENGTH                                   0x1
#define _PORTB_RB1_MASK                                     0x2
#define _PORTB_RB2_POSN                                     0x2
#define _PORTB_RB2_POSITION                                 0x2
#define _PORTB_RB2_SIZE                                     0x1
#define _PORTB_RB2_LENGTH                                   0x1
#define _PORTB_RB2_MASK                                     0x4
#define _PORTB_RB3_POSN                                     0x3
#define _PORTB_RB3_POSITION                                 0x3
#define _PORTB_RB3_SIZE                                     0x1
#define _PORTB_RB3_LENGTH                                   0x1
#define _PORTB_RB3_MASK                                     0x8
#define _PORTB_RB4_POSN                                     0x4
#define _PORTB_RB4_POSITION                                 0x4
#define _PORTB_RB4_SIZE                                     0x1
#define _PORTB_RB4_LENGTH                                   0x1
#define _PORTB_RB4_MASK                                     0x10
#define _PORTB_RB5_POSN                                     0x5
#define _PORTB_RB5_POSITION                                 0x5
#define _PORTB_RB5_SIZE                                     0x1
#define _PORTB_RB5_LENGTH                                   0x1
#define _PORTB_RB5_MASK                                     0x20

// Register: EECON
#define EECON EECON
extern volatile unsigned char           EECON               __at(0x021);
#ifndef _LIB_BUILD
asm("EECON equ 021h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
    };
} EECONbits_t;
extern volatile EECONbits_t EECONbits __at(0x021);
// bitfield macros
#define _EECON_RD_POSN                                      0x0
#define _EECON_RD_POSITION                                  0x0
#define _EECON_RD_SIZE                                      0x1
#define _EECON_RD_LENGTH                                    0x1
#define _EECON_RD_MASK                                      0x1
#define _EECON_WR_POSN                                      0x1
#define _EECON_WR_POSITION                                  0x1
#define _EECON_WR_SIZE                                      0x1
#define _EECON_WR_LENGTH                                    0x1
#define _EECON_WR_MASK                                      0x2
#define _EECON_WREN_POSN                                    0x2
#define _EECON_WREN_POSITION                                0x2
#define _EECON_WREN_SIZE                                    0x1
#define _EECON_WREN_LENGTH                                  0x1
#define _EECON_WREN_MASK                                    0x4
#define _EECON_WRERR_POSN                                   0x3
#define _EECON_WRERR_POSITION                               0x3
#define _EECON_WRERR_SIZE                                   0x1
#define _EECON_WRERR_LENGTH                                 0x1
#define _EECON_WRERR_MASK                                   0x8
#define _EECON_FREE_POSN                                    0x4
#define _EECON_FREE_POSITION                                0x4
#define _EECON_FREE_SIZE                                    0x1
#define _EECON_FREE_LENGTH                                  0x1
#define _EECON_FREE_MASK                                    0x10

// Register: EEDATA
#define EEDATA EEDATA
extern volatile unsigned char           EEDATA              __at(0x025);
#ifndef _LIB_BUILD
asm("EEDATA equ 025h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEDATA                 :8;
    };
} EEDATAbits_t;
extern volatile EEDATAbits_t EEDATAbits __at(0x025);
// bitfield macros
#define _EEDATA_EEDATA_POSN                                 0x0
#define _EEDATA_EEDATA_POSITION                             0x0
#define _EEDATA_EEDATA_SIZE                                 0x8
#define _EEDATA_EEDATA_LENGTH                               0x8
#define _EEDATA_EEDATA_MASK                                 0xFF

// Register: EEADR
#define EEADR EEADR
extern volatile unsigned char           EEADR               __at(0x026);
#ifndef _LIB_BUILD
asm("EEADR equ 026h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEADR                  :8;
    };
} EEADRbits_t;
extern volatile EEADRbits_t EEADRbits __at(0x026);
// bitfield macros
#define _EEADR_EEADR_POSN                                   0x0
#define _EEADR_EEADR_POSITION                               0x0
#define _EEADR_EEADR_SIZE                                   0x8
#define _EEADR_EEADR_LENGTH                                 0x8
#define _EEADR_EEADR_MASK                                   0xFF

// Register: OPTION
#define OPTION OPTION
extern volatile __control unsigned char OPTION              __at(0x000);

// Register: TRISB
#define TRISB TRISB
extern volatile __control unsigned char TRISB               __at(0x006);

/*
 * OPTION bits
 */
#define                                 PS                  0x7
#define                                 PSA                 0x8
#define                                 T0SE                0x10
#define                                 T0CS                0x20
#define                                 nRBPU               0x40
#define                                 nRBWU               0x80

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&01Fh)
#endif
#define _BIT_ACCESS(r,b) ___mkstr(BANKMASK(r)) "," ___mkstr(b)
#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr)&01FFh)
#endif
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// EECON<FREE>
extern volatile __bit                   FREE                __at(0x10C);	// @ (0x21 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON,4)
// STATUS<PA0>
extern volatile __bit                   PA0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 PA0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<PA1>
extern volatile __bit                   PA1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 PA1_bit             _BIT_ACCESS(STATUS,6)
// PORTB<RB0>
extern volatile __bit                   RB0                 __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTB,0)
// PORTB<RB1>
extern volatile __bit                   RB1                 __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTB,1)
// PORTB<RB2>
extern volatile __bit                   RB2                 __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTB,2)
// PORTB<RB3>
extern volatile __bit                   RB3                 __at(0x33);	// @ (0x6 * 8 + 3)
#define                                 RB3_bit             _BIT_ACCESS(PORTB,3)
// PORTB<RB4>
extern volatile __bit                   RB4                 __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTB,4)
// PORTB<RB5>
extern volatile __bit                   RB5                 __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTB,5)
// STATUS<RBWUF>
extern volatile __bit                   RBWUF               __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 RBWUF_bit           _BIT_ACCESS(STATUS,7)
// EECON<RD>
extern volatile __bit                   RD                  __at(0x108);	// @ (0x21 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON,0)
// EECON<WR>
extern volatile __bit                   WR                  __at(0x109);	// @ (0x21 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON,1)
// EECON<WREN>
extern volatile __bit                   WREN                __at(0x10A);	// @ (0x21 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON,2)
// EECON<WRERR>
extern volatile __bit                   WRERR               __at(0x10B);	// @ (0x21 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON,3)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC12F529T39A_H_
