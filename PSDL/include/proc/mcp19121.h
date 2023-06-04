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

#ifndef _MCP19121_H_
#define _MCP19121_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * MCP19121
 */
#ifndef _XC_H_
#warning Header file mcp19121.h included directly. Use #include <xc.h> instead.
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
        unsigned GPB3                   :1;
        unsigned GPB4                   :1;
        unsigned GPB5                   :1;
        unsigned GPB6                   :1;
        unsigned GPB7                   :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
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
#define _PORTGPB_RB3_POSN                                   0x3
#define _PORTGPB_RB3_POSITION                               0x3
#define _PORTGPB_RB3_SIZE                                   0x1
#define _PORTGPB_RB3_LENGTH                                 0x1
#define _PORTGPB_RB3_MASK                                   0x8
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
        unsigned GPB7                   :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
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
        unsigned CC1IF                  :1;
        unsigned CC2IF                  :1;
        unsigned SSPIF                  :1;
        unsigned BCLIF                  :1;
        unsigned ADIF                   :1;
        unsigned TMR1GIF                :1;
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
#define _PIR1_CC1IF_POSN                                    0x2
#define _PIR1_CC1IF_POSITION                                0x2
#define _PIR1_CC1IF_SIZE                                    0x1
#define _PIR1_CC1IF_LENGTH                                  0x1
#define _PIR1_CC1IF_MASK                                    0x4
#define _PIR1_CC2IF_POSN                                    0x3
#define _PIR1_CC2IF_POSITION                                0x3
#define _PIR1_CC2IF_SIZE                                    0x1
#define _PIR1_CC2IF_LENGTH                                  0x1
#define _PIR1_CC2IF_MASK                                    0x8
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
#define _PIR1_TMR1GIF_POSN                                  0x7
#define _PIR1_TMR1GIF_POSITION                              0x7
#define _PIR1_TMR1GIF_SIZE                                  0x1
#define _PIR1_TMR1GIF_LENGTH                                0x1
#define _PIR1_TMR1GIF_MASK                                  0x80

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x008);
#ifndef _LIB_BUILD
asm("PIR2 equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned UVLOIF                 :1;
        unsigned OVLOIF                 :1;
        unsigned                        :2;
        unsigned OVIF                   :1;
        unsigned OCIF                   :1;
        unsigned OTIF                   :1;
        unsigned UVIF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x008);
// bitfield macros
#define _PIR2_UVLOIF_POSN                                   0x0
#define _PIR2_UVLOIF_POSITION                               0x0
#define _PIR2_UVLOIF_SIZE                                   0x1
#define _PIR2_UVLOIF_LENGTH                                 0x1
#define _PIR2_UVLOIF_MASK                                   0x1
#define _PIR2_OVLOIF_POSN                                   0x1
#define _PIR2_OVLOIF_POSITION                               0x1
#define _PIR2_OVLOIF_SIZE                                   0x1
#define _PIR2_OVLOIF_LENGTH                                 0x1
#define _PIR2_OVLOIF_MASK                                   0x2
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
#define _PIR2_OTIF_POSN                                     0x6
#define _PIR2_OTIF_POSITION                                 0x6
#define _PIR2_OTIF_SIZE                                     0x1
#define _PIR2_OTIF_LENGTH                                   0x1
#define _PIR2_OTIF_MASK                                     0x40
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
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x009);
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
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1L                  :8;
    };
} TMR1Lbits_t;
extern volatile TMR1Lbits_t TMR1Lbits __at(0x00C);
// bitfield macros
#define _TMR1L_TMR1L_POSN                                   0x0
#define _TMR1L_TMR1L_POSITION                               0x0
#define _TMR1L_TMR1L_SIZE                                   0x8
#define _TMR1L_TMR1L_LENGTH                                 0x8
#define _TMR1L_TMR1L_MASK                                   0xFF

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x00D);
#ifndef _LIB_BUILD
asm("TMR1H equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1H                  :8;
    };
} TMR1Hbits_t;
extern volatile TMR1Hbits_t TMR1Hbits __at(0x00D);
// bitfield macros
#define _TMR1H_TMR1H_POSN                                   0x0
#define _TMR1H_TMR1H_POSITION                               0x0
#define _TMR1H_TMR1H_SIZE                                   0x8
#define _TMR1H_TMR1H_LENGTH                                 0x8
#define _TMR1H_TMR1H_MASK                                   0xFF

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

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0x012);
#ifndef _LIB_BUILD
asm("T1GCON equ 012h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
        unsigned T1GVAL                 :1;
        unsigned T1GGO                  :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0x012);
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
#define _T1GCON_T1GGO_POSN                                  0x3
#define _T1GCON_T1GGO_POSITION                              0x3
#define _T1GCON_T1GGO_SIZE                                  0x1
#define _T1GCON_T1GGO_LENGTH                                0x1
#define _T1GCON_T1GGO_MASK                                  0x8
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

// Register: CC1RL
#define CC1RL CC1RL
extern volatile unsigned char           CC1RL               __at(0x017);
#ifndef _LIB_BUILD
asm("CC1RL equ 017h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1RL                  :8;
    };
} CC1RLbits_t;
extern volatile CC1RLbits_t CC1RLbits __at(0x017);
// bitfield macros
#define _CC1RL_CC1RL_POSN                                   0x0
#define _CC1RL_CC1RL_POSITION                               0x0
#define _CC1RL_CC1RL_SIZE                                   0x8
#define _CC1RL_CC1RL_LENGTH                                 0x8
#define _CC1RL_CC1RL_MASK                                   0xFF

// Register: CC1RH
#define CC1RH CC1RH
extern volatile unsigned char           CC1RH               __at(0x018);
#ifndef _LIB_BUILD
asm("CC1RH equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1RH                  :8;
    };
} CC1RHbits_t;
extern volatile CC1RHbits_t CC1RHbits __at(0x018);
// bitfield macros
#define _CC1RH_CC1RH_POSN                                   0x0
#define _CC1RH_CC1RH_POSITION                               0x0
#define _CC1RH_CC1RH_SIZE                                   0x8
#define _CC1RH_CC1RH_LENGTH                                 0x8
#define _CC1RH_CC1RH_MASK                                   0xFF

// Register: CC2RL
#define CC2RL CC2RL
extern volatile unsigned char           CC2RL               __at(0x019);
#ifndef _LIB_BUILD
asm("CC2RL equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC2RL                  :8;
    };
} CC2RLbits_t;
extern volatile CC2RLbits_t CC2RLbits __at(0x019);
// bitfield macros
#define _CC2RL_CC2RL_POSN                                   0x0
#define _CC2RL_CC2RL_POSITION                               0x0
#define _CC2RL_CC2RL_SIZE                                   0x8
#define _CC2RL_CC2RL_LENGTH                                 0x8
#define _CC2RL_CC2RL_MASK                                   0xFF

// Register: CC2RH
#define CC2RH CC2RH
extern volatile unsigned char           CC2RH               __at(0x01A);
#ifndef _LIB_BUILD
asm("CC2RH equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC2RH                  :8;
    };
} CC2RHbits_t;
extern volatile CC2RHbits_t CC2RHbits __at(0x01A);
// bitfield macros
#define _CC2RH_CC2RH_POSN                                   0x0
#define _CC2RH_CC2RH_POSITION                               0x0
#define _CC2RH_CC2RH_SIZE                                   0x8
#define _CC2RH_CC2RH_LENGTH                                 0x8
#define _CC2RH_CC2RH_MASK                                   0xFF

// Register: CCDCON
#define CCDCON CCDCON
extern volatile unsigned char           CCDCON              __at(0x01B);
#ifndef _LIB_BUILD
asm("CCDCON equ 01Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1M                   :4;
        unsigned CC2M                   :4;
    };
} CCDCONbits_t;
extern volatile CCDCONbits_t CCDCONbits __at(0x01B);
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
        unsigned CHS                    :6;
    };
    struct {
        unsigned                        :2;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
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
#define _ADCON0_CHS_SIZE                                    0x6
#define _ADCON0_CHS_LENGTH                                  0x6
#define _ADCON0_CHS_MASK                                    0xFC
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

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x01F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VCFG                   :2;
        unsigned ADFM                   :1;
        unsigned                        :1;
        unsigned ADCS                   :3;
    };
    struct {
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
        unsigned                        :2;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x01F);
// bitfield macros
#define _ADCON1_VCFG_POSN                                   0x0
#define _ADCON1_VCFG_POSITION                               0x0
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0x3
#define _ADCON1_ADFM_POSN                                   0x2
#define _ADCON1_ADFM_POSITION                               0x2
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x4
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70
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
        unsigned TRISB3                 :1;
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
        unsigned TRISB3                 :1;
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
#define _TRISB_TRISB3_POSN                                  0x3
#define _TRISB_TRISB3_POSITION                              0x3
#define _TRISB_TRISB3_SIZE                                  0x1
#define _TRISB_TRISB3_LENGTH                                0x1
#define _TRISB_TRISB3_MASK                                  0x8
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
        unsigned CC1IE                  :1;
        unsigned CC2IE                  :1;
        unsigned SSPIE                  :1;
        unsigned BCLIE                  :1;
        unsigned ADIE                   :1;
        unsigned TMR1GIE                :1;
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
#define _PIE1_CC1IE_POSN                                    0x2
#define _PIE1_CC1IE_POSITION                                0x2
#define _PIE1_CC1IE_SIZE                                    0x1
#define _PIE1_CC1IE_LENGTH                                  0x1
#define _PIE1_CC1IE_MASK                                    0x4
#define _PIE1_CC2IE_POSN                                    0x3
#define _PIE1_CC2IE_POSITION                                0x3
#define _PIE1_CC2IE_SIZE                                    0x1
#define _PIE1_CC2IE_LENGTH                                  0x1
#define _PIE1_CC2IE_MASK                                    0x8
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
#define _PIE1_TMR1GIE_POSN                                  0x7
#define _PIE1_TMR1GIE_POSITION                              0x7
#define _PIE1_TMR1GIE_SIZE                                  0x1
#define _PIE1_TMR1GIE_LENGTH                                0x1
#define _PIE1_TMR1GIE_MASK                                  0x80

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x088);
#ifndef _LIB_BUILD
asm("PIE2 equ 088h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned UVLOIE                 :1;
        unsigned OVLOIE                 :1;
        unsigned                        :2;
        unsigned OVIE                   :1;
        unsigned OCIE                   :1;
        unsigned OTIE                   :1;
        unsigned UVIE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x088);
// bitfield macros
#define _PIE2_UVLOIE_POSN                                   0x0
#define _PIE2_UVLOIE_POSITION                               0x0
#define _PIE2_UVLOIE_SIZE                                   0x1
#define _PIE2_UVLOIE_LENGTH                                 0x1
#define _PIE2_UVLOIE_MASK                                   0x1
#define _PIE2_OVLOIE_POSN                                   0x1
#define _PIE2_OVLOIE_POSITION                               0x1
#define _PIE2_OVLOIE_SIZE                                   0x1
#define _PIE2_OVLOIE_LENGTH                                 0x1
#define _PIE2_OVLOIE_MASK                                   0x2
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
#define _PIE2_OTIE_POSN                                     0x6
#define _PIE2_OTIE_POSITION                                 0x6
#define _PIE2_OTIE_SIZE                                     0x1
#define _PIE2_OTIE_LENGTH                                   0x1
#define _PIE2_OTIE_MASK                                     0x40
#define _PIE2_UVIE_POSN                                     0x7
#define _PIE2_UVIE_POSITION                                 0x7
#define _PIE2_UVIE_SIZE                                     0x1
#define _PIE2_UVIE_LENGTH                                   0x1
#define _PIE2_UVIE_MASK                                     0x80

// Register: VINUVLO
#define VINUVLO VINUVLO
extern volatile unsigned char           VINUVLO             __at(0x090);
#ifndef _LIB_BUILD
asm("VINUVLO equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned UVLO                   :4;
    };
} VINUVLObits_t;
extern volatile VINUVLObits_t VINUVLObits __at(0x090);
// bitfield macros
#define _VINUVLO_UVLO_POSN                                  0x0
#define _VINUVLO_UVLO_POSITION                              0x0
#define _VINUVLO_UVLO_SIZE                                  0x4
#define _VINUVLO_UVLO_LENGTH                                0x4
#define _VINUVLO_UVLO_MASK                                  0xF

// Register: VINOVLO
#define VINOVLO VINOVLO
extern volatile unsigned char           VINOVLO             __at(0x091);
#ifndef _LIB_BUILD
asm("VINOVLO equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVLO                   :4;
    };
} VINOVLObits_t;
extern volatile VINOVLObits_t VINOVLObits __at(0x091);
// bitfield macros
#define _VINOVLO_OVLO_POSN                                  0x0
#define _VINOVLO_OVLO_POSITION                              0x0
#define _VINOVLO_OVLO_SIZE                                  0x4
#define _VINOVLO_OVLO_LENGTH                                0x4
#define _VINOVLO_OVLO_MASK                                  0xF

// Register: VINCON
#define VINCON VINCON
extern volatile unsigned char           VINCON              __at(0x092);
#ifndef _LIB_BUILD
asm("VINCON equ 092h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVLOINTN               :1;
        unsigned OVLOINTP               :1;
        unsigned OVLOOUT                :1;
        unsigned OVLOEN                 :1;
        unsigned UVLOINTN               :1;
        unsigned UVLOINTP               :1;
        unsigned UVLOOUT                :1;
        unsigned UVLOEN                 :1;
    };
} VINCONbits_t;
extern volatile VINCONbits_t VINCONbits __at(0x092);
// bitfield macros
#define _VINCON_OVLOINTN_POSN                               0x0
#define _VINCON_OVLOINTN_POSITION                           0x0
#define _VINCON_OVLOINTN_SIZE                               0x1
#define _VINCON_OVLOINTN_LENGTH                             0x1
#define _VINCON_OVLOINTN_MASK                               0x1
#define _VINCON_OVLOINTP_POSN                               0x1
#define _VINCON_OVLOINTP_POSITION                           0x1
#define _VINCON_OVLOINTP_SIZE                               0x1
#define _VINCON_OVLOINTP_LENGTH                             0x1
#define _VINCON_OVLOINTP_MASK                               0x2
#define _VINCON_OVLOOUT_POSN                                0x2
#define _VINCON_OVLOOUT_POSITION                            0x2
#define _VINCON_OVLOOUT_SIZE                                0x1
#define _VINCON_OVLOOUT_LENGTH                              0x1
#define _VINCON_OVLOOUT_MASK                                0x4
#define _VINCON_OVLOEN_POSN                                 0x3
#define _VINCON_OVLOEN_POSITION                             0x3
#define _VINCON_OVLOEN_SIZE                                 0x1
#define _VINCON_OVLOEN_LENGTH                               0x1
#define _VINCON_OVLOEN_MASK                                 0x8
#define _VINCON_UVLOINTN_POSN                               0x4
#define _VINCON_UVLOINTN_POSITION                           0x4
#define _VINCON_UVLOINTN_SIZE                               0x1
#define _VINCON_UVLOINTN_LENGTH                             0x1
#define _VINCON_UVLOINTN_MASK                               0x10
#define _VINCON_UVLOINTP_POSN                               0x5
#define _VINCON_UVLOINTP_POSITION                           0x5
#define _VINCON_UVLOINTP_SIZE                               0x1
#define _VINCON_UVLOINTP_LENGTH                             0x1
#define _VINCON_UVLOINTP_MASK                               0x20
#define _VINCON_UVLOOUT_POSN                                0x6
#define _VINCON_UVLOOUT_POSITION                            0x6
#define _VINCON_UVLOOUT_SIZE                                0x1
#define _VINCON_UVLOOUT_LENGTH                              0x1
#define _VINCON_UVLOOUT_MASK                                0x40
#define _VINCON_UVLOEN_POSN                                 0x7
#define _VINCON_UVLOEN_POSITION                             0x7
#define _VINCON_UVLOEN_SIZE                                 0x1
#define _VINCON_UVLOEN_LENGTH                               0x1
#define _VINCON_UVLOEN_MASK                                 0x80

// Register: DAGCON
#define DAGCON DAGCON
extern volatile unsigned char           DAGCON              __at(0x093);
#ifndef _LIB_BUILD
asm("DAGCON equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAG                    :3;
    };
} DAGCONbits_t;
extern volatile DAGCONbits_t DAGCONbits __at(0x093);
// bitfield macros
#define _DAGCON_DAG_POSN                                    0x0
#define _DAGCON_DAG_POSITION                                0x0
#define _DAGCON_DAG_SIZE                                    0x3
#define _DAGCON_DAG_LENGTH                                  0x3
#define _DAGCON_DAG_MASK                                    0x7

// Register: VOUT
#define VOUT VOUT
extern volatile unsigned short          VOUT                __at(0x094);
#ifndef _LIB_BUILD
asm("VOUT equ 094h");
#endif

// Register: VOUTL
#define VOUTL VOUTL
extern volatile unsigned char           VOUTL               __at(0x094);
#ifndef _LIB_BUILD
asm("VOUTL equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VOUTL                  :8;
    };
    struct {
        unsigned VOUT0                  :1;
        unsigned VOUT1                  :1;
        unsigned VOUT2                  :1;
        unsigned VOUT3                  :1;
        unsigned VOUT4                  :1;
        unsigned VOUT5                  :1;
        unsigned VOUT6                  :1;
        unsigned VOUT7                  :1;
    };
} VOUTLbits_t;
extern volatile VOUTLbits_t VOUTLbits __at(0x094);
// bitfield macros
#define _VOUTL_VOUTL_POSN                                   0x0
#define _VOUTL_VOUTL_POSITION                               0x0
#define _VOUTL_VOUTL_SIZE                                   0x8
#define _VOUTL_VOUTL_LENGTH                                 0x8
#define _VOUTL_VOUTL_MASK                                   0xFF
#define _VOUTL_VOUT0_POSN                                   0x0
#define _VOUTL_VOUT0_POSITION                               0x0
#define _VOUTL_VOUT0_SIZE                                   0x1
#define _VOUTL_VOUT0_LENGTH                                 0x1
#define _VOUTL_VOUT0_MASK                                   0x1
#define _VOUTL_VOUT1_POSN                                   0x1
#define _VOUTL_VOUT1_POSITION                               0x1
#define _VOUTL_VOUT1_SIZE                                   0x1
#define _VOUTL_VOUT1_LENGTH                                 0x1
#define _VOUTL_VOUT1_MASK                                   0x2
#define _VOUTL_VOUT2_POSN                                   0x2
#define _VOUTL_VOUT2_POSITION                               0x2
#define _VOUTL_VOUT2_SIZE                                   0x1
#define _VOUTL_VOUT2_LENGTH                                 0x1
#define _VOUTL_VOUT2_MASK                                   0x4
#define _VOUTL_VOUT3_POSN                                   0x3
#define _VOUTL_VOUT3_POSITION                               0x3
#define _VOUTL_VOUT3_SIZE                                   0x1
#define _VOUTL_VOUT3_LENGTH                                 0x1
#define _VOUTL_VOUT3_MASK                                   0x8
#define _VOUTL_VOUT4_POSN                                   0x4
#define _VOUTL_VOUT4_POSITION                               0x4
#define _VOUTL_VOUT4_SIZE                                   0x1
#define _VOUTL_VOUT4_LENGTH                                 0x1
#define _VOUTL_VOUT4_MASK                                   0x10
#define _VOUTL_VOUT5_POSN                                   0x5
#define _VOUTL_VOUT5_POSITION                               0x5
#define _VOUTL_VOUT5_SIZE                                   0x1
#define _VOUTL_VOUT5_LENGTH                                 0x1
#define _VOUTL_VOUT5_MASK                                   0x20
#define _VOUTL_VOUT6_POSN                                   0x6
#define _VOUTL_VOUT6_POSITION                               0x6
#define _VOUTL_VOUT6_SIZE                                   0x1
#define _VOUTL_VOUT6_LENGTH                                 0x1
#define _VOUTL_VOUT6_MASK                                   0x40
#define _VOUTL_VOUT7_POSN                                   0x7
#define _VOUTL_VOUT7_POSITION                               0x7
#define _VOUTL_VOUT7_SIZE                                   0x1
#define _VOUTL_VOUT7_LENGTH                                 0x1
#define _VOUTL_VOUT7_MASK                                   0x80

// Register: VOUTH
#define VOUTH VOUTH
extern volatile unsigned char           VOUTH               __at(0x095);
#ifndef _LIB_BUILD
asm("VOUTH equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VOUTH                  :2;
    };
    struct {
        unsigned VOUT8                  :1;
        unsigned VOUT9                  :1;
    };
} VOUTHbits_t;
extern volatile VOUTHbits_t VOUTHbits __at(0x095);
// bitfield macros
#define _VOUTH_VOUTH_POSN                                   0x0
#define _VOUTH_VOUTH_POSITION                               0x0
#define _VOUTH_VOUTH_SIZE                                   0x2
#define _VOUTH_VOUTH_LENGTH                                 0x2
#define _VOUTH_VOUTH_MASK                                   0x3
#define _VOUTH_VOUT8_POSN                                   0x0
#define _VOUTH_VOUT8_POSITION                               0x0
#define _VOUTH_VOUT8_SIZE                                   0x1
#define _VOUTH_VOUT8_LENGTH                                 0x1
#define _VOUTH_VOUT8_MASK                                   0x1
#define _VOUTH_VOUT9_POSN                                   0x1
#define _VOUTH_VOUT9_POSITION                               0x1
#define _VOUTH_VOUT9_SIZE                                   0x1
#define _VOUTH_VOUT9_LENGTH                                 0x1
#define _VOUTH_VOUT9_MASK                                   0x2

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x096);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 096h");
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
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x096);
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

// Register: VOTUVLO
#define VOTUVLO VOTUVLO
extern volatile unsigned char           VOTUVLO             __at(0x099);
#ifndef _LIB_BUILD
asm("VOTUVLO equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OUV                    :4;
    };
} VOTUVLObits_t;
extern volatile VOTUVLObits_t VOTUVLObits __at(0x099);
// bitfield macros
#define _VOTUVLO_OUV_POSN                                   0x0
#define _VOTUVLO_OUV_POSITION                               0x0
#define _VOTUVLO_OUV_SIZE                                   0x4
#define _VOTUVLO_OUV_LENGTH                                 0x4
#define _VOTUVLO_OUV_MASK                                   0xF

// Register: VOTOVLO
#define VOTOVLO VOTOVLO
extern volatile unsigned char           VOTOVLO             __at(0x09A);
#ifndef _LIB_BUILD
asm("VOTOVLO equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OOV                    :4;
    };
} VOTOVLObits_t;
extern volatile VOTOVLObits_t VOTOVLObits __at(0x09A);
// bitfield macros
#define _VOTOVLO_OOV_POSN                                   0x0
#define _VOTOVLO_OOV_POSITION                               0x0
#define _VOTOVLO_OOV_SIZE                                   0x4
#define _VOTOVLO_OOV_LENGTH                                 0x4
#define _VOTOVLO_OOV_MASK                                   0xF

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

// Register: RAMPCON
#define RAMPCON RAMPCON
extern volatile unsigned char           RAMPCON             __at(0x09C);
#ifndef _LIB_BUILD
asm("RAMPCON equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RMP                    :5;
        unsigned                        :2;
        unsigned RMPEN                  :1;
    };
} RAMPCONbits_t;
extern volatile RAMPCONbits_t RAMPCONbits __at(0x09C);
// bitfield macros
#define _RAMPCON_RMP_POSN                                   0x0
#define _RAMPCON_RMP_POSITION                               0x0
#define _RAMPCON_RMP_SIZE                                   0x5
#define _RAMPCON_RMP_LENGTH                                 0x5
#define _RAMPCON_RMP_MASK                                   0x1F
#define _RAMPCON_RMPEN_POSN                                 0x7
#define _RAMPCON_RMPEN_POSITION                             0x7
#define _RAMPCON_RMPEN_SIZE                                 0x1
#define _RAMPCON_RMPEN_LENGTH                               0x1
#define _RAMPCON_RMPEN_MASK                                 0x80

// Register: OCCON
#define OCCON OCCON
extern volatile unsigned char           OCCON               __at(0x09D);
#ifndef _LIB_BUILD
asm("OCCON equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OOC                    :5;
        unsigned OCLEB                  :2;
        unsigned OCEN                   :1;
    };
} OCCONbits_t;
extern volatile OCCONbits_t OCCONbits __at(0x09D);
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
extern volatile unsigned char           CSGSCON             __at(0x09E);
#ifndef _LIB_BUILD
asm("CSGSCON equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CSGS                   :5;
    };
} CSGSCONbits_t;
extern volatile CSGSCONbits_t CSGSCONbits __at(0x09E);
// bitfield macros
#define _CSGSCON_CSGS_POSN                                  0x0
#define _CSGSCON_CSGS_POSITION                              0x0
#define _CSGSCON_CSGS_SIZE                                  0x5
#define _CSGSCON_CSGS_LENGTH                                0x5
#define _CSGSCON_CSGS_MASK                                  0x1F

// Register: RELEFF
#define RELEFF RELEFF
extern volatile unsigned char           RELEFF              __at(0x09F);
#ifndef _LIB_BUILD
asm("RELEFF equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RE                     :7;
        unsigned MSDONE                 :1;
    };
} RELEFFbits_t;
extern volatile RELEFFbits_t RELEFFbits __at(0x09F);
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
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WCS0                   :1;
        unsigned WCS1                   :1;
        unsigned                        :1;
        unsigned WPUA5                  :1;
    };
    struct {
        unsigned WPUGPA0                :1;
        unsigned WPUGPA1                :1;
        unsigned WPUGPA2                :1;
        unsigned WPUGPA3                :1;
        unsigned                        :1;
        unsigned WPUGPA5                :1;
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
        unsigned WPUB7                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned WPUGPB1                :1;
        unsigned WPUGPB2                :1;
        unsigned WPUGPB3                :1;
        unsigned WPUGPB4                :1;
        unsigned WPUGPB5                :1;
        unsigned WPUGPB6                :1;
        unsigned WPUGPB7                :1;
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
#define _WPUGPB_WPUB7_POSN                                  0x7
#define _WPUGPB_WPUB7_POSITION                              0x7
#define _WPUGPB_WPUB7_SIZE                                  0x1
#define _WPUGPB_WPUB7_LENGTH                                0x1
#define _WPUGPB_WPUB7_MASK                                  0x80
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
#define _WPUGPB_WPUGPB3_POSN                                0x3
#define _WPUGPB_WPUGPB3_POSITION                            0x3
#define _WPUGPB_WPUGPB3_SIZE                                0x1
#define _WPUGPB_WPUGPB3_LENGTH                              0x1
#define _WPUGPB_WPUGPB3_MASK                                0x8
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
        unsigned SPAN                   :1;
        unsigned MEASEN                 :1;
        unsigned LODIS                  :1;
        unsigned HIDIS                  :1;
        unsigned TOPO                   :1;
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
#define _PE1_SPAN_POSN                                      0x2
#define _PE1_SPAN_POSITION                                  0x2
#define _PE1_SPAN_SIZE                                      0x1
#define _PE1_SPAN_LENGTH                                    0x1
#define _PE1_SPAN_MASK                                      0x4
#define _PE1_MEASEN_POSN                                    0x3
#define _PE1_MEASEN_POSITION                                0x3
#define _PE1_MEASEN_SIZE                                    0x1
#define _PE1_MEASEN_LENGTH                                  0x1
#define _PE1_MEASEN_MASK                                    0x8
#define _PE1_LODIS_POSN                                     0x4
#define _PE1_LODIS_POSITION                                 0x4
#define _PE1_LODIS_SIZE                                     0x1
#define _PE1_LODIS_LENGTH                                   0x1
#define _PE1_LODIS_MASK                                     0x10
#define _PE1_HIDIS_POSN                                     0x5
#define _PE1_HIDIS_POSITION                                 0x5
#define _PE1_HIDIS_SIZE                                     0x1
#define _PE1_HIDIS_LENGTH                                   0x1
#define _PE1_HIDIS_MASK                                     0x20
#define _PE1_TOPO_POSN                                      0x6
#define _PE1_TOPO_POSITION                                  0x6
#define _PE1_TOPO_SIZE                                      0x1
#define _PE1_TOPO_LENGTH                                    0x1
#define _PE1_TOPO_MASK                                      0x40
#define _PE1_DECON_POSN                                     0x7
#define _PE1_DECON_POSITION                                 0x7
#define _PE1_DECON_SIZE                                     0x1
#define _PE1_DECON_LENGTH                                   0x1
#define _PE1_DECON_MASK                                     0x80

// Register: MODECON
#define MODECON MODECON
extern volatile unsigned char           MODECON             __at(0x108);
#ifndef _LIB_BUILD
asm("MODECON equ 0108h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MSC                    :3;
        unsigned EACLMP                 :1;
        unsigned CNSG                   :1;
        unsigned VDDEN                  :1;
        unsigned VGNDEN                 :1;
        unsigned CLMPSEL                :1;
    };
} MODECONbits_t;
extern volatile MODECONbits_t MODECONbits __at(0x108);
// bitfield macros
#define _MODECON_MSC_POSN                                   0x0
#define _MODECON_MSC_POSITION                               0x0
#define _MODECON_MSC_SIZE                                   0x3
#define _MODECON_MSC_LENGTH                                 0x3
#define _MODECON_MSC_MASK                                   0x7
#define _MODECON_EACLMP_POSN                                0x3
#define _MODECON_EACLMP_POSITION                            0x3
#define _MODECON_EACLMP_SIZE                                0x1
#define _MODECON_EACLMP_LENGTH                              0x1
#define _MODECON_EACLMP_MASK                                0x8
#define _MODECON_CNSG_POSN                                  0x4
#define _MODECON_CNSG_POSITION                              0x4
#define _MODECON_CNSG_SIZE                                  0x1
#define _MODECON_CNSG_LENGTH                                0x1
#define _MODECON_CNSG_MASK                                  0x10
#define _MODECON_VDDEN_POSN                                 0x5
#define _MODECON_VDDEN_POSITION                             0x5
#define _MODECON_VDDEN_SIZE                                 0x1
#define _MODECON_VDDEN_LENGTH                               0x1
#define _MODECON_VDDEN_MASK                                 0x20
#define _MODECON_VGNDEN_POSN                                0x6
#define _MODECON_VGNDEN_POSITION                            0x6
#define _MODECON_VGNDEN_SIZE                                0x1
#define _MODECON_VGNDEN_LENGTH                              0x1
#define _MODECON_VGNDEN_MASK                                0x40
#define _MODECON_CLMPSEL_POSN                               0x7
#define _MODECON_CLMPSEL_POSITION                           0x7
#define _MODECON_CLMPSEL_SIZE                               0x1
#define _MODECON_CLMPSEL_LENGTH                             0x1
#define _MODECON_CLMPSEL_MASK                               0x80

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

// Register: VREFCAL
#define VREFCAL VREFCAL
extern volatile unsigned char           VREFCAL             __at(0x119);
#ifndef _LIB_BUILD
asm("VREFCAL equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VREF0                  :1;
        unsigned VREF1                  :1;
        unsigned VREF2                  :1;
        unsigned VREF3                  :1;
        unsigned VREF4                  :1;
    };
} VREFCALbits_t;
extern volatile VREFCALbits_t VREFCALbits __at(0x119);
// bitfield macros
#define _VREFCAL_VREF0_POSN                                 0x0
#define _VREFCAL_VREF0_POSITION                             0x0
#define _VREFCAL_VREF0_SIZE                                 0x1
#define _VREFCAL_VREF0_LENGTH                               0x1
#define _VREFCAL_VREF0_MASK                                 0x1
#define _VREFCAL_VREF1_POSN                                 0x1
#define _VREFCAL_VREF1_POSITION                             0x1
#define _VREFCAL_VREF1_SIZE                                 0x1
#define _VREFCAL_VREF1_LENGTH                               0x1
#define _VREFCAL_VREF1_MASK                                 0x2
#define _VREFCAL_VREF2_POSN                                 0x2
#define _VREFCAL_VREF2_POSITION                             0x2
#define _VREFCAL_VREF2_SIZE                                 0x1
#define _VREFCAL_VREF2_LENGTH                               0x1
#define _VREFCAL_VREF2_MASK                                 0x4
#define _VREFCAL_VREF3_POSN                                 0x3
#define _VREFCAL_VREF3_POSITION                             0x3
#define _VREFCAL_VREF3_SIZE                                 0x1
#define _VREFCAL_VREF3_LENGTH                               0x1
#define _VREFCAL_VREF3_MASK                                 0x8
#define _VREFCAL_VREF4_POSN                                 0x4
#define _VREFCAL_VREF4_POSITION                             0x4
#define _VREFCAL_VREF4_SIZE                                 0x1
#define _VREFCAL_VREF4_LENGTH                               0x1
#define _VREFCAL_VREF4_MASK                                 0x10

// Register: VRFSCAL
#define VRFSCAL VRFSCAL
extern volatile unsigned char           VRFSCAL             __at(0x11A);
#ifndef _LIB_BUILD
asm("VRFSCAL equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VRFS0                  :1;
        unsigned VRFS1                  :1;
        unsigned VRFS2                  :1;
        unsigned VRFS3                  :1;
        unsigned VRFS4                  :1;
    };
} VRFSCALbits_t;
extern volatile VRFSCALbits_t VRFSCALbits __at(0x11A);
// bitfield macros
#define _VRFSCAL_VRFS0_POSN                                 0x0
#define _VRFSCAL_VRFS0_POSITION                             0x0
#define _VRFSCAL_VRFS0_SIZE                                 0x1
#define _VRFSCAL_VRFS0_LENGTH                               0x1
#define _VRFSCAL_VRFS0_MASK                                 0x1
#define _VRFSCAL_VRFS1_POSN                                 0x1
#define _VRFSCAL_VRFS1_POSITION                             0x1
#define _VRFSCAL_VRFS1_SIZE                                 0x1
#define _VRFSCAL_VRFS1_LENGTH                               0x1
#define _VRFSCAL_VRFS1_MASK                                 0x2
#define _VRFSCAL_VRFS2_POSN                                 0x2
#define _VRFSCAL_VRFS2_POSITION                             0x2
#define _VRFSCAL_VRFS2_SIZE                                 0x1
#define _VRFSCAL_VRFS2_LENGTH                               0x1
#define _VRFSCAL_VRFS2_MASK                                 0x4
#define _VRFSCAL_VRFS3_POSN                                 0x3
#define _VRFSCAL_VRFS3_POSITION                             0x3
#define _VRFSCAL_VRFS3_SIZE                                 0x1
#define _VRFSCAL_VRFS3_LENGTH                               0x1
#define _VRFSCAL_VRFS3_MASK                                 0x8
#define _VRFSCAL_VRFS4_POSN                                 0x4
#define _VRFSCAL_VRFS4_POSITION                             0x4
#define _VRFSCAL_VRFS4_SIZE                                 0x1
#define _VRFSCAL_VRFS4_LENGTH                               0x1
#define _VRFSCAL_VRFS4_MASK                                 0x10

// Register: RAMPCAL
#define RAMPCAL RAMPCAL
extern volatile unsigned char           RAMPCAL             __at(0x11B);
#ifndef _LIB_BUILD
asm("RAMPCAL equ 011Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RAMP0                  :1;
        unsigned RAMP1                  :1;
        unsigned RAMP2                  :1;
        unsigned RAMP3                  :1;
        unsigned RAMP4                  :1;
    };
} RAMPCALbits_t;
extern volatile RAMPCALbits_t RAMPCALbits __at(0x11B);
// bitfield macros
#define _RAMPCAL_RAMP0_POSN                                 0x0
#define _RAMPCAL_RAMP0_POSITION                             0x0
#define _RAMPCAL_RAMP0_SIZE                                 0x1
#define _RAMPCAL_RAMP0_LENGTH                               0x1
#define _RAMPCAL_RAMP0_MASK                                 0x1
#define _RAMPCAL_RAMP1_POSN                                 0x1
#define _RAMPCAL_RAMP1_POSITION                             0x1
#define _RAMPCAL_RAMP1_SIZE                                 0x1
#define _RAMPCAL_RAMP1_LENGTH                               0x1
#define _RAMPCAL_RAMP1_MASK                                 0x2
#define _RAMPCAL_RAMP2_POSN                                 0x2
#define _RAMPCAL_RAMP2_POSITION                             0x2
#define _RAMPCAL_RAMP2_SIZE                                 0x1
#define _RAMPCAL_RAMP2_LENGTH                               0x1
#define _RAMPCAL_RAMP2_MASK                                 0x4
#define _RAMPCAL_RAMP3_POSN                                 0x3
#define _RAMPCAL_RAMP3_POSITION                             0x3
#define _RAMPCAL_RAMP3_SIZE                                 0x1
#define _RAMPCAL_RAMP3_LENGTH                               0x1
#define _RAMPCAL_RAMP3_MASK                                 0x8
#define _RAMPCAL_RAMP4_POSN                                 0x4
#define _RAMPCAL_RAMP4_POSITION                             0x4
#define _RAMPCAL_RAMP4_SIZE                                 0x1
#define _RAMPCAL_RAMP4_LENGTH                               0x1
#define _RAMPCAL_RAMP4_MASK                                 0x10

// Register: CSRCAL
#define CSRCAL CSRCAL
extern volatile unsigned char           CSRCAL              __at(0x11C);
#ifndef _LIB_BUILD
asm("CSRCAL equ 011Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CSR0                   :1;
        unsigned CSR1                   :1;
        unsigned CSR2                   :1;
        unsigned CSR3                   :1;
        unsigned CSR4                   :1;
    };
} CSRCALbits_t;
extern volatile CSRCALbits_t CSRCALbits __at(0x11C);
// bitfield macros
#define _CSRCAL_CSR0_POSN                                   0x0
#define _CSRCAL_CSR0_POSITION                               0x0
#define _CSRCAL_CSR0_SIZE                                   0x1
#define _CSRCAL_CSR0_LENGTH                                 0x1
#define _CSRCAL_CSR0_MASK                                   0x1
#define _CSRCAL_CSR1_POSN                                   0x1
#define _CSRCAL_CSR1_POSITION                               0x1
#define _CSRCAL_CSR1_SIZE                                   0x1
#define _CSRCAL_CSR1_LENGTH                                 0x1
#define _CSRCAL_CSR1_MASK                                   0x2
#define _CSRCAL_CSR2_POSN                                   0x2
#define _CSRCAL_CSR2_POSITION                               0x2
#define _CSRCAL_CSR2_SIZE                                   0x1
#define _CSRCAL_CSR2_LENGTH                                 0x1
#define _CSRCAL_CSR2_MASK                                   0x4
#define _CSRCAL_CSR3_POSN                                   0x3
#define _CSRCAL_CSR3_POSITION                               0x3
#define _CSRCAL_CSR3_SIZE                                   0x1
#define _CSRCAL_CSR3_LENGTH                                 0x1
#define _CSRCAL_CSR3_MASK                                   0x8
#define _CSRCAL_CSR4_POSN                                   0x4
#define _CSRCAL_CSR4_POSITION                               0x4
#define _CSRCAL_CSR4_SIZE                                   0x1
#define _CSRCAL_CSR4_LENGTH                                 0x1
#define _CSRCAL_CSR4_MASK                                   0x10

// Register: OVUVCAL
#define OVUVCAL OVUVCAL
extern volatile unsigned char           OVUVCAL             __at(0x11D);
#ifndef _LIB_BUILD
asm("OVUVCAL equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVCO                   :4;
        unsigned UVCO                   :4;
    };
} OVUVCALbits_t;
extern volatile OVUVCALbits_t OVUVCALbits __at(0x11D);
// bitfield macros
#define _OVUVCAL_OVCO_POSN                                  0x0
#define _OVUVCAL_OVCO_POSITION                              0x0
#define _OVUVCAL_OVCO_SIZE                                  0x4
#define _OVUVCAL_OVCO_LENGTH                                0x4
#define _OVUVCAL_OVCO_MASK                                  0xF
#define _OVUVCAL_UVCO_POSN                                  0x4
#define _OVUVCAL_UVCO_POSITION                              0x4
#define _OVUVCAL_UVCO_SIZE                                  0x4
#define _OVUVCAL_UVCO_LENGTH                                0x4
#define _OVUVCAL_UVCO_MASK                                  0xF0

// Register: DEMCAL
#define DEMCAL DEMCAL
extern volatile unsigned char           DEMCAL              __at(0x11E);
#ifndef _LIB_BUILD
asm("DEMCAL equ 011Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DEMOV0                 :1;
        unsigned DEMOV1                 :1;
        unsigned DEMOV2                 :1;
        unsigned DEMOV3                 :1;
        unsigned DEMOV4                 :1;
    };
} DEMCALbits_t;
extern volatile DEMCALbits_t DEMCALbits __at(0x11E);
// bitfield macros
#define _DEMCAL_DEMOV0_POSN                                 0x0
#define _DEMCAL_DEMOV0_POSITION                             0x0
#define _DEMCAL_DEMOV0_SIZE                                 0x1
#define _DEMCAL_DEMOV0_LENGTH                               0x1
#define _DEMCAL_DEMOV0_MASK                                 0x1
#define _DEMCAL_DEMOV1_POSN                                 0x1
#define _DEMCAL_DEMOV1_POSITION                             0x1
#define _DEMCAL_DEMOV1_SIZE                                 0x1
#define _DEMCAL_DEMOV1_LENGTH                               0x1
#define _DEMCAL_DEMOV1_MASK                                 0x2
#define _DEMCAL_DEMOV2_POSN                                 0x2
#define _DEMCAL_DEMOV2_POSITION                             0x2
#define _DEMCAL_DEMOV2_SIZE                                 0x1
#define _DEMCAL_DEMOV2_LENGTH                               0x1
#define _DEMCAL_DEMOV2_MASK                                 0x4
#define _DEMCAL_DEMOV3_POSN                                 0x3
#define _DEMCAL_DEMOV3_POSITION                             0x3
#define _DEMCAL_DEMOV3_SIZE                                 0x1
#define _DEMCAL_DEMOV3_LENGTH                               0x1
#define _DEMCAL_DEMOV3_MASK                                 0x8
#define _DEMCAL_DEMOV4_POSN                                 0x4
#define _DEMCAL_DEMOV4_POSITION                             0x4
#define _DEMCAL_DEMOV4_SIZE                                 0x1
#define _DEMCAL_DEMOV4_LENGTH                               0x1
#define _DEMCAL_DEMOV4_MASK                                 0x10

// Register: HCSOVCAL
#define HCSOVCAL HCSOVCAL
extern volatile unsigned char           HCSOVCAL            __at(0x11F);
#ifndef _LIB_BUILD
asm("HCSOVCAL equ 011Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HCSOV0                 :1;
        unsigned HCSOV1                 :1;
        unsigned HCSOV2                 :1;
        unsigned HCSOV3                 :1;
        unsigned HCSOV4                 :1;
        unsigned HCSOV5                 :1;
        unsigned HCSOV6                 :1;
    };
} HCSOVCALbits_t;
extern volatile HCSOVCALbits_t HCSOVCALbits __at(0x11F);
// bitfield macros
#define _HCSOVCAL_HCSOV0_POSN                               0x0
#define _HCSOVCAL_HCSOV0_POSITION                           0x0
#define _HCSOVCAL_HCSOV0_SIZE                               0x1
#define _HCSOVCAL_HCSOV0_LENGTH                             0x1
#define _HCSOVCAL_HCSOV0_MASK                               0x1
#define _HCSOVCAL_HCSOV1_POSN                               0x1
#define _HCSOVCAL_HCSOV1_POSITION                           0x1
#define _HCSOVCAL_HCSOV1_SIZE                               0x1
#define _HCSOVCAL_HCSOV1_LENGTH                             0x1
#define _HCSOVCAL_HCSOV1_MASK                               0x2
#define _HCSOVCAL_HCSOV2_POSN                               0x2
#define _HCSOVCAL_HCSOV2_POSITION                           0x2
#define _HCSOVCAL_HCSOV2_SIZE                               0x1
#define _HCSOVCAL_HCSOV2_LENGTH                             0x1
#define _HCSOVCAL_HCSOV2_MASK                               0x4
#define _HCSOVCAL_HCSOV3_POSN                               0x3
#define _HCSOVCAL_HCSOV3_POSITION                           0x3
#define _HCSOVCAL_HCSOV3_SIZE                               0x1
#define _HCSOVCAL_HCSOV3_LENGTH                             0x1
#define _HCSOVCAL_HCSOV3_MASK                               0x8
#define _HCSOVCAL_HCSOV4_POSN                               0x4
#define _HCSOVCAL_HCSOV4_POSITION                           0x4
#define _HCSOVCAL_HCSOV4_SIZE                               0x1
#define _HCSOVCAL_HCSOV4_LENGTH                             0x1
#define _HCSOVCAL_HCSOV4_MASK                               0x10
#define _HCSOVCAL_HCSOV5_POSN                               0x5
#define _HCSOVCAL_HCSOV5_POSITION                           0x5
#define _HCSOVCAL_HCSOV5_SIZE                               0x1
#define _HCSOVCAL_HCSOV5_LENGTH                             0x1
#define _HCSOVCAL_HCSOV5_MASK                               0x20
#define _HCSOVCAL_HCSOV6_POSN                               0x6
#define _HCSOVCAL_HCSOV6_POSITION                           0x6
#define _HCSOVCAL_HCSOV6_SIZE                               0x1
#define _HCSOVCAL_HCSOV6_LENGTH                             0x1
#define _HCSOVCAL_HCSOV6_MASK                               0x40

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

// Register: TTACAL
#define TTACAL TTACAL
extern volatile unsigned char           TTACAL              __at(0x196);
#ifndef _LIB_BUILD
asm("TTACAL equ 0196h");
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
extern volatile TTACALbits_t TTACALbits __at(0x196);
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

// Register: OSCCAL
#define OSCCAL OSCCAL
extern volatile unsigned char           OSCCAL              __at(0x197);
#ifndef _LIB_BUILD
asm("OSCCAL equ 0197h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FCAL0                  :1;
        unsigned FCAL1                  :1;
        unsigned FCAL2                  :1;
        unsigned FCAL3                  :1;
        unsigned FCAL4                  :1;
        unsigned FCAL5                  :1;
        unsigned FCAL6                  :1;
    };
} OSCCALbits_t;
extern volatile OSCCALbits_t OSCCALbits __at(0x197);
// bitfield macros
#define _OSCCAL_FCAL0_POSN                                  0x0
#define _OSCCAL_FCAL0_POSITION                              0x0
#define _OSCCAL_FCAL0_SIZE                                  0x1
#define _OSCCAL_FCAL0_LENGTH                                0x1
#define _OSCCAL_FCAL0_MASK                                  0x1
#define _OSCCAL_FCAL1_POSN                                  0x1
#define _OSCCAL_FCAL1_POSITION                              0x1
#define _OSCCAL_FCAL1_SIZE                                  0x1
#define _OSCCAL_FCAL1_LENGTH                                0x1
#define _OSCCAL_FCAL1_MASK                                  0x2
#define _OSCCAL_FCAL2_POSN                                  0x2
#define _OSCCAL_FCAL2_POSITION                              0x2
#define _OSCCAL_FCAL2_SIZE                                  0x1
#define _OSCCAL_FCAL2_LENGTH                                0x1
#define _OSCCAL_FCAL2_MASK                                  0x4
#define _OSCCAL_FCAL3_POSN                                  0x3
#define _OSCCAL_FCAL3_POSITION                              0x3
#define _OSCCAL_FCAL3_SIZE                                  0x1
#define _OSCCAL_FCAL3_LENGTH                                0x1
#define _OSCCAL_FCAL3_MASK                                  0x8
#define _OSCCAL_FCAL4_POSN                                  0x4
#define _OSCCAL_FCAL4_POSITION                              0x4
#define _OSCCAL_FCAL4_SIZE                                  0x1
#define _OSCCAL_FCAL4_LENGTH                                0x1
#define _OSCCAL_FCAL4_MASK                                  0x10
#define _OSCCAL_FCAL5_POSN                                  0x5
#define _OSCCAL_FCAL5_POSITION                              0x5
#define _OSCCAL_FCAL5_SIZE                                  0x1
#define _OSCCAL_FCAL5_LENGTH                                0x1
#define _OSCCAL_FCAL5_MASK                                  0x20
#define _OSCCAL_FCAL6_POSN                                  0x6
#define _OSCCAL_FCAL6_POSITION                              0x6
#define _OSCCAL_FCAL6_SIZE                                  0x1
#define _OSCCAL_FCAL6_LENGTH                                0x1
#define _OSCCAL_FCAL6_MASK                                  0x40

// Register: BGTCAL
#define BGTCAL BGTCAL
extern volatile unsigned char           BGTCAL              __at(0x198);
#ifndef _LIB_BUILD
asm("BGTCAL equ 0198h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BGT0                   :1;
        unsigned BGT1                   :1;
        unsigned BGT2                   :1;
        unsigned BGT3                   :1;
    };
} BGTCALbits_t;
extern volatile BGTCALbits_t BGTCALbits __at(0x198);
// bitfield macros
#define _BGTCAL_BGT0_POSN                                   0x0
#define _BGTCAL_BGT0_POSITION                               0x0
#define _BGTCAL_BGT0_SIZE                                   0x1
#define _BGTCAL_BGT0_LENGTH                                 0x1
#define _BGTCAL_BGT0_MASK                                   0x1
#define _BGTCAL_BGT1_POSN                                   0x1
#define _BGTCAL_BGT1_POSITION                               0x1
#define _BGTCAL_BGT1_SIZE                                   0x1
#define _BGTCAL_BGT1_LENGTH                                 0x1
#define _BGTCAL_BGT1_MASK                                   0x2
#define _BGTCAL_BGT2_POSN                                   0x2
#define _BGTCAL_BGT2_POSITION                               0x2
#define _BGTCAL_BGT2_SIZE                                   0x1
#define _BGTCAL_BGT2_LENGTH                                 0x1
#define _BGTCAL_BGT2_MASK                                   0x4
#define _BGTCAL_BGT3_POSN                                   0x3
#define _BGTCAL_BGT3_POSITION                               0x3
#define _BGTCAL_BGT3_SIZE                                   0x1
#define _BGTCAL_BGT3_LENGTH                                 0x1
#define _BGTCAL_BGT3_MASK                                   0x8

// Register: BGRCAL
#define BGRCAL BGRCAL
extern volatile unsigned char           BGRCAL              __at(0x199);
#ifndef _LIB_BUILD
asm("BGRCAL equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BGR0                   :1;
        unsigned BGR1                   :1;
        unsigned BGR2                   :1;
        unsigned BGR3                   :1;
        unsigned BGR4                   :1;
        unsigned BGR5                   :1;
    };
} BGRCALbits_t;
extern volatile BGRCALbits_t BGRCALbits __at(0x199);
// bitfield macros
#define _BGRCAL_BGR0_POSN                                   0x0
#define _BGRCAL_BGR0_POSITION                               0x0
#define _BGRCAL_BGR0_SIZE                                   0x1
#define _BGRCAL_BGR0_LENGTH                                 0x1
#define _BGRCAL_BGR0_MASK                                   0x1
#define _BGRCAL_BGR1_POSN                                   0x1
#define _BGRCAL_BGR1_POSITION                               0x1
#define _BGRCAL_BGR1_SIZE                                   0x1
#define _BGRCAL_BGR1_LENGTH                                 0x1
#define _BGRCAL_BGR1_MASK                                   0x2
#define _BGRCAL_BGR2_POSN                                   0x2
#define _BGRCAL_BGR2_POSITION                               0x2
#define _BGRCAL_BGR2_SIZE                                   0x1
#define _BGRCAL_BGR2_LENGTH                                 0x1
#define _BGRCAL_BGR2_MASK                                   0x4
#define _BGRCAL_BGR3_POSN                                   0x3
#define _BGRCAL_BGR3_POSITION                               0x3
#define _BGRCAL_BGR3_SIZE                                   0x1
#define _BGRCAL_BGR3_LENGTH                                 0x1
#define _BGRCAL_BGR3_MASK                                   0x8
#define _BGRCAL_BGR4_POSN                                   0x4
#define _BGRCAL_BGR4_POSITION                               0x4
#define _BGRCAL_BGR4_SIZE                                   0x1
#define _BGRCAL_BGR4_LENGTH                                 0x1
#define _BGRCAL_BGR4_MASK                                   0x10
#define _BGRCAL_BGR5_POSN                                   0x5
#define _BGRCAL_BGR5_POSITION                               0x5
#define _BGRCAL_BGR5_SIZE                                   0x1
#define _BGRCAL_BGR5_LENGTH                                 0x1
#define _BGRCAL_BGR5_MASK                                   0x20

// Register: AVDDCAL
#define AVDDCAL AVDDCAL
extern volatile unsigned char           AVDDCAL             __at(0x19A);
#ifndef _LIB_BUILD
asm("AVDDCAL equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AVDD0                  :1;
        unsigned AVDD1                  :1;
        unsigned AVDD2                  :1;
        unsigned AVDD3                  :1;
    };
} AVDDCALbits_t;
extern volatile AVDDCALbits_t AVDDCALbits __at(0x19A);
// bitfield macros
#define _AVDDCAL_AVDD0_POSN                                 0x0
#define _AVDDCAL_AVDD0_POSITION                             0x0
#define _AVDDCAL_AVDD0_SIZE                                 0x1
#define _AVDDCAL_AVDD0_LENGTH                               0x1
#define _AVDDCAL_AVDD0_MASK                                 0x1
#define _AVDDCAL_AVDD1_POSN                                 0x1
#define _AVDDCAL_AVDD1_POSITION                             0x1
#define _AVDDCAL_AVDD1_SIZE                                 0x1
#define _AVDDCAL_AVDD1_LENGTH                               0x1
#define _AVDDCAL_AVDD1_MASK                                 0x2
#define _AVDDCAL_AVDD2_POSN                                 0x2
#define _AVDDCAL_AVDD2_POSITION                             0x2
#define _AVDDCAL_AVDD2_SIZE                                 0x1
#define _AVDDCAL_AVDD2_LENGTH                               0x1
#define _AVDDCAL_AVDD2_MASK                                 0x4
#define _AVDDCAL_AVDD3_POSN                                 0x3
#define _AVDDCAL_AVDD3_POSITION                             0x3
#define _AVDDCAL_AVDD3_SIZE                                 0x1
#define _AVDDCAL_AVDD3_LENGTH                               0x1
#define _AVDDCAL_AVDD3_MASK                                 0x8

// Register: VOURCAL
#define VOURCAL VOURCAL
extern volatile unsigned char           VOURCAL             __at(0x19B);
#ifndef _LIB_BUILD
asm("VOURCAL equ 019Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VOUR0                  :1;
        unsigned VOUR1                  :1;
        unsigned VOUR2                  :1;
        unsigned VOUR3                  :1;
        unsigned VOUR4                  :1;
    };
} VOURCALbits_t;
extern volatile VOURCALbits_t VOURCALbits __at(0x19B);
// bitfield macros
#define _VOURCAL_VOUR0_POSN                                 0x0
#define _VOURCAL_VOUR0_POSITION                             0x0
#define _VOURCAL_VOUR0_SIZE                                 0x1
#define _VOURCAL_VOUR0_LENGTH                               0x1
#define _VOURCAL_VOUR0_MASK                                 0x1
#define _VOURCAL_VOUR1_POSN                                 0x1
#define _VOURCAL_VOUR1_POSITION                             0x1
#define _VOURCAL_VOUR1_SIZE                                 0x1
#define _VOURCAL_VOUR1_LENGTH                               0x1
#define _VOURCAL_VOUR1_MASK                                 0x2
#define _VOURCAL_VOUR2_POSN                                 0x2
#define _VOURCAL_VOUR2_POSITION                             0x2
#define _VOURCAL_VOUR2_SIZE                                 0x1
#define _VOURCAL_VOUR2_LENGTH                               0x1
#define _VOURCAL_VOUR2_MASK                                 0x4
#define _VOURCAL_VOUR3_POSN                                 0x3
#define _VOURCAL_VOUR3_POSITION                             0x3
#define _VOURCAL_VOUR3_SIZE                                 0x1
#define _VOURCAL_VOUR3_LENGTH                               0x1
#define _VOURCAL_VOUR3_MASK                                 0x8
#define _VOURCAL_VOUR4_POSN                                 0x4
#define _VOURCAL_VOUR4_POSITION                             0x4
#define _VOURCAL_VOUR4_SIZE                                 0x1
#define _VOURCAL_VOUR4_LENGTH                               0x1
#define _VOURCAL_VOUR4_MASK                                 0x10

// Register: DOVCAL
#define DOVCAL DOVCAL
extern volatile unsigned char           DOVCAL              __at(0x19C);
#ifndef _LIB_BUILD
asm("DOVCAL equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DOV0                   :1;
        unsigned DOV1                   :1;
        unsigned DOV2                   :1;
        unsigned DOV3                   :1;
        unsigned DOV4                   :1;
    };
} DOVCALbits_t;
extern volatile DOVCALbits_t DOVCALbits __at(0x19C);
// bitfield macros
#define _DOVCAL_DOV0_POSN                                   0x0
#define _DOVCAL_DOV0_POSITION                               0x0
#define _DOVCAL_DOV0_SIZE                                   0x1
#define _DOVCAL_DOV0_LENGTH                                 0x1
#define _DOVCAL_DOV0_MASK                                   0x1
#define _DOVCAL_DOV1_POSN                                   0x1
#define _DOVCAL_DOV1_POSITION                               0x1
#define _DOVCAL_DOV1_SIZE                                   0x1
#define _DOVCAL_DOV1_LENGTH                                 0x1
#define _DOVCAL_DOV1_MASK                                   0x2
#define _DOVCAL_DOV2_POSN                                   0x2
#define _DOVCAL_DOV2_POSITION                               0x2
#define _DOVCAL_DOV2_SIZE                                   0x1
#define _DOVCAL_DOV2_LENGTH                                 0x1
#define _DOVCAL_DOV2_MASK                                   0x4
#define _DOVCAL_DOV3_POSN                                   0x3
#define _DOVCAL_DOV3_POSITION                               0x3
#define _DOVCAL_DOV3_SIZE                                   0x1
#define _DOVCAL_DOV3_LENGTH                                 0x1
#define _DOVCAL_DOV3_MASK                                   0x8
#define _DOVCAL_DOV4_POSN                                   0x4
#define _DOVCAL_DOV4_POSITION                               0x4
#define _DOVCAL_DOV4_SIZE                                   0x1
#define _DOVCAL_DOV4_LENGTH                                 0x1
#define _DOVCAL_DOV4_MASK                                   0x10

// Register: VEAOCAL
#define VEAOCAL VEAOCAL
extern volatile unsigned char           VEAOCAL             __at(0x19D);
#ifndef _LIB_BUILD
asm("VEAOCAL equ 019Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VEAO0                  :1;
        unsigned VEAO1                  :1;
        unsigned VEAO2                  :1;
        unsigned VEAO3                  :1;
        unsigned VEAO4                  :1;
    };
} VEAOCALbits_t;
extern volatile VEAOCALbits_t VEAOCALbits __at(0x19D);
// bitfield macros
#define _VEAOCAL_VEAO0_POSN                                 0x0
#define _VEAOCAL_VEAO0_POSITION                             0x0
#define _VEAOCAL_VEAO0_SIZE                                 0x1
#define _VEAOCAL_VEAO0_LENGTH                               0x1
#define _VEAOCAL_VEAO0_MASK                                 0x1
#define _VEAOCAL_VEAO1_POSN                                 0x1
#define _VEAOCAL_VEAO1_POSITION                             0x1
#define _VEAOCAL_VEAO1_SIZE                                 0x1
#define _VEAOCAL_VEAO1_LENGTH                               0x1
#define _VEAOCAL_VEAO1_MASK                                 0x2
#define _VEAOCAL_VEAO2_POSN                                 0x2
#define _VEAOCAL_VEAO2_POSITION                             0x2
#define _VEAOCAL_VEAO2_SIZE                                 0x1
#define _VEAOCAL_VEAO2_LENGTH                               0x1
#define _VEAOCAL_VEAO2_MASK                                 0x4
#define _VEAOCAL_VEAO3_POSN                                 0x3
#define _VEAOCAL_VEAO3_POSITION                             0x3
#define _VEAOCAL_VEAO3_SIZE                                 0x1
#define _VEAOCAL_VEAO3_LENGTH                               0x1
#define _VEAOCAL_VEAO3_MASK                                 0x8
#define _VEAOCAL_VEAO4_POSN                                 0x4
#define _VEAOCAL_VEAO4_POSITION                             0x4
#define _VEAOCAL_VEAO4_SIZE                                 0x1
#define _VEAOCAL_VEAO4_LENGTH                               0x1
#define _VEAOCAL_VEAO4_MASK                                 0x10

// Register: BUFFCON
#define BUFFCON BUFFCON
extern volatile unsigned char           BUFFCON             __at(0x19E);
#ifndef _LIB_BUILD
asm("BUFFCON equ 019Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DSEL                   :5;
        unsigned                        :1;
        unsigned DIGOEN                 :1;
        unsigned BNCHEN                 :1;
    };
} BUFFCONbits_t;
extern volatile BUFFCONbits_t BUFFCONbits __at(0x19E);
// bitfield macros
#define _BUFFCON_DSEL_POSN                                  0x0
#define _BUFFCON_DSEL_POSITION                              0x0
#define _BUFFCON_DSEL_SIZE                                  0x5
#define _BUFFCON_DSEL_LENGTH                                0x5
#define _BUFFCON_DSEL_MASK                                  0x1F
#define _BUFFCON_DIGOEN_POSN                                0x6
#define _BUFFCON_DIGOEN_POSITION                            0x6
#define _BUFFCON_DIGOEN_SIZE                                0x1
#define _BUFFCON_DIGOEN_LENGTH                              0x1
#define _BUFFCON_DIGOEN_MASK                                0x40
#define _BUFFCON_BNCHEN_POSN                                0x7
#define _BUFFCON_BNCHEN_POSITION                            0x7
#define _BUFFCON_BNCHEN_SIZE                                0x1
#define _BUFFCON_BNCHEN_LENGTH                              0x1
#define _BUFFCON_BNCHEN_MASK                                0x80

// Register: ATSTCON
#define ATSTCON ATSTCON
extern volatile unsigned char           ATSTCON             __at(0x19F);
#ifndef _LIB_BUILD
asm("ATSTCON equ 019Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWFRQEN                :1;
        unsigned TMPTBY                 :1;
        unsigned EAFBEN                 :1;
        unsigned                        :1;
        unsigned AVDDTSEN               :1;
        unsigned                        :1;
        unsigned DTYCLEN                :1;
        unsigned EACLKEN                :1;
    };
} ATSTCONbits_t;
extern volatile ATSTCONbits_t ATSTCONbits __at(0x19F);
// bitfield macros
#define _ATSTCON_SWFRQEN_POSN                               0x0
#define _ATSTCON_SWFRQEN_POSITION                           0x0
#define _ATSTCON_SWFRQEN_SIZE                               0x1
#define _ATSTCON_SWFRQEN_LENGTH                             0x1
#define _ATSTCON_SWFRQEN_MASK                               0x1
#define _ATSTCON_TMPTBY_POSN                                0x1
#define _ATSTCON_TMPTBY_POSITION                            0x1
#define _ATSTCON_TMPTBY_SIZE                                0x1
#define _ATSTCON_TMPTBY_LENGTH                              0x1
#define _ATSTCON_TMPTBY_MASK                                0x2
#define _ATSTCON_EAFBEN_POSN                                0x2
#define _ATSTCON_EAFBEN_POSITION                            0x2
#define _ATSTCON_EAFBEN_SIZE                                0x1
#define _ATSTCON_EAFBEN_LENGTH                              0x1
#define _ATSTCON_EAFBEN_MASK                                0x4
#define _ATSTCON_AVDDTSEN_POSN                              0x4
#define _ATSTCON_AVDDTSEN_POSITION                          0x4
#define _ATSTCON_AVDDTSEN_SIZE                              0x1
#define _ATSTCON_AVDDTSEN_LENGTH                            0x1
#define _ATSTCON_AVDDTSEN_MASK                              0x10
#define _ATSTCON_DTYCLEN_POSN                               0x6
#define _ATSTCON_DTYCLEN_POSITION                           0x6
#define _ATSTCON_DTYCLEN_SIZE                               0x1
#define _ATSTCON_DTYCLEN_LENGTH                             0x1
#define _ATSTCON_DTYCLEN_MASK                               0x40
#define _ATSTCON_EACLKEN_POSN                               0x7
#define _ATSTCON_EACLKEN_POSITION                           0x7
#define _ATSTCON_EACLKEN_SIZE                               0x1
#define _ATSTCON_EACLKEN_LENGTH                             0x1
#define _ATSTCON_EACLKEN_MASK                               0x80

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
// AVDDCAL<AVDD0>
extern volatile __bit                   AVDD0               __at(0xCD0);	// @ (0x19A * 8 + 0)
#define                                 AVDD0_bit           _BIT_ACCESS(AVDDCAL,0)
// AVDDCAL<AVDD1>
extern volatile __bit                   AVDD1               __at(0xCD1);	// @ (0x19A * 8 + 1)
#define                                 AVDD1_bit           _BIT_ACCESS(AVDDCAL,1)
// AVDDCAL<AVDD2>
extern volatile __bit                   AVDD2               __at(0xCD2);	// @ (0x19A * 8 + 2)
#define                                 AVDD2_bit           _BIT_ACCESS(AVDDCAL,2)
// AVDDCAL<AVDD3>
extern volatile __bit                   AVDD3               __at(0xCD3);	// @ (0x19A * 8 + 3)
#define                                 AVDD3_bit           _BIT_ACCESS(AVDDCAL,3)
// ATSTCON<AVDDTSEN>
extern volatile __bit                   AVDDTSEN            __at(0xCFC);	// @ (0x19F * 8 + 4)
#define                                 AVDDTSEN_bit        _BIT_ACCESS(ATSTCON,4)
// PIE1<BCLIE>
extern volatile __bit                   BCLIE               __at(0x43D);	// @ (0x87 * 8 + 5)
#define                                 BCLIE_bit           _BIT_ACCESS(PIE1,5)
// PIR1<BCLIF>
extern volatile __bit                   BCLIF               __at(0x3D);	// @ (0x7 * 8 + 5)
#define                                 BCLIF_bit           _BIT_ACCESS(PIR1,5)
// SSPSTAT<BF>
extern volatile __bit                   BF                  __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSPSTAT,0)
// BGRCAL<BGR0>
extern volatile __bit                   BGR0                __at(0xCC8);	// @ (0x199 * 8 + 0)
#define                                 BGR0_bit            _BIT_ACCESS(BGRCAL,0)
// BGRCAL<BGR1>
extern volatile __bit                   BGR1                __at(0xCC9);	// @ (0x199 * 8 + 1)
#define                                 BGR1_bit            _BIT_ACCESS(BGRCAL,1)
// BGRCAL<BGR2>
extern volatile __bit                   BGR2                __at(0xCCA);	// @ (0x199 * 8 + 2)
#define                                 BGR2_bit            _BIT_ACCESS(BGRCAL,2)
// BGRCAL<BGR3>
extern volatile __bit                   BGR3                __at(0xCCB);	// @ (0x199 * 8 + 3)
#define                                 BGR3_bit            _BIT_ACCESS(BGRCAL,3)
// BGRCAL<BGR4>
extern volatile __bit                   BGR4                __at(0xCCC);	// @ (0x199 * 8 + 4)
#define                                 BGR4_bit            _BIT_ACCESS(BGRCAL,4)
// BGRCAL<BGR5>
extern volatile __bit                   BGR5                __at(0xCCD);	// @ (0x199 * 8 + 5)
#define                                 BGR5_bit            _BIT_ACCESS(BGRCAL,5)
// BGTCAL<BGT0>
extern volatile __bit                   BGT0                __at(0xCC0);	// @ (0x198 * 8 + 0)
#define                                 BGT0_bit            _BIT_ACCESS(BGTCAL,0)
// BGTCAL<BGT1>
extern volatile __bit                   BGT1                __at(0xCC1);	// @ (0x198 * 8 + 1)
#define                                 BGT1_bit            _BIT_ACCESS(BGTCAL,1)
// BGTCAL<BGT2>
extern volatile __bit                   BGT2                __at(0xCC2);	// @ (0x198 * 8 + 2)
#define                                 BGT2_bit            _BIT_ACCESS(BGTCAL,2)
// BGTCAL<BGT3>
extern volatile __bit                   BGT3                __at(0xCC3);	// @ (0x198 * 8 + 3)
#define                                 BGT3_bit            _BIT_ACCESS(BGTCAL,3)
// BUFFCON<BNCHEN>
extern volatile __bit                   BNCHEN              __at(0xCF7);	// @ (0x19E * 8 + 7)
#define                                 BNCHEN_bit          _BIT_ACCESS(BUFFCON,7)
// SSPCON3<BOEN>
extern volatile __bit                   BOEN                __at(0x8A4);	// @ (0x114 * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSPCON3,4)
// PMCON1<CALSEL>
extern volatile __bit                   CALSEL              __at(0xC86);	// @ (0x190 * 8 + 6)
#define                                 CALSEL_bit          _BIT_ACCESS(PMCON1,6)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PIE1<CC1IE>
extern volatile __bit                   CC1IE               __at(0x43A);	// @ (0x87 * 8 + 2)
#define                                 CC1IE_bit           _BIT_ACCESS(PIE1,2)
// PIR1<CC1IF>
extern volatile __bit                   CC1IF               __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 CC1IF_bit           _BIT_ACCESS(PIR1,2)
// PIE1<CC2IE>
extern volatile __bit                   CC2IE               __at(0x43B);	// @ (0x87 * 8 + 3)
#define                                 CC2IE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<CC2IF>
extern volatile __bit                   CC2IF               __at(0x3B);	// @ (0x7 * 8 + 3)
#define                                 CC2IF_bit           _BIT_ACCESS(PIR1,3)
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
// MODECON<CLMPSEL>
extern volatile __bit                   CLMPSEL             __at(0x847);	// @ (0x108 * 8 + 7)
#define                                 CLMPSEL_bit         _BIT_ACCESS(MODECON,7)
// MODECON<CNSG>
extern volatile __bit                   CNSG                __at(0x844);	// @ (0x108 * 8 + 4)
#define                                 CNSG_bit            _BIT_ACCESS(MODECON,4)
// CSRCAL<CSR0>
extern volatile __bit                   CSR0                __at(0x8E0);	// @ (0x11C * 8 + 0)
#define                                 CSR0_bit            _BIT_ACCESS(CSRCAL,0)
// CSRCAL<CSR1>
extern volatile __bit                   CSR1                __at(0x8E1);	// @ (0x11C * 8 + 1)
#define                                 CSR1_bit            _BIT_ACCESS(CSRCAL,1)
// CSRCAL<CSR2>
extern volatile __bit                   CSR2                __at(0x8E2);	// @ (0x11C * 8 + 2)
#define                                 CSR2_bit            _BIT_ACCESS(CSRCAL,2)
// CSRCAL<CSR3>
extern volatile __bit                   CSR3                __at(0x8E3);	// @ (0x11C * 8 + 3)
#define                                 CSR3_bit            _BIT_ACCESS(CSRCAL,3)
// CSRCAL<CSR4>
extern volatile __bit                   CSR4                __at(0x8E4);	// @ (0x11C * 8 + 4)
#define                                 CSR4_bit            _BIT_ACCESS(CSRCAL,4)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// PE1<DECON>
extern volatile __bit                   DECON               __at(0x83F);	// @ (0x107 * 8 + 7)
#define                                 DECON_bit           _BIT_ACCESS(PE1,7)
// DEMCAL<DEMOV0>
extern volatile __bit                   DEMOV0              __at(0x8F0);	// @ (0x11E * 8 + 0)
#define                                 DEMOV0_bit          _BIT_ACCESS(DEMCAL,0)
// DEMCAL<DEMOV1>
extern volatile __bit                   DEMOV1              __at(0x8F1);	// @ (0x11E * 8 + 1)
#define                                 DEMOV1_bit          _BIT_ACCESS(DEMCAL,1)
// DEMCAL<DEMOV2>
extern volatile __bit                   DEMOV2              __at(0x8F2);	// @ (0x11E * 8 + 2)
#define                                 DEMOV2_bit          _BIT_ACCESS(DEMCAL,2)
// DEMCAL<DEMOV3>
extern volatile __bit                   DEMOV3              __at(0x8F3);	// @ (0x11E * 8 + 3)
#define                                 DEMOV3_bit          _BIT_ACCESS(DEMCAL,3)
// DEMCAL<DEMOV4>
extern volatile __bit                   DEMOV4              __at(0x8F4);	// @ (0x11E * 8 + 4)
#define                                 DEMOV4_bit          _BIT_ACCESS(DEMCAL,4)
// SSPCON3<DHEN>
extern volatile __bit                   DHEN                __at(0x8A0);	// @ (0x114 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSPCON3,0)
// BUFFCON<DIGOEN>
extern volatile __bit                   DIGOEN              __at(0xCF6);	// @ (0x19E * 8 + 6)
#define                                 DIGOEN_bit          _BIT_ACCESS(BUFFCON,6)
// DOVCAL<DOV0>
extern volatile __bit                   DOV0                __at(0xCE0);	// @ (0x19C * 8 + 0)
#define                                 DOV0_bit            _BIT_ACCESS(DOVCAL,0)
// DOVCAL<DOV1>
extern volatile __bit                   DOV1                __at(0xCE1);	// @ (0x19C * 8 + 1)
#define                                 DOV1_bit            _BIT_ACCESS(DOVCAL,1)
// DOVCAL<DOV2>
extern volatile __bit                   DOV2                __at(0xCE2);	// @ (0x19C * 8 + 2)
#define                                 DOV2_bit            _BIT_ACCESS(DOVCAL,2)
// DOVCAL<DOV3>
extern volatile __bit                   DOV3                __at(0xCE3);	// @ (0x19C * 8 + 3)
#define                                 DOV3_bit            _BIT_ACCESS(DOVCAL,3)
// DOVCAL<DOV4>
extern volatile __bit                   DOV4                __at(0xCE4);	// @ (0x19C * 8 + 4)
#define                                 DOV4_bit            _BIT_ACCESS(DOVCAL,4)
// ATSTCON<DTYCLEN>
extern volatile __bit                   DTYCLEN             __at(0xCFE);	// @ (0x19F * 8 + 6)
#define                                 DTYCLEN_bit         _BIT_ACCESS(ATSTCON,6)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x8B5);	// @ (0x116 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// ATSTCON<EACLKEN>
extern volatile __bit                   EACLKEN             __at(0xCFF);	// @ (0x19F * 8 + 7)
#define                                 EACLKEN_bit         _BIT_ACCESS(ATSTCON,7)
// MODECON<EACLMP>
extern volatile __bit                   EACLMP              __at(0x843);	// @ (0x108 * 8 + 3)
#define                                 EACLMP_bit          _BIT_ACCESS(MODECON,3)
// ATSTCON<EAFBEN>
extern volatile __bit                   EAFBEN              __at(0xCFA);	// @ (0x19F * 8 + 2)
#define                                 EAFBEN_bit          _BIT_ACCESS(ATSTCON,2)
// OSCCAL<FCAL0>
extern volatile __bit                   FCAL0               __at(0xCB8);	// @ (0x197 * 8 + 0)
#define                                 FCAL0_bit           _BIT_ACCESS(OSCCAL,0)
// OSCCAL<FCAL1>
extern volatile __bit                   FCAL1               __at(0xCB9);	// @ (0x197 * 8 + 1)
#define                                 FCAL1_bit           _BIT_ACCESS(OSCCAL,1)
// OSCCAL<FCAL2>
extern volatile __bit                   FCAL2               __at(0xCBA);	// @ (0x197 * 8 + 2)
#define                                 FCAL2_bit           _BIT_ACCESS(OSCCAL,2)
// OSCCAL<FCAL3>
extern volatile __bit                   FCAL3               __at(0xCBB);	// @ (0x197 * 8 + 3)
#define                                 FCAL3_bit           _BIT_ACCESS(OSCCAL,3)
// OSCCAL<FCAL4>
extern volatile __bit                   FCAL4               __at(0xCBC);	// @ (0x197 * 8 + 4)
#define                                 FCAL4_bit           _BIT_ACCESS(OSCCAL,4)
// OSCCAL<FCAL5>
extern volatile __bit                   FCAL5               __at(0xCBD);	// @ (0x197 * 8 + 5)
#define                                 FCAL5_bit           _BIT_ACCESS(OSCCAL,5)
// OSCCAL<FCAL6>
extern volatile __bit                   FCAL6               __at(0xCBE);	// @ (0x197 * 8 + 6)
#define                                 FCAL6_bit           _BIT_ACCESS(OSCCAL,6)
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
// HCSOVCAL<HCSOV0>
extern volatile __bit                   HCSOV0              __at(0x8F8);	// @ (0x11F * 8 + 0)
#define                                 HCSOV0_bit          _BIT_ACCESS(HCSOVCAL,0)
// HCSOVCAL<HCSOV1>
extern volatile __bit                   HCSOV1              __at(0x8F9);	// @ (0x11F * 8 + 1)
#define                                 HCSOV1_bit          _BIT_ACCESS(HCSOVCAL,1)
// HCSOVCAL<HCSOV2>
extern volatile __bit                   HCSOV2              __at(0x8FA);	// @ (0x11F * 8 + 2)
#define                                 HCSOV2_bit          _BIT_ACCESS(HCSOVCAL,2)
// HCSOVCAL<HCSOV3>
extern volatile __bit                   HCSOV3              __at(0x8FB);	// @ (0x11F * 8 + 3)
#define                                 HCSOV3_bit          _BIT_ACCESS(HCSOVCAL,3)
// HCSOVCAL<HCSOV4>
extern volatile __bit                   HCSOV4              __at(0x8FC);	// @ (0x11F * 8 + 4)
#define                                 HCSOV4_bit          _BIT_ACCESS(HCSOVCAL,4)
// HCSOVCAL<HCSOV5>
extern volatile __bit                   HCSOV5              __at(0x8FD);	// @ (0x11F * 8 + 5)
#define                                 HCSOV5_bit          _BIT_ACCESS(HCSOVCAL,5)
// HCSOVCAL<HCSOV6>
extern volatile __bit                   HCSOV6              __at(0x8FE);	// @ (0x11F * 8 + 6)
#define                                 HCSOV6_bit          _BIT_ACCESS(HCSOVCAL,6)
// PE1<HIDIS>
extern volatile __bit                   HIDIS               __at(0x83D);	// @ (0x107 * 8 + 5)
#define                                 HIDIS_bit           _BIT_ACCESS(PE1,5)
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
// PE1<LODIS>
extern volatile __bit                   LODIS               __at(0x83C);	// @ (0x107 * 8 + 4)
#define                                 LODIS_bit           _BIT_ACCESS(PE1,4)
// PE1<MEASEN>
extern volatile __bit                   MEASEN              __at(0x83B);	// @ (0x107 * 8 + 3)
#define                                 MEASEN_bit          _BIT_ACCESS(PE1,3)
// RELEFF<MSDONE>
extern volatile __bit                   MSDONE              __at(0x4FF);	// @ (0x9F * 8 + 7)
#define                                 MSDONE_bit          _BIT_ACCESS(RELEFF,7)
// OCCON<OCEN>
extern volatile __bit                   OCEN                __at(0x4EF);	// @ (0x9D * 8 + 7)
#define                                 OCEN_bit            _BIT_ACCESS(OCCON,7)
// PIE2<OCIE>
extern volatile __bit                   OCIE                __at(0x445);	// @ (0x88 * 8 + 5)
#define                                 OCIE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<OCIF>
extern volatile __bit                   OCIF                __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 OCIF_bit            _BIT_ACCESS(PIR2,5)
// PIE2<OTIE>
extern volatile __bit                   OTIE                __at(0x446);	// @ (0x88 * 8 + 6)
#define                                 OTIE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<OTIF>
extern volatile __bit                   OTIF                __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 OTIF_bit            _BIT_ACCESS(PIR2,6)
// PIE2<OVIE>
extern volatile __bit                   OVIE                __at(0x444);	// @ (0x88 * 8 + 4)
#define                                 OVIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<OVIF>
extern volatile __bit                   OVIF                __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 OVIF_bit            _BIT_ACCESS(PIR2,4)
// VINCON<OVLOEN>
extern volatile __bit                   OVLOEN              __at(0x493);	// @ (0x92 * 8 + 3)
#define                                 OVLOEN_bit          _BIT_ACCESS(VINCON,3)
// PIE2<OVLOIE>
extern volatile __bit                   OVLOIE              __at(0x441);	// @ (0x88 * 8 + 1)
#define                                 OVLOIE_bit          _BIT_ACCESS(PIE2,1)
// PIR2<OVLOIF>
extern volatile __bit                   OVLOIF              __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 OVLOIF_bit          _BIT_ACCESS(PIR2,1)
// VINCON<OVLOINTN>
extern volatile __bit                   OVLOINTN            __at(0x490);	// @ (0x92 * 8 + 0)
#define                                 OVLOINTN_bit        _BIT_ACCESS(VINCON,0)
// VINCON<OVLOINTP>
extern volatile __bit                   OVLOINTP            __at(0x491);	// @ (0x92 * 8 + 1)
#define                                 OVLOINTP_bit        _BIT_ACCESS(VINCON,1)
// VINCON<OVLOOUT>
extern volatile __bit                   OVLOOUT             __at(0x492);	// @ (0x92 * 8 + 2)
#define                                 OVLOOUT_bit         _BIT_ACCESS(VINCON,2)
// PE1<OVTEE>
extern volatile __bit                   OVTEE               __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 OVTEE_bit           _BIT_ACCESS(PE1,0)
// SSPCON3<PCIE>
extern volatile __bit                   PCIE                __at(0x8A6);	// @ (0x114 * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSPCON3,6)
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
// RAMPCAL<RAMP0>
extern volatile __bit                   RAMP0               __at(0x8D8);	// @ (0x11B * 8 + 0)
#define                                 RAMP0_bit           _BIT_ACCESS(RAMPCAL,0)
// RAMPCAL<RAMP1>
extern volatile __bit                   RAMP1               __at(0x8D9);	// @ (0x11B * 8 + 1)
#define                                 RAMP1_bit           _BIT_ACCESS(RAMPCAL,1)
// RAMPCAL<RAMP2>
extern volatile __bit                   RAMP2               __at(0x8DA);	// @ (0x11B * 8 + 2)
#define                                 RAMP2_bit           _BIT_ACCESS(RAMPCAL,2)
// RAMPCAL<RAMP3>
extern volatile __bit                   RAMP3               __at(0x8DB);	// @ (0x11B * 8 + 3)
#define                                 RAMP3_bit           _BIT_ACCESS(RAMPCAL,3)
// RAMPCAL<RAMP4>
extern volatile __bit                   RAMP4               __at(0x8DC);	// @ (0x11B * 8 + 4)
#define                                 RAMP4_bit           _BIT_ACCESS(RAMPCAL,4)
// PORTGPB<RB0>
extern volatile __bit                   RB0                 __at(0x30);	// @ (0x6 * 8 + 0)
#define                                 RB0_bit             _BIT_ACCESS(PORTGPB,0)
// PORTGPB<RB1>
extern volatile __bit                   RB1                 __at(0x31);	// @ (0x6 * 8 + 1)
#define                                 RB1_bit             _BIT_ACCESS(PORTGPB,1)
// PORTGPB<RB2>
extern volatile __bit                   RB2                 __at(0x32);	// @ (0x6 * 8 + 2)
#define                                 RB2_bit             _BIT_ACCESS(PORTGPB,2)
// PORTGPB<RB3>
extern volatile __bit                   RB3                 __at(0x33);	// @ (0x6 * 8 + 3)
#define                                 RB3_bit             _BIT_ACCESS(PORTGPB,3)
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
// RAMPCON<RMPEN>
extern volatile __bit                   RMPEN               __at(0x4E7);	// @ (0x9C * 8 + 7)
#define                                 RMPEN_bit           _BIT_ACCESS(RAMPCON,7)
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
// SSPSTAT<SMP>
extern volatile __bit                   SMP                 __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSPSTAT,7)
// PE1<SPAN>
extern volatile __bit                   SPAN                __at(0x83A);	// @ (0x107 * 8 + 2)
#define                                 SPAN_bit            _BIT_ACCESS(PE1,2)
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
// ATSTCON<SWFRQEN>
extern volatile __bit                   SWFRQEN             __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 SWFRQEN_bit         _BIT_ACCESS(ATSTCON,0)
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
// T1GCON<T1GGO>
extern volatile __bit                   T1GGO               __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 T1GGO_bit           _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GCON,1)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
// ATSTCON<TMPTBY>
extern volatile __bit                   TMPTBY              __at(0xCF9);	// @ (0x19F * 8 + 1)
#define                                 TMPTBY_bit          _BIT_ACCESS(ATSTCON,1)
// T1CON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x71);	// @ (0xE * 8 + 1)
#define                                 TMR1CS_bit          _BIT_ACCESS(T1CON,1)
// T1GCON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0x97);	// @ (0x12 * 8 + 7)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1GCON,7)
// PIE1<TMR1GIE>
extern volatile __bit                   TMR1GIE             __at(0x43F);	// @ (0x87 * 8 + 7)
#define                                 TMR1GIE_bit         _BIT_ACCESS(PIE1,7)
// PIR1<TMR1GIF>
extern volatile __bit                   TMR1GIF             __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 TMR1GIF_bit         _BIT_ACCESS(PIR1,7)
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
// PE1<TOPO>
extern volatile __bit                   TOPO                __at(0x83E);	// @ (0x107 * 8 + 6)
#define                                 TOPO_bit            _BIT_ACCESS(PE1,6)
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
// TRISGPB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x437);	// @ (0x86 * 8 + 7)
#define                                 TRISB7_bit          _BIT_ACCESS(TRISGPB,7)
// TTACAL<TTA0>
extern volatile __bit                   TTA0                __at(0xCB0);	// @ (0x196 * 8 + 0)
#define                                 TTA0_bit            _BIT_ACCESS(TTACAL,0)
// TTACAL<TTA1>
extern volatile __bit                   TTA1                __at(0xCB1);	// @ (0x196 * 8 + 1)
#define                                 TTA1_bit            _BIT_ACCESS(TTACAL,1)
// TTACAL<TTA2>
extern volatile __bit                   TTA2                __at(0xCB2);	// @ (0x196 * 8 + 2)
#define                                 TTA2_bit            _BIT_ACCESS(TTACAL,2)
// TTACAL<TTA3>
extern volatile __bit                   TTA3                __at(0xCB3);	// @ (0x196 * 8 + 3)
#define                                 TTA3_bit            _BIT_ACCESS(TTACAL,3)
// OSCTUNE<TUN0>
extern volatile __bit                   TUN0                __at(0x4B0);	// @ (0x96 * 8 + 0)
#define                                 TUN0_bit            _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<TUN1>
extern volatile __bit                   TUN1                __at(0x4B1);	// @ (0x96 * 8 + 1)
#define                                 TUN1_bit            _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<TUN2>
extern volatile __bit                   TUN2                __at(0x4B2);	// @ (0x96 * 8 + 2)
#define                                 TUN2_bit            _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<TUN3>
extern volatile __bit                   TUN3                __at(0x4B3);	// @ (0x96 * 8 + 3)
#define                                 TUN3_bit            _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<TUN4>
extern volatile __bit                   TUN4                __at(0x4B4);	// @ (0x96 * 8 + 4)
#define                                 TUN4_bit            _BIT_ACCESS(OSCTUNE,4)
// SSPSTAT<UA>
extern volatile __bit                   UA                  __at(0x8B1);	// @ (0x116 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSPSTAT,1)
// PIE2<UVIE>
extern volatile __bit                   UVIE                __at(0x447);	// @ (0x88 * 8 + 7)
#define                                 UVIE_bit            _BIT_ACCESS(PIE2,7)
// PIR2<UVIF>
extern volatile __bit                   UVIF                __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 UVIF_bit            _BIT_ACCESS(PIR2,7)
// VINCON<UVLOEN>
extern volatile __bit                   UVLOEN              __at(0x497);	// @ (0x92 * 8 + 7)
#define                                 UVLOEN_bit          _BIT_ACCESS(VINCON,7)
// PIE2<UVLOIE>
extern volatile __bit                   UVLOIE              __at(0x440);	// @ (0x88 * 8 + 0)
#define                                 UVLOIE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<UVLOIF>
extern volatile __bit                   UVLOIF              __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 UVLOIF_bit          _BIT_ACCESS(PIR2,0)
// VINCON<UVLOINTN>
extern volatile __bit                   UVLOINTN            __at(0x494);	// @ (0x92 * 8 + 4)
#define                                 UVLOINTN_bit        _BIT_ACCESS(VINCON,4)
// VINCON<UVLOINTP>
extern volatile __bit                   UVLOINTP            __at(0x495);	// @ (0x92 * 8 + 5)
#define                                 UVLOINTP_bit        _BIT_ACCESS(VINCON,5)
// VINCON<UVLOOUT>
extern volatile __bit                   UVLOOUT             __at(0x496);	// @ (0x92 * 8 + 6)
#define                                 UVLOOUT_bit         _BIT_ACCESS(VINCON,6)
// PE1<UVTEE>
extern volatile __bit                   UVTEE               __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 UVTEE_bit           _BIT_ACCESS(PE1,1)
// ADCON1<VCFG0>
extern volatile __bit                   VCFG0               __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 VCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<VCFG1>
extern volatile __bit                   VCFG1               __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 VCFG1_bit           _BIT_ACCESS(ADCON1,1)
// MODECON<VDDEN>
extern volatile __bit                   VDDEN               __at(0x845);	// @ (0x108 * 8 + 5)
#define                                 VDDEN_bit           _BIT_ACCESS(MODECON,5)
// VEAOCAL<VEAO0>
extern volatile __bit                   VEAO0               __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 VEAO0_bit           _BIT_ACCESS(VEAOCAL,0)
// VEAOCAL<VEAO1>
extern volatile __bit                   VEAO1               __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 VEAO1_bit           _BIT_ACCESS(VEAOCAL,1)
// VEAOCAL<VEAO2>
extern volatile __bit                   VEAO2               __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 VEAO2_bit           _BIT_ACCESS(VEAOCAL,2)
// VEAOCAL<VEAO3>
extern volatile __bit                   VEAO3               __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 VEAO3_bit           _BIT_ACCESS(VEAOCAL,3)
// VEAOCAL<VEAO4>
extern volatile __bit                   VEAO4               __at(0xCEC);	// @ (0x19D * 8 + 4)
#define                                 VEAO4_bit           _BIT_ACCESS(VEAOCAL,4)
// MODECON<VGNDEN>
extern volatile __bit                   VGNDEN              __at(0x846);	// @ (0x108 * 8 + 6)
#define                                 VGNDEN_bit          _BIT_ACCESS(MODECON,6)
// VOURCAL<VOUR0>
extern volatile __bit                   VOUR0               __at(0xCD8);	// @ (0x19B * 8 + 0)
#define                                 VOUR0_bit           _BIT_ACCESS(VOURCAL,0)
// VOURCAL<VOUR1>
extern volatile __bit                   VOUR1               __at(0xCD9);	// @ (0x19B * 8 + 1)
#define                                 VOUR1_bit           _BIT_ACCESS(VOURCAL,1)
// VOURCAL<VOUR2>
extern volatile __bit                   VOUR2               __at(0xCDA);	// @ (0x19B * 8 + 2)
#define                                 VOUR2_bit           _BIT_ACCESS(VOURCAL,2)
// VOURCAL<VOUR3>
extern volatile __bit                   VOUR3               __at(0xCDB);	// @ (0x19B * 8 + 3)
#define                                 VOUR3_bit           _BIT_ACCESS(VOURCAL,3)
// VOURCAL<VOUR4>
extern volatile __bit                   VOUR4               __at(0xCDC);	// @ (0x19B * 8 + 4)
#define                                 VOUR4_bit           _BIT_ACCESS(VOURCAL,4)
// VOUTL<VOUT0>
extern volatile __bit                   VOUT0               __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 VOUT0_bit           _BIT_ACCESS(VOUTL,0)
// VOUTL<VOUT1>
extern volatile __bit                   VOUT1               __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 VOUT1_bit           _BIT_ACCESS(VOUTL,1)
// VOUTL<VOUT2>
extern volatile __bit                   VOUT2               __at(0x4A2);	// @ (0x94 * 8 + 2)
#define                                 VOUT2_bit           _BIT_ACCESS(VOUTL,2)
// VOUTL<VOUT3>
extern volatile __bit                   VOUT3               __at(0x4A3);	// @ (0x94 * 8 + 3)
#define                                 VOUT3_bit           _BIT_ACCESS(VOUTL,3)
// VOUTL<VOUT4>
extern volatile __bit                   VOUT4               __at(0x4A4);	// @ (0x94 * 8 + 4)
#define                                 VOUT4_bit           _BIT_ACCESS(VOUTL,4)
// VOUTL<VOUT5>
extern volatile __bit                   VOUT5               __at(0x4A5);	// @ (0x94 * 8 + 5)
#define                                 VOUT5_bit           _BIT_ACCESS(VOUTL,5)
// VOUTL<VOUT6>
extern volatile __bit                   VOUT6               __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 VOUT6_bit           _BIT_ACCESS(VOUTL,6)
// VOUTL<VOUT7>
extern volatile __bit                   VOUT7               __at(0x4A7);	// @ (0x94 * 8 + 7)
#define                                 VOUT7_bit           _BIT_ACCESS(VOUTL,7)
// VOUTH<VOUT8>
extern volatile __bit                   VOUT8               __at(0x4A8);	// @ (0x95 * 8 + 0)
#define                                 VOUT8_bit           _BIT_ACCESS(VOUTH,0)
// VOUTH<VOUT9>
extern volatile __bit                   VOUT9               __at(0x4A9);	// @ (0x95 * 8 + 1)
#define                                 VOUT9_bit           _BIT_ACCESS(VOUTH,1)
// VREFCAL<VREF0>
extern volatile __bit                   VREF0               __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 VREF0_bit           _BIT_ACCESS(VREFCAL,0)
// VREFCAL<VREF1>
extern volatile __bit                   VREF1               __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 VREF1_bit           _BIT_ACCESS(VREFCAL,1)
// VREFCAL<VREF2>
extern volatile __bit                   VREF2               __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 VREF2_bit           _BIT_ACCESS(VREFCAL,2)
// VREFCAL<VREF3>
extern volatile __bit                   VREF3               __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 VREF3_bit           _BIT_ACCESS(VREFCAL,3)
// VREFCAL<VREF4>
extern volatile __bit                   VREF4               __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 VREF4_bit           _BIT_ACCESS(VREFCAL,4)
// VRFSCAL<VRFS0>
extern volatile __bit                   VRFS0               __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 VRFS0_bit           _BIT_ACCESS(VRFSCAL,0)
// VRFSCAL<VRFS1>
extern volatile __bit                   VRFS1               __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 VRFS1_bit           _BIT_ACCESS(VRFSCAL,1)
// VRFSCAL<VRFS2>
extern volatile __bit                   VRFS2               __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 VRFS2_bit           _BIT_ACCESS(VRFSCAL,2)
// VRFSCAL<VRFS3>
extern volatile __bit                   VRFS3               __at(0x8D3);	// @ (0x11A * 8 + 3)
#define                                 VRFS3_bit           _BIT_ACCESS(VRFSCAL,3)
// VRFSCAL<VRFS4>
extern volatile __bit                   VRFS4               __at(0x8D4);	// @ (0x11A * 8 + 4)
#define                                 VRFS4_bit           _BIT_ACCESS(VRFSCAL,4)
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
// WPUGPB<WPUGPB3>
extern volatile __bit                   WPUGPB3             __at(0x833);	// @ (0x106 * 8 + 3)
#define                                 WPUGPB3_bit         _BIT_ACCESS(WPUGPB,3)
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
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
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

#endif // _MCP19121_H_
