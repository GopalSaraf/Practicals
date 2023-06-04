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

#ifndef _MCP19124_H_
#define _MCP19124_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * MCP19124
 */
#ifndef _XC_H_
#warning Header file mcp19124.h included directly. Use #include <xc.h> instead.
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
        unsigned                        :1;
        unsigned GPA5                   :1;
        unsigned GPA6                   :1;
        unsigned GPA7                   :1;
    };
    struct {
        unsigned GPIO0                  :1;
        unsigned GPIO1                  :1;
        unsigned GPIO2                  :1;
        unsigned GPIO3                  :1;
        unsigned                        :1;
        unsigned GPIO5                  :1;
        unsigned GPIO6                  :1;
        unsigned GPIO7                  :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned                        :1;
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
        unsigned                        :1;
        unsigned GPA5                   :1;
        unsigned GPA6                   :1;
        unsigned GPA7                   :1;
    };
    struct {
        unsigned GPIO0                  :1;
        unsigned GPIO1                  :1;
        unsigned GPIO2                  :1;
        unsigned GPIO3                  :1;
        unsigned                        :1;
        unsigned GPIO5                  :1;
        unsigned GPIO6                  :1;
        unsigned GPIO7                  :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned                        :1;
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
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
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
// alias bitfield definitions
typedef union {
    struct {
        unsigned GPB0                   :1;
        unsigned GPB1                   :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
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
        unsigned DRUVIF                 :1;
        unsigned OVIF                   :1;
        unsigned OTIF                   :1;
        unsigned                        :1;
        unsigned ADIF                   :1;
        unsigned CDSIF                  :1;
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
#define _PIR2_DRUVIF_POSN                                   0x2
#define _PIR2_DRUVIF_POSITION                               0x2
#define _PIR2_DRUVIF_SIZE                                   0x1
#define _PIR2_DRUVIF_LENGTH                                 0x1
#define _PIR2_DRUVIF_MASK                                   0x4
#define _PIR2_OVIF_POSN                                     0x3
#define _PIR2_OVIF_POSITION                                 0x3
#define _PIR2_OVIF_SIZE                                     0x1
#define _PIR2_OVIF_LENGTH                                   0x1
#define _PIR2_OVIF_MASK                                     0x8
#define _PIR2_OTIF_POSN                                     0x4
#define _PIR2_OTIF_POSITION                                 0x4
#define _PIR2_OTIF_SIZE                                     0x1
#define _PIR2_OTIF_LENGTH                                   0x1
#define _PIR2_OTIF_MASK                                     0x10
#define _PIR2_ADIF_POSN                                     0x6
#define _PIR2_ADIF_POSITION                                 0x6
#define _PIR2_ADIF_SIZE                                     0x1
#define _PIR2_ADIF_LENGTH                                   0x1
#define _PIR2_ADIF_MASK                                     0x40
#define _PIR2_CDSIF_POSN                                    0x7
#define _PIR2_CDSIF_POSITION                                0x7
#define _PIR2_CDSIF_SIZE                                    0x1
#define _PIR2_CDSIF_LENGTH                                  0x1
#define _PIR2_CDSIF_MASK                                    0x80

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
        unsigned VDDOK                  :1;
        unsigned nVDD_FLAG              :1;
        unsigned                        :3;
        unsigned ADC_REFR               :1;
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
#define _PCON_VDDOK_POSN                                    0x2
#define _PCON_VDDOK_POSITION                                0x2
#define _PCON_VDDOK_SIZE                                    0x1
#define _PCON_VDDOK_LENGTH                                  0x1
#define _PCON_VDDOK_MASK                                    0x4
#define _PCON_nVDD_FLAG_POSN                                0x3
#define _PCON_nVDD_FLAG_POSITION                            0x3
#define _PCON_nVDD_FLAG_SIZE                                0x1
#define _PCON_nVDD_FLAG_LENGTH                              0x1
#define _PCON_nVDD_FLAG_MASK                                0x8
#define _PCON_ADC_REFR_POSN                                 0x7
#define _PCON_ADC_REFR_POSITION                             0x7
#define _PCON_ADC_REFR_SIZE                                 0x1
#define _PCON_ADC_REFR_LENGTH                               0x1
#define _PCON_ADC_REFR_MASK                                 0x80

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

// Register: VREFCON
#define VREFCON VREFCON
extern volatile unsigned char           VREFCON             __at(0x019);
#ifndef _LIB_BUILD
asm("VREFCON equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VREF0                  :1;
        unsigned VREF1                  :1;
        unsigned VREF2                  :1;
        unsigned VREF3                  :1;
        unsigned VREF4                  :1;
        unsigned VREF5                  :1;
        unsigned VREF6                  :1;
        unsigned VREF7                  :1;
    };
} VREFCONbits_t;
extern volatile VREFCONbits_t VREFCONbits __at(0x019);
// bitfield macros
#define _VREFCON_VREF0_POSN                                 0x0
#define _VREFCON_VREF0_POSITION                             0x0
#define _VREFCON_VREF0_SIZE                                 0x1
#define _VREFCON_VREF0_LENGTH                               0x1
#define _VREFCON_VREF0_MASK                                 0x1
#define _VREFCON_VREF1_POSN                                 0x1
#define _VREFCON_VREF1_POSITION                             0x1
#define _VREFCON_VREF1_SIZE                                 0x1
#define _VREFCON_VREF1_LENGTH                               0x1
#define _VREFCON_VREF1_MASK                                 0x2
#define _VREFCON_VREF2_POSN                                 0x2
#define _VREFCON_VREF2_POSITION                             0x2
#define _VREFCON_VREF2_SIZE                                 0x1
#define _VREFCON_VREF2_LENGTH                               0x1
#define _VREFCON_VREF2_MASK                                 0x4
#define _VREFCON_VREF3_POSN                                 0x3
#define _VREFCON_VREF3_POSITION                             0x3
#define _VREFCON_VREF3_SIZE                                 0x1
#define _VREFCON_VREF3_LENGTH                               0x1
#define _VREFCON_VREF3_MASK                                 0x8
#define _VREFCON_VREF4_POSN                                 0x4
#define _VREFCON_VREF4_POSITION                             0x4
#define _VREFCON_VREF4_SIZE                                 0x1
#define _VREFCON_VREF4_LENGTH                               0x1
#define _VREFCON_VREF4_MASK                                 0x10
#define _VREFCON_VREF5_POSN                                 0x5
#define _VREFCON_VREF5_POSITION                             0x5
#define _VREFCON_VREF5_SIZE                                 0x1
#define _VREFCON_VREF5_LENGTH                               0x1
#define _VREFCON_VREF5_MASK                                 0x20
#define _VREFCON_VREF6_POSN                                 0x6
#define _VREFCON_VREF6_POSITION                             0x6
#define _VREFCON_VREF6_SIZE                                 0x1
#define _VREFCON_VREF6_LENGTH                               0x1
#define _VREFCON_VREF6_MASK                                 0x40
#define _VREFCON_VREF7_POSN                                 0x7
#define _VREFCON_VREF7_POSITION                             0x7
#define _VREFCON_VREF7_SIZE                                 0x1
#define _VREFCON_VREF7_LENGTH                               0x1
#define _VREFCON_VREF7_MASK                                 0x80

// Register: VREF2CON
#define VREF2CON VREF2CON
extern volatile unsigned char           VREF2CON            __at(0x01A);
#ifndef _LIB_BUILD
asm("VREF2CON equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VREF20                 :1;
        unsigned VREF21                 :1;
        unsigned VREF22                 :1;
        unsigned VREF23                 :1;
        unsigned VREF24                 :1;
        unsigned VREF25                 :1;
        unsigned VREF26                 :1;
        unsigned VREF27                 :1;
    };
} VREF2CONbits_t;
extern volatile VREF2CONbits_t VREF2CONbits __at(0x01A);
// bitfield macros
#define _VREF2CON_VREF20_POSN                               0x0
#define _VREF2CON_VREF20_POSITION                           0x0
#define _VREF2CON_VREF20_SIZE                               0x1
#define _VREF2CON_VREF20_LENGTH                             0x1
#define _VREF2CON_VREF20_MASK                               0x1
#define _VREF2CON_VREF21_POSN                               0x1
#define _VREF2CON_VREF21_POSITION                           0x1
#define _VREF2CON_VREF21_SIZE                               0x1
#define _VREF2CON_VREF21_LENGTH                             0x1
#define _VREF2CON_VREF21_MASK                               0x2
#define _VREF2CON_VREF22_POSN                               0x2
#define _VREF2CON_VREF22_POSITION                           0x2
#define _VREF2CON_VREF22_SIZE                               0x1
#define _VREF2CON_VREF22_LENGTH                             0x1
#define _VREF2CON_VREF22_MASK                               0x4
#define _VREF2CON_VREF23_POSN                               0x3
#define _VREF2CON_VREF23_POSITION                           0x3
#define _VREF2CON_VREF23_SIZE                               0x1
#define _VREF2CON_VREF23_LENGTH                             0x1
#define _VREF2CON_VREF23_MASK                               0x8
#define _VREF2CON_VREF24_POSN                               0x4
#define _VREF2CON_VREF24_POSITION                           0x4
#define _VREF2CON_VREF24_SIZE                               0x1
#define _VREF2CON_VREF24_LENGTH                             0x1
#define _VREF2CON_VREF24_MASK                               0x10
#define _VREF2CON_VREF25_POSN                               0x5
#define _VREF2CON_VREF25_POSITION                           0x5
#define _VREF2CON_VREF25_SIZE                               0x1
#define _VREF2CON_VREF25_LENGTH                             0x1
#define _VREF2CON_VREF25_MASK                               0x20
#define _VREF2CON_VREF26_POSN                               0x6
#define _VREF2CON_VREF26_POSITION                           0x6
#define _VREF2CON_VREF26_SIZE                               0x1
#define _VREF2CON_VREF26_LENGTH                             0x1
#define _VREF2CON_VREF26_MASK                               0x40
#define _VREF2CON_VREF27_POSN                               0x7
#define _VREF2CON_VREF27_POSITION                           0x7
#define _VREF2CON_VREF27_SIZE                               0x1
#define _VREF2CON_VREF27_LENGTH                             0x1
#define _VREF2CON_VREF27_MASK                               0x80

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
        unsigned VCFG                   :1;
        unsigned                        :3;
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
#define _ADCON1_VCFG_POSN                                   0x0
#define _ADCON1_VCFG_POSITION                               0x0
#define _ADCON1_VCFG_SIZE                                   0x1
#define _ADCON1_VCFG_LENGTH                                 0x1
#define _ADCON1_VCFG_MASK                                   0x1
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
        unsigned                        :1;
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
        unsigned                        :1;
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
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
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
        unsigned DRUVIE                 :1;
        unsigned OVIE                   :1;
        unsigned OTIE                   :1;
        unsigned                        :1;
        unsigned ADIE                   :1;
        unsigned CDSIE                  :1;
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
#define _PIE2_DRUVIE_POSN                                   0x2
#define _PIE2_DRUVIE_POSITION                               0x2
#define _PIE2_DRUVIE_SIZE                                   0x1
#define _PIE2_DRUVIE_LENGTH                                 0x1
#define _PIE2_DRUVIE_MASK                                   0x4
#define _PIE2_OVIE_POSN                                     0x3
#define _PIE2_OVIE_POSITION                                 0x3
#define _PIE2_OVIE_SIZE                                     0x1
#define _PIE2_OVIE_LENGTH                                   0x1
#define _PIE2_OVIE_MASK                                     0x8
#define _PIE2_OTIE_POSN                                     0x4
#define _PIE2_OTIE_POSITION                                 0x4
#define _PIE2_OTIE_SIZE                                     0x1
#define _PIE2_OTIE_LENGTH                                   0x1
#define _PIE2_OTIE_MASK                                     0x10
#define _PIE2_ADIE_POSN                                     0x6
#define _PIE2_ADIE_POSITION                                 0x6
#define _PIE2_ADIE_SIZE                                     0x1
#define _PIE2_ADIE_LENGTH                                   0x1
#define _PIE2_ADIE_MASK                                     0x40
#define _PIE2_CDSIE_POSN                                    0x7
#define _PIE2_CDSIE_POSITION                                0x7
#define _PIE2_CDSIE_SIZE                                    0x1
#define _PIE2_CDSIE_LENGTH                                  0x1
#define _PIE2_CDSIE_MASK                                    0x80

// Register: VINUVLO
#define VINUVLO VINUVLO
extern volatile unsigned char           VINUVLO             __at(0x090);
#ifndef _LIB_BUILD
asm("VINUVLO equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned UVLO                   :6;
    };
} VINUVLObits_t;
extern volatile VINUVLObits_t VINUVLObits __at(0x090);
// bitfield macros
#define _VINUVLO_UVLO_POSN                                  0x0
#define _VINUVLO_UVLO_POSITION                              0x0
#define _VINUVLO_UVLO_SIZE                                  0x6
#define _VINUVLO_UVLO_LENGTH                                0x6
#define _VINUVLO_UVLO_MASK                                  0x3F

// Register: VINOVLO
#define VINOVLO VINOVLO
extern volatile unsigned char           VINOVLO             __at(0x091);
#ifndef _LIB_BUILD
asm("VINOVLO equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVLO                   :6;
    };
} VINOVLObits_t;
extern volatile VINOVLObits_t VINOVLObits __at(0x091);
// bitfield macros
#define _VINOVLO_OVLO_POSN                                  0x0
#define _VINOVLO_OVLO_POSITION                              0x0
#define _VINOVLO_OVLO_SIZE                                  0x6
#define _VINOVLO_OVLO_LENGTH                                0x6
#define _VINOVLO_OVLO_MASK                                  0x3F

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

// Register: CC1RL
#define CC1RL CC1RL
extern volatile unsigned char           CC1RL               __at(0x093);
#ifndef _LIB_BUILD
asm("CC1RL equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1RL                  :8;
    };
} CC1RLbits_t;
extern volatile CC1RLbits_t CC1RLbits __at(0x093);
// bitfield macros
#define _CC1RL_CC1RL_POSN                                   0x0
#define _CC1RL_CC1RL_POSITION                               0x0
#define _CC1RL_CC1RL_SIZE                                   0x8
#define _CC1RL_CC1RL_LENGTH                                 0x8
#define _CC1RL_CC1RL_MASK                                   0xFF

// Register: CC1RH
#define CC1RH CC1RH
extern volatile unsigned char           CC1RH               __at(0x094);
#ifndef _LIB_BUILD
asm("CC1RH equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1RH                  :8;
    };
} CC1RHbits_t;
extern volatile CC1RHbits_t CC1RHbits __at(0x094);
// bitfield macros
#define _CC1RH_CC1RH_POSN                                   0x0
#define _CC1RH_CC1RH_POSITION                               0x0
#define _CC1RH_CC1RH_SIZE                                   0x8
#define _CC1RH_CC1RH_LENGTH                                 0x8
#define _CC1RH_CC1RH_MASK                                   0xFF

// Register: CC2RL
#define CC2RL CC2RL
extern volatile unsigned char           CC2RL               __at(0x095);
#ifndef _LIB_BUILD
asm("CC2RL equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC2RL                  :8;
    };
} CC2RLbits_t;
extern volatile CC2RLbits_t CC2RLbits __at(0x095);
// bitfield macros
#define _CC2RL_CC2RL_POSN                                   0x0
#define _CC2RL_CC2RL_POSITION                               0x0
#define _CC2RL_CC2RL_SIZE                                   0x8
#define _CC2RL_CC2RL_LENGTH                                 0x8
#define _CC2RL_CC2RL_MASK                                   0xFF

// Register: CC2RH
#define CC2RH CC2RH
extern volatile unsigned char           CC2RH               __at(0x096);
#ifndef _LIB_BUILD
asm("CC2RH equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC2RH                  :8;
    };
} CC2RHbits_t;
extern volatile CC2RHbits_t CC2RHbits __at(0x096);
// bitfield macros
#define _CC2RH_CC2RH_POSN                                   0x0
#define _CC2RH_CC2RH_POSITION                               0x0
#define _CC2RH_CC2RH_SIZE                                   0x8
#define _CC2RH_CC2RH_LENGTH                                 0x8
#define _CC2RH_CC2RH_MASK                                   0xFF

// Register: CCDCON
#define CCDCON CCDCON
extern volatile unsigned char           CCDCON              __at(0x097);
#ifndef _LIB_BUILD
asm("CCDCON equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CC1M                   :4;
        unsigned CC2M                   :4;
    };
} CCDCONbits_t;
extern volatile CCDCONbits_t CCDCONbits __at(0x097);
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

// Register: DESATCON
#define DESATCON DESATCON
extern volatile unsigned char           DESATCON            __at(0x098);
#ifndef _LIB_BUILD
asm("DESATCON equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CDSINTN                :1;
        unsigned CDSINTP                :1;
        unsigned CDSOUT                 :1;
        unsigned CDSOE                  :1;
        unsigned CDSPOL                 :1;
        unsigned                        :1;
        unsigned CDSWDE                 :1;
        unsigned CDSMUX                 :1;
    };
} DESATCONbits_t;
extern volatile DESATCONbits_t DESATCONbits __at(0x098);
// bitfield macros
#define _DESATCON_CDSINTN_POSN                              0x0
#define _DESATCON_CDSINTN_POSITION                          0x0
#define _DESATCON_CDSINTN_SIZE                              0x1
#define _DESATCON_CDSINTN_LENGTH                            0x1
#define _DESATCON_CDSINTN_MASK                              0x1
#define _DESATCON_CDSINTP_POSN                              0x1
#define _DESATCON_CDSINTP_POSITION                          0x1
#define _DESATCON_CDSINTP_SIZE                              0x1
#define _DESATCON_CDSINTP_LENGTH                            0x1
#define _DESATCON_CDSINTP_MASK                              0x2
#define _DESATCON_CDSOUT_POSN                               0x2
#define _DESATCON_CDSOUT_POSITION                           0x2
#define _DESATCON_CDSOUT_SIZE                               0x1
#define _DESATCON_CDSOUT_LENGTH                             0x1
#define _DESATCON_CDSOUT_MASK                               0x4
#define _DESATCON_CDSOE_POSN                                0x3
#define _DESATCON_CDSOE_POSITION                            0x3
#define _DESATCON_CDSOE_SIZE                                0x1
#define _DESATCON_CDSOE_LENGTH                              0x1
#define _DESATCON_CDSOE_MASK                                0x8
#define _DESATCON_CDSPOL_POSN                               0x4
#define _DESATCON_CDSPOL_POSITION                           0x4
#define _DESATCON_CDSPOL_SIZE                               0x1
#define _DESATCON_CDSPOL_LENGTH                             0x1
#define _DESATCON_CDSPOL_MASK                               0x10
#define _DESATCON_CDSWDE_POSN                               0x6
#define _DESATCON_CDSWDE_POSITION                           0x6
#define _DESATCON_CDSWDE_SIZE                               0x1
#define _DESATCON_CDSWDE_LENGTH                             0x1
#define _DESATCON_CDSWDE_MASK                               0x40
#define _DESATCON_CDSMUX_POSN                               0x7
#define _DESATCON_CDSMUX_POSITION                           0x7
#define _DESATCON_CDSMUX_SIZE                               0x1
#define _DESATCON_CDSMUX_LENGTH                             0x1
#define _DESATCON_CDSMUX_MASK                               0x80

// Register: OVCON
#define OVCON OVCON
extern volatile unsigned char           OVCON               __at(0x099);
#ifndef _LIB_BUILD
asm("OVCON equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVINTN                 :1;
        unsigned OVINTP                 :1;
        unsigned OVOUT                  :1;
        unsigned OVEN                   :1;
    };
} OVCONbits_t;
extern volatile OVCONbits_t OVCONbits __at(0x099);
// bitfield macros
#define _OVCON_OVINTN_POSN                                  0x0
#define _OVCON_OVINTN_POSITION                              0x0
#define _OVCON_OVINTN_SIZE                                  0x1
#define _OVCON_OVINTN_LENGTH                                0x1
#define _OVCON_OVINTN_MASK                                  0x1
#define _OVCON_OVINTP_POSN                                  0x1
#define _OVCON_OVINTP_POSITION                              0x1
#define _OVCON_OVINTP_SIZE                                  0x1
#define _OVCON_OVINTP_LENGTH                                0x1
#define _OVCON_OVINTP_MASK                                  0x2
#define _OVCON_OVOUT_POSN                                   0x2
#define _OVCON_OVOUT_POSITION                               0x2
#define _OVCON_OVOUT_SIZE                                   0x1
#define _OVCON_OVOUT_LENGTH                                 0x1
#define _OVCON_OVOUT_MASK                                   0x4
#define _OVCON_OVEN_POSN                                    0x3
#define _OVCON_OVEN_POSITION                                0x3
#define _OVCON_OVEN_SIZE                                    0x1
#define _OVCON_OVEN_LENGTH                                  0x1
#define _OVCON_OVEN_MASK                                    0x8

// Register: OVREFCON
#define OVREFCON OVREFCON
extern volatile unsigned char           OVREFCON            __at(0x09A);
#ifndef _LIB_BUILD
asm("OVREFCON equ 09Ah");
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
} OVREFCONbits_t;
extern volatile OVREFCONbits_t OVREFCONbits __at(0x09A);
// bitfield macros
#define _OVREFCON_OOV0_POSN                                 0x0
#define _OVREFCON_OOV0_POSITION                             0x0
#define _OVREFCON_OOV0_SIZE                                 0x1
#define _OVREFCON_OOV0_LENGTH                               0x1
#define _OVREFCON_OOV0_MASK                                 0x1
#define _OVREFCON_OOV1_POSN                                 0x1
#define _OVREFCON_OOV1_POSITION                             0x1
#define _OVREFCON_OOV1_SIZE                                 0x1
#define _OVREFCON_OOV1_LENGTH                               0x1
#define _OVREFCON_OOV1_MASK                                 0x2
#define _OVREFCON_OOV2_POSN                                 0x2
#define _OVREFCON_OOV2_POSITION                             0x2
#define _OVREFCON_OOV2_SIZE                                 0x1
#define _OVREFCON_OOV2_LENGTH                               0x1
#define _OVREFCON_OOV2_MASK                                 0x4
#define _OVREFCON_OOV3_POSN                                 0x3
#define _OVREFCON_OOV3_POSITION                             0x3
#define _OVREFCON_OOV3_SIZE                                 0x1
#define _OVREFCON_OOV3_LENGTH                               0x1
#define _OVREFCON_OOV3_MASK                                 0x8
#define _OVREFCON_OOV4_POSN                                 0x4
#define _OVREFCON_OOV4_POSITION                             0x4
#define _OVREFCON_OOV4_SIZE                                 0x1
#define _OVREFCON_OOV4_LENGTH                               0x1
#define _OVREFCON_OOV4_MASK                                 0x10
#define _OVREFCON_OOV5_POSN                                 0x5
#define _OVREFCON_OOV5_POSITION                             0x5
#define _OVREFCON_OOV5_SIZE                                 0x1
#define _OVREFCON_OOV5_LENGTH                               0x1
#define _OVREFCON_OOV5_MASK                                 0x20
#define _OVREFCON_OOV6_POSN                                 0x6
#define _OVREFCON_OOV6_POSITION                             0x6
#define _OVREFCON_OOV6_SIZE                                 0x1
#define _OVREFCON_OOV6_LENGTH                               0x1
#define _OVREFCON_OOV6_MASK                                 0x40
#define _OVREFCON_OOV7_POSN                                 0x7
#define _OVREFCON_OOV7_POSITION                             0x7
#define _OVREFCON_OOV7_SIZE                                 0x1
#define _OVREFCON_OOV7_LENGTH                               0x1
#define _OVREFCON_OOV7_MASK                                 0x80

// Register: DEADCON
#define DEADCON DEADCON
extern volatile unsigned char           DEADCON             __at(0x09B);
#ifndef _LIB_BUILD
asm("DEADCON equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SDRVDT                 :4;
        unsigned PDRVDT                 :4;
    };
} DEADCONbits_t;
extern volatile DEADCONbits_t DEADCONbits __at(0x09B);
// bitfield macros
#define _DEADCON_SDRVDT_POSN                                0x0
#define _DEADCON_SDRVDT_POSITION                            0x0
#define _DEADCON_SDRVDT_SIZE                                0x4
#define _DEADCON_SDRVDT_LENGTH                              0x4
#define _DEADCON_SDRVDT_MASK                                0xF
#define _DEADCON_PDRVDT_POSN                                0x4
#define _DEADCON_PDRVDT_POSITION                            0x4
#define _DEADCON_PDRVDT_SIZE                                0x4
#define _DEADCON_PDRVDT_LENGTH                              0x4
#define _DEADCON_PDRVDT_MASK                                0xF0

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

// Register: ICOACON
#define ICOACON ICOACON
extern volatile unsigned char           ICOACON             __at(0x09D);
#ifndef _LIB_BUILD
asm("ICOACON equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ICOAC                  :4;
    };
} ICOACONbits_t;
extern volatile ICOACONbits_t ICOACONbits __at(0x09D);
// bitfield macros
#define _ICOACON_ICOAC_POSN                                 0x0
#define _ICOACON_ICOAC_POSITION                             0x0
#define _ICOACON_ICOAC_SIZE                                 0x4
#define _ICOACON_ICOAC_LENGTH                               0x4
#define _ICOACON_ICOAC_MASK                                 0xF

// Register: ICLEBCON
#define ICLEBCON ICLEBCON
extern volatile unsigned char           ICLEBCON            __at(0x09E);
#ifndef _LIB_BUILD
asm("ICLEBCON equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ICLEBC                 :2;
    };
} ICLEBCONbits_t;
extern volatile ICLEBCONbits_t ICLEBCONbits __at(0x09E);
// bitfield macros
#define _ICLEBCON_ICLEBC_POSN                               0x0
#define _ICLEBCON_ICLEBC_POSITION                           0x0
#define _ICLEBCON_ICLEBC_SIZE                               0x2
#define _ICLEBCON_ICLEBC_LENGTH                             0x2
#define _ICLEBCON_ICLEBC_MASK                               0x3

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
    };
    struct {
        unsigned                        :1;
        unsigned WPUB1                  :1;
        unsigned WPUB2                  :1;
    };
} WPUGPBbits_t;
extern volatile WPUGPBbits_t WPUGPBbits __at(0x106);
// bitfield macros
#define _WPUGPB_WPUGPB1_POSN                                0x1
#define _WPUGPB_WPUGPB1_POSITION                            0x1
#define _WPUGPB_WPUGPB1_SIZE                                0x1
#define _WPUGPB_WPUGPB1_LENGTH                              0x1
#define _WPUGPB_WPUGPB1_MASK                                0x2
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

// Register: PE1
#define PE1 PE1
extern volatile unsigned char           PE1                 __at(0x107);
#ifndef _LIB_BUILD
asm("PE1 equ 0107h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWMSTR_SEN             :1;
        unsigned PWMSTR_PEN             :1;
        unsigned ISPUEN                 :1;
        unsigned                        :1;
        unsigned SDRVBY                 :1;
        unsigned PDRVBY                 :1;
        unsigned SDRVEN                 :1;
        unsigned PDRVEN                 :1;
    };
} PE1bits_t;
extern volatile PE1bits_t PE1bits __at(0x107);
// bitfield macros
#define _PE1_PWMSTR_SEN_POSN                                0x0
#define _PE1_PWMSTR_SEN_POSITION                            0x0
#define _PE1_PWMSTR_SEN_SIZE                                0x1
#define _PE1_PWMSTR_SEN_LENGTH                              0x1
#define _PE1_PWMSTR_SEN_MASK                                0x1
#define _PE1_PWMSTR_PEN_POSN                                0x1
#define _PE1_PWMSTR_PEN_POSITION                            0x1
#define _PE1_PWMSTR_PEN_SIZE                                0x1
#define _PE1_PWMSTR_PEN_LENGTH                              0x1
#define _PE1_PWMSTR_PEN_MASK                                0x2
#define _PE1_ISPUEN_POSN                                    0x2
#define _PE1_ISPUEN_POSITION                                0x2
#define _PE1_ISPUEN_SIZE                                    0x1
#define _PE1_ISPUEN_LENGTH                                  0x1
#define _PE1_ISPUEN_MASK                                    0x4
#define _PE1_SDRVBY_POSN                                    0x4
#define _PE1_SDRVBY_POSITION                                0x4
#define _PE1_SDRVBY_SIZE                                    0x1
#define _PE1_SDRVBY_LENGTH                                  0x1
#define _PE1_SDRVBY_MASK                                    0x10
#define _PE1_PDRVBY_POSN                                    0x5
#define _PE1_PDRVBY_POSITION                                0x5
#define _PE1_PDRVBY_SIZE                                    0x1
#define _PE1_PDRVBY_LENGTH                                  0x1
#define _PE1_PDRVBY_MASK                                    0x20
#define _PE1_SDRVEN_POSN                                    0x6
#define _PE1_SDRVEN_POSITION                                0x6
#define _PE1_SDRVEN_SIZE                                    0x1
#define _PE1_SDRVEN_LENGTH                                  0x1
#define _PE1_SDRVEN_MASK                                    0x40
#define _PE1_PDRVEN_POSN                                    0x7
#define _PE1_PDRVEN_POSITION                                0x7
#define _PE1_PDRVEN_SIZE                                    0x1
#define _PE1_PDRVEN_LENGTH                                  0x1
#define _PE1_PDRVEN_MASK                                    0x80

// Register: MODECON
#define MODECON MODECON
extern volatile unsigned char           MODECON             __at(0x108);
#ifndef _LIB_BUILD
asm("MODECON equ 0108h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned MSC2                   :1;
        unsigned                        :2;
        unsigned MSC                    :2;
    };
    struct {
        unsigned                        :6;
        unsigned MSC0                   :1;
        unsigned MSC1                   :1;
    };
} MODECONbits_t;
extern volatile MODECONbits_t MODECONbits __at(0x108);
// bitfield macros
#define _MODECON_MSC2_POSN                                  0x3
#define _MODECON_MSC2_POSITION                              0x3
#define _MODECON_MSC2_SIZE                                  0x1
#define _MODECON_MSC2_LENGTH                                0x1
#define _MODECON_MSC2_MASK                                  0x8
#define _MODECON_MSC_POSN                                   0x6
#define _MODECON_MSC_POSITION                               0x6
#define _MODECON_MSC_SIZE                                   0x2
#define _MODECON_MSC_LENGTH                                 0x2
#define _MODECON_MSC_MASK                                   0xC0
#define _MODECON_MSC0_POSN                                  0x6
#define _MODECON_MSC0_POSITION                              0x6
#define _MODECON_MSC0_SIZE                                  0x1
#define _MODECON_MSC0_LENGTH                                0x1
#define _MODECON_MSC0_MASK                                  0x40
#define _MODECON_MSC1_POSN                                  0x7
#define _MODECON_MSC1_POSITION                              0x7
#define _MODECON_MSC1_SIZE                                  0x1
#define _MODECON_MSC1_LENGTH                                0x1
#define _MODECON_MSC1_MASK                                  0x80

// Register: ABECON
#define ABECON ABECON
extern volatile unsigned char           ABECON              __at(0x109);
#ifndef _LIB_BUILD
asm("ABECON equ 0109h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANAOEN                 :1;
        unsigned EA1DIS                 :1;
        unsigned EA2DIS                 :1;
        unsigned DRUVSEL                :1;
        unsigned DSEL                   :3;
        unsigned DIGOEN                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned DSEL0                  :1;
        unsigned DSEL1                  :1;
        unsigned DESL2                  :1;
    };
} ABECONbits_t;
extern volatile ABECONbits_t ABECONbits __at(0x109);
// bitfield macros
#define _ABECON_ANAOEN_POSN                                 0x0
#define _ABECON_ANAOEN_POSITION                             0x0
#define _ABECON_ANAOEN_SIZE                                 0x1
#define _ABECON_ANAOEN_LENGTH                               0x1
#define _ABECON_ANAOEN_MASK                                 0x1
#define _ABECON_EA1DIS_POSN                                 0x1
#define _ABECON_EA1DIS_POSITION                             0x1
#define _ABECON_EA1DIS_SIZE                                 0x1
#define _ABECON_EA1DIS_LENGTH                               0x1
#define _ABECON_EA1DIS_MASK                                 0x2
#define _ABECON_EA2DIS_POSN                                 0x2
#define _ABECON_EA2DIS_POSITION                             0x2
#define _ABECON_EA2DIS_SIZE                                 0x1
#define _ABECON_EA2DIS_LENGTH                               0x1
#define _ABECON_EA2DIS_MASK                                 0x4
#define _ABECON_DRUVSEL_POSN                                0x3
#define _ABECON_DRUVSEL_POSITION                            0x3
#define _ABECON_DRUVSEL_SIZE                                0x1
#define _ABECON_DRUVSEL_LENGTH                              0x1
#define _ABECON_DRUVSEL_MASK                                0x8
#define _ABECON_DSEL_POSN                                   0x4
#define _ABECON_DSEL_POSITION                               0x4
#define _ABECON_DSEL_SIZE                                   0x3
#define _ABECON_DSEL_LENGTH                                 0x3
#define _ABECON_DSEL_MASK                                   0x70
#define _ABECON_DIGOEN_POSN                                 0x7
#define _ABECON_DIGOEN_POSITION                             0x7
#define _ABECON_DIGOEN_SIZE                                 0x1
#define _ABECON_DIGOEN_LENGTH                               0x1
#define _ABECON_DIGOEN_MASK                                 0x80
#define _ABECON_DSEL0_POSN                                  0x4
#define _ABECON_DSEL0_POSITION                              0x4
#define _ABECON_DSEL0_SIZE                                  0x1
#define _ABECON_DSEL0_LENGTH                                0x1
#define _ABECON_DSEL0_MASK                                  0x10
#define _ABECON_DSEL1_POSN                                  0x5
#define _ABECON_DSEL1_POSITION                              0x5
#define _ABECON_DSEL1_SIZE                                  0x1
#define _ABECON_DSEL1_LENGTH                                0x1
#define _ABECON_DSEL1_MASK                                  0x20
#define _ABECON_DESL2_POSN                                  0x6
#define _ABECON_DESL2_POSITION                              0x6
#define _ABECON_DESL2_SIZE                                  0x1
#define _ABECON_DESL2_LENGTH                                0x1
#define _ABECON_DESL2_MASK                                  0x40

// Register: ATSTCON
#define ATSTCON ATSTCON
extern volatile unsigned char           ATSTCON             __at(0x10C);
#ifndef _LIB_BUILD
asm("ATSTCON equ 010Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMPTBY                 :1;
        unsigned DRUVBY                 :1;
        unsigned ISNISPGND              :1;
        unsigned                        :1;
        unsigned SWFRQOR                :1;
    };
} ATSTCONbits_t;
extern volatile ATSTCONbits_t ATSTCONbits __at(0x10C);
// bitfield macros
#define _ATSTCON_TMPTBY_POSN                                0x0
#define _ATSTCON_TMPTBY_POSITION                            0x0
#define _ATSTCON_TMPTBY_SIZE                                0x1
#define _ATSTCON_TMPTBY_LENGTH                              0x1
#define _ATSTCON_TMPTBY_MASK                                0x1
#define _ATSTCON_DRUVBY_POSN                                0x1
#define _ATSTCON_DRUVBY_POSITION                            0x1
#define _ATSTCON_DRUVBY_SIZE                                0x1
#define _ATSTCON_DRUVBY_LENGTH                              0x1
#define _ATSTCON_DRUVBY_MASK                                0x2
#define _ATSTCON_ISNISPGND_POSN                             0x2
#define _ATSTCON_ISNISPGND_POSITION                         0x2
#define _ATSTCON_ISNISPGND_SIZE                             0x1
#define _ATSTCON_ISNISPGND_LENGTH                           0x1
#define _ATSTCON_ISNISPGND_MASK                             0x4
#define _ATSTCON_SWFRQOR_POSN                               0x4
#define _ATSTCON_SWFRQOR_POSITION                           0x4
#define _ATSTCON_SWFRQOR_SIZE                               0x1
#define _ATSTCON_SWFRQOR_LENGTH                             0x1
#define _ATSTCON_SWFRQOR_MASK                               0x10

// Register: VEAOFFCAL
#define VEAOFFCAL VEAOFFCAL
extern volatile unsigned char           VEAOFFCAL           __at(0x10D);
#ifndef _LIB_BUILD
asm("VEAOFFCAL equ 010Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VEAOFFCAL0             :1;
        unsigned VEAOFFCAL1             :1;
        unsigned VEAOFFCAL2             :1;
        unsigned VEAOFFCAL3             :1;
        unsigned VEAOFFCAL4             :1;
        unsigned VEAOFFCAL5             :1;
        unsigned VEAOFFCAL6             :1;
    };
} VEAOFFCALbits_t;
extern volatile VEAOFFCALbits_t VEAOFFCALbits __at(0x10D);
// bitfield macros
#define _VEAOFFCAL_VEAOFFCAL0_POSN                          0x0
#define _VEAOFFCAL_VEAOFFCAL0_POSITION                      0x0
#define _VEAOFFCAL_VEAOFFCAL0_SIZE                          0x1
#define _VEAOFFCAL_VEAOFFCAL0_LENGTH                        0x1
#define _VEAOFFCAL_VEAOFFCAL0_MASK                          0x1
#define _VEAOFFCAL_VEAOFFCAL1_POSN                          0x1
#define _VEAOFFCAL_VEAOFFCAL1_POSITION                      0x1
#define _VEAOFFCAL_VEAOFFCAL1_SIZE                          0x1
#define _VEAOFFCAL_VEAOFFCAL1_LENGTH                        0x1
#define _VEAOFFCAL_VEAOFFCAL1_MASK                          0x2
#define _VEAOFFCAL_VEAOFFCAL2_POSN                          0x2
#define _VEAOFFCAL_VEAOFFCAL2_POSITION                      0x2
#define _VEAOFFCAL_VEAOFFCAL2_SIZE                          0x1
#define _VEAOFFCAL_VEAOFFCAL2_LENGTH                        0x1
#define _VEAOFFCAL_VEAOFFCAL2_MASK                          0x4
#define _VEAOFFCAL_VEAOFFCAL3_POSN                          0x3
#define _VEAOFFCAL_VEAOFFCAL3_POSITION                      0x3
#define _VEAOFFCAL_VEAOFFCAL3_SIZE                          0x1
#define _VEAOFFCAL_VEAOFFCAL3_LENGTH                        0x1
#define _VEAOFFCAL_VEAOFFCAL3_MASK                          0x8
#define _VEAOFFCAL_VEAOFFCAL4_POSN                          0x4
#define _VEAOFFCAL_VEAOFFCAL4_POSITION                      0x4
#define _VEAOFFCAL_VEAOFFCAL4_SIZE                          0x1
#define _VEAOFFCAL_VEAOFFCAL4_LENGTH                        0x1
#define _VEAOFFCAL_VEAOFFCAL4_MASK                          0x10
#define _VEAOFFCAL_VEAOFFCAL5_POSN                          0x5
#define _VEAOFFCAL_VEAOFFCAL5_POSITION                      0x5
#define _VEAOFFCAL_VEAOFFCAL5_SIZE                          0x1
#define _VEAOFFCAL_VEAOFFCAL5_LENGTH                        0x1
#define _VEAOFFCAL_VEAOFFCAL5_MASK                          0x20
#define _VEAOFFCAL_VEAOFFCAL6_POSN                          0x6
#define _VEAOFFCAL_VEAOFFCAL6_POSITION                      0x6
#define _VEAOFFCAL_VEAOFFCAL6_SIZE                          0x1
#define _VEAOFFCAL_VEAOFFCAL6_LENGTH                        0x1
#define _VEAOFFCAL_VEAOFFCAL6_MASK                          0x40

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

// Register: VRSPCAL
#define VRSPCAL VRSPCAL
extern volatile unsigned char           VRSPCAL             __at(0x119);
#ifndef _LIB_BUILD
asm("VRSPCAL equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VRSPCAL0               :1;
        unsigned VRSPCAL1               :1;
        unsigned VRSPCAL2               :1;
        unsigned VRSPCAL3               :1;
        unsigned VRSPCAL4               :1;
    };
} VRSPCALbits_t;
extern volatile VRSPCALbits_t VRSPCALbits __at(0x119);
// bitfield macros
#define _VRSPCAL_VRSPCAL0_POSN                              0x0
#define _VRSPCAL_VRSPCAL0_POSITION                          0x0
#define _VRSPCAL_VRSPCAL0_SIZE                              0x1
#define _VRSPCAL_VRSPCAL0_LENGTH                            0x1
#define _VRSPCAL_VRSPCAL0_MASK                              0x1
#define _VRSPCAL_VRSPCAL1_POSN                              0x1
#define _VRSPCAL_VRSPCAL1_POSITION                          0x1
#define _VRSPCAL_VRSPCAL1_SIZE                              0x1
#define _VRSPCAL_VRSPCAL1_LENGTH                            0x1
#define _VRSPCAL_VRSPCAL1_MASK                              0x2
#define _VRSPCAL_VRSPCAL2_POSN                              0x2
#define _VRSPCAL_VRSPCAL2_POSITION                          0x2
#define _VRSPCAL_VRSPCAL2_SIZE                              0x1
#define _VRSPCAL_VRSPCAL2_LENGTH                            0x1
#define _VRSPCAL_VRSPCAL2_MASK                              0x4
#define _VRSPCAL_VRSPCAL3_POSN                              0x3
#define _VRSPCAL_VRSPCAL3_POSITION                          0x3
#define _VRSPCAL_VRSPCAL3_SIZE                              0x1
#define _VRSPCAL_VRSPCAL3_LENGTH                            0x1
#define _VRSPCAL_VRSPCAL3_MASK                              0x8
#define _VRSPCAL_VRSPCAL4_POSN                              0x4
#define _VRSPCAL_VRSPCAL4_POSITION                          0x4
#define _VRSPCAL_VRSPCAL4_SIZE                              0x1
#define _VRSPCAL_VRSPCAL4_LENGTH                            0x1
#define _VRSPCAL_VRSPCAL4_MASK                              0x10

// Register: VR2SPCAL
#define VR2SPCAL VR2SPCAL
extern volatile unsigned char           VR2SPCAL            __at(0x11A);
#ifndef _LIB_BUILD
asm("VR2SPCAL equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VR2SPCAL0              :1;
        unsigned VR2SPCAL1              :1;
        unsigned VR2SPCAL2              :1;
        unsigned VR2SPCAL3              :1;
        unsigned VR2SPCAL4              :1;
    };
} VR2SPCALbits_t;
extern volatile VR2SPCALbits_t VR2SPCALbits __at(0x11A);
// bitfield macros
#define _VR2SPCAL_VR2SPCAL0_POSN                            0x0
#define _VR2SPCAL_VR2SPCAL0_POSITION                        0x0
#define _VR2SPCAL_VR2SPCAL0_SIZE                            0x1
#define _VR2SPCAL_VR2SPCAL0_LENGTH                          0x1
#define _VR2SPCAL_VR2SPCAL0_MASK                            0x1
#define _VR2SPCAL_VR2SPCAL1_POSN                            0x1
#define _VR2SPCAL_VR2SPCAL1_POSITION                        0x1
#define _VR2SPCAL_VR2SPCAL1_SIZE                            0x1
#define _VR2SPCAL_VR2SPCAL1_LENGTH                          0x1
#define _VR2SPCAL_VR2SPCAL1_MASK                            0x2
#define _VR2SPCAL_VR2SPCAL2_POSN                            0x2
#define _VR2SPCAL_VR2SPCAL2_POSITION                        0x2
#define _VR2SPCAL_VR2SPCAL2_SIZE                            0x1
#define _VR2SPCAL_VR2SPCAL2_LENGTH                          0x1
#define _VR2SPCAL_VR2SPCAL2_MASK                            0x4
#define _VR2SPCAL_VR2SPCAL3_POSN                            0x3
#define _VR2SPCAL_VR2SPCAL3_POSITION                        0x3
#define _VR2SPCAL_VR2SPCAL3_SIZE                            0x1
#define _VR2SPCAL_VR2SPCAL3_LENGTH                          0x1
#define _VR2SPCAL_VR2SPCAL3_MASK                            0x8
#define _VR2SPCAL_VR2SPCAL4_POSN                            0x4
#define _VR2SPCAL_VR2SPCAL4_POSITION                        0x4
#define _VR2SPCAL_VR2SPCAL4_SIZE                            0x1
#define _VR2SPCAL_VR2SPCAL4_LENGTH                          0x1
#define _VR2SPCAL_VR2SPCAL4_MASK                            0x10

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
        unsigned                        :1;
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
    };
} ANSELBbits_t;
extern volatile ANSELBbits_t ANSELBbits __at(0x188);
// bitfield macros
#define _ANSELB_ANSB1_POSN                                  0x1
#define _ANSELB_ANSB1_POSITION                              0x1
#define _ANSELB_ANSB1_SIZE                                  0x1
#define _ANSELB_ANSB1_LENGTH                                0x1
#define _ANSELB_ANSB1_MASK                                  0x2

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

// Register: DSTCAL
#define DSTCAL DSTCAL
extern volatile unsigned char           DSTCAL              __at(0x196);
#ifndef _LIB_BUILD
asm("DSTCAL equ 0196h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DSTCAL0                :1;
        unsigned DSTCAL1                :1;
        unsigned DSTCAL2                :1;
        unsigned DSTCAL3                :1;
        unsigned DSTCAL4                :1;
    };
} DSTCALbits_t;
extern volatile DSTCALbits_t DSTCALbits __at(0x196);
// bitfield macros
#define _DSTCAL_DSTCAL0_POSN                                0x0
#define _DSTCAL_DSTCAL0_POSITION                            0x0
#define _DSTCAL_DSTCAL0_SIZE                                0x1
#define _DSTCAL_DSTCAL0_LENGTH                              0x1
#define _DSTCAL_DSTCAL0_MASK                                0x1
#define _DSTCAL_DSTCAL1_POSN                                0x1
#define _DSTCAL_DSTCAL1_POSITION                            0x1
#define _DSTCAL_DSTCAL1_SIZE                                0x1
#define _DSTCAL_DSTCAL1_LENGTH                              0x1
#define _DSTCAL_DSTCAL1_MASK                                0x2
#define _DSTCAL_DSTCAL2_POSN                                0x2
#define _DSTCAL_DSTCAL2_POSITION                            0x2
#define _DSTCAL_DSTCAL2_SIZE                                0x1
#define _DSTCAL_DSTCAL2_LENGTH                              0x1
#define _DSTCAL_DSTCAL2_MASK                                0x4
#define _DSTCAL_DSTCAL3_POSN                                0x3
#define _DSTCAL_DSTCAL3_POSITION                            0x3
#define _DSTCAL_DSTCAL3_SIZE                                0x1
#define _DSTCAL_DSTCAL3_LENGTH                              0x1
#define _DSTCAL_DSTCAL3_MASK                                0x8
#define _DSTCAL_DSTCAL4_POSN                                0x4
#define _DSTCAL_DSTCAL4_POSITION                            0x4
#define _DSTCAL_DSTCAL4_SIZE                                0x1
#define _DSTCAL_DSTCAL4_LENGTH                              0x1
#define _DSTCAL_DSTCAL4_MASK                                0x10

// Register: CGMVGMCAL
#define CGMVGMCAL CGMVGMCAL
extern volatile unsigned char           CGMVGMCAL           __at(0x197);
#ifndef _LIB_BUILD
asm("CGMVGMCAL equ 0197h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned VGMCAL                 :4;
        unsigned CGMCAL                 :4;
    };
} CGMVGMCALbits_t;
extern volatile CGMVGMCALbits_t CGMVGMCALbits __at(0x197);
// bitfield macros
#define _CGMVGMCAL_VGMCAL_POSN                              0x0
#define _CGMVGMCAL_VGMCAL_POSITION                          0x0
#define _CGMVGMCAL_VGMCAL_SIZE                              0x4
#define _CGMVGMCAL_VGMCAL_LENGTH                            0x4
#define _CGMVGMCAL_VGMCAL_MASK                              0xF
#define _CGMVGMCAL_CGMCAL_POSN                              0x4
#define _CGMVGMCAL_CGMCAL_POSITION                          0x4
#define _CGMVGMCAL_CGMCAL_SIZE                              0x4
#define _CGMVGMCAL_CGMCAL_LENGTH                            0x4
#define _CGMVGMCAL_CGMCAL_MASK                              0xF0

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

// Register: DCSCAL
#define DCSCAL DCSCAL
extern volatile unsigned char           DCSCAL              __at(0x199);
#ifndef _LIB_BUILD
asm("DCSCAL equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DCSCAL0                :1;
        unsigned DCSCAL1                :1;
        unsigned DCSCAL2                :1;
        unsigned DCSCAL3                :1;
        unsigned DCSCAL4                :1;
        unsigned DCSCAL5                :1;
        unsigned DCSCAL6                :1;
    };
} DCSCALbits_t;
extern volatile DCSCALbits_t DCSCALbits __at(0x199);
// bitfield macros
#define _DCSCAL_DCSCAL0_POSN                                0x0
#define _DCSCAL_DCSCAL0_POSITION                            0x0
#define _DCSCAL_DCSCAL0_SIZE                                0x1
#define _DCSCAL_DCSCAL0_LENGTH                              0x1
#define _DCSCAL_DCSCAL0_MASK                                0x1
#define _DCSCAL_DCSCAL1_POSN                                0x1
#define _DCSCAL_DCSCAL1_POSITION                            0x1
#define _DCSCAL_DCSCAL1_SIZE                                0x1
#define _DCSCAL_DCSCAL1_LENGTH                              0x1
#define _DCSCAL_DCSCAL1_MASK                                0x2
#define _DCSCAL_DCSCAL2_POSN                                0x2
#define _DCSCAL_DCSCAL2_POSITION                            0x2
#define _DCSCAL_DCSCAL2_SIZE                                0x1
#define _DCSCAL_DCSCAL2_LENGTH                              0x1
#define _DCSCAL_DCSCAL2_MASK                                0x4
#define _DCSCAL_DCSCAL3_POSN                                0x3
#define _DCSCAL_DCSCAL3_POSITION                            0x3
#define _DCSCAL_DCSCAL3_SIZE                                0x1
#define _DCSCAL_DCSCAL3_LENGTH                              0x1
#define _DCSCAL_DCSCAL3_MASK                                0x8
#define _DCSCAL_DCSCAL4_POSN                                0x4
#define _DCSCAL_DCSCAL4_POSITION                            0x4
#define _DCSCAL_DCSCAL4_SIZE                                0x1
#define _DCSCAL_DCSCAL4_LENGTH                              0x1
#define _DCSCAL_DCSCAL4_MASK                                0x10
#define _DCSCAL_DCSCAL5_POSN                                0x5
#define _DCSCAL_DCSCAL5_POSITION                            0x5
#define _DCSCAL_DCSCAL5_SIZE                                0x1
#define _DCSCAL_DCSCAL5_LENGTH                              0x1
#define _DCSCAL_DCSCAL5_MASK                                0x20
#define _DCSCAL_DCSCAL6_POSN                                0x6
#define _DCSCAL_DCSCAL6_POSITION                            0x6
#define _DCSCAL_DCSCAL6_SIZE                                0x1
#define _DCSCAL_DCSCAL6_LENGTH                              0x1
#define _DCSCAL_DCSCAL6_MASK                                0x40

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
        unsigned BGRT4                  :1;
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
#define _BGRCAL_BGRT4_POSN                                  0x4
#define _BGRCAL_BGRT4_POSITION                              0x4
#define _BGRCAL_BGRT4_SIZE                                  0x1
#define _BGRCAL_BGRT4_LENGTH                                0x1
#define _BGRCAL_BGRT4_MASK                                  0x10

// Register: CEAOFFCAL
#define CEAOFFCAL CEAOFFCAL
extern volatile unsigned char           CEAOFFCAL           __at(0x19C);
#ifndef _LIB_BUILD
asm("CEAOFFCAL equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CEAOFFCAL0             :1;
        unsigned CEAOFFCAL1             :1;
        unsigned CEAOFFCAL2             :1;
        unsigned CEAOFFCAL3             :1;
        unsigned CEAOFFCAL4             :1;
        unsigned CEAOFFCAL5             :1;
        unsigned CEAOFFCAL6             :1;
    };
} CEAOFFCALbits_t;
extern volatile CEAOFFCALbits_t CEAOFFCALbits __at(0x19C);
// bitfield macros
#define _CEAOFFCAL_CEAOFFCAL0_POSN                          0x0
#define _CEAOFFCAL_CEAOFFCAL0_POSITION                      0x0
#define _CEAOFFCAL_CEAOFFCAL0_SIZE                          0x1
#define _CEAOFFCAL_CEAOFFCAL0_LENGTH                        0x1
#define _CEAOFFCAL_CEAOFFCAL0_MASK                          0x1
#define _CEAOFFCAL_CEAOFFCAL1_POSN                          0x1
#define _CEAOFFCAL_CEAOFFCAL1_POSITION                      0x1
#define _CEAOFFCAL_CEAOFFCAL1_SIZE                          0x1
#define _CEAOFFCAL_CEAOFFCAL1_LENGTH                        0x1
#define _CEAOFFCAL_CEAOFFCAL1_MASK                          0x2
#define _CEAOFFCAL_CEAOFFCAL2_POSN                          0x2
#define _CEAOFFCAL_CEAOFFCAL2_POSITION                      0x2
#define _CEAOFFCAL_CEAOFFCAL2_SIZE                          0x1
#define _CEAOFFCAL_CEAOFFCAL2_LENGTH                        0x1
#define _CEAOFFCAL_CEAOFFCAL2_MASK                          0x4
#define _CEAOFFCAL_CEAOFFCAL3_POSN                          0x3
#define _CEAOFFCAL_CEAOFFCAL3_POSITION                      0x3
#define _CEAOFFCAL_CEAOFFCAL3_SIZE                          0x1
#define _CEAOFFCAL_CEAOFFCAL3_LENGTH                        0x1
#define _CEAOFFCAL_CEAOFFCAL3_MASK                          0x8
#define _CEAOFFCAL_CEAOFFCAL4_POSN                          0x4
#define _CEAOFFCAL_CEAOFFCAL4_POSITION                      0x4
#define _CEAOFFCAL_CEAOFFCAL4_SIZE                          0x1
#define _CEAOFFCAL_CEAOFFCAL4_LENGTH                        0x1
#define _CEAOFFCAL_CEAOFFCAL4_MASK                          0x10
#define _CEAOFFCAL_CEAOFFCAL5_POSN                          0x5
#define _CEAOFFCAL_CEAOFFCAL5_POSITION                      0x5
#define _CEAOFFCAL_CEAOFFCAL5_SIZE                          0x1
#define _CEAOFFCAL_CEAOFFCAL5_LENGTH                        0x1
#define _CEAOFFCAL_CEAOFFCAL5_MASK                          0x20
#define _CEAOFFCAL_CEAOFFCAL6_POSN                          0x6
#define _CEAOFFCAL_CEAOFFCAL6_POSITION                      0x6
#define _CEAOFFCAL_CEAOFFCAL6_SIZE                          0x1
#define _CEAOFFCAL_CEAOFFCAL6_LENGTH                        0x1
#define _CEAOFFCAL_CEAOFFCAL6_MASK                          0x40

// Register: AVDDCAL
#define AVDDCAL AVDDCAL
extern volatile unsigned char           AVDDCAL             __at(0x19D);
#ifndef _LIB_BUILD
asm("AVDDCAL equ 019Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AVDDCAL0               :1;
        unsigned AVDDCAL1               :1;
        unsigned AVDDCAL2               :1;
        unsigned AVDDCAL3               :1;
    };
} AVDDCALbits_t;
extern volatile AVDDCALbits_t AVDDCALbits __at(0x19D);
// bitfield macros
#define _AVDDCAL_AVDDCAL0_POSN                              0x0
#define _AVDDCAL_AVDDCAL0_POSITION                          0x0
#define _AVDDCAL_AVDDCAL0_SIZE                              0x1
#define _AVDDCAL_AVDDCAL0_LENGTH                            0x1
#define _AVDDCAL_AVDDCAL0_MASK                              0x1
#define _AVDDCAL_AVDDCAL1_POSN                              0x1
#define _AVDDCAL_AVDDCAL1_POSITION                          0x1
#define _AVDDCAL_AVDDCAL1_SIZE                              0x1
#define _AVDDCAL_AVDDCAL1_LENGTH                            0x1
#define _AVDDCAL_AVDDCAL1_MASK                              0x2
#define _AVDDCAL_AVDDCAL2_POSN                              0x2
#define _AVDDCAL_AVDDCAL2_POSITION                          0x2
#define _AVDDCAL_AVDDCAL2_SIZE                              0x1
#define _AVDDCAL_AVDDCAL2_LENGTH                            0x1
#define _AVDDCAL_AVDDCAL2_MASK                              0x4
#define _AVDDCAL_AVDDCAL3_POSN                              0x3
#define _AVDDCAL_AVDDCAL3_POSITION                          0x3
#define _AVDDCAL_AVDDCAL3_SIZE                              0x1
#define _AVDDCAL_AVDDCAL3_LENGTH                            0x1
#define _AVDDCAL_AVDDCAL3_MASK                              0x8

// Register: A2GCAL
#define A2GCAL A2GCAL
extern volatile unsigned char           A2GCAL              __at(0x19E);
#ifndef _LIB_BUILD
asm("A2GCAL equ 019Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned A2GCAL0                :1;
        unsigned A2GCAL1                :1;
        unsigned A2GCAL2                :1;
        unsigned A2GCAL3                :1;
    };
} A2GCALbits_t;
extern volatile A2GCALbits_t A2GCALbits __at(0x19E);
// bitfield macros
#define _A2GCAL_A2GCAL0_POSN                                0x0
#define _A2GCAL_A2GCAL0_POSITION                            0x0
#define _A2GCAL_A2GCAL0_SIZE                                0x1
#define _A2GCAL_A2GCAL0_LENGTH                              0x1
#define _A2GCAL_A2GCAL0_MASK                                0x1
#define _A2GCAL_A2GCAL1_POSN                                0x1
#define _A2GCAL_A2GCAL1_POSITION                            0x1
#define _A2GCAL_A2GCAL1_SIZE                                0x1
#define _A2GCAL_A2GCAL1_LENGTH                              0x1
#define _A2GCAL_A2GCAL1_MASK                                0x2
#define _A2GCAL_A2GCAL2_POSN                                0x2
#define _A2GCAL_A2GCAL2_POSITION                            0x2
#define _A2GCAL_A2GCAL2_SIZE                                0x1
#define _A2GCAL_A2GCAL2_LENGTH                              0x1
#define _A2GCAL_A2GCAL2_MASK                                0x4
#define _A2GCAL_A2GCAL3_POSN                                0x3
#define _A2GCAL_A2GCAL3_POSITION                            0x3
#define _A2GCAL_A2GCAL3_SIZE                                0x1
#define _A2GCAL_A2GCAL3_LENGTH                              0x1
#define _A2GCAL_A2GCAL3_MASK                                0x8

// Register: OVRSPCAL
#define OVRSPCAL OVRSPCAL
extern volatile unsigned char           OVRSPCAL            __at(0x19F);
#ifndef _LIB_BUILD
asm("OVRSPCAL equ 019Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OVRSPCAL0              :1;
        unsigned OVRSPCAL1              :1;
        unsigned OVRSPCAL2              :1;
        unsigned OVRSPCAL3              :1;
        unsigned OVRSPCAL4              :1;
    };
} OVRSPCALbits_t;
extern volatile OVRSPCALbits_t OVRSPCALbits __at(0x19F);
// bitfield macros
#define _OVRSPCAL_OVRSPCAL0_POSN                            0x0
#define _OVRSPCAL_OVRSPCAL0_POSITION                        0x0
#define _OVRSPCAL_OVRSPCAL0_SIZE                            0x1
#define _OVRSPCAL_OVRSPCAL0_LENGTH                          0x1
#define _OVRSPCAL_OVRSPCAL0_MASK                            0x1
#define _OVRSPCAL_OVRSPCAL1_POSN                            0x1
#define _OVRSPCAL_OVRSPCAL1_POSITION                        0x1
#define _OVRSPCAL_OVRSPCAL1_SIZE                            0x1
#define _OVRSPCAL_OVRSPCAL1_LENGTH                          0x1
#define _OVRSPCAL_OVRSPCAL1_MASK                            0x2
#define _OVRSPCAL_OVRSPCAL2_POSN                            0x2
#define _OVRSPCAL_OVRSPCAL2_POSITION                        0x2
#define _OVRSPCAL_OVRSPCAL2_SIZE                            0x1
#define _OVRSPCAL_OVRSPCAL2_LENGTH                          0x1
#define _OVRSPCAL_OVRSPCAL2_MASK                            0x4
#define _OVRSPCAL_OVRSPCAL3_POSN                            0x3
#define _OVRSPCAL_OVRSPCAL3_POSITION                        0x3
#define _OVRSPCAL_OVRSPCAL3_SIZE                            0x1
#define _OVRSPCAL_OVRSPCAL3_LENGTH                          0x1
#define _OVRSPCAL_OVRSPCAL3_MASK                            0x8
#define _OVRSPCAL_OVRSPCAL4_POSN                            0x4
#define _OVRSPCAL_OVRSPCAL4_POSITION                        0x4
#define _OVRSPCAL_OVRSPCAL4_SIZE                            0x1
#define _OVRSPCAL_OVRSPCAL4_LENGTH                          0x1
#define _OVRSPCAL_OVRSPCAL4_MASK                            0x10

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
// A2GCAL<A2GCAL0>
extern volatile __bit                   A2GCAL0             __at(0xCF0);	// @ (0x19E * 8 + 0)
#define                                 A2GCAL0_bit         _BIT_ACCESS(A2GCAL,0)
// A2GCAL<A2GCAL1>
extern volatile __bit                   A2GCAL1             __at(0xCF1);	// @ (0x19E * 8 + 1)
#define                                 A2GCAL1_bit         _BIT_ACCESS(A2GCAL,1)
// A2GCAL<A2GCAL2>
extern volatile __bit                   A2GCAL2             __at(0xCF2);	// @ (0x19E * 8 + 2)
#define                                 A2GCAL2_bit         _BIT_ACCESS(A2GCAL,2)
// A2GCAL<A2GCAL3>
extern volatile __bit                   A2GCAL3             __at(0xCF3);	// @ (0x19E * 8 + 3)
#define                                 A2GCAL3_bit         _BIT_ACCESS(A2GCAL,3)
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
// PCON<ADC_REFR>
extern volatile __bit                   ADC_REFR            __at(0x4F);	// @ (0x9 * 8 + 7)
#define                                 ADC_REFR_bit        _BIT_ACCESS(PCON,7)
// PIE2<ADIE>
extern volatile __bit                   ADIE                __at(0x446);	// @ (0x88 * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE2,6)
// PIR2<ADIF>
extern volatile __bit                   ADIF                __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR2,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF0);	// @ (0x1E * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// SSPCON3<AHEN>
extern volatile __bit                   AHEN                __at(0x8A1);	// @ (0x114 * 8 + 1)
#define                                 AHEN_bit            _BIT_ACCESS(SSPCON3,1)
// ABECON<ANAOEN>
extern volatile __bit                   ANAOEN              __at(0x848);	// @ (0x109 * 8 + 0)
#define                                 ANAOEN_bit          _BIT_ACCESS(ABECON,0)
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
// AVDDCAL<AVDDCAL0>
extern volatile __bit                   AVDDCAL0            __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 AVDDCAL0_bit        _BIT_ACCESS(AVDDCAL,0)
// AVDDCAL<AVDDCAL1>
extern volatile __bit                   AVDDCAL1            __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 AVDDCAL1_bit        _BIT_ACCESS(AVDDCAL,1)
// AVDDCAL<AVDDCAL2>
extern volatile __bit                   AVDDCAL2            __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 AVDDCAL2_bit        _BIT_ACCESS(AVDDCAL,2)
// AVDDCAL<AVDDCAL3>
extern volatile __bit                   AVDDCAL3            __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 AVDDCAL3_bit        _BIT_ACCESS(AVDDCAL,3)
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
// BGRCAL<BGRT4>
extern volatile __bit                   BGRT4               __at(0xCDC);	// @ (0x19B * 8 + 4)
#define                                 BGRT4_bit           _BIT_ACCESS(BGRCAL,4)
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
// PIE2<CDSIE>
extern volatile __bit                   CDSIE               __at(0x447);	// @ (0x88 * 8 + 7)
#define                                 CDSIE_bit           _BIT_ACCESS(PIE2,7)
// PIR2<CDSIF>
extern volatile __bit                   CDSIF               __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 CDSIF_bit           _BIT_ACCESS(PIR2,7)
// DESATCON<CDSINTN>
extern volatile __bit                   CDSINTN             __at(0x4C0);	// @ (0x98 * 8 + 0)
#define                                 CDSINTN_bit         _BIT_ACCESS(DESATCON,0)
// DESATCON<CDSINTP>
extern volatile __bit                   CDSINTP             __at(0x4C1);	// @ (0x98 * 8 + 1)
#define                                 CDSINTP_bit         _BIT_ACCESS(DESATCON,1)
// DESATCON<CDSMUX>
extern volatile __bit                   CDSMUX              __at(0x4C7);	// @ (0x98 * 8 + 7)
#define                                 CDSMUX_bit          _BIT_ACCESS(DESATCON,7)
// DESATCON<CDSOE>
extern volatile __bit                   CDSOE               __at(0x4C3);	// @ (0x98 * 8 + 3)
#define                                 CDSOE_bit           _BIT_ACCESS(DESATCON,3)
// DESATCON<CDSOUT>
extern volatile __bit                   CDSOUT              __at(0x4C2);	// @ (0x98 * 8 + 2)
#define                                 CDSOUT_bit          _BIT_ACCESS(DESATCON,2)
// DESATCON<CDSPOL>
extern volatile __bit                   CDSPOL              __at(0x4C4);	// @ (0x98 * 8 + 4)
#define                                 CDSPOL_bit          _BIT_ACCESS(DESATCON,4)
// DESATCON<CDSWDE>
extern volatile __bit                   CDSWDE              __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 CDSWDE_bit          _BIT_ACCESS(DESATCON,6)
// CEAOFFCAL<CEAOFFCAL0>
extern volatile __bit                   CEAOFFCAL0          __at(0xCE0);	// @ (0x19C * 8 + 0)
#define                                 CEAOFFCAL0_bit      _BIT_ACCESS(CEAOFFCAL,0)
// CEAOFFCAL<CEAOFFCAL1>
extern volatile __bit                   CEAOFFCAL1          __at(0xCE1);	// @ (0x19C * 8 + 1)
#define                                 CEAOFFCAL1_bit      _BIT_ACCESS(CEAOFFCAL,1)
// CEAOFFCAL<CEAOFFCAL2>
extern volatile __bit                   CEAOFFCAL2          __at(0xCE2);	// @ (0x19C * 8 + 2)
#define                                 CEAOFFCAL2_bit      _BIT_ACCESS(CEAOFFCAL,2)
// CEAOFFCAL<CEAOFFCAL3>
extern volatile __bit                   CEAOFFCAL3          __at(0xCE3);	// @ (0x19C * 8 + 3)
#define                                 CEAOFFCAL3_bit      _BIT_ACCESS(CEAOFFCAL,3)
// CEAOFFCAL<CEAOFFCAL4>
extern volatile __bit                   CEAOFFCAL4          __at(0xCE4);	// @ (0x19C * 8 + 4)
#define                                 CEAOFFCAL4_bit      _BIT_ACCESS(CEAOFFCAL,4)
// CEAOFFCAL<CEAOFFCAL5>
extern volatile __bit                   CEAOFFCAL5          __at(0xCE5);	// @ (0x19C * 8 + 5)
#define                                 CEAOFFCAL5_bit      _BIT_ACCESS(CEAOFFCAL,5)
// CEAOFFCAL<CEAOFFCAL6>
extern volatile __bit                   CEAOFFCAL6          __at(0xCE6);	// @ (0x19C * 8 + 6)
#define                                 CEAOFFCAL6_bit      _BIT_ACCESS(CEAOFFCAL,6)
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
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// DCSCAL<DCSCAL0>
extern volatile __bit                   DCSCAL0             __at(0xCC8);	// @ (0x199 * 8 + 0)
#define                                 DCSCAL0_bit         _BIT_ACCESS(DCSCAL,0)
// DCSCAL<DCSCAL1>
extern volatile __bit                   DCSCAL1             __at(0xCC9);	// @ (0x199 * 8 + 1)
#define                                 DCSCAL1_bit         _BIT_ACCESS(DCSCAL,1)
// DCSCAL<DCSCAL2>
extern volatile __bit                   DCSCAL2             __at(0xCCA);	// @ (0x199 * 8 + 2)
#define                                 DCSCAL2_bit         _BIT_ACCESS(DCSCAL,2)
// DCSCAL<DCSCAL3>
extern volatile __bit                   DCSCAL3             __at(0xCCB);	// @ (0x199 * 8 + 3)
#define                                 DCSCAL3_bit         _BIT_ACCESS(DCSCAL,3)
// DCSCAL<DCSCAL4>
extern volatile __bit                   DCSCAL4             __at(0xCCC);	// @ (0x199 * 8 + 4)
#define                                 DCSCAL4_bit         _BIT_ACCESS(DCSCAL,4)
// DCSCAL<DCSCAL5>
extern volatile __bit                   DCSCAL5             __at(0xCCD);	// @ (0x199 * 8 + 5)
#define                                 DCSCAL5_bit         _BIT_ACCESS(DCSCAL,5)
// DCSCAL<DCSCAL6>
extern volatile __bit                   DCSCAL6             __at(0xCCE);	// @ (0x199 * 8 + 6)
#define                                 DCSCAL6_bit         _BIT_ACCESS(DCSCAL,6)
// ABECON<DESL2>
extern volatile __bit                   DESL2               __at(0x84E);	// @ (0x109 * 8 + 6)
#define                                 DESL2_bit           _BIT_ACCESS(ABECON,6)
// SSPCON3<DHEN>
extern volatile __bit                   DHEN                __at(0x8A0);	// @ (0x114 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSPCON3,0)
// ABECON<DIGOEN>
extern volatile __bit                   DIGOEN              __at(0x84F);	// @ (0x109 * 8 + 7)
#define                                 DIGOEN_bit          _BIT_ACCESS(ABECON,7)
// ATSTCON<DRUVBY>
extern volatile __bit                   DRUVBY              __at(0x861);	// @ (0x10C * 8 + 1)
#define                                 DRUVBY_bit          _BIT_ACCESS(ATSTCON,1)
// PIE2<DRUVIE>
extern volatile __bit                   DRUVIE              __at(0x442);	// @ (0x88 * 8 + 2)
#define                                 DRUVIE_bit          _BIT_ACCESS(PIE2,2)
// PIR2<DRUVIF>
extern volatile __bit                   DRUVIF              __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 DRUVIF_bit          _BIT_ACCESS(PIR2,2)
// ABECON<DRUVSEL>
extern volatile __bit                   DRUVSEL             __at(0x84B);	// @ (0x109 * 8 + 3)
#define                                 DRUVSEL_bit         _BIT_ACCESS(ABECON,3)
// ABECON<DSEL0>
extern volatile __bit                   DSEL0               __at(0x84C);	// @ (0x109 * 8 + 4)
#define                                 DSEL0_bit           _BIT_ACCESS(ABECON,4)
// ABECON<DSEL1>
extern volatile __bit                   DSEL1               __at(0x84D);	// @ (0x109 * 8 + 5)
#define                                 DSEL1_bit           _BIT_ACCESS(ABECON,5)
// DSTCAL<DSTCAL0>
extern volatile __bit                   DSTCAL0             __at(0xCB0);	// @ (0x196 * 8 + 0)
#define                                 DSTCAL0_bit         _BIT_ACCESS(DSTCAL,0)
// DSTCAL<DSTCAL1>
extern volatile __bit                   DSTCAL1             __at(0xCB1);	// @ (0x196 * 8 + 1)
#define                                 DSTCAL1_bit         _BIT_ACCESS(DSTCAL,1)
// DSTCAL<DSTCAL2>
extern volatile __bit                   DSTCAL2             __at(0xCB2);	// @ (0x196 * 8 + 2)
#define                                 DSTCAL2_bit         _BIT_ACCESS(DSTCAL,2)
// DSTCAL<DSTCAL3>
extern volatile __bit                   DSTCAL3             __at(0xCB3);	// @ (0x196 * 8 + 3)
#define                                 DSTCAL3_bit         _BIT_ACCESS(DSTCAL,3)
// DSTCAL<DSTCAL4>
extern volatile __bit                   DSTCAL4             __at(0xCB4);	// @ (0x196 * 8 + 4)
#define                                 DSTCAL4_bit         _BIT_ACCESS(DSTCAL,4)
// SSPSTAT<D_nA>
extern volatile __bit                   D_nA                __at(0x8B5);	// @ (0x116 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSPSTAT,5)
// ABECON<EA1DIS>
extern volatile __bit                   EA1DIS              __at(0x849);	// @ (0x109 * 8 + 1)
#define                                 EA1DIS_bit          _BIT_ACCESS(ABECON,1)
// ABECON<EA2DIS>
extern volatile __bit                   EA2DIS              __at(0x84A);	// @ (0x109 * 8 + 2)
#define                                 EA2DIS_bit          _BIT_ACCESS(ABECON,2)
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
// PORTGPA<GPIO5>
extern volatile __bit                   GPIO5               __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 GPIO5_bit           _BIT_ACCESS(PORTGPA,5)
// PORTGPA<GPIO6>
extern volatile __bit                   GPIO6               __at(0x2E);	// @ (0x5 * 8 + 6)
#define                                 GPIO6_bit           _BIT_ACCESS(PORTGPA,6)
// PORTGPA<GPIO7>
extern volatile __bit                   GPIO7               __at(0x2F);	// @ (0x5 * 8 + 7)
#define                                 GPIO7_bit           _BIT_ACCESS(PORTGPA,7)
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
// INTCON<IOCE>
extern volatile __bit                   IOCE                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 IOCE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<IOCF>
extern volatile __bit                   IOCF                __at(0x58);	// @ (0xB * 8 + 0)
#define                                 IOCF_bit            _BIT_ACCESS(INTCON,0)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// ATSTCON<ISNISPGND>
extern volatile __bit                   ISNISPGND           __at(0x862);	// @ (0x10C * 8 + 2)
#define                                 ISNISPGND_bit       _BIT_ACCESS(ATSTCON,2)
// PE1<ISPUEN>
extern volatile __bit                   ISPUEN              __at(0x83A);	// @ (0x107 * 8 + 2)
#define                                 ISPUEN_bit          _BIT_ACCESS(PE1,2)
// MODECON<MSC0>
extern volatile __bit                   MSC0                __at(0x846);	// @ (0x108 * 8 + 6)
#define                                 MSC0_bit            _BIT_ACCESS(MODECON,6)
// MODECON<MSC1>
extern volatile __bit                   MSC1                __at(0x847);	// @ (0x108 * 8 + 7)
#define                                 MSC1_bit            _BIT_ACCESS(MODECON,7)
// MODECON<MSC2>
extern volatile __bit                   MSC2                __at(0x843);	// @ (0x108 * 8 + 3)
#define                                 MSC2_bit            _BIT_ACCESS(MODECON,3)
// OVREFCON<OOV0>
extern volatile __bit                   OOV0                __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 OOV0_bit            _BIT_ACCESS(OVREFCON,0)
// OVREFCON<OOV1>
extern volatile __bit                   OOV1                __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 OOV1_bit            _BIT_ACCESS(OVREFCON,1)
// OVREFCON<OOV2>
extern volatile __bit                   OOV2                __at(0x4D2);	// @ (0x9A * 8 + 2)
#define                                 OOV2_bit            _BIT_ACCESS(OVREFCON,2)
// OVREFCON<OOV3>
extern volatile __bit                   OOV3                __at(0x4D3);	// @ (0x9A * 8 + 3)
#define                                 OOV3_bit            _BIT_ACCESS(OVREFCON,3)
// OVREFCON<OOV4>
extern volatile __bit                   OOV4                __at(0x4D4);	// @ (0x9A * 8 + 4)
#define                                 OOV4_bit            _BIT_ACCESS(OVREFCON,4)
// OVREFCON<OOV5>
extern volatile __bit                   OOV5                __at(0x4D5);	// @ (0x9A * 8 + 5)
#define                                 OOV5_bit            _BIT_ACCESS(OVREFCON,5)
// OVREFCON<OOV6>
extern volatile __bit                   OOV6                __at(0x4D6);	// @ (0x9A * 8 + 6)
#define                                 OOV6_bit            _BIT_ACCESS(OVREFCON,6)
// OVREFCON<OOV7>
extern volatile __bit                   OOV7                __at(0x4D7);	// @ (0x9A * 8 + 7)
#define                                 OOV7_bit            _BIT_ACCESS(OVREFCON,7)
// PIE2<OTIE>
extern volatile __bit                   OTIE                __at(0x444);	// @ (0x88 * 8 + 4)
#define                                 OTIE_bit            _BIT_ACCESS(PIE2,4)
// PIR2<OTIF>
extern volatile __bit                   OTIF                __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 OTIF_bit            _BIT_ACCESS(PIR2,4)
// OVCON<OVEN>
extern volatile __bit                   OVEN                __at(0x4CB);	// @ (0x99 * 8 + 3)
#define                                 OVEN_bit            _BIT_ACCESS(OVCON,3)
// PIE2<OVIE>
extern volatile __bit                   OVIE                __at(0x443);	// @ (0x88 * 8 + 3)
#define                                 OVIE_bit            _BIT_ACCESS(PIE2,3)
// PIR2<OVIF>
extern volatile __bit                   OVIF                __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 OVIF_bit            _BIT_ACCESS(PIR2,3)
// OVCON<OVINTN>
extern volatile __bit                   OVINTN              __at(0x4C8);	// @ (0x99 * 8 + 0)
#define                                 OVINTN_bit          _BIT_ACCESS(OVCON,0)
// OVCON<OVINTP>
extern volatile __bit                   OVINTP              __at(0x4C9);	// @ (0x99 * 8 + 1)
#define                                 OVINTP_bit          _BIT_ACCESS(OVCON,1)
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
// OVCON<OVOUT>
extern volatile __bit                   OVOUT               __at(0x4CA);	// @ (0x99 * 8 + 2)
#define                                 OVOUT_bit           _BIT_ACCESS(OVCON,2)
// OVRSPCAL<OVRSPCAL0>
extern volatile __bit                   OVRSPCAL0           __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 OVRSPCAL0_bit       _BIT_ACCESS(OVRSPCAL,0)
// OVRSPCAL<OVRSPCAL1>
extern volatile __bit                   OVRSPCAL1           __at(0xCF9);	// @ (0x19F * 8 + 1)
#define                                 OVRSPCAL1_bit       _BIT_ACCESS(OVRSPCAL,1)
// OVRSPCAL<OVRSPCAL2>
extern volatile __bit                   OVRSPCAL2           __at(0xCFA);	// @ (0x19F * 8 + 2)
#define                                 OVRSPCAL2_bit       _BIT_ACCESS(OVRSPCAL,2)
// OVRSPCAL<OVRSPCAL3>
extern volatile __bit                   OVRSPCAL3           __at(0xCFB);	// @ (0x19F * 8 + 3)
#define                                 OVRSPCAL3_bit       _BIT_ACCESS(OVRSPCAL,3)
// OVRSPCAL<OVRSPCAL4>
extern volatile __bit                   OVRSPCAL4           __at(0xCFC);	// @ (0x19F * 8 + 4)
#define                                 OVRSPCAL4_bit       _BIT_ACCESS(OVRSPCAL,4)
// SSPCON3<PCIE>
extern volatile __bit                   PCIE                __at(0x8A6);	// @ (0x114 * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSPCON3,6)
// PE1<PDRVBY>
extern volatile __bit                   PDRVBY              __at(0x83D);	// @ (0x107 * 8 + 5)
#define                                 PDRVBY_bit          _BIT_ACCESS(PE1,5)
// PE1<PDRVEN>
extern volatile __bit                   PDRVEN              __at(0x83F);	// @ (0x107 * 8 + 7)
#define                                 PDRVEN_bit          _BIT_ACCESS(PE1,7)
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
// PE1<PWMSTR_PEN>
extern volatile __bit                   PWMSTR_PEN          __at(0x839);	// @ (0x107 * 8 + 1)
#define                                 PWMSTR_PEN_bit      _BIT_ACCESS(PE1,1)
// PE1<PWMSTR_SEN>
extern volatile __bit                   PWMSTR_SEN          __at(0x838);	// @ (0x107 * 8 + 0)
#define                                 PWMSTR_SEN_bit      _BIT_ACCESS(PE1,0)
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
// SSPCON2<RCEN>
extern volatile __bit                   RCEN                __at(0x89B);	// @ (0x113 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSPCON2,3)
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
// PE1<SDRVBY>
extern volatile __bit                   SDRVBY              __at(0x83C);	// @ (0x107 * 8 + 4)
#define                                 SDRVBY_bit          _BIT_ACCESS(PE1,4)
// PE1<SDRVEN>
extern volatile __bit                   SDRVEN              __at(0x83E);	// @ (0x107 * 8 + 6)
#define                                 SDRVEN_bit          _BIT_ACCESS(PE1,6)
// SSPCON2<SEN>
extern volatile __bit                   SEN                 __at(0x898);	// @ (0x113 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSPCON2,0)
// SLPCRCON<SLPBY>
extern volatile __bit                   SLPBY               __at(0x4E6);	// @ (0x9C * 8 + 6)
#define                                 SLPBY_bit           _BIT_ACCESS(SLPCRCON,6)
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
// ATSTCON<SWFRQOR>
extern volatile __bit                   SWFRQOR             __at(0x864);	// @ (0x10C * 8 + 4)
#define                                 SWFRQOR_bit         _BIT_ACCESS(ATSTCON,4)
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
// ATSTCON<TMPTBY>
extern volatile __bit                   TMPTBY              __at(0x860);	// @ (0x10C * 8 + 0)
#define                                 TMPTBY_bit          _BIT_ACCESS(ATSTCON,0)
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
// ADCON1<VCFG>
extern volatile __bit                   VCFG                __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 VCFG_bit            _BIT_ACCESS(ADCON1,0)
// PCON<VDDOK>
extern volatile __bit                   VDDOK               __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 VDDOK_bit           _BIT_ACCESS(PCON,2)
// VEAOFFCAL<VEAOFFCAL0>
extern volatile __bit                   VEAOFFCAL0          __at(0x868);	// @ (0x10D * 8 + 0)
#define                                 VEAOFFCAL0_bit      _BIT_ACCESS(VEAOFFCAL,0)
// VEAOFFCAL<VEAOFFCAL1>
extern volatile __bit                   VEAOFFCAL1          __at(0x869);	// @ (0x10D * 8 + 1)
#define                                 VEAOFFCAL1_bit      _BIT_ACCESS(VEAOFFCAL,1)
// VEAOFFCAL<VEAOFFCAL2>
extern volatile __bit                   VEAOFFCAL2          __at(0x86A);	// @ (0x10D * 8 + 2)
#define                                 VEAOFFCAL2_bit      _BIT_ACCESS(VEAOFFCAL,2)
// VEAOFFCAL<VEAOFFCAL3>
extern volatile __bit                   VEAOFFCAL3          __at(0x86B);	// @ (0x10D * 8 + 3)
#define                                 VEAOFFCAL3_bit      _BIT_ACCESS(VEAOFFCAL,3)
// VEAOFFCAL<VEAOFFCAL4>
extern volatile __bit                   VEAOFFCAL4          __at(0x86C);	// @ (0x10D * 8 + 4)
#define                                 VEAOFFCAL4_bit      _BIT_ACCESS(VEAOFFCAL,4)
// VEAOFFCAL<VEAOFFCAL5>
extern volatile __bit                   VEAOFFCAL5          __at(0x86D);	// @ (0x10D * 8 + 5)
#define                                 VEAOFFCAL5_bit      _BIT_ACCESS(VEAOFFCAL,5)
// VEAOFFCAL<VEAOFFCAL6>
extern volatile __bit                   VEAOFFCAL6          __at(0x86E);	// @ (0x10D * 8 + 6)
#define                                 VEAOFFCAL6_bit      _BIT_ACCESS(VEAOFFCAL,6)
// VR2SPCAL<VR2SPCAL0>
extern volatile __bit                   VR2SPCAL0           __at(0x8D0);	// @ (0x11A * 8 + 0)
#define                                 VR2SPCAL0_bit       _BIT_ACCESS(VR2SPCAL,0)
// VR2SPCAL<VR2SPCAL1>
extern volatile __bit                   VR2SPCAL1           __at(0x8D1);	// @ (0x11A * 8 + 1)
#define                                 VR2SPCAL1_bit       _BIT_ACCESS(VR2SPCAL,1)
// VR2SPCAL<VR2SPCAL2>
extern volatile __bit                   VR2SPCAL2           __at(0x8D2);	// @ (0x11A * 8 + 2)
#define                                 VR2SPCAL2_bit       _BIT_ACCESS(VR2SPCAL,2)
// VR2SPCAL<VR2SPCAL3>
extern volatile __bit                   VR2SPCAL3           __at(0x8D3);	// @ (0x11A * 8 + 3)
#define                                 VR2SPCAL3_bit       _BIT_ACCESS(VR2SPCAL,3)
// VR2SPCAL<VR2SPCAL4>
extern volatile __bit                   VR2SPCAL4           __at(0x8D4);	// @ (0x11A * 8 + 4)
#define                                 VR2SPCAL4_bit       _BIT_ACCESS(VR2SPCAL,4)
// VREFCON<VREF0>
extern volatile __bit                   VREF0               __at(0xC8);	// @ (0x19 * 8 + 0)
#define                                 VREF0_bit           _BIT_ACCESS(VREFCON,0)
// VREFCON<VREF1>
extern volatile __bit                   VREF1               __at(0xC9);	// @ (0x19 * 8 + 1)
#define                                 VREF1_bit           _BIT_ACCESS(VREFCON,1)
// VREFCON<VREF2>
extern volatile __bit                   VREF2               __at(0xCA);	// @ (0x19 * 8 + 2)
#define                                 VREF2_bit           _BIT_ACCESS(VREFCON,2)
// VREF2CON<VREF20>
extern volatile __bit                   VREF20              __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 VREF20_bit          _BIT_ACCESS(VREF2CON,0)
// VREF2CON<VREF21>
extern volatile __bit                   VREF21              __at(0xD1);	// @ (0x1A * 8 + 1)
#define                                 VREF21_bit          _BIT_ACCESS(VREF2CON,1)
// VREF2CON<VREF22>
extern volatile __bit                   VREF22              __at(0xD2);	// @ (0x1A * 8 + 2)
#define                                 VREF22_bit          _BIT_ACCESS(VREF2CON,2)
// VREF2CON<VREF23>
extern volatile __bit                   VREF23              __at(0xD3);	// @ (0x1A * 8 + 3)
#define                                 VREF23_bit          _BIT_ACCESS(VREF2CON,3)
// VREF2CON<VREF24>
extern volatile __bit                   VREF24              __at(0xD4);	// @ (0x1A * 8 + 4)
#define                                 VREF24_bit          _BIT_ACCESS(VREF2CON,4)
// VREF2CON<VREF25>
extern volatile __bit                   VREF25              __at(0xD5);	// @ (0x1A * 8 + 5)
#define                                 VREF25_bit          _BIT_ACCESS(VREF2CON,5)
// VREF2CON<VREF26>
extern volatile __bit                   VREF26              __at(0xD6);	// @ (0x1A * 8 + 6)
#define                                 VREF26_bit          _BIT_ACCESS(VREF2CON,6)
// VREF2CON<VREF27>
extern volatile __bit                   VREF27              __at(0xD7);	// @ (0x1A * 8 + 7)
#define                                 VREF27_bit          _BIT_ACCESS(VREF2CON,7)
// VREFCON<VREF3>
extern volatile __bit                   VREF3               __at(0xCB);	// @ (0x19 * 8 + 3)
#define                                 VREF3_bit           _BIT_ACCESS(VREFCON,3)
// VREFCON<VREF4>
extern volatile __bit                   VREF4               __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 VREF4_bit           _BIT_ACCESS(VREFCON,4)
// VREFCON<VREF5>
extern volatile __bit                   VREF5               __at(0xCD);	// @ (0x19 * 8 + 5)
#define                                 VREF5_bit           _BIT_ACCESS(VREFCON,5)
// VREFCON<VREF6>
extern volatile __bit                   VREF6               __at(0xCE);	// @ (0x19 * 8 + 6)
#define                                 VREF6_bit           _BIT_ACCESS(VREFCON,6)
// VREFCON<VREF7>
extern volatile __bit                   VREF7               __at(0xCF);	// @ (0x19 * 8 + 7)
#define                                 VREF7_bit           _BIT_ACCESS(VREFCON,7)
// VRSPCAL<VRSPCAL0>
extern volatile __bit                   VRSPCAL0            __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 VRSPCAL0_bit        _BIT_ACCESS(VRSPCAL,0)
// VRSPCAL<VRSPCAL1>
extern volatile __bit                   VRSPCAL1            __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 VRSPCAL1_bit        _BIT_ACCESS(VRSPCAL,1)
// VRSPCAL<VRSPCAL2>
extern volatile __bit                   VRSPCAL2            __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 VRSPCAL2_bit        _BIT_ACCESS(VRSPCAL,2)
// VRSPCAL<VRSPCAL3>
extern volatile __bit                   VRSPCAL3            __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 VRSPCAL3_bit        _BIT_ACCESS(VRSPCAL,3)
// VRSPCAL<VRSPCAL4>
extern volatile __bit                   VRSPCAL4            __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 VRSPCAL4_bit        _BIT_ACCESS(VRSPCAL,4)
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
// OPTION_REG<nRAPU>
extern volatile __bit                   nRAPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRAPU_bit           _BIT_ACCESS(OPTION_REG,7)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// PCON<nVDD_FLAG>
extern volatile __bit                   nVDD_FLAG           __at(0x4B);	// @ (0x9 * 8 + 3)
#define                                 nVDD_FLAG_bit       _BIT_ACCESS(PCON,3)

#endif // _MCP19124_H_
