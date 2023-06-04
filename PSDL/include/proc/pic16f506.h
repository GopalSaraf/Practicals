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

#ifndef _PIC16F506_H_
#define _PIC16F506_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F506
 */
#ifndef _XC_H_
#warning Header file pic16f506.h included directly. Use #include <xc.h> instead.
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
#define _STATUS_CWUF_POSN                                   0x6
#define _STATUS_CWUF_POSITION                               0x6
#define _STATUS_CWUF_SIZE                                   0x1
#define _STATUS_CWUF_LENGTH                                 0x1
#define _STATUS_CWUF_MASK                                   0x40
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

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0x006);
#ifndef _LIB_BUILD
asm("PORTB equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB                     :6;
    };
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
#define _PORTB_RB_POSN                                      0x0
#define _PORTB_RB_POSITION                                  0x0
#define _PORTB_RB_SIZE                                      0x6
#define _PORTB_RB_LENGTH                                    0x6
#define _PORTB_RB_MASK                                      0x3F
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

// Register: PORTC
#define PORTC PORTC
extern volatile unsigned char           PORTC               __at(0x007);
#ifndef _LIB_BUILD
asm("PORTC equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC                     :6;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0x007);
// bitfield macros
#define _PORTC_RC_POSN                                      0x0
#define _PORTC_RC_POSITION                                  0x0
#define _PORTC_RC_SIZE                                      0x6
#define _PORTC_RC_LENGTH                                    0x6
#define _PORTC_RC_MASK                                      0x3F
#define _PORTC_RC0_POSN                                     0x0
#define _PORTC_RC0_POSITION                                 0x0
#define _PORTC_RC0_SIZE                                     0x1
#define _PORTC_RC0_LENGTH                                   0x1
#define _PORTC_RC0_MASK                                     0x1
#define _PORTC_RC1_POSN                                     0x1
#define _PORTC_RC1_POSITION                                 0x1
#define _PORTC_RC1_SIZE                                     0x1
#define _PORTC_RC1_LENGTH                                   0x1
#define _PORTC_RC1_MASK                                     0x2
#define _PORTC_RC2_POSN                                     0x2
#define _PORTC_RC2_POSITION                                 0x2
#define _PORTC_RC2_SIZE                                     0x1
#define _PORTC_RC2_LENGTH                                   0x1
#define _PORTC_RC2_MASK                                     0x4
#define _PORTC_RC3_POSN                                     0x3
#define _PORTC_RC3_POSITION                                 0x3
#define _PORTC_RC3_SIZE                                     0x1
#define _PORTC_RC3_LENGTH                                   0x1
#define _PORTC_RC3_MASK                                     0x8
#define _PORTC_RC4_POSN                                     0x4
#define _PORTC_RC4_POSITION                                 0x4
#define _PORTC_RC4_SIZE                                     0x1
#define _PORTC_RC4_LENGTH                                   0x1
#define _PORTC_RC4_MASK                                     0x10
#define _PORTC_RC5_POSN                                     0x5
#define _PORTC_RC5_POSITION                                 0x5
#define _PORTC_RC5_SIZE                                     0x1
#define _PORTC_RC5_LENGTH                                   0x1
#define _PORTC_RC5_MASK                                     0x20

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x008);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 08h");
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
extern volatile CM1CON0bits_t CM1CON0bits __at(0x008);
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
extern volatile unsigned char           ADCON0              __at(0x009);
#ifndef _LIB_BUILD
asm("ADCON0 equ 09h");
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
extern volatile ADCON0bits_t ADCON0bits __at(0x009);
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
extern volatile unsigned char           ADRES               __at(0x00A);
#ifndef _LIB_BUILD
asm("ADRES equ 0Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRES                  :8;
    };
} ADRESbits_t;
extern volatile ADRESbits_t ADRESbits __at(0x00A);
// bitfield macros
#define _ADRES_ADRES_POSN                                   0x0
#define _ADRES_ADRES_POSITION                               0x0
#define _ADRES_ADRES_SIZE                                   0x8
#define _ADRES_ADRES_LENGTH                                 0x8
#define _ADRES_ADRES_MASK                                   0xFF

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0x00B);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nC2WU                  :1;
        unsigned C2PREF1                :1;
        unsigned C2NREF                 :1;
        unsigned C2ON                   :1;
        unsigned C2PREF2                :1;
        unsigned C2POL                  :1;
        unsigned nC2OUTEN               :1;
        unsigned C2OUT                  :1;
    };
} CM2CON0bits_t;
extern volatile CM2CON0bits_t CM2CON0bits __at(0x00B);
// bitfield macros
#define _CM2CON0_nC2WU_POSN                                 0x0
#define _CM2CON0_nC2WU_POSITION                             0x0
#define _CM2CON0_nC2WU_SIZE                                 0x1
#define _CM2CON0_nC2WU_LENGTH                               0x1
#define _CM2CON0_nC2WU_MASK                                 0x1
#define _CM2CON0_C2PREF1_POSN                               0x1
#define _CM2CON0_C2PREF1_POSITION                           0x1
#define _CM2CON0_C2PREF1_SIZE                               0x1
#define _CM2CON0_C2PREF1_LENGTH                             0x1
#define _CM2CON0_C2PREF1_MASK                               0x2
#define _CM2CON0_C2NREF_POSN                                0x2
#define _CM2CON0_C2NREF_POSITION                            0x2
#define _CM2CON0_C2NREF_SIZE                                0x1
#define _CM2CON0_C2NREF_LENGTH                              0x1
#define _CM2CON0_C2NREF_MASK                                0x4
#define _CM2CON0_C2ON_POSN                                  0x3
#define _CM2CON0_C2ON_POSITION                              0x3
#define _CM2CON0_C2ON_SIZE                                  0x1
#define _CM2CON0_C2ON_LENGTH                                0x1
#define _CM2CON0_C2ON_MASK                                  0x8
#define _CM2CON0_C2PREF2_POSN                               0x4
#define _CM2CON0_C2PREF2_POSITION                           0x4
#define _CM2CON0_C2PREF2_SIZE                               0x1
#define _CM2CON0_C2PREF2_LENGTH                             0x1
#define _CM2CON0_C2PREF2_MASK                               0x10
#define _CM2CON0_C2POL_POSN                                 0x5
#define _CM2CON0_C2POL_POSITION                             0x5
#define _CM2CON0_C2POL_SIZE                                 0x1
#define _CM2CON0_C2POL_LENGTH                               0x1
#define _CM2CON0_C2POL_MASK                                 0x20
#define _CM2CON0_nC2OUTEN_POSN                              0x6
#define _CM2CON0_nC2OUTEN_POSITION                          0x6
#define _CM2CON0_nC2OUTEN_SIZE                              0x1
#define _CM2CON0_nC2OUTEN_LENGTH                            0x1
#define _CM2CON0_nC2OUTEN_MASK                              0x40
#define _CM2CON0_C2OUT_POSN                                 0x7
#define _CM2CON0_C2OUT_POSITION                             0x7
#define _CM2CON0_C2OUT_SIZE                                 0x1
#define _CM2CON0_C2OUT_LENGTH                               0x1
#define _CM2CON0_C2OUT_MASK                                 0x80

// Register: VRCON
#define VRCON VRCON
extern volatile unsigned char           VRCON               __at(0x00C);
#ifndef _LIB_BUILD
asm("VRCON equ 0Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VR                     :4;
        unsigned                        :1;
        unsigned VRR                    :1;
        unsigned VROE                   :1;
        unsigned VREN                   :1;
    };
    struct {
        unsigned VR0                    :1;
        unsigned VR1                    :1;
        unsigned VR2                    :1;
        unsigned VR3                    :1;
    };
} VRCONbits_t;
extern volatile VRCONbits_t VRCONbits __at(0x00C);
// bitfield macros
#define _VRCON_VR_POSN                                      0x0
#define _VRCON_VR_POSITION                                  0x0
#define _VRCON_VR_SIZE                                      0x4
#define _VRCON_VR_LENGTH                                    0x4
#define _VRCON_VR_MASK                                      0xF
#define _VRCON_VRR_POSN                                     0x5
#define _VRCON_VRR_POSITION                                 0x5
#define _VRCON_VRR_SIZE                                     0x1
#define _VRCON_VRR_LENGTH                                   0x1
#define _VRCON_VRR_MASK                                     0x20
#define _VRCON_VROE_POSN                                    0x6
#define _VRCON_VROE_POSITION                                0x6
#define _VRCON_VROE_SIZE                                    0x1
#define _VRCON_VROE_LENGTH                                  0x1
#define _VRCON_VROE_MASK                                    0x40
#define _VRCON_VREN_POSN                                    0x7
#define _VRCON_VREN_POSITION                                0x7
#define _VRCON_VREN_SIZE                                    0x1
#define _VRCON_VREN_LENGTH                                  0x1
#define _VRCON_VREN_MASK                                    0x80
#define _VRCON_VR0_POSN                                     0x0
#define _VRCON_VR0_POSITION                                 0x0
#define _VRCON_VR0_SIZE                                     0x1
#define _VRCON_VR0_LENGTH                                   0x1
#define _VRCON_VR0_MASK                                     0x1
#define _VRCON_VR1_POSN                                     0x1
#define _VRCON_VR1_POSITION                                 0x1
#define _VRCON_VR1_SIZE                                     0x1
#define _VRCON_VR1_LENGTH                                   0x1
#define _VRCON_VR1_MASK                                     0x2
#define _VRCON_VR2_POSN                                     0x2
#define _VRCON_VR2_POSITION                                 0x2
#define _VRCON_VR2_SIZE                                     0x1
#define _VRCON_VR2_LENGTH                                   0x1
#define _VRCON_VR2_MASK                                     0x4
#define _VRCON_VR3_POSN                                     0x3
#define _VRCON_VR3_POSITION                                 0x3
#define _VRCON_VR3_SIZE                                     0x1
#define _VRCON_VR3_LENGTH                                   0x1
#define _VRCON_VR3_MASK                                     0x8

// Register: OPTION
#define OPTION OPTION
extern volatile __control unsigned char OPTION              __at(0x000);

// Register: TRISB
#define TRISB TRISB
extern volatile __control unsigned char TRISB               __at(0x006);

// Register: TRISC
#define TRISC TRISC
extern volatile __control unsigned char TRISC               __at(0x007);

/*
 * OPTION bits
 */
#define                                 PS                  0x7
#define                                 PSA                 0x8
#define                                 T0SE                0x10
#define                                 T0CS                0x20
#define                                 nRBPU               0x40
#define                                 nRBWU               0x80
#define                                 PS0                 0x1
#define                                 PS1                 0x2
#define                                 PS2                 0x4
#define                                 nGPPU               0x40
#define                                 nGPWU               0x80

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
extern volatile __bit                   ADCS0               __at(0x4C);	// @ (0x9 * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON0,4)
// ADCON0<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4D);	// @ (0x9 * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON0,5)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ADCON0<ANS0>
extern volatile __bit                   ANS0                __at(0x4E);	// @ (0x9 * 8 + 6)
#define                                 ANS0_bit            _BIT_ACCESS(ADCON0,6)
// ADCON0<ANS1>
extern volatile __bit                   ANS1                __at(0x4F);	// @ (0x9 * 8 + 7)
#define                                 ANS1_bit            _BIT_ACCESS(ADCON0,7)
// CM1CON0<C1NREF>
extern volatile __bit                   C1NREF              __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 C1NREF_bit          _BIT_ACCESS(CM1CON0,2)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,3)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1PREF>
extern volatile __bit                   C1PREF              __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 C1PREF_bit          _BIT_ACCESS(CM1CON0,1)
// CM2CON0<C2NREF>
extern volatile __bit                   C2NREF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 C2NREF_bit          _BIT_ACCESS(CM2CON0,2)
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 C2ON_bit            _BIT_ACCESS(CM2CON0,3)
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 C2OUT_bit           _BIT_ACCESS(CM2CON0,7)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,5)
// CM2CON0<C2PREF1>
extern volatile __bit                   C2PREF1             __at(0x59);	// @ (0xB * 8 + 1)
#define                                 C2PREF1_bit         _BIT_ACCESS(CM2CON0,1)
// CM2CON0<C2PREF2>
extern volatile __bit                   C2PREF2             __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 C2PREF2_bit         _BIT_ACCESS(CM2CON0,4)
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
extern volatile __bit                   CHS0                __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0x4B);	// @ (0x9 * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// STATUS<CWUF>
extern volatile __bit                   CWUF                __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 CWUF_bit            _BIT_ACCESS(STATUS,6)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// STATUS<PA0>
extern volatile __bit                   PA0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 PA0_bit             _BIT_ACCESS(STATUS,5)
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
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// VRCON<VR0>
extern volatile __bit                   VR0                 __at(0x60);	// @ (0xC * 8 + 0)
#define                                 VR0_bit             _BIT_ACCESS(VRCON,0)
// VRCON<VR1>
extern volatile __bit                   VR1                 __at(0x61);	// @ (0xC * 8 + 1)
#define                                 VR1_bit             _BIT_ACCESS(VRCON,1)
// VRCON<VR2>
extern volatile __bit                   VR2                 __at(0x62);	// @ (0xC * 8 + 2)
#define                                 VR2_bit             _BIT_ACCESS(VRCON,2)
// VRCON<VR3>
extern volatile __bit                   VR3                 __at(0x63);	// @ (0xC * 8 + 3)
#define                                 VR3_bit             _BIT_ACCESS(VRCON,3)
// VRCON<VREN>
extern volatile __bit                   VREN                __at(0x67);	// @ (0xC * 8 + 7)
#define                                 VREN_bit            _BIT_ACCESS(VRCON,7)
// VRCON<VROE>
extern volatile __bit                   VROE                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 VROE_bit            _BIT_ACCESS(VRCON,6)
// VRCON<VRR>
extern volatile __bit                   VRR                 __at(0x65);	// @ (0xC * 8 + 5)
#define                                 VRR_bit             _BIT_ACCESS(VRCON,5)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// CM1CON0<nC1OUTEN>
extern volatile __bit                   nC1OUTEN            __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 nC1OUTEN_bit        _BIT_ACCESS(CM1CON0,6)
// CM1CON0<nC1T0CS>
extern volatile __bit                   nC1T0CS             __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 nC1T0CS_bit         _BIT_ACCESS(CM1CON0,4)
// CM1CON0<nC1WU>
extern volatile __bit                   nC1WU               __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 nC1WU_bit           _BIT_ACCESS(CM1CON0,0)
// CM2CON0<nC2OUTEN>
extern volatile __bit                   nC2OUTEN            __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 nC2OUTEN_bit        _BIT_ACCESS(CM2CON0,6)
// CM2CON0<nC2WU>
extern volatile __bit                   nC2WU               __at(0x58);	// @ (0xB * 8 + 0)
#define                                 nC2WU_bit           _BIT_ACCESS(CM2CON0,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,1)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC16F506_H_
