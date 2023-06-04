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

#ifndef _MCV08A_H_
#define _MCV08A_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * MCV08A
 */
#ifndef _XC_H_
#warning Header file mcv08a.h included directly. Use #include <xc.h> instead.
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
        unsigned CWUF                   :1;
        unsigned GPWUF                  :1;
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
#define _STATUS_CWUF_POSN                                   0x6
#define _STATUS_CWUF_POSITION                               0x6
#define _STATUS_CWUF_SIZE                                   0x1
#define _STATUS_CWUF_LENGTH                                 0x1
#define _STATUS_CWUF_MASK                                   0x40
#define _STATUS_GPWUF_POSN                                  0x7
#define _STATUS_GPWUF_POSITION                              0x7
#define _STATUS_GPWUF_SIZE                                  0x1
#define _STATUS_GPWUF_LENGTH                                0x1
#define _STATUS_GPWUF_MASK                                  0x80
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
    struct {
        unsigned                        :1;
        unsigned CAL0                   :1;
        unsigned CAL1                   :1;
        unsigned CAL2                   :1;
        unsigned CAL3                   :1;
        unsigned CAL4                   :1;
        unsigned CAL5                   :1;
        unsigned CAL6                   :1;
    };
} OSCCALbits_t;
extern volatile OSCCALbits_t OSCCALbits __at(0x005);
// bitfield macros
#define _OSCCAL_CAL_POSN                                    0x1
#define _OSCCAL_CAL_POSITION                                0x1
#define _OSCCAL_CAL_SIZE                                    0x7
#define _OSCCAL_CAL_LENGTH                                  0x7
#define _OSCCAL_CAL_MASK                                    0xFE
#define _OSCCAL_CAL0_POSN                                   0x1
#define _OSCCAL_CAL0_POSITION                               0x1
#define _OSCCAL_CAL0_SIZE                                   0x1
#define _OSCCAL_CAL0_LENGTH                                 0x1
#define _OSCCAL_CAL0_MASK                                   0x2
#define _OSCCAL_CAL1_POSN                                   0x2
#define _OSCCAL_CAL1_POSITION                               0x2
#define _OSCCAL_CAL1_SIZE                                   0x1
#define _OSCCAL_CAL1_LENGTH                                 0x1
#define _OSCCAL_CAL1_MASK                                   0x4
#define _OSCCAL_CAL2_POSN                                   0x3
#define _OSCCAL_CAL2_POSITION                               0x3
#define _OSCCAL_CAL2_SIZE                                   0x1
#define _OSCCAL_CAL2_LENGTH                                 0x1
#define _OSCCAL_CAL2_MASK                                   0x8
#define _OSCCAL_CAL3_POSN                                   0x4
#define _OSCCAL_CAL3_POSITION                               0x4
#define _OSCCAL_CAL3_SIZE                                   0x1
#define _OSCCAL_CAL3_LENGTH                                 0x1
#define _OSCCAL_CAL3_MASK                                   0x10
#define _OSCCAL_CAL4_POSN                                   0x5
#define _OSCCAL_CAL4_POSITION                               0x5
#define _OSCCAL_CAL4_SIZE                                   0x1
#define _OSCCAL_CAL4_LENGTH                                 0x1
#define _OSCCAL_CAL4_MASK                                   0x20
#define _OSCCAL_CAL5_POSN                                   0x6
#define _OSCCAL_CAL5_POSITION                               0x6
#define _OSCCAL_CAL5_SIZE                                   0x1
#define _OSCCAL_CAL5_LENGTH                                 0x1
#define _OSCCAL_CAL5_MASK                                   0x40
#define _OSCCAL_CAL6_POSN                                   0x7
#define _OSCCAL_CAL6_POSITION                               0x7
#define _OSCCAL_CAL6_SIZE                                   0x1
#define _OSCCAL_CAL6_LENGTH                                 0x1
#define _OSCCAL_CAL6_MASK                                   0x80

// Register: GPIO
#define GPIO GPIO
extern volatile unsigned char           GPIO                __at(0x006);
#ifndef _LIB_BUILD
asm("GPIO equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned GP                     :6;
    };
    struct {
        unsigned GP0                    :1;
        unsigned GP1                    :1;
        unsigned GP2                    :1;
        unsigned GP3                    :1;
        unsigned GP4                    :1;
        unsigned GP5                    :1;
    };
} GPIObits_t;
extern volatile GPIObits_t GPIObits __at(0x006);
// bitfield macros
#define _GPIO_GP_POSN                                       0x0
#define _GPIO_GP_POSITION                                   0x0
#define _GPIO_GP_SIZE                                       0x6
#define _GPIO_GP_LENGTH                                     0x6
#define _GPIO_GP_MASK                                       0x3F
#define _GPIO_GP0_POSN                                      0x0
#define _GPIO_GP0_POSITION                                  0x0
#define _GPIO_GP0_SIZE                                      0x1
#define _GPIO_GP0_LENGTH                                    0x1
#define _GPIO_GP0_MASK                                      0x1
#define _GPIO_GP1_POSN                                      0x1
#define _GPIO_GP1_POSITION                                  0x1
#define _GPIO_GP1_SIZE                                      0x1
#define _GPIO_GP1_LENGTH                                    0x1
#define _GPIO_GP1_MASK                                      0x2
#define _GPIO_GP2_POSN                                      0x2
#define _GPIO_GP2_POSITION                                  0x2
#define _GPIO_GP2_SIZE                                      0x1
#define _GPIO_GP2_LENGTH                                    0x1
#define _GPIO_GP2_MASK                                      0x4
#define _GPIO_GP3_POSN                                      0x3
#define _GPIO_GP3_POSITION                                  0x3
#define _GPIO_GP3_SIZE                                      0x1
#define _GPIO_GP3_LENGTH                                    0x1
#define _GPIO_GP3_MASK                                      0x8
#define _GPIO_GP4_POSN                                      0x4
#define _GPIO_GP4_POSITION                                  0x4
#define _GPIO_GP4_SIZE                                      0x1
#define _GPIO_GP4_LENGTH                                    0x1
#define _GPIO_GP4_MASK                                      0x10
#define _GPIO_GP5_POSN                                      0x5
#define _GPIO_GP5_POSITION                                  0x5
#define _GPIO_GP5_SIZE                                      0x1
#define _GPIO_GP5_LENGTH                                    0x1
#define _GPIO_GP5_MASK                                      0x20

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x007);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nC1WU                  :1;
        unsigned C1PREF                 :1;
        unsigned C1NREF                 :1;
        unsigned C1ON                   :1;
        unsigned nC1T0CS                :1;
        unsigned C1POL                  :1;
        unsigned nC1OUTEN               :1;
        unsigned C1OUT                  :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits __at(0x007);
// bitfield macros
#define _CM1CON0_nC1WU_POSN                                 0x0
#define _CM1CON0_nC1WU_POSITION                             0x0
#define _CM1CON0_nC1WU_SIZE                                 0x1
#define _CM1CON0_nC1WU_LENGTH                               0x1
#define _CM1CON0_nC1WU_MASK                                 0x1
#define _CM1CON0_C1PREF_POSN                                0x1
#define _CM1CON0_C1PREF_POSITION                            0x1
#define _CM1CON0_C1PREF_SIZE                                0x1
#define _CM1CON0_C1PREF_LENGTH                              0x1
#define _CM1CON0_C1PREF_MASK                                0x2
#define _CM1CON0_C1NREF_POSN                                0x2
#define _CM1CON0_C1NREF_POSITION                            0x2
#define _CM1CON0_C1NREF_SIZE                                0x1
#define _CM1CON0_C1NREF_LENGTH                              0x1
#define _CM1CON0_C1NREF_MASK                                0x4
#define _CM1CON0_C1ON_POSN                                  0x3
#define _CM1CON0_C1ON_POSITION                              0x3
#define _CM1CON0_C1ON_SIZE                                  0x1
#define _CM1CON0_C1ON_LENGTH                                0x1
#define _CM1CON0_C1ON_MASK                                  0x8
#define _CM1CON0_nC1T0CS_POSN                               0x4
#define _CM1CON0_nC1T0CS_POSITION                           0x4
#define _CM1CON0_nC1T0CS_SIZE                               0x1
#define _CM1CON0_nC1T0CS_LENGTH                             0x1
#define _CM1CON0_nC1T0CS_MASK                               0x10
#define _CM1CON0_C1POL_POSN                                 0x5
#define _CM1CON0_C1POL_POSITION                             0x5
#define _CM1CON0_C1POL_SIZE                                 0x1
#define _CM1CON0_C1POL_LENGTH                               0x1
#define _CM1CON0_C1POL_MASK                                 0x20
#define _CM1CON0_nC1OUTEN_POSN                              0x6
#define _CM1CON0_nC1OUTEN_POSITION                          0x6
#define _CM1CON0_nC1OUTEN_SIZE                              0x1
#define _CM1CON0_nC1OUTEN_LENGTH                            0x1
#define _CM1CON0_nC1OUTEN_MASK                              0x40
#define _CM1CON0_C1OUT_POSN                                 0x7
#define _CM1CON0_C1OUT_POSITION                             0x7
#define _CM1CON0_C1OUT_SIZE                                 0x1
#define _CM1CON0_C1OUT_LENGTH                               0x1
#define _CM1CON0_C1OUT_MASK                                 0x80

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x008);
#ifndef _LIB_BUILD
asm("ADCON0 equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :2;
        unsigned ADCS                   :2;
        unsigned ANS                    :2;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x008);
// bitfield macros
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_GO_nDONE_POSN                               0x1
#define _ADCON0_GO_nDONE_POSITION                           0x1
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x2
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x2
#define _ADCON0_CHS_LENGTH                                  0x2
#define _ADCON0_CHS_MASK                                    0xC
#define _ADCON0_ADCS_POSN                                   0x4
#define _ADCON0_ADCS_POSITION                               0x4
#define _ADCON0_ADCS_SIZE                                   0x2
#define _ADCON0_ADCS_LENGTH                                 0x2
#define _ADCON0_ADCS_MASK                                   0x30
#define _ADCON0_ANS_POSN                                    0x6
#define _ADCON0_ANS_POSITION                                0x6
#define _ADCON0_ANS_SIZE                                    0x2
#define _ADCON0_ANS_LENGTH                                  0x2
#define _ADCON0_ANS_MASK                                    0xC0
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_CHS0_POSN                                   0x2
#define _ADCON0_CHS0_POSITION                               0x2
#define _ADCON0_CHS0_SIZE                                   0x1
#define _ADCON0_CHS0_LENGTH                                 0x1
#define _ADCON0_CHS0_MASK                                   0x4
#define _ADCON0_CHS1_POSN                                   0x3
#define _ADCON0_CHS1_POSITION                               0x3
#define _ADCON0_CHS1_SIZE                                   0x1
#define _ADCON0_CHS1_LENGTH                                 0x1
#define _ADCON0_CHS1_MASK                                   0x8
#define _ADCON0_ADCS0_POSN                                  0x4
#define _ADCON0_ADCS0_POSITION                              0x4
#define _ADCON0_ADCS0_SIZE                                  0x1
#define _ADCON0_ADCS0_LENGTH                                0x1
#define _ADCON0_ADCS0_MASK                                  0x10
#define _ADCON0_ADCS1_POSN                                  0x5
#define _ADCON0_ADCS1_POSITION                              0x5
#define _ADCON0_ADCS1_SIZE                                  0x1
#define _ADCON0_ADCS1_LENGTH                                0x1
#define _ADCON0_ADCS1_MASK                                  0x20
#define _ADCON0_ANS0_POSN                                   0x6
#define _ADCON0_ANS0_POSITION                               0x6
#define _ADCON0_ANS0_SIZE                                   0x1
#define _ADCON0_ANS0_LENGTH                                 0x1
#define _ADCON0_ANS0_MASK                                   0x40
#define _ADCON0_ANS1_POSN                                   0x7
#define _ADCON0_ANS1_POSITION                               0x7
#define _ADCON0_ANS1_SIZE                                   0x1
#define _ADCON0_ANS1_LENGTH                                 0x1
#define _ADCON0_ANS1_MASK                                   0x80
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned char           ADRES               __at(0x009);
#ifndef _LIB_BUILD
asm("ADRES equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRES                  :8;
    };
} ADRESbits_t;
extern volatile ADRESbits_t ADRESbits __at(0x009);
// bitfield macros
#define _ADRES_ADRES_POSN                                   0x0
#define _ADRES_ADRES_POSITION                               0x0
#define _ADRES_ADRES_SIZE                                   0x8
#define _ADRES_ADRES_LENGTH                                 0x8
#define _ADRES_ADRES_MASK                                   0xFF

// Register: OPTION
#define OPTION OPTION
extern volatile __control unsigned char OPTION              __at(0x000);

// Register: TRIS
#define TRIS TRIS
extern volatile __control unsigned char TRIS                __at(0x006);

// Register: TRISGPIO
#define TRISGPIO TRISGPIO
extern volatile __control unsigned char TRISGPIO            __at(0x006);

/*
 * OPTION bits
 */
#define                                 PS                  0x7
#define                                 PSA                 0x8
#define                                 T0SE                0x10
#define                                 T0CS                0x20
#define                                 nGPPU               0x40
#define                                 nGPWU               0x80
#define                                 PS0                 0x1
#define                                 PS1                 0x2
#define                                 PS2                 0x4

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
// ADCON0<ADCS0>
extern volatile __bit                   ADCS0               __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON0,4)
// ADCON0<ADCS1>
extern volatile __bit                   ADCS1               __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON0,5)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ADCON0<ANS0>
extern volatile __bit                   ANS0                __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 ANS0_bit            _BIT_ACCESS(ADCON0,6)
// ADCON0<ANS1>
extern volatile __bit                   ANS1                __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 ANS1_bit            _BIT_ACCESS(ADCON0,7)
// CM1CON0<C1NREF>
extern volatile __bit                   C1NREF              __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 C1NREF_bit          _BIT_ACCESS(CM1CON0,2)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,3)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1PREF>
extern volatile __bit                   C1PREF              __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 C1PREF_bit          _BIT_ACCESS(CM1CON0,1)
// OSCCAL<CAL0>
extern volatile __bit                   CAL0                __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 CAL0_bit            _BIT_ACCESS(OSCCAL,1)
// OSCCAL<CAL1>
extern volatile __bit                   CAL1                __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 CAL1_bit            _BIT_ACCESS(OSCCAL,2)
// OSCCAL<CAL2>
extern volatile __bit                   CAL2                __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 CAL2_bit            _BIT_ACCESS(OSCCAL,3)
// OSCCAL<CAL3>
extern volatile __bit                   CAL3                __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 CAL3_bit            _BIT_ACCESS(OSCCAL,4)
// OSCCAL<CAL4>
extern volatile __bit                   CAL4                __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 CAL4_bit            _BIT_ACCESS(OSCCAL,5)
// OSCCAL<CAL5>
extern volatile __bit                   CAL5                __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 CAL5_bit            _BIT_ACCESS(OSCCAL,6)
// OSCCAL<CAL6>
extern volatile __bit                   CAL6                __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 CAL6_bit            _BIT_ACCESS(OSCCAL,7)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// STATUS<CWUF>
extern volatile __bit                   CWUF                __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 CWUF_bit            _BIT_ACCESS(STATUS,6)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// GPIO<GP0>
extern volatile __bit                   GP0                 __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 GP0_bit             _BIT_ACCESS(GPIO,0)
// GPIO<GP1>
extern volatile __bit                   GP1                 __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 GP1_bit             _BIT_ACCESS(GPIO,1)
// GPIO<GP2>
extern volatile __bit                   GP2                 __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 GP2_bit             _BIT_ACCESS(GPIO,2)
// GPIO<GP3>
extern volatile __bit                   GP3                 __at(0x33);	// @ (0x6 * 8 + 3)
#define                                 GP3_bit             _BIT_ACCESS(GPIO,3)
// GPIO<GP4>
extern volatile __bit                   GP4                 __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 GP4_bit             _BIT_ACCESS(GPIO,4)
// GPIO<GP5>
extern volatile __bit                   GP5                 __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 GP5_bit             _BIT_ACCESS(GPIO,5)
// STATUS<GPWUF>
extern volatile __bit                   GPWUF               __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 GPWUF_bit           _BIT_ACCESS(STATUS,7)
// STATUS<PA0>
extern volatile __bit                   PA0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 PA0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// CM1CON0<nC1OUTEN>
extern volatile __bit                   nC1OUTEN            __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 nC1OUTEN_bit        _BIT_ACCESS(CM1CON0,6)
// CM1CON0<nC1T0CS>
extern volatile __bit                   nC1T0CS             __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 nC1T0CS_bit         _BIT_ACCESS(CM1CON0,4)
// CM1CON0<nC1WU>
extern volatile __bit                   nC1WU               __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 nC1WU_bit           _BIT_ACCESS(CM1CON0,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,1)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _MCV08A_H_
