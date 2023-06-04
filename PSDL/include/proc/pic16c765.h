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

#ifndef _PIC16C765_H_
#define _PIC16C765_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16C765
 */
#ifndef _XC_H_
#warning Header file pic16c765.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * USB Dual-port RAM
 */
extern volatile unsigned char           USBMEM[64]          __at(0x1A0);

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

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0x005);
#ifndef _LIB_BUILD
asm("PORTA equ 05h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __at(0x005);
// bitfield macros
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
        unsigned RB6                    :1;
        unsigned RB7                    :1;
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
extern volatile unsigned char           PORTC               __at(0x007);
#ifndef _LIB_BUILD
asm("PORTC equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned                        :3;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __at(0x007);
// bitfield macros
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

// Register: PORTD
#define PORTD PORTD
extern volatile unsigned char           PORTD               __at(0x008);
#ifndef _LIB_BUILD
asm("PORTD equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
        unsigned RD3                    :1;
        unsigned RD4                    :1;
        unsigned RD5                    :1;
        unsigned RD6                    :1;
        unsigned RD7                    :1;
    };
} PORTDbits_t;
extern volatile PORTDbits_t PORTDbits __at(0x008);
// bitfield macros
#define _PORTD_RD0_POSN                                     0x0
#define _PORTD_RD0_POSITION                                 0x0
#define _PORTD_RD0_SIZE                                     0x1
#define _PORTD_RD0_LENGTH                                   0x1
#define _PORTD_RD0_MASK                                     0x1
#define _PORTD_RD1_POSN                                     0x1
#define _PORTD_RD1_POSITION                                 0x1
#define _PORTD_RD1_SIZE                                     0x1
#define _PORTD_RD1_LENGTH                                   0x1
#define _PORTD_RD1_MASK                                     0x2
#define _PORTD_RD2_POSN                                     0x2
#define _PORTD_RD2_POSITION                                 0x2
#define _PORTD_RD2_SIZE                                     0x1
#define _PORTD_RD2_LENGTH                                   0x1
#define _PORTD_RD2_MASK                                     0x4
#define _PORTD_RD3_POSN                                     0x3
#define _PORTD_RD3_POSITION                                 0x3
#define _PORTD_RD3_SIZE                                     0x1
#define _PORTD_RD3_LENGTH                                   0x1
#define _PORTD_RD3_MASK                                     0x8
#define _PORTD_RD4_POSN                                     0x4
#define _PORTD_RD4_POSITION                                 0x4
#define _PORTD_RD4_SIZE                                     0x1
#define _PORTD_RD4_LENGTH                                   0x1
#define _PORTD_RD4_MASK                                     0x10
#define _PORTD_RD5_POSN                                     0x5
#define _PORTD_RD5_POSITION                                 0x5
#define _PORTD_RD5_SIZE                                     0x1
#define _PORTD_RD5_LENGTH                                   0x1
#define _PORTD_RD5_MASK                                     0x20
#define _PORTD_RD6_POSN                                     0x6
#define _PORTD_RD6_POSITION                                 0x6
#define _PORTD_RD6_SIZE                                     0x1
#define _PORTD_RD6_LENGTH                                   0x1
#define _PORTD_RD6_MASK                                     0x40
#define _PORTD_RD7_POSN                                     0x7
#define _PORTD_RD7_POSITION                                 0x7
#define _PORTD_RD7_SIZE                                     0x1
#define _PORTD_RD7_LENGTH                                   0x1
#define _PORTD_RD7_MASK                                     0x80

// Register: PORTE
#define PORTE PORTE
extern volatile unsigned char           PORTE               __at(0x009);
#ifndef _LIB_BUILD
asm("PORTE equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __at(0x009);
// bitfield macros
#define _PORTE_RE0_POSN                                     0x0
#define _PORTE_RE0_POSITION                                 0x0
#define _PORTE_RE0_SIZE                                     0x1
#define _PORTE_RE0_LENGTH                                   0x1
#define _PORTE_RE0_MASK                                     0x1
#define _PORTE_RE1_POSN                                     0x1
#define _PORTE_RE1_POSITION                                 0x1
#define _PORTE_RE1_SIZE                                     0x1
#define _PORTE_RE1_LENGTH                                   0x1
#define _PORTE_RE1_MASK                                     0x2
#define _PORTE_RE2_POSN                                     0x2
#define _PORTE_RE2_POSITION                                 0x2
#define _PORTE_RE2_SIZE                                     0x1
#define _PORTE_RE2_LENGTH                                   0x1
#define _PORTE_RE2_MASK                                     0x4

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
        unsigned RBIF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned RBIE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned TMR0IF                 :1;
        unsigned                        :2;
        unsigned TMR0IE                 :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
// bitfield macros
#define _INTCON_RBIF_POSN                                   0x0
#define _INTCON_RBIF_POSITION                               0x0
#define _INTCON_RBIF_SIZE                                   0x1
#define _INTCON_RBIF_LENGTH                                 0x1
#define _INTCON_RBIF_MASK                                   0x1
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
#define _INTCON_RBIE_POSN                                   0x3
#define _INTCON_RBIE_POSITION                               0x3
#define _INTCON_RBIE_SIZE                                   0x1
#define _INTCON_RBIE_LENGTH                                 0x1
#define _INTCON_RBIE_MASK                                   0x8
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
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0x00C);
#ifndef _LIB_BUILD
asm("PIR1 equ 0Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
        unsigned USBIF                  :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
        unsigned PSPIF                  :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x00C);
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
#define _PIR1_CCP1IF_POSN                                   0x2
#define _PIR1_CCP1IF_POSITION                               0x2
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x4
#define _PIR1_USBIF_POSN                                    0x3
#define _PIR1_USBIF_POSITION                                0x3
#define _PIR1_USBIF_SIZE                                    0x1
#define _PIR1_USBIF_LENGTH                                  0x1
#define _PIR1_USBIF_MASK                                    0x8
#define _PIR1_TXIF_POSN                                     0x4
#define _PIR1_TXIF_POSITION                                 0x4
#define _PIR1_TXIF_SIZE                                     0x1
#define _PIR1_TXIF_LENGTH                                   0x1
#define _PIR1_TXIF_MASK                                     0x10
#define _PIR1_RCIF_POSN                                     0x5
#define _PIR1_RCIF_POSITION                                 0x5
#define _PIR1_RCIF_SIZE                                     0x1
#define _PIR1_RCIF_LENGTH                                   0x1
#define _PIR1_RCIF_MASK                                     0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_PSPIF_POSN                                    0x7
#define _PIR1_PSPIF_POSITION                                0x7
#define _PIR1_PSPIF_SIZE                                    0x1
#define _PIR1_PSPIF_LENGTH                                  0x1
#define _PIR1_PSPIF_MASK                                    0x80

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x00D);
#ifndef _LIB_BUILD
asm("PIR2 equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IF                 :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x00D);
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0x00E);
#ifndef _LIB_BUILD
asm("TMR1 equ 0Eh");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0x00E);
#ifndef _LIB_BUILD
asm("TMR1L equ 0Eh");
#endif

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x00F);
#ifndef _LIB_BUILD
asm("TMR1H equ 0Fh");
#endif

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0x010);
#ifndef _LIB_BUILD
asm("T1CON equ 010h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
    };
    struct {
        unsigned                        :2;
        unsigned T1INSYNC               :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0x010);
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
#define _T1CON_nT1SYNC_POSN                                 0x2
#define _T1CON_nT1SYNC_POSITION                             0x2
#define _T1CON_nT1SYNC_SIZE                                 0x1
#define _T1CON_nT1SYNC_LENGTH                               0x1
#define _T1CON_nT1SYNC_MASK                                 0x4
#define _T1CON_T1OSCEN_POSN                                 0x3
#define _T1CON_T1OSCEN_POSITION                             0x3
#define _T1CON_T1OSCEN_SIZE                                 0x1
#define _T1CON_T1OSCEN_LENGTH                               0x1
#define _T1CON_T1OSCEN_MASK                                 0x8
#define _T1CON_T1CKPS_POSN                                  0x4
#define _T1CON_T1CKPS_POSITION                              0x4
#define _T1CON_T1CKPS_SIZE                                  0x2
#define _T1CON_T1CKPS_LENGTH                                0x2
#define _T1CON_T1CKPS_MASK                                  0x30
#define _T1CON_T1INSYNC_POSN                                0x2
#define _T1CON_T1INSYNC_POSITION                            0x2
#define _T1CON_T1INSYNC_SIZE                                0x1
#define _T1CON_T1INSYNC_LENGTH                              0x1
#define _T1CON_T1INSYNC_MASK                                0x4
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
extern volatile unsigned char           TMR2                __at(0x011);
#ifndef _LIB_BUILD
asm("TMR2 equ 011h");
#endif

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x012);
#ifndef _LIB_BUILD
asm("T2CON equ 012h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
        unsigned TOUTPS                 :4;
    };
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned TOUTPS0                :1;
        unsigned TOUTPS1                :1;
        unsigned TOUTPS2                :1;
        unsigned TOUTPS3                :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x012);
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
#define _T2CON_TOUTPS_POSN                                  0x3
#define _T2CON_TOUTPS_POSITION                              0x3
#define _T2CON_TOUTPS_SIZE                                  0x4
#define _T2CON_TOUTPS_LENGTH                                0x4
#define _T2CON_TOUTPS_MASK                                  0x78
#define _T2CON_T2CKPS0_POSN                                 0x0
#define _T2CON_T2CKPS0_POSITION                             0x0
#define _T2CON_T2CKPS0_SIZE                                 0x1
#define _T2CON_T2CKPS0_LENGTH                               0x1
#define _T2CON_T2CKPS0_MASK                                 0x1
#define _T2CON_T2CKPS1_POSN                                 0x1
#define _T2CON_T2CKPS1_POSITION                             0x1
#define _T2CON_T2CKPS1_SIZE                                 0x1
#define _T2CON_T2CKPS1_LENGTH                               0x1
#define _T2CON_T2CKPS1_MASK                                 0x2
#define _T2CON_TOUTPS0_POSN                                 0x3
#define _T2CON_TOUTPS0_POSITION                             0x3
#define _T2CON_TOUTPS0_SIZE                                 0x1
#define _T2CON_TOUTPS0_LENGTH                               0x1
#define _T2CON_TOUTPS0_MASK                                 0x8
#define _T2CON_TOUTPS1_POSN                                 0x4
#define _T2CON_TOUTPS1_POSITION                             0x4
#define _T2CON_TOUTPS1_SIZE                                 0x1
#define _T2CON_TOUTPS1_LENGTH                               0x1
#define _T2CON_TOUTPS1_MASK                                 0x10
#define _T2CON_TOUTPS2_POSN                                 0x5
#define _T2CON_TOUTPS2_POSITION                             0x5
#define _T2CON_TOUTPS2_SIZE                                 0x1
#define _T2CON_TOUTPS2_LENGTH                               0x1
#define _T2CON_TOUTPS2_MASK                                 0x20
#define _T2CON_TOUTPS3_POSN                                 0x6
#define _T2CON_TOUTPS3_POSITION                             0x6
#define _T2CON_TOUTPS3_SIZE                                 0x1
#define _T2CON_TOUTPS3_LENGTH                               0x1
#define _T2CON_TOUTPS3_MASK                                 0x40

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0x015);
#ifndef _LIB_BUILD
asm("CCPR1 equ 015h");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0x015);
#ifndef _LIB_BUILD
asm("CCPR1L equ 015h");
#endif

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0x016);
#ifndef _LIB_BUILD
asm("CCPR1H equ 016h");
#endif

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0x017);
#ifndef _LIB_BUILD
asm("CCP1CON equ 017h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x017);
// bitfield macros
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
#define _CCP1CON_DC1B_POSN                                  0x4
#define _CCP1CON_DC1B_POSITION                              0x4
#define _CCP1CON_DC1B_SIZE                                  0x2
#define _CCP1CON_DC1B_LENGTH                                0x2
#define _CCP1CON_DC1B_MASK                                  0x30
#define _CCP1CON_CCP1M0_POSN                                0x0
#define _CCP1CON_CCP1M0_POSITION                            0x0
#define _CCP1CON_CCP1M0_SIZE                                0x1
#define _CCP1CON_CCP1M0_LENGTH                              0x1
#define _CCP1CON_CCP1M0_MASK                                0x1
#define _CCP1CON_CCP1M1_POSN                                0x1
#define _CCP1CON_CCP1M1_POSITION                            0x1
#define _CCP1CON_CCP1M1_SIZE                                0x1
#define _CCP1CON_CCP1M1_LENGTH                              0x1
#define _CCP1CON_CCP1M1_MASK                                0x2
#define _CCP1CON_CCP1M2_POSN                                0x2
#define _CCP1CON_CCP1M2_POSITION                            0x2
#define _CCP1CON_CCP1M2_SIZE                                0x1
#define _CCP1CON_CCP1M2_LENGTH                              0x1
#define _CCP1CON_CCP1M2_MASK                                0x4
#define _CCP1CON_CCP1M3_POSN                                0x3
#define _CCP1CON_CCP1M3_POSITION                            0x3
#define _CCP1CON_CCP1M3_SIZE                                0x1
#define _CCP1CON_CCP1M3_LENGTH                              0x1
#define _CCP1CON_CCP1M3_MASK                                0x8
#define _CCP1CON_DC1B0_POSN                                 0x4
#define _CCP1CON_DC1B0_POSITION                             0x4
#define _CCP1CON_DC1B0_SIZE                                 0x1
#define _CCP1CON_DC1B0_LENGTH                               0x1
#define _CCP1CON_DC1B0_MASK                                 0x10
#define _CCP1CON_DC1B1_POSN                                 0x5
#define _CCP1CON_DC1B1_POSITION                             0x5
#define _CCP1CON_DC1B1_SIZE                                 0x1
#define _CCP1CON_DC1B1_LENGTH                               0x1
#define _CCP1CON_DC1B1_MASK                                 0x20

// Register: RCSTA
#define RCSTA RCSTA
extern volatile unsigned char           RCSTA               __at(0x018);
#ifndef _LIB_BUILD
asm("RCSTA equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned                        :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned RCD8                   :1;
        unsigned                        :5;
        unsigned RC9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned nRC8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits __at(0x018);
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
#define _RCSTA_RCD8_POSN                                    0x0
#define _RCSTA_RCD8_POSITION                                0x0
#define _RCSTA_RCD8_SIZE                                    0x1
#define _RCSTA_RCD8_LENGTH                                  0x1
#define _RCSTA_RCD8_MASK                                    0x1
#define _RCSTA_RC9_POSN                                     0x6
#define _RCSTA_RC9_POSITION                                 0x6
#define _RCSTA_RC9_SIZE                                     0x1
#define _RCSTA_RC9_LENGTH                                   0x1
#define _RCSTA_RC9_MASK                                     0x40
#define _RCSTA_nRC8_POSN                                    0x6
#define _RCSTA_nRC8_POSITION                                0x6
#define _RCSTA_nRC8_SIZE                                    0x1
#define _RCSTA_nRC8_LENGTH                                  0x1
#define _RCSTA_nRC8_MASK                                    0x40
#define _RCSTA_RC8_9_POSN                                   0x6
#define _RCSTA_RC8_9_POSITION                               0x6
#define _RCSTA_RC8_9_SIZE                                   0x1
#define _RCSTA_RC8_9_LENGTH                                 0x1
#define _RCSTA_RC8_9_MASK                                   0x40

// Register: TXREG
#define TXREG TXREG
extern volatile unsigned char           TXREG               __at(0x019);
#ifndef _LIB_BUILD
asm("TXREG equ 019h");
#endif

// Register: RCREG
#define RCREG RCREG
extern volatile unsigned char           RCREG               __at(0x01A);
#ifndef _LIB_BUILD
asm("RCREG equ 01Ah");
#endif

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0x01B);
#ifndef _LIB_BUILD
asm("CCPR2 equ 01Bh");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0x01B);
#ifndef _LIB_BUILD
asm("CCPR2L equ 01Bh");
#endif

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0x01C);
#ifndef _LIB_BUILD
asm("CCPR2H equ 01Ch");
#endif

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0x01D);
#ifndef _LIB_BUILD
asm("CCP2CON equ 01Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B                   :2;
    };
    struct {
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0x01D);
// bitfield macros
#define _CCP2CON_CCP2M_POSN                                 0x0
#define _CCP2CON_CCP2M_POSITION                             0x0
#define _CCP2CON_CCP2M_SIZE                                 0x4
#define _CCP2CON_CCP2M_LENGTH                               0x4
#define _CCP2CON_CCP2M_MASK                                 0xF
#define _CCP2CON_DC2B_POSN                                  0x4
#define _CCP2CON_DC2B_POSITION                              0x4
#define _CCP2CON_DC2B_SIZE                                  0x2
#define _CCP2CON_DC2B_LENGTH                                0x2
#define _CCP2CON_DC2B_MASK                                  0x30
#define _CCP2CON_CCP2M0_POSN                                0x0
#define _CCP2CON_CCP2M0_POSITION                            0x0
#define _CCP2CON_CCP2M0_SIZE                                0x1
#define _CCP2CON_CCP2M0_LENGTH                              0x1
#define _CCP2CON_CCP2M0_MASK                                0x1
#define _CCP2CON_CCP2M1_POSN                                0x1
#define _CCP2CON_CCP2M1_POSITION                            0x1
#define _CCP2CON_CCP2M1_SIZE                                0x1
#define _CCP2CON_CCP2M1_LENGTH                              0x1
#define _CCP2CON_CCP2M1_MASK                                0x2
#define _CCP2CON_CCP2M2_POSN                                0x2
#define _CCP2CON_CCP2M2_POSITION                            0x2
#define _CCP2CON_CCP2M2_SIZE                                0x1
#define _CCP2CON_CCP2M2_LENGTH                              0x1
#define _CCP2CON_CCP2M2_MASK                                0x4
#define _CCP2CON_CCP2M3_POSN                                0x3
#define _CCP2CON_CCP2M3_POSITION                            0x3
#define _CCP2CON_CCP2M3_SIZE                                0x1
#define _CCP2CON_CCP2M3_LENGTH                              0x1
#define _CCP2CON_CCP2M3_MASK                                0x8
#define _CCP2CON_DC2B0_POSN                                 0x4
#define _CCP2CON_DC2B0_POSITION                             0x4
#define _CCP2CON_DC2B0_SIZE                                 0x1
#define _CCP2CON_DC2B0_LENGTH                               0x1
#define _CCP2CON_DC2B0_MASK                                 0x10
#define _CCP2CON_DC2B1_POSN                                 0x5
#define _CCP2CON_DC2B1_POSITION                             0x5
#define _CCP2CON_DC2B1_SIZE                                 0x1
#define _CCP2CON_DC2B1_LENGTH                               0x1
#define _CCP2CON_DC2B1_MASK                                 0x20

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned char           ADRES               __at(0x01E);
#ifndef _LIB_BUILD
asm("ADRES equ 01Eh");
#endif

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x01F);
#ifndef _LIB_BUILD
asm("ADCON0 equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned                        :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :3;
        unsigned ADCS                   :2;
    };
    struct {
        unsigned                        :2;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned GO_DONE                :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x01F);
// bitfield macros
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_GO_nDONE_POSN                               0x2
#define _ADCON0_GO_nDONE_POSITION                           0x2
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x4
#define _ADCON0_CHS_POSN                                    0x3
#define _ADCON0_CHS_POSITION                                0x3
#define _ADCON0_CHS_SIZE                                    0x3
#define _ADCON0_CHS_LENGTH                                  0x3
#define _ADCON0_CHS_MASK                                    0x38
#define _ADCON0_ADCS_POSN                                   0x6
#define _ADCON0_ADCS_POSITION                               0x6
#define _ADCON0_ADCS_SIZE                                   0x2
#define _ADCON0_ADCS_LENGTH                                 0x2
#define _ADCON0_ADCS_MASK                                   0xC0
#define _ADCON0_GO_POSN                                     0x2
#define _ADCON0_GO_POSITION                                 0x2
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x4
#define _ADCON0_CHS0_POSN                                   0x3
#define _ADCON0_CHS0_POSITION                               0x3
#define _ADCON0_CHS0_SIZE                                   0x1
#define _ADCON0_CHS0_LENGTH                                 0x1
#define _ADCON0_CHS0_MASK                                   0x8
#define _ADCON0_CHS1_POSN                                   0x4
#define _ADCON0_CHS1_POSITION                               0x4
#define _ADCON0_CHS1_SIZE                                   0x1
#define _ADCON0_CHS1_LENGTH                                 0x1
#define _ADCON0_CHS1_MASK                                   0x10
#define _ADCON0_CHS2_POSN                                   0x5
#define _ADCON0_CHS2_POSITION                               0x5
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x20
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
#define _ADCON0_nDONE_POSN                                  0x2
#define _ADCON0_nDONE_POSITION                              0x2
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x4
#define _ADCON0_GO_DONE_POSN                                0x2
#define _ADCON0_GO_DONE_POSITION                            0x2
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x4

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
        unsigned nRBPU                  :1;
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
#define _OPTION_REG_nRBPU_POSN                              0x7
#define _OPTION_REG_nRBPU_POSITION                          0x7
#define _OPTION_REG_nRBPU_SIZE                              0x1
#define _OPTION_REG_nRBPU_LENGTH                            0x1
#define _OPTION_REG_nRBPU_MASK                              0x80
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

// Register: TRISA
#define TRISA TRISA
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

// Register: TRISB
#define TRISB TRISB
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

// Register: TRISC
#define TRISC TRISC
extern volatile unsigned char           TRISC               __at(0x087);
#ifndef _LIB_BUILD
asm("TRISC equ 087h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned                        :3;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __at(0x087);
// bitfield macros
#define _TRISC_TRISC0_POSN                                  0x0
#define _TRISC_TRISC0_POSITION                              0x0
#define _TRISC_TRISC0_SIZE                                  0x1
#define _TRISC_TRISC0_LENGTH                                0x1
#define _TRISC_TRISC0_MASK                                  0x1
#define _TRISC_TRISC1_POSN                                  0x1
#define _TRISC_TRISC1_POSITION                              0x1
#define _TRISC_TRISC1_SIZE                                  0x1
#define _TRISC_TRISC1_LENGTH                                0x1
#define _TRISC_TRISC1_MASK                                  0x2
#define _TRISC_TRISC2_POSN                                  0x2
#define _TRISC_TRISC2_POSITION                              0x2
#define _TRISC_TRISC2_SIZE                                  0x1
#define _TRISC_TRISC2_LENGTH                                0x1
#define _TRISC_TRISC2_MASK                                  0x4
#define _TRISC_TRISC6_POSN                                  0x6
#define _TRISC_TRISC6_POSITION                              0x6
#define _TRISC_TRISC6_SIZE                                  0x1
#define _TRISC_TRISC6_LENGTH                                0x1
#define _TRISC_TRISC6_MASK                                  0x40
#define _TRISC_TRISC7_POSN                                  0x7
#define _TRISC_TRISC7_POSITION                              0x7
#define _TRISC_TRISC7_SIZE                                  0x1
#define _TRISC_TRISC7_LENGTH                                0x1
#define _TRISC_TRISC7_MASK                                  0x80

// Register: TRISD
#define TRISD TRISD
extern volatile unsigned char           TRISD               __at(0x088);
#ifndef _LIB_BUILD
asm("TRISD equ 088h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISD0                 :1;
        unsigned TRISD1                 :1;
        unsigned TRISD2                 :1;
        unsigned TRISD3                 :1;
        unsigned TRISD4                 :1;
        unsigned TRISD5                 :1;
        unsigned TRISD6                 :1;
        unsigned TRISD7                 :1;
    };
} TRISDbits_t;
extern volatile TRISDbits_t TRISDbits __at(0x088);
// bitfield macros
#define _TRISD_TRISD0_POSN                                  0x0
#define _TRISD_TRISD0_POSITION                              0x0
#define _TRISD_TRISD0_SIZE                                  0x1
#define _TRISD_TRISD0_LENGTH                                0x1
#define _TRISD_TRISD0_MASK                                  0x1
#define _TRISD_TRISD1_POSN                                  0x1
#define _TRISD_TRISD1_POSITION                              0x1
#define _TRISD_TRISD1_SIZE                                  0x1
#define _TRISD_TRISD1_LENGTH                                0x1
#define _TRISD_TRISD1_MASK                                  0x2
#define _TRISD_TRISD2_POSN                                  0x2
#define _TRISD_TRISD2_POSITION                              0x2
#define _TRISD_TRISD2_SIZE                                  0x1
#define _TRISD_TRISD2_LENGTH                                0x1
#define _TRISD_TRISD2_MASK                                  0x4
#define _TRISD_TRISD3_POSN                                  0x3
#define _TRISD_TRISD3_POSITION                              0x3
#define _TRISD_TRISD3_SIZE                                  0x1
#define _TRISD_TRISD3_LENGTH                                0x1
#define _TRISD_TRISD3_MASK                                  0x8
#define _TRISD_TRISD4_POSN                                  0x4
#define _TRISD_TRISD4_POSITION                              0x4
#define _TRISD_TRISD4_SIZE                                  0x1
#define _TRISD_TRISD4_LENGTH                                0x1
#define _TRISD_TRISD4_MASK                                  0x10
#define _TRISD_TRISD5_POSN                                  0x5
#define _TRISD_TRISD5_POSITION                              0x5
#define _TRISD_TRISD5_SIZE                                  0x1
#define _TRISD_TRISD5_LENGTH                                0x1
#define _TRISD_TRISD5_MASK                                  0x20
#define _TRISD_TRISD6_POSN                                  0x6
#define _TRISD_TRISD6_POSITION                              0x6
#define _TRISD_TRISD6_SIZE                                  0x1
#define _TRISD_TRISD6_LENGTH                                0x1
#define _TRISD_TRISD6_MASK                                  0x40
#define _TRISD_TRISD7_POSN                                  0x7
#define _TRISD_TRISD7_POSITION                              0x7
#define _TRISD_TRISD7_SIZE                                  0x1
#define _TRISD_TRISD7_LENGTH                                0x1
#define _TRISD_TRISD7_MASK                                  0x80

// Register: TRISE
#define TRISE TRISE
extern volatile unsigned char           TRISE               __at(0x089);
#ifndef _LIB_BUILD
asm("TRISE equ 089h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
        unsigned                        :1;
        unsigned PSPMODE                :1;
        unsigned IBOV                   :1;
        unsigned OBF                    :1;
        unsigned IBF                    :1;
    };
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits __at(0x089);
// bitfield macros
#define _TRISE_TRISE0_POSN                                  0x0
#define _TRISE_TRISE0_POSITION                              0x0
#define _TRISE_TRISE0_SIZE                                  0x1
#define _TRISE_TRISE0_LENGTH                                0x1
#define _TRISE_TRISE0_MASK                                  0x1
#define _TRISE_TRISE1_POSN                                  0x1
#define _TRISE_TRISE1_POSITION                              0x1
#define _TRISE_TRISE1_SIZE                                  0x1
#define _TRISE_TRISE1_LENGTH                                0x1
#define _TRISE_TRISE1_MASK                                  0x2
#define _TRISE_TRISE2_POSN                                  0x2
#define _TRISE_TRISE2_POSITION                              0x2
#define _TRISE_TRISE2_SIZE                                  0x1
#define _TRISE_TRISE2_LENGTH                                0x1
#define _TRISE_TRISE2_MASK                                  0x4
#define _TRISE_PSPMODE_POSN                                 0x4
#define _TRISE_PSPMODE_POSITION                             0x4
#define _TRISE_PSPMODE_SIZE                                 0x1
#define _TRISE_PSPMODE_LENGTH                               0x1
#define _TRISE_PSPMODE_MASK                                 0x10
#define _TRISE_IBOV_POSN                                    0x5
#define _TRISE_IBOV_POSITION                                0x5
#define _TRISE_IBOV_SIZE                                    0x1
#define _TRISE_IBOV_LENGTH                                  0x1
#define _TRISE_IBOV_MASK                                    0x20
#define _TRISE_OBF_POSN                                     0x6
#define _TRISE_OBF_POSITION                                 0x6
#define _TRISE_OBF_SIZE                                     0x1
#define _TRISE_OBF_LENGTH                                   0x1
#define _TRISE_OBF_MASK                                     0x40
#define _TRISE_IBF_POSN                                     0x7
#define _TRISE_IBF_POSITION                                 0x7
#define _TRISE_IBF_SIZE                                     0x1
#define _TRISE_IBF_LENGTH                                   0x1
#define _TRISE_IBF_MASK                                     0x80

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0x08C);
#ifndef _LIB_BUILD
asm("PIE1 equ 08Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned CCP1IE                 :1;
        unsigned USBIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
        unsigned PSPIE                  :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x08C);
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
#define _PIE1_CCP1IE_POSN                                   0x2
#define _PIE1_CCP1IE_POSITION                               0x2
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x4
#define _PIE1_USBIE_POSN                                    0x3
#define _PIE1_USBIE_POSITION                                0x3
#define _PIE1_USBIE_SIZE                                    0x1
#define _PIE1_USBIE_LENGTH                                  0x1
#define _PIE1_USBIE_MASK                                    0x8
#define _PIE1_TXIE_POSN                                     0x4
#define _PIE1_TXIE_POSITION                                 0x4
#define _PIE1_TXIE_SIZE                                     0x1
#define _PIE1_TXIE_LENGTH                                   0x1
#define _PIE1_TXIE_MASK                                     0x10
#define _PIE1_RCIE_POSN                                     0x5
#define _PIE1_RCIE_POSITION                                 0x5
#define _PIE1_RCIE_SIZE                                     0x1
#define _PIE1_RCIE_LENGTH                                   0x1
#define _PIE1_RCIE_MASK                                     0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_PSPIE_POSN                                    0x7
#define _PIE1_PSPIE_POSITION                                0x7
#define _PIE1_PSPIE_SIZE                                    0x1
#define _PIE1_PSPIE_LENGTH                                  0x1
#define _PIE1_PSPIE_MASK                                    0x80

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x08D);
#ifndef _LIB_BUILD
asm("PIE2 equ 08Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IE                 :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x08D);
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1

// Register: PCON
#define PCON PCON
extern volatile unsigned char           PCON                __at(0x08E);
#ifndef _LIB_BUILD
asm("PCON equ 08Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
    };
    struct {
        unsigned nBO                    :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __at(0x08E);
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
#define _PCON_nBO_POSN                                      0x0
#define _PCON_nBO_POSITION                                  0x0
#define _PCON_nBO_SIZE                                      0x1
#define _PCON_nBO_LENGTH                                    0x1
#define _PCON_nBO_MASK                                      0x1

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0x092);
#ifndef _LIB_BUILD
asm("PR2 equ 092h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0x092);
// bitfield macros
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF

// Register: TXSTA
#define TXSTA TXSTA
extern volatile unsigned char           TXSTA               __at(0x098);
#ifndef _LIB_BUILD
asm("TXSTA equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned                        :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned TXD8                   :1;
        unsigned                        :5;
        unsigned nTX8                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX8_9                  :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits __at(0x098);
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
#define _TXSTA_TXD8_POSN                                    0x0
#define _TXSTA_TXD8_POSITION                                0x0
#define _TXSTA_TXD8_SIZE                                    0x1
#define _TXSTA_TXD8_LENGTH                                  0x1
#define _TXSTA_TXD8_MASK                                    0x1
#define _TXSTA_nTX8_POSN                                    0x6
#define _TXSTA_nTX8_POSITION                                0x6
#define _TXSTA_nTX8_SIZE                                    0x1
#define _TXSTA_nTX8_LENGTH                                  0x1
#define _TXSTA_nTX8_MASK                                    0x40
#define _TXSTA_TX8_9_POSN                                   0x6
#define _TXSTA_TX8_9_POSITION                               0x6
#define _TXSTA_TX8_9_SIZE                                   0x1
#define _TXSTA_TX8_9_LENGTH                                 0x1
#define _TXSTA_TX8_9_MASK                                   0x40

// Register: SPBRG
#define SPBRG SPBRG
extern volatile unsigned char           SPBRG               __at(0x099);
#ifndef _LIB_BUILD
asm("SPBRG equ 099h");
#endif

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09F);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG                   :3;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09F);
// bitfield macros
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x3
#define _ADCON1_PCFG_LENGTH                                 0x3
#define _ADCON1_PCFG_MASK                                   0x7
#define _ADCON1_PCFG0_POSN                                  0x0
#define _ADCON1_PCFG0_POSITION                              0x0
#define _ADCON1_PCFG0_SIZE                                  0x1
#define _ADCON1_PCFG0_LENGTH                                0x1
#define _ADCON1_PCFG0_MASK                                  0x1
#define _ADCON1_PCFG1_POSN                                  0x1
#define _ADCON1_PCFG1_POSITION                              0x1
#define _ADCON1_PCFG1_SIZE                                  0x1
#define _ADCON1_PCFG1_LENGTH                                0x1
#define _ADCON1_PCFG1_MASK                                  0x2
#define _ADCON1_PCFG2_POSN                                  0x2
#define _ADCON1_PCFG2_POSITION                              0x2
#define _ADCON1_PCFG2_SIZE                                  0x1
#define _ADCON1_PCFG2_LENGTH                                0x1
#define _ADCON1_PCFG2_MASK                                  0x4

// Register: UIR
#define UIR UIR
extern volatile unsigned char           UIR                 __at(0x190);
#ifndef _LIB_BUILD
asm("UIR equ 0190h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned USB_RST                :1;
        unsigned UERR                   :1;
        unsigned ACTIVITY               :1;
        unsigned TOK_DNE                :1;
        unsigned UIDLE                  :1;
        unsigned STALL                  :1;
    };
} UIRbits_t;
extern volatile UIRbits_t UIRbits __at(0x190);
// bitfield macros
#define _UIR_USB_RST_POSN                                   0x0
#define _UIR_USB_RST_POSITION                               0x0
#define _UIR_USB_RST_SIZE                                   0x1
#define _UIR_USB_RST_LENGTH                                 0x1
#define _UIR_USB_RST_MASK                                   0x1
#define _UIR_UERR_POSN                                      0x1
#define _UIR_UERR_POSITION                                  0x1
#define _UIR_UERR_SIZE                                      0x1
#define _UIR_UERR_LENGTH                                    0x1
#define _UIR_UERR_MASK                                      0x2
#define _UIR_ACTIVITY_POSN                                  0x2
#define _UIR_ACTIVITY_POSITION                              0x2
#define _UIR_ACTIVITY_SIZE                                  0x1
#define _UIR_ACTIVITY_LENGTH                                0x1
#define _UIR_ACTIVITY_MASK                                  0x4
#define _UIR_TOK_DNE_POSN                                   0x3
#define _UIR_TOK_DNE_POSITION                               0x3
#define _UIR_TOK_DNE_SIZE                                   0x1
#define _UIR_TOK_DNE_LENGTH                                 0x1
#define _UIR_TOK_DNE_MASK                                   0x8
#define _UIR_UIDLE_POSN                                     0x4
#define _UIR_UIDLE_POSITION                                 0x4
#define _UIR_UIDLE_SIZE                                     0x1
#define _UIR_UIDLE_LENGTH                                   0x1
#define _UIR_UIDLE_MASK                                     0x10
#define _UIR_STALL_POSN                                     0x5
#define _UIR_STALL_POSITION                                 0x5
#define _UIR_STALL_SIZE                                     0x1
#define _UIR_STALL_LENGTH                                   0x1
#define _UIR_STALL_MASK                                     0x20

// Register: UIE
#define UIE UIE
extern volatile unsigned char           UIE                 __at(0x191);
#ifndef _LIB_BUILD
asm("UIE equ 0191h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned USB_RST                :1;
        unsigned UERR                   :1;
        unsigned ACTIVITY               :1;
        unsigned TOK_DNE                :1;
        unsigned UIDLE                  :1;
        unsigned STALL                  :1;
    };
} UIEbits_t;
extern volatile UIEbits_t UIEbits __at(0x191);
// bitfield macros
#define _UIE_USB_RST_POSN                                   0x0
#define _UIE_USB_RST_POSITION                               0x0
#define _UIE_USB_RST_SIZE                                   0x1
#define _UIE_USB_RST_LENGTH                                 0x1
#define _UIE_USB_RST_MASK                                   0x1
#define _UIE_UERR_POSN                                      0x1
#define _UIE_UERR_POSITION                                  0x1
#define _UIE_UERR_SIZE                                      0x1
#define _UIE_UERR_LENGTH                                    0x1
#define _UIE_UERR_MASK                                      0x2
#define _UIE_ACTIVITY_POSN                                  0x2
#define _UIE_ACTIVITY_POSITION                              0x2
#define _UIE_ACTIVITY_SIZE                                  0x1
#define _UIE_ACTIVITY_LENGTH                                0x1
#define _UIE_ACTIVITY_MASK                                  0x4
#define _UIE_TOK_DNE_POSN                                   0x3
#define _UIE_TOK_DNE_POSITION                               0x3
#define _UIE_TOK_DNE_SIZE                                   0x1
#define _UIE_TOK_DNE_LENGTH                                 0x1
#define _UIE_TOK_DNE_MASK                                   0x8
#define _UIE_UIDLE_POSN                                     0x4
#define _UIE_UIDLE_POSITION                                 0x4
#define _UIE_UIDLE_SIZE                                     0x1
#define _UIE_UIDLE_LENGTH                                   0x1
#define _UIE_UIDLE_MASK                                     0x10
#define _UIE_STALL_POSN                                     0x5
#define _UIE_STALL_POSITION                                 0x5
#define _UIE_STALL_SIZE                                     0x1
#define _UIE_STALL_LENGTH                                   0x1
#define _UIE_STALL_MASK                                     0x20

// Register: UEIR
#define UEIR UEIR
extern volatile unsigned char           UEIR                __at(0x192);
#ifndef _LIB_BUILD
asm("UEIR equ 0192h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PID_ERR                :1;
        unsigned CRC5                   :1;
        unsigned CRC16                  :1;
        unsigned DFN8                   :1;
        unsigned BTO_ERR                :1;
        unsigned WRT_ERR                :1;
        unsigned OWN_ERR                :1;
        unsigned BTS_ERR                :1;
    };
} UEIRbits_t;
extern volatile UEIRbits_t UEIRbits __at(0x192);
// bitfield macros
#define _UEIR_PID_ERR_POSN                                  0x0
#define _UEIR_PID_ERR_POSITION                              0x0
#define _UEIR_PID_ERR_SIZE                                  0x1
#define _UEIR_PID_ERR_LENGTH                                0x1
#define _UEIR_PID_ERR_MASK                                  0x1
#define _UEIR_CRC5_POSN                                     0x1
#define _UEIR_CRC5_POSITION                                 0x1
#define _UEIR_CRC5_SIZE                                     0x1
#define _UEIR_CRC5_LENGTH                                   0x1
#define _UEIR_CRC5_MASK                                     0x2
#define _UEIR_CRC16_POSN                                    0x2
#define _UEIR_CRC16_POSITION                                0x2
#define _UEIR_CRC16_SIZE                                    0x1
#define _UEIR_CRC16_LENGTH                                  0x1
#define _UEIR_CRC16_MASK                                    0x4
#define _UEIR_DFN8_POSN                                     0x3
#define _UEIR_DFN8_POSITION                                 0x3
#define _UEIR_DFN8_SIZE                                     0x1
#define _UEIR_DFN8_LENGTH                                   0x1
#define _UEIR_DFN8_MASK                                     0x8
#define _UEIR_BTO_ERR_POSN                                  0x4
#define _UEIR_BTO_ERR_POSITION                              0x4
#define _UEIR_BTO_ERR_SIZE                                  0x1
#define _UEIR_BTO_ERR_LENGTH                                0x1
#define _UEIR_BTO_ERR_MASK                                  0x10
#define _UEIR_WRT_ERR_POSN                                  0x5
#define _UEIR_WRT_ERR_POSITION                              0x5
#define _UEIR_WRT_ERR_SIZE                                  0x1
#define _UEIR_WRT_ERR_LENGTH                                0x1
#define _UEIR_WRT_ERR_MASK                                  0x20
#define _UEIR_OWN_ERR_POSN                                  0x6
#define _UEIR_OWN_ERR_POSITION                              0x6
#define _UEIR_OWN_ERR_SIZE                                  0x1
#define _UEIR_OWN_ERR_LENGTH                                0x1
#define _UEIR_OWN_ERR_MASK                                  0x40
#define _UEIR_BTS_ERR_POSN                                  0x7
#define _UEIR_BTS_ERR_POSITION                              0x7
#define _UEIR_BTS_ERR_SIZE                                  0x1
#define _UEIR_BTS_ERR_LENGTH                                0x1
#define _UEIR_BTS_ERR_MASK                                  0x80

// Register: UEIE
#define UEIE UEIE
extern volatile unsigned char           UEIE                __at(0x193);
#ifndef _LIB_BUILD
asm("UEIE equ 0193h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PID_ERR                :1;
        unsigned CRC5                   :1;
        unsigned CRC16                  :1;
        unsigned DFN8                   :1;
        unsigned BTO_ERR                :1;
        unsigned WRT_ERR                :1;
        unsigned OWN_ERR                :1;
        unsigned BTS_ERR                :1;
    };
} UEIEbits_t;
extern volatile UEIEbits_t UEIEbits __at(0x193);
// bitfield macros
#define _UEIE_PID_ERR_POSN                                  0x0
#define _UEIE_PID_ERR_POSITION                              0x0
#define _UEIE_PID_ERR_SIZE                                  0x1
#define _UEIE_PID_ERR_LENGTH                                0x1
#define _UEIE_PID_ERR_MASK                                  0x1
#define _UEIE_CRC5_POSN                                     0x1
#define _UEIE_CRC5_POSITION                                 0x1
#define _UEIE_CRC5_SIZE                                     0x1
#define _UEIE_CRC5_LENGTH                                   0x1
#define _UEIE_CRC5_MASK                                     0x2
#define _UEIE_CRC16_POSN                                    0x2
#define _UEIE_CRC16_POSITION                                0x2
#define _UEIE_CRC16_SIZE                                    0x1
#define _UEIE_CRC16_LENGTH                                  0x1
#define _UEIE_CRC16_MASK                                    0x4
#define _UEIE_DFN8_POSN                                     0x3
#define _UEIE_DFN8_POSITION                                 0x3
#define _UEIE_DFN8_SIZE                                     0x1
#define _UEIE_DFN8_LENGTH                                   0x1
#define _UEIE_DFN8_MASK                                     0x8
#define _UEIE_BTO_ERR_POSN                                  0x4
#define _UEIE_BTO_ERR_POSITION                              0x4
#define _UEIE_BTO_ERR_SIZE                                  0x1
#define _UEIE_BTO_ERR_LENGTH                                0x1
#define _UEIE_BTO_ERR_MASK                                  0x10
#define _UEIE_WRT_ERR_POSN                                  0x5
#define _UEIE_WRT_ERR_POSITION                              0x5
#define _UEIE_WRT_ERR_SIZE                                  0x1
#define _UEIE_WRT_ERR_LENGTH                                0x1
#define _UEIE_WRT_ERR_MASK                                  0x20
#define _UEIE_OWN_ERR_POSN                                  0x6
#define _UEIE_OWN_ERR_POSITION                              0x6
#define _UEIE_OWN_ERR_SIZE                                  0x1
#define _UEIE_OWN_ERR_LENGTH                                0x1
#define _UEIE_OWN_ERR_MASK                                  0x40
#define _UEIE_BTS_ERR_POSN                                  0x7
#define _UEIE_BTS_ERR_POSITION                              0x7
#define _UEIE_BTS_ERR_SIZE                                  0x1
#define _UEIE_BTS_ERR_LENGTH                                0x1
#define _UEIE_BTS_ERR_MASK                                  0x80

// Register: USTAT
#define USTAT USTAT
extern volatile unsigned char           USTAT               __at(0x194);
#ifndef _LIB_BUILD
asm("USTAT equ 0194h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned IN                     :1;
        unsigned ENDP                   :2;
    };
    struct {
        unsigned                        :3;
        unsigned ENDP0                  :1;
        unsigned ENDP1                  :1;
    };
} USTATbits_t;
extern volatile USTATbits_t USTATbits __at(0x194);
// bitfield macros
#define _USTAT_IN_POSN                                      0x2
#define _USTAT_IN_POSITION                                  0x2
#define _USTAT_IN_SIZE                                      0x1
#define _USTAT_IN_LENGTH                                    0x1
#define _USTAT_IN_MASK                                      0x4
#define _USTAT_ENDP_POSN                                    0x3
#define _USTAT_ENDP_POSITION                                0x3
#define _USTAT_ENDP_SIZE                                    0x2
#define _USTAT_ENDP_LENGTH                                  0x2
#define _USTAT_ENDP_MASK                                    0x18
#define _USTAT_ENDP0_POSN                                   0x3
#define _USTAT_ENDP0_POSITION                               0x3
#define _USTAT_ENDP0_SIZE                                   0x1
#define _USTAT_ENDP0_LENGTH                                 0x1
#define _USTAT_ENDP0_MASK                                   0x8
#define _USTAT_ENDP1_POSN                                   0x4
#define _USTAT_ENDP1_POSITION                               0x4
#define _USTAT_ENDP1_SIZE                                   0x1
#define _USTAT_ENDP1_LENGTH                                 0x1
#define _USTAT_ENDP1_MASK                                   0x10

// Register: UCTRL
#define UCTRL UCTRL
extern volatile unsigned char           UCTRL               __at(0x195);
#ifndef _LIB_BUILD
asm("UCTRL equ 0195h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned SUSPND                 :1;
        unsigned RESUME                 :1;
        unsigned DEV_ATT                :1;
        unsigned PKT_DIS                :1;
        unsigned SE0                    :1;
    };
} UCTRLbits_t;
extern volatile UCTRLbits_t UCTRLbits __at(0x195);
// bitfield macros
#define _UCTRL_SUSPND_POSN                                  0x1
#define _UCTRL_SUSPND_POSITION                              0x1
#define _UCTRL_SUSPND_SIZE                                  0x1
#define _UCTRL_SUSPND_LENGTH                                0x1
#define _UCTRL_SUSPND_MASK                                  0x2
#define _UCTRL_RESUME_POSN                                  0x2
#define _UCTRL_RESUME_POSITION                              0x2
#define _UCTRL_RESUME_SIZE                                  0x1
#define _UCTRL_RESUME_LENGTH                                0x1
#define _UCTRL_RESUME_MASK                                  0x4
#define _UCTRL_DEV_ATT_POSN                                 0x3
#define _UCTRL_DEV_ATT_POSITION                             0x3
#define _UCTRL_DEV_ATT_SIZE                                 0x1
#define _UCTRL_DEV_ATT_LENGTH                               0x1
#define _UCTRL_DEV_ATT_MASK                                 0x8
#define _UCTRL_PKT_DIS_POSN                                 0x4
#define _UCTRL_PKT_DIS_POSITION                             0x4
#define _UCTRL_PKT_DIS_SIZE                                 0x1
#define _UCTRL_PKT_DIS_LENGTH                               0x1
#define _UCTRL_PKT_DIS_MASK                                 0x10
#define _UCTRL_SE0_POSN                                     0x5
#define _UCTRL_SE0_POSITION                                 0x5
#define _UCTRL_SE0_SIZE                                     0x1
#define _UCTRL_SE0_LENGTH                                   0x1
#define _UCTRL_SE0_MASK                                     0x20

// Register: UADDR
#define UADDR UADDR
extern volatile unsigned char           UADDR               __at(0x196);
#ifndef _LIB_BUILD
asm("UADDR equ 0196h");
#endif

// Register: USWSTAT
#define USWSTAT USWSTAT
extern volatile unsigned char           USWSTAT             __at(0x197);
#ifndef _LIB_BUILD
asm("USWSTAT equ 0197h");
#endif

// Register: UEP0
#define UEP0 UEP0
extern volatile unsigned char           UEP0                __at(0x198);
#ifndef _LIB_BUILD
asm("UEP0 equ 0198h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EP_STALL               :1;
        unsigned EP_IN_EN               :1;
        unsigned EP_OUT_EN              :1;
        unsigned EP_CTL_DIS             :1;
    };
} UEP0bits_t;
extern volatile UEP0bits_t UEP0bits __at(0x198);
// bitfield macros
#define _UEP0_EP_STALL_POSN                                 0x0
#define _UEP0_EP_STALL_POSITION                             0x0
#define _UEP0_EP_STALL_SIZE                                 0x1
#define _UEP0_EP_STALL_LENGTH                               0x1
#define _UEP0_EP_STALL_MASK                                 0x1
#define _UEP0_EP_IN_EN_POSN                                 0x1
#define _UEP0_EP_IN_EN_POSITION                             0x1
#define _UEP0_EP_IN_EN_SIZE                                 0x1
#define _UEP0_EP_IN_EN_LENGTH                               0x1
#define _UEP0_EP_IN_EN_MASK                                 0x2
#define _UEP0_EP_OUT_EN_POSN                                0x2
#define _UEP0_EP_OUT_EN_POSITION                            0x2
#define _UEP0_EP_OUT_EN_SIZE                                0x1
#define _UEP0_EP_OUT_EN_LENGTH                              0x1
#define _UEP0_EP_OUT_EN_MASK                                0x4
#define _UEP0_EP_CTL_DIS_POSN                               0x3
#define _UEP0_EP_CTL_DIS_POSITION                           0x3
#define _UEP0_EP_CTL_DIS_SIZE                               0x1
#define _UEP0_EP_CTL_DIS_LENGTH                             0x1
#define _UEP0_EP_CTL_DIS_MASK                               0x8

// Register: UEP1
#define UEP1 UEP1
extern volatile unsigned char           UEP1                __at(0x199);
#ifndef _LIB_BUILD
asm("UEP1 equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EP_STALL               :1;
        unsigned EP_IN_EN               :1;
        unsigned EP_OUT_EN              :1;
        unsigned EP_CTL_DIS             :1;
    };
} UEP1bits_t;
extern volatile UEP1bits_t UEP1bits __at(0x199);
// bitfield macros
#define _UEP1_EP_STALL_POSN                                 0x0
#define _UEP1_EP_STALL_POSITION                             0x0
#define _UEP1_EP_STALL_SIZE                                 0x1
#define _UEP1_EP_STALL_LENGTH                               0x1
#define _UEP1_EP_STALL_MASK                                 0x1
#define _UEP1_EP_IN_EN_POSN                                 0x1
#define _UEP1_EP_IN_EN_POSITION                             0x1
#define _UEP1_EP_IN_EN_SIZE                                 0x1
#define _UEP1_EP_IN_EN_LENGTH                               0x1
#define _UEP1_EP_IN_EN_MASK                                 0x2
#define _UEP1_EP_OUT_EN_POSN                                0x2
#define _UEP1_EP_OUT_EN_POSITION                            0x2
#define _UEP1_EP_OUT_EN_SIZE                                0x1
#define _UEP1_EP_OUT_EN_LENGTH                              0x1
#define _UEP1_EP_OUT_EN_MASK                                0x4
#define _UEP1_EP_CTL_DIS_POSN                               0x3
#define _UEP1_EP_CTL_DIS_POSITION                           0x3
#define _UEP1_EP_CTL_DIS_SIZE                               0x1
#define _UEP1_EP_CTL_DIS_LENGTH                             0x1
#define _UEP1_EP_CTL_DIS_MASK                               0x8

// Register: UEP2
#define UEP2 UEP2
extern volatile unsigned char           UEP2                __at(0x19A);
#ifndef _LIB_BUILD
asm("UEP2 equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EP_STALL               :1;
        unsigned EP_IN_EN               :1;
        unsigned EP_OUT_EN              :1;
        unsigned EP_CTL_DIS             :1;
    };
} UEP2bits_t;
extern volatile UEP2bits_t UEP2bits __at(0x19A);
// bitfield macros
#define _UEP2_EP_STALL_POSN                                 0x0
#define _UEP2_EP_STALL_POSITION                             0x0
#define _UEP2_EP_STALL_SIZE                                 0x1
#define _UEP2_EP_STALL_LENGTH                               0x1
#define _UEP2_EP_STALL_MASK                                 0x1
#define _UEP2_EP_IN_EN_POSN                                 0x1
#define _UEP2_EP_IN_EN_POSITION                             0x1
#define _UEP2_EP_IN_EN_SIZE                                 0x1
#define _UEP2_EP_IN_EN_LENGTH                               0x1
#define _UEP2_EP_IN_EN_MASK                                 0x2
#define _UEP2_EP_OUT_EN_POSN                                0x2
#define _UEP2_EP_OUT_EN_POSITION                            0x2
#define _UEP2_EP_OUT_EN_SIZE                                0x1
#define _UEP2_EP_OUT_EN_LENGTH                              0x1
#define _UEP2_EP_OUT_EN_MASK                                0x4
#define _UEP2_EP_CTL_DIS_POSN                               0x3
#define _UEP2_EP_CTL_DIS_POSITION                           0x3
#define _UEP2_EP_CTL_DIS_SIZE                               0x1
#define _UEP2_EP_CTL_DIS_LENGTH                             0x1
#define _UEP2_EP_CTL_DIS_MASK                               0x8

// Register: BD0OST
#define BD0OST BD0OST
extern volatile unsigned char           BD0OST              __at(0x1A0);
#ifndef _LIB_BUILD
asm("BD0OST equ 01A0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned PID0_BSTALL            :1;
        unsigned PID1_DTS               :1;
        unsigned PID2                   :1;
        unsigned PID3                   :1;
        unsigned DATA0_1                :1;
        unsigned UOWN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PID0                   :1;
        unsigned PID1                   :1;
        unsigned                        :2;
        unsigned DATA01                 :1;
        unsigned OWN                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned BSTALL                 :1;
        unsigned DTS                    :1;
    };
} BD0OSTbits_t;
extern volatile BD0OSTbits_t BD0OSTbits __at(0x1A0);
// bitfield macros
#define _BD0OST_PID0_BSTALL_POSN                            0x2
#define _BD0OST_PID0_BSTALL_POSITION                        0x2
#define _BD0OST_PID0_BSTALL_SIZE                            0x1
#define _BD0OST_PID0_BSTALL_LENGTH                          0x1
#define _BD0OST_PID0_BSTALL_MASK                            0x4
#define _BD0OST_PID1_DTS_POSN                               0x3
#define _BD0OST_PID1_DTS_POSITION                           0x3
#define _BD0OST_PID1_DTS_SIZE                               0x1
#define _BD0OST_PID1_DTS_LENGTH                             0x1
#define _BD0OST_PID1_DTS_MASK                               0x8
#define _BD0OST_PID2_POSN                                   0x4
#define _BD0OST_PID2_POSITION                               0x4
#define _BD0OST_PID2_SIZE                                   0x1
#define _BD0OST_PID2_LENGTH                                 0x1
#define _BD0OST_PID2_MASK                                   0x10
#define _BD0OST_PID3_POSN                                   0x5
#define _BD0OST_PID3_POSITION                               0x5
#define _BD0OST_PID3_SIZE                                   0x1
#define _BD0OST_PID3_LENGTH                                 0x1
#define _BD0OST_PID3_MASK                                   0x20
#define _BD0OST_DATA0_1_POSN                                0x6
#define _BD0OST_DATA0_1_POSITION                            0x6
#define _BD0OST_DATA0_1_SIZE                                0x1
#define _BD0OST_DATA0_1_LENGTH                              0x1
#define _BD0OST_DATA0_1_MASK                                0x40
#define _BD0OST_UOWN_POSN                                   0x7
#define _BD0OST_UOWN_POSITION                               0x7
#define _BD0OST_UOWN_SIZE                                   0x1
#define _BD0OST_UOWN_LENGTH                                 0x1
#define _BD0OST_UOWN_MASK                                   0x80
#define _BD0OST_PID0_POSN                                   0x2
#define _BD0OST_PID0_POSITION                               0x2
#define _BD0OST_PID0_SIZE                                   0x1
#define _BD0OST_PID0_LENGTH                                 0x1
#define _BD0OST_PID0_MASK                                   0x4
#define _BD0OST_PID1_POSN                                   0x3
#define _BD0OST_PID1_POSITION                               0x3
#define _BD0OST_PID1_SIZE                                   0x1
#define _BD0OST_PID1_LENGTH                                 0x1
#define _BD0OST_PID1_MASK                                   0x8
#define _BD0OST_DATA01_POSN                                 0x6
#define _BD0OST_DATA01_POSITION                             0x6
#define _BD0OST_DATA01_SIZE                                 0x1
#define _BD0OST_DATA01_LENGTH                               0x1
#define _BD0OST_DATA01_MASK                                 0x40
#define _BD0OST_OWN_POSN                                    0x7
#define _BD0OST_OWN_POSITION                                0x7
#define _BD0OST_OWN_SIZE                                    0x1
#define _BD0OST_OWN_LENGTH                                  0x1
#define _BD0OST_OWN_MASK                                    0x80
#define _BD0OST_BSTALL_POSN                                 0x2
#define _BD0OST_BSTALL_POSITION                             0x2
#define _BD0OST_BSTALL_SIZE                                 0x1
#define _BD0OST_BSTALL_LENGTH                               0x1
#define _BD0OST_BSTALL_MASK                                 0x4
#define _BD0OST_DTS_POSN                                    0x3
#define _BD0OST_DTS_POSITION                                0x3
#define _BD0OST_DTS_SIZE                                    0x1
#define _BD0OST_DTS_LENGTH                                  0x1
#define _BD0OST_DTS_MASK                                    0x8

// Register: BD0OBC
#define BD0OBC BD0OBC
extern volatile unsigned char           BD0OBC              __at(0x1A1);
#ifndef _LIB_BUILD
asm("BD0OBC equ 01A1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BC                     :4;
    };
    struct {
        unsigned BC0                    :1;
        unsigned BC1                    :1;
        unsigned BC2                    :1;
        unsigned BC3                    :1;
    };
} BD0OBCbits_t;
extern volatile BD0OBCbits_t BD0OBCbits __at(0x1A1);
// bitfield macros
#define _BD0OBC_BC_POSN                                     0x0
#define _BD0OBC_BC_POSITION                                 0x0
#define _BD0OBC_BC_SIZE                                     0x4
#define _BD0OBC_BC_LENGTH                                   0x4
#define _BD0OBC_BC_MASK                                     0xF
#define _BD0OBC_BC0_POSN                                    0x0
#define _BD0OBC_BC0_POSITION                                0x0
#define _BD0OBC_BC0_SIZE                                    0x1
#define _BD0OBC_BC0_LENGTH                                  0x1
#define _BD0OBC_BC0_MASK                                    0x1
#define _BD0OBC_BC1_POSN                                    0x1
#define _BD0OBC_BC1_POSITION                                0x1
#define _BD0OBC_BC1_SIZE                                    0x1
#define _BD0OBC_BC1_LENGTH                                  0x1
#define _BD0OBC_BC1_MASK                                    0x2
#define _BD0OBC_BC2_POSN                                    0x2
#define _BD0OBC_BC2_POSITION                                0x2
#define _BD0OBC_BC2_SIZE                                    0x1
#define _BD0OBC_BC2_LENGTH                                  0x1
#define _BD0OBC_BC2_MASK                                    0x4
#define _BD0OBC_BC3_POSN                                    0x3
#define _BD0OBC_BC3_POSITION                                0x3
#define _BD0OBC_BC3_SIZE                                    0x1
#define _BD0OBC_BC3_LENGTH                                  0x1
#define _BD0OBC_BC3_MASK                                    0x8

// Register: BD0OAL
#define BD0OAL BD0OAL
extern volatile unsigned char           BD0OAL              __at(0x1A2);
#ifndef _LIB_BUILD
asm("BD0OAL equ 01A2h");
#endif

// Register: BD0IST
#define BD0IST BD0IST
extern volatile unsigned char           BD0IST              __at(0x1A4);
#ifndef _LIB_BUILD
asm("BD0IST equ 01A4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned PID0_BSTALL            :1;
        unsigned PID1_DTS               :1;
        unsigned PID2                   :1;
        unsigned PID3                   :1;
        unsigned DATA0_1                :1;
        unsigned UOWN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PID0                   :1;
        unsigned PID1                   :1;
        unsigned                        :2;
        unsigned DATA01                 :1;
        unsigned OWN                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned BSTALL                 :1;
        unsigned DTS                    :1;
    };
} BD0ISTbits_t;
extern volatile BD0ISTbits_t BD0ISTbits __at(0x1A4);
// bitfield macros
#define _BD0IST_PID0_BSTALL_POSN                            0x2
#define _BD0IST_PID0_BSTALL_POSITION                        0x2
#define _BD0IST_PID0_BSTALL_SIZE                            0x1
#define _BD0IST_PID0_BSTALL_LENGTH                          0x1
#define _BD0IST_PID0_BSTALL_MASK                            0x4
#define _BD0IST_PID1_DTS_POSN                               0x3
#define _BD0IST_PID1_DTS_POSITION                           0x3
#define _BD0IST_PID1_DTS_SIZE                               0x1
#define _BD0IST_PID1_DTS_LENGTH                             0x1
#define _BD0IST_PID1_DTS_MASK                               0x8
#define _BD0IST_PID2_POSN                                   0x4
#define _BD0IST_PID2_POSITION                               0x4
#define _BD0IST_PID2_SIZE                                   0x1
#define _BD0IST_PID2_LENGTH                                 0x1
#define _BD0IST_PID2_MASK                                   0x10
#define _BD0IST_PID3_POSN                                   0x5
#define _BD0IST_PID3_POSITION                               0x5
#define _BD0IST_PID3_SIZE                                   0x1
#define _BD0IST_PID3_LENGTH                                 0x1
#define _BD0IST_PID3_MASK                                   0x20
#define _BD0IST_DATA0_1_POSN                                0x6
#define _BD0IST_DATA0_1_POSITION                            0x6
#define _BD0IST_DATA0_1_SIZE                                0x1
#define _BD0IST_DATA0_1_LENGTH                              0x1
#define _BD0IST_DATA0_1_MASK                                0x40
#define _BD0IST_UOWN_POSN                                   0x7
#define _BD0IST_UOWN_POSITION                               0x7
#define _BD0IST_UOWN_SIZE                                   0x1
#define _BD0IST_UOWN_LENGTH                                 0x1
#define _BD0IST_UOWN_MASK                                   0x80
#define _BD0IST_PID0_POSN                                   0x2
#define _BD0IST_PID0_POSITION                               0x2
#define _BD0IST_PID0_SIZE                                   0x1
#define _BD0IST_PID0_LENGTH                                 0x1
#define _BD0IST_PID0_MASK                                   0x4
#define _BD0IST_PID1_POSN                                   0x3
#define _BD0IST_PID1_POSITION                               0x3
#define _BD0IST_PID1_SIZE                                   0x1
#define _BD0IST_PID1_LENGTH                                 0x1
#define _BD0IST_PID1_MASK                                   0x8
#define _BD0IST_DATA01_POSN                                 0x6
#define _BD0IST_DATA01_POSITION                             0x6
#define _BD0IST_DATA01_SIZE                                 0x1
#define _BD0IST_DATA01_LENGTH                               0x1
#define _BD0IST_DATA01_MASK                                 0x40
#define _BD0IST_OWN_POSN                                    0x7
#define _BD0IST_OWN_POSITION                                0x7
#define _BD0IST_OWN_SIZE                                    0x1
#define _BD0IST_OWN_LENGTH                                  0x1
#define _BD0IST_OWN_MASK                                    0x80
#define _BD0IST_BSTALL_POSN                                 0x2
#define _BD0IST_BSTALL_POSITION                             0x2
#define _BD0IST_BSTALL_SIZE                                 0x1
#define _BD0IST_BSTALL_LENGTH                               0x1
#define _BD0IST_BSTALL_MASK                                 0x4
#define _BD0IST_DTS_POSN                                    0x3
#define _BD0IST_DTS_POSITION                                0x3
#define _BD0IST_DTS_SIZE                                    0x1
#define _BD0IST_DTS_LENGTH                                  0x1
#define _BD0IST_DTS_MASK                                    0x8

// Register: BD0IBC
#define BD0IBC BD0IBC
extern volatile unsigned char           BD0IBC              __at(0x1A5);
#ifndef _LIB_BUILD
asm("BD0IBC equ 01A5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BC                     :4;
    };
    struct {
        unsigned BC0                    :1;
        unsigned BC1                    :1;
        unsigned BC2                    :1;
        unsigned BC3                    :1;
    };
} BD0IBCbits_t;
extern volatile BD0IBCbits_t BD0IBCbits __at(0x1A5);
// bitfield macros
#define _BD0IBC_BC_POSN                                     0x0
#define _BD0IBC_BC_POSITION                                 0x0
#define _BD0IBC_BC_SIZE                                     0x4
#define _BD0IBC_BC_LENGTH                                   0x4
#define _BD0IBC_BC_MASK                                     0xF
#define _BD0IBC_BC0_POSN                                    0x0
#define _BD0IBC_BC0_POSITION                                0x0
#define _BD0IBC_BC0_SIZE                                    0x1
#define _BD0IBC_BC0_LENGTH                                  0x1
#define _BD0IBC_BC0_MASK                                    0x1
#define _BD0IBC_BC1_POSN                                    0x1
#define _BD0IBC_BC1_POSITION                                0x1
#define _BD0IBC_BC1_SIZE                                    0x1
#define _BD0IBC_BC1_LENGTH                                  0x1
#define _BD0IBC_BC1_MASK                                    0x2
#define _BD0IBC_BC2_POSN                                    0x2
#define _BD0IBC_BC2_POSITION                                0x2
#define _BD0IBC_BC2_SIZE                                    0x1
#define _BD0IBC_BC2_LENGTH                                  0x1
#define _BD0IBC_BC2_MASK                                    0x4
#define _BD0IBC_BC3_POSN                                    0x3
#define _BD0IBC_BC3_POSITION                                0x3
#define _BD0IBC_BC3_SIZE                                    0x1
#define _BD0IBC_BC3_LENGTH                                  0x1
#define _BD0IBC_BC3_MASK                                    0x8

// Register: BD0IAL
#define BD0IAL BD0IAL
extern volatile unsigned char           BD0IAL              __at(0x1A6);
#ifndef _LIB_BUILD
asm("BD0IAL equ 01A6h");
#endif

// Register: BD1OST
#define BD1OST BD1OST
extern volatile unsigned char           BD1OST              __at(0x1A8);
#ifndef _LIB_BUILD
asm("BD1OST equ 01A8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned PID0_BSTALL            :1;
        unsigned PID1_DTS               :1;
        unsigned PID2                   :1;
        unsigned PID3                   :1;
        unsigned DATA0_1                :1;
        unsigned UOWN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PID0                   :1;
        unsigned PID1                   :1;
        unsigned                        :2;
        unsigned DATA01                 :1;
        unsigned OWN                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned BSTALL                 :1;
        unsigned DTS                    :1;
    };
} BD1OSTbits_t;
extern volatile BD1OSTbits_t BD1OSTbits __at(0x1A8);
// bitfield macros
#define _BD1OST_PID0_BSTALL_POSN                            0x2
#define _BD1OST_PID0_BSTALL_POSITION                        0x2
#define _BD1OST_PID0_BSTALL_SIZE                            0x1
#define _BD1OST_PID0_BSTALL_LENGTH                          0x1
#define _BD1OST_PID0_BSTALL_MASK                            0x4
#define _BD1OST_PID1_DTS_POSN                               0x3
#define _BD1OST_PID1_DTS_POSITION                           0x3
#define _BD1OST_PID1_DTS_SIZE                               0x1
#define _BD1OST_PID1_DTS_LENGTH                             0x1
#define _BD1OST_PID1_DTS_MASK                               0x8
#define _BD1OST_PID2_POSN                                   0x4
#define _BD1OST_PID2_POSITION                               0x4
#define _BD1OST_PID2_SIZE                                   0x1
#define _BD1OST_PID2_LENGTH                                 0x1
#define _BD1OST_PID2_MASK                                   0x10
#define _BD1OST_PID3_POSN                                   0x5
#define _BD1OST_PID3_POSITION                               0x5
#define _BD1OST_PID3_SIZE                                   0x1
#define _BD1OST_PID3_LENGTH                                 0x1
#define _BD1OST_PID3_MASK                                   0x20
#define _BD1OST_DATA0_1_POSN                                0x6
#define _BD1OST_DATA0_1_POSITION                            0x6
#define _BD1OST_DATA0_1_SIZE                                0x1
#define _BD1OST_DATA0_1_LENGTH                              0x1
#define _BD1OST_DATA0_1_MASK                                0x40
#define _BD1OST_UOWN_POSN                                   0x7
#define _BD1OST_UOWN_POSITION                               0x7
#define _BD1OST_UOWN_SIZE                                   0x1
#define _BD1OST_UOWN_LENGTH                                 0x1
#define _BD1OST_UOWN_MASK                                   0x80
#define _BD1OST_PID0_POSN                                   0x2
#define _BD1OST_PID0_POSITION                               0x2
#define _BD1OST_PID0_SIZE                                   0x1
#define _BD1OST_PID0_LENGTH                                 0x1
#define _BD1OST_PID0_MASK                                   0x4
#define _BD1OST_PID1_POSN                                   0x3
#define _BD1OST_PID1_POSITION                               0x3
#define _BD1OST_PID1_SIZE                                   0x1
#define _BD1OST_PID1_LENGTH                                 0x1
#define _BD1OST_PID1_MASK                                   0x8
#define _BD1OST_DATA01_POSN                                 0x6
#define _BD1OST_DATA01_POSITION                             0x6
#define _BD1OST_DATA01_SIZE                                 0x1
#define _BD1OST_DATA01_LENGTH                               0x1
#define _BD1OST_DATA01_MASK                                 0x40
#define _BD1OST_OWN_POSN                                    0x7
#define _BD1OST_OWN_POSITION                                0x7
#define _BD1OST_OWN_SIZE                                    0x1
#define _BD1OST_OWN_LENGTH                                  0x1
#define _BD1OST_OWN_MASK                                    0x80
#define _BD1OST_BSTALL_POSN                                 0x2
#define _BD1OST_BSTALL_POSITION                             0x2
#define _BD1OST_BSTALL_SIZE                                 0x1
#define _BD1OST_BSTALL_LENGTH                               0x1
#define _BD1OST_BSTALL_MASK                                 0x4
#define _BD1OST_DTS_POSN                                    0x3
#define _BD1OST_DTS_POSITION                                0x3
#define _BD1OST_DTS_SIZE                                    0x1
#define _BD1OST_DTS_LENGTH                                  0x1
#define _BD1OST_DTS_MASK                                    0x8

// Register: BD1OBC
#define BD1OBC BD1OBC
extern volatile unsigned char           BD1OBC              __at(0x1A9);
#ifndef _LIB_BUILD
asm("BD1OBC equ 01A9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BC                     :4;
    };
    struct {
        unsigned BC0                    :1;
        unsigned BC1                    :1;
        unsigned BC2                    :1;
        unsigned BC3                    :1;
    };
} BD1OBCbits_t;
extern volatile BD1OBCbits_t BD1OBCbits __at(0x1A9);
// bitfield macros
#define _BD1OBC_BC_POSN                                     0x0
#define _BD1OBC_BC_POSITION                                 0x0
#define _BD1OBC_BC_SIZE                                     0x4
#define _BD1OBC_BC_LENGTH                                   0x4
#define _BD1OBC_BC_MASK                                     0xF
#define _BD1OBC_BC0_POSN                                    0x0
#define _BD1OBC_BC0_POSITION                                0x0
#define _BD1OBC_BC0_SIZE                                    0x1
#define _BD1OBC_BC0_LENGTH                                  0x1
#define _BD1OBC_BC0_MASK                                    0x1
#define _BD1OBC_BC1_POSN                                    0x1
#define _BD1OBC_BC1_POSITION                                0x1
#define _BD1OBC_BC1_SIZE                                    0x1
#define _BD1OBC_BC1_LENGTH                                  0x1
#define _BD1OBC_BC1_MASK                                    0x2
#define _BD1OBC_BC2_POSN                                    0x2
#define _BD1OBC_BC2_POSITION                                0x2
#define _BD1OBC_BC2_SIZE                                    0x1
#define _BD1OBC_BC2_LENGTH                                  0x1
#define _BD1OBC_BC2_MASK                                    0x4
#define _BD1OBC_BC3_POSN                                    0x3
#define _BD1OBC_BC3_POSITION                                0x3
#define _BD1OBC_BC3_SIZE                                    0x1
#define _BD1OBC_BC3_LENGTH                                  0x1
#define _BD1OBC_BC3_MASK                                    0x8

// Register: BD1OAL
#define BD1OAL BD1OAL
extern volatile unsigned char           BD1OAL              __at(0x1AA);
#ifndef _LIB_BUILD
asm("BD1OAL equ 01AAh");
#endif

// Register: BD1IST
#define BD1IST BD1IST
extern volatile unsigned char           BD1IST              __at(0x1AC);
#ifndef _LIB_BUILD
asm("BD1IST equ 01ACh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned PID0_BSTALL            :1;
        unsigned PID1_DTS               :1;
        unsigned PID2                   :1;
        unsigned PID3                   :1;
        unsigned DATA0_1                :1;
        unsigned UOWN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PID0                   :1;
        unsigned PID1                   :1;
        unsigned                        :2;
        unsigned DATA01                 :1;
        unsigned OWN                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned BSTALL                 :1;
        unsigned DTS                    :1;
    };
} BD1ISTbits_t;
extern volatile BD1ISTbits_t BD1ISTbits __at(0x1AC);
// bitfield macros
#define _BD1IST_PID0_BSTALL_POSN                            0x2
#define _BD1IST_PID0_BSTALL_POSITION                        0x2
#define _BD1IST_PID0_BSTALL_SIZE                            0x1
#define _BD1IST_PID0_BSTALL_LENGTH                          0x1
#define _BD1IST_PID0_BSTALL_MASK                            0x4
#define _BD1IST_PID1_DTS_POSN                               0x3
#define _BD1IST_PID1_DTS_POSITION                           0x3
#define _BD1IST_PID1_DTS_SIZE                               0x1
#define _BD1IST_PID1_DTS_LENGTH                             0x1
#define _BD1IST_PID1_DTS_MASK                               0x8
#define _BD1IST_PID2_POSN                                   0x4
#define _BD1IST_PID2_POSITION                               0x4
#define _BD1IST_PID2_SIZE                                   0x1
#define _BD1IST_PID2_LENGTH                                 0x1
#define _BD1IST_PID2_MASK                                   0x10
#define _BD1IST_PID3_POSN                                   0x5
#define _BD1IST_PID3_POSITION                               0x5
#define _BD1IST_PID3_SIZE                                   0x1
#define _BD1IST_PID3_LENGTH                                 0x1
#define _BD1IST_PID3_MASK                                   0x20
#define _BD1IST_DATA0_1_POSN                                0x6
#define _BD1IST_DATA0_1_POSITION                            0x6
#define _BD1IST_DATA0_1_SIZE                                0x1
#define _BD1IST_DATA0_1_LENGTH                              0x1
#define _BD1IST_DATA0_1_MASK                                0x40
#define _BD1IST_UOWN_POSN                                   0x7
#define _BD1IST_UOWN_POSITION                               0x7
#define _BD1IST_UOWN_SIZE                                   0x1
#define _BD1IST_UOWN_LENGTH                                 0x1
#define _BD1IST_UOWN_MASK                                   0x80
#define _BD1IST_PID0_POSN                                   0x2
#define _BD1IST_PID0_POSITION                               0x2
#define _BD1IST_PID0_SIZE                                   0x1
#define _BD1IST_PID0_LENGTH                                 0x1
#define _BD1IST_PID0_MASK                                   0x4
#define _BD1IST_PID1_POSN                                   0x3
#define _BD1IST_PID1_POSITION                               0x3
#define _BD1IST_PID1_SIZE                                   0x1
#define _BD1IST_PID1_LENGTH                                 0x1
#define _BD1IST_PID1_MASK                                   0x8
#define _BD1IST_DATA01_POSN                                 0x6
#define _BD1IST_DATA01_POSITION                             0x6
#define _BD1IST_DATA01_SIZE                                 0x1
#define _BD1IST_DATA01_LENGTH                               0x1
#define _BD1IST_DATA01_MASK                                 0x40
#define _BD1IST_OWN_POSN                                    0x7
#define _BD1IST_OWN_POSITION                                0x7
#define _BD1IST_OWN_SIZE                                    0x1
#define _BD1IST_OWN_LENGTH                                  0x1
#define _BD1IST_OWN_MASK                                    0x80
#define _BD1IST_BSTALL_POSN                                 0x2
#define _BD1IST_BSTALL_POSITION                             0x2
#define _BD1IST_BSTALL_SIZE                                 0x1
#define _BD1IST_BSTALL_LENGTH                               0x1
#define _BD1IST_BSTALL_MASK                                 0x4
#define _BD1IST_DTS_POSN                                    0x3
#define _BD1IST_DTS_POSITION                                0x3
#define _BD1IST_DTS_SIZE                                    0x1
#define _BD1IST_DTS_LENGTH                                  0x1
#define _BD1IST_DTS_MASK                                    0x8

// Register: BD1IBC
#define BD1IBC BD1IBC
extern volatile unsigned char           BD1IBC              __at(0x1AD);
#ifndef _LIB_BUILD
asm("BD1IBC equ 01ADh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BC                     :4;
    };
    struct {
        unsigned BC0                    :1;
        unsigned BC1                    :1;
        unsigned BC2                    :1;
        unsigned BC3                    :1;
    };
} BD1IBCbits_t;
extern volatile BD1IBCbits_t BD1IBCbits __at(0x1AD);
// bitfield macros
#define _BD1IBC_BC_POSN                                     0x0
#define _BD1IBC_BC_POSITION                                 0x0
#define _BD1IBC_BC_SIZE                                     0x4
#define _BD1IBC_BC_LENGTH                                   0x4
#define _BD1IBC_BC_MASK                                     0xF
#define _BD1IBC_BC0_POSN                                    0x0
#define _BD1IBC_BC0_POSITION                                0x0
#define _BD1IBC_BC0_SIZE                                    0x1
#define _BD1IBC_BC0_LENGTH                                  0x1
#define _BD1IBC_BC0_MASK                                    0x1
#define _BD1IBC_BC1_POSN                                    0x1
#define _BD1IBC_BC1_POSITION                                0x1
#define _BD1IBC_BC1_SIZE                                    0x1
#define _BD1IBC_BC1_LENGTH                                  0x1
#define _BD1IBC_BC1_MASK                                    0x2
#define _BD1IBC_BC2_POSN                                    0x2
#define _BD1IBC_BC2_POSITION                                0x2
#define _BD1IBC_BC2_SIZE                                    0x1
#define _BD1IBC_BC2_LENGTH                                  0x1
#define _BD1IBC_BC2_MASK                                    0x4
#define _BD1IBC_BC3_POSN                                    0x3
#define _BD1IBC_BC3_POSITION                                0x3
#define _BD1IBC_BC3_SIZE                                    0x1
#define _BD1IBC_BC3_LENGTH                                  0x1
#define _BD1IBC_BC3_MASK                                    0x8

// Register: BD1IAL
#define BD1IAL BD1IAL
extern volatile unsigned char           BD1IAL              __at(0x1AE);
#ifndef _LIB_BUILD
asm("BD1IAL equ 01AEh");
#endif

// Register: BD2OST
#define BD2OST BD2OST
extern volatile unsigned char           BD2OST              __at(0x1B0);
#ifndef _LIB_BUILD
asm("BD2OST equ 01B0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned PID0_BSTALL            :1;
        unsigned PID1_DTS               :1;
        unsigned PID2                   :1;
        unsigned PID3                   :1;
        unsigned DATA0_1                :1;
        unsigned UOWN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PID0                   :1;
        unsigned PID1                   :1;
        unsigned                        :2;
        unsigned DATA01                 :1;
        unsigned OWN                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned BSTALL                 :1;
        unsigned DTS                    :1;
    };
} BD2OSTbits_t;
extern volatile BD2OSTbits_t BD2OSTbits __at(0x1B0);
// bitfield macros
#define _BD2OST_PID0_BSTALL_POSN                            0x2
#define _BD2OST_PID0_BSTALL_POSITION                        0x2
#define _BD2OST_PID0_BSTALL_SIZE                            0x1
#define _BD2OST_PID0_BSTALL_LENGTH                          0x1
#define _BD2OST_PID0_BSTALL_MASK                            0x4
#define _BD2OST_PID1_DTS_POSN                               0x3
#define _BD2OST_PID1_DTS_POSITION                           0x3
#define _BD2OST_PID1_DTS_SIZE                               0x1
#define _BD2OST_PID1_DTS_LENGTH                             0x1
#define _BD2OST_PID1_DTS_MASK                               0x8
#define _BD2OST_PID2_POSN                                   0x4
#define _BD2OST_PID2_POSITION                               0x4
#define _BD2OST_PID2_SIZE                                   0x1
#define _BD2OST_PID2_LENGTH                                 0x1
#define _BD2OST_PID2_MASK                                   0x10
#define _BD2OST_PID3_POSN                                   0x5
#define _BD2OST_PID3_POSITION                               0x5
#define _BD2OST_PID3_SIZE                                   0x1
#define _BD2OST_PID3_LENGTH                                 0x1
#define _BD2OST_PID3_MASK                                   0x20
#define _BD2OST_DATA0_1_POSN                                0x6
#define _BD2OST_DATA0_1_POSITION                            0x6
#define _BD2OST_DATA0_1_SIZE                                0x1
#define _BD2OST_DATA0_1_LENGTH                              0x1
#define _BD2OST_DATA0_1_MASK                                0x40
#define _BD2OST_UOWN_POSN                                   0x7
#define _BD2OST_UOWN_POSITION                               0x7
#define _BD2OST_UOWN_SIZE                                   0x1
#define _BD2OST_UOWN_LENGTH                                 0x1
#define _BD2OST_UOWN_MASK                                   0x80
#define _BD2OST_PID0_POSN                                   0x2
#define _BD2OST_PID0_POSITION                               0x2
#define _BD2OST_PID0_SIZE                                   0x1
#define _BD2OST_PID0_LENGTH                                 0x1
#define _BD2OST_PID0_MASK                                   0x4
#define _BD2OST_PID1_POSN                                   0x3
#define _BD2OST_PID1_POSITION                               0x3
#define _BD2OST_PID1_SIZE                                   0x1
#define _BD2OST_PID1_LENGTH                                 0x1
#define _BD2OST_PID1_MASK                                   0x8
#define _BD2OST_DATA01_POSN                                 0x6
#define _BD2OST_DATA01_POSITION                             0x6
#define _BD2OST_DATA01_SIZE                                 0x1
#define _BD2OST_DATA01_LENGTH                               0x1
#define _BD2OST_DATA01_MASK                                 0x40
#define _BD2OST_OWN_POSN                                    0x7
#define _BD2OST_OWN_POSITION                                0x7
#define _BD2OST_OWN_SIZE                                    0x1
#define _BD2OST_OWN_LENGTH                                  0x1
#define _BD2OST_OWN_MASK                                    0x80
#define _BD2OST_BSTALL_POSN                                 0x2
#define _BD2OST_BSTALL_POSITION                             0x2
#define _BD2OST_BSTALL_SIZE                                 0x1
#define _BD2OST_BSTALL_LENGTH                               0x1
#define _BD2OST_BSTALL_MASK                                 0x4
#define _BD2OST_DTS_POSN                                    0x3
#define _BD2OST_DTS_POSITION                                0x3
#define _BD2OST_DTS_SIZE                                    0x1
#define _BD2OST_DTS_LENGTH                                  0x1
#define _BD2OST_DTS_MASK                                    0x8

// Register: BD2OBC
#define BD2OBC BD2OBC
extern volatile unsigned char           BD2OBC              __at(0x1B1);
#ifndef _LIB_BUILD
asm("BD2OBC equ 01B1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BC                     :4;
    };
    struct {
        unsigned BC0                    :1;
        unsigned BC1                    :1;
        unsigned BC2                    :1;
        unsigned BC3                    :1;
    };
} BD2OBCbits_t;
extern volatile BD2OBCbits_t BD2OBCbits __at(0x1B1);
// bitfield macros
#define _BD2OBC_BC_POSN                                     0x0
#define _BD2OBC_BC_POSITION                                 0x0
#define _BD2OBC_BC_SIZE                                     0x4
#define _BD2OBC_BC_LENGTH                                   0x4
#define _BD2OBC_BC_MASK                                     0xF
#define _BD2OBC_BC0_POSN                                    0x0
#define _BD2OBC_BC0_POSITION                                0x0
#define _BD2OBC_BC0_SIZE                                    0x1
#define _BD2OBC_BC0_LENGTH                                  0x1
#define _BD2OBC_BC0_MASK                                    0x1
#define _BD2OBC_BC1_POSN                                    0x1
#define _BD2OBC_BC1_POSITION                                0x1
#define _BD2OBC_BC1_SIZE                                    0x1
#define _BD2OBC_BC1_LENGTH                                  0x1
#define _BD2OBC_BC1_MASK                                    0x2
#define _BD2OBC_BC2_POSN                                    0x2
#define _BD2OBC_BC2_POSITION                                0x2
#define _BD2OBC_BC2_SIZE                                    0x1
#define _BD2OBC_BC2_LENGTH                                  0x1
#define _BD2OBC_BC2_MASK                                    0x4
#define _BD2OBC_BC3_POSN                                    0x3
#define _BD2OBC_BC3_POSITION                                0x3
#define _BD2OBC_BC3_SIZE                                    0x1
#define _BD2OBC_BC3_LENGTH                                  0x1
#define _BD2OBC_BC3_MASK                                    0x8

// Register: BD2OAL
#define BD2OAL BD2OAL
extern volatile unsigned char           BD2OAL              __at(0x1B2);
#ifndef _LIB_BUILD
asm("BD2OAL equ 01B2h");
#endif

// Register: BD2IST
#define BD2IST BD2IST
extern volatile unsigned char           BD2IST              __at(0x1B4);
#ifndef _LIB_BUILD
asm("BD2IST equ 01B4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned PID0_BSTALL            :1;
        unsigned PID1_DTS               :1;
        unsigned PID2                   :1;
        unsigned PID3                   :1;
        unsigned DATA0_1                :1;
        unsigned UOWN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PID0                   :1;
        unsigned PID1                   :1;
        unsigned                        :2;
        unsigned DATA01                 :1;
        unsigned OWN                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned BSTALL                 :1;
        unsigned DTS                    :1;
    };
} BD2ISTbits_t;
extern volatile BD2ISTbits_t BD2ISTbits __at(0x1B4);
// bitfield macros
#define _BD2IST_PID0_BSTALL_POSN                            0x2
#define _BD2IST_PID0_BSTALL_POSITION                        0x2
#define _BD2IST_PID0_BSTALL_SIZE                            0x1
#define _BD2IST_PID0_BSTALL_LENGTH                          0x1
#define _BD2IST_PID0_BSTALL_MASK                            0x4
#define _BD2IST_PID1_DTS_POSN                               0x3
#define _BD2IST_PID1_DTS_POSITION                           0x3
#define _BD2IST_PID1_DTS_SIZE                               0x1
#define _BD2IST_PID1_DTS_LENGTH                             0x1
#define _BD2IST_PID1_DTS_MASK                               0x8
#define _BD2IST_PID2_POSN                                   0x4
#define _BD2IST_PID2_POSITION                               0x4
#define _BD2IST_PID2_SIZE                                   0x1
#define _BD2IST_PID2_LENGTH                                 0x1
#define _BD2IST_PID2_MASK                                   0x10
#define _BD2IST_PID3_POSN                                   0x5
#define _BD2IST_PID3_POSITION                               0x5
#define _BD2IST_PID3_SIZE                                   0x1
#define _BD2IST_PID3_LENGTH                                 0x1
#define _BD2IST_PID3_MASK                                   0x20
#define _BD2IST_DATA0_1_POSN                                0x6
#define _BD2IST_DATA0_1_POSITION                            0x6
#define _BD2IST_DATA0_1_SIZE                                0x1
#define _BD2IST_DATA0_1_LENGTH                              0x1
#define _BD2IST_DATA0_1_MASK                                0x40
#define _BD2IST_UOWN_POSN                                   0x7
#define _BD2IST_UOWN_POSITION                               0x7
#define _BD2IST_UOWN_SIZE                                   0x1
#define _BD2IST_UOWN_LENGTH                                 0x1
#define _BD2IST_UOWN_MASK                                   0x80
#define _BD2IST_PID0_POSN                                   0x2
#define _BD2IST_PID0_POSITION                               0x2
#define _BD2IST_PID0_SIZE                                   0x1
#define _BD2IST_PID0_LENGTH                                 0x1
#define _BD2IST_PID0_MASK                                   0x4
#define _BD2IST_PID1_POSN                                   0x3
#define _BD2IST_PID1_POSITION                               0x3
#define _BD2IST_PID1_SIZE                                   0x1
#define _BD2IST_PID1_LENGTH                                 0x1
#define _BD2IST_PID1_MASK                                   0x8
#define _BD2IST_DATA01_POSN                                 0x6
#define _BD2IST_DATA01_POSITION                             0x6
#define _BD2IST_DATA01_SIZE                                 0x1
#define _BD2IST_DATA01_LENGTH                               0x1
#define _BD2IST_DATA01_MASK                                 0x40
#define _BD2IST_OWN_POSN                                    0x7
#define _BD2IST_OWN_POSITION                                0x7
#define _BD2IST_OWN_SIZE                                    0x1
#define _BD2IST_OWN_LENGTH                                  0x1
#define _BD2IST_OWN_MASK                                    0x80
#define _BD2IST_BSTALL_POSN                                 0x2
#define _BD2IST_BSTALL_POSITION                             0x2
#define _BD2IST_BSTALL_SIZE                                 0x1
#define _BD2IST_BSTALL_LENGTH                               0x1
#define _BD2IST_BSTALL_MASK                                 0x4
#define _BD2IST_DTS_POSN                                    0x3
#define _BD2IST_DTS_POSITION                                0x3
#define _BD2IST_DTS_SIZE                                    0x1
#define _BD2IST_DTS_LENGTH                                  0x1
#define _BD2IST_DTS_MASK                                    0x8

// Register: BD2IBC
#define BD2IBC BD2IBC
extern volatile unsigned char           BD2IBC              __at(0x1B5);
#ifndef _LIB_BUILD
asm("BD2IBC equ 01B5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BC                     :4;
    };
    struct {
        unsigned BC0                    :1;
        unsigned BC1                    :1;
        unsigned BC2                    :1;
        unsigned BC3                    :1;
    };
} BD2IBCbits_t;
extern volatile BD2IBCbits_t BD2IBCbits __at(0x1B5);
// bitfield macros
#define _BD2IBC_BC_POSN                                     0x0
#define _BD2IBC_BC_POSITION                                 0x0
#define _BD2IBC_BC_SIZE                                     0x4
#define _BD2IBC_BC_LENGTH                                   0x4
#define _BD2IBC_BC_MASK                                     0xF
#define _BD2IBC_BC0_POSN                                    0x0
#define _BD2IBC_BC0_POSITION                                0x0
#define _BD2IBC_BC0_SIZE                                    0x1
#define _BD2IBC_BC0_LENGTH                                  0x1
#define _BD2IBC_BC0_MASK                                    0x1
#define _BD2IBC_BC1_POSN                                    0x1
#define _BD2IBC_BC1_POSITION                                0x1
#define _BD2IBC_BC1_SIZE                                    0x1
#define _BD2IBC_BC1_LENGTH                                  0x1
#define _BD2IBC_BC1_MASK                                    0x2
#define _BD2IBC_BC2_POSN                                    0x2
#define _BD2IBC_BC2_POSITION                                0x2
#define _BD2IBC_BC2_SIZE                                    0x1
#define _BD2IBC_BC2_LENGTH                                  0x1
#define _BD2IBC_BC2_MASK                                    0x4
#define _BD2IBC_BC3_POSN                                    0x3
#define _BD2IBC_BC3_POSITION                                0x3
#define _BD2IBC_BC3_SIZE                                    0x1
#define _BD2IBC_BC3_LENGTH                                  0x1
#define _BD2IBC_BC3_MASK                                    0x8

// Register: BD2IAL
#define BD2IAL BD2IAL
extern volatile unsigned char           BD2IAL              __at(0x1B6);
#ifndef _LIB_BUILD
asm("BD2IAL equ 01B6h");
#endif

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
// ADCON0<ADCS0>
extern volatile __bit                   ADCS0               __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON0,6)
// ADCON0<ADCS1>
extern volatile __bit                   ADCS1               __at(0xFF);	// @ (0x1F * 8 + 7)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON0,7)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x466);	// @ (0x8C * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x66);	// @ (0xC * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// TXSTA<BRGH>
extern volatile __bit                   BRGH                __at(0x4C2);	// @ (0x98 * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TXSTA,2)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x462);	// @ (0x8C * 8 + 2)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE1,2)
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x62);	// @ (0xC * 8 + 2)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR1,2)
// CCP1CON<CCP1M0>
extern volatile __bit                   CCP1M0              __at(0xB8);	// @ (0x17 * 8 + 0)
#define                                 CCP1M0_bit          _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1M1>
extern volatile __bit                   CCP1M1              __at(0xB9);	// @ (0x17 * 8 + 1)
#define                                 CCP1M1_bit          _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1M2>
extern volatile __bit                   CCP1M2              __at(0xBA);	// @ (0x17 * 8 + 2)
#define                                 CCP1M2_bit          _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1M3>
extern volatile __bit                   CCP1M3              __at(0xBB);	// @ (0x17 * 8 + 3)
#define                                 CCP1M3_bit          _BIT_ACCESS(CCP1CON,3)
// PIE2<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x468);	// @ (0x8D * 8 + 0)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x68);	// @ (0xD * 8 + 0)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR2,0)
// CCP2CON<CCP2M0>
extern volatile __bit                   CCP2M0              __at(0xE8);	// @ (0x1D * 8 + 0)
#define                                 CCP2M0_bit          _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2M1>
extern volatile __bit                   CCP2M1              __at(0xE9);	// @ (0x1D * 8 + 1)
#define                                 CCP2M1_bit          _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2M2>
extern volatile __bit                   CCP2M2              __at(0xEA);	// @ (0x1D * 8 + 2)
#define                                 CCP2M2_bit          _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2M3>
extern volatile __bit                   CCP2M3              __at(0xEB);	// @ (0x1D * 8 + 3)
#define                                 CCP2M3_bit          _BIT_ACCESS(CCP2CON,3)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,5)
// RCSTA<CREN>
extern volatile __bit                   CREN                __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RCSTA,4)
// TXSTA<CSRC>
extern volatile __bit                   CSRC                __at(0x4C7);	// @ (0x98 * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TXSTA,7)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// CCP1CON<DC1B0>
extern volatile __bit                   DC1B0               __at(0xBC);	// @ (0x17 * 8 + 4)
#define                                 DC1B0_bit           _BIT_ACCESS(CCP1CON,4)
// CCP1CON<DC1B1>
extern volatile __bit                   DC1B1               __at(0xBD);	// @ (0x17 * 8 + 5)
#define                                 DC1B1_bit           _BIT_ACCESS(CCP1CON,5)
// CCP2CON<DC2B0>
extern volatile __bit                   DC2B0               __at(0xEC);	// @ (0x1D * 8 + 4)
#define                                 DC2B0_bit           _BIT_ACCESS(CCP2CON,4)
// CCP2CON<DC2B1>
extern volatile __bit                   DC2B1               __at(0xED);	// @ (0x1D * 8 + 5)
#define                                 DC2B1_bit           _BIT_ACCESS(CCP2CON,5)
// UCTRL<DEV_ATT>
extern volatile __bit                   DEV_ATT             __at(0xCAB);	// @ (0x195 * 8 + 3)
#define                                 DEV_ATT_bit         _BIT_ACCESS(UCTRL,3)
// USTAT<ENDP0>
extern volatile __bit                   ENDP0               __at(0xCA3);	// @ (0x194 * 8 + 3)
#define                                 ENDP0_bit           _BIT_ACCESS(USTAT,3)
// USTAT<ENDP1>
extern volatile __bit                   ENDP1               __at(0xCA4);	// @ (0x194 * 8 + 4)
#define                                 ENDP1_bit           _BIT_ACCESS(USTAT,4)
// RCSTA<FERR>
extern volatile __bit                   FERR                __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RCSTA,2)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,2)
// ADCON0<GO_DONE>
extern volatile __bit                   GO_DONE             __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 GO_DONE_bit         _BIT_ACCESS(ADCON0,2)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,2)
// TRISE<IBF>
extern volatile __bit                   IBF                 __at(0x44F);	// @ (0x89 * 8 + 7)
#define                                 IBF_bit             _BIT_ACCESS(TRISE,7)
// TRISE<IBOV>
extern volatile __bit                   IBOV                __at(0x44D);	// @ (0x89 * 8 + 5)
#define                                 IBOV_bit            _BIT_ACCESS(TRISE,5)
// USTAT<IN>
extern volatile __bit                   IN                  __at(0xCA2);	// @ (0x194 * 8 + 2)
#define                                 IN_bit              _BIT_ACCESS(USTAT,2)
// INTCON<INTE>
extern volatile __bit                   INTE                __at(0x5C);	// @ (0xB * 8 + 4)
#define                                 INTE_bit            _BIT_ACCESS(INTCON,4)
// OPTION_REG<INTEDG>
extern volatile __bit                   INTEDG              __at(0x40E);	// @ (0x81 * 8 + 6)
#define                                 INTEDG_bit          _BIT_ACCESS(OPTION_REG,6)
// INTCON<INTF>
extern volatile __bit                   INTF                __at(0x59);	// @ (0xB * 8 + 1)
#define                                 INTF_bit            _BIT_ACCESS(INTCON,1)
// STATUS<IRP>
extern volatile __bit                   IRP                 __at(0x1F);	// @ (0x3 * 8 + 7)
#define                                 IRP_bit             _BIT_ACCESS(STATUS,7)
// TRISE<OBF>
extern volatile __bit                   OBF                 __at(0x44E);	// @ (0x89 * 8 + 6)
#define                                 OBF_bit             _BIT_ACCESS(TRISE,6)
// RCSTA<OERR>
extern volatile __bit                   OERR                __at(0xC1);	// @ (0x18 * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RCSTA,1)
// ADCON1<PCFG0>
extern volatile __bit                   PCFG0               __at(0x4F8);	// @ (0x9F * 8 + 0)
#define                                 PCFG0_bit           _BIT_ACCESS(ADCON1,0)
// ADCON1<PCFG1>
extern volatile __bit                   PCFG1               __at(0x4F9);	// @ (0x9F * 8 + 1)
#define                                 PCFG1_bit           _BIT_ACCESS(ADCON1,1)
// ADCON1<PCFG2>
extern volatile __bit                   PCFG2               __at(0x4FA);	// @ (0x9F * 8 + 2)
#define                                 PCFG2_bit           _BIT_ACCESS(ADCON1,2)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// UCTRL<PKT_DIS>
extern volatile __bit                   PKT_DIS             __at(0xCAC);	// @ (0x195 * 8 + 4)
#define                                 PKT_DIS_bit         _BIT_ACCESS(UCTRL,4)
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
// PIE1<PSPIE>
extern volatile __bit                   PSPIE               __at(0x467);	// @ (0x8C * 8 + 7)
#define                                 PSPIE_bit           _BIT_ACCESS(PIE1,7)
// PIR1<PSPIF>
extern volatile __bit                   PSPIF               __at(0x67);	// @ (0xC * 8 + 7)
#define                                 PSPIF_bit           _BIT_ACCESS(PIR1,7)
// TRISE<PSPMODE>
extern volatile __bit                   PSPMODE             __at(0x44C);	// @ (0x89 * 8 + 4)
#define                                 PSPMODE_bit         _BIT_ACCESS(TRISE,4)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x28);	// @ (0x5 * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x29);	// @ (0x5 * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// PORTA<RA2>
extern volatile __bit                   RA2                 __at(0x2A);	// @ (0x5 * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x2B);	// @ (0x5 * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x2C);	// @ (0x5 * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x2D);	// @ (0x5 * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
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
// PORTB<RB6>
extern volatile __bit                   RB6                 __at(0x36);	// @ (0x6 * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTB,6)
// PORTB<RB7>
extern volatile __bit                   RB7                 __at(0x37);	// @ (0x6 * 8 + 7)
#define                                 RB7_bit             _BIT_ACCESS(PORTB,7)
// INTCON<RBIE>
extern volatile __bit                   RBIE                __at(0x5B);	// @ (0xB * 8 + 3)
#define                                 RBIE_bit            _BIT_ACCESS(INTCON,3)
// INTCON<RBIF>
extern volatile __bit                   RBIF                __at(0x58);	// @ (0xB * 8 + 0)
#define                                 RBIF_bit            _BIT_ACCESS(INTCON,0)
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x38);	// @ (0x7 * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x39);	// @ (0x7 * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x3A);	// @ (0x7 * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// PORTC<RC6>
extern volatile __bit                   RC6                 __at(0x3E);	// @ (0x7 * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// PORTC<RC7>
extern volatile __bit                   RC7                 __at(0x3F);	// @ (0x7 * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
// RCSTA<RC8_9>
extern volatile __bit                   RC8_9               __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RC8_9_bit           _BIT_ACCESS(RCSTA,6)
// RCSTA<RC9>
extern volatile __bit                   RC9                 __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RC9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RCD8>
extern volatile __bit                   RCD8                __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 RCD8_bit            _BIT_ACCESS(RCSTA,0)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x65);	// @ (0xC * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// PORTD<RD0>
extern volatile __bit                   RD0                 __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 RD0_bit             _BIT_ACCESS(PORTD,0)
// PORTD<RD1>
extern volatile __bit                   RD1                 __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 RD1_bit             _BIT_ACCESS(PORTD,1)
// PORTD<RD2>
extern volatile __bit                   RD2                 __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 RD2_bit             _BIT_ACCESS(PORTD,2)
// PORTD<RD3>
extern volatile __bit                   RD3                 __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 RD3_bit             _BIT_ACCESS(PORTD,3)
// PORTD<RD4>
extern volatile __bit                   RD4                 __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 RD4_bit             _BIT_ACCESS(PORTD,4)
// PORTD<RD5>
extern volatile __bit                   RD5                 __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 RD5_bit             _BIT_ACCESS(PORTD,5)
// PORTD<RD6>
extern volatile __bit                   RD6                 __at(0x46);	// @ (0x8 * 8 + 6)
#define                                 RD6_bit             _BIT_ACCESS(PORTD,6)
// PORTD<RD7>
extern volatile __bit                   RD7                 __at(0x47);	// @ (0x8 * 8 + 7)
#define                                 RD7_bit             _BIT_ACCESS(PORTD,7)
// PORTE<RE0>
extern volatile __bit                   RE0                 __at(0x48);	// @ (0x9 * 8 + 0)
#define                                 RE0_bit             _BIT_ACCESS(PORTE,0)
// PORTE<RE1>
extern volatile __bit                   RE1                 __at(0x49);	// @ (0x9 * 8 + 1)
#define                                 RE1_bit             _BIT_ACCESS(PORTE,1)
// PORTE<RE2>
extern volatile __bit                   RE2                 __at(0x4A);	// @ (0x9 * 8 + 2)
#define                                 RE2_bit             _BIT_ACCESS(PORTE,2)
// UCTRL<RESUME>
extern volatile __bit                   RESUME              __at(0xCAA);	// @ (0x195 * 8 + 2)
#define                                 RESUME_bit          _BIT_ACCESS(UCTRL,2)
// STATUS<RP0>
extern volatile __bit                   RP0                 __at(0x1D);	// @ (0x3 * 8 + 5)
#define                                 RP0_bit             _BIT_ACCESS(STATUS,5)
// STATUS<RP1>
extern volatile __bit                   RP1                 __at(0x1E);	// @ (0x3 * 8 + 6)
#define                                 RP1_bit             _BIT_ACCESS(STATUS,6)
// RCSTA<RX9>
extern volatile __bit                   RX9                 __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RCSTA,6)
// RCSTA<RX9D>
extern volatile __bit                   RX9D                __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RCSTA,0)
// UCTRL<SE0>
extern volatile __bit                   SE0                 __at(0xCAD);	// @ (0x195 * 8 + 5)
#define                                 SE0_bit             _BIT_ACCESS(UCTRL,5)
// RCSTA<SPEN>
extern volatile __bit                   SPEN                __at(0xC7);	// @ (0x18 * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RCSTA,7)
// RCSTA<SREN>
extern volatile __bit                   SREN                __at(0xC5);	// @ (0x18 * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RCSTA,5)
// UCTRL<SUSPND>
extern volatile __bit                   SUSPND              __at(0xCA9);	// @ (0x195 * 8 + 1)
#define                                 SUSPND_bit          _BIT_ACCESS(UCTRL,1)
// TXSTA<SYNC>
extern volatile __bit                   SYNC                __at(0x4C4);	// @ (0x98 * 8 + 4)
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
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1CON<T1INSYNC>
extern volatile __bit                   T1INSYNC            __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 T1INSYNC_bit        _BIT_ACCESS(T1CON,2)
// T1CON<T1OSCEN>
extern volatile __bit                   T1OSCEN             __at(0x83);	// @ (0x10 * 8 + 3)
#define                                 T1OSCEN_bit         _BIT_ACCESS(T1CON,3)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// INTCON<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x5D);	// @ (0xB * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(INTCON,5)
// INTCON<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x5A);	// @ (0xB * 8 + 2)
#define                                 TMR0IF_bit          _BIT_ACCESS(INTCON,2)
// T1CON<TMR1CS>
extern volatile __bit                   TMR1CS              __at(0x81);	// @ (0x10 * 8 + 1)
#define                                 TMR1CS_bit          _BIT_ACCESS(T1CON,1)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x460);	// @ (0x8C * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x60);	// @ (0xC * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x80);	// @ (0x10 * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x61);	// @ (0xC * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// T2CON<TOUTPS0>
extern volatile __bit                   TOUTPS0             __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 TOUTPS0_bit         _BIT_ACCESS(T2CON,3)
// T2CON<TOUTPS1>
extern volatile __bit                   TOUTPS1             __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 TOUTPS1_bit         _BIT_ACCESS(T2CON,4)
// T2CON<TOUTPS2>
extern volatile __bit                   TOUTPS2             __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 TOUTPS2_bit         _BIT_ACCESS(T2CON,5)
// T2CON<TOUTPS3>
extern volatile __bit                   TOUTPS3             __at(0x96);	// @ (0x12 * 8 + 6)
#define                                 TOUTPS3_bit         _BIT_ACCESS(T2CON,6)
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x428);	// @ (0x85 * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISA,0)
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x429);	// @ (0x85 * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISA,1)
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x42A);	// @ (0x85 * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISA,2)
// TRISA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x42B);	// @ (0x85 * 8 + 3)
#define                                 TRISA3_bit          _BIT_ACCESS(TRISA,3)
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x42C);	// @ (0x85 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x42D);	// @ (0x85 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
// TRISB<TRISB0>
extern volatile __bit                   TRISB0              __at(0x430);	// @ (0x86 * 8 + 0)
#define                                 TRISB0_bit          _BIT_ACCESS(TRISB,0)
// TRISB<TRISB1>
extern volatile __bit                   TRISB1              __at(0x431);	// @ (0x86 * 8 + 1)
#define                                 TRISB1_bit          _BIT_ACCESS(TRISB,1)
// TRISB<TRISB2>
extern volatile __bit                   TRISB2              __at(0x432);	// @ (0x86 * 8 + 2)
#define                                 TRISB2_bit          _BIT_ACCESS(TRISB,2)
// TRISB<TRISB3>
extern volatile __bit                   TRISB3              __at(0x433);	// @ (0x86 * 8 + 3)
#define                                 TRISB3_bit          _BIT_ACCESS(TRISB,3)
// TRISB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x434);	// @ (0x86 * 8 + 4)
#define                                 TRISB4_bit          _BIT_ACCESS(TRISB,4)
// TRISB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x435);	// @ (0x86 * 8 + 5)
#define                                 TRISB5_bit          _BIT_ACCESS(TRISB,5)
// TRISB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x436);	// @ (0x86 * 8 + 6)
#define                                 TRISB6_bit          _BIT_ACCESS(TRISB,6)
// TRISB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x437);	// @ (0x86 * 8 + 7)
#define                                 TRISB7_bit          _BIT_ACCESS(TRISB,7)
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0x438);	// @ (0x87 * 8 + 0)
#define                                 TRISC0_bit          _BIT_ACCESS(TRISC,0)
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0x439);	// @ (0x87 * 8 + 1)
#define                                 TRISC1_bit          _BIT_ACCESS(TRISC,1)
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0x43A);	// @ (0x87 * 8 + 2)
#define                                 TRISC2_bit          _BIT_ACCESS(TRISC,2)
// TRISC<TRISC6>
extern volatile __bit                   TRISC6              __at(0x43E);	// @ (0x87 * 8 + 6)
#define                                 TRISC6_bit          _BIT_ACCESS(TRISC,6)
// TRISC<TRISC7>
extern volatile __bit                   TRISC7              __at(0x43F);	// @ (0x87 * 8 + 7)
#define                                 TRISC7_bit          _BIT_ACCESS(TRISC,7)
// TRISD<TRISD0>
extern volatile __bit                   TRISD0              __at(0x440);	// @ (0x88 * 8 + 0)
#define                                 TRISD0_bit          _BIT_ACCESS(TRISD,0)
// TRISD<TRISD1>
extern volatile __bit                   TRISD1              __at(0x441);	// @ (0x88 * 8 + 1)
#define                                 TRISD1_bit          _BIT_ACCESS(TRISD,1)
// TRISD<TRISD2>
extern volatile __bit                   TRISD2              __at(0x442);	// @ (0x88 * 8 + 2)
#define                                 TRISD2_bit          _BIT_ACCESS(TRISD,2)
// TRISD<TRISD3>
extern volatile __bit                   TRISD3              __at(0x443);	// @ (0x88 * 8 + 3)
#define                                 TRISD3_bit          _BIT_ACCESS(TRISD,3)
// TRISD<TRISD4>
extern volatile __bit                   TRISD4              __at(0x444);	// @ (0x88 * 8 + 4)
#define                                 TRISD4_bit          _BIT_ACCESS(TRISD,4)
// TRISD<TRISD5>
extern volatile __bit                   TRISD5              __at(0x445);	// @ (0x88 * 8 + 5)
#define                                 TRISD5_bit          _BIT_ACCESS(TRISD,5)
// TRISD<TRISD6>
extern volatile __bit                   TRISD6              __at(0x446);	// @ (0x88 * 8 + 6)
#define                                 TRISD6_bit          _BIT_ACCESS(TRISD,6)
// TRISD<TRISD7>
extern volatile __bit                   TRISD7              __at(0x447);	// @ (0x88 * 8 + 7)
#define                                 TRISD7_bit          _BIT_ACCESS(TRISD,7)
// TRISE<TRISE0>
extern volatile __bit                   TRISE0              __at(0x448);	// @ (0x89 * 8 + 0)
#define                                 TRISE0_bit          _BIT_ACCESS(TRISE,0)
// TRISE<TRISE1>
extern volatile __bit                   TRISE1              __at(0x449);	// @ (0x89 * 8 + 1)
#define                                 TRISE1_bit          _BIT_ACCESS(TRISE,1)
// TRISE<TRISE2>
extern volatile __bit                   TRISE2              __at(0x44A);	// @ (0x89 * 8 + 2)
#define                                 TRISE2_bit          _BIT_ACCESS(TRISE,2)
// TXSTA<TRMT>
extern volatile __bit                   TRMT                __at(0x4C1);	// @ (0x98 * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TXSTA,1)
// TXSTA<TX8_9>
extern volatile __bit                   TX8_9               __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 TX8_9_bit           _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9>
extern volatile __bit                   TX9                 __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TXSTA,6)
// TXSTA<TX9D>
extern volatile __bit                   TX9D                __at(0x4C0);	// @ (0x98 * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TXSTA,0)
// TXSTA<TXD8>
extern volatile __bit                   TXD8                __at(0x4C0);	// @ (0x98 * 8 + 0)
#define                                 TXD8_bit            _BIT_ACCESS(TXSTA,0)
// TXSTA<TXEN>
extern volatile __bit                   TXEN                __at(0x4C5);	// @ (0x98 * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TXSTA,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x464);	// @ (0x8C * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x64);	// @ (0xC * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// PIE1<USBIE>
extern volatile __bit                   USBIE               __at(0x463);	// @ (0x8C * 8 + 3)
#define                                 USBIE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<USBIF>
extern volatile __bit                   USBIF               __at(0x63);	// @ (0xC * 8 + 3)
#define                                 USBIF_bit           _BIT_ACCESS(PIR1,3)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// PCON<nBO>
extern volatile __bit                   nBO                 __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBO_bit             _BIT_ACCESS(PCON,0)
// PCON<nBOR>
extern volatile __bit                   nBOR                __at(0x470);	// @ (0x8E * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON,0)
// ADCON0<nDONE>
extern volatile __bit                   nDONE               __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 nDONE_bit           _BIT_ACCESS(ADCON0,2)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON<nPOR>
extern volatile __bit                   nPOR                __at(0x471);	// @ (0x8E * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON,1)
// OPTION_REG<nRBPU>
extern volatile __bit                   nRBPU               __at(0x40F);	// @ (0x81 * 8 + 7)
#define                                 nRBPU_bit           _BIT_ACCESS(OPTION_REG,7)
// RCSTA<nRC8>
extern volatile __bit                   nRC8                __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 nRC8_bit            _BIT_ACCESS(RCSTA,6)
// T1CON<nT1SYNC>
extern volatile __bit                   nT1SYNC             __at(0x82);	// @ (0x10 * 8 + 2)
#define                                 nT1SYNC_bit         _BIT_ACCESS(T1CON,2)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// TXSTA<nTX8>
extern volatile __bit                   nTX8                __at(0x4C6);	// @ (0x98 * 8 + 6)
#define                                 nTX8_bit            _BIT_ACCESS(TXSTA,6)

#endif // _PIC16C765_H_
