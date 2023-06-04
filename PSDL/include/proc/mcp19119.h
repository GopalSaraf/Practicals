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

#ifndef _MCP19119_H_
#define _MCP19119_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * MCP19119
 */
#ifndef _XC_H_
#warning Header file mcp19119.h included directly. Use #include <xc.h> instead.
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
        unsigned                        :1;
        unsigned GPB4                   :1;
        unsigned GPB5                   :1;
        unsigned GPB6                   :1;
        unsigned GPB7                   :1;
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
#define _PORTGPB_GPB7_POSN                                  0x7
#define _PORTGPB_GPB7_POSITION                              0x7
#define _PORTGPB_GPB7_SIZE                                  0x1
#define _PORTGPB_GPB7_LENGTH                                0x1
#define _PORTGPB_GPB7_MASK                                  0x80
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
        unsigned                        :1;
        unsigned GPB4                   :1;
        unsigned GPB5                   :1;
        unsigned GPB6                   :1;
        unsigned GPB7                   :1;
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
#define _PORTB_GPB7_POSN                                    0x7
#define _PORTB_GPB7_POSITION                                0x7
#define _PORTB_GPB7_SIZE                                    0x1
#define _PORTB_GPB7_LENGTH                                  0x1
#define _PORTB_GPB7_MASK                                    0x80
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
        unsigned                        :2;
        unsigned SSPIF                  :1;
        unsigned BCLIF                  :1;
        unsigned ADIF                   :1;
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

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x008);
#ifndef _LIB_BUILD
asm("PIR2 equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DCERIF                 :1;
        unsigned VINIF                  :1;
        unsigned                        :2;
        unsigned OVIF                   :1;
        unsigned OCIF                   :1;
        unsigned                        :1;
        unsigned UVIF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x008);
// bitfield macros
#define _PIR2_DCERIF_POSN                                   0x0
#define _PIR2_DCERIF_POSITION                               0x0
#define _PIR2_DCERIF_SIZE                                   0x1
#define _PIR2_DCERIF_LENGTH                                 0x1
#define _PIR2_DCERIF_MASK                                   0x1
#define _PIR2_VINIF_POSN                                    0x1
#define _PIR2_VINIF_POSITION                                0x1
#define _PIR2_VINIF_SIZE                                    0x1
#define _PIR2_VINIF_LENGTH                                  0x1
#define _PIR2_VINIF_MASK                                    0x2
#define _PIR2_OVIF_POSN                                     0x4
#define _PIR2_OVIF_POSITION                                 0x4
#define _PIR2_OVIF_SIZE                                     0x1
#define _PIR2_OVIF_LENGTH                                   0x1
#define _PIR2_OVIF_MASK                                     0x10
#define _PIR2_OCIF_POSN                                     0x5
#define _PIR2_OCIF_POSITION                                 0x5
#define _PIR2_OCIF_SIZE                                     0x1
#define _PIR2_OCIF_LENGTH                                   0x1
#define _PIR2_OCIF_MASK                                     0x20
#define _PIR2_UVIF_POSN                                     0x7
#define _PIR2_UVIF_POSITION                                 0x7
#define _PIR2_UVIF_SIZE                                     0x1
#define _PIR2_UVIF_LENGTH                                   0x1
#define _PIR2_UVIF_MASK                                     0x80

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x009);
#ifndef _LIB_BUILD
asm("PCON equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned nPOR                   :1;
        unsigned nOT                    :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x009);
// bitfield macros
#define _PCON_nPOR_POSN                                     0x1
#define _PCON_nPOR_POSITION                                 0x1
#define _PCON_nPOR_SIZE                                     0x1
#define _PCON_nPOR_LENGTH                                   0x1
#define _PCON_nPOR_MASK                                     0x2
#define _PCON_nOT_POSN                                      0x2
#define _PCON_nOT_POSITION                                  0x2
#define _PCON_nOT_SIZE                                      0x1
#define _PCON_nOT_LENGTH                                    0x1
#define _PCON_nOT_MASK                                      0x4

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

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0x00E);
#ifndef _LIB_BUILD
asm("T1CON equ 0Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned                        :2;
        unsigned T1CKPS                 :2;
    };
    struct {
        unsigned                        :4;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0x00E);
// bitfield macros
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_TMR1CS_POSN                                  0x1
#define _T1CON_TMR1CS_POSITION                              0x1
#define _T1CON_TMR1CS_SIZE                                  0x1
#define _T1CON_TMR1CS_LENGTH                                0x1
#define _T1CON_TMR1CS_MASK                                  0x2
#define _T1CON_T1CKPS_POSN                                  0x4
#define _T1CON_T1CKPS_POSITION                              0x4
#define _T1CON_T1CKPS_SIZE                                  0x2
#define _T1CON_T1CKPS_LENGTH                                0x2
#define _T1CON_T1CKPS_MASK                                  0x30
#define _T1CON_T1CKPS0_POSN                                 0x4
#define _T1CON_T1CKPS0_POSITION                             0x4
#define _T1CON_T1CKPS0_SIZE                                 0x1
#define _T1CON_T1CKPS0_LENGTH                               0x1
#define _T1CON_T1CKPS0_MASK                                 0x10
#define _T1CON_T1CKPS1_POSN                                 0x5
#define _T1CON_T1CKPS1_POSITION                             0x5
#define _T1CON_T1CKPS1_SIZE                                 0x1
#define _T1CON_T1CKPS1_LENGTH                               0x1
#define _T1CON_T1CKPS1_MASK                                 0x20

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x00F);
#ifndef _LIB_BUILD
asm("TMR2 equ 0Fh");
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x010);
#ifndef _LIB_BUILD
asm("T2CON equ 010h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x010);
// bitfield macros
#define _T2CON_T2CKPS_POSN                                  0x0
#define _T2CON_T2CKPS_POSITION                              0x0
#define _T2CON_T2CKPS_SIZE                                  0x2
#define _T2CON_T2CKPS_LENGTH                                0x2
#define _T2CON_T2CKPS_MASK                                  0x3
#define _T2CON_TMR2ON_POSN                                  0x2
#define _T2CON_TMR2ON_POSITION                              0x2
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x4

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0x011);
#ifndef _LIB_BUILD
asm("PR2 equ 011h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0x011);
// bitfield macros
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF

// Register: PWMPHL
#define PWMPHL PWMPHL
extern volatile unsigned char           PWMPHL              __at(0x013);
#ifndef _LIB_BUILD
asm("PWMPHL equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWMPHL                 :8;
    };
} PWMPHLbits_t;
extern volatile PWMPHLbits_t PWMPHLbits __at(0x013);
// bitfield macros
#define _PWMPHL_PWMPHL_POSN                                 0x0
#define _PWMPHL_PWMPHL_POSITION                             0x0
#define _PWMPHL_PWMPHL_SIZE                                 0x8
#define _PWMPHL_PWMPHL_LENGTH                               0x8
#define _PWMPHL_PWMPHL_MASK                                 0xFF

// Register: PWMPHH
#define PWMPHH PWMPHH
extern volatile unsigned char           PWMPHH              __at(0x014);
#ifndef _LIB_BUILD
asm("PWMPHH equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWMPHH                 :8;
    };
} PWMPHHbits_t;
extern volatile PWMPHHbits_t PWMPHHbits __at(0x014);
// bitfield macros
#define _PWMPHH_PWMPHH_POSN                                 0x0
#define _PWMPHH_PWMPHH_POSITION                             0x0
#define _PWMPHH_PWMPHH_SIZE                                 0x8
#define _PWMPHH_PWMPHH_LENGTH                               0x8
#define _PWMPHH_PWMPHH_MASK                                 0xFF

// Register: PWMRL
#define PWMRL PWMRL
extern volatile unsigned char           PWMRL               __at(0x015);
#ifndef _LIB_BUILD
asm("PWMRL equ 015h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWMRL                  :8;
    };
} PWMRLbits_t;
extern volatile PWMRLbits_t PWMRLbits __at(0x015);
// bitfield macros
#define _PWMRL_PWMRL_POSN                                   0x0
#define _PWMRL_PWMRL_POSITION                               0x0
#define _PWMRL_PWMRL_SIZE                                   0x8
#define _PWMRL_PWMRL_LENGTH                                 0x8
#define _PWMRL_PWMRL_MASK                                   0xFF

// Register: PWMRH
#define PWMRH PWMRH
extern volatile unsigned char           PWMRH               __at(0x016);
#ifndef _LIB_BUILD
asm("PWMRH equ 016h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWMRH                  :8;
    };
} PWMRHbits_t;
extern volatile PWMRHbits_t PWMRHbits __at(0x016);
// bitfield macros
#define _PWMRH_PWMRH_POSN                                   0x0
#define _PWMRH_PWMRH_POSITION                               0x0
#define _PWMRH_PWMRH_SIZE                                   0x8
#define _PWMRH_PWMRH_LENGTH                                 0x8
#define _PWMRH_PWMRH_MASK                                   0xFF

// Register: OVCCON
#define OVCCON OVCCON
extern volatile unsigned char           OVCCON              __at(0x019);
#ifndef _LIB_BUILD
asm("OVCCON equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVC0                   :1;
        unsigned OVC1                   :1;
        unsigned OVC2                   :1;
        unsigned OVC3                   :1;
        unsigned OVC4                   :1;
        unsigned OVC5                   :1;
        unsigned OVC6                   :1;
        unsigned OVC7                   :1;
    };
} OVCCONbits_t;
extern volatile OVCCONbits_t OVCCONbits __at(0x019);
// bitfield macros
#define _OVCCON_OVC0_POSN                                   0x0
#define _OVCCON_OVC0_POSITION                               0x0
#define _OVCCON_OVC0_SIZE                                   0x1
#define _OVCCON_OVC0_LENGTH                                 0x1
#define _OVCCON_OVC0_MASK                                   0x1
#define _OVCCON_OVC1_POSN                                   0x1
#define _OVCCON_OVC1_POSITION                               0x1
#define _OVCCON_OVC1_SIZE                                   0x1
#define _OVCCON_OVC1_LENGTH                                 0x1
#define _OVCCON_OVC1_MASK                                   0x2
#define _OVCCON_OVC2_POSN                                   0x2
#define _OVCCON_OVC2_POSITION                               0x2
#define _OVCCON_OVC2_SIZE                                   0x1
#define _OVCCON_OVC2_LENGTH                                 0x1
#define _OVCCON_OVC2_MASK                                   0x4
#define _OVCCON_OVC3_POSN                                   0x3
#define _OVCCON_OVC3_POSITION                               0x3
#define _OVCCON_OVC3_SIZE                                   0x1
#define _OVCCON_OVC3_LENGTH                                 0x1
#define _OVCCON_OVC3_MASK                                   0x8
#define _OVCCON_OVC4_POSN                                   0x4
#define _OVCCON_OVC4_POSITION                               0x4
#define _OVCCON_OVC4_SIZE                                   0x1
#define _OVCCON_OVC4_LENGTH                                 0x1
#define _OVCCON_OVC4_MASK                                   0x10
#define _OVCCON_OVC5_POSN                                   0x5
#define _OVCCON_OVC5_POSITION                               0x5
#define _OVCCON_OVC5_SIZE                                   0x1
#define _OVCCON_OVC5_LENGTH                                 0x1
#define _OVCCON_OVC5_MASK                                   0x20
#define _OVCCON_OVC6_POSN                                   0x6
#define _OVCCON_OVC6_POSITION                               0x6
#define _OVCCON_OVC6_SIZE                                   0x1
#define _OVCCON_OVC6_LENGTH                                 0x1
#define _OVCCON_OVC6_MASK                                   0x40
#define _OVCCON_OVC7_POSN                                   0x7
#define _OVCCON_OVC7_POSITION                               0x7
#define _OVCCON_OVC7_SIZE                                   0x1
#define _OVCCON_OVC7_LENGTH                                 0x1
#define _OVCCON_OVC7_MASK                                   0x80

// Register: OVFCON
#define OVFCON OVFCON
extern volatile unsigned char           OVFCON              __at(0x01A);
#ifndef _LIB_BUILD
asm("OVFCON equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVF                    :5;
        unsigned                        :2;
        unsigned VOUTON                 :1;
    };
    struct {
        unsigned OVF0                   :1;
        unsigned OVF1                   :1;
        unsigned OVF2                   :1;
        unsigned OVF3                   :1;
        unsigned OVF4                   :1;
    };
} OVFCONbits_t;
extern volatile OVFCONbits_t OVFCONbits __at(0x01A);
// bitfield macros
#define _OVFCON_OVF_POSN                                    0x0
#define _OVFCON_OVF_POSITION                                0x0
#define _OVFCON_OVF_SIZE                                    0x5
#define _OVFCON_OVF_LENGTH                                  0x5
#define _OVFCON_OVF_MASK                                    0x1F
#define _OVFCON_VOUTON_POSN                                 0x7
#define _OVFCON_VOUTON_POSITION                             0x7
#define _OVFCON_VOUTON_SIZE                                 0x1
#define _OVFCON_VOUTON_LENGTH                               0x1
#define _OVFCON_VOUTON_MASK                                 0x80
#define _OVFCON_OVF0_POSN                                   0x0
#define _OVFCON_OVF0_POSITION                               0x0
#define _OVFCON_OVF0_SIZE                                   0x1
#define _OVFCON_OVF0_LENGTH                                 0x1
#define _OVFCON_OVF0_MASK                                   0x1
#define _OVFCON_OVF1_POSN                                   0x1
#define _OVFCON_OVF1_POSITION                               0x1
#define _OVFCON_OVF1_SIZE                                   0x1
#define _OVFCON_OVF1_LENGTH                                 0x1
#define _OVFCON_OVF1_MASK                                   0x2
#define _OVFCON_OVF2_POSN                                   0x2
#define _OVFCON_OVF2_POSITION                               0x2
#define _OVFCON_OVF2_SIZE                                   0x1
#define _OVFCON_OVF2_LENGTH                                 0x1
#define _OVFCON_OVF2_MASK                                   0x4
#define _OVFCON_OVF3_POSN                                   0x3
#define _OVFCON_OVF3_POSITION                               0x3
#define _OVFCON_OVF3_SIZE                                   0x1
#define _OVFCON_OVF3_LENGTH                                 0x1
#define _OVFCON_OVF3_MASK                                   0x8
#define _OVFCON_OVF4_POSN                                   0x4
#define _OVFCON_OVF4_POSITION                               0x4
#define _OVFCON_OVF4_SIZE                                   0x1
#define _OVFCON_OVF4_LENGTH                                 0x1
#define _OVFCON_OVF4_MASK                                   0x10

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x01B);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 01Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x01B);
// bitfield macros
#define _OSCTUNE_TUN0_POSN                                  0x0
#define _OSCTUNE_TUN0_POSITION                              0x0
#define _OSCTUNE_TUN0_SIZE                                  0x1
#define _OSCTUNE_TUN0_LENGTH                                0x1
#define _OSCTUNE_TUN0_MASK                                  0x1
#define _OSCTUNE_TUN1_POSN                                  0x1
#define _OSCTUNE_TUN1_POSITION                              0x1
#define _OSCTUNE_TUN1_SIZE                                  0x1
#define _OSCTUNE_TUN1_LENGTH                                0x1
#define _OSCTUNE_TUN1_MASK                                  0x2
#define _OSCTUNE_TUN2_POSN                                  0x2
#define _OSCTUNE_TUN2_POSITION                              0x2
#define _OSCTUNE_TUN2_SIZE                                  0x1
#define _OSCTUNE_TUN2_LENGTH                                0x1
#define _OSCTUNE_TUN2_MASK                                  0x4
#define _OSCTUNE_TUN3_POSN                                  0x3
#define _OSCTUNE_TUN3_POSITION                              0x3
#define _OSCTUNE_TUN3_SIZE                                  0x1
#define _OSCTUNE_TUN3_LENGTH                                0x1
#define _OSCTUNE_TUN3_MASK                                  0x8
#define _OSCTUNE_TUN4_POSN                                  0x4
#define _OSCTUNE_TUN4_POSITION                              0x4
#define _OSCTUNE_TUN4_SIZE                                  0x1
#define _OSCTUNE_TUN4_LENGTH                                0x1
#define _OSCTUNE_TUN4_MASK                                  0x10

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned short          ADRES               __at(0x01C);
#ifndef _LIB_BUILD
asm("ADRES equ 01Ch");
#endif

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
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} ADRESHbits_t;
extern volatile ADRESHbits_t ADRESHbits __at(0x01D);
// bitfield macros
#define _ADRESH_ADRESH_POSN                                 0x0
#define _ADRESH_ADRESH_POSITION                             0x0
#define _ADRESH_ADRESH_SIZE                                 0x8
#define _ADRESH_ADRESH_LENGTH                               0x8
#define _ADRESH_ADRESH_MASK                                 0xFF

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
        unsigned CHS                    :5;
    };
    struct {
        unsigned                        :2;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
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
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x5
#define _ADCON0_CHS_LENGTH                                  0x5
#define _ADCON0_CHS_MASK                                    0x7C
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

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x01F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned ADCS                   :3;
    };
    struct {
        unsigned                        :4;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x01F);
// bitfield macros
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70
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
        unsigned nRAPUI                 :1;
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
#define _OPTION_REG_nRAPUI_POSN                             0x7
#define _OPTION_REG_nRAPUI_POSITION                         0x7
#define _OPTION_REG_nRAPUI_SIZE                             0x1
#define _OPTION_REG_nRAPUI_LENGTH                           0x1
#define _OPTION_REG_nRAPUI_MASK                             0x80
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
// aliases
extern volatile unsigned char           TRISB               __at(0x086);
#ifndef _LIB_BUILD
asm("TRISB equ 086h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned                        :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
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
#define _TRISGPB_TRISB7_POSN                                0x7
#define _TRISGPB_TRISB7_POSITION                            0x7
#define _TRISGPB_TRISB7_SIZE                                0x1
#define _TRISGPB_TRISB7_LENGTH                              0x1
#define _TRISGPB_TRISB7_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned                        :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0x086);
// bitfield macros
#define _TRISB_TRISB0_POSN                                  0x0
#define _TRISB_TRISB0_POSITION                              0x0
#define _TRISB_TRISB0_SIZE                                  0x1
#define _TRISB_TRISB0_LENGTH                                0x1
#define _TRISB_TRISB0_MASK                                  0x1
#define _TRISB_TRISB1_POSN                                  0x1
#define _TRISB_TRISB1_POSITION                              0x1
#define _TRISB_TRISB1_SIZE                                  0x1
#define _TRISB_TRISB1_LENGTH                                0x1
#define _TRISB_TRISB1_MASK                                  0x2
#define _TRISB_TRISB2_POSN                                  0x2
#define _TRISB_TRISB2_POSITION                              0x2
#define _TRISB_TRISB2_SIZE                                  0x1
#define _TRISB_TRISB2_LENGTH                                0x1
#define _TRISB_TRISB2_MASK                                  0x4
#define _TRISB_TRISB4_POSN                                  0x4
#define _TRISB_TRISB4_POSITION                              0x4
#define _TRISB_TRISB4_SIZE                                  0x1
#define _TRISB_TRISB4_LENGTH                                0x1
#define _TRISB_TRISB4_MASK                                  0x10
#define _TRISB_TRISB5_POSN                                  0x5
#define _TRISB_TRISB5_POSITION                              0x5
#define _TRISB_TRISB5_SIZE                                  0x1
#define _TRISB_TRISB5_LENGTH                                0x1
#define _TRISB_TRISB5_MASK                                  0x20
#define _TRISB_TRISB6_POSN                                  0x6
#define _TRISB_TRISB6_POSITION                              0x6
#define _TRISB_TRISB6_SIZE                                  0x1
#define _TRISB_TRISB6_LENGTH                                0x1
#define _TRISB_TRISB6_MASK                                  0x40
#define _TRISB_TRISB7_POSN                                  0x7
#define _TRISB_TRISB7_POSITION                              0x7
#define _TRISB_TRISB7_SIZE                                  0x1
#define _TRISB_TRISB7_LENGTH                                0x1
#define _TRISB_TRISB7_MASK                                  0x80

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
        unsigned                        :2;
        unsigned SSPIE                  :1;
        unsigned BCLIE                  :1;
        unsigned ADIE                   :1;
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

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x088);
#ifndef _LIB_BUILD
asm("PIE2 equ 088h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DCERIE                 :1;
        unsigned VINIE                  :1;
        unsigned                        :2;
        unsigned OVIE                   :1;
        unsigned OCIE                   :1;
        unsigned                        :1;
        unsigned UVIE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x088);
// bitfield macros
#define _PIE2_DCERIE_POSN                                   0x0
#define _PIE2_DCERIE_POSITION                               0x0
#define _PIE2_DCERIE_SIZE                                   0x1
#define _PIE2_DCERIE_LENGTH                                 0x1
#define _PIE2_DCERIE_MASK                                   0x1
#define _PIE2_VINIE_POSN                                    0x1
#define _PIE2_VINIE_POSITION                                0x1
#define _PIE2_VINIE_SIZE                                    0x1
#define _PIE2_VINIE_LENGTH                                  0x1
#define _PIE2_VINIE_MASK                                    0x2
#define _PIE2_OVIE_POSN                                     0x4
#define _PIE2_OVIE_POSITION                                 0x4
#define _PIE2_OVIE_SIZE                                     0x1
#define _PIE2_OVIE_LENGTH                                   0x1
#define _PIE2_OVIE_MASK                                     0x10
#define _PIE2_OCIE_POSN                                     0x5
#define _PIE2_OCIE_POSITION                                 0x5
#define _PIE2_OCIE_SIZE                                     0x1
#define _PIE2_OCIE_LENGTH                                   0x1
#define _PIE2_OCIE_MASK                                     0x20
#define _PIE2_UVIE_POSN                                     0x7
#define _PIE2_UVIE_POSITION                                 0x7
#define _PIE2_UVIE_SIZE                                     0x1
#define _PIE2_UVIE_LENGTH                                   0x1
#define _PIE2_UVIE_MASK                                     0x80

// Register: APFCON
#define APFCON APFCON
extern volatile unsigned char           APFCON              __at(0x089);
#ifndef _LIB_BUILD
asm("APFCON equ 089h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLKSEL                 :1;
    };
} APFCONbits_t;
extern volatile APFCONbits_t APFCONbits __at(0x089);
// bitfield macros
#define _APFCON_CLKSEL_POSN                                 0x0
#define _APFCON_CLKSEL_POSITION                             0x0
#define _APFCON_CLKSEL_SIZE                                 0x1
#define _APFCON_CLKSEL_LENGTH                               0x1
#define _APFCON_CLKSEL_MASK                                 0x1

// Register: VINLVL
#define VINLVL VINLVL
extern volatile unsigned char           VINLVL              __at(0x090);
#ifndef _LIB_BUILD
asm("VINLVL equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned UVLO                   :6;
        unsigned                        :1;
        unsigned UVLOEN                 :1;
    };
} VINLVLbits_t;
extern volatile VINLVLbits_t VINLVLbits __at(0x090);
// bitfield macros
#define _VINLVL_UVLO_POSN                                   0x0
#define _VINLVL_UVLO_POSITION                               0x0
#define _VINLVL_UVLO_SIZE                                   0x6
#define _VINLVL_UVLO_LENGTH                                 0x6
#define _VINLVL_UVLO_MASK                                   0x3F
#define _VINLVL_UVLOEN_POSN                                 0x7
#define _VINLVL_UVLOEN_POSITION                             0x7
#define _VINLVL_UVLOEN_SIZE                                 0x1
#define _VINLVL_UVLOEN_LENGTH                               0x1
#define _VINLVL_UVLOEN_MASK                                 0x80

// Register: OCCON
#define OCCON OCCON
extern volatile unsigned char           OCCON               __at(0x091);
#ifndef _LIB_BUILD
asm("OCCON equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OOC                    :5;
        unsigned OCLEB                  :2;
        unsigned OCEN                   :1;
    };
} OCCONbits_t;
extern volatile OCCONbits_t OCCONbits __at(0x091);
// bitfield macros
#define _OCCON_OOC_POSN                                     0x0
#define _OCCON_OOC_POSITION                                 0x0
#define _OCCON_OOC_SIZE                                     0x5
#define _OCCON_OOC_LENGTH                                   0x5
#define _OCCON_OOC_MASK                                     0x1F
#define _OCCON_OCLEB_POSN                                   0x5
#define _OCCON_OCLEB_POSITION                               0x5
#define _OCCON_OCLEB_SIZE                                   0x2
#define _OCCON_OCLEB_LENGTH                                 0x2
#define _OCCON_OCLEB_MASK                                   0x60
#define _OCCON_OCEN_POSN                                    0x7
#define _OCCON_OCEN_POSITION                                0x7
#define _OCCON_OCEN_SIZE                                    0x1
#define _OCCON_OCEN_LENGTH                                  0x1
#define _OCCON_OCEN_MASK                                    0x80

// Register: CSGSCON
#define CSGSCON CSGSCON
extern volatile unsigned char           CSGSCON             __at(0x093);
#ifndef _LIB_BUILD
asm("CSGSCON equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CSGS                   :4;
    };
} CSGSCONbits_t;
extern volatile CSGSCONbits_t CSGSCONbits __at(0x093);
// bitfield macros
#define _CSGSCON_CSGS_POSN                                  0x0
#define _CSGSCON_CSGS_POSITION                              0x0
#define _CSGSCON_CSGS_SIZE                                  0x4
#define _CSGSCON_CSGS_LENGTH                                0x4
#define _CSGSCON_CSGS_MASK                                  0xF

// Register: CSDGCON
#define CSDGCON CSDGCON
extern volatile unsigned char           CSDGCON             __at(0x095);
#ifndef _LIB_BUILD
asm("CSDGCON equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CSDG                   :3;
        unsigned                        :4;
        unsigned CSDGEN                 :1;
    };
} CSDGCONbits_t;
extern volatile CSDGCONbits_t CSDGCONbits __at(0x095);
// bitfield macros
#define _CSDGCON_CSDG_POSN                                  0x0
#define _CSDGCON_CSDG_POSITION                              0x0
#define _CSDGCON_CSDG_SIZE                                  0x3
#define _CSDGCON_CSDG_LENGTH                                0x3
#define _CSDGCON_CSDG_MASK                                  0x7
#define _CSDGCON_CSDGEN_POSN                                0x7
#define _CSDGCON_CSDGEN_POSITION                            0x7
#define _CSDGCON_CSDGEN_SIZE                                0x1
#define _CSDGCON_CSDGEN_LENGTH                              0x1
#define _CSDGCON_CSDGEN_MASK                                0x80

// Register: VZCCON
#define VZCCON VZCCON
extern volatile unsigned char           VZCCON              __at(0x097);
#ifndef _LIB_BUILD
asm("VZCCON equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VZC0                   :1;
        unsigned VZC1                   :1;
        unsigned VZC2                   :1;
        unsigned VZC3                   :1;
        unsigned VZC4                   :1;
        unsigned VZC5                   :1;
        unsigned VZC6                   :1;
        unsigned VZC7                   :1;
    };
} VZCCONbits_t;
extern volatile VZCCONbits_t VZCCONbits __at(0x097);
// bitfield macros
#define _VZCCON_VZC0_POSN                                   0x0
#define _VZCCON_VZC0_POSITION                               0x0
#define _VZCCON_VZC0_SIZE                                   0x1
#define _VZCCON_VZC0_LENGTH                                 0x1
#define _VZCCON_VZC0_MASK                                   0x1
#define _VZCCON_VZC1_POSN                                   0x1
#define _VZCCON_VZC1_POSITION                               0x1
#define _VZCCON_VZC1_SIZE                                   0x1
#define _VZCCON_VZC1_LENGTH                                 0x1
#define _VZCCON_VZC1_MASK                                   0x2
#define _VZCCON_VZC2_POSN                                   0x2
#define _VZCCON_VZC2_POSITION                               0x2
#define _VZCCON_VZC2_SIZE                                   0x1
#define _VZCCON_VZC2_LENGTH                                 0x1
#define _VZCCON_VZC2_MASK                                   0x4
#define _VZCCON_VZC3_POSN                                   0x3
#define _VZCCON_VZC3_POSITION                               0x3
#define _VZCCON_VZC3_SIZE                                   0x1
#define _VZCCON_VZC3_LENGTH                                 0x1
#define _VZCCON_VZC3_MASK                                   0x8
#define _VZCCON_VZC4_POSN                                   0x4
#define _VZCCON_VZC4_POSITION                               0x4
#define _VZCCON_VZC4_SIZE                                   0x1
#define _VZCCON_VZC4_LENGTH                                 0x1
#define _VZCCON_VZC4_MASK                                   0x10
#define _VZCCON_VZC5_POSN                                   0x5
#define _VZCCON_VZC5_POSITION                               0x5
#define _VZCCON_VZC5_SIZE                                   0x1
#define _VZCCON_VZC5_LENGTH                                 0x1
#define _VZCCON_VZC5_MASK                                   0x20
#define _VZCCON_VZC6_POSN                                   0x6
#define _VZCCON_VZC6_POSITION                               0x6
#define _VZCCON_VZC6_SIZE                                   0x1
#define _VZCCON_VZC6_LENGTH                                 0x1
#define _VZCCON_VZC6_MASK                                   0x40
#define _VZCCON_VZC7_POSN                                   0x7
#define _VZCCON_VZC7_POSITION                               0x7
#define _VZCCON_VZC7_SIZE                                   0x1
#define _VZCCON_VZC7_LENGTH                                 0x1
#define _VZCCON_VZC7_MASK                                   0x80

// Register: CMPZCON
#define CMPZCON CMPZCON
extern volatile unsigned char           CMPZCON             __at(0x098);
#ifndef _LIB_BUILD
asm("CMPZCON equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CMPZG                  :4;
        unsigned CMPZF                  :4;
    };
} CMPZCONbits_t;
extern volatile CMPZCONbits_t CMPZCONbits __at(0x098);
// bitfield macros
#define _CMPZCON_CMPZG_POSN                                 0x0
#define _CMPZCON_CMPZG_POSITION                             0x0
#define _CMPZCON_CMPZG_SIZE                                 0x4
#define _CMPZCON_CMPZG_LENGTH                               0x4
#define _CMPZCON_CMPZG_MASK                                 0xF
#define _CMPZCON_CMPZF_POSN                                 0x4
#define _CMPZCON_CMPZF_POSITION                             0x4
#define _CMPZCON_CMPZF_SIZE                                 0x4
#define _CMPZCON_CMPZF_LENGTH                               0x4
#define _CMPZCON_CMPZF_MASK                                 0xF0

// Register: OUVCON
#define OUVCON OUVCON
extern volatile unsigned char           OUVCON              __at(0x099);
#ifndef _LIB_BUILD
asm("OUVCON equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OUV0                   :1;
        unsigned OUV1                   :1;
        unsigned OUV2                   :1;
        unsigned OUV3                   :1;
        unsigned OUV4                   :1;
        unsigned OUV5                   :1;
        unsigned OUV6                   :1;
        unsigned OUV7                   :1;
    };
} OUVCONbits_t;
extern volatile OUVCONbits_t OUVCONbits __at(0x099);
// bitfield macros
#define _OUVCON_OUV0_POSN                                   0x0
#define _OUVCON_OUV0_POSITION                               0x0
#define _OUVCON_OUV0_SIZE                                   0x1
#define _OUVCON_OUV0_LENGTH                                 0x1
#define _OUVCON_OUV0_MASK                                   0x1
#define _OUVCON_OUV1_POSN                                   0x1
#define _OUVCON_OUV1_POSITION                               0x1
#define _OUVCON_OUV1_SIZE                                   0x1
#define _OUVCON_OUV1_LENGTH                                 0x1
#define _OUVCON_OUV1_MASK                                   0x2
#define _OUVCON_OUV2_POSN                                   0x2
#define _OUVCON_OUV2_POSITION                               0x2
#define _OUVCON_OUV2_SIZE                                   0x1
#define _OUVCON_OUV2_LENGTH                                 0x1
#define _OUVCON_OUV2_MASK                                   0x4
#define _OUVCON_OUV3_POSN                                   0x3
#define _OUVCON_OUV3_POSITION                               0x3
#define _OUVCON_OUV3_SIZE                                   0x1
#define _OUVCON_OUV3_LENGTH                                 0x1
#define _OUVCON_OUV3_MASK                                   0x8
#define _OUVCON_OUV4_POSN                                   0x4
#define _OUVCON_OUV4_POSITION                               0x4
#define _OUVCON_OUV4_SIZE                                   0x1
#define _OUVCON_OUV4_LENGTH                                 0x1
#define _OUVCON_OUV4_MASK                                   0x10
#define _OUVCON_OUV5_POSN                                   0x5
#define _OUVCON_OUV5_POSITION                               0x5
#define _OUVCON_OUV5_SIZE                                   0x1
#define _OUVCON_OUV5_LENGTH                                 0x1
#define _OUVCON_OUV5_MASK                                   0x20
#define _OUVCON_OUV6_POSN                                   0x6
#define _OUVCON_OUV6_POSITION                               0x6
#define _OUVCON_OUV6_SIZE                                   0x1
#define _OUVCON_OUV6_LENGTH                                 0x1
#define _OUVCON_OUV6_MASK                                   0x40
#define _OUVCON_OUV7_POSN                                   0x7
#define _OUVCON_OUV7_POSITION                               0x7
#define _OUVCON_OUV7_SIZE                                   0x1
#define _OUVCON_OUV7_LENGTH                                 0x1
#define _OUVCON_OUV7_MASK                                   0x80

// Register: OOVCON
#define OOVCON OOVCON
extern volatile unsigned char           OOVCON              __at(0x09A);
#ifndef _LIB_BUILD
asm("OOVCON equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OOV0                   :1;
        unsigned OOV1                   :1;
        unsigned OOV2                   :1;
        unsigned OOV3                   :1;
        unsigned OOV4                   :1;
        unsigned OOV5                   :1;
        unsigned OOV6                   :1;
        unsigned OOV7                   :1;
    };
} OOVCONbits_t;
extern volatile OOVCONbits_t OOVCONbits __at(0x09A);
// bitfield macros
#define _OOVCON_OOV0_POSN                                   0x0
#define _OOVCON_OOV0_POSITION                               0x0
#define _OOVCON_OOV0_SIZE                                   0x1
#define _OOVCON_OOV0_LENGTH                                 0x1
#define _OOVCON_OOV0_MASK                                   0x1
#define _OOVCON_OOV1_POSN                                   0x1
#define _OOVCON_OOV1_POSITION                               0x1
#define _OOVCON_OOV1_SIZE                                   0x1
#define _OOVCON_OOV1_LENGTH                                 0x1
#define _OOVCON_OOV1_MASK                                   0x2
#define _OOVCON_OOV2_POSN                                   0x2
#define _OOVCON_OOV2_POSITION                               0x2
#define _OOVCON_OOV2_SIZE                                   0x1
#define _OOVCON_OOV2_LENGTH                                 0x1
#define _OOVCON_OOV2_MASK                                   0x4
#define _OOVCON_OOV3_POSN                                   0x3
#define _OOVCON_OOV3_POSITION                               0x3
#define _OOVCON_OOV3_SIZE                                   0x1
#define _OOVCON_OOV3_LENGTH                                 0x1
#define _OOVCON_OOV3_MASK                                   0x8
#define _OOVCON_OOV4_POSN                                   0x4
#define _OOVCON_OOV4_POSITION                               0x4
#define _OOVCON_OOV4_SIZE                                   0x1
#define _OOVCON_OOV4_LENGTH                                 0x1
#define _OOVCON_OOV4_MASK                                   0x10
#define _OOVCON_OOV5_POSN                                   0x5
#define _OOVCON_OOV5_POSITION                               0x5
#define _OOVCON_OOV5_SIZE                                   0x1
#define _OOVCON_OOV5_LENGTH                                 0x1
#define _OOVCON_OOV5_MASK                                   0x20
#define _OOVCON_OOV6_POSN                                   0x6
#define _OOVCON_OOV6_POSITION                               0x6
#define _OOVCON_OOV6_SIZE                                   0x1
#define _OOVCON_OOV6_LENGTH                                 0x1
#define _OOVCON_OOV6_MASK                                   0x40
#define _OOVCON_OOV7_POSN                                   0x7
#define _OOVCON_OOV7_POSITION                               0x7
#define _OOVCON_OOV7_SIZE                                   0x1
#define _OOVCON_OOV7_LENGTH                                 0x1
#define _OOVCON_OOV7_MASK                                   0x80

// Register: DEADCON
#define DEADCON DEADCON
extern volatile unsigned char           DEADCON             __at(0x09B);
#ifndef _LIB_BUILD
asm("DEADCON equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LDLY                   :4;
        unsigned HDLY                   :4;
    };
} DEADCONbits_t;
extern volatile DEADCONbits_t DEADCONbits __at(0x09B);
// bitfield macros
#define _DEADCON_LDLY_POSN                                  0x0
#define _DEADCON_LDLY_POSITION                              0x0
#define _DEADCON_LDLY_SIZE                                  0x4
#define _DEADCON_LDLY_LENGTH                                0x4
#define _DEADCON_LDLY_MASK                                  0xF
#define _DEADCON_HDLY_POSN                                  0x4
#define _DEADCON_HDLY_POSITION                              0x4
#define _DEADCON_HDLY_SIZE                                  0x4
#define _DEADCON_HDLY_LENGTH                                0x4
#define _DEADCON_HDLY_MASK                                  0xF0

// Register: SLPCRCON
#define SLPCRCON SLPCRCON
extern volatile unsigned char           SLPCRCON            __at(0x09C);
#ifndef _LIB_BUILD
asm("SLPCRCON equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLPS                   :4;
        unsigned SLPG                   :4;
    };
} SLPCRCONbits_t;
extern volatile SLPCRCONbits_t SLPCRCONbits __at(0x09C);
// bitfield macros
#define _SLPCRCON_SLPS_POSN                                 0x0
#define _SLPCRCON_SLPS_POSITION                             0x0
#define _SLPCRCON_SLPS_SIZE                                 0x4
#define _SLPCRCON_SLPS_LENGTH                               0x4
#define _SLPCRCON_SLPS_MASK                                 0xF
#define _SLPCRCON_SLPG_POSN                                 0x4
#define _SLPCRCON_SLPG_POSITION                             0x4
#define _SLPCRCON_SLPG_SIZE                                 0x4
#define _SLPCRCON_SLPG_LENGTH                               0x4
#define _SLPCRCON_SLPG_MASK                                 0xF0

// Register: SLVGNCON
#define SLVGNCON SLVGNCON
extern volatile unsigned char           SLVGNCON            __at(0x09D);
#ifndef _LIB_BUILD
asm("SLVGNCON equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLVGN                  :5;
    };
} SLVGNCONbits_t;
extern volatile SLVGNCONbits_t SLVGNCONbits __at(0x09D);
// bitfield macros
#define _SLVGNCON_SLVGN_POSN                                0x0
#define _SLVGNCON_SLVGN_POSITION                            0x0
#define _SLVGNCON_SLVGN_SIZE                                0x5
#define _SLVGNCON_SLVGN_LENGTH                              0x5
#define _SLVGNCON_SLVGN_MASK                                0x1F

// Register: RELEFF
#define RELEFF RELEFF
extern volatile unsigned char           RELEFF              __at(0x09E);
#ifndef _LIB_BUILD
asm("RELEFF equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RE                     :7;
        unsigned MSDONE                 :1;
    };
} RELEFFbits_t;
extern volatile RELEFFbits_t RELEFFbits __at(0x09E);
// bitfield macros
#define _RELEFF_RE_POSN                                     0x0
#define _RELEFF_RE_POSITION                                 0x0
#define _RELEFF_RE_SIZE                                     0x7
#define _RELEFF_RE_LENGTH                                   0x7
#define _RELEFF_RE_MASK                                     0x7F
#define _RELEFF_MSDONE_POSN                                 0x7
#define _RELEFF_MSDONE_POSITION                             0x7
#define _RELEFF_MSDONE_SIZE                                 0x1
#define _RELEFF_MSDONE_LENGTH                               0x1
#define _RELEFF_MSDONE_MASK                                 0x80

// Register: WPUGPA
#define WPUGPA WPUGPA
extern volatile unsigned char           WPUGPA              __at(0x105);
#ifndef _LIB_BUILD
asm("WPUGPA equ 0105h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUGPA0                :1;
        unsigned WPUGPA1                :1;
        unsigned WPUGPA2                :1;
        unsigned WPUGPA3                :1;
        unsigned                        :1;
        unsigned WPUGPA5                :1;
    };
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
        unsigned WPUA3                  :1;
        unsigned                        :1;
        unsigned WPUA5                  :1;
    };
} WPUGPAbits_t;
extern volatile WPUGPAbits_t WPUGPAbits __at(0x105);
// bitfield macros
#define _WPUGPA_WPUGPA0_POSN                                0x0
#define _WPUGPA_WPUGPA0_POSITION                            0x0
#define _WPUGPA_WPUGPA0_SIZE                                0x1
#define _WPUGPA_WPUGPA0_LENGTH                              0x1
#define _WPUGPA_WPUGPA0_MASK                                0x1
#define _WPUGPA_WPUGPA1_POSN                                0x1
#define _WPUGPA_WPUGPA1_POSITION                            0x1
#define _WPUGPA_WPUGPA1_SIZE                                0x1
#define _WPUGPA_WPUGPA1_LENGTH                              0x1
#define _WPUGPA_WPUGPA1_MASK                                0x2
#define _WPUGPA_WPUGPA2_POSN                                0x2
#define _WPUGPA_WPUGPA2_POSITION                            0x2
#define _WPUGPA_WPUGPA2_SIZE                                0x1
#define _WPUGPA_WPUGPA2_LENGTH                              0x1
#define _WPUGPA_WPUGPA2_MASK                                0x4
#define _WPUGPA_WPUGPA3_POSN                                0x3
#define _WPUGPA_WPUGPA3_POSITION                            0x3
#define _WPUGPA_WPUGPA3_SIZE                                0x1
#define _WPUGPA_WPUGPA3_LENGTH                              0x1
#define _WPUGPA_WPUGPA3_MASK                                0x8
#define _WPUGPA_WPUGPA5_POSN                                0x5
#define _WPUGPA_WPUGPA5_POSITION                            0x5
#define _WPUGPA_WPUGPA5_SIZE                                0x1
#define _WPUGPA_WPUGPA5_LENGTH                              0x1
#define _WPUGPA_WPUGPA5_MASK                                0x20
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
#define _WPUGPA_WPUA2_POSN                                  0x2
#define _WPUGPA_WPUA2_POSITION                              0x2
#define _WPUGPA_WPUA2_SIZE                                  0x1
#define _WPUGPA_WPUA2_LENGTH                                0x1
#define _WPUGPA_WPUA2_MASK                                  0x4
#define _WPUGPA_WPUA3_POSN                                  0x3
#define _WPUGPA_WPUA3_POSITION                              0x3
#define _WPUGPA_WPUA3_SIZE                                  0x1
#define _WPUGPA_WPUA3_LENGTH                                0x1
#define _WPUGPA_WPUA3_MASK                                  0x8
#define _WPUGPA_WPUA5_POSN                                  0x5
#define _WPUGPA_WPUA5_POSITION                              0x5
#define _WPUGPA_WPUA5_SIZE                                  0x1
#define _WPUGPA_WPUA5_LENGTH                                0x1
#define _WPUGPA_WPUA5_MASK                                  0x20

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
        unsigned WPUGPB1                :1;
        unsigned WPUGPB2                :1;
        unsigned                        :1;
        unsigned WPUGPB4                :1;
        unsigned WPUGPB5                :1;
        unsigned WPUGPB6                :1;
        unsigned WPUGPB7                :1;
    };
    struct {
        unsigned                        :1;
        unsigned WPUB1                  :1;
        unsigned WPUB2                  :1;
        unsigned                        :1;
        unsigned WPUB4                  :1;
        unsigned WPUB5                  :1;
        unsigned WPUB6                  :1;
        unsigned WPUB7                  :1;
    };
} WPUGPBbits_t;
extern volatile WPUGPBbits_t WPUGPBbits __at(0x106);
// bitfield macros
#define _WPUGPB_WPUGPB1_POSN                                0x1
#define _WPUGPB_WPUGPB1_POSITION                            0x1
#define _WPUGPB_WPUGPB1_SIZE                                0x1
#define _WPUGPB_WPUGPB1_LENGTH                              0x1
#define _WPUGPB_WPUGPB1_MASK                                0x2
#define _WPUGPB_WPUGPB2_POSN                                0x2
#define _WPUGPB_WPUGPB2_POSITION                            0x2
#define _WPUGPB_WPUGPB2_SIZE                                0x1
#define _WPUGPB_WPUGPB2_LENGTH                              0x1
#define _WPUGPB_WPUGPB2_MASK                                0x4
#define _WPUGPB_WPUGPB4_POSN                                0x4
#define _WPUGPB_WPUGPB4_POSITION                            0x4
#define _WPUGPB_WPUGPB4_SIZE                                0x1
#define _WPUGPB_WPUGPB4_LENGTH                              0x1
#define _WPUGPB_WPUGPB4_MASK                                0x10
#define _WPUGPB_WPUGPB5_POSN                                0x5
#define _WPUGPB_WPUGPB5_POSITION                            0x5
#define _WPUGPB_WPUGPB5_SIZE                                0x1
#define _WPUGPB_WPUGPB5_LENGTH                              0x1
#define _WPUGPB_WPUGPB5_MASK                                0x20
#define _WPUGPB_WPUGPB6_POSN                                0x6
#define _WPUGPB_WPUGPB6_POSITION                            0x6
#define _WPUGPB_WPUGPB6_SIZE                                0x1
#define _WPUGPB_WPUGPB6_LENGTH                              0x1
#define _WPUGPB_WPUGPB6_MASK                                0x40
#define _WPUGPB_WPUGPB7_POSN                                0x7
#define _WPUGPB_WPUGPB7_POSITION                            0x7
#define _WPUGPB_WPUGPB7_SIZE                                0x1
#define _WPUGPB_WPUGPB7_LENGTH                              0x1
#define _WPUGPB_WPUGPB7_MASK                                0x80
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
#define _WPUGPB_WPUB7_POSN                                  0x7
#define _WPUGPB_WPUB7_POSITION                              0x7
#define _WPUGPB_WPUB7_SIZE                                  0x1
#define _WPUGPB_WPUB7_LENGTH                                0x1
#define _WPUGPB_WPUB7_MASK                                  0x80

// Register: PE1
#define PE1 PE1
extern volatile unsigned char           PE1                 __at(0x107);
#ifndef _LIB_BUILD
asm("PE1 equ 0107h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVTEE                  :1;
        unsigned UVTEE                  :1;
        unsigned PUEN                   :1;
        unsigned PDEN                   :1;
        unsigned LDLYBY                 :1;
        unsigned HDLYBY                 :1;
        unsigned DVRSTR                 :1;
        unsigned DECON                  :1;
    };
} PE1bits_t;
extern volatile PE1bits_t PE1bits __at(0x107);
// bitfield macros
#define _PE1_OVTEE_POSN                                     0x0
#define _PE1_OVTEE_POSITION                                 0x0
#define _PE1_OVTEE_SIZE                                     0x1
#define _PE1_OVTEE_LENGTH                                   0x1
#define _PE1_OVTEE_MASK                                     0x1
#define _PE1_UVTEE_POSN                                     0x1
#define _PE1_UVTEE_POSITION                                 0x1
#define _PE1_UVTEE_SIZE                                     0x1
#define _PE1_UVTEE_LENGTH                                   0x1
#define _PE1_UVTEE_MASK                                     0x2
#define _PE1_PUEN_POSN                                      0x2
#define _PE1_PUEN_POSITION                                  0x2
#define _PE1_PUEN_SIZE                                      0x1
#define _PE1_PUEN_LENGTH                                    0x1
#define _PE1_PUEN_MASK                                      0x4
#define _PE1_PDEN_POSN                                      0x3
#define _PE1_PDEN_POSITION                                  0x3
#define _PE1_PDEN_SIZE                                      0x1
#define _PE1_PDEN_LENGTH                                    0x1
#define _PE1_PDEN_MASK                                      0x8
#define _PE1_LDLYBY_POSN                                    0x4
#define _PE1_LDLYBY_POSITION                                0x4
#define _PE1_LDLYBY_SIZE                                    0x1
#define _PE1_LDLYBY_LENGTH                                  0x1
#define _PE1_LDLYBY_MASK                                    0x10
#define _PE1_HDLYBY_POSN                                    0x5
#define _PE1_HDLYBY_POSITION                                0x5
#define _PE1_HDLYBY_SIZE                                    0x1
#define _PE1_HDLYBY_LENGTH                                  0x1
#define _PE1_HDLYBY_MASK                                    0x20
#define _PE1_DVRSTR_POSN                                    0x6
#define _PE1_DVRSTR_POSITION                                0x6
#define _PE1_DVRSTR_SIZE                                    0x1
#define _PE1_DVRSTR_LENGTH                                  0x1
#define _PE1_DVRSTR_MASK                                    0x40
#define _PE1_DECON_POSN                                     0x7
#define _PE1_DECON_POSITION                                 0x7
#define _PE1_DECON_SIZE                                     0x1
#define _PE1_DECON_LENGTH                                   0x1
#define _PE1_DECON_MASK                                     0x80

// Register: BUFFCON
#define BUFFCON BUFFCON
extern volatile unsigned char           BUFFCON             __at(0x108);
#ifndef _LIB_BUILD
asm("BUFFCON equ 0108h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ASEL                   :5;
        unsigned MLTPH                  :3;
    };
    struct {
        unsigned ASEL0                  :1;
        unsigned ASEL1                  :1;
        unsigned ASEL2                  :1;
        unsigned ASEL3                  :1;
        unsigned ASEL4                  :1;
        unsigned MLTPH0                 :1;
        unsigned MLTPH1                 :1;
        unsigned MLTPH2                 :1;
    };
} BUFFCONbits_t;
extern volatile BUFFCONbits_t BUFFCONbits __at(0x108);
// bitfield macros
#define _BUFFCON_ASEL_POSN                                  0x0
#define _BUFFCON_ASEL_POSITION                              0x0
#define _BUFFCON_ASEL_SIZE                                  0x5
#define _BUFFCON_ASEL_LENGTH                                0x5
#define _BUFFCON_ASEL_MASK                                  0x1F
#define _BUFFCON_MLTPH_POSN                                 0x5
#define _BUFFCON_MLTPH_POSITION                             0x5
#define _BUFFCON_MLTPH_SIZE                                 0x3
#define _BUFFCON_MLTPH_LENGTH                               0x3
#define _BUFFCON_MLTPH_MASK                                 0xE0
#define _BUFFCON_ASEL0_POSN                                 0x0
#define _BUFFCON_ASEL0_POSITION                             0x0
#define _BUFFCON_ASEL0_SIZE                                 0x1
#define _BUFFCON_ASEL0_LENGTH                               0x1
#define _BUFFCON_ASEL0_MASK                                 0x1
#define _BUFFCON_ASEL1_POSN                                 0x1
#define _BUFFCON_ASEL1_POSITION                             0x1
#define _BUFFCON_ASEL1_SIZE                                 0x1
#define _BUFFCON_ASEL1_LENGTH                               0x1
#define _BUFFCON_ASEL1_MASK                                 0x2
#define _BUFFCON_ASEL2_POSN                                 0x2
#define _BUFFCON_ASEL2_POSITION                             0x2
#define _BUFFCON_ASEL2_SIZE                                 0x1
#define _BUFFCON_ASEL2_LENGTH                               0x1
#define _BUFFCON_ASEL2_MASK                                 0x4
#define _BUFFCON_ASEL3_POSN                                 0x3
#define _BUFFCON_ASEL3_POSITION                             0x3
#define _BUFFCON_ASEL3_SIZE                                 0x1
#define _BUFFCON_ASEL3_LENGTH                               0x1
#define _BUFFCON_ASEL3_MASK                                 0x8
#define _BUFFCON_ASEL4_POSN                                 0x4
#define _BUFFCON_ASEL4_POSITION                             0x4
#define _BUFFCON_ASEL4_SIZE                                 0x1
#define _BUFFCON_ASEL4_LENGTH                               0x1
#define _BUFFCON_ASEL4_MASK                                 0x10
#define _BUFFCON_MLTPH0_POSN                                0x5
#define _BUFFCON_MLTPH0_POSITION                            0x5
#define _BUFFCON_MLTPH0_SIZE                                0x1
#define _BUFFCON_MLTPH0_LENGTH                              0x1
#define _BUFFCON_MLTPH0_MASK                                0x20
#define _BUFFCON_MLTPH1_POSN                                0x6
#define _BUFFCON_MLTPH1_POSITION                            0x6
#define _BUFFCON_MLTPH1_SIZE                                0x1
#define _BUFFCON_MLTPH1_LENGTH                              0x1
#define _BUFFCON_MLTPH1_MASK                                0x40
#define _BUFFCON_MLTPH2_POSN                                0x7
#define _BUFFCON_MLTPH2_POSITION                            0x7
#define _BUFFCON_MLTPH2_SIZE                                0x1
#define _BUFFCON_MLTPH2_LENGTH                              0x1
#define _BUFFCON_MLTPH2_MASK                                0x80

// Register: ABECON
#define ABECON ABECON
extern volatile unsigned char           ABECON              __at(0x109);
#ifndef _LIB_BUILD
asm("ABECON equ 0109h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PATHEN                 :1;
        unsigned RECIREN                :1;
        unsigned TMPSEN                 :1;
        unsigned CRTMEN                 :1;
        unsigned SLCPBY                 :1;
        unsigned MEASEN                 :1;
        unsigned UVDCEN                 :1;
        unsigned OVDCEN                 :1;
    };
} ABECONbits_t;
extern volatile ABECONbits_t ABECONbits __at(0x109);
// bitfield macros
#define _ABECON_PATHEN_POSN                                 0x0
#define _ABECON_PATHEN_POSITION                             0x0
#define _ABECON_PATHEN_SIZE                                 0x1
#define _ABECON_PATHEN_LENGTH                               0x1
#define _ABECON_PATHEN_MASK                                 0x1
#define _ABECON_RECIREN_POSN                                0x1
#define _ABECON_RECIREN_POSITION                            0x1
#define _ABECON_RECIREN_SIZE                                0x1
#define _ABECON_RECIREN_LENGTH                              0x1
#define _ABECON_RECIREN_MASK                                0x2
#define _ABECON_TMPSEN_POSN                                 0x2
#define _ABECON_TMPSEN_POSITION                             0x2
#define _ABECON_TMPSEN_SIZE                                 0x1
#define _ABECON_TMPSEN_LENGTH                               0x1
#define _ABECON_TMPSEN_MASK                                 0x4
#define _ABECON_CRTMEN_POSN                                 0x3
#define _ABECON_CRTMEN_POSITION                             0x3
#define _ABECON_CRTMEN_SIZE                                 0x1
#define _ABECON_CRTMEN_LENGTH                               0x1
#define _ABECON_CRTMEN_MASK                                 0x8
#define _ABECON_SLCPBY_POSN                                 0x4
#define _ABECON_SLCPBY_POSITION                             0x4
#define _ABECON_SLCPBY_SIZE                                 0x1
#define _ABECON_SLCPBY_LENGTH                               0x1
#define _ABECON_SLCPBY_MASK                                 0x10
#define _ABECON_MEASEN_POSN                                 0x5
#define _ABECON_MEASEN_POSITION                             0x5
#define _ABECON_MEASEN_SIZE                                 0x1
#define _ABECON_MEASEN_LENGTH                               0x1
#define _ABECON_MEASEN_MASK                                 0x20
#define _ABECON_UVDCEN_POSN                                 0x6
#define _ABECON_UVDCEN_POSITION                             0x6
#define _ABECON_UVDCEN_SIZE                                 0x1
#define _ABECON_UVDCEN_LENGTH                               0x1
#define _ABECON_UVDCEN_MASK                                 0x40
#define _ABECON_OVDCEN_POSN                                 0x7
#define _ABECON_OVDCEN_POSITION                             0x7
#define _ABECON_OVDCEN_SIZE                                 0x1
#define _ABECON_OVDCEN_LENGTH                               0x1
#define _ABECON_OVDCEN_MASK                                 0x80

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
        unsigned SSPM                   :4;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
    };
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits __at(0x112);
// bitfield macros
#define _SSPCON1_SSPM_POSN                                  0x0
#define _SSPCON1_SSPM_POSITION                              0x0
#define _SSPCON1_SSPM_SIZE                                  0x4
#define _SSPCON1_SSPM_LENGTH                                0x4
#define _SSPCON1_SSPM_MASK                                  0xF
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
#define _SSPCON1_SSPM0_POSN                                 0x0
#define _SSPCON1_SSPM0_POSITION                             0x0
#define _SSPCON1_SSPM0_SIZE                                 0x1
#define _SSPCON1_SSPM0_LENGTH                               0x1
#define _SSPCON1_SSPM0_MASK                                 0x1
#define _SSPCON1_SSPM1_POSN                                 0x1
#define _SSPCON1_SSPM1_POSITION                             0x1
#define _SSPCON1_SSPM1_SIZE                                 0x1
#define _SSPCON1_SSPM1_LENGTH                               0x1
#define _SSPCON1_SSPM1_MASK                                 0x2
#define _SSPCON1_SSPM2_POSN                                 0x2
#define _SSPCON1_SSPM2_POSITION                             0x2
#define _SSPCON1_SSPM2_SIZE                                 0x1
#define _SSPCON1_SSPM2_LENGTH                               0x1
#define _SSPCON1_SSPM2_MASK                                 0x4
#define _SSPCON1_SSPM3_POSN                                 0x3
#define _SSPCON1_SSPM3_POSITION                             0x3
#define _SSPCON1_SSPM3_SIZE                                 0x1
#define _SSPCON1_SSPM3_LENGTH                               0x1
#define _SSPCON1_SSPM3_MASK                                 0x8

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
        unsigned                        :1;
        unsigned IOCB4                  :1;
        unsigned IOCB5                  :1;
        unsigned IOCB6                  :1;
        unsigned IOCB7                  :1;
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
#define _IOCB_IOCB7_POSN                                    0x7
#define _IOCB_IOCB7_POSITION                                0x7
#define _IOCB_IOCB7_SIZE                                    0x1
#define _IOCB_IOCB7_LENGTH                                  0x1
#define _IOCB_IOCB7_MASK                                    0x80

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0x187);
#ifndef _LIB_BUILD
asm("ANSELA equ 0187h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSA0                  :1;
        unsigned ANSA1                  :1;
        unsigned ANSA2                  :1;
        unsigned ANSA3                  :1;
    };
} ANSELAbits_t;
extern volatile ANSELAbits_t ANSELAbits __at(0x187);
// bitfield macros
#define _ANSELA_ANSA0_POSN                                  0x0
#define _ANSELA_ANSA0_POSITION                              0x0
#define _ANSELA_ANSA0_SIZE                                  0x1
#define _ANSELA_ANSA0_LENGTH                                0x1
#define _ANSELA_ANSA0_MASK                                  0x1
#define _ANSELA_ANSA1_POSN                                  0x1
#define _ANSELA_ANSA1_POSITION                              0x1
#define _ANSELA_ANSA1_SIZE                                  0x1
#define _ANSELA_ANSA1_LENGTH                                0x1
#define _ANSELA_ANSA1_MASK                                  0x2
#define _ANSELA_ANSA2_POSN                                  0x2
#define _ANSELA_ANSA2_POSITION                              0x2
#define _ANSELA_ANSA2_SIZE                                  0x1
#define _ANSELA_ANSA2_LENGTH                                0x1
#define _ANSELA_ANSA2_MASK                                  0x4
#define _ANSELA_ANSA3_POSN                                  0x3
#define _ANSELA_ANSA3_POSITION                              0x3
#define _ANSELA_ANSA3_SIZE                                  0x1
#define _ANSELA_ANSA3_LENGTH                                0x1
#define _ANSELA_ANSA3_MASK                                  0x8

// Register: ANSELB
#define ANSELB ANSELB
extern volatile unsigned char           ANSELB              __at(0x188);
#ifndef _LIB_BUILD
asm("ANSELB equ 0188h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned ANSB1                  :1;
        unsigned ANSB2                  :1;
        unsigned                        :1;
        unsigned ANSB4                  :1;
        unsigned ANSB5                  :1;
    };
} ANSELBbits_t;
extern volatile ANSELBbits_t ANSELBbits __at(0x188);
// bitfield macros
#define _ANSELB_ANSB1_POSN                                  0x1
#define _ANSELB_ANSB1_POSITION                              0x1
#define _ANSELB_ANSB1_SIZE                                  0x1
#define _ANSELB_ANSB1_LENGTH                                0x1
#define _ANSELB_ANSB1_MASK                                  0x2
#define _ANSELB_ANSB2_POSN                                  0x2
#define _ANSELB_ANSB2_POSITION                              0x2
#define _ANSELB_ANSB2_SIZE                                  0x1
#define _ANSELB_ANSB2_LENGTH                                0x1
#define _ANSELB_ANSB2_MASK                                  0x4
#define _ANSELB_ANSB4_POSN                                  0x4
#define _ANSELB_ANSB4_POSITION                              0x4
#define _ANSELB_ANSB4_SIZE                                  0x1
#define _ANSELB_ANSB4_LENGTH                                0x1
#define _ANSELB_ANSB4_MASK                                  0x10
#define _ANSELB_ANSB5_POSN                                  0x5
#define _ANSELB_ANSB5_POSITION                              0x5
#define _ANSELB_ANSB5_SIZE                                  0x1
#define _ANSELB_ANSB5_LENGTH                                0x1
#define _ANSELB_ANSB5_MASK                                  0x20

// Register: PORTICD
#define PORTICD PORTICD
extern volatile unsigned char           PORTICD             __at(0x18C);
#ifndef _LIB_BUILD
asm("PORTICD equ 018Ch");
#endif

// Register: TRISICD
#define TRISICD TRISICD
extern volatile unsigned char           TRISICD             __at(0x18D);
#ifndef _LIB_BUILD
asm("TRISICD equ 018Dh");
#endif

// Register: ICKBUG
#define ICKBUG ICKBUG
extern volatile unsigned char           ICKBUG              __at(0x18E);
#ifndef _LIB_BUILD
asm("ICKBUG equ 018Eh");
#endif

// Register: BIGBUG
#define BIGBUG BIGBUG
extern volatile unsigned char           BIGBUG              __at(0x18F);
#ifndef _LIB_BUILD
asm("BIGBUG equ 018Fh");
#endif

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
        unsigned PMCON2                 :8;
    };
} PMCON2bits_t;
extern volatile PMCON2bits_t PMCON2bits __at(0x191);
// bitfield macros
#define _PMCON2_PMCON2_POSN                                 0x0
#define _PMCON2_PMCON2_POSITION                             0x0
#define _PMCON2_PMCON2_SIZE                                 0x8
#define _PMCON2_PMCON2_LENGTH                               0x8
#define _PMCON2_PMCON2_MASK                                 0xFF

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
    struct {
        unsigned PMADRL0                :1;
        unsigned PMADRL1                :1;
        unsigned PMADRL2                :1;
        unsigned PMADRL3                :1;
        unsigned PMADRL4                :1;
        unsigned PMADRL5                :1;
        unsigned PMADRL6                :1;
        unsigned PMADRL7                :1;
    };
} PMADRLbits_t;
extern volatile PMADRLbits_t PMADRLbits __at(0x192);
// bitfield macros
#define _PMADRL_PMADRL_POSN                                 0x0
#define _PMADRL_PMADRL_POSITION                             0x0
#define _PMADRL_PMADRL_SIZE                                 0x8
#define _PMADRL_PMADRL_LENGTH                               0x8
#define _PMADRL_PMADRL_MASK                                 0xFF
#define _PMADRL_PMADRL0_POSN                                0x0
#define _PMADRL_PMADRL0_POSITION                            0x0
#define _PMADRL_PMADRL0_SIZE                                0x1
#define _PMADRL_PMADRL0_LENGTH                              0x1
#define _PMADRL_PMADRL0_MASK                                0x1
#define _PMADRL_PMADRL1_POSN                                0x1
#define _PMADRL_PMADRL1_POSITION                            0x1
#define _PMADRL_PMADRL1_SIZE                                0x1
#define _PMADRL_PMADRL1_LENGTH                              0x1
#define _PMADRL_PMADRL1_MASK                                0x2
#define _PMADRL_PMADRL2_POSN                                0x2
#define _PMADRL_PMADRL2_POSITION                            0x2
#define _PMADRL_PMADRL2_SIZE                                0x1
#define _PMADRL_PMADRL2_LENGTH                              0x1
#define _PMADRL_PMADRL2_MASK                                0x4
#define _PMADRL_PMADRL3_POSN                                0x3
#define _PMADRL_PMADRL3_POSITION                            0x3
#define _PMADRL_PMADRL3_SIZE                                0x1
#define _PMADRL_PMADRL3_LENGTH                              0x1
#define _PMADRL_PMADRL3_MASK                                0x8
#define _PMADRL_PMADRL4_POSN                                0x4
#define _PMADRL_PMADRL4_POSITION                            0x4
#define _PMADRL_PMADRL4_SIZE                                0x1
#define _PMADRL_PMADRL4_LENGTH                              0x1
#define _PMADRL_PMADRL4_MASK                                0x10
#define _PMADRL_PMADRL5_POSN                                0x5
#define _PMADRL_PMADRL5_POSITION                            0x5
#define _PMADRL_PMADRL5_SIZE                                0x1
#define _PMADRL_PMADRL5_LENGTH                              0x1
#define _PMADRL_PMADRL5_MASK                                0x20
#define _PMADRL_PMADRL6_POSN                                0x6
#define _PMADRL_PMADRL6_POSITION                            0x6
#define _PMADRL_PMADRL6_SIZE                                0x1
#define _PMADRL_PMADRL6_LENGTH                              0x1
#define _PMADRL_PMADRL6_MASK                                0x40
#define _PMADRL_PMADRL7_POSN                                0x7
#define _PMADRL_PMADRL7_POSITION                            0x7
#define _PMADRL_PMADRL7_SIZE                                0x1
#define _PMADRL_PMADRL7_LENGTH                              0x1
#define _PMADRL_PMADRL7_MASK                                0x80

// Register: PMADRH
#define PMADRH PMADRH
extern volatile unsigned char           PMADRH              __at(0x193);
#ifndef _LIB_BUILD
asm("PMADRH equ 0193h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMADRH                 :4;
    };
    struct {
        unsigned PMADRH0                :1;
        unsigned PMADRH1                :1;
        unsigned PMADRH2                :1;
        unsigned PMADRH3                :1;
    };
} PMADRHbits_t;
extern volatile PMADRHbits_t PMADRHbits __at(0x193);
// bitfield macros
#define _PMADRH_PMADRH_POSN                                 0x0
#define _PMADRH_PMADRH_POSITION                             0x0
#define _PMADRH_PMADRH_SIZE                                 0x4
#define _PMADRH_PMADRH_LENGTH                               0x4
#define _PMADRH_PMADRH_MASK                                 0xF
#define _PMADRH_PMADRH0_POSN                                0x0
#define _PMADRH_PMADRH0_POSITION                            0x0
#define _PMADRH_PMADRH0_SIZE                                0x1
#define _PMADRH_PMADRH0_LENGTH                              0x1
#define _PMADRH_PMADRH0_MASK                                0x1
#define _PMADRH_PMADRH1_POSN                                0x1
#define _PMADRH_PMADRH1_POSITION                            0x1
#define _PMADRH_PMADRH1_SIZE                                0x1
#define _PMADRH_PMADRH1_LENGTH                              0x1
#define _PMADRH_PMADRH1_MASK                                0x2
#define _PMADRH_PMADRH2_POSN                                0x2
#define _PMADRH_PMADRH2_POSITION                            0x2
#define _PMADRH_PMADRH2_SIZE                                0x1
#define _PMADRH_PMADRH2_LENGTH                              0x1
#define _PMADRH_PMADRH2_MASK                                0x4
#define _PMADRH_PMADRH3_POSN                                0x3
#define _PMADRH_PMADRH3_POSITION                            0x3
#define _PMADRH_PMADRH3_SIZE                                0x1
#define _PMADRH_PMADRH3_LENGTH                              0x1
#define _PMADRH_PMADRH3_MASK                                0x8

// Register: PMDAT
#define PMDAT PMDAT
extern volatile unsigned short          PMDAT               __at(0x194);
#ifndef _LIB_BUILD
asm("PMDAT equ 0194h");
#endif

// Register: PMDATL
#define PMDATL PMDATL
extern volatile unsigned char           PMDATL              __at(0x194);
#ifndef _LIB_BUILD
asm("PMDATL equ 0194h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATL                 :8;
    };
    struct {
        unsigned PMDATL0                :1;
        unsigned PMDATL1                :1;
        unsigned PMDATL2                :1;
        unsigned PMDATL3                :1;
        unsigned PMDATL4                :1;
        unsigned PMDATL5                :1;
        unsigned PMDATL6                :1;
        unsigned PMDATL7                :1;
    };
} PMDATLbits_t;
extern volatile PMDATLbits_t PMDATLbits __at(0x194);
// bitfield macros
#define _PMDATL_PMDATL_POSN                                 0x0
#define _PMDATL_PMDATL_POSITION                             0x0
#define _PMDATL_PMDATL_SIZE                                 0x8
#define _PMDATL_PMDATL_LENGTH                               0x8
#define _PMDATL_PMDATL_MASK                                 0xFF
#define _PMDATL_PMDATL0_POSN                                0x0
#define _PMDATL_PMDATL0_POSITION                            0x0
#define _PMDATL_PMDATL0_SIZE                                0x1
#define _PMDATL_PMDATL0_LENGTH                              0x1
#define _PMDATL_PMDATL0_MASK                                0x1
#define _PMDATL_PMDATL1_POSN                                0x1
#define _PMDATL_PMDATL1_POSITION                            0x1
#define _PMDATL_PMDATL1_SIZE                                0x1
#define _PMDATL_PMDATL1_LENGTH                              0x1
#define _PMDATL_PMDATL1_MASK                                0x2
#define _PMDATL_PMDATL2_POSN                                0x2
#define _PMDATL_PMDATL2_POSITION                            0x2
#define _PMDATL_PMDATL2_SIZE                                0x1
#define _PMDATL_PMDATL2_LENGTH                              0x1
#define _PMDATL_PMDATL2_MASK                                0x4
#define _PMDATL_PMDATL3_POSN                                0x3
#define _PMDATL_PMDATL3_POSITION                            0x3
#define _PMDATL_PMDATL3_SIZE                                0x1
#define _PMDATL_PMDATL3_LENGTH                              0x1
#define _PMDATL_PMDATL3_MASK                                0x8
#define _PMDATL_PMDATL4_POSN                                0x4
#define _PMDATL_PMDATL4_POSITION                            0x4
#define _PMDATL_PMDATL4_SIZE                                0x1
#define _PMDATL_PMDATL4_LENGTH                              0x1
#define _PMDATL_PMDATL4_MASK                                0x10
#define _PMDATL_PMDATL5_POSN                                0x5
#define _PMDATL_PMDATL5_POSITION                            0x5
#define _PMDATL_PMDATL5_SIZE                                0x1
#define _PMDATL_PMDATL5_LENGTH                              0x1
#define _PMDATL_PMDATL5_MASK                                0x20
#define _PMDATL_PMDATL6_POSN                                0x6
#define _PMDATL_PMDATL6_POSITION                            0x6
#define _PMDATL_PMDATL6_SIZE                                0x1
#define _PMDATL_PMDATL6_LENGTH                              0x1
#define _PMDATL_PMDATL6_MASK                                0x40
#define _PMDATL_PMDATL7_POSN                                0x7
#define _PMDATL_PMDATL7_POSITION                            0x7
#define _PMDATL_PMDATL7_SIZE                                0x1
#define _PMDATL_PMDATL7_LENGTH                              0x1
#define _PMDATL_PMDATL7_MASK                                0x80

// Register: PMDATH
#define PMDATH PMDATH
extern volatile unsigned char           PMDATH              __at(0x195);
#ifndef _LIB_BUILD
asm("PMDATH equ 0195h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PMDATH                 :6;
    };
    struct {
        unsigned PMDATH0                :1;
        unsigned PMDATH1                :1;
        unsigned PMDATH2                :1;
        unsigned PMDATH3                :1;
        unsigned PMDATH4                :1;
        unsigned PMDATH5                :1;
        unsigned PMDATH6                :1;
        unsigned PMDATH7                :1;
    };
} PMDATHbits_t;
extern volatile PMDATHbits_t PMDATHbits __at(0x195);
// bitfield macros
#define _PMDATH_PMDATH_POSN                                 0x0
#define _PMDATH_PMDATH_POSITION                             0x0
#define _PMDATH_PMDATH_SIZE                                 0x6
#define _PMDATH_PMDATH_LENGTH                               0x6
#define _PMDATH_PMDATH_MASK                                 0x3F
#define _PMDATH_PMDATH0_POSN                                0x0
#define _PMDATH_PMDATH0_POSITION                            0x0
#define _PMDATH_PMDATH0_SIZE                                0x1
#define _PMDATH_PMDATH0_LENGTH                              0x1
#define _PMDATH_PMDATH0_MASK                                0x1
#define _PMDATH_PMDATH1_POSN                                0x1
#define _PMDATH_PMDATH1_POSITION                            0x1
#define _PMDATH_PMDATH1_SIZE                                0x1
#define _PMDATH_PMDATH1_LENGTH                              0x1
#define _PMDATH_PMDATH1_MASK                                0x2
#define _PMDATH_PMDATH2_POSN                                0x2
#define _PMDATH_PMDATH2_POSITION                            0x2
#define _PMDATH_PMDATH2_SIZE                                0x1
#define _PMDATH_PMDATH2_LENGTH                              0x1
#define _PMDATH_PMDATH2_MASK                                0x4
#define _PMDATH_PMDATH3_POSN                                0x3
#define _PMDATH_PMDATH3_POSITION                            0x3
#define _PMDATH_PMDATH3_SIZE                                0x1
#define _PMDATH_PMDATH3_LENGTH                              0x1
#define _PMDATH_PMDATH3_MASK                                0x8
#define _PMDATH_PMDATH4_POSN                                0x4
#define _PMDATH_PMDATH4_POSITION                            0x4
#define _PMDATH_PMDATH4_SIZE                                0x1
#define _PMDATH_PMDATH4_LENGTH                              0x1
#define _PMDATH_PMDATH4_MASK                                0x10
#define _PMDATH_PMDATH5_POSN                                0x5
#define _PMDATH_PMDATH5_POSITION                            0x5
#define _PMDATH_PMDATH5_SIZE                                0x1
#define _PMDATH_PMDATH5_LENGTH                              0x1
#define _PMDATH_PMDATH5_MASK                                0x20
#define _PMDATH_PMDATH6_POSN                                0x6
#define _PMDATH_PMDATH6_POSITION                            0x6
#define _PMDATH_PMDATH6_SIZE                                0x1
#define _PMDATH_PMDATH6_LENGTH                              0x1
#define _PMDATH_PMDATH6_MASK                                0x40
#define _PMDATH_PMDATH7_POSN                                0x7
#define _PMDATH_PMDATH7_POSITION                            0x7
#define _PMDATH_PMDATH7_SIZE                                0x1
#define _PMDATH_PMDATH7_LENGTH                              0x1
#define _PMDATH_PMDATH7_MASK                                0x80

// Register: OSCCAL
#define OSCCAL OSCCAL
extern volatile unsigned char           OSCCAL              __at(0x198);
#ifndef _LIB_BUILD
asm("OSCCAL equ 0198h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FCALT0                 :1;
        unsigned FCALT1                 :1;
        unsigned FCALT2                 :1;
        unsigned FCALT3                 :1;
        unsigned FCALT4                 :1;
        unsigned FCALT5                 :1;
        unsigned FCALT6                 :1;
    };
} OSCCALbits_t;
extern volatile OSCCALbits_t OSCCALbits __at(0x198);
// bitfield macros
#define _OSCCAL_FCALT0_POSN                                 0x0
#define _OSCCAL_FCALT0_POSITION                             0x0
#define _OSCCAL_FCALT0_SIZE                                 0x1
#define _OSCCAL_FCALT0_LENGTH                               0x1
#define _OSCCAL_FCALT0_MASK                                 0x1
#define _OSCCAL_FCALT1_POSN                                 0x1
#define _OSCCAL_FCALT1_POSITION                             0x1
#define _OSCCAL_FCALT1_SIZE                                 0x1
#define _OSCCAL_FCALT1_LENGTH                               0x1
#define _OSCCAL_FCALT1_MASK                                 0x2
#define _OSCCAL_FCALT2_POSN                                 0x2
#define _OSCCAL_FCALT2_POSITION                             0x2
#define _OSCCAL_FCALT2_SIZE                                 0x1
#define _OSCCAL_FCALT2_LENGTH                               0x1
#define _OSCCAL_FCALT2_MASK                                 0x4
#define _OSCCAL_FCALT3_POSN                                 0x3
#define _OSCCAL_FCALT3_POSITION                             0x3
#define _OSCCAL_FCALT3_SIZE                                 0x1
#define _OSCCAL_FCALT3_LENGTH                               0x1
#define _OSCCAL_FCALT3_MASK                                 0x8
#define _OSCCAL_FCALT4_POSN                                 0x4
#define _OSCCAL_FCALT4_POSITION                             0x4
#define _OSCCAL_FCALT4_SIZE                                 0x1
#define _OSCCAL_FCALT4_LENGTH                               0x1
#define _OSCCAL_FCALT4_MASK                                 0x10
#define _OSCCAL_FCALT5_POSN                                 0x5
#define _OSCCAL_FCALT5_POSITION                             0x5
#define _OSCCAL_FCALT5_SIZE                                 0x1
#define _OSCCAL_FCALT5_LENGTH                               0x1
#define _OSCCAL_FCALT5_MASK                                 0x20
#define _OSCCAL_FCALT6_POSN                                 0x6
#define _OSCCAL_FCALT6_POSITION                             0x6
#define _OSCCAL_FCALT6_SIZE                                 0x1
#define _OSCCAL_FCALT6_LENGTH                               0x1
#define _OSCCAL_FCALT6_MASK                                 0x40

// Register: DOVCAL
#define DOVCAL DOVCAL
extern volatile unsigned char           DOVCAL              __at(0x199);
#ifndef _LIB_BUILD
asm("DOVCAL equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DOVT0                  :1;
        unsigned DOVT1                  :1;
        unsigned DOVT2                  :1;
        unsigned DOVT3                  :1;
    };
} DOVCALbits_t;
extern volatile DOVCALbits_t DOVCALbits __at(0x199);
// bitfield macros
#define _DOVCAL_DOVT0_POSN                                  0x0
#define _DOVCAL_DOVT0_POSITION                              0x0
#define _DOVCAL_DOVT0_SIZE                                  0x1
#define _DOVCAL_DOVT0_LENGTH                                0x1
#define _DOVCAL_DOVT0_MASK                                  0x1
#define _DOVCAL_DOVT1_POSN                                  0x1
#define _DOVCAL_DOVT1_POSITION                              0x1
#define _DOVCAL_DOVT1_SIZE                                  0x1
#define _DOVCAL_DOVT1_LENGTH                                0x1
#define _DOVCAL_DOVT1_MASK                                  0x2
#define _DOVCAL_DOVT2_POSN                                  0x2
#define _DOVCAL_DOVT2_POSITION                              0x2
#define _DOVCAL_DOVT2_SIZE                                  0x1
#define _DOVCAL_DOVT2_LENGTH                                0x1
#define _DOVCAL_DOVT2_MASK                                  0x4
#define _DOVCAL_DOVT3_POSN                                  0x3
#define _DOVCAL_DOVT3_POSITION                              0x3
#define _DOVCAL_DOVT3_SIZE                                  0x1
#define _DOVCAL_DOVT3_LENGTH                                0x1
#define _DOVCAL_DOVT3_MASK                                  0x8

// Register: TTACAL
#define TTACAL TTACAL
extern volatile unsigned char           TTACAL              __at(0x19A);
#ifndef _LIB_BUILD
asm("TTACAL equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TTA0                   :1;
        unsigned TTA1                   :1;
        unsigned TTA2                   :1;
        unsigned TTA3                   :1;
    };
} TTACALbits_t;
extern volatile TTACALbits_t TTACALbits __at(0x19A);
// bitfield macros
#define _TTACAL_TTA0_POSN                                   0x0
#define _TTACAL_TTA0_POSITION                               0x0
#define _TTACAL_TTA0_SIZE                                   0x1
#define _TTACAL_TTA0_LENGTH                                 0x1
#define _TTACAL_TTA0_MASK                                   0x1
#define _TTACAL_TTA1_POSN                                   0x1
#define _TTACAL_TTA1_POSITION                               0x1
#define _TTACAL_TTA1_SIZE                                   0x1
#define _TTACAL_TTA1_LENGTH                                 0x1
#define _TTACAL_TTA1_MASK                                   0x2
#define _TTACAL_TTA2_POSN                                   0x2
#define _TTACAL_TTA2_POSITION                               0x2
#define _TTACAL_TTA2_SIZE                                   0x1
#define _TTACAL_TTA2_LENGTH                                 0x1
#define _TTACAL_TTA2_MASK                                   0x4
#define _TTACAL_TTA3_POSN                                   0x3
#define _TTACAL_TTA3_POSITION                               0x3
#define _TTACAL_TTA3_SIZE                                   0x1
#define _TTACAL_TTA3_LENGTH                                 0x1
#define _TTACAL_TTA3_MASK                                   0x8

// Register: BGRCAL
#define BGRCAL BGRCAL
extern volatile unsigned char           BGRCAL              __at(0x19B);
#ifndef _LIB_BUILD
asm("BGRCAL equ 019Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BGRT0                  :1;
        unsigned BGRT1                  :1;
        unsigned BGRT2                  :1;
        unsigned BGRT3                  :1;
    };
} BGRCALbits_t;
extern volatile BGRCALbits_t BGRCALbits __at(0x19B);
// bitfield macros
#define _BGRCAL_BGRT0_POSN                                  0x0
#define _BGRCAL_BGRT0_POSITION                              0x0
#define _BGRCAL_BGRT0_SIZE                                  0x1
#define _BGRCAL_BGRT0_LENGTH                                0x1
#define _BGRCAL_BGRT0_MASK                                  0x1
#define _BGRCAL_BGRT1_POSN                                  0x1
#define _BGRCAL_BGRT1_POSITION                              0x1
#define _BGRCAL_BGRT1_SIZE                                  0x1
#define _BGRCAL_BGRT1_LENGTH                                0x1
#define _BGRCAL_BGRT1_MASK                                  0x2
#define _BGRCAL_BGRT2_POSN                                  0x2
#define _BGRCAL_BGRT2_POSITION                              0x2
#define _BGRCAL_BGRT2_SIZE                                  0x1
#define _BGRCAL_BGRT2_LENGTH                                0x1
#define _BGRCAL_BGRT2_MASK                                  0x4
#define _BGRCAL_BGRT3_POSN                                  0x3
#define _BGRCAL_BGRT3_POSITION                              0x3
#define _BGRCAL_BGRT3_SIZE                                  0x1
#define _BGRCAL_BGRT3_LENGTH                                0x1
#define _BGRCAL_BGRT3_MASK                                  0x8

// Register: VROCAL
#define VROCAL VROCAL
extern volatile unsigned char           VROCAL              __at(0x19C);
#ifndef _LIB_BUILD
asm("VROCAL equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VROT0                  :1;
        unsigned VROT1                  :1;
        unsigned VROT2                  :1;
        unsigned VROT3                  :1;
    };
} VROCALbits_t;
extern volatile VROCALbits_t VROCALbits __at(0x19C);
// bitfield macros
#define _VROCAL_VROT0_POSN                                  0x0
#define _VROCAL_VROT0_POSITION                              0x0
#define _VROCAL_VROT0_SIZE                                  0x1
#define _VROCAL_VROT0_LENGTH                                0x1
#define _VROCAL_VROT0_MASK                                  0x1
#define _VROCAL_VROT1_POSN                                  0x1
#define _VROCAL_VROT1_POSITION                              0x1
#define _VROCAL_VROT1_SIZE                                  0x1
#define _VROCAL_VROT1_LENGTH                                0x1
#define _VROCAL_VROT1_MASK                                  0x2
#define _VROCAL_VROT2_POSN                                  0x2
#define _VROCAL_VROT2_POSITION                              0x2
#define _VROCAL_VROT2_SIZE                                  0x1
#define _VROCAL_VROT2_LENGTH                                0x1
#define _VROCAL_VROT2_MASK                                  0x4
#define _VROCAL_VROT3_POSN                                  0x3
#define _VROCAL_VROT3_POSITION                              0x3
#define _VROCAL_VROT3_SIZE                                  0x1
#define _VROCAL_VROT3_LENGTH                                0x1
#define _VROCAL_VROT3_MASK                                  0x8

// Register: ZROCAL
#define ZROCAL ZROCAL
extern volatile unsigned char           ZROCAL              __at(0x19D);
#ifndef _LIB_BUILD
asm("ZROCAL equ 019Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ZROT0                  :1;
        unsigned ZROT1                  :1;
        unsigned ZROT2                  :1;
        unsigned ZROT3                  :1;
    };
} ZROCALbits_t;
extern volatile ZROCALbits_t ZROCALbits __at(0x19D);
// bitfield macros
#define _ZROCAL_ZROT0_POSN                                  0x0
#define _ZROCAL_ZROT0_POSITION                              0x0
#define _ZROCAL_ZROT0_SIZE                                  0x1
#define _ZROCAL_ZROT0_LENGTH                                0x1
#define _ZROCAL_ZROT0_MASK                                  0x1
#define _ZROCAL_ZROT1_POSN                                  0x1
#define _ZROCAL_ZROT1_POSITION                              0x1
#define _ZROCAL_ZROT1_SIZE                                  0x1
#define _ZROCAL_ZROT1_LENGTH                                0x1
#define _ZROCAL_ZROT1_MASK                                  0x2
#define _ZROCAL_ZROT2_POSN                                  0x2
#define _ZROCAL_ZROT2_POSITION                              0x2
#define _ZROCAL_ZROT2_SIZE                                  0x1
#define _ZROCAL_ZROT2_LENGTH                                0x1
#define _ZROCAL_ZROT2_MASK                                  0x4
#define _ZROCAL_ZROT3_POSN                                  0x3
#define _ZROCAL_ZROT3_POSITION                              0x3
#define _ZROCAL_ZROT3_SIZE                                  0x1
#define _ZROCAL_ZROT3_LENGTH                                0x1
#define _ZROCAL_ZROT3_MASK                                  0x8

// Register: ATSTCON
#define ATSTCON ATSTCON
extern volatile unsigned char           ATSTCON             __at(0x19F);
#ifndef _LIB_BUILD
asm("ATSTCON equ 019Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DRVDIS                 :1;
        unsigned BNCHEN                 :1;
        unsigned LODIS                  :1;
        unsigned HIDIS                  :1;
    };
} ATSTCONbits_t;
extern volatile ATSTCONbits_t ATSTCONbits __at(0x19F);
// bitfield macros
#define _ATSTCON_DRVDIS_POSN                                0x0
#define _ATSTCON_DRVDIS_POSITION                            0x0
#define _ATSTCON_DRVDIS_SIZE                                0x1
#define _ATSTCON_DRVDIS_LENGTH                              0x1
#define _ATSTCON_DRVDIS_MASK                                0x1
#define _ATSTCON_BNCHEN_POSN                                0x1
#define _ATSTCON_BNCHEN_POSITION                            0x1
#define _ATSTCON_BNCHEN_SIZE                                0x1
#define _ATSTCON_BNCHEN_LENGTH                              0x1
#define _ATSTCON_BNCHEN_MASK                                0x2
#define _ATSTCON_LODIS_POSN                                 0x2
#define _ATSTCON_LODIS_POSITION                             0x2
#define _ATSTCON_LODIS_SIZE                                 0x1
#define _ATSTCON_LODIS_LENGTH                               0x1
#define _ATSTCON_LODIS_MASK                                 0x4
#define _ATSTCON_HIDIS_POSN                                 0x3
#define _ATSTCON_HIDIS_POSITION                             0x3
#define _ATSTCON_HIDIS_SIZE                                 0x1
#define _ATSTCON_HIDIS_LENGTH                               0x1
#define _ATSTCON_HIDIS_MASK                                 0x8

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
// ANSELA<ANSA0>
extern volatile __bit                   ANSA0               __at(0xC38);	// @ (0x187 * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSELA,0)
// ANSELA<ANSA1>
extern volatile __bit                   ANSA1               __at(0xC39);	// @ (0x187 * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSELA,1)
// ANSELA<ANSA2>
extern volatile __bit                   ANSA2               __at(0xC3A);	// @ (0x187 * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSELA,2)
// ANSELA<ANSA3>
extern volatile __bit                   ANSA3               __at(0xC3B);	// @ (0x187 * 8 + 3)
#define                                 ANSA3_bit           _BIT_ACCESS(ANSELA,3)
// ANSELB<ANSB1>
extern volatile __bit                   ANSB1               __at(0xC41);	// @ (0x188 * 8 + 1)
#define                                 ANSB1_bit           _BIT_ACCESS(ANSELB,1)
// ANSELB<ANSB2>
extern volatile __bit                   ANSB2               __at(0xC42);	// @ (0x188 * 8 + 2)
#define                                 ANSB2_bit           _BIT_ACCESS(ANSELB,2)
// ANSELB<ANSB4>
extern volatile __bit                   ANSB4               __at(0xC44);	// @ (0x188 * 8 + 4)
#define                                 ANSB4_bit           _BIT_ACCESS(ANSELB,4)
// ANSELB<ANSB5>
extern volatile __bit                   ANSB5               __at(0xC45);	// @ (0x188 * 8 + 5)
#define                                 ANSB5_bit           _BIT_ACCESS(ANSELB,5)
// BUFFCON<ASEL0>
extern volatile __bit                   ASEL0               __at(0x840);	// @ (0x108 * 8 + 0)
#define                                 ASEL0_bit           _BIT_ACCESS(BUFFCON,0)
// BUFFCON<ASEL1>
extern volatile __bit                   ASEL1               __at(0x841);	// @ (0x108 * 8 + 1)
#define                                 ASEL1_bit           _BIT_ACCESS(BUFFCON,1)
// BUFFCON<ASEL2>
extern volatile __bit                   ASEL2               __at(0x842);	// @ (0x108 * 8 + 2)
#define                                 ASEL2_bit           _BIT_ACCESS(BUFFCON,2)
// BUFFCON<ASEL3>
extern volatile __bit                   ASEL3               __at(0x843);	// @ (0x108 * 8 + 3)
#define                                 ASEL3_bit           _BIT_ACCESS(BUFFCON,3)
// BUFFCON<ASEL4>
extern volatile __bit                   ASEL4               __at(0x844);	// @ (0x108 * 8 + 4)
#define                                 ASEL4_bit           _BIT_ACCESS(BUFFCON,4)
// PIE1<BCLIE>
extern volatile __bit                   BCLIE               __at(0x43D);	// @ (0x87 * 8 + 5)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<BCLIF>
extern volatile __bit                   BCLIF               __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR1,5)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// BGRCAL<BGRT0>
extern volatile __bit                   BGRT0               __at(0xCD8);	// @ (0x19B * 8 + 0)
#define                                 BGRT0_bit           _BIT_ACCESS(BGRCAL,0)
// BGRCAL<BGRT1>
extern volatile __bit                   BGRT1               __at(0xCD9);	// @ (0x19B * 8 + 1)
#define                                 BGRT1_bit           _BIT_ACCESS(BGRCAL,1)
// BGRCAL<BGRT2>
extern volatile __bit                   BGRT2               __at(0xCDA);	// @ (0x19B * 8 + 2)
#define                                 BGRT2_bit           _BIT_ACCESS(BGRCAL,2)
// BGRCAL<BGRT3>
extern volatile __bit                   BGRT3               __at(0xCDB);	// @ (0x19B * 8 + 3)
#define                                 BGRT3_bit           _BIT_ACCESS(BGRCAL,3)
// ATSTCON<BNCHEN>
extern volatile __bit                   BNCHEN              __at(0xCF9);	// @ (0x19F * 8 + 1)
#define                                 BNCHEN_bit          _BIT_ACCESS(ATSTCON,1)
// SSPCON3<BOEN>
extern volatile __bit                   BOEN                __at(0x8A4);	// @ (0x114 * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSPCON3,4)
// PMCON1<CALSEL>
extern volatile __bit                   CALSEL              __at(0xC86);	// @ (0x190 * 8 + 6)
#define                                 CALSEL_bit          _BIT_ACCESS(PMCON1,6)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
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
// SSPSTAT<CKE>
extern volatile __bit                   CKE                 __at(0x8B6);	// @ (0x116 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSPSTAT,6)
// SSPCON1<CKP>
extern volatile __bit                   CKP                 __at(0x894);	// @ (0x112 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSPCON1,4)
// APFCON<CLKSEL>
extern volatile __bit                   CLKSEL              __at(0x448);	// @ (0x89 * 8 + 0)
#define                                 CLKSEL_bit          _BIT_ACCESS(APFCON,0)
// ABECON<CRTMEN>
extern volatile __bit                   CRTMEN              __at(0x84B);	// @ (0x109 * 8 + 3)
#define                                 CRTMEN_bit          _BIT_ACCESS(ABECON,3)
// CSDGCON<CSDGEN>
extern volatile __bit                   CSDGEN              __at(0x4AF);	// @ (0x95 * 8 + 7)
#define                                 CSDGEN_bit          _BIT_ACCESS(CSDGCON,7)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// PIE2<DCERIE>
extern volatile __bit                   DCERIE              __at(0x440);	// @ (0x88 * 8 + 0)
#define                                 DCERIE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<DCERIF>
extern volatile __bit                   DCERIF              __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 DCERIF_bit          _BIT_ACCESS(PIR2,0)
// PE1<DECON>
extern volatile __bit                   DECON               __at(0x83F);	// @ (0x107 * 8 + 7)
#define                                 DECON_bit           _BIT_ACCESS(PE1,7)
// SSPCON3<DHEN>
extern volatile __bit                   DHEN                __at(0x8A0);	// @ (0x114 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSPCON3,0)
// DOVCAL<DOVT0>
extern volatile __bit                   DOVT0               __at(0xCC8);	// @ (0x199 * 8 + 0)
#define                                 DOVT0_bit           _BIT_ACCESS(DOVCAL,0)
// DOVCAL<DOVT1>
extern volatile __bit                   DOVT1               __at(0xCC9);	// @ (0x199 * 8 + 1)
#define                                 DOVT1_bit           _BIT_ACCESS(DOVCAL,1)
// DOVCAL<DOVT2>
extern volatile __bit                   DOVT2               __at(0xCCA);	// @ (0x199 * 8 + 2)
#define                                 DOVT2_bit           _BIT_ACCESS(DOVCAL,2)
// DOVCAL<DOVT3>
extern volatile __bit                   DOVT3               __at(0xCCB);	// @ (0x199 * 8 + 3)
#define                                 DOVT3_bit           _BIT_ACCESS(DOVCAL,3)
// ATSTCON<DRVDIS>
extern volatile __bit                   DRVDIS              __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 DRVDIS_bit          _BIT_ACCESS(ATSTCON,0)
// PE1<DVRSTR>
extern volatile __bit                   DVRSTR              __at(0x83E);	// @ (0x107 * 8 + 6)
#define                                 DVRSTR_bit          _BIT_ACCESS(PE1,6)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x8B5);	// @ (0x116 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// OSCCAL<FCALT0>
extern volatile __bit                   FCALT0              __at(0xCC0);	// @ (0x198 * 8 + 0)
#define                                 FCALT0_bit          _BIT_ACCESS(OSCCAL,0)
// OSCCAL<FCALT1>
extern volatile __bit                   FCALT1              __at(0xCC1);	// @ (0x198 * 8 + 1)
#define                                 FCALT1_bit          _BIT_ACCESS(OSCCAL,1)
// OSCCAL<FCALT2>
extern volatile __bit                   FCALT2              __at(0xCC2);	// @ (0x198 * 8 + 2)
#define                                 FCALT2_bit          _BIT_ACCESS(OSCCAL,2)
// OSCCAL<FCALT3>
extern volatile __bit                   FCALT3              __at(0xCC3);	// @ (0x198 * 8 + 3)
#define                                 FCALT3_bit          _BIT_ACCESS(OSCCAL,3)
// OSCCAL<FCALT4>
extern volatile __bit                   FCALT4              __at(0xCC4);	// @ (0x198 * 8 + 4)
#define                                 FCALT4_bit          _BIT_ACCESS(OSCCAL,4)
// OSCCAL<FCALT5>
extern volatile __bit                   FCALT5              __at(0xCC5);	// @ (0x198 * 8 + 5)
#define                                 FCALT5_bit          _BIT_ACCESS(OSCCAL,5)
// OSCCAL<FCALT6>
extern volatile __bit                   FCALT6              __at(0xCC6);	// @ (0x198 * 8 + 6)
#define                                 FCALT6_bit          _BIT_ACCESS(OSCCAL,6)
// SSPCON2<GCEN>
extern volatile __bit                   GCEN                __at(0x89F);	// @ (0x113 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSPCON2,7)
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
// PORTGPB<GPB4>
extern volatile __bit                   GPB4                __at(0x34);	// @ (0x6 * 8 + 4)
#define                                 GPB4_bit            _BIT_ACCESS(PORTGPB,4)
// PORTGPB<GPB5>
extern volatile __bit                   GPB5                __at(0x35);	// @ (0x6 * 8 + 5)
#define                                 GPB5_bit            _BIT_ACCESS(PORTGPB,5)
// PORTGPB<GPB6>
extern volatile __bit                   GPB6                __at(0x36);	// @ (0x6 * 8 + 6)
#define                                 GPB6_bit            _BIT_ACCESS(PORTGPB,6)
// PORTGPB<GPB7>
extern volatile __bit                   GPB7                __at(0x37);	// @ (0x6 * 8 + 7)
#define                                 GPB7_bit            _BIT_ACCESS(PORTGPB,7)
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
// PE1<HDLYBY>
extern volatile __bit                   HDLYBY              __at(0x83D);	// @ (0x107 * 8 + 5)
#define                                 HDLYBY_bit          _BIT_ACCESS(PE1,5)
// ATSTCON<HIDIS>
extern volatile __bit                   HIDIS               __at(0xCFB);	// @ (0x19F * 8 + 3)
#define                                 HIDIS_bit           _BIT_ACCESS(ATSTCON,3)
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
// IOCB<IOCB4>
extern volatile __bit                   IOCB4               __at(0xC34);	// @ (0x186 * 8 + 4)
#define                                 IOCB4_bit           _BIT_ACCESS(IOCB,4)
// IOCB<IOCB5>
extern volatile __bit                   IOCB5               __at(0xC35);	// @ (0x186 * 8 + 5)
#define                                 IOCB5_bit           _BIT_ACCESS(IOCB,5)
// IOCB<IOCB6>
extern volatile __bit                   IOCB6               __at(0xC36);	// @ (0x186 * 8 + 6)
#define                                 IOCB6_bit           _BIT_ACCESS(IOCB,6)
// IOCB<IOCB7>
extern volatile __bit                   IOCB7               __at(0xC37);	// @ (0x186 * 8 + 7)
#define                                 IOCB7_bit           _BIT_ACCESS(IOCB,7)
// INTCON<IOCE>
extern volatile __bit                   IOCE                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 IOCE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<IOCF>
extern volatile __bit                   IOCF                __at(0x58);	// @ (0xB * 8 + 0)
#define                                 IOCF_bit            _BIT_ACCESS(INTCON,0)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// PE1<LDLYBY>
extern volatile __bit                   LDLYBY              __at(0x83C);	// @ (0x107 * 8 + 4)
#define                                 LDLYBY_bit          _BIT_ACCESS(PE1,4)
// ATSTCON<LODIS>
extern volatile __bit                   LODIS               __at(0xCFA);	// @ (0x19F * 8 + 2)
#define                                 LODIS_bit           _BIT_ACCESS(ATSTCON,2)
// ABECON<MEASEN>
extern volatile __bit                   MEASEN              __at(0x84D);	// @ (0x109 * 8 + 5)
#define                                 MEASEN_bit          _BIT_ACCESS(ABECON,5)
// BUFFCON<MLTPH0>
extern volatile __bit                   MLTPH0              __at(0x845);	// @ (0x108 * 8 + 5)
#define                                 MLTPH0_bit          _BIT_ACCESS(BUFFCON,5)
// BUFFCON<MLTPH1>
extern volatile __bit                   MLTPH1              __at(0x846);	// @ (0x108 * 8 + 6)
#define                                 MLTPH1_bit          _BIT_ACCESS(BUFFCON,6)
// BUFFCON<MLTPH2>
extern volatile __bit                   MLTPH2              __at(0x847);	// @ (0x108 * 8 + 7)
#define                                 MLTPH2_bit          _BIT_ACCESS(BUFFCON,7)
// RELEFF<MSDONE>
extern volatile __bit                   MSDONE              __at(0x4F7);	// @ (0x9E * 8 + 7)
#define                                 MSDONE_bit          _BIT_ACCESS(RELEFF,7)
// OCCON<OCEN>
extern volatile __bit                   OCEN                __at(0x48F);	// @ (0x91 * 8 + 7)
#define                                 OCEN_bit            _BIT_ACCESS(OCCON,7)
// PIE2<OCIE>
extern volatile __bit                   OCIE                __at(0x445);	// @ (0x88 * 8 + 5)
#define                                 OCIE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<OCIF>
extern volatile __bit                   OCIF                __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 OCIF_bit            _BIT_ACCESS(PIR2,5)
// OOVCON<OOV0>
extern volatile __bit                   OOV0                __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 OOV0_bit            _BIT_ACCESS(OOVCON,0)
// OOVCON<OOV1>
extern volatile __bit                   OOV1                __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 OOV1_bit            _BIT_ACCESS(OOVCON,1)
// OOVCON<OOV2>
extern volatile __bit                   OOV2                __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 OOV2_bit            _BIT_ACCESS(OOVCON,2)
// OOVCON<OOV3>
extern volatile __bit                   OOV3                __at(0x4D3);	// @ (0x9A * 8 + 3)
#define                                 OOV3_bit            _BIT_ACCESS(OOVCON,3)
// OOVCON<OOV4>
extern volatile __bit                   OOV4                __at(0x4D4);	// @ (0x9A * 8 + 4)
#define                                 OOV4_bit            _BIT_ACCESS(OOVCON,4)
// OOVCON<OOV5>
extern volatile __bit                   OOV5                __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 OOV5_bit            _BIT_ACCESS(OOVCON,5)
// OOVCON<OOV6>
extern volatile __bit                   OOV6                __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 OOV6_bit            _BIT_ACCESS(OOVCON,6)
// OOVCON<OOV7>
extern volatile __bit                   OOV7                __at(0x4D7);	// @ (0x9A * 8 + 7)
#define                                 OOV7_bit            _BIT_ACCESS(OOVCON,7)
// OUVCON<OUV0>
extern volatile __bit                   OUV0                __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 OUV0_bit            _BIT_ACCESS(OUVCON,0)
// OUVCON<OUV1>
extern volatile __bit                   OUV1                __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 OUV1_bit            _BIT_ACCESS(OUVCON,1)
// OUVCON<OUV2>
extern volatile __bit                   OUV2                __at(0x4CA);	// @ (0x99 * 8 + 2)
#define                                 OUV2_bit            _BIT_ACCESS(OUVCON,2)
// OUVCON<OUV3>
extern volatile __bit                   OUV3                __at(0x4CB);	// @ (0x99 * 8 + 3)
#define                                 OUV3_bit            _BIT_ACCESS(OUVCON,3)
// OUVCON<OUV4>
extern volatile __bit                   OUV4                __at(0x4CC);	// @ (0x99 * 8 + 4)
#define                                 OUV4_bit            _BIT_ACCESS(OUVCON,4)
// OUVCON<OUV5>
extern volatile __bit                   OUV5                __at(0x4CD);	// @ (0x99 * 8 + 5)
#define                                 OUV5_bit            _BIT_ACCESS(OUVCON,5)
// OUVCON<OUV6>
extern volatile __bit                   OUV6                __at(0x4CE);	// @ (0x99 * 8 + 6)
#define                                 OUV6_bit            _BIT_ACCESS(OUVCON,6)
// OUVCON<OUV7>
extern volatile __bit                   OUV7                __at(0x4CF);	// @ (0x99 * 8 + 7)
#define                                 OUV7_bit            _BIT_ACCESS(OUVCON,7)
// OVCCON<OVC0>
extern volatile __bit                   OVC0                __at(0xC8);	// @ (0x19 * 8 + 0)
#define                                 OVC0_bit            _BIT_ACCESS(OVCCON,0)
// OVCCON<OVC1>
extern volatile __bit                   OVC1                __at(0xC9);	// @ (0x19 * 8 + 1)
#define                                 OVC1_bit            _BIT_ACCESS(OVCCON,1)
// OVCCON<OVC2>
extern volatile __bit                   OVC2                __at(0xCA);	// @ (0x19 * 8 + 2)
#define                                 OVC2_bit            _BIT_ACCESS(OVCCON,2)
// OVCCON<OVC3>
extern volatile __bit                   OVC3                __at(0xCB);	// @ (0x19 * 8 + 3)
#define                                 OVC3_bit            _BIT_ACCESS(OVCCON,3)
// OVCCON<OVC4>
extern volatile __bit                   OVC4                __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 OVC4_bit            _BIT_ACCESS(OVCCON,4)
// OVCCON<OVC5>
extern volatile __bit                   OVC5                __at(0xCD);	// @ (0x19 * 8 + 5)
#define                                 OVC5_bit            _BIT_ACCESS(OVCCON,5)
// OVCCON<OVC6>
extern volatile __bit                   OVC6                __at(0xCE);	// @ (0x19 * 8 + 6)
#define                                 OVC6_bit            _BIT_ACCESS(OVCCON,6)
// OVCCON<OVC7>
extern volatile __bit                   OVC7                __at(0xCF);	// @ (0x19 * 8 + 7)
#define                                 OVC7_bit            _BIT_ACCESS(OVCCON,7)
// ABECON<OVDCEN>
extern volatile __bit                   OVDCEN              __at(0x84F);	// @ (0x109 * 8 + 7)
#define                                 OVDCEN_bit          _BIT_ACCESS(ABECON,7)
// OVFCON<OVF0>
extern volatile __bit                   OVF0                __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 OVF0_bit            _BIT_ACCESS(OVFCON,0)
// OVFCON<OVF1>
extern volatile __bit                   OVF1                __at(0xD1);	// @ (0x1A * 8 + 1)
#define                                 OVF1_bit            _BIT_ACCESS(OVFCON,1)
// OVFCON<OVF2>
extern volatile __bit                   OVF2                __at(0xD2);	// @ (0x1A * 8 + 2)
#define                                 OVF2_bit            _BIT_ACCESS(OVFCON,2)
// OVFCON<OVF3>
extern volatile __bit                   OVF3                __at(0xD3);	// @ (0x1A * 8 + 3)
#define                                 OVF3_bit            _BIT_ACCESS(OVFCON,3)
// OVFCON<OVF4>
extern volatile __bit                   OVF4                __at(0xD4);	// @ (0x1A * 8 + 4)
#define                                 OVF4_bit            _BIT_ACCESS(OVFCON,4)
// PIE2<OVIE>
extern volatile __bit                   OVIE                __at(0x444);	// @ (0x88 * 8 + 4)
#define                                 OVIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<OVIF>
extern volatile __bit                   OVIF                __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 OVIF_bit            _BIT_ACCESS(PIR2,4)
// PE1<OVTEE>
extern volatile __bit                   OVTEE               __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 OVTEE_bit           _BIT_ACCESS(PE1,0)
// ABECON<PATHEN>
extern volatile __bit                   PATHEN              __at(0x848);	// @ (0x109 * 8 + 0)
#define                                 PATHEN_bit          _BIT_ACCESS(ABECON,0)
// SSPCON3<PCIE>
extern volatile __bit                   PCIE                __at(0x8A6);	// @ (0x114 * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSPCON3,6)
// PE1<PDEN>
extern volatile __bit                   PDEN                __at(0x83B);	// @ (0x107 * 8 + 3)
#define                                 PDEN_bit            _BIT_ACCESS(PE1,3)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// SSPCON2<PEN>
extern volatile __bit                   PEN                 __at(0x89A);	// @ (0x113 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSPCON2,2)
// PMADRH<PMADRH0>
extern volatile __bit                   PMADRH0             __at(0xC98);	// @ (0x193 * 8 + 0)
#define                                 PMADRH0_bit         _BIT_ACCESS(PMADRH,0)
// PMADRH<PMADRH1>
extern volatile __bit                   PMADRH1             __at(0xC99);	// @ (0x193 * 8 + 1)
#define                                 PMADRH1_bit         _BIT_ACCESS(PMADRH,1)
// PMADRH<PMADRH2>
extern volatile __bit                   PMADRH2             __at(0xC9A);	// @ (0x193 * 8 + 2)
#define                                 PMADRH2_bit         _BIT_ACCESS(PMADRH,2)
// PMADRH<PMADRH3>
extern volatile __bit                   PMADRH3             __at(0xC9B);	// @ (0x193 * 8 + 3)
#define                                 PMADRH3_bit         _BIT_ACCESS(PMADRH,3)
// PMADRL<PMADRL0>
extern volatile __bit                   PMADRL0             __at(0xC90);	// @ (0x192 * 8 + 0)
#define                                 PMADRL0_bit         _BIT_ACCESS(PMADRL,0)
// PMADRL<PMADRL1>
extern volatile __bit                   PMADRL1             __at(0xC91);	// @ (0x192 * 8 + 1)
#define                                 PMADRL1_bit         _BIT_ACCESS(PMADRL,1)
// PMADRL<PMADRL2>
extern volatile __bit                   PMADRL2             __at(0xC92);	// @ (0x192 * 8 + 2)
#define                                 PMADRL2_bit         _BIT_ACCESS(PMADRL,2)
// PMADRL<PMADRL3>
extern volatile __bit                   PMADRL3             __at(0xC93);	// @ (0x192 * 8 + 3)
#define                                 PMADRL3_bit         _BIT_ACCESS(PMADRL,3)
// PMADRL<PMADRL4>
extern volatile __bit                   PMADRL4             __at(0xC94);	// @ (0x192 * 8 + 4)
#define                                 PMADRL4_bit         _BIT_ACCESS(PMADRL,4)
// PMADRL<PMADRL5>
extern volatile __bit                   PMADRL5             __at(0xC95);	// @ (0x192 * 8 + 5)
#define                                 PMADRL5_bit         _BIT_ACCESS(PMADRL,5)
// PMADRL<PMADRL6>
extern volatile __bit                   PMADRL6             __at(0xC96);	// @ (0x192 * 8 + 6)
#define                                 PMADRL6_bit         _BIT_ACCESS(PMADRL,6)
// PMADRL<PMADRL7>
extern volatile __bit                   PMADRL7             __at(0xC97);	// @ (0x192 * 8 + 7)
#define                                 PMADRL7_bit         _BIT_ACCESS(PMADRL,7)
// PMDATH<PMDATH0>
extern volatile __bit                   PMDATH0             __at(0xCA8);	// @ (0x195 * 8 + 0)
#define                                 PMDATH0_bit         _BIT_ACCESS(PMDATH,0)
// PMDATH<PMDATH1>
extern volatile __bit                   PMDATH1             __at(0xCA9);	// @ (0x195 * 8 + 1)
#define                                 PMDATH1_bit         _BIT_ACCESS(PMDATH,1)
// PMDATH<PMDATH2>
extern volatile __bit                   PMDATH2             __at(0xCAA);	// @ (0x195 * 8 + 2)
#define                                 PMDATH2_bit         _BIT_ACCESS(PMDATH,2)
// PMDATH<PMDATH3>
extern volatile __bit                   PMDATH3             __at(0xCAB);	// @ (0x195 * 8 + 3)
#define                                 PMDATH3_bit         _BIT_ACCESS(PMDATH,3)
// PMDATH<PMDATH4>
extern volatile __bit                   PMDATH4             __at(0xCAC);	// @ (0x195 * 8 + 4)
#define                                 PMDATH4_bit         _BIT_ACCESS(PMDATH,4)
// PMDATH<PMDATH5>
extern volatile __bit                   PMDATH5             __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 PMDATH5_bit         _BIT_ACCESS(PMDATH,5)
// PMDATH<PMDATH6>
extern volatile __bit                   PMDATH6             __at(0xCAE);	// @ (0x195 * 8 + 6)
#define                                 PMDATH6_bit         _BIT_ACCESS(PMDATH,6)
// PMDATH<PMDATH7>
extern volatile __bit                   PMDATH7             __at(0xCAF);	// @ (0x195 * 8 + 7)
#define                                 PMDATH7_bit         _BIT_ACCESS(PMDATH,7)
// PMDATL<PMDATL0>
extern volatile __bit                   PMDATL0             __at(0xCA0);	// @ (0x194 * 8 + 0)
#define                                 PMDATL0_bit         _BIT_ACCESS(PMDATL,0)
// PMDATL<PMDATL1>
extern volatile __bit                   PMDATL1             __at(0xCA1);	// @ (0x194 * 8 + 1)
#define                                 PMDATL1_bit         _BIT_ACCESS(PMDATL,1)
// PMDATL<PMDATL2>
extern volatile __bit                   PMDATL2             __at(0xCA2);	// @ (0x194 * 8 + 2)
#define                                 PMDATL2_bit         _BIT_ACCESS(PMDATL,2)
// PMDATL<PMDATL3>
extern volatile __bit                   PMDATL3             __at(0xCA3);	// @ (0x194 * 8 + 3)
#define                                 PMDATL3_bit         _BIT_ACCESS(PMDATL,3)
// PMDATL<PMDATL4>
extern volatile __bit                   PMDATL4             __at(0xCA4);	// @ (0x194 * 8 + 4)
#define                                 PMDATL4_bit         _BIT_ACCESS(PMDATL,4)
// PMDATL<PMDATL5>
extern volatile __bit                   PMDATL5             __at(0xCA5);	// @ (0x194 * 8 + 5)
#define                                 PMDATL5_bit         _BIT_ACCESS(PMDATL,5)
// PMDATL<PMDATL6>
extern volatile __bit                   PMDATL6             __at(0xCA6);	// @ (0x194 * 8 + 6)
#define                                 PMDATL6_bit         _BIT_ACCESS(PMDATL,6)
// PMDATL<PMDATL7>
extern volatile __bit                   PMDATL7             __at(0xCA7);	// @ (0x194 * 8 + 7)
#define                                 PMDATL7_bit         _BIT_ACCESS(PMDATL,7)
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
// PE1<PUEN>
extern volatile __bit                   PUEN                __at(0x83A);	// @ (0x107 * 8 + 2)
#define                                 PUEN_bit            _BIT_ACCESS(PE1,2)
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
// PMCON1<RD>
extern volatile __bit                   RD                  __at(0xC80);	// @ (0x190 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(PMCON1,0)
// ABECON<RECIREN>
extern volatile __bit                   RECIREN             __at(0x849);	// @ (0x109 * 8 + 1)
#define                                 RECIREN_bit         _BIT_ACCESS(ABECON,1)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// SSPCON2<RSEN>
extern volatile __bit                   RSEN                __at(0x899);	// @ (0x113 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSPCON2,1)
// SSPSTAT<R_nW>
extern volatile __bit                   R_nW                __at(0x8B2);	// @ (0x116 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSPSTAT,2)
// SSPCON3<SBCDE>
extern volatile __bit                   SBCDE               __at(0x8A2);	// @ (0x114 * 8 + 2)
#define                                 SBCDE_bit           _BIT_ACCESS(SSPCON3,2)
// SSPCON3<SCIE>
extern volatile __bit                   SCIE                __at(0x8A5);	// @ (0x114 * 8 + 5)
#define                                 SCIE_bit            _BIT_ACCESS(SSPCON3,5)
// SSPCON3<SDAHT>
extern volatile __bit                   SDAHT               __at(0x8A3);	// @ (0x114 * 8 + 3)
#define                                 SDAHT_bit           _BIT_ACCESS(SSPCON3,3)
// SSPCON2<SEN>
extern volatile __bit                   SEN                 __at(0x898);	// @ (0x113 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSPCON2,0)
// ABECON<SLCPBY>
extern volatile __bit                   SLCPBY              __at(0x84C);	// @ (0x109 * 8 + 4)
#define                                 SLCPBY_bit          _BIT_ACCESS(ABECON,4)
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// SSPCON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x895);	// @ (0x112 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSPCON1,5)
// PIE1<SSPIE>
extern volatile __bit                   SSPIE               __at(0x43C);	// @ (0x87 * 8 + 4)
#define                                 SSPIE_bit           _BIT_ACCESS(PIE1,4)
// PIR1<SSPIF>
extern volatile __bit                   SSPIF               __at(0x3C);	// @ (0x7 * 8 + 4)
#define                                 SSPIF_bit           _BIT_ACCESS(PIR1,4)
// SSPCON1<SSPM0>
extern volatile __bit                   SSPM0               __at(0x890);	// @ (0x112 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSPCON1,0)
// SSPCON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSPCON1,1)
// SSPCON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0x892);	// @ (0x112 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSPCON1,2)
// SSPCON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x893);	// @ (0x112 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSPCON1,3)
// SSPCON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x896);	// @ (0x112 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSPCON1,6)
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
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x74);	// @ (0xE * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x75);	// @ (0xE * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// ABECON<TMPSEN>
extern volatile __bit                   TMPSEN              __at(0x84A);	// @ (0x109 * 8 + 2)
#define                                 TMPSEN_bit          _BIT_ACCESS(ABECON,2)
// T1CON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x71);	// @ (0xE * 8 + 1)
#define                                 TMR1CS_bit          _BIT_ACCESS(T1CON,1)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x438);	// @ (0x87 * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x70);	// @ (0xE * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x439);	// @ (0x87 * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
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
// TRISGPB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x434);	// @ (0x86 * 8 + 4)
#define                                 TRISB4_bit          _BIT_ACCESS(TRISGPB,4)
// TRISGPB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x435);	// @ (0x86 * 8 + 5)
#define                                 TRISB5_bit          _BIT_ACCESS(TRISGPB,5)
// TRISGPB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x436);	// @ (0x86 * 8 + 6)
#define                                 TRISB6_bit          _BIT_ACCESS(TRISGPB,6)
// TRISGPB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x437);	// @ (0x86 * 8 + 7)
#define                                 TRISB7_bit          _BIT_ACCESS(TRISGPB,7)
// TTACAL<TTA0>
extern volatile __bit                   TTA0                __at(0xCD0);	// @ (0x19A * 8 + 0)
#define                                 TTA0_bit            _BIT_ACCESS(TTACAL,0)
// TTACAL<TTA1>
extern volatile __bit                   TTA1                __at(0xCD1);	// @ (0x19A * 8 + 1)
#define                                 TTA1_bit            _BIT_ACCESS(TTACAL,1)
// TTACAL<TTA2>
extern volatile __bit                   TTA2                __at(0xCD2);	// @ (0x19A * 8 + 2)
#define                                 TTA2_bit            _BIT_ACCESS(TTACAL,2)
// TTACAL<TTA3>
extern volatile __bit                   TTA3                __at(0xCD3);	// @ (0x19A * 8 + 3)
#define                                 TTA3_bit            _BIT_ACCESS(TTACAL,3)
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0xD8);	// @ (0x1B * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0xD9);	// @ (0x1B * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0xDA);	// @ (0x1B * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0xDB);	// @ (0x1B * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0xDC);	// @ (0x1B * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCTUNE,4)
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x8B1);	// @ (0x116 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
// ABECON<UVDCEN>
extern volatile __bit                   UVDCEN              __at(0x84E);	// @ (0x109 * 8 + 6)
#define                                 UVDCEN_bit          _BIT_ACCESS(ABECON,6)
// PIE2<UVIE>
extern volatile __bit                   UVIE                __at(0x447);	// @ (0x88 * 8 + 7)
#define                                 UVIE_bit            _BIT_ACCESS(PIE2,7)
// PIR2<UVIF>
extern volatile __bit                   UVIF                __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 UVIF_bit            _BIT_ACCESS(PIR2,7)
// VINLVL<UVLOEN>
extern volatile __bit                   UVLOEN              __at(0x487);	// @ (0x90 * 8 + 7)
#define                                 UVLOEN_bit          _BIT_ACCESS(VINLVL,7)
// PE1<UVTEE>
extern volatile __bit                   UVTEE               __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 UVTEE_bit           _BIT_ACCESS(PE1,1)
// PIE2<VINIE>
extern volatile __bit                   VINIE               __at(0x441);	// @ (0x88 * 8 + 1)
#define                                 VINIE_bit           _BIT_ACCESS(PIE2,1)
// PIR2<VINIF>
extern volatile __bit                   VINIF               __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 VINIF_bit           _BIT_ACCESS(PIR2,1)
// OVFCON<VOUTON>
extern volatile __bit                   VOUTON              __at(0xD7);	// @ (0x1A * 8 + 7)
#define                                 VOUTON_bit          _BIT_ACCESS(OVFCON,7)
// VROCAL<VROT0>
extern volatile __bit                   VROT0               __at(0xCE0);	// @ (0x19C * 8 + 0)
#define                                 VROT0_bit           _BIT_ACCESS(VROCAL,0)
// VROCAL<VROT1>
extern volatile __bit                   VROT1               __at(0xCE1);	// @ (0x19C * 8 + 1)
#define                                 VROT1_bit           _BIT_ACCESS(VROCAL,1)
// VROCAL<VROT2>
extern volatile __bit                   VROT2               __at(0xCE2);	// @ (0x19C * 8 + 2)
#define                                 VROT2_bit           _BIT_ACCESS(VROCAL,2)
// VROCAL<VROT3>
extern volatile __bit                   VROT3               __at(0xCE3);	// @ (0x19C * 8 + 3)
#define                                 VROT3_bit           _BIT_ACCESS(VROCAL,3)
// VZCCON<VZC0>
extern volatile __bit                   VZC0                __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 VZC0_bit            _BIT_ACCESS(VZCCON,0)
// VZCCON<VZC1>
extern volatile __bit                   VZC1                __at(0x4B9);	// @ (0x97 * 8 + 1)
#define                                 VZC1_bit            _BIT_ACCESS(VZCCON,1)
// VZCCON<VZC2>
extern volatile __bit                   VZC2                __at(0x4BA);	// @ (0x97 * 8 + 2)
#define                                 VZC2_bit            _BIT_ACCESS(VZCCON,2)
// VZCCON<VZC3>
extern volatile __bit                   VZC3                __at(0x4BB);	// @ (0x97 * 8 + 3)
#define                                 VZC3_bit            _BIT_ACCESS(VZCCON,3)
// VZCCON<VZC4>
extern volatile __bit                   VZC4                __at(0x4BC);	// @ (0x97 * 8 + 4)
#define                                 VZC4_bit            _BIT_ACCESS(VZCCON,4)
// VZCCON<VZC5>
extern volatile __bit                   VZC5                __at(0x4BD);	// @ (0x97 * 8 + 5)
#define                                 VZC5_bit            _BIT_ACCESS(VZCCON,5)
// VZCCON<VZC6>
extern volatile __bit                   VZC6                __at(0x4BE);	// @ (0x97 * 8 + 6)
#define                                 VZC6_bit            _BIT_ACCESS(VZCCON,6)
// VZCCON<VZC7>
extern volatile __bit                   VZC7                __at(0x4BF);	// @ (0x97 * 8 + 7)
#define                                 VZC7_bit            _BIT_ACCESS(VZCCON,7)
// SSPCON1<WCOL>
extern volatile __bit                   WCOL                __at(0x897);	// @ (0x112 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSPCON1,7)
// WPUGPA<WPUA0>
extern volatile __bit                   WPUA0               __at(0x828);	// @ (0x105 * 8 + 0)
#define                                 WPUA0_bit           _BIT_ACCESS(WPUGPA,0)
// WPUGPA<WPUA1>
extern volatile __bit                   WPUA1               __at(0x829);	// @ (0x105 * 8 + 1)
#define                                 WPUA1_bit           _BIT_ACCESS(WPUGPA,1)
// WPUGPA<WPUA2>
extern volatile __bit                   WPUA2               __at(0x82A);	// @ (0x105 * 8 + 2)
#define                                 WPUA2_bit           _BIT_ACCESS(WPUGPA,2)
// WPUGPA<WPUA3>
extern volatile __bit                   WPUA3               __at(0x82B);	// @ (0x105 * 8 + 3)
#define                                 WPUA3_bit           _BIT_ACCESS(WPUGPA,3)
// WPUGPA<WPUA5>
extern volatile __bit                   WPUA5               __at(0x82D);	// @ (0x105 * 8 + 5)
#define                                 WPUA5_bit           _BIT_ACCESS(WPUGPA,5)
// WPUGPB<WPUB1>
extern volatile __bit                   WPUB1               __at(0x831);	// @ (0x106 * 8 + 1)
#define                                 WPUB1_bit           _BIT_ACCESS(WPUGPB,1)
// WPUGPB<WPUB2>
extern volatile __bit                   WPUB2               __at(0x832);	// @ (0x106 * 8 + 2)
#define                                 WPUB2_bit           _BIT_ACCESS(WPUGPB,2)
// WPUGPB<WPUB4>
extern volatile __bit                   WPUB4               __at(0x834);	// @ (0x106 * 8 + 4)
#define                                 WPUB4_bit           _BIT_ACCESS(WPUGPB,4)
// WPUGPB<WPUB5>
extern volatile __bit                   WPUB5               __at(0x835);	// @ (0x106 * 8 + 5)
#define                                 WPUB5_bit           _BIT_ACCESS(WPUGPB,5)
// WPUGPB<WPUB6>
extern volatile __bit                   WPUB6               __at(0x836);	// @ (0x106 * 8 + 6)
#define                                 WPUB6_bit           _BIT_ACCESS(WPUGPB,6)
// WPUGPB<WPUB7>
extern volatile __bit                   WPUB7               __at(0x837);	// @ (0x106 * 8 + 7)
#define                                 WPUB7_bit           _BIT_ACCESS(WPUGPB,7)
// WPUGPA<WPUGPA0>
extern volatile __bit                   WPUGPA0             __at(0x828);	// @ (0x105 * 8 + 0)
#define                                 WPUGPA0_bit         _BIT_ACCESS(WPUGPA,0)
// WPUGPA<WPUGPA1>
extern volatile __bit                   WPUGPA1             __at(0x829);	// @ (0x105 * 8 + 1)
#define                                 WPUGPA1_bit         _BIT_ACCESS(WPUGPA,1)
// WPUGPA<WPUGPA2>
extern volatile __bit                   WPUGPA2             __at(0x82A);	// @ (0x105 * 8 + 2)
#define                                 WPUGPA2_bit         _BIT_ACCESS(WPUGPA,2)
// WPUGPA<WPUGPA3>
extern volatile __bit                   WPUGPA3             __at(0x82B);	// @ (0x105 * 8 + 3)
#define                                 WPUGPA3_bit         _BIT_ACCESS(WPUGPA,3)
// WPUGPA<WPUGPA5>
extern volatile __bit                   WPUGPA5             __at(0x82D);	// @ (0x105 * 8 + 5)
#define                                 WPUGPA5_bit         _BIT_ACCESS(WPUGPA,5)
// WPUGPB<WPUGPB1>
extern volatile __bit                   WPUGPB1             __at(0x831);	// @ (0x106 * 8 + 1)
#define                                 WPUGPB1_bit         _BIT_ACCESS(WPUGPB,1)
// WPUGPB<WPUGPB2>
extern volatile __bit                   WPUGPB2             __at(0x832);	// @ (0x106 * 8 + 2)
#define                                 WPUGPB2_bit         _BIT_ACCESS(WPUGPB,2)
// WPUGPB<WPUGPB4>
extern volatile __bit                   WPUGPB4             __at(0x834);	// @ (0x106 * 8 + 4)
#define                                 WPUGPB4_bit         _BIT_ACCESS(WPUGPB,4)
// WPUGPB<WPUGPB5>
extern volatile __bit                   WPUGPB5             __at(0x835);	// @ (0x106 * 8 + 5)
#define                                 WPUGPB5_bit         _BIT_ACCESS(WPUGPB,5)
// WPUGPB<WPUGPB6>
extern volatile __bit                   WPUGPB6             __at(0x836);	// @ (0x106 * 8 + 6)
#define                                 WPUGPB6_bit         _BIT_ACCESS(WPUGPB,6)
// WPUGPB<WPUGPB7>
extern volatile __bit                   WPUGPB7             __at(0x837);	// @ (0x106 * 8 + 7)
#define                                 WPUGPB7_bit         _BIT_ACCESS(WPUGPB,7)
// PMCON1<WR>
extern volatile __bit                   WR                  __at(0xC81);	// @ (0x190 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(PMCON1,1)
// PMCON1<WREN>
extern volatile __bit                   WREN                __at(0xC82);	// @ (0x190 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(PMCON1,2)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// ZROCAL<ZROT0>
extern volatile __bit                   ZROT0               __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 ZROT0_bit           _BIT_ACCESS(ZROCAL,0)
// ZROCAL<ZROT1>
extern volatile __bit                   ZROT1               __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 ZROT1_bit           _BIT_ACCESS(ZROCAL,1)
// ZROCAL<ZROT2>
extern volatile __bit                   ZROT2               __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 ZROT2_bit           _BIT_ACCESS(ZROCAL,2)
// ZROCAL<ZROT3>
extern volatile __bit                   ZROT3               __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 ZROT3_bit           _BIT_ACCESS(ZROCAL,3)
// PCON<nOT>
extern volatile __bit                   nOT                 __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 nOT_bit             _BIT_ACCESS(PCON,2)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// OPTION_REG<nRAPUI>
extern volatile __bit                   nRAPUI              __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRAPUI_bit          _BIT_ACCESS(OPTION_REG,7)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _MCP19119_H_
