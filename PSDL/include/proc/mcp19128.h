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

#ifndef _MCP19128_H_
#define _MCP19128_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * MCP19128
 */
#ifndef _XC_H_
#warning Header file mcp19128.h included directly. Use #include <xc.h> instead.
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

// Register: TMR0
#define TMR0 TMR0
extern volatile unsigned char           TMR0                __at(0x001);
#ifndef _LIB_BUILD
asm("TMR0 equ 01h");
#endif

// Register: PCL
#define PCL PCL
extern volatile unsigned char           PCL                 __at(0x002);
#ifndef _LIB_BUILD
asm("PCL equ 02h");
#endif

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
        unsigned RP                     :2;
        unsigned IRP                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned RP0                    :1;
        unsigned RP1                    :1;
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
#define _STATUS_RP_POSN                                     0x5
#define _STATUS_RP_POSITION                                 0x5
#define _STATUS_RP_SIZE                                     0x2
#define _STATUS_RP_LENGTH                                   0x2
#define _STATUS_RP_MASK                                     0x60
#define _STATUS_IRP_POSN                                    0x7
#define _STATUS_IRP_POSITION                                0x7
#define _STATUS_IRP_SIZE                                    0x1
#define _STATUS_IRP_LENGTH                                  0x1
#define _STATUS_IRP_MASK                                    0x80
#define _STATUS_RP0_POSN                                    0x5
#define _STATUS_RP0_POSITION                                0x5
#define _STATUS_RP0_SIZE                                    0x1
#define _STATUS_RP0_LENGTH                                  0x1
#define _STATUS_RP0_MASK                                    0x20
#define _STATUS_RP1_POSN                                    0x6
#define _STATUS_RP1_POSITION                                0x6
#define _STATUS_RP1_SIZE                                    0x1
#define _STATUS_RP1_LENGTH                                  0x1
#define _STATUS_RP1_MASK                                    0x40

// Register: FSR
#define FSR FSR
extern volatile unsigned char           FSR                 __at(0x004);
#ifndef _LIB_BUILD
asm("FSR equ 04h");
#endif

// Register: PORTGPA
#define PORTGPA PORTGPA
extern volatile unsigned char           PORTGPA             __at(0x005);
#ifndef _LIB_BUILD
asm("PORTGPA equ 05h");
#endif
// aliases
extern volatile unsigned char           PORTA               __at(0x005);
#ifndef _LIB_BUILD
asm("PORTA equ 05h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned GPA0                   :1;
        unsigned GPA1                   :1;
        unsigned GPA2                   :1;
        unsigned GPA3                   :1;
        unsigned GPA4                   :1;
        unsigned GPA5                   :1;
        unsigned GPA6                   :1;
        unsigned GPA7                   :1;
    };
    struct {
        unsigned GPIO0                  :1;
        unsigned GPIO1                  :1;
        unsigned GPIO2                  :1;
        unsigned GPIO3                  :1;
        unsigned GPIO4                  :1;
        unsigned GPIO5                  :1;
        unsigned GPIO6                  :1;
        unsigned GPIO7                  :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
} PORTGPAbits_t;
extern volatile PORTGPAbits_t PORTGPAbits __at(0x005);
// bitfield macros
#define _PORTGPA_GPA0_POSN                                  0x0
#define _PORTGPA_GPA0_POSITION                              0x0
#define _PORTGPA_GPA0_SIZE                                  0x1
#define _PORTGPA_GPA0_LENGTH                                0x1
#define _PORTGPA_GPA0_MASK                                  0x1
#define _PORTGPA_GPA1_POSN                                  0x1
#define _PORTGPA_GPA1_POSITION                              0x1
#define _PORTGPA_GPA1_SIZE                                  0x1
#define _PORTGPA_GPA1_LENGTH                                0x1
#define _PORTGPA_GPA1_MASK                                  0x2
#define _PORTGPA_GPA2_POSN                                  0x2
#define _PORTGPA_GPA2_POSITION                              0x2
#define _PORTGPA_GPA2_SIZE                                  0x1
#define _PORTGPA_GPA2_LENGTH                                0x1
#define _PORTGPA_GPA2_MASK                                  0x4
#define _PORTGPA_GPA3_POSN                                  0x3
#define _PORTGPA_GPA3_POSITION                              0x3
#define _PORTGPA_GPA3_SIZE                                  0x1
#define _PORTGPA_GPA3_LENGTH                                0x1
#define _PORTGPA_GPA3_MASK                                  0x8
#define _PORTGPA_GPA4_POSN                                  0x4
#define _PORTGPA_GPA4_POSITION                              0x4
#define _PORTGPA_GPA4_SIZE                                  0x1
#define _PORTGPA_GPA4_LENGTH                                0x1
#define _PORTGPA_GPA4_MASK                                  0x10
#define _PORTGPA_GPA5_POSN                                  0x5
#define _PORTGPA_GPA5_POSITION                              0x5
#define _PORTGPA_GPA5_SIZE                                  0x1
#define _PORTGPA_GPA5_LENGTH                                0x1
#define _PORTGPA_GPA5_MASK                                  0x20
#define _PORTGPA_GPA6_POSN                                  0x6
#define _PORTGPA_GPA6_POSITION                              0x6
#define _PORTGPA_GPA6_SIZE                                  0x1
#define _PORTGPA_GPA6_LENGTH                                0x1
#define _PORTGPA_GPA6_MASK                                  0x40
#define _PORTGPA_GPA7_POSN                                  0x7
#define _PORTGPA_GPA7_POSITION                              0x7
#define _PORTGPA_GPA7_SIZE                                  0x1
#define _PORTGPA_GPA7_LENGTH                                0x1
#define _PORTGPA_GPA7_MASK                                  0x80
#define _PORTGPA_GPIO0_POSN                                 0x0
#define _PORTGPA_GPIO0_POSITION                             0x0
#define _PORTGPA_GPIO0_SIZE                                 0x1
#define _PORTGPA_GPIO0_LENGTH                               0x1
#define _PORTGPA_GPIO0_MASK                                 0x1
#define _PORTGPA_GPIO1_POSN                                 0x1
#define _PORTGPA_GPIO1_POSITION                             0x1
#define _PORTGPA_GPIO1_SIZE                                 0x1
#define _PORTGPA_GPIO1_LENGTH                               0x1
#define _PORTGPA_GPIO1_MASK                                 0x2
#define _PORTGPA_GPIO2_POSN                                 0x2
#define _PORTGPA_GPIO2_POSITION                             0x2
#define _PORTGPA_GPIO2_SIZE                                 0x1
#define _PORTGPA_GPIO2_LENGTH                               0x1
#define _PORTGPA_GPIO2_MASK                                 0x4
#define _PORTGPA_GPIO3_POSN                                 0x3
#define _PORTGPA_GPIO3_POSITION                             0x3
#define _PORTGPA_GPIO3_SIZE                                 0x1
#define _PORTGPA_GPIO3_LENGTH                               0x1
#define _PORTGPA_GPIO3_MASK                                 0x8
#define _PORTGPA_GPIO4_POSN                                 0x4
#define _PORTGPA_GPIO4_POSITION                             0x4
#define _PORTGPA_GPIO4_SIZE                                 0x1
#define _PORTGPA_GPIO4_LENGTH                               0x1
#define _PORTGPA_GPIO4_MASK                                 0x10
#define _PORTGPA_GPIO5_POSN                                 0x5
#define _PORTGPA_GPIO5_POSITION                             0x5
#define _PORTGPA_GPIO5_SIZE                                 0x1
#define _PORTGPA_GPIO5_LENGTH                               0x1
#define _PORTGPA_GPIO5_MASK                                 0x20
#define _PORTGPA_GPIO6_POSN                                 0x6
#define _PORTGPA_GPIO6_POSITION                             0x6
#define _PORTGPA_GPIO6_SIZE                                 0x1
#define _PORTGPA_GPIO6_LENGTH                               0x1
#define _PORTGPA_GPIO6_MASK                                 0x40
#define _PORTGPA_GPIO7_POSN                                 0x7
#define _PORTGPA_GPIO7_POSITION                             0x7
#define _PORTGPA_GPIO7_SIZE                                 0x1
#define _PORTGPA_GPIO7_LENGTH                               0x1
#define _PORTGPA_GPIO7_MASK                                 0x80
#define _PORTGPA_RA0_POSN                                   0x0
#define _PORTGPA_RA0_POSITION                               0x0
#define _PORTGPA_RA0_SIZE                                   0x1
#define _PORTGPA_RA0_LENGTH                                 0x1
#define _PORTGPA_RA0_MASK                                   0x1
#define _PORTGPA_RA1_POSN                                   0x1
#define _PORTGPA_RA1_POSITION                               0x1
#define _PORTGPA_RA1_SIZE                                   0x1
#define _PORTGPA_RA1_LENGTH                                 0x1
#define _PORTGPA_RA1_MASK                                   0x2
#define _PORTGPA_RA2_POSN                                   0x2
#define _PORTGPA_RA2_POSITION                               0x2
#define _PORTGPA_RA2_SIZE                                   0x1
#define _PORTGPA_RA2_LENGTH                                 0x1
#define _PORTGPA_RA2_MASK                                   0x4
#define _PORTGPA_RA3_POSN                                   0x3
#define _PORTGPA_RA3_POSITION                               0x3
#define _PORTGPA_RA3_SIZE                                   0x1
#define _PORTGPA_RA3_LENGTH                                 0x1
#define _PORTGPA_RA3_MASK                                   0x8
#define _PORTGPA_RA4_POSN                                   0x4
#define _PORTGPA_RA4_POSITION                               0x4
#define _PORTGPA_RA4_SIZE                                   0x1
#define _PORTGPA_RA4_LENGTH                                 0x1
#define _PORTGPA_RA4_MASK                                   0x10
#define _PORTGPA_RA5_POSN                                   0x5
#define _PORTGPA_RA5_POSITION                               0x5
#define _PORTGPA_RA5_SIZE                                   0x1
#define _PORTGPA_RA5_LENGTH                                 0x1
#define _PORTGPA_RA5_MASK                                   0x20
#define _PORTGPA_RA6_POSN                                   0x6
#define _PORTGPA_RA6_POSITION                               0x6
#define _PORTGPA_RA6_SIZE                                   0x1
#define _PORTGPA_RA6_LENGTH                                 0x1
#define _PORTGPA_RA6_MASK                                   0x40
#define _PORTGPA_RA7_POSN                                   0x7
#define _PORTGPA_RA7_POSITION                               0x7
#define _PORTGPA_RA7_SIZE                                   0x1
#define _PORTGPA_RA7_LENGTH                                 0x1
#define _PORTGPA_RA7_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned GPA0                   :1;
        unsigned GPA1                   :1;
        unsigned GPA2                   :1;
        unsigned GPA3                   :1;
        unsigned GPA4                   :1;
        unsigned GPA5                   :1;
        unsigned GPA6                   :1;
        unsigned GPA7                   :1;
    };
    struct {
        unsigned GPIO0                  :1;
        unsigned GPIO1                  :1;
        unsigned GPIO2                  :1;
        unsigned GPIO3                  :1;
        unsigned GPIO4                  :1;
        unsigned GPIO5                  :1;
        unsigned GPIO6                  :1;
        unsigned GPIO7                  :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __at(0x005);
// bitfield macros
#define _PORTA_GPA0_POSN                                    0x0
#define _PORTA_GPA0_POSITION                                0x0
#define _PORTA_GPA0_SIZE                                    0x1
#define _PORTA_GPA0_LENGTH                                  0x1
#define _PORTA_GPA0_MASK                                    0x1
#define _PORTA_GPA1_POSN                                    0x1
#define _PORTA_GPA1_POSITION                                0x1
#define _PORTA_GPA1_SIZE                                    0x1
#define _PORTA_GPA1_LENGTH                                  0x1
#define _PORTA_GPA1_MASK                                    0x2
#define _PORTA_GPA2_POSN                                    0x2
#define _PORTA_GPA2_POSITION                                0x2
#define _PORTA_GPA2_SIZE                                    0x1
#define _PORTA_GPA2_LENGTH                                  0x1
#define _PORTA_GPA2_MASK                                    0x4
#define _PORTA_GPA3_POSN                                    0x3
#define _PORTA_GPA3_POSITION                                0x3
#define _PORTA_GPA3_SIZE                                    0x1
#define _PORTA_GPA3_LENGTH                                  0x1
#define _PORTA_GPA3_MASK                                    0x8
#define _PORTA_GPA4_POSN                                    0x4
#define _PORTA_GPA4_POSITION                                0x4
#define _PORTA_GPA4_SIZE                                    0x1
#define _PORTA_GPA4_LENGTH                                  0x1
#define _PORTA_GPA4_MASK                                    0x10
#define _PORTA_GPA5_POSN                                    0x5
#define _PORTA_GPA5_POSITION                                0x5
#define _PORTA_GPA5_SIZE                                    0x1
#define _PORTA_GPA5_LENGTH                                  0x1
#define _PORTA_GPA5_MASK                                    0x20
#define _PORTA_GPA6_POSN                                    0x6
#define _PORTA_GPA6_POSITION                                0x6
#define _PORTA_GPA6_SIZE                                    0x1
#define _PORTA_GPA6_LENGTH                                  0x1
#define _PORTA_GPA6_MASK                                    0x40
#define _PORTA_GPA7_POSN                                    0x7
#define _PORTA_GPA7_POSITION                                0x7
#define _PORTA_GPA7_SIZE                                    0x1
#define _PORTA_GPA7_LENGTH                                  0x1
#define _PORTA_GPA7_MASK                                    0x80
#define _PORTA_GPIO0_POSN                                   0x0
#define _PORTA_GPIO0_POSITION                               0x0
#define _PORTA_GPIO0_SIZE                                   0x1
#define _PORTA_GPIO0_LENGTH                                 0x1
#define _PORTA_GPIO0_MASK                                   0x1
#define _PORTA_GPIO1_POSN                                   0x1
#define _PORTA_GPIO1_POSITION                               0x1
#define _PORTA_GPIO1_SIZE                                   0x1
#define _PORTA_GPIO1_LENGTH                                 0x1
#define _PORTA_GPIO1_MASK                                   0x2
#define _PORTA_GPIO2_POSN                                   0x2
#define _PORTA_GPIO2_POSITION                               0x2
#define _PORTA_GPIO2_SIZE                                   0x1
#define _PORTA_GPIO2_LENGTH                                 0x1
#define _PORTA_GPIO2_MASK                                   0x4
#define _PORTA_GPIO3_POSN                                   0x3
#define _PORTA_GPIO3_POSITION                               0x3
#define _PORTA_GPIO3_SIZE                                   0x1
#define _PORTA_GPIO3_LENGTH                                 0x1
#define _PORTA_GPIO3_MASK                                   0x8
#define _PORTA_GPIO4_POSN                                   0x4
#define _PORTA_GPIO4_POSITION                               0x4
#define _PORTA_GPIO4_SIZE                                   0x1
#define _PORTA_GPIO4_LENGTH                                 0x1
#define _PORTA_GPIO4_MASK                                   0x10
#define _PORTA_GPIO5_POSN                                   0x5
#define _PORTA_GPIO5_POSITION                               0x5
#define _PORTA_GPIO5_SIZE                                   0x1
#define _PORTA_GPIO5_LENGTH                                 0x1
#define _PORTA_GPIO5_MASK                                   0x20
#define _PORTA_GPIO6_POSN                                   0x6
#define _PORTA_GPIO6_POSITION                               0x6
#define _PORTA_GPIO6_SIZE                                   0x1
#define _PORTA_GPIO6_LENGTH                                 0x1
#define _PORTA_GPIO6_MASK                                   0x40
#define _PORTA_GPIO7_POSN                                   0x7
#define _PORTA_GPIO7_POSITION                               0x7
#define _PORTA_GPIO7_SIZE                                   0x1
#define _PORTA_GPIO7_LENGTH                                 0x1
#define _PORTA_GPIO7_MASK                                   0x80
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
#define _PORTA_RA6_POSN                                     0x6
#define _PORTA_RA6_POSITION                                 0x6
#define _PORTA_RA6_SIZE                                     0x1
#define _PORTA_RA6_LENGTH                                   0x1
#define _PORTA_RA6_MASK                                     0x40
#define _PORTA_RA7_POSN                                     0x7
#define _PORTA_RA7_POSITION                                 0x7
#define _PORTA_RA7_SIZE                                     0x1
#define _PORTA_RA7_LENGTH                                   0x1
#define _PORTA_RA7_MASK                                     0x80

// Register: PORTGPB
#define PORTGPB PORTGPB
extern volatile unsigned char           PORTGPB             __at(0x006);
#ifndef _LIB_BUILD
asm("PORTGPB equ 06h");
#endif
// aliases
extern volatile unsigned char           PORTB               __at(0x006);
#ifndef _LIB_BUILD
asm("PORTB equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned GPB0                   :1;
        unsigned GPB1                   :1;
        unsigned GPB2                   :1;
        unsigned GPB3                   :1;
        unsigned GPB4                   :1;
        unsigned GPB5                   :1;
        unsigned GPB6                   :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned                        :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} PORTGPBbits_t;
extern volatile PORTGPBbits_t PORTGPBbits __at(0x006);
// bitfield macros
#define _PORTGPB_GPB0_POSN                                  0x0
#define _PORTGPB_GPB0_POSITION                              0x0
#define _PORTGPB_GPB0_SIZE                                  0x1
#define _PORTGPB_GPB0_LENGTH                                0x1
#define _PORTGPB_GPB0_MASK                                  0x1
#define _PORTGPB_GPB1_POSN                                  0x1
#define _PORTGPB_GPB1_POSITION                              0x1
#define _PORTGPB_GPB1_SIZE                                  0x1
#define _PORTGPB_GPB1_LENGTH                                0x1
#define _PORTGPB_GPB1_MASK                                  0x2
#define _PORTGPB_GPB2_POSN                                  0x2
#define _PORTGPB_GPB2_POSITION                              0x2
#define _PORTGPB_GPB2_SIZE                                  0x1
#define _PORTGPB_GPB2_LENGTH                                0x1
#define _PORTGPB_GPB2_MASK                                  0x4
#define _PORTGPB_GPB3_POSN                                  0x3
#define _PORTGPB_GPB3_POSITION                              0x3
#define _PORTGPB_GPB3_SIZE                                  0x1
#define _PORTGPB_GPB3_LENGTH                                0x1
#define _PORTGPB_GPB3_MASK                                  0x8
#define _PORTGPB_GPB4_POSN                                  0x4
#define _PORTGPB_GPB4_POSITION                              0x4
#define _PORTGPB_GPB4_SIZE                                  0x1
#define _PORTGPB_GPB4_LENGTH                                0x1
#define _PORTGPB_GPB4_MASK                                  0x10
#define _PORTGPB_GPB5_POSN                                  0x5
#define _PORTGPB_GPB5_POSITION                              0x5
#define _PORTGPB_GPB5_SIZE                                  0x1
#define _PORTGPB_GPB5_LENGTH                                0x1
#define _PORTGPB_GPB5_MASK                                  0x20
#define _PORTGPB_GPB6_POSN                                  0x6
#define _PORTGPB_GPB6_POSITION                              0x6
#define _PORTGPB_GPB6_SIZE                                  0x1
#define _PORTGPB_GPB6_LENGTH                                0x1
#define _PORTGPB_GPB6_MASK                                  0x40
#define _PORTGPB_RB0_POSN                                   0x0
#define _PORTGPB_RB0_POSITION                               0x0
#define _PORTGPB_RB0_SIZE                                   0x1
#define _PORTGPB_RB0_LENGTH                                 0x1
#define _PORTGPB_RB0_MASK                                   0x1
#define _PORTGPB_RB1_POSN                                   0x1
#define _PORTGPB_RB1_POSITION                               0x1
#define _PORTGPB_RB1_SIZE                                   0x1
#define _PORTGPB_RB1_LENGTH                                 0x1
#define _PORTGPB_RB1_MASK                                   0x2
#define _PORTGPB_RB2_POSN                                   0x2
#define _PORTGPB_RB2_POSITION                               0x2
#define _PORTGPB_RB2_SIZE                                   0x1
#define _PORTGPB_RB2_LENGTH                                 0x1
#define _PORTGPB_RB2_MASK                                   0x4
#define _PORTGPB_RB4_POSN                                   0x4
#define _PORTGPB_RB4_POSITION                               0x4
#define _PORTGPB_RB4_SIZE                                   0x1
#define _PORTGPB_RB4_LENGTH                                 0x1
#define _PORTGPB_RB4_MASK                                   0x10
#define _PORTGPB_RB5_POSN                                   0x5
#define _PORTGPB_RB5_POSITION                               0x5
#define _PORTGPB_RB5_SIZE                                   0x1
#define _PORTGPB_RB5_LENGTH                                 0x1
#define _PORTGPB_RB5_MASK                                   0x20
#define _PORTGPB_RB6_POSN                                   0x6
#define _PORTGPB_RB6_POSITION                               0x6
#define _PORTGPB_RB6_SIZE                                   0x1
#define _PORTGPB_RB6_LENGTH                                 0x1
#define _PORTGPB_RB6_MASK                                   0x40
#define _PORTGPB_RB7_POSN                                   0x7
#define _PORTGPB_RB7_POSITION                               0x7
#define _PORTGPB_RB7_SIZE                                   0x1
#define _PORTGPB_RB7_LENGTH                                 0x1
#define _PORTGPB_RB7_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned GPB0                   :1;
        unsigned GPB1                   :1;
        unsigned GPB2                   :1;
        unsigned GPB3                   :1;
        unsigned GPB4                   :1;
        unsigned GPB5                   :1;
        unsigned GPB6                   :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned                        :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0x006);
// bitfield macros
#define _PORTB_GPB0_POSN                                    0x0
#define _PORTB_GPB0_POSITION                                0x0
#define _PORTB_GPB0_SIZE                                    0x1
#define _PORTB_GPB0_LENGTH                                  0x1
#define _PORTB_GPB0_MASK                                    0x1
#define _PORTB_GPB1_POSN                                    0x1
#define _PORTB_GPB1_POSITION                                0x1
#define _PORTB_GPB1_SIZE                                    0x1
#define _PORTB_GPB1_LENGTH                                  0x1
#define _PORTB_GPB1_MASK                                    0x2
#define _PORTB_GPB2_POSN                                    0x2
#define _PORTB_GPB2_POSITION                                0x2
#define _PORTB_GPB2_SIZE                                    0x1
#define _PORTB_GPB2_LENGTH                                  0x1
#define _PORTB_GPB2_MASK                                    0x4
#define _PORTB_GPB3_POSN                                    0x3
#define _PORTB_GPB3_POSITION                                0x3
#define _PORTB_GPB3_SIZE                                    0x1
#define _PORTB_GPB3_LENGTH                                  0x1
#define _PORTB_GPB3_MASK                                    0x8
#define _PORTB_GPB4_POSN                                    0x4
#define _PORTB_GPB4_POSITION                                0x4
#define _PORTB_GPB4_SIZE                                    0x1
#define _PORTB_GPB4_LENGTH                                  0x1
#define _PORTB_GPB4_MASK                                    0x10
#define _PORTB_GPB5_POSN                                    0x5
#define _PORTB_GPB5_POSITION                                0x5
#define _PORTB_GPB5_SIZE                                    0x1
#define _PORTB_GPB5_LENGTH                                  0x1
#define _PORTB_GPB5_MASK                                    0x20
#define _PORTB_GPB6_POSN                                    0x6
#define _PORTB_GPB6_POSITION                                0x6
#define _PORTB_GPB6_SIZE                                    0x1
#define _PORTB_GPB6_LENGTH                                  0x1
#define _PORTB_GPB6_MASK                                    0x40
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

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0x007);
#ifndef _LIB_BUILD
asm("PIR1 equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned TIMR4IF                :1;
        unsigned TIMR1GIF               :1;
        unsigned SSPIF                  :1;
        unsigned BCLIF                  :1;
        unsigned ADIF                   :1;
        unsigned OTIF                   :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x007);
// bitfield macros
#define _PIR1_TMR1IF_POSN                                   0x0
#define _PIR1_TMR1IF_POSITION                               0x0
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x1
#define _PIR1_TMR2IF_POSN                                   0x1
#define _PIR1_TMR2IF_POSITION                               0x1
#define _PIR1_TMR2IF_SIZE                                   0x1
#define _PIR1_TMR2IF_LENGTH                                 0x1
#define _PIR1_TMR2IF_MASK                                   0x2
#define _PIR1_TIMR4IF_POSN                                  0x2
#define _PIR1_TIMR4IF_POSITION                              0x2
#define _PIR1_TIMR4IF_SIZE                                  0x1
#define _PIR1_TIMR4IF_LENGTH                                0x1
#define _PIR1_TIMR4IF_MASK                                  0x4
#define _PIR1_TIMR1GIF_POSN                                 0x3
#define _PIR1_TIMR1GIF_POSITION                             0x3
#define _PIR1_TIMR1GIF_SIZE                                 0x1
#define _PIR1_TIMR1GIF_LENGTH                               0x1
#define _PIR1_TIMR1GIF_MASK                                 0x8
#define _PIR1_SSPIF_POSN                                    0x4
#define _PIR1_SSPIF_POSITION                                0x4
#define _PIR1_SSPIF_SIZE                                    0x1
#define _PIR1_SSPIF_LENGTH                                  0x1
#define _PIR1_SSPIF_MASK                                    0x10
#define _PIR1_BCLIF_POSN                                    0x5
#define _PIR1_BCLIF_POSITION                                0x5
#define _PIR1_BCLIF_SIZE                                    0x1
#define _PIR1_BCLIF_LENGTH                                  0x1
#define _PIR1_BCLIF_MASK                                    0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_OTIF_POSN                                     0x7
#define _PIR1_OTIF_POSITION                                 0x7
#define _PIR1_OTIF_SIZE                                     0x1
#define _PIR1_OTIF_LENGTH                                   0x1
#define _PIR1_OTIF_MASK                                     0x80

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x008);
#ifndef _LIB_BUILD
asm("PIR2 equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned V1UVIF                 :1;
        unsigned V1OVIF                 :1;
        unsigned V2UVIF                 :1;
        unsigned V2OVIF                 :1;
        unsigned LDIF                   :1;
        unsigned BTUVIF                 :1;
        unsigned OCIF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x008);
// bitfield macros
#define _PIR2_V1UVIF_POSN                                   0x0
#define _PIR2_V1UVIF_POSITION                               0x0
#define _PIR2_V1UVIF_SIZE                                   0x1
#define _PIR2_V1UVIF_LENGTH                                 0x1
#define _PIR2_V1UVIF_MASK                                   0x1
#define _PIR2_V1OVIF_POSN                                   0x1
#define _PIR2_V1OVIF_POSITION                               0x1
#define _PIR2_V1OVIF_SIZE                                   0x1
#define _PIR2_V1OVIF_LENGTH                                 0x1
#define _PIR2_V1OVIF_MASK                                   0x2
#define _PIR2_V2UVIF_POSN                                   0x2
#define _PIR2_V2UVIF_POSITION                               0x2
#define _PIR2_V2UVIF_SIZE                                   0x1
#define _PIR2_V2UVIF_LENGTH                                 0x1
#define _PIR2_V2UVIF_MASK                                   0x4
#define _PIR2_V2OVIF_POSN                                   0x3
#define _PIR2_V2OVIF_POSITION                               0x3
#define _PIR2_V2OVIF_SIZE                                   0x1
#define _PIR2_V2OVIF_LENGTH                                 0x1
#define _PIR2_V2OVIF_MASK                                   0x8
#define _PIR2_LDIF_POSN                                     0x4
#define _PIR2_LDIF_POSITION                                 0x4
#define _PIR2_LDIF_SIZE                                     0x1
#define _PIR2_LDIF_LENGTH                                   0x1
#define _PIR2_LDIF_MASK                                     0x10
#define _PIR2_BTUVIF_POSN                                   0x5
#define _PIR2_BTUVIF_POSITION                               0x5
#define _PIR2_BTUVIF_SIZE                                   0x1
#define _PIR2_BTUVIF_LENGTH                                 0x1
#define _PIR2_BTUVIF_MASK                                   0x20
#define _PIR2_OCIF_POSN                                     0x6
#define _PIR2_OCIF_POSITION                                 0x6
#define _PIR2_OCIF_SIZE                                     0x1
#define _PIR2_OCIF_LENGTH                                   0x1
#define _PIR2_OCIF_MASK                                     0x40

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0x009);
#ifndef _LIB_BUILD
asm("PIR3 equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned CC1IF                  :1;
        unsigned CC2IF                  :1;
        unsigned SSIF                   :1;
        unsigned VINUVIF                :1;
        unsigned VDDUIF                 :1;
        unsigned DRVUVIF                :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0x009);
// bitfield macros
#define _PIR3_TXIF_POSN                                     0x0
#define _PIR3_TXIF_POSITION                                 0x0
#define _PIR3_TXIF_SIZE                                     0x1
#define _PIR3_TXIF_LENGTH                                   0x1
#define _PIR3_TXIF_MASK                                     0x1
#define _PIR3_RCIF_POSN                                     0x1
#define _PIR3_RCIF_POSITION                                 0x1
#define _PIR3_RCIF_SIZE                                     0x1
#define _PIR3_RCIF_LENGTH                                   0x1
#define _PIR3_RCIF_MASK                                     0x2
#define _PIR3_CC1IF_POSN                                    0x2
#define _PIR3_CC1IF_POSITION                                0x2
#define _PIR3_CC1IF_SIZE                                    0x1
#define _PIR3_CC1IF_LENGTH                                  0x1
#define _PIR3_CC1IF_MASK                                    0x4
#define _PIR3_CC2IF_POSN                                    0x3
#define _PIR3_CC2IF_POSITION                                0x3
#define _PIR3_CC2IF_SIZE                                    0x1
#define _PIR3_CC2IF_LENGTH                                  0x1
#define _PIR3_CC2IF_MASK                                    0x8
#define _PIR3_SSIF_POSN                                     0x4
#define _PIR3_SSIF_POSITION                                 0x4
#define _PIR3_SSIF_SIZE                                     0x1
#define _PIR3_SSIF_LENGTH                                   0x1
#define _PIR3_SSIF_MASK                                     0x10
#define _PIR3_VINUVIF_POSN                                  0x5
#define _PIR3_VINUVIF_POSITION                              0x5
#define _PIR3_VINUVIF_SIZE                                  0x1
#define _PIR3_VINUVIF_LENGTH                                0x1
#define _PIR3_VINUVIF_MASK                                  0x20
#define _PIR3_VDDUIF_POSN                                   0x6
#define _PIR3_VDDUIF_POSITION                               0x6
#define _PIR3_VDDUIF_SIZE                                   0x1
#define _PIR3_VDDUIF_LENGTH                                 0x1
#define _PIR3_VDDUIF_MASK                                   0x40
#define _PIR3_DRVUVIF_POSN                                  0x7
#define _PIR3_DRVUVIF_POSITION                              0x7
#define _PIR3_DRVUVIF_SIZE                                  0x1
#define _PIR3_DRVUVIF_LENGTH                                0x1
#define _PIR3_DRVUVIF_MASK                                  0x80

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0x00A);
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0x00B);
#ifndef _LIB_BUILD
asm("INTCON equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned IOCE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
// bitfield macros
#define _INTCON_IOCF_POSN                                   0x0
#define _INTCON_IOCF_POSITION                               0x0
#define _INTCON_IOCF_SIZE                                   0x1
#define _INTCON_IOCF_LENGTH                                 0x1
#define _INTCON_IOCF_MASK                                   0x1
#define _INTCON_INTF_POSN                                   0x1
#define _INTCON_INTF_POSITION                               0x1
#define _INTCON_INTF_SIZE                                   0x1
#define _INTCON_INTF_LENGTH                                 0x1
#define _INTCON_INTF_MASK                                   0x2
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_IOCE_POSN                                   0x3
#define _INTCON_IOCE_POSITION                               0x3
#define _INTCON_IOCE_SIZE                                   0x1
#define _INTCON_IOCE_LENGTH                                 0x1
#define _INTCON_IOCE_MASK                                   0x8
#define _INTCON_INTE_POSN                                   0x4
#define _INTCON_INTE_POSITION                               0x4
#define _INTCON_INTE_SIZE                                   0x1
#define _INTCON_INTE_LENGTH                                 0x1
#define _INTCON_INTE_MASK                                   0x10
#define _INTCON_T0IE_POSN                                   0x5
#define _INTCON_T0IE_POSITION                               0x5
#define _INTCON_T0IE_SIZE                                   0x1
#define _INTCON_T0IE_LENGTH                                 0x1
#define _INTCON_T0IE_MASK                                   0x20
#define _INTCON_PEIE_POSN                                   0x6
#define _INTCON_PEIE_POSITION                               0x6
#define _INTCON_PEIE_SIZE                                   0x1
#define _INTCON_PEIE_LENGTH                                 0x1
#define _INTCON_PEIE_MASK                                   0x40
#define _INTCON_GIE_POSN                                    0x7
#define _INTCON_GIE_POSITION                                0x7
#define _INTCON_GIE_SIZE                                    0x1
#define _INTCON_GIE_LENGTH                                  0x1
#define _INTCON_GIE_MASK                                    0x80

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0x00C);
#ifndef _LIB_BUILD
asm("TMR1 equ 0Ch");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0x00C);
#ifndef _LIB_BUILD
asm("TMR1L equ 0Ch");
#endif

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x00D);
#ifndef _LIB_BUILD
asm("TMR1H equ 0Dh");
#endif

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0x00E);
#ifndef _LIB_BUILD
asm("T1GCON equ 0Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
        unsigned T1GVAL                 :1;
        unsigned T1GO_DONE              :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
    struct {
        unsigned T1GSS                  :2;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0x00E);
// bitfield macros
#define _T1GCON_T1GSS0_POSN                                 0x0
#define _T1GCON_T1GSS0_POSITION                             0x0
#define _T1GCON_T1GSS0_SIZE                                 0x1
#define _T1GCON_T1GSS0_LENGTH                               0x1
#define _T1GCON_T1GSS0_MASK                                 0x1
#define _T1GCON_T1GSS1_POSN                                 0x1
#define _T1GCON_T1GSS1_POSITION                             0x1
#define _T1GCON_T1GSS1_SIZE                                 0x1
#define _T1GCON_T1GSS1_LENGTH                               0x1
#define _T1GCON_T1GSS1_MASK                                 0x2
#define _T1GCON_T1GVAL_POSN                                 0x2
#define _T1GCON_T1GVAL_POSITION                             0x2
#define _T1GCON_T1GVAL_SIZE                                 0x1
#define _T1GCON_T1GVAL_LENGTH                               0x1
#define _T1GCON_T1GVAL_MASK                                 0x4
#define _T1GCON_T1GO_DONE_POSN                              0x3
#define _T1GCON_T1GO_DONE_POSITION                          0x3
#define _T1GCON_T1GO_DONE_SIZE                              0x1
#define _T1GCON_T1GO_DONE_LENGTH                            0x1
#define _T1GCON_T1GO_DONE_MASK                              0x8
#define _T1GCON_T1GSPM_POSN                                 0x4
#define _T1GCON_T1GSPM_POSITION                             0x4
#define _T1GCON_T1GSPM_SIZE                                 0x1
#define _T1GCON_T1GSPM_LENGTH                               0x1
#define _T1GCON_T1GSPM_MASK                                 0x10
#define _T1GCON_T1GTM_POSN                                  0x5
#define _T1GCON_T1GTM_POSITION                              0x5
#define _T1GCON_T1GTM_SIZE                                  0x1
#define _T1GCON_T1GTM_LENGTH                                0x1
#define _T1GCON_T1GTM_MASK                                  0x20
#define _T1GCON_T1GPOL_POSN                                 0x6
#define _T1GCON_T1GPOL_POSITION                             0x6
#define _T1GCON_T1GPOL_SIZE                                 0x1
#define _T1GCON_T1GPOL_LENGTH                               0x1
#define _T1GCON_T1GPOL_MASK                                 0x40
#define _T1GCON_TMR1GE_POSN                                 0x7
#define _T1GCON_TMR1GE_POSITION                             0x7
#define _T1GCON_TMR1GE_SIZE                                 0x1
#define _T1GCON_TMR1GE_LENGTH                               0x1
#define _T1GCON_TMR1GE_MASK                                 0x80
#define _T1GCON_T1GSS_POSN                                  0x0
#define _T1GCON_T1GSS_POSITION                              0x0
#define _T1GCON_T1GSS_SIZE                                  0x2
#define _T1GCON_T1GSS_LENGTH                                0x2
#define _T1GCON_T1GSS_MASK                                  0x3

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x00F);
#ifndef _LIB_BUILD
asm("TMR2 equ 0Fh");
#endif

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0x010);
#ifndef _LIB_BUILD
asm("PR2 equ 010h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0x010);
// bitfield macros
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF

// Register: TMR4
#define TMR4 TMR4
extern volatile unsigned char           TMR4                __at(0x011);
#ifndef _LIB_BUILD
asm("TMR4 equ 011h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR4                   :8;
    };
} TMR4bits_t;
extern volatile TMR4bits_t TMR4bits __at(0x011);
// bitfield macros
#define _TMR4_TMR4_POSN                                     0x0
#define _TMR4_TMR4_POSITION                                 0x0
#define _TMR4_TMR4_SIZE                                     0x8
#define _TMR4_TMR4_LENGTH                                   0x8
#define _TMR4_TMR4_MASK                                     0xFF

// Register: PR4
#define PR4 PR4
extern volatile unsigned char           PR4                 __at(0x012);
#ifndef _LIB_BUILD
asm("PR4 equ 012h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR4                    :8;
    };
} PR4bits_t;
extern volatile PR4bits_t PR4bits __at(0x012);
// bitfield macros
#define _PR4_PR4_POSN                                       0x0
#define _PR4_PR4_POSITION                                   0x0
#define _PR4_PR4_SIZE                                       0x8
#define _PR4_PR4_LENGTH                                     0x8
#define _PR4_PR4_MASK                                       0xFF

// Register: TCON
#define TCON TCON
extern volatile unsigned char           TCON                __at(0x013);
#ifndef _LIB_BUILD
asm("TCON equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR2ON                 :1;
        unsigned TMR4ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned T4CKPS0                :1;
        unsigned T4CKPS1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned T1CKPS                 :2;
        unsigned T4CKPS                 :2;
    };
} TCONbits_t;
extern volatile TCONbits_t TCONbits __at(0x013);
// bitfield macros
#define _TCON_TMR1ON_POSN                                   0x0
#define _TCON_TMR1ON_POSITION                               0x0
#define _TCON_TMR1ON_SIZE                                   0x1
#define _TCON_TMR1ON_LENGTH                                 0x1
#define _TCON_TMR1ON_MASK                                   0x1
#define _TCON_TMR2ON_POSN                                   0x1
#define _TCON_TMR2ON_POSITION                               0x1
#define _TCON_TMR2ON_SIZE                                   0x1
#define _TCON_TMR2ON_LENGTH                                 0x1
#define _TCON_TMR2ON_MASK                                   0x2
#define _TCON_TMR4ON_POSN                                   0x2
#define _TCON_TMR4ON_POSITION                               0x2
#define _TCON_TMR4ON_SIZE                                   0x1
#define _TCON_TMR4ON_LENGTH                                 0x1
#define _TCON_TMR4ON_MASK                                   0x4
#define _TCON_TMR1CS_POSN                                   0x3
#define _TCON_TMR1CS_POSITION                               0x3
#define _TCON_TMR1CS_SIZE                                   0x1
#define _TCON_TMR1CS_LENGTH                                 0x1
#define _TCON_TMR1CS_MASK                                   0x8
#define _TCON_T1CKPS0_POSN                                  0x4
#define _TCON_T1CKPS0_POSITION                              0x4
#define _TCON_T1CKPS0_SIZE                                  0x1
#define _TCON_T1CKPS0_LENGTH                                0x1
#define _TCON_T1CKPS0_MASK                                  0x10
#define _TCON_T1CKPS1_POSN                                  0x5
#define _TCON_T1CKPS1_POSITION                              0x5
#define _TCON_T1CKPS1_SIZE                                  0x1
#define _TCON_T1CKPS1_LENGTH                                0x1
#define _TCON_T1CKPS1_MASK                                  0x20
#define _TCON_T4CKPS0_POSN                                  0x6
#define _TCON_T4CKPS0_POSITION                              0x6
#define _TCON_T4CKPS0_SIZE                                  0x1
#define _TCON_T4CKPS0_LENGTH                                0x1
#define _TCON_T4CKPS0_MASK                                  0x40
#define _TCON_T4CKPS1_POSN                                  0x7
#define _TCON_T4CKPS1_POSITION                              0x7
#define _TCON_T4CKPS1_SIZE                                  0x1
#define _TCON_T4CKPS1_LENGTH                                0x1
#define _TCON_T4CKPS1_MASK                                  0x80
#define _TCON_T1CKPS_POSN                                   0x4
#define _TCON_T1CKPS_POSITION                               0x4
#define _TCON_T1CKPS_SIZE                                   0x2
#define _TCON_T1CKPS_LENGTH                                 0x2
#define _TCON_T1CKPS_MASK                                   0x30
#define _TCON_T4CKPS_POSN                                   0x6
#define _TCON_T4CKPS_POSITION                               0x6
#define _TCON_T4CKPS_SIZE                                   0x2
#define _TCON_T4CKPS_LENGTH                                 0x2
#define _TCON_T4CKPS_MASK                                   0xC0

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x014);
#ifndef _LIB_BUILD
asm("PCON equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned                        :2;
        unsigned LDO_LP                 :1;
        unsigned LDO_LV                 :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x014);
// bitfield macros
#define _PCON_nBOR_POSN                                     0x0
#define _PCON_nBOR_POSITION                                 0x0
#define _PCON_nBOR_SIZE                                     0x1
#define _PCON_nBOR_LENGTH                                   0x1
#define _PCON_nBOR_MASK                                     0x1
#define _PCON_nPOR_POSN                                     0x1
#define _PCON_nPOR_POSITION                                 0x1
#define _PCON_nPOR_SIZE                                     0x1
#define _PCON_nPOR_LENGTH                                   0x1
#define _PCON_nPOR_MASK                                     0x2
#define _PCON_LDO_LP_POSN                                   0x4
#define _PCON_LDO_LP_POSITION                               0x4
#define _PCON_LDO_LP_SIZE                                   0x1
#define _PCON_LDO_LP_LENGTH                                 0x1
#define _PCON_LDO_LP_MASK                                   0x10
#define _PCON_LDO_LV_POSN                                   0x5
#define _PCON_LDO_LV_POSITION                               0x5
#define _PCON_LDO_LV_SIZE                                   0x1
#define _PCON_LDO_LV_LENGTH                                 0x1
#define _PCON_LDO_LV_MASK                                   0x20

// Register: PWM0PH
#define PWM0PH PWM0PH
extern volatile unsigned char           PWM0PH              __at(0x015);
#ifndef _LIB_BUILD
asm("PWM0PH equ 015h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM0PH                 :8;
    };
} PWM0PHbits_t;
extern volatile PWM0PHbits_t PWM0PHbits __at(0x015);
// bitfield macros
#define _PWM0PH_PWM0PH_POSN                                 0x0
#define _PWM0PH_PWM0PH_POSITION                             0x0
#define _PWM0PH_PWM0PH_SIZE                                 0x8
#define _PWM0PH_PWM0PH_LENGTH                               0x8
#define _PWM0PH_PWM0PH_MASK                                 0xFF

// Register: PWM0R
#define PWM0R PWM0R
extern volatile unsigned char           PWM0R               __at(0x016);
#ifndef _LIB_BUILD
asm("PWM0R equ 016h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM0R                  :8;
    };
} PWM0Rbits_t;
extern volatile PWM0Rbits_t PWM0Rbits __at(0x016);
// bitfield macros
#define _PWM0R_PWM0R_POSN                                   0x0
#define _PWM0R_PWM0R_POSITION                               0x0
#define _PWM0R_PWM0R_SIZE                                   0x8
#define _PWM0R_PWM0R_LENGTH                                 0x8
#define _PWM0R_PWM0R_MASK                                   0xFF

// Register: PWM1R
#define PWM1R PWM1R
extern volatile unsigned char           PWM1R               __at(0x017);
#ifndef _LIB_BUILD
asm("PWM1R equ 017h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM1R                  :8;
    };
} PWM1Rbits_t;
extern volatile PWM1Rbits_t PWM1Rbits __at(0x017);
// bitfield macros
#define _PWM1R_PWM1R_POSN                                   0x0
#define _PWM1R_PWM1R_POSITION                               0x0
#define _PWM1R_PWM1R_SIZE                                   0x8
#define _PWM1R_PWM1R_LENGTH                                 0x8
#define _PWM1R_PWM1R_MASK                                   0xFF

// Register: PWM2R
#define PWM2R PWM2R
extern volatile unsigned char           PWM2R               __at(0x018);
#ifndef _LIB_BUILD
asm("PWM2R equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM2R                  :8;
    };
} PWM2Rbits_t;
extern volatile PWM2Rbits_t PWM2Rbits __at(0x018);
// bitfield macros
#define _PWM2R_PWM2R_POSN                                   0x0
#define _PWM2R_PWM2R_POSITION                               0x0
#define _PWM2R_PWM2R_SIZE                                   0x8
#define _PWM2R_PWM2R_LENGTH                                 0x8
#define _PWM2R_PWM2R_MASK                                   0xFF

// Register: PWM3R
#define PWM3R PWM3R
extern volatile unsigned char           PWM3R               __at(0x019);
#ifndef _LIB_BUILD
asm("PWM3R equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM3R                  :8;
    };
} PWM3Rbits_t;
extern volatile PWM3Rbits_t PWM3Rbits __at(0x019);
// bitfield macros
#define _PWM3R_PWM3R_POSN                                   0x0
#define _PWM3R_PWM3R_POSITION                               0x0
#define _PWM3R_PWM3R_SIZE                                   0x8
#define _PWM3R_PWM3R_LENGTH                                 0x8
#define _PWM3R_PWM3R_MASK                                   0xFF

// Register: PWMCON
#define PWMCON PWMCON
extern volatile unsigned char           PWMCON              __at(0x01A);
#ifndef _LIB_BUILD
asm("PWMCON equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM1EN                 :1;
        unsigned PWM2EN                 :1;
        unsigned PWM3EN                 :1;
    };
} PWMCONbits_t;
extern volatile PWMCONbits_t PWMCONbits __at(0x01A);
// bitfield macros
#define _PWMCON_PWM1EN_POSN                                 0x0
#define _PWMCON_PWM1EN_POSITION                             0x0
#define _PWMCON_PWM1EN_SIZE                                 0x1
#define _PWMCON_PWM1EN_LENGTH                               0x1
#define _PWMCON_PWM1EN_MASK                                 0x1
#define _PWMCON_PWM2EN_POSN                                 0x1
#define _PWMCON_PWM2EN_POSITION                             0x1
#define _PWMCON_PWM2EN_SIZE                                 0x1
#define _PWMCON_PWM2EN_LENGTH                               0x1
#define _PWMCON_PWM2EN_MASK                                 0x2
#define _PWMCON_PWM3EN_POSN                                 0x2
#define _PWMCON_PWM3EN_POSITION                             0x2
#define _PWMCON_PWM3EN_SIZE                                 0x1
#define _PWMCON_PWM3EN_LENGTH                               0x1
#define _PWMCON_PWM3EN_MASK                                 0x4

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x01B);
#ifndef _LIB_BUILD
asm("OSCCON equ 01Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
        unsigned OSCSEL0                :1;
        unsigned OSCSEL1                :1;
        unsigned OSCSTB                 :1;
    };
    struct {
        unsigned TUN                    :5;
        unsigned OSCSEL                 :2;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x01B);
// bitfield macros
#define _OSCCON_TUN0_POSN                                   0x0
#define _OSCCON_TUN0_POSITION                               0x0
#define _OSCCON_TUN0_SIZE                                   0x1
#define _OSCCON_TUN0_LENGTH                                 0x1
#define _OSCCON_TUN0_MASK                                   0x1
#define _OSCCON_TUN1_POSN                                   0x1
#define _OSCCON_TUN1_POSITION                               0x1
#define _OSCCON_TUN1_SIZE                                   0x1
#define _OSCCON_TUN1_LENGTH                                 0x1
#define _OSCCON_TUN1_MASK                                   0x2
#define _OSCCON_TUN2_POSN                                   0x2
#define _OSCCON_TUN2_POSITION                               0x2
#define _OSCCON_TUN2_SIZE                                   0x1
#define _OSCCON_TUN2_LENGTH                                 0x1
#define _OSCCON_TUN2_MASK                                   0x4
#define _OSCCON_TUN3_POSN                                   0x3
#define _OSCCON_TUN3_POSITION                               0x3
#define _OSCCON_TUN3_SIZE                                   0x1
#define _OSCCON_TUN3_LENGTH                                 0x1
#define _OSCCON_TUN3_MASK                                   0x8
#define _OSCCON_TUN4_POSN                                   0x4
#define _OSCCON_TUN4_POSITION                               0x4
#define _OSCCON_TUN4_SIZE                                   0x1
#define _OSCCON_TUN4_LENGTH                                 0x1
#define _OSCCON_TUN4_MASK                                   0x10
#define _OSCCON_OSCSEL0_POSN                                0x5
#define _OSCCON_OSCSEL0_POSITION                            0x5
#define _OSCCON_OSCSEL0_SIZE                                0x1
#define _OSCCON_OSCSEL0_LENGTH                              0x1
#define _OSCCON_OSCSEL0_MASK                                0x20
#define _OSCCON_OSCSEL1_POSN                                0x6
#define _OSCCON_OSCSEL1_POSITION                            0x6
#define _OSCCON_OSCSEL1_SIZE                                0x1
#define _OSCCON_OSCSEL1_LENGTH                              0x1
#define _OSCCON_OSCSEL1_MASK                                0x40
#define _OSCCON_OSCSTB_POSN                                 0x7
#define _OSCCON_OSCSTB_POSITION                             0x7
#define _OSCCON_OSCSTB_SIZE                                 0x1
#define _OSCCON_OSCSTB_LENGTH                               0x1
#define _OSCCON_OSCSTB_MASK                                 0x80
#define _OSCCON_TUN_POSN                                    0x0
#define _OSCCON_TUN_POSITION                                0x0
#define _OSCCON_TUN_SIZE                                    0x5
#define _OSCCON_TUN_LENGTH                                  0x5
#define _OSCCON_TUN_MASK                                    0x1F
#define _OSCCON_OSCSEL_POSN                                 0x5
#define _OSCCON_OSCSEL_POSITION                             0x5
#define _OSCCON_OSCSEL_SIZE                                 0x2
#define _OSCCON_OSCSEL_LENGTH                               0x2
#define _OSCCON_OSCSEL_MASK                                 0x60

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0x01C);
#ifndef _LIB_BUILD
asm("ADRESL equ 01Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} ADRESLbits_t;
extern volatile ADRESLbits_t ADRESLbits __at(0x01C);
// bitfield macros
#define _ADRESL_ADRESL_POSN                                 0x0
#define _ADRESL_ADRESL_POSITION                             0x0
#define _ADRESL_ADRESL_SIZE                                 0x8
#define _ADRESL_ADRESL_LENGTH                               0x8
#define _ADRESL_ADRESL_MASK                                 0xFF

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0x01D);
#ifndef _LIB_BUILD
asm("ADRESH equ 01Dh");
#endif

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x01E);
#ifndef _LIB_BUILD
asm("ADCON0 equ 01Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHS                    :5;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x01E);
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
#define _ADCON0_CHS4_POSN                                   0x6
#define _ADCON0_CHS4_POSITION                               0x6
#define _ADCON0_CHS4_SIZE                                   0x1
#define _ADCON0_CHS4_LENGTH                                 0x1
#define _ADCON0_CHS4_MASK                                   0x40
#define _ADCON0_CHS5_POSN                                   0x7
#define _ADCON0_CHS5_POSITION                               0x7
#define _ADCON0_CHS5_SIZE                                   0x1
#define _ADCON0_CHS5_LENGTH                                 0x1
#define _ADCON0_CHS5_MASK                                   0x80
#define _ADCON0_CHS_POSN                                    0x3
#define _ADCON0_CHS_POSITION                                0x3
#define _ADCON0_CHS_SIZE                                    0x5
#define _ADCON0_CHS_LENGTH                                  0x5
#define _ADCON0_CHS_MASK                                    0xF8

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x01F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
        unsigned ADFM                   :1;
        unsigned                        :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
    struct {
        unsigned VCFG                   :2;
        unsigned                        :2;
        unsigned ADCS                   :3;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x01F);
// bitfield macros
#define _ADCON1_VCFG0_POSN                                  0x0
#define _ADCON1_VCFG0_POSITION                              0x0
#define _ADCON1_VCFG0_SIZE                                  0x1
#define _ADCON1_VCFG0_LENGTH                                0x1
#define _ADCON1_VCFG0_MASK                                  0x1
#define _ADCON1_VCFG1_POSN                                  0x1
#define _ADCON1_VCFG1_POSITION                              0x1
#define _ADCON1_VCFG1_SIZE                                  0x1
#define _ADCON1_VCFG1_LENGTH                                0x1
#define _ADCON1_VCFG1_MASK                                  0x2
#define _ADCON1_ADFM_POSN                                   0x2
#define _ADCON1_ADFM_POSITION                               0x2
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x4
#define _ADCON1_ADCS0_POSN                                  0x4
#define _ADCON1_ADCS0_POSITION                              0x4
#define _ADCON1_ADCS0_SIZE                                  0x1
#define _ADCON1_ADCS0_LENGTH                                0x1
#define _ADCON1_ADCS0_MASK                                  0x10
#define _ADCON1_ADCS1_POSN                                  0x5
#define _ADCON1_ADCS1_POSITION                              0x5
#define _ADCON1_ADCS1_SIZE                                  0x1
#define _ADCON1_ADCS1_LENGTH                                0x1
#define _ADCON1_ADCS1_MASK                                  0x20
#define _ADCON1_ADCS2_POSN                                  0x6
#define _ADCON1_ADCS2_POSITION                              0x6
#define _ADCON1_ADCS2_SIZE                                  0x1
#define _ADCON1_ADCS2_LENGTH                                0x1
#define _ADCON1_ADCS2_MASK                                  0x40
#define _ADCON1_VCFG_POSN                                   0x0
#define _ADCON1_VCFG_POSITION                               0x0
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0x3
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70

// Register: OPTION_REG
#define OPTION_REG OPTION_REG
extern volatile unsigned char           OPTION_REG          __at(0x081);
#ifndef _LIB_BUILD
asm("OPTION_REG equ 081h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PS                     :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned INTEDG                 :1;
        unsigned nRAPU                  :1;
    };
    struct {
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
    };
} OPTION_REGbits_t;
extern volatile OPTION_REGbits_t OPTION_REGbits __at(0x081);
// bitfield macros
#define _OPTION_REG_PS_POSN                                 0x0
#define _OPTION_REG_PS_POSITION                             0x0
#define _OPTION_REG_PS_SIZE                                 0x3
#define _OPTION_REG_PS_LENGTH                               0x3
#define _OPTION_REG_PS_MASK                                 0x7
#define _OPTION_REG_PSA_POSN                                0x3
#define _OPTION_REG_PSA_POSITION                            0x3
#define _OPTION_REG_PSA_SIZE                                0x1
#define _OPTION_REG_PSA_LENGTH                              0x1
#define _OPTION_REG_PSA_MASK                                0x8
#define _OPTION_REG_T0SE_POSN                               0x4
#define _OPTION_REG_T0SE_POSITION                           0x4
#define _OPTION_REG_T0SE_SIZE                               0x1
#define _OPTION_REG_T0SE_LENGTH                             0x1
#define _OPTION_REG_T0SE_MASK                               0x10
#define _OPTION_REG_T0CS_POSN                               0x5
#define _OPTION_REG_T0CS_POSITION                           0x5
#define _OPTION_REG_T0CS_SIZE                               0x1
#define _OPTION_REG_T0CS_LENGTH                             0x1
#define _OPTION_REG_T0CS_MASK                               0x20
#define _OPTION_REG_INTEDG_POSN                             0x6
#define _OPTION_REG_INTEDG_POSITION                         0x6
#define _OPTION_REG_INTEDG_SIZE                             0x1
#define _OPTION_REG_INTEDG_LENGTH                           0x1
#define _OPTION_REG_INTEDG_MASK                             0x40
#define _OPTION_REG_nRAPU_POSN                              0x7
#define _OPTION_REG_nRAPU_POSITION                          0x7
#define _OPTION_REG_nRAPU_SIZE                              0x1
#define _OPTION_REG_nRAPU_LENGTH                            0x1
#define _OPTION_REG_nRAPU_MASK                              0x80
#define _OPTION_REG_PS0_POSN                                0x0
#define _OPTION_REG_PS0_POSITION                            0x0
#define _OPTION_REG_PS0_SIZE                                0x1
#define _OPTION_REG_PS0_LENGTH                              0x1
#define _OPTION_REG_PS0_MASK                                0x1
#define _OPTION_REG_PS1_POSN                                0x1
#define _OPTION_REG_PS1_POSITION                            0x1
#define _OPTION_REG_PS1_SIZE                                0x1
#define _OPTION_REG_PS1_LENGTH                              0x1
#define _OPTION_REG_PS1_MASK                                0x2
#define _OPTION_REG_PS2_POSN                                0x2
#define _OPTION_REG_PS2_POSITION                            0x2
#define _OPTION_REG_PS2_SIZE                                0x1
#define _OPTION_REG_PS2_LENGTH                              0x1
#define _OPTION_REG_PS2_MASK                                0x4

// Register: TRISGPA
#define TRISGPA TRISGPA
extern volatile unsigned char           TRISGPA             __at(0x085);
#ifndef _LIB_BUILD
asm("TRISGPA equ 085h");
#endif
// aliases
extern volatile unsigned char           TRISA               __at(0x085);
#ifndef _LIB_BUILD
asm("TRISA equ 085h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
} TRISGPAbits_t;
extern volatile TRISGPAbits_t TRISGPAbits __at(0x085);
// bitfield macros
#define _TRISGPA_TRISA0_POSN                                0x0
#define _TRISGPA_TRISA0_POSITION                            0x0
#define _TRISGPA_TRISA0_SIZE                                0x1
#define _TRISGPA_TRISA0_LENGTH                              0x1
#define _TRISGPA_TRISA0_MASK                                0x1
#define _TRISGPA_TRISA1_POSN                                0x1
#define _TRISGPA_TRISA1_POSITION                            0x1
#define _TRISGPA_TRISA1_SIZE                                0x1
#define _TRISGPA_TRISA1_LENGTH                              0x1
#define _TRISGPA_TRISA1_MASK                                0x2
#define _TRISGPA_TRISA2_POSN                                0x2
#define _TRISGPA_TRISA2_POSITION                            0x2
#define _TRISGPA_TRISA2_SIZE                                0x1
#define _TRISGPA_TRISA2_LENGTH                              0x1
#define _TRISGPA_TRISA2_MASK                                0x4
#define _TRISGPA_TRISA3_POSN                                0x3
#define _TRISGPA_TRISA3_POSITION                            0x3
#define _TRISGPA_TRISA3_SIZE                                0x1
#define _TRISGPA_TRISA3_LENGTH                              0x1
#define _TRISGPA_TRISA3_MASK                                0x8
#define _TRISGPA_TRISA4_POSN                                0x4
#define _TRISGPA_TRISA4_POSITION                            0x4
#define _TRISGPA_TRISA4_SIZE                                0x1
#define _TRISGPA_TRISA4_LENGTH                              0x1
#define _TRISGPA_TRISA4_MASK                                0x10
#define _TRISGPA_TRISA5_POSN                                0x5
#define _TRISGPA_TRISA5_POSITION                            0x5
#define _TRISGPA_TRISA5_SIZE                                0x1
#define _TRISGPA_TRISA5_LENGTH                              0x1
#define _TRISGPA_TRISA5_MASK                                0x20
#define _TRISGPA_TRISA6_POSN                                0x6
#define _TRISGPA_TRISA6_POSITION                            0x6
#define _TRISGPA_TRISA6_SIZE                                0x1
#define _TRISGPA_TRISA6_LENGTH                              0x1
#define _TRISGPA_TRISA6_MASK                                0x40
#define _TRISGPA_TRISA7_POSN                                0x7
#define _TRISGPA_TRISA7_POSITION                            0x7
#define _TRISGPA_TRISA7_SIZE                                0x1
#define _TRISGPA_TRISA7_LENGTH                              0x1
#define _TRISGPA_TRISA7_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0x085);
// bitfield macros
#define _TRISA_TRISA0_POSN                                  0x0
#define _TRISA_TRISA0_POSITION                              0x0
#define _TRISA_TRISA0_SIZE                                  0x1
#define _TRISA_TRISA0_LENGTH                                0x1
#define _TRISA_TRISA0_MASK                                  0x1
#define _TRISA_TRISA1_POSN                                  0x1
#define _TRISA_TRISA1_POSITION                              0x1
#define _TRISA_TRISA1_SIZE                                  0x1
#define _TRISA_TRISA1_LENGTH                                0x1
#define _TRISA_TRISA1_MASK                                  0x2
#define _TRISA_TRISA2_POSN                                  0x2
#define _TRISA_TRISA2_POSITION                              0x2
#define _TRISA_TRISA2_SIZE                                  0x1
#define _TRISA_TRISA2_LENGTH                                0x1
#define _TRISA_TRISA2_MASK                                  0x4
#define _TRISA_TRISA3_POSN                                  0x3
#define _TRISA_TRISA3_POSITION                              0x3
#define _TRISA_TRISA3_SIZE                                  0x1
#define _TRISA_TRISA3_LENGTH                                0x1
#define _TRISA_TRISA3_MASK                                  0x8
#define _TRISA_TRISA4_POSN                                  0x4
#define _TRISA_TRISA4_POSITION                              0x4
#define _TRISA_TRISA4_SIZE                                  0x1
#define _TRISA_TRISA4_LENGTH                                0x1
#define _TRISA_TRISA4_MASK                                  0x10
#define _TRISA_TRISA5_POSN                                  0x5
#define _TRISA_TRISA5_POSITION                              0x5
#define _TRISA_TRISA5_SIZE                                  0x1
#define _TRISA_TRISA5_LENGTH                                0x1
#define _TRISA_TRISA5_MASK                                  0x20
#define _TRISA_TRISA6_POSN                                  0x6
#define _TRISA_TRISA6_POSITION                              0x6
#define _TRISA_TRISA6_SIZE                                  0x1
#define _TRISA_TRISA6_LENGTH                                0x1
#define _TRISA_TRISA6_MASK                                  0x40
#define _TRISA_TRISA7_POSN                                  0x7
#define _TRISA_TRISA7_POSITION                              0x7
#define _TRISA_TRISA7_SIZE                                  0x1
#define _TRISA_TRISA7_LENGTH                                0x1
#define _TRISA_TRISA7_MASK                                  0x80

// Register: TRISGPB
#define TRISGPB TRISGPB
extern volatile unsigned char           TRISGPB             __at(0x086);
#ifndef _LIB_BUILD
asm("TRISGPB equ 086h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
    };
} TRISGPBbits_t;
extern volatile TRISGPBbits_t TRISGPBbits __at(0x086);
// bitfield macros
#define _TRISGPB_TRISB0_POSN                                0x0
#define _TRISGPB_TRISB0_POSITION                            0x0
#define _TRISGPB_TRISB0_SIZE                                0x1
#define _TRISGPB_TRISB0_LENGTH                              0x1
#define _TRISGPB_TRISB0_MASK                                0x1
#define _TRISGPB_TRISB1_POSN                                0x1
#define _TRISGPB_TRISB1_POSITION                            0x1
#define _TRISGPB_TRISB1_SIZE                                0x1
#define _TRISGPB_TRISB1_LENGTH                              0x1
#define _TRISGPB_TRISB1_MASK                                0x2
#define _TRISGPB_TRISB2_POSN                                0x2
#define _TRISGPB_TRISB2_POSITION                            0x2
#define _TRISGPB_TRISB2_SIZE                                0x1
#define _TRISGPB_TRISB2_LENGTH                              0x1
#define _TRISGPB_TRISB2_MASK                                0x4
#define _TRISGPB_TRISB3_POSN                                0x3
#define _TRISGPB_TRISB3_POSITION                            0x3
#define _TRISGPB_TRISB3_SIZE                                0x1
#define _TRISGPB_TRISB3_LENGTH                              0x1
#define _TRISGPB_TRISB3_MASK                                0x8
#define _TRISGPB_TRISB4_POSN                                0x4
#define _TRISGPB_TRISB4_POSITION                            0x4
#define _TRISGPB_TRISB4_SIZE                                0x1
#define _TRISGPB_TRISB4_LENGTH                              0x1
#define _TRISGPB_TRISB4_MASK                                0x10
#define _TRISGPB_TRISB5_POSN                                0x5
#define _TRISGPB_TRISB5_POSITION                            0x5
#define _TRISGPB_TRISB5_SIZE                                0x1
#define _TRISGPB_TRISB5_LENGTH                              0x1
#define _TRISGPB_TRISB5_MASK                                0x20
#define _TRISGPB_TRISB6_POSN                                0x6
#define _TRISGPB_TRISB6_POSITION                            0x6
#define _TRISGPB_TRISB6_SIZE                                0x1
#define _TRISGPB_TRISB6_LENGTH                              0x1
#define _TRISGPB_TRISB6_MASK                                0x40

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0x087);
#ifndef _LIB_BUILD
asm("PIE1 equ 087h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned TMR4IE                 :1;
        unsigned TMR1GIE                :1;
        unsigned SSPIE                  :1;
        unsigned BCLIE                  :1;
        unsigned ADIE                   :1;
        unsigned OTIE                   :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x087);
// bitfield macros
#define _PIE1_TMR1IE_POSN                                   0x0
#define _PIE1_TMR1IE_POSITION                               0x0
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x1
#define _PIE1_TMR2IE_POSN                                   0x1
#define _PIE1_TMR2IE_POSITION                               0x1
#define _PIE1_TMR2IE_SIZE                                   0x1
#define _PIE1_TMR2IE_LENGTH                                 0x1
#define _PIE1_TMR2IE_MASK                                   0x2
#define _PIE1_TMR4IE_POSN                                   0x2
#define _PIE1_TMR4IE_POSITION                               0x2
#define _PIE1_TMR4IE_SIZE                                   0x1
#define _PIE1_TMR4IE_LENGTH                                 0x1
#define _PIE1_TMR4IE_MASK                                   0x4
#define _PIE1_TMR1GIE_POSN                                  0x3
#define _PIE1_TMR1GIE_POSITION                              0x3
#define _PIE1_TMR1GIE_SIZE                                  0x1
#define _PIE1_TMR1GIE_LENGTH                                0x1
#define _PIE1_TMR1GIE_MASK                                  0x8
#define _PIE1_SSPIE_POSN                                    0x4
#define _PIE1_SSPIE_POSITION                                0x4
#define _PIE1_SSPIE_SIZE                                    0x1
#define _PIE1_SSPIE_LENGTH                                  0x1
#define _PIE1_SSPIE_MASK                                    0x10
#define _PIE1_BCLIE_POSN                                    0x5
#define _PIE1_BCLIE_POSITION                                0x5
#define _PIE1_BCLIE_SIZE                                    0x1
#define _PIE1_BCLIE_LENGTH                                  0x1
#define _PIE1_BCLIE_MASK                                    0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_OTIE_POSN                                     0x7
#define _PIE1_OTIE_POSITION                                 0x7
#define _PIE1_OTIE_SIZE                                     0x1
#define _PIE1_OTIE_LENGTH                                   0x1
#define _PIE1_OTIE_MASK                                     0x80

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x088);
#ifndef _LIB_BUILD
asm("PIE2 equ 088h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned V1UVIE                 :1;
        unsigned V1OVIE                 :1;
        unsigned V2UVIE                 :1;
        unsigned V2OVIE                 :1;
        unsigned LDIE                   :1;
        unsigned BTUVIE                 :1;
        unsigned OCIE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x088);
// bitfield macros
#define _PIE2_V1UVIE_POSN                                   0x0
#define _PIE2_V1UVIE_POSITION                               0x0
#define _PIE2_V1UVIE_SIZE                                   0x1
#define _PIE2_V1UVIE_LENGTH                                 0x1
#define _PIE2_V1UVIE_MASK                                   0x1
#define _PIE2_V1OVIE_POSN                                   0x1
#define _PIE2_V1OVIE_POSITION                               0x1
#define _PIE2_V1OVIE_SIZE                                   0x1
#define _PIE2_V1OVIE_LENGTH                                 0x1
#define _PIE2_V1OVIE_MASK                                   0x2
#define _PIE2_V2UVIE_POSN                                   0x2
#define _PIE2_V2UVIE_POSITION                               0x2
#define _PIE2_V2UVIE_SIZE                                   0x1
#define _PIE2_V2UVIE_LENGTH                                 0x1
#define _PIE2_V2UVIE_MASK                                   0x4
#define _PIE2_V2OVIE_POSN                                   0x3
#define _PIE2_V2OVIE_POSITION                               0x3
#define _PIE2_V2OVIE_SIZE                                   0x1
#define _PIE2_V2OVIE_LENGTH                                 0x1
#define _PIE2_V2OVIE_MASK                                   0x8
#define _PIE2_LDIE_POSN                                     0x4
#define _PIE2_LDIE_POSITION                                 0x4
#define _PIE2_LDIE_SIZE                                     0x1
#define _PIE2_LDIE_LENGTH                                   0x1
#define _PIE2_LDIE_MASK                                     0x10
#define _PIE2_BTUVIE_POSN                                   0x5
#define _PIE2_BTUVIE_POSITION                               0x5
#define _PIE2_BTUVIE_SIZE                                   0x1
#define _PIE2_BTUVIE_LENGTH                                 0x1
#define _PIE2_BTUVIE_MASK                                   0x20
#define _PIE2_OCIE_POSN                                     0x6
#define _PIE2_OCIE_POSITION                                 0x6
#define _PIE2_OCIE_SIZE                                     0x1
#define _PIE2_OCIE_LENGTH                                   0x1
#define _PIE2_OCIE_MASK                                     0x40

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0x089);
#ifndef _LIB_BUILD
asm("PIE3 equ 089h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned CC1IE                  :1;
        unsigned CC2IE                  :1;
        unsigned SSIE                   :1;
        unsigned VINUVIE                :1;
        unsigned VDDUVIE                :1;
        unsigned DRUVIE                 :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0x089);
// bitfield macros
#define _PIE3_TXIE_POSN                                     0x0
#define _PIE3_TXIE_POSITION                                 0x0
#define _PIE3_TXIE_SIZE                                     0x1
#define _PIE3_TXIE_LENGTH                                   0x1
#define _PIE3_TXIE_MASK                                     0x1
#define _PIE3_RCIE_POSN                                     0x1
#define _PIE3_RCIE_POSITION                                 0x1
#define _PIE3_RCIE_SIZE                                     0x1
#define _PIE3_RCIE_LENGTH                                   0x1
#define _PIE3_RCIE_MASK                                     0x2
#define _PIE3_CC1IE_POSN                                    0x2
#define _PIE3_CC1IE_POSITION                                0x2
#define _PIE3_CC1IE_SIZE                                    0x1
#define _PIE3_CC1IE_LENGTH                                  0x1
#define _PIE3_CC1IE_MASK                                    0x4
#define _PIE3_CC2IE_POSN                                    0x3
#define _PIE3_CC2IE_POSITION                                0x3
#define _PIE3_CC2IE_SIZE                                    0x1
#define _PIE3_CC2IE_LENGTH                                  0x1
#define _PIE3_CC2IE_MASK                                    0x8
#define _PIE3_SSIE_POSN                                     0x4
#define _PIE3_SSIE_POSITION                                 0x4
#define _PIE3_SSIE_SIZE                                     0x1
#define _PIE3_SSIE_LENGTH                                   0x1
#define _PIE3_SSIE_MASK                                     0x10
#define _PIE3_VINUVIE_POSN                                  0x5
#define _PIE3_VINUVIE_POSITION                              0x5
#define _PIE3_VINUVIE_SIZE                                  0x1
#define _PIE3_VINUVIE_LENGTH                                0x1
#define _PIE3_VINUVIE_MASK                                  0x20
#define _PIE3_VDDUVIE_POSN                                  0x6
#define _PIE3_VDDUVIE_POSITION                              0x6
#define _PIE3_VDDUVIE_SIZE                                  0x1
#define _PIE3_VDDUVIE_LENGTH                                0x1
#define _PIE3_VDDUVIE_MASK                                  0x40
#define _PIE3_DRUVIE_POSN                                   0x7
#define _PIE3_DRUVIE_POSITION                               0x7
#define _PIE3_DRUVIE_SIZE                                   0x1
#define _PIE3_DRUVIE_LENGTH                                 0x1
#define _PIE3_DRUVIE_MASK                                   0x80

// Register: INTEDGE1
#define INTEDGE1 INTEDGE1
extern volatile unsigned char           INTEDGE1            __at(0x08C);
#ifndef _LIB_BUILD
asm("INTEDGE1 equ 08Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VINUVINTN              :1;
        unsigned VINUVINTP              :1;
        unsigned LDINTN                 :1;
        unsigned LDINTP                 :1;
        unsigned DRUVINTN               :1;
        unsigned DRUVINTP               :1;
    };
} INTEDGE1bits_t;
extern volatile INTEDGE1bits_t INTEDGE1bits __at(0x08C);
// bitfield macros
#define _INTEDGE1_VINUVINTN_POSN                            0x0
#define _INTEDGE1_VINUVINTN_POSITION                        0x0
#define _INTEDGE1_VINUVINTN_SIZE                            0x1
#define _INTEDGE1_VINUVINTN_LENGTH                          0x1
#define _INTEDGE1_VINUVINTN_MASK                            0x1
#define _INTEDGE1_VINUVINTP_POSN                            0x1
#define _INTEDGE1_VINUVINTP_POSITION                        0x1
#define _INTEDGE1_VINUVINTP_SIZE                            0x1
#define _INTEDGE1_VINUVINTP_LENGTH                          0x1
#define _INTEDGE1_VINUVINTP_MASK                            0x2
#define _INTEDGE1_LDINTN_POSN                               0x2
#define _INTEDGE1_LDINTN_POSITION                           0x2
#define _INTEDGE1_LDINTN_SIZE                               0x1
#define _INTEDGE1_LDINTN_LENGTH                             0x1
#define _INTEDGE1_LDINTN_MASK                               0x4
#define _INTEDGE1_LDINTP_POSN                               0x3
#define _INTEDGE1_LDINTP_POSITION                           0x3
#define _INTEDGE1_LDINTP_SIZE                               0x1
#define _INTEDGE1_LDINTP_LENGTH                             0x1
#define _INTEDGE1_LDINTP_MASK                               0x8
#define _INTEDGE1_DRUVINTN_POSN                             0x4
#define _INTEDGE1_DRUVINTN_POSITION                         0x4
#define _INTEDGE1_DRUVINTN_SIZE                             0x1
#define _INTEDGE1_DRUVINTN_LENGTH                           0x1
#define _INTEDGE1_DRUVINTN_MASK                             0x10
#define _INTEDGE1_DRUVINTP_POSN                             0x5
#define _INTEDGE1_DRUVINTP_POSITION                         0x5
#define _INTEDGE1_DRUVINTP_SIZE                             0x1
#define _INTEDGE1_DRUVINTP_LENGTH                           0x1
#define _INTEDGE1_DRUVINTP_MASK                             0x20

// Register: INTEDGE2
#define INTEDGE2 INTEDGE2
extern volatile unsigned char           INTEDGE2            __at(0x08D);
#ifndef _LIB_BUILD
asm("INTEDGE2 equ 08Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned V1UVINTN               :1;
        unsigned V1UVINTP               :1;
        unsigned V1OVINTN               :1;
        unsigned V1OVINTP               :1;
        unsigned V2UVINTN               :1;
        unsigned V2UVINTP               :1;
        unsigned V2OVINTN               :1;
        unsigned V2OVINTP               :1;
    };
} INTEDGE2bits_t;
extern volatile INTEDGE2bits_t INTEDGE2bits __at(0x08D);
// bitfield macros
#define _INTEDGE2_V1UVINTN_POSN                             0x0
#define _INTEDGE2_V1UVINTN_POSITION                         0x0
#define _INTEDGE2_V1UVINTN_SIZE                             0x1
#define _INTEDGE2_V1UVINTN_LENGTH                           0x1
#define _INTEDGE2_V1UVINTN_MASK                             0x1
#define _INTEDGE2_V1UVINTP_POSN                             0x1
#define _INTEDGE2_V1UVINTP_POSITION                         0x1
#define _INTEDGE2_V1UVINTP_SIZE                             0x1
#define _INTEDGE2_V1UVINTP_LENGTH                           0x1
#define _INTEDGE2_V1UVINTP_MASK                             0x2
#define _INTEDGE2_V1OVINTN_POSN                             0x2
#define _INTEDGE2_V1OVINTN_POSITION                         0x2
#define _INTEDGE2_V1OVINTN_SIZE                             0x1
#define _INTEDGE2_V1OVINTN_LENGTH                           0x1
#define _INTEDGE2_V1OVINTN_MASK                             0x4
#define _INTEDGE2_V1OVINTP_POSN                             0x3
#define _INTEDGE2_V1OVINTP_POSITION                         0x3
#define _INTEDGE2_V1OVINTP_SIZE                             0x1
#define _INTEDGE2_V1OVINTP_LENGTH                           0x1
#define _INTEDGE2_V1OVINTP_MASK                             0x8
#define _INTEDGE2_V2UVINTN_POSN                             0x4
#define _INTEDGE2_V2UVINTN_POSITION                         0x4
#define _INTEDGE2_V2UVINTN_SIZE                             0x1
#define _INTEDGE2_V2UVINTN_LENGTH                           0x1
#define _INTEDGE2_V2UVINTN_MASK                             0x10
#define _INTEDGE2_V2UVINTP_POSN                             0x5
#define _INTEDGE2_V2UVINTP_POSITION                         0x5
#define _INTEDGE2_V2UVINTP_SIZE                             0x1
#define _INTEDGE2_V2UVINTP_LENGTH                           0x1
#define _INTEDGE2_V2UVINTP_MASK                             0x20
#define _INTEDGE2_V2OVINTN_POSN                             0x6
#define _INTEDGE2_V2OVINTN_POSITION                         0x6
#define _INTEDGE2_V2OVINTN_SIZE                             0x1
#define _INTEDGE2_V2OVINTN_LENGTH                           0x1
#define _INTEDGE2_V2OVINTN_MASK                             0x40
#define _INTEDGE2_V2OVINTP_POSN                             0x7
#define _INTEDGE2_V2OVINTP_POSITION                         0x7
#define _INTEDGE2_V2OVINTP_SIZE                             0x1
#define _INTEDGE2_V2OVINTP_LENGTH                           0x1
#define _INTEDGE2_V2OVINTP_MASK                             0x80

// Register: MODECON1
#define MODECON1 MODECON1
extern volatile unsigned char           MODECON1            __at(0x08E);
#ifndef _LIB_BUILD
asm("MODECON1 equ 08Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PDIR                   :1;
        unsigned CCLAMP                 :1;
        unsigned TOPO0                  :1;
        unsigned TOPO1                  :1;
        unsigned MSSYNC                 :1;
        unsigned MSCLK                  :1;
        unsigned MSSEL                  :1;
        unsigned BYPASS                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned TOPO                   :2;
    };
} MODECON1bits_t;
extern volatile MODECON1bits_t MODECON1bits __at(0x08E);
// bitfield macros
#define _MODECON1_PDIR_POSN                                 0x0
#define _MODECON1_PDIR_POSITION                             0x0
#define _MODECON1_PDIR_SIZE                                 0x1
#define _MODECON1_PDIR_LENGTH                               0x1
#define _MODECON1_PDIR_MASK                                 0x1
#define _MODECON1_CCLAMP_POSN                               0x1
#define _MODECON1_CCLAMP_POSITION                           0x1
#define _MODECON1_CCLAMP_SIZE                               0x1
#define _MODECON1_CCLAMP_LENGTH                             0x1
#define _MODECON1_CCLAMP_MASK                               0x2
#define _MODECON1_TOPO0_POSN                                0x2
#define _MODECON1_TOPO0_POSITION                            0x2
#define _MODECON1_TOPO0_SIZE                                0x1
#define _MODECON1_TOPO0_LENGTH                              0x1
#define _MODECON1_TOPO0_MASK                                0x4
#define _MODECON1_TOPO1_POSN                                0x3
#define _MODECON1_TOPO1_POSITION                            0x3
#define _MODECON1_TOPO1_SIZE                                0x1
#define _MODECON1_TOPO1_LENGTH                              0x1
#define _MODECON1_TOPO1_MASK                                0x8
#define _MODECON1_MSSYNC_POSN                               0x4
#define _MODECON1_MSSYNC_POSITION                           0x4
#define _MODECON1_MSSYNC_SIZE                               0x1
#define _MODECON1_MSSYNC_LENGTH                             0x1
#define _MODECON1_MSSYNC_MASK                               0x10
#define _MODECON1_MSCLK_POSN                                0x5
#define _MODECON1_MSCLK_POSITION                            0x5
#define _MODECON1_MSCLK_SIZE                                0x1
#define _MODECON1_MSCLK_LENGTH                              0x1
#define _MODECON1_MSCLK_MASK                                0x20
#define _MODECON1_MSSEL_POSN                                0x6
#define _MODECON1_MSSEL_POSITION                            0x6
#define _MODECON1_MSSEL_SIZE                                0x1
#define _MODECON1_MSSEL_LENGTH                              0x1
#define _MODECON1_MSSEL_MASK                                0x40
#define _MODECON1_BYPASS_POSN                               0x7
#define _MODECON1_BYPASS_POSITION                           0x7
#define _MODECON1_BYPASS_SIZE                               0x1
#define _MODECON1_BYPASS_LENGTH                             0x1
#define _MODECON1_BYPASS_MASK                               0x80
#define _MODECON1_TOPO_POSN                                 0x2
#define _MODECON1_TOPO_POSITION                             0x2
#define _MODECON1_TOPO_SIZE                                 0x2
#define _MODECON1_TOPO_LENGTH                               0x2
#define _MODECON1_TOPO_MASK                                 0xC

// Register: MODECON2
#define MODECON2 MODECON2
extern volatile unsigned char           MODECON2            __at(0x08F);
#ifndef _LIB_BUILD
asm("MODECON2 equ 08Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VBBR                   :5;
        unsigned BBRO                   :1;
        unsigned BUKDMBY                :1;
        unsigned SKIP                   :1;
    };
} MODECON2bits_t;
extern volatile MODECON2bits_t MODECON2bits __at(0x08F);
// bitfield macros
#define _MODECON2_VBBR_POSN                                 0x0
#define _MODECON2_VBBR_POSITION                             0x0
#define _MODECON2_VBBR_SIZE                                 0x5
#define _MODECON2_VBBR_LENGTH                               0x5
#define _MODECON2_VBBR_MASK                                 0x1F
#define _MODECON2_BBRO_POSN                                 0x5
#define _MODECON2_BBRO_POSITION                             0x5
#define _MODECON2_BBRO_SIZE                                 0x1
#define _MODECON2_BBRO_LENGTH                               0x1
#define _MODECON2_BBRO_MASK                                 0x20
#define _MODECON2_BUKDMBY_POSN                              0x6
#define _MODECON2_BUKDMBY_POSITION                          0x6
#define _MODECON2_BUKDMBY_SIZE                              0x1
#define _MODECON2_BUKDMBY_LENGTH                            0x1
#define _MODECON2_BUKDMBY_MASK                              0x40
#define _MODECON2_SKIP_POSN                                 0x7
#define _MODECON2_SKIP_POSITION                             0x7
#define _MODECON2_SKIP_SIZE                                 0x1
#define _MODECON2_SKIP_LENGTH                               0x1
#define _MODECON2_SKIP_MASK                                 0x80

// Register: EACON
#define EACON EACON
extern volatile unsigned char           EACON               __at(0x090);
#ifndef _LIB_BUILD
asm("EACON equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned I1EAF                  :1;
        unsigned I1EAR                  :1;
        unsigned I2EAF                  :1;
        unsigned I2EAR                  :1;
        unsigned V1EAF                  :1;
        unsigned V1EAR                  :1;
        unsigned V2EAF                  :1;
        unsigned V2EAR                  :1;
    };
} EACONbits_t;
extern volatile EACONbits_t EACONbits __at(0x090);
// bitfield macros
#define _EACON_I1EAF_POSN                                   0x0
#define _EACON_I1EAF_POSITION                               0x0
#define _EACON_I1EAF_SIZE                                   0x1
#define _EACON_I1EAF_LENGTH                                 0x1
#define _EACON_I1EAF_MASK                                   0x1
#define _EACON_I1EAR_POSN                                   0x1
#define _EACON_I1EAR_POSITION                               0x1
#define _EACON_I1EAR_SIZE                                   0x1
#define _EACON_I1EAR_LENGTH                                 0x1
#define _EACON_I1EAR_MASK                                   0x2
#define _EACON_I2EAF_POSN                                   0x2
#define _EACON_I2EAF_POSITION                               0x2
#define _EACON_I2EAF_SIZE                                   0x1
#define _EACON_I2EAF_LENGTH                                 0x1
#define _EACON_I2EAF_MASK                                   0x4
#define _EACON_I2EAR_POSN                                   0x3
#define _EACON_I2EAR_POSITION                               0x3
#define _EACON_I2EAR_SIZE                                   0x1
#define _EACON_I2EAR_LENGTH                                 0x1
#define _EACON_I2EAR_MASK                                   0x8
#define _EACON_V1EAF_POSN                                   0x4
#define _EACON_V1EAF_POSITION                               0x4
#define _EACON_V1EAF_SIZE                                   0x1
#define _EACON_V1EAF_LENGTH                                 0x1
#define _EACON_V1EAF_MASK                                   0x10
#define _EACON_V1EAR_POSN                                   0x5
#define _EACON_V1EAR_POSITION                               0x5
#define _EACON_V1EAR_SIZE                                   0x1
#define _EACON_V1EAR_LENGTH                                 0x1
#define _EACON_V1EAR_MASK                                   0x20
#define _EACON_V2EAF_POSN                                   0x6
#define _EACON_V2EAF_POSITION                               0x6
#define _EACON_V2EAF_SIZE                                   0x1
#define _EACON_V2EAF_LENGTH                                 0x1
#define _EACON_V2EAF_MASK                                   0x40
#define _EACON_V2EAR_POSN                                   0x7
#define _EACON_V2EAR_POSITION                               0x7
#define _EACON_V2EAR_SIZE                                   0x1
#define _EACON_V2EAR_LENGTH                                 0x1
#define _EACON_V2EAR_MASK                                   0x80

// Register: SENSECON
#define SENSECON SENSECON
extern volatile unsigned char           SENSECON            __at(0x091);
#ifndef _LIB_BUILD
asm("SENSECON equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VS1G                   :2;
        unsigned VS2G                   :2;
    };
} SENSECONbits_t;
extern volatile SENSECONbits_t SENSECONbits __at(0x091);
// bitfield macros
#define _SENSECON_VS1G_POSN                                 0x0
#define _SENSECON_VS1G_POSITION                             0x0
#define _SENSECON_VS1G_SIZE                                 0x2
#define _SENSECON_VS1G_LENGTH                               0x2
#define _SENSECON_VS1G_MASK                                 0x3
#define _SENSECON_VS2G_POSN                                 0x2
#define _SENSECON_VS2G_POSITION                             0x2
#define _SENSECON_VS2G_SIZE                                 0x2
#define _SENSECON_VS2G_LENGTH                               0x2
#define _SENSECON_VS2G_MASK                                 0xC

// Register: DEADCON1
#define DEADCON1 DEADCON1
extern volatile unsigned char           DEADCON1            __at(0x092);
#ifndef _LIB_BUILD
asm("DEADCON1 equ 092h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LDLY1                  :4;
        unsigned HDLY1                  :4;
    };
} DEADCON1bits_t;
extern volatile DEADCON1bits_t DEADCON1bits __at(0x092);
// bitfield macros
#define _DEADCON1_LDLY1_POSN                                0x0
#define _DEADCON1_LDLY1_POSITION                            0x0
#define _DEADCON1_LDLY1_SIZE                                0x4
#define _DEADCON1_LDLY1_LENGTH                              0x4
#define _DEADCON1_LDLY1_MASK                                0xF
#define _DEADCON1_HDLY1_POSN                                0x4
#define _DEADCON1_HDLY1_POSITION                            0x4
#define _DEADCON1_HDLY1_SIZE                                0x4
#define _DEADCON1_HDLY1_LENGTH                              0x4
#define _DEADCON1_HDLY1_MASK                                0xF0

// Register: DEADCON2
#define DEADCON2 DEADCON2
extern volatile unsigned char           DEADCON2            __at(0x093);
#ifndef _LIB_BUILD
asm("DEADCON2 equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LDLY2                  :4;
        unsigned HDLY2                  :4;
    };
} DEADCON2bits_t;
extern volatile DEADCON2bits_t DEADCON2bits __at(0x093);
// bitfield macros
#define _DEADCON2_LDLY2_POSN                                0x0
#define _DEADCON2_LDLY2_POSITION                            0x0
#define _DEADCON2_LDLY2_SIZE                                0x4
#define _DEADCON2_LDLY2_LENGTH                              0x4
#define _DEADCON2_LDLY2_MASK                                0xF
#define _DEADCON2_HDLY2_POSN                                0x4
#define _DEADCON2_HDLY2_POSITION                            0x4
#define _DEADCON2_HDLY2_SIZE                                0x4
#define _DEADCON2_HDLY2_LENGTH                              0x4
#define _DEADCON2_HDLY2_MASK                                0xF0

// Register: REFCON1
#define REFCON1 REFCON1
extern volatile unsigned char           REFCON1             __at(0x094);
#ifndef _LIB_BUILD
asm("REFCON1 equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned I1REFEN                :1;
        unsigned I2REFEN                :1;
        unsigned V1REFEN                :1;
        unsigned V2REFEN                :1;
        unsigned V1UVEN                 :1;
        unsigned V1OVEN                 :1;
        unsigned V2UVEN                 :1;
        unsigned V2OVEN                 :1;
    };
} REFCON1bits_t;
extern volatile REFCON1bits_t REFCON1bits __at(0x094);
// bitfield macros
#define _REFCON1_I1REFEN_POSN                               0x0
#define _REFCON1_I1REFEN_POSITION                           0x0
#define _REFCON1_I1REFEN_SIZE                               0x1
#define _REFCON1_I1REFEN_LENGTH                             0x1
#define _REFCON1_I1REFEN_MASK                               0x1
#define _REFCON1_I2REFEN_POSN                               0x1
#define _REFCON1_I2REFEN_POSITION                           0x1
#define _REFCON1_I2REFEN_SIZE                               0x1
#define _REFCON1_I2REFEN_LENGTH                             0x1
#define _REFCON1_I2REFEN_MASK                               0x2
#define _REFCON1_V1REFEN_POSN                               0x2
#define _REFCON1_V1REFEN_POSITION                           0x2
#define _REFCON1_V1REFEN_SIZE                               0x1
#define _REFCON1_V1REFEN_LENGTH                             0x1
#define _REFCON1_V1REFEN_MASK                               0x4
#define _REFCON1_V2REFEN_POSN                               0x3
#define _REFCON1_V2REFEN_POSITION                           0x3
#define _REFCON1_V2REFEN_SIZE                               0x1
#define _REFCON1_V2REFEN_LENGTH                             0x1
#define _REFCON1_V2REFEN_MASK                               0x8
#define _REFCON1_V1UVEN_POSN                                0x4
#define _REFCON1_V1UVEN_POSITION                            0x4
#define _REFCON1_V1UVEN_SIZE                                0x1
#define _REFCON1_V1UVEN_LENGTH                              0x1
#define _REFCON1_V1UVEN_MASK                                0x10
#define _REFCON1_V1OVEN_POSN                                0x5
#define _REFCON1_V1OVEN_POSITION                            0x5
#define _REFCON1_V1OVEN_SIZE                                0x1
#define _REFCON1_V1OVEN_LENGTH                              0x1
#define _REFCON1_V1OVEN_MASK                                0x20
#define _REFCON1_V2UVEN_POSN                                0x6
#define _REFCON1_V2UVEN_POSITION                            0x6
#define _REFCON1_V2UVEN_SIZE                                0x1
#define _REFCON1_V2UVEN_LENGTH                              0x1
#define _REFCON1_V2UVEN_MASK                                0x40
#define _REFCON1_V2OVEN_POSN                                0x7
#define _REFCON1_V2OVEN_POSITION                            0x7
#define _REFCON1_V2OVEN_SIZE                                0x1
#define _REFCON1_V2OVEN_LENGTH                              0x1
#define _REFCON1_V2OVEN_MASK                                0x80

// Register: REFCON2
#define REFCON2 REFCON2
extern volatile unsigned char           REFCON2             __at(0x095);
#ifndef _LIB_BUILD
asm("REFCON2 equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LDREF                  :4;
        unsigned VINUVLO                :3;
        unsigned VINUVEN                :1;
    };
} REFCON2bits_t;
extern volatile REFCON2bits_t REFCON2bits __at(0x095);
// bitfield macros
#define _REFCON2_LDREF_POSN                                 0x0
#define _REFCON2_LDREF_POSITION                             0x0
#define _REFCON2_LDREF_SIZE                                 0x4
#define _REFCON2_LDREF_LENGTH                               0x4
#define _REFCON2_LDREF_MASK                                 0xF
#define _REFCON2_VINUVLO_POSN                               0x4
#define _REFCON2_VINUVLO_POSITION                           0x4
#define _REFCON2_VINUVLO_SIZE                               0x3
#define _REFCON2_VINUVLO_LENGTH                             0x3
#define _REFCON2_VINUVLO_MASK                               0x70
#define _REFCON2_VINUVEN_POSN                               0x7
#define _REFCON2_VINUVEN_POSITION                           0x7
#define _REFCON2_VINUVEN_SIZE                               0x1
#define _REFCON2_VINUVEN_LENGTH                             0x1
#define _REFCON2_VINUVEN_MASK                               0x80

// Register: REFCON3
#define REFCON3 REFCON3
extern volatile unsigned char           REFCON3             __at(0x096);
#ifndef _LIB_BUILD
asm("REFCON3 equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned V1UVREF                :4;
        unsigned V1OVREF                :4;
    };
} REFCON3bits_t;
extern volatile REFCON3bits_t REFCON3bits __at(0x096);
// bitfield macros
#define _REFCON3_V1UVREF_POSN                               0x0
#define _REFCON3_V1UVREF_POSITION                           0x0
#define _REFCON3_V1UVREF_SIZE                               0x4
#define _REFCON3_V1UVREF_LENGTH                             0x4
#define _REFCON3_V1UVREF_MASK                               0xF
#define _REFCON3_V1OVREF_POSN                               0x4
#define _REFCON3_V1OVREF_POSITION                           0x4
#define _REFCON3_V1OVREF_SIZE                               0x4
#define _REFCON3_V1OVREF_LENGTH                             0x4
#define _REFCON3_V1OVREF_MASK                               0xF0

// Register: REFCON4
#define REFCON4 REFCON4
extern volatile unsigned char           REFCON4             __at(0x097);
#ifndef _LIB_BUILD
asm("REFCON4 equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned V2UVREF                :4;
        unsigned V2OVREF                :4;
    };
} REFCON4bits_t;
extern volatile REFCON4bits_t REFCON4bits __at(0x097);
// bitfield macros
#define _REFCON4_V2UVREF_POSN                               0x0
#define _REFCON4_V2UVREF_POSITION                           0x0
#define _REFCON4_V2UVREF_SIZE                               0x4
#define _REFCON4_V2UVREF_LENGTH                             0x4
#define _REFCON4_V2UVREF_MASK                               0xF
#define _REFCON4_V2OVREF_POSN                               0x4
#define _REFCON4_V2OVREF_POSITION                           0x4
#define _REFCON4_V2OVREF_SIZE                               0x4
#define _REFCON4_V2OVREF_LENGTH                             0x4
#define _REFCON4_V2OVREF_MASK                               0xF0

// Register: V1REF
#define V1REF V1REF
extern volatile unsigned char           V1REF               __at(0x098);
#ifndef _LIB_BUILD
asm("V1REF equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned V1REF                  :8;
    };
} V1REFbits_t;
extern volatile V1REFbits_t V1REFbits __at(0x098);
// bitfield macros
#define _V1REF_V1REF_POSN                                   0x0
#define _V1REF_V1REF_POSITION                               0x0
#define _V1REF_V1REF_SIZE                                   0x8
#define _V1REF_V1REF_LENGTH                                 0x8
#define _V1REF_V1REF_MASK                                   0xFF

// Register: V2REF
#define V2REF V2REF
extern volatile unsigned char           V2REF               __at(0x099);
#ifndef _LIB_BUILD
asm("V2REF equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned V2REF                  :8;
    };
} V2REFbits_t;
extern volatile V2REFbits_t V2REFbits __at(0x099);
// bitfield macros
#define _V2REF_V2REF_POSN                                   0x0
#define _V2REF_V2REF_POSITION                               0x0
#define _V2REF_V2REF_SIZE                                   0x8
#define _V2REF_V2REF_LENGTH                                 0x8
#define _V2REF_V2REF_MASK                                   0xFF

// Register: I1REF
#define I1REF I1REF
extern volatile unsigned char           I1REF               __at(0x09A);
#ifndef _LIB_BUILD
asm("I1REF equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned I1REF                  :8;
    };
} I1REFbits_t;
extern volatile I1REFbits_t I1REFbits __at(0x09A);
// bitfield macros
#define _I1REF_I1REF_POSN                                   0x0
#define _I1REF_I1REF_POSITION                               0x0
#define _I1REF_I1REF_SIZE                                   0x8
#define _I1REF_I1REF_LENGTH                                 0x8
#define _I1REF_I1REF_MASK                                   0xFF

// Register: I2REF
#define I2REF I2REF
extern volatile unsigned char           I2REF               __at(0x09B);
#ifndef _LIB_BUILD
asm("I2REF equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned I2REF                  :8;
    };
} I2REFbits_t;
extern volatile I2REFbits_t I2REFbits __at(0x09B);
// bitfield macros
#define _I2REF_I2REF_POSN                                   0x0
#define _I2REF_I2REF_POSITION                               0x0
#define _I2REF_I2REF_SIZE                                   0x8
#define _I2REF_I2REF_LENGTH                                 0x8
#define _I2REF_I2REF_MASK                                   0xFF

// Register: SLPCRCON
#define SLPCRCON SLPCRCON
extern volatile unsigned char           SLPCRCON            __at(0x09C);
#ifndef _LIB_BUILD
asm("SLPCRCON equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLPS                   :6;
        unsigned SLPBY                  :1;
    };
} SLPCRCONbits_t;
extern volatile SLPCRCONbits_t SLPCRCONbits __at(0x09C);
// bitfield macros
#define _SLPCRCON_SLPS_POSN                                 0x0
#define _SLPCRCON_SLPS_POSITION                             0x0
#define _SLPCRCON_SLPS_SIZE                                 0x6
#define _SLPCRCON_SLPS_LENGTH                               0x6
#define _SLPCRCON_SLPS_MASK                                 0x3F
#define _SLPCRCON_SLPBY_POSN                                0x6
#define _SLPCRCON_SLPBY_POSITION                            0x6
#define _SLPCRCON_SLPBY_SIZE                                0x1
#define _SLPCRCON_SLPBY_LENGTH                              0x1
#define _SLPCRCON_SLPBY_MASK                                0x40

// Register: SSCON
#define SSCON SSCON
extern volatile unsigned char           SSCON               __at(0x09D);
#ifndef _LIB_BUILD
asm("SSCON equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPR                   :5;
        unsigned SSCLK                  :2;
        unsigned SSEN                   :1;
    };
} SSCONbits_t;
extern volatile SSCONbits_t SSCONbits __at(0x09D);
// bitfield macros
#define _SSCON_SSPR_POSN                                    0x0
#define _SSCON_SSPR_POSITION                                0x0
#define _SSCON_SSPR_SIZE                                    0x5
#define _SSCON_SSPR_LENGTH                                  0x5
#define _SSCON_SSPR_MASK                                    0x1F
#define _SSCON_SSCLK_POSN                                   0x5
#define _SSCON_SSCLK_POSITION                               0x5
#define _SSCON_SSCLK_SIZE                                   0x2
#define _SSCON_SSCLK_LENGTH                                 0x2
#define _SSCON_SSCLK_MASK                                   0x60
#define _SSCON_SSEN_POSN                                    0x7
#define _SSCON_SSEN_POSITION                                0x7
#define _SSCON_SSEN_SIZE                                    0x1
#define _SSCON_SSEN_LENGTH                                  0x1
#define _SSCON_SSEN_MASK                                    0x80

// Register: ABECON
#define ABECON ABECON
extern volatile unsigned char           ABECON              __at(0x09E);
#ifndef _LIB_BUILD
asm("ABECON equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LD1EN                  :1;
        unsigned HD1EN                  :1;
        unsigned LD2EN                  :1;
        unsigned HD2EN                  :1;
        unsigned DEL1EN                 :1;
        unsigned DEH1EN                 :1;
        unsigned DEL2EN                 :1;
        unsigned DEH2EN                 :1;
    };
} ABECONbits_t;
extern volatile ABECONbits_t ABECONbits __at(0x09E);
// bitfield macros
#define _ABECON_LD1EN_POSN                                  0x0
#define _ABECON_LD1EN_POSITION                              0x0
#define _ABECON_LD1EN_SIZE                                  0x1
#define _ABECON_LD1EN_LENGTH                                0x1
#define _ABECON_LD1EN_MASK                                  0x1
#define _ABECON_HD1EN_POSN                                  0x1
#define _ABECON_HD1EN_POSITION                              0x1
#define _ABECON_HD1EN_SIZE                                  0x1
#define _ABECON_HD1EN_LENGTH                                0x1
#define _ABECON_HD1EN_MASK                                  0x2
#define _ABECON_LD2EN_POSN                                  0x2
#define _ABECON_LD2EN_POSITION                              0x2
#define _ABECON_LD2EN_SIZE                                  0x1
#define _ABECON_LD2EN_LENGTH                                0x1
#define _ABECON_LD2EN_MASK                                  0x4
#define _ABECON_HD2EN_POSN                                  0x3
#define _ABECON_HD2EN_POSITION                              0x3
#define _ABECON_HD2EN_SIZE                                  0x1
#define _ABECON_HD2EN_LENGTH                                0x1
#define _ABECON_HD2EN_MASK                                  0x8
#define _ABECON_DEL1EN_POSN                                 0x4
#define _ABECON_DEL1EN_POSITION                             0x4
#define _ABECON_DEL1EN_SIZE                                 0x1
#define _ABECON_DEL1EN_LENGTH                               0x1
#define _ABECON_DEL1EN_MASK                                 0x10
#define _ABECON_DEH1EN_POSN                                 0x5
#define _ABECON_DEH1EN_POSITION                             0x5
#define _ABECON_DEH1EN_SIZE                                 0x1
#define _ABECON_DEH1EN_LENGTH                               0x1
#define _ABECON_DEH1EN_MASK                                 0x20
#define _ABECON_DEL2EN_POSN                                 0x6
#define _ABECON_DEL2EN_POSITION                             0x6
#define _ABECON_DEL2EN_SIZE                                 0x1
#define _ABECON_DEL2EN_LENGTH                               0x1
#define _ABECON_DEL2EN_MASK                                 0x40
#define _ABECON_DEH2EN_POSN                                 0x7
#define _ABECON_DEH2EN_POSITION                             0x7
#define _ABECON_DEH2EN_SIZE                                 0x1
#define _ABECON_DEH2EN_LENGTH                               0x1
#define _ABECON_DEH2EN_MASK                                 0x80

// Register: OVCON
#define OVCON OVCON
extern volatile unsigned char           OVCON               __at(0x09F);
#ifndef _LIB_BUILD
asm("OVCON equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVCL1EN                :2;
        unsigned OVCH1EN                :2;
        unsigned OVCL2EN                :2;
        unsigned OVCH2EN                :2;
    };
} OVCONbits_t;
extern volatile OVCONbits_t OVCONbits __at(0x09F);
// bitfield macros
#define _OVCON_OVCL1EN_POSN                                 0x0
#define _OVCON_OVCL1EN_POSITION                             0x0
#define _OVCON_OVCL1EN_SIZE                                 0x2
#define _OVCON_OVCL1EN_LENGTH                               0x2
#define _OVCON_OVCL1EN_MASK                                 0x3
#define _OVCON_OVCH1EN_POSN                                 0x2
#define _OVCON_OVCH1EN_POSITION                             0x2
#define _OVCON_OVCH1EN_SIZE                                 0x2
#define _OVCON_OVCH1EN_LENGTH                               0x2
#define _OVCON_OVCH1EN_MASK                                 0xC
#define _OVCON_OVCL2EN_POSN                                 0x4
#define _OVCON_OVCL2EN_POSITION                             0x4
#define _OVCON_OVCL2EN_SIZE                                 0x2
#define _OVCON_OVCL2EN_LENGTH                               0x2
#define _OVCON_OVCL2EN_MASK                                 0x30
#define _OVCON_OVCH2EN_POSN                                 0x6
#define _OVCON_OVCH2EN_POSITION                             0x6
#define _OVCON_OVCH2EN_SIZE                                 0x2
#define _OVCON_OVCH2EN_LENGTH                               0x2
#define _OVCON_OVCH2EN_MASK                                 0xC0

// Register: WPUGPA
#define WPUGPA WPUGPA
extern volatile unsigned char           WPUGPA              __at(0x105);
#ifndef _LIB_BUILD
asm("WPUGPA equ 0105h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WCS0                   :1;
        unsigned WCS1                   :1;
        unsigned                        :1;
        unsigned WPUA5                  :1;
        unsigned WPUA6                  :1;
    };
} WPUGPAbits_t;
extern volatile WPUGPAbits_t WPUGPAbits __at(0x105);
// bitfield macros
#define _WPUGPA_WPUA0_POSN                                  0x0
#define _WPUGPA_WPUA0_POSITION                              0x0
#define _WPUGPA_WPUA0_SIZE                                  0x1
#define _WPUGPA_WPUA0_LENGTH                                0x1
#define _WPUGPA_WPUA0_MASK                                  0x1
#define _WPUGPA_WPUA1_POSN                                  0x1
#define _WPUGPA_WPUA1_POSITION                              0x1
#define _WPUGPA_WPUA1_SIZE                                  0x1
#define _WPUGPA_WPUA1_LENGTH                                0x1
#define _WPUGPA_WPUA1_MASK                                  0x2
#define _WPUGPA_WCS0_POSN                                   0x2
#define _WPUGPA_WCS0_POSITION                               0x2
#define _WPUGPA_WCS0_SIZE                                   0x1
#define _WPUGPA_WCS0_LENGTH                                 0x1
#define _WPUGPA_WCS0_MASK                                   0x4
#define _WPUGPA_WCS1_POSN                                   0x3
#define _WPUGPA_WCS1_POSITION                               0x3
#define _WPUGPA_WCS1_SIZE                                   0x1
#define _WPUGPA_WCS1_LENGTH                                 0x1
#define _WPUGPA_WCS1_MASK                                   0x8
#define _WPUGPA_WPUA5_POSN                                  0x5
#define _WPUGPA_WPUA5_POSITION                              0x5
#define _WPUGPA_WPUA5_SIZE                                  0x1
#define _WPUGPA_WPUA5_LENGTH                                0x1
#define _WPUGPA_WPUA5_MASK                                  0x20
#define _WPUGPA_WPUA6_POSN                                  0x6
#define _WPUGPA_WPUA6_POSITION                              0x6
#define _WPUGPA_WPUA6_SIZE                                  0x1
#define _WPUGPA_WPUA6_LENGTH                                0x1
#define _WPUGPA_WPUA6_MASK                                  0x40

// Register: WPUGPB
#define WPUGPB WPUGPB
extern volatile unsigned char           WPUGPB              __at(0x106);
#ifndef _LIB_BUILD
asm("WPUGPB equ 0106h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned WPUB1                  :1;
        unsigned WPUB2                  :1;
        unsigned WPUB3                  :1;
        unsigned WPUB4                  :1;
        unsigned WPUB5                  :1;
        unsigned WPUB6                  :1;
    };
} WPUGPBbits_t;
extern volatile WPUGPBbits_t WPUGPBbits __at(0x106);
// bitfield macros
#define _WPUGPB_WPUB1_POSN                                  0x1
#define _WPUGPB_WPUB1_POSITION                              0x1
#define _WPUGPB_WPUB1_SIZE                                  0x1
#define _WPUGPB_WPUB1_LENGTH                                0x1
#define _WPUGPB_WPUB1_MASK                                  0x2
#define _WPUGPB_WPUB2_POSN                                  0x2
#define _WPUGPB_WPUB2_POSITION                              0x2
#define _WPUGPB_WPUB2_SIZE                                  0x1
#define _WPUGPB_WPUB2_LENGTH                                0x1
#define _WPUGPB_WPUB2_MASK                                  0x4
#define _WPUGPB_WPUB3_POSN                                  0x3
#define _WPUGPB_WPUB3_POSITION                              0x3
#define _WPUGPB_WPUB3_SIZE                                  0x1
#define _WPUGPB_WPUB3_LENGTH                                0x1
#define _WPUGPB_WPUB3_MASK                                  0x8
#define _WPUGPB_WPUB4_POSN                                  0x4
#define _WPUGPB_WPUB4_POSITION                              0x4
#define _WPUGPB_WPUB4_SIZE                                  0x1
#define _WPUGPB_WPUB4_LENGTH                                0x1
#define _WPUGPB_WPUB4_MASK                                  0x10
#define _WPUGPB_WPUB5_POSN                                  0x5
#define _WPUGPB_WPUB5_POSITION                              0x5
#define _WPUGPB_WPUB5_SIZE                                  0x1
#define _WPUGPB_WPUB5_LENGTH                                0x1
#define _WPUGPB_WPUB5_MASK                                  0x20
#define _WPUGPB_WPUB6_POSN                                  0x6
#define _WPUGPB_WPUB6_POSITION                              0x6
#define _WPUGPB_WPUB6_SIZE                                  0x1
#define _WPUGPB_WPUB6_LENGTH                                0x1
#define _WPUGPB_WPUB6_MASK                                  0x40

// Register: BAUDCON
#define BAUDCON BAUDCON
extern volatile unsigned char           BAUDCON             __at(0x107);
#ifndef _LIB_BUILD
asm("BAUDCON equ 0107h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
} BAUDCONbits_t;
extern volatile BAUDCONbits_t BAUDCONbits __at(0x107);
// bitfield macros
#define _BAUDCON_ABDEN_POSN                                 0x0
#define _BAUDCON_ABDEN_POSITION                             0x0
#define _BAUDCON_ABDEN_SIZE                                 0x1
#define _BAUDCON_ABDEN_LENGTH                               0x1
#define _BAUDCON_ABDEN_MASK                                 0x1
#define _BAUDCON_WUE_POSN                                   0x1
#define _BAUDCON_WUE_POSITION                               0x1
#define _BAUDCON_WUE_SIZE                                   0x1
#define _BAUDCON_WUE_LENGTH                                 0x1
#define _BAUDCON_WUE_MASK                                   0x2
#define _BAUDCON_BRG16_POSN                                 0x3
#define _BAUDCON_BRG16_POSITION                             0x3
#define _BAUDCON_BRG16_SIZE                                 0x1
#define _BAUDCON_BRG16_LENGTH                               0x1
#define _BAUDCON_BRG16_MASK                                 0x8
#define _BAUDCON_SCKP_POSN                                  0x4
#define _BAUDCON_SCKP_POSITION                              0x4
#define _BAUDCON_SCKP_SIZE                                  0x1
#define _BAUDCON_SCKP_LENGTH                                0x1
#define _BAUDCON_SCKP_MASK                                  0x10
#define _BAUDCON_RCIDL_POSN                                 0x6
#define _BAUDCON_RCIDL_POSITION                             0x6
#define _BAUDCON_RCIDL_SIZE                                 0x1
#define _BAUDCON_RCIDL_LENGTH                               0x1
#define _BAUDCON_RCIDL_MASK                                 0x40
#define _BAUDCON_ABDOVF_POSN                                0x7
#define _BAUDCON_ABDOVF_POSITION                            0x7
#define _BAUDCON_ABDOVF_SIZE                                0x1
#define _BAUDCON_ABDOVF_LENGTH                              0x1
#define _BAUDCON_ABDOVF_MASK                                0x80

// Register: SPBRGL
#define SPBRGL SPBRGL
extern volatile unsigned char           SPBRGL              __at(0x108);
#ifndef _LIB_BUILD
asm("SPBRGL equ 0108h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGL                 :8;
    };
} SPBRGLbits_t;
extern volatile SPBRGLbits_t SPBRGLbits __at(0x108);
// bitfield macros
#define _SPBRGL_SPBRGL_POSN                                 0x0
#define _SPBRGL_SPBRGL_POSITION                             0x0
#define _SPBRGL_SPBRGL_SIZE                                 0x8
#define _SPBRGL_SPBRGL_LENGTH                               0x8
#define _SPBRGL_SPBRGL_MASK                                 0xFF

// Register: SPBRGH
#define SPBRGH SPBRGH
extern volatile unsigned char           SPBRGH              __at(0x109);
#ifndef _LIB_BUILD
asm("SPBRGH equ 0109h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH                 :8;
    };
} SPBRGHbits_t;
extern volatile SPBRGHbits_t SPBRGHbits __at(0x109);
// bitfield macros
#define _SPBRGH_SPBRGH_POSN                                 0x0
#define _SPBRGH_SPBRGH_POSITION                             0x0
#define _SPBRGH_SPBRGH_SIZE                                 0x8
#define _SPBRGH_SPBRGH_LENGTH                               0x8
#define _SPBRGH_SPBRGH_MASK                                 0xFF

// Register: RCREG
#define RCREG RCREG
extern volatile unsigned char           RCREG               __at(0x10C);
#ifndef _LIB_BUILD
asm("RCREG equ 010Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned USART_RCDAT            :8;
    };
} RCREGbits_t;
extern volatile RCREGbits_t RCREGbits __at(0x10C);
// bitfield macros
#define _RCREG_USART_RCDAT_POSN                             0x0
#define _RCREG_USART_RCDAT_POSITION                         0x0
#define _RCREG_USART_RCDAT_SIZE                             0x8
#define _RCREG_USART_RCDAT_LENGTH                           0x8
#define _RCREG_USART_RCDAT_MASK                             0xFF

// Register: TXREG
#define TXREG TXREG
extern volatile unsigned char           TXREG               __at(0x10D);
#ifndef _LIB_BUILD
asm("TXREG equ 010Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned USART_TXDAT            :8;
    };
} TXREGbits_t;
extern volatile TXREGbits_t TXREGbits __at(0x10D);
// bitfield macros
#define _TXREG_USART_TXDAT_POSN                             0x0
#define _TXREG_USART_TXDAT_POSITION                         0x0
#define _TXREG_USART_TXDAT_SIZE                             0x8
#define _TXREG_USART_TXDAT_LENGTH                           0x8
#define _TXREG_USART_TXDAT_MASK                             0xFF

// Register: TXSTA
#define TXSTA TXSTA
extern volatile unsigned char           TXSTA               __at(0x10E);
#ifndef _LIB_BUILD
asm("TXSTA equ 010Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits __at(0x10E);
// bitfield macros
#define _TXSTA_TX9D_POSN                                    0x0
#define _TXSTA_TX9D_POSITION                                0x0
#define _TXSTA_TX9D_SIZE                                    0x1
#define _TXSTA_TX9D_LENGTH                                  0x1
#define _TXSTA_TX9D_MASK                                    0x1
#define _TXSTA_TRMT_POSN                                    0x1
#define _TXSTA_TRMT_POSITION                                0x1
#define _TXSTA_TRMT_SIZE                                    0x1
#define _TXSTA_TRMT_LENGTH                                  0x1
#define _TXSTA_TRMT_MASK                                    0x2
#define _TXSTA_BRGH_POSN                                    0x2
#define _TXSTA_BRGH_POSITION                                0x2
#define _TXSTA_BRGH_SIZE                                    0x1
#define _TXSTA_BRGH_LENGTH                                  0x1
#define _TXSTA_BRGH_MASK                                    0x4
#define _TXSTA_SENDB_POSN                                   0x3
#define _TXSTA_SENDB_POSITION                               0x3
#define _TXSTA_SENDB_SIZE                                   0x1
#define _TXSTA_SENDB_LENGTH                                 0x1
#define _TXSTA_SENDB_MASK                                   0x8
#define _TXSTA_SYNC_POSN                                    0x4
#define _TXSTA_SYNC_POSITION                                0x4
#define _TXSTA_SYNC_SIZE                                    0x1
#define _TXSTA_SYNC_LENGTH                                  0x1
#define _TXSTA_SYNC_MASK                                    0x10
#define _TXSTA_TXEN_POSN                                    0x5
#define _TXSTA_TXEN_POSITION                                0x5
#define _TXSTA_TXEN_SIZE                                    0x1
#define _TXSTA_TXEN_LENGTH                                  0x1
#define _TXSTA_TXEN_MASK                                    0x20
#define _TXSTA_TX9_POSN                                     0x6
#define _TXSTA_TX9_POSITION                                 0x6
#define _TXSTA_TX9_SIZE                                     0x1
#define _TXSTA_TX9_LENGTH                                   0x1
#define _TXSTA_TX9_MASK                                     0x40
#define _TXSTA_CSRC_POSN                                    0x7
#define _TXSTA_CSRC_POSITION                                0x7
#define _TXSTA_CSRC_SIZE                                    0x1
#define _TXSTA_CSRC_LENGTH                                  0x1
#define _TXSTA_CSRC_MASK                                    0x80

// Register: RCSTA
#define RCSTA RCSTA
extern volatile unsigned char           RCSTA               __at(0x10F);
#ifndef _LIB_BUILD
asm("RCSTA equ 010Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits __at(0x10F);
// bitfield macros
#define _RCSTA_RX9D_POSN                                    0x0
#define _RCSTA_RX9D_POSITION                                0x0
#define _RCSTA_RX9D_SIZE                                    0x1
#define _RCSTA_RX9D_LENGTH                                  0x1
#define _RCSTA_RX9D_MASK                                    0x1
#define _RCSTA_OERR_POSN                                    0x1
#define _RCSTA_OERR_POSITION                                0x1
#define _RCSTA_OERR_SIZE                                    0x1
#define _RCSTA_OERR_LENGTH                                  0x1
#define _RCSTA_OERR_MASK                                    0x2
#define _RCSTA_FERR_POSN                                    0x2
#define _RCSTA_FERR_POSITION                                0x2
#define _RCSTA_FERR_SIZE                                    0x1
#define _RCSTA_FERR_LENGTH                                  0x1
#define _RCSTA_FERR_MASK                                    0x4
#define _RCSTA_ADDEN_POSN                                   0x3
#define _RCSTA_ADDEN_POSITION                               0x3
#define _RCSTA_ADDEN_SIZE                                   0x1
#define _RCSTA_ADDEN_LENGTH                                 0x1
#define _RCSTA_ADDEN_MASK                                   0x8
#define _RCSTA_CREN_POSN                                    0x4
#define _RCSTA_CREN_POSITION                                0x4
#define _RCSTA_CREN_SIZE                                    0x1
#define _RCSTA_CREN_LENGTH                                  0x1
#define _RCSTA_CREN_MASK                                    0x10
#define _RCSTA_SREN_POSN                                    0x5
#define _RCSTA_SREN_POSITION                                0x5
#define _RCSTA_SREN_SIZE                                    0x1
#define _RCSTA_SREN_LENGTH                                  0x1
#define _RCSTA_SREN_MASK                                    0x20
#define _RCSTA_RX9_POSN                                     0x6
#define _RCSTA_RX9_POSITION                                 0x6
#define _RCSTA_RX9_SIZE                                     0x1
#define _RCSTA_RX9_LENGTH                                   0x1
#define _RCSTA_RX9_MASK                                     0x40
#define _RCSTA_SPEN_POSN                                    0x7
#define _RCSTA_SPEN_POSITION                                0x7
#define _RCSTA_SPEN_SIZE                                    0x1
#define _RCSTA_SPEN_LENGTH                                  0x1
#define _RCSTA_SPEN_MASK                                    0x80

// Register: SSPADD
#define SSPADD SSPADD
extern volatile unsigned char           SSPADD              __at(0x110);
#ifndef _LIB_BUILD
asm("SSPADD equ 0110h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADD                    :8;
    };
} SSPADDbits_t;
extern volatile SSPADDbits_t SSPADDbits __at(0x110);
// bitfield macros
#define _SSPADD_ADD_POSN                                    0x0
#define _SSPADD_ADD_POSITION                                0x0
#define _SSPADD_ADD_SIZE                                    0x8
#define _SSPADD_ADD_LENGTH                                  0x8
#define _SSPADD_ADD_MASK                                    0xFF

// Register: SSPBUF
#define SSPBUF SSPBUF
extern volatile unsigned char           SSPBUF              __at(0x111);
#ifndef _LIB_BUILD
asm("SSPBUF equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSPBUFbits_t;
extern volatile SSPBUFbits_t SSPBUFbits __at(0x111);
// bitfield macros
#define _SSPBUF_SSPBUF_POSN                                 0x0
#define _SSPBUF_SSPBUF_POSITION                             0x0
#define _SSPBUF_SSPBUF_SIZE                                 0x8
#define _SSPBUF_SSPBUF_LENGTH                               0x8
#define _SSPBUF_SSPBUF_MASK                                 0xFF

// Register: SSPCON1
#define SSPCON1 SSPCON1
extern volatile unsigned char           SSPCON1             __at(0x112);
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0112h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPM                   :3;
        unsigned SSPM3                  :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits __at(0x112);
// bitfield macros
#define _SSPCON1_SSPM_POSN                                  0x0
#define _SSPCON1_SSPM_POSITION                              0x0
#define _SSPCON1_SSPM_SIZE                                  0x3
#define _SSPCON1_SSPM_LENGTH                                0x3
#define _SSPCON1_SSPM_MASK                                  0x7
#define _SSPCON1_SSPM3_POSN                                 0x3
#define _SSPCON1_SSPM3_POSITION                             0x3
#define _SSPCON1_SSPM3_SIZE                                 0x1
#define _SSPCON1_SSPM3_LENGTH                               0x1
#define _SSPCON1_SSPM3_MASK                                 0x8
#define _SSPCON1_CKP_POSN                                   0x4
#define _SSPCON1_CKP_POSITION                               0x4
#define _SSPCON1_CKP_SIZE                                   0x1
#define _SSPCON1_CKP_LENGTH                                 0x1
#define _SSPCON1_CKP_MASK                                   0x10
#define _SSPCON1_SSPEN_POSN                                 0x5
#define _SSPCON1_SSPEN_POSITION                             0x5
#define _SSPCON1_SSPEN_SIZE                                 0x1
#define _SSPCON1_SSPEN_LENGTH                               0x1
#define _SSPCON1_SSPEN_MASK                                 0x20
#define _SSPCON1_SSPOV_POSN                                 0x6
#define _SSPCON1_SSPOV_POSITION                             0x6
#define _SSPCON1_SSPOV_SIZE                                 0x1
#define _SSPCON1_SSPOV_LENGTH                               0x1
#define _SSPCON1_SSPOV_MASK                                 0x40
#define _SSPCON1_WCOL_POSN                                  0x7
#define _SSPCON1_WCOL_POSITION                              0x7
#define _SSPCON1_WCOL_SIZE                                  0x1
#define _SSPCON1_WCOL_LENGTH                                0x1
#define _SSPCON1_WCOL_MASK                                  0x80

// Register: SSPCON2
#define SSPCON2 SSPCON2
extern volatile unsigned char           SSPCON2             __at(0x113);
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
} SSPCON2bits_t;
extern volatile SSPCON2bits_t SSPCON2bits __at(0x113);
// bitfield macros
#define _SSPCON2_SEN_POSN                                   0x0
#define _SSPCON2_SEN_POSITION                               0x0
#define _SSPCON2_SEN_SIZE                                   0x1
#define _SSPCON2_SEN_LENGTH                                 0x1
#define _SSPCON2_SEN_MASK                                   0x1
#define _SSPCON2_RSEN_POSN                                  0x1
#define _SSPCON2_RSEN_POSITION                              0x1
#define _SSPCON2_RSEN_SIZE                                  0x1
#define _SSPCON2_RSEN_LENGTH                                0x1
#define _SSPCON2_RSEN_MASK                                  0x2
#define _SSPCON2_PEN_POSN                                   0x2
#define _SSPCON2_PEN_POSITION                               0x2
#define _SSPCON2_PEN_SIZE                                   0x1
#define _SSPCON2_PEN_LENGTH                                 0x1
#define _SSPCON2_PEN_MASK                                   0x4
#define _SSPCON2_RCEN_POSN                                  0x3
#define _SSPCON2_RCEN_POSITION                              0x3
#define _SSPCON2_RCEN_SIZE                                  0x1
#define _SSPCON2_RCEN_LENGTH                                0x1
#define _SSPCON2_RCEN_MASK                                  0x8
#define _SSPCON2_ACKEN_POSN                                 0x4
#define _SSPCON2_ACKEN_POSITION                             0x4
#define _SSPCON2_ACKEN_SIZE                                 0x1
#define _SSPCON2_ACKEN_LENGTH                               0x1
#define _SSPCON2_ACKEN_MASK                                 0x10
#define _SSPCON2_ACKDT_POSN                                 0x5
#define _SSPCON2_ACKDT_POSITION                             0x5
#define _SSPCON2_ACKDT_SIZE                                 0x1
#define _SSPCON2_ACKDT_LENGTH                               0x1
#define _SSPCON2_ACKDT_MASK                                 0x20
#define _SSPCON2_ACKSTAT_POSN                               0x6
#define _SSPCON2_ACKSTAT_POSITION                           0x6
#define _SSPCON2_ACKSTAT_SIZE                               0x1
#define _SSPCON2_ACKSTAT_LENGTH                             0x1
#define _SSPCON2_ACKSTAT_MASK                               0x40
#define _SSPCON2_GCEN_POSN                                  0x7
#define _SSPCON2_GCEN_POSITION                              0x7
#define _SSPCON2_GCEN_SIZE                                  0x1
#define _SSPCON2_GCEN_LENGTH                                0x1
#define _SSPCON2_GCEN_MASK                                  0x80

// Register: SSPCON3
#define SSPCON3 SSPCON3
extern volatile unsigned char           SSPCON3             __at(0x114);
#ifndef _LIB_BUILD
asm("SSPCON3 equ 0114h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DHEN                   :1;
        unsigned AHEN                   :1;
        unsigned SBCDE                  :1;
        unsigned SDAHT                  :1;
        unsigned BOEN                   :1;
        unsigned SCIE                   :1;
        unsigned PCIE                   :1;
        unsigned ACKTIM                 :1;
    };
} SSPCON3bits_t;
extern volatile SSPCON3bits_t SSPCON3bits __at(0x114);
// bitfield macros
#define _SSPCON3_DHEN_POSN                                  0x0
#define _SSPCON3_DHEN_POSITION                              0x0
#define _SSPCON3_DHEN_SIZE                                  0x1
#define _SSPCON3_DHEN_LENGTH                                0x1
#define _SSPCON3_DHEN_MASK                                  0x1
#define _SSPCON3_AHEN_POSN                                  0x1
#define _SSPCON3_AHEN_POSITION                              0x1
#define _SSPCON3_AHEN_SIZE                                  0x1
#define _SSPCON3_AHEN_LENGTH                                0x1
#define _SSPCON3_AHEN_MASK                                  0x2
#define _SSPCON3_SBCDE_POSN                                 0x2
#define _SSPCON3_SBCDE_POSITION                             0x2
#define _SSPCON3_SBCDE_SIZE                                 0x1
#define _SSPCON3_SBCDE_LENGTH                               0x1
#define _SSPCON3_SBCDE_MASK                                 0x4
#define _SSPCON3_SDAHT_POSN                                 0x3
#define _SSPCON3_SDAHT_POSITION                             0x3
#define _SSPCON3_SDAHT_SIZE                                 0x1
#define _SSPCON3_SDAHT_LENGTH                               0x1
#define _SSPCON3_SDAHT_MASK                                 0x8
#define _SSPCON3_BOEN_POSN                                  0x4
#define _SSPCON3_BOEN_POSITION                              0x4
#define _SSPCON3_BOEN_SIZE                                  0x1
#define _SSPCON3_BOEN_LENGTH                                0x1
#define _SSPCON3_BOEN_MASK                                  0x10
#define _SSPCON3_SCIE_POSN                                  0x5
#define _SSPCON3_SCIE_POSITION                              0x5
#define _SSPCON3_SCIE_SIZE                                  0x1
#define _SSPCON3_SCIE_LENGTH                                0x1
#define _SSPCON3_SCIE_MASK                                  0x20
#define _SSPCON3_PCIE_POSN                                  0x6
#define _SSPCON3_PCIE_POSITION                              0x6
#define _SSPCON3_PCIE_SIZE                                  0x1
#define _SSPCON3_PCIE_LENGTH                                0x1
#define _SSPCON3_PCIE_MASK                                  0x40
#define _SSPCON3_ACKTIM_POSN                                0x7
#define _SSPCON3_ACKTIM_POSITION                            0x7
#define _SSPCON3_ACKTIM_SIZE                                0x1
#define _SSPCON3_ACKTIM_LENGTH                              0x1
#define _SSPCON3_ACKTIM_MASK                                0x80

// Register: SSPMSK
#define SSPMSK SSPMSK
extern volatile unsigned char           SSPMSK              __at(0x115);
#ifndef _LIB_BUILD
asm("SSPMSK equ 0115h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MSK                    :8;
    };
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __at(0x115);
// bitfield macros
#define _SSPMSK_MSK_POSN                                    0x0
#define _SSPMSK_MSK_POSITION                                0x0
#define _SSPMSK_MSK_SIZE                                    0x8
#define _SSPMSK_MSK_LENGTH                                  0x8
#define _SSPMSK_MSK_MASK                                    0xFF

// Register: SSPSTAT
#define SSPSTAT SSPSTAT
extern volatile unsigned char           SSPSTAT             __at(0x116);
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0116h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits __at(0x116);
// bitfield macros
#define _SSPSTAT_BF_POSN                                    0x0
#define _SSPSTAT_BF_POSITION                                0x0
#define _SSPSTAT_BF_SIZE                                    0x1
#define _SSPSTAT_BF_LENGTH                                  0x1
#define _SSPSTAT_BF_MASK                                    0x1
#define _SSPSTAT_UA_POSN                                    0x1
#define _SSPSTAT_UA_POSITION                                0x1
#define _SSPSTAT_UA_SIZE                                    0x1
#define _SSPSTAT_UA_LENGTH                                  0x1
#define _SSPSTAT_UA_MASK                                    0x2
#define _SSPSTAT_R_nW_POSN                                  0x2
#define _SSPSTAT_R_nW_POSITION                              0x2
#define _SSPSTAT_R_nW_SIZE                                  0x1
#define _SSPSTAT_R_nW_LENGTH                                0x1
#define _SSPSTAT_R_nW_MASK                                  0x4
#define _SSPSTAT_S_POSN                                     0x3
#define _SSPSTAT_S_POSITION                                 0x3
#define _SSPSTAT_S_SIZE                                     0x1
#define _SSPSTAT_S_LENGTH                                   0x1
#define _SSPSTAT_S_MASK                                     0x8
#define _SSPSTAT_P_POSN                                     0x4
#define _SSPSTAT_P_POSITION                                 0x4
#define _SSPSTAT_P_SIZE                                     0x1
#define _SSPSTAT_P_LENGTH                                   0x1
#define _SSPSTAT_P_MASK                                     0x10
#define _SSPSTAT_D_nA_POSN                                  0x5
#define _SSPSTAT_D_nA_POSITION                              0x5
#define _SSPSTAT_D_nA_SIZE                                  0x1
#define _SSPSTAT_D_nA_LENGTH                                0x1
#define _SSPSTAT_D_nA_MASK                                  0x20
#define _SSPSTAT_CKE_POSN                                   0x6
#define _SSPSTAT_CKE_POSITION                               0x6
#define _SSPSTAT_CKE_SIZE                                   0x1
#define _SSPSTAT_CKE_LENGTH                                 0x1
#define _SSPSTAT_CKE_MASK                                   0x40
#define _SSPSTAT_SMP_POSN                                   0x7
#define _SSPSTAT_SMP_POSITION                               0x7
#define _SSPSTAT_SMP_SIZE                                   0x1
#define _SSPSTAT_SMP_LENGTH                                 0x1
#define _SSPSTAT_SMP_MASK                                   0x80

// Register: SSPADD2
#define SSPADD2 SSPADD2
extern volatile unsigned char           SSPADD2             __at(0x117);
#ifndef _LIB_BUILD
asm("SSPADD2 equ 0117h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADD2                   :8;
    };
} SSPADD2bits_t;
extern volatile SSPADD2bits_t SSPADD2bits __at(0x117);
// bitfield macros
#define _SSPADD2_ADD2_POSN                                  0x0
#define _SSPADD2_ADD2_POSITION                              0x0
#define _SSPADD2_ADD2_SIZE                                  0x8
#define _SSPADD2_ADD2_LENGTH                                0x8
#define _SSPADD2_ADD2_MASK                                  0xFF

// Register: SSPMSK2
#define SSPMSK2 SSPMSK2
extern volatile unsigned char           SSPMSK2             __at(0x118);
#ifndef _LIB_BUILD
asm("SSPMSK2 equ 0118h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MSK2                   :8;
    };
} SSPMSK2bits_t;
extern volatile SSPMSK2bits_t SSPMSK2bits __at(0x118);
// bitfield macros
#define _SSPMSK2_MSK2_POSN                                  0x0
#define _SSPMSK2_MSK2_POSITION                              0x0
#define _SSPMSK2_MSK2_SIZE                                  0x8
#define _SSPMSK2_MSK2_LENGTH                                0x8
#define _SSPMSK2_MSK2_MASK                                  0xFF

// Register: CC1RL
#define CC1RL CC1RL
extern volatile unsigned char           CC1RL               __at(0x119);
#ifndef _LIB_BUILD
asm("CC1RL equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1RL                  :8;
    };
} CC1RLbits_t;
extern volatile CC1RLbits_t CC1RLbits __at(0x119);
// bitfield macros
#define _CC1RL_CC1RL_POSN                                   0x0
#define _CC1RL_CC1RL_POSITION                               0x0
#define _CC1RL_CC1RL_SIZE                                   0x8
#define _CC1RL_CC1RL_LENGTH                                 0x8
#define _CC1RL_CC1RL_MASK                                   0xFF

// Register: CC1RH
#define CC1RH CC1RH
extern volatile unsigned char           CC1RH               __at(0x11A);
#ifndef _LIB_BUILD
asm("CC1RH equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1RH                  :8;
    };
} CC1RHbits_t;
extern volatile CC1RHbits_t CC1RHbits __at(0x11A);
// bitfield macros
#define _CC1RH_CC1RH_POSN                                   0x0
#define _CC1RH_CC1RH_POSITION                               0x0
#define _CC1RH_CC1RH_SIZE                                   0x8
#define _CC1RH_CC1RH_LENGTH                                 0x8
#define _CC1RH_CC1RH_MASK                                   0xFF

// Register: CC2RL
#define CC2RL CC2RL
extern volatile unsigned char           CC2RL               __at(0x11B);
#ifndef _LIB_BUILD
asm("CC2RL equ 011Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC2RL                  :8;
    };
} CC2RLbits_t;
extern volatile CC2RLbits_t CC2RLbits __at(0x11B);
// bitfield macros
#define _CC2RL_CC2RL_POSN                                   0x0
#define _CC2RL_CC2RL_POSITION                               0x0
#define _CC2RL_CC2RL_SIZE                                   0x8
#define _CC2RL_CC2RL_LENGTH                                 0x8
#define _CC2RL_CC2RL_MASK                                   0xFF

// Register: CC2RH
#define CC2RH CC2RH
extern volatile unsigned char           CC2RH               __at(0x11C);
#ifndef _LIB_BUILD
asm("CC2RH equ 011Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC2RH                  :8;
    };
} CC2RHbits_t;
extern volatile CC2RHbits_t CC2RHbits __at(0x11C);
// bitfield macros
#define _CC2RH_CC2RH_POSN                                   0x0
#define _CC2RH_CC2RH_POSITION                               0x0
#define _CC2RH_CC2RH_SIZE                                   0x8
#define _CC2RH_CC2RH_LENGTH                                 0x8
#define _CC2RH_CC2RH_MASK                                   0xFF

// Register: CCDCON
#define CCDCON CCDCON
extern volatile unsigned char           CCDCON              __at(0x11D);
#ifndef _LIB_BUILD
asm("CCDCON equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1M                   :4;
        unsigned CC2M                   :4;
    };
} CCDCONbits_t;
extern volatile CCDCONbits_t CCDCONbits __at(0x11D);
// bitfield macros
#define _CCDCON_CC1M_POSN                                   0x0
#define _CCDCON_CC1M_POSITION                               0x0
#define _CCDCON_CC1M_SIZE                                   0x4
#define _CCDCON_CC1M_LENGTH                                 0x4
#define _CCDCON_CC1M_MASK                                   0xF
#define _CCDCON_CC2M_POSN                                   0x4
#define _CCDCON_CC2M_POSITION                               0x4
#define _CCDCON_CC2M_SIZE                                   0x4
#define _CCDCON_CC2M_LENGTH                                 0x4
#define _CCDCON_CC2M_MASK                                   0xF0

// Register: IOCA
#define IOCA IOCA
extern volatile unsigned char           IOCA                __at(0x185);
#ifndef _LIB_BUILD
asm("IOCA equ 0185h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCA0                  :1;
        unsigned IOCA1                  :1;
        unsigned IOCA2                  :1;
        unsigned IOCA3                  :1;
        unsigned IOCA4                  :1;
        unsigned IOCA5                  :1;
        unsigned IOCA6                  :1;
        unsigned IOCA7                  :1;
    };
} IOCAbits_t;
extern volatile IOCAbits_t IOCAbits __at(0x185);
// bitfield macros
#define _IOCA_IOCA0_POSN                                    0x0
#define _IOCA_IOCA0_POSITION                                0x0
#define _IOCA_IOCA0_SIZE                                    0x1
#define _IOCA_IOCA0_LENGTH                                  0x1
#define _IOCA_IOCA0_MASK                                    0x1
#define _IOCA_IOCA1_POSN                                    0x1
#define _IOCA_IOCA1_POSITION                                0x1
#define _IOCA_IOCA1_SIZE                                    0x1
#define _IOCA_IOCA1_LENGTH                                  0x1
#define _IOCA_IOCA1_MASK                                    0x2
#define _IOCA_IOCA2_POSN                                    0x2
#define _IOCA_IOCA2_POSITION                                0x2
#define _IOCA_IOCA2_SIZE                                    0x1
#define _IOCA_IOCA2_LENGTH                                  0x1
#define _IOCA_IOCA2_MASK                                    0x4
#define _IOCA_IOCA3_POSN                                    0x3
#define _IOCA_IOCA3_POSITION                                0x3
#define _IOCA_IOCA3_SIZE                                    0x1
#define _IOCA_IOCA3_LENGTH                                  0x1
#define _IOCA_IOCA3_MASK                                    0x8
#define _IOCA_IOCA4_POSN                                    0x4
#define _IOCA_IOCA4_POSITION                                0x4
#define _IOCA_IOCA4_SIZE                                    0x1
#define _IOCA_IOCA4_LENGTH                                  0x1
#define _IOCA_IOCA4_MASK                                    0x10
#define _IOCA_IOCA5_POSN                                    0x5
#define _IOCA_IOCA5_POSITION                                0x5
#define _IOCA_IOCA5_SIZE                                    0x1
#define _IOCA_IOCA5_LENGTH                                  0x1
#define _IOCA_IOCA5_MASK                                    0x20
#define _IOCA_IOCA6_POSN                                    0x6
#define _IOCA_IOCA6_POSITION                                0x6
#define _IOCA_IOCA6_SIZE                                    0x1
#define _IOCA_IOCA6_LENGTH                                  0x1
#define _IOCA_IOCA6_MASK                                    0x40
#define _IOCA_IOCA7_POSN                                    0x7
#define _IOCA_IOCA7_POSITION                                0x7
#define _IOCA_IOCA7_SIZE                                    0x1
#define _IOCA_IOCA7_LENGTH                                  0x1
#define _IOCA_IOCA7_MASK                                    0x80

// Register: IOCB
#define IOCB IOCB
extern volatile unsigned char           IOCB                __at(0x186);
#ifndef _LIB_BUILD
asm("IOCB equ 0186h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCB0                  :1;
        unsigned IOCB1                  :1;
        unsigned IOCB2                  :1;
        unsigned IOCB3                  :1;
        unsigned IOCB4                  :1;
        unsigned IOCB5                  :1;
        unsigned IOCB6                  :1;
    };
} IOCBbits_t;
extern volatile IOCBbits_t IOCBbits __at(0x186);
// bitfield macros
#define _IOCB_IOCB0_POSN                                    0x0
#define _IOCB_IOCB0_POSITION                                0x0
#define _IOCB_IOCB0_SIZE                                    0x1
#define _IOCB_IOCB0_LENGTH                                  0x1
#define _IOCB_IOCB0_MASK                                    0x1
#define _IOCB_IOCB1_POSN                                    0x1
#define _IOCB_IOCB1_POSITION                                0x1
#define _IOCB_IOCB1_SIZE                                    0x1
#define _IOCB_IOCB1_LENGTH                                  0x1
#define _IOCB_IOCB1_MASK                                    0x2
#define _IOCB_IOCB2_POSN                                    0x2
#define _IOCB_IOCB2_POSITION                                0x2
#define _IOCB_IOCB2_SIZE                                    0x1
#define _IOCB_IOCB2_LENGTH                                  0x1
#define _IOCB_IOCB2_MASK                                    0x4
#define _IOCB_IOCB3_POSN                                    0x3
#define _IOCB_IOCB3_POSITION                                0x3
#define _IOCB_IOCB3_SIZE                                    0x1
#define _IOCB_IOCB3_LENGTH                                  0x1
#define _IOCB_IOCB3_MASK                                    0x8
#define _IOCB_IOCB4_POSN                                    0x4
#define _IOCB_IOCB4_POSITION                                0x4
#define _IOCB_IOCB4_SIZE                                    0x1
#define _IOCB_IOCB4_LENGTH                                  0x1
#define _IOCB_IOCB4_MASK                                    0x10
#define _IOCB_IOCB5_POSN                                    0x5
#define _IOCB_IOCB5_POSITION                                0x5
#define _IOCB_IOCB5_SIZE                                    0x1
#define _IOCB_IOCB5_LENGTH                                  0x1
#define _IOCB_IOCB5_MASK                                    0x20
#define _IOCB_IOCB6_POSN                                    0x6
#define _IOCB_IOCB6_POSITION                                0x6
#define _IOCB_IOCB6_SIZE                                    0x1
#define _IOCB_IOCB6_LENGTH                                  0x1
#define _IOCB_IOCB6_MASK                                    0x40

// Register: ANSEL
#define ANSEL ANSEL
extern volatile unsigned char           ANSEL               __at(0x187);
#ifndef _LIB_BUILD
asm("ANSEL equ 0187h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSA0                  :1;
        unsigned ANSA1                  :1;
        unsigned ANSA2                  :1;
        unsigned ANSA3                  :1;
        unsigned ANSB3                  :1;
        unsigned ANSB4                  :1;
        unsigned ANSB5                  :1;
        unsigned ANSB6                  :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __at(0x187);
// bitfield macros
#define _ANSEL_ANSA0_POSN                                   0x0
#define _ANSEL_ANSA0_POSITION                               0x0
#define _ANSEL_ANSA0_SIZE                                   0x1
#define _ANSEL_ANSA0_LENGTH                                 0x1
#define _ANSEL_ANSA0_MASK                                   0x1
#define _ANSEL_ANSA1_POSN                                   0x1
#define _ANSEL_ANSA1_POSITION                               0x1
#define _ANSEL_ANSA1_SIZE                                   0x1
#define _ANSEL_ANSA1_LENGTH                                 0x1
#define _ANSEL_ANSA1_MASK                                   0x2
#define _ANSEL_ANSA2_POSN                                   0x2
#define _ANSEL_ANSA2_POSITION                               0x2
#define _ANSEL_ANSA2_SIZE                                   0x1
#define _ANSEL_ANSA2_LENGTH                                 0x1
#define _ANSEL_ANSA2_MASK                                   0x4
#define _ANSEL_ANSA3_POSN                                   0x3
#define _ANSEL_ANSA3_POSITION                               0x3
#define _ANSEL_ANSA3_SIZE                                   0x1
#define _ANSEL_ANSA3_LENGTH                                 0x1
#define _ANSEL_ANSA3_MASK                                   0x8
#define _ANSEL_ANSB3_POSN                                   0x4
#define _ANSEL_ANSB3_POSITION                               0x4
#define _ANSEL_ANSB3_SIZE                                   0x1
#define _ANSEL_ANSB3_LENGTH                                 0x1
#define _ANSEL_ANSB3_MASK                                   0x10
#define _ANSEL_ANSB4_POSN                                   0x5
#define _ANSEL_ANSB4_POSITION                               0x5
#define _ANSEL_ANSB4_SIZE                                   0x1
#define _ANSEL_ANSB4_LENGTH                                 0x1
#define _ANSEL_ANSB4_MASK                                   0x20
#define _ANSEL_ANSB5_POSN                                   0x6
#define _ANSEL_ANSB5_POSITION                               0x6
#define _ANSEL_ANSB5_SIZE                                   0x1
#define _ANSEL_ANSB5_LENGTH                                 0x1
#define _ANSEL_ANSB5_MASK                                   0x40
#define _ANSEL_ANSB6_POSN                                   0x7
#define _ANSEL_ANSB6_POSITION                               0x7
#define _ANSEL_ANSB6_SIZE                                   0x1
#define _ANSEL_ANSB6_LENGTH                                 0x1
#define _ANSEL_ANSB6_MASK                                   0x80

// Register: TMUXCON0
#define TMUXCON0 TMUXCON0
extern volatile unsigned char           TMUXCON0            __at(0x188);
#ifndef _LIB_BUILD
asm("TMUXCON0 equ 0188h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AMUXEN                 :4;
        unsigned TMUXEN                 :3;
        unsigned GCTRL                  :1;
    };
} TMUXCON0bits_t;
extern volatile TMUXCON0bits_t TMUXCON0bits __at(0x188);
// bitfield macros
#define _TMUXCON0_AMUXEN_POSN                               0x0
#define _TMUXCON0_AMUXEN_POSITION                           0x0
#define _TMUXCON0_AMUXEN_SIZE                               0x4
#define _TMUXCON0_AMUXEN_LENGTH                             0x4
#define _TMUXCON0_AMUXEN_MASK                               0xF
#define _TMUXCON0_TMUXEN_POSN                               0x4
#define _TMUXCON0_TMUXEN_POSITION                           0x4
#define _TMUXCON0_TMUXEN_SIZE                               0x3
#define _TMUXCON0_TMUXEN_LENGTH                             0x3
#define _TMUXCON0_TMUXEN_MASK                               0x70
#define _TMUXCON0_GCTRL_POSN                                0x7
#define _TMUXCON0_GCTRL_POSITION                            0x7
#define _TMUXCON0_GCTRL_SIZE                                0x1
#define _TMUXCON0_GCTRL_LENGTH                              0x1
#define _TMUXCON0_GCTRL_MASK                                0x80

// Register: TMUXCON1
#define TMUXCON1 TMUXCON1
extern volatile unsigned char           TMUXCON1            __at(0x189);
#ifndef _LIB_BUILD
asm("TMUXCON1 equ 0189h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DMUX                   :5;
        unsigned DMUX0OUT               :1;
        unsigned DMUX1OUT               :1;
    };
} TMUXCON1bits_t;
extern volatile TMUXCON1bits_t TMUXCON1bits __at(0x189);
// bitfield macros
#define _TMUXCON1_DMUX_POSN                                 0x0
#define _TMUXCON1_DMUX_POSITION                             0x0
#define _TMUXCON1_DMUX_SIZE                                 0x5
#define _TMUXCON1_DMUX_LENGTH                               0x5
#define _TMUXCON1_DMUX_MASK                                 0x1F
#define _TMUXCON1_DMUX0OUT_POSN                             0x5
#define _TMUXCON1_DMUX0OUT_POSITION                         0x5
#define _TMUXCON1_DMUX0OUT_SIZE                             0x1
#define _TMUXCON1_DMUX0OUT_LENGTH                           0x1
#define _TMUXCON1_DMUX0OUT_MASK                             0x20
#define _TMUXCON1_DMUX1OUT_POSN                             0x6
#define _TMUXCON1_DMUX1OUT_POSITION                         0x6
#define _TMUXCON1_DMUX1OUT_SIZE                             0x1
#define _TMUXCON1_DMUX1OUT_LENGTH                           0x1
#define _TMUXCON1_DMUX1OUT_MASK                             0x40

// Register: PORTICD
#define PORTICD PORTICD
extern volatile unsigned char           PORTICD             __at(0x18C);
#ifndef _LIB_BUILD
asm("PORTICD equ 018Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DEBUG_PORT             :8;
    };
} PORTICDbits_t;
extern volatile PORTICDbits_t PORTICDbits __at(0x18C);
// bitfield macros
#define _PORTICD_DEBUG_PORT_POSN                            0x0
#define _PORTICD_DEBUG_PORT_POSITION                        0x0
#define _PORTICD_DEBUG_PORT_SIZE                            0x8
#define _PORTICD_DEBUG_PORT_LENGTH                          0x8
#define _PORTICD_DEBUG_PORT_MASK                            0xFF

// Register: TRISICD
#define TRISICD TRISICD
extern volatile unsigned char           TRISICD             __at(0x18D);
#ifndef _LIB_BUILD
asm("TRISICD equ 018Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DEBUG_TRIS             :8;
    };
} TRISICDbits_t;
extern volatile TRISICDbits_t TRISICDbits __at(0x18D);
// bitfield macros
#define _TRISICD_DEBUG_TRIS_POSN                            0x0
#define _TRISICD_DEBUG_TRIS_POSITION                        0x0
#define _TRISICD_DEBUG_TRIS_SIZE                            0x8
#define _TRISICD_DEBUG_TRIS_LENGTH                          0x8
#define _TRISICD_DEBUG_TRIS_MASK                            0xFF

// Register: ICKBUG
#define ICKBUG ICKBUG
extern volatile unsigned char           ICKBUG              __at(0x18E);
#ifndef _LIB_BUILD
asm("ICKBUG equ 018Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DEBUG_REGISTER         :8;
    };
} ICKBUGbits_t;
extern volatile ICKBUGbits_t ICKBUGbits __at(0x18E);
// bitfield macros
#define _ICKBUG_DEBUG_REGISTER_POSN                         0x0
#define _ICKBUG_DEBUG_REGISTER_POSITION                     0x0
#define _ICKBUG_DEBUG_REGISTER_SIZE                         0x8
#define _ICKBUG_DEBUG_REGISTER_LENGTH                       0x8
#define _ICKBUG_DEBUG_REGISTER_MASK                         0xFF

// Register: BIGBUG
#define BIGBUG BIGBUG
extern volatile unsigned char           BIGBUG              __at(0x18F);
#ifndef _LIB_BUILD
asm("BIGBUG equ 018Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DEBUG_BREAKPOINT       :8;
    };
} BIGBUGbits_t;
extern volatile BIGBUGbits_t BIGBUGbits __at(0x18F);
// bitfield macros
#define _BIGBUG_DEBUG_BREAKPOINT_POSN                       0x0
#define _BIGBUG_DEBUG_BREAKPOINT_POSITION                   0x0
#define _BIGBUG_DEBUG_BREAKPOINT_SIZE                       0x8
#define _BIGBUG_DEBUG_BREAKPOINT_LENGTH                     0x8
#define _BIGBUG_DEBUG_BREAKPOINT_MASK                       0xFF

// Register: PMCON1
#define PMCON1 PMCON1
extern volatile unsigned char           PMCON1              __at(0x190);
#ifndef _LIB_BUILD
asm("PMCON1 equ 0190h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned                        :3;
        unsigned CALSEL                 :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x190);
// bitfield macros
#define _PMCON1_RD_POSN                                     0x0
#define _PMCON1_RD_POSITION                                 0x0
#define _PMCON1_RD_SIZE                                     0x1
#define _PMCON1_RD_LENGTH                                   0x1
#define _PMCON1_RD_MASK                                     0x1
#define _PMCON1_WR_POSN                                     0x1
#define _PMCON1_WR_POSITION                                 0x1
#define _PMCON1_WR_SIZE                                     0x1
#define _PMCON1_WR_LENGTH                                   0x1
#define _PMCON1_WR_MASK                                     0x2
#define _PMCON1_WREN_POSN                                   0x2
#define _PMCON1_WREN_POSITION                               0x2
#define _PMCON1_WREN_SIZE                                   0x1
#define _PMCON1_WREN_LENGTH                                 0x1
#define _PMCON1_WREN_MASK                                   0x4
#define _PMCON1_CALSEL_POSN                                 0x6
#define _PMCON1_CALSEL_POSITION                             0x6
#define _PMCON1_CALSEL_SIZE                                 0x1
#define _PMCON1_CALSEL_LENGTH                               0x1
#define _PMCON1_CALSEL_MASK                                 0x40

// Register: PMCON2
#define PMCON2 PMCON2
extern volatile unsigned char           PMCON2              __at(0x191);
#ifndef _LIB_BUILD
asm("PMCON2 equ 0191h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PROGRAM_MEMORY_CONTROL_REG2_2 :8;
    };
} PMCON2bits_t;
extern volatile PMCON2bits_t PMCON2bits __at(0x191);
// bitfield macros
#define _PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_POSN          0x0
#define _PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_POSITION      0x0
#define _PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_SIZE          0x8
#define _PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_LENGTH        0x8
#define _PMCON2_PROGRAM_MEMORY_CONTROL_REG2_2_MASK          0xFF

// Register: PMADR
#define PMADR PMADR
extern volatile unsigned short          PMADR               __at(0x192);
#ifndef _LIB_BUILD
asm("PMADR equ 0192h");
#endif

// Register: PMADRL
#define PMADRL PMADRL
extern volatile unsigned char           PMADRL              __at(0x192);
#ifndef _LIB_BUILD
asm("PMADRL equ 0192h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRL                 :8;
    };
} PMADRLbits_t;
extern volatile PMADRLbits_t PMADRLbits __at(0x192);
// bitfield macros
#define _PMADRL_PMADRL_POSN                                 0x0
#define _PMADRL_PMADRL_POSITION                             0x0
#define _PMADRL_PMADRL_SIZE                                 0x8
#define _PMADRL_PMADRL_LENGTH                               0x8
#define _PMADRL_PMADRL_MASK                                 0xFF

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x193);
#ifndef _LIB_BUILD
asm("PMADRH equ 0193h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRH                 :5;
    };
} PMADRHbits_t;
extern volatile PMADRHbits_t PMADRHbits __at(0x193);
// bitfield macros
#define _PMADRH_PMADRH_POSN                                 0x0
#define _PMADRH_PMADRH_POSITION                             0x0
#define _PMADRH_PMADRH_SIZE                                 0x5
#define _PMADRH_PMADRH_LENGTH                               0x5
#define _PMADRH_PMADRH_MASK                                 0x1F

// Register: PMDAT
#define PMDAT PMDAT
extern volatile unsigned short          PMDAT               __at(0x194);
#ifndef _LIB_BUILD
asm("PMDAT equ 0194h");
#endif

// Register: PMADATL
#define PMADATL PMADATL
extern volatile unsigned char           PMADATL             __at(0x194);
#ifndef _LIB_BUILD
asm("PMADATL equ 0194h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADATL                :8;
    };
} PMADATLbits_t;
extern volatile PMADATLbits_t PMADATLbits __at(0x194);
// bitfield macros
#define _PMADATL_PMADATL_POSN                               0x0
#define _PMADATL_PMADATL_POSITION                           0x0
#define _PMADATL_PMADATL_SIZE                               0x8
#define _PMADATL_PMADATL_LENGTH                             0x8
#define _PMADATL_PMADATL_MASK                               0xFF

// Register: PMADATH
#define PMADATH PMADATH
extern volatile unsigned char           PMADATH             __at(0x195);
#ifndef _LIB_BUILD
asm("PMADATH equ 0195h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADATH                :6;
    };
} PMADATHbits_t;
extern volatile PMADATHbits_t PMADATHbits __at(0x195);
// bitfield macros
#define _PMADATH_PMADATH_POSN                               0x0
#define _PMADATH_PMADATH_POSITION                           0x0
#define _PMADATH_PMADATH_SIZE                               0x6
#define _PMADATH_PMADATH_LENGTH                             0x6
#define _PMADATH_PMADATH_MASK                               0x3F

// Register: CALCON1
#define CALCON1 CALCON1
extern volatile unsigned char           CALCON1             __at(0x196);
#ifndef _LIB_BUILD
asm("CALCON1 equ 0196h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
    };
} CALCON1bits_t;
extern volatile CALCON1bits_t CALCON1bits __at(0x196);
// bitfield macros
#define _CALCON1_WR_POSN                                    0x1
#define _CALCON1_WR_POSITION                                0x1
#define _CALCON1_WR_SIZE                                    0x1
#define _CALCON1_WR_LENGTH                                  0x1
#define _CALCON1_WR_MASK                                    0x2
#define _CALCON1_WREN_POSN                                  0x2
#define _CALCON1_WREN_POSITION                              0x2
#define _CALCON1_WREN_SIZE                                  0x1
#define _CALCON1_WREN_LENGTH                                0x1
#define _CALCON1_WREN_MASK                                  0x4

// Register: CALCON2
#define CALCON2 CALCON2
extern volatile unsigned char           CALCON2             __at(0x197);
#ifndef _LIB_BUILD
asm("CALCON2 equ 0197h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CAL_REG_CONTROL        :8;
    };
} CALCON2bits_t;
extern volatile CALCON2bits_t CALCON2bits __at(0x197);
// bitfield macros
#define _CALCON2_CAL_REG_CONTROL_POSN                       0x0
#define _CALCON2_CAL_REG_CONTROL_POSITION                   0x0
#define _CALCON2_CAL_REG_CONTROL_SIZE                       0x8
#define _CALCON2_CAL_REG_CONTROL_LENGTH                     0x8
#define _CALCON2_CAL_REG_CONTROL_MASK                       0xFF

// Register: CALADR
#define CALADR CALADR
extern volatile unsigned char           CALADR              __at(0x198);
#ifndef _LIB_BUILD
asm("CALADR equ 0198h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CALADR                 :8;
    };
} CALADRbits_t;
extern volatile CALADRbits_t CALADRbits __at(0x198);
// bitfield macros
#define _CALADR_CALADR_POSN                                 0x0
#define _CALADR_CALADR_POSITION                             0x0
#define _CALADR_CALADR_SIZE                                 0x8
#define _CALADR_CALADR_LENGTH                               0x8
#define _CALADR_CALADR_MASK                                 0xFF

// Register: CALDATWR
#define CALDATWR CALDATWR
extern volatile unsigned char           CALDATWR            __at(0x199);
#ifndef _LIB_BUILD
asm("CALDATWR equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CALDATWR               :8;
    };
} CALDATWRbits_t;
extern volatile CALDATWRbits_t CALDATWRbits __at(0x199);
// bitfield macros
#define _CALDATWR_CALDATWR_POSN                             0x0
#define _CALDATWR_CALDATWR_POSITION                         0x0
#define _CALDATWR_CALDATWR_SIZE                             0x8
#define _CALDATWR_CALDATWR_LENGTH                           0x8
#define _CALDATWR_CALDATWR_MASK                             0xFF

// Register: CALDATRD
#define CALDATRD CALDATRD
extern volatile unsigned char           CALDATRD            __at(0x19A);
#ifndef _LIB_BUILD
asm("CALDATRD equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CALDATRD               :8;
    };
} CALDATRDbits_t;
extern volatile CALDATRDbits_t CALDATRDbits __at(0x19A);
// bitfield macros
#define _CALDATRD_CALDATRD_POSN                             0x0
#define _CALDATRD_CALDATRD_POSITION                         0x0
#define _CALDATRD_CALDATRD_SIZE                             0x8
#define _CALDATRD_CALDATRD_LENGTH                           0x8
#define _CALDATRD_CALDATRD_MASK                             0xFF

// Register: ATSTCON0
#define ATSTCON0 ATSTCON0
extern volatile unsigned char           ATSTCON0            __at(0x19B);
#ifndef _LIB_BUILD
asm("ATSTCON0 equ 019Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMPTBY                 :1;
        unsigned DRUVBY                 :1;
        unsigned BGCHOP                 :1;
        unsigned HSIAHIGHGAIN           :1;
        unsigned SWFRQOR                :1;
        unsigned TSTOT                  :1;
        unsigned BRGBY                  :1;
        unsigned TSTGM                  :1;
    };
} ATSTCON0bits_t;
extern volatile ATSTCON0bits_t ATSTCON0bits __at(0x19B);
// bitfield macros
#define _ATSTCON0_TMPTBY_POSN                               0x0
#define _ATSTCON0_TMPTBY_POSITION                           0x0
#define _ATSTCON0_TMPTBY_SIZE                               0x1
#define _ATSTCON0_TMPTBY_LENGTH                             0x1
#define _ATSTCON0_TMPTBY_MASK                               0x1
#define _ATSTCON0_DRUVBY_POSN                               0x1
#define _ATSTCON0_DRUVBY_POSITION                           0x1
#define _ATSTCON0_DRUVBY_SIZE                               0x1
#define _ATSTCON0_DRUVBY_LENGTH                             0x1
#define _ATSTCON0_DRUVBY_MASK                               0x2
#define _ATSTCON0_BGCHOP_POSN                               0x2
#define _ATSTCON0_BGCHOP_POSITION                           0x2
#define _ATSTCON0_BGCHOP_SIZE                               0x1
#define _ATSTCON0_BGCHOP_LENGTH                             0x1
#define _ATSTCON0_BGCHOP_MASK                               0x4
#define _ATSTCON0_HSIAHIGHGAIN_POSN                         0x3
#define _ATSTCON0_HSIAHIGHGAIN_POSITION                     0x3
#define _ATSTCON0_HSIAHIGHGAIN_SIZE                         0x1
#define _ATSTCON0_HSIAHIGHGAIN_LENGTH                       0x1
#define _ATSTCON0_HSIAHIGHGAIN_MASK                         0x8
#define _ATSTCON0_SWFRQOR_POSN                              0x4
#define _ATSTCON0_SWFRQOR_POSITION                          0x4
#define _ATSTCON0_SWFRQOR_SIZE                              0x1
#define _ATSTCON0_SWFRQOR_LENGTH                            0x1
#define _ATSTCON0_SWFRQOR_MASK                              0x10
#define _ATSTCON0_TSTOT_POSN                                0x5
#define _ATSTCON0_TSTOT_POSITION                            0x5
#define _ATSTCON0_TSTOT_SIZE                                0x1
#define _ATSTCON0_TSTOT_LENGTH                              0x1
#define _ATSTCON0_TSTOT_MASK                                0x20
#define _ATSTCON0_BRGBY_POSN                                0x6
#define _ATSTCON0_BRGBY_POSITION                            0x6
#define _ATSTCON0_BRGBY_SIZE                                0x1
#define _ATSTCON0_BRGBY_LENGTH                              0x1
#define _ATSTCON0_BRGBY_MASK                                0x40
#define _ATSTCON0_TSTGM_POSN                                0x7
#define _ATSTCON0_TSTGM_POSITION                            0x7
#define _ATSTCON0_TSTGM_SIZE                                0x1
#define _ATSTCON0_TSTGM_LENGTH                              0x1
#define _ATSTCON0_TSTGM_MASK                                0x80

// Register: ATSTCON1
#define ATSTCON1 ATSTCON1
extern volatile unsigned char           ATSTCON1            __at(0x19C);
#ifndef _LIB_BUILD
asm("ATSTCON1 equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LSBIAS                 :2;
        unsigned DEADTBY                :1;
        unsigned EAGMRANGE              :2;
    };
} ATSTCON1bits_t;
extern volatile ATSTCON1bits_t ATSTCON1bits __at(0x19C);
// bitfield macros
#define _ATSTCON1_LSBIAS_POSN                               0x0
#define _ATSTCON1_LSBIAS_POSITION                           0x0
#define _ATSTCON1_LSBIAS_SIZE                               0x2
#define _ATSTCON1_LSBIAS_LENGTH                             0x2
#define _ATSTCON1_LSBIAS_MASK                               0x3
#define _ATSTCON1_DEADTBY_POSN                              0x2
#define _ATSTCON1_DEADTBY_POSITION                          0x2
#define _ATSTCON1_DEADTBY_SIZE                              0x1
#define _ATSTCON1_DEADTBY_LENGTH                            0x1
#define _ATSTCON1_DEADTBY_MASK                              0x4
#define _ATSTCON1_EAGMRANGE_POSN                            0x3
#define _ATSTCON1_EAGMRANGE_POSITION                        0x3
#define _ATSTCON1_EAGMRANGE_SIZE                            0x2
#define _ATSTCON1_EAGMRANGE_LENGTH                          0x2
#define _ATSTCON1_EAGMRANGE_MASK                            0x18

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&07Fh)
#endif
#define _BIT_ACCESS(r,b) ___mkstr(BANKMASK(r)) "," ___mkstr(b)
#ifndef PAGEMASK
#define PAGEMASK(addr) ((addr)&07FFh)
#endif
// BAUDCON<ABDEN>
extern volatile __bit                   ABDEN               __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUDCON,0)
// BAUDCON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0x83F);	// @ (0x107 * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUDCON,7)
// SSPCON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x89D);	// @ (0x113 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSPCON2,5)
// SSPCON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x89C);	// @ (0x113 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSPCON2,4)
// SSPCON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x89E);	// @ (0x113 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSPCON2,6)
// SSPCON3<ACKTIM>
extern volatile __bit                   ACKTIM              __at(0x8A7);	// @ (0x114 * 8 + 7)
#define                                 ACKTIM_bit          _BIT_ACCESS(SSPCON3,7)
// ADCON1<ADCS0>
extern volatile __bit                   ADCS0               __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON1,6)
// RCSTA<ADDEN>
extern volatile __bit                   ADDEN               __at(0x87B);	// @ (0x10F * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RCSTA,3)
// ADCON1<ADFM>
extern volatile __bit                   ADFM                __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON1,2)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x43E);	// @ (0x87 * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF0);	// @ (0x1E * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// SSPCON3<AHEN>
extern volatile __bit                   AHEN                __at(0x8A1);	// @ (0x114 * 8 + 1)
#define                                 AHEN_bit            _BIT_ACCESS(SSPCON3,1)
// ANSEL<ANSA0>
extern volatile __bit                   ANSA0               __at(0xC38);	// @ (0x187 * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSEL,0)
// ANSEL<ANSA1>
extern volatile __bit                   ANSA1               __at(0xC39);	// @ (0x187 * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSEL,1)
// ANSEL<ANSA2>
extern volatile __bit                   ANSA2               __at(0xC3A);	// @ (0x187 * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSEL,2)
// ANSEL<ANSA3>
extern volatile __bit                   ANSA3               __at(0xC3B);	// @ (0x187 * 8 + 3)
#define                                 ANSA3_bit           _BIT_ACCESS(ANSEL,3)
// ANSEL<ANSB3>
extern volatile __bit                   ANSB3               __at(0xC3C);	// @ (0x187 * 8 + 4)
#define                                 ANSB3_bit           _BIT_ACCESS(ANSEL,4)
// ANSEL<ANSB4>
extern volatile __bit                   ANSB4               __at(0xC3D);	// @ (0x187 * 8 + 5)
#define                                 ANSB4_bit           _BIT_ACCESS(ANSEL,5)
// ANSEL<ANSB5>
extern volatile __bit                   ANSB5               __at(0xC3E);	// @ (0x187 * 8 + 6)
#define                                 ANSB5_bit           _BIT_ACCESS(ANSEL,6)
// ANSEL<ANSB6>
extern volatile __bit                   ANSB6               __at(0xC3F);	// @ (0x187 * 8 + 7)
#define                                 ANSB6_bit           _BIT_ACCESS(ANSEL,7)
// MODECON2<BBRO>
extern volatile __bit                   BBRO                __at(0x47D);	// @ (0x8F * 8 + 5)
#define                                 BBRO_bit            _BIT_ACCESS(MODECON2,5)
// PIE1<BCLIE>
extern volatile __bit                   BCLIE               __at(0x43D);	// @ (0x87 * 8 + 5)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<BCLIF>
extern volatile __bit                   BCLIF               __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR1,5)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// ATSTCON0<BGCHOP>
extern volatile __bit                   BGCHOP              __at(0xCDA);	// @ (0x19B * 8 + 2)
#define                                 BGCHOP_bit          _BIT_ACCESS(ATSTCON0,2)
// SSPCON3<BOEN>
extern volatile __bit                   BOEN                __at(0x8A4);	// @ (0x114 * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSPCON3,4)
// BAUDCON<BRG16>
extern volatile __bit                   BRG16               __at(0x83B);	// @ (0x107 * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUDCON,3)
// ATSTCON0<BRGBY>
extern volatile __bit                   BRGBY               __at(0xCDE);	// @ (0x19B * 8 + 6)
#define                                 BRGBY_bit           _BIT_ACCESS(ATSTCON0,6)
// TXSTA<BRGH>
extern volatile __bit                   BRGH                __at(0x872);	// @ (0x10E * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA,2)
// PIE2<BTUVIE>
extern volatile __bit                   BTUVIE              __at(0x445);	// @ (0x88 * 8 + 5)
#define                                 BTUVIE_bit          _BIT_ACCESS(PIE2,5)
// PIR2<BTUVIF>
extern volatile __bit                   BTUVIF              __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 BTUVIF_bit          _BIT_ACCESS(PIR2,5)
// MODECON2<BUKDMBY>
extern volatile __bit                   BUKDMBY             __at(0x47E);	// @ (0x8F * 8 + 6)
#define                                 BUKDMBY_bit         _BIT_ACCESS(MODECON2,6)
// MODECON1<BYPASS>
extern volatile __bit                   BYPASS              __at(0x477);	// @ (0x8E * 8 + 7)
#define                                 BYPASS_bit          _BIT_ACCESS(MODECON1,7)
// PMCON1<CALSEL>
extern volatile __bit                   CALSEL              __at(0xC86);	// @ (0x190 * 8 + 6)
#define                                 CALSEL_bit          _BIT_ACCESS(PMCON1,6)
// PIE3<CC1IE>
extern volatile __bit                   CC1IE               __at(0x44A);	// @ (0x89 * 8 + 2)
#define                                 CC1IE_bit           _BIT_ACCESS(PIE3,2)
// PIR3<CC1IF>
extern volatile __bit                   CC1IF               __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 CC1IF_bit           _BIT_ACCESS(PIR3,2)
// PIE3<CC2IE>
extern volatile __bit                   CC2IE               __at(0x44B);	// @ (0x89 * 8 + 3)
#define                                 CC2IE_bit           _BIT_ACCESS(PIE3,3)
// PIR3<CC2IF>
extern volatile __bit                   CC2IF               __at(0x4B);	// @ (0x9 * 8 + 3)
#define                                 CC2IF_bit           _BIT_ACCESS(PIR3,3)
// MODECON1<CCLAMP>
extern volatile __bit                   CCLAMP              __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 CCLAMP_bit          _BIT_ACCESS(MODECON1,1)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xF2);	// @ (0x1E * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xF3);	// @ (0x1E * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xF4);	// @ (0x1E * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0xF5);	// @ (0x1E * 8 + 5)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,5)
// ADCON0<CHS4>
extern volatile __bit                   CHS4                __at(0xF6);	// @ (0x1E * 8 + 6)
#define                                 CHS4_bit            _BIT_ACCESS(ADCON0,6)
// ADCON0<CHS5>
extern volatile __bit                   CHS5                __at(0xF7);	// @ (0x1E * 8 + 7)
#define                                 CHS5_bit            _BIT_ACCESS(ADCON0,7)
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x8B6);	// @ (0x116 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON1<CKP>
extern volatile __bit                   CKP                 __at(0x894);	// @ (0x112 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON1,4)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0x87C);	// @ (0x10F * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0x877);	// @ (0x10E * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// ATSTCON1<DEADTBY>
extern volatile __bit                   DEADTBY             __at(0xCE2);	// @ (0x19C * 8 + 2)
#define                                 DEADTBY_bit         _BIT_ACCESS(ATSTCON1,2)
// ABECON<DEH1EN>
extern volatile __bit                   DEH1EN              __at(0x4F5);	// @ (0x9E * 8 + 5)
#define                                 DEH1EN_bit          _BIT_ACCESS(ABECON,5)
// ABECON<DEH2EN>
extern volatile __bit                   DEH2EN              __at(0x4F7);	// @ (0x9E * 8 + 7)
#define                                 DEH2EN_bit          _BIT_ACCESS(ABECON,7)
// ABECON<DEL1EN>
extern volatile __bit                   DEL1EN              __at(0x4F4);	// @ (0x9E * 8 + 4)
#define                                 DEL1EN_bit          _BIT_ACCESS(ABECON,4)
// ABECON<DEL2EN>
extern volatile __bit                   DEL2EN              __at(0x4F6);	// @ (0x9E * 8 + 6)
#define                                 DEL2EN_bit          _BIT_ACCESS(ABECON,6)
// SSPCON3<DHEN>
extern volatile __bit                   DHEN                __at(0x8A0);	// @ (0x114 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSPCON3,0)
// TMUXCON1<DMUX0OUT>
extern volatile __bit                   DMUX0OUT            __at(0xC4D);	// @ (0x189 * 8 + 5)
#define                                 DMUX0OUT_bit        _BIT_ACCESS(TMUXCON1,5)
// TMUXCON1<DMUX1OUT>
extern volatile __bit                   DMUX1OUT            __at(0xC4E);	// @ (0x189 * 8 + 6)
#define                                 DMUX1OUT_bit        _BIT_ACCESS(TMUXCON1,6)
// ATSTCON0<DRUVBY>
extern volatile __bit                   DRUVBY              __at(0xCD9);	// @ (0x19B * 8 + 1)
#define                                 DRUVBY_bit          _BIT_ACCESS(ATSTCON0,1)
// PIE3<DRUVIE>
extern volatile __bit                   DRUVIE              __at(0x44F);	// @ (0x89 * 8 + 7)
#define                                 DRUVIE_bit          _BIT_ACCESS(PIE3,7)
// INTEDGE1<DRUVINTN>
extern volatile __bit                   DRUVINTN            __at(0x464);	// @ (0x8C * 8 + 4)
#define                                 DRUVINTN_bit        _BIT_ACCESS(INTEDGE1,4)
// INTEDGE1<DRUVINTP>
extern volatile __bit                   DRUVINTP            __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 DRUVINTP_bit        _BIT_ACCESS(INTEDGE1,5)
// PIR3<DRVUVIF>
extern volatile __bit                   DRVUVIF             __at(0x4F);	// @ (0x9 * 8 + 7)
#define                                 DRVUVIF_bit         _BIT_ACCESS(PIR3,7)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x8B5);	// @ (0x116 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0x87A);	// @ (0x10F * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// SSPCON2<GCEN>
extern volatile __bit                   GCEN                __at(0x89F);	// @ (0x113 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSPCON2,7)
// TMUXCON0<GCTRL>
extern volatile __bit                   GCTRL               __at(0xC47);	// @ (0x188 * 8 + 7)
#define                                 GCTRL_bit           _BIT_ACCESS(TMUXCON0,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xF1);	// @ (0x1E * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// PORTGPA<GPA0>
extern volatile __bit                   GPA0                __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 GPA0_bit            _BIT_ACCESS(PORTGPA,0)
// PORTGPA<GPA1>
extern volatile __bit                   GPA1                __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 GPA1_bit            _BIT_ACCESS(PORTGPA,1)
// PORTGPA<GPA2>
extern volatile __bit                   GPA2                __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 GPA2_bit            _BIT_ACCESS(PORTGPA,2)
// PORTGPA<GPA3>
extern volatile __bit                   GPA3                __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 GPA3_bit            _BIT_ACCESS(PORTGPA,3)
// PORTGPA<GPA4>
extern volatile __bit                   GPA4                __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 GPA4_bit            _BIT_ACCESS(PORTGPA,4)
// PORTGPA<GPA5>
extern volatile __bit                   GPA5                __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 GPA5_bit            _BIT_ACCESS(PORTGPA,5)
// PORTGPA<GPA6>
extern volatile __bit                   GPA6                __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 GPA6_bit            _BIT_ACCESS(PORTGPA,6)
// PORTGPA<GPA7>
extern volatile __bit                   GPA7                __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 GPA7_bit            _BIT_ACCESS(PORTGPA,7)
// PORTGPB<GPB0>
extern volatile __bit                   GPB0                __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 GPB0_bit            _BIT_ACCESS(PORTGPB,0)
// PORTGPB<GPB1>
extern volatile __bit                   GPB1                __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 GPB1_bit            _BIT_ACCESS(PORTGPB,1)
// PORTGPB<GPB2>
extern volatile __bit                   GPB2                __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 GPB2_bit            _BIT_ACCESS(PORTGPB,2)
// PORTGPB<GPB3>
extern volatile __bit                   GPB3                __at(0x33);	// @ (0x6 * 8 + 3)
#define                                 GPB3_bit            _BIT_ACCESS(PORTGPB,3)
// PORTGPB<GPB4>
extern volatile __bit                   GPB4                __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 GPB4_bit            _BIT_ACCESS(PORTGPB,4)
// PORTGPB<GPB5>
extern volatile __bit                   GPB5                __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 GPB5_bit            _BIT_ACCESS(PORTGPB,5)
// PORTGPB<GPB6>
extern volatile __bit                   GPB6                __at(0x36);	// @ (0x6 * 8 + 6)
#define                                 GPB6_bit            _BIT_ACCESS(PORTGPB,6)
// PORTGPA<GPIO0>
extern volatile __bit                   GPIO0               __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 GPIO0_bit           _BIT_ACCESS(PORTGPA,0)
// PORTGPA<GPIO1>
extern volatile __bit                   GPIO1               __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 GPIO1_bit           _BIT_ACCESS(PORTGPA,1)
// PORTGPA<GPIO2>
extern volatile __bit                   GPIO2               __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 GPIO2_bit           _BIT_ACCESS(PORTGPA,2)
// PORTGPA<GPIO3>
extern volatile __bit                   GPIO3               __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 GPIO3_bit           _BIT_ACCESS(PORTGPA,3)
// PORTGPA<GPIO4>
extern volatile __bit                   GPIO4               __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 GPIO4_bit           _BIT_ACCESS(PORTGPA,4)
// PORTGPA<GPIO5>
extern volatile __bit                   GPIO5               __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 GPIO5_bit           _BIT_ACCESS(PORTGPA,5)
// PORTGPA<GPIO6>
extern volatile __bit                   GPIO6               __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 GPIO6_bit           _BIT_ACCESS(PORTGPA,6)
// PORTGPA<GPIO7>
extern volatile __bit                   GPIO7               __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 GPIO7_bit           _BIT_ACCESS(PORTGPA,7)
// ABECON<HD1EN>
extern volatile __bit                   HD1EN               __at(0x4F1);	// @ (0x9E * 8 + 1)
#define                                 HD1EN_bit           _BIT_ACCESS(ABECON,1)
// ABECON<HD2EN>
extern volatile __bit                   HD2EN               __at(0x4F3);	// @ (0x9E * 8 + 3)
#define                                 HD2EN_bit           _BIT_ACCESS(ABECON,3)
// ATSTCON0<HSIAHIGHGAIN>
extern volatile __bit                   HSIAHIGHGAIN        __at(0xCDB);	// @ (0x19B * 8 + 3)
#define                                 HSIAHIGHGAIN_bit    _BIT_ACCESS(ATSTCON0,3)
// EACON<I1EAF>
extern volatile __bit                   I1EAF               __at(0x480);	// @ (0x90 * 8 + 0)
#define                                 I1EAF_bit           _BIT_ACCESS(EACON,0)
// EACON<I1EAR>
extern volatile __bit                   I1EAR               __at(0x481);	// @ (0x90 * 8 + 1)
#define                                 I1EAR_bit           _BIT_ACCESS(EACON,1)
// REFCON1<I1REFEN>
extern volatile __bit                   I1REFEN             __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 I1REFEN_bit         _BIT_ACCESS(REFCON1,0)
// EACON<I2EAF>
extern volatile __bit                   I2EAF               __at(0x482);	// @ (0x90 * 8 + 2)
#define                                 I2EAF_bit           _BIT_ACCESS(EACON,2)
// EACON<I2EAR>
extern volatile __bit                   I2EAR               __at(0x483);	// @ (0x90 * 8 + 3)
#define                                 I2EAR_bit           _BIT_ACCESS(EACON,3)
// REFCON1<I2REFEN>
extern volatile __bit                   I2REFEN             __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 I2REFEN_bit         _BIT_ACCESS(REFCON1,1)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x40E);	// @ (0x81 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// IOCA<IOCA0>
extern volatile __bit                   IOCA0               __at(0xC28);	// @ (0x185 * 8 + 0)
#define                                 IOCA0_bit           _BIT_ACCESS(IOCA,0)
// IOCA<IOCA1>
extern volatile __bit                   IOCA1               __at(0xC29);	// @ (0x185 * 8 + 1)
#define                                 IOCA1_bit           _BIT_ACCESS(IOCA,1)
// IOCA<IOCA2>
extern volatile __bit                   IOCA2               __at(0xC2A);	// @ (0x185 * 8 + 2)
#define                                 IOCA2_bit           _BIT_ACCESS(IOCA,2)
// IOCA<IOCA3>
extern volatile __bit                   IOCA3               __at(0xC2B);	// @ (0x185 * 8 + 3)
#define                                 IOCA3_bit           _BIT_ACCESS(IOCA,3)
// IOCA<IOCA4>
extern volatile __bit                   IOCA4               __at(0xC2C);	// @ (0x185 * 8 + 4)
#define                                 IOCA4_bit           _BIT_ACCESS(IOCA,4)
// IOCA<IOCA5>
extern volatile __bit                   IOCA5               __at(0xC2D);	// @ (0x185 * 8 + 5)
#define                                 IOCA5_bit           _BIT_ACCESS(IOCA,5)
// IOCA<IOCA6>
extern volatile __bit                   IOCA6               __at(0xC2E);	// @ (0x185 * 8 + 6)
#define                                 IOCA6_bit           _BIT_ACCESS(IOCA,6)
// IOCA<IOCA7>
extern volatile __bit                   IOCA7               __at(0xC2F);	// @ (0x185 * 8 + 7)
#define                                 IOCA7_bit           _BIT_ACCESS(IOCA,7)
// IOCB<IOCB0>
extern volatile __bit                   IOCB0               __at(0xC30);	// @ (0x186 * 8 + 0)
#define                                 IOCB0_bit           _BIT_ACCESS(IOCB,0)
// IOCB<IOCB1>
extern volatile __bit                   IOCB1               __at(0xC31);	// @ (0x186 * 8 + 1)
#define                                 IOCB1_bit           _BIT_ACCESS(IOCB,1)
// IOCB<IOCB2>
extern volatile __bit                   IOCB2               __at(0xC32);	// @ (0x186 * 8 + 2)
#define                                 IOCB2_bit           _BIT_ACCESS(IOCB,2)
// IOCB<IOCB3>
extern volatile __bit                   IOCB3               __at(0xC33);	// @ (0x186 * 8 + 3)
#define                                 IOCB3_bit           _BIT_ACCESS(IOCB,3)
// IOCB<IOCB4>
extern volatile __bit                   IOCB4               __at(0xC34);	// @ (0x186 * 8 + 4)
#define                                 IOCB4_bit           _BIT_ACCESS(IOCB,4)
// IOCB<IOCB5>
extern volatile __bit                   IOCB5               __at(0xC35);	// @ (0x186 * 8 + 5)
#define                                 IOCB5_bit           _BIT_ACCESS(IOCB,5)
// IOCB<IOCB6>
extern volatile __bit                   IOCB6               __at(0xC36);	// @ (0x186 * 8 + 6)
#define                                 IOCB6_bit           _BIT_ACCESS(IOCB,6)
// INTCON<IOCE>
extern volatile __bit                   IOCE                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 IOCE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<IOCF>
extern volatile __bit                   IOCF                __at(0x58);	// @ (0xB * 8 + 0)
#define                                 IOCF_bit            _BIT_ACCESS(INTCON,0)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// ABECON<LD1EN>
extern volatile __bit                   LD1EN               __at(0x4F0);	// @ (0x9E * 8 + 0)
#define                                 LD1EN_bit           _BIT_ACCESS(ABECON,0)
// ABECON<LD2EN>
extern volatile __bit                   LD2EN               __at(0x4F2);	// @ (0x9E * 8 + 2)
#define                                 LD2EN_bit           _BIT_ACCESS(ABECON,2)
// PIE2<LDIE>
extern volatile __bit                   LDIE                __at(0x444);	// @ (0x88 * 8 + 4)
#define                                 LDIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<LDIF>
extern volatile __bit                   LDIF                __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 LDIF_bit            _BIT_ACCESS(PIR2,4)
// INTEDGE1<LDINTN>
extern volatile __bit                   LDINTN              __at(0x462);	// @ (0x8C * 8 + 2)
#define                                 LDINTN_bit          _BIT_ACCESS(INTEDGE1,2)
// INTEDGE1<LDINTP>
extern volatile __bit                   LDINTP              __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 LDINTP_bit          _BIT_ACCESS(INTEDGE1,3)
// PCON<LDO_LP>
extern volatile __bit                   LDO_LP              __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 LDO_LP_bit          _BIT_ACCESS(PCON,4)
// PCON<LDO_LV>
extern volatile __bit                   LDO_LV              __at(0xA5);	// @ (0x14 * 8 + 5)
#define                                 LDO_LV_bit          _BIT_ACCESS(PCON,5)
// MODECON1<MSCLK>
extern volatile __bit                   MSCLK               __at(0x475);	// @ (0x8E * 8 + 5)
#define                                 MSCLK_bit           _BIT_ACCESS(MODECON1,5)
// MODECON1<MSSEL>
extern volatile __bit                   MSSEL               __at(0x476);	// @ (0x8E * 8 + 6)
#define                                 MSSEL_bit           _BIT_ACCESS(MODECON1,6)
// MODECON1<MSSYNC>
extern volatile __bit                   MSSYNC              __at(0x474);	// @ (0x8E * 8 + 4)
#define                                 MSSYNC_bit          _BIT_ACCESS(MODECON1,4)
// PIE2<OCIE>
extern volatile __bit                   OCIE                __at(0x446);	// @ (0x88 * 8 + 6)
#define                                 OCIE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<OCIF>
extern volatile __bit                   OCIF                __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 OCIF_bit            _BIT_ACCESS(PIR2,6)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0x879);	// @ (0x10F * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// OSCCON<OSCSEL0>
extern volatile __bit                   OSCSEL0             __at(0xDD);	// @ (0x1B * 8 + 5)
#define                                 OSCSEL0_bit         _BIT_ACCESS(OSCCON,5)
// OSCCON<OSCSEL1>
extern volatile __bit                   OSCSEL1             __at(0xDE);	// @ (0x1B * 8 + 6)
#define                                 OSCSEL1_bit         _BIT_ACCESS(OSCCON,6)
// OSCCON<OSCSTB>
extern volatile __bit                   OSCSTB              __at(0xDF);	// @ (0x1B * 8 + 7)
#define                                 OSCSTB_bit          _BIT_ACCESS(OSCCON,7)
// PIE1<OTIE>
extern volatile __bit                   OTIE                __at(0x43F);	// @ (0x87 * 8 + 7)
#define                                 OTIE_bit            _BIT_ACCESS(PIE1,7)
// PIR1<OTIF>
extern volatile __bit                   OTIF                __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 OTIF_bit            _BIT_ACCESS(PIR1,7)
// SSPCON3<PCIE>
extern volatile __bit                   PCIE                __at(0x8A6);	// @ (0x114 * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSPCON3,6)
// MODECON1<PDIR>
extern volatile __bit                   PDIR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 PDIR_bit            _BIT_ACCESS(MODECON1,0)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// SSPCON2<PEN>
extern volatile __bit                   PEN                 __at(0x89A);	// @ (0x113 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSPCON2,2)
// OPTION_REG<PS0>
extern volatile __bit                   PS0                 __at(0x408);	// @ (0x81 * 8 + 0)
#define                                 PS0_bit             _BIT_ACCESS(OPTION_REG,0)
// OPTION_REG<PS1>
extern volatile __bit                   PS1                 __at(0x409);	// @ (0x81 * 8 + 1)
#define                                 PS1_bit             _BIT_ACCESS(OPTION_REG,1)
// OPTION_REG<PS2>
extern volatile __bit                   PS2                 __at(0x40A);	// @ (0x81 * 8 + 2)
#define                                 PS2_bit             _BIT_ACCESS(OPTION_REG,2)
// OPTION_REG<PSA>
extern volatile __bit                   PSA                 __at(0x40B);	// @ (0x81 * 8 + 3)
#define                                 PSA_bit             _BIT_ACCESS(OPTION_REG,3)
// PWMCON<PWM1EN>
extern volatile __bit                   PWM1EN              __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 PWM1EN_bit          _BIT_ACCESS(PWMCON,0)
// PWMCON<PWM2EN>
extern volatile __bit                   PWM2EN              __at(0xD1);	// @ (0x1A * 8 + 1)
#define                                 PWM2EN_bit          _BIT_ACCESS(PWMCON,1)
// PWMCON<PWM3EN>
extern volatile __bit                   PWM3EN              __at(0xD2);	// @ (0x1A * 8 + 2)
#define                                 PWM3EN_bit          _BIT_ACCESS(PWMCON,2)
// PORTGPA<RA0>
extern volatile __bit                   RA0                 __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTGPA,0)
// PORTGPA<RA1>
extern volatile __bit                   RA1                 __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTGPA,1)
// PORTGPA<RA2>
extern volatile __bit                   RA2                 __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTGPA,2)
// PORTGPA<RA3>
extern volatile __bit                   RA3                 __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTGPA,3)
// PORTGPA<RA4>
extern volatile __bit                   RA4                 __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTGPA,4)
// PORTGPA<RA5>
extern volatile __bit                   RA5                 __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTGPA,5)
// PORTGPA<RA6>
extern volatile __bit                   RA6                 __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 RA6_bit             _BIT_ACCESS(PORTGPA,6)
// PORTGPA<RA7>
extern volatile __bit                   RA7                 __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 RA7_bit             _BIT_ACCESS(PORTGPA,7)
// PORTGPB<RB0>
extern volatile __bit                   RB0                 __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTGPB,0)
// PORTGPB<RB1>
extern volatile __bit                   RB1                 __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTGPB,1)
// PORTGPB<RB2>
extern volatile __bit                   RB2                 __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTGPB,2)
// PORTGPB<RB4>
extern volatile __bit                   RB4                 __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTGPB,4)
// PORTGPB<RB5>
extern volatile __bit                   RB5                 __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTGPB,5)
// PORTGPB<RB6>
extern volatile __bit                   RB6                 __at(0x36);	// @ (0x6 * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTGPB,6)
// PORTGPB<RB7>
extern volatile __bit                   RB7                 __at(0x37);	// @ (0x6 * 8 + 7)
#define                                 RB7_bit             _BIT_ACCESS(PORTGPB,7)
// SSPCON2<RCEN>
extern volatile __bit                   RCEN                __at(0x89B);	// @ (0x113 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSPCON2,3)
// BAUDCON<RCIDL>
extern volatile __bit                   RCIDL               __at(0x83E);	// @ (0x107 * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUDCON,6)
// PIE3<RCIE>
extern volatile __bit                   RCIE                __at(0x449);	// @ (0x89 * 8 + 1)
#define                                 RCIE_bit            _BIT_ACCESS(PIE3,1)
// PIR3<RCIF>
extern volatile __bit                   RCIF                __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 RCIF_bit            _BIT_ACCESS(PIR3,1)
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xC80);	// @ (0x190 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// SSPCON2<RSEN>
extern volatile __bit                   RSEN                __at(0x899);	// @ (0x113 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSPCON2,1)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0x87E);	// @ (0x10F * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0x878);	// @ (0x10F * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x8B2);	// @ (0x116 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// SSPCON3<SBCDE>
extern volatile __bit                   SBCDE               __at(0x8A2);	// @ (0x114 * 8 + 2)
#define                                 SBCDE_bit           _BIT_ACCESS(SSPCON3,2)
// SSPCON3<SCIE>
extern volatile __bit                   SCIE                __at(0x8A5);	// @ (0x114 * 8 + 5)
#define                                 SCIE_bit            _BIT_ACCESS(SSPCON3,5)
// BAUDCON<SCKP>
extern volatile __bit                   SCKP                __at(0x83C);	// @ (0x107 * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUDCON,4)
// SSPCON3<SDAHT>
extern volatile __bit                   SDAHT               __at(0x8A3);	// @ (0x114 * 8 + 3)
#define                                 SDAHT_bit           _BIT_ACCESS(SSPCON3,3)
// SSPCON2<SEN>
extern volatile __bit                   SEN                 __at(0x898);	// @ (0x113 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSPCON2,0)
// TXSTA<SENDB>
extern volatile __bit                   SENDB               __at(0x873);	// @ (0x10E * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TXSTA,3)
// MODECON2<SKIP>
extern volatile __bit                   SKIP                __at(0x47F);	// @ (0x8F * 8 + 7)
#define                                 SKIP_bit            _BIT_ACCESS(MODECON2,7)
// SLPCRCON<SLPBY>
extern volatile __bit                   SLPBY               __at(0x4E6);	// @ (0x9C * 8 + 6)
#define                                 SLPBY_bit           _BIT_ACCESS(SLPCRCON,6)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0x87F);	// @ (0x10F * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0x87D);	// @ (0x10F * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// SSCON<SSEN>
extern volatile __bit                   SSEN                __at(0x4EF);	// @ (0x9D * 8 + 7)
#define                                 SSEN_bit            _BIT_ACCESS(SSCON,7)
// PIE3<SSIE>
extern volatile __bit                   SSIE                __at(0x44C);	// @ (0x89 * 8 + 4)
#define                                 SSIE_bit            _BIT_ACCESS(PIE3,4)
// PIR3<SSIF>
extern volatile __bit                   SSIF                __at(0x4C);	// @ (0x9 * 8 + 4)
#define                                 SSIF_bit            _BIT_ACCESS(PIR3,4)
// SSPCON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x895);	// @ (0x112 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSPCON1,5)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x43C);	// @ (0x87 * 8 + 4)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,4)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,4)
// SSPCON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x893);	// @ (0x112 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSPCON1,3)
// SSPCON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x896);	// @ (0x112 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSPCON1,6)
// ATSTCON0<SWFRQOR>
extern volatile __bit                   SWFRQOR             __at(0xCDC);	// @ (0x19B * 8 + 4)
#define                                 SWFRQOR_bit         _BIT_ACCESS(ATSTCON0,4)
// TXSTA<SYNC>
extern volatile __bit                   SYNC                __at(0x874);	// @ (0x10E * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TXSTA,4)
// OPTION_REG<T0CS>
extern volatile __bit                   T0CS                __at(0x40D);	// @ (0x81 * 8 + 5)
#define                                 T0CS_bit            _BIT_ACCESS(OPTION_REG,5)
// INTCON<T0IE>
extern volatile __bit                   T0IE                __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 T0IE_bit            _BIT_ACCESS(INTCON,5)
// INTCON<T0IF>
extern volatile __bit                   T0IF                __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 T0IF_bit            _BIT_ACCESS(INTCON,2)
// OPTION_REG<T0SE>
extern volatile __bit                   T0SE                __at(0x40C);	// @ (0x81 * 8 + 4)
#define                                 T0SE_bit            _BIT_ACCESS(OPTION_REG,4)
// TCON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x9C);	// @ (0x13 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(TCON,4)
// TCON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x9D);	// @ (0x13 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(TCON,5)
// T1GCON<T1GO_DONE>
extern volatile __bit                   T1GO_DONE           __at(0x73);	// @ (0xE * 8 + 3)
#define                                 T1GO_DONE_bit       _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0x76);	// @ (0xE * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0x74);	// @ (0xE * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0x70);	// @ (0xE * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0x71);	// @ (0xE * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GCON,1)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0x75);	// @ (0xE * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0x72);	// @ (0xE * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
// TCON<T4CKPS0>
extern volatile __bit                   T4CKPS0             __at(0x9E);	// @ (0x13 * 8 + 6)
#define                                 T4CKPS0_bit         _BIT_ACCESS(TCON,6)
// TCON<T4CKPS1>
extern volatile __bit                   T4CKPS1             __at(0x9F);	// @ (0x13 * 8 + 7)
#define                                 T4CKPS1_bit         _BIT_ACCESS(TCON,7)
// PIR1<TIMR1GIF>
extern volatile __bit                   TIMR1GIF            __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 TIMR1GIF_bit        _BIT_ACCESS(PIR1,3)
// PIR1<TIMR4IF>
extern volatile __bit                   TIMR4IF             __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 TIMR4IF_bit         _BIT_ACCESS(PIR1,2)
// ATSTCON0<TMPTBY>
extern volatile __bit                   TMPTBY              __at(0xCD8);	// @ (0x19B * 8 + 0)
#define                                 TMPTBY_bit          _BIT_ACCESS(ATSTCON0,0)
// TCON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x9B);	// @ (0x13 * 8 + 3)
#define                                 TMR1CS_bit          _BIT_ACCESS(TCON,3)
// T1GCON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0x77);	// @ (0xE * 8 + 7)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1GCON,7)
// PIE1<TMR1GIE>
extern volatile __bit                   TMR1GIE             __at(0x43B);	// @ (0x87 * 8 + 3)
#define                                 TMR1GIE_bit         _BIT_ACCESS(PIE1,3)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x438);	// @ (0x87 * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// TCON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x98);	// @ (0x13 * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(TCON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x439);	// @ (0x87 * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// TCON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x99);	// @ (0x13 * 8 + 1)
#define                                 TMR2ON_bit          _BIT_ACCESS(TCON,1)
// PIE1<TMR4IE>
extern volatile __bit                   TMR4IE              __at(0x43A);	// @ (0x87 * 8 + 2)
#define                                 TMR4IE_bit          _BIT_ACCESS(PIE1,2)
// TCON<TMR4ON>
extern volatile __bit                   TMR4ON              __at(0x9A);	// @ (0x13 * 8 + 2)
#define                                 TMR4ON_bit          _BIT_ACCESS(TCON,2)
// MODECON1<TOPO0>
extern volatile __bit                   TOPO0               __at(0x472);	// @ (0x8E * 8 + 2)
#define                                 TOPO0_bit           _BIT_ACCESS(MODECON1,2)
// MODECON1<TOPO1>
extern volatile __bit                   TOPO1               __at(0x473);	// @ (0x8E * 8 + 3)
#define                                 TOPO1_bit           _BIT_ACCESS(MODECON1,3)
// TRISGPA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x428);	// @ (0x85 * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISGPA,0)
// TRISGPA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x429);	// @ (0x85 * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISGPA,1)
// TRISGPA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x42A);	// @ (0x85 * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISGPA,2)
// TRISGPA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x42B);	// @ (0x85 * 8 + 3)
#define                                 TRISA3_bit          _BIT_ACCESS(TRISGPA,3)
// TRISGPA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x42C);	// @ (0x85 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISGPA,4)
// TRISGPA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x42D);	// @ (0x85 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISGPA,5)
// TRISGPA<TRISA6>
extern volatile __bit                   TRISA6              __at(0x42E);	// @ (0x85 * 8 + 6)
#define                                 TRISA6_bit          _BIT_ACCESS(TRISGPA,6)
// TRISGPA<TRISA7>
extern volatile __bit                   TRISA7              __at(0x42F);	// @ (0x85 * 8 + 7)
#define                                 TRISA7_bit          _BIT_ACCESS(TRISGPA,7)
// TRISGPB<TRISB0>
extern volatile __bit                   TRISB0              __at(0x430);	// @ (0x86 * 8 + 0)
#define                                 TRISB0_bit          _BIT_ACCESS(TRISGPB,0)
// TRISGPB<TRISB1>
extern volatile __bit                   TRISB1              __at(0x431);	// @ (0x86 * 8 + 1)
#define                                 TRISB1_bit          _BIT_ACCESS(TRISGPB,1)
// TRISGPB<TRISB2>
extern volatile __bit                   TRISB2              __at(0x432);	// @ (0x86 * 8 + 2)
#define                                 TRISB2_bit          _BIT_ACCESS(TRISGPB,2)
// TRISGPB<TRISB3>
extern volatile __bit                   TRISB3              __at(0x433);	// @ (0x86 * 8 + 3)
#define                                 TRISB3_bit          _BIT_ACCESS(TRISGPB,3)
// TRISGPB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x434);	// @ (0x86 * 8 + 4)
#define                                 TRISB4_bit          _BIT_ACCESS(TRISGPB,4)
// TRISGPB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x435);	// @ (0x86 * 8 + 5)
#define                                 TRISB5_bit          _BIT_ACCESS(TRISGPB,5)
// TRISGPB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x436);	// @ (0x86 * 8 + 6)
#define                                 TRISB6_bit          _BIT_ACCESS(TRISGPB,6)
// TXSTA<TRMT>
extern volatile __bit                   TRMT                __at(0x871);	// @ (0x10E * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA,1)
// ATSTCON0<TSTGM>
extern volatile __bit                   TSTGM               __at(0xCDF);	// @ (0x19B * 8 + 7)
#define                                 TSTGM_bit           _BIT_ACCESS(ATSTCON0,7)
// ATSTCON0<TSTOT>
extern volatile __bit                   TSTOT               __at(0xCDD);	// @ (0x19B * 8 + 5)
#define                                 TSTOT_bit           _BIT_ACCESS(ATSTCON0,5)
// OSCCON<TUN0>
extern volatile __bit                   TUN0                __at(0xD8);	// @ (0x1B * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCCON,0)
// OSCCON<TUN1>
extern volatile __bit                   TUN1                __at(0xD9);	// @ (0x1B * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCCON,1)
// OSCCON<TUN2>
extern volatile __bit                   TUN2                __at(0xDA);	// @ (0x1B * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCCON,2)
// OSCCON<TUN3>
extern volatile __bit                   TUN3                __at(0xDB);	// @ (0x1B * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCCON,3)
// OSCCON<TUN4>
extern volatile __bit                   TUN4                __at(0xDC);	// @ (0x1B * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCCON,4)
// TXSTA<TX9>
extern volatile __bit                   TX9                 __at(0x876);	// @ (0x10E * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9D>
extern volatile __bit                   TX9D                __at(0x870);	// @ (0x10E * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA,0)
// TXSTA<TXEN>
extern volatile __bit                   TXEN                __at(0x875);	// @ (0x10E * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA,5)
// PIE3<TXIE>
extern volatile __bit                   TXIE                __at(0x448);	// @ (0x89 * 8 + 0)
#define                                 TXIE_bit            _BIT_ACCESS(PIE3,0)
// PIR3<TXIF>
extern volatile __bit                   TXIF                __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 TXIF_bit            _BIT_ACCESS(PIR3,0)
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x8B1);	// @ (0x116 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
// EACON<V1EAF>
extern volatile __bit                   V1EAF               __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 V1EAF_bit           _BIT_ACCESS(EACON,4)
// EACON<V1EAR>
extern volatile __bit                   V1EAR               __at(0x485);	// @ (0x90 * 8 + 5)
#define                                 V1EAR_bit           _BIT_ACCESS(EACON,5)
// REFCON1<V1OVEN>
extern volatile __bit                   V1OVEN              __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 V1OVEN_bit          _BIT_ACCESS(REFCON1,5)
// PIE2<V1OVIE>
extern volatile __bit                   V1OVIE              __at(0x441);	// @ (0x88 * 8 + 1)
#define                                 V1OVIE_bit          _BIT_ACCESS(PIE2,1)
// PIR2<V1OVIF>
extern volatile __bit                   V1OVIF              __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 V1OVIF_bit          _BIT_ACCESS(PIR2,1)
// INTEDGE2<V1OVINTN>
extern volatile __bit                   V1OVINTN            __at(0x46A);	// @ (0x8D * 8 + 2)
#define                                 V1OVINTN_bit        _BIT_ACCESS(INTEDGE2,2)
// INTEDGE2<V1OVINTP>
extern volatile __bit                   V1OVINTP            __at(0x46B);	// @ (0x8D * 8 + 3)
#define                                 V1OVINTP_bit        _BIT_ACCESS(INTEDGE2,3)
// REFCON1<V1REFEN>
extern volatile __bit                   V1REFEN             __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 V1REFEN_bit         _BIT_ACCESS(REFCON1,2)
// REFCON1<V1UVEN>
extern volatile __bit                   V1UVEN              __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 V1UVEN_bit          _BIT_ACCESS(REFCON1,4)
// PIE2<V1UVIE>
extern volatile __bit                   V1UVIE              __at(0x440);	// @ (0x88 * 8 + 0)
#define                                 V1UVIE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<V1UVIF>
extern volatile __bit                   V1UVIF              __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 V1UVIF_bit          _BIT_ACCESS(PIR2,0)
// INTEDGE2<V1UVINTN>
extern volatile __bit                   V1UVINTN            __at(0x468);	// @ (0x8D * 8 + 0)
#define                                 V1UVINTN_bit        _BIT_ACCESS(INTEDGE2,0)
// INTEDGE2<V1UVINTP>
extern volatile __bit                   V1UVINTP            __at(0x469);	// @ (0x8D * 8 + 1)
#define                                 V1UVINTP_bit        _BIT_ACCESS(INTEDGE2,1)
// EACON<V2EAF>
extern volatile __bit                   V2EAF               __at(0x486);	// @ (0x90 * 8 + 6)
#define                                 V2EAF_bit           _BIT_ACCESS(EACON,6)
// EACON<V2EAR>
extern volatile __bit                   V2EAR               __at(0x487);	// @ (0x90 * 8 + 7)
#define                                 V2EAR_bit           _BIT_ACCESS(EACON,7)
// REFCON1<V2OVEN>
extern volatile __bit                   V2OVEN              __at(0x4A7);	// @ (0x94 * 8 + 7)
#define                                 V2OVEN_bit          _BIT_ACCESS(REFCON1,7)
// PIE2<V2OVIE>
extern volatile __bit                   V2OVIE              __at(0x443);	// @ (0x88 * 8 + 3)
#define                                 V2OVIE_bit          _BIT_ACCESS(PIE2,3)
// PIR2<V2OVIF>
extern volatile __bit                   V2OVIF              __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 V2OVIF_bit          _BIT_ACCESS(PIR2,3)
// INTEDGE2<V2OVINTN>
extern volatile __bit                   V2OVINTN            __at(0x46E);	// @ (0x8D * 8 + 6)
#define                                 V2OVINTN_bit        _BIT_ACCESS(INTEDGE2,6)
// INTEDGE2<V2OVINTP>
extern volatile __bit                   V2OVINTP            __at(0x46F);	// @ (0x8D * 8 + 7)
#define                                 V2OVINTP_bit        _BIT_ACCESS(INTEDGE2,7)
// REFCON1<V2REFEN>
extern volatile __bit                   V2REFEN             __at(0x4A3);	// @ (0x94 * 8 + 3)
#define                                 V2REFEN_bit         _BIT_ACCESS(REFCON1,3)
// REFCON1<V2UVEN>
extern volatile __bit                   V2UVEN              __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 V2UVEN_bit          _BIT_ACCESS(REFCON1,6)
// PIE2<V2UVIE>
extern volatile __bit                   V2UVIE              __at(0x442);	// @ (0x88 * 8 + 2)
#define                                 V2UVIE_bit          _BIT_ACCESS(PIE2,2)
// PIR2<V2UVIF>
extern volatile __bit                   V2UVIF              __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 V2UVIF_bit          _BIT_ACCESS(PIR2,2)
// INTEDGE2<V2UVINTN>
extern volatile __bit                   V2UVINTN            __at(0x46C);	// @ (0x8D * 8 + 4)
#define                                 V2UVINTN_bit        _BIT_ACCESS(INTEDGE2,4)
// INTEDGE2<V2UVINTP>
extern volatile __bit                   V2UVINTP            __at(0x46D);	// @ (0x8D * 8 + 5)
#define                                 V2UVINTP_bit        _BIT_ACCESS(INTEDGE2,5)
// ADCON1<VCFG0>
extern volatile __bit                   VCFG0               __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<VCFG1>
extern volatile __bit                   VCFG1               __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON1,1)
// PIR3<VDDUIF>
extern volatile __bit                   VDDUIF              __at(0x4E);	// @ (0x9 * 8 + 6)
#define                                 VDDUIF_bit          _BIT_ACCESS(PIR3,6)
// PIE3<VDDUVIE>
extern volatile __bit                   VDDUVIE             __at(0x44E);	// @ (0x89 * 8 + 6)
#define                                 VDDUVIE_bit         _BIT_ACCESS(PIE3,6)
// REFCON2<VINUVEN>
extern volatile __bit                   VINUVEN             __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 VINUVEN_bit         _BIT_ACCESS(REFCON2,7)
// PIE3<VINUVIE>
extern volatile __bit                   VINUVIE             __at(0x44D);	// @ (0x89 * 8 + 5)
#define                                 VINUVIE_bit         _BIT_ACCESS(PIE3,5)
// PIR3<VINUVIF>
extern volatile __bit                   VINUVIF             __at(0x4D);	// @ (0x9 * 8 + 5)
#define                                 VINUVIF_bit         _BIT_ACCESS(PIR3,5)
// INTEDGE1<VINUVINTN>
extern volatile __bit                   VINUVINTN           __at(0x460);	// @ (0x8C * 8 + 0)
#define                                 VINUVINTN_bit       _BIT_ACCESS(INTEDGE1,0)
// INTEDGE1<VINUVINTP>
extern volatile __bit                   VINUVINTP           __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 VINUVINTP_bit       _BIT_ACCESS(INTEDGE1,1)
// SSPCON1<WCOL>
extern volatile __bit                   WCOL                __at(0x897);	// @ (0x112 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON1,7)
// WPUGPA<WCS0>
extern volatile __bit                   WCS0                __at(0x82A);	// @ (0x105 * 8 + 2)
#define                                 WCS0_bit            _BIT_ACCESS(WPUGPA,2)
// WPUGPA<WCS1>
extern volatile __bit                   WCS1                __at(0x82B);	// @ (0x105 * 8 + 3)
#define                                 WCS1_bit            _BIT_ACCESS(WPUGPA,3)
// WPUGPA<WPUA0>
extern volatile __bit                   WPUA0               __at(0x828);	// @ (0x105 * 8 + 0)
#define                                 WPUA0_bit           _BIT_ACCESS(WPUGPA,0)
// WPUGPA<WPUA1>
extern volatile __bit                   WPUA1               __at(0x829);	// @ (0x105 * 8 + 1)
#define                                 WPUA1_bit           _BIT_ACCESS(WPUGPA,1)
// WPUGPA<WPUA5>
extern volatile __bit                   WPUA5               __at(0x82D);	// @ (0x105 * 8 + 5)
#define                                 WPUA5_bit           _BIT_ACCESS(WPUGPA,5)
// WPUGPA<WPUA6>
extern volatile __bit                   WPUA6               __at(0x82E);	// @ (0x105 * 8 + 6)
#define                                 WPUA6_bit           _BIT_ACCESS(WPUGPA,6)
// WPUGPB<WPUB1>
extern volatile __bit                   WPUB1               __at(0x831);	// @ (0x106 * 8 + 1)
#define                                 WPUB1_bit           _BIT_ACCESS(WPUGPB,1)
// WPUGPB<WPUB2>
extern volatile __bit                   WPUB2               __at(0x832);	// @ (0x106 * 8 + 2)
#define                                 WPUB2_bit           _BIT_ACCESS(WPUGPB,2)
// WPUGPB<WPUB3>
extern volatile __bit                   WPUB3               __at(0x833);	// @ (0x106 * 8 + 3)
#define                                 WPUB3_bit           _BIT_ACCESS(WPUGPB,3)
// WPUGPB<WPUB4>
extern volatile __bit                   WPUB4               __at(0x834);	// @ (0x106 * 8 + 4)
#define                                 WPUB4_bit           _BIT_ACCESS(WPUGPB,4)
// WPUGPB<WPUB5>
extern volatile __bit                   WPUB5               __at(0x835);	// @ (0x106 * 8 + 5)
#define                                 WPUB5_bit           _BIT_ACCESS(WPUGPB,5)
// WPUGPB<WPUB6>
extern volatile __bit                   WPUB6               __at(0x836);	// @ (0x106 * 8 + 6)
#define                                 WPUB6_bit           _BIT_ACCESS(WPUGPB,6)
// BAUDCON<WUE>
extern volatile __bit                   WUE                 __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUDCON,1)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0xA0);	// @ (0x14 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0xA1);	// @ (0x14 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// OPTION_REG<nRAPU>
extern volatile __bit                   nRAPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRAPU_bit           _BIT_ACCESS(OPTION_REG,7)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _MCP19128_H_
