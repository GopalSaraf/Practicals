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

#ifndef _PIC16F527_H_
#define _PIC16F527_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F527
 */
#ifndef _XC_H_
#warning Header file pic16f527.h included directly. Use #include <xc.h> instead.
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
        unsigned FSR                    :7;
    };
} FSRbits_t;
extern volatile FSRbits_t FSRbits __at(0x004);
// bitfield macros
#define _FSR_FSR_POSN                                       0x0
#define _FSR_FSR_POSITION                                   0x0
#define _FSR_FSR_SIZE                                       0x7
#define _FSR_FSR_LENGTH                                     0x7
#define _FSR_FSR_MASK                                       0x7F

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

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0x006);
#ifndef _LIB_BUILD
asm("PORTA equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA                     :6;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __at(0x006);
// bitfield macros
#define _PORTA_RA_POSN                                      0x0
#define _PORTA_RA_POSITION                                  0x0
#define _PORTA_RA_SIZE                                      0x6
#define _PORTA_RA_LENGTH                                    0x6
#define _PORTA_RA_MASK                                      0x3F
#define _PORTA_RA0_POSN                                     0x0
#define _PORTA_RA0_POSITION                                 0x0
#define _PORTA_RA0_SIZE                                     0x1
#define _PORTA_RA0_LENGTH                                   0x1
#define _PORTA_RA0_MASK                                     0x1
#define _PORTA_RA1_POSN                                     0x1
#define _PORTA_RA1_POSITION                                 0x1
#define _PORTA_RA1_SIZE                                     0x1
#define _PORTA_RA1_LENGTH                                   0x1
#define _PORTA_RA1_MASK                                     0x2
#define _PORTA_RA2_POSN                                     0x2
#define _PORTA_RA2_POSITION                                 0x2
#define _PORTA_RA2_SIZE                                     0x1
#define _PORTA_RA2_LENGTH                                   0x1
#define _PORTA_RA2_MASK                                     0x4
#define _PORTA_RA3_POSN                                     0x3
#define _PORTA_RA3_POSITION                                 0x3
#define _PORTA_RA3_SIZE                                     0x1
#define _PORTA_RA3_LENGTH                                   0x1
#define _PORTA_RA3_MASK                                     0x8
#define _PORTA_RA4_POSN                                     0x4
#define _PORTA_RA4_POSITION                                 0x4
#define _PORTA_RA4_SIZE                                     0x1
#define _PORTA_RA4_LENGTH                                   0x1
#define _PORTA_RA4_MASK                                     0x10
#define _PORTA_RA5_POSN                                     0x5
#define _PORTA_RA5_POSITION                                 0x5
#define _PORTA_RA5_SIZE                                     0x1
#define _PORTA_RA5_LENGTH                                   0x1
#define _PORTA_RA5_MASK                                     0x20

// Register: PORTB
#define PORTB PORTB
extern volatile unsigned char           PORTB               __at(0x007);
#ifndef _LIB_BUILD
asm("PORTB equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned RB                     :4;
    };
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0x007);
// bitfield macros
#define _PORTB_RB_POSN                                      0x4
#define _PORTB_RB_POSITION                                  0x4
#define _PORTB_RB_SIZE                                      0x4
#define _PORTB_RB_LENGTH                                    0x4
#define _PORTB_RB_MASK                                      0xF0
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
#define _PORTB_RB6_POSN                                     0x6
#define _PORTB_RB6_POSITION                                 0x6
#define _PORTB_RB6_SIZE                                     0x1
#define _PORTB_RB6_LENGTH                                   0x1
#define _PORTB_RB6_MASK                                     0x40
#define _PORTB_RB7_POSN                                     0x7
#define _PORTB_RB7_POSITION                                 0x7
#define _PORTB_RB7_SIZE                                     0x1
#define _PORTB_RB7_LENGTH                                   0x1
#define _PORTB_RB7_MASK                                     0x80

// Register: PORTC
#define PORTC PORTC
extern volatile unsigned char           PORTC               __at(0x008);
#ifndef _LIB_BUILD
asm("PORTC equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC                     :8;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0x008);
// bitfield macros
#define _PORTC_RC_POSN                                      0x0
#define _PORTC_RC_POSITION                                  0x0
#define _PORTC_RC_SIZE                                      0x8
#define _PORTC_RC_LENGTH                                    0x8
#define _PORTC_RC_MASK                                      0xFF
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
#define _PORTC_RC6_POSN                                     0x6
#define _PORTC_RC6_POSITION                                 0x6
#define _PORTC_RC6_SIZE                                     0x1
#define _PORTC_RC6_LENGTH                                   0x1
#define _PORTC_RC6_MASK                                     0x40
#define _PORTC_RC7_POSN                                     0x7
#define _PORTC_RC7_POSITION                                 0x7
#define _PORTC_RC7_SIZE                                     0x1
#define _PORTC_RC7_LENGTH                                   0x1
#define _PORTC_RC7_MASK                                     0x80

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
        unsigned CHS                    :4;
        unsigned ADCS                   :2;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_DONE               :1;
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
#define _ADCON0_CHS_SIZE                                    0x4
#define _ADCON0_CHS_LENGTH                                  0x4
#define _ADCON0_CHS_MASK                                    0x3C
#define _ADCON0_ADCS_POSN                                   0x6
#define _ADCON0_ADCS_POSITION                               0x6
#define _ADCON0_ADCS_SIZE                                   0x2
#define _ADCON0_ADCS_LENGTH                                 0x2
#define _ADCON0_ADCS_MASK                                   0xC0
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
#define _ADCON0_CHS2_POSN                                   0x4
#define _ADCON0_CHS2_POSITION                               0x4
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x10
#define _ADCON0_CHS3_POSN                                   0x5
#define _ADCON0_CHS3_POSITION                               0x5
#define _ADCON0_CHS3_SIZE                                   0x1
#define _ADCON0_CHS3_LENGTH                                 0x1
#define _ADCON0_CHS3_MASK                                   0x20
#define _ADCON0_ADCS0_POSN                                  0x6
#define _ADCON0_ADCS0_POSITION                              0x6
#define _ADCON0_ADCS0_SIZE                                  0x1
#define _ADCON0_ADCS0_LENGTH                                0x1
#define _ADCON0_ADCS0_MASK                                  0x40
#define _ADCON0_ADCS1_POSN                                  0x7
#define _ADCON0_ADCS1_POSITION                              0x7
#define _ADCON0_ADCS1_SIZE                                  0x1
#define _ADCON0_ADCS1_LENGTH                                0x1
#define _ADCON0_ADCS1_MASK                                  0x80
#define _ADCON0_NOT_DONE_POSN                               0x1
#define _ADCON0_NOT_DONE_POSITION                           0x1
#define _ADCON0_NOT_DONE_SIZE                               0x1
#define _ADCON0_NOT_DONE_LENGTH                             0x1
#define _ADCON0_NOT_DONE_MASK                               0x2

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
    struct {
        unsigned ADRES0                 :1;
        unsigned ADRES1                 :1;
        unsigned ADRES2                 :1;
        unsigned ADRES3                 :1;
        unsigned ADRES4                 :1;
        unsigned ADRES5                 :1;
        unsigned ADRES6                 :1;
        unsigned ADRES7                 :1;
    };
} ADRESbits_t;
extern volatile ADRESbits_t ADRESbits __at(0x00A);
// bitfield macros
#define _ADRES_ADRES_POSN                                   0x0
#define _ADRES_ADRES_POSITION                               0x0
#define _ADRES_ADRES_SIZE                                   0x8
#define _ADRES_ADRES_LENGTH                                 0x8
#define _ADRES_ADRES_MASK                                   0xFF
#define _ADRES_ADRES0_POSN                                  0x0
#define _ADRES_ADRES0_POSITION                              0x0
#define _ADRES_ADRES0_SIZE                                  0x1
#define _ADRES_ADRES0_LENGTH                                0x1
#define _ADRES_ADRES0_MASK                                  0x1
#define _ADRES_ADRES1_POSN                                  0x1
#define _ADRES_ADRES1_POSITION                              0x1
#define _ADRES_ADRES1_SIZE                                  0x1
#define _ADRES_ADRES1_LENGTH                                0x1
#define _ADRES_ADRES1_MASK                                  0x2
#define _ADRES_ADRES2_POSN                                  0x2
#define _ADRES_ADRES2_POSITION                              0x2
#define _ADRES_ADRES2_SIZE                                  0x1
#define _ADRES_ADRES2_LENGTH                                0x1
#define _ADRES_ADRES2_MASK                                  0x4
#define _ADRES_ADRES3_POSN                                  0x3
#define _ADRES_ADRES3_POSITION                              0x3
#define _ADRES_ADRES3_SIZE                                  0x1
#define _ADRES_ADRES3_LENGTH                                0x1
#define _ADRES_ADRES3_MASK                                  0x8
#define _ADRES_ADRES4_POSN                                  0x4
#define _ADRES_ADRES4_POSITION                              0x4
#define _ADRES_ADRES4_SIZE                                  0x1
#define _ADRES_ADRES4_LENGTH                                0x1
#define _ADRES_ADRES4_MASK                                  0x10
#define _ADRES_ADRES5_POSN                                  0x5
#define _ADRES_ADRES5_POSITION                              0x5
#define _ADRES_ADRES5_SIZE                                  0x1
#define _ADRES_ADRES5_LENGTH                                0x1
#define _ADRES_ADRES5_MASK                                  0x20
#define _ADRES_ADRES6_POSN                                  0x6
#define _ADRES_ADRES6_POSITION                              0x6
#define _ADRES_ADRES6_SIZE                                  0x1
#define _ADRES_ADRES6_LENGTH                                0x1
#define _ADRES_ADRES6_MASK                                  0x40
#define _ADRES_ADRES7_POSN                                  0x7
#define _ADRES_ADRES7_POSITION                              0x7
#define _ADRES_ADRES7_SIZE                                  0x1
#define _ADRES_ADRES7_LENGTH                                0x1
#define _ADRES_ADRES7_MASK                                  0x80

// Register: INTCON0
#define INTCON0 INTCON0
extern volatile unsigned char           INTCON0             __at(0x00B);
#ifndef _LIB_BUILD
asm("INTCON0 equ 0Bh");
#endif
// aliases
extern volatile unsigned char           INTCON              __at(0x00B);
#ifndef _LIB_BUILD
asm("INTCON equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned GIE                    :1;
        unsigned                        :3;
        unsigned RAIF                   :1;
        unsigned T0IF                   :1;
        unsigned CWIF                   :1;
        unsigned ADIF                   :1;
    };
} INTCON0bits_t;
extern volatile INTCON0bits_t INTCON0bits __at(0x00B);
// bitfield macros
#define _INTCON0_GIE_POSN                                   0x0
#define _INTCON0_GIE_POSITION                               0x0
#define _INTCON0_GIE_SIZE                                   0x1
#define _INTCON0_GIE_LENGTH                                 0x1
#define _INTCON0_GIE_MASK                                   0x1
#define _INTCON0_RAIF_POSN                                  0x4
#define _INTCON0_RAIF_POSITION                              0x4
#define _INTCON0_RAIF_SIZE                                  0x1
#define _INTCON0_RAIF_LENGTH                                0x1
#define _INTCON0_RAIF_MASK                                  0x10
#define _INTCON0_T0IF_POSN                                  0x5
#define _INTCON0_T0IF_POSITION                              0x5
#define _INTCON0_T0IF_SIZE                                  0x1
#define _INTCON0_T0IF_LENGTH                                0x1
#define _INTCON0_T0IF_MASK                                  0x20
#define _INTCON0_CWIF_POSN                                  0x6
#define _INTCON0_CWIF_POSITION                              0x6
#define _INTCON0_CWIF_SIZE                                  0x1
#define _INTCON0_CWIF_LENGTH                                0x1
#define _INTCON0_CWIF_MASK                                  0x40
#define _INTCON0_ADIF_POSN                                  0x7
#define _INTCON0_ADIF_POSITION                              0x7
#define _INTCON0_ADIF_SIZE                                  0x1
#define _INTCON0_ADIF_LENGTH                                0x1
#define _INTCON0_ADIF_MASK                                  0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned GIE                    :1;
        unsigned                        :3;
        unsigned RAIF                   :1;
        unsigned T0IF                   :1;
        unsigned CWIF                   :1;
        unsigned ADIF                   :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
// bitfield macros
#define _INTCON_GIE_POSN                                    0x0
#define _INTCON_GIE_POSITION                                0x0
#define _INTCON_GIE_SIZE                                    0x1
#define _INTCON_GIE_LENGTH                                  0x1
#define _INTCON_GIE_MASK                                    0x1
#define _INTCON_RAIF_POSN                                   0x4
#define _INTCON_RAIF_POSITION                               0x4
#define _INTCON_RAIF_SIZE                                   0x1
#define _INTCON_RAIF_LENGTH                                 0x1
#define _INTCON_RAIF_MASK                                   0x10
#define _INTCON_T0IF_POSN                                   0x5
#define _INTCON_T0IF_POSITION                               0x5
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x20
#define _INTCON_CWIF_POSN                                   0x6
#define _INTCON_CWIF_POSITION                               0x6
#define _INTCON_CWIF_SIZE                                   0x1
#define _INTCON_CWIF_LENGTH                                 0x1
#define _INTCON_CWIF_MASK                                   0x40
#define _INTCON_ADIF_POSN                                   0x7
#define _INTCON_ADIF_POSITION                               0x7
#define _INTCON_ADIF_SIZE                                   0x1
#define _INTCON_ADIF_LENGTH                                 0x1
#define _INTCON_ADIF_MASK                                   0x80

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
        unsigned EEADR                  :6;
    };
} EEADRbits_t;
extern volatile EEADRbits_t EEADRbits __at(0x026);
// bitfield macros
#define _EEADR_EEADR_POSN                                   0x0
#define _EEADR_EEADR_POSITION                               0x0
#define _EEADR_EEADR_SIZE                                   0x6
#define _EEADR_EEADR_LENGTH                                 0x6
#define _EEADR_EEADR_MASK                                   0x3F

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x027);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 027h");
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
extern volatile CM1CON0bits_t CM1CON0bits __at(0x027);
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

// Register: CM2CON0
#define CM2CON0 CM2CON0
extern volatile unsigned char           CM2CON0             __at(0x028);
#ifndef _LIB_BUILD
asm("CM2CON0 equ 028h");
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
extern volatile CM2CON0bits_t CM2CON0bits __at(0x028);
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
extern volatile unsigned char           VRCON               __at(0x029);
#ifndef _LIB_BUILD
asm("VRCON equ 029h");
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
extern volatile VRCONbits_t VRCONbits __at(0x029);
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

// Register: ANSEL
#define ANSEL ANSEL
extern volatile unsigned char           ANSEL               __at(0x02A);
#ifndef _LIB_BUILD
asm("ANSEL equ 02Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS0                   :1;
        unsigned ANS1                   :1;
        unsigned ANS2                   :1;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
        unsigned ANS5                   :1;
        unsigned ANS6                   :1;
        unsigned ANS7                   :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __at(0x02A);
// bitfield macros
#define _ANSEL_ANS0_POSN                                    0x0
#define _ANSEL_ANS0_POSITION                                0x0
#define _ANSEL_ANS0_SIZE                                    0x1
#define _ANSEL_ANS0_LENGTH                                  0x1
#define _ANSEL_ANS0_MASK                                    0x1
#define _ANSEL_ANS1_POSN                                    0x1
#define _ANSEL_ANS1_POSITION                                0x1
#define _ANSEL_ANS1_SIZE                                    0x1
#define _ANSEL_ANS1_LENGTH                                  0x1
#define _ANSEL_ANS1_MASK                                    0x2
#define _ANSEL_ANS2_POSN                                    0x2
#define _ANSEL_ANS2_POSITION                                0x2
#define _ANSEL_ANS2_SIZE                                    0x1
#define _ANSEL_ANS2_LENGTH                                  0x1
#define _ANSEL_ANS2_MASK                                    0x4
#define _ANSEL_ANS3_POSN                                    0x3
#define _ANSEL_ANS3_POSITION                                0x3
#define _ANSEL_ANS3_SIZE                                    0x1
#define _ANSEL_ANS3_LENGTH                                  0x1
#define _ANSEL_ANS3_MASK                                    0x8
#define _ANSEL_ANS4_POSN                                    0x4
#define _ANSEL_ANS4_POSITION                                0x4
#define _ANSEL_ANS4_SIZE                                    0x1
#define _ANSEL_ANS4_LENGTH                                  0x1
#define _ANSEL_ANS4_MASK                                    0x10
#define _ANSEL_ANS5_POSN                                    0x5
#define _ANSEL_ANS5_POSITION                                0x5
#define _ANSEL_ANS5_SIZE                                    0x1
#define _ANSEL_ANS5_LENGTH                                  0x1
#define _ANSEL_ANS5_MASK                                    0x20
#define _ANSEL_ANS6_POSN                                    0x6
#define _ANSEL_ANS6_POSITION                                0x6
#define _ANSEL_ANS6_SIZE                                    0x1
#define _ANSEL_ANS6_LENGTH                                  0x1
#define _ANSEL_ANS6_MASK                                    0x40
#define _ANSEL_ANS7_POSN                                    0x7
#define _ANSEL_ANS7_POSITION                                0x7
#define _ANSEL_ANS7_SIZE                                    0x1
#define _ANSEL_ANS7_LENGTH                                  0x1
#define _ANSEL_ANS7_MASK                                    0x80

// Register: IW
#define IW IW
extern volatile unsigned char           IW                  __at(0x061);
#ifndef _LIB_BUILD
asm("IW equ 061h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IWREG                  :8;
    };
} IWbits_t;
extern volatile IWbits_t IWbits __at(0x061);
// bitfield macros
#define _IW_IWREG_POSN                                      0x0
#define _IW_IWREG_POSITION                                  0x0
#define _IW_IWREG_SIZE                                      0x8
#define _IW_IWREG_LENGTH                                    0x8
#define _IW_IWREG_MASK                                      0xFF

// Register: INTCON1
#define INTCON1 INTCON1
extern volatile unsigned char           INTCON1             __at(0x065);
#ifndef _LIB_BUILD
asm("INTCON1 equ 065h");
#endif
// aliases
extern volatile unsigned char           INTIE_REG           __at(0x065);
#ifndef _LIB_BUILD
asm("INTIE_REG equ 065h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WUR                    :1;
        unsigned                        :3;
        unsigned RAIE                   :1;
        unsigned T0IE                   :1;
        unsigned CWIE                   :1;
        unsigned ADIE                   :1;
    };
} INTCON1bits_t;
extern volatile INTCON1bits_t INTCON1bits __at(0x065);
// bitfield macros
#define _INTCON1_WUR_POSN                                   0x0
#define _INTCON1_WUR_POSITION                               0x0
#define _INTCON1_WUR_SIZE                                   0x1
#define _INTCON1_WUR_LENGTH                                 0x1
#define _INTCON1_WUR_MASK                                   0x1
#define _INTCON1_RAIE_POSN                                  0x4
#define _INTCON1_RAIE_POSITION                              0x4
#define _INTCON1_RAIE_SIZE                                  0x1
#define _INTCON1_RAIE_LENGTH                                0x1
#define _INTCON1_RAIE_MASK                                  0x10
#define _INTCON1_T0IE_POSN                                  0x5
#define _INTCON1_T0IE_POSITION                              0x5
#define _INTCON1_T0IE_SIZE                                  0x1
#define _INTCON1_T0IE_LENGTH                                0x1
#define _INTCON1_T0IE_MASK                                  0x20
#define _INTCON1_CWIE_POSN                                  0x6
#define _INTCON1_CWIE_POSITION                              0x6
#define _INTCON1_CWIE_SIZE                                  0x1
#define _INTCON1_CWIE_LENGTH                                0x1
#define _INTCON1_CWIE_MASK                                  0x40
#define _INTCON1_ADIE_POSN                                  0x7
#define _INTCON1_ADIE_POSITION                              0x7
#define _INTCON1_ADIE_SIZE                                  0x1
#define _INTCON1_ADIE_LENGTH                                0x1
#define _INTCON1_ADIE_MASK                                  0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned WUR                    :1;
        unsigned                        :3;
        unsigned RAIE                   :1;
        unsigned T0IE                   :1;
        unsigned CWIE                   :1;
        unsigned ADIE                   :1;
    };
} INTIE_REGbits_t;
extern volatile INTIE_REGbits_t INTIE_REGbits __at(0x065);
// bitfield macros
#define _INTIE_REG_WUR_POSN                                 0x0
#define _INTIE_REG_WUR_POSITION                             0x0
#define _INTIE_REG_WUR_SIZE                                 0x1
#define _INTIE_REG_WUR_LENGTH                               0x1
#define _INTIE_REG_WUR_MASK                                 0x1
#define _INTIE_REG_RAIE_POSN                                0x4
#define _INTIE_REG_RAIE_POSITION                            0x4
#define _INTIE_REG_RAIE_SIZE                                0x1
#define _INTIE_REG_RAIE_LENGTH                              0x1
#define _INTIE_REG_RAIE_MASK                                0x10
#define _INTIE_REG_T0IE_POSN                                0x5
#define _INTIE_REG_T0IE_POSITION                            0x5
#define _INTIE_REG_T0IE_SIZE                                0x1
#define _INTIE_REG_T0IE_LENGTH                              0x1
#define _INTIE_REG_T0IE_MASK                                0x20
#define _INTIE_REG_CWIE_POSN                                0x6
#define _INTIE_REG_CWIE_POSITION                            0x6
#define _INTIE_REG_CWIE_SIZE                                0x1
#define _INTIE_REG_CWIE_LENGTH                              0x1
#define _INTIE_REG_CWIE_MASK                                0x40
#define _INTIE_REG_ADIE_POSN                                0x7
#define _INTIE_REG_ADIE_POSITION                            0x7
#define _INTIE_REG_ADIE_SIZE                                0x1
#define _INTIE_REG_ADIE_LENGTH                              0x1
#define _INTIE_REG_ADIE_MASK                                0x80

// Register: ISTATUS
#define ISTATUS ISTATUS
extern volatile unsigned char           ISTATUS             __at(0x066);
#ifndef _LIB_BUILD
asm("ISTATUS equ 066h");
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
    };
} ISTATUSbits_t;
extern volatile ISTATUSbits_t ISTATUSbits __at(0x066);
// bitfield macros
#define _ISTATUS_C_POSN                                     0x0
#define _ISTATUS_C_POSITION                                 0x0
#define _ISTATUS_C_SIZE                                     0x1
#define _ISTATUS_C_LENGTH                                   0x1
#define _ISTATUS_C_MASK                                     0x1
#define _ISTATUS_DC_POSN                                    0x1
#define _ISTATUS_DC_POSITION                                0x1
#define _ISTATUS_DC_SIZE                                    0x1
#define _ISTATUS_DC_LENGTH                                  0x1
#define _ISTATUS_DC_MASK                                    0x2
#define _ISTATUS_Z_POSN                                     0x2
#define _ISTATUS_Z_POSITION                                 0x2
#define _ISTATUS_Z_SIZE                                     0x1
#define _ISTATUS_Z_LENGTH                                   0x1
#define _ISTATUS_Z_MASK                                     0x4
#define _ISTATUS_nPD_POSN                                   0x3
#define _ISTATUS_nPD_POSITION                               0x3
#define _ISTATUS_nPD_SIZE                                   0x1
#define _ISTATUS_nPD_LENGTH                                 0x1
#define _ISTATUS_nPD_MASK                                   0x8
#define _ISTATUS_nTO_POSN                                   0x4
#define _ISTATUS_nTO_POSITION                               0x4
#define _ISTATUS_nTO_SIZE                                   0x1
#define _ISTATUS_nTO_LENGTH                                 0x1
#define _ISTATUS_nTO_MASK                                   0x10
#define _ISTATUS_PA0_POSN                                   0x5
#define _ISTATUS_PA0_POSITION                               0x5
#define _ISTATUS_PA0_SIZE                                   0x1
#define _ISTATUS_PA0_LENGTH                                 0x1
#define _ISTATUS_PA0_MASK                                   0x20
#define _ISTATUS_PA1_POSN                                   0x6
#define _ISTATUS_PA1_POSITION                               0x6
#define _ISTATUS_PA1_SIZE                                   0x1
#define _ISTATUS_PA1_LENGTH                                 0x1
#define _ISTATUS_PA1_MASK                                   0x40

// Register: IFSR
#define IFSR IFSR
extern volatile unsigned char           IFSR                __at(0x067);
#ifndef _LIB_BUILD
asm("IFSR equ 067h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IFSR                   :7;
    };
} IFSRbits_t;
extern volatile IFSRbits_t IFSRbits __at(0x067);
// bitfield macros
#define _IFSR_IFSR_POSN                                     0x0
#define _IFSR_IFSR_POSITION                                 0x0
#define _IFSR_IFSR_SIZE                                     0x7
#define _IFSR_IFSR_LENGTH                                   0x7
#define _IFSR_IFSR_MASK                                     0x7F

// Register: IBSR
#define IBSR IBSR
extern volatile unsigned char           IBSR                __at(0x068);
#ifndef _LIB_BUILD
asm("IBSR equ 068h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IBSR                   :2;
    };
} IBSRbits_t;
extern volatile IBSRbits_t IBSRbits __at(0x068);
// bitfield macros
#define _IBSR_IBSR_POSN                                     0x0
#define _IBSR_IBSR_POSITION                                 0x0
#define _IBSR_IBSR_SIZE                                     0x2
#define _IBSR_IBSR_LENGTH                                   0x2
#define _IBSR_IBSR_MASK                                     0x3

// Register: OPACON
#define OPACON OPACON
extern volatile unsigned char           OPACON              __at(0x069);
#ifndef _LIB_BUILD
asm("OPACON equ 069h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OPA1ON                 :1;
        unsigned OPA2ON                 :1;
    };
} OPACONbits_t;
extern volatile OPACONbits_t OPACONbits __at(0x069);
// bitfield macros
#define _OPACON_OPA1ON_POSN                                 0x0
#define _OPACON_OPA1ON_POSITION                             0x0
#define _OPACON_OPA1ON_SIZE                                 0x1
#define _OPACON_OPA1ON_LENGTH                               0x1
#define _OPACON_OPA1ON_MASK                                 0x1
#define _OPACON_OPA2ON_POSN                                 0x1
#define _OPACON_OPA2ON_POSITION                             0x1
#define _OPACON_OPA2ON_SIZE                                 0x1
#define _OPACON_OPA2ON_LENGTH                               0x1
#define _OPACON_OPA2ON_MASK                                 0x2

// Register: OPTION
#define OPTION OPTION
extern volatile __control unsigned char OPTION              __at(0x000);

// Register: TRISA
#define TRISA TRISA
extern volatile __control unsigned char TRISA               __at(0x006);

// Register: TRISB
#define TRISB TRISB
extern volatile __control unsigned char TRISB               __at(0x007);

// Register: TRISC
#define TRISC TRISC
extern volatile __control unsigned char TRISC               __at(0x008);

/*
 * OPTION bits
 */
#define                                 PS                  0x7
#define                                 PSA                 0x8
#define                                 T0SE                0x10
#define                                 T0CS                0x20
#define                                 nRAPU               0x40
#define                                 nRAWU               0x80
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
extern volatile __bit                   ADCS0               __at(0x4E);	// @ (0x9 * 8 + 6)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON0,6)
// ADCON0<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4F);	// @ (0x9 * 8 + 7)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON0,7)
// INTCON1<ADIE>
extern volatile __bit                   ADIE                __at(0x32F);	// @ (0x65 * 8 + 7)
#define                                 ADIE_bit            _BIT_ACCESS(INTCON1,7)
// INTCON0<ADIF>
extern volatile __bit                   ADIF                __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 ADIF_bit            _BIT_ACCESS(INTCON0,7)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// ADRES<ADRES0>
extern volatile __bit                   ADRES0              __at(0x50);	// @ (0xA * 8 + 0)
#define                                 ADRES0_bit          _BIT_ACCESS(ADRES,0)
// ADRES<ADRES1>
extern volatile __bit                   ADRES1              __at(0x51);	// @ (0xA * 8 + 1)
#define                                 ADRES1_bit          _BIT_ACCESS(ADRES,1)
// ADRES<ADRES2>
extern volatile __bit                   ADRES2              __at(0x52);	// @ (0xA * 8 + 2)
#define                                 ADRES2_bit          _BIT_ACCESS(ADRES,2)
// ADRES<ADRES3>
extern volatile __bit                   ADRES3              __at(0x53);	// @ (0xA * 8 + 3)
#define                                 ADRES3_bit          _BIT_ACCESS(ADRES,3)
// ADRES<ADRES4>
extern volatile __bit                   ADRES4              __at(0x54);	// @ (0xA * 8 + 4)
#define                                 ADRES4_bit          _BIT_ACCESS(ADRES,4)
// ADRES<ADRES5>
extern volatile __bit                   ADRES5              __at(0x55);	// @ (0xA * 8 + 5)
#define                                 ADRES5_bit          _BIT_ACCESS(ADRES,5)
// ADRES<ADRES6>
extern volatile __bit                   ADRES6              __at(0x56);	// @ (0xA * 8 + 6)
#define                                 ADRES6_bit          _BIT_ACCESS(ADRES,6)
// ADRES<ADRES7>
extern volatile __bit                   ADRES7              __at(0x57);	// @ (0xA * 8 + 7)
#define                                 ADRES7_bit          _BIT_ACCESS(ADRES,7)
// ANSEL<ANS0>
extern volatile __bit                   ANS0                __at(0x150);	// @ (0x2A * 8 + 0)
#define                                 ANS0_bit            _BIT_ACCESS(ANSEL,0)
// ANSEL<ANS1>
extern volatile __bit                   ANS1                __at(0x151);	// @ (0x2A * 8 + 1)
#define                                 ANS1_bit            _BIT_ACCESS(ANSEL,1)
// ANSEL<ANS2>
extern volatile __bit                   ANS2                __at(0x152);	// @ (0x2A * 8 + 2)
#define                                 ANS2_bit            _BIT_ACCESS(ANSEL,2)
// ANSEL<ANS3>
extern volatile __bit                   ANS3                __at(0x153);	// @ (0x2A * 8 + 3)
#define                                 ANS3_bit            _BIT_ACCESS(ANSEL,3)
// ANSEL<ANS4>
extern volatile __bit                   ANS4                __at(0x154);	// @ (0x2A * 8 + 4)
#define                                 ANS4_bit            _BIT_ACCESS(ANSEL,4)
// ANSEL<ANS5>
extern volatile __bit                   ANS5                __at(0x155);	// @ (0x2A * 8 + 5)
#define                                 ANS5_bit            _BIT_ACCESS(ANSEL,5)
// ANSEL<ANS6>
extern volatile __bit                   ANS6                __at(0x156);	// @ (0x2A * 8 + 6)
#define                                 ANS6_bit            _BIT_ACCESS(ANSEL,6)
// ANSEL<ANS7>
extern volatile __bit                   ANS7                __at(0x157);	// @ (0x2A * 8 + 7)
#define                                 ANS7_bit            _BIT_ACCESS(ANSEL,7)
// CM1CON0<C1NREF>
extern volatile __bit                   C1NREF              __at(0x13A);	// @ (0x27 * 8 + 2)
#define                                 C1NREF_bit          _BIT_ACCESS(CM1CON0,2)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x13B);	// @ (0x27 * 8 + 3)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,3)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x13F);	// @ (0x27 * 8 + 7)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x13D);	// @ (0x27 * 8 + 5)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,5)
// CM1CON0<C1PREF>
extern volatile __bit                   C1PREF              __at(0x139);	// @ (0x27 * 8 + 1)
#define                                 C1PREF_bit          _BIT_ACCESS(CM1CON0,1)
// CM2CON0<C2NREF>
extern volatile __bit                   C2NREF              __at(0x142);	// @ (0x28 * 8 + 2)
#define                                 C2NREF_bit          _BIT_ACCESS(CM2CON0,2)
// CM2CON0<C2ON>
extern volatile __bit                   C2ON                __at(0x143);	// @ (0x28 * 8 + 3)
#define                                 C2ON_bit            _BIT_ACCESS(CM2CON0,3)
// CM2CON0<C2OUT>
extern volatile __bit                   C2OUT               __at(0x147);	// @ (0x28 * 8 + 7)
#define                                 C2OUT_bit           _BIT_ACCESS(CM2CON0,7)
// CM2CON0<C2POL>
extern volatile __bit                   C2POL               __at(0x145);	// @ (0x28 * 8 + 5)
#define                                 C2POL_bit           _BIT_ACCESS(CM2CON0,5)
// CM2CON0<C2PREF1>
extern volatile __bit                   C2PREF1             __at(0x141);	// @ (0x28 * 8 + 1)
#define                                 C2PREF1_bit         _BIT_ACCESS(CM2CON0,1)
// CM2CON0<C2PREF2>
extern volatile __bit                   C2PREF2             __at(0x144);	// @ (0x28 * 8 + 4)
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
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0x4C);	// @ (0x9 * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0x4D);	// @ (0x9 * 8 + 5)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,5)
// INTCON1<CWIE>
extern volatile __bit                   CWIE                __at(0x32E);	// @ (0x65 * 8 + 6)
#define                                 CWIE_bit            _BIT_ACCESS(INTCON1,6)
// INTCON0<CWIF>
extern volatile __bit                   CWIF                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 CWIF_bit            _BIT_ACCESS(INTCON0,6)
// EECON<FREE>
extern volatile __bit                   FREE                __at(0x10C);	// @ (0x21 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(EECON,4)
// INTCON0<GIE>
extern volatile __bit                   GIE                 __at(0x58);	// @ (0xB * 8 + 0)
#define                                 GIE_bit             _BIT_ACCESS(INTCON0,0)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// ADCON0<NOT_DONE>
extern volatile __bit                   NOT_DONE            __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 NOT_DONE_bit        _BIT_ACCESS(ADCON0,1)
// OPACON<OPA1ON>
extern volatile __bit                   OPA1ON              __at(0x348);	// @ (0x69 * 8 + 0)
#define                                 OPA1ON_bit          _BIT_ACCESS(OPACON,0)
// OPACON<OPA2ON>
extern volatile __bit                   OPA2ON              __at(0x349);	// @ (0x69 * 8 + 1)
#define                                 OPA2ON_bit          _BIT_ACCESS(OPACON,1)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA2>
extern volatile __bit                   RA2                 __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x33);	// @ (0x6 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// INTCON1<RAIE>
extern volatile __bit                   RAIE                __at(0x32C);	// @ (0x65 * 8 + 4)
#define                                 RAIE_bit            _BIT_ACCESS(INTCON1,4)
// INTCON0<RAIF>
extern volatile __bit                   RAIF                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 RAIF_bit            _BIT_ACCESS(INTCON0,4)
// PORTB<RB4>
extern volatile __bit                   RB4                 __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTB,4)
// PORTB<RB5>
extern volatile __bit                   RB5                 __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTB,5)
// PORTB<RB6>
extern volatile __bit                   RB6                 __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTB,6)
// PORTB<RB7>
extern volatile __bit                   RB7                 __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 RB7_bit             _BIT_ACCESS(PORTB,7)
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// PORTC<RC6>
extern volatile __bit                   RC6                 __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// PORTC<RC7>
extern volatile __bit                   RC7                 __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
// EECON<RD>
extern volatile __bit                   RD                  __at(0x108);	// @ (0x21 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(EECON,0)
// INTCON1<T0IE>
extern volatile __bit                   T0IE                __at(0x32D);	// @ (0x65 * 8 + 5)
#define                                 T0IE_bit            _BIT_ACCESS(INTCON1,5)
// INTCON0<T0IF>
extern volatile __bit                   T0IF                __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 T0IF_bit            _BIT_ACCESS(INTCON0,5)
// VRCON<VR0>
extern volatile __bit                   VR0                 __at(0x148);	// @ (0x29 * 8 + 0)
#define                                 VR0_bit             _BIT_ACCESS(VRCON,0)
// VRCON<VR1>
extern volatile __bit                   VR1                 __at(0x149);	// @ (0x29 * 8 + 1)
#define                                 VR1_bit             _BIT_ACCESS(VRCON,1)
// VRCON<VR2>
extern volatile __bit                   VR2                 __at(0x14A);	// @ (0x29 * 8 + 2)
#define                                 VR2_bit             _BIT_ACCESS(VRCON,2)
// VRCON<VR3>
extern volatile __bit                   VR3                 __at(0x14B);	// @ (0x29 * 8 + 3)
#define                                 VR3_bit             _BIT_ACCESS(VRCON,3)
// VRCON<VREN>
extern volatile __bit                   VREN                __at(0x14F);	// @ (0x29 * 8 + 7)
#define                                 VREN_bit            _BIT_ACCESS(VRCON,7)
// VRCON<VROE>
extern volatile __bit                   VROE                __at(0x14E);	// @ (0x29 * 8 + 6)
#define                                 VROE_bit            _BIT_ACCESS(VRCON,6)
// VRCON<VRR>
extern volatile __bit                   VRR                 __at(0x14D);	// @ (0x29 * 8 + 5)
#define                                 VRR_bit             _BIT_ACCESS(VRCON,5)
// EECON<WR>
extern volatile __bit                   WR                  __at(0x109);	// @ (0x21 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(EECON,1)
// EECON<WREN>
extern volatile __bit                   WREN                __at(0x10A);	// @ (0x21 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(EECON,2)
// EECON<WRERR>
extern volatile __bit                   WRERR               __at(0x10B);	// @ (0x21 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(EECON,3)
// INTCON1<WUR>
extern volatile __bit                   WUR                 __at(0x328);	// @ (0x65 * 8 + 0)
#define                                 WUR_bit             _BIT_ACCESS(INTCON1,0)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// CM1CON0<nC1OUTEN>
extern volatile __bit                   nC1OUTEN            __at(0x13E);	// @ (0x27 * 8 + 6)
#define                                 nC1OUTEN_bit        _BIT_ACCESS(CM1CON0,6)
// CM1CON0<nC1T0CS>
extern volatile __bit                   nC1T0CS             __at(0x13C);	// @ (0x27 * 8 + 4)
#define                                 nC1T0CS_bit         _BIT_ACCESS(CM1CON0,4)
// CM1CON0<nC1WU>
extern volatile __bit                   nC1WU               __at(0x138);	// @ (0x27 * 8 + 0)
#define                                 nC1WU_bit           _BIT_ACCESS(CM1CON0,0)
// CM2CON0<nC2OUTEN>
extern volatile __bit                   nC2OUTEN            __at(0x146);	// @ (0x28 * 8 + 6)
#define                                 nC2OUTEN_bit        _BIT_ACCESS(CM2CON0,6)
// CM2CON0<nC2WU>
extern volatile __bit                   nC2WU               __at(0x140);	// @ (0x28 * 8 + 0)
#define                                 nC2WU_bit           _BIT_ACCESS(CM2CON0,0)

#endif // _PIC16F527_H_
