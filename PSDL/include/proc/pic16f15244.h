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

#ifndef _PIC16F15244_H_
#define _PIC16F15244_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F15244
 */
#ifndef _XC_H_
#warning Header file pic16f15244.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

/*
 * Device Information Area (DIA) Table
 */

#define DIA_MUI                                             0x8100
#define DIA_MUI0                                            0x8100
#define DIA_MUI1                                            0x8101
#define DIA_MUI2                                            0x8102
#define DIA_MUI3                                            0x8103
#define DIA_MUI4                                            0x8104
#define DIA_MUI5                                            0x8105
#define DIA_MUI6                                            0x8106
#define DIA_MUI7                                            0x8107
#define DIA_MUI8                                            0x8108
#define DIA_MUI9                                            0x8109

#define DIA_EUI                                             0x810A
#define DIA_EUI0                                            0x810A
#define DIA_EUI1                                            0x810B
#define DIA_EUI2                                            0x810C
#define DIA_EUI3                                            0x810D
#define DIA_EUI4                                            0x810E
#define DIA_EUI5                                            0x810F
#define DIA_EUI6                                            0x8110
#define DIA_EUI7                                            0x8111

#define DIA_TSLR                                            0x8112
#define DIA_TSLR1                                           0x8112
#define DIA_TSLR2                                           0x8113
#define DIA_TSLR3                                           0x8114

#define DIA_TSHR                                            0x8115
#define DIA_TSHR1                                           0x8115
#define DIA_TSHR2                                           0x8116
#define DIA_TSHR3                                           0x8117

#define DIA_FVRA                                            0x8118
#define DIA_FVRA1X                                          0x8118
#define DIA_FVRA2X                                          0x8119
#define DIA_FVRA4X                                          0x811A

#define DIA_FVRC                                            0x811B
#define DIA_FVRC1X                                          0x811B
#define DIA_FVRC2X                                          0x811C
#define DIA_FVRC4X                                          0x811D

/*
 * Device Configuration Information (DCI) Table
 */

#define DCI_ERSIZ                                           0x8200
#define DCI_WLSIZ                                           0x8201
#define DCI_URSIZ                                           0x8202
#define DCI_EESIZ                                           0x8203
#define DCI_PCNT                                            0x8204

/*
 * Register Definitions
 */

// Register: INDF0
#define INDF0 INDF0
extern volatile unsigned char           INDF0               __at(0x000);
#ifndef _LIB_BUILD
asm("INDF0 equ 00h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF0                  :8;
    };
} INDF0bits_t;
extern volatile INDF0bits_t INDF0bits __at(0x000);
// bitfield macros
#define _INDF0_INDF0_POSN                                   0x0
#define _INDF0_INDF0_POSITION                               0x0
#define _INDF0_INDF0_SIZE                                   0x8
#define _INDF0_INDF0_LENGTH                                 0x8
#define _INDF0_INDF0_MASK                                   0xFF

// Register: INDF1
#define INDF1 INDF1
extern volatile unsigned char           INDF1               __at(0x001);
#ifndef _LIB_BUILD
asm("INDF1 equ 01h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF1                  :8;
    };
} INDF1bits_t;
extern volatile INDF1bits_t INDF1bits __at(0x001);
// bitfield macros
#define _INDF1_INDF1_POSN                                   0x0
#define _INDF1_INDF1_POSITION                               0x0
#define _INDF1_INDF1_SIZE                                   0x8
#define _INDF1_INDF1_LENGTH                                 0x8
#define _INDF1_INDF1_MASK                                   0xFF

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

// Register: FSR0
#define FSR0 FSR0
extern volatile unsigned short          FSR0                __at(0x004);

// Register: FSR0L
#define FSR0L FSR0L
extern volatile unsigned char           FSR0L               __at(0x004);
#ifndef _LIB_BUILD
asm("FSR0L equ 04h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0L                  :8;
    };
} FSR0Lbits_t;
extern volatile FSR0Lbits_t FSR0Lbits __at(0x004);
// bitfield macros
#define _FSR0L_FSR0L_POSN                                   0x0
#define _FSR0L_FSR0L_POSITION                               0x0
#define _FSR0L_FSR0L_SIZE                                   0x8
#define _FSR0L_FSR0L_LENGTH                                 0x8
#define _FSR0L_FSR0L_MASK                                   0xFF

// Register: FSR0H
#define FSR0H FSR0H
extern volatile unsigned char           FSR0H               __at(0x005);
#ifndef _LIB_BUILD
asm("FSR0H equ 05h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0H                  :8;
    };
} FSR0Hbits_t;
extern volatile FSR0Hbits_t FSR0Hbits __at(0x005);
// bitfield macros
#define _FSR0H_FSR0H_POSN                                   0x0
#define _FSR0H_FSR0H_POSITION                               0x0
#define _FSR0H_FSR0H_SIZE                                   0x8
#define _FSR0H_FSR0H_LENGTH                                 0x8
#define _FSR0H_FSR0H_MASK                                   0xFF

// Register: FSR1
#define FSR1 FSR1
extern volatile unsigned short          FSR1                __at(0x006);

// Register: FSR1L
#define FSR1L FSR1L
extern volatile unsigned char           FSR1L               __at(0x006);
#ifndef _LIB_BUILD
asm("FSR1L equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1L                  :8;
    };
} FSR1Lbits_t;
extern volatile FSR1Lbits_t FSR1Lbits __at(0x006);
// bitfield macros
#define _FSR1L_FSR1L_POSN                                   0x0
#define _FSR1L_FSR1L_POSITION                               0x0
#define _FSR1L_FSR1L_SIZE                                   0x8
#define _FSR1L_FSR1L_LENGTH                                 0x8
#define _FSR1L_FSR1L_MASK                                   0xFF

// Register: FSR1H
#define FSR1H FSR1H
extern volatile unsigned char           FSR1H               __at(0x007);
#ifndef _LIB_BUILD
asm("FSR1H equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1H                  :8;
    };
} FSR1Hbits_t;
extern volatile FSR1Hbits_t FSR1Hbits __at(0x007);
// bitfield macros
#define _FSR1H_FSR1H_POSN                                   0x0
#define _FSR1H_FSR1H_POSITION                               0x0
#define _FSR1H_FSR1H_SIZE                                   0x8
#define _FSR1H_FSR1H_LENGTH                                 0x8
#define _FSR1H_FSR1H_MASK                                   0xFF

// Register: BSR
#define BSR BSR
extern volatile unsigned char           BSR                 __at(0x008);
#ifndef _LIB_BUILD
asm("BSR equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR                    :6;
    };
    struct {
        unsigned BSR0                   :1;
        unsigned BSR1                   :1;
        unsigned BSR2                   :1;
        unsigned BSR3                   :1;
        unsigned BSR4                   :1;
        unsigned BSR5                   :1;
    };
} BSRbits_t;
extern volatile BSRbits_t BSRbits __at(0x008);
// bitfield macros
#define _BSR_BSR_POSN                                       0x0
#define _BSR_BSR_POSITION                                   0x0
#define _BSR_BSR_SIZE                                       0x6
#define _BSR_BSR_LENGTH                                     0x6
#define _BSR_BSR_MASK                                       0x3F
#define _BSR_BSR0_POSN                                      0x0
#define _BSR_BSR0_POSITION                                  0x0
#define _BSR_BSR0_SIZE                                      0x1
#define _BSR_BSR0_LENGTH                                    0x1
#define _BSR_BSR0_MASK                                      0x1
#define _BSR_BSR1_POSN                                      0x1
#define _BSR_BSR1_POSITION                                  0x1
#define _BSR_BSR1_SIZE                                      0x1
#define _BSR_BSR1_LENGTH                                    0x1
#define _BSR_BSR1_MASK                                      0x2
#define _BSR_BSR2_POSN                                      0x2
#define _BSR_BSR2_POSITION                                  0x2
#define _BSR_BSR2_SIZE                                      0x1
#define _BSR_BSR2_LENGTH                                    0x1
#define _BSR_BSR2_MASK                                      0x4
#define _BSR_BSR3_POSN                                      0x3
#define _BSR_BSR3_POSITION                                  0x3
#define _BSR_BSR3_SIZE                                      0x1
#define _BSR_BSR3_LENGTH                                    0x1
#define _BSR_BSR3_MASK                                      0x8
#define _BSR_BSR4_POSN                                      0x4
#define _BSR_BSR4_POSITION                                  0x4
#define _BSR_BSR4_SIZE                                      0x1
#define _BSR_BSR4_LENGTH                                    0x1
#define _BSR_BSR4_MASK                                      0x10
#define _BSR_BSR5_POSN                                      0x5
#define _BSR_BSR5_POSITION                                  0x5
#define _BSR_BSR5_SIZE                                      0x1
#define _BSR_BSR5_LENGTH                                    0x1
#define _BSR_BSR5_MASK                                      0x20

// Register: WREG
#define WREG WREG
extern volatile unsigned char           WREG                __at(0x009);
#ifndef _LIB_BUILD
asm("WREG equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG                   :8;
    };
} WREGbits_t;
extern volatile WREGbits_t WREGbits __at(0x009);
// bitfield macros
#define _WREG_WREG_POSN                                     0x0
#define _WREG_WREG_POSITION                                 0x0
#define _WREG_WREG_SIZE                                     0x8
#define _WREG_WREG_LENGTH                                   0x8
#define _WREG_WREG_MASK                                     0xFF

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0x00A);
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH                 :7;
    };
} PCLATHbits_t;
extern volatile PCLATHbits_t PCLATHbits __at(0x00A);
// bitfield macros
#define _PCLATH_PCLATH_POSN                                 0x0
#define _PCLATH_PCLATH_POSITION                             0x0
#define _PCLATH_PCLATH_SIZE                                 0x7
#define _PCLATH_PCLATH_LENGTH                               0x7
#define _PCLATH_PCLATH_MASK                                 0x7F

// Register: INTCON
#define INTCON INTCON
extern volatile unsigned char           INTCON              __at(0x00B);
#ifndef _LIB_BUILD
asm("INTCON equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INTEDG                 :1;
        unsigned                        :5;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
// bitfield macros
#define _INTCON_INTEDG_POSN                                 0x0
#define _INTCON_INTEDG_POSITION                             0x0
#define _INTCON_INTEDG_SIZE                                 0x1
#define _INTCON_INTEDG_LENGTH                               0x1
#define _INTCON_INTEDG_MASK                                 0x1
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

// Register: PORTA
#define PORTA PORTA
extern volatile unsigned char           PORTA               __at(0x00C);
#ifndef _LIB_BUILD
asm("PORTA equ 0Ch");
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
extern volatile PORTAbits_t PORTAbits __at(0x00C);
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
extern volatile unsigned char           PORTB               __at(0x00D);
#ifndef _LIB_BUILD
asm("PORTB equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __at(0x00D);
// bitfield macros
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
extern volatile unsigned char           PORTC               __at(0x00E);
#ifndef _LIB_BUILD
asm("PORTC equ 0Eh");
#endif
// bitfield definitions
typedef union {
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
extern volatile PORTCbits_t PORTCbits __at(0x00E);
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

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0x012);
#ifndef _LIB_BUILD
asm("TRISA equ 012h");
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
extern volatile TRISAbits_t TRISAbits __at(0x012);
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
extern volatile unsigned char           TRISB               __at(0x013);
#ifndef _LIB_BUILD
asm("TRISB equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __at(0x013);
// bitfield macros
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
extern volatile unsigned char           TRISC               __at(0x014);
#ifndef _LIB_BUILD
asm("TRISC equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __at(0x014);
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
#define _TRISC_TRISC3_POSN                                  0x3
#define _TRISC_TRISC3_POSITION                              0x3
#define _TRISC_TRISC3_SIZE                                  0x1
#define _TRISC_TRISC3_LENGTH                                0x1
#define _TRISC_TRISC3_MASK                                  0x8
#define _TRISC_TRISC4_POSN                                  0x4
#define _TRISC_TRISC4_POSITION                              0x4
#define _TRISC_TRISC4_SIZE                                  0x1
#define _TRISC_TRISC4_LENGTH                                0x1
#define _TRISC_TRISC4_MASK                                  0x10
#define _TRISC_TRISC5_POSN                                  0x5
#define _TRISC_TRISC5_POSITION                              0x5
#define _TRISC_TRISC5_SIZE                                  0x1
#define _TRISC_TRISC5_LENGTH                                0x1
#define _TRISC_TRISC5_MASK                                  0x20
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

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0x018);
#ifndef _LIB_BUILD
asm("LATA equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
        unsigned LATA3                  :1;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0x018);
// bitfield macros
#define _LATA_LATA0_POSN                                    0x0
#define _LATA_LATA0_POSITION                                0x0
#define _LATA_LATA0_SIZE                                    0x1
#define _LATA_LATA0_LENGTH                                  0x1
#define _LATA_LATA0_MASK                                    0x1
#define _LATA_LATA1_POSN                                    0x1
#define _LATA_LATA1_POSITION                                0x1
#define _LATA_LATA1_SIZE                                    0x1
#define _LATA_LATA1_LENGTH                                  0x1
#define _LATA_LATA1_MASK                                    0x2
#define _LATA_LATA2_POSN                                    0x2
#define _LATA_LATA2_POSITION                                0x2
#define _LATA_LATA2_SIZE                                    0x1
#define _LATA_LATA2_LENGTH                                  0x1
#define _LATA_LATA2_MASK                                    0x4
#define _LATA_LATA3_POSN                                    0x3
#define _LATA_LATA3_POSITION                                0x3
#define _LATA_LATA3_SIZE                                    0x1
#define _LATA_LATA3_LENGTH                                  0x1
#define _LATA_LATA3_MASK                                    0x8
#define _LATA_LATA4_POSN                                    0x4
#define _LATA_LATA4_POSITION                                0x4
#define _LATA_LATA4_SIZE                                    0x1
#define _LATA_LATA4_LENGTH                                  0x1
#define _LATA_LATA4_MASK                                    0x10
#define _LATA_LATA5_POSN                                    0x5
#define _LATA_LATA5_POSITION                                0x5
#define _LATA_LATA5_SIZE                                    0x1
#define _LATA_LATA5_LENGTH                                  0x1
#define _LATA_LATA5_MASK                                    0x20

// Register: LATB
#define LATB LATB
extern volatile unsigned char           LATB                __at(0x019);
#ifndef _LIB_BUILD
asm("LATB equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned LATB4                  :1;
        unsigned LATB5                  :1;
        unsigned LATB6                  :1;
        unsigned LATB7                  :1;
    };
} LATBbits_t;
extern volatile LATBbits_t LATBbits __at(0x019);
// bitfield macros
#define _LATB_LATB4_POSN                                    0x4
#define _LATB_LATB4_POSITION                                0x4
#define _LATB_LATB4_SIZE                                    0x1
#define _LATB_LATB4_LENGTH                                  0x1
#define _LATB_LATB4_MASK                                    0x10
#define _LATB_LATB5_POSN                                    0x5
#define _LATB_LATB5_POSITION                                0x5
#define _LATB_LATB5_SIZE                                    0x1
#define _LATB_LATB5_LENGTH                                  0x1
#define _LATB_LATB5_MASK                                    0x20
#define _LATB_LATB6_POSN                                    0x6
#define _LATB_LATB6_POSITION                                0x6
#define _LATB_LATB6_SIZE                                    0x1
#define _LATB_LATB6_LENGTH                                  0x1
#define _LATB_LATB6_MASK                                    0x40
#define _LATB_LATB7_POSN                                    0x7
#define _LATB_LATB7_POSITION                                0x7
#define _LATB_LATB7_SIZE                                    0x1
#define _LATB_LATB7_LENGTH                                  0x1
#define _LATB_LATB7_MASK                                    0x80

// Register: LATC
#define LATC LATC
extern volatile unsigned char           LATC                __at(0x01A);
#ifndef _LIB_BUILD
asm("LATC equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATC0                  :1;
        unsigned LATC1                  :1;
        unsigned LATC2                  :1;
        unsigned LATC3                  :1;
        unsigned LATC4                  :1;
        unsigned LATC5                  :1;
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
} LATCbits_t;
extern volatile LATCbits_t LATCbits __at(0x01A);
// bitfield macros
#define _LATC_LATC0_POSN                                    0x0
#define _LATC_LATC0_POSITION                                0x0
#define _LATC_LATC0_SIZE                                    0x1
#define _LATC_LATC0_LENGTH                                  0x1
#define _LATC_LATC0_MASK                                    0x1
#define _LATC_LATC1_POSN                                    0x1
#define _LATC_LATC1_POSITION                                0x1
#define _LATC_LATC1_SIZE                                    0x1
#define _LATC_LATC1_LENGTH                                  0x1
#define _LATC_LATC1_MASK                                    0x2
#define _LATC_LATC2_POSN                                    0x2
#define _LATC_LATC2_POSITION                                0x2
#define _LATC_LATC2_SIZE                                    0x1
#define _LATC_LATC2_LENGTH                                  0x1
#define _LATC_LATC2_MASK                                    0x4
#define _LATC_LATC3_POSN                                    0x3
#define _LATC_LATC3_POSITION                                0x3
#define _LATC_LATC3_SIZE                                    0x1
#define _LATC_LATC3_LENGTH                                  0x1
#define _LATC_LATC3_MASK                                    0x8
#define _LATC_LATC4_POSN                                    0x4
#define _LATC_LATC4_POSITION                                0x4
#define _LATC_LATC4_SIZE                                    0x1
#define _LATC_LATC4_LENGTH                                  0x1
#define _LATC_LATC4_MASK                                    0x10
#define _LATC_LATC5_POSN                                    0x5
#define _LATC_LATC5_POSITION                                0x5
#define _LATC_LATC5_SIZE                                    0x1
#define _LATC_LATC5_LENGTH                                  0x1
#define _LATC_LATC5_MASK                                    0x20
#define _LATC_LATC6_POSN                                    0x6
#define _LATC_LATC6_POSITION                                0x6
#define _LATC_LATC6_SIZE                                    0x1
#define _LATC_LATC6_LENGTH                                  0x1
#define _LATC_LATC6_MASK                                    0x40
#define _LATC_LATC7_POSN                                    0x7
#define _LATC_LATC7_POSITION                                0x7
#define _LATC_LATC7_SIZE                                    0x1
#define _LATC_LATC7_LENGTH                                  0x1
#define _LATC_LATC7_MASK                                    0x80

// Register: CPCON
#define CPCON CPCON
extern volatile unsigned char           CPCON               __at(0x09A);
#ifndef _LIB_BUILD
asm("CPCON equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CPRDY                  :1;
        unsigned CPT                    :1;
        unsigned                        :4;
        unsigned CPON                   :2;
    };
} CPCONbits_t;
extern volatile CPCONbits_t CPCONbits __at(0x09A);
// bitfield macros
#define _CPCON_CPRDY_POSN                                   0x0
#define _CPCON_CPRDY_POSITION                               0x0
#define _CPCON_CPRDY_SIZE                                   0x1
#define _CPCON_CPRDY_LENGTH                                 0x1
#define _CPCON_CPRDY_MASK                                   0x1
#define _CPCON_CPT_POSN                                     0x1
#define _CPCON_CPT_POSITION                                 0x1
#define _CPCON_CPT_SIZE                                     0x1
#define _CPCON_CPT_LENGTH                                   0x1
#define _CPCON_CPT_MASK                                     0x2
#define _CPCON_CPON_POSN                                    0x6
#define _CPCON_CPON_POSITION                                0x6
#define _CPCON_CPON_SIZE                                    0x2
#define _CPCON_CPON_LENGTH                                  0x2
#define _CPCON_CPON_MASK                                    0xC0

// Register: ADRES
#define ADRES ADRES
extern volatile unsigned short          ADRES               __at(0x09B);
#ifndef _LIB_BUILD
asm("ADRES equ 09Bh");
#endif

// Register: ADRESL
#define ADRESL ADRESL
extern volatile unsigned char           ADRESL              __at(0x09B);
#ifndef _LIB_BUILD
asm("ADRESL equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} ADRESLbits_t;
extern volatile ADRESLbits_t ADRESLbits __at(0x09B);
// bitfield macros
#define _ADRESL_ADRESL_POSN                                 0x0
#define _ADRESL_ADRESL_POSITION                             0x0
#define _ADRESL_ADRESL_SIZE                                 0x8
#define _ADRESL_ADRESL_LENGTH                               0x8
#define _ADRESL_ADRESL_MASK                                 0xFF

// Register: ADRESH
#define ADRESH ADRESH
extern volatile unsigned char           ADRESH              __at(0x09C);
#ifndef _LIB_BUILD
asm("ADRESH equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} ADRESHbits_t;
extern volatile ADRESHbits_t ADRESHbits __at(0x09C);
// bitfield macros
#define _ADRESH_ADRESH_POSN                                 0x0
#define _ADRESH_ADRESH_POSITION                             0x0
#define _ADRESH_ADRESH_SIZE                                 0x8
#define _ADRESH_ADRESH_LENGTH                               0x8
#define _ADRESH_ADRESH_MASK                                 0xFF

// Register: ADCON0
#define ADCON0 ADCON0
extern volatile unsigned char           ADCON0              __at(0x09D);
#ifndef _LIB_BUILD
asm("ADCON0 equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ON                     :1;
        unsigned GO                     :1;
        unsigned CHS                    :6;
    };
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned ADCHS                  :6;
    };
    struct {
        unsigned                        :1;
        unsigned ADGO                   :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x09D);
// bitfield macros
#define _ADCON0_ON_POSN                                     0x0
#define _ADCON0_ON_POSITION                                 0x0
#define _ADCON0_ON_SIZE                                     0x1
#define _ADCON0_ON_LENGTH                                   0x1
#define _ADCON0_ON_MASK                                     0x1
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x6
#define _ADCON0_CHS_LENGTH                                  0x6
#define _ADCON0_CHS_MASK                                    0xFC
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
#define _ADCON0_ADCHS_POSN                                  0x2
#define _ADCON0_ADCHS_POSITION                              0x2
#define _ADCON0_ADCHS_SIZE                                  0x6
#define _ADCON0_ADCHS_LENGTH                                0x6
#define _ADCON0_ADCHS_MASK                                  0xFC
#define _ADCON0_ADGO_POSN                                   0x1
#define _ADCON0_ADGO_POSITION                               0x1
#define _ADCON0_ADGO_SIZE                                   0x1
#define _ADCON0_ADGO_LENGTH                                 0x1
#define _ADCON0_ADGO_MASK                                   0x2

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09E);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PREF                   :2;
        unsigned                        :2;
        unsigned CS                     :3;
        unsigned FM                     :1;
    };
    struct {
        unsigned ADPREF                 :2;
        unsigned                        :2;
        unsigned ADCS                   :3;
        unsigned ADFM                   :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09E);
// bitfield macros
#define _ADCON1_PREF_POSN                                   0x0
#define _ADCON1_PREF_POSITION                               0x0
#define _ADCON1_PREF_SIZE                                   0x2
#define _ADCON1_PREF_LENGTH                                 0x2
#define _ADCON1_PREF_MASK                                   0x3
#define _ADCON1_CS_POSN                                     0x4
#define _ADCON1_CS_POSITION                                 0x4
#define _ADCON1_CS_SIZE                                     0x3
#define _ADCON1_CS_LENGTH                                   0x3
#define _ADCON1_CS_MASK                                     0x70
#define _ADCON1_FM_POSN                                     0x7
#define _ADCON1_FM_POSITION                                 0x7
#define _ADCON1_FM_SIZE                                     0x1
#define _ADCON1_FM_LENGTH                                   0x1
#define _ADCON1_FM_MASK                                     0x80
#define _ADCON1_ADPREF_POSN                                 0x0
#define _ADCON1_ADPREF_POSITION                             0x0
#define _ADCON1_ADPREF_SIZE                                 0x2
#define _ADCON1_ADPREF_LENGTH                               0x2
#define _ADCON1_ADPREF_MASK                                 0x3
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70
#define _ADCON1_ADFM_POSN                                   0x7
#define _ADCON1_ADFM_POSITION                               0x7
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x80

// Register: ADACT
#define ADACT ADACT
extern volatile unsigned char           ADACT               __at(0x09F);
#ifndef _LIB_BUILD
asm("ADACT equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ACT                    :4;
    };
    struct {
        unsigned ADACT                  :4;
    };
} ADACTbits_t;
extern volatile ADACTbits_t ADACTbits __at(0x09F);
// bitfield macros
#define _ADACT_ACT_POSN                                     0x0
#define _ADACT_ACT_POSITION                                 0x0
#define _ADACT_ACT_SIZE                                     0x4
#define _ADACT_ACT_LENGTH                                   0x4
#define _ADACT_ACT_MASK                                     0xF
#define _ADACT_ADACT_POSN                                   0x0
#define _ADACT_ADACT_POSITION                               0x0
#define _ADACT_ADACT_SIZE                                   0x4
#define _ADACT_ADACT_LENGTH                                 0x4
#define _ADACT_ADACT_MASK                                   0xF

// Register: RB4I2C
#define RB4I2C RB4I2C
extern volatile unsigned char           RB4I2C              __at(0x10C);
#ifndef _LIB_BUILD
asm("RB4I2C equ 010Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TH                     :2;
        unsigned                        :2;
        unsigned PU                     :2;
        unsigned SLEW                   :1;
    };
} RB4I2Cbits_t;
extern volatile RB4I2Cbits_t RB4I2Cbits __at(0x10C);
// bitfield macros
#define _RB4I2C_TH_POSN                                     0x0
#define _RB4I2C_TH_POSITION                                 0x0
#define _RB4I2C_TH_SIZE                                     0x2
#define _RB4I2C_TH_LENGTH                                   0x2
#define _RB4I2C_TH_MASK                                     0x3
#define _RB4I2C_PU_POSN                                     0x4
#define _RB4I2C_PU_POSITION                                 0x4
#define _RB4I2C_PU_SIZE                                     0x2
#define _RB4I2C_PU_LENGTH                                   0x2
#define _RB4I2C_PU_MASK                                     0x30
#define _RB4I2C_SLEW_POSN                                   0x6
#define _RB4I2C_SLEW_POSITION                               0x6
#define _RB4I2C_SLEW_SIZE                                   0x1
#define _RB4I2C_SLEW_LENGTH                                 0x1
#define _RB4I2C_SLEW_MASK                                   0x40

// Register: RB6I2C
#define RB6I2C RB6I2C
extern volatile unsigned char           RB6I2C              __at(0x10D);
#ifndef _LIB_BUILD
asm("RB6I2C equ 010Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TH                     :2;
        unsigned                        :2;
        unsigned PU                     :2;
        unsigned SLEW                   :1;
    };
} RB6I2Cbits_t;
extern volatile RB6I2Cbits_t RB6I2Cbits __at(0x10D);
// bitfield macros
#define _RB6I2C_TH_POSN                                     0x0
#define _RB6I2C_TH_POSITION                                 0x0
#define _RB6I2C_TH_SIZE                                     0x2
#define _RB6I2C_TH_LENGTH                                   0x2
#define _RB6I2C_TH_MASK                                     0x3
#define _RB6I2C_PU_POSN                                     0x4
#define _RB6I2C_PU_POSITION                                 0x4
#define _RB6I2C_PU_SIZE                                     0x2
#define _RB6I2C_PU_LENGTH                                   0x2
#define _RB6I2C_PU_MASK                                     0x30
#define _RB6I2C_SLEW_POSN                                   0x6
#define _RB6I2C_SLEW_POSITION                               0x6
#define _RB6I2C_SLEW_SIZE                                   0x1
#define _RB6I2C_SLEW_LENGTH                                 0x1
#define _RB6I2C_SLEW_MASK                                   0x40

// Register: RC1REG
#define RC1REG RC1REG
extern volatile unsigned char           RC1REG              __at(0x119);
#ifndef _LIB_BUILD
asm("RC1REG equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RCREG                  :8;
    };
} RC1REGbits_t;
extern volatile RC1REGbits_t RC1REGbits __at(0x119);
// bitfield macros
#define _RC1REG_RCREG_POSN                                  0x0
#define _RC1REG_RCREG_POSITION                              0x0
#define _RC1REG_RCREG_SIZE                                  0x8
#define _RC1REG_RCREG_LENGTH                                0x8
#define _RC1REG_RCREG_MASK                                  0xFF

// Register: TX1REG
#define TX1REG TX1REG
extern volatile unsigned char           TX1REG              __at(0x11A);
#ifndef _LIB_BUILD
asm("TX1REG equ 011Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXREG                  :8;
    };
} TX1REGbits_t;
extern volatile TX1REGbits_t TX1REGbits __at(0x11A);
// bitfield macros
#define _TX1REG_TXREG_POSN                                  0x0
#define _TX1REG_TXREG_POSITION                              0x0
#define _TX1REG_TXREG_SIZE                                  0x8
#define _TX1REG_TXREG_LENGTH                                0x8
#define _TX1REG_TXREG_MASK                                  0xFF

// Register: SP1BRG
#define SP1BRG SP1BRG
extern volatile unsigned short          SP1BRG              __at(0x11B);
#ifndef _LIB_BUILD
asm("SP1BRG equ 011Bh");
#endif

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
extern volatile unsigned char           SP1BRGL             __at(0x11B);
#ifndef _LIB_BUILD
asm("SP1BRGL equ 011Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGL                 :8;
    };
} SP1BRGLbits_t;
extern volatile SP1BRGLbits_t SP1BRGLbits __at(0x11B);
// bitfield macros
#define _SP1BRGL_SPBRGL_POSN                                0x0
#define _SP1BRGL_SPBRGL_POSITION                            0x0
#define _SP1BRGL_SPBRGL_SIZE                                0x8
#define _SP1BRGL_SPBRGL_LENGTH                              0x8
#define _SP1BRGL_SPBRGL_MASK                                0xFF

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
extern volatile unsigned char           SP1BRGH             __at(0x11C);
#ifndef _LIB_BUILD
asm("SP1BRGH equ 011Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPBRGH                 :8;
    };
} SP1BRGHbits_t;
extern volatile SP1BRGHbits_t SP1BRGHbits __at(0x11C);
// bitfield macros
#define _SP1BRGH_SPBRGH_POSN                                0x0
#define _SP1BRGH_SPBRGH_POSITION                            0x0
#define _SP1BRGH_SPBRGH_SIZE                                0x8
#define _SP1BRGH_SPBRGH_LENGTH                              0x8
#define _SP1BRGH_SPBRGH_MASK                                0xFF

// Register: RC1STA
#define RC1STA RC1STA
extern volatile unsigned char           RC1STA              __at(0x11D);
#ifndef _LIB_BUILD
asm("RC1STA equ 011Dh");
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
} RC1STAbits_t;
extern volatile RC1STAbits_t RC1STAbits __at(0x11D);
// bitfield macros
#define _RC1STA_RX9D_POSN                                   0x0
#define _RC1STA_RX9D_POSITION                               0x0
#define _RC1STA_RX9D_SIZE                                   0x1
#define _RC1STA_RX9D_LENGTH                                 0x1
#define _RC1STA_RX9D_MASK                                   0x1
#define _RC1STA_OERR_POSN                                   0x1
#define _RC1STA_OERR_POSITION                               0x1
#define _RC1STA_OERR_SIZE                                   0x1
#define _RC1STA_OERR_LENGTH                                 0x1
#define _RC1STA_OERR_MASK                                   0x2
#define _RC1STA_FERR_POSN                                   0x2
#define _RC1STA_FERR_POSITION                               0x2
#define _RC1STA_FERR_SIZE                                   0x1
#define _RC1STA_FERR_LENGTH                                 0x1
#define _RC1STA_FERR_MASK                                   0x4
#define _RC1STA_ADDEN_POSN                                  0x3
#define _RC1STA_ADDEN_POSITION                              0x3
#define _RC1STA_ADDEN_SIZE                                  0x1
#define _RC1STA_ADDEN_LENGTH                                0x1
#define _RC1STA_ADDEN_MASK                                  0x8
#define _RC1STA_CREN_POSN                                   0x4
#define _RC1STA_CREN_POSITION                               0x4
#define _RC1STA_CREN_SIZE                                   0x1
#define _RC1STA_CREN_LENGTH                                 0x1
#define _RC1STA_CREN_MASK                                   0x10
#define _RC1STA_SREN_POSN                                   0x5
#define _RC1STA_SREN_POSITION                               0x5
#define _RC1STA_SREN_SIZE                                   0x1
#define _RC1STA_SREN_LENGTH                                 0x1
#define _RC1STA_SREN_MASK                                   0x20
#define _RC1STA_RX9_POSN                                    0x6
#define _RC1STA_RX9_POSITION                                0x6
#define _RC1STA_RX9_SIZE                                    0x1
#define _RC1STA_RX9_LENGTH                                  0x1
#define _RC1STA_RX9_MASK                                    0x40
#define _RC1STA_SPEN_POSN                                   0x7
#define _RC1STA_SPEN_POSITION                               0x7
#define _RC1STA_SPEN_SIZE                                   0x1
#define _RC1STA_SPEN_LENGTH                                 0x1
#define _RC1STA_SPEN_MASK                                   0x80

// Register: TX1STA
#define TX1STA TX1STA
extern volatile unsigned char           TX1STA              __at(0x11E);
#ifndef _LIB_BUILD
asm("TX1STA equ 011Eh");
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
} TX1STAbits_t;
extern volatile TX1STAbits_t TX1STAbits __at(0x11E);
// bitfield macros
#define _TX1STA_TX9D_POSN                                   0x0
#define _TX1STA_TX9D_POSITION                               0x0
#define _TX1STA_TX9D_SIZE                                   0x1
#define _TX1STA_TX9D_LENGTH                                 0x1
#define _TX1STA_TX9D_MASK                                   0x1
#define _TX1STA_TRMT_POSN                                   0x1
#define _TX1STA_TRMT_POSITION                               0x1
#define _TX1STA_TRMT_SIZE                                   0x1
#define _TX1STA_TRMT_LENGTH                                 0x1
#define _TX1STA_TRMT_MASK                                   0x2
#define _TX1STA_BRGH_POSN                                   0x2
#define _TX1STA_BRGH_POSITION                               0x2
#define _TX1STA_BRGH_SIZE                                   0x1
#define _TX1STA_BRGH_LENGTH                                 0x1
#define _TX1STA_BRGH_MASK                                   0x4
#define _TX1STA_SENDB_POSN                                  0x3
#define _TX1STA_SENDB_POSITION                              0x3
#define _TX1STA_SENDB_SIZE                                  0x1
#define _TX1STA_SENDB_LENGTH                                0x1
#define _TX1STA_SENDB_MASK                                  0x8
#define _TX1STA_SYNC_POSN                                   0x4
#define _TX1STA_SYNC_POSITION                               0x4
#define _TX1STA_SYNC_SIZE                                   0x1
#define _TX1STA_SYNC_LENGTH                                 0x1
#define _TX1STA_SYNC_MASK                                   0x10
#define _TX1STA_TXEN_POSN                                   0x5
#define _TX1STA_TXEN_POSITION                               0x5
#define _TX1STA_TXEN_SIZE                                   0x1
#define _TX1STA_TXEN_LENGTH                                 0x1
#define _TX1STA_TXEN_MASK                                   0x20
#define _TX1STA_TX9_POSN                                    0x6
#define _TX1STA_TX9_POSITION                                0x6
#define _TX1STA_TX9_SIZE                                    0x1
#define _TX1STA_TX9_LENGTH                                  0x1
#define _TX1STA_TX9_MASK                                    0x40
#define _TX1STA_CSRC_POSN                                   0x7
#define _TX1STA_CSRC_POSITION                               0x7
#define _TX1STA_CSRC_SIZE                                   0x1
#define _TX1STA_CSRC_LENGTH                                 0x1
#define _TX1STA_CSRC_MASK                                   0x80

// Register: BAUD1CON
#define BAUD1CON BAUD1CON
extern volatile unsigned char           BAUD1CON            __at(0x11F);
#ifndef _LIB_BUILD
asm("BAUD1CON equ 011Fh");
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
} BAUD1CONbits_t;
extern volatile BAUD1CONbits_t BAUD1CONbits __at(0x11F);
// bitfield macros
#define _BAUD1CON_ABDEN_POSN                                0x0
#define _BAUD1CON_ABDEN_POSITION                            0x0
#define _BAUD1CON_ABDEN_SIZE                                0x1
#define _BAUD1CON_ABDEN_LENGTH                              0x1
#define _BAUD1CON_ABDEN_MASK                                0x1
#define _BAUD1CON_WUE_POSN                                  0x1
#define _BAUD1CON_WUE_POSITION                              0x1
#define _BAUD1CON_WUE_SIZE                                  0x1
#define _BAUD1CON_WUE_LENGTH                                0x1
#define _BAUD1CON_WUE_MASK                                  0x2
#define _BAUD1CON_BRG16_POSN                                0x3
#define _BAUD1CON_BRG16_POSITION                            0x3
#define _BAUD1CON_BRG16_SIZE                                0x1
#define _BAUD1CON_BRG16_LENGTH                              0x1
#define _BAUD1CON_BRG16_MASK                                0x8
#define _BAUD1CON_SCKP_POSN                                 0x4
#define _BAUD1CON_SCKP_POSITION                             0x4
#define _BAUD1CON_SCKP_SIZE                                 0x1
#define _BAUD1CON_SCKP_LENGTH                               0x1
#define _BAUD1CON_SCKP_MASK                                 0x10
#define _BAUD1CON_RCIDL_POSN                                0x6
#define _BAUD1CON_RCIDL_POSITION                            0x6
#define _BAUD1CON_RCIDL_SIZE                                0x1
#define _BAUD1CON_RCIDL_LENGTH                              0x1
#define _BAUD1CON_RCIDL_MASK                                0x40
#define _BAUD1CON_ABDOVF_POSN                               0x7
#define _BAUD1CON_ABDOVF_POSITION                           0x7
#define _BAUD1CON_ABDOVF_SIZE                               0x1
#define _BAUD1CON_ABDOVF_LENGTH                             0x1
#define _BAUD1CON_ABDOVF_MASK                               0x80

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
extern volatile unsigned char           SSP1BUF             __at(0x18C);
#ifndef _LIB_BUILD
asm("SSP1BUF equ 018Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSP1BUFbits_t;
extern volatile SSP1BUFbits_t SSP1BUFbits __at(0x18C);
// bitfield macros
#define _SSP1BUF_SSPBUF_POSN                                0x0
#define _SSP1BUF_SSPBUF_POSITION                            0x0
#define _SSP1BUF_SSPBUF_SIZE                                0x8
#define _SSP1BUF_SSPBUF_LENGTH                              0x8
#define _SSP1BUF_SSPBUF_MASK                                0xFF

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
extern volatile unsigned char           SSP1ADD             __at(0x18D);
#ifndef _LIB_BUILD
asm("SSP1ADD equ 018Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
    struct {
        unsigned MSK01                  :1;
        unsigned MSK11                  :1;
        unsigned MSK21                  :1;
        unsigned MSK31                  :1;
        unsigned MSK41                  :1;
        unsigned MSK51                  :1;
        unsigned MSK61                  :1;
        unsigned MSK71                  :1;
    };
} SSP1ADDbits_t;
extern volatile SSP1ADDbits_t SSP1ADDbits __at(0x18D);
// bitfield macros
#define _SSP1ADD_SSPADD_POSN                                0x0
#define _SSP1ADD_SSPADD_POSITION                            0x0
#define _SSP1ADD_SSPADD_SIZE                                0x8
#define _SSP1ADD_SSPADD_LENGTH                              0x8
#define _SSP1ADD_SSPADD_MASK                                0xFF
#define _SSP1ADD_MSK0_POSN                                  0x0
#define _SSP1ADD_MSK0_POSITION                              0x0
#define _SSP1ADD_MSK0_SIZE                                  0x1
#define _SSP1ADD_MSK0_LENGTH                                0x1
#define _SSP1ADD_MSK0_MASK                                  0x1
#define _SSP1ADD_MSK1_POSN                                  0x1
#define _SSP1ADD_MSK1_POSITION                              0x1
#define _SSP1ADD_MSK1_SIZE                                  0x1
#define _SSP1ADD_MSK1_LENGTH                                0x1
#define _SSP1ADD_MSK1_MASK                                  0x2
#define _SSP1ADD_MSK2_POSN                                  0x2
#define _SSP1ADD_MSK2_POSITION                              0x2
#define _SSP1ADD_MSK2_SIZE                                  0x1
#define _SSP1ADD_MSK2_LENGTH                                0x1
#define _SSP1ADD_MSK2_MASK                                  0x4
#define _SSP1ADD_MSK3_POSN                                  0x3
#define _SSP1ADD_MSK3_POSITION                              0x3
#define _SSP1ADD_MSK3_SIZE                                  0x1
#define _SSP1ADD_MSK3_LENGTH                                0x1
#define _SSP1ADD_MSK3_MASK                                  0x8
#define _SSP1ADD_MSK4_POSN                                  0x4
#define _SSP1ADD_MSK4_POSITION                              0x4
#define _SSP1ADD_MSK4_SIZE                                  0x1
#define _SSP1ADD_MSK4_LENGTH                                0x1
#define _SSP1ADD_MSK4_MASK                                  0x10
#define _SSP1ADD_MSK5_POSN                                  0x5
#define _SSP1ADD_MSK5_POSITION                              0x5
#define _SSP1ADD_MSK5_SIZE                                  0x1
#define _SSP1ADD_MSK5_LENGTH                                0x1
#define _SSP1ADD_MSK5_MASK                                  0x20
#define _SSP1ADD_MSK6_POSN                                  0x6
#define _SSP1ADD_MSK6_POSITION                              0x6
#define _SSP1ADD_MSK6_SIZE                                  0x1
#define _SSP1ADD_MSK6_LENGTH                                0x1
#define _SSP1ADD_MSK6_MASK                                  0x40
#define _SSP1ADD_MSK7_POSN                                  0x7
#define _SSP1ADD_MSK7_POSITION                              0x7
#define _SSP1ADD_MSK7_SIZE                                  0x1
#define _SSP1ADD_MSK7_LENGTH                                0x1
#define _SSP1ADD_MSK7_MASK                                  0x80
#define _SSP1ADD_MSK01_POSN                                 0x0
#define _SSP1ADD_MSK01_POSITION                             0x0
#define _SSP1ADD_MSK01_SIZE                                 0x1
#define _SSP1ADD_MSK01_LENGTH                               0x1
#define _SSP1ADD_MSK01_MASK                                 0x1
#define _SSP1ADD_MSK11_POSN                                 0x1
#define _SSP1ADD_MSK11_POSITION                             0x1
#define _SSP1ADD_MSK11_SIZE                                 0x1
#define _SSP1ADD_MSK11_LENGTH                               0x1
#define _SSP1ADD_MSK11_MASK                                 0x2
#define _SSP1ADD_MSK21_POSN                                 0x2
#define _SSP1ADD_MSK21_POSITION                             0x2
#define _SSP1ADD_MSK21_SIZE                                 0x1
#define _SSP1ADD_MSK21_LENGTH                               0x1
#define _SSP1ADD_MSK21_MASK                                 0x4
#define _SSP1ADD_MSK31_POSN                                 0x3
#define _SSP1ADD_MSK31_POSITION                             0x3
#define _SSP1ADD_MSK31_SIZE                                 0x1
#define _SSP1ADD_MSK31_LENGTH                               0x1
#define _SSP1ADD_MSK31_MASK                                 0x8
#define _SSP1ADD_MSK41_POSN                                 0x4
#define _SSP1ADD_MSK41_POSITION                             0x4
#define _SSP1ADD_MSK41_SIZE                                 0x1
#define _SSP1ADD_MSK41_LENGTH                               0x1
#define _SSP1ADD_MSK41_MASK                                 0x10
#define _SSP1ADD_MSK51_POSN                                 0x5
#define _SSP1ADD_MSK51_POSITION                             0x5
#define _SSP1ADD_MSK51_SIZE                                 0x1
#define _SSP1ADD_MSK51_LENGTH                               0x1
#define _SSP1ADD_MSK51_MASK                                 0x20
#define _SSP1ADD_MSK61_POSN                                 0x6
#define _SSP1ADD_MSK61_POSITION                             0x6
#define _SSP1ADD_MSK61_SIZE                                 0x1
#define _SSP1ADD_MSK61_LENGTH                               0x1
#define _SSP1ADD_MSK61_MASK                                 0x40
#define _SSP1ADD_MSK71_POSN                                 0x7
#define _SSP1ADD_MSK71_POSITION                             0x7
#define _SSP1ADD_MSK71_SIZE                                 0x1
#define _SSP1ADD_MSK71_LENGTH                               0x1
#define _SSP1ADD_MSK71_MASK                                 0x80

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
extern volatile unsigned char           SSP1MSK             __at(0x18E);
#ifndef _LIB_BUILD
asm("SSP1MSK equ 018Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPMSK                 :8;
    };
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
} SSP1MSKbits_t;
extern volatile SSP1MSKbits_t SSP1MSKbits __at(0x18E);
// bitfield macros
#define _SSP1MSK_SSPMSK_POSN                                0x0
#define _SSP1MSK_SSPMSK_POSITION                            0x0
#define _SSP1MSK_SSPMSK_SIZE                                0x8
#define _SSP1MSK_SSPMSK_LENGTH                              0x8
#define _SSP1MSK_SSPMSK_MASK                                0xFF
#define _SSP1MSK_MSK0_POSN                                  0x0
#define _SSP1MSK_MSK0_POSITION                              0x0
#define _SSP1MSK_MSK0_SIZE                                  0x1
#define _SSP1MSK_MSK0_LENGTH                                0x1
#define _SSP1MSK_MSK0_MASK                                  0x1
#define _SSP1MSK_MSK1_POSN                                  0x1
#define _SSP1MSK_MSK1_POSITION                              0x1
#define _SSP1MSK_MSK1_SIZE                                  0x1
#define _SSP1MSK_MSK1_LENGTH                                0x1
#define _SSP1MSK_MSK1_MASK                                  0x2
#define _SSP1MSK_MSK2_POSN                                  0x2
#define _SSP1MSK_MSK2_POSITION                              0x2
#define _SSP1MSK_MSK2_SIZE                                  0x1
#define _SSP1MSK_MSK2_LENGTH                                0x1
#define _SSP1MSK_MSK2_MASK                                  0x4
#define _SSP1MSK_MSK3_POSN                                  0x3
#define _SSP1MSK_MSK3_POSITION                              0x3
#define _SSP1MSK_MSK3_SIZE                                  0x1
#define _SSP1MSK_MSK3_LENGTH                                0x1
#define _SSP1MSK_MSK3_MASK                                  0x8
#define _SSP1MSK_MSK4_POSN                                  0x4
#define _SSP1MSK_MSK4_POSITION                              0x4
#define _SSP1MSK_MSK4_SIZE                                  0x1
#define _SSP1MSK_MSK4_LENGTH                                0x1
#define _SSP1MSK_MSK4_MASK                                  0x10
#define _SSP1MSK_MSK5_POSN                                  0x5
#define _SSP1MSK_MSK5_POSITION                              0x5
#define _SSP1MSK_MSK5_SIZE                                  0x1
#define _SSP1MSK_MSK5_LENGTH                                0x1
#define _SSP1MSK_MSK5_MASK                                  0x20
#define _SSP1MSK_MSK6_POSN                                  0x6
#define _SSP1MSK_MSK6_POSITION                              0x6
#define _SSP1MSK_MSK6_SIZE                                  0x1
#define _SSP1MSK_MSK6_LENGTH                                0x1
#define _SSP1MSK_MSK6_MASK                                  0x40
#define _SSP1MSK_MSK7_POSN                                  0x7
#define _SSP1MSK_MSK7_POSITION                              0x7
#define _SSP1MSK_MSK7_SIZE                                  0x1
#define _SSP1MSK_MSK7_LENGTH                                0x1
#define _SSP1MSK_MSK7_MASK                                  0x80

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
extern volatile unsigned char           SSP1STAT            __at(0x18F);
#ifndef _LIB_BUILD
asm("SSP1STAT equ 018Fh");
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
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DAT                :1;
    };
    struct {
        unsigned BF1                    :1;
        unsigned UA1                    :1;
        unsigned R                      :1;
        unsigned START                  :1;
        unsigned STOP                   :1;
        unsigned D                      :1;
        unsigned CKE1                   :1;
        unsigned SMP1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
        unsigned START1                 :1;
        unsigned STOP1                  :1;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW1                    :1;
        unsigned I2C_START1             :1;
        unsigned I2C_STOP2              :1;
        unsigned DA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned I2C_READ1              :1;
        unsigned S2                     :1;
        unsigned P2                     :1;
        unsigned DATA_ADDRESS1          :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE1            :1;
        unsigned                        :2;
        unsigned D_A1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W1                   :1;
        unsigned                        :2;
        unsigned D_nA1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_nW1                  :1;
        unsigned                        :2;
        unsigned I2C_DAT1               :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW2                    :1;
        unsigned                        :2;
        unsigned nA2                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE1                :1;
        unsigned                        :2;
        unsigned nADDRESS1              :1;
    };
} SSP1STATbits_t;
extern volatile SSP1STATbits_t SSP1STATbits __at(0x18F);
// bitfield macros
#define _SSP1STAT_BF_POSN                                   0x0
#define _SSP1STAT_BF_POSITION                               0x0
#define _SSP1STAT_BF_SIZE                                   0x1
#define _SSP1STAT_BF_LENGTH                                 0x1
#define _SSP1STAT_BF_MASK                                   0x1
#define _SSP1STAT_UA_POSN                                   0x1
#define _SSP1STAT_UA_POSITION                               0x1
#define _SSP1STAT_UA_SIZE                                   0x1
#define _SSP1STAT_UA_LENGTH                                 0x1
#define _SSP1STAT_UA_MASK                                   0x2
#define _SSP1STAT_R_nW_POSN                                 0x2
#define _SSP1STAT_R_nW_POSITION                             0x2
#define _SSP1STAT_R_nW_SIZE                                 0x1
#define _SSP1STAT_R_nW_LENGTH                               0x1
#define _SSP1STAT_R_nW_MASK                                 0x4
#define _SSP1STAT_S_POSN                                    0x3
#define _SSP1STAT_S_POSITION                                0x3
#define _SSP1STAT_S_SIZE                                    0x1
#define _SSP1STAT_S_LENGTH                                  0x1
#define _SSP1STAT_S_MASK                                    0x8
#define _SSP1STAT_P_POSN                                    0x4
#define _SSP1STAT_P_POSITION                                0x4
#define _SSP1STAT_P_SIZE                                    0x1
#define _SSP1STAT_P_LENGTH                                  0x1
#define _SSP1STAT_P_MASK                                    0x10
#define _SSP1STAT_D_nA_POSN                                 0x5
#define _SSP1STAT_D_nA_POSITION                             0x5
#define _SSP1STAT_D_nA_SIZE                                 0x1
#define _SSP1STAT_D_nA_LENGTH                               0x1
#define _SSP1STAT_D_nA_MASK                                 0x20
#define _SSP1STAT_CKE_POSN                                  0x6
#define _SSP1STAT_CKE_POSITION                              0x6
#define _SSP1STAT_CKE_SIZE                                  0x1
#define _SSP1STAT_CKE_LENGTH                                0x1
#define _SSP1STAT_CKE_MASK                                  0x40
#define _SSP1STAT_SMP_POSN                                  0x7
#define _SSP1STAT_SMP_POSITION                              0x7
#define _SSP1STAT_SMP_SIZE                                  0x1
#define _SSP1STAT_SMP_LENGTH                                0x1
#define _SSP1STAT_SMP_MASK                                  0x80
#define _SSP1STAT_R_W_POSN                                  0x2
#define _SSP1STAT_R_W_POSITION                              0x2
#define _SSP1STAT_R_W_SIZE                                  0x1
#define _SSP1STAT_R_W_LENGTH                                0x1
#define _SSP1STAT_R_W_MASK                                  0x4
#define _SSP1STAT_D_A_POSN                                  0x5
#define _SSP1STAT_D_A_POSITION                              0x5
#define _SSP1STAT_D_A_SIZE                                  0x1
#define _SSP1STAT_D_A_LENGTH                                0x1
#define _SSP1STAT_D_A_MASK                                  0x20
#define _SSP1STAT_nW_POSN                                   0x2
#define _SSP1STAT_nW_POSITION                               0x2
#define _SSP1STAT_nW_SIZE                                   0x1
#define _SSP1STAT_nW_LENGTH                                 0x1
#define _SSP1STAT_nW_MASK                                   0x4
#define _SSP1STAT_nA_POSN                                   0x5
#define _SSP1STAT_nA_POSITION                               0x5
#define _SSP1STAT_nA_SIZE                                   0x1
#define _SSP1STAT_nA_LENGTH                                 0x1
#define _SSP1STAT_nA_MASK                                   0x20
#define _SSP1STAT_nWRITE_POSN                               0x2
#define _SSP1STAT_nWRITE_POSITION                           0x2
#define _SSP1STAT_nWRITE_SIZE                               0x1
#define _SSP1STAT_nWRITE_LENGTH                             0x1
#define _SSP1STAT_nWRITE_MASK                               0x4
#define _SSP1STAT_nADDRESS_POSN                             0x5
#define _SSP1STAT_nADDRESS_POSITION                         0x5
#define _SSP1STAT_nADDRESS_SIZE                             0x1
#define _SSP1STAT_nADDRESS_LENGTH                           0x1
#define _SSP1STAT_nADDRESS_MASK                             0x20
#define _SSP1STAT_READ_WRITE_POSN                           0x2
#define _SSP1STAT_READ_WRITE_POSITION                       0x2
#define _SSP1STAT_READ_WRITE_SIZE                           0x1
#define _SSP1STAT_READ_WRITE_LENGTH                         0x1
#define _SSP1STAT_READ_WRITE_MASK                           0x4
#define _SSP1STAT_DATA_ADDRESS_POSN                         0x5
#define _SSP1STAT_DATA_ADDRESS_POSITION                     0x5
#define _SSP1STAT_DATA_ADDRESS_SIZE                         0x1
#define _SSP1STAT_DATA_ADDRESS_LENGTH                       0x1
#define _SSP1STAT_DATA_ADDRESS_MASK                         0x20
#define _SSP1STAT_I2C_READ_POSN                             0x2
#define _SSP1STAT_I2C_READ_POSITION                         0x2
#define _SSP1STAT_I2C_READ_SIZE                             0x1
#define _SSP1STAT_I2C_READ_LENGTH                           0x1
#define _SSP1STAT_I2C_READ_MASK                             0x4
#define _SSP1STAT_I2C_START_POSN                            0x3
#define _SSP1STAT_I2C_START_POSITION                        0x3
#define _SSP1STAT_I2C_START_SIZE                            0x1
#define _SSP1STAT_I2C_START_LENGTH                          0x1
#define _SSP1STAT_I2C_START_MASK                            0x8
#define _SSP1STAT_I2C_STOP_POSN                             0x4
#define _SSP1STAT_I2C_STOP_POSITION                         0x4
#define _SSP1STAT_I2C_STOP_SIZE                             0x1
#define _SSP1STAT_I2C_STOP_LENGTH                           0x1
#define _SSP1STAT_I2C_STOP_MASK                             0x10
#define _SSP1STAT_I2C_DAT_POSN                              0x5
#define _SSP1STAT_I2C_DAT_POSITION                          0x5
#define _SSP1STAT_I2C_DAT_SIZE                              0x1
#define _SSP1STAT_I2C_DAT_LENGTH                            0x1
#define _SSP1STAT_I2C_DAT_MASK                              0x20
#define _SSP1STAT_BF1_POSN                                  0x0
#define _SSP1STAT_BF1_POSITION                              0x0
#define _SSP1STAT_BF1_SIZE                                  0x1
#define _SSP1STAT_BF1_LENGTH                                0x1
#define _SSP1STAT_BF1_MASK                                  0x1
#define _SSP1STAT_UA1_POSN                                  0x1
#define _SSP1STAT_UA1_POSITION                              0x1
#define _SSP1STAT_UA1_SIZE                                  0x1
#define _SSP1STAT_UA1_LENGTH                                0x1
#define _SSP1STAT_UA1_MASK                                  0x2
#define _SSP1STAT_R_POSN                                    0x2
#define _SSP1STAT_R_POSITION                                0x2
#define _SSP1STAT_R_SIZE                                    0x1
#define _SSP1STAT_R_LENGTH                                  0x1
#define _SSP1STAT_R_MASK                                    0x4
#define _SSP1STAT_START_POSN                                0x3
#define _SSP1STAT_START_POSITION                            0x3
#define _SSP1STAT_START_SIZE                                0x1
#define _SSP1STAT_START_LENGTH                              0x1
#define _SSP1STAT_START_MASK                                0x8
#define _SSP1STAT_STOP_POSN                                 0x4
#define _SSP1STAT_STOP_POSITION                             0x4
#define _SSP1STAT_STOP_SIZE                                 0x1
#define _SSP1STAT_STOP_LENGTH                               0x1
#define _SSP1STAT_STOP_MASK                                 0x10
#define _SSP1STAT_D_POSN                                    0x5
#define _SSP1STAT_D_POSITION                                0x5
#define _SSP1STAT_D_SIZE                                    0x1
#define _SSP1STAT_D_LENGTH                                  0x1
#define _SSP1STAT_D_MASK                                    0x20
#define _SSP1STAT_CKE1_POSN                                 0x6
#define _SSP1STAT_CKE1_POSITION                             0x6
#define _SSP1STAT_CKE1_SIZE                                 0x1
#define _SSP1STAT_CKE1_LENGTH                               0x1
#define _SSP1STAT_CKE1_MASK                                 0x40
#define _SSP1STAT_SMP1_POSN                                 0x7
#define _SSP1STAT_SMP1_POSITION                             0x7
#define _SSP1STAT_SMP1_SIZE                                 0x1
#define _SSP1STAT_SMP1_LENGTH                               0x1
#define _SSP1STAT_SMP1_MASK                                 0x80
#define _SSP1STAT_RW_POSN                                   0x2
#define _SSP1STAT_RW_POSITION                               0x2
#define _SSP1STAT_RW_SIZE                                   0x1
#define _SSP1STAT_RW_LENGTH                                 0x1
#define _SSP1STAT_RW_MASK                                   0x4
#define _SSP1STAT_START1_POSN                               0x3
#define _SSP1STAT_START1_POSITION                           0x3
#define _SSP1STAT_START1_SIZE                               0x1
#define _SSP1STAT_START1_LENGTH                             0x1
#define _SSP1STAT_START1_MASK                               0x8
#define _SSP1STAT_STOP1_POSN                                0x4
#define _SSP1STAT_STOP1_POSITION                            0x4
#define _SSP1STAT_STOP1_SIZE                                0x1
#define _SSP1STAT_STOP1_LENGTH                              0x1
#define _SSP1STAT_STOP1_MASK                                0x10
#define _SSP1STAT_DA_POSN                                   0x5
#define _SSP1STAT_DA_POSITION                               0x5
#define _SSP1STAT_DA_SIZE                                   0x1
#define _SSP1STAT_DA_LENGTH                                 0x1
#define _SSP1STAT_DA_MASK                                   0x20
#define _SSP1STAT_RW1_POSN                                  0x2
#define _SSP1STAT_RW1_POSITION                              0x2
#define _SSP1STAT_RW1_SIZE                                  0x1
#define _SSP1STAT_RW1_LENGTH                                0x1
#define _SSP1STAT_RW1_MASK                                  0x4
#define _SSP1STAT_I2C_START1_POSN                           0x3
#define _SSP1STAT_I2C_START1_POSITION                       0x3
#define _SSP1STAT_I2C_START1_SIZE                           0x1
#define _SSP1STAT_I2C_START1_LENGTH                         0x1
#define _SSP1STAT_I2C_START1_MASK                           0x8
#define _SSP1STAT_I2C_STOP2_POSN                            0x4
#define _SSP1STAT_I2C_STOP2_POSITION                        0x4
#define _SSP1STAT_I2C_STOP2_SIZE                            0x1
#define _SSP1STAT_I2C_STOP2_LENGTH                          0x1
#define _SSP1STAT_I2C_STOP2_MASK                            0x10
#define _SSP1STAT_DA1_POSN                                  0x5
#define _SSP1STAT_DA1_POSITION                              0x5
#define _SSP1STAT_DA1_SIZE                                  0x1
#define _SSP1STAT_DA1_LENGTH                                0x1
#define _SSP1STAT_DA1_MASK                                  0x20
#define _SSP1STAT_I2C_READ1_POSN                            0x2
#define _SSP1STAT_I2C_READ1_POSITION                        0x2
#define _SSP1STAT_I2C_READ1_SIZE                            0x1
#define _SSP1STAT_I2C_READ1_LENGTH                          0x1
#define _SSP1STAT_I2C_READ1_MASK                            0x4
#define _SSP1STAT_S2_POSN                                   0x3
#define _SSP1STAT_S2_POSITION                               0x3
#define _SSP1STAT_S2_SIZE                                   0x1
#define _SSP1STAT_S2_LENGTH                                 0x1
#define _SSP1STAT_S2_MASK                                   0x8
#define _SSP1STAT_P2_POSN                                   0x4
#define _SSP1STAT_P2_POSITION                               0x4
#define _SSP1STAT_P2_SIZE                                   0x1
#define _SSP1STAT_P2_LENGTH                                 0x1
#define _SSP1STAT_P2_MASK                                   0x10
#define _SSP1STAT_DATA_ADDRESS1_POSN                        0x5
#define _SSP1STAT_DATA_ADDRESS1_POSITION                    0x5
#define _SSP1STAT_DATA_ADDRESS1_SIZE                        0x1
#define _SSP1STAT_DATA_ADDRESS1_LENGTH                      0x1
#define _SSP1STAT_DATA_ADDRESS1_MASK                        0x20
#define _SSP1STAT_READ_WRITE1_POSN                          0x2
#define _SSP1STAT_READ_WRITE1_POSITION                      0x2
#define _SSP1STAT_READ_WRITE1_SIZE                          0x1
#define _SSP1STAT_READ_WRITE1_LENGTH                        0x1
#define _SSP1STAT_READ_WRITE1_MASK                          0x4
#define _SSP1STAT_D_A1_POSN                                 0x5
#define _SSP1STAT_D_A1_POSITION                             0x5
#define _SSP1STAT_D_A1_SIZE                                 0x1
#define _SSP1STAT_D_A1_LENGTH                               0x1
#define _SSP1STAT_D_A1_MASK                                 0x20
#define _SSP1STAT_R_W1_POSN                                 0x2
#define _SSP1STAT_R_W1_POSITION                             0x2
#define _SSP1STAT_R_W1_SIZE                                 0x1
#define _SSP1STAT_R_W1_LENGTH                               0x1
#define _SSP1STAT_R_W1_MASK                                 0x4
#define _SSP1STAT_D_nA1_POSN                                0x5
#define _SSP1STAT_D_nA1_POSITION                            0x5
#define _SSP1STAT_D_nA1_SIZE                                0x1
#define _SSP1STAT_D_nA1_LENGTH                              0x1
#define _SSP1STAT_D_nA1_MASK                                0x20
#define _SSP1STAT_R_nW1_POSN                                0x2
#define _SSP1STAT_R_nW1_POSITION                            0x2
#define _SSP1STAT_R_nW1_SIZE                                0x1
#define _SSP1STAT_R_nW1_LENGTH                              0x1
#define _SSP1STAT_R_nW1_MASK                                0x4
#define _SSP1STAT_I2C_DAT1_POSN                             0x5
#define _SSP1STAT_I2C_DAT1_POSITION                         0x5
#define _SSP1STAT_I2C_DAT1_SIZE                             0x1
#define _SSP1STAT_I2C_DAT1_LENGTH                           0x1
#define _SSP1STAT_I2C_DAT1_MASK                             0x20
#define _SSP1STAT_nW2_POSN                                  0x2
#define _SSP1STAT_nW2_POSITION                              0x2
#define _SSP1STAT_nW2_SIZE                                  0x1
#define _SSP1STAT_nW2_LENGTH                                0x1
#define _SSP1STAT_nW2_MASK                                  0x4
#define _SSP1STAT_nA2_POSN                                  0x5
#define _SSP1STAT_nA2_POSITION                              0x5
#define _SSP1STAT_nA2_SIZE                                  0x1
#define _SSP1STAT_nA2_LENGTH                                0x1
#define _SSP1STAT_nA2_MASK                                  0x20
#define _SSP1STAT_nWRITE1_POSN                              0x2
#define _SSP1STAT_nWRITE1_POSITION                          0x2
#define _SSP1STAT_nWRITE1_SIZE                              0x1
#define _SSP1STAT_nWRITE1_LENGTH                            0x1
#define _SSP1STAT_nWRITE1_MASK                              0x4
#define _SSP1STAT_nADDRESS1_POSN                            0x5
#define _SSP1STAT_nADDRESS1_POSITION                        0x5
#define _SSP1STAT_nADDRESS1_SIZE                            0x1
#define _SSP1STAT_nADDRESS1_LENGTH                          0x1
#define _SSP1STAT_nADDRESS1_MASK                            0x20

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
extern volatile unsigned char           SSP1CON1            __at(0x190);
#ifndef _LIB_BUILD
asm("SSP1CON1 equ 0190h");
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
    struct {
        unsigned SSPM01                 :1;
        unsigned SSPM11                 :1;
        unsigned SSPM21                 :1;
        unsigned SSPM31                 :1;
        unsigned CKP1                   :1;
        unsigned SSPEN1                 :1;
        unsigned SSPOV1                 :1;
        unsigned WCOL1                  :1;
    };
} SSP1CON1bits_t;
extern volatile SSP1CON1bits_t SSP1CON1bits __at(0x190);
// bitfield macros
#define _SSP1CON1_SSPM_POSN                                 0x0
#define _SSP1CON1_SSPM_POSITION                             0x0
#define _SSP1CON1_SSPM_SIZE                                 0x4
#define _SSP1CON1_SSPM_LENGTH                               0x4
#define _SSP1CON1_SSPM_MASK                                 0xF
#define _SSP1CON1_CKP_POSN                                  0x4
#define _SSP1CON1_CKP_POSITION                              0x4
#define _SSP1CON1_CKP_SIZE                                  0x1
#define _SSP1CON1_CKP_LENGTH                                0x1
#define _SSP1CON1_CKP_MASK                                  0x10
#define _SSP1CON1_SSPEN_POSN                                0x5
#define _SSP1CON1_SSPEN_POSITION                            0x5
#define _SSP1CON1_SSPEN_SIZE                                0x1
#define _SSP1CON1_SSPEN_LENGTH                              0x1
#define _SSP1CON1_SSPEN_MASK                                0x20
#define _SSP1CON1_SSPOV_POSN                                0x6
#define _SSP1CON1_SSPOV_POSITION                            0x6
#define _SSP1CON1_SSPOV_SIZE                                0x1
#define _SSP1CON1_SSPOV_LENGTH                              0x1
#define _SSP1CON1_SSPOV_MASK                                0x40
#define _SSP1CON1_WCOL_POSN                                 0x7
#define _SSP1CON1_WCOL_POSITION                             0x7
#define _SSP1CON1_WCOL_SIZE                                 0x1
#define _SSP1CON1_WCOL_LENGTH                               0x1
#define _SSP1CON1_WCOL_MASK                                 0x80
#define _SSP1CON1_SSPM0_POSN                                0x0
#define _SSP1CON1_SSPM0_POSITION                            0x0
#define _SSP1CON1_SSPM0_SIZE                                0x1
#define _SSP1CON1_SSPM0_LENGTH                              0x1
#define _SSP1CON1_SSPM0_MASK                                0x1
#define _SSP1CON1_SSPM1_POSN                                0x1
#define _SSP1CON1_SSPM1_POSITION                            0x1
#define _SSP1CON1_SSPM1_SIZE                                0x1
#define _SSP1CON1_SSPM1_LENGTH                              0x1
#define _SSP1CON1_SSPM1_MASK                                0x2
#define _SSP1CON1_SSPM2_POSN                                0x2
#define _SSP1CON1_SSPM2_POSITION                            0x2
#define _SSP1CON1_SSPM2_SIZE                                0x1
#define _SSP1CON1_SSPM2_LENGTH                              0x1
#define _SSP1CON1_SSPM2_MASK                                0x4
#define _SSP1CON1_SSPM3_POSN                                0x3
#define _SSP1CON1_SSPM3_POSITION                            0x3
#define _SSP1CON1_SSPM3_SIZE                                0x1
#define _SSP1CON1_SSPM3_LENGTH                              0x1
#define _SSP1CON1_SSPM3_MASK                                0x8
#define _SSP1CON1_SSPM01_POSN                               0x0
#define _SSP1CON1_SSPM01_POSITION                           0x0
#define _SSP1CON1_SSPM01_SIZE                               0x1
#define _SSP1CON1_SSPM01_LENGTH                             0x1
#define _SSP1CON1_SSPM01_MASK                               0x1
#define _SSP1CON1_SSPM11_POSN                               0x1
#define _SSP1CON1_SSPM11_POSITION                           0x1
#define _SSP1CON1_SSPM11_SIZE                               0x1
#define _SSP1CON1_SSPM11_LENGTH                             0x1
#define _SSP1CON1_SSPM11_MASK                               0x2
#define _SSP1CON1_SSPM21_POSN                               0x2
#define _SSP1CON1_SSPM21_POSITION                           0x2
#define _SSP1CON1_SSPM21_SIZE                               0x1
#define _SSP1CON1_SSPM21_LENGTH                             0x1
#define _SSP1CON1_SSPM21_MASK                               0x4
#define _SSP1CON1_SSPM31_POSN                               0x3
#define _SSP1CON1_SSPM31_POSITION                           0x3
#define _SSP1CON1_SSPM31_SIZE                               0x1
#define _SSP1CON1_SSPM31_LENGTH                             0x1
#define _SSP1CON1_SSPM31_MASK                               0x8
#define _SSP1CON1_CKP1_POSN                                 0x4
#define _SSP1CON1_CKP1_POSITION                             0x4
#define _SSP1CON1_CKP1_SIZE                                 0x1
#define _SSP1CON1_CKP1_LENGTH                               0x1
#define _SSP1CON1_CKP1_MASK                                 0x10
#define _SSP1CON1_SSPEN1_POSN                               0x5
#define _SSP1CON1_SSPEN1_POSITION                           0x5
#define _SSP1CON1_SSPEN1_SIZE                               0x1
#define _SSP1CON1_SSPEN1_LENGTH                             0x1
#define _SSP1CON1_SSPEN1_MASK                               0x20
#define _SSP1CON1_SSPOV1_POSN                               0x6
#define _SSP1CON1_SSPOV1_POSITION                           0x6
#define _SSP1CON1_SSPOV1_SIZE                               0x1
#define _SSP1CON1_SSPOV1_LENGTH                             0x1
#define _SSP1CON1_SSPOV1_MASK                               0x40
#define _SSP1CON1_WCOL1_POSN                                0x7
#define _SSP1CON1_WCOL1_POSITION                            0x7
#define _SSP1CON1_WCOL1_SIZE                                0x1
#define _SSP1CON1_WCOL1_LENGTH                              0x1
#define _SSP1CON1_WCOL1_MASK                                0x80

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
extern volatile unsigned char           SSP1CON2            __at(0x191);
#ifndef _LIB_BUILD
asm("SSP1CON2 equ 0191h");
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
    struct {
        unsigned                        :1;
        unsigned ADMSK                  :5;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
    };
    struct {
        unsigned SEN1                   :1;
        unsigned ADMSK11                :1;
        unsigned ADMSK21                :1;
        unsigned ADMSK31                :1;
        unsigned ACKEN1                 :1;
        unsigned ACKDT1                 :1;
        unsigned ACKSTAT1               :1;
        unsigned GCEN1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RSEN1                  :1;
        unsigned PEN1                   :1;
        unsigned RCEN1                  :1;
        unsigned ADMSK41                :1;
        unsigned ADMSK51                :1;
    };
} SSP1CON2bits_t;
extern volatile SSP1CON2bits_t SSP1CON2bits __at(0x191);
// bitfield macros
#define _SSP1CON2_SEN_POSN                                  0x0
#define _SSP1CON2_SEN_POSITION                              0x0
#define _SSP1CON2_SEN_SIZE                                  0x1
#define _SSP1CON2_SEN_LENGTH                                0x1
#define _SSP1CON2_SEN_MASK                                  0x1
#define _SSP1CON2_RSEN_POSN                                 0x1
#define _SSP1CON2_RSEN_POSITION                             0x1
#define _SSP1CON2_RSEN_SIZE                                 0x1
#define _SSP1CON2_RSEN_LENGTH                               0x1
#define _SSP1CON2_RSEN_MASK                                 0x2
#define _SSP1CON2_PEN_POSN                                  0x2
#define _SSP1CON2_PEN_POSITION                              0x2
#define _SSP1CON2_PEN_SIZE                                  0x1
#define _SSP1CON2_PEN_LENGTH                                0x1
#define _SSP1CON2_PEN_MASK                                  0x4
#define _SSP1CON2_RCEN_POSN                                 0x3
#define _SSP1CON2_RCEN_POSITION                             0x3
#define _SSP1CON2_RCEN_SIZE                                 0x1
#define _SSP1CON2_RCEN_LENGTH                               0x1
#define _SSP1CON2_RCEN_MASK                                 0x8
#define _SSP1CON2_ACKEN_POSN                                0x4
#define _SSP1CON2_ACKEN_POSITION                            0x4
#define _SSP1CON2_ACKEN_SIZE                                0x1
#define _SSP1CON2_ACKEN_LENGTH                              0x1
#define _SSP1CON2_ACKEN_MASK                                0x10
#define _SSP1CON2_ACKDT_POSN                                0x5
#define _SSP1CON2_ACKDT_POSITION                            0x5
#define _SSP1CON2_ACKDT_SIZE                                0x1
#define _SSP1CON2_ACKDT_LENGTH                              0x1
#define _SSP1CON2_ACKDT_MASK                                0x20
#define _SSP1CON2_ACKSTAT_POSN                              0x6
#define _SSP1CON2_ACKSTAT_POSITION                          0x6
#define _SSP1CON2_ACKSTAT_SIZE                              0x1
#define _SSP1CON2_ACKSTAT_LENGTH                            0x1
#define _SSP1CON2_ACKSTAT_MASK                              0x40
#define _SSP1CON2_GCEN_POSN                                 0x7
#define _SSP1CON2_GCEN_POSITION                             0x7
#define _SSP1CON2_GCEN_SIZE                                 0x1
#define _SSP1CON2_GCEN_LENGTH                               0x1
#define _SSP1CON2_GCEN_MASK                                 0x80
#define _SSP1CON2_ADMSK_POSN                                0x1
#define _SSP1CON2_ADMSK_POSITION                            0x1
#define _SSP1CON2_ADMSK_SIZE                                0x5
#define _SSP1CON2_ADMSK_LENGTH                              0x5
#define _SSP1CON2_ADMSK_MASK                                0x3E
#define _SSP1CON2_ADMSK1_POSN                               0x1
#define _SSP1CON2_ADMSK1_POSITION                           0x1
#define _SSP1CON2_ADMSK1_SIZE                               0x1
#define _SSP1CON2_ADMSK1_LENGTH                             0x1
#define _SSP1CON2_ADMSK1_MASK                               0x2
#define _SSP1CON2_ADMSK2_POSN                               0x2
#define _SSP1CON2_ADMSK2_POSITION                           0x2
#define _SSP1CON2_ADMSK2_SIZE                               0x1
#define _SSP1CON2_ADMSK2_LENGTH                             0x1
#define _SSP1CON2_ADMSK2_MASK                               0x4
#define _SSP1CON2_ADMSK3_POSN                               0x3
#define _SSP1CON2_ADMSK3_POSITION                           0x3
#define _SSP1CON2_ADMSK3_SIZE                               0x1
#define _SSP1CON2_ADMSK3_LENGTH                             0x1
#define _SSP1CON2_ADMSK3_MASK                               0x8
#define _SSP1CON2_ADMSK4_POSN                               0x4
#define _SSP1CON2_ADMSK4_POSITION                           0x4
#define _SSP1CON2_ADMSK4_SIZE                               0x1
#define _SSP1CON2_ADMSK4_LENGTH                             0x1
#define _SSP1CON2_ADMSK4_MASK                               0x10
#define _SSP1CON2_ADMSK5_POSN                               0x5
#define _SSP1CON2_ADMSK5_POSITION                           0x5
#define _SSP1CON2_ADMSK5_SIZE                               0x1
#define _SSP1CON2_ADMSK5_LENGTH                             0x1
#define _SSP1CON2_ADMSK5_MASK                               0x20
#define _SSP1CON2_SEN1_POSN                                 0x0
#define _SSP1CON2_SEN1_POSITION                             0x0
#define _SSP1CON2_SEN1_SIZE                                 0x1
#define _SSP1CON2_SEN1_LENGTH                               0x1
#define _SSP1CON2_SEN1_MASK                                 0x1
#define _SSP1CON2_ADMSK11_POSN                              0x1
#define _SSP1CON2_ADMSK11_POSITION                          0x1
#define _SSP1CON2_ADMSK11_SIZE                              0x1
#define _SSP1CON2_ADMSK11_LENGTH                            0x1
#define _SSP1CON2_ADMSK11_MASK                              0x2
#define _SSP1CON2_ADMSK21_POSN                              0x2
#define _SSP1CON2_ADMSK21_POSITION                          0x2
#define _SSP1CON2_ADMSK21_SIZE                              0x1
#define _SSP1CON2_ADMSK21_LENGTH                            0x1
#define _SSP1CON2_ADMSK21_MASK                              0x4
#define _SSP1CON2_ADMSK31_POSN                              0x3
#define _SSP1CON2_ADMSK31_POSITION                          0x3
#define _SSP1CON2_ADMSK31_SIZE                              0x1
#define _SSP1CON2_ADMSK31_LENGTH                            0x1
#define _SSP1CON2_ADMSK31_MASK                              0x8
#define _SSP1CON2_ACKEN1_POSN                               0x4
#define _SSP1CON2_ACKEN1_POSITION                           0x4
#define _SSP1CON2_ACKEN1_SIZE                               0x1
#define _SSP1CON2_ACKEN1_LENGTH                             0x1
#define _SSP1CON2_ACKEN1_MASK                               0x10
#define _SSP1CON2_ACKDT1_POSN                               0x5
#define _SSP1CON2_ACKDT1_POSITION                           0x5
#define _SSP1CON2_ACKDT1_SIZE                               0x1
#define _SSP1CON2_ACKDT1_LENGTH                             0x1
#define _SSP1CON2_ACKDT1_MASK                               0x20
#define _SSP1CON2_ACKSTAT1_POSN                             0x6
#define _SSP1CON2_ACKSTAT1_POSITION                         0x6
#define _SSP1CON2_ACKSTAT1_SIZE                             0x1
#define _SSP1CON2_ACKSTAT1_LENGTH                           0x1
#define _SSP1CON2_ACKSTAT1_MASK                             0x40
#define _SSP1CON2_GCEN1_POSN                                0x7
#define _SSP1CON2_GCEN1_POSITION                            0x7
#define _SSP1CON2_GCEN1_SIZE                                0x1
#define _SSP1CON2_GCEN1_LENGTH                              0x1
#define _SSP1CON2_GCEN1_MASK                                0x80
#define _SSP1CON2_RSEN1_POSN                                0x1
#define _SSP1CON2_RSEN1_POSITION                            0x1
#define _SSP1CON2_RSEN1_SIZE                                0x1
#define _SSP1CON2_RSEN1_LENGTH                              0x1
#define _SSP1CON2_RSEN1_MASK                                0x2
#define _SSP1CON2_PEN1_POSN                                 0x2
#define _SSP1CON2_PEN1_POSITION                             0x2
#define _SSP1CON2_PEN1_SIZE                                 0x1
#define _SSP1CON2_PEN1_LENGTH                               0x1
#define _SSP1CON2_PEN1_MASK                                 0x4
#define _SSP1CON2_RCEN1_POSN                                0x3
#define _SSP1CON2_RCEN1_POSITION                            0x3
#define _SSP1CON2_RCEN1_SIZE                                0x1
#define _SSP1CON2_RCEN1_LENGTH                              0x1
#define _SSP1CON2_RCEN1_MASK                                0x8
#define _SSP1CON2_ADMSK41_POSN                              0x4
#define _SSP1CON2_ADMSK41_POSITION                          0x4
#define _SSP1CON2_ADMSK41_SIZE                              0x1
#define _SSP1CON2_ADMSK41_LENGTH                            0x1
#define _SSP1CON2_ADMSK41_MASK                              0x10
#define _SSP1CON2_ADMSK51_POSN                              0x5
#define _SSP1CON2_ADMSK51_POSITION                          0x5
#define _SSP1CON2_ADMSK51_SIZE                              0x1
#define _SSP1CON2_ADMSK51_LENGTH                            0x1
#define _SSP1CON2_ADMSK51_MASK                              0x20

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
extern volatile unsigned char           SSP1CON3            __at(0x192);
#ifndef _LIB_BUILD
asm("SSP1CON3 equ 0192h");
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
} SSP1CON3bits_t;
extern volatile SSP1CON3bits_t SSP1CON3bits __at(0x192);
// bitfield macros
#define _SSP1CON3_DHEN_POSN                                 0x0
#define _SSP1CON3_DHEN_POSITION                             0x0
#define _SSP1CON3_DHEN_SIZE                                 0x1
#define _SSP1CON3_DHEN_LENGTH                               0x1
#define _SSP1CON3_DHEN_MASK                                 0x1
#define _SSP1CON3_AHEN_POSN                                 0x1
#define _SSP1CON3_AHEN_POSITION                             0x1
#define _SSP1CON3_AHEN_SIZE                                 0x1
#define _SSP1CON3_AHEN_LENGTH                               0x1
#define _SSP1CON3_AHEN_MASK                                 0x2
#define _SSP1CON3_SBCDE_POSN                                0x2
#define _SSP1CON3_SBCDE_POSITION                            0x2
#define _SSP1CON3_SBCDE_SIZE                                0x1
#define _SSP1CON3_SBCDE_LENGTH                              0x1
#define _SSP1CON3_SBCDE_MASK                                0x4
#define _SSP1CON3_SDAHT_POSN                                0x3
#define _SSP1CON3_SDAHT_POSITION                            0x3
#define _SSP1CON3_SDAHT_SIZE                                0x1
#define _SSP1CON3_SDAHT_LENGTH                              0x1
#define _SSP1CON3_SDAHT_MASK                                0x8
#define _SSP1CON3_BOEN_POSN                                 0x4
#define _SSP1CON3_BOEN_POSITION                             0x4
#define _SSP1CON3_BOEN_SIZE                                 0x1
#define _SSP1CON3_BOEN_LENGTH                               0x1
#define _SSP1CON3_BOEN_MASK                                 0x10
#define _SSP1CON3_SCIE_POSN                                 0x5
#define _SSP1CON3_SCIE_POSITION                             0x5
#define _SSP1CON3_SCIE_SIZE                                 0x1
#define _SSP1CON3_SCIE_LENGTH                               0x1
#define _SSP1CON3_SCIE_MASK                                 0x20
#define _SSP1CON3_PCIE_POSN                                 0x6
#define _SSP1CON3_PCIE_POSITION                             0x6
#define _SSP1CON3_PCIE_SIZE                                 0x1
#define _SSP1CON3_PCIE_LENGTH                               0x1
#define _SSP1CON3_PCIE_MASK                                 0x40
#define _SSP1CON3_ACKTIM_POSN                               0x7
#define _SSP1CON3_ACKTIM_POSITION                           0x7
#define _SSP1CON3_ACKTIM_SIZE                               0x1
#define _SSP1CON3_ACKTIM_LENGTH                             0x1
#define _SSP1CON3_ACKTIM_MASK                               0x80

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0x20C);
#ifndef _LIB_BUILD
asm("TMR1L equ 020Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1L                  :8;
    };
    struct {
        unsigned TMR1L0                 :1;
        unsigned TMR1L1                 :1;
        unsigned TMR1L2                 :1;
        unsigned TMR1L3                 :1;
        unsigned TMR1L4                 :1;
        unsigned TMR1L5                 :1;
        unsigned TMR1L6                 :1;
        unsigned TMR1L7                 :1;
    };
} TMR1Lbits_t;
extern volatile TMR1Lbits_t TMR1Lbits __at(0x20C);
// bitfield macros
#define _TMR1L_TMR1L_POSN                                   0x0
#define _TMR1L_TMR1L_POSITION                               0x0
#define _TMR1L_TMR1L_SIZE                                   0x8
#define _TMR1L_TMR1L_LENGTH                                 0x8
#define _TMR1L_TMR1L_MASK                                   0xFF
#define _TMR1L_TMR1L0_POSN                                  0x0
#define _TMR1L_TMR1L0_POSITION                              0x0
#define _TMR1L_TMR1L0_SIZE                                  0x1
#define _TMR1L_TMR1L0_LENGTH                                0x1
#define _TMR1L_TMR1L0_MASK                                  0x1
#define _TMR1L_TMR1L1_POSN                                  0x1
#define _TMR1L_TMR1L1_POSITION                              0x1
#define _TMR1L_TMR1L1_SIZE                                  0x1
#define _TMR1L_TMR1L1_LENGTH                                0x1
#define _TMR1L_TMR1L1_MASK                                  0x2
#define _TMR1L_TMR1L2_POSN                                  0x2
#define _TMR1L_TMR1L2_POSITION                              0x2
#define _TMR1L_TMR1L2_SIZE                                  0x1
#define _TMR1L_TMR1L2_LENGTH                                0x1
#define _TMR1L_TMR1L2_MASK                                  0x4
#define _TMR1L_TMR1L3_POSN                                  0x3
#define _TMR1L_TMR1L3_POSITION                              0x3
#define _TMR1L_TMR1L3_SIZE                                  0x1
#define _TMR1L_TMR1L3_LENGTH                                0x1
#define _TMR1L_TMR1L3_MASK                                  0x8
#define _TMR1L_TMR1L4_POSN                                  0x4
#define _TMR1L_TMR1L4_POSITION                              0x4
#define _TMR1L_TMR1L4_SIZE                                  0x1
#define _TMR1L_TMR1L4_LENGTH                                0x1
#define _TMR1L_TMR1L4_MASK                                  0x10
#define _TMR1L_TMR1L5_POSN                                  0x5
#define _TMR1L_TMR1L5_POSITION                              0x5
#define _TMR1L_TMR1L5_SIZE                                  0x1
#define _TMR1L_TMR1L5_LENGTH                                0x1
#define _TMR1L_TMR1L5_MASK                                  0x20
#define _TMR1L_TMR1L6_POSN                                  0x6
#define _TMR1L_TMR1L6_POSITION                              0x6
#define _TMR1L_TMR1L6_SIZE                                  0x1
#define _TMR1L_TMR1L6_LENGTH                                0x1
#define _TMR1L_TMR1L6_MASK                                  0x40
#define _TMR1L_TMR1L7_POSN                                  0x7
#define _TMR1L_TMR1L7_POSITION                              0x7
#define _TMR1L_TMR1L7_SIZE                                  0x1
#define _TMR1L_TMR1L7_LENGTH                                0x1
#define _TMR1L_TMR1L7_MASK                                  0x80

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x20D);
#ifndef _LIB_BUILD
asm("TMR1H equ 020Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1H                  :8;
    };
    struct {
        unsigned TMR1H0                 :1;
        unsigned TMR1H1                 :1;
        unsigned TMR1H2                 :1;
        unsigned TMR1H3                 :1;
        unsigned TMR1H4                 :1;
        unsigned TMR1H5                 :1;
        unsigned TMR1H6                 :1;
        unsigned TMR1H7                 :1;
    };
} TMR1Hbits_t;
extern volatile TMR1Hbits_t TMR1Hbits __at(0x20D);
// bitfield macros
#define _TMR1H_TMR1H_POSN                                   0x0
#define _TMR1H_TMR1H_POSITION                               0x0
#define _TMR1H_TMR1H_SIZE                                   0x8
#define _TMR1H_TMR1H_LENGTH                                 0x8
#define _TMR1H_TMR1H_MASK                                   0xFF
#define _TMR1H_TMR1H0_POSN                                  0x0
#define _TMR1H_TMR1H0_POSITION                              0x0
#define _TMR1H_TMR1H0_SIZE                                  0x1
#define _TMR1H_TMR1H0_LENGTH                                0x1
#define _TMR1H_TMR1H0_MASK                                  0x1
#define _TMR1H_TMR1H1_POSN                                  0x1
#define _TMR1H_TMR1H1_POSITION                              0x1
#define _TMR1H_TMR1H1_SIZE                                  0x1
#define _TMR1H_TMR1H1_LENGTH                                0x1
#define _TMR1H_TMR1H1_MASK                                  0x2
#define _TMR1H_TMR1H2_POSN                                  0x2
#define _TMR1H_TMR1H2_POSITION                              0x2
#define _TMR1H_TMR1H2_SIZE                                  0x1
#define _TMR1H_TMR1H2_LENGTH                                0x1
#define _TMR1H_TMR1H2_MASK                                  0x4
#define _TMR1H_TMR1H3_POSN                                  0x3
#define _TMR1H_TMR1H3_POSITION                              0x3
#define _TMR1H_TMR1H3_SIZE                                  0x1
#define _TMR1H_TMR1H3_LENGTH                                0x1
#define _TMR1H_TMR1H3_MASK                                  0x8
#define _TMR1H_TMR1H4_POSN                                  0x4
#define _TMR1H_TMR1H4_POSITION                              0x4
#define _TMR1H_TMR1H4_SIZE                                  0x1
#define _TMR1H_TMR1H4_LENGTH                                0x1
#define _TMR1H_TMR1H4_MASK                                  0x10
#define _TMR1H_TMR1H5_POSN                                  0x5
#define _TMR1H_TMR1H5_POSITION                              0x5
#define _TMR1H_TMR1H5_SIZE                                  0x1
#define _TMR1H_TMR1H5_LENGTH                                0x1
#define _TMR1H_TMR1H5_MASK                                  0x20
#define _TMR1H_TMR1H6_POSN                                  0x6
#define _TMR1H_TMR1H6_POSITION                              0x6
#define _TMR1H_TMR1H6_SIZE                                  0x1
#define _TMR1H_TMR1H6_LENGTH                                0x1
#define _TMR1H_TMR1H6_MASK                                  0x40
#define _TMR1H_TMR1H7_POSN                                  0x7
#define _TMR1H_TMR1H7_POSITION                              0x7
#define _TMR1H_TMR1H7_SIZE                                  0x1
#define _TMR1H_TMR1H7_LENGTH                                0x1
#define _TMR1H_TMR1H7_MASK                                  0x80

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0x20E);
#ifndef _LIB_BUILD
asm("T1CON equ 020Eh");
#endif
// aliases
extern volatile unsigned char           TMR1CON             __at(0x20E);
#ifndef _LIB_BUILD
asm("TMR1CON equ 020Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ON                     :1;
        unsigned RD16                   :1;
        unsigned NOT_SYNC               :1;
        unsigned                        :1;
        unsigned CKPS                   :2;
    };
    struct {
        unsigned TMR1ON                 :1;
        unsigned T1RD16                 :1;
        unsigned NOT_T1SYNC             :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned CKPS0                  :1;
        unsigned CKPS1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RD161                  :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0x20E);
// bitfield macros
#define _T1CON_ON_POSN                                      0x0
#define _T1CON_ON_POSITION                                  0x0
#define _T1CON_ON_SIZE                                      0x1
#define _T1CON_ON_LENGTH                                    0x1
#define _T1CON_ON_MASK                                      0x1
#define _T1CON_RD16_POSN                                    0x1
#define _T1CON_RD16_POSITION                                0x1
#define _T1CON_RD16_SIZE                                    0x1
#define _T1CON_RD16_LENGTH                                  0x1
#define _T1CON_RD16_MASK                                    0x2
#define _T1CON_NOT_SYNC_POSN                                0x2
#define _T1CON_NOT_SYNC_POSITION                            0x2
#define _T1CON_NOT_SYNC_SIZE                                0x1
#define _T1CON_NOT_SYNC_LENGTH                              0x1
#define _T1CON_NOT_SYNC_MASK                                0x4
#define _T1CON_CKPS_POSN                                    0x4
#define _T1CON_CKPS_POSITION                                0x4
#define _T1CON_CKPS_SIZE                                    0x2
#define _T1CON_CKPS_LENGTH                                  0x2
#define _T1CON_CKPS_MASK                                    0x30
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_T1RD16_POSN                                  0x1
#define _T1CON_T1RD16_POSITION                              0x1
#define _T1CON_T1RD16_SIZE                                  0x1
#define _T1CON_T1RD16_LENGTH                                0x1
#define _T1CON_T1RD16_MASK                                  0x2
#define _T1CON_NOT_T1SYNC_POSN                              0x2
#define _T1CON_NOT_T1SYNC_POSITION                          0x2
#define _T1CON_NOT_T1SYNC_SIZE                              0x1
#define _T1CON_NOT_T1SYNC_LENGTH                            0x1
#define _T1CON_NOT_T1SYNC_MASK                              0x4
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
#define _T1CON_CKPS0_POSN                                   0x4
#define _T1CON_CKPS0_POSITION                               0x4
#define _T1CON_CKPS0_SIZE                                   0x1
#define _T1CON_CKPS0_LENGTH                                 0x1
#define _T1CON_CKPS0_MASK                                   0x10
#define _T1CON_CKPS1_POSN                                   0x5
#define _T1CON_CKPS1_POSITION                               0x5
#define _T1CON_CKPS1_SIZE                                   0x1
#define _T1CON_CKPS1_LENGTH                                 0x1
#define _T1CON_CKPS1_MASK                                   0x20
#define _T1CON_RD161_POSN                                   0x1
#define _T1CON_RD161_POSITION                               0x1
#define _T1CON_RD161_SIZE                                   0x1
#define _T1CON_RD161_LENGTH                                 0x1
#define _T1CON_RD161_MASK                                   0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned ON                     :1;
        unsigned RD16                   :1;
        unsigned NOT_SYNC               :1;
        unsigned                        :1;
        unsigned CKPS                   :2;
    };
    struct {
        unsigned TMR1ON                 :1;
        unsigned T1RD16                 :1;
        unsigned NOT_T1SYNC             :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned CKPS0                  :1;
        unsigned CKPS1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned RD161                  :1;
    };
} TMR1CONbits_t;
extern volatile TMR1CONbits_t TMR1CONbits __at(0x20E);
// bitfield macros
#define _TMR1CON_ON_POSN                                    0x0
#define _TMR1CON_ON_POSITION                                0x0
#define _TMR1CON_ON_SIZE                                    0x1
#define _TMR1CON_ON_LENGTH                                  0x1
#define _TMR1CON_ON_MASK                                    0x1
#define _TMR1CON_RD16_POSN                                  0x1
#define _TMR1CON_RD16_POSITION                              0x1
#define _TMR1CON_RD16_SIZE                                  0x1
#define _TMR1CON_RD16_LENGTH                                0x1
#define _TMR1CON_RD16_MASK                                  0x2
#define _TMR1CON_NOT_SYNC_POSN                              0x2
#define _TMR1CON_NOT_SYNC_POSITION                          0x2
#define _TMR1CON_NOT_SYNC_SIZE                              0x1
#define _TMR1CON_NOT_SYNC_LENGTH                            0x1
#define _TMR1CON_NOT_SYNC_MASK                              0x4
#define _TMR1CON_CKPS_POSN                                  0x4
#define _TMR1CON_CKPS_POSITION                              0x4
#define _TMR1CON_CKPS_SIZE                                  0x2
#define _TMR1CON_CKPS_LENGTH                                0x2
#define _TMR1CON_CKPS_MASK                                  0x30
#define _TMR1CON_TMR1ON_POSN                                0x0
#define _TMR1CON_TMR1ON_POSITION                            0x0
#define _TMR1CON_TMR1ON_SIZE                                0x1
#define _TMR1CON_TMR1ON_LENGTH                              0x1
#define _TMR1CON_TMR1ON_MASK                                0x1
#define _TMR1CON_T1RD16_POSN                                0x1
#define _TMR1CON_T1RD16_POSITION                            0x1
#define _TMR1CON_T1RD16_SIZE                                0x1
#define _TMR1CON_T1RD16_LENGTH                              0x1
#define _TMR1CON_T1RD16_MASK                                0x2
#define _TMR1CON_NOT_T1SYNC_POSN                            0x2
#define _TMR1CON_NOT_T1SYNC_POSITION                        0x2
#define _TMR1CON_NOT_T1SYNC_SIZE                            0x1
#define _TMR1CON_NOT_T1SYNC_LENGTH                          0x1
#define _TMR1CON_NOT_T1SYNC_MASK                            0x4
#define _TMR1CON_T1CKPS0_POSN                               0x4
#define _TMR1CON_T1CKPS0_POSITION                           0x4
#define _TMR1CON_T1CKPS0_SIZE                               0x1
#define _TMR1CON_T1CKPS0_LENGTH                             0x1
#define _TMR1CON_T1CKPS0_MASK                               0x10
#define _TMR1CON_T1CKPS1_POSN                               0x5
#define _TMR1CON_T1CKPS1_POSITION                           0x5
#define _TMR1CON_T1CKPS1_SIZE                               0x1
#define _TMR1CON_T1CKPS1_LENGTH                             0x1
#define _TMR1CON_T1CKPS1_MASK                               0x20
#define _TMR1CON_CKPS0_POSN                                 0x4
#define _TMR1CON_CKPS0_POSITION                             0x4
#define _TMR1CON_CKPS0_SIZE                                 0x1
#define _TMR1CON_CKPS0_LENGTH                               0x1
#define _TMR1CON_CKPS0_MASK                                 0x10
#define _TMR1CON_CKPS1_POSN                                 0x5
#define _TMR1CON_CKPS1_POSITION                             0x5
#define _TMR1CON_CKPS1_SIZE                                 0x1
#define _TMR1CON_CKPS1_LENGTH                               0x1
#define _TMR1CON_CKPS1_MASK                                 0x20
#define _TMR1CON_RD161_POSN                                 0x1
#define _TMR1CON_RD161_POSITION                             0x1
#define _TMR1CON_RD161_SIZE                                 0x1
#define _TMR1CON_RD161_LENGTH                               0x1
#define _TMR1CON_RD161_MASK                                 0x2

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0x20F);
#ifndef _LIB_BUILD
asm("T1GCON equ 020Fh");
#endif
// aliases
extern volatile unsigned char           TMR1GCON            __at(0x20F);
#ifndef _LIB_BUILD
asm("TMR1GCON equ 020Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned GVAL                   :1;
        unsigned GGO                    :1;
        unsigned GSPM                   :1;
        unsigned GTM                    :1;
        unsigned GPOL                   :1;
        unsigned GE                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1GVAL                 :1;
        unsigned T1GGO                  :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned T1GE                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_DONE               :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_T1DONE             :1;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0x20F);
// bitfield macros
#define _T1GCON_GVAL_POSN                                   0x2
#define _T1GCON_GVAL_POSITION                               0x2
#define _T1GCON_GVAL_SIZE                                   0x1
#define _T1GCON_GVAL_LENGTH                                 0x1
#define _T1GCON_GVAL_MASK                                   0x4
#define _T1GCON_GGO_POSN                                    0x3
#define _T1GCON_GGO_POSITION                                0x3
#define _T1GCON_GGO_SIZE                                    0x1
#define _T1GCON_GGO_LENGTH                                  0x1
#define _T1GCON_GGO_MASK                                    0x8
#define _T1GCON_GSPM_POSN                                   0x4
#define _T1GCON_GSPM_POSITION                               0x4
#define _T1GCON_GSPM_SIZE                                   0x1
#define _T1GCON_GSPM_LENGTH                                 0x1
#define _T1GCON_GSPM_MASK                                   0x10
#define _T1GCON_GTM_POSN                                    0x5
#define _T1GCON_GTM_POSITION                                0x5
#define _T1GCON_GTM_SIZE                                    0x1
#define _T1GCON_GTM_LENGTH                                  0x1
#define _T1GCON_GTM_MASK                                    0x20
#define _T1GCON_GPOL_POSN                                   0x6
#define _T1GCON_GPOL_POSITION                               0x6
#define _T1GCON_GPOL_SIZE                                   0x1
#define _T1GCON_GPOL_LENGTH                                 0x1
#define _T1GCON_GPOL_MASK                                   0x40
#define _T1GCON_GE_POSN                                     0x7
#define _T1GCON_GE_POSITION                                 0x7
#define _T1GCON_GE_SIZE                                     0x1
#define _T1GCON_GE_LENGTH                                   0x1
#define _T1GCON_GE_MASK                                     0x80
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
#define _T1GCON_T1GE_POSN                                   0x7
#define _T1GCON_T1GE_POSITION                               0x7
#define _T1GCON_T1GE_SIZE                                   0x1
#define _T1GCON_T1GE_LENGTH                                 0x1
#define _T1GCON_T1GE_MASK                                   0x80
#define _T1GCON_NOT_DONE_POSN                               0x3
#define _T1GCON_NOT_DONE_POSITION                           0x3
#define _T1GCON_NOT_DONE_SIZE                               0x1
#define _T1GCON_NOT_DONE_LENGTH                             0x1
#define _T1GCON_NOT_DONE_MASK                               0x8
#define _T1GCON_NOT_T1DONE_POSN                             0x3
#define _T1GCON_NOT_T1DONE_POSITION                         0x3
#define _T1GCON_NOT_T1DONE_SIZE                             0x1
#define _T1GCON_NOT_T1DONE_LENGTH                           0x1
#define _T1GCON_NOT_T1DONE_MASK                             0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned GVAL                   :1;
        unsigned GGO                    :1;
        unsigned GSPM                   :1;
        unsigned GTM                    :1;
        unsigned GPOL                   :1;
        unsigned GE                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1GVAL                 :1;
        unsigned T1GGO                  :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned T1GE                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_DONE               :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_T1DONE             :1;
    };
} TMR1GCONbits_t;
extern volatile TMR1GCONbits_t TMR1GCONbits __at(0x20F);
// bitfield macros
#define _TMR1GCON_GVAL_POSN                                 0x2
#define _TMR1GCON_GVAL_POSITION                             0x2
#define _TMR1GCON_GVAL_SIZE                                 0x1
#define _TMR1GCON_GVAL_LENGTH                               0x1
#define _TMR1GCON_GVAL_MASK                                 0x4
#define _TMR1GCON_GGO_POSN                                  0x3
#define _TMR1GCON_GGO_POSITION                              0x3
#define _TMR1GCON_GGO_SIZE                                  0x1
#define _TMR1GCON_GGO_LENGTH                                0x1
#define _TMR1GCON_GGO_MASK                                  0x8
#define _TMR1GCON_GSPM_POSN                                 0x4
#define _TMR1GCON_GSPM_POSITION                             0x4
#define _TMR1GCON_GSPM_SIZE                                 0x1
#define _TMR1GCON_GSPM_LENGTH                               0x1
#define _TMR1GCON_GSPM_MASK                                 0x10
#define _TMR1GCON_GTM_POSN                                  0x5
#define _TMR1GCON_GTM_POSITION                              0x5
#define _TMR1GCON_GTM_SIZE                                  0x1
#define _TMR1GCON_GTM_LENGTH                                0x1
#define _TMR1GCON_GTM_MASK                                  0x20
#define _TMR1GCON_GPOL_POSN                                 0x6
#define _TMR1GCON_GPOL_POSITION                             0x6
#define _TMR1GCON_GPOL_SIZE                                 0x1
#define _TMR1GCON_GPOL_LENGTH                               0x1
#define _TMR1GCON_GPOL_MASK                                 0x40
#define _TMR1GCON_GE_POSN                                   0x7
#define _TMR1GCON_GE_POSITION                               0x7
#define _TMR1GCON_GE_SIZE                                   0x1
#define _TMR1GCON_GE_LENGTH                                 0x1
#define _TMR1GCON_GE_MASK                                   0x80
#define _TMR1GCON_T1GVAL_POSN                               0x2
#define _TMR1GCON_T1GVAL_POSITION                           0x2
#define _TMR1GCON_T1GVAL_SIZE                               0x1
#define _TMR1GCON_T1GVAL_LENGTH                             0x1
#define _TMR1GCON_T1GVAL_MASK                               0x4
#define _TMR1GCON_T1GGO_POSN                                0x3
#define _TMR1GCON_T1GGO_POSITION                            0x3
#define _TMR1GCON_T1GGO_SIZE                                0x1
#define _TMR1GCON_T1GGO_LENGTH                              0x1
#define _TMR1GCON_T1GGO_MASK                                0x8
#define _TMR1GCON_T1GSPM_POSN                               0x4
#define _TMR1GCON_T1GSPM_POSITION                           0x4
#define _TMR1GCON_T1GSPM_SIZE                               0x1
#define _TMR1GCON_T1GSPM_LENGTH                             0x1
#define _TMR1GCON_T1GSPM_MASK                               0x10
#define _TMR1GCON_T1GTM_POSN                                0x5
#define _TMR1GCON_T1GTM_POSITION                            0x5
#define _TMR1GCON_T1GTM_SIZE                                0x1
#define _TMR1GCON_T1GTM_LENGTH                              0x1
#define _TMR1GCON_T1GTM_MASK                                0x20
#define _TMR1GCON_T1GPOL_POSN                               0x6
#define _TMR1GCON_T1GPOL_POSITION                           0x6
#define _TMR1GCON_T1GPOL_SIZE                               0x1
#define _TMR1GCON_T1GPOL_LENGTH                             0x1
#define _TMR1GCON_T1GPOL_MASK                               0x40
#define _TMR1GCON_T1GE_POSN                                 0x7
#define _TMR1GCON_T1GE_POSITION                             0x7
#define _TMR1GCON_T1GE_SIZE                                 0x1
#define _TMR1GCON_T1GE_LENGTH                               0x1
#define _TMR1GCON_T1GE_MASK                                 0x80
#define _TMR1GCON_NOT_DONE_POSN                             0x3
#define _TMR1GCON_NOT_DONE_POSITION                         0x3
#define _TMR1GCON_NOT_DONE_SIZE                             0x1
#define _TMR1GCON_NOT_DONE_LENGTH                           0x1
#define _TMR1GCON_NOT_DONE_MASK                             0x8
#define _TMR1GCON_NOT_T1DONE_POSN                           0x3
#define _TMR1GCON_NOT_T1DONE_POSITION                       0x3
#define _TMR1GCON_NOT_T1DONE_SIZE                           0x1
#define _TMR1GCON_NOT_T1DONE_LENGTH                         0x1
#define _TMR1GCON_NOT_T1DONE_MASK                           0x8

// Register: T1GATE
#define T1GATE T1GATE
extern volatile unsigned char           T1GATE              __at(0x210);
#ifndef _LIB_BUILD
asm("T1GATE equ 0210h");
#endif
// aliases
extern volatile unsigned char           TMR1GATE            __at(0x210);
#ifndef _LIB_BUILD
asm("TMR1GATE equ 0210h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned GSS                    :8;
    };
    struct {
        unsigned GSS0                   :1;
        unsigned GSS1                   :1;
        unsigned GSS2                   :1;
        unsigned GSS3                   :1;
        unsigned GSS4                   :1;
    };
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
        unsigned T1GSS2                 :1;
        unsigned T1GSS3                 :1;
        unsigned T1GSS4                 :1;
    };
} T1GATEbits_t;
extern volatile T1GATEbits_t T1GATEbits __at(0x210);
// bitfield macros
#define _T1GATE_GSS_POSN                                    0x0
#define _T1GATE_GSS_POSITION                                0x0
#define _T1GATE_GSS_SIZE                                    0x8
#define _T1GATE_GSS_LENGTH                                  0x8
#define _T1GATE_GSS_MASK                                    0xFF
#define _T1GATE_GSS0_POSN                                   0x0
#define _T1GATE_GSS0_POSITION                               0x0
#define _T1GATE_GSS0_SIZE                                   0x1
#define _T1GATE_GSS0_LENGTH                                 0x1
#define _T1GATE_GSS0_MASK                                   0x1
#define _T1GATE_GSS1_POSN                                   0x1
#define _T1GATE_GSS1_POSITION                               0x1
#define _T1GATE_GSS1_SIZE                                   0x1
#define _T1GATE_GSS1_LENGTH                                 0x1
#define _T1GATE_GSS1_MASK                                   0x2
#define _T1GATE_GSS2_POSN                                   0x2
#define _T1GATE_GSS2_POSITION                               0x2
#define _T1GATE_GSS2_SIZE                                   0x1
#define _T1GATE_GSS2_LENGTH                                 0x1
#define _T1GATE_GSS2_MASK                                   0x4
#define _T1GATE_GSS3_POSN                                   0x3
#define _T1GATE_GSS3_POSITION                               0x3
#define _T1GATE_GSS3_SIZE                                   0x1
#define _T1GATE_GSS3_LENGTH                                 0x1
#define _T1GATE_GSS3_MASK                                   0x8
#define _T1GATE_GSS4_POSN                                   0x4
#define _T1GATE_GSS4_POSITION                               0x4
#define _T1GATE_GSS4_SIZE                                   0x1
#define _T1GATE_GSS4_LENGTH                                 0x1
#define _T1GATE_GSS4_MASK                                   0x10
#define _T1GATE_T1GSS0_POSN                                 0x0
#define _T1GATE_T1GSS0_POSITION                             0x0
#define _T1GATE_T1GSS0_SIZE                                 0x1
#define _T1GATE_T1GSS0_LENGTH                               0x1
#define _T1GATE_T1GSS0_MASK                                 0x1
#define _T1GATE_T1GSS1_POSN                                 0x1
#define _T1GATE_T1GSS1_POSITION                             0x1
#define _T1GATE_T1GSS1_SIZE                                 0x1
#define _T1GATE_T1GSS1_LENGTH                               0x1
#define _T1GATE_T1GSS1_MASK                                 0x2
#define _T1GATE_T1GSS2_POSN                                 0x2
#define _T1GATE_T1GSS2_POSITION                             0x2
#define _T1GATE_T1GSS2_SIZE                                 0x1
#define _T1GATE_T1GSS2_LENGTH                               0x1
#define _T1GATE_T1GSS2_MASK                                 0x4
#define _T1GATE_T1GSS3_POSN                                 0x3
#define _T1GATE_T1GSS3_POSITION                             0x3
#define _T1GATE_T1GSS3_SIZE                                 0x1
#define _T1GATE_T1GSS3_LENGTH                               0x1
#define _T1GATE_T1GSS3_MASK                                 0x8
#define _T1GATE_T1GSS4_POSN                                 0x4
#define _T1GATE_T1GSS4_POSITION                             0x4
#define _T1GATE_T1GSS4_SIZE                                 0x1
#define _T1GATE_T1GSS4_LENGTH                               0x1
#define _T1GATE_T1GSS4_MASK                                 0x10
// alias bitfield definitions
typedef union {
    struct {
        unsigned GSS                    :8;
    };
    struct {
        unsigned GSS0                   :1;
        unsigned GSS1                   :1;
        unsigned GSS2                   :1;
        unsigned GSS3                   :1;
        unsigned GSS4                   :1;
    };
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
        unsigned T1GSS2                 :1;
        unsigned T1GSS3                 :1;
        unsigned T1GSS4                 :1;
    };
} TMR1GATEbits_t;
extern volatile TMR1GATEbits_t TMR1GATEbits __at(0x210);
// bitfield macros
#define _TMR1GATE_GSS_POSN                                  0x0
#define _TMR1GATE_GSS_POSITION                              0x0
#define _TMR1GATE_GSS_SIZE                                  0x8
#define _TMR1GATE_GSS_LENGTH                                0x8
#define _TMR1GATE_GSS_MASK                                  0xFF
#define _TMR1GATE_GSS0_POSN                                 0x0
#define _TMR1GATE_GSS0_POSITION                             0x0
#define _TMR1GATE_GSS0_SIZE                                 0x1
#define _TMR1GATE_GSS0_LENGTH                               0x1
#define _TMR1GATE_GSS0_MASK                                 0x1
#define _TMR1GATE_GSS1_POSN                                 0x1
#define _TMR1GATE_GSS1_POSITION                             0x1
#define _TMR1GATE_GSS1_SIZE                                 0x1
#define _TMR1GATE_GSS1_LENGTH                               0x1
#define _TMR1GATE_GSS1_MASK                                 0x2
#define _TMR1GATE_GSS2_POSN                                 0x2
#define _TMR1GATE_GSS2_POSITION                             0x2
#define _TMR1GATE_GSS2_SIZE                                 0x1
#define _TMR1GATE_GSS2_LENGTH                               0x1
#define _TMR1GATE_GSS2_MASK                                 0x4
#define _TMR1GATE_GSS3_POSN                                 0x3
#define _TMR1GATE_GSS3_POSITION                             0x3
#define _TMR1GATE_GSS3_SIZE                                 0x1
#define _TMR1GATE_GSS3_LENGTH                               0x1
#define _TMR1GATE_GSS3_MASK                                 0x8
#define _TMR1GATE_GSS4_POSN                                 0x4
#define _TMR1GATE_GSS4_POSITION                             0x4
#define _TMR1GATE_GSS4_SIZE                                 0x1
#define _TMR1GATE_GSS4_LENGTH                               0x1
#define _TMR1GATE_GSS4_MASK                                 0x10
#define _TMR1GATE_T1GSS0_POSN                               0x0
#define _TMR1GATE_T1GSS0_POSITION                           0x0
#define _TMR1GATE_T1GSS0_SIZE                               0x1
#define _TMR1GATE_T1GSS0_LENGTH                             0x1
#define _TMR1GATE_T1GSS0_MASK                               0x1
#define _TMR1GATE_T1GSS1_POSN                               0x1
#define _TMR1GATE_T1GSS1_POSITION                           0x1
#define _TMR1GATE_T1GSS1_SIZE                               0x1
#define _TMR1GATE_T1GSS1_LENGTH                             0x1
#define _TMR1GATE_T1GSS1_MASK                               0x2
#define _TMR1GATE_T1GSS2_POSN                               0x2
#define _TMR1GATE_T1GSS2_POSITION                           0x2
#define _TMR1GATE_T1GSS2_SIZE                               0x1
#define _TMR1GATE_T1GSS2_LENGTH                             0x1
#define _TMR1GATE_T1GSS2_MASK                               0x4
#define _TMR1GATE_T1GSS3_POSN                               0x3
#define _TMR1GATE_T1GSS3_POSITION                           0x3
#define _TMR1GATE_T1GSS3_SIZE                               0x1
#define _TMR1GATE_T1GSS3_LENGTH                             0x1
#define _TMR1GATE_T1GSS3_MASK                               0x8
#define _TMR1GATE_T1GSS4_POSN                               0x4
#define _TMR1GATE_T1GSS4_POSITION                           0x4
#define _TMR1GATE_T1GSS4_SIZE                               0x1
#define _TMR1GATE_T1GSS4_LENGTH                             0x1
#define _TMR1GATE_T1GSS4_MASK                               0x10

// Register: T1CLK
#define T1CLK T1CLK
extern volatile unsigned char           T1CLK               __at(0x211);
#ifndef _LIB_BUILD
asm("T1CLK equ 0211h");
#endif
// aliases
extern volatile unsigned char           TMR1CLK             __at(0x211);
#ifndef _LIB_BUILD
asm("TMR1CLK equ 0211h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CS                     :8;
    };
    struct {
        unsigned T1CS0                  :1;
        unsigned T1CS1                  :1;
        unsigned T1CS2                  :1;
        unsigned T1CS3                  :1;
    };
    struct {
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned CS2                    :1;
        unsigned CS3                    :1;
    };
} T1CLKbits_t;
extern volatile T1CLKbits_t T1CLKbits __at(0x211);
// bitfield macros
#define _T1CLK_CS_POSN                                      0x0
#define _T1CLK_CS_POSITION                                  0x0
#define _T1CLK_CS_SIZE                                      0x8
#define _T1CLK_CS_LENGTH                                    0x8
#define _T1CLK_CS_MASK                                      0xFF
#define _T1CLK_T1CS0_POSN                                   0x0
#define _T1CLK_T1CS0_POSITION                               0x0
#define _T1CLK_T1CS0_SIZE                                   0x1
#define _T1CLK_T1CS0_LENGTH                                 0x1
#define _T1CLK_T1CS0_MASK                                   0x1
#define _T1CLK_T1CS1_POSN                                   0x1
#define _T1CLK_T1CS1_POSITION                               0x1
#define _T1CLK_T1CS1_SIZE                                   0x1
#define _T1CLK_T1CS1_LENGTH                                 0x1
#define _T1CLK_T1CS1_MASK                                   0x2
#define _T1CLK_T1CS2_POSN                                   0x2
#define _T1CLK_T1CS2_POSITION                               0x2
#define _T1CLK_T1CS2_SIZE                                   0x1
#define _T1CLK_T1CS2_LENGTH                                 0x1
#define _T1CLK_T1CS2_MASK                                   0x4
#define _T1CLK_T1CS3_POSN                                   0x3
#define _T1CLK_T1CS3_POSITION                               0x3
#define _T1CLK_T1CS3_SIZE                                   0x1
#define _T1CLK_T1CS3_LENGTH                                 0x1
#define _T1CLK_T1CS3_MASK                                   0x8
#define _T1CLK_CS0_POSN                                     0x0
#define _T1CLK_CS0_POSITION                                 0x0
#define _T1CLK_CS0_SIZE                                     0x1
#define _T1CLK_CS0_LENGTH                                   0x1
#define _T1CLK_CS0_MASK                                     0x1
#define _T1CLK_CS1_POSN                                     0x1
#define _T1CLK_CS1_POSITION                                 0x1
#define _T1CLK_CS1_SIZE                                     0x1
#define _T1CLK_CS1_LENGTH                                   0x1
#define _T1CLK_CS1_MASK                                     0x2
#define _T1CLK_CS2_POSN                                     0x2
#define _T1CLK_CS2_POSITION                                 0x2
#define _T1CLK_CS2_SIZE                                     0x1
#define _T1CLK_CS2_LENGTH                                   0x1
#define _T1CLK_CS2_MASK                                     0x4
#define _T1CLK_CS3_POSN                                     0x3
#define _T1CLK_CS3_POSITION                                 0x3
#define _T1CLK_CS3_SIZE                                     0x1
#define _T1CLK_CS3_LENGTH                                   0x1
#define _T1CLK_CS3_MASK                                     0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned CS                     :8;
    };
    struct {
        unsigned T1CS0                  :1;
        unsigned T1CS1                  :1;
        unsigned T1CS2                  :1;
        unsigned T1CS3                  :1;
    };
    struct {
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned CS2                    :1;
        unsigned CS3                    :1;
    };
} TMR1CLKbits_t;
extern volatile TMR1CLKbits_t TMR1CLKbits __at(0x211);
// bitfield macros
#define _TMR1CLK_CS_POSN                                    0x0
#define _TMR1CLK_CS_POSITION                                0x0
#define _TMR1CLK_CS_SIZE                                    0x8
#define _TMR1CLK_CS_LENGTH                                  0x8
#define _TMR1CLK_CS_MASK                                    0xFF
#define _TMR1CLK_T1CS0_POSN                                 0x0
#define _TMR1CLK_T1CS0_POSITION                             0x0
#define _TMR1CLK_T1CS0_SIZE                                 0x1
#define _TMR1CLK_T1CS0_LENGTH                               0x1
#define _TMR1CLK_T1CS0_MASK                                 0x1
#define _TMR1CLK_T1CS1_POSN                                 0x1
#define _TMR1CLK_T1CS1_POSITION                             0x1
#define _TMR1CLK_T1CS1_SIZE                                 0x1
#define _TMR1CLK_T1CS1_LENGTH                               0x1
#define _TMR1CLK_T1CS1_MASK                                 0x2
#define _TMR1CLK_T1CS2_POSN                                 0x2
#define _TMR1CLK_T1CS2_POSITION                             0x2
#define _TMR1CLK_T1CS2_SIZE                                 0x1
#define _TMR1CLK_T1CS2_LENGTH                               0x1
#define _TMR1CLK_T1CS2_MASK                                 0x4
#define _TMR1CLK_T1CS3_POSN                                 0x3
#define _TMR1CLK_T1CS3_POSITION                             0x3
#define _TMR1CLK_T1CS3_SIZE                                 0x1
#define _TMR1CLK_T1CS3_LENGTH                               0x1
#define _TMR1CLK_T1CS3_MASK                                 0x8
#define _TMR1CLK_CS0_POSN                                   0x0
#define _TMR1CLK_CS0_POSITION                               0x0
#define _TMR1CLK_CS0_SIZE                                   0x1
#define _TMR1CLK_CS0_LENGTH                                 0x1
#define _TMR1CLK_CS0_MASK                                   0x1
#define _TMR1CLK_CS1_POSN                                   0x1
#define _TMR1CLK_CS1_POSITION                               0x1
#define _TMR1CLK_CS1_SIZE                                   0x1
#define _TMR1CLK_CS1_LENGTH                                 0x1
#define _TMR1CLK_CS1_MASK                                   0x2
#define _TMR1CLK_CS2_POSN                                   0x2
#define _TMR1CLK_CS2_POSITION                               0x2
#define _TMR1CLK_CS2_SIZE                                   0x1
#define _TMR1CLK_CS2_LENGTH                                 0x1
#define _TMR1CLK_CS2_MASK                                   0x4
#define _TMR1CLK_CS3_POSN                                   0x3
#define _TMR1CLK_CS3_POSITION                               0x3
#define _TMR1CLK_CS3_SIZE                                   0x1
#define _TMR1CLK_CS3_LENGTH                                 0x1
#define _TMR1CLK_CS3_MASK                                   0x8

// Register: T2TMR
#define T2TMR T2TMR
extern volatile unsigned char           T2TMR               __at(0x28C);
#ifndef _LIB_BUILD
asm("T2TMR equ 028Ch");
#endif
// aliases
extern volatile unsigned char           TMR2                __at(0x28C);
#ifndef _LIB_BUILD
asm("TMR2 equ 028Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR                    :8;
    };
    struct {
        unsigned TMR2                   :8;
    };
} T2TMRbits_t;
extern volatile T2TMRbits_t T2TMRbits __at(0x28C);
// bitfield macros
#define _T2TMR_TMR_POSN                                     0x0
#define _T2TMR_TMR_POSITION                                 0x0
#define _T2TMR_TMR_SIZE                                     0x8
#define _T2TMR_TMR_LENGTH                                   0x8
#define _T2TMR_TMR_MASK                                     0xFF
#define _T2TMR_TMR2_POSN                                    0x0
#define _T2TMR_TMR2_POSITION                                0x0
#define _T2TMR_TMR2_SIZE                                    0x8
#define _T2TMR_TMR2_LENGTH                                  0x8
#define _T2TMR_TMR2_MASK                                    0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TMR                    :8;
    };
    struct {
        unsigned TMR2                   :8;
    };
} TMR2bits_t;
extern volatile TMR2bits_t TMR2bits __at(0x28C);
// bitfield macros
#define _TMR2_TMR_POSN                                      0x0
#define _TMR2_TMR_POSITION                                  0x0
#define _TMR2_TMR_SIZE                                      0x8
#define _TMR2_TMR_LENGTH                                    0x8
#define _TMR2_TMR_MASK                                      0xFF
#define _TMR2_TMR2_POSN                                     0x0
#define _TMR2_TMR2_POSITION                                 0x0
#define _TMR2_TMR2_SIZE                                     0x8
#define _TMR2_TMR2_LENGTH                                   0x8
#define _TMR2_TMR2_MASK                                     0xFF

// Register: T2PR
#define T2PR T2PR
extern volatile unsigned char           T2PR                __at(0x28D);
#ifndef _LIB_BUILD
asm("T2PR equ 028Dh");
#endif
// aliases
extern volatile unsigned char           PR2                 __at(0x28D);
#ifndef _LIB_BUILD
asm("PR2 equ 028Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR                     :8;
    };
    struct {
        unsigned T2PR                   :8;
    };
} T2PRbits_t;
extern volatile T2PRbits_t T2PRbits __at(0x28D);
// bitfield macros
#define _T2PR_PR_POSN                                       0x0
#define _T2PR_PR_POSITION                                   0x0
#define _T2PR_PR_SIZE                                       0x8
#define _T2PR_PR_LENGTH                                     0x8
#define _T2PR_PR_MASK                                       0xFF
#define _T2PR_T2PR_POSN                                     0x0
#define _T2PR_T2PR_POSITION                                 0x0
#define _T2PR_T2PR_SIZE                                     0x8
#define _T2PR_T2PR_LENGTH                                   0x8
#define _T2PR_T2PR_MASK                                     0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned PR                     :8;
    };
    struct {
        unsigned T2PR                   :8;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0x28D);
// bitfield macros
#define _PR2_PR_POSN                                        0x0
#define _PR2_PR_POSITION                                    0x0
#define _PR2_PR_SIZE                                        0x8
#define _PR2_PR_LENGTH                                      0x8
#define _PR2_PR_MASK                                        0xFF
#define _PR2_T2PR_POSN                                      0x0
#define _PR2_T2PR_POSITION                                  0x0
#define _PR2_T2PR_SIZE                                      0x8
#define _PR2_T2PR_LENGTH                                    0x8
#define _PR2_T2PR_MASK                                      0xFF

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x28E);
#ifndef _LIB_BUILD
asm("T2CON equ 028Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OUTPS                  :4;
        unsigned CKPS                   :3;
        unsigned ON                     :1;
    };
    struct {
        unsigned OUTPS0                 :1;
        unsigned OUTPS1                 :1;
        unsigned OUTPS2                 :1;
        unsigned OUTPS3                 :1;
        unsigned CKPS0                  :1;
        unsigned CKPS1                  :1;
        unsigned CKPS2                  :1;
    };
    struct {
        unsigned T2OUTPS                :4;
        unsigned T2CKPS                 :3;
        unsigned T2ON                   :1;
    };
    struct {
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned T2CKPS2                :1;
        unsigned TMR2ON                 :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x28E);
// bitfield macros
#define _T2CON_OUTPS_POSN                                   0x0
#define _T2CON_OUTPS_POSITION                               0x0
#define _T2CON_OUTPS_SIZE                                   0x4
#define _T2CON_OUTPS_LENGTH                                 0x4
#define _T2CON_OUTPS_MASK                                   0xF
#define _T2CON_CKPS_POSN                                    0x4
#define _T2CON_CKPS_POSITION                                0x4
#define _T2CON_CKPS_SIZE                                    0x3
#define _T2CON_CKPS_LENGTH                                  0x3
#define _T2CON_CKPS_MASK                                    0x70
#define _T2CON_ON_POSN                                      0x7
#define _T2CON_ON_POSITION                                  0x7
#define _T2CON_ON_SIZE                                      0x1
#define _T2CON_ON_LENGTH                                    0x1
#define _T2CON_ON_MASK                                      0x80
#define _T2CON_OUTPS0_POSN                                  0x0
#define _T2CON_OUTPS0_POSITION                              0x0
#define _T2CON_OUTPS0_SIZE                                  0x1
#define _T2CON_OUTPS0_LENGTH                                0x1
#define _T2CON_OUTPS0_MASK                                  0x1
#define _T2CON_OUTPS1_POSN                                  0x1
#define _T2CON_OUTPS1_POSITION                              0x1
#define _T2CON_OUTPS1_SIZE                                  0x1
#define _T2CON_OUTPS1_LENGTH                                0x1
#define _T2CON_OUTPS1_MASK                                  0x2
#define _T2CON_OUTPS2_POSN                                  0x2
#define _T2CON_OUTPS2_POSITION                              0x2
#define _T2CON_OUTPS2_SIZE                                  0x1
#define _T2CON_OUTPS2_LENGTH                                0x1
#define _T2CON_OUTPS2_MASK                                  0x4
#define _T2CON_OUTPS3_POSN                                  0x3
#define _T2CON_OUTPS3_POSITION                              0x3
#define _T2CON_OUTPS3_SIZE                                  0x1
#define _T2CON_OUTPS3_LENGTH                                0x1
#define _T2CON_OUTPS3_MASK                                  0x8
#define _T2CON_CKPS0_POSN                                   0x4
#define _T2CON_CKPS0_POSITION                               0x4
#define _T2CON_CKPS0_SIZE                                   0x1
#define _T2CON_CKPS0_LENGTH                                 0x1
#define _T2CON_CKPS0_MASK                                   0x10
#define _T2CON_CKPS1_POSN                                   0x5
#define _T2CON_CKPS1_POSITION                               0x5
#define _T2CON_CKPS1_SIZE                                   0x1
#define _T2CON_CKPS1_LENGTH                                 0x1
#define _T2CON_CKPS1_MASK                                   0x20
#define _T2CON_CKPS2_POSN                                   0x6
#define _T2CON_CKPS2_POSITION                               0x6
#define _T2CON_CKPS2_SIZE                                   0x1
#define _T2CON_CKPS2_LENGTH                                 0x1
#define _T2CON_CKPS2_MASK                                   0x40
#define _T2CON_T2OUTPS_POSN                                 0x0
#define _T2CON_T2OUTPS_POSITION                             0x0
#define _T2CON_T2OUTPS_SIZE                                 0x4
#define _T2CON_T2OUTPS_LENGTH                               0x4
#define _T2CON_T2OUTPS_MASK                                 0xF
#define _T2CON_T2CKPS_POSN                                  0x4
#define _T2CON_T2CKPS_POSITION                              0x4
#define _T2CON_T2CKPS_SIZE                                  0x3
#define _T2CON_T2CKPS_LENGTH                                0x3
#define _T2CON_T2CKPS_MASK                                  0x70
#define _T2CON_T2ON_POSN                                    0x7
#define _T2CON_T2ON_POSITION                                0x7
#define _T2CON_T2ON_SIZE                                    0x1
#define _T2CON_T2ON_LENGTH                                  0x1
#define _T2CON_T2ON_MASK                                    0x80
#define _T2CON_T2OUTPS0_POSN                                0x0
#define _T2CON_T2OUTPS0_POSITION                            0x0
#define _T2CON_T2OUTPS0_SIZE                                0x1
#define _T2CON_T2OUTPS0_LENGTH                              0x1
#define _T2CON_T2OUTPS0_MASK                                0x1
#define _T2CON_T2OUTPS1_POSN                                0x1
#define _T2CON_T2OUTPS1_POSITION                            0x1
#define _T2CON_T2OUTPS1_SIZE                                0x1
#define _T2CON_T2OUTPS1_LENGTH                              0x1
#define _T2CON_T2OUTPS1_MASK                                0x2
#define _T2CON_T2OUTPS2_POSN                                0x2
#define _T2CON_T2OUTPS2_POSITION                            0x2
#define _T2CON_T2OUTPS2_SIZE                                0x1
#define _T2CON_T2OUTPS2_LENGTH                              0x1
#define _T2CON_T2OUTPS2_MASK                                0x4
#define _T2CON_T2OUTPS3_POSN                                0x3
#define _T2CON_T2OUTPS3_POSITION                            0x3
#define _T2CON_T2OUTPS3_SIZE                                0x1
#define _T2CON_T2OUTPS3_LENGTH                              0x1
#define _T2CON_T2OUTPS3_MASK                                0x8
#define _T2CON_T2CKPS0_POSN                                 0x4
#define _T2CON_T2CKPS0_POSITION                             0x4
#define _T2CON_T2CKPS0_SIZE                                 0x1
#define _T2CON_T2CKPS0_LENGTH                               0x1
#define _T2CON_T2CKPS0_MASK                                 0x10
#define _T2CON_T2CKPS1_POSN                                 0x5
#define _T2CON_T2CKPS1_POSITION                             0x5
#define _T2CON_T2CKPS1_SIZE                                 0x1
#define _T2CON_T2CKPS1_LENGTH                               0x1
#define _T2CON_T2CKPS1_MASK                                 0x20
#define _T2CON_T2CKPS2_POSN                                 0x6
#define _T2CON_T2CKPS2_POSITION                             0x6
#define _T2CON_T2CKPS2_SIZE                                 0x1
#define _T2CON_T2CKPS2_LENGTH                               0x1
#define _T2CON_T2CKPS2_MASK                                 0x40
#define _T2CON_TMR2ON_POSN                                  0x7
#define _T2CON_TMR2ON_POSITION                              0x7
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x80

// Register: T2HLT
#define T2HLT T2HLT
extern volatile unsigned char           T2HLT               __at(0x28F);
#ifndef _LIB_BUILD
asm("T2HLT equ 028Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :5;
        unsigned CKSYNC                 :1;
        unsigned CKPOL                  :1;
        unsigned PSYNC                  :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
        unsigned MODE4                  :1;
    };
    struct {
        unsigned T2MODE                 :5;
        unsigned T2CKSYNC               :1;
        unsigned T2CKPOL                :1;
        unsigned T2PSYNC                :1;
    };
    struct {
        unsigned T2MODE0                :1;
        unsigned T2MODE1                :1;
        unsigned T2MODE2                :1;
        unsigned T2MODE3                :1;
        unsigned T2MODE4                :1;
    };
} T2HLTbits_t;
extern volatile T2HLTbits_t T2HLTbits __at(0x28F);
// bitfield macros
#define _T2HLT_MODE_POSN                                    0x0
#define _T2HLT_MODE_POSITION                                0x0
#define _T2HLT_MODE_SIZE                                    0x5
#define _T2HLT_MODE_LENGTH                                  0x5
#define _T2HLT_MODE_MASK                                    0x1F
#define _T2HLT_CKSYNC_POSN                                  0x5
#define _T2HLT_CKSYNC_POSITION                              0x5
#define _T2HLT_CKSYNC_SIZE                                  0x1
#define _T2HLT_CKSYNC_LENGTH                                0x1
#define _T2HLT_CKSYNC_MASK                                  0x20
#define _T2HLT_CKPOL_POSN                                   0x6
#define _T2HLT_CKPOL_POSITION                               0x6
#define _T2HLT_CKPOL_SIZE                                   0x1
#define _T2HLT_CKPOL_LENGTH                                 0x1
#define _T2HLT_CKPOL_MASK                                   0x40
#define _T2HLT_PSYNC_POSN                                   0x7
#define _T2HLT_PSYNC_POSITION                               0x7
#define _T2HLT_PSYNC_SIZE                                   0x1
#define _T2HLT_PSYNC_LENGTH                                 0x1
#define _T2HLT_PSYNC_MASK                                   0x80
#define _T2HLT_MODE0_POSN                                   0x0
#define _T2HLT_MODE0_POSITION                               0x0
#define _T2HLT_MODE0_SIZE                                   0x1
#define _T2HLT_MODE0_LENGTH                                 0x1
#define _T2HLT_MODE0_MASK                                   0x1
#define _T2HLT_MODE1_POSN                                   0x1
#define _T2HLT_MODE1_POSITION                               0x1
#define _T2HLT_MODE1_SIZE                                   0x1
#define _T2HLT_MODE1_LENGTH                                 0x1
#define _T2HLT_MODE1_MASK                                   0x2
#define _T2HLT_MODE2_POSN                                   0x2
#define _T2HLT_MODE2_POSITION                               0x2
#define _T2HLT_MODE2_SIZE                                   0x1
#define _T2HLT_MODE2_LENGTH                                 0x1
#define _T2HLT_MODE2_MASK                                   0x4
#define _T2HLT_MODE3_POSN                                   0x3
#define _T2HLT_MODE3_POSITION                               0x3
#define _T2HLT_MODE3_SIZE                                   0x1
#define _T2HLT_MODE3_LENGTH                                 0x1
#define _T2HLT_MODE3_MASK                                   0x8
#define _T2HLT_MODE4_POSN                                   0x4
#define _T2HLT_MODE4_POSITION                               0x4
#define _T2HLT_MODE4_SIZE                                   0x1
#define _T2HLT_MODE4_LENGTH                                 0x1
#define _T2HLT_MODE4_MASK                                   0x10
#define _T2HLT_T2MODE_POSN                                  0x0
#define _T2HLT_T2MODE_POSITION                              0x0
#define _T2HLT_T2MODE_SIZE                                  0x5
#define _T2HLT_T2MODE_LENGTH                                0x5
#define _T2HLT_T2MODE_MASK                                  0x1F
#define _T2HLT_T2CKSYNC_POSN                                0x5
#define _T2HLT_T2CKSYNC_POSITION                            0x5
#define _T2HLT_T2CKSYNC_SIZE                                0x1
#define _T2HLT_T2CKSYNC_LENGTH                              0x1
#define _T2HLT_T2CKSYNC_MASK                                0x20
#define _T2HLT_T2CKPOL_POSN                                 0x6
#define _T2HLT_T2CKPOL_POSITION                             0x6
#define _T2HLT_T2CKPOL_SIZE                                 0x1
#define _T2HLT_T2CKPOL_LENGTH                               0x1
#define _T2HLT_T2CKPOL_MASK                                 0x40
#define _T2HLT_T2PSYNC_POSN                                 0x7
#define _T2HLT_T2PSYNC_POSITION                             0x7
#define _T2HLT_T2PSYNC_SIZE                                 0x1
#define _T2HLT_T2PSYNC_LENGTH                               0x1
#define _T2HLT_T2PSYNC_MASK                                 0x80
#define _T2HLT_T2MODE0_POSN                                 0x0
#define _T2HLT_T2MODE0_POSITION                             0x0
#define _T2HLT_T2MODE0_SIZE                                 0x1
#define _T2HLT_T2MODE0_LENGTH                               0x1
#define _T2HLT_T2MODE0_MASK                                 0x1
#define _T2HLT_T2MODE1_POSN                                 0x1
#define _T2HLT_T2MODE1_POSITION                             0x1
#define _T2HLT_T2MODE1_SIZE                                 0x1
#define _T2HLT_T2MODE1_LENGTH                               0x1
#define _T2HLT_T2MODE1_MASK                                 0x2
#define _T2HLT_T2MODE2_POSN                                 0x2
#define _T2HLT_T2MODE2_POSITION                             0x2
#define _T2HLT_T2MODE2_SIZE                                 0x1
#define _T2HLT_T2MODE2_LENGTH                               0x1
#define _T2HLT_T2MODE2_MASK                                 0x4
#define _T2HLT_T2MODE3_POSN                                 0x3
#define _T2HLT_T2MODE3_POSITION                             0x3
#define _T2HLT_T2MODE3_SIZE                                 0x1
#define _T2HLT_T2MODE3_LENGTH                               0x1
#define _T2HLT_T2MODE3_MASK                                 0x8
#define _T2HLT_T2MODE4_POSN                                 0x4
#define _T2HLT_T2MODE4_POSITION                             0x4
#define _T2HLT_T2MODE4_SIZE                                 0x1
#define _T2HLT_T2MODE4_LENGTH                               0x1
#define _T2HLT_T2MODE4_MASK                                 0x10

// Register: T2CLKCON
#define T2CLKCON T2CLKCON
extern volatile unsigned char           T2CLKCON            __at(0x290);
#ifndef _LIB_BUILD
asm("T2CLKCON equ 0290h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CS                     :4;
    };
    struct {
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned CS2                    :1;
    };
    struct {
        unsigned T2CS                   :4;
    };
    struct {
        unsigned T2CS0                  :1;
        unsigned T2CS1                  :1;
        unsigned T2CS2                  :1;
    };
} T2CLKCONbits_t;
extern volatile T2CLKCONbits_t T2CLKCONbits __at(0x290);
// bitfield macros
#define _T2CLKCON_CS_POSN                                   0x0
#define _T2CLKCON_CS_POSITION                               0x0
#define _T2CLKCON_CS_SIZE                                   0x4
#define _T2CLKCON_CS_LENGTH                                 0x4
#define _T2CLKCON_CS_MASK                                   0xF
#define _T2CLKCON_CS0_POSN                                  0x0
#define _T2CLKCON_CS0_POSITION                              0x0
#define _T2CLKCON_CS0_SIZE                                  0x1
#define _T2CLKCON_CS0_LENGTH                                0x1
#define _T2CLKCON_CS0_MASK                                  0x1
#define _T2CLKCON_CS1_POSN                                  0x1
#define _T2CLKCON_CS1_POSITION                              0x1
#define _T2CLKCON_CS1_SIZE                                  0x1
#define _T2CLKCON_CS1_LENGTH                                0x1
#define _T2CLKCON_CS1_MASK                                  0x2
#define _T2CLKCON_CS2_POSN                                  0x2
#define _T2CLKCON_CS2_POSITION                              0x2
#define _T2CLKCON_CS2_SIZE                                  0x1
#define _T2CLKCON_CS2_LENGTH                                0x1
#define _T2CLKCON_CS2_MASK                                  0x4
#define _T2CLKCON_T2CS_POSN                                 0x0
#define _T2CLKCON_T2CS_POSITION                             0x0
#define _T2CLKCON_T2CS_SIZE                                 0x4
#define _T2CLKCON_T2CS_LENGTH                               0x4
#define _T2CLKCON_T2CS_MASK                                 0xF
#define _T2CLKCON_T2CS0_POSN                                0x0
#define _T2CLKCON_T2CS0_POSITION                            0x0
#define _T2CLKCON_T2CS0_SIZE                                0x1
#define _T2CLKCON_T2CS0_LENGTH                              0x1
#define _T2CLKCON_T2CS0_MASK                                0x1
#define _T2CLKCON_T2CS1_POSN                                0x1
#define _T2CLKCON_T2CS1_POSITION                            0x1
#define _T2CLKCON_T2CS1_SIZE                                0x1
#define _T2CLKCON_T2CS1_LENGTH                              0x1
#define _T2CLKCON_T2CS1_MASK                                0x2
#define _T2CLKCON_T2CS2_POSN                                0x2
#define _T2CLKCON_T2CS2_POSITION                            0x2
#define _T2CLKCON_T2CS2_SIZE                                0x1
#define _T2CLKCON_T2CS2_LENGTH                              0x1
#define _T2CLKCON_T2CS2_MASK                                0x4

// Register: T2RST
#define T2RST T2RST
extern volatile unsigned char           T2RST               __at(0x291);
#ifndef _LIB_BUILD
asm("T2RST equ 0291h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RSEL                   :5;
    };
    struct {
        unsigned RSEL0                  :1;
        unsigned RSEL1                  :1;
        unsigned RSEL2                  :1;
        unsigned RSEL3                  :1;
    };
    struct {
        unsigned T2RSEL                 :5;
    };
    struct {
        unsigned T2RSEL0                :1;
        unsigned T2RSEL1                :1;
        unsigned T2RSEL2                :1;
        unsigned T2RSEL3                :1;
    };
} T2RSTbits_t;
extern volatile T2RSTbits_t T2RSTbits __at(0x291);
// bitfield macros
#define _T2RST_RSEL_POSN                                    0x0
#define _T2RST_RSEL_POSITION                                0x0
#define _T2RST_RSEL_SIZE                                    0x5
#define _T2RST_RSEL_LENGTH                                  0x5
#define _T2RST_RSEL_MASK                                    0x1F
#define _T2RST_RSEL0_POSN                                   0x0
#define _T2RST_RSEL0_POSITION                               0x0
#define _T2RST_RSEL0_SIZE                                   0x1
#define _T2RST_RSEL0_LENGTH                                 0x1
#define _T2RST_RSEL0_MASK                                   0x1
#define _T2RST_RSEL1_POSN                                   0x1
#define _T2RST_RSEL1_POSITION                               0x1
#define _T2RST_RSEL1_SIZE                                   0x1
#define _T2RST_RSEL1_LENGTH                                 0x1
#define _T2RST_RSEL1_MASK                                   0x2
#define _T2RST_RSEL2_POSN                                   0x2
#define _T2RST_RSEL2_POSITION                               0x2
#define _T2RST_RSEL2_SIZE                                   0x1
#define _T2RST_RSEL2_LENGTH                                 0x1
#define _T2RST_RSEL2_MASK                                   0x4
#define _T2RST_RSEL3_POSN                                   0x3
#define _T2RST_RSEL3_POSITION                               0x3
#define _T2RST_RSEL3_SIZE                                   0x1
#define _T2RST_RSEL3_LENGTH                                 0x1
#define _T2RST_RSEL3_MASK                                   0x8
#define _T2RST_T2RSEL_POSN                                  0x0
#define _T2RST_T2RSEL_POSITION                              0x0
#define _T2RST_T2RSEL_SIZE                                  0x5
#define _T2RST_T2RSEL_LENGTH                                0x5
#define _T2RST_T2RSEL_MASK                                  0x1F
#define _T2RST_T2RSEL0_POSN                                 0x0
#define _T2RST_T2RSEL0_POSITION                             0x0
#define _T2RST_T2RSEL0_SIZE                                 0x1
#define _T2RST_T2RSEL0_LENGTH                               0x1
#define _T2RST_T2RSEL0_MASK                                 0x1
#define _T2RST_T2RSEL1_POSN                                 0x1
#define _T2RST_T2RSEL1_POSITION                             0x1
#define _T2RST_T2RSEL1_SIZE                                 0x1
#define _T2RST_T2RSEL1_LENGTH                               0x1
#define _T2RST_T2RSEL1_MASK                                 0x2
#define _T2RST_T2RSEL2_POSN                                 0x2
#define _T2RST_T2RSEL2_POSITION                             0x2
#define _T2RST_T2RSEL2_SIZE                                 0x1
#define _T2RST_T2RSEL2_LENGTH                               0x1
#define _T2RST_T2RSEL2_MASK                                 0x4
#define _T2RST_T2RSEL3_POSN                                 0x3
#define _T2RST_T2RSEL3_POSITION                             0x3
#define _T2RST_T2RSEL3_SIZE                                 0x1
#define _T2RST_T2RSEL3_LENGTH                               0x1
#define _T2RST_T2RSEL3_MASK                                 0x8

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0x30C);
#ifndef _LIB_BUILD
asm("CCPR1 equ 030Ch");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0x30C);
#ifndef _LIB_BUILD
asm("CCPR1L equ 030Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPRL                  :8;
    };
} CCPR1Lbits_t;
extern volatile CCPR1Lbits_t CCPR1Lbits __at(0x30C);
// bitfield macros
#define _CCPR1L_CCPRL_POSN                                  0x0
#define _CCPR1L_CCPRL_POSITION                              0x0
#define _CCPR1L_CCPRL_SIZE                                  0x8
#define _CCPR1L_CCPRL_LENGTH                                0x8
#define _CCPR1L_CCPRL_MASK                                  0xFF

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0x30D);
#ifndef _LIB_BUILD
asm("CCPR1H equ 030Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPRH                  :8;
    };
} CCPR1Hbits_t;
extern volatile CCPR1Hbits_t CCPR1Hbits __at(0x30D);
// bitfield macros
#define _CCPR1H_CCPRH_POSN                                  0x0
#define _CCPR1H_CCPRH_POSITION                              0x0
#define _CCPR1H_CCPRH_SIZE                                  0x8
#define _CCPR1H_CCPRH_LENGTH                                0x8
#define _CCPR1H_CCPRH_MASK                                  0xFF

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0x30E);
#ifndef _LIB_BUILD
asm("CCP1CON equ 030Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned FMT                    :1;
        unsigned OUT                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned CCP1MODE               :4;
        unsigned CCP1FMT                :1;
        unsigned CCP1OUT                :1;
        unsigned                        :1;
        unsigned CCP1EN                 :1;
    };
    struct {
        unsigned CCP1MODE0              :1;
        unsigned CCP1MODE1              :1;
        unsigned CCP1MODE2              :1;
        unsigned CCP1MODE3              :1;
    };
    struct {
        unsigned                        :7;
        unsigned P1M1                   :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x30E);
// bitfield macros
#define _CCP1CON_MODE_POSN                                  0x0
#define _CCP1CON_MODE_POSITION                              0x0
#define _CCP1CON_MODE_SIZE                                  0x4
#define _CCP1CON_MODE_LENGTH                                0x4
#define _CCP1CON_MODE_MASK                                  0xF
#define _CCP1CON_FMT_POSN                                   0x4
#define _CCP1CON_FMT_POSITION                               0x4
#define _CCP1CON_FMT_SIZE                                   0x1
#define _CCP1CON_FMT_LENGTH                                 0x1
#define _CCP1CON_FMT_MASK                                   0x10
#define _CCP1CON_OUT_POSN                                   0x5
#define _CCP1CON_OUT_POSITION                               0x5
#define _CCP1CON_OUT_SIZE                                   0x1
#define _CCP1CON_OUT_LENGTH                                 0x1
#define _CCP1CON_OUT_MASK                                   0x20
#define _CCP1CON_EN_POSN                                    0x7
#define _CCP1CON_EN_POSITION                                0x7
#define _CCP1CON_EN_SIZE                                    0x1
#define _CCP1CON_EN_LENGTH                                  0x1
#define _CCP1CON_EN_MASK                                    0x80
#define _CCP1CON_MODE0_POSN                                 0x0
#define _CCP1CON_MODE0_POSITION                             0x0
#define _CCP1CON_MODE0_SIZE                                 0x1
#define _CCP1CON_MODE0_LENGTH                               0x1
#define _CCP1CON_MODE0_MASK                                 0x1
#define _CCP1CON_MODE1_POSN                                 0x1
#define _CCP1CON_MODE1_POSITION                             0x1
#define _CCP1CON_MODE1_SIZE                                 0x1
#define _CCP1CON_MODE1_LENGTH                               0x1
#define _CCP1CON_MODE1_MASK                                 0x2
#define _CCP1CON_MODE2_POSN                                 0x2
#define _CCP1CON_MODE2_POSITION                             0x2
#define _CCP1CON_MODE2_SIZE                                 0x1
#define _CCP1CON_MODE2_LENGTH                               0x1
#define _CCP1CON_MODE2_MASK                                 0x4
#define _CCP1CON_MODE3_POSN                                 0x3
#define _CCP1CON_MODE3_POSITION                             0x3
#define _CCP1CON_MODE3_SIZE                                 0x1
#define _CCP1CON_MODE3_LENGTH                               0x1
#define _CCP1CON_MODE3_MASK                                 0x8
#define _CCP1CON_CCP1MODE_POSN                              0x0
#define _CCP1CON_CCP1MODE_POSITION                          0x0
#define _CCP1CON_CCP1MODE_SIZE                              0x4
#define _CCP1CON_CCP1MODE_LENGTH                            0x4
#define _CCP1CON_CCP1MODE_MASK                              0xF
#define _CCP1CON_CCP1FMT_POSN                               0x4
#define _CCP1CON_CCP1FMT_POSITION                           0x4
#define _CCP1CON_CCP1FMT_SIZE                               0x1
#define _CCP1CON_CCP1FMT_LENGTH                             0x1
#define _CCP1CON_CCP1FMT_MASK                               0x10
#define _CCP1CON_CCP1OUT_POSN                               0x5
#define _CCP1CON_CCP1OUT_POSITION                           0x5
#define _CCP1CON_CCP1OUT_SIZE                               0x1
#define _CCP1CON_CCP1OUT_LENGTH                             0x1
#define _CCP1CON_CCP1OUT_MASK                               0x20
#define _CCP1CON_CCP1EN_POSN                                0x7
#define _CCP1CON_CCP1EN_POSITION                            0x7
#define _CCP1CON_CCP1EN_SIZE                                0x1
#define _CCP1CON_CCP1EN_LENGTH                              0x1
#define _CCP1CON_CCP1EN_MASK                                0x80
#define _CCP1CON_CCP1MODE0_POSN                             0x0
#define _CCP1CON_CCP1MODE0_POSITION                         0x0
#define _CCP1CON_CCP1MODE0_SIZE                             0x1
#define _CCP1CON_CCP1MODE0_LENGTH                           0x1
#define _CCP1CON_CCP1MODE0_MASK                             0x1
#define _CCP1CON_CCP1MODE1_POSN                             0x1
#define _CCP1CON_CCP1MODE1_POSITION                         0x1
#define _CCP1CON_CCP1MODE1_SIZE                             0x1
#define _CCP1CON_CCP1MODE1_LENGTH                           0x1
#define _CCP1CON_CCP1MODE1_MASK                             0x2
#define _CCP1CON_CCP1MODE2_POSN                             0x2
#define _CCP1CON_CCP1MODE2_POSITION                         0x2
#define _CCP1CON_CCP1MODE2_SIZE                             0x1
#define _CCP1CON_CCP1MODE2_LENGTH                           0x1
#define _CCP1CON_CCP1MODE2_MASK                             0x4
#define _CCP1CON_CCP1MODE3_POSN                             0x3
#define _CCP1CON_CCP1MODE3_POSITION                         0x3
#define _CCP1CON_CCP1MODE3_SIZE                             0x1
#define _CCP1CON_CCP1MODE3_LENGTH                           0x1
#define _CCP1CON_CCP1MODE3_MASK                             0x8
#define _CCP1CON_P1M1_POSN                                  0x7
#define _CCP1CON_P1M1_POSITION                              0x7
#define _CCP1CON_P1M1_SIZE                                  0x1
#define _CCP1CON_P1M1_LENGTH                                0x1
#define _CCP1CON_P1M1_MASK                                  0x80

// Register: CCP1CAP
#define CCP1CAP CCP1CAP
extern volatile unsigned char           CCP1CAP             __at(0x30F);
#ifndef _LIB_BUILD
asm("CCP1CAP equ 030Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CTS                    :2;
    };
    struct {
        unsigned CTS0                   :1;
        unsigned CTS1                   :1;
    };
    struct {
        unsigned CCP1CTS                :3;
    };
    struct {
        unsigned CCP1CTS0               :1;
        unsigned CCP1CTS1               :1;
    };
} CCP1CAPbits_t;
extern volatile CCP1CAPbits_t CCP1CAPbits __at(0x30F);
// bitfield macros
#define _CCP1CAP_CTS_POSN                                   0x0
#define _CCP1CAP_CTS_POSITION                               0x0
#define _CCP1CAP_CTS_SIZE                                   0x2
#define _CCP1CAP_CTS_LENGTH                                 0x2
#define _CCP1CAP_CTS_MASK                                   0x3
#define _CCP1CAP_CTS0_POSN                                  0x0
#define _CCP1CAP_CTS0_POSITION                              0x0
#define _CCP1CAP_CTS0_SIZE                                  0x1
#define _CCP1CAP_CTS0_LENGTH                                0x1
#define _CCP1CAP_CTS0_MASK                                  0x1
#define _CCP1CAP_CTS1_POSN                                  0x1
#define _CCP1CAP_CTS1_POSITION                              0x1
#define _CCP1CAP_CTS1_SIZE                                  0x1
#define _CCP1CAP_CTS1_LENGTH                                0x1
#define _CCP1CAP_CTS1_MASK                                  0x2
#define _CCP1CAP_CCP1CTS_POSN                               0x0
#define _CCP1CAP_CCP1CTS_POSITION                           0x0
#define _CCP1CAP_CCP1CTS_SIZE                               0x3
#define _CCP1CAP_CCP1CTS_LENGTH                             0x3
#define _CCP1CAP_CCP1CTS_MASK                               0x7
#define _CCP1CAP_CCP1CTS0_POSN                              0x0
#define _CCP1CAP_CCP1CTS0_POSITION                          0x0
#define _CCP1CAP_CCP1CTS0_SIZE                              0x1
#define _CCP1CAP_CCP1CTS0_LENGTH                            0x1
#define _CCP1CAP_CCP1CTS0_MASK                              0x1
#define _CCP1CAP_CCP1CTS1_POSN                              0x1
#define _CCP1CAP_CCP1CTS1_POSITION                          0x1
#define _CCP1CAP_CCP1CTS1_SIZE                              0x1
#define _CCP1CAP_CCP1CTS1_LENGTH                            0x1
#define _CCP1CAP_CCP1CTS1_MASK                              0x2

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0x310);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0310h");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0x310);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0310h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPRL                  :8;
    };
} CCPR2Lbits_t;
extern volatile CCPR2Lbits_t CCPR2Lbits __at(0x310);
// bitfield macros
#define _CCPR2L_CCPRL_POSN                                  0x0
#define _CCPR2L_CCPRL_POSITION                              0x0
#define _CCPR2L_CCPRL_SIZE                                  0x8
#define _CCPR2L_CCPRL_LENGTH                                0x8
#define _CCPR2L_CCPRL_MASK                                  0xFF

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0x311);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0311h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPRH                  :8;
    };
} CCPR2Hbits_t;
extern volatile CCPR2Hbits_t CCPR2Hbits __at(0x311);
// bitfield macros
#define _CCPR2H_CCPRH_POSN                                  0x0
#define _CCPR2H_CCPRH_POSITION                              0x0
#define _CCPR2H_CCPRH_SIZE                                  0x8
#define _CCPR2H_CCPRH_LENGTH                                0x8
#define _CCPR2H_CCPRH_MASK                                  0xFF

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0x312);
#ifndef _LIB_BUILD
asm("CCP2CON equ 0312h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :4;
        unsigned FMT                    :1;
        unsigned OUT                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned MODE3                  :1;
    };
    struct {
        unsigned CCP2MODE               :4;
        unsigned CCP2FMT                :1;
        unsigned CCP2OUT                :1;
        unsigned                        :1;
        unsigned CCP2EN                 :1;
    };
    struct {
        unsigned CCP2MODE0              :1;
        unsigned CCP2MODE1              :1;
        unsigned CCP2MODE2              :1;
        unsigned CCP2MODE3              :1;
    };
    struct {
        unsigned                        :7;
        unsigned P2M1                   :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0x312);
// bitfield macros
#define _CCP2CON_MODE_POSN                                  0x0
#define _CCP2CON_MODE_POSITION                              0x0
#define _CCP2CON_MODE_SIZE                                  0x4
#define _CCP2CON_MODE_LENGTH                                0x4
#define _CCP2CON_MODE_MASK                                  0xF
#define _CCP2CON_FMT_POSN                                   0x4
#define _CCP2CON_FMT_POSITION                               0x4
#define _CCP2CON_FMT_SIZE                                   0x1
#define _CCP2CON_FMT_LENGTH                                 0x1
#define _CCP2CON_FMT_MASK                                   0x10
#define _CCP2CON_OUT_POSN                                   0x5
#define _CCP2CON_OUT_POSITION                               0x5
#define _CCP2CON_OUT_SIZE                                   0x1
#define _CCP2CON_OUT_LENGTH                                 0x1
#define _CCP2CON_OUT_MASK                                   0x20
#define _CCP2CON_EN_POSN                                    0x7
#define _CCP2CON_EN_POSITION                                0x7
#define _CCP2CON_EN_SIZE                                    0x1
#define _CCP2CON_EN_LENGTH                                  0x1
#define _CCP2CON_EN_MASK                                    0x80
#define _CCP2CON_MODE0_POSN                                 0x0
#define _CCP2CON_MODE0_POSITION                             0x0
#define _CCP2CON_MODE0_SIZE                                 0x1
#define _CCP2CON_MODE0_LENGTH                               0x1
#define _CCP2CON_MODE0_MASK                                 0x1
#define _CCP2CON_MODE1_POSN                                 0x1
#define _CCP2CON_MODE1_POSITION                             0x1
#define _CCP2CON_MODE1_SIZE                                 0x1
#define _CCP2CON_MODE1_LENGTH                               0x1
#define _CCP2CON_MODE1_MASK                                 0x2
#define _CCP2CON_MODE2_POSN                                 0x2
#define _CCP2CON_MODE2_POSITION                             0x2
#define _CCP2CON_MODE2_SIZE                                 0x1
#define _CCP2CON_MODE2_LENGTH                               0x1
#define _CCP2CON_MODE2_MASK                                 0x4
#define _CCP2CON_MODE3_POSN                                 0x3
#define _CCP2CON_MODE3_POSITION                             0x3
#define _CCP2CON_MODE3_SIZE                                 0x1
#define _CCP2CON_MODE3_LENGTH                               0x1
#define _CCP2CON_MODE3_MASK                                 0x8
#define _CCP2CON_CCP2MODE_POSN                              0x0
#define _CCP2CON_CCP2MODE_POSITION                          0x0
#define _CCP2CON_CCP2MODE_SIZE                              0x4
#define _CCP2CON_CCP2MODE_LENGTH                            0x4
#define _CCP2CON_CCP2MODE_MASK                              0xF
#define _CCP2CON_CCP2FMT_POSN                               0x4
#define _CCP2CON_CCP2FMT_POSITION                           0x4
#define _CCP2CON_CCP2FMT_SIZE                               0x1
#define _CCP2CON_CCP2FMT_LENGTH                             0x1
#define _CCP2CON_CCP2FMT_MASK                               0x10
#define _CCP2CON_CCP2OUT_POSN                               0x5
#define _CCP2CON_CCP2OUT_POSITION                           0x5
#define _CCP2CON_CCP2OUT_SIZE                               0x1
#define _CCP2CON_CCP2OUT_LENGTH                             0x1
#define _CCP2CON_CCP2OUT_MASK                               0x20
#define _CCP2CON_CCP2EN_POSN                                0x7
#define _CCP2CON_CCP2EN_POSITION                            0x7
#define _CCP2CON_CCP2EN_SIZE                                0x1
#define _CCP2CON_CCP2EN_LENGTH                              0x1
#define _CCP2CON_CCP2EN_MASK                                0x80
#define _CCP2CON_CCP2MODE0_POSN                             0x0
#define _CCP2CON_CCP2MODE0_POSITION                         0x0
#define _CCP2CON_CCP2MODE0_SIZE                             0x1
#define _CCP2CON_CCP2MODE0_LENGTH                           0x1
#define _CCP2CON_CCP2MODE0_MASK                             0x1
#define _CCP2CON_CCP2MODE1_POSN                             0x1
#define _CCP2CON_CCP2MODE1_POSITION                         0x1
#define _CCP2CON_CCP2MODE1_SIZE                             0x1
#define _CCP2CON_CCP2MODE1_LENGTH                           0x1
#define _CCP2CON_CCP2MODE1_MASK                             0x2
#define _CCP2CON_CCP2MODE2_POSN                             0x2
#define _CCP2CON_CCP2MODE2_POSITION                         0x2
#define _CCP2CON_CCP2MODE2_SIZE                             0x1
#define _CCP2CON_CCP2MODE2_LENGTH                           0x1
#define _CCP2CON_CCP2MODE2_MASK                             0x4
#define _CCP2CON_CCP2MODE3_POSN                             0x3
#define _CCP2CON_CCP2MODE3_POSITION                         0x3
#define _CCP2CON_CCP2MODE3_SIZE                             0x1
#define _CCP2CON_CCP2MODE3_LENGTH                           0x1
#define _CCP2CON_CCP2MODE3_MASK                             0x8
#define _CCP2CON_P2M1_POSN                                  0x7
#define _CCP2CON_P2M1_POSITION                              0x7
#define _CCP2CON_P2M1_SIZE                                  0x1
#define _CCP2CON_P2M1_LENGTH                                0x1
#define _CCP2CON_P2M1_MASK                                  0x80

// Register: CCP2CAP
#define CCP2CAP CCP2CAP
extern volatile unsigned char           CCP2CAP             __at(0x313);
#ifndef _LIB_BUILD
asm("CCP2CAP equ 0313h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CTS                    :2;
    };
    struct {
        unsigned CTS0                   :1;
        unsigned CTS1                   :1;
    };
    struct {
        unsigned CCP2CTS                :3;
    };
    struct {
        unsigned CCP2CTS0               :1;
        unsigned CCP2CTS1               :1;
    };
} CCP2CAPbits_t;
extern volatile CCP2CAPbits_t CCP2CAPbits __at(0x313);
// bitfield macros
#define _CCP2CAP_CTS_POSN                                   0x0
#define _CCP2CAP_CTS_POSITION                               0x0
#define _CCP2CAP_CTS_SIZE                                   0x2
#define _CCP2CAP_CTS_LENGTH                                 0x2
#define _CCP2CAP_CTS_MASK                                   0x3
#define _CCP2CAP_CTS0_POSN                                  0x0
#define _CCP2CAP_CTS0_POSITION                              0x0
#define _CCP2CAP_CTS0_SIZE                                  0x1
#define _CCP2CAP_CTS0_LENGTH                                0x1
#define _CCP2CAP_CTS0_MASK                                  0x1
#define _CCP2CAP_CTS1_POSN                                  0x1
#define _CCP2CAP_CTS1_POSITION                              0x1
#define _CCP2CAP_CTS1_SIZE                                  0x1
#define _CCP2CAP_CTS1_LENGTH                                0x1
#define _CCP2CAP_CTS1_MASK                                  0x2
#define _CCP2CAP_CCP2CTS_POSN                               0x0
#define _CCP2CAP_CCP2CTS_POSITION                           0x0
#define _CCP2CAP_CCP2CTS_SIZE                               0x3
#define _CCP2CAP_CCP2CTS_LENGTH                             0x3
#define _CCP2CAP_CCP2CTS_MASK                               0x7
#define _CCP2CAP_CCP2CTS0_POSN                              0x0
#define _CCP2CAP_CCP2CTS0_POSITION                          0x0
#define _CCP2CAP_CCP2CTS0_SIZE                              0x1
#define _CCP2CAP_CCP2CTS0_LENGTH                            0x1
#define _CCP2CAP_CCP2CTS0_MASK                              0x1
#define _CCP2CAP_CCP2CTS1_POSN                              0x1
#define _CCP2CAP_CCP2CTS1_POSITION                          0x1
#define _CCP2CAP_CCP2CTS1_SIZE                              0x1
#define _CCP2CAP_CCP2CTS1_LENGTH                            0x1
#define _CCP2CAP_CCP2CTS1_MASK                              0x2

// Register: PWM3DC
#define PWM3DC PWM3DC
extern volatile unsigned short          PWM3DC              __at(0x314);
#ifndef _LIB_BUILD
asm("PWM3DC equ 0314h");
#endif

// Register: PWM3DCL
#define PWM3DCL PWM3DCL
extern volatile unsigned char           PWM3DCL             __at(0x314);
#ifndef _LIB_BUILD
asm("PWM3DCL equ 0314h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned DCL                    :2;
    };
} PWM3DCLbits_t;
extern volatile PWM3DCLbits_t PWM3DCLbits __at(0x314);
// bitfield macros
#define _PWM3DCL_DCL_POSN                                   0x6
#define _PWM3DCL_DCL_POSITION                               0x6
#define _PWM3DCL_DCL_SIZE                                   0x2
#define _PWM3DCL_DCL_LENGTH                                 0x2
#define _PWM3DCL_DCL_MASK                                   0xC0

// Register: PWM3DCH
#define PWM3DCH PWM3DCH
extern volatile unsigned char           PWM3DCH             __at(0x315);
#ifndef _LIB_BUILD
asm("PWM3DCH equ 0315h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DCH                    :8;
    };
} PWM3DCHbits_t;
extern volatile PWM3DCHbits_t PWM3DCHbits __at(0x315);
// bitfield macros
#define _PWM3DCH_DCH_POSN                                   0x0
#define _PWM3DCH_DCH_POSITION                               0x0
#define _PWM3DCH_DCH_SIZE                                   0x8
#define _PWM3DCH_DCH_LENGTH                                 0x8
#define _PWM3DCH_DCH_MASK                                   0xFF

// Register: PWM3CON
#define PWM3CON PWM3CON
extern volatile unsigned char           PWM3CON             __at(0x316);
#ifndef _LIB_BUILD
asm("PWM3CON equ 0316h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned POL                    :1;
        unsigned OUT                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned                        :4;
        unsigned PWM3POL                :1;
        unsigned PWM3OUT                :1;
        unsigned                        :1;
        unsigned PWM3EN                 :1;
    };
} PWM3CONbits_t;
extern volatile PWM3CONbits_t PWM3CONbits __at(0x316);
// bitfield macros
#define _PWM3CON_POL_POSN                                   0x4
#define _PWM3CON_POL_POSITION                               0x4
#define _PWM3CON_POL_SIZE                                   0x1
#define _PWM3CON_POL_LENGTH                                 0x1
#define _PWM3CON_POL_MASK                                   0x10
#define _PWM3CON_OUT_POSN                                   0x5
#define _PWM3CON_OUT_POSITION                               0x5
#define _PWM3CON_OUT_SIZE                                   0x1
#define _PWM3CON_OUT_LENGTH                                 0x1
#define _PWM3CON_OUT_MASK                                   0x20
#define _PWM3CON_EN_POSN                                    0x7
#define _PWM3CON_EN_POSITION                                0x7
#define _PWM3CON_EN_SIZE                                    0x1
#define _PWM3CON_EN_LENGTH                                  0x1
#define _PWM3CON_EN_MASK                                    0x80
#define _PWM3CON_PWM3POL_POSN                               0x4
#define _PWM3CON_PWM3POL_POSITION                           0x4
#define _PWM3CON_PWM3POL_SIZE                               0x1
#define _PWM3CON_PWM3POL_LENGTH                             0x1
#define _PWM3CON_PWM3POL_MASK                               0x10
#define _PWM3CON_PWM3OUT_POSN                               0x5
#define _PWM3CON_PWM3OUT_POSITION                           0x5
#define _PWM3CON_PWM3OUT_SIZE                               0x1
#define _PWM3CON_PWM3OUT_LENGTH                             0x1
#define _PWM3CON_PWM3OUT_MASK                               0x20
#define _PWM3CON_PWM3EN_POSN                                0x7
#define _PWM3CON_PWM3EN_POSITION                            0x7
#define _PWM3CON_PWM3EN_SIZE                                0x1
#define _PWM3CON_PWM3EN_LENGTH                              0x1
#define _PWM3CON_PWM3EN_MASK                                0x80

// Register: PWM4DC
#define PWM4DC PWM4DC
extern volatile unsigned short          PWM4DC              __at(0x318);
#ifndef _LIB_BUILD
asm("PWM4DC equ 0318h");
#endif

// Register: PWM4DCL
#define PWM4DCL PWM4DCL
extern volatile unsigned char           PWM4DCL             __at(0x318);
#ifndef _LIB_BUILD
asm("PWM4DCL equ 0318h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned DCL                    :2;
    };
} PWM4DCLbits_t;
extern volatile PWM4DCLbits_t PWM4DCLbits __at(0x318);
// bitfield macros
#define _PWM4DCL_DCL_POSN                                   0x6
#define _PWM4DCL_DCL_POSITION                               0x6
#define _PWM4DCL_DCL_SIZE                                   0x2
#define _PWM4DCL_DCL_LENGTH                                 0x2
#define _PWM4DCL_DCL_MASK                                   0xC0

// Register: PWM4DCH
#define PWM4DCH PWM4DCH
extern volatile unsigned char           PWM4DCH             __at(0x319);
#ifndef _LIB_BUILD
asm("PWM4DCH equ 0319h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DCH                    :8;
    };
} PWM4DCHbits_t;
extern volatile PWM4DCHbits_t PWM4DCHbits __at(0x319);
// bitfield macros
#define _PWM4DCH_DCH_POSN                                   0x0
#define _PWM4DCH_DCH_POSITION                               0x0
#define _PWM4DCH_DCH_SIZE                                   0x8
#define _PWM4DCH_DCH_LENGTH                                 0x8
#define _PWM4DCH_DCH_MASK                                   0xFF

// Register: PWM4CON
#define PWM4CON PWM4CON
extern volatile unsigned char           PWM4CON             __at(0x31A);
#ifndef _LIB_BUILD
asm("PWM4CON equ 031Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned POL                    :1;
        unsigned OUT                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned                        :4;
        unsigned PWM4POL                :1;
        unsigned PWM4OUT                :1;
        unsigned                        :1;
        unsigned PWM4EN                 :1;
    };
} PWM4CONbits_t;
extern volatile PWM4CONbits_t PWM4CONbits __at(0x31A);
// bitfield macros
#define _PWM4CON_POL_POSN                                   0x4
#define _PWM4CON_POL_POSITION                               0x4
#define _PWM4CON_POL_SIZE                                   0x1
#define _PWM4CON_POL_LENGTH                                 0x1
#define _PWM4CON_POL_MASK                                   0x10
#define _PWM4CON_OUT_POSN                                   0x5
#define _PWM4CON_OUT_POSITION                               0x5
#define _PWM4CON_OUT_SIZE                                   0x1
#define _PWM4CON_OUT_LENGTH                                 0x1
#define _PWM4CON_OUT_MASK                                   0x20
#define _PWM4CON_EN_POSN                                    0x7
#define _PWM4CON_EN_POSITION                                0x7
#define _PWM4CON_EN_SIZE                                    0x1
#define _PWM4CON_EN_LENGTH                                  0x1
#define _PWM4CON_EN_MASK                                    0x80
#define _PWM4CON_PWM4POL_POSN                               0x4
#define _PWM4CON_PWM4POL_POSITION                           0x4
#define _PWM4CON_PWM4POL_SIZE                               0x1
#define _PWM4CON_PWM4POL_LENGTH                             0x1
#define _PWM4CON_PWM4POL_MASK                               0x10
#define _PWM4CON_PWM4OUT_POSN                               0x5
#define _PWM4CON_PWM4OUT_POSITION                           0x5
#define _PWM4CON_PWM4OUT_SIZE                               0x1
#define _PWM4CON_PWM4OUT_LENGTH                             0x1
#define _PWM4CON_PWM4OUT_MASK                               0x20
#define _PWM4CON_PWM4EN_POSN                                0x7
#define _PWM4CON_PWM4EN_POSITION                            0x7
#define _PWM4CON_PWM4EN_SIZE                                0x1
#define _PWM4CON_PWM4EN_LENGTH                              0x1
#define _PWM4CON_PWM4EN_MASK                                0x80

// Register: TMR0L
#define TMR0L TMR0L
extern volatile unsigned char           TMR0L               __at(0x59C);
#ifndef _LIB_BUILD
asm("TMR0L equ 059Ch");
#endif
// aliases
extern volatile unsigned char           TMR0                __at(0x59C);
#ifndef _LIB_BUILD
asm("TMR0 equ 059Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0L                  :8;
    };
    struct {
        unsigned TMR0L0                 :1;
        unsigned TMR0L1                 :1;
        unsigned TMR0L2                 :1;
        unsigned TMR0L3                 :1;
        unsigned TMR0L4                 :1;
        unsigned TMR0L5                 :1;
        unsigned TMR0L6                 :1;
        unsigned TMR0L7                 :1;
    };
} TMR0Lbits_t;
extern volatile TMR0Lbits_t TMR0Lbits __at(0x59C);
// bitfield macros
#define _TMR0L_TMR0L_POSN                                   0x0
#define _TMR0L_TMR0L_POSITION                               0x0
#define _TMR0L_TMR0L_SIZE                                   0x8
#define _TMR0L_TMR0L_LENGTH                                 0x8
#define _TMR0L_TMR0L_MASK                                   0xFF
#define _TMR0L_TMR0L0_POSN                                  0x0
#define _TMR0L_TMR0L0_POSITION                              0x0
#define _TMR0L_TMR0L0_SIZE                                  0x1
#define _TMR0L_TMR0L0_LENGTH                                0x1
#define _TMR0L_TMR0L0_MASK                                  0x1
#define _TMR0L_TMR0L1_POSN                                  0x1
#define _TMR0L_TMR0L1_POSITION                              0x1
#define _TMR0L_TMR0L1_SIZE                                  0x1
#define _TMR0L_TMR0L1_LENGTH                                0x1
#define _TMR0L_TMR0L1_MASK                                  0x2
#define _TMR0L_TMR0L2_POSN                                  0x2
#define _TMR0L_TMR0L2_POSITION                              0x2
#define _TMR0L_TMR0L2_SIZE                                  0x1
#define _TMR0L_TMR0L2_LENGTH                                0x1
#define _TMR0L_TMR0L2_MASK                                  0x4
#define _TMR0L_TMR0L3_POSN                                  0x3
#define _TMR0L_TMR0L3_POSITION                              0x3
#define _TMR0L_TMR0L3_SIZE                                  0x1
#define _TMR0L_TMR0L3_LENGTH                                0x1
#define _TMR0L_TMR0L3_MASK                                  0x8
#define _TMR0L_TMR0L4_POSN                                  0x4
#define _TMR0L_TMR0L4_POSITION                              0x4
#define _TMR0L_TMR0L4_SIZE                                  0x1
#define _TMR0L_TMR0L4_LENGTH                                0x1
#define _TMR0L_TMR0L4_MASK                                  0x10
#define _TMR0L_TMR0L5_POSN                                  0x5
#define _TMR0L_TMR0L5_POSITION                              0x5
#define _TMR0L_TMR0L5_SIZE                                  0x1
#define _TMR0L_TMR0L5_LENGTH                                0x1
#define _TMR0L_TMR0L5_MASK                                  0x20
#define _TMR0L_TMR0L6_POSN                                  0x6
#define _TMR0L_TMR0L6_POSITION                              0x6
#define _TMR0L_TMR0L6_SIZE                                  0x1
#define _TMR0L_TMR0L6_LENGTH                                0x1
#define _TMR0L_TMR0L6_MASK                                  0x40
#define _TMR0L_TMR0L7_POSN                                  0x7
#define _TMR0L_TMR0L7_POSITION                              0x7
#define _TMR0L_TMR0L7_SIZE                                  0x1
#define _TMR0L_TMR0L7_LENGTH                                0x1
#define _TMR0L_TMR0L7_MASK                                  0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TMR0L                  :8;
    };
    struct {
        unsigned TMR0L0                 :1;
        unsigned TMR0L1                 :1;
        unsigned TMR0L2                 :1;
        unsigned TMR0L3                 :1;
        unsigned TMR0L4                 :1;
        unsigned TMR0L5                 :1;
        unsigned TMR0L6                 :1;
        unsigned TMR0L7                 :1;
    };
} TMR0bits_t;
extern volatile TMR0bits_t TMR0bits __at(0x59C);
// bitfield macros
#define _TMR0_TMR0L_POSN                                    0x0
#define _TMR0_TMR0L_POSITION                                0x0
#define _TMR0_TMR0L_SIZE                                    0x8
#define _TMR0_TMR0L_LENGTH                                  0x8
#define _TMR0_TMR0L_MASK                                    0xFF
#define _TMR0_TMR0L0_POSN                                   0x0
#define _TMR0_TMR0L0_POSITION                               0x0
#define _TMR0_TMR0L0_SIZE                                   0x1
#define _TMR0_TMR0L0_LENGTH                                 0x1
#define _TMR0_TMR0L0_MASK                                   0x1
#define _TMR0_TMR0L1_POSN                                   0x1
#define _TMR0_TMR0L1_POSITION                               0x1
#define _TMR0_TMR0L1_SIZE                                   0x1
#define _TMR0_TMR0L1_LENGTH                                 0x1
#define _TMR0_TMR0L1_MASK                                   0x2
#define _TMR0_TMR0L2_POSN                                   0x2
#define _TMR0_TMR0L2_POSITION                               0x2
#define _TMR0_TMR0L2_SIZE                                   0x1
#define _TMR0_TMR0L2_LENGTH                                 0x1
#define _TMR0_TMR0L2_MASK                                   0x4
#define _TMR0_TMR0L3_POSN                                   0x3
#define _TMR0_TMR0L3_POSITION                               0x3
#define _TMR0_TMR0L3_SIZE                                   0x1
#define _TMR0_TMR0L3_LENGTH                                 0x1
#define _TMR0_TMR0L3_MASK                                   0x8
#define _TMR0_TMR0L4_POSN                                   0x4
#define _TMR0_TMR0L4_POSITION                               0x4
#define _TMR0_TMR0L4_SIZE                                   0x1
#define _TMR0_TMR0L4_LENGTH                                 0x1
#define _TMR0_TMR0L4_MASK                                   0x10
#define _TMR0_TMR0L5_POSN                                   0x5
#define _TMR0_TMR0L5_POSITION                               0x5
#define _TMR0_TMR0L5_SIZE                                   0x1
#define _TMR0_TMR0L5_LENGTH                                 0x1
#define _TMR0_TMR0L5_MASK                                   0x20
#define _TMR0_TMR0L6_POSN                                   0x6
#define _TMR0_TMR0L6_POSITION                               0x6
#define _TMR0_TMR0L6_SIZE                                   0x1
#define _TMR0_TMR0L6_LENGTH                                 0x1
#define _TMR0_TMR0L6_MASK                                   0x40
#define _TMR0_TMR0L7_POSN                                   0x7
#define _TMR0_TMR0L7_POSITION                               0x7
#define _TMR0_TMR0L7_SIZE                                   0x1
#define _TMR0_TMR0L7_LENGTH                                 0x1
#define _TMR0_TMR0L7_MASK                                   0x80

// Register: TMR0H
#define TMR0H TMR0H
extern volatile unsigned char           TMR0H               __at(0x59D);
#ifndef _LIB_BUILD
asm("TMR0H equ 059Dh");
#endif
// aliases
extern volatile unsigned char           PR0                 __at(0x59D);
#ifndef _LIB_BUILD
asm("PR0 equ 059Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0H                  :8;
    };
    struct {
        unsigned TMR0H0                 :1;
        unsigned TMR0H1                 :1;
        unsigned TMR0H2                 :1;
        unsigned TMR0H3                 :1;
        unsigned TMR0H4                 :1;
        unsigned TMR0H5                 :1;
        unsigned TMR0H6                 :1;
        unsigned TMR0H7                 :1;
    };
    struct {
        unsigned T0PR0                  :1;
        unsigned T0PR1                  :1;
        unsigned T0PR2                  :1;
        unsigned T0PR3                  :1;
        unsigned T0PR4                  :1;
        unsigned T0PR5                  :1;
        unsigned T0PR6                  :1;
        unsigned T0PR7                  :1;
    };
    struct {
        unsigned T0PR                   :8;
    };
} TMR0Hbits_t;
extern volatile TMR0Hbits_t TMR0Hbits __at(0x59D);
// bitfield macros
#define _TMR0H_TMR0H_POSN                                   0x0
#define _TMR0H_TMR0H_POSITION                               0x0
#define _TMR0H_TMR0H_SIZE                                   0x8
#define _TMR0H_TMR0H_LENGTH                                 0x8
#define _TMR0H_TMR0H_MASK                                   0xFF
#define _TMR0H_TMR0H0_POSN                                  0x0
#define _TMR0H_TMR0H0_POSITION                              0x0
#define _TMR0H_TMR0H0_SIZE                                  0x1
#define _TMR0H_TMR0H0_LENGTH                                0x1
#define _TMR0H_TMR0H0_MASK                                  0x1
#define _TMR0H_TMR0H1_POSN                                  0x1
#define _TMR0H_TMR0H1_POSITION                              0x1
#define _TMR0H_TMR0H1_SIZE                                  0x1
#define _TMR0H_TMR0H1_LENGTH                                0x1
#define _TMR0H_TMR0H1_MASK                                  0x2
#define _TMR0H_TMR0H2_POSN                                  0x2
#define _TMR0H_TMR0H2_POSITION                              0x2
#define _TMR0H_TMR0H2_SIZE                                  0x1
#define _TMR0H_TMR0H2_LENGTH                                0x1
#define _TMR0H_TMR0H2_MASK                                  0x4
#define _TMR0H_TMR0H3_POSN                                  0x3
#define _TMR0H_TMR0H3_POSITION                              0x3
#define _TMR0H_TMR0H3_SIZE                                  0x1
#define _TMR0H_TMR0H3_LENGTH                                0x1
#define _TMR0H_TMR0H3_MASK                                  0x8
#define _TMR0H_TMR0H4_POSN                                  0x4
#define _TMR0H_TMR0H4_POSITION                              0x4
#define _TMR0H_TMR0H4_SIZE                                  0x1
#define _TMR0H_TMR0H4_LENGTH                                0x1
#define _TMR0H_TMR0H4_MASK                                  0x10
#define _TMR0H_TMR0H5_POSN                                  0x5
#define _TMR0H_TMR0H5_POSITION                              0x5
#define _TMR0H_TMR0H5_SIZE                                  0x1
#define _TMR0H_TMR0H5_LENGTH                                0x1
#define _TMR0H_TMR0H5_MASK                                  0x20
#define _TMR0H_TMR0H6_POSN                                  0x6
#define _TMR0H_TMR0H6_POSITION                              0x6
#define _TMR0H_TMR0H6_SIZE                                  0x1
#define _TMR0H_TMR0H6_LENGTH                                0x1
#define _TMR0H_TMR0H6_MASK                                  0x40
#define _TMR0H_TMR0H7_POSN                                  0x7
#define _TMR0H_TMR0H7_POSITION                              0x7
#define _TMR0H_TMR0H7_SIZE                                  0x1
#define _TMR0H_TMR0H7_LENGTH                                0x1
#define _TMR0H_TMR0H7_MASK                                  0x80
#define _TMR0H_T0PR0_POSN                                   0x0
#define _TMR0H_T0PR0_POSITION                               0x0
#define _TMR0H_T0PR0_SIZE                                   0x1
#define _TMR0H_T0PR0_LENGTH                                 0x1
#define _TMR0H_T0PR0_MASK                                   0x1
#define _TMR0H_T0PR1_POSN                                   0x1
#define _TMR0H_T0PR1_POSITION                               0x1
#define _TMR0H_T0PR1_SIZE                                   0x1
#define _TMR0H_T0PR1_LENGTH                                 0x1
#define _TMR0H_T0PR1_MASK                                   0x2
#define _TMR0H_T0PR2_POSN                                   0x2
#define _TMR0H_T0PR2_POSITION                               0x2
#define _TMR0H_T0PR2_SIZE                                   0x1
#define _TMR0H_T0PR2_LENGTH                                 0x1
#define _TMR0H_T0PR2_MASK                                   0x4
#define _TMR0H_T0PR3_POSN                                   0x3
#define _TMR0H_T0PR3_POSITION                               0x3
#define _TMR0H_T0PR3_SIZE                                   0x1
#define _TMR0H_T0PR3_LENGTH                                 0x1
#define _TMR0H_T0PR3_MASK                                   0x8
#define _TMR0H_T0PR4_POSN                                   0x4
#define _TMR0H_T0PR4_POSITION                               0x4
#define _TMR0H_T0PR4_SIZE                                   0x1
#define _TMR0H_T0PR4_LENGTH                                 0x1
#define _TMR0H_T0PR4_MASK                                   0x10
#define _TMR0H_T0PR5_POSN                                   0x5
#define _TMR0H_T0PR5_POSITION                               0x5
#define _TMR0H_T0PR5_SIZE                                   0x1
#define _TMR0H_T0PR5_LENGTH                                 0x1
#define _TMR0H_T0PR5_MASK                                   0x20
#define _TMR0H_T0PR6_POSN                                   0x6
#define _TMR0H_T0PR6_POSITION                               0x6
#define _TMR0H_T0PR6_SIZE                                   0x1
#define _TMR0H_T0PR6_LENGTH                                 0x1
#define _TMR0H_T0PR6_MASK                                   0x40
#define _TMR0H_T0PR7_POSN                                   0x7
#define _TMR0H_T0PR7_POSITION                               0x7
#define _TMR0H_T0PR7_SIZE                                   0x1
#define _TMR0H_T0PR7_LENGTH                                 0x1
#define _TMR0H_T0PR7_MASK                                   0x80
#define _TMR0H_T0PR_POSN                                    0x0
#define _TMR0H_T0PR_POSITION                                0x0
#define _TMR0H_T0PR_SIZE                                    0x8
#define _TMR0H_T0PR_LENGTH                                  0x8
#define _TMR0H_T0PR_MASK                                    0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TMR0H                  :8;
    };
    struct {
        unsigned TMR0H0                 :1;
        unsigned TMR0H1                 :1;
        unsigned TMR0H2                 :1;
        unsigned TMR0H3                 :1;
        unsigned TMR0H4                 :1;
        unsigned TMR0H5                 :1;
        unsigned TMR0H6                 :1;
        unsigned TMR0H7                 :1;
    };
    struct {
        unsigned T0PR0                  :1;
        unsigned T0PR1                  :1;
        unsigned T0PR2                  :1;
        unsigned T0PR3                  :1;
        unsigned T0PR4                  :1;
        unsigned T0PR5                  :1;
        unsigned T0PR6                  :1;
        unsigned T0PR7                  :1;
    };
    struct {
        unsigned T0PR                   :8;
    };
} PR0bits_t;
extern volatile PR0bits_t PR0bits __at(0x59D);
// bitfield macros
#define _PR0_TMR0H_POSN                                     0x0
#define _PR0_TMR0H_POSITION                                 0x0
#define _PR0_TMR0H_SIZE                                     0x8
#define _PR0_TMR0H_LENGTH                                   0x8
#define _PR0_TMR0H_MASK                                     0xFF
#define _PR0_TMR0H0_POSN                                    0x0
#define _PR0_TMR0H0_POSITION                                0x0
#define _PR0_TMR0H0_SIZE                                    0x1
#define _PR0_TMR0H0_LENGTH                                  0x1
#define _PR0_TMR0H0_MASK                                    0x1
#define _PR0_TMR0H1_POSN                                    0x1
#define _PR0_TMR0H1_POSITION                                0x1
#define _PR0_TMR0H1_SIZE                                    0x1
#define _PR0_TMR0H1_LENGTH                                  0x1
#define _PR0_TMR0H1_MASK                                    0x2
#define _PR0_TMR0H2_POSN                                    0x2
#define _PR0_TMR0H2_POSITION                                0x2
#define _PR0_TMR0H2_SIZE                                    0x1
#define _PR0_TMR0H2_LENGTH                                  0x1
#define _PR0_TMR0H2_MASK                                    0x4
#define _PR0_TMR0H3_POSN                                    0x3
#define _PR0_TMR0H3_POSITION                                0x3
#define _PR0_TMR0H3_SIZE                                    0x1
#define _PR0_TMR0H3_LENGTH                                  0x1
#define _PR0_TMR0H3_MASK                                    0x8
#define _PR0_TMR0H4_POSN                                    0x4
#define _PR0_TMR0H4_POSITION                                0x4
#define _PR0_TMR0H4_SIZE                                    0x1
#define _PR0_TMR0H4_LENGTH                                  0x1
#define _PR0_TMR0H4_MASK                                    0x10
#define _PR0_TMR0H5_POSN                                    0x5
#define _PR0_TMR0H5_POSITION                                0x5
#define _PR0_TMR0H5_SIZE                                    0x1
#define _PR0_TMR0H5_LENGTH                                  0x1
#define _PR0_TMR0H5_MASK                                    0x20
#define _PR0_TMR0H6_POSN                                    0x6
#define _PR0_TMR0H6_POSITION                                0x6
#define _PR0_TMR0H6_SIZE                                    0x1
#define _PR0_TMR0H6_LENGTH                                  0x1
#define _PR0_TMR0H6_MASK                                    0x40
#define _PR0_TMR0H7_POSN                                    0x7
#define _PR0_TMR0H7_POSITION                                0x7
#define _PR0_TMR0H7_SIZE                                    0x1
#define _PR0_TMR0H7_LENGTH                                  0x1
#define _PR0_TMR0H7_MASK                                    0x80
#define _PR0_T0PR0_POSN                                     0x0
#define _PR0_T0PR0_POSITION                                 0x0
#define _PR0_T0PR0_SIZE                                     0x1
#define _PR0_T0PR0_LENGTH                                   0x1
#define _PR0_T0PR0_MASK                                     0x1
#define _PR0_T0PR1_POSN                                     0x1
#define _PR0_T0PR1_POSITION                                 0x1
#define _PR0_T0PR1_SIZE                                     0x1
#define _PR0_T0PR1_LENGTH                                   0x1
#define _PR0_T0PR1_MASK                                     0x2
#define _PR0_T0PR2_POSN                                     0x2
#define _PR0_T0PR2_POSITION                                 0x2
#define _PR0_T0PR2_SIZE                                     0x1
#define _PR0_T0PR2_LENGTH                                   0x1
#define _PR0_T0PR2_MASK                                     0x4
#define _PR0_T0PR3_POSN                                     0x3
#define _PR0_T0PR3_POSITION                                 0x3
#define _PR0_T0PR3_SIZE                                     0x1
#define _PR0_T0PR3_LENGTH                                   0x1
#define _PR0_T0PR3_MASK                                     0x8
#define _PR0_T0PR4_POSN                                     0x4
#define _PR0_T0PR4_POSITION                                 0x4
#define _PR0_T0PR4_SIZE                                     0x1
#define _PR0_T0PR4_LENGTH                                   0x1
#define _PR0_T0PR4_MASK                                     0x10
#define _PR0_T0PR5_POSN                                     0x5
#define _PR0_T0PR5_POSITION                                 0x5
#define _PR0_T0PR5_SIZE                                     0x1
#define _PR0_T0PR5_LENGTH                                   0x1
#define _PR0_T0PR5_MASK                                     0x20
#define _PR0_T0PR6_POSN                                     0x6
#define _PR0_T0PR6_POSITION                                 0x6
#define _PR0_T0PR6_SIZE                                     0x1
#define _PR0_T0PR6_LENGTH                                   0x1
#define _PR0_T0PR6_MASK                                     0x40
#define _PR0_T0PR7_POSN                                     0x7
#define _PR0_T0PR7_POSITION                                 0x7
#define _PR0_T0PR7_SIZE                                     0x1
#define _PR0_T0PR7_LENGTH                                   0x1
#define _PR0_T0PR7_MASK                                     0x80
#define _PR0_T0PR_POSN                                      0x0
#define _PR0_T0PR_POSITION                                  0x0
#define _PR0_T0PR_SIZE                                      0x8
#define _PR0_T0PR_LENGTH                                    0x8
#define _PR0_T0PR_MASK                                      0xFF

// Register: T0CON0
#define T0CON0 T0CON0
extern volatile unsigned char           T0CON0              __at(0x59E);
#ifndef _LIB_BUILD
asm("T0CON0 equ 059Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OUTPS                  :4;
        unsigned MD16                   :1;
        unsigned OUT                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned T0OUTPS                :4;
        unsigned T0MD16                 :1;
        unsigned T0OUT                  :1;
        unsigned                        :1;
        unsigned T0EN                   :1;
    };
    struct {
        unsigned OUTPS0                 :1;
        unsigned OUTPS1                 :1;
        unsigned OUTPS2                 :1;
        unsigned OUTPS3                 :1;
        unsigned T016BIT                :1;
    };
} T0CON0bits_t;
extern volatile T0CON0bits_t T0CON0bits __at(0x59E);
// bitfield macros
#define _T0CON0_OUTPS_POSN                                  0x0
#define _T0CON0_OUTPS_POSITION                              0x0
#define _T0CON0_OUTPS_SIZE                                  0x4
#define _T0CON0_OUTPS_LENGTH                                0x4
#define _T0CON0_OUTPS_MASK                                  0xF
#define _T0CON0_MD16_POSN                                   0x4
#define _T0CON0_MD16_POSITION                               0x4
#define _T0CON0_MD16_SIZE                                   0x1
#define _T0CON0_MD16_LENGTH                                 0x1
#define _T0CON0_MD16_MASK                                   0x10
#define _T0CON0_OUT_POSN                                    0x5
#define _T0CON0_OUT_POSITION                                0x5
#define _T0CON0_OUT_SIZE                                    0x1
#define _T0CON0_OUT_LENGTH                                  0x1
#define _T0CON0_OUT_MASK                                    0x20
#define _T0CON0_EN_POSN                                     0x7
#define _T0CON0_EN_POSITION                                 0x7
#define _T0CON0_EN_SIZE                                     0x1
#define _T0CON0_EN_LENGTH                                   0x1
#define _T0CON0_EN_MASK                                     0x80
#define _T0CON0_T0OUTPS_POSN                                0x0
#define _T0CON0_T0OUTPS_POSITION                            0x0
#define _T0CON0_T0OUTPS_SIZE                                0x4
#define _T0CON0_T0OUTPS_LENGTH                              0x4
#define _T0CON0_T0OUTPS_MASK                                0xF
#define _T0CON0_T0MD16_POSN                                 0x4
#define _T0CON0_T0MD16_POSITION                             0x4
#define _T0CON0_T0MD16_SIZE                                 0x1
#define _T0CON0_T0MD16_LENGTH                               0x1
#define _T0CON0_T0MD16_MASK                                 0x10
#define _T0CON0_T0OUT_POSN                                  0x5
#define _T0CON0_T0OUT_POSITION                              0x5
#define _T0CON0_T0OUT_SIZE                                  0x1
#define _T0CON0_T0OUT_LENGTH                                0x1
#define _T0CON0_T0OUT_MASK                                  0x20
#define _T0CON0_T0EN_POSN                                   0x7
#define _T0CON0_T0EN_POSITION                               0x7
#define _T0CON0_T0EN_SIZE                                   0x1
#define _T0CON0_T0EN_LENGTH                                 0x1
#define _T0CON0_T0EN_MASK                                   0x80
#define _T0CON0_OUTPS0_POSN                                 0x0
#define _T0CON0_OUTPS0_POSITION                             0x0
#define _T0CON0_OUTPS0_SIZE                                 0x1
#define _T0CON0_OUTPS0_LENGTH                               0x1
#define _T0CON0_OUTPS0_MASK                                 0x1
#define _T0CON0_OUTPS1_POSN                                 0x1
#define _T0CON0_OUTPS1_POSITION                             0x1
#define _T0CON0_OUTPS1_SIZE                                 0x1
#define _T0CON0_OUTPS1_LENGTH                               0x1
#define _T0CON0_OUTPS1_MASK                                 0x2
#define _T0CON0_OUTPS2_POSN                                 0x2
#define _T0CON0_OUTPS2_POSITION                             0x2
#define _T0CON0_OUTPS2_SIZE                                 0x1
#define _T0CON0_OUTPS2_LENGTH                               0x1
#define _T0CON0_OUTPS2_MASK                                 0x4
#define _T0CON0_OUTPS3_POSN                                 0x3
#define _T0CON0_OUTPS3_POSITION                             0x3
#define _T0CON0_OUTPS3_SIZE                                 0x1
#define _T0CON0_OUTPS3_LENGTH                               0x1
#define _T0CON0_OUTPS3_MASK                                 0x8
#define _T0CON0_T016BIT_POSN                                0x4
#define _T0CON0_T016BIT_POSITION                            0x4
#define _T0CON0_T016BIT_SIZE                                0x1
#define _T0CON0_T016BIT_LENGTH                              0x1
#define _T0CON0_T016BIT_MASK                                0x10

// Register: T0CON1
#define T0CON1 T0CON1
extern volatile unsigned char           T0CON1              __at(0x59F);
#ifndef _LIB_BUILD
asm("T0CON1 equ 059Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CKPS                   :4;
        unsigned ASYNC                  :1;
        unsigned CS                     :3;
    };
    struct {
        unsigned CKPS0                  :1;
        unsigned CKPS1                  :1;
        unsigned CKPS2                  :1;
        unsigned CKPS3                  :1;
        unsigned T0ASYNC                :1;
        unsigned CS0                    :1;
        unsigned CS1                    :1;
        unsigned CS2                    :1;
    };
    struct {
        unsigned T0CKPS                 :4;
        unsigned                        :1;
        unsigned T0CS                   :3;
    };
    struct {
        unsigned T0CKPS0                :1;
        unsigned T0CKPS1                :1;
        unsigned T0CKPS2                :1;
        unsigned T0CKPS3                :1;
        unsigned                        :1;
        unsigned T0CS0                  :1;
        unsigned T0CS1                  :1;
        unsigned T0CS2                  :1;
    };
} T0CON1bits_t;
extern volatile T0CON1bits_t T0CON1bits __at(0x59F);
// bitfield macros
#define _T0CON1_CKPS_POSN                                   0x0
#define _T0CON1_CKPS_POSITION                               0x0
#define _T0CON1_CKPS_SIZE                                   0x4
#define _T0CON1_CKPS_LENGTH                                 0x4
#define _T0CON1_CKPS_MASK                                   0xF
#define _T0CON1_ASYNC_POSN                                  0x4
#define _T0CON1_ASYNC_POSITION                              0x4
#define _T0CON1_ASYNC_SIZE                                  0x1
#define _T0CON1_ASYNC_LENGTH                                0x1
#define _T0CON1_ASYNC_MASK                                  0x10
#define _T0CON1_CS_POSN                                     0x5
#define _T0CON1_CS_POSITION                                 0x5
#define _T0CON1_CS_SIZE                                     0x3
#define _T0CON1_CS_LENGTH                                   0x3
#define _T0CON1_CS_MASK                                     0xE0
#define _T0CON1_CKPS0_POSN                                  0x0
#define _T0CON1_CKPS0_POSITION                              0x0
#define _T0CON1_CKPS0_SIZE                                  0x1
#define _T0CON1_CKPS0_LENGTH                                0x1
#define _T0CON1_CKPS0_MASK                                  0x1
#define _T0CON1_CKPS1_POSN                                  0x1
#define _T0CON1_CKPS1_POSITION                              0x1
#define _T0CON1_CKPS1_SIZE                                  0x1
#define _T0CON1_CKPS1_LENGTH                                0x1
#define _T0CON1_CKPS1_MASK                                  0x2
#define _T0CON1_CKPS2_POSN                                  0x2
#define _T0CON1_CKPS2_POSITION                              0x2
#define _T0CON1_CKPS2_SIZE                                  0x1
#define _T0CON1_CKPS2_LENGTH                                0x1
#define _T0CON1_CKPS2_MASK                                  0x4
#define _T0CON1_CKPS3_POSN                                  0x3
#define _T0CON1_CKPS3_POSITION                              0x3
#define _T0CON1_CKPS3_SIZE                                  0x1
#define _T0CON1_CKPS3_LENGTH                                0x1
#define _T0CON1_CKPS3_MASK                                  0x8
#define _T0CON1_T0ASYNC_POSN                                0x4
#define _T0CON1_T0ASYNC_POSITION                            0x4
#define _T0CON1_T0ASYNC_SIZE                                0x1
#define _T0CON1_T0ASYNC_LENGTH                              0x1
#define _T0CON1_T0ASYNC_MASK                                0x10
#define _T0CON1_CS0_POSN                                    0x5
#define _T0CON1_CS0_POSITION                                0x5
#define _T0CON1_CS0_SIZE                                    0x1
#define _T0CON1_CS0_LENGTH                                  0x1
#define _T0CON1_CS0_MASK                                    0x20
#define _T0CON1_CS1_POSN                                    0x6
#define _T0CON1_CS1_POSITION                                0x6
#define _T0CON1_CS1_SIZE                                    0x1
#define _T0CON1_CS1_LENGTH                                  0x1
#define _T0CON1_CS1_MASK                                    0x40
#define _T0CON1_CS2_POSN                                    0x7
#define _T0CON1_CS2_POSITION                                0x7
#define _T0CON1_CS2_SIZE                                    0x1
#define _T0CON1_CS2_LENGTH                                  0x1
#define _T0CON1_CS2_MASK                                    0x80
#define _T0CON1_T0CKPS_POSN                                 0x0
#define _T0CON1_T0CKPS_POSITION                             0x0
#define _T0CON1_T0CKPS_SIZE                                 0x4
#define _T0CON1_T0CKPS_LENGTH                               0x4
#define _T0CON1_T0CKPS_MASK                                 0xF
#define _T0CON1_T0CS_POSN                                   0x5
#define _T0CON1_T0CS_POSITION                               0x5
#define _T0CON1_T0CS_SIZE                                   0x3
#define _T0CON1_T0CS_LENGTH                                 0x3
#define _T0CON1_T0CS_MASK                                   0xE0
#define _T0CON1_T0CKPS0_POSN                                0x0
#define _T0CON1_T0CKPS0_POSITION                            0x0
#define _T0CON1_T0CKPS0_SIZE                                0x1
#define _T0CON1_T0CKPS0_LENGTH                              0x1
#define _T0CON1_T0CKPS0_MASK                                0x1
#define _T0CON1_T0CKPS1_POSN                                0x1
#define _T0CON1_T0CKPS1_POSITION                            0x1
#define _T0CON1_T0CKPS1_SIZE                                0x1
#define _T0CON1_T0CKPS1_LENGTH                              0x1
#define _T0CON1_T0CKPS1_MASK                                0x2
#define _T0CON1_T0CKPS2_POSN                                0x2
#define _T0CON1_T0CKPS2_POSITION                            0x2
#define _T0CON1_T0CKPS2_SIZE                                0x1
#define _T0CON1_T0CKPS2_LENGTH                              0x1
#define _T0CON1_T0CKPS2_MASK                                0x4
#define _T0CON1_T0CKPS3_POSN                                0x3
#define _T0CON1_T0CKPS3_POSITION                            0x3
#define _T0CON1_T0CKPS3_SIZE                                0x1
#define _T0CON1_T0CKPS3_LENGTH                              0x1
#define _T0CON1_T0CKPS3_MASK                                0x8
#define _T0CON1_T0CS0_POSN                                  0x5
#define _T0CON1_T0CS0_POSITION                              0x5
#define _T0CON1_T0CS0_SIZE                                  0x1
#define _T0CON1_T0CS0_LENGTH                                0x1
#define _T0CON1_T0CS0_MASK                                  0x20
#define _T0CON1_T0CS1_POSN                                  0x6
#define _T0CON1_T0CS1_POSITION                              0x6
#define _T0CON1_T0CS1_SIZE                                  0x1
#define _T0CON1_T0CS1_LENGTH                                0x1
#define _T0CON1_T0CS1_MASK                                  0x40
#define _T0CON1_T0CS2_POSN                                  0x7
#define _T0CON1_T0CS2_POSITION                              0x7
#define _T0CON1_T0CS2_SIZE                                  0x1
#define _T0CON1_T0CS2_LENGTH                                0x1
#define _T0CON1_T0CS2_MASK                                  0x80

// Register: PIR0
#define PIR0 PIR0
extern volatile unsigned char           PIR0                __at(0x70C);
#ifndef _LIB_BUILD
asm("PIR0 equ 070Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INTF                   :1;
        unsigned                        :3;
        unsigned IOCIF                  :1;
        unsigned TMR0IF                 :1;
    };
} PIR0bits_t;
extern volatile PIR0bits_t PIR0bits __at(0x70C);
// bitfield macros
#define _PIR0_INTF_POSN                                     0x0
#define _PIR0_INTF_POSITION                                 0x0
#define _PIR0_INTF_SIZE                                     0x1
#define _PIR0_INTF_LENGTH                                   0x1
#define _PIR0_INTF_MASK                                     0x1
#define _PIR0_IOCIF_POSN                                    0x4
#define _PIR0_IOCIF_POSITION                                0x4
#define _PIR0_IOCIF_SIZE                                    0x1
#define _PIR0_IOCIF_LENGTH                                  0x1
#define _PIR0_IOCIF_MASK                                    0x10
#define _PIR0_TMR0IF_POSN                                   0x5
#define _PIR0_TMR0IF_POSITION                               0x5
#define _PIR0_TMR0IF_SIZE                                   0x1
#define _PIR0_TMR0IF_LENGTH                                 0x1
#define _PIR0_TMR0IF_MASK                                   0x20

// Register: PIR1
#define PIR1 PIR1
extern volatile unsigned char           PIR1                __at(0x70D);
#ifndef _LIB_BUILD
asm("PIR1 equ 070Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADIF                   :1;
        unsigned SSP1IF                 :1;
        unsigned BCL1IF                 :1;
        unsigned TX1IF                  :1;
        unsigned RC1IF                  :1;
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x70D);
// bitfield macros
#define _PIR1_ADIF_POSN                                     0x0
#define _PIR1_ADIF_POSITION                                 0x0
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x1
#define _PIR1_SSP1IF_POSN                                   0x1
#define _PIR1_SSP1IF_POSITION                               0x1
#define _PIR1_SSP1IF_SIZE                                   0x1
#define _PIR1_SSP1IF_LENGTH                                 0x1
#define _PIR1_SSP1IF_MASK                                   0x2
#define _PIR1_BCL1IF_POSN                                   0x2
#define _PIR1_BCL1IF_POSITION                               0x2
#define _PIR1_BCL1IF_SIZE                                   0x1
#define _PIR1_BCL1IF_LENGTH                                 0x1
#define _PIR1_BCL1IF_MASK                                   0x4
#define _PIR1_TX1IF_POSN                                    0x3
#define _PIR1_TX1IF_POSITION                                0x3
#define _PIR1_TX1IF_SIZE                                    0x1
#define _PIR1_TX1IF_LENGTH                                  0x1
#define _PIR1_TX1IF_MASK                                    0x8
#define _PIR1_RC1IF_POSN                                    0x4
#define _PIR1_RC1IF_POSITION                                0x4
#define _PIR1_RC1IF_SIZE                                    0x1
#define _PIR1_RC1IF_LENGTH                                  0x1
#define _PIR1_RC1IF_MASK                                    0x10
#define _PIR1_TMR1IF_POSN                                   0x5
#define _PIR1_TMR1IF_POSITION                               0x5
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x20
#define _PIR1_TMR2IF_POSN                                   0x6
#define _PIR1_TMR2IF_POSITION                               0x6
#define _PIR1_TMR2IF_SIZE                                   0x1
#define _PIR1_TMR2IF_LENGTH                                 0x1
#define _PIR1_TMR2IF_MASK                                   0x40
#define _PIR1_CCP1IF_POSN                                   0x7
#define _PIR1_CCP1IF_POSITION                               0x7
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x80

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x70E);
#ifndef _LIB_BUILD
asm("PIR2 equ 070Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :5;
        unsigned TMR1GIF                :1;
        unsigned NVMIF                  :1;
        unsigned CCP2IF                 :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x70E);
// bitfield macros
#define _PIR2_TMR1GIF_POSN                                  0x5
#define _PIR2_TMR1GIF_POSITION                              0x5
#define _PIR2_TMR1GIF_SIZE                                  0x1
#define _PIR2_TMR1GIF_LENGTH                                0x1
#define _PIR2_TMR1GIF_MASK                                  0x20
#define _PIR2_NVMIF_POSN                                    0x6
#define _PIR2_NVMIF_POSITION                                0x6
#define _PIR2_NVMIF_SIZE                                    0x1
#define _PIR2_NVMIF_LENGTH                                  0x1
#define _PIR2_NVMIF_MASK                                    0x40
#define _PIR2_CCP2IF_POSN                                   0x7
#define _PIR2_CCP2IF_POSITION                               0x7
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x80

// Register: PIE0
#define PIE0 PIE0
extern volatile unsigned char           PIE0                __at(0x716);
#ifndef _LIB_BUILD
asm("PIE0 equ 0716h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INTE                   :1;
        unsigned                        :3;
        unsigned IOCIE                  :1;
        unsigned TMR0IE                 :1;
    };
} PIE0bits_t;
extern volatile PIE0bits_t PIE0bits __at(0x716);
// bitfield macros
#define _PIE0_INTE_POSN                                     0x0
#define _PIE0_INTE_POSITION                                 0x0
#define _PIE0_INTE_SIZE                                     0x1
#define _PIE0_INTE_LENGTH                                   0x1
#define _PIE0_INTE_MASK                                     0x1
#define _PIE0_IOCIE_POSN                                    0x4
#define _PIE0_IOCIE_POSITION                                0x4
#define _PIE0_IOCIE_SIZE                                    0x1
#define _PIE0_IOCIE_LENGTH                                  0x1
#define _PIE0_IOCIE_MASK                                    0x10
#define _PIE0_TMR0IE_POSN                                   0x5
#define _PIE0_TMR0IE_POSITION                               0x5
#define _PIE0_TMR0IE_SIZE                                   0x1
#define _PIE0_TMR0IE_LENGTH                                 0x1
#define _PIE0_TMR0IE_MASK                                   0x20

// Register: PIE1
#define PIE1 PIE1
extern volatile unsigned char           PIE1                __at(0x717);
#ifndef _LIB_BUILD
asm("PIE1 equ 0717h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADIE                   :1;
        unsigned SSP1IE                 :1;
        unsigned BCL1IE                 :1;
        unsigned TX1IE                  :1;
        unsigned RC1IE                  :1;
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned CCP1IE                 :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x717);
// bitfield macros
#define _PIE1_ADIE_POSN                                     0x0
#define _PIE1_ADIE_POSITION                                 0x0
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x1
#define _PIE1_SSP1IE_POSN                                   0x1
#define _PIE1_SSP1IE_POSITION                               0x1
#define _PIE1_SSP1IE_SIZE                                   0x1
#define _PIE1_SSP1IE_LENGTH                                 0x1
#define _PIE1_SSP1IE_MASK                                   0x2
#define _PIE1_BCL1IE_POSN                                   0x2
#define _PIE1_BCL1IE_POSITION                               0x2
#define _PIE1_BCL1IE_SIZE                                   0x1
#define _PIE1_BCL1IE_LENGTH                                 0x1
#define _PIE1_BCL1IE_MASK                                   0x4
#define _PIE1_TX1IE_POSN                                    0x3
#define _PIE1_TX1IE_POSITION                                0x3
#define _PIE1_TX1IE_SIZE                                    0x1
#define _PIE1_TX1IE_LENGTH                                  0x1
#define _PIE1_TX1IE_MASK                                    0x8
#define _PIE1_RC1IE_POSN                                    0x4
#define _PIE1_RC1IE_POSITION                                0x4
#define _PIE1_RC1IE_SIZE                                    0x1
#define _PIE1_RC1IE_LENGTH                                  0x1
#define _PIE1_RC1IE_MASK                                    0x10
#define _PIE1_TMR1IE_POSN                                   0x5
#define _PIE1_TMR1IE_POSITION                               0x5
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x20
#define _PIE1_TMR2IE_POSN                                   0x6
#define _PIE1_TMR2IE_POSITION                               0x6
#define _PIE1_TMR2IE_SIZE                                   0x1
#define _PIE1_TMR2IE_LENGTH                                 0x1
#define _PIE1_TMR2IE_MASK                                   0x40
#define _PIE1_CCP1IE_POSN                                   0x7
#define _PIE1_CCP1IE_POSITION                               0x7
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x80

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x718);
#ifndef _LIB_BUILD
asm("PIE2 equ 0718h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :5;
        unsigned TMR1GIE                :1;
        unsigned NVMIE                  :1;
        unsigned CCP2IE                 :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x718);
// bitfield macros
#define _PIE2_TMR1GIE_POSN                                  0x5
#define _PIE2_TMR1GIE_POSITION                              0x5
#define _PIE2_TMR1GIE_SIZE                                  0x1
#define _PIE2_TMR1GIE_LENGTH                                0x1
#define _PIE2_TMR1GIE_MASK                                  0x20
#define _PIE2_NVMIE_POSN                                    0x6
#define _PIE2_NVMIE_POSITION                                0x6
#define _PIE2_NVMIE_SIZE                                    0x1
#define _PIE2_NVMIE_LENGTH                                  0x1
#define _PIE2_NVMIE_MASK                                    0x40
#define _PIE2_CCP2IE_POSN                                   0x7
#define _PIE2_CCP2IE_POSITION                               0x7
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x80

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0x80C);
#ifndef _LIB_BUILD
asm("WDTCON equ 080Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned PS                     :5;
        unsigned                        :1;
        unsigned CS                     :1;
    };
    struct {
        unsigned WDTSEN                 :1;
        unsigned WDTPS                  :5;
        unsigned                        :1;
        unsigned WDTCS                  :1;
    };
    struct {
        unsigned SWDTEN                 :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0x80C);
// bitfield macros
#define _WDTCON_SEN_POSN                                    0x0
#define _WDTCON_SEN_POSITION                                0x0
#define _WDTCON_SEN_SIZE                                    0x1
#define _WDTCON_SEN_LENGTH                                  0x1
#define _WDTCON_SEN_MASK                                    0x1
#define _WDTCON_PS_POSN                                     0x1
#define _WDTCON_PS_POSITION                                 0x1
#define _WDTCON_PS_SIZE                                     0x5
#define _WDTCON_PS_LENGTH                                   0x5
#define _WDTCON_PS_MASK                                     0x3E
#define _WDTCON_CS_POSN                                     0x7
#define _WDTCON_CS_POSITION                                 0x7
#define _WDTCON_CS_SIZE                                     0x1
#define _WDTCON_CS_LENGTH                                   0x1
#define _WDTCON_CS_MASK                                     0x80
#define _WDTCON_WDTSEN_POSN                                 0x0
#define _WDTCON_WDTSEN_POSITION                             0x0
#define _WDTCON_WDTSEN_SIZE                                 0x1
#define _WDTCON_WDTSEN_LENGTH                               0x1
#define _WDTCON_WDTSEN_MASK                                 0x1
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x5
#define _WDTCON_WDTPS_LENGTH                                0x5
#define _WDTCON_WDTPS_MASK                                  0x3E
#define _WDTCON_WDTCS_POSN                                  0x7
#define _WDTCON_WDTCS_POSITION                              0x7
#define _WDTCON_WDTCS_SIZE                                  0x1
#define _WDTCON_WDTCS_LENGTH                                0x1
#define _WDTCON_WDTCS_MASK                                  0x80
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1

// Register: BORCON
#define BORCON BORCON
extern volatile unsigned char           BORCON              __at(0x811);
#ifndef _LIB_BUILD
asm("BORCON equ 0811h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BORRDY                 :1;
        unsigned                        :6;
        unsigned SBOREN                 :1;
    };
} BORCONbits_t;
extern volatile BORCONbits_t BORCONbits __at(0x811);
// bitfield macros
#define _BORCON_BORRDY_POSN                                 0x0
#define _BORCON_BORRDY_POSITION                             0x0
#define _BORCON_BORRDY_SIZE                                 0x1
#define _BORCON_BORRDY_LENGTH                               0x1
#define _BORCON_BORRDY_MASK                                 0x1
#define _BORCON_SBOREN_POSN                                 0x7
#define _BORCON_SBOREN_POSITION                             0x7
#define _BORCON_SBOREN_SIZE                                 0x1
#define _BORCON_SBOREN_LENGTH                               0x1
#define _BORCON_SBOREN_MASK                                 0x80

// Register: PCON0
#define PCON0 PCON0
extern volatile unsigned char           PCON0               __at(0x813);
#ifndef _LIB_BUILD
asm("PCON0 equ 0813h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nRI                    :1;
        unsigned nRMCLR                 :1;
        unsigned nRWDT                  :1;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKOVF                 :1;
    };
} PCON0bits_t;
extern volatile PCON0bits_t PCON0bits __at(0x813);
// bitfield macros
#define _PCON0_nBOR_POSN                                    0x0
#define _PCON0_nBOR_POSITION                                0x0
#define _PCON0_nBOR_SIZE                                    0x1
#define _PCON0_nBOR_LENGTH                                  0x1
#define _PCON0_nBOR_MASK                                    0x1
#define _PCON0_nPOR_POSN                                    0x1
#define _PCON0_nPOR_POSITION                                0x1
#define _PCON0_nPOR_SIZE                                    0x1
#define _PCON0_nPOR_LENGTH                                  0x1
#define _PCON0_nPOR_MASK                                    0x2
#define _PCON0_nRI_POSN                                     0x2
#define _PCON0_nRI_POSITION                                 0x2
#define _PCON0_nRI_SIZE                                     0x1
#define _PCON0_nRI_LENGTH                                   0x1
#define _PCON0_nRI_MASK                                     0x4
#define _PCON0_nRMCLR_POSN                                  0x3
#define _PCON0_nRMCLR_POSITION                              0x3
#define _PCON0_nRMCLR_SIZE                                  0x1
#define _PCON0_nRMCLR_LENGTH                                0x1
#define _PCON0_nRMCLR_MASK                                  0x8
#define _PCON0_nRWDT_POSN                                   0x4
#define _PCON0_nRWDT_POSITION                               0x4
#define _PCON0_nRWDT_SIZE                                   0x1
#define _PCON0_nRWDT_LENGTH                                 0x1
#define _PCON0_nRWDT_MASK                                   0x10
#define _PCON0_STKUNF_POSN                                  0x6
#define _PCON0_STKUNF_POSITION                              0x6
#define _PCON0_STKUNF_SIZE                                  0x1
#define _PCON0_STKUNF_LENGTH                                0x1
#define _PCON0_STKUNF_MASK                                  0x40
#define _PCON0_STKOVF_POSN                                  0x7
#define _PCON0_STKOVF_POSITION                              0x7
#define _PCON0_STKOVF_SIZE                                  0x1
#define _PCON0_STKOVF_LENGTH                                0x1
#define _PCON0_STKOVF_MASK                                  0x80

// Register: PCON1
#define PCON1 PCON1
extern volatile unsigned char           PCON1               __at(0x814);
#ifndef _LIB_BUILD
asm("PCON1 equ 0814h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned nMEMV                  :1;
    };
} PCON1bits_t;
extern volatile PCON1bits_t PCON1bits __at(0x814);
// bitfield macros
#define _PCON1_nMEMV_POSN                                   0x1
#define _PCON1_nMEMV_POSITION                               0x1
#define _PCON1_nMEMV_SIZE                                   0x1
#define _PCON1_nMEMV_LENGTH                                 0x1
#define _PCON1_nMEMV_MASK                                   0x2

// Register: NVMADR
#define NVMADR NVMADR
extern volatile unsigned short          NVMADR              __at(0x81A);
#ifndef _LIB_BUILD
asm("NVMADR equ 081Ah");
#endif

// Register: NVMADRL
#define NVMADRL NVMADRL
extern volatile unsigned char           NVMADRL             __at(0x81A);
#ifndef _LIB_BUILD
asm("NVMADRL equ 081Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMADRL                :8;
    };
} NVMADRLbits_t;
extern volatile NVMADRLbits_t NVMADRLbits __at(0x81A);
// bitfield macros
#define _NVMADRL_NVMADRL_POSN                               0x0
#define _NVMADRL_NVMADRL_POSITION                           0x0
#define _NVMADRL_NVMADRL_SIZE                               0x8
#define _NVMADRL_NVMADRL_LENGTH                             0x8
#define _NVMADRL_NVMADRL_MASK                               0xFF

// Register: NVMADRH
#define NVMADRH NVMADRH
extern volatile unsigned char           NVMADRH             __at(0x81B);
#ifndef _LIB_BUILD
asm("NVMADRH equ 081Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMADRH                :7;
    };
} NVMADRHbits_t;
extern volatile NVMADRHbits_t NVMADRHbits __at(0x81B);
// bitfield macros
#define _NVMADRH_NVMADRH_POSN                               0x0
#define _NVMADRH_NVMADRH_POSITION                           0x0
#define _NVMADRH_NVMADRH_SIZE                               0x7
#define _NVMADRH_NVMADRH_LENGTH                             0x7
#define _NVMADRH_NVMADRH_MASK                               0x7F

// Register: NVMDAT
#define NVMDAT NVMDAT
extern volatile unsigned short          NVMDAT              __at(0x81C);
#ifndef _LIB_BUILD
asm("NVMDAT equ 081Ch");
#endif

// Register: NVMDATL
#define NVMDATL NVMDATL
extern volatile unsigned char           NVMDATL             __at(0x81C);
#ifndef _LIB_BUILD
asm("NVMDATL equ 081Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMDATL                :8;
    };
} NVMDATLbits_t;
extern volatile NVMDATLbits_t NVMDATLbits __at(0x81C);
// bitfield macros
#define _NVMDATL_NVMDATL_POSN                               0x0
#define _NVMDATL_NVMDATL_POSITION                           0x0
#define _NVMDATL_NVMDATL_SIZE                               0x8
#define _NVMDATL_NVMDATL_LENGTH                             0x8
#define _NVMDATL_NVMDATL_MASK                               0xFF

// Register: NVMDATH
#define NVMDATH NVMDATH
extern volatile unsigned char           NVMDATH             __at(0x81D);
#ifndef _LIB_BUILD
asm("NVMDATH equ 081Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMDATH                :6;
    };
} NVMDATHbits_t;
extern volatile NVMDATHbits_t NVMDATHbits __at(0x81D);
// bitfield macros
#define _NVMDATH_NVMDATH_POSN                               0x0
#define _NVMDATH_NVMDATH_POSITION                           0x0
#define _NVMDATH_NVMDATH_SIZE                               0x6
#define _NVMDATH_NVMDATH_LENGTH                             0x6
#define _NVMDATH_NVMDATH_MASK                               0x3F

// Register: NVMCON1
#define NVMCON1 NVMCON1
extern volatile unsigned char           NVMCON1             __at(0x81E);
#ifndef _LIB_BUILD
asm("NVMCON1 equ 081Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned LWLO                   :1;
        unsigned NVMREGS                :1;
    };
} NVMCON1bits_t;
extern volatile NVMCON1bits_t NVMCON1bits __at(0x81E);
// bitfield macros
#define _NVMCON1_RD_POSN                                    0x0
#define _NVMCON1_RD_POSITION                                0x0
#define _NVMCON1_RD_SIZE                                    0x1
#define _NVMCON1_RD_LENGTH                                  0x1
#define _NVMCON1_RD_MASK                                    0x1
#define _NVMCON1_WR_POSN                                    0x1
#define _NVMCON1_WR_POSITION                                0x1
#define _NVMCON1_WR_SIZE                                    0x1
#define _NVMCON1_WR_LENGTH                                  0x1
#define _NVMCON1_WR_MASK                                    0x2
#define _NVMCON1_WREN_POSN                                  0x2
#define _NVMCON1_WREN_POSITION                              0x2
#define _NVMCON1_WREN_SIZE                                  0x1
#define _NVMCON1_WREN_LENGTH                                0x1
#define _NVMCON1_WREN_MASK                                  0x4
#define _NVMCON1_WRERR_POSN                                 0x3
#define _NVMCON1_WRERR_POSITION                             0x3
#define _NVMCON1_WRERR_SIZE                                 0x1
#define _NVMCON1_WRERR_LENGTH                               0x1
#define _NVMCON1_WRERR_MASK                                 0x8
#define _NVMCON1_FREE_POSN                                  0x4
#define _NVMCON1_FREE_POSITION                              0x4
#define _NVMCON1_FREE_SIZE                                  0x1
#define _NVMCON1_FREE_LENGTH                                0x1
#define _NVMCON1_FREE_MASK                                  0x10
#define _NVMCON1_LWLO_POSN                                  0x5
#define _NVMCON1_LWLO_POSITION                              0x5
#define _NVMCON1_LWLO_SIZE                                  0x1
#define _NVMCON1_LWLO_LENGTH                                0x1
#define _NVMCON1_LWLO_MASK                                  0x20
#define _NVMCON1_NVMREGS_POSN                               0x6
#define _NVMCON1_NVMREGS_POSITION                           0x6
#define _NVMCON1_NVMREGS_SIZE                               0x1
#define _NVMCON1_NVMREGS_LENGTH                             0x1
#define _NVMCON1_NVMREGS_MASK                               0x40

// Register: NVMCON2
#define NVMCON2 NVMCON2
extern volatile unsigned char           NVMCON2             __at(0x81F);
#ifndef _LIB_BUILD
asm("NVMCON2 equ 081Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMCON2                :8;
    };
} NVMCON2bits_t;
extern volatile NVMCON2bits_t NVMCON2bits __at(0x81F);
// bitfield macros
#define _NVMCON2_NVMCON2_POSN                               0x0
#define _NVMCON2_NVMCON2_POSITION                           0x0
#define _NVMCON2_NVMCON2_SIZE                               0x8
#define _NVMCON2_NVMCON2_LENGTH                             0x8
#define _NVMCON2_NVMCON2_MASK                               0xFF

// Register: OSCCON
#define OSCCON OSCCON
extern volatile unsigned char           OSCCON              __at(0x88E);
#ifndef _LIB_BUILD
asm("OSCCON equ 088Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned COSC                   :2;
    };
    struct {
        unsigned NDIV0                  :1;
        unsigned NDIV1                  :1;
        unsigned NDIV2                  :1;
        unsigned NDIV3                  :1;
        unsigned NOSC0                  :1;
        unsigned NOSC1                  :1;
        unsigned NOSC2                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __at(0x88E);
// bitfield macros
#define _OSCCON_COSC_POSN                                   0x4
#define _OSCCON_COSC_POSITION                               0x4
#define _OSCCON_COSC_SIZE                                   0x2
#define _OSCCON_COSC_LENGTH                                 0x2
#define _OSCCON_COSC_MASK                                   0x30
#define _OSCCON_NDIV0_POSN                                  0x0
#define _OSCCON_NDIV0_POSITION                              0x0
#define _OSCCON_NDIV0_SIZE                                  0x1
#define _OSCCON_NDIV0_LENGTH                                0x1
#define _OSCCON_NDIV0_MASK                                  0x1
#define _OSCCON_NDIV1_POSN                                  0x1
#define _OSCCON_NDIV1_POSITION                              0x1
#define _OSCCON_NDIV1_SIZE                                  0x1
#define _OSCCON_NDIV1_LENGTH                                0x1
#define _OSCCON_NDIV1_MASK                                  0x2
#define _OSCCON_NDIV2_POSN                                  0x2
#define _OSCCON_NDIV2_POSITION                              0x2
#define _OSCCON_NDIV2_SIZE                                  0x1
#define _OSCCON_NDIV2_LENGTH                                0x1
#define _OSCCON_NDIV2_MASK                                  0x4
#define _OSCCON_NDIV3_POSN                                  0x3
#define _OSCCON_NDIV3_POSITION                              0x3
#define _OSCCON_NDIV3_SIZE                                  0x1
#define _OSCCON_NDIV3_LENGTH                                0x1
#define _OSCCON_NDIV3_MASK                                  0x8
#define _OSCCON_NOSC0_POSN                                  0x4
#define _OSCCON_NOSC0_POSITION                              0x4
#define _OSCCON_NOSC0_SIZE                                  0x1
#define _OSCCON_NOSC0_LENGTH                                0x1
#define _OSCCON_NOSC0_MASK                                  0x10
#define _OSCCON_NOSC1_POSN                                  0x5
#define _OSCCON_NOSC1_POSITION                              0x5
#define _OSCCON_NOSC1_SIZE                                  0x1
#define _OSCCON_NOSC1_LENGTH                                0x1
#define _OSCCON_NOSC1_MASK                                  0x20
#define _OSCCON_NOSC2_POSN                                  0x6
#define _OSCCON_NOSC2_POSITION                              0x6
#define _OSCCON_NOSC2_SIZE                                  0x1
#define _OSCCON_NOSC2_LENGTH                                0x1
#define _OSCCON_NOSC2_MASK                                  0x40

// Register: OSCSTAT
#define OSCSTAT OSCSTAT
extern volatile unsigned char           OSCSTAT             __at(0x890);
#ifndef _LIB_BUILD
asm("OSCSTAT equ 0890h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned SFOR                   :1;
        unsigned ADOR                   :1;
        unsigned                        :1;
        unsigned LFOR                   :1;
        unsigned MFOR                   :1;
        unsigned HFOR                   :1;
    };
} OSCSTATbits_t;
extern volatile OSCSTATbits_t OSCSTATbits __at(0x890);
// bitfield macros
#define _OSCSTAT_SFOR_POSN                                  0x1
#define _OSCSTAT_SFOR_POSITION                              0x1
#define _OSCSTAT_SFOR_SIZE                                  0x1
#define _OSCSTAT_SFOR_LENGTH                                0x1
#define _OSCSTAT_SFOR_MASK                                  0x2
#define _OSCSTAT_ADOR_POSN                                  0x2
#define _OSCSTAT_ADOR_POSITION                              0x2
#define _OSCSTAT_ADOR_SIZE                                  0x1
#define _OSCSTAT_ADOR_LENGTH                                0x1
#define _OSCSTAT_ADOR_MASK                                  0x4
#define _OSCSTAT_LFOR_POSN                                  0x4
#define _OSCSTAT_LFOR_POSITION                              0x4
#define _OSCSTAT_LFOR_SIZE                                  0x1
#define _OSCSTAT_LFOR_LENGTH                                0x1
#define _OSCSTAT_LFOR_MASK                                  0x10
#define _OSCSTAT_MFOR_POSN                                  0x5
#define _OSCSTAT_MFOR_POSITION                              0x5
#define _OSCSTAT_MFOR_SIZE                                  0x1
#define _OSCSTAT_MFOR_LENGTH                                0x1
#define _OSCSTAT_MFOR_MASK                                  0x20
#define _OSCSTAT_HFOR_POSN                                  0x6
#define _OSCSTAT_HFOR_POSITION                              0x6
#define _OSCSTAT_HFOR_SIZE                                  0x1
#define _OSCSTAT_HFOR_LENGTH                                0x1
#define _OSCSTAT_HFOR_MASK                                  0x40

// Register: OSCEN
#define OSCEN OSCEN
extern volatile unsigned char           OSCEN               __at(0x891);
#ifndef _LIB_BUILD
asm("OSCEN equ 0891h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned ADOEN                  :1;
        unsigned                        :1;
        unsigned LFOEN                  :1;
        unsigned MFOEN                  :1;
        unsigned HFOEN                  :1;
    };
} OSCENbits_t;
extern volatile OSCENbits_t OSCENbits __at(0x891);
// bitfield macros
#define _OSCEN_ADOEN_POSN                                   0x2
#define _OSCEN_ADOEN_POSITION                               0x2
#define _OSCEN_ADOEN_SIZE                                   0x1
#define _OSCEN_ADOEN_LENGTH                                 0x1
#define _OSCEN_ADOEN_MASK                                   0x4
#define _OSCEN_LFOEN_POSN                                   0x4
#define _OSCEN_LFOEN_POSITION                               0x4
#define _OSCEN_LFOEN_SIZE                                   0x1
#define _OSCEN_LFOEN_LENGTH                                 0x1
#define _OSCEN_LFOEN_MASK                                   0x10
#define _OSCEN_MFOEN_POSN                                   0x5
#define _OSCEN_MFOEN_POSITION                               0x5
#define _OSCEN_MFOEN_SIZE                                   0x1
#define _OSCEN_MFOEN_LENGTH                                 0x1
#define _OSCEN_MFOEN_MASK                                   0x20
#define _OSCEN_HFOEN_POSN                                   0x6
#define _OSCEN_HFOEN_POSITION                               0x6
#define _OSCEN_HFOEN_SIZE                                   0x1
#define _OSCEN_HFOEN_LENGTH                                 0x1
#define _OSCEN_HFOEN_MASK                                   0x40

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x892);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0892h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :6;
    };
    struct {
        unsigned HFTUN0                 :1;
        unsigned HFTUN1                 :1;
        unsigned HFTUN2                 :1;
        unsigned HFTUN3                 :1;
        unsigned HFTUN4                 :1;
        unsigned HFTUN5                 :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x892);
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x6
#define _OSCTUNE_TUN_LENGTH                                 0x6
#define _OSCTUNE_TUN_MASK                                   0x3F
#define _OSCTUNE_HFTUN0_POSN                                0x0
#define _OSCTUNE_HFTUN0_POSITION                            0x0
#define _OSCTUNE_HFTUN0_SIZE                                0x1
#define _OSCTUNE_HFTUN0_LENGTH                              0x1
#define _OSCTUNE_HFTUN0_MASK                                0x1
#define _OSCTUNE_HFTUN1_POSN                                0x1
#define _OSCTUNE_HFTUN1_POSITION                            0x1
#define _OSCTUNE_HFTUN1_SIZE                                0x1
#define _OSCTUNE_HFTUN1_LENGTH                              0x1
#define _OSCTUNE_HFTUN1_MASK                                0x2
#define _OSCTUNE_HFTUN2_POSN                                0x2
#define _OSCTUNE_HFTUN2_POSITION                            0x2
#define _OSCTUNE_HFTUN2_SIZE                                0x1
#define _OSCTUNE_HFTUN2_LENGTH                              0x1
#define _OSCTUNE_HFTUN2_MASK                                0x4
#define _OSCTUNE_HFTUN3_POSN                                0x3
#define _OSCTUNE_HFTUN3_POSITION                            0x3
#define _OSCTUNE_HFTUN3_SIZE                                0x1
#define _OSCTUNE_HFTUN3_LENGTH                              0x1
#define _OSCTUNE_HFTUN3_MASK                                0x8
#define _OSCTUNE_HFTUN4_POSN                                0x4
#define _OSCTUNE_HFTUN4_POSITION                            0x4
#define _OSCTUNE_HFTUN4_SIZE                                0x1
#define _OSCTUNE_HFTUN4_LENGTH                              0x1
#define _OSCTUNE_HFTUN4_MASK                                0x10
#define _OSCTUNE_HFTUN5_POSN                                0x5
#define _OSCTUNE_HFTUN5_POSITION                            0x5
#define _OSCTUNE_HFTUN5_SIZE                                0x1
#define _OSCTUNE_HFTUN5_LENGTH                              0x1
#define _OSCTUNE_HFTUN5_MASK                                0x20

// Register: OSCFRQ
#define OSCFRQ OSCFRQ
extern volatile unsigned char           OSCFRQ              __at(0x893);
#ifndef _LIB_BUILD
asm("OSCFRQ equ 0893h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRQ                    :3;
    };
    struct {
        unsigned HFFRQ0                 :1;
        unsigned HFFRQ1                 :1;
        unsigned HFFRQ2                 :1;
    };
} OSCFRQbits_t;
extern volatile OSCFRQbits_t OSCFRQbits __at(0x893);
// bitfield macros
#define _OSCFRQ_FRQ_POSN                                    0x0
#define _OSCFRQ_FRQ_POSITION                                0x0
#define _OSCFRQ_FRQ_SIZE                                    0x3
#define _OSCFRQ_FRQ_LENGTH                                  0x3
#define _OSCFRQ_FRQ_MASK                                    0x7
#define _OSCFRQ_HFFRQ0_POSN                                 0x0
#define _OSCFRQ_HFFRQ0_POSITION                             0x0
#define _OSCFRQ_HFFRQ0_SIZE                                 0x1
#define _OSCFRQ_HFFRQ0_LENGTH                               0x1
#define _OSCFRQ_HFFRQ0_MASK                                 0x1
#define _OSCFRQ_HFFRQ1_POSN                                 0x1
#define _OSCFRQ_HFFRQ1_POSITION                             0x1
#define _OSCFRQ_HFFRQ1_SIZE                                 0x1
#define _OSCFRQ_HFFRQ1_LENGTH                               0x1
#define _OSCFRQ_HFFRQ1_MASK                                 0x2
#define _OSCFRQ_HFFRQ2_POSN                                 0x2
#define _OSCFRQ_HFFRQ2_POSITION                             0x2
#define _OSCFRQ_HFFRQ2_SIZE                                 0x1
#define _OSCFRQ_HFFRQ2_LENGTH                               0x1
#define _OSCFRQ_HFFRQ2_MASK                                 0x4

// Register: FVRCON
#define FVRCON FVRCON
extern volatile unsigned char           FVRCON              __at(0x90C);
#ifndef _LIB_BUILD
asm("FVRCON equ 090Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADFVR                  :2;
        unsigned                        :4;
        unsigned FVRRDY                 :1;
        unsigned FVREN                  :1;
    };
    struct {
        unsigned ADFVR0                 :1;
        unsigned ADFVR1                 :1;
        unsigned CDAFVR0                :1;
        unsigned CDAFVR1                :1;
    };
} FVRCONbits_t;
extern volatile FVRCONbits_t FVRCONbits __at(0x90C);
// bitfield macros
#define _FVRCON_ADFVR_POSN                                  0x0
#define _FVRCON_ADFVR_POSITION                              0x0
#define _FVRCON_ADFVR_SIZE                                  0x2
#define _FVRCON_ADFVR_LENGTH                                0x2
#define _FVRCON_ADFVR_MASK                                  0x3
#define _FVRCON_FVRRDY_POSN                                 0x6
#define _FVRCON_FVRRDY_POSITION                             0x6
#define _FVRCON_FVRRDY_SIZE                                 0x1
#define _FVRCON_FVRRDY_LENGTH                               0x1
#define _FVRCON_FVRRDY_MASK                                 0x40
#define _FVRCON_FVREN_POSN                                  0x7
#define _FVRCON_FVREN_POSITION                              0x7
#define _FVRCON_FVREN_SIZE                                  0x1
#define _FVRCON_FVREN_LENGTH                                0x1
#define _FVRCON_FVREN_MASK                                  0x80
#define _FVRCON_ADFVR0_POSN                                 0x0
#define _FVRCON_ADFVR0_POSITION                             0x0
#define _FVRCON_ADFVR0_SIZE                                 0x1
#define _FVRCON_ADFVR0_LENGTH                               0x1
#define _FVRCON_ADFVR0_MASK                                 0x1
#define _FVRCON_ADFVR1_POSN                                 0x1
#define _FVRCON_ADFVR1_POSITION                             0x1
#define _FVRCON_ADFVR1_SIZE                                 0x1
#define _FVRCON_ADFVR1_LENGTH                               0x1
#define _FVRCON_ADFVR1_MASK                                 0x2
#define _FVRCON_CDAFVR0_POSN                                0x2
#define _FVRCON_CDAFVR0_POSITION                            0x2
#define _FVRCON_CDAFVR0_SIZE                                0x1
#define _FVRCON_CDAFVR0_LENGTH                              0x1
#define _FVRCON_CDAFVR0_MASK                                0x4
#define _FVRCON_CDAFVR1_POSN                                0x3
#define _FVRCON_CDAFVR1_POSITION                            0x3
#define _FVRCON_CDAFVR1_SIZE                                0x1
#define _FVRCON_CDAFVR1_LENGTH                              0x1
#define _FVRCON_CDAFVR1_MASK                                0x8

// Register: PPSLOCK
#define PPSLOCK PPSLOCK
extern volatile unsigned char           PPSLOCK             __at(0x1E8F);
#ifndef _LIB_BUILD
asm("PPSLOCK equ 01E8Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PPSLOCKED              :1;
    };
} PPSLOCKbits_t;
extern volatile PPSLOCKbits_t PPSLOCKbits __at(0x1E8F);
// bitfield macros
#define _PPSLOCK_PPSLOCKED_POSN                             0x0
#define _PPSLOCK_PPSLOCKED_POSITION                         0x0
#define _PPSLOCK_PPSLOCKED_SIZE                             0x1
#define _PPSLOCK_PPSLOCKED_LENGTH                           0x1
#define _PPSLOCK_PPSLOCKED_MASK                             0x1

// Register: INTPPS
#define INTPPS INTPPS
extern volatile unsigned char           INTPPS              __at(0x1E90);
#ifndef _LIB_BUILD
asm("INTPPS equ 01E90h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned INTPPS                 :4;
    };
    struct {
        unsigned INTPPS0                :1;
        unsigned INTPPS1                :1;
        unsigned INTPPS2                :1;
        unsigned INTPPS3                :1;
    };
} INTPPSbits_t;
extern volatile INTPPSbits_t INTPPSbits __at(0x1E90);
// bitfield macros
#define _INTPPS_PIN_POSN                                    0x0
#define _INTPPS_PIN_POSITION                                0x0
#define _INTPPS_PIN_SIZE                                    0x3
#define _INTPPS_PIN_LENGTH                                  0x3
#define _INTPPS_PIN_MASK                                    0x7
#define _INTPPS_PORT_POSN                                   0x3
#define _INTPPS_PORT_POSITION                               0x3
#define _INTPPS_PORT_SIZE                                   0x2
#define _INTPPS_PORT_LENGTH                                 0x2
#define _INTPPS_PORT_MASK                                   0x18
#define _INTPPS_INTPPS_POSN                                 0x0
#define _INTPPS_INTPPS_POSITION                             0x0
#define _INTPPS_INTPPS_SIZE                                 0x4
#define _INTPPS_INTPPS_LENGTH                               0x4
#define _INTPPS_INTPPS_MASK                                 0xF
#define _INTPPS_INTPPS0_POSN                                0x0
#define _INTPPS_INTPPS0_POSITION                            0x0
#define _INTPPS_INTPPS0_SIZE                                0x1
#define _INTPPS_INTPPS0_LENGTH                              0x1
#define _INTPPS_INTPPS0_MASK                                0x1
#define _INTPPS_INTPPS1_POSN                                0x1
#define _INTPPS_INTPPS1_POSITION                            0x1
#define _INTPPS_INTPPS1_SIZE                                0x1
#define _INTPPS_INTPPS1_LENGTH                              0x1
#define _INTPPS_INTPPS1_MASK                                0x2
#define _INTPPS_INTPPS2_POSN                                0x2
#define _INTPPS_INTPPS2_POSITION                            0x2
#define _INTPPS_INTPPS2_SIZE                                0x1
#define _INTPPS_INTPPS2_LENGTH                              0x1
#define _INTPPS_INTPPS2_MASK                                0x4
#define _INTPPS_INTPPS3_POSN                                0x3
#define _INTPPS_INTPPS3_POSITION                            0x3
#define _INTPPS_INTPPS3_SIZE                                0x1
#define _INTPPS_INTPPS3_LENGTH                              0x1
#define _INTPPS_INTPPS3_MASK                                0x8

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
extern volatile unsigned char           T0CKIPPS            __at(0x1E91);
#ifndef _LIB_BUILD
asm("T0CKIPPS equ 01E91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned T0CKIPPS               :4;
    };
    struct {
        unsigned T0CKIPPS0              :1;
        unsigned T0CKIPPS1              :1;
        unsigned T0CKIPPS2              :1;
        unsigned T0CKIPPS3              :1;
    };
} T0CKIPPSbits_t;
extern volatile T0CKIPPSbits_t T0CKIPPSbits __at(0x1E91);
// bitfield macros
#define _T0CKIPPS_PIN_POSN                                  0x0
#define _T0CKIPPS_PIN_POSITION                              0x0
#define _T0CKIPPS_PIN_SIZE                                  0x3
#define _T0CKIPPS_PIN_LENGTH                                0x3
#define _T0CKIPPS_PIN_MASK                                  0x7
#define _T0CKIPPS_PORT_POSN                                 0x3
#define _T0CKIPPS_PORT_POSITION                             0x3
#define _T0CKIPPS_PORT_SIZE                                 0x2
#define _T0CKIPPS_PORT_LENGTH                               0x2
#define _T0CKIPPS_PORT_MASK                                 0x18
#define _T0CKIPPS_T0CKIPPS_POSN                             0x0
#define _T0CKIPPS_T0CKIPPS_POSITION                         0x0
#define _T0CKIPPS_T0CKIPPS_SIZE                             0x4
#define _T0CKIPPS_T0CKIPPS_LENGTH                           0x4
#define _T0CKIPPS_T0CKIPPS_MASK                             0xF
#define _T0CKIPPS_T0CKIPPS0_POSN                            0x0
#define _T0CKIPPS_T0CKIPPS0_POSITION                        0x0
#define _T0CKIPPS_T0CKIPPS0_SIZE                            0x1
#define _T0CKIPPS_T0CKIPPS0_LENGTH                          0x1
#define _T0CKIPPS_T0CKIPPS0_MASK                            0x1
#define _T0CKIPPS_T0CKIPPS1_POSN                            0x1
#define _T0CKIPPS_T0CKIPPS1_POSITION                        0x1
#define _T0CKIPPS_T0CKIPPS1_SIZE                            0x1
#define _T0CKIPPS_T0CKIPPS1_LENGTH                          0x1
#define _T0CKIPPS_T0CKIPPS1_MASK                            0x2
#define _T0CKIPPS_T0CKIPPS2_POSN                            0x2
#define _T0CKIPPS_T0CKIPPS2_POSITION                        0x2
#define _T0CKIPPS_T0CKIPPS2_SIZE                            0x1
#define _T0CKIPPS_T0CKIPPS2_LENGTH                          0x1
#define _T0CKIPPS_T0CKIPPS2_MASK                            0x4
#define _T0CKIPPS_T0CKIPPS3_POSN                            0x3
#define _T0CKIPPS_T0CKIPPS3_POSITION                        0x3
#define _T0CKIPPS_T0CKIPPS3_SIZE                            0x1
#define _T0CKIPPS_T0CKIPPS3_LENGTH                          0x1
#define _T0CKIPPS_T0CKIPPS3_MASK                            0x8

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
extern volatile unsigned char           T1CKIPPS            __at(0x1E92);
#ifndef _LIB_BUILD
asm("T1CKIPPS equ 01E92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned T1CKIPPS               :5;
    };
    struct {
        unsigned T1CKIPPS0              :1;
        unsigned T1CKIPPS1              :1;
        unsigned T1CKIPPS2              :1;
        unsigned T1CKIPPS3              :1;
        unsigned T1CKIPPS4              :1;
    };
} T1CKIPPSbits_t;
extern volatile T1CKIPPSbits_t T1CKIPPSbits __at(0x1E92);
// bitfield macros
#define _T1CKIPPS_PIN_POSN                                  0x0
#define _T1CKIPPS_PIN_POSITION                              0x0
#define _T1CKIPPS_PIN_SIZE                                  0x3
#define _T1CKIPPS_PIN_LENGTH                                0x3
#define _T1CKIPPS_PIN_MASK                                  0x7
#define _T1CKIPPS_PORT_POSN                                 0x3
#define _T1CKIPPS_PORT_POSITION                             0x3
#define _T1CKIPPS_PORT_SIZE                                 0x2
#define _T1CKIPPS_PORT_LENGTH                               0x2
#define _T1CKIPPS_PORT_MASK                                 0x18
#define _T1CKIPPS_T1CKIPPS_POSN                             0x0
#define _T1CKIPPS_T1CKIPPS_POSITION                         0x0
#define _T1CKIPPS_T1CKIPPS_SIZE                             0x5
#define _T1CKIPPS_T1CKIPPS_LENGTH                           0x5
#define _T1CKIPPS_T1CKIPPS_MASK                             0x1F
#define _T1CKIPPS_T1CKIPPS0_POSN                            0x0
#define _T1CKIPPS_T1CKIPPS0_POSITION                        0x0
#define _T1CKIPPS_T1CKIPPS0_SIZE                            0x1
#define _T1CKIPPS_T1CKIPPS0_LENGTH                          0x1
#define _T1CKIPPS_T1CKIPPS0_MASK                            0x1
#define _T1CKIPPS_T1CKIPPS1_POSN                            0x1
#define _T1CKIPPS_T1CKIPPS1_POSITION                        0x1
#define _T1CKIPPS_T1CKIPPS1_SIZE                            0x1
#define _T1CKIPPS_T1CKIPPS1_LENGTH                          0x1
#define _T1CKIPPS_T1CKIPPS1_MASK                            0x2
#define _T1CKIPPS_T1CKIPPS2_POSN                            0x2
#define _T1CKIPPS_T1CKIPPS2_POSITION                        0x2
#define _T1CKIPPS_T1CKIPPS2_SIZE                            0x1
#define _T1CKIPPS_T1CKIPPS2_LENGTH                          0x1
#define _T1CKIPPS_T1CKIPPS2_MASK                            0x4
#define _T1CKIPPS_T1CKIPPS3_POSN                            0x3
#define _T1CKIPPS_T1CKIPPS3_POSITION                        0x3
#define _T1CKIPPS_T1CKIPPS3_SIZE                            0x1
#define _T1CKIPPS_T1CKIPPS3_LENGTH                          0x1
#define _T1CKIPPS_T1CKIPPS3_MASK                            0x8
#define _T1CKIPPS_T1CKIPPS4_POSN                            0x4
#define _T1CKIPPS_T1CKIPPS4_POSITION                        0x4
#define _T1CKIPPS_T1CKIPPS4_SIZE                            0x1
#define _T1CKIPPS_T1CKIPPS4_LENGTH                          0x1
#define _T1CKIPPS_T1CKIPPS4_MASK                            0x10

// Register: T1GPPS
#define T1GPPS T1GPPS
extern volatile unsigned char           T1GPPS              __at(0x1E93);
#ifndef _LIB_BUILD
asm("T1GPPS equ 01E93h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned T1GPPS                 :5;
    };
    struct {
        unsigned T1GPPS0                :1;
        unsigned T1GPPS1                :1;
        unsigned T1GPPS2                :1;
        unsigned T1GPPS3                :1;
        unsigned T1GPPS4                :1;
    };
} T1GPPSbits_t;
extern volatile T1GPPSbits_t T1GPPSbits __at(0x1E93);
// bitfield macros
#define _T1GPPS_PIN_POSN                                    0x0
#define _T1GPPS_PIN_POSITION                                0x0
#define _T1GPPS_PIN_SIZE                                    0x3
#define _T1GPPS_PIN_LENGTH                                  0x3
#define _T1GPPS_PIN_MASK                                    0x7
#define _T1GPPS_PORT_POSN                                   0x3
#define _T1GPPS_PORT_POSITION                               0x3
#define _T1GPPS_PORT_SIZE                                   0x2
#define _T1GPPS_PORT_LENGTH                                 0x2
#define _T1GPPS_PORT_MASK                                   0x18
#define _T1GPPS_T1GPPS_POSN                                 0x0
#define _T1GPPS_T1GPPS_POSITION                             0x0
#define _T1GPPS_T1GPPS_SIZE                                 0x5
#define _T1GPPS_T1GPPS_LENGTH                               0x5
#define _T1GPPS_T1GPPS_MASK                                 0x1F
#define _T1GPPS_T1GPPS0_POSN                                0x0
#define _T1GPPS_T1GPPS0_POSITION                            0x0
#define _T1GPPS_T1GPPS0_SIZE                                0x1
#define _T1GPPS_T1GPPS0_LENGTH                              0x1
#define _T1GPPS_T1GPPS0_MASK                                0x1
#define _T1GPPS_T1GPPS1_POSN                                0x1
#define _T1GPPS_T1GPPS1_POSITION                            0x1
#define _T1GPPS_T1GPPS1_SIZE                                0x1
#define _T1GPPS_T1GPPS1_LENGTH                              0x1
#define _T1GPPS_T1GPPS1_MASK                                0x2
#define _T1GPPS_T1GPPS2_POSN                                0x2
#define _T1GPPS_T1GPPS2_POSITION                            0x2
#define _T1GPPS_T1GPPS2_SIZE                                0x1
#define _T1GPPS_T1GPPS2_LENGTH                              0x1
#define _T1GPPS_T1GPPS2_MASK                                0x4
#define _T1GPPS_T1GPPS3_POSN                                0x3
#define _T1GPPS_T1GPPS3_POSITION                            0x3
#define _T1GPPS_T1GPPS3_SIZE                                0x1
#define _T1GPPS_T1GPPS3_LENGTH                              0x1
#define _T1GPPS_T1GPPS3_MASK                                0x8
#define _T1GPPS_T1GPPS4_POSN                                0x4
#define _T1GPPS_T1GPPS4_POSITION                            0x4
#define _T1GPPS_T1GPPS4_SIZE                                0x1
#define _T1GPPS_T1GPPS4_LENGTH                              0x1
#define _T1GPPS_T1GPPS4_MASK                                0x10

// Register: T2INPPS
#define T2INPPS T2INPPS
extern volatile unsigned char           T2INPPS             __at(0x1E9C);
#ifndef _LIB_BUILD
asm("T2INPPS equ 01E9Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned T2INPPS                :5;
    };
    struct {
        unsigned T2INPPS0               :1;
        unsigned T2INPPS1               :1;
        unsigned T2INPPS2               :1;
        unsigned T2INPPS3               :1;
        unsigned T2INPPS4               :1;
    };
} T2INPPSbits_t;
extern volatile T2INPPSbits_t T2INPPSbits __at(0x1E9C);
// bitfield macros
#define _T2INPPS_PIN_POSN                                   0x0
#define _T2INPPS_PIN_POSITION                               0x0
#define _T2INPPS_PIN_SIZE                                   0x3
#define _T2INPPS_PIN_LENGTH                                 0x3
#define _T2INPPS_PIN_MASK                                   0x7
#define _T2INPPS_PORT_POSN                                  0x3
#define _T2INPPS_PORT_POSITION                              0x3
#define _T2INPPS_PORT_SIZE                                  0x2
#define _T2INPPS_PORT_LENGTH                                0x2
#define _T2INPPS_PORT_MASK                                  0x18
#define _T2INPPS_T2INPPS_POSN                               0x0
#define _T2INPPS_T2INPPS_POSITION                           0x0
#define _T2INPPS_T2INPPS_SIZE                               0x5
#define _T2INPPS_T2INPPS_LENGTH                             0x5
#define _T2INPPS_T2INPPS_MASK                               0x1F
#define _T2INPPS_T2INPPS0_POSN                              0x0
#define _T2INPPS_T2INPPS0_POSITION                          0x0
#define _T2INPPS_T2INPPS0_SIZE                              0x1
#define _T2INPPS_T2INPPS0_LENGTH                            0x1
#define _T2INPPS_T2INPPS0_MASK                              0x1
#define _T2INPPS_T2INPPS1_POSN                              0x1
#define _T2INPPS_T2INPPS1_POSITION                          0x1
#define _T2INPPS_T2INPPS1_SIZE                              0x1
#define _T2INPPS_T2INPPS1_LENGTH                            0x1
#define _T2INPPS_T2INPPS1_MASK                              0x2
#define _T2INPPS_T2INPPS2_POSN                              0x2
#define _T2INPPS_T2INPPS2_POSITION                          0x2
#define _T2INPPS_T2INPPS2_SIZE                              0x1
#define _T2INPPS_T2INPPS2_LENGTH                            0x1
#define _T2INPPS_T2INPPS2_MASK                              0x4
#define _T2INPPS_T2INPPS3_POSN                              0x3
#define _T2INPPS_T2INPPS3_POSITION                          0x3
#define _T2INPPS_T2INPPS3_SIZE                              0x1
#define _T2INPPS_T2INPPS3_LENGTH                            0x1
#define _T2INPPS_T2INPPS3_MASK                              0x8
#define _T2INPPS_T2INPPS4_POSN                              0x4
#define _T2INPPS_T2INPPS4_POSITION                          0x4
#define _T2INPPS_T2INPPS4_SIZE                              0x1
#define _T2INPPS_T2INPPS4_LENGTH                            0x1
#define _T2INPPS_T2INPPS4_MASK                              0x10

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
extern volatile unsigned char           CCP1PPS             __at(0x1EA1);
#ifndef _LIB_BUILD
asm("CCP1PPS equ 01EA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned CCP1PPS                :5;
    };
    struct {
        unsigned CCP1PPS0               :1;
        unsigned CCP1PPS1               :1;
        unsigned CCP1PPS2               :1;
        unsigned CCP1PPS3               :1;
        unsigned CCP1PPS4               :1;
    };
} CCP1PPSbits_t;
extern volatile CCP1PPSbits_t CCP1PPSbits __at(0x1EA1);
// bitfield macros
#define _CCP1PPS_PIN_POSN                                   0x0
#define _CCP1PPS_PIN_POSITION                               0x0
#define _CCP1PPS_PIN_SIZE                                   0x3
#define _CCP1PPS_PIN_LENGTH                                 0x3
#define _CCP1PPS_PIN_MASK                                   0x7
#define _CCP1PPS_PORT_POSN                                  0x3
#define _CCP1PPS_PORT_POSITION                              0x3
#define _CCP1PPS_PORT_SIZE                                  0x2
#define _CCP1PPS_PORT_LENGTH                                0x2
#define _CCP1PPS_PORT_MASK                                  0x18
#define _CCP1PPS_CCP1PPS_POSN                               0x0
#define _CCP1PPS_CCP1PPS_POSITION                           0x0
#define _CCP1PPS_CCP1PPS_SIZE                               0x5
#define _CCP1PPS_CCP1PPS_LENGTH                             0x5
#define _CCP1PPS_CCP1PPS_MASK                               0x1F
#define _CCP1PPS_CCP1PPS0_POSN                              0x0
#define _CCP1PPS_CCP1PPS0_POSITION                          0x0
#define _CCP1PPS_CCP1PPS0_SIZE                              0x1
#define _CCP1PPS_CCP1PPS0_LENGTH                            0x1
#define _CCP1PPS_CCP1PPS0_MASK                              0x1
#define _CCP1PPS_CCP1PPS1_POSN                              0x1
#define _CCP1PPS_CCP1PPS1_POSITION                          0x1
#define _CCP1PPS_CCP1PPS1_SIZE                              0x1
#define _CCP1PPS_CCP1PPS1_LENGTH                            0x1
#define _CCP1PPS_CCP1PPS1_MASK                              0x2
#define _CCP1PPS_CCP1PPS2_POSN                              0x2
#define _CCP1PPS_CCP1PPS2_POSITION                          0x2
#define _CCP1PPS_CCP1PPS2_SIZE                              0x1
#define _CCP1PPS_CCP1PPS2_LENGTH                            0x1
#define _CCP1PPS_CCP1PPS2_MASK                              0x4
#define _CCP1PPS_CCP1PPS3_POSN                              0x3
#define _CCP1PPS_CCP1PPS3_POSITION                          0x3
#define _CCP1PPS_CCP1PPS3_SIZE                              0x1
#define _CCP1PPS_CCP1PPS3_LENGTH                            0x1
#define _CCP1PPS_CCP1PPS3_MASK                              0x8
#define _CCP1PPS_CCP1PPS4_POSN                              0x4
#define _CCP1PPS_CCP1PPS4_POSITION                          0x4
#define _CCP1PPS_CCP1PPS4_SIZE                              0x1
#define _CCP1PPS_CCP1PPS4_LENGTH                            0x1
#define _CCP1PPS_CCP1PPS4_MASK                              0x10

// Register: CCP2PPS
#define CCP2PPS CCP2PPS
extern volatile unsigned char           CCP2PPS             __at(0x1EA2);
#ifndef _LIB_BUILD
asm("CCP2PPS equ 01EA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned CCP2PPS                :5;
    };
    struct {
        unsigned CCP2PPS0               :1;
        unsigned CCP2PPS1               :1;
        unsigned CCP2PPS2               :1;
        unsigned CCP2PPS3               :1;
        unsigned CCP2PPS4               :1;
    };
} CCP2PPSbits_t;
extern volatile CCP2PPSbits_t CCP2PPSbits __at(0x1EA2);
// bitfield macros
#define _CCP2PPS_PIN_POSN                                   0x0
#define _CCP2PPS_PIN_POSITION                               0x0
#define _CCP2PPS_PIN_SIZE                                   0x3
#define _CCP2PPS_PIN_LENGTH                                 0x3
#define _CCP2PPS_PIN_MASK                                   0x7
#define _CCP2PPS_PORT_POSN                                  0x3
#define _CCP2PPS_PORT_POSITION                              0x3
#define _CCP2PPS_PORT_SIZE                                  0x2
#define _CCP2PPS_PORT_LENGTH                                0x2
#define _CCP2PPS_PORT_MASK                                  0x18
#define _CCP2PPS_CCP2PPS_POSN                               0x0
#define _CCP2PPS_CCP2PPS_POSITION                           0x0
#define _CCP2PPS_CCP2PPS_SIZE                               0x5
#define _CCP2PPS_CCP2PPS_LENGTH                             0x5
#define _CCP2PPS_CCP2PPS_MASK                               0x1F
#define _CCP2PPS_CCP2PPS0_POSN                              0x0
#define _CCP2PPS_CCP2PPS0_POSITION                          0x0
#define _CCP2PPS_CCP2PPS0_SIZE                              0x1
#define _CCP2PPS_CCP2PPS0_LENGTH                            0x1
#define _CCP2PPS_CCP2PPS0_MASK                              0x1
#define _CCP2PPS_CCP2PPS1_POSN                              0x1
#define _CCP2PPS_CCP2PPS1_POSITION                          0x1
#define _CCP2PPS_CCP2PPS1_SIZE                              0x1
#define _CCP2PPS_CCP2PPS1_LENGTH                            0x1
#define _CCP2PPS_CCP2PPS1_MASK                              0x2
#define _CCP2PPS_CCP2PPS2_POSN                              0x2
#define _CCP2PPS_CCP2PPS2_POSITION                          0x2
#define _CCP2PPS_CCP2PPS2_SIZE                              0x1
#define _CCP2PPS_CCP2PPS2_LENGTH                            0x1
#define _CCP2PPS_CCP2PPS2_MASK                              0x4
#define _CCP2PPS_CCP2PPS3_POSN                              0x3
#define _CCP2PPS_CCP2PPS3_POSITION                          0x3
#define _CCP2PPS_CCP2PPS3_SIZE                              0x1
#define _CCP2PPS_CCP2PPS3_LENGTH                            0x1
#define _CCP2PPS_CCP2PPS3_MASK                              0x8
#define _CCP2PPS_CCP2PPS4_POSN                              0x4
#define _CCP2PPS_CCP2PPS4_POSITION                          0x4
#define _CCP2PPS_CCP2PPS4_SIZE                              0x1
#define _CCP2PPS_CCP2PPS4_LENGTH                            0x1
#define _CCP2PPS_CCP2PPS4_MASK                              0x10

// Register: ADACTPPS
#define ADACTPPS ADACTPPS
extern volatile unsigned char           ADACTPPS            __at(0x1EC3);
#ifndef _LIB_BUILD
asm("ADACTPPS equ 01EC3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned ADACTPPS               :5;
    };
    struct {
        unsigned ADACTPPS0              :1;
        unsigned ADACTPPS1              :1;
        unsigned ADACTPPS2              :1;
        unsigned ADACTPPS3              :1;
        unsigned ADACTPPS4              :1;
    };
} ADACTPPSbits_t;
extern volatile ADACTPPSbits_t ADACTPPSbits __at(0x1EC3);
// bitfield macros
#define _ADACTPPS_PIN_POSN                                  0x0
#define _ADACTPPS_PIN_POSITION                              0x0
#define _ADACTPPS_PIN_SIZE                                  0x3
#define _ADACTPPS_PIN_LENGTH                                0x3
#define _ADACTPPS_PIN_MASK                                  0x7
#define _ADACTPPS_PORT_POSN                                 0x3
#define _ADACTPPS_PORT_POSITION                             0x3
#define _ADACTPPS_PORT_SIZE                                 0x2
#define _ADACTPPS_PORT_LENGTH                               0x2
#define _ADACTPPS_PORT_MASK                                 0x18
#define _ADACTPPS_ADACTPPS_POSN                             0x0
#define _ADACTPPS_ADACTPPS_POSITION                         0x0
#define _ADACTPPS_ADACTPPS_SIZE                             0x5
#define _ADACTPPS_ADACTPPS_LENGTH                           0x5
#define _ADACTPPS_ADACTPPS_MASK                             0x1F
#define _ADACTPPS_ADACTPPS0_POSN                            0x0
#define _ADACTPPS_ADACTPPS0_POSITION                        0x0
#define _ADACTPPS_ADACTPPS0_SIZE                            0x1
#define _ADACTPPS_ADACTPPS0_LENGTH                          0x1
#define _ADACTPPS_ADACTPPS0_MASK                            0x1
#define _ADACTPPS_ADACTPPS1_POSN                            0x1
#define _ADACTPPS_ADACTPPS1_POSITION                        0x1
#define _ADACTPPS_ADACTPPS1_SIZE                            0x1
#define _ADACTPPS_ADACTPPS1_LENGTH                          0x1
#define _ADACTPPS_ADACTPPS1_MASK                            0x2
#define _ADACTPPS_ADACTPPS2_POSN                            0x2
#define _ADACTPPS_ADACTPPS2_POSITION                        0x2
#define _ADACTPPS_ADACTPPS2_SIZE                            0x1
#define _ADACTPPS_ADACTPPS2_LENGTH                          0x1
#define _ADACTPPS_ADACTPPS2_MASK                            0x4
#define _ADACTPPS_ADACTPPS3_POSN                            0x3
#define _ADACTPPS_ADACTPPS3_POSITION                        0x3
#define _ADACTPPS_ADACTPPS3_SIZE                            0x1
#define _ADACTPPS_ADACTPPS3_LENGTH                          0x1
#define _ADACTPPS_ADACTPPS3_MASK                            0x8
#define _ADACTPPS_ADACTPPS4_POSN                            0x4
#define _ADACTPPS_ADACTPPS4_POSITION                        0x4
#define _ADACTPPS_ADACTPPS4_SIZE                            0x1
#define _ADACTPPS_ADACTPPS4_LENGTH                          0x1
#define _ADACTPPS_ADACTPPS4_MASK                            0x10

// Register: SSP1CLKPPS
#define SSP1CLKPPS SSP1CLKPPS
extern volatile unsigned char           SSP1CLKPPS          __at(0x1EC5);
#ifndef _LIB_BUILD
asm("SSP1CLKPPS equ 01EC5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned SSP1CLKPPS             :5;
    };
    struct {
        unsigned SSP1CLKPPS0            :1;
        unsigned SSP1CLKPPS1            :1;
        unsigned SSP1CLKPPS2            :1;
        unsigned SSP1CLKPPS3            :1;
        unsigned SSP1CLKPPS4            :1;
    };
} SSP1CLKPPSbits_t;
extern volatile SSP1CLKPPSbits_t SSP1CLKPPSbits __at(0x1EC5);
// bitfield macros
#define _SSP1CLKPPS_PIN_POSN                                0x0
#define _SSP1CLKPPS_PIN_POSITION                            0x0
#define _SSP1CLKPPS_PIN_SIZE                                0x3
#define _SSP1CLKPPS_PIN_LENGTH                              0x3
#define _SSP1CLKPPS_PIN_MASK                                0x7
#define _SSP1CLKPPS_PORT_POSN                               0x3
#define _SSP1CLKPPS_PORT_POSITION                           0x3
#define _SSP1CLKPPS_PORT_SIZE                               0x2
#define _SSP1CLKPPS_PORT_LENGTH                             0x2
#define _SSP1CLKPPS_PORT_MASK                               0x18
#define _SSP1CLKPPS_SSP1CLKPPS_POSN                         0x0
#define _SSP1CLKPPS_SSP1CLKPPS_POSITION                     0x0
#define _SSP1CLKPPS_SSP1CLKPPS_SIZE                         0x5
#define _SSP1CLKPPS_SSP1CLKPPS_LENGTH                       0x5
#define _SSP1CLKPPS_SSP1CLKPPS_MASK                         0x1F
#define _SSP1CLKPPS_SSP1CLKPPS0_POSN                        0x0
#define _SSP1CLKPPS_SSP1CLKPPS0_POSITION                    0x0
#define _SSP1CLKPPS_SSP1CLKPPS0_SIZE                        0x1
#define _SSP1CLKPPS_SSP1CLKPPS0_LENGTH                      0x1
#define _SSP1CLKPPS_SSP1CLKPPS0_MASK                        0x1
#define _SSP1CLKPPS_SSP1CLKPPS1_POSN                        0x1
#define _SSP1CLKPPS_SSP1CLKPPS1_POSITION                    0x1
#define _SSP1CLKPPS_SSP1CLKPPS1_SIZE                        0x1
#define _SSP1CLKPPS_SSP1CLKPPS1_LENGTH                      0x1
#define _SSP1CLKPPS_SSP1CLKPPS1_MASK                        0x2
#define _SSP1CLKPPS_SSP1CLKPPS2_POSN                        0x2
#define _SSP1CLKPPS_SSP1CLKPPS2_POSITION                    0x2
#define _SSP1CLKPPS_SSP1CLKPPS2_SIZE                        0x1
#define _SSP1CLKPPS_SSP1CLKPPS2_LENGTH                      0x1
#define _SSP1CLKPPS_SSP1CLKPPS2_MASK                        0x4
#define _SSP1CLKPPS_SSP1CLKPPS3_POSN                        0x3
#define _SSP1CLKPPS_SSP1CLKPPS3_POSITION                    0x3
#define _SSP1CLKPPS_SSP1CLKPPS3_SIZE                        0x1
#define _SSP1CLKPPS_SSP1CLKPPS3_LENGTH                      0x1
#define _SSP1CLKPPS_SSP1CLKPPS3_MASK                        0x8
#define _SSP1CLKPPS_SSP1CLKPPS4_POSN                        0x4
#define _SSP1CLKPPS_SSP1CLKPPS4_POSITION                    0x4
#define _SSP1CLKPPS_SSP1CLKPPS4_SIZE                        0x1
#define _SSP1CLKPPS_SSP1CLKPPS4_LENGTH                      0x1
#define _SSP1CLKPPS_SSP1CLKPPS4_MASK                        0x10

// Register: SSP1DATPPS
#define SSP1DATPPS SSP1DATPPS
extern volatile unsigned char           SSP1DATPPS          __at(0x1EC6);
#ifndef _LIB_BUILD
asm("SSP1DATPPS equ 01EC6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned SSP1DATPPS             :5;
    };
    struct {
        unsigned SSP1DATPPS0            :1;
        unsigned SSP1DATPPS1            :1;
        unsigned SSP1DATPPS2            :1;
        unsigned SSP1DATPPS3            :1;
        unsigned SSP1DATPPS4            :1;
    };
} SSP1DATPPSbits_t;
extern volatile SSP1DATPPSbits_t SSP1DATPPSbits __at(0x1EC6);
// bitfield macros
#define _SSP1DATPPS_PIN_POSN                                0x0
#define _SSP1DATPPS_PIN_POSITION                            0x0
#define _SSP1DATPPS_PIN_SIZE                                0x3
#define _SSP1DATPPS_PIN_LENGTH                              0x3
#define _SSP1DATPPS_PIN_MASK                                0x7
#define _SSP1DATPPS_PORT_POSN                               0x3
#define _SSP1DATPPS_PORT_POSITION                           0x3
#define _SSP1DATPPS_PORT_SIZE                               0x2
#define _SSP1DATPPS_PORT_LENGTH                             0x2
#define _SSP1DATPPS_PORT_MASK                               0x18
#define _SSP1DATPPS_SSP1DATPPS_POSN                         0x0
#define _SSP1DATPPS_SSP1DATPPS_POSITION                     0x0
#define _SSP1DATPPS_SSP1DATPPS_SIZE                         0x5
#define _SSP1DATPPS_SSP1DATPPS_LENGTH                       0x5
#define _SSP1DATPPS_SSP1DATPPS_MASK                         0x1F
#define _SSP1DATPPS_SSP1DATPPS0_POSN                        0x0
#define _SSP1DATPPS_SSP1DATPPS0_POSITION                    0x0
#define _SSP1DATPPS_SSP1DATPPS0_SIZE                        0x1
#define _SSP1DATPPS_SSP1DATPPS0_LENGTH                      0x1
#define _SSP1DATPPS_SSP1DATPPS0_MASK                        0x1
#define _SSP1DATPPS_SSP1DATPPS1_POSN                        0x1
#define _SSP1DATPPS_SSP1DATPPS1_POSITION                    0x1
#define _SSP1DATPPS_SSP1DATPPS1_SIZE                        0x1
#define _SSP1DATPPS_SSP1DATPPS1_LENGTH                      0x1
#define _SSP1DATPPS_SSP1DATPPS1_MASK                        0x2
#define _SSP1DATPPS_SSP1DATPPS2_POSN                        0x2
#define _SSP1DATPPS_SSP1DATPPS2_POSITION                    0x2
#define _SSP1DATPPS_SSP1DATPPS2_SIZE                        0x1
#define _SSP1DATPPS_SSP1DATPPS2_LENGTH                      0x1
#define _SSP1DATPPS_SSP1DATPPS2_MASK                        0x4
#define _SSP1DATPPS_SSP1DATPPS3_POSN                        0x3
#define _SSP1DATPPS_SSP1DATPPS3_POSITION                    0x3
#define _SSP1DATPPS_SSP1DATPPS3_SIZE                        0x1
#define _SSP1DATPPS_SSP1DATPPS3_LENGTH                      0x1
#define _SSP1DATPPS_SSP1DATPPS3_MASK                        0x8
#define _SSP1DATPPS_SSP1DATPPS4_POSN                        0x4
#define _SSP1DATPPS_SSP1DATPPS4_POSITION                    0x4
#define _SSP1DATPPS_SSP1DATPPS4_SIZE                        0x1
#define _SSP1DATPPS_SSP1DATPPS4_LENGTH                      0x1
#define _SSP1DATPPS_SSP1DATPPS4_MASK                        0x10

// Register: SSP1SSPPS
#define SSP1SSPPS SSP1SSPPS
extern volatile unsigned char           SSP1SSPPS           __at(0x1EC7);
#ifndef _LIB_BUILD
asm("SSP1SSPPS equ 01EC7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned SSP1SSPPS              :5;
    };
    struct {
        unsigned SSP1SSPPS0             :1;
        unsigned SSP1SSPPS1             :1;
        unsigned SSP1SSPPS2             :1;
        unsigned SSP1SSPPS3             :1;
        unsigned SSP1SSPPS4             :1;
    };
} SSP1SSPPSbits_t;
extern volatile SSP1SSPPSbits_t SSP1SSPPSbits __at(0x1EC7);
// bitfield macros
#define _SSP1SSPPS_PIN_POSN                                 0x0
#define _SSP1SSPPS_PIN_POSITION                             0x0
#define _SSP1SSPPS_PIN_SIZE                                 0x3
#define _SSP1SSPPS_PIN_LENGTH                               0x3
#define _SSP1SSPPS_PIN_MASK                                 0x7
#define _SSP1SSPPS_PORT_POSN                                0x3
#define _SSP1SSPPS_PORT_POSITION                            0x3
#define _SSP1SSPPS_PORT_SIZE                                0x2
#define _SSP1SSPPS_PORT_LENGTH                              0x2
#define _SSP1SSPPS_PORT_MASK                                0x18
#define _SSP1SSPPS_SSP1SSPPS_POSN                           0x0
#define _SSP1SSPPS_SSP1SSPPS_POSITION                       0x0
#define _SSP1SSPPS_SSP1SSPPS_SIZE                           0x5
#define _SSP1SSPPS_SSP1SSPPS_LENGTH                         0x5
#define _SSP1SSPPS_SSP1SSPPS_MASK                           0x1F
#define _SSP1SSPPS_SSP1SSPPS0_POSN                          0x0
#define _SSP1SSPPS_SSP1SSPPS0_POSITION                      0x0
#define _SSP1SSPPS_SSP1SSPPS0_SIZE                          0x1
#define _SSP1SSPPS_SSP1SSPPS0_LENGTH                        0x1
#define _SSP1SSPPS_SSP1SSPPS0_MASK                          0x1
#define _SSP1SSPPS_SSP1SSPPS1_POSN                          0x1
#define _SSP1SSPPS_SSP1SSPPS1_POSITION                      0x1
#define _SSP1SSPPS_SSP1SSPPS1_SIZE                          0x1
#define _SSP1SSPPS_SSP1SSPPS1_LENGTH                        0x1
#define _SSP1SSPPS_SSP1SSPPS1_MASK                          0x2
#define _SSP1SSPPS_SSP1SSPPS2_POSN                          0x2
#define _SSP1SSPPS_SSP1SSPPS2_POSITION                      0x2
#define _SSP1SSPPS_SSP1SSPPS2_SIZE                          0x1
#define _SSP1SSPPS_SSP1SSPPS2_LENGTH                        0x1
#define _SSP1SSPPS_SSP1SSPPS2_MASK                          0x4
#define _SSP1SSPPS_SSP1SSPPS3_POSN                          0x3
#define _SSP1SSPPS_SSP1SSPPS3_POSITION                      0x3
#define _SSP1SSPPS_SSP1SSPPS3_SIZE                          0x1
#define _SSP1SSPPS_SSP1SSPPS3_LENGTH                        0x1
#define _SSP1SSPPS_SSP1SSPPS3_MASK                          0x8
#define _SSP1SSPPS_SSP1SSPPS4_POSN                          0x4
#define _SSP1SSPPS_SSP1SSPPS4_POSITION                      0x4
#define _SSP1SSPPS_SSP1SSPPS4_SIZE                          0x1
#define _SSP1SSPPS_SSP1SSPPS4_LENGTH                        0x1
#define _SSP1SSPPS_SSP1SSPPS4_MASK                          0x10

// Register: RX1PPS
#define RX1PPS RX1PPS
extern volatile unsigned char           RX1PPS              __at(0x1ECB);
#ifndef _LIB_BUILD
asm("RX1PPS equ 01ECBh");
#endif
// aliases
extern volatile unsigned char           RX1DTPPS            __at(0x1ECB);
#ifndef _LIB_BUILD
asm("RX1DTPPS equ 01ECBh");
#endif
extern volatile unsigned char           RXPPS               __at(0x1ECB);
#ifndef _LIB_BUILD
asm("RXPPS equ 01ECBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned RX1DTPPS               :5;
    };
    struct {
        unsigned RX1DTPPS0              :1;
        unsigned RX1DTPPS1              :1;
        unsigned RX1DTPPS2              :1;
        unsigned RX1DTPPS3              :1;
        unsigned RX1DTPPS4              :1;
    };
} RX1PPSbits_t;
extern volatile RX1PPSbits_t RX1PPSbits __at(0x1ECB);
// bitfield macros
#define _RX1PPS_PIN_POSN                                    0x0
#define _RX1PPS_PIN_POSITION                                0x0
#define _RX1PPS_PIN_SIZE                                    0x3
#define _RX1PPS_PIN_LENGTH                                  0x3
#define _RX1PPS_PIN_MASK                                    0x7
#define _RX1PPS_PORT_POSN                                   0x3
#define _RX1PPS_PORT_POSITION                               0x3
#define _RX1PPS_PORT_SIZE                                   0x2
#define _RX1PPS_PORT_LENGTH                                 0x2
#define _RX1PPS_PORT_MASK                                   0x18
#define _RX1PPS_RX1DTPPS_POSN                               0x0
#define _RX1PPS_RX1DTPPS_POSITION                           0x0
#define _RX1PPS_RX1DTPPS_SIZE                               0x5
#define _RX1PPS_RX1DTPPS_LENGTH                             0x5
#define _RX1PPS_RX1DTPPS_MASK                               0x1F
#define _RX1PPS_RX1DTPPS0_POSN                              0x0
#define _RX1PPS_RX1DTPPS0_POSITION                          0x0
#define _RX1PPS_RX1DTPPS0_SIZE                              0x1
#define _RX1PPS_RX1DTPPS0_LENGTH                            0x1
#define _RX1PPS_RX1DTPPS0_MASK                              0x1
#define _RX1PPS_RX1DTPPS1_POSN                              0x1
#define _RX1PPS_RX1DTPPS1_POSITION                          0x1
#define _RX1PPS_RX1DTPPS1_SIZE                              0x1
#define _RX1PPS_RX1DTPPS1_LENGTH                            0x1
#define _RX1PPS_RX1DTPPS1_MASK                              0x2
#define _RX1PPS_RX1DTPPS2_POSN                              0x2
#define _RX1PPS_RX1DTPPS2_POSITION                          0x2
#define _RX1PPS_RX1DTPPS2_SIZE                              0x1
#define _RX1PPS_RX1DTPPS2_LENGTH                            0x1
#define _RX1PPS_RX1DTPPS2_MASK                              0x4
#define _RX1PPS_RX1DTPPS3_POSN                              0x3
#define _RX1PPS_RX1DTPPS3_POSITION                          0x3
#define _RX1PPS_RX1DTPPS3_SIZE                              0x1
#define _RX1PPS_RX1DTPPS3_LENGTH                            0x1
#define _RX1PPS_RX1DTPPS3_MASK                              0x8
#define _RX1PPS_RX1DTPPS4_POSN                              0x4
#define _RX1PPS_RX1DTPPS4_POSITION                          0x4
#define _RX1PPS_RX1DTPPS4_SIZE                              0x1
#define _RX1PPS_RX1DTPPS4_LENGTH                            0x1
#define _RX1PPS_RX1DTPPS4_MASK                              0x10
// alias bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned RX1DTPPS               :5;
    };
    struct {
        unsigned RX1DTPPS0              :1;
        unsigned RX1DTPPS1              :1;
        unsigned RX1DTPPS2              :1;
        unsigned RX1DTPPS3              :1;
        unsigned RX1DTPPS4              :1;
    };
} RX1DTPPSbits_t;
extern volatile RX1DTPPSbits_t RX1DTPPSbits __at(0x1ECB);
// bitfield macros
#define _RX1DTPPS_PIN_POSN                                  0x0
#define _RX1DTPPS_PIN_POSITION                              0x0
#define _RX1DTPPS_PIN_SIZE                                  0x3
#define _RX1DTPPS_PIN_LENGTH                                0x3
#define _RX1DTPPS_PIN_MASK                                  0x7
#define _RX1DTPPS_PORT_POSN                                 0x3
#define _RX1DTPPS_PORT_POSITION                             0x3
#define _RX1DTPPS_PORT_SIZE                                 0x2
#define _RX1DTPPS_PORT_LENGTH                               0x2
#define _RX1DTPPS_PORT_MASK                                 0x18
#define _RX1DTPPS_RX1DTPPS_POSN                             0x0
#define _RX1DTPPS_RX1DTPPS_POSITION                         0x0
#define _RX1DTPPS_RX1DTPPS_SIZE                             0x5
#define _RX1DTPPS_RX1DTPPS_LENGTH                           0x5
#define _RX1DTPPS_RX1DTPPS_MASK                             0x1F
#define _RX1DTPPS_RX1DTPPS0_POSN                            0x0
#define _RX1DTPPS_RX1DTPPS0_POSITION                        0x0
#define _RX1DTPPS_RX1DTPPS0_SIZE                            0x1
#define _RX1DTPPS_RX1DTPPS0_LENGTH                          0x1
#define _RX1DTPPS_RX1DTPPS0_MASK                            0x1
#define _RX1DTPPS_RX1DTPPS1_POSN                            0x1
#define _RX1DTPPS_RX1DTPPS1_POSITION                        0x1
#define _RX1DTPPS_RX1DTPPS1_SIZE                            0x1
#define _RX1DTPPS_RX1DTPPS1_LENGTH                          0x1
#define _RX1DTPPS_RX1DTPPS1_MASK                            0x2
#define _RX1DTPPS_RX1DTPPS2_POSN                            0x2
#define _RX1DTPPS_RX1DTPPS2_POSITION                        0x2
#define _RX1DTPPS_RX1DTPPS2_SIZE                            0x1
#define _RX1DTPPS_RX1DTPPS2_LENGTH                          0x1
#define _RX1DTPPS_RX1DTPPS2_MASK                            0x4
#define _RX1DTPPS_RX1DTPPS3_POSN                            0x3
#define _RX1DTPPS_RX1DTPPS3_POSITION                        0x3
#define _RX1DTPPS_RX1DTPPS3_SIZE                            0x1
#define _RX1DTPPS_RX1DTPPS3_LENGTH                          0x1
#define _RX1DTPPS_RX1DTPPS3_MASK                            0x8
#define _RX1DTPPS_RX1DTPPS4_POSN                            0x4
#define _RX1DTPPS_RX1DTPPS4_POSITION                        0x4
#define _RX1DTPPS_RX1DTPPS4_SIZE                            0x1
#define _RX1DTPPS_RX1DTPPS4_LENGTH                          0x1
#define _RX1DTPPS_RX1DTPPS4_MASK                            0x10
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned RX1DTPPS               :5;
    };
    struct {
        unsigned RX1DTPPS0              :1;
        unsigned RX1DTPPS1              :1;
        unsigned RX1DTPPS2              :1;
        unsigned RX1DTPPS3              :1;
        unsigned RX1DTPPS4              :1;
    };
} RXPPSbits_t;
extern volatile RXPPSbits_t RXPPSbits __at(0x1ECB);
// bitfield macros
#define _RXPPS_PIN_POSN                                     0x0
#define _RXPPS_PIN_POSITION                                 0x0
#define _RXPPS_PIN_SIZE                                     0x3
#define _RXPPS_PIN_LENGTH                                   0x3
#define _RXPPS_PIN_MASK                                     0x7
#define _RXPPS_PORT_POSN                                    0x3
#define _RXPPS_PORT_POSITION                                0x3
#define _RXPPS_PORT_SIZE                                    0x2
#define _RXPPS_PORT_LENGTH                                  0x2
#define _RXPPS_PORT_MASK                                    0x18
#define _RXPPS_RX1DTPPS_POSN                                0x0
#define _RXPPS_RX1DTPPS_POSITION                            0x0
#define _RXPPS_RX1DTPPS_SIZE                                0x5
#define _RXPPS_RX1DTPPS_LENGTH                              0x5
#define _RXPPS_RX1DTPPS_MASK                                0x1F
#define _RXPPS_RX1DTPPS0_POSN                               0x0
#define _RXPPS_RX1DTPPS0_POSITION                           0x0
#define _RXPPS_RX1DTPPS0_SIZE                               0x1
#define _RXPPS_RX1DTPPS0_LENGTH                             0x1
#define _RXPPS_RX1DTPPS0_MASK                               0x1
#define _RXPPS_RX1DTPPS1_POSN                               0x1
#define _RXPPS_RX1DTPPS1_POSITION                           0x1
#define _RXPPS_RX1DTPPS1_SIZE                               0x1
#define _RXPPS_RX1DTPPS1_LENGTH                             0x1
#define _RXPPS_RX1DTPPS1_MASK                               0x2
#define _RXPPS_RX1DTPPS2_POSN                               0x2
#define _RXPPS_RX1DTPPS2_POSITION                           0x2
#define _RXPPS_RX1DTPPS2_SIZE                               0x1
#define _RXPPS_RX1DTPPS2_LENGTH                             0x1
#define _RXPPS_RX1DTPPS2_MASK                               0x4
#define _RXPPS_RX1DTPPS3_POSN                               0x3
#define _RXPPS_RX1DTPPS3_POSITION                           0x3
#define _RXPPS_RX1DTPPS3_SIZE                               0x1
#define _RXPPS_RX1DTPPS3_LENGTH                             0x1
#define _RXPPS_RX1DTPPS3_MASK                               0x8
#define _RXPPS_RX1DTPPS4_POSN                               0x4
#define _RXPPS_RX1DTPPS4_POSITION                           0x4
#define _RXPPS_RX1DTPPS4_SIZE                               0x1
#define _RXPPS_RX1DTPPS4_LENGTH                             0x1
#define _RXPPS_RX1DTPPS4_MASK                               0x10

// Register: CK1PPS
#define CK1PPS CK1PPS
extern volatile unsigned char           CK1PPS              __at(0x1ECC);
#ifndef _LIB_BUILD
asm("CK1PPS equ 01ECCh");
#endif
// aliases
extern volatile unsigned char           TX1CKPPS            __at(0x1ECC);
#ifndef _LIB_BUILD
asm("TX1CKPPS equ 01ECCh");
#endif
extern volatile unsigned char           CKPPS               __at(0x1ECC);
#ifndef _LIB_BUILD
asm("CKPPS equ 01ECCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned TX1CKPPS               :5;
    };
    struct {
        unsigned TX1CKPPS0              :1;
        unsigned TX1CKPPS1              :1;
        unsigned TX1CKPPS2              :1;
        unsigned TX1CKPPS3              :1;
        unsigned TX1CKPPS4              :1;
    };
} CK1PPSbits_t;
extern volatile CK1PPSbits_t CK1PPSbits __at(0x1ECC);
// bitfield macros
#define _CK1PPS_PIN_POSN                                    0x0
#define _CK1PPS_PIN_POSITION                                0x0
#define _CK1PPS_PIN_SIZE                                    0x3
#define _CK1PPS_PIN_LENGTH                                  0x3
#define _CK1PPS_PIN_MASK                                    0x7
#define _CK1PPS_PORT_POSN                                   0x3
#define _CK1PPS_PORT_POSITION                               0x3
#define _CK1PPS_PORT_SIZE                                   0x2
#define _CK1PPS_PORT_LENGTH                                 0x2
#define _CK1PPS_PORT_MASK                                   0x18
#define _CK1PPS_TX1CKPPS_POSN                               0x0
#define _CK1PPS_TX1CKPPS_POSITION                           0x0
#define _CK1PPS_TX1CKPPS_SIZE                               0x5
#define _CK1PPS_TX1CKPPS_LENGTH                             0x5
#define _CK1PPS_TX1CKPPS_MASK                               0x1F
#define _CK1PPS_TX1CKPPS0_POSN                              0x0
#define _CK1PPS_TX1CKPPS0_POSITION                          0x0
#define _CK1PPS_TX1CKPPS0_SIZE                              0x1
#define _CK1PPS_TX1CKPPS0_LENGTH                            0x1
#define _CK1PPS_TX1CKPPS0_MASK                              0x1
#define _CK1PPS_TX1CKPPS1_POSN                              0x1
#define _CK1PPS_TX1CKPPS1_POSITION                          0x1
#define _CK1PPS_TX1CKPPS1_SIZE                              0x1
#define _CK1PPS_TX1CKPPS1_LENGTH                            0x1
#define _CK1PPS_TX1CKPPS1_MASK                              0x2
#define _CK1PPS_TX1CKPPS2_POSN                              0x2
#define _CK1PPS_TX1CKPPS2_POSITION                          0x2
#define _CK1PPS_TX1CKPPS2_SIZE                              0x1
#define _CK1PPS_TX1CKPPS2_LENGTH                            0x1
#define _CK1PPS_TX1CKPPS2_MASK                              0x4
#define _CK1PPS_TX1CKPPS3_POSN                              0x3
#define _CK1PPS_TX1CKPPS3_POSITION                          0x3
#define _CK1PPS_TX1CKPPS3_SIZE                              0x1
#define _CK1PPS_TX1CKPPS3_LENGTH                            0x1
#define _CK1PPS_TX1CKPPS3_MASK                              0x8
#define _CK1PPS_TX1CKPPS4_POSN                              0x4
#define _CK1PPS_TX1CKPPS4_POSITION                          0x4
#define _CK1PPS_TX1CKPPS4_SIZE                              0x1
#define _CK1PPS_TX1CKPPS4_LENGTH                            0x1
#define _CK1PPS_TX1CKPPS4_MASK                              0x10
// alias bitfield definitions
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned TX1CKPPS               :5;
    };
    struct {
        unsigned TX1CKPPS0              :1;
        unsigned TX1CKPPS1              :1;
        unsigned TX1CKPPS2              :1;
        unsigned TX1CKPPS3              :1;
        unsigned TX1CKPPS4              :1;
    };
} TX1CKPPSbits_t;
extern volatile TX1CKPPSbits_t TX1CKPPSbits __at(0x1ECC);
// bitfield macros
#define _TX1CKPPS_PIN_POSN                                  0x0
#define _TX1CKPPS_PIN_POSITION                              0x0
#define _TX1CKPPS_PIN_SIZE                                  0x3
#define _TX1CKPPS_PIN_LENGTH                                0x3
#define _TX1CKPPS_PIN_MASK                                  0x7
#define _TX1CKPPS_PORT_POSN                                 0x3
#define _TX1CKPPS_PORT_POSITION                             0x3
#define _TX1CKPPS_PORT_SIZE                                 0x2
#define _TX1CKPPS_PORT_LENGTH                               0x2
#define _TX1CKPPS_PORT_MASK                                 0x18
#define _TX1CKPPS_TX1CKPPS_POSN                             0x0
#define _TX1CKPPS_TX1CKPPS_POSITION                         0x0
#define _TX1CKPPS_TX1CKPPS_SIZE                             0x5
#define _TX1CKPPS_TX1CKPPS_LENGTH                           0x5
#define _TX1CKPPS_TX1CKPPS_MASK                             0x1F
#define _TX1CKPPS_TX1CKPPS0_POSN                            0x0
#define _TX1CKPPS_TX1CKPPS0_POSITION                        0x0
#define _TX1CKPPS_TX1CKPPS0_SIZE                            0x1
#define _TX1CKPPS_TX1CKPPS0_LENGTH                          0x1
#define _TX1CKPPS_TX1CKPPS0_MASK                            0x1
#define _TX1CKPPS_TX1CKPPS1_POSN                            0x1
#define _TX1CKPPS_TX1CKPPS1_POSITION                        0x1
#define _TX1CKPPS_TX1CKPPS1_SIZE                            0x1
#define _TX1CKPPS_TX1CKPPS1_LENGTH                          0x1
#define _TX1CKPPS_TX1CKPPS1_MASK                            0x2
#define _TX1CKPPS_TX1CKPPS2_POSN                            0x2
#define _TX1CKPPS_TX1CKPPS2_POSITION                        0x2
#define _TX1CKPPS_TX1CKPPS2_SIZE                            0x1
#define _TX1CKPPS_TX1CKPPS2_LENGTH                          0x1
#define _TX1CKPPS_TX1CKPPS2_MASK                            0x4
#define _TX1CKPPS_TX1CKPPS3_POSN                            0x3
#define _TX1CKPPS_TX1CKPPS3_POSITION                        0x3
#define _TX1CKPPS_TX1CKPPS3_SIZE                            0x1
#define _TX1CKPPS_TX1CKPPS3_LENGTH                          0x1
#define _TX1CKPPS_TX1CKPPS3_MASK                            0x8
#define _TX1CKPPS_TX1CKPPS4_POSN                            0x4
#define _TX1CKPPS_TX1CKPPS4_POSITION                        0x4
#define _TX1CKPPS_TX1CKPPS4_SIZE                            0x1
#define _TX1CKPPS_TX1CKPPS4_LENGTH                          0x1
#define _TX1CKPPS_TX1CKPPS4_MASK                            0x10
typedef union {
    struct {
        unsigned PIN                    :3;
        unsigned PORT                   :2;
    };
    struct {
        unsigned TX1CKPPS               :5;
    };
    struct {
        unsigned TX1CKPPS0              :1;
        unsigned TX1CKPPS1              :1;
        unsigned TX1CKPPS2              :1;
        unsigned TX1CKPPS3              :1;
        unsigned TX1CKPPS4              :1;
    };
} CKPPSbits_t;
extern volatile CKPPSbits_t CKPPSbits __at(0x1ECC);
// bitfield macros
#define _CKPPS_PIN_POSN                                     0x0
#define _CKPPS_PIN_POSITION                                 0x0
#define _CKPPS_PIN_SIZE                                     0x3
#define _CKPPS_PIN_LENGTH                                   0x3
#define _CKPPS_PIN_MASK                                     0x7
#define _CKPPS_PORT_POSN                                    0x3
#define _CKPPS_PORT_POSITION                                0x3
#define _CKPPS_PORT_SIZE                                    0x2
#define _CKPPS_PORT_LENGTH                                  0x2
#define _CKPPS_PORT_MASK                                    0x18
#define _CKPPS_TX1CKPPS_POSN                                0x0
#define _CKPPS_TX1CKPPS_POSITION                            0x0
#define _CKPPS_TX1CKPPS_SIZE                                0x5
#define _CKPPS_TX1CKPPS_LENGTH                              0x5
#define _CKPPS_TX1CKPPS_MASK                                0x1F
#define _CKPPS_TX1CKPPS0_POSN                               0x0
#define _CKPPS_TX1CKPPS0_POSITION                           0x0
#define _CKPPS_TX1CKPPS0_SIZE                               0x1
#define _CKPPS_TX1CKPPS0_LENGTH                             0x1
#define _CKPPS_TX1CKPPS0_MASK                               0x1
#define _CKPPS_TX1CKPPS1_POSN                               0x1
#define _CKPPS_TX1CKPPS1_POSITION                           0x1
#define _CKPPS_TX1CKPPS1_SIZE                               0x1
#define _CKPPS_TX1CKPPS1_LENGTH                             0x1
#define _CKPPS_TX1CKPPS1_MASK                               0x2
#define _CKPPS_TX1CKPPS2_POSN                               0x2
#define _CKPPS_TX1CKPPS2_POSITION                           0x2
#define _CKPPS_TX1CKPPS2_SIZE                               0x1
#define _CKPPS_TX1CKPPS2_LENGTH                             0x1
#define _CKPPS_TX1CKPPS2_MASK                               0x4
#define _CKPPS_TX1CKPPS3_POSN                               0x3
#define _CKPPS_TX1CKPPS3_POSITION                           0x3
#define _CKPPS_TX1CKPPS3_SIZE                               0x1
#define _CKPPS_TX1CKPPS3_LENGTH                             0x1
#define _CKPPS_TX1CKPPS3_MASK                               0x8
#define _CKPPS_TX1CKPPS4_POSN                               0x4
#define _CKPPS_TX1CKPPS4_POSITION                           0x4
#define _CKPPS_TX1CKPPS4_SIZE                               0x1
#define _CKPPS_TX1CKPPS4_LENGTH                             0x1
#define _CKPPS_TX1CKPPS4_MASK                               0x10

// Register: RA0PPS
#define RA0PPS RA0PPS
extern volatile unsigned char           RA0PPS              __at(0x1F10);
#ifndef _LIB_BUILD
asm("RA0PPS equ 01F10h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0PPS                 :6;
    };
    struct {
        unsigned RA0PPS0                :1;
        unsigned RA0PPS1                :1;
        unsigned RA0PPS2                :1;
        unsigned RA0PPS3                :1;
        unsigned RA0PPS4                :1;
        unsigned RA0PPS5                :1;
    };
} RA0PPSbits_t;
extern volatile RA0PPSbits_t RA0PPSbits __at(0x1F10);
// bitfield macros
#define _RA0PPS_RA0PPS_POSN                                 0x0
#define _RA0PPS_RA0PPS_POSITION                             0x0
#define _RA0PPS_RA0PPS_SIZE                                 0x6
#define _RA0PPS_RA0PPS_LENGTH                               0x6
#define _RA0PPS_RA0PPS_MASK                                 0x3F
#define _RA0PPS_RA0PPS0_POSN                                0x0
#define _RA0PPS_RA0PPS0_POSITION                            0x0
#define _RA0PPS_RA0PPS0_SIZE                                0x1
#define _RA0PPS_RA0PPS0_LENGTH                              0x1
#define _RA0PPS_RA0PPS0_MASK                                0x1
#define _RA0PPS_RA0PPS1_POSN                                0x1
#define _RA0PPS_RA0PPS1_POSITION                            0x1
#define _RA0PPS_RA0PPS1_SIZE                                0x1
#define _RA0PPS_RA0PPS1_LENGTH                              0x1
#define _RA0PPS_RA0PPS1_MASK                                0x2
#define _RA0PPS_RA0PPS2_POSN                                0x2
#define _RA0PPS_RA0PPS2_POSITION                            0x2
#define _RA0PPS_RA0PPS2_SIZE                                0x1
#define _RA0PPS_RA0PPS2_LENGTH                              0x1
#define _RA0PPS_RA0PPS2_MASK                                0x4
#define _RA0PPS_RA0PPS3_POSN                                0x3
#define _RA0PPS_RA0PPS3_POSITION                            0x3
#define _RA0PPS_RA0PPS3_SIZE                                0x1
#define _RA0PPS_RA0PPS3_LENGTH                              0x1
#define _RA0PPS_RA0PPS3_MASK                                0x8
#define _RA0PPS_RA0PPS4_POSN                                0x4
#define _RA0PPS_RA0PPS4_POSITION                            0x4
#define _RA0PPS_RA0PPS4_SIZE                                0x1
#define _RA0PPS_RA0PPS4_LENGTH                              0x1
#define _RA0PPS_RA0PPS4_MASK                                0x10
#define _RA0PPS_RA0PPS5_POSN                                0x5
#define _RA0PPS_RA0PPS5_POSITION                            0x5
#define _RA0PPS_RA0PPS5_SIZE                                0x1
#define _RA0PPS_RA0PPS5_LENGTH                              0x1
#define _RA0PPS_RA0PPS5_MASK                                0x20

// Register: RA1PPS
#define RA1PPS RA1PPS
extern volatile unsigned char           RA1PPS              __at(0x1F11);
#ifndef _LIB_BUILD
asm("RA1PPS equ 01F11h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA1PPS                 :6;
    };
    struct {
        unsigned RA1PPS0                :1;
        unsigned RA1PPS1                :1;
        unsigned RA1PPS2                :1;
        unsigned RA1PPS3                :1;
        unsigned RA1PPS4                :1;
        unsigned RA1PPS5                :1;
    };
} RA1PPSbits_t;
extern volatile RA1PPSbits_t RA1PPSbits __at(0x1F11);
// bitfield macros
#define _RA1PPS_RA1PPS_POSN                                 0x0
#define _RA1PPS_RA1PPS_POSITION                             0x0
#define _RA1PPS_RA1PPS_SIZE                                 0x6
#define _RA1PPS_RA1PPS_LENGTH                               0x6
#define _RA1PPS_RA1PPS_MASK                                 0x3F
#define _RA1PPS_RA1PPS0_POSN                                0x0
#define _RA1PPS_RA1PPS0_POSITION                            0x0
#define _RA1PPS_RA1PPS0_SIZE                                0x1
#define _RA1PPS_RA1PPS0_LENGTH                              0x1
#define _RA1PPS_RA1PPS0_MASK                                0x1
#define _RA1PPS_RA1PPS1_POSN                                0x1
#define _RA1PPS_RA1PPS1_POSITION                            0x1
#define _RA1PPS_RA1PPS1_SIZE                                0x1
#define _RA1PPS_RA1PPS1_LENGTH                              0x1
#define _RA1PPS_RA1PPS1_MASK                                0x2
#define _RA1PPS_RA1PPS2_POSN                                0x2
#define _RA1PPS_RA1PPS2_POSITION                            0x2
#define _RA1PPS_RA1PPS2_SIZE                                0x1
#define _RA1PPS_RA1PPS2_LENGTH                              0x1
#define _RA1PPS_RA1PPS2_MASK                                0x4
#define _RA1PPS_RA1PPS3_POSN                                0x3
#define _RA1PPS_RA1PPS3_POSITION                            0x3
#define _RA1PPS_RA1PPS3_SIZE                                0x1
#define _RA1PPS_RA1PPS3_LENGTH                              0x1
#define _RA1PPS_RA1PPS3_MASK                                0x8
#define _RA1PPS_RA1PPS4_POSN                                0x4
#define _RA1PPS_RA1PPS4_POSITION                            0x4
#define _RA1PPS_RA1PPS4_SIZE                                0x1
#define _RA1PPS_RA1PPS4_LENGTH                              0x1
#define _RA1PPS_RA1PPS4_MASK                                0x10
#define _RA1PPS_RA1PPS5_POSN                                0x5
#define _RA1PPS_RA1PPS5_POSITION                            0x5
#define _RA1PPS_RA1PPS5_SIZE                                0x1
#define _RA1PPS_RA1PPS5_LENGTH                              0x1
#define _RA1PPS_RA1PPS5_MASK                                0x20

// Register: RA2PPS
#define RA2PPS RA2PPS
extern volatile unsigned char           RA2PPS              __at(0x1F12);
#ifndef _LIB_BUILD
asm("RA2PPS equ 01F12h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA2PPS                 :6;
    };
    struct {
        unsigned RA2PPS0                :1;
        unsigned RA2PPS1                :1;
        unsigned RA2PPS2                :1;
        unsigned RA2PPS3                :1;
        unsigned RA2PPS4                :1;
        unsigned RA2PPS5                :1;
    };
} RA2PPSbits_t;
extern volatile RA2PPSbits_t RA2PPSbits __at(0x1F12);
// bitfield macros
#define _RA2PPS_RA2PPS_POSN                                 0x0
#define _RA2PPS_RA2PPS_POSITION                             0x0
#define _RA2PPS_RA2PPS_SIZE                                 0x6
#define _RA2PPS_RA2PPS_LENGTH                               0x6
#define _RA2PPS_RA2PPS_MASK                                 0x3F
#define _RA2PPS_RA2PPS0_POSN                                0x0
#define _RA2PPS_RA2PPS0_POSITION                            0x0
#define _RA2PPS_RA2PPS0_SIZE                                0x1
#define _RA2PPS_RA2PPS0_LENGTH                              0x1
#define _RA2PPS_RA2PPS0_MASK                                0x1
#define _RA2PPS_RA2PPS1_POSN                                0x1
#define _RA2PPS_RA2PPS1_POSITION                            0x1
#define _RA2PPS_RA2PPS1_SIZE                                0x1
#define _RA2PPS_RA2PPS1_LENGTH                              0x1
#define _RA2PPS_RA2PPS1_MASK                                0x2
#define _RA2PPS_RA2PPS2_POSN                                0x2
#define _RA2PPS_RA2PPS2_POSITION                            0x2
#define _RA2PPS_RA2PPS2_SIZE                                0x1
#define _RA2PPS_RA2PPS2_LENGTH                              0x1
#define _RA2PPS_RA2PPS2_MASK                                0x4
#define _RA2PPS_RA2PPS3_POSN                                0x3
#define _RA2PPS_RA2PPS3_POSITION                            0x3
#define _RA2PPS_RA2PPS3_SIZE                                0x1
#define _RA2PPS_RA2PPS3_LENGTH                              0x1
#define _RA2PPS_RA2PPS3_MASK                                0x8
#define _RA2PPS_RA2PPS4_POSN                                0x4
#define _RA2PPS_RA2PPS4_POSITION                            0x4
#define _RA2PPS_RA2PPS4_SIZE                                0x1
#define _RA2PPS_RA2PPS4_LENGTH                              0x1
#define _RA2PPS_RA2PPS4_MASK                                0x10
#define _RA2PPS_RA2PPS5_POSN                                0x5
#define _RA2PPS_RA2PPS5_POSITION                            0x5
#define _RA2PPS_RA2PPS5_SIZE                                0x1
#define _RA2PPS_RA2PPS5_LENGTH                              0x1
#define _RA2PPS_RA2PPS5_MASK                                0x20

// Register: RA4PPS
#define RA4PPS RA4PPS
extern volatile unsigned char           RA4PPS              __at(0x1F14);
#ifndef _LIB_BUILD
asm("RA4PPS equ 01F14h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA4PPS                 :6;
    };
    struct {
        unsigned RA4PPS0                :1;
        unsigned RA4PPS1                :1;
        unsigned RA4PPS2                :1;
        unsigned RA4PPS3                :1;
        unsigned RA4PPS4                :1;
        unsigned RA4PPS5                :1;
    };
} RA4PPSbits_t;
extern volatile RA4PPSbits_t RA4PPSbits __at(0x1F14);
// bitfield macros
#define _RA4PPS_RA4PPS_POSN                                 0x0
#define _RA4PPS_RA4PPS_POSITION                             0x0
#define _RA4PPS_RA4PPS_SIZE                                 0x6
#define _RA4PPS_RA4PPS_LENGTH                               0x6
#define _RA4PPS_RA4PPS_MASK                                 0x3F
#define _RA4PPS_RA4PPS0_POSN                                0x0
#define _RA4PPS_RA4PPS0_POSITION                            0x0
#define _RA4PPS_RA4PPS0_SIZE                                0x1
#define _RA4PPS_RA4PPS0_LENGTH                              0x1
#define _RA4PPS_RA4PPS0_MASK                                0x1
#define _RA4PPS_RA4PPS1_POSN                                0x1
#define _RA4PPS_RA4PPS1_POSITION                            0x1
#define _RA4PPS_RA4PPS1_SIZE                                0x1
#define _RA4PPS_RA4PPS1_LENGTH                              0x1
#define _RA4PPS_RA4PPS1_MASK                                0x2
#define _RA4PPS_RA4PPS2_POSN                                0x2
#define _RA4PPS_RA4PPS2_POSITION                            0x2
#define _RA4PPS_RA4PPS2_SIZE                                0x1
#define _RA4PPS_RA4PPS2_LENGTH                              0x1
#define _RA4PPS_RA4PPS2_MASK                                0x4
#define _RA4PPS_RA4PPS3_POSN                                0x3
#define _RA4PPS_RA4PPS3_POSITION                            0x3
#define _RA4PPS_RA4PPS3_SIZE                                0x1
#define _RA4PPS_RA4PPS3_LENGTH                              0x1
#define _RA4PPS_RA4PPS3_MASK                                0x8
#define _RA4PPS_RA4PPS4_POSN                                0x4
#define _RA4PPS_RA4PPS4_POSITION                            0x4
#define _RA4PPS_RA4PPS4_SIZE                                0x1
#define _RA4PPS_RA4PPS4_LENGTH                              0x1
#define _RA4PPS_RA4PPS4_MASK                                0x10
#define _RA4PPS_RA4PPS5_POSN                                0x5
#define _RA4PPS_RA4PPS5_POSITION                            0x5
#define _RA4PPS_RA4PPS5_SIZE                                0x1
#define _RA4PPS_RA4PPS5_LENGTH                              0x1
#define _RA4PPS_RA4PPS5_MASK                                0x20

// Register: RA5PPS
#define RA5PPS RA5PPS
extern volatile unsigned char           RA5PPS              __at(0x1F15);
#ifndef _LIB_BUILD
asm("RA5PPS equ 01F15h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA5PPS                 :6;
    };
    struct {
        unsigned RA5PPS0                :1;
        unsigned RA5PPS1                :1;
        unsigned RA5PPS2                :1;
        unsigned RA5PPS3                :1;
        unsigned RA5PPS4                :1;
        unsigned RA5PPS5                :1;
    };
} RA5PPSbits_t;
extern volatile RA5PPSbits_t RA5PPSbits __at(0x1F15);
// bitfield macros
#define _RA5PPS_RA5PPS_POSN                                 0x0
#define _RA5PPS_RA5PPS_POSITION                             0x0
#define _RA5PPS_RA5PPS_SIZE                                 0x6
#define _RA5PPS_RA5PPS_LENGTH                               0x6
#define _RA5PPS_RA5PPS_MASK                                 0x3F
#define _RA5PPS_RA5PPS0_POSN                                0x0
#define _RA5PPS_RA5PPS0_POSITION                            0x0
#define _RA5PPS_RA5PPS0_SIZE                                0x1
#define _RA5PPS_RA5PPS0_LENGTH                              0x1
#define _RA5PPS_RA5PPS0_MASK                                0x1
#define _RA5PPS_RA5PPS1_POSN                                0x1
#define _RA5PPS_RA5PPS1_POSITION                            0x1
#define _RA5PPS_RA5PPS1_SIZE                                0x1
#define _RA5PPS_RA5PPS1_LENGTH                              0x1
#define _RA5PPS_RA5PPS1_MASK                                0x2
#define _RA5PPS_RA5PPS2_POSN                                0x2
#define _RA5PPS_RA5PPS2_POSITION                            0x2
#define _RA5PPS_RA5PPS2_SIZE                                0x1
#define _RA5PPS_RA5PPS2_LENGTH                              0x1
#define _RA5PPS_RA5PPS2_MASK                                0x4
#define _RA5PPS_RA5PPS3_POSN                                0x3
#define _RA5PPS_RA5PPS3_POSITION                            0x3
#define _RA5PPS_RA5PPS3_SIZE                                0x1
#define _RA5PPS_RA5PPS3_LENGTH                              0x1
#define _RA5PPS_RA5PPS3_MASK                                0x8
#define _RA5PPS_RA5PPS4_POSN                                0x4
#define _RA5PPS_RA5PPS4_POSITION                            0x4
#define _RA5PPS_RA5PPS4_SIZE                                0x1
#define _RA5PPS_RA5PPS4_LENGTH                              0x1
#define _RA5PPS_RA5PPS4_MASK                                0x10
#define _RA5PPS_RA5PPS5_POSN                                0x5
#define _RA5PPS_RA5PPS5_POSITION                            0x5
#define _RA5PPS_RA5PPS5_SIZE                                0x1
#define _RA5PPS_RA5PPS5_LENGTH                              0x1
#define _RA5PPS_RA5PPS5_MASK                                0x20

// Register: RB4PPS
#define RB4PPS RB4PPS
extern volatile unsigned char           RB4PPS              __at(0x1F1C);
#ifndef _LIB_BUILD
asm("RB4PPS equ 01F1Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB4PPS                 :6;
    };
    struct {
        unsigned RB4PPS0                :1;
        unsigned RB4PPS1                :1;
        unsigned RB4PPS2                :1;
        unsigned RB4PPS3                :1;
        unsigned RB4PPS4                :1;
        unsigned RB4PPS5                :1;
    };
} RB4PPSbits_t;
extern volatile RB4PPSbits_t RB4PPSbits __at(0x1F1C);
// bitfield macros
#define _RB4PPS_RB4PPS_POSN                                 0x0
#define _RB4PPS_RB4PPS_POSITION                             0x0
#define _RB4PPS_RB4PPS_SIZE                                 0x6
#define _RB4PPS_RB4PPS_LENGTH                               0x6
#define _RB4PPS_RB4PPS_MASK                                 0x3F
#define _RB4PPS_RB4PPS0_POSN                                0x0
#define _RB4PPS_RB4PPS0_POSITION                            0x0
#define _RB4PPS_RB4PPS0_SIZE                                0x1
#define _RB4PPS_RB4PPS0_LENGTH                              0x1
#define _RB4PPS_RB4PPS0_MASK                                0x1
#define _RB4PPS_RB4PPS1_POSN                                0x1
#define _RB4PPS_RB4PPS1_POSITION                            0x1
#define _RB4PPS_RB4PPS1_SIZE                                0x1
#define _RB4PPS_RB4PPS1_LENGTH                              0x1
#define _RB4PPS_RB4PPS1_MASK                                0x2
#define _RB4PPS_RB4PPS2_POSN                                0x2
#define _RB4PPS_RB4PPS2_POSITION                            0x2
#define _RB4PPS_RB4PPS2_SIZE                                0x1
#define _RB4PPS_RB4PPS2_LENGTH                              0x1
#define _RB4PPS_RB4PPS2_MASK                                0x4
#define _RB4PPS_RB4PPS3_POSN                                0x3
#define _RB4PPS_RB4PPS3_POSITION                            0x3
#define _RB4PPS_RB4PPS3_SIZE                                0x1
#define _RB4PPS_RB4PPS3_LENGTH                              0x1
#define _RB4PPS_RB4PPS3_MASK                                0x8
#define _RB4PPS_RB4PPS4_POSN                                0x4
#define _RB4PPS_RB4PPS4_POSITION                            0x4
#define _RB4PPS_RB4PPS4_SIZE                                0x1
#define _RB4PPS_RB4PPS4_LENGTH                              0x1
#define _RB4PPS_RB4PPS4_MASK                                0x10
#define _RB4PPS_RB4PPS5_POSN                                0x5
#define _RB4PPS_RB4PPS5_POSITION                            0x5
#define _RB4PPS_RB4PPS5_SIZE                                0x1
#define _RB4PPS_RB4PPS5_LENGTH                              0x1
#define _RB4PPS_RB4PPS5_MASK                                0x20

// Register: RB5PPS
#define RB5PPS RB5PPS
extern volatile unsigned char           RB5PPS              __at(0x1F1D);
#ifndef _LIB_BUILD
asm("RB5PPS equ 01F1Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB5PPS                 :6;
    };
    struct {
        unsigned RB5PPS0                :1;
        unsigned RB5PPS1                :1;
        unsigned RB5PPS2                :1;
        unsigned RB5PPS3                :1;
        unsigned RB5PPS4                :1;
        unsigned RB5PPS5                :1;
    };
} RB5PPSbits_t;
extern volatile RB5PPSbits_t RB5PPSbits __at(0x1F1D);
// bitfield macros
#define _RB5PPS_RB5PPS_POSN                                 0x0
#define _RB5PPS_RB5PPS_POSITION                             0x0
#define _RB5PPS_RB5PPS_SIZE                                 0x6
#define _RB5PPS_RB5PPS_LENGTH                               0x6
#define _RB5PPS_RB5PPS_MASK                                 0x3F
#define _RB5PPS_RB5PPS0_POSN                                0x0
#define _RB5PPS_RB5PPS0_POSITION                            0x0
#define _RB5PPS_RB5PPS0_SIZE                                0x1
#define _RB5PPS_RB5PPS0_LENGTH                              0x1
#define _RB5PPS_RB5PPS0_MASK                                0x1
#define _RB5PPS_RB5PPS1_POSN                                0x1
#define _RB5PPS_RB5PPS1_POSITION                            0x1
#define _RB5PPS_RB5PPS1_SIZE                                0x1
#define _RB5PPS_RB5PPS1_LENGTH                              0x1
#define _RB5PPS_RB5PPS1_MASK                                0x2
#define _RB5PPS_RB5PPS2_POSN                                0x2
#define _RB5PPS_RB5PPS2_POSITION                            0x2
#define _RB5PPS_RB5PPS2_SIZE                                0x1
#define _RB5PPS_RB5PPS2_LENGTH                              0x1
#define _RB5PPS_RB5PPS2_MASK                                0x4
#define _RB5PPS_RB5PPS3_POSN                                0x3
#define _RB5PPS_RB5PPS3_POSITION                            0x3
#define _RB5PPS_RB5PPS3_SIZE                                0x1
#define _RB5PPS_RB5PPS3_LENGTH                              0x1
#define _RB5PPS_RB5PPS3_MASK                                0x8
#define _RB5PPS_RB5PPS4_POSN                                0x4
#define _RB5PPS_RB5PPS4_POSITION                            0x4
#define _RB5PPS_RB5PPS4_SIZE                                0x1
#define _RB5PPS_RB5PPS4_LENGTH                              0x1
#define _RB5PPS_RB5PPS4_MASK                                0x10
#define _RB5PPS_RB5PPS5_POSN                                0x5
#define _RB5PPS_RB5PPS5_POSITION                            0x5
#define _RB5PPS_RB5PPS5_SIZE                                0x1
#define _RB5PPS_RB5PPS5_LENGTH                              0x1
#define _RB5PPS_RB5PPS5_MASK                                0x20

// Register: RB6PPS
#define RB6PPS RB6PPS
extern volatile unsigned char           RB6PPS              __at(0x1F1E);
#ifndef _LIB_BUILD
asm("RB6PPS equ 01F1Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB6PPS                 :6;
    };
    struct {
        unsigned RB6PPS0                :1;
        unsigned RB6PPS1                :1;
        unsigned RB6PPS2                :1;
        unsigned RB6PPS3                :1;
        unsigned RB6PPS4                :1;
        unsigned RB6PPS5                :1;
    };
} RB6PPSbits_t;
extern volatile RB6PPSbits_t RB6PPSbits __at(0x1F1E);
// bitfield macros
#define _RB6PPS_RB6PPS_POSN                                 0x0
#define _RB6PPS_RB6PPS_POSITION                             0x0
#define _RB6PPS_RB6PPS_SIZE                                 0x6
#define _RB6PPS_RB6PPS_LENGTH                               0x6
#define _RB6PPS_RB6PPS_MASK                                 0x3F
#define _RB6PPS_RB6PPS0_POSN                                0x0
#define _RB6PPS_RB6PPS0_POSITION                            0x0
#define _RB6PPS_RB6PPS0_SIZE                                0x1
#define _RB6PPS_RB6PPS0_LENGTH                              0x1
#define _RB6PPS_RB6PPS0_MASK                                0x1
#define _RB6PPS_RB6PPS1_POSN                                0x1
#define _RB6PPS_RB6PPS1_POSITION                            0x1
#define _RB6PPS_RB6PPS1_SIZE                                0x1
#define _RB6PPS_RB6PPS1_LENGTH                              0x1
#define _RB6PPS_RB6PPS1_MASK                                0x2
#define _RB6PPS_RB6PPS2_POSN                                0x2
#define _RB6PPS_RB6PPS2_POSITION                            0x2
#define _RB6PPS_RB6PPS2_SIZE                                0x1
#define _RB6PPS_RB6PPS2_LENGTH                              0x1
#define _RB6PPS_RB6PPS2_MASK                                0x4
#define _RB6PPS_RB6PPS3_POSN                                0x3
#define _RB6PPS_RB6PPS3_POSITION                            0x3
#define _RB6PPS_RB6PPS3_SIZE                                0x1
#define _RB6PPS_RB6PPS3_LENGTH                              0x1
#define _RB6PPS_RB6PPS3_MASK                                0x8
#define _RB6PPS_RB6PPS4_POSN                                0x4
#define _RB6PPS_RB6PPS4_POSITION                            0x4
#define _RB6PPS_RB6PPS4_SIZE                                0x1
#define _RB6PPS_RB6PPS4_LENGTH                              0x1
#define _RB6PPS_RB6PPS4_MASK                                0x10
#define _RB6PPS_RB6PPS5_POSN                                0x5
#define _RB6PPS_RB6PPS5_POSITION                            0x5
#define _RB6PPS_RB6PPS5_SIZE                                0x1
#define _RB6PPS_RB6PPS5_LENGTH                              0x1
#define _RB6PPS_RB6PPS5_MASK                                0x20

// Register: RB7PPS
#define RB7PPS RB7PPS
extern volatile unsigned char           RB7PPS              __at(0x1F1F);
#ifndef _LIB_BUILD
asm("RB7PPS equ 01F1Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB7PPS                 :6;
    };
    struct {
        unsigned RB7PPS0                :1;
        unsigned RB7PPS1                :1;
        unsigned RB7PPS2                :1;
        unsigned RB7PPS3                :1;
        unsigned RB7PPS4                :1;
        unsigned RB7PPS5                :1;
    };
} RB7PPSbits_t;
extern volatile RB7PPSbits_t RB7PPSbits __at(0x1F1F);
// bitfield macros
#define _RB7PPS_RB7PPS_POSN                                 0x0
#define _RB7PPS_RB7PPS_POSITION                             0x0
#define _RB7PPS_RB7PPS_SIZE                                 0x6
#define _RB7PPS_RB7PPS_LENGTH                               0x6
#define _RB7PPS_RB7PPS_MASK                                 0x3F
#define _RB7PPS_RB7PPS0_POSN                                0x0
#define _RB7PPS_RB7PPS0_POSITION                            0x0
#define _RB7PPS_RB7PPS0_SIZE                                0x1
#define _RB7PPS_RB7PPS0_LENGTH                              0x1
#define _RB7PPS_RB7PPS0_MASK                                0x1
#define _RB7PPS_RB7PPS1_POSN                                0x1
#define _RB7PPS_RB7PPS1_POSITION                            0x1
#define _RB7PPS_RB7PPS1_SIZE                                0x1
#define _RB7PPS_RB7PPS1_LENGTH                              0x1
#define _RB7PPS_RB7PPS1_MASK                                0x2
#define _RB7PPS_RB7PPS2_POSN                                0x2
#define _RB7PPS_RB7PPS2_POSITION                            0x2
#define _RB7PPS_RB7PPS2_SIZE                                0x1
#define _RB7PPS_RB7PPS2_LENGTH                              0x1
#define _RB7PPS_RB7PPS2_MASK                                0x4
#define _RB7PPS_RB7PPS3_POSN                                0x3
#define _RB7PPS_RB7PPS3_POSITION                            0x3
#define _RB7PPS_RB7PPS3_SIZE                                0x1
#define _RB7PPS_RB7PPS3_LENGTH                              0x1
#define _RB7PPS_RB7PPS3_MASK                                0x8
#define _RB7PPS_RB7PPS4_POSN                                0x4
#define _RB7PPS_RB7PPS4_POSITION                            0x4
#define _RB7PPS_RB7PPS4_SIZE                                0x1
#define _RB7PPS_RB7PPS4_LENGTH                              0x1
#define _RB7PPS_RB7PPS4_MASK                                0x10
#define _RB7PPS_RB7PPS5_POSN                                0x5
#define _RB7PPS_RB7PPS5_POSITION                            0x5
#define _RB7PPS_RB7PPS5_SIZE                                0x1
#define _RB7PPS_RB7PPS5_LENGTH                              0x1
#define _RB7PPS_RB7PPS5_MASK                                0x20

// Register: RC0PPS
#define RC0PPS RC0PPS
extern volatile unsigned char           RC0PPS              __at(0x1F20);
#ifndef _LIB_BUILD
asm("RC0PPS equ 01F20h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC0PPS                 :6;
    };
    struct {
        unsigned RC0PPS0                :1;
        unsigned RC0PPS1                :1;
        unsigned RC0PPS2                :1;
        unsigned RC0PPS3                :1;
        unsigned RC0PPS4                :1;
        unsigned RC0PPS5                :1;
    };
} RC0PPSbits_t;
extern volatile RC0PPSbits_t RC0PPSbits __at(0x1F20);
// bitfield macros
#define _RC0PPS_RC0PPS_POSN                                 0x0
#define _RC0PPS_RC0PPS_POSITION                             0x0
#define _RC0PPS_RC0PPS_SIZE                                 0x6
#define _RC0PPS_RC0PPS_LENGTH                               0x6
#define _RC0PPS_RC0PPS_MASK                                 0x3F
#define _RC0PPS_RC0PPS0_POSN                                0x0
#define _RC0PPS_RC0PPS0_POSITION                            0x0
#define _RC0PPS_RC0PPS0_SIZE                                0x1
#define _RC0PPS_RC0PPS0_LENGTH                              0x1
#define _RC0PPS_RC0PPS0_MASK                                0x1
#define _RC0PPS_RC0PPS1_POSN                                0x1
#define _RC0PPS_RC0PPS1_POSITION                            0x1
#define _RC0PPS_RC0PPS1_SIZE                                0x1
#define _RC0PPS_RC0PPS1_LENGTH                              0x1
#define _RC0PPS_RC0PPS1_MASK                                0x2
#define _RC0PPS_RC0PPS2_POSN                                0x2
#define _RC0PPS_RC0PPS2_POSITION                            0x2
#define _RC0PPS_RC0PPS2_SIZE                                0x1
#define _RC0PPS_RC0PPS2_LENGTH                              0x1
#define _RC0PPS_RC0PPS2_MASK                                0x4
#define _RC0PPS_RC0PPS3_POSN                                0x3
#define _RC0PPS_RC0PPS3_POSITION                            0x3
#define _RC0PPS_RC0PPS3_SIZE                                0x1
#define _RC0PPS_RC0PPS3_LENGTH                              0x1
#define _RC0PPS_RC0PPS3_MASK                                0x8
#define _RC0PPS_RC0PPS4_POSN                                0x4
#define _RC0PPS_RC0PPS4_POSITION                            0x4
#define _RC0PPS_RC0PPS4_SIZE                                0x1
#define _RC0PPS_RC0PPS4_LENGTH                              0x1
#define _RC0PPS_RC0PPS4_MASK                                0x10
#define _RC0PPS_RC0PPS5_POSN                                0x5
#define _RC0PPS_RC0PPS5_POSITION                            0x5
#define _RC0PPS_RC0PPS5_SIZE                                0x1
#define _RC0PPS_RC0PPS5_LENGTH                              0x1
#define _RC0PPS_RC0PPS5_MASK                                0x20

// Register: RC1PPS
#define RC1PPS RC1PPS
extern volatile unsigned char           RC1PPS              __at(0x1F21);
#ifndef _LIB_BUILD
asm("RC1PPS equ 01F21h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC1PPS                 :6;
    };
    struct {
        unsigned RC1PPS0                :1;
        unsigned RC1PPS1                :1;
        unsigned RC1PPS2                :1;
        unsigned RC1PPS3                :1;
        unsigned RC1PPS4                :1;
        unsigned RC1PPS5                :1;
    };
} RC1PPSbits_t;
extern volatile RC1PPSbits_t RC1PPSbits __at(0x1F21);
// bitfield macros
#define _RC1PPS_RC1PPS_POSN                                 0x0
#define _RC1PPS_RC1PPS_POSITION                             0x0
#define _RC1PPS_RC1PPS_SIZE                                 0x6
#define _RC1PPS_RC1PPS_LENGTH                               0x6
#define _RC1PPS_RC1PPS_MASK                                 0x3F
#define _RC1PPS_RC1PPS0_POSN                                0x0
#define _RC1PPS_RC1PPS0_POSITION                            0x0
#define _RC1PPS_RC1PPS0_SIZE                                0x1
#define _RC1PPS_RC1PPS0_LENGTH                              0x1
#define _RC1PPS_RC1PPS0_MASK                                0x1
#define _RC1PPS_RC1PPS1_POSN                                0x1
#define _RC1PPS_RC1PPS1_POSITION                            0x1
#define _RC1PPS_RC1PPS1_SIZE                                0x1
#define _RC1PPS_RC1PPS1_LENGTH                              0x1
#define _RC1PPS_RC1PPS1_MASK                                0x2
#define _RC1PPS_RC1PPS2_POSN                                0x2
#define _RC1PPS_RC1PPS2_POSITION                            0x2
#define _RC1PPS_RC1PPS2_SIZE                                0x1
#define _RC1PPS_RC1PPS2_LENGTH                              0x1
#define _RC1PPS_RC1PPS2_MASK                                0x4
#define _RC1PPS_RC1PPS3_POSN                                0x3
#define _RC1PPS_RC1PPS3_POSITION                            0x3
#define _RC1PPS_RC1PPS3_SIZE                                0x1
#define _RC1PPS_RC1PPS3_LENGTH                              0x1
#define _RC1PPS_RC1PPS3_MASK                                0x8
#define _RC1PPS_RC1PPS4_POSN                                0x4
#define _RC1PPS_RC1PPS4_POSITION                            0x4
#define _RC1PPS_RC1PPS4_SIZE                                0x1
#define _RC1PPS_RC1PPS4_LENGTH                              0x1
#define _RC1PPS_RC1PPS4_MASK                                0x10
#define _RC1PPS_RC1PPS5_POSN                                0x5
#define _RC1PPS_RC1PPS5_POSITION                            0x5
#define _RC1PPS_RC1PPS5_SIZE                                0x1
#define _RC1PPS_RC1PPS5_LENGTH                              0x1
#define _RC1PPS_RC1PPS5_MASK                                0x20

// Register: RC2PPS
#define RC2PPS RC2PPS
extern volatile unsigned char           RC2PPS              __at(0x1F22);
#ifndef _LIB_BUILD
asm("RC2PPS equ 01F22h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC2PPS                 :6;
    };
    struct {
        unsigned RC2PPS0                :1;
        unsigned RC2PPS1                :1;
        unsigned RC2PPS2                :1;
        unsigned RC2PPS3                :1;
        unsigned RC2PPS4                :1;
        unsigned RC2PPS5                :1;
    };
} RC2PPSbits_t;
extern volatile RC2PPSbits_t RC2PPSbits __at(0x1F22);
// bitfield macros
#define _RC2PPS_RC2PPS_POSN                                 0x0
#define _RC2PPS_RC2PPS_POSITION                             0x0
#define _RC2PPS_RC2PPS_SIZE                                 0x6
#define _RC2PPS_RC2PPS_LENGTH                               0x6
#define _RC2PPS_RC2PPS_MASK                                 0x3F
#define _RC2PPS_RC2PPS0_POSN                                0x0
#define _RC2PPS_RC2PPS0_POSITION                            0x0
#define _RC2PPS_RC2PPS0_SIZE                                0x1
#define _RC2PPS_RC2PPS0_LENGTH                              0x1
#define _RC2PPS_RC2PPS0_MASK                                0x1
#define _RC2PPS_RC2PPS1_POSN                                0x1
#define _RC2PPS_RC2PPS1_POSITION                            0x1
#define _RC2PPS_RC2PPS1_SIZE                                0x1
#define _RC2PPS_RC2PPS1_LENGTH                              0x1
#define _RC2PPS_RC2PPS1_MASK                                0x2
#define _RC2PPS_RC2PPS2_POSN                                0x2
#define _RC2PPS_RC2PPS2_POSITION                            0x2
#define _RC2PPS_RC2PPS2_SIZE                                0x1
#define _RC2PPS_RC2PPS2_LENGTH                              0x1
#define _RC2PPS_RC2PPS2_MASK                                0x4
#define _RC2PPS_RC2PPS3_POSN                                0x3
#define _RC2PPS_RC2PPS3_POSITION                            0x3
#define _RC2PPS_RC2PPS3_SIZE                                0x1
#define _RC2PPS_RC2PPS3_LENGTH                              0x1
#define _RC2PPS_RC2PPS3_MASK                                0x8
#define _RC2PPS_RC2PPS4_POSN                                0x4
#define _RC2PPS_RC2PPS4_POSITION                            0x4
#define _RC2PPS_RC2PPS4_SIZE                                0x1
#define _RC2PPS_RC2PPS4_LENGTH                              0x1
#define _RC2PPS_RC2PPS4_MASK                                0x10
#define _RC2PPS_RC2PPS5_POSN                                0x5
#define _RC2PPS_RC2PPS5_POSITION                            0x5
#define _RC2PPS_RC2PPS5_SIZE                                0x1
#define _RC2PPS_RC2PPS5_LENGTH                              0x1
#define _RC2PPS_RC2PPS5_MASK                                0x20

// Register: RC3PPS
#define RC3PPS RC3PPS
extern volatile unsigned char           RC3PPS              __at(0x1F23);
#ifndef _LIB_BUILD
asm("RC3PPS equ 01F23h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC3PPS                 :6;
    };
    struct {
        unsigned RC3PPS0                :1;
        unsigned RC3PPS1                :1;
        unsigned RC3PPS2                :1;
        unsigned RC3PPS3                :1;
        unsigned RC3PPS4                :1;
        unsigned RC3PPS5                :1;
    };
} RC3PPSbits_t;
extern volatile RC3PPSbits_t RC3PPSbits __at(0x1F23);
// bitfield macros
#define _RC3PPS_RC3PPS_POSN                                 0x0
#define _RC3PPS_RC3PPS_POSITION                             0x0
#define _RC3PPS_RC3PPS_SIZE                                 0x6
#define _RC3PPS_RC3PPS_LENGTH                               0x6
#define _RC3PPS_RC3PPS_MASK                                 0x3F
#define _RC3PPS_RC3PPS0_POSN                                0x0
#define _RC3PPS_RC3PPS0_POSITION                            0x0
#define _RC3PPS_RC3PPS0_SIZE                                0x1
#define _RC3PPS_RC3PPS0_LENGTH                              0x1
#define _RC3PPS_RC3PPS0_MASK                                0x1
#define _RC3PPS_RC3PPS1_POSN                                0x1
#define _RC3PPS_RC3PPS1_POSITION                            0x1
#define _RC3PPS_RC3PPS1_SIZE                                0x1
#define _RC3PPS_RC3PPS1_LENGTH                              0x1
#define _RC3PPS_RC3PPS1_MASK                                0x2
#define _RC3PPS_RC3PPS2_POSN                                0x2
#define _RC3PPS_RC3PPS2_POSITION                            0x2
#define _RC3PPS_RC3PPS2_SIZE                                0x1
#define _RC3PPS_RC3PPS2_LENGTH                              0x1
#define _RC3PPS_RC3PPS2_MASK                                0x4
#define _RC3PPS_RC3PPS3_POSN                                0x3
#define _RC3PPS_RC3PPS3_POSITION                            0x3
#define _RC3PPS_RC3PPS3_SIZE                                0x1
#define _RC3PPS_RC3PPS3_LENGTH                              0x1
#define _RC3PPS_RC3PPS3_MASK                                0x8
#define _RC3PPS_RC3PPS4_POSN                                0x4
#define _RC3PPS_RC3PPS4_POSITION                            0x4
#define _RC3PPS_RC3PPS4_SIZE                                0x1
#define _RC3PPS_RC3PPS4_LENGTH                              0x1
#define _RC3PPS_RC3PPS4_MASK                                0x10
#define _RC3PPS_RC3PPS5_POSN                                0x5
#define _RC3PPS_RC3PPS5_POSITION                            0x5
#define _RC3PPS_RC3PPS5_SIZE                                0x1
#define _RC3PPS_RC3PPS5_LENGTH                              0x1
#define _RC3PPS_RC3PPS5_MASK                                0x20

// Register: RC4PPS
#define RC4PPS RC4PPS
extern volatile unsigned char           RC4PPS              __at(0x1F24);
#ifndef _LIB_BUILD
asm("RC4PPS equ 01F24h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC4PPS                 :6;
    };
    struct {
        unsigned RC4PPS0                :1;
        unsigned RC4PPS1                :1;
        unsigned RC4PPS2                :1;
        unsigned RC4PPS3                :1;
        unsigned RC4PPS4                :1;
        unsigned RC4PPS5                :1;
    };
} RC4PPSbits_t;
extern volatile RC4PPSbits_t RC4PPSbits __at(0x1F24);
// bitfield macros
#define _RC4PPS_RC4PPS_POSN                                 0x0
#define _RC4PPS_RC4PPS_POSITION                             0x0
#define _RC4PPS_RC4PPS_SIZE                                 0x6
#define _RC4PPS_RC4PPS_LENGTH                               0x6
#define _RC4PPS_RC4PPS_MASK                                 0x3F
#define _RC4PPS_RC4PPS0_POSN                                0x0
#define _RC4PPS_RC4PPS0_POSITION                            0x0
#define _RC4PPS_RC4PPS0_SIZE                                0x1
#define _RC4PPS_RC4PPS0_LENGTH                              0x1
#define _RC4PPS_RC4PPS0_MASK                                0x1
#define _RC4PPS_RC4PPS1_POSN                                0x1
#define _RC4PPS_RC4PPS1_POSITION                            0x1
#define _RC4PPS_RC4PPS1_SIZE                                0x1
#define _RC4PPS_RC4PPS1_LENGTH                              0x1
#define _RC4PPS_RC4PPS1_MASK                                0x2
#define _RC4PPS_RC4PPS2_POSN                                0x2
#define _RC4PPS_RC4PPS2_POSITION                            0x2
#define _RC4PPS_RC4PPS2_SIZE                                0x1
#define _RC4PPS_RC4PPS2_LENGTH                              0x1
#define _RC4PPS_RC4PPS2_MASK                                0x4
#define _RC4PPS_RC4PPS3_POSN                                0x3
#define _RC4PPS_RC4PPS3_POSITION                            0x3
#define _RC4PPS_RC4PPS3_SIZE                                0x1
#define _RC4PPS_RC4PPS3_LENGTH                              0x1
#define _RC4PPS_RC4PPS3_MASK                                0x8
#define _RC4PPS_RC4PPS4_POSN                                0x4
#define _RC4PPS_RC4PPS4_POSITION                            0x4
#define _RC4PPS_RC4PPS4_SIZE                                0x1
#define _RC4PPS_RC4PPS4_LENGTH                              0x1
#define _RC4PPS_RC4PPS4_MASK                                0x10
#define _RC4PPS_RC4PPS5_POSN                                0x5
#define _RC4PPS_RC4PPS5_POSITION                            0x5
#define _RC4PPS_RC4PPS5_SIZE                                0x1
#define _RC4PPS_RC4PPS5_LENGTH                              0x1
#define _RC4PPS_RC4PPS5_MASK                                0x20

// Register: RC5PPS
#define RC5PPS RC5PPS
extern volatile unsigned char           RC5PPS              __at(0x1F25);
#ifndef _LIB_BUILD
asm("RC5PPS equ 01F25h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC5PPS                 :6;
    };
    struct {
        unsigned RC5PPS0                :1;
        unsigned RC5PPS1                :1;
        unsigned RC5PPS2                :1;
        unsigned RC5PPS3                :1;
        unsigned RC5PPS4                :1;
        unsigned RC5PPS5                :1;
    };
} RC5PPSbits_t;
extern volatile RC5PPSbits_t RC5PPSbits __at(0x1F25);
// bitfield macros
#define _RC5PPS_RC5PPS_POSN                                 0x0
#define _RC5PPS_RC5PPS_POSITION                             0x0
#define _RC5PPS_RC5PPS_SIZE                                 0x6
#define _RC5PPS_RC5PPS_LENGTH                               0x6
#define _RC5PPS_RC5PPS_MASK                                 0x3F
#define _RC5PPS_RC5PPS0_POSN                                0x0
#define _RC5PPS_RC5PPS0_POSITION                            0x0
#define _RC5PPS_RC5PPS0_SIZE                                0x1
#define _RC5PPS_RC5PPS0_LENGTH                              0x1
#define _RC5PPS_RC5PPS0_MASK                                0x1
#define _RC5PPS_RC5PPS1_POSN                                0x1
#define _RC5PPS_RC5PPS1_POSITION                            0x1
#define _RC5PPS_RC5PPS1_SIZE                                0x1
#define _RC5PPS_RC5PPS1_LENGTH                              0x1
#define _RC5PPS_RC5PPS1_MASK                                0x2
#define _RC5PPS_RC5PPS2_POSN                                0x2
#define _RC5PPS_RC5PPS2_POSITION                            0x2
#define _RC5PPS_RC5PPS2_SIZE                                0x1
#define _RC5PPS_RC5PPS2_LENGTH                              0x1
#define _RC5PPS_RC5PPS2_MASK                                0x4
#define _RC5PPS_RC5PPS3_POSN                                0x3
#define _RC5PPS_RC5PPS3_POSITION                            0x3
#define _RC5PPS_RC5PPS3_SIZE                                0x1
#define _RC5PPS_RC5PPS3_LENGTH                              0x1
#define _RC5PPS_RC5PPS3_MASK                                0x8
#define _RC5PPS_RC5PPS4_POSN                                0x4
#define _RC5PPS_RC5PPS4_POSITION                            0x4
#define _RC5PPS_RC5PPS4_SIZE                                0x1
#define _RC5PPS_RC5PPS4_LENGTH                              0x1
#define _RC5PPS_RC5PPS4_MASK                                0x10
#define _RC5PPS_RC5PPS5_POSN                                0x5
#define _RC5PPS_RC5PPS5_POSITION                            0x5
#define _RC5PPS_RC5PPS5_SIZE                                0x1
#define _RC5PPS_RC5PPS5_LENGTH                              0x1
#define _RC5PPS_RC5PPS5_MASK                                0x20

// Register: RC6PPS
#define RC6PPS RC6PPS
extern volatile unsigned char           RC6PPS              __at(0x1F26);
#ifndef _LIB_BUILD
asm("RC6PPS equ 01F26h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC6PPS                 :6;
    };
    struct {
        unsigned RC6PPS0                :1;
        unsigned RC6PPS1                :1;
        unsigned RC6PPS2                :1;
        unsigned RC6PPS3                :1;
        unsigned RC6PPS4                :1;
        unsigned RC6PPS5                :1;
    };
} RC6PPSbits_t;
extern volatile RC6PPSbits_t RC6PPSbits __at(0x1F26);
// bitfield macros
#define _RC6PPS_RC6PPS_POSN                                 0x0
#define _RC6PPS_RC6PPS_POSITION                             0x0
#define _RC6PPS_RC6PPS_SIZE                                 0x6
#define _RC6PPS_RC6PPS_LENGTH                               0x6
#define _RC6PPS_RC6PPS_MASK                                 0x3F
#define _RC6PPS_RC6PPS0_POSN                                0x0
#define _RC6PPS_RC6PPS0_POSITION                            0x0
#define _RC6PPS_RC6PPS0_SIZE                                0x1
#define _RC6PPS_RC6PPS0_LENGTH                              0x1
#define _RC6PPS_RC6PPS0_MASK                                0x1
#define _RC6PPS_RC6PPS1_POSN                                0x1
#define _RC6PPS_RC6PPS1_POSITION                            0x1
#define _RC6PPS_RC6PPS1_SIZE                                0x1
#define _RC6PPS_RC6PPS1_LENGTH                              0x1
#define _RC6PPS_RC6PPS1_MASK                                0x2
#define _RC6PPS_RC6PPS2_POSN                                0x2
#define _RC6PPS_RC6PPS2_POSITION                            0x2
#define _RC6PPS_RC6PPS2_SIZE                                0x1
#define _RC6PPS_RC6PPS2_LENGTH                              0x1
#define _RC6PPS_RC6PPS2_MASK                                0x4
#define _RC6PPS_RC6PPS3_POSN                                0x3
#define _RC6PPS_RC6PPS3_POSITION                            0x3
#define _RC6PPS_RC6PPS3_SIZE                                0x1
#define _RC6PPS_RC6PPS3_LENGTH                              0x1
#define _RC6PPS_RC6PPS3_MASK                                0x8
#define _RC6PPS_RC6PPS4_POSN                                0x4
#define _RC6PPS_RC6PPS4_POSITION                            0x4
#define _RC6PPS_RC6PPS4_SIZE                                0x1
#define _RC6PPS_RC6PPS4_LENGTH                              0x1
#define _RC6PPS_RC6PPS4_MASK                                0x10
#define _RC6PPS_RC6PPS5_POSN                                0x5
#define _RC6PPS_RC6PPS5_POSITION                            0x5
#define _RC6PPS_RC6PPS5_SIZE                                0x1
#define _RC6PPS_RC6PPS5_LENGTH                              0x1
#define _RC6PPS_RC6PPS5_MASK                                0x20

// Register: RC7PPS
#define RC7PPS RC7PPS
extern volatile unsigned char           RC7PPS              __at(0x1F27);
#ifndef _LIB_BUILD
asm("RC7PPS equ 01F27h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC7PPS                 :6;
    };
    struct {
        unsigned RC7PPS0                :1;
        unsigned RC7PPS1                :1;
        unsigned RC7PPS2                :1;
        unsigned RC7PPS3                :1;
        unsigned RC7PPS4                :1;
        unsigned RC7PPS5                :1;
    };
} RC7PPSbits_t;
extern volatile RC7PPSbits_t RC7PPSbits __at(0x1F27);
// bitfield macros
#define _RC7PPS_RC7PPS_POSN                                 0x0
#define _RC7PPS_RC7PPS_POSITION                             0x0
#define _RC7PPS_RC7PPS_SIZE                                 0x6
#define _RC7PPS_RC7PPS_LENGTH                               0x6
#define _RC7PPS_RC7PPS_MASK                                 0x3F
#define _RC7PPS_RC7PPS0_POSN                                0x0
#define _RC7PPS_RC7PPS0_POSITION                            0x0
#define _RC7PPS_RC7PPS0_SIZE                                0x1
#define _RC7PPS_RC7PPS0_LENGTH                              0x1
#define _RC7PPS_RC7PPS0_MASK                                0x1
#define _RC7PPS_RC7PPS1_POSN                                0x1
#define _RC7PPS_RC7PPS1_POSITION                            0x1
#define _RC7PPS_RC7PPS1_SIZE                                0x1
#define _RC7PPS_RC7PPS1_LENGTH                              0x1
#define _RC7PPS_RC7PPS1_MASK                                0x2
#define _RC7PPS_RC7PPS2_POSN                                0x2
#define _RC7PPS_RC7PPS2_POSITION                            0x2
#define _RC7PPS_RC7PPS2_SIZE                                0x1
#define _RC7PPS_RC7PPS2_LENGTH                              0x1
#define _RC7PPS_RC7PPS2_MASK                                0x4
#define _RC7PPS_RC7PPS3_POSN                                0x3
#define _RC7PPS_RC7PPS3_POSITION                            0x3
#define _RC7PPS_RC7PPS3_SIZE                                0x1
#define _RC7PPS_RC7PPS3_LENGTH                              0x1
#define _RC7PPS_RC7PPS3_MASK                                0x8
#define _RC7PPS_RC7PPS4_POSN                                0x4
#define _RC7PPS_RC7PPS4_POSITION                            0x4
#define _RC7PPS_RC7PPS4_SIZE                                0x1
#define _RC7PPS_RC7PPS4_LENGTH                              0x1
#define _RC7PPS_RC7PPS4_MASK                                0x10
#define _RC7PPS_RC7PPS5_POSN                                0x5
#define _RC7PPS_RC7PPS5_POSITION                            0x5
#define _RC7PPS_RC7PPS5_SIZE                                0x1
#define _RC7PPS_RC7PPS5_LENGTH                              0x1
#define _RC7PPS_RC7PPS5_MASK                                0x20

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0x1F38);
#ifndef _LIB_BUILD
asm("ANSELA equ 01F38h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSA0                  :1;
        unsigned ANSA1                  :1;
        unsigned ANSA2                  :1;
        unsigned                        :1;
        unsigned ANSA4                  :1;
        unsigned ANSA5                  :1;
    };
} ANSELAbits_t;
extern volatile ANSELAbits_t ANSELAbits __at(0x1F38);
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
#define _ANSELA_ANSA4_POSN                                  0x4
#define _ANSELA_ANSA4_POSITION                              0x4
#define _ANSELA_ANSA4_SIZE                                  0x1
#define _ANSELA_ANSA4_LENGTH                                0x1
#define _ANSELA_ANSA4_MASK                                  0x10
#define _ANSELA_ANSA5_POSN                                  0x5
#define _ANSELA_ANSA5_POSITION                              0x5
#define _ANSELA_ANSA5_SIZE                                  0x1
#define _ANSELA_ANSA5_LENGTH                                0x1
#define _ANSELA_ANSA5_MASK                                  0x20

// Register: WPUA
#define WPUA WPUA
extern volatile unsigned char           WPUA                __at(0x1F39);
#ifndef _LIB_BUILD
asm("WPUA equ 01F39h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
        unsigned WPUA3                  :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
    };
} WPUAbits_t;
extern volatile WPUAbits_t WPUAbits __at(0x1F39);
// bitfield macros
#define _WPUA_WPUA0_POSN                                    0x0
#define _WPUA_WPUA0_POSITION                                0x0
#define _WPUA_WPUA0_SIZE                                    0x1
#define _WPUA_WPUA0_LENGTH                                  0x1
#define _WPUA_WPUA0_MASK                                    0x1
#define _WPUA_WPUA1_POSN                                    0x1
#define _WPUA_WPUA1_POSITION                                0x1
#define _WPUA_WPUA1_SIZE                                    0x1
#define _WPUA_WPUA1_LENGTH                                  0x1
#define _WPUA_WPUA1_MASK                                    0x2
#define _WPUA_WPUA2_POSN                                    0x2
#define _WPUA_WPUA2_POSITION                                0x2
#define _WPUA_WPUA2_SIZE                                    0x1
#define _WPUA_WPUA2_LENGTH                                  0x1
#define _WPUA_WPUA2_MASK                                    0x4
#define _WPUA_WPUA3_POSN                                    0x3
#define _WPUA_WPUA3_POSITION                                0x3
#define _WPUA_WPUA3_SIZE                                    0x1
#define _WPUA_WPUA3_LENGTH                                  0x1
#define _WPUA_WPUA3_MASK                                    0x8
#define _WPUA_WPUA4_POSN                                    0x4
#define _WPUA_WPUA4_POSITION                                0x4
#define _WPUA_WPUA4_SIZE                                    0x1
#define _WPUA_WPUA4_LENGTH                                  0x1
#define _WPUA_WPUA4_MASK                                    0x10
#define _WPUA_WPUA5_POSN                                    0x5
#define _WPUA_WPUA5_POSITION                                0x5
#define _WPUA_WPUA5_SIZE                                    0x1
#define _WPUA_WPUA5_LENGTH                                  0x1
#define _WPUA_WPUA5_MASK                                    0x20

// Register: ODCONA
#define ODCONA ODCONA
extern volatile unsigned char           ODCONA              __at(0x1F3A);
#ifndef _LIB_BUILD
asm("ODCONA equ 01F3Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODCA0                  :1;
        unsigned ODCA1                  :1;
        unsigned ODCA2                  :1;
        unsigned                        :1;
        unsigned ODCA4                  :1;
        unsigned ODCA5                  :1;
    };
} ODCONAbits_t;
extern volatile ODCONAbits_t ODCONAbits __at(0x1F3A);
// bitfield macros
#define _ODCONA_ODCA0_POSN                                  0x0
#define _ODCONA_ODCA0_POSITION                              0x0
#define _ODCONA_ODCA0_SIZE                                  0x1
#define _ODCONA_ODCA0_LENGTH                                0x1
#define _ODCONA_ODCA0_MASK                                  0x1
#define _ODCONA_ODCA1_POSN                                  0x1
#define _ODCONA_ODCA1_POSITION                              0x1
#define _ODCONA_ODCA1_SIZE                                  0x1
#define _ODCONA_ODCA1_LENGTH                                0x1
#define _ODCONA_ODCA1_MASK                                  0x2
#define _ODCONA_ODCA2_POSN                                  0x2
#define _ODCONA_ODCA2_POSITION                              0x2
#define _ODCONA_ODCA2_SIZE                                  0x1
#define _ODCONA_ODCA2_LENGTH                                0x1
#define _ODCONA_ODCA2_MASK                                  0x4
#define _ODCONA_ODCA4_POSN                                  0x4
#define _ODCONA_ODCA4_POSITION                              0x4
#define _ODCONA_ODCA4_SIZE                                  0x1
#define _ODCONA_ODCA4_LENGTH                                0x1
#define _ODCONA_ODCA4_MASK                                  0x10
#define _ODCONA_ODCA5_POSN                                  0x5
#define _ODCONA_ODCA5_POSITION                              0x5
#define _ODCONA_ODCA5_SIZE                                  0x1
#define _ODCONA_ODCA5_LENGTH                                0x1
#define _ODCONA_ODCA5_MASK                                  0x20

// Register: SLRCONA
#define SLRCONA SLRCONA
extern volatile unsigned char           SLRCONA             __at(0x1F3B);
#ifndef _LIB_BUILD
asm("SLRCONA equ 01F3Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRA0                  :1;
        unsigned SLRA1                  :1;
        unsigned SLRA2                  :1;
        unsigned                        :1;
        unsigned SLRA4                  :1;
        unsigned SLRA5                  :1;
    };
} SLRCONAbits_t;
extern volatile SLRCONAbits_t SLRCONAbits __at(0x1F3B);
// bitfield macros
#define _SLRCONA_SLRA0_POSN                                 0x0
#define _SLRCONA_SLRA0_POSITION                             0x0
#define _SLRCONA_SLRA0_SIZE                                 0x1
#define _SLRCONA_SLRA0_LENGTH                               0x1
#define _SLRCONA_SLRA0_MASK                                 0x1
#define _SLRCONA_SLRA1_POSN                                 0x1
#define _SLRCONA_SLRA1_POSITION                             0x1
#define _SLRCONA_SLRA1_SIZE                                 0x1
#define _SLRCONA_SLRA1_LENGTH                               0x1
#define _SLRCONA_SLRA1_MASK                                 0x2
#define _SLRCONA_SLRA2_POSN                                 0x2
#define _SLRCONA_SLRA2_POSITION                             0x2
#define _SLRCONA_SLRA2_SIZE                                 0x1
#define _SLRCONA_SLRA2_LENGTH                               0x1
#define _SLRCONA_SLRA2_MASK                                 0x4
#define _SLRCONA_SLRA4_POSN                                 0x4
#define _SLRCONA_SLRA4_POSITION                             0x4
#define _SLRCONA_SLRA4_SIZE                                 0x1
#define _SLRCONA_SLRA4_LENGTH                               0x1
#define _SLRCONA_SLRA4_MASK                                 0x10
#define _SLRCONA_SLRA5_POSN                                 0x5
#define _SLRCONA_SLRA5_POSITION                             0x5
#define _SLRCONA_SLRA5_SIZE                                 0x1
#define _SLRCONA_SLRA5_LENGTH                               0x1
#define _SLRCONA_SLRA5_MASK                                 0x20

// Register: INLVLA
#define INLVLA INLVLA
extern volatile unsigned char           INLVLA              __at(0x1F3C);
#ifndef _LIB_BUILD
asm("INLVLA equ 01F3Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INLVLA0                :1;
        unsigned INLVLA1                :1;
        unsigned INLVLA2                :1;
        unsigned INLVLA3                :1;
        unsigned INLVLA4                :1;
        unsigned INLVLA5                :1;
    };
} INLVLAbits_t;
extern volatile INLVLAbits_t INLVLAbits __at(0x1F3C);
// bitfield macros
#define _INLVLA_INLVLA0_POSN                                0x0
#define _INLVLA_INLVLA0_POSITION                            0x0
#define _INLVLA_INLVLA0_SIZE                                0x1
#define _INLVLA_INLVLA0_LENGTH                              0x1
#define _INLVLA_INLVLA0_MASK                                0x1
#define _INLVLA_INLVLA1_POSN                                0x1
#define _INLVLA_INLVLA1_POSITION                            0x1
#define _INLVLA_INLVLA1_SIZE                                0x1
#define _INLVLA_INLVLA1_LENGTH                              0x1
#define _INLVLA_INLVLA1_MASK                                0x2
#define _INLVLA_INLVLA2_POSN                                0x2
#define _INLVLA_INLVLA2_POSITION                            0x2
#define _INLVLA_INLVLA2_SIZE                                0x1
#define _INLVLA_INLVLA2_LENGTH                              0x1
#define _INLVLA_INLVLA2_MASK                                0x4
#define _INLVLA_INLVLA3_POSN                                0x3
#define _INLVLA_INLVLA3_POSITION                            0x3
#define _INLVLA_INLVLA3_SIZE                                0x1
#define _INLVLA_INLVLA3_LENGTH                              0x1
#define _INLVLA_INLVLA3_MASK                                0x8
#define _INLVLA_INLVLA4_POSN                                0x4
#define _INLVLA_INLVLA4_POSITION                            0x4
#define _INLVLA_INLVLA4_SIZE                                0x1
#define _INLVLA_INLVLA4_LENGTH                              0x1
#define _INLVLA_INLVLA4_MASK                                0x10
#define _INLVLA_INLVLA5_POSN                                0x5
#define _INLVLA_INLVLA5_POSITION                            0x5
#define _INLVLA_INLVLA5_SIZE                                0x1
#define _INLVLA_INLVLA5_LENGTH                              0x1
#define _INLVLA_INLVLA5_MASK                                0x20

// Register: IOCAP
#define IOCAP IOCAP
extern volatile unsigned char           IOCAP               __at(0x1F3D);
#ifndef _LIB_BUILD
asm("IOCAP equ 01F3Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAP0                 :1;
        unsigned IOCAP1                 :1;
        unsigned IOCAP2                 :1;
        unsigned IOCAP3                 :1;
        unsigned IOCAP4                 :1;
        unsigned IOCAP5                 :1;
    };
} IOCAPbits_t;
extern volatile IOCAPbits_t IOCAPbits __at(0x1F3D);
// bitfield macros
#define _IOCAP_IOCAP0_POSN                                  0x0
#define _IOCAP_IOCAP0_POSITION                              0x0
#define _IOCAP_IOCAP0_SIZE                                  0x1
#define _IOCAP_IOCAP0_LENGTH                                0x1
#define _IOCAP_IOCAP0_MASK                                  0x1
#define _IOCAP_IOCAP1_POSN                                  0x1
#define _IOCAP_IOCAP1_POSITION                              0x1
#define _IOCAP_IOCAP1_SIZE                                  0x1
#define _IOCAP_IOCAP1_LENGTH                                0x1
#define _IOCAP_IOCAP1_MASK                                  0x2
#define _IOCAP_IOCAP2_POSN                                  0x2
#define _IOCAP_IOCAP2_POSITION                              0x2
#define _IOCAP_IOCAP2_SIZE                                  0x1
#define _IOCAP_IOCAP2_LENGTH                                0x1
#define _IOCAP_IOCAP2_MASK                                  0x4
#define _IOCAP_IOCAP3_POSN                                  0x3
#define _IOCAP_IOCAP3_POSITION                              0x3
#define _IOCAP_IOCAP3_SIZE                                  0x1
#define _IOCAP_IOCAP3_LENGTH                                0x1
#define _IOCAP_IOCAP3_MASK                                  0x8
#define _IOCAP_IOCAP4_POSN                                  0x4
#define _IOCAP_IOCAP4_POSITION                              0x4
#define _IOCAP_IOCAP4_SIZE                                  0x1
#define _IOCAP_IOCAP4_LENGTH                                0x1
#define _IOCAP_IOCAP4_MASK                                  0x10
#define _IOCAP_IOCAP5_POSN                                  0x5
#define _IOCAP_IOCAP5_POSITION                              0x5
#define _IOCAP_IOCAP5_SIZE                                  0x1
#define _IOCAP_IOCAP5_LENGTH                                0x1
#define _IOCAP_IOCAP5_MASK                                  0x20

// Register: IOCAN
#define IOCAN IOCAN
extern volatile unsigned char           IOCAN               __at(0x1F3E);
#ifndef _LIB_BUILD
asm("IOCAN equ 01F3Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAN0                 :1;
        unsigned IOCAN1                 :1;
        unsigned IOCAN2                 :1;
        unsigned IOCAN3                 :1;
        unsigned IOCAN4                 :1;
        unsigned IOCAN5                 :1;
    };
} IOCANbits_t;
extern volatile IOCANbits_t IOCANbits __at(0x1F3E);
// bitfield macros
#define _IOCAN_IOCAN0_POSN                                  0x0
#define _IOCAN_IOCAN0_POSITION                              0x0
#define _IOCAN_IOCAN0_SIZE                                  0x1
#define _IOCAN_IOCAN0_LENGTH                                0x1
#define _IOCAN_IOCAN0_MASK                                  0x1
#define _IOCAN_IOCAN1_POSN                                  0x1
#define _IOCAN_IOCAN1_POSITION                              0x1
#define _IOCAN_IOCAN1_SIZE                                  0x1
#define _IOCAN_IOCAN1_LENGTH                                0x1
#define _IOCAN_IOCAN1_MASK                                  0x2
#define _IOCAN_IOCAN2_POSN                                  0x2
#define _IOCAN_IOCAN2_POSITION                              0x2
#define _IOCAN_IOCAN2_SIZE                                  0x1
#define _IOCAN_IOCAN2_LENGTH                                0x1
#define _IOCAN_IOCAN2_MASK                                  0x4
#define _IOCAN_IOCAN3_POSN                                  0x3
#define _IOCAN_IOCAN3_POSITION                              0x3
#define _IOCAN_IOCAN3_SIZE                                  0x1
#define _IOCAN_IOCAN3_LENGTH                                0x1
#define _IOCAN_IOCAN3_MASK                                  0x8
#define _IOCAN_IOCAN4_POSN                                  0x4
#define _IOCAN_IOCAN4_POSITION                              0x4
#define _IOCAN_IOCAN4_SIZE                                  0x1
#define _IOCAN_IOCAN4_LENGTH                                0x1
#define _IOCAN_IOCAN4_MASK                                  0x10
#define _IOCAN_IOCAN5_POSN                                  0x5
#define _IOCAN_IOCAN5_POSITION                              0x5
#define _IOCAN_IOCAN5_SIZE                                  0x1
#define _IOCAN_IOCAN5_LENGTH                                0x1
#define _IOCAN_IOCAN5_MASK                                  0x20

// Register: IOCAF
#define IOCAF IOCAF
extern volatile unsigned char           IOCAF               __at(0x1F3F);
#ifndef _LIB_BUILD
asm("IOCAF equ 01F3Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAF0                 :1;
        unsigned IOCAF1                 :1;
        unsigned IOCAF2                 :1;
        unsigned IOCAF3                 :1;
        unsigned IOCAF4                 :1;
        unsigned IOCAF5                 :1;
    };
} IOCAFbits_t;
extern volatile IOCAFbits_t IOCAFbits __at(0x1F3F);
// bitfield macros
#define _IOCAF_IOCAF0_POSN                                  0x0
#define _IOCAF_IOCAF0_POSITION                              0x0
#define _IOCAF_IOCAF0_SIZE                                  0x1
#define _IOCAF_IOCAF0_LENGTH                                0x1
#define _IOCAF_IOCAF0_MASK                                  0x1
#define _IOCAF_IOCAF1_POSN                                  0x1
#define _IOCAF_IOCAF1_POSITION                              0x1
#define _IOCAF_IOCAF1_SIZE                                  0x1
#define _IOCAF_IOCAF1_LENGTH                                0x1
#define _IOCAF_IOCAF1_MASK                                  0x2
#define _IOCAF_IOCAF2_POSN                                  0x2
#define _IOCAF_IOCAF2_POSITION                              0x2
#define _IOCAF_IOCAF2_SIZE                                  0x1
#define _IOCAF_IOCAF2_LENGTH                                0x1
#define _IOCAF_IOCAF2_MASK                                  0x4
#define _IOCAF_IOCAF3_POSN                                  0x3
#define _IOCAF_IOCAF3_POSITION                              0x3
#define _IOCAF_IOCAF3_SIZE                                  0x1
#define _IOCAF_IOCAF3_LENGTH                                0x1
#define _IOCAF_IOCAF3_MASK                                  0x8
#define _IOCAF_IOCAF4_POSN                                  0x4
#define _IOCAF_IOCAF4_POSITION                              0x4
#define _IOCAF_IOCAF4_SIZE                                  0x1
#define _IOCAF_IOCAF4_LENGTH                                0x1
#define _IOCAF_IOCAF4_MASK                                  0x10
#define _IOCAF_IOCAF5_POSN                                  0x5
#define _IOCAF_IOCAF5_POSITION                              0x5
#define _IOCAF_IOCAF5_SIZE                                  0x1
#define _IOCAF_IOCAF5_LENGTH                                0x1
#define _IOCAF_IOCAF5_MASK                                  0x20

// Register: ANSELB
#define ANSELB ANSELB
extern volatile unsigned char           ANSELB              __at(0x1F43);
#ifndef _LIB_BUILD
asm("ANSELB equ 01F43h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned ANSB4                  :1;
        unsigned ANSB5                  :1;
        unsigned ANSB6                  :1;
        unsigned ANSB7                  :1;
    };
} ANSELBbits_t;
extern volatile ANSELBbits_t ANSELBbits __at(0x1F43);
// bitfield macros
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
#define _ANSELB_ANSB6_POSN                                  0x6
#define _ANSELB_ANSB6_POSITION                              0x6
#define _ANSELB_ANSB6_SIZE                                  0x1
#define _ANSELB_ANSB6_LENGTH                                0x1
#define _ANSELB_ANSB6_MASK                                  0x40
#define _ANSELB_ANSB7_POSN                                  0x7
#define _ANSELB_ANSB7_POSITION                              0x7
#define _ANSELB_ANSB7_SIZE                                  0x1
#define _ANSELB_ANSB7_LENGTH                                0x1
#define _ANSELB_ANSB7_MASK                                  0x80

// Register: WPUB
#define WPUB WPUB
extern volatile unsigned char           WPUB                __at(0x1F44);
#ifndef _LIB_BUILD
asm("WPUB equ 01F44h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned WPUB4                  :1;
        unsigned WPUB5                  :1;
        unsigned WPUB6                  :1;
        unsigned WPUB7                  :1;
    };
} WPUBbits_t;
extern volatile WPUBbits_t WPUBbits __at(0x1F44);
// bitfield macros
#define _WPUB_WPUB4_POSN                                    0x4
#define _WPUB_WPUB4_POSITION                                0x4
#define _WPUB_WPUB4_SIZE                                    0x1
#define _WPUB_WPUB4_LENGTH                                  0x1
#define _WPUB_WPUB4_MASK                                    0x10
#define _WPUB_WPUB5_POSN                                    0x5
#define _WPUB_WPUB5_POSITION                                0x5
#define _WPUB_WPUB5_SIZE                                    0x1
#define _WPUB_WPUB5_LENGTH                                  0x1
#define _WPUB_WPUB5_MASK                                    0x20
#define _WPUB_WPUB6_POSN                                    0x6
#define _WPUB_WPUB6_POSITION                                0x6
#define _WPUB_WPUB6_SIZE                                    0x1
#define _WPUB_WPUB6_LENGTH                                  0x1
#define _WPUB_WPUB6_MASK                                    0x40
#define _WPUB_WPUB7_POSN                                    0x7
#define _WPUB_WPUB7_POSITION                                0x7
#define _WPUB_WPUB7_SIZE                                    0x1
#define _WPUB_WPUB7_LENGTH                                  0x1
#define _WPUB_WPUB7_MASK                                    0x80

// Register: ODCONB
#define ODCONB ODCONB
extern volatile unsigned char           ODCONB              __at(0x1F45);
#ifndef _LIB_BUILD
asm("ODCONB equ 01F45h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned ODCB4                  :1;
        unsigned ODCB5                  :1;
        unsigned ODCB6                  :1;
        unsigned ODCB7                  :1;
    };
} ODCONBbits_t;
extern volatile ODCONBbits_t ODCONBbits __at(0x1F45);
// bitfield macros
#define _ODCONB_ODCB4_POSN                                  0x4
#define _ODCONB_ODCB4_POSITION                              0x4
#define _ODCONB_ODCB4_SIZE                                  0x1
#define _ODCONB_ODCB4_LENGTH                                0x1
#define _ODCONB_ODCB4_MASK                                  0x10
#define _ODCONB_ODCB5_POSN                                  0x5
#define _ODCONB_ODCB5_POSITION                              0x5
#define _ODCONB_ODCB5_SIZE                                  0x1
#define _ODCONB_ODCB5_LENGTH                                0x1
#define _ODCONB_ODCB5_MASK                                  0x20
#define _ODCONB_ODCB6_POSN                                  0x6
#define _ODCONB_ODCB6_POSITION                              0x6
#define _ODCONB_ODCB6_SIZE                                  0x1
#define _ODCONB_ODCB6_LENGTH                                0x1
#define _ODCONB_ODCB6_MASK                                  0x40
#define _ODCONB_ODCB7_POSN                                  0x7
#define _ODCONB_ODCB7_POSITION                              0x7
#define _ODCONB_ODCB7_SIZE                                  0x1
#define _ODCONB_ODCB7_LENGTH                                0x1
#define _ODCONB_ODCB7_MASK                                  0x80

// Register: SLRCONB
#define SLRCONB SLRCONB
extern volatile unsigned char           SLRCONB             __at(0x1F46);
#ifndef _LIB_BUILD
asm("SLRCONB equ 01F46h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned SLRB4                  :1;
        unsigned SLRB5                  :1;
        unsigned SLRB6                  :1;
        unsigned SLRB7                  :1;
    };
} SLRCONBbits_t;
extern volatile SLRCONBbits_t SLRCONBbits __at(0x1F46);
// bitfield macros
#define _SLRCONB_SLRB4_POSN                                 0x4
#define _SLRCONB_SLRB4_POSITION                             0x4
#define _SLRCONB_SLRB4_SIZE                                 0x1
#define _SLRCONB_SLRB4_LENGTH                               0x1
#define _SLRCONB_SLRB4_MASK                                 0x10
#define _SLRCONB_SLRB5_POSN                                 0x5
#define _SLRCONB_SLRB5_POSITION                             0x5
#define _SLRCONB_SLRB5_SIZE                                 0x1
#define _SLRCONB_SLRB5_LENGTH                               0x1
#define _SLRCONB_SLRB5_MASK                                 0x20
#define _SLRCONB_SLRB6_POSN                                 0x6
#define _SLRCONB_SLRB6_POSITION                             0x6
#define _SLRCONB_SLRB6_SIZE                                 0x1
#define _SLRCONB_SLRB6_LENGTH                               0x1
#define _SLRCONB_SLRB6_MASK                                 0x40
#define _SLRCONB_SLRB7_POSN                                 0x7
#define _SLRCONB_SLRB7_POSITION                             0x7
#define _SLRCONB_SLRB7_SIZE                                 0x1
#define _SLRCONB_SLRB7_LENGTH                               0x1
#define _SLRCONB_SLRB7_MASK                                 0x80

// Register: INLVLB
#define INLVLB INLVLB
extern volatile unsigned char           INLVLB              __at(0x1F47);
#ifndef _LIB_BUILD
asm("INLVLB equ 01F47h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned INLVLB4                :1;
        unsigned INLVLB5                :1;
        unsigned INLVLB6                :1;
        unsigned INLVLB7                :1;
    };
} INLVLBbits_t;
extern volatile INLVLBbits_t INLVLBbits __at(0x1F47);
// bitfield macros
#define _INLVLB_INLVLB4_POSN                                0x4
#define _INLVLB_INLVLB4_POSITION                            0x4
#define _INLVLB_INLVLB4_SIZE                                0x1
#define _INLVLB_INLVLB4_LENGTH                              0x1
#define _INLVLB_INLVLB4_MASK                                0x10
#define _INLVLB_INLVLB5_POSN                                0x5
#define _INLVLB_INLVLB5_POSITION                            0x5
#define _INLVLB_INLVLB5_SIZE                                0x1
#define _INLVLB_INLVLB5_LENGTH                              0x1
#define _INLVLB_INLVLB5_MASK                                0x20
#define _INLVLB_INLVLB6_POSN                                0x6
#define _INLVLB_INLVLB6_POSITION                            0x6
#define _INLVLB_INLVLB6_SIZE                                0x1
#define _INLVLB_INLVLB6_LENGTH                              0x1
#define _INLVLB_INLVLB6_MASK                                0x40
#define _INLVLB_INLVLB7_POSN                                0x7
#define _INLVLB_INLVLB7_POSITION                            0x7
#define _INLVLB_INLVLB7_SIZE                                0x1
#define _INLVLB_INLVLB7_LENGTH                              0x1
#define _INLVLB_INLVLB7_MASK                                0x80

// Register: IOCBP
#define IOCBP IOCBP
extern volatile unsigned char           IOCBP               __at(0x1F48);
#ifndef _LIB_BUILD
asm("IOCBP equ 01F48h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCBP4                 :1;
        unsigned IOCBP5                 :1;
        unsigned IOCBP6                 :1;
        unsigned IOCBP7                 :1;
    };
} IOCBPbits_t;
extern volatile IOCBPbits_t IOCBPbits __at(0x1F48);
// bitfield macros
#define _IOCBP_IOCBP4_POSN                                  0x4
#define _IOCBP_IOCBP4_POSITION                              0x4
#define _IOCBP_IOCBP4_SIZE                                  0x1
#define _IOCBP_IOCBP4_LENGTH                                0x1
#define _IOCBP_IOCBP4_MASK                                  0x10
#define _IOCBP_IOCBP5_POSN                                  0x5
#define _IOCBP_IOCBP5_POSITION                              0x5
#define _IOCBP_IOCBP5_SIZE                                  0x1
#define _IOCBP_IOCBP5_LENGTH                                0x1
#define _IOCBP_IOCBP5_MASK                                  0x20
#define _IOCBP_IOCBP6_POSN                                  0x6
#define _IOCBP_IOCBP6_POSITION                              0x6
#define _IOCBP_IOCBP6_SIZE                                  0x1
#define _IOCBP_IOCBP6_LENGTH                                0x1
#define _IOCBP_IOCBP6_MASK                                  0x40
#define _IOCBP_IOCBP7_POSN                                  0x7
#define _IOCBP_IOCBP7_POSITION                              0x7
#define _IOCBP_IOCBP7_SIZE                                  0x1
#define _IOCBP_IOCBP7_LENGTH                                0x1
#define _IOCBP_IOCBP7_MASK                                  0x80

// Register: IOCBN
#define IOCBN IOCBN
extern volatile unsigned char           IOCBN               __at(0x1F49);
#ifndef _LIB_BUILD
asm("IOCBN equ 01F49h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCBN4                 :1;
        unsigned IOCBN5                 :1;
        unsigned IOCBN6                 :1;
        unsigned IOCBN7                 :1;
    };
} IOCBNbits_t;
extern volatile IOCBNbits_t IOCBNbits __at(0x1F49);
// bitfield macros
#define _IOCBN_IOCBN4_POSN                                  0x4
#define _IOCBN_IOCBN4_POSITION                              0x4
#define _IOCBN_IOCBN4_SIZE                                  0x1
#define _IOCBN_IOCBN4_LENGTH                                0x1
#define _IOCBN_IOCBN4_MASK                                  0x10
#define _IOCBN_IOCBN5_POSN                                  0x5
#define _IOCBN_IOCBN5_POSITION                              0x5
#define _IOCBN_IOCBN5_SIZE                                  0x1
#define _IOCBN_IOCBN5_LENGTH                                0x1
#define _IOCBN_IOCBN5_MASK                                  0x20
#define _IOCBN_IOCBN6_POSN                                  0x6
#define _IOCBN_IOCBN6_POSITION                              0x6
#define _IOCBN_IOCBN6_SIZE                                  0x1
#define _IOCBN_IOCBN6_LENGTH                                0x1
#define _IOCBN_IOCBN6_MASK                                  0x40
#define _IOCBN_IOCBN7_POSN                                  0x7
#define _IOCBN_IOCBN7_POSITION                              0x7
#define _IOCBN_IOCBN7_SIZE                                  0x1
#define _IOCBN_IOCBN7_LENGTH                                0x1
#define _IOCBN_IOCBN7_MASK                                  0x80

// Register: IOCBF
#define IOCBF IOCBF
extern volatile unsigned char           IOCBF               __at(0x1F4A);
#ifndef _LIB_BUILD
asm("IOCBF equ 01F4Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCBF4                 :1;
        unsigned IOCBF5                 :1;
        unsigned IOCBF6                 :1;
        unsigned IOCBF7                 :1;
    };
} IOCBFbits_t;
extern volatile IOCBFbits_t IOCBFbits __at(0x1F4A);
// bitfield macros
#define _IOCBF_IOCBF4_POSN                                  0x4
#define _IOCBF_IOCBF4_POSITION                              0x4
#define _IOCBF_IOCBF4_SIZE                                  0x1
#define _IOCBF_IOCBF4_LENGTH                                0x1
#define _IOCBF_IOCBF4_MASK                                  0x10
#define _IOCBF_IOCBF5_POSN                                  0x5
#define _IOCBF_IOCBF5_POSITION                              0x5
#define _IOCBF_IOCBF5_SIZE                                  0x1
#define _IOCBF_IOCBF5_LENGTH                                0x1
#define _IOCBF_IOCBF5_MASK                                  0x20
#define _IOCBF_IOCBF6_POSN                                  0x6
#define _IOCBF_IOCBF6_POSITION                              0x6
#define _IOCBF_IOCBF6_SIZE                                  0x1
#define _IOCBF_IOCBF6_LENGTH                                0x1
#define _IOCBF_IOCBF6_MASK                                  0x40
#define _IOCBF_IOCBF7_POSN                                  0x7
#define _IOCBF_IOCBF7_POSITION                              0x7
#define _IOCBF_IOCBF7_SIZE                                  0x1
#define _IOCBF_IOCBF7_LENGTH                                0x1
#define _IOCBF_IOCBF7_MASK                                  0x80

// Register: ANSELC
#define ANSELC ANSELC
extern volatile unsigned char           ANSELC              __at(0x1F4E);
#ifndef _LIB_BUILD
asm("ANSELC equ 01F4Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSC0                  :1;
        unsigned ANSC1                  :1;
        unsigned ANSC2                  :1;
        unsigned ANSC3                  :1;
        unsigned ANSC4                  :1;
        unsigned ANSC5                  :1;
        unsigned ANSC6                  :1;
        unsigned ANSC7                  :1;
    };
} ANSELCbits_t;
extern volatile ANSELCbits_t ANSELCbits __at(0x1F4E);
// bitfield macros
#define _ANSELC_ANSC0_POSN                                  0x0
#define _ANSELC_ANSC0_POSITION                              0x0
#define _ANSELC_ANSC0_SIZE                                  0x1
#define _ANSELC_ANSC0_LENGTH                                0x1
#define _ANSELC_ANSC0_MASK                                  0x1
#define _ANSELC_ANSC1_POSN                                  0x1
#define _ANSELC_ANSC1_POSITION                              0x1
#define _ANSELC_ANSC1_SIZE                                  0x1
#define _ANSELC_ANSC1_LENGTH                                0x1
#define _ANSELC_ANSC1_MASK                                  0x2
#define _ANSELC_ANSC2_POSN                                  0x2
#define _ANSELC_ANSC2_POSITION                              0x2
#define _ANSELC_ANSC2_SIZE                                  0x1
#define _ANSELC_ANSC2_LENGTH                                0x1
#define _ANSELC_ANSC2_MASK                                  0x4
#define _ANSELC_ANSC3_POSN                                  0x3
#define _ANSELC_ANSC3_POSITION                              0x3
#define _ANSELC_ANSC3_SIZE                                  0x1
#define _ANSELC_ANSC3_LENGTH                                0x1
#define _ANSELC_ANSC3_MASK                                  0x8
#define _ANSELC_ANSC4_POSN                                  0x4
#define _ANSELC_ANSC4_POSITION                              0x4
#define _ANSELC_ANSC4_SIZE                                  0x1
#define _ANSELC_ANSC4_LENGTH                                0x1
#define _ANSELC_ANSC4_MASK                                  0x10
#define _ANSELC_ANSC5_POSN                                  0x5
#define _ANSELC_ANSC5_POSITION                              0x5
#define _ANSELC_ANSC5_SIZE                                  0x1
#define _ANSELC_ANSC5_LENGTH                                0x1
#define _ANSELC_ANSC5_MASK                                  0x20
#define _ANSELC_ANSC6_POSN                                  0x6
#define _ANSELC_ANSC6_POSITION                              0x6
#define _ANSELC_ANSC6_SIZE                                  0x1
#define _ANSELC_ANSC6_LENGTH                                0x1
#define _ANSELC_ANSC6_MASK                                  0x40
#define _ANSELC_ANSC7_POSN                                  0x7
#define _ANSELC_ANSC7_POSITION                              0x7
#define _ANSELC_ANSC7_SIZE                                  0x1
#define _ANSELC_ANSC7_LENGTH                                0x1
#define _ANSELC_ANSC7_MASK                                  0x80

// Register: WPUC
#define WPUC WPUC
extern volatile unsigned char           WPUC                __at(0x1F4F);
#ifndef _LIB_BUILD
asm("WPUC equ 01F4Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUC0                  :1;
        unsigned WPUC1                  :1;
        unsigned WPUC2                  :1;
        unsigned WPUC3                  :1;
        unsigned WPUC4                  :1;
        unsigned WPUC5                  :1;
        unsigned WPUC6                  :1;
        unsigned WPUC7                  :1;
    };
} WPUCbits_t;
extern volatile WPUCbits_t WPUCbits __at(0x1F4F);
// bitfield macros
#define _WPUC_WPUC0_POSN                                    0x0
#define _WPUC_WPUC0_POSITION                                0x0
#define _WPUC_WPUC0_SIZE                                    0x1
#define _WPUC_WPUC0_LENGTH                                  0x1
#define _WPUC_WPUC0_MASK                                    0x1
#define _WPUC_WPUC1_POSN                                    0x1
#define _WPUC_WPUC1_POSITION                                0x1
#define _WPUC_WPUC1_SIZE                                    0x1
#define _WPUC_WPUC1_LENGTH                                  0x1
#define _WPUC_WPUC1_MASK                                    0x2
#define _WPUC_WPUC2_POSN                                    0x2
#define _WPUC_WPUC2_POSITION                                0x2
#define _WPUC_WPUC2_SIZE                                    0x1
#define _WPUC_WPUC2_LENGTH                                  0x1
#define _WPUC_WPUC2_MASK                                    0x4
#define _WPUC_WPUC3_POSN                                    0x3
#define _WPUC_WPUC3_POSITION                                0x3
#define _WPUC_WPUC3_SIZE                                    0x1
#define _WPUC_WPUC3_LENGTH                                  0x1
#define _WPUC_WPUC3_MASK                                    0x8
#define _WPUC_WPUC4_POSN                                    0x4
#define _WPUC_WPUC4_POSITION                                0x4
#define _WPUC_WPUC4_SIZE                                    0x1
#define _WPUC_WPUC4_LENGTH                                  0x1
#define _WPUC_WPUC4_MASK                                    0x10
#define _WPUC_WPUC5_POSN                                    0x5
#define _WPUC_WPUC5_POSITION                                0x5
#define _WPUC_WPUC5_SIZE                                    0x1
#define _WPUC_WPUC5_LENGTH                                  0x1
#define _WPUC_WPUC5_MASK                                    0x20
#define _WPUC_WPUC6_POSN                                    0x6
#define _WPUC_WPUC6_POSITION                                0x6
#define _WPUC_WPUC6_SIZE                                    0x1
#define _WPUC_WPUC6_LENGTH                                  0x1
#define _WPUC_WPUC6_MASK                                    0x40
#define _WPUC_WPUC7_POSN                                    0x7
#define _WPUC_WPUC7_POSITION                                0x7
#define _WPUC_WPUC7_SIZE                                    0x1
#define _WPUC_WPUC7_LENGTH                                  0x1
#define _WPUC_WPUC7_MASK                                    0x80

// Register: ODCONC
#define ODCONC ODCONC
extern volatile unsigned char           ODCONC              __at(0x1F50);
#ifndef _LIB_BUILD
asm("ODCONC equ 01F50h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODCC0                  :1;
        unsigned ODCC1                  :1;
        unsigned ODCC2                  :1;
        unsigned ODCC3                  :1;
        unsigned ODCC4                  :1;
        unsigned ODCC5                  :1;
        unsigned ODCC6                  :1;
        unsigned ODCC7                  :1;
    };
} ODCONCbits_t;
extern volatile ODCONCbits_t ODCONCbits __at(0x1F50);
// bitfield macros
#define _ODCONC_ODCC0_POSN                                  0x0
#define _ODCONC_ODCC0_POSITION                              0x0
#define _ODCONC_ODCC0_SIZE                                  0x1
#define _ODCONC_ODCC0_LENGTH                                0x1
#define _ODCONC_ODCC0_MASK                                  0x1
#define _ODCONC_ODCC1_POSN                                  0x1
#define _ODCONC_ODCC1_POSITION                              0x1
#define _ODCONC_ODCC1_SIZE                                  0x1
#define _ODCONC_ODCC1_LENGTH                                0x1
#define _ODCONC_ODCC1_MASK                                  0x2
#define _ODCONC_ODCC2_POSN                                  0x2
#define _ODCONC_ODCC2_POSITION                              0x2
#define _ODCONC_ODCC2_SIZE                                  0x1
#define _ODCONC_ODCC2_LENGTH                                0x1
#define _ODCONC_ODCC2_MASK                                  0x4
#define _ODCONC_ODCC3_POSN                                  0x3
#define _ODCONC_ODCC3_POSITION                              0x3
#define _ODCONC_ODCC3_SIZE                                  0x1
#define _ODCONC_ODCC3_LENGTH                                0x1
#define _ODCONC_ODCC3_MASK                                  0x8
#define _ODCONC_ODCC4_POSN                                  0x4
#define _ODCONC_ODCC4_POSITION                              0x4
#define _ODCONC_ODCC4_SIZE                                  0x1
#define _ODCONC_ODCC4_LENGTH                                0x1
#define _ODCONC_ODCC4_MASK                                  0x10
#define _ODCONC_ODCC5_POSN                                  0x5
#define _ODCONC_ODCC5_POSITION                              0x5
#define _ODCONC_ODCC5_SIZE                                  0x1
#define _ODCONC_ODCC5_LENGTH                                0x1
#define _ODCONC_ODCC5_MASK                                  0x20
#define _ODCONC_ODCC6_POSN                                  0x6
#define _ODCONC_ODCC6_POSITION                              0x6
#define _ODCONC_ODCC6_SIZE                                  0x1
#define _ODCONC_ODCC6_LENGTH                                0x1
#define _ODCONC_ODCC6_MASK                                  0x40
#define _ODCONC_ODCC7_POSN                                  0x7
#define _ODCONC_ODCC7_POSITION                              0x7
#define _ODCONC_ODCC7_SIZE                                  0x1
#define _ODCONC_ODCC7_LENGTH                                0x1
#define _ODCONC_ODCC7_MASK                                  0x80

// Register: SLRCONC
#define SLRCONC SLRCONC
extern volatile unsigned char           SLRCONC             __at(0x1F51);
#ifndef _LIB_BUILD
asm("SLRCONC equ 01F51h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRC0                  :1;
        unsigned SLRC1                  :1;
        unsigned SLRC2                  :1;
        unsigned SLRC3                  :1;
        unsigned SLRC4                  :1;
        unsigned SLRC5                  :1;
        unsigned SLRC6                  :1;
        unsigned SLRC7                  :1;
    };
} SLRCONCbits_t;
extern volatile SLRCONCbits_t SLRCONCbits __at(0x1F51);
// bitfield macros
#define _SLRCONC_SLRC0_POSN                                 0x0
#define _SLRCONC_SLRC0_POSITION                             0x0
#define _SLRCONC_SLRC0_SIZE                                 0x1
#define _SLRCONC_SLRC0_LENGTH                               0x1
#define _SLRCONC_SLRC0_MASK                                 0x1
#define _SLRCONC_SLRC1_POSN                                 0x1
#define _SLRCONC_SLRC1_POSITION                             0x1
#define _SLRCONC_SLRC1_SIZE                                 0x1
#define _SLRCONC_SLRC1_LENGTH                               0x1
#define _SLRCONC_SLRC1_MASK                                 0x2
#define _SLRCONC_SLRC2_POSN                                 0x2
#define _SLRCONC_SLRC2_POSITION                             0x2
#define _SLRCONC_SLRC2_SIZE                                 0x1
#define _SLRCONC_SLRC2_LENGTH                               0x1
#define _SLRCONC_SLRC2_MASK                                 0x4
#define _SLRCONC_SLRC3_POSN                                 0x3
#define _SLRCONC_SLRC3_POSITION                             0x3
#define _SLRCONC_SLRC3_SIZE                                 0x1
#define _SLRCONC_SLRC3_LENGTH                               0x1
#define _SLRCONC_SLRC3_MASK                                 0x8
#define _SLRCONC_SLRC4_POSN                                 0x4
#define _SLRCONC_SLRC4_POSITION                             0x4
#define _SLRCONC_SLRC4_SIZE                                 0x1
#define _SLRCONC_SLRC4_LENGTH                               0x1
#define _SLRCONC_SLRC4_MASK                                 0x10
#define _SLRCONC_SLRC5_POSN                                 0x5
#define _SLRCONC_SLRC5_POSITION                             0x5
#define _SLRCONC_SLRC5_SIZE                                 0x1
#define _SLRCONC_SLRC5_LENGTH                               0x1
#define _SLRCONC_SLRC5_MASK                                 0x20
#define _SLRCONC_SLRC6_POSN                                 0x6
#define _SLRCONC_SLRC6_POSITION                             0x6
#define _SLRCONC_SLRC6_SIZE                                 0x1
#define _SLRCONC_SLRC6_LENGTH                               0x1
#define _SLRCONC_SLRC6_MASK                                 0x40
#define _SLRCONC_SLRC7_POSN                                 0x7
#define _SLRCONC_SLRC7_POSITION                             0x7
#define _SLRCONC_SLRC7_SIZE                                 0x1
#define _SLRCONC_SLRC7_LENGTH                               0x1
#define _SLRCONC_SLRC7_MASK                                 0x80

// Register: INLVLC
#define INLVLC INLVLC
extern volatile unsigned char           INLVLC              __at(0x1F52);
#ifndef _LIB_BUILD
asm("INLVLC equ 01F52h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INLVLC0                :1;
        unsigned INLVLC1                :1;
        unsigned INLVLC2                :1;
        unsigned INLVLC3                :1;
        unsigned INLVLC4                :1;
        unsigned INLVLC5                :1;
        unsigned INLVLC6                :1;
        unsigned INLVLC7                :1;
    };
} INLVLCbits_t;
extern volatile INLVLCbits_t INLVLCbits __at(0x1F52);
// bitfield macros
#define _INLVLC_INLVLC0_POSN                                0x0
#define _INLVLC_INLVLC0_POSITION                            0x0
#define _INLVLC_INLVLC0_SIZE                                0x1
#define _INLVLC_INLVLC0_LENGTH                              0x1
#define _INLVLC_INLVLC0_MASK                                0x1
#define _INLVLC_INLVLC1_POSN                                0x1
#define _INLVLC_INLVLC1_POSITION                            0x1
#define _INLVLC_INLVLC1_SIZE                                0x1
#define _INLVLC_INLVLC1_LENGTH                              0x1
#define _INLVLC_INLVLC1_MASK                                0x2
#define _INLVLC_INLVLC2_POSN                                0x2
#define _INLVLC_INLVLC2_POSITION                            0x2
#define _INLVLC_INLVLC2_SIZE                                0x1
#define _INLVLC_INLVLC2_LENGTH                              0x1
#define _INLVLC_INLVLC2_MASK                                0x4
#define _INLVLC_INLVLC3_POSN                                0x3
#define _INLVLC_INLVLC3_POSITION                            0x3
#define _INLVLC_INLVLC3_SIZE                                0x1
#define _INLVLC_INLVLC3_LENGTH                              0x1
#define _INLVLC_INLVLC3_MASK                                0x8
#define _INLVLC_INLVLC4_POSN                                0x4
#define _INLVLC_INLVLC4_POSITION                            0x4
#define _INLVLC_INLVLC4_SIZE                                0x1
#define _INLVLC_INLVLC4_LENGTH                              0x1
#define _INLVLC_INLVLC4_MASK                                0x10
#define _INLVLC_INLVLC5_POSN                                0x5
#define _INLVLC_INLVLC5_POSITION                            0x5
#define _INLVLC_INLVLC5_SIZE                                0x1
#define _INLVLC_INLVLC5_LENGTH                              0x1
#define _INLVLC_INLVLC5_MASK                                0x20
#define _INLVLC_INLVLC6_POSN                                0x6
#define _INLVLC_INLVLC6_POSITION                            0x6
#define _INLVLC_INLVLC6_SIZE                                0x1
#define _INLVLC_INLVLC6_LENGTH                              0x1
#define _INLVLC_INLVLC6_MASK                                0x40
#define _INLVLC_INLVLC7_POSN                                0x7
#define _INLVLC_INLVLC7_POSITION                            0x7
#define _INLVLC_INLVLC7_SIZE                                0x1
#define _INLVLC_INLVLC7_LENGTH                              0x1
#define _INLVLC_INLVLC7_MASK                                0x80

// Register: IOCCP
#define IOCCP IOCCP
extern volatile unsigned char           IOCCP               __at(0x1F53);
#ifndef _LIB_BUILD
asm("IOCCP equ 01F53h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCP0                 :1;
        unsigned IOCCP1                 :1;
        unsigned IOCCP2                 :1;
        unsigned IOCCP3                 :1;
        unsigned IOCCP4                 :1;
        unsigned IOCCP5                 :1;
        unsigned IOCCP6                 :1;
        unsigned IOCCP7                 :1;
    };
} IOCCPbits_t;
extern volatile IOCCPbits_t IOCCPbits __at(0x1F53);
// bitfield macros
#define _IOCCP_IOCCP0_POSN                                  0x0
#define _IOCCP_IOCCP0_POSITION                              0x0
#define _IOCCP_IOCCP0_SIZE                                  0x1
#define _IOCCP_IOCCP0_LENGTH                                0x1
#define _IOCCP_IOCCP0_MASK                                  0x1
#define _IOCCP_IOCCP1_POSN                                  0x1
#define _IOCCP_IOCCP1_POSITION                              0x1
#define _IOCCP_IOCCP1_SIZE                                  0x1
#define _IOCCP_IOCCP1_LENGTH                                0x1
#define _IOCCP_IOCCP1_MASK                                  0x2
#define _IOCCP_IOCCP2_POSN                                  0x2
#define _IOCCP_IOCCP2_POSITION                              0x2
#define _IOCCP_IOCCP2_SIZE                                  0x1
#define _IOCCP_IOCCP2_LENGTH                                0x1
#define _IOCCP_IOCCP2_MASK                                  0x4
#define _IOCCP_IOCCP3_POSN                                  0x3
#define _IOCCP_IOCCP3_POSITION                              0x3
#define _IOCCP_IOCCP3_SIZE                                  0x1
#define _IOCCP_IOCCP3_LENGTH                                0x1
#define _IOCCP_IOCCP3_MASK                                  0x8
#define _IOCCP_IOCCP4_POSN                                  0x4
#define _IOCCP_IOCCP4_POSITION                              0x4
#define _IOCCP_IOCCP4_SIZE                                  0x1
#define _IOCCP_IOCCP4_LENGTH                                0x1
#define _IOCCP_IOCCP4_MASK                                  0x10
#define _IOCCP_IOCCP5_POSN                                  0x5
#define _IOCCP_IOCCP5_POSITION                              0x5
#define _IOCCP_IOCCP5_SIZE                                  0x1
#define _IOCCP_IOCCP5_LENGTH                                0x1
#define _IOCCP_IOCCP5_MASK                                  0x20
#define _IOCCP_IOCCP6_POSN                                  0x6
#define _IOCCP_IOCCP6_POSITION                              0x6
#define _IOCCP_IOCCP6_SIZE                                  0x1
#define _IOCCP_IOCCP6_LENGTH                                0x1
#define _IOCCP_IOCCP6_MASK                                  0x40
#define _IOCCP_IOCCP7_POSN                                  0x7
#define _IOCCP_IOCCP7_POSITION                              0x7
#define _IOCCP_IOCCP7_SIZE                                  0x1
#define _IOCCP_IOCCP7_LENGTH                                0x1
#define _IOCCP_IOCCP7_MASK                                  0x80

// Register: IOCCN
#define IOCCN IOCCN
extern volatile unsigned char           IOCCN               __at(0x1F54);
#ifndef _LIB_BUILD
asm("IOCCN equ 01F54h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCN0                 :1;
        unsigned IOCCN1                 :1;
        unsigned IOCCN2                 :1;
        unsigned IOCCN3                 :1;
        unsigned IOCCN4                 :1;
        unsigned IOCCN5                 :1;
        unsigned IOCCN6                 :1;
        unsigned IOCCN7                 :1;
    };
} IOCCNbits_t;
extern volatile IOCCNbits_t IOCCNbits __at(0x1F54);
// bitfield macros
#define _IOCCN_IOCCN0_POSN                                  0x0
#define _IOCCN_IOCCN0_POSITION                              0x0
#define _IOCCN_IOCCN0_SIZE                                  0x1
#define _IOCCN_IOCCN0_LENGTH                                0x1
#define _IOCCN_IOCCN0_MASK                                  0x1
#define _IOCCN_IOCCN1_POSN                                  0x1
#define _IOCCN_IOCCN1_POSITION                              0x1
#define _IOCCN_IOCCN1_SIZE                                  0x1
#define _IOCCN_IOCCN1_LENGTH                                0x1
#define _IOCCN_IOCCN1_MASK                                  0x2
#define _IOCCN_IOCCN2_POSN                                  0x2
#define _IOCCN_IOCCN2_POSITION                              0x2
#define _IOCCN_IOCCN2_SIZE                                  0x1
#define _IOCCN_IOCCN2_LENGTH                                0x1
#define _IOCCN_IOCCN2_MASK                                  0x4
#define _IOCCN_IOCCN3_POSN                                  0x3
#define _IOCCN_IOCCN3_POSITION                              0x3
#define _IOCCN_IOCCN3_SIZE                                  0x1
#define _IOCCN_IOCCN3_LENGTH                                0x1
#define _IOCCN_IOCCN3_MASK                                  0x8
#define _IOCCN_IOCCN4_POSN                                  0x4
#define _IOCCN_IOCCN4_POSITION                              0x4
#define _IOCCN_IOCCN4_SIZE                                  0x1
#define _IOCCN_IOCCN4_LENGTH                                0x1
#define _IOCCN_IOCCN4_MASK                                  0x10
#define _IOCCN_IOCCN5_POSN                                  0x5
#define _IOCCN_IOCCN5_POSITION                              0x5
#define _IOCCN_IOCCN5_SIZE                                  0x1
#define _IOCCN_IOCCN5_LENGTH                                0x1
#define _IOCCN_IOCCN5_MASK                                  0x20
#define _IOCCN_IOCCN6_POSN                                  0x6
#define _IOCCN_IOCCN6_POSITION                              0x6
#define _IOCCN_IOCCN6_SIZE                                  0x1
#define _IOCCN_IOCCN6_LENGTH                                0x1
#define _IOCCN_IOCCN6_MASK                                  0x40
#define _IOCCN_IOCCN7_POSN                                  0x7
#define _IOCCN_IOCCN7_POSITION                              0x7
#define _IOCCN_IOCCN7_SIZE                                  0x1
#define _IOCCN_IOCCN7_LENGTH                                0x1
#define _IOCCN_IOCCN7_MASK                                  0x80

// Register: IOCCF
#define IOCCF IOCCF
extern volatile unsigned char           IOCCF               __at(0x1F55);
#ifndef _LIB_BUILD
asm("IOCCF equ 01F55h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCF0                 :1;
        unsigned IOCCF1                 :1;
        unsigned IOCCF2                 :1;
        unsigned IOCCF3                 :1;
        unsigned IOCCF4                 :1;
        unsigned IOCCF5                 :1;
        unsigned IOCCF6                 :1;
        unsigned IOCCF7                 :1;
    };
} IOCCFbits_t;
extern volatile IOCCFbits_t IOCCFbits __at(0x1F55);
// bitfield macros
#define _IOCCF_IOCCF0_POSN                                  0x0
#define _IOCCF_IOCCF0_POSITION                              0x0
#define _IOCCF_IOCCF0_SIZE                                  0x1
#define _IOCCF_IOCCF0_LENGTH                                0x1
#define _IOCCF_IOCCF0_MASK                                  0x1
#define _IOCCF_IOCCF1_POSN                                  0x1
#define _IOCCF_IOCCF1_POSITION                              0x1
#define _IOCCF_IOCCF1_SIZE                                  0x1
#define _IOCCF_IOCCF1_LENGTH                                0x1
#define _IOCCF_IOCCF1_MASK                                  0x2
#define _IOCCF_IOCCF2_POSN                                  0x2
#define _IOCCF_IOCCF2_POSITION                              0x2
#define _IOCCF_IOCCF2_SIZE                                  0x1
#define _IOCCF_IOCCF2_LENGTH                                0x1
#define _IOCCF_IOCCF2_MASK                                  0x4
#define _IOCCF_IOCCF3_POSN                                  0x3
#define _IOCCF_IOCCF3_POSITION                              0x3
#define _IOCCF_IOCCF3_SIZE                                  0x1
#define _IOCCF_IOCCF3_LENGTH                                0x1
#define _IOCCF_IOCCF3_MASK                                  0x8
#define _IOCCF_IOCCF4_POSN                                  0x4
#define _IOCCF_IOCCF4_POSITION                              0x4
#define _IOCCF_IOCCF4_SIZE                                  0x1
#define _IOCCF_IOCCF4_LENGTH                                0x1
#define _IOCCF_IOCCF4_MASK                                  0x10
#define _IOCCF_IOCCF5_POSN                                  0x5
#define _IOCCF_IOCCF5_POSITION                              0x5
#define _IOCCF_IOCCF5_SIZE                                  0x1
#define _IOCCF_IOCCF5_LENGTH                                0x1
#define _IOCCF_IOCCF5_MASK                                  0x20
#define _IOCCF_IOCCF6_POSN                                  0x6
#define _IOCCF_IOCCF6_POSITION                              0x6
#define _IOCCF_IOCCF6_SIZE                                  0x1
#define _IOCCF_IOCCF6_LENGTH                                0x1
#define _IOCCF_IOCCF6_MASK                                  0x40
#define _IOCCF_IOCCF7_POSN                                  0x7
#define _IOCCF_IOCCF7_POSITION                              0x7
#define _IOCCF_IOCCF7_SIZE                                  0x1
#define _IOCCF_IOCCF7_LENGTH                                0x1
#define _IOCCF_IOCCF7_MASK                                  0x80

// Register: STATUS_SHAD
#define STATUS_SHAD STATUS_SHAD
extern volatile unsigned char           STATUS_SHAD         __at(0x1FE4);
#ifndef _LIB_BUILD
asm("STATUS_SHAD equ 01FE4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STATUS_SHAD            :8;
    };
} STATUS_SHADbits_t;
extern volatile STATUS_SHADbits_t STATUS_SHADbits __at(0x1FE4);
// bitfield macros
#define _STATUS_SHAD_STATUS_SHAD_POSN                       0x0
#define _STATUS_SHAD_STATUS_SHAD_POSITION                   0x0
#define _STATUS_SHAD_STATUS_SHAD_SIZE                       0x8
#define _STATUS_SHAD_STATUS_SHAD_LENGTH                     0x8
#define _STATUS_SHAD_STATUS_SHAD_MASK                       0xFF

// Register: WREG_SHAD
#define WREG_SHAD WREG_SHAD
extern volatile unsigned char           WREG_SHAD           __at(0x1FE5);
#ifndef _LIB_BUILD
asm("WREG_SHAD equ 01FE5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG_SHAD              :8;
    };
} WREG_SHADbits_t;
extern volatile WREG_SHADbits_t WREG_SHADbits __at(0x1FE5);
// bitfield macros
#define _WREG_SHAD_WREG_SHAD_POSN                           0x0
#define _WREG_SHAD_WREG_SHAD_POSITION                       0x0
#define _WREG_SHAD_WREG_SHAD_SIZE                           0x8
#define _WREG_SHAD_WREG_SHAD_LENGTH                         0x8
#define _WREG_SHAD_WREG_SHAD_MASK                           0xFF

// Register: BSR_SHAD
#define BSR_SHAD BSR_SHAD
extern volatile unsigned char           BSR_SHAD            __at(0x1FE6);
#ifndef _LIB_BUILD
asm("BSR_SHAD equ 01FE6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR_SHAD               :8;
    };
} BSR_SHADbits_t;
extern volatile BSR_SHADbits_t BSR_SHADbits __at(0x1FE6);
// bitfield macros
#define _BSR_SHAD_BSR_SHAD_POSN                             0x0
#define _BSR_SHAD_BSR_SHAD_POSITION                         0x0
#define _BSR_SHAD_BSR_SHAD_SIZE                             0x8
#define _BSR_SHAD_BSR_SHAD_LENGTH                           0x8
#define _BSR_SHAD_BSR_SHAD_MASK                             0xFF

// Register: PCLATH_SHAD
#define PCLATH_SHAD PCLATH_SHAD
extern volatile unsigned char           PCLATH_SHAD         __at(0x1FE7);
#ifndef _LIB_BUILD
asm("PCLATH_SHAD equ 01FE7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH_SHAD            :8;
    };
} PCLATH_SHADbits_t;
extern volatile PCLATH_SHADbits_t PCLATH_SHADbits __at(0x1FE7);
// bitfield macros
#define _PCLATH_SHAD_PCLATH_SHAD_POSN                       0x0
#define _PCLATH_SHAD_PCLATH_SHAD_POSITION                   0x0
#define _PCLATH_SHAD_PCLATH_SHAD_SIZE                       0x8
#define _PCLATH_SHAD_PCLATH_SHAD_LENGTH                     0x8
#define _PCLATH_SHAD_PCLATH_SHAD_MASK                       0xFF

// Register: FSR0_SHAD
#define FSR0_SHAD FSR0_SHAD
extern volatile unsigned short          FSR0_SHAD           __at(0x1FE8);
#ifndef _LIB_BUILD
asm("FSR0_SHAD equ 01FE8h");
#endif

// Register: FSR0L_SHAD
#define FSR0L_SHAD FSR0L_SHAD
extern volatile unsigned char           FSR0L_SHAD          __at(0x1FE8);
#ifndef _LIB_BUILD
asm("FSR0L_SHAD equ 01FE8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0L_SHAD             :8;
    };
} FSR0L_SHADbits_t;
extern volatile FSR0L_SHADbits_t FSR0L_SHADbits __at(0x1FE8);
// bitfield macros
#define _FSR0L_SHAD_FSR0L_SHAD_POSN                         0x0
#define _FSR0L_SHAD_FSR0L_SHAD_POSITION                     0x0
#define _FSR0L_SHAD_FSR0L_SHAD_SIZE                         0x8
#define _FSR0L_SHAD_FSR0L_SHAD_LENGTH                       0x8
#define _FSR0L_SHAD_FSR0L_SHAD_MASK                         0xFF

// Register: FSR0H_SHAD
#define FSR0H_SHAD FSR0H_SHAD
extern volatile unsigned char           FSR0H_SHAD          __at(0x1FE9);
#ifndef _LIB_BUILD
asm("FSR0H_SHAD equ 01FE9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0H_SHAD             :8;
    };
} FSR0H_SHADbits_t;
extern volatile FSR0H_SHADbits_t FSR0H_SHADbits __at(0x1FE9);
// bitfield macros
#define _FSR0H_SHAD_FSR0H_SHAD_POSN                         0x0
#define _FSR0H_SHAD_FSR0H_SHAD_POSITION                     0x0
#define _FSR0H_SHAD_FSR0H_SHAD_SIZE                         0x8
#define _FSR0H_SHAD_FSR0H_SHAD_LENGTH                       0x8
#define _FSR0H_SHAD_FSR0H_SHAD_MASK                         0xFF

// Register: FSR1L_SHAD
#define FSR1L_SHAD FSR1L_SHAD
extern volatile unsigned char           FSR1L_SHAD          __at(0x1FEA);
#ifndef _LIB_BUILD
asm("FSR1L_SHAD equ 01FEAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1L_SHAD             :8;
    };
} FSR1L_SHADbits_t;
extern volatile FSR1L_SHADbits_t FSR1L_SHADbits __at(0x1FEA);
// bitfield macros
#define _FSR1L_SHAD_FSR1L_SHAD_POSN                         0x0
#define _FSR1L_SHAD_FSR1L_SHAD_POSITION                     0x0
#define _FSR1L_SHAD_FSR1L_SHAD_SIZE                         0x8
#define _FSR1L_SHAD_FSR1L_SHAD_LENGTH                       0x8
#define _FSR1L_SHAD_FSR1L_SHAD_MASK                         0xFF

// Register: FSR1H_SHAD
#define FSR1H_SHAD FSR1H_SHAD
extern volatile unsigned char           FSR1H_SHAD          __at(0x1FEB);
#ifndef _LIB_BUILD
asm("FSR1H_SHAD equ 01FEBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1H_SHAD             :8;
    };
} FSR1H_SHADbits_t;
extern volatile FSR1H_SHADbits_t FSR1H_SHADbits __at(0x1FEB);
// bitfield macros
#define _FSR1H_SHAD_FSR1H_SHAD_POSN                         0x0
#define _FSR1H_SHAD_FSR1H_SHAD_POSITION                     0x0
#define _FSR1H_SHAD_FSR1H_SHAD_SIZE                         0x8
#define _FSR1H_SHAD_FSR1H_SHAD_LENGTH                       0x8
#define _FSR1H_SHAD_FSR1H_SHAD_MASK                         0xFF

// Register: STKPTR
#define STKPTR STKPTR
extern volatile unsigned char           STKPTR              __at(0x1FED);
#ifndef _LIB_BUILD
asm("STKPTR equ 01FEDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR0                :1;
        unsigned STKPTR1                :1;
        unsigned STKPTR2                :1;
        unsigned STKPTR3                :1;
        unsigned STKPTR4                :1;
    };
} STKPTRbits_t;
extern volatile STKPTRbits_t STKPTRbits __at(0x1FED);
// bitfield macros
#define _STKPTR_STKPTR0_POSN                                0x0
#define _STKPTR_STKPTR0_POSITION                            0x0
#define _STKPTR_STKPTR0_SIZE                                0x1
#define _STKPTR_STKPTR0_LENGTH                              0x1
#define _STKPTR_STKPTR0_MASK                                0x1
#define _STKPTR_STKPTR1_POSN                                0x1
#define _STKPTR_STKPTR1_POSITION                            0x1
#define _STKPTR_STKPTR1_SIZE                                0x1
#define _STKPTR_STKPTR1_LENGTH                              0x1
#define _STKPTR_STKPTR1_MASK                                0x2
#define _STKPTR_STKPTR2_POSN                                0x2
#define _STKPTR_STKPTR2_POSITION                            0x2
#define _STKPTR_STKPTR2_SIZE                                0x1
#define _STKPTR_STKPTR2_LENGTH                              0x1
#define _STKPTR_STKPTR2_MASK                                0x4
#define _STKPTR_STKPTR3_POSN                                0x3
#define _STKPTR_STKPTR3_POSITION                            0x3
#define _STKPTR_STKPTR3_SIZE                                0x1
#define _STKPTR_STKPTR3_LENGTH                              0x1
#define _STKPTR_STKPTR3_MASK                                0x8
#define _STKPTR_STKPTR4_POSN                                0x4
#define _STKPTR_STKPTR4_POSITION                            0x4
#define _STKPTR_STKPTR4_SIZE                                0x1
#define _STKPTR_STKPTR4_LENGTH                              0x1
#define _STKPTR_STKPTR4_MASK                                0x10

// Register: TOSL
#define TOSL TOSL
extern volatile unsigned char           TOSL                __at(0x1FEE);
#ifndef _LIB_BUILD
asm("TOSL equ 01FEEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSL                   :8;
    };
    struct {
        unsigned TOSL0                  :1;
        unsigned TOSL1                  :1;
        unsigned TOSL2                  :1;
        unsigned TOSL3                  :1;
        unsigned TOSL4                  :1;
        unsigned TOSL5                  :1;
        unsigned TOSL6                  :1;
        unsigned TOSL7                  :1;
    };
} TOSLbits_t;
extern volatile TOSLbits_t TOSLbits __at(0x1FEE);
// bitfield macros
#define _TOSL_TOSL_POSN                                     0x0
#define _TOSL_TOSL_POSITION                                 0x0
#define _TOSL_TOSL_SIZE                                     0x8
#define _TOSL_TOSL_LENGTH                                   0x8
#define _TOSL_TOSL_MASK                                     0xFF
#define _TOSL_TOSL0_POSN                                    0x0
#define _TOSL_TOSL0_POSITION                                0x0
#define _TOSL_TOSL0_SIZE                                    0x1
#define _TOSL_TOSL0_LENGTH                                  0x1
#define _TOSL_TOSL0_MASK                                    0x1
#define _TOSL_TOSL1_POSN                                    0x1
#define _TOSL_TOSL1_POSITION                                0x1
#define _TOSL_TOSL1_SIZE                                    0x1
#define _TOSL_TOSL1_LENGTH                                  0x1
#define _TOSL_TOSL1_MASK                                    0x2
#define _TOSL_TOSL2_POSN                                    0x2
#define _TOSL_TOSL2_POSITION                                0x2
#define _TOSL_TOSL2_SIZE                                    0x1
#define _TOSL_TOSL2_LENGTH                                  0x1
#define _TOSL_TOSL2_MASK                                    0x4
#define _TOSL_TOSL3_POSN                                    0x3
#define _TOSL_TOSL3_POSITION                                0x3
#define _TOSL_TOSL3_SIZE                                    0x1
#define _TOSL_TOSL3_LENGTH                                  0x1
#define _TOSL_TOSL3_MASK                                    0x8
#define _TOSL_TOSL4_POSN                                    0x4
#define _TOSL_TOSL4_POSITION                                0x4
#define _TOSL_TOSL4_SIZE                                    0x1
#define _TOSL_TOSL4_LENGTH                                  0x1
#define _TOSL_TOSL4_MASK                                    0x10
#define _TOSL_TOSL5_POSN                                    0x5
#define _TOSL_TOSL5_POSITION                                0x5
#define _TOSL_TOSL5_SIZE                                    0x1
#define _TOSL_TOSL5_LENGTH                                  0x1
#define _TOSL_TOSL5_MASK                                    0x20
#define _TOSL_TOSL6_POSN                                    0x6
#define _TOSL_TOSL6_POSITION                                0x6
#define _TOSL_TOSL6_SIZE                                    0x1
#define _TOSL_TOSL6_LENGTH                                  0x1
#define _TOSL_TOSL6_MASK                                    0x40
#define _TOSL_TOSL7_POSN                                    0x7
#define _TOSL_TOSL7_POSITION                                0x7
#define _TOSL_TOSL7_SIZE                                    0x1
#define _TOSL_TOSL7_LENGTH                                  0x1
#define _TOSL_TOSL7_MASK                                    0x80

// Register: TOSH
#define TOSH TOSH
extern volatile unsigned char           TOSH                __at(0x1FEF);
#ifndef _LIB_BUILD
asm("TOSH equ 01FEFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSH                   :8;
    };
    struct {
        unsigned TOSH0                  :1;
        unsigned TOSH1                  :1;
        unsigned TOSH2                  :1;
        unsigned TOSH3                  :1;
        unsigned TOSH4                  :1;
        unsigned TOSH5                  :1;
        unsigned TOSH6                  :1;
        unsigned TOSH7                  :1;
    };
} TOSHbits_t;
extern volatile TOSHbits_t TOSHbits __at(0x1FEF);
// bitfield macros
#define _TOSH_TOSH_POSN                                     0x0
#define _TOSH_TOSH_POSITION                                 0x0
#define _TOSH_TOSH_SIZE                                     0x8
#define _TOSH_TOSH_LENGTH                                   0x8
#define _TOSH_TOSH_MASK                                     0xFF
#define _TOSH_TOSH0_POSN                                    0x0
#define _TOSH_TOSH0_POSITION                                0x0
#define _TOSH_TOSH0_SIZE                                    0x1
#define _TOSH_TOSH0_LENGTH                                  0x1
#define _TOSH_TOSH0_MASK                                    0x1
#define _TOSH_TOSH1_POSN                                    0x1
#define _TOSH_TOSH1_POSITION                                0x1
#define _TOSH_TOSH1_SIZE                                    0x1
#define _TOSH_TOSH1_LENGTH                                  0x1
#define _TOSH_TOSH1_MASK                                    0x2
#define _TOSH_TOSH2_POSN                                    0x2
#define _TOSH_TOSH2_POSITION                                0x2
#define _TOSH_TOSH2_SIZE                                    0x1
#define _TOSH_TOSH2_LENGTH                                  0x1
#define _TOSH_TOSH2_MASK                                    0x4
#define _TOSH_TOSH3_POSN                                    0x3
#define _TOSH_TOSH3_POSITION                                0x3
#define _TOSH_TOSH3_SIZE                                    0x1
#define _TOSH_TOSH3_LENGTH                                  0x1
#define _TOSH_TOSH3_MASK                                    0x8
#define _TOSH_TOSH4_POSN                                    0x4
#define _TOSH_TOSH4_POSITION                                0x4
#define _TOSH_TOSH4_SIZE                                    0x1
#define _TOSH_TOSH4_LENGTH                                  0x1
#define _TOSH_TOSH4_MASK                                    0x10
#define _TOSH_TOSH5_POSN                                    0x5
#define _TOSH_TOSH5_POSITION                                0x5
#define _TOSH_TOSH5_SIZE                                    0x1
#define _TOSH_TOSH5_LENGTH                                  0x1
#define _TOSH_TOSH5_MASK                                    0x20
#define _TOSH_TOSH6_POSN                                    0x6
#define _TOSH_TOSH6_POSITION                                0x6
#define _TOSH_TOSH6_SIZE                                    0x1
#define _TOSH_TOSH6_LENGTH                                  0x1
#define _TOSH_TOSH6_MASK                                    0x40
#define _TOSH_TOSH7_POSN                                    0x7
#define _TOSH_TOSH7_POSITION                                0x7
#define _TOSH_TOSH7_SIZE                                    0x1
#define _TOSH_TOSH7_LENGTH                                  0x1
#define _TOSH_TOSH7_MASK                                    0x80

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
// BAUD1CON<ABDEN>
extern volatile __bit                   ABDEN               __at(0x8F8);	// @ (0x11F * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUD1CON,0)
// BAUD1CON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0x8FF);	// @ (0x11F * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUD1CON,7)
// SSP1CON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0xC8D);	// @ (0x191 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ACKDT1>
extern volatile __bit                   ACKDT1              __at(0xC8D);	// @ (0x191 * 8 + 5)
#define                                 ACKDT1_bit          _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0xC8C);	// @ (0x191 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ACKEN1>
extern volatile __bit                   ACKEN1              __at(0xC8C);	// @ (0x191 * 8 + 4)
#define                                 ACKEN1_bit          _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0xC8E);	// @ (0x191 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSP1CON2,6)
// SSP1CON2<ACKSTAT1>
extern volatile __bit                   ACKSTAT1            __at(0xC8E);	// @ (0x191 * 8 + 6)
#define                                 ACKSTAT1_bit        _BIT_ACCESS(SSP1CON2,6)
// SSP1CON3<ACKTIM>
extern volatile __bit                   ACKTIM              __at(0xC97);	// @ (0x192 * 8 + 7)
#define                                 ACKTIM_bit          _BIT_ACCESS(SSP1CON3,7)
// ADACTPPS<ADACTPPS0>
extern volatile __bit                   ADACTPPS0           __at(0xF618);	// @ (0x1EC3 * 8 + 0)
#define                                 ADACTPPS0_bit       _BIT_ACCESS(ADACTPPS,0)
// ADACTPPS<ADACTPPS1>
extern volatile __bit                   ADACTPPS1           __at(0xF619);	// @ (0x1EC3 * 8 + 1)
#define                                 ADACTPPS1_bit       _BIT_ACCESS(ADACTPPS,1)
// ADACTPPS<ADACTPPS2>
extern volatile __bit                   ADACTPPS2           __at(0xF61A);	// @ (0x1EC3 * 8 + 2)
#define                                 ADACTPPS2_bit       _BIT_ACCESS(ADACTPPS,2)
// ADACTPPS<ADACTPPS3>
extern volatile __bit                   ADACTPPS3           __at(0xF61B);	// @ (0x1EC3 * 8 + 3)
#define                                 ADACTPPS3_bit       _BIT_ACCESS(ADACTPPS,3)
// ADACTPPS<ADACTPPS4>
extern volatile __bit                   ADACTPPS4           __at(0xF61C);	// @ (0x1EC3 * 8 + 4)
#define                                 ADACTPPS4_bit       _BIT_ACCESS(ADACTPPS,4)
// RC1STA<ADDEN>
extern volatile __bit                   ADDEN               __at(0x8EB);	// @ (0x11D * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RC1STA,3)
// ADCON1<ADFM>
extern volatile __bit                   ADFM                __at(0x4F7);	// @ (0x9E * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON1,7)
// FVRCON<ADFVR0>
extern volatile __bit                   ADFVR0              __at(0x4860);	// @ (0x90C * 8 + 0)
#define                                 ADFVR0_bit          _BIT_ACCESS(FVRCON,0)
// FVRCON<ADFVR1>
extern volatile __bit                   ADFVR1              __at(0x4861);	// @ (0x90C * 8 + 1)
#define                                 ADFVR1_bit          _BIT_ACCESS(FVRCON,1)
// ADCON0<ADGO>
extern volatile __bit                   ADGO                __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 ADGO_bit            _BIT_ACCESS(ADCON0,1)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x38B8);	// @ (0x717 * 8 + 0)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,0)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x3868);	// @ (0x70D * 8 + 0)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,0)
// SSP1CON2<ADMSK1>
extern volatile __bit                   ADMSK1              __at(0xC89);	// @ (0x191 * 8 + 1)
#define                                 ADMSK1_bit          _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<ADMSK11>
extern volatile __bit                   ADMSK11             __at(0xC89);	// @ (0x191 * 8 + 1)
#define                                 ADMSK11_bit         _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<ADMSK2>
extern volatile __bit                   ADMSK2              __at(0xC8A);	// @ (0x191 * 8 + 2)
#define                                 ADMSK2_bit          _BIT_ACCESS(SSP1CON2,2)
// SSP1CON2<ADMSK21>
extern volatile __bit                   ADMSK21             __at(0xC8A);	// @ (0x191 * 8 + 2)
#define                                 ADMSK21_bit         _BIT_ACCESS(SSP1CON2,2)
// SSP1CON2<ADMSK3>
extern volatile __bit                   ADMSK3              __at(0xC8B);	// @ (0x191 * 8 + 3)
#define                                 ADMSK3_bit          _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<ADMSK31>
extern volatile __bit                   ADMSK31             __at(0xC8B);	// @ (0x191 * 8 + 3)
#define                                 ADMSK31_bit         _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<ADMSK4>
extern volatile __bit                   ADMSK4              __at(0xC8C);	// @ (0x191 * 8 + 4)
#define                                 ADMSK4_bit          _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ADMSK41>
extern volatile __bit                   ADMSK41             __at(0xC8C);	// @ (0x191 * 8 + 4)
#define                                 ADMSK41_bit         _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ADMSK5>
extern volatile __bit                   ADMSK5              __at(0xC8D);	// @ (0x191 * 8 + 5)
#define                                 ADMSK5_bit          _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ADMSK51>
extern volatile __bit                   ADMSK51             __at(0xC8D);	// @ (0x191 * 8 + 5)
#define                                 ADMSK51_bit         _BIT_ACCESS(SSP1CON2,5)
// OSCEN<ADOEN>
extern volatile __bit                   ADOEN               __at(0x448A);	// @ (0x891 * 8 + 2)
#define                                 ADOEN_bit           _BIT_ACCESS(OSCEN,2)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// OSCSTAT<ADOR>
extern volatile __bit                   ADOR                __at(0x4482);	// @ (0x890 * 8 + 2)
#define                                 ADOR_bit            _BIT_ACCESS(OSCSTAT,2)
// SSP1CON3<AHEN>
extern volatile __bit                   AHEN                __at(0xC91);	// @ (0x192 * 8 + 1)
#define                                 AHEN_bit            _BIT_ACCESS(SSP1CON3,1)
// ANSELA<ANSA0>
extern volatile __bit                   ANSA0               __at(0xF9C0);	// @ (0x1F38 * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSELA,0)
// ANSELA<ANSA1>
extern volatile __bit                   ANSA1               __at(0xF9C1);	// @ (0x1F38 * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSELA,1)
// ANSELA<ANSA2>
extern volatile __bit                   ANSA2               __at(0xF9C2);	// @ (0x1F38 * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSELA,2)
// ANSELA<ANSA4>
extern volatile __bit                   ANSA4               __at(0xF9C4);	// @ (0x1F38 * 8 + 4)
#define                                 ANSA4_bit           _BIT_ACCESS(ANSELA,4)
// ANSELA<ANSA5>
extern volatile __bit                   ANSA5               __at(0xF9C5);	// @ (0x1F38 * 8 + 5)
#define                                 ANSA5_bit           _BIT_ACCESS(ANSELA,5)
// ANSELB<ANSB4>
extern volatile __bit                   ANSB4               __at(0xFA1C);	// @ (0x1F43 * 8 + 4)
#define                                 ANSB4_bit           _BIT_ACCESS(ANSELB,4)
// ANSELB<ANSB5>
extern volatile __bit                   ANSB5               __at(0xFA1D);	// @ (0x1F43 * 8 + 5)
#define                                 ANSB5_bit           _BIT_ACCESS(ANSELB,5)
// ANSELB<ANSB6>
extern volatile __bit                   ANSB6               __at(0xFA1E);	// @ (0x1F43 * 8 + 6)
#define                                 ANSB6_bit           _BIT_ACCESS(ANSELB,6)
// ANSELB<ANSB7>
extern volatile __bit                   ANSB7               __at(0xFA1F);	// @ (0x1F43 * 8 + 7)
#define                                 ANSB7_bit           _BIT_ACCESS(ANSELB,7)
// ANSELC<ANSC0>
extern volatile __bit                   ANSC0               __at(0xFA70);	// @ (0x1F4E * 8 + 0)
#define                                 ANSC0_bit           _BIT_ACCESS(ANSELC,0)
// ANSELC<ANSC1>
extern volatile __bit                   ANSC1               __at(0xFA71);	// @ (0x1F4E * 8 + 1)
#define                                 ANSC1_bit           _BIT_ACCESS(ANSELC,1)
// ANSELC<ANSC2>
extern volatile __bit                   ANSC2               __at(0xFA72);	// @ (0x1F4E * 8 + 2)
#define                                 ANSC2_bit           _BIT_ACCESS(ANSELC,2)
// ANSELC<ANSC3>
extern volatile __bit                   ANSC3               __at(0xFA73);	// @ (0x1F4E * 8 + 3)
#define                                 ANSC3_bit           _BIT_ACCESS(ANSELC,3)
// ANSELC<ANSC4>
extern volatile __bit                   ANSC4               __at(0xFA74);	// @ (0x1F4E * 8 + 4)
#define                                 ANSC4_bit           _BIT_ACCESS(ANSELC,4)
// ANSELC<ANSC5>
extern volatile __bit                   ANSC5               __at(0xFA75);	// @ (0x1F4E * 8 + 5)
#define                                 ANSC5_bit           _BIT_ACCESS(ANSELC,5)
// ANSELC<ANSC6>
extern volatile __bit                   ANSC6               __at(0xFA76);	// @ (0x1F4E * 8 + 6)
#define                                 ANSC6_bit           _BIT_ACCESS(ANSELC,6)
// ANSELC<ANSC7>
extern volatile __bit                   ANSC7               __at(0xFA77);	// @ (0x1F4E * 8 + 7)
#define                                 ANSC7_bit           _BIT_ACCESS(ANSELC,7)
// T0CON1<ASYNC>
extern volatile __bit                   ASYNC               __at(0x2CFC);	// @ (0x59F * 8 + 4)
#define                                 ASYNC_bit           _BIT_ACCESS(T0CON1,4)
// PIE1<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x38BA);	// @ (0x717 * 8 + 2)
#define                                 BCL1IE_bit          _BIT_ACCESS(PIE1,2)
// PIR1<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x386A);	// @ (0x70D * 8 + 2)
#define                                 BCL1IF_bit          _BIT_ACCESS(PIR1,2)
// SSP1STAT<BF>
extern volatile __bit                   BF                  __at(0xC78);	// @ (0x18F * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSP1STAT,0)
// SSP1STAT<BF1>
extern volatile __bit                   BF1                 __at(0xC78);	// @ (0x18F * 8 + 0)
#define                                 BF1_bit             _BIT_ACCESS(SSP1STAT,0)
// SSP1CON3<BOEN>
extern volatile __bit                   BOEN                __at(0xC94);	// @ (0x192 * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSP1CON3,4)
// BORCON<BORRDY>
extern volatile __bit                   BORRDY              __at(0x4088);	// @ (0x811 * 8 + 0)
#define                                 BORRDY_bit          _BIT_ACCESS(BORCON,0)
// BAUD1CON<BRG16>
extern volatile __bit                   BRG16               __at(0x8FB);	// @ (0x11F * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUD1CON,3)
// TX1STA<BRGH>
extern volatile __bit                   BRGH                __at(0x8F2);	// @ (0x11E * 8 + 2)
#define                                 BRGH_bit            _BIT_ACCESS(TX1STA,2)
// BSR<BSR0>
extern volatile __bit                   BSR0                __at(0x40);	// @ (0x8 * 8 + 0)
#define                                 BSR0_bit            _BIT_ACCESS(BSR,0)
// BSR<BSR1>
extern volatile __bit                   BSR1                __at(0x41);	// @ (0x8 * 8 + 1)
#define                                 BSR1_bit            _BIT_ACCESS(BSR,1)
// BSR<BSR2>
extern volatile __bit                   BSR2                __at(0x42);	// @ (0x8 * 8 + 2)
#define                                 BSR2_bit            _BIT_ACCESS(BSR,2)
// BSR<BSR3>
extern volatile __bit                   BSR3                __at(0x43);	// @ (0x8 * 8 + 3)
#define                                 BSR3_bit            _BIT_ACCESS(BSR,3)
// BSR<BSR4>
extern volatile __bit                   BSR4                __at(0x44);	// @ (0x8 * 8 + 4)
#define                                 BSR4_bit            _BIT_ACCESS(BSR,4)
// BSR<BSR5>
extern volatile __bit                   BSR5                __at(0x45);	// @ (0x8 * 8 + 5)
#define                                 BSR5_bit            _BIT_ACCESS(BSR,5)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// CCP1CAP<CCP1CTS0>
extern volatile __bit                   CCP1CTS0            __at(0x1878);	// @ (0x30F * 8 + 0)
#define                                 CCP1CTS0_bit        _BIT_ACCESS(CCP1CAP,0)
// CCP1CAP<CCP1CTS1>
extern volatile __bit                   CCP1CTS1            __at(0x1879);	// @ (0x30F * 8 + 1)
#define                                 CCP1CTS1_bit        _BIT_ACCESS(CCP1CAP,1)
// CCP1CON<CCP1EN>
extern volatile __bit                   CCP1EN              __at(0x1877);	// @ (0x30E * 8 + 7)
#define                                 CCP1EN_bit          _BIT_ACCESS(CCP1CON,7)
// CCP1CON<CCP1FMT>
extern volatile __bit                   CCP1FMT             __at(0x1874);	// @ (0x30E * 8 + 4)
#define                                 CCP1FMT_bit         _BIT_ACCESS(CCP1CON,4)
// PIE1<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x38BF);	// @ (0x717 * 8 + 7)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE1,7)
// PIR1<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0x386F);	// @ (0x70D * 8 + 7)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR1,7)
// CCP1CON<CCP1MODE0>
extern volatile __bit                   CCP1MODE0           __at(0x1870);	// @ (0x30E * 8 + 0)
#define                                 CCP1MODE0_bit       _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1MODE1>
extern volatile __bit                   CCP1MODE1           __at(0x1871);	// @ (0x30E * 8 + 1)
#define                                 CCP1MODE1_bit       _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1MODE2>
extern volatile __bit                   CCP1MODE2           __at(0x1872);	// @ (0x30E * 8 + 2)
#define                                 CCP1MODE2_bit       _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1MODE3>
extern volatile __bit                   CCP1MODE3           __at(0x1873);	// @ (0x30E * 8 + 3)
#define                                 CCP1MODE3_bit       _BIT_ACCESS(CCP1CON,3)
// CCP1CON<CCP1OUT>
extern volatile __bit                   CCP1OUT             __at(0x1875);	// @ (0x30E * 8 + 5)
#define                                 CCP1OUT_bit         _BIT_ACCESS(CCP1CON,5)
// CCP1PPS<CCP1PPS0>
extern volatile __bit                   CCP1PPS0            __at(0xF508);	// @ (0x1EA1 * 8 + 0)
#define                                 CCP1PPS0_bit        _BIT_ACCESS(CCP1PPS,0)
// CCP1PPS<CCP1PPS1>
extern volatile __bit                   CCP1PPS1            __at(0xF509);	// @ (0x1EA1 * 8 + 1)
#define                                 CCP1PPS1_bit        _BIT_ACCESS(CCP1PPS,1)
// CCP1PPS<CCP1PPS2>
extern volatile __bit                   CCP1PPS2            __at(0xF50A);	// @ (0x1EA1 * 8 + 2)
#define                                 CCP1PPS2_bit        _BIT_ACCESS(CCP1PPS,2)
// CCP1PPS<CCP1PPS3>
extern volatile __bit                   CCP1PPS3            __at(0xF50B);	// @ (0x1EA1 * 8 + 3)
#define                                 CCP1PPS3_bit        _BIT_ACCESS(CCP1PPS,3)
// CCP1PPS<CCP1PPS4>
extern volatile __bit                   CCP1PPS4            __at(0xF50C);	// @ (0x1EA1 * 8 + 4)
#define                                 CCP1PPS4_bit        _BIT_ACCESS(CCP1PPS,4)
// CCP2CAP<CCP2CTS0>
extern volatile __bit                   CCP2CTS0            __at(0x1898);	// @ (0x313 * 8 + 0)
#define                                 CCP2CTS0_bit        _BIT_ACCESS(CCP2CAP,0)
// CCP2CAP<CCP2CTS1>
extern volatile __bit                   CCP2CTS1            __at(0x1899);	// @ (0x313 * 8 + 1)
#define                                 CCP2CTS1_bit        _BIT_ACCESS(CCP2CAP,1)
// CCP2CON<CCP2EN>
extern volatile __bit                   CCP2EN              __at(0x1897);	// @ (0x312 * 8 + 7)
#define                                 CCP2EN_bit          _BIT_ACCESS(CCP2CON,7)
// CCP2CON<CCP2FMT>
extern volatile __bit                   CCP2FMT             __at(0x1894);	// @ (0x312 * 8 + 4)
#define                                 CCP2FMT_bit         _BIT_ACCESS(CCP2CON,4)
// PIE2<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x38C7);	// @ (0x718 * 8 + 7)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE2,7)
// PIR2<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0x3877);	// @ (0x70E * 8 + 7)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR2,7)
// CCP2CON<CCP2MODE0>
extern volatile __bit                   CCP2MODE0           __at(0x1890);	// @ (0x312 * 8 + 0)
#define                                 CCP2MODE0_bit       _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2MODE1>
extern volatile __bit                   CCP2MODE1           __at(0x1891);	// @ (0x312 * 8 + 1)
#define                                 CCP2MODE1_bit       _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2MODE2>
extern volatile __bit                   CCP2MODE2           __at(0x1892);	// @ (0x312 * 8 + 2)
#define                                 CCP2MODE2_bit       _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2MODE3>
extern volatile __bit                   CCP2MODE3           __at(0x1893);	// @ (0x312 * 8 + 3)
#define                                 CCP2MODE3_bit       _BIT_ACCESS(CCP2CON,3)
// CCP2CON<CCP2OUT>
extern volatile __bit                   CCP2OUT             __at(0x1895);	// @ (0x312 * 8 + 5)
#define                                 CCP2OUT_bit         _BIT_ACCESS(CCP2CON,5)
// CCP2PPS<CCP2PPS0>
extern volatile __bit                   CCP2PPS0            __at(0xF510);	// @ (0x1EA2 * 8 + 0)
#define                                 CCP2PPS0_bit        _BIT_ACCESS(CCP2PPS,0)
// CCP2PPS<CCP2PPS1>
extern volatile __bit                   CCP2PPS1            __at(0xF511);	// @ (0x1EA2 * 8 + 1)
#define                                 CCP2PPS1_bit        _BIT_ACCESS(CCP2PPS,1)
// CCP2PPS<CCP2PPS2>
extern volatile __bit                   CCP2PPS2            __at(0xF512);	// @ (0x1EA2 * 8 + 2)
#define                                 CCP2PPS2_bit        _BIT_ACCESS(CCP2PPS,2)
// CCP2PPS<CCP2PPS3>
extern volatile __bit                   CCP2PPS3            __at(0xF513);	// @ (0x1EA2 * 8 + 3)
#define                                 CCP2PPS3_bit        _BIT_ACCESS(CCP2PPS,3)
// CCP2PPS<CCP2PPS4>
extern volatile __bit                   CCP2PPS4            __at(0xF514);	// @ (0x1EA2 * 8 + 4)
#define                                 CCP2PPS4_bit        _BIT_ACCESS(CCP2PPS,4)
// FVRCON<CDAFVR0>
extern volatile __bit                   CDAFVR0             __at(0x4862);	// @ (0x90C * 8 + 2)
#define                                 CDAFVR0_bit         _BIT_ACCESS(FVRCON,2)
// FVRCON<CDAFVR1>
extern volatile __bit                   CDAFVR1             __at(0x4863);	// @ (0x90C * 8 + 3)
#define                                 CDAFVR1_bit         _BIT_ACCESS(FVRCON,3)
// SSP1STAT<CKE>
extern volatile __bit                   CKE                 __at(0xC7E);	// @ (0x18F * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSP1STAT,6)
// SSP1STAT<CKE1>
extern volatile __bit                   CKE1                __at(0xC7E);	// @ (0x18F * 8 + 6)
#define                                 CKE1_bit            _BIT_ACCESS(SSP1STAT,6)
// SSP1CON1<CKP>
extern volatile __bit                   CKP                 __at(0xC84);	// @ (0x190 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSP1CON1,4)
// SSP1CON1<CKP1>
extern volatile __bit                   CKP1                __at(0xC84);	// @ (0x190 * 8 + 4)
#define                                 CKP1_bit            _BIT_ACCESS(SSP1CON1,4)
// T2HLT<CKPOL>
extern volatile __bit                   CKPOL               __at(0x147E);	// @ (0x28F * 8 + 6)
#define                                 CKPOL_bit           _BIT_ACCESS(T2HLT,6)
// T0CON1<CKPS3>
extern volatile __bit                   CKPS3               __at(0x2CFB);	// @ (0x59F * 8 + 3)
#define                                 CKPS3_bit           _BIT_ACCESS(T0CON1,3)
// T2HLT<CKSYNC>
extern volatile __bit                   CKSYNC              __at(0x147D);	// @ (0x28F * 8 + 5)
#define                                 CKSYNC_bit          _BIT_ACCESS(T2HLT,5)
// CPCON<CPRDY>
extern volatile __bit                   CPRDY               __at(0x4D0);	// @ (0x9A * 8 + 0)
#define                                 CPRDY_bit           _BIT_ACCESS(CPCON,0)
// CPCON<CPT>
extern volatile __bit                   CPT                 __at(0x4D1);	// @ (0x9A * 8 + 1)
#define                                 CPT_bit             _BIT_ACCESS(CPCON,1)
// RC1STA<CREN>
extern volatile __bit                   CREN                __at(0x8EC);	// @ (0x11D * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RC1STA,4)
// WDTCON<CS>
extern volatile __bit                   CS                  __at(0x4067);	// @ (0x80C * 8 + 7)
#define                                 CS_bit              _BIT_ACCESS(WDTCON,7)
// T1CLK<CS3>
extern volatile __bit                   CS3                 __at(0x108B);	// @ (0x211 * 8 + 3)
#define                                 CS3_bit             _BIT_ACCESS(T1CLK,3)
// TX1STA<CSRC>
extern volatile __bit                   CSRC                __at(0x8F7);	// @ (0x11E * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TX1STA,7)
// SSP1STAT<DA>
extern volatile __bit                   DA                  __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 DA_bit              _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<DA1>
extern volatile __bit                   DA1                 __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 DA1_bit             _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<DATA_ADDRESS>
extern volatile __bit                   DATA_ADDRESS        __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 DATA_ADDRESS_bit    _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<DATA_ADDRESS1>
extern volatile __bit                   DATA_ADDRESS1       __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 DATA_ADDRESS1_bit   _BIT_ACCESS(SSP1STAT,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// SSP1CON3<DHEN>
extern volatile __bit                   DHEN                __at(0xC90);	// @ (0x192 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSP1CON3,0)
// SSP1STAT<D_A>
extern volatile __bit                   D_A                 __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 D_A_bit             _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<D_A1>
extern volatile __bit                   D_A1                __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 D_A1_bit            _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<D_nA>
extern volatile __bit                   D_nA                __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<D_nA1>
extern volatile __bit                   D_nA1               __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 D_nA1_bit           _BIT_ACCESS(SSP1STAT,5)
// RC1STA<FERR>
extern volatile __bit                   FERR                __at(0x8EA);	// @ (0x11D * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RC1STA,2)
// ADCON1<FM>
extern volatile __bit                   FM                  __at(0x4F7);	// @ (0x9E * 8 + 7)
#define                                 FM_bit              _BIT_ACCESS(ADCON1,7)
// NVMCON1<FREE>
extern volatile __bit                   FREE                __at(0x40F4);	// @ (0x81E * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(NVMCON1,4)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0x4867);	// @ (0x90C * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,7)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x4866);	// @ (0x90C * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,6)
// SSP1CON2<GCEN>
extern volatile __bit                   GCEN                __at(0xC8F);	// @ (0x191 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSP1CON2,7)
// SSP1CON2<GCEN1>
extern volatile __bit                   GCEN1               __at(0xC8F);	// @ (0x191 * 8 + 7)
#define                                 GCEN1_bit           _BIT_ACCESS(SSP1CON2,7)
// T1GCON<GE>
extern volatile __bit                   GE                  __at(0x107F);	// @ (0x20F * 8 + 7)
#define                                 GE_bit              _BIT_ACCESS(T1GCON,7)
// T1GCON<GGO>
extern volatile __bit                   GGO                 __at(0x107B);	// @ (0x20F * 8 + 3)
#define                                 GGO_bit             _BIT_ACCESS(T1GCON,3)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// T1GCON<GPOL>
extern volatile __bit                   GPOL                __at(0x107E);	// @ (0x20F * 8 + 6)
#define                                 GPOL_bit            _BIT_ACCESS(T1GCON,6)
// T1GCON<GSPM>
extern volatile __bit                   GSPM                __at(0x107C);	// @ (0x20F * 8 + 4)
#define                                 GSPM_bit            _BIT_ACCESS(T1GCON,4)
// T1GATE<GSS0>
extern volatile __bit                   GSS0                __at(0x1080);	// @ (0x210 * 8 + 0)
#define                                 GSS0_bit            _BIT_ACCESS(T1GATE,0)
// T1GATE<GSS1>
extern volatile __bit                   GSS1                __at(0x1081);	// @ (0x210 * 8 + 1)
#define                                 GSS1_bit            _BIT_ACCESS(T1GATE,1)
// T1GATE<GSS2>
extern volatile __bit                   GSS2                __at(0x1082);	// @ (0x210 * 8 + 2)
#define                                 GSS2_bit            _BIT_ACCESS(T1GATE,2)
// T1GATE<GSS3>
extern volatile __bit                   GSS3                __at(0x1083);	// @ (0x210 * 8 + 3)
#define                                 GSS3_bit            _BIT_ACCESS(T1GATE,3)
// T1GATE<GSS4>
extern volatile __bit                   GSS4                __at(0x1084);	// @ (0x210 * 8 + 4)
#define                                 GSS4_bit            _BIT_ACCESS(T1GATE,4)
// T1GCON<GTM>
extern volatile __bit                   GTM                 __at(0x107D);	// @ (0x20F * 8 + 5)
#define                                 GTM_bit             _BIT_ACCESS(T1GCON,5)
// T1GCON<GVAL>
extern volatile __bit                   GVAL                __at(0x107A);	// @ (0x20F * 8 + 2)
#define                                 GVAL_bit            _BIT_ACCESS(T1GCON,2)
// OSCFRQ<HFFRQ0>
extern volatile __bit                   HFFRQ0              __at(0x4498);	// @ (0x893 * 8 + 0)
#define                                 HFFRQ0_bit          _BIT_ACCESS(OSCFRQ,0)
// OSCFRQ<HFFRQ1>
extern volatile __bit                   HFFRQ1              __at(0x4499);	// @ (0x893 * 8 + 1)
#define                                 HFFRQ1_bit          _BIT_ACCESS(OSCFRQ,1)
// OSCFRQ<HFFRQ2>
extern volatile __bit                   HFFRQ2              __at(0x449A);	// @ (0x893 * 8 + 2)
#define                                 HFFRQ2_bit          _BIT_ACCESS(OSCFRQ,2)
// OSCEN<HFOEN>
extern volatile __bit                   HFOEN               __at(0x448E);	// @ (0x891 * 8 + 6)
#define                                 HFOEN_bit           _BIT_ACCESS(OSCEN,6)
// OSCSTAT<HFOR>
extern volatile __bit                   HFOR                __at(0x4486);	// @ (0x890 * 8 + 6)
#define                                 HFOR_bit            _BIT_ACCESS(OSCSTAT,6)
// OSCTUNE<HFTUN0>
extern volatile __bit                   HFTUN0              __at(0x4490);	// @ (0x892 * 8 + 0)
#define                                 HFTUN0_bit          _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<HFTUN1>
extern volatile __bit                   HFTUN1              __at(0x4491);	// @ (0x892 * 8 + 1)
#define                                 HFTUN1_bit          _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<HFTUN2>
extern volatile __bit                   HFTUN2              __at(0x4492);	// @ (0x892 * 8 + 2)
#define                                 HFTUN2_bit          _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<HFTUN3>
extern volatile __bit                   HFTUN3              __at(0x4493);	// @ (0x892 * 8 + 3)
#define                                 HFTUN3_bit          _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<HFTUN4>
extern volatile __bit                   HFTUN4              __at(0x4494);	// @ (0x892 * 8 + 4)
#define                                 HFTUN4_bit          _BIT_ACCESS(OSCTUNE,4)
// OSCTUNE<HFTUN5>
extern volatile __bit                   HFTUN5              __at(0x4495);	// @ (0x892 * 8 + 5)
#define                                 HFTUN5_bit          _BIT_ACCESS(OSCTUNE,5)
// SSP1STAT<I2C_DAT>
extern volatile __bit                   I2C_DAT             __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 I2C_DAT_bit         _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<I2C_DAT1>
extern volatile __bit                   I2C_DAT1            __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 I2C_DAT1_bit        _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<I2C_READ>
extern volatile __bit                   I2C_READ            __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 I2C_READ_bit        _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<I2C_READ1>
extern volatile __bit                   I2C_READ1           __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 I2C_READ1_bit       _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<I2C_START>
extern volatile __bit                   I2C_START           __at(0xC7B);	// @ (0x18F * 8 + 3)
#define                                 I2C_START_bit       _BIT_ACCESS(SSP1STAT,3)
// SSP1STAT<I2C_START1>
extern volatile __bit                   I2C_START1          __at(0xC7B);	// @ (0x18F * 8 + 3)
#define                                 I2C_START1_bit      _BIT_ACCESS(SSP1STAT,3)
// SSP1STAT<I2C_STOP>
extern volatile __bit                   I2C_STOP            __at(0xC7C);	// @ (0x18F * 8 + 4)
#define                                 I2C_STOP_bit        _BIT_ACCESS(SSP1STAT,4)
// SSP1STAT<I2C_STOP2>
extern volatile __bit                   I2C_STOP2           __at(0xC7C);	// @ (0x18F * 8 + 4)
#define                                 I2C_STOP2_bit       _BIT_ACCESS(SSP1STAT,4)
// INLVLA<INLVLA0>
extern volatile __bit                   INLVLA0             __at(0xF9E0);	// @ (0x1F3C * 8 + 0)
#define                                 INLVLA0_bit         _BIT_ACCESS(INLVLA,0)
// INLVLA<INLVLA1>
extern volatile __bit                   INLVLA1             __at(0xF9E1);	// @ (0x1F3C * 8 + 1)
#define                                 INLVLA1_bit         _BIT_ACCESS(INLVLA,1)
// INLVLA<INLVLA2>
extern volatile __bit                   INLVLA2             __at(0xF9E2);	// @ (0x1F3C * 8 + 2)
#define                                 INLVLA2_bit         _BIT_ACCESS(INLVLA,2)
// INLVLA<INLVLA3>
extern volatile __bit                   INLVLA3             __at(0xF9E3);	// @ (0x1F3C * 8 + 3)
#define                                 INLVLA3_bit         _BIT_ACCESS(INLVLA,3)
// INLVLA<INLVLA4>
extern volatile __bit                   INLVLA4             __at(0xF9E4);	// @ (0x1F3C * 8 + 4)
#define                                 INLVLA4_bit         _BIT_ACCESS(INLVLA,4)
// INLVLA<INLVLA5>
extern volatile __bit                   INLVLA5             __at(0xF9E5);	// @ (0x1F3C * 8 + 5)
#define                                 INLVLA5_bit         _BIT_ACCESS(INLVLA,5)
// INLVLB<INLVLB4>
extern volatile __bit                   INLVLB4             __at(0xFA3C);	// @ (0x1F47 * 8 + 4)
#define                                 INLVLB4_bit         _BIT_ACCESS(INLVLB,4)
// INLVLB<INLVLB5>
extern volatile __bit                   INLVLB5             __at(0xFA3D);	// @ (0x1F47 * 8 + 5)
#define                                 INLVLB5_bit         _BIT_ACCESS(INLVLB,5)
// INLVLB<INLVLB6>
extern volatile __bit                   INLVLB6             __at(0xFA3E);	// @ (0x1F47 * 8 + 6)
#define                                 INLVLB6_bit         _BIT_ACCESS(INLVLB,6)
// INLVLB<INLVLB7>
extern volatile __bit                   INLVLB7             __at(0xFA3F);	// @ (0x1F47 * 8 + 7)
#define                                 INLVLB7_bit         _BIT_ACCESS(INLVLB,7)
// INLVLC<INLVLC0>
extern volatile __bit                   INLVLC0             __at(0xFA90);	// @ (0x1F52 * 8 + 0)
#define                                 INLVLC0_bit         _BIT_ACCESS(INLVLC,0)
// INLVLC<INLVLC1>
extern volatile __bit                   INLVLC1             __at(0xFA91);	// @ (0x1F52 * 8 + 1)
#define                                 INLVLC1_bit         _BIT_ACCESS(INLVLC,1)
// INLVLC<INLVLC2>
extern volatile __bit                   INLVLC2             __at(0xFA92);	// @ (0x1F52 * 8 + 2)
#define                                 INLVLC2_bit         _BIT_ACCESS(INLVLC,2)
// INLVLC<INLVLC3>
extern volatile __bit                   INLVLC3             __at(0xFA93);	// @ (0x1F52 * 8 + 3)
#define                                 INLVLC3_bit         _BIT_ACCESS(INLVLC,3)
// INLVLC<INLVLC4>
extern volatile __bit                   INLVLC4             __at(0xFA94);	// @ (0x1F52 * 8 + 4)
#define                                 INLVLC4_bit         _BIT_ACCESS(INLVLC,4)
// INLVLC<INLVLC5>
extern volatile __bit                   INLVLC5             __at(0xFA95);	// @ (0x1F52 * 8 + 5)
#define                                 INLVLC5_bit         _BIT_ACCESS(INLVLC,5)
// INLVLC<INLVLC6>
extern volatile __bit                   INLVLC6             __at(0xFA96);	// @ (0x1F52 * 8 + 6)
#define                                 INLVLC6_bit         _BIT_ACCESS(INLVLC,6)
// INLVLC<INLVLC7>
extern volatile __bit                   INLVLC7             __at(0xFA97);	// @ (0x1F52 * 8 + 7)
#define                                 INLVLC7_bit         _BIT_ACCESS(INLVLC,7)
// PIE0<INTE>
extern volatile __bit                   INTE                __at(0x38B0);	// @ (0x716 * 8 + 0)
#define                                 INTE_bit            _BIT_ACCESS(PIE0,0)
// INTCON<INTEDG>
extern volatile __bit                   INTEDG              __at(0x58);	// @ (0xB * 8 + 0)
#define                                 INTEDG_bit          _BIT_ACCESS(INTCON,0)
// PIR0<INTF>
extern volatile __bit                   INTF                __at(0x3860);	// @ (0x70C * 8 + 0)
#define                                 INTF_bit            _BIT_ACCESS(PIR0,0)
// INTPPS<INTPPS0>
extern volatile __bit                   INTPPS0             __at(0xF480);	// @ (0x1E90 * 8 + 0)
#define                                 INTPPS0_bit         _BIT_ACCESS(INTPPS,0)
// INTPPS<INTPPS1>
extern volatile __bit                   INTPPS1             __at(0xF481);	// @ (0x1E90 * 8 + 1)
#define                                 INTPPS1_bit         _BIT_ACCESS(INTPPS,1)
// INTPPS<INTPPS2>
extern volatile __bit                   INTPPS2             __at(0xF482);	// @ (0x1E90 * 8 + 2)
#define                                 INTPPS2_bit         _BIT_ACCESS(INTPPS,2)
// INTPPS<INTPPS3>
extern volatile __bit                   INTPPS3             __at(0xF483);	// @ (0x1E90 * 8 + 3)
#define                                 INTPPS3_bit         _BIT_ACCESS(INTPPS,3)
// IOCAF<IOCAF0>
extern volatile __bit                   IOCAF0              __at(0xF9F8);	// @ (0x1F3F * 8 + 0)
#define                                 IOCAF0_bit          _BIT_ACCESS(IOCAF,0)
// IOCAF<IOCAF1>
extern volatile __bit                   IOCAF1              __at(0xF9F9);	// @ (0x1F3F * 8 + 1)
#define                                 IOCAF1_bit          _BIT_ACCESS(IOCAF,1)
// IOCAF<IOCAF2>
extern volatile __bit                   IOCAF2              __at(0xF9FA);	// @ (0x1F3F * 8 + 2)
#define                                 IOCAF2_bit          _BIT_ACCESS(IOCAF,2)
// IOCAF<IOCAF3>
extern volatile __bit                   IOCAF3              __at(0xF9FB);	// @ (0x1F3F * 8 + 3)
#define                                 IOCAF3_bit          _BIT_ACCESS(IOCAF,3)
// IOCAF<IOCAF4>
extern volatile __bit                   IOCAF4              __at(0xF9FC);	// @ (0x1F3F * 8 + 4)
#define                                 IOCAF4_bit          _BIT_ACCESS(IOCAF,4)
// IOCAF<IOCAF5>
extern volatile __bit                   IOCAF5              __at(0xF9FD);	// @ (0x1F3F * 8 + 5)
#define                                 IOCAF5_bit          _BIT_ACCESS(IOCAF,5)
// IOCAN<IOCAN0>
extern volatile __bit                   IOCAN0              __at(0xF9F0);	// @ (0x1F3E * 8 + 0)
#define                                 IOCAN0_bit          _BIT_ACCESS(IOCAN,0)
// IOCAN<IOCAN1>
extern volatile __bit                   IOCAN1              __at(0xF9F1);	// @ (0x1F3E * 8 + 1)
#define                                 IOCAN1_bit          _BIT_ACCESS(IOCAN,1)
// IOCAN<IOCAN2>
extern volatile __bit                   IOCAN2              __at(0xF9F2);	// @ (0x1F3E * 8 + 2)
#define                                 IOCAN2_bit          _BIT_ACCESS(IOCAN,2)
// IOCAN<IOCAN3>
extern volatile __bit                   IOCAN3              __at(0xF9F3);	// @ (0x1F3E * 8 + 3)
#define                                 IOCAN3_bit          _BIT_ACCESS(IOCAN,3)
// IOCAN<IOCAN4>
extern volatile __bit                   IOCAN4              __at(0xF9F4);	// @ (0x1F3E * 8 + 4)
#define                                 IOCAN4_bit          _BIT_ACCESS(IOCAN,4)
// IOCAN<IOCAN5>
extern volatile __bit                   IOCAN5              __at(0xF9F5);	// @ (0x1F3E * 8 + 5)
#define                                 IOCAN5_bit          _BIT_ACCESS(IOCAN,5)
// IOCAP<IOCAP0>
extern volatile __bit                   IOCAP0              __at(0xF9E8);	// @ (0x1F3D * 8 + 0)
#define                                 IOCAP0_bit          _BIT_ACCESS(IOCAP,0)
// IOCAP<IOCAP1>
extern volatile __bit                   IOCAP1              __at(0xF9E9);	// @ (0x1F3D * 8 + 1)
#define                                 IOCAP1_bit          _BIT_ACCESS(IOCAP,1)
// IOCAP<IOCAP2>
extern volatile __bit                   IOCAP2              __at(0xF9EA);	// @ (0x1F3D * 8 + 2)
#define                                 IOCAP2_bit          _BIT_ACCESS(IOCAP,2)
// IOCAP<IOCAP3>
extern volatile __bit                   IOCAP3              __at(0xF9EB);	// @ (0x1F3D * 8 + 3)
#define                                 IOCAP3_bit          _BIT_ACCESS(IOCAP,3)
// IOCAP<IOCAP4>
extern volatile __bit                   IOCAP4              __at(0xF9EC);	// @ (0x1F3D * 8 + 4)
#define                                 IOCAP4_bit          _BIT_ACCESS(IOCAP,4)
// IOCAP<IOCAP5>
extern volatile __bit                   IOCAP5              __at(0xF9ED);	// @ (0x1F3D * 8 + 5)
#define                                 IOCAP5_bit          _BIT_ACCESS(IOCAP,5)
// IOCBF<IOCBF4>
extern volatile __bit                   IOCBF4              __at(0xFA54);	// @ (0x1F4A * 8 + 4)
#define                                 IOCBF4_bit          _BIT_ACCESS(IOCBF,4)
// IOCBF<IOCBF5>
extern volatile __bit                   IOCBF5              __at(0xFA55);	// @ (0x1F4A * 8 + 5)
#define                                 IOCBF5_bit          _BIT_ACCESS(IOCBF,5)
// IOCBF<IOCBF6>
extern volatile __bit                   IOCBF6              __at(0xFA56);	// @ (0x1F4A * 8 + 6)
#define                                 IOCBF6_bit          _BIT_ACCESS(IOCBF,6)
// IOCBF<IOCBF7>
extern volatile __bit                   IOCBF7              __at(0xFA57);	// @ (0x1F4A * 8 + 7)
#define                                 IOCBF7_bit          _BIT_ACCESS(IOCBF,7)
// IOCBN<IOCBN4>
extern volatile __bit                   IOCBN4              __at(0xFA4C);	// @ (0x1F49 * 8 + 4)
#define                                 IOCBN4_bit          _BIT_ACCESS(IOCBN,4)
// IOCBN<IOCBN5>
extern volatile __bit                   IOCBN5              __at(0xFA4D);	// @ (0x1F49 * 8 + 5)
#define                                 IOCBN5_bit          _BIT_ACCESS(IOCBN,5)
// IOCBN<IOCBN6>
extern volatile __bit                   IOCBN6              __at(0xFA4E);	// @ (0x1F49 * 8 + 6)
#define                                 IOCBN6_bit          _BIT_ACCESS(IOCBN,6)
// IOCBN<IOCBN7>
extern volatile __bit                   IOCBN7              __at(0xFA4F);	// @ (0x1F49 * 8 + 7)
#define                                 IOCBN7_bit          _BIT_ACCESS(IOCBN,7)
// IOCBP<IOCBP4>
extern volatile __bit                   IOCBP4              __at(0xFA44);	// @ (0x1F48 * 8 + 4)
#define                                 IOCBP4_bit          _BIT_ACCESS(IOCBP,4)
// IOCBP<IOCBP5>
extern volatile __bit                   IOCBP5              __at(0xFA45);	// @ (0x1F48 * 8 + 5)
#define                                 IOCBP5_bit          _BIT_ACCESS(IOCBP,5)
// IOCBP<IOCBP6>
extern volatile __bit                   IOCBP6              __at(0xFA46);	// @ (0x1F48 * 8 + 6)
#define                                 IOCBP6_bit          _BIT_ACCESS(IOCBP,6)
// IOCBP<IOCBP7>
extern volatile __bit                   IOCBP7              __at(0xFA47);	// @ (0x1F48 * 8 + 7)
#define                                 IOCBP7_bit          _BIT_ACCESS(IOCBP,7)
// IOCCF<IOCCF0>
extern volatile __bit                   IOCCF0              __at(0xFAA8);	// @ (0x1F55 * 8 + 0)
#define                                 IOCCF0_bit          _BIT_ACCESS(IOCCF,0)
// IOCCF<IOCCF1>
extern volatile __bit                   IOCCF1              __at(0xFAA9);	// @ (0x1F55 * 8 + 1)
#define                                 IOCCF1_bit          _BIT_ACCESS(IOCCF,1)
// IOCCF<IOCCF2>
extern volatile __bit                   IOCCF2              __at(0xFAAA);	// @ (0x1F55 * 8 + 2)
#define                                 IOCCF2_bit          _BIT_ACCESS(IOCCF,2)
// IOCCF<IOCCF3>
extern volatile __bit                   IOCCF3              __at(0xFAAB);	// @ (0x1F55 * 8 + 3)
#define                                 IOCCF3_bit          _BIT_ACCESS(IOCCF,3)
// IOCCF<IOCCF4>
extern volatile __bit                   IOCCF4              __at(0xFAAC);	// @ (0x1F55 * 8 + 4)
#define                                 IOCCF4_bit          _BIT_ACCESS(IOCCF,4)
// IOCCF<IOCCF5>
extern volatile __bit                   IOCCF5              __at(0xFAAD);	// @ (0x1F55 * 8 + 5)
#define                                 IOCCF5_bit          _BIT_ACCESS(IOCCF,5)
// IOCCF<IOCCF6>
extern volatile __bit                   IOCCF6              __at(0xFAAE);	// @ (0x1F55 * 8 + 6)
#define                                 IOCCF6_bit          _BIT_ACCESS(IOCCF,6)
// IOCCF<IOCCF7>
extern volatile __bit                   IOCCF7              __at(0xFAAF);	// @ (0x1F55 * 8 + 7)
#define                                 IOCCF7_bit          _BIT_ACCESS(IOCCF,7)
// IOCCN<IOCCN0>
extern volatile __bit                   IOCCN0              __at(0xFAA0);	// @ (0x1F54 * 8 + 0)
#define                                 IOCCN0_bit          _BIT_ACCESS(IOCCN,0)
// IOCCN<IOCCN1>
extern volatile __bit                   IOCCN1              __at(0xFAA1);	// @ (0x1F54 * 8 + 1)
#define                                 IOCCN1_bit          _BIT_ACCESS(IOCCN,1)
// IOCCN<IOCCN2>
extern volatile __bit                   IOCCN2              __at(0xFAA2);	// @ (0x1F54 * 8 + 2)
#define                                 IOCCN2_bit          _BIT_ACCESS(IOCCN,2)
// IOCCN<IOCCN3>
extern volatile __bit                   IOCCN3              __at(0xFAA3);	// @ (0x1F54 * 8 + 3)
#define                                 IOCCN3_bit          _BIT_ACCESS(IOCCN,3)
// IOCCN<IOCCN4>
extern volatile __bit                   IOCCN4              __at(0xFAA4);	// @ (0x1F54 * 8 + 4)
#define                                 IOCCN4_bit          _BIT_ACCESS(IOCCN,4)
// IOCCN<IOCCN5>
extern volatile __bit                   IOCCN5              __at(0xFAA5);	// @ (0x1F54 * 8 + 5)
#define                                 IOCCN5_bit          _BIT_ACCESS(IOCCN,5)
// IOCCN<IOCCN6>
extern volatile __bit                   IOCCN6              __at(0xFAA6);	// @ (0x1F54 * 8 + 6)
#define                                 IOCCN6_bit          _BIT_ACCESS(IOCCN,6)
// IOCCN<IOCCN7>
extern volatile __bit                   IOCCN7              __at(0xFAA7);	// @ (0x1F54 * 8 + 7)
#define                                 IOCCN7_bit          _BIT_ACCESS(IOCCN,7)
// IOCCP<IOCCP0>
extern volatile __bit                   IOCCP0              __at(0xFA98);	// @ (0x1F53 * 8 + 0)
#define                                 IOCCP0_bit          _BIT_ACCESS(IOCCP,0)
// IOCCP<IOCCP1>
extern volatile __bit                   IOCCP1              __at(0xFA99);	// @ (0x1F53 * 8 + 1)
#define                                 IOCCP1_bit          _BIT_ACCESS(IOCCP,1)
// IOCCP<IOCCP2>
extern volatile __bit                   IOCCP2              __at(0xFA9A);	// @ (0x1F53 * 8 + 2)
#define                                 IOCCP2_bit          _BIT_ACCESS(IOCCP,2)
// IOCCP<IOCCP3>
extern volatile __bit                   IOCCP3              __at(0xFA9B);	// @ (0x1F53 * 8 + 3)
#define                                 IOCCP3_bit          _BIT_ACCESS(IOCCP,3)
// IOCCP<IOCCP4>
extern volatile __bit                   IOCCP4              __at(0xFA9C);	// @ (0x1F53 * 8 + 4)
#define                                 IOCCP4_bit          _BIT_ACCESS(IOCCP,4)
// IOCCP<IOCCP5>
extern volatile __bit                   IOCCP5              __at(0xFA9D);	// @ (0x1F53 * 8 + 5)
#define                                 IOCCP5_bit          _BIT_ACCESS(IOCCP,5)
// IOCCP<IOCCP6>
extern volatile __bit                   IOCCP6              __at(0xFA9E);	// @ (0x1F53 * 8 + 6)
#define                                 IOCCP6_bit          _BIT_ACCESS(IOCCP,6)
// IOCCP<IOCCP7>
extern volatile __bit                   IOCCP7              __at(0xFA9F);	// @ (0x1F53 * 8 + 7)
#define                                 IOCCP7_bit          _BIT_ACCESS(IOCCP,7)
// PIE0<IOCIE>
extern volatile __bit                   IOCIE               __at(0x38B4);	// @ (0x716 * 8 + 4)
#define                                 IOCIE_bit           _BIT_ACCESS(PIE0,4)
// PIR0<IOCIF>
extern volatile __bit                   IOCIF               __at(0x3864);	// @ (0x70C * 8 + 4)
#define                                 IOCIF_bit           _BIT_ACCESS(PIR0,4)
// LATA<LATA0>
extern volatile __bit                   LATA0               __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 LATA0_bit           _BIT_ACCESS(LATA,0)
// LATA<LATA1>
extern volatile __bit                   LATA1               __at(0xC1);	// @ (0x18 * 8 + 1)
#define                                 LATA1_bit           _BIT_ACCESS(LATA,1)
// LATA<LATA2>
extern volatile __bit                   LATA2               __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 LATA2_bit           _BIT_ACCESS(LATA,2)
// LATA<LATA3>
extern volatile __bit                   LATA3               __at(0xC3);	// @ (0x18 * 8 + 3)
#define                                 LATA3_bit           _BIT_ACCESS(LATA,3)
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0xC5);	// @ (0x18 * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
// LATB<LATB4>
extern volatile __bit                   LATB4               __at(0xCC);	// @ (0x19 * 8 + 4)
#define                                 LATB4_bit           _BIT_ACCESS(LATB,4)
// LATB<LATB5>
extern volatile __bit                   LATB5               __at(0xCD);	// @ (0x19 * 8 + 5)
#define                                 LATB5_bit           _BIT_ACCESS(LATB,5)
// LATB<LATB6>
extern volatile __bit                   LATB6               __at(0xCE);	// @ (0x19 * 8 + 6)
#define                                 LATB6_bit           _BIT_ACCESS(LATB,6)
// LATB<LATB7>
extern volatile __bit                   LATB7               __at(0xCF);	// @ (0x19 * 8 + 7)
#define                                 LATB7_bit           _BIT_ACCESS(LATB,7)
// LATC<LATC0>
extern volatile __bit                   LATC0               __at(0xD0);	// @ (0x1A * 8 + 0)
#define                                 LATC0_bit           _BIT_ACCESS(LATC,0)
// LATC<LATC1>
extern volatile __bit                   LATC1               __at(0xD1);	// @ (0x1A * 8 + 1)
#define                                 LATC1_bit           _BIT_ACCESS(LATC,1)
// LATC<LATC2>
extern volatile __bit                   LATC2               __at(0xD2);	// @ (0x1A * 8 + 2)
#define                                 LATC2_bit           _BIT_ACCESS(LATC,2)
// LATC<LATC3>
extern volatile __bit                   LATC3               __at(0xD3);	// @ (0x1A * 8 + 3)
#define                                 LATC3_bit           _BIT_ACCESS(LATC,3)
// LATC<LATC4>
extern volatile __bit                   LATC4               __at(0xD4);	// @ (0x1A * 8 + 4)
#define                                 LATC4_bit           _BIT_ACCESS(LATC,4)
// LATC<LATC5>
extern volatile __bit                   LATC5               __at(0xD5);	// @ (0x1A * 8 + 5)
#define                                 LATC5_bit           _BIT_ACCESS(LATC,5)
// LATC<LATC6>
extern volatile __bit                   LATC6               __at(0xD6);	// @ (0x1A * 8 + 6)
#define                                 LATC6_bit           _BIT_ACCESS(LATC,6)
// LATC<LATC7>
extern volatile __bit                   LATC7               __at(0xD7);	// @ (0x1A * 8 + 7)
#define                                 LATC7_bit           _BIT_ACCESS(LATC,7)
// OSCEN<LFOEN>
extern volatile __bit                   LFOEN               __at(0x448C);	// @ (0x891 * 8 + 4)
#define                                 LFOEN_bit           _BIT_ACCESS(OSCEN,4)
// OSCSTAT<LFOR>
extern volatile __bit                   LFOR                __at(0x4484);	// @ (0x890 * 8 + 4)
#define                                 LFOR_bit            _BIT_ACCESS(OSCSTAT,4)
// NVMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0x40F5);	// @ (0x81E * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(NVMCON1,5)
// T0CON0<MD16>
extern volatile __bit                   MD16                __at(0x2CF4);	// @ (0x59E * 8 + 4)
#define                                 MD16_bit            _BIT_ACCESS(T0CON0,4)
// OSCEN<MFOEN>
extern volatile __bit                   MFOEN               __at(0x448D);	// @ (0x891 * 8 + 5)
#define                                 MFOEN_bit           _BIT_ACCESS(OSCEN,5)
// OSCSTAT<MFOR>
extern volatile __bit                   MFOR                __at(0x4485);	// @ (0x890 * 8 + 5)
#define                                 MFOR_bit            _BIT_ACCESS(OSCSTAT,5)
// T2HLT<MODE4>
extern volatile __bit                   MODE4               __at(0x147C);	// @ (0x28F * 8 + 4)
#define                                 MODE4_bit           _BIT_ACCESS(T2HLT,4)
// SSP1ADD<MSK01>
extern volatile __bit                   MSK01               __at(0xC68);	// @ (0x18D * 8 + 0)
#define                                 MSK01_bit           _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<MSK11>
extern volatile __bit                   MSK11               __at(0xC69);	// @ (0x18D * 8 + 1)
#define                                 MSK11_bit           _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<MSK21>
extern volatile __bit                   MSK21               __at(0xC6A);	// @ (0x18D * 8 + 2)
#define                                 MSK21_bit           _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<MSK31>
extern volatile __bit                   MSK31               __at(0xC6B);	// @ (0x18D * 8 + 3)
#define                                 MSK31_bit           _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<MSK41>
extern volatile __bit                   MSK41               __at(0xC6C);	// @ (0x18D * 8 + 4)
#define                                 MSK41_bit           _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<MSK51>
extern volatile __bit                   MSK51               __at(0xC6D);	// @ (0x18D * 8 + 5)
#define                                 MSK51_bit           _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<MSK61>
extern volatile __bit                   MSK61               __at(0xC6E);	// @ (0x18D * 8 + 6)
#define                                 MSK61_bit           _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<MSK71>
extern volatile __bit                   MSK71               __at(0xC6F);	// @ (0x18D * 8 + 7)
#define                                 MSK71_bit           _BIT_ACCESS(SSP1ADD,7)
// OSCCON<NDIV0>
extern volatile __bit                   NDIV0               __at(0x4470);	// @ (0x88E * 8 + 0)
#define                                 NDIV0_bit           _BIT_ACCESS(OSCCON,0)
// OSCCON<NDIV1>
extern volatile __bit                   NDIV1               __at(0x4471);	// @ (0x88E * 8 + 1)
#define                                 NDIV1_bit           _BIT_ACCESS(OSCCON,1)
// OSCCON<NDIV2>
extern volatile __bit                   NDIV2               __at(0x4472);	// @ (0x88E * 8 + 2)
#define                                 NDIV2_bit           _BIT_ACCESS(OSCCON,2)
// OSCCON<NDIV3>
extern volatile __bit                   NDIV3               __at(0x4473);	// @ (0x88E * 8 + 3)
#define                                 NDIV3_bit           _BIT_ACCESS(OSCCON,3)
// OSCCON<NOSC0>
extern volatile __bit                   NOSC0               __at(0x4474);	// @ (0x88E * 8 + 4)
#define                                 NOSC0_bit           _BIT_ACCESS(OSCCON,4)
// OSCCON<NOSC1>
extern volatile __bit                   NOSC1               __at(0x4475);	// @ (0x88E * 8 + 5)
#define                                 NOSC1_bit           _BIT_ACCESS(OSCCON,5)
// OSCCON<NOSC2>
extern volatile __bit                   NOSC2               __at(0x4476);	// @ (0x88E * 8 + 6)
#define                                 NOSC2_bit           _BIT_ACCESS(OSCCON,6)
// T1GCON<NOT_DONE>
extern volatile __bit                   NOT_DONE            __at(0x107B);	// @ (0x20F * 8 + 3)
#define                                 NOT_DONE_bit        _BIT_ACCESS(T1GCON,3)
// T1CON<NOT_SYNC>
extern volatile __bit                   NOT_SYNC            __at(0x1072);	// @ (0x20E * 8 + 2)
#define                                 NOT_SYNC_bit        _BIT_ACCESS(T1CON,2)
// T1GCON<NOT_T1DONE>
extern volatile __bit                   NOT_T1DONE          __at(0x107B);	// @ (0x20F * 8 + 3)
#define                                 NOT_T1DONE_bit      _BIT_ACCESS(T1GCON,3)
// T1CON<NOT_T1SYNC>
extern volatile __bit                   NOT_T1SYNC          __at(0x1072);	// @ (0x20E * 8 + 2)
#define                                 NOT_T1SYNC_bit      _BIT_ACCESS(T1CON,2)
// PIE2<NVMIE>
extern volatile __bit                   NVMIE               __at(0x38C6);	// @ (0x718 * 8 + 6)
#define                                 NVMIE_bit           _BIT_ACCESS(PIE2,6)
// PIR2<NVMIF>
extern volatile __bit                   NVMIF               __at(0x3876);	// @ (0x70E * 8 + 6)
#define                                 NVMIF_bit           _BIT_ACCESS(PIR2,6)
// NVMCON1<NVMREGS>
extern volatile __bit                   NVMREGS             __at(0x40F6);	// @ (0x81E * 8 + 6)
#define                                 NVMREGS_bit         _BIT_ACCESS(NVMCON1,6)
// ODCONA<ODCA0>
extern volatile __bit                   ODCA0               __at(0xF9D0);	// @ (0x1F3A * 8 + 0)
#define                                 ODCA0_bit           _BIT_ACCESS(ODCONA,0)
// ODCONA<ODCA1>
extern volatile __bit                   ODCA1               __at(0xF9D1);	// @ (0x1F3A * 8 + 1)
#define                                 ODCA1_bit           _BIT_ACCESS(ODCONA,1)
// ODCONA<ODCA2>
extern volatile __bit                   ODCA2               __at(0xF9D2);	// @ (0x1F3A * 8 + 2)
#define                                 ODCA2_bit           _BIT_ACCESS(ODCONA,2)
// ODCONA<ODCA4>
extern volatile __bit                   ODCA4               __at(0xF9D4);	// @ (0x1F3A * 8 + 4)
#define                                 ODCA4_bit           _BIT_ACCESS(ODCONA,4)
// ODCONA<ODCA5>
extern volatile __bit                   ODCA5               __at(0xF9D5);	// @ (0x1F3A * 8 + 5)
#define                                 ODCA5_bit           _BIT_ACCESS(ODCONA,5)
// ODCONB<ODCB4>
extern volatile __bit                   ODCB4               __at(0xFA2C);	// @ (0x1F45 * 8 + 4)
#define                                 ODCB4_bit           _BIT_ACCESS(ODCONB,4)
// ODCONB<ODCB5>
extern volatile __bit                   ODCB5               __at(0xFA2D);	// @ (0x1F45 * 8 + 5)
#define                                 ODCB5_bit           _BIT_ACCESS(ODCONB,5)
// ODCONB<ODCB6>
extern volatile __bit                   ODCB6               __at(0xFA2E);	// @ (0x1F45 * 8 + 6)
#define                                 ODCB6_bit           _BIT_ACCESS(ODCONB,6)
// ODCONB<ODCB7>
extern volatile __bit                   ODCB7               __at(0xFA2F);	// @ (0x1F45 * 8 + 7)
#define                                 ODCB7_bit           _BIT_ACCESS(ODCONB,7)
// ODCONC<ODCC0>
extern volatile __bit                   ODCC0               __at(0xFA80);	// @ (0x1F50 * 8 + 0)
#define                                 ODCC0_bit           _BIT_ACCESS(ODCONC,0)
// ODCONC<ODCC1>
extern volatile __bit                   ODCC1               __at(0xFA81);	// @ (0x1F50 * 8 + 1)
#define                                 ODCC1_bit           _BIT_ACCESS(ODCONC,1)
// ODCONC<ODCC2>
extern volatile __bit                   ODCC2               __at(0xFA82);	// @ (0x1F50 * 8 + 2)
#define                                 ODCC2_bit           _BIT_ACCESS(ODCONC,2)
// ODCONC<ODCC3>
extern volatile __bit                   ODCC3               __at(0xFA83);	// @ (0x1F50 * 8 + 3)
#define                                 ODCC3_bit           _BIT_ACCESS(ODCONC,3)
// ODCONC<ODCC4>
extern volatile __bit                   ODCC4               __at(0xFA84);	// @ (0x1F50 * 8 + 4)
#define                                 ODCC4_bit           _BIT_ACCESS(ODCONC,4)
// ODCONC<ODCC5>
extern volatile __bit                   ODCC5               __at(0xFA85);	// @ (0x1F50 * 8 + 5)
#define                                 ODCC5_bit           _BIT_ACCESS(ODCONC,5)
// ODCONC<ODCC6>
extern volatile __bit                   ODCC6               __at(0xFA86);	// @ (0x1F50 * 8 + 6)
#define                                 ODCC6_bit           _BIT_ACCESS(ODCONC,6)
// ODCONC<ODCC7>
extern volatile __bit                   ODCC7               __at(0xFA87);	// @ (0x1F50 * 8 + 7)
#define                                 ODCC7_bit           _BIT_ACCESS(ODCONC,7)
// RC1STA<OERR>
extern volatile __bit                   OERR                __at(0x8E9);	// @ (0x11D * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RC1STA,1)
// CCP1CON<P1M1>
extern volatile __bit                   P1M1                __at(0x1877);	// @ (0x30E * 8 + 7)
#define                                 P1M1_bit            _BIT_ACCESS(CCP1CON,7)
// SSP1STAT<P2>
extern volatile __bit                   P2                  __at(0xC7C);	// @ (0x18F * 8 + 4)
#define                                 P2_bit              _BIT_ACCESS(SSP1STAT,4)
// CCP2CON<P2M1>
extern volatile __bit                   P2M1                __at(0x1897);	// @ (0x312 * 8 + 7)
#define                                 P2M1_bit            _BIT_ACCESS(CCP2CON,7)
// SSP1CON3<PCIE>
extern volatile __bit                   PCIE                __at(0xC96);	// @ (0x192 * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSP1CON3,6)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// SSP1CON2<PEN>
extern volatile __bit                   PEN                 __at(0xC8A);	// @ (0x191 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSP1CON2,2)
// SSP1CON2<PEN1>
extern volatile __bit                   PEN1                __at(0xC8A);	// @ (0x191 * 8 + 2)
#define                                 PEN1_bit            _BIT_ACCESS(SSP1CON2,2)
// PPSLOCK<PPSLOCKED>
extern volatile __bit                   PPSLOCKED           __at(0xF478);	// @ (0x1E8F * 8 + 0)
#define                                 PPSLOCKED_bit       _BIT_ACCESS(PPSLOCK,0)
// T2HLT<PSYNC>
extern volatile __bit                   PSYNC               __at(0x147F);	// @ (0x28F * 8 + 7)
#define                                 PSYNC_bit           _BIT_ACCESS(T2HLT,7)
// PWM3CON<PWM3EN>
extern volatile __bit                   PWM3EN              __at(0x18B7);	// @ (0x316 * 8 + 7)
#define                                 PWM3EN_bit          _BIT_ACCESS(PWM3CON,7)
// PWM3CON<PWM3OUT>
extern volatile __bit                   PWM3OUT             __at(0x18B5);	// @ (0x316 * 8 + 5)
#define                                 PWM3OUT_bit         _BIT_ACCESS(PWM3CON,5)
// PWM3CON<PWM3POL>
extern volatile __bit                   PWM3POL             __at(0x18B4);	// @ (0x316 * 8 + 4)
#define                                 PWM3POL_bit         _BIT_ACCESS(PWM3CON,4)
// PWM4CON<PWM4EN>
extern volatile __bit                   PWM4EN              __at(0x18D7);	// @ (0x31A * 8 + 7)
#define                                 PWM4EN_bit          _BIT_ACCESS(PWM4CON,7)
// PWM4CON<PWM4OUT>
extern volatile __bit                   PWM4OUT             __at(0x18D5);	// @ (0x31A * 8 + 5)
#define                                 PWM4OUT_bit         _BIT_ACCESS(PWM4CON,5)
// PWM4CON<PWM4POL>
extern volatile __bit                   PWM4POL             __at(0x18D4);	// @ (0x31A * 8 + 4)
#define                                 PWM4POL_bit         _BIT_ACCESS(PWM4CON,4)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x60);	// @ (0xC * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// RA0PPS<RA0PPS0>
extern volatile __bit                   RA0PPS0             __at(0xF880);	// @ (0x1F10 * 8 + 0)
#define                                 RA0PPS0_bit         _BIT_ACCESS(RA0PPS,0)
// RA0PPS<RA0PPS1>
extern volatile __bit                   RA0PPS1             __at(0xF881);	// @ (0x1F10 * 8 + 1)
#define                                 RA0PPS1_bit         _BIT_ACCESS(RA0PPS,1)
// RA0PPS<RA0PPS2>
extern volatile __bit                   RA0PPS2             __at(0xF882);	// @ (0x1F10 * 8 + 2)
#define                                 RA0PPS2_bit         _BIT_ACCESS(RA0PPS,2)
// RA0PPS<RA0PPS3>
extern volatile __bit                   RA0PPS3             __at(0xF883);	// @ (0x1F10 * 8 + 3)
#define                                 RA0PPS3_bit         _BIT_ACCESS(RA0PPS,3)
// RA0PPS<RA0PPS4>
extern volatile __bit                   RA0PPS4             __at(0xF884);	// @ (0x1F10 * 8 + 4)
#define                                 RA0PPS4_bit         _BIT_ACCESS(RA0PPS,4)
// RA0PPS<RA0PPS5>
extern volatile __bit                   RA0PPS5             __at(0xF885);	// @ (0x1F10 * 8 + 5)
#define                                 RA0PPS5_bit         _BIT_ACCESS(RA0PPS,5)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x61);	// @ (0xC * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// RA1PPS<RA1PPS0>
extern volatile __bit                   RA1PPS0             __at(0xF888);	// @ (0x1F11 * 8 + 0)
#define                                 RA1PPS0_bit         _BIT_ACCESS(RA1PPS,0)
// RA1PPS<RA1PPS1>
extern volatile __bit                   RA1PPS1             __at(0xF889);	// @ (0x1F11 * 8 + 1)
#define                                 RA1PPS1_bit         _BIT_ACCESS(RA1PPS,1)
// RA1PPS<RA1PPS2>
extern volatile __bit                   RA1PPS2             __at(0xF88A);	// @ (0x1F11 * 8 + 2)
#define                                 RA1PPS2_bit         _BIT_ACCESS(RA1PPS,2)
// RA1PPS<RA1PPS3>
extern volatile __bit                   RA1PPS3             __at(0xF88B);	// @ (0x1F11 * 8 + 3)
#define                                 RA1PPS3_bit         _BIT_ACCESS(RA1PPS,3)
// RA1PPS<RA1PPS4>
extern volatile __bit                   RA1PPS4             __at(0xF88C);	// @ (0x1F11 * 8 + 4)
#define                                 RA1PPS4_bit         _BIT_ACCESS(RA1PPS,4)
// RA1PPS<RA1PPS5>
extern volatile __bit                   RA1PPS5             __at(0xF88D);	// @ (0x1F11 * 8 + 5)
#define                                 RA1PPS5_bit         _BIT_ACCESS(RA1PPS,5)
// PORTA<RA2>
extern volatile __bit                   RA2                 __at(0x62);	// @ (0xC * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// RA2PPS<RA2PPS0>
extern volatile __bit                   RA2PPS0             __at(0xF890);	// @ (0x1F12 * 8 + 0)
#define                                 RA2PPS0_bit         _BIT_ACCESS(RA2PPS,0)
// RA2PPS<RA2PPS1>
extern volatile __bit                   RA2PPS1             __at(0xF891);	// @ (0x1F12 * 8 + 1)
#define                                 RA2PPS1_bit         _BIT_ACCESS(RA2PPS,1)
// RA2PPS<RA2PPS2>
extern volatile __bit                   RA2PPS2             __at(0xF892);	// @ (0x1F12 * 8 + 2)
#define                                 RA2PPS2_bit         _BIT_ACCESS(RA2PPS,2)
// RA2PPS<RA2PPS3>
extern volatile __bit                   RA2PPS3             __at(0xF893);	// @ (0x1F12 * 8 + 3)
#define                                 RA2PPS3_bit         _BIT_ACCESS(RA2PPS,3)
// RA2PPS<RA2PPS4>
extern volatile __bit                   RA2PPS4             __at(0xF894);	// @ (0x1F12 * 8 + 4)
#define                                 RA2PPS4_bit         _BIT_ACCESS(RA2PPS,4)
// RA2PPS<RA2PPS5>
extern volatile __bit                   RA2PPS5             __at(0xF895);	// @ (0x1F12 * 8 + 5)
#define                                 RA2PPS5_bit         _BIT_ACCESS(RA2PPS,5)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x63);	// @ (0xC * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x64);	// @ (0xC * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// RA4PPS<RA4PPS0>
extern volatile __bit                   RA4PPS0             __at(0xF8A0);	// @ (0x1F14 * 8 + 0)
#define                                 RA4PPS0_bit         _BIT_ACCESS(RA4PPS,0)
// RA4PPS<RA4PPS1>
extern volatile __bit                   RA4PPS1             __at(0xF8A1);	// @ (0x1F14 * 8 + 1)
#define                                 RA4PPS1_bit         _BIT_ACCESS(RA4PPS,1)
// RA4PPS<RA4PPS2>
extern volatile __bit                   RA4PPS2             __at(0xF8A2);	// @ (0x1F14 * 8 + 2)
#define                                 RA4PPS2_bit         _BIT_ACCESS(RA4PPS,2)
// RA4PPS<RA4PPS3>
extern volatile __bit                   RA4PPS3             __at(0xF8A3);	// @ (0x1F14 * 8 + 3)
#define                                 RA4PPS3_bit         _BIT_ACCESS(RA4PPS,3)
// RA4PPS<RA4PPS4>
extern volatile __bit                   RA4PPS4             __at(0xF8A4);	// @ (0x1F14 * 8 + 4)
#define                                 RA4PPS4_bit         _BIT_ACCESS(RA4PPS,4)
// RA4PPS<RA4PPS5>
extern volatile __bit                   RA4PPS5             __at(0xF8A5);	// @ (0x1F14 * 8 + 5)
#define                                 RA4PPS5_bit         _BIT_ACCESS(RA4PPS,5)
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x65);	// @ (0xC * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// RA5PPS<RA5PPS0>
extern volatile __bit                   RA5PPS0             __at(0xF8A8);	// @ (0x1F15 * 8 + 0)
#define                                 RA5PPS0_bit         _BIT_ACCESS(RA5PPS,0)
// RA5PPS<RA5PPS1>
extern volatile __bit                   RA5PPS1             __at(0xF8A9);	// @ (0x1F15 * 8 + 1)
#define                                 RA5PPS1_bit         _BIT_ACCESS(RA5PPS,1)
// RA5PPS<RA5PPS2>
extern volatile __bit                   RA5PPS2             __at(0xF8AA);	// @ (0x1F15 * 8 + 2)
#define                                 RA5PPS2_bit         _BIT_ACCESS(RA5PPS,2)
// RA5PPS<RA5PPS3>
extern volatile __bit                   RA5PPS3             __at(0xF8AB);	// @ (0x1F15 * 8 + 3)
#define                                 RA5PPS3_bit         _BIT_ACCESS(RA5PPS,3)
// RA5PPS<RA5PPS4>
extern volatile __bit                   RA5PPS4             __at(0xF8AC);	// @ (0x1F15 * 8 + 4)
#define                                 RA5PPS4_bit         _BIT_ACCESS(RA5PPS,4)
// RA5PPS<RA5PPS5>
extern volatile __bit                   RA5PPS5             __at(0xF8AD);	// @ (0x1F15 * 8 + 5)
#define                                 RA5PPS5_bit         _BIT_ACCESS(RA5PPS,5)
// PORTB<RB4>
extern volatile __bit                   RB4                 __at(0x6C);	// @ (0xD * 8 + 4)
#define                                 RB4_bit             _BIT_ACCESS(PORTB,4)
// RB4PPS<RB4PPS0>
extern volatile __bit                   RB4PPS0             __at(0xF8E0);	// @ (0x1F1C * 8 + 0)
#define                                 RB4PPS0_bit         _BIT_ACCESS(RB4PPS,0)
// RB4PPS<RB4PPS1>
extern volatile __bit                   RB4PPS1             __at(0xF8E1);	// @ (0x1F1C * 8 + 1)
#define                                 RB4PPS1_bit         _BIT_ACCESS(RB4PPS,1)
// RB4PPS<RB4PPS2>
extern volatile __bit                   RB4PPS2             __at(0xF8E2);	// @ (0x1F1C * 8 + 2)
#define                                 RB4PPS2_bit         _BIT_ACCESS(RB4PPS,2)
// RB4PPS<RB4PPS3>
extern volatile __bit                   RB4PPS3             __at(0xF8E3);	// @ (0x1F1C * 8 + 3)
#define                                 RB4PPS3_bit         _BIT_ACCESS(RB4PPS,3)
// RB4PPS<RB4PPS4>
extern volatile __bit                   RB4PPS4             __at(0xF8E4);	// @ (0x1F1C * 8 + 4)
#define                                 RB4PPS4_bit         _BIT_ACCESS(RB4PPS,4)
// RB4PPS<RB4PPS5>
extern volatile __bit                   RB4PPS5             __at(0xF8E5);	// @ (0x1F1C * 8 + 5)
#define                                 RB4PPS5_bit         _BIT_ACCESS(RB4PPS,5)
// PORTB<RB5>
extern volatile __bit                   RB5                 __at(0x6D);	// @ (0xD * 8 + 5)
#define                                 RB5_bit             _BIT_ACCESS(PORTB,5)
// RB5PPS<RB5PPS0>
extern volatile __bit                   RB5PPS0             __at(0xF8E8);	// @ (0x1F1D * 8 + 0)
#define                                 RB5PPS0_bit         _BIT_ACCESS(RB5PPS,0)
// RB5PPS<RB5PPS1>
extern volatile __bit                   RB5PPS1             __at(0xF8E9);	// @ (0x1F1D * 8 + 1)
#define                                 RB5PPS1_bit         _BIT_ACCESS(RB5PPS,1)
// RB5PPS<RB5PPS2>
extern volatile __bit                   RB5PPS2             __at(0xF8EA);	// @ (0x1F1D * 8 + 2)
#define                                 RB5PPS2_bit         _BIT_ACCESS(RB5PPS,2)
// RB5PPS<RB5PPS3>
extern volatile __bit                   RB5PPS3             __at(0xF8EB);	// @ (0x1F1D * 8 + 3)
#define                                 RB5PPS3_bit         _BIT_ACCESS(RB5PPS,3)
// RB5PPS<RB5PPS4>
extern volatile __bit                   RB5PPS4             __at(0xF8EC);	// @ (0x1F1D * 8 + 4)
#define                                 RB5PPS4_bit         _BIT_ACCESS(RB5PPS,4)
// RB5PPS<RB5PPS5>
extern volatile __bit                   RB5PPS5             __at(0xF8ED);	// @ (0x1F1D * 8 + 5)
#define                                 RB5PPS5_bit         _BIT_ACCESS(RB5PPS,5)
// PORTB<RB6>
extern volatile __bit                   RB6                 __at(0x6E);	// @ (0xD * 8 + 6)
#define                                 RB6_bit             _BIT_ACCESS(PORTB,6)
// RB6PPS<RB6PPS0>
extern volatile __bit                   RB6PPS0             __at(0xF8F0);	// @ (0x1F1E * 8 + 0)
#define                                 RB6PPS0_bit         _BIT_ACCESS(RB6PPS,0)
// RB6PPS<RB6PPS1>
extern volatile __bit                   RB6PPS1             __at(0xF8F1);	// @ (0x1F1E * 8 + 1)
#define                                 RB6PPS1_bit         _BIT_ACCESS(RB6PPS,1)
// RB6PPS<RB6PPS2>
extern volatile __bit                   RB6PPS2             __at(0xF8F2);	// @ (0x1F1E * 8 + 2)
#define                                 RB6PPS2_bit         _BIT_ACCESS(RB6PPS,2)
// RB6PPS<RB6PPS3>
extern volatile __bit                   RB6PPS3             __at(0xF8F3);	// @ (0x1F1E * 8 + 3)
#define                                 RB6PPS3_bit         _BIT_ACCESS(RB6PPS,3)
// RB6PPS<RB6PPS4>
extern volatile __bit                   RB6PPS4             __at(0xF8F4);	// @ (0x1F1E * 8 + 4)
#define                                 RB6PPS4_bit         _BIT_ACCESS(RB6PPS,4)
// RB6PPS<RB6PPS5>
extern volatile __bit                   RB6PPS5             __at(0xF8F5);	// @ (0x1F1E * 8 + 5)
#define                                 RB6PPS5_bit         _BIT_ACCESS(RB6PPS,5)
// PORTB<RB7>
extern volatile __bit                   RB7                 __at(0x6F);	// @ (0xD * 8 + 7)
#define                                 RB7_bit             _BIT_ACCESS(PORTB,7)
// RB7PPS<RB7PPS0>
extern volatile __bit                   RB7PPS0             __at(0xF8F8);	// @ (0x1F1F * 8 + 0)
#define                                 RB7PPS0_bit         _BIT_ACCESS(RB7PPS,0)
// RB7PPS<RB7PPS1>
extern volatile __bit                   RB7PPS1             __at(0xF8F9);	// @ (0x1F1F * 8 + 1)
#define                                 RB7PPS1_bit         _BIT_ACCESS(RB7PPS,1)
// RB7PPS<RB7PPS2>
extern volatile __bit                   RB7PPS2             __at(0xF8FA);	// @ (0x1F1F * 8 + 2)
#define                                 RB7PPS2_bit         _BIT_ACCESS(RB7PPS,2)
// RB7PPS<RB7PPS3>
extern volatile __bit                   RB7PPS3             __at(0xF8FB);	// @ (0x1F1F * 8 + 3)
#define                                 RB7PPS3_bit         _BIT_ACCESS(RB7PPS,3)
// RB7PPS<RB7PPS4>
extern volatile __bit                   RB7PPS4             __at(0xF8FC);	// @ (0x1F1F * 8 + 4)
#define                                 RB7PPS4_bit         _BIT_ACCESS(RB7PPS,4)
// RB7PPS<RB7PPS5>
extern volatile __bit                   RB7PPS5             __at(0xF8FD);	// @ (0x1F1F * 8 + 5)
#define                                 RB7PPS5_bit         _BIT_ACCESS(RB7PPS,5)
// PORTC<RC0>
extern volatile __bit                   RC0                 __at(0x70);	// @ (0xE * 8 + 0)
#define                                 RC0_bit             _BIT_ACCESS(PORTC,0)
// RC0PPS<RC0PPS0>
extern volatile __bit                   RC0PPS0             __at(0xF900);	// @ (0x1F20 * 8 + 0)
#define                                 RC0PPS0_bit         _BIT_ACCESS(RC0PPS,0)
// RC0PPS<RC0PPS1>
extern volatile __bit                   RC0PPS1             __at(0xF901);	// @ (0x1F20 * 8 + 1)
#define                                 RC0PPS1_bit         _BIT_ACCESS(RC0PPS,1)
// RC0PPS<RC0PPS2>
extern volatile __bit                   RC0PPS2             __at(0xF902);	// @ (0x1F20 * 8 + 2)
#define                                 RC0PPS2_bit         _BIT_ACCESS(RC0PPS,2)
// RC0PPS<RC0PPS3>
extern volatile __bit                   RC0PPS3             __at(0xF903);	// @ (0x1F20 * 8 + 3)
#define                                 RC0PPS3_bit         _BIT_ACCESS(RC0PPS,3)
// RC0PPS<RC0PPS4>
extern volatile __bit                   RC0PPS4             __at(0xF904);	// @ (0x1F20 * 8 + 4)
#define                                 RC0PPS4_bit         _BIT_ACCESS(RC0PPS,4)
// RC0PPS<RC0PPS5>
extern volatile __bit                   RC0PPS5             __at(0xF905);	// @ (0x1F20 * 8 + 5)
#define                                 RC0PPS5_bit         _BIT_ACCESS(RC0PPS,5)
// PORTC<RC1>
extern volatile __bit                   RC1                 __at(0x71);	// @ (0xE * 8 + 1)
#define                                 RC1_bit             _BIT_ACCESS(PORTC,1)
// PIE1<RC1IE>
extern volatile __bit                   RC1IE               __at(0x38BC);	// @ (0x717 * 8 + 4)
#define                                 RC1IE_bit           _BIT_ACCESS(PIE1,4)
// PIR1<RC1IF>
extern volatile __bit                   RC1IF               __at(0x386C);	// @ (0x70D * 8 + 4)
#define                                 RC1IF_bit           _BIT_ACCESS(PIR1,4)
// RC1PPS<RC1PPS0>
extern volatile __bit                   RC1PPS0             __at(0xF908);	// @ (0x1F21 * 8 + 0)
#define                                 RC1PPS0_bit         _BIT_ACCESS(RC1PPS,0)
// RC1PPS<RC1PPS1>
extern volatile __bit                   RC1PPS1             __at(0xF909);	// @ (0x1F21 * 8 + 1)
#define                                 RC1PPS1_bit         _BIT_ACCESS(RC1PPS,1)
// RC1PPS<RC1PPS2>
extern volatile __bit                   RC1PPS2             __at(0xF90A);	// @ (0x1F21 * 8 + 2)
#define                                 RC1PPS2_bit         _BIT_ACCESS(RC1PPS,2)
// RC1PPS<RC1PPS3>
extern volatile __bit                   RC1PPS3             __at(0xF90B);	// @ (0x1F21 * 8 + 3)
#define                                 RC1PPS3_bit         _BIT_ACCESS(RC1PPS,3)
// RC1PPS<RC1PPS4>
extern volatile __bit                   RC1PPS4             __at(0xF90C);	// @ (0x1F21 * 8 + 4)
#define                                 RC1PPS4_bit         _BIT_ACCESS(RC1PPS,4)
// RC1PPS<RC1PPS5>
extern volatile __bit                   RC1PPS5             __at(0xF90D);	// @ (0x1F21 * 8 + 5)
#define                                 RC1PPS5_bit         _BIT_ACCESS(RC1PPS,5)
// PORTC<RC2>
extern volatile __bit                   RC2                 __at(0x72);	// @ (0xE * 8 + 2)
#define                                 RC2_bit             _BIT_ACCESS(PORTC,2)
// RC2PPS<RC2PPS0>
extern volatile __bit                   RC2PPS0             __at(0xF910);	// @ (0x1F22 * 8 + 0)
#define                                 RC2PPS0_bit         _BIT_ACCESS(RC2PPS,0)
// RC2PPS<RC2PPS1>
extern volatile __bit                   RC2PPS1             __at(0xF911);	// @ (0x1F22 * 8 + 1)
#define                                 RC2PPS1_bit         _BIT_ACCESS(RC2PPS,1)
// RC2PPS<RC2PPS2>
extern volatile __bit                   RC2PPS2             __at(0xF912);	// @ (0x1F22 * 8 + 2)
#define                                 RC2PPS2_bit         _BIT_ACCESS(RC2PPS,2)
// RC2PPS<RC2PPS3>
extern volatile __bit                   RC2PPS3             __at(0xF913);	// @ (0x1F22 * 8 + 3)
#define                                 RC2PPS3_bit         _BIT_ACCESS(RC2PPS,3)
// RC2PPS<RC2PPS4>
extern volatile __bit                   RC2PPS4             __at(0xF914);	// @ (0x1F22 * 8 + 4)
#define                                 RC2PPS4_bit         _BIT_ACCESS(RC2PPS,4)
// RC2PPS<RC2PPS5>
extern volatile __bit                   RC2PPS5             __at(0xF915);	// @ (0x1F22 * 8 + 5)
#define                                 RC2PPS5_bit         _BIT_ACCESS(RC2PPS,5)
// PORTC<RC3>
extern volatile __bit                   RC3                 __at(0x73);	// @ (0xE * 8 + 3)
#define                                 RC3_bit             _BIT_ACCESS(PORTC,3)
// RC3PPS<RC3PPS0>
extern volatile __bit                   RC3PPS0             __at(0xF918);	// @ (0x1F23 * 8 + 0)
#define                                 RC3PPS0_bit         _BIT_ACCESS(RC3PPS,0)
// RC3PPS<RC3PPS1>
extern volatile __bit                   RC3PPS1             __at(0xF919);	// @ (0x1F23 * 8 + 1)
#define                                 RC3PPS1_bit         _BIT_ACCESS(RC3PPS,1)
// RC3PPS<RC3PPS2>
extern volatile __bit                   RC3PPS2             __at(0xF91A);	// @ (0x1F23 * 8 + 2)
#define                                 RC3PPS2_bit         _BIT_ACCESS(RC3PPS,2)
// RC3PPS<RC3PPS3>
extern volatile __bit                   RC3PPS3             __at(0xF91B);	// @ (0x1F23 * 8 + 3)
#define                                 RC3PPS3_bit         _BIT_ACCESS(RC3PPS,3)
// RC3PPS<RC3PPS4>
extern volatile __bit                   RC3PPS4             __at(0xF91C);	// @ (0x1F23 * 8 + 4)
#define                                 RC3PPS4_bit         _BIT_ACCESS(RC3PPS,4)
// RC3PPS<RC3PPS5>
extern volatile __bit                   RC3PPS5             __at(0xF91D);	// @ (0x1F23 * 8 + 5)
#define                                 RC3PPS5_bit         _BIT_ACCESS(RC3PPS,5)
// PORTC<RC4>
extern volatile __bit                   RC4                 __at(0x74);	// @ (0xE * 8 + 4)
#define                                 RC4_bit             _BIT_ACCESS(PORTC,4)
// RC4PPS<RC4PPS0>
extern volatile __bit                   RC4PPS0             __at(0xF920);	// @ (0x1F24 * 8 + 0)
#define                                 RC4PPS0_bit         _BIT_ACCESS(RC4PPS,0)
// RC4PPS<RC4PPS1>
extern volatile __bit                   RC4PPS1             __at(0xF921);	// @ (0x1F24 * 8 + 1)
#define                                 RC4PPS1_bit         _BIT_ACCESS(RC4PPS,1)
// RC4PPS<RC4PPS2>
extern volatile __bit                   RC4PPS2             __at(0xF922);	// @ (0x1F24 * 8 + 2)
#define                                 RC4PPS2_bit         _BIT_ACCESS(RC4PPS,2)
// RC4PPS<RC4PPS3>
extern volatile __bit                   RC4PPS3             __at(0xF923);	// @ (0x1F24 * 8 + 3)
#define                                 RC4PPS3_bit         _BIT_ACCESS(RC4PPS,3)
// RC4PPS<RC4PPS4>
extern volatile __bit                   RC4PPS4             __at(0xF924);	// @ (0x1F24 * 8 + 4)
#define                                 RC4PPS4_bit         _BIT_ACCESS(RC4PPS,4)
// RC4PPS<RC4PPS5>
extern volatile __bit                   RC4PPS5             __at(0xF925);	// @ (0x1F24 * 8 + 5)
#define                                 RC4PPS5_bit         _BIT_ACCESS(RC4PPS,5)
// PORTC<RC5>
extern volatile __bit                   RC5                 __at(0x75);	// @ (0xE * 8 + 5)
#define                                 RC5_bit             _BIT_ACCESS(PORTC,5)
// RC5PPS<RC5PPS0>
extern volatile __bit                   RC5PPS0             __at(0xF928);	// @ (0x1F25 * 8 + 0)
#define                                 RC5PPS0_bit         _BIT_ACCESS(RC5PPS,0)
// RC5PPS<RC5PPS1>
extern volatile __bit                   RC5PPS1             __at(0xF929);	// @ (0x1F25 * 8 + 1)
#define                                 RC5PPS1_bit         _BIT_ACCESS(RC5PPS,1)
// RC5PPS<RC5PPS2>
extern volatile __bit                   RC5PPS2             __at(0xF92A);	// @ (0x1F25 * 8 + 2)
#define                                 RC5PPS2_bit         _BIT_ACCESS(RC5PPS,2)
// RC5PPS<RC5PPS3>
extern volatile __bit                   RC5PPS3             __at(0xF92B);	// @ (0x1F25 * 8 + 3)
#define                                 RC5PPS3_bit         _BIT_ACCESS(RC5PPS,3)
// RC5PPS<RC5PPS4>
extern volatile __bit                   RC5PPS4             __at(0xF92C);	// @ (0x1F25 * 8 + 4)
#define                                 RC5PPS4_bit         _BIT_ACCESS(RC5PPS,4)
// RC5PPS<RC5PPS5>
extern volatile __bit                   RC5PPS5             __at(0xF92D);	// @ (0x1F25 * 8 + 5)
#define                                 RC5PPS5_bit         _BIT_ACCESS(RC5PPS,5)
// PORTC<RC6>
extern volatile __bit                   RC6                 __at(0x76);	// @ (0xE * 8 + 6)
#define                                 RC6_bit             _BIT_ACCESS(PORTC,6)
// RC6PPS<RC6PPS0>
extern volatile __bit                   RC6PPS0             __at(0xF930);	// @ (0x1F26 * 8 + 0)
#define                                 RC6PPS0_bit         _BIT_ACCESS(RC6PPS,0)
// RC6PPS<RC6PPS1>
extern volatile __bit                   RC6PPS1             __at(0xF931);	// @ (0x1F26 * 8 + 1)
#define                                 RC6PPS1_bit         _BIT_ACCESS(RC6PPS,1)
// RC6PPS<RC6PPS2>
extern volatile __bit                   RC6PPS2             __at(0xF932);	// @ (0x1F26 * 8 + 2)
#define                                 RC6PPS2_bit         _BIT_ACCESS(RC6PPS,2)
// RC6PPS<RC6PPS3>
extern volatile __bit                   RC6PPS3             __at(0xF933);	// @ (0x1F26 * 8 + 3)
#define                                 RC6PPS3_bit         _BIT_ACCESS(RC6PPS,3)
// RC6PPS<RC6PPS4>
extern volatile __bit                   RC6PPS4             __at(0xF934);	// @ (0x1F26 * 8 + 4)
#define                                 RC6PPS4_bit         _BIT_ACCESS(RC6PPS,4)
// RC6PPS<RC6PPS5>
extern volatile __bit                   RC6PPS5             __at(0xF935);	// @ (0x1F26 * 8 + 5)
#define                                 RC6PPS5_bit         _BIT_ACCESS(RC6PPS,5)
// PORTC<RC7>
extern volatile __bit                   RC7                 __at(0x77);	// @ (0xE * 8 + 7)
#define                                 RC7_bit             _BIT_ACCESS(PORTC,7)
// RC7PPS<RC7PPS0>
extern volatile __bit                   RC7PPS0             __at(0xF938);	// @ (0x1F27 * 8 + 0)
#define                                 RC7PPS0_bit         _BIT_ACCESS(RC7PPS,0)
// RC7PPS<RC7PPS1>
extern volatile __bit                   RC7PPS1             __at(0xF939);	// @ (0x1F27 * 8 + 1)
#define                                 RC7PPS1_bit         _BIT_ACCESS(RC7PPS,1)
// RC7PPS<RC7PPS2>
extern volatile __bit                   RC7PPS2             __at(0xF93A);	// @ (0x1F27 * 8 + 2)
#define                                 RC7PPS2_bit         _BIT_ACCESS(RC7PPS,2)
// RC7PPS<RC7PPS3>
extern volatile __bit                   RC7PPS3             __at(0xF93B);	// @ (0x1F27 * 8 + 3)
#define                                 RC7PPS3_bit         _BIT_ACCESS(RC7PPS,3)
// RC7PPS<RC7PPS4>
extern volatile __bit                   RC7PPS4             __at(0xF93C);	// @ (0x1F27 * 8 + 4)
#define                                 RC7PPS4_bit         _BIT_ACCESS(RC7PPS,4)
// RC7PPS<RC7PPS5>
extern volatile __bit                   RC7PPS5             __at(0xF93D);	// @ (0x1F27 * 8 + 5)
#define                                 RC7PPS5_bit         _BIT_ACCESS(RC7PPS,5)
// SSP1CON2<RCEN>
extern volatile __bit                   RCEN                __at(0xC8B);	// @ (0x191 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSP1CON2,3)
// SSP1CON2<RCEN1>
extern volatile __bit                   RCEN1               __at(0xC8B);	// @ (0x191 * 8 + 3)
#define                                 RCEN1_bit           _BIT_ACCESS(SSP1CON2,3)
// BAUD1CON<RCIDL>
extern volatile __bit                   RCIDL               __at(0x8FE);	// @ (0x11F * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUD1CON,6)
// NVMCON1<RD>
extern volatile __bit                   RD                  __at(0x40F0);	// @ (0x81E * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(NVMCON1,0)
// T1CON<RD16>
extern volatile __bit                   RD16                __at(0x1071);	// @ (0x20E * 8 + 1)
#define                                 RD16_bit            _BIT_ACCESS(T1CON,1)
// T1CON<RD161>
extern volatile __bit                   RD161               __at(0x1071);	// @ (0x20E * 8 + 1)
#define                                 RD161_bit           _BIT_ACCESS(T1CON,1)
// SSP1STAT<READ_WRITE>
extern volatile __bit                   READ_WRITE          __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 READ_WRITE_bit      _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<READ_WRITE1>
extern volatile __bit                   READ_WRITE1         __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 READ_WRITE1_bit     _BIT_ACCESS(SSP1STAT,2)
// T2RST<RSEL0>
extern volatile __bit                   RSEL0               __at(0x1488);	// @ (0x291 * 8 + 0)
#define                                 RSEL0_bit           _BIT_ACCESS(T2RST,0)
// T2RST<RSEL1>
extern volatile __bit                   RSEL1               __at(0x1489);	// @ (0x291 * 8 + 1)
#define                                 RSEL1_bit           _BIT_ACCESS(T2RST,1)
// T2RST<RSEL2>
extern volatile __bit                   RSEL2               __at(0x148A);	// @ (0x291 * 8 + 2)
#define                                 RSEL2_bit           _BIT_ACCESS(T2RST,2)
// T2RST<RSEL3>
extern volatile __bit                   RSEL3               __at(0x148B);	// @ (0x291 * 8 + 3)
#define                                 RSEL3_bit           _BIT_ACCESS(T2RST,3)
// SSP1CON2<RSEN>
extern volatile __bit                   RSEN                __at(0xC89);	// @ (0x191 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSP1CON2,1)
// SSP1CON2<RSEN1>
extern volatile __bit                   RSEN1               __at(0xC89);	// @ (0x191 * 8 + 1)
#define                                 RSEN1_bit           _BIT_ACCESS(SSP1CON2,1)
// SSP1STAT<RW>
extern volatile __bit                   RW                  __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 RW_bit              _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<RW1>
extern volatile __bit                   RW1                 __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 RW1_bit             _BIT_ACCESS(SSP1STAT,2)
// RX1PPS<RX1DTPPS0>
extern volatile __bit                   RX1DTPPS0           __at(0xF658);	// @ (0x1ECB * 8 + 0)
#define                                 RX1DTPPS0_bit       _BIT_ACCESS(RX1PPS,0)
// RX1PPS<RX1DTPPS1>
extern volatile __bit                   RX1DTPPS1           __at(0xF659);	// @ (0x1ECB * 8 + 1)
#define                                 RX1DTPPS1_bit       _BIT_ACCESS(RX1PPS,1)
// RX1PPS<RX1DTPPS2>
extern volatile __bit                   RX1DTPPS2           __at(0xF65A);	// @ (0x1ECB * 8 + 2)
#define                                 RX1DTPPS2_bit       _BIT_ACCESS(RX1PPS,2)
// RX1PPS<RX1DTPPS3>
extern volatile __bit                   RX1DTPPS3           __at(0xF65B);	// @ (0x1ECB * 8 + 3)
#define                                 RX1DTPPS3_bit       _BIT_ACCESS(RX1PPS,3)
// RX1PPS<RX1DTPPS4>
extern volatile __bit                   RX1DTPPS4           __at(0xF65C);	// @ (0x1ECB * 8 + 4)
#define                                 RX1DTPPS4_bit       _BIT_ACCESS(RX1PPS,4)
// RC1STA<RX9>
extern volatile __bit                   RX9                 __at(0x8EE);	// @ (0x11D * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RC1STA,6)
// RC1STA<RX9D>
extern volatile __bit                   RX9D                __at(0x8E8);	// @ (0x11D * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RC1STA,0)
// SSP1STAT<R_W>
extern volatile __bit                   R_W                 __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 R_W_bit             _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<R_W1>
extern volatile __bit                   R_W1                __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 R_W1_bit            _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<R_nW>
extern volatile __bit                   R_nW                __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<R_nW1>
extern volatile __bit                   R_nW1               __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 R_nW1_bit           _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<S2>
extern volatile __bit                   S2                  __at(0xC7B);	// @ (0x18F * 8 + 3)
#define                                 S2_bit              _BIT_ACCESS(SSP1STAT,3)
// SSP1CON3<SBCDE>
extern volatile __bit                   SBCDE               __at(0xC92);	// @ (0x192 * 8 + 2)
#define                                 SBCDE_bit           _BIT_ACCESS(SSP1CON3,2)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x408F);	// @ (0x811 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// SSP1CON3<SCIE>
extern volatile __bit                   SCIE                __at(0xC95);	// @ (0x192 * 8 + 5)
#define                                 SCIE_bit            _BIT_ACCESS(SSP1CON3,5)
// BAUD1CON<SCKP>
extern volatile __bit                   SCKP                __at(0x8FC);	// @ (0x11F * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUD1CON,4)
// SSP1CON3<SDAHT>
extern volatile __bit                   SDAHT               __at(0xC93);	// @ (0x192 * 8 + 3)
#define                                 SDAHT_bit           _BIT_ACCESS(SSP1CON3,3)
// SSP1CON2<SEN1>
extern volatile __bit                   SEN1                __at(0xC88);	// @ (0x191 * 8 + 0)
#define                                 SEN1_bit            _BIT_ACCESS(SSP1CON2,0)
// TX1STA<SENDB>
extern volatile __bit                   SENDB               __at(0x8F3);	// @ (0x11E * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TX1STA,3)
// OSCSTAT<SFOR>
extern volatile __bit                   SFOR                __at(0x4481);	// @ (0x890 * 8 + 1)
#define                                 SFOR_bit            _BIT_ACCESS(OSCSTAT,1)
// SLRCONA<SLRA0>
extern volatile __bit                   SLRA0               __at(0xF9D8);	// @ (0x1F3B * 8 + 0)
#define                                 SLRA0_bit           _BIT_ACCESS(SLRCONA,0)
// SLRCONA<SLRA1>
extern volatile __bit                   SLRA1               __at(0xF9D9);	// @ (0x1F3B * 8 + 1)
#define                                 SLRA1_bit           _BIT_ACCESS(SLRCONA,1)
// SLRCONA<SLRA2>
extern volatile __bit                   SLRA2               __at(0xF9DA);	// @ (0x1F3B * 8 + 2)
#define                                 SLRA2_bit           _BIT_ACCESS(SLRCONA,2)
// SLRCONA<SLRA4>
extern volatile __bit                   SLRA4               __at(0xF9DC);	// @ (0x1F3B * 8 + 4)
#define                                 SLRA4_bit           _BIT_ACCESS(SLRCONA,4)
// SLRCONA<SLRA5>
extern volatile __bit                   SLRA5               __at(0xF9DD);	// @ (0x1F3B * 8 + 5)
#define                                 SLRA5_bit           _BIT_ACCESS(SLRCONA,5)
// SLRCONB<SLRB4>
extern volatile __bit                   SLRB4               __at(0xFA34);	// @ (0x1F46 * 8 + 4)
#define                                 SLRB4_bit           _BIT_ACCESS(SLRCONB,4)
// SLRCONB<SLRB5>
extern volatile __bit                   SLRB5               __at(0xFA35);	// @ (0x1F46 * 8 + 5)
#define                                 SLRB5_bit           _BIT_ACCESS(SLRCONB,5)
// SLRCONB<SLRB6>
extern volatile __bit                   SLRB6               __at(0xFA36);	// @ (0x1F46 * 8 + 6)
#define                                 SLRB6_bit           _BIT_ACCESS(SLRCONB,6)
// SLRCONB<SLRB7>
extern volatile __bit                   SLRB7               __at(0xFA37);	// @ (0x1F46 * 8 + 7)
#define                                 SLRB7_bit           _BIT_ACCESS(SLRCONB,7)
// SLRCONC<SLRC0>
extern volatile __bit                   SLRC0               __at(0xFA88);	// @ (0x1F51 * 8 + 0)
#define                                 SLRC0_bit           _BIT_ACCESS(SLRCONC,0)
// SLRCONC<SLRC1>
extern volatile __bit                   SLRC1               __at(0xFA89);	// @ (0x1F51 * 8 + 1)
#define                                 SLRC1_bit           _BIT_ACCESS(SLRCONC,1)
// SLRCONC<SLRC2>
extern volatile __bit                   SLRC2               __at(0xFA8A);	// @ (0x1F51 * 8 + 2)
#define                                 SLRC2_bit           _BIT_ACCESS(SLRCONC,2)
// SLRCONC<SLRC3>
extern volatile __bit                   SLRC3               __at(0xFA8B);	// @ (0x1F51 * 8 + 3)
#define                                 SLRC3_bit           _BIT_ACCESS(SLRCONC,3)
// SLRCONC<SLRC4>
extern volatile __bit                   SLRC4               __at(0xFA8C);	// @ (0x1F51 * 8 + 4)
#define                                 SLRC4_bit           _BIT_ACCESS(SLRCONC,4)
// SLRCONC<SLRC5>
extern volatile __bit                   SLRC5               __at(0xFA8D);	// @ (0x1F51 * 8 + 5)
#define                                 SLRC5_bit           _BIT_ACCESS(SLRCONC,5)
// SLRCONC<SLRC6>
extern volatile __bit                   SLRC6               __at(0xFA8E);	// @ (0x1F51 * 8 + 6)
#define                                 SLRC6_bit           _BIT_ACCESS(SLRCONC,6)
// SLRCONC<SLRC7>
extern volatile __bit                   SLRC7               __at(0xFA8F);	// @ (0x1F51 * 8 + 7)
#define                                 SLRC7_bit           _BIT_ACCESS(SLRCONC,7)
// SSP1STAT<SMP>
extern volatile __bit                   SMP                 __at(0xC7F);	// @ (0x18F * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSP1STAT,7)
// SSP1STAT<SMP1>
extern volatile __bit                   SMP1                __at(0xC7F);	// @ (0x18F * 8 + 7)
#define                                 SMP1_bit            _BIT_ACCESS(SSP1STAT,7)
// RC1STA<SPEN>
extern volatile __bit                   SPEN                __at(0x8EF);	// @ (0x11D * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RC1STA,7)
// RC1STA<SREN>
extern volatile __bit                   SREN                __at(0x8ED);	// @ (0x11D * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RC1STA,5)
// SSP1CLKPPS<SSP1CLKPPS0>
extern volatile __bit                   SSP1CLKPPS0         __at(0xF628);	// @ (0x1EC5 * 8 + 0)
#define                                 SSP1CLKPPS0_bit     _BIT_ACCESS(SSP1CLKPPS,0)
// SSP1CLKPPS<SSP1CLKPPS1>
extern volatile __bit                   SSP1CLKPPS1         __at(0xF629);	// @ (0x1EC5 * 8 + 1)
#define                                 SSP1CLKPPS1_bit     _BIT_ACCESS(SSP1CLKPPS,1)
// SSP1CLKPPS<SSP1CLKPPS2>
extern volatile __bit                   SSP1CLKPPS2         __at(0xF62A);	// @ (0x1EC5 * 8 + 2)
#define                                 SSP1CLKPPS2_bit     _BIT_ACCESS(SSP1CLKPPS,2)
// SSP1CLKPPS<SSP1CLKPPS3>
extern volatile __bit                   SSP1CLKPPS3         __at(0xF62B);	// @ (0x1EC5 * 8 + 3)
#define                                 SSP1CLKPPS3_bit     _BIT_ACCESS(SSP1CLKPPS,3)
// SSP1CLKPPS<SSP1CLKPPS4>
extern volatile __bit                   SSP1CLKPPS4         __at(0xF62C);	// @ (0x1EC5 * 8 + 4)
#define                                 SSP1CLKPPS4_bit     _BIT_ACCESS(SSP1CLKPPS,4)
// SSP1DATPPS<SSP1DATPPS0>
extern volatile __bit                   SSP1DATPPS0         __at(0xF630);	// @ (0x1EC6 * 8 + 0)
#define                                 SSP1DATPPS0_bit     _BIT_ACCESS(SSP1DATPPS,0)
// SSP1DATPPS<SSP1DATPPS1>
extern volatile __bit                   SSP1DATPPS1         __at(0xF631);	// @ (0x1EC6 * 8 + 1)
#define                                 SSP1DATPPS1_bit     _BIT_ACCESS(SSP1DATPPS,1)
// SSP1DATPPS<SSP1DATPPS2>
extern volatile __bit                   SSP1DATPPS2         __at(0xF632);	// @ (0x1EC6 * 8 + 2)
#define                                 SSP1DATPPS2_bit     _BIT_ACCESS(SSP1DATPPS,2)
// SSP1DATPPS<SSP1DATPPS3>
extern volatile __bit                   SSP1DATPPS3         __at(0xF633);	// @ (0x1EC6 * 8 + 3)
#define                                 SSP1DATPPS3_bit     _BIT_ACCESS(SSP1DATPPS,3)
// SSP1DATPPS<SSP1DATPPS4>
extern volatile __bit                   SSP1DATPPS4         __at(0xF634);	// @ (0x1EC6 * 8 + 4)
#define                                 SSP1DATPPS4_bit     _BIT_ACCESS(SSP1DATPPS,4)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x38B9);	// @ (0x717 * 8 + 1)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x3869);	// @ (0x70D * 8 + 1)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,1)
// SSP1SSPPS<SSP1SSPPS0>
extern volatile __bit                   SSP1SSPPS0          __at(0xF638);	// @ (0x1EC7 * 8 + 0)
#define                                 SSP1SSPPS0_bit      _BIT_ACCESS(SSP1SSPPS,0)
// SSP1SSPPS<SSP1SSPPS1>
extern volatile __bit                   SSP1SSPPS1          __at(0xF639);	// @ (0x1EC7 * 8 + 1)
#define                                 SSP1SSPPS1_bit      _BIT_ACCESS(SSP1SSPPS,1)
// SSP1SSPPS<SSP1SSPPS2>
extern volatile __bit                   SSP1SSPPS2          __at(0xF63A);	// @ (0x1EC7 * 8 + 2)
#define                                 SSP1SSPPS2_bit      _BIT_ACCESS(SSP1SSPPS,2)
// SSP1SSPPS<SSP1SSPPS3>
extern volatile __bit                   SSP1SSPPS3          __at(0xF63B);	// @ (0x1EC7 * 8 + 3)
#define                                 SSP1SSPPS3_bit      _BIT_ACCESS(SSP1SSPPS,3)
// SSP1SSPPS<SSP1SSPPS4>
extern volatile __bit                   SSP1SSPPS4          __at(0xF63C);	// @ (0x1EC7 * 8 + 4)
#define                                 SSP1SSPPS4_bit      _BIT_ACCESS(SSP1SSPPS,4)
// SSP1CON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0xC85);	// @ (0x190 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSP1CON1,5)
// SSP1CON1<SSPEN1>
extern volatile __bit                   SSPEN1              __at(0xC85);	// @ (0x190 * 8 + 5)
#define                                 SSPEN1_bit          _BIT_ACCESS(SSP1CON1,5)
// SSP1CON1<SSPM0>
extern volatile __bit                   SSPM0               __at(0xC80);	// @ (0x190 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSP1CON1,0)
// SSP1CON1<SSPM01>
extern volatile __bit                   SSPM01              __at(0xC80);	// @ (0x190 * 8 + 0)
#define                                 SSPM01_bit          _BIT_ACCESS(SSP1CON1,0)
// SSP1CON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0xC81);	// @ (0x190 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSP1CON1,1)
// SSP1CON1<SSPM11>
extern volatile __bit                   SSPM11              __at(0xC81);	// @ (0x190 * 8 + 1)
#define                                 SSPM11_bit          _BIT_ACCESS(SSP1CON1,1)
// SSP1CON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0xC82);	// @ (0x190 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSP1CON1,2)
// SSP1CON1<SSPM21>
extern volatile __bit                   SSPM21              __at(0xC82);	// @ (0x190 * 8 + 2)
#define                                 SSPM21_bit          _BIT_ACCESS(SSP1CON1,2)
// SSP1CON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0xC83);	// @ (0x190 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSP1CON1,3)
// SSP1CON1<SSPM31>
extern volatile __bit                   SSPM31              __at(0xC83);	// @ (0x190 * 8 + 3)
#define                                 SSPM31_bit          _BIT_ACCESS(SSP1CON1,3)
// SSP1CON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0xC86);	// @ (0x190 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSP1CON1,6)
// SSP1CON1<SSPOV1>
extern volatile __bit                   SSPOV1              __at(0xC86);	// @ (0x190 * 8 + 6)
#define                                 SSPOV1_bit          _BIT_ACCESS(SSP1CON1,6)
// SSP1STAT<START>
extern volatile __bit                   START               __at(0xC7B);	// @ (0x18F * 8 + 3)
#define                                 START_bit           _BIT_ACCESS(SSP1STAT,3)
// SSP1STAT<START1>
extern volatile __bit                   START1              __at(0xC7B);	// @ (0x18F * 8 + 3)
#define                                 START1_bit          _BIT_ACCESS(SSP1STAT,3)
// PCON0<STKOVF>
extern volatile __bit                   STKOVF              __at(0x409F);	// @ (0x813 * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(PCON0,7)
// STKPTR<STKPTR0>
extern volatile __bit                   STKPTR0             __at(0xFF68);	// @ (0x1FED * 8 + 0)
#define                                 STKPTR0_bit         _BIT_ACCESS(STKPTR,0)
// STKPTR<STKPTR1>
extern volatile __bit                   STKPTR1             __at(0xFF69);	// @ (0x1FED * 8 + 1)
#define                                 STKPTR1_bit         _BIT_ACCESS(STKPTR,1)
// STKPTR<STKPTR2>
extern volatile __bit                   STKPTR2             __at(0xFF6A);	// @ (0x1FED * 8 + 2)
#define                                 STKPTR2_bit         _BIT_ACCESS(STKPTR,2)
// STKPTR<STKPTR3>
extern volatile __bit                   STKPTR3             __at(0xFF6B);	// @ (0x1FED * 8 + 3)
#define                                 STKPTR3_bit         _BIT_ACCESS(STKPTR,3)
// STKPTR<STKPTR4>
extern volatile __bit                   STKPTR4             __at(0xFF6C);	// @ (0x1FED * 8 + 4)
#define                                 STKPTR4_bit         _BIT_ACCESS(STKPTR,4)
// PCON0<STKUNF>
extern volatile __bit                   STKUNF              __at(0x409E);	// @ (0x813 * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(PCON0,6)
// SSP1STAT<STOP>
extern volatile __bit                   STOP                __at(0xC7C);	// @ (0x18F * 8 + 4)
#define                                 STOP_bit            _BIT_ACCESS(SSP1STAT,4)
// SSP1STAT<STOP1>
extern volatile __bit                   STOP1               __at(0xC7C);	// @ (0x18F * 8 + 4)
#define                                 STOP1_bit           _BIT_ACCESS(SSP1STAT,4)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x4060);	// @ (0x80C * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TX1STA<SYNC>
extern volatile __bit                   SYNC                __at(0x8F4);	// @ (0x11E * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TX1STA,4)
// T0CON0<T016BIT>
extern volatile __bit                   T016BIT             __at(0x2CF4);	// @ (0x59E * 8 + 4)
#define                                 T016BIT_bit         _BIT_ACCESS(T0CON0,4)
// T0CON1<T0ASYNC>
extern volatile __bit                   T0ASYNC             __at(0x2CFC);	// @ (0x59F * 8 + 4)
#define                                 T0ASYNC_bit         _BIT_ACCESS(T0CON1,4)
// T0CKIPPS<T0CKIPPS0>
extern volatile __bit                   T0CKIPPS0           __at(0xF488);	// @ (0x1E91 * 8 + 0)
#define                                 T0CKIPPS0_bit       _BIT_ACCESS(T0CKIPPS,0)
// T0CKIPPS<T0CKIPPS1>
extern volatile __bit                   T0CKIPPS1           __at(0xF489);	// @ (0x1E91 * 8 + 1)
#define                                 T0CKIPPS1_bit       _BIT_ACCESS(T0CKIPPS,1)
// T0CKIPPS<T0CKIPPS2>
extern volatile __bit                   T0CKIPPS2           __at(0xF48A);	// @ (0x1E91 * 8 + 2)
#define                                 T0CKIPPS2_bit       _BIT_ACCESS(T0CKIPPS,2)
// T0CKIPPS<T0CKIPPS3>
extern volatile __bit                   T0CKIPPS3           __at(0xF48B);	// @ (0x1E91 * 8 + 3)
#define                                 T0CKIPPS3_bit       _BIT_ACCESS(T0CKIPPS,3)
// T0CON1<T0CKPS0>
extern volatile __bit                   T0CKPS0             __at(0x2CF8);	// @ (0x59F * 8 + 0)
#define                                 T0CKPS0_bit         _BIT_ACCESS(T0CON1,0)
// T0CON1<T0CKPS1>
extern volatile __bit                   T0CKPS1             __at(0x2CF9);	// @ (0x59F * 8 + 1)
#define                                 T0CKPS1_bit         _BIT_ACCESS(T0CON1,1)
// T0CON1<T0CKPS2>
extern volatile __bit                   T0CKPS2             __at(0x2CFA);	// @ (0x59F * 8 + 2)
#define                                 T0CKPS2_bit         _BIT_ACCESS(T0CON1,2)
// T0CON1<T0CKPS3>
extern volatile __bit                   T0CKPS3             __at(0x2CFB);	// @ (0x59F * 8 + 3)
#define                                 T0CKPS3_bit         _BIT_ACCESS(T0CON1,3)
// T0CON1<T0CS0>
extern volatile __bit                   T0CS0               __at(0x2CFD);	// @ (0x59F * 8 + 5)
#define                                 T0CS0_bit           _BIT_ACCESS(T0CON1,5)
// T0CON1<T0CS1>
extern volatile __bit                   T0CS1               __at(0x2CFE);	// @ (0x59F * 8 + 6)
#define                                 T0CS1_bit           _BIT_ACCESS(T0CON1,6)
// T0CON1<T0CS2>
extern volatile __bit                   T0CS2               __at(0x2CFF);	// @ (0x59F * 8 + 7)
#define                                 T0CS2_bit           _BIT_ACCESS(T0CON1,7)
// T0CON0<T0EN>
extern volatile __bit                   T0EN                __at(0x2CF7);	// @ (0x59E * 8 + 7)
#define                                 T0EN_bit            _BIT_ACCESS(T0CON0,7)
// T0CON0<T0MD16>
extern volatile __bit                   T0MD16              __at(0x2CF4);	// @ (0x59E * 8 + 4)
#define                                 T0MD16_bit          _BIT_ACCESS(T0CON0,4)
// T0CON0<T0OUT>
extern volatile __bit                   T0OUT               __at(0x2CF5);	// @ (0x59E * 8 + 5)
#define                                 T0OUT_bit           _BIT_ACCESS(T0CON0,5)
// TMR0H<T0PR0>
extern volatile __bit                   T0PR0               __at(0x2CE8);	// @ (0x59D * 8 + 0)
#define                                 T0PR0_bit           _BIT_ACCESS(TMR0H,0)
// TMR0H<T0PR1>
extern volatile __bit                   T0PR1               __at(0x2CE9);	// @ (0x59D * 8 + 1)
#define                                 T0PR1_bit           _BIT_ACCESS(TMR0H,1)
// TMR0H<T0PR2>
extern volatile __bit                   T0PR2               __at(0x2CEA);	// @ (0x59D * 8 + 2)
#define                                 T0PR2_bit           _BIT_ACCESS(TMR0H,2)
// TMR0H<T0PR3>
extern volatile __bit                   T0PR3               __at(0x2CEB);	// @ (0x59D * 8 + 3)
#define                                 T0PR3_bit           _BIT_ACCESS(TMR0H,3)
// TMR0H<T0PR4>
extern volatile __bit                   T0PR4               __at(0x2CEC);	// @ (0x59D * 8 + 4)
#define                                 T0PR4_bit           _BIT_ACCESS(TMR0H,4)
// TMR0H<T0PR5>
extern volatile __bit                   T0PR5               __at(0x2CED);	// @ (0x59D * 8 + 5)
#define                                 T0PR5_bit           _BIT_ACCESS(TMR0H,5)
// TMR0H<T0PR6>
extern volatile __bit                   T0PR6               __at(0x2CEE);	// @ (0x59D * 8 + 6)
#define                                 T0PR6_bit           _BIT_ACCESS(TMR0H,6)
// TMR0H<T0PR7>
extern volatile __bit                   T0PR7               __at(0x2CEF);	// @ (0x59D * 8 + 7)
#define                                 T0PR7_bit           _BIT_ACCESS(TMR0H,7)
// T1CKIPPS<T1CKIPPS0>
extern volatile __bit                   T1CKIPPS0           __at(0xF490);	// @ (0x1E92 * 8 + 0)
#define                                 T1CKIPPS0_bit       _BIT_ACCESS(T1CKIPPS,0)
// T1CKIPPS<T1CKIPPS1>
extern volatile __bit                   T1CKIPPS1           __at(0xF491);	// @ (0x1E92 * 8 + 1)
#define                                 T1CKIPPS1_bit       _BIT_ACCESS(T1CKIPPS,1)
// T1CKIPPS<T1CKIPPS2>
extern volatile __bit                   T1CKIPPS2           __at(0xF492);	// @ (0x1E92 * 8 + 2)
#define                                 T1CKIPPS2_bit       _BIT_ACCESS(T1CKIPPS,2)
// T1CKIPPS<T1CKIPPS3>
extern volatile __bit                   T1CKIPPS3           __at(0xF493);	// @ (0x1E92 * 8 + 3)
#define                                 T1CKIPPS3_bit       _BIT_ACCESS(T1CKIPPS,3)
// T1CKIPPS<T1CKIPPS4>
extern volatile __bit                   T1CKIPPS4           __at(0xF494);	// @ (0x1E92 * 8 + 4)
#define                                 T1CKIPPS4_bit       _BIT_ACCESS(T1CKIPPS,4)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0x1074);	// @ (0x20E * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0x1075);	// @ (0x20E * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1CLK<T1CS0>
extern volatile __bit                   T1CS0               __at(0x1088);	// @ (0x211 * 8 + 0)
#define                                 T1CS0_bit           _BIT_ACCESS(T1CLK,0)
// T1CLK<T1CS1>
extern volatile __bit                   T1CS1               __at(0x1089);	// @ (0x211 * 8 + 1)
#define                                 T1CS1_bit           _BIT_ACCESS(T1CLK,1)
// T1CLK<T1CS2>
extern volatile __bit                   T1CS2               __at(0x108A);	// @ (0x211 * 8 + 2)
#define                                 T1CS2_bit           _BIT_ACCESS(T1CLK,2)
// T1CLK<T1CS3>
extern volatile __bit                   T1CS3               __at(0x108B);	// @ (0x211 * 8 + 3)
#define                                 T1CS3_bit           _BIT_ACCESS(T1CLK,3)
// T1GCON<T1GE>
extern volatile __bit                   T1GE                __at(0x107F);	// @ (0x20F * 8 + 7)
#define                                 T1GE_bit            _BIT_ACCESS(T1GCON,7)
// T1GCON<T1GGO>
extern volatile __bit                   T1GGO               __at(0x107B);	// @ (0x20F * 8 + 3)
#define                                 T1GGO_bit           _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0x107E);	// @ (0x20F * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// T1GPPS<T1GPPS0>
extern volatile __bit                   T1GPPS0             __at(0xF498);	// @ (0x1E93 * 8 + 0)
#define                                 T1GPPS0_bit         _BIT_ACCESS(T1GPPS,0)
// T1GPPS<T1GPPS1>
extern volatile __bit                   T1GPPS1             __at(0xF499);	// @ (0x1E93 * 8 + 1)
#define                                 T1GPPS1_bit         _BIT_ACCESS(T1GPPS,1)
// T1GPPS<T1GPPS2>
extern volatile __bit                   T1GPPS2             __at(0xF49A);	// @ (0x1E93 * 8 + 2)
#define                                 T1GPPS2_bit         _BIT_ACCESS(T1GPPS,2)
// T1GPPS<T1GPPS3>
extern volatile __bit                   T1GPPS3             __at(0xF49B);	// @ (0x1E93 * 8 + 3)
#define                                 T1GPPS3_bit         _BIT_ACCESS(T1GPPS,3)
// T1GPPS<T1GPPS4>
extern volatile __bit                   T1GPPS4             __at(0xF49C);	// @ (0x1E93 * 8 + 4)
#define                                 T1GPPS4_bit         _BIT_ACCESS(T1GPPS,4)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0x107C);	// @ (0x20F * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GATE<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0x1080);	// @ (0x210 * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GATE,0)
// T1GATE<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0x1081);	// @ (0x210 * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GATE,1)
// T1GATE<T1GSS2>
extern volatile __bit                   T1GSS2              __at(0x1082);	// @ (0x210 * 8 + 2)
#define                                 T1GSS2_bit          _BIT_ACCESS(T1GATE,2)
// T1GATE<T1GSS3>
extern volatile __bit                   T1GSS3              __at(0x1083);	// @ (0x210 * 8 + 3)
#define                                 T1GSS3_bit          _BIT_ACCESS(T1GATE,3)
// T1GATE<T1GSS4>
extern volatile __bit                   T1GSS4              __at(0x1084);	// @ (0x210 * 8 + 4)
#define                                 T1GSS4_bit          _BIT_ACCESS(T1GATE,4)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0x107D);	// @ (0x20F * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0x107A);	// @ (0x20F * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
// T1CON<T1RD16>
extern volatile __bit                   T1RD16              __at(0x1071);	// @ (0x20E * 8 + 1)
#define                                 T1RD16_bit          _BIT_ACCESS(T1CON,1)
// T2HLT<T2CKPOL>
extern volatile __bit                   T2CKPOL             __at(0x147E);	// @ (0x28F * 8 + 6)
#define                                 T2CKPOL_bit         _BIT_ACCESS(T2HLT,6)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0x1474);	// @ (0x28E * 8 + 4)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,4)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0x1475);	// @ (0x28E * 8 + 5)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,5)
// T2CON<T2CKPS2>
extern volatile __bit                   T2CKPS2             __at(0x1476);	// @ (0x28E * 8 + 6)
#define                                 T2CKPS2_bit         _BIT_ACCESS(T2CON,6)
// T2HLT<T2CKSYNC>
extern volatile __bit                   T2CKSYNC            __at(0x147D);	// @ (0x28F * 8 + 5)
#define                                 T2CKSYNC_bit        _BIT_ACCESS(T2HLT,5)
// T2CLKCON<T2CS0>
extern volatile __bit                   T2CS0               __at(0x1480);	// @ (0x290 * 8 + 0)
#define                                 T2CS0_bit           _BIT_ACCESS(T2CLKCON,0)
// T2CLKCON<T2CS1>
extern volatile __bit                   T2CS1               __at(0x1481);	// @ (0x290 * 8 + 1)
#define                                 T2CS1_bit           _BIT_ACCESS(T2CLKCON,1)
// T2CLKCON<T2CS2>
extern volatile __bit                   T2CS2               __at(0x1482);	// @ (0x290 * 8 + 2)
#define                                 T2CS2_bit           _BIT_ACCESS(T2CLKCON,2)
// T2INPPS<T2INPPS0>
extern volatile __bit                   T2INPPS0            __at(0xF4E0);	// @ (0x1E9C * 8 + 0)
#define                                 T2INPPS0_bit        _BIT_ACCESS(T2INPPS,0)
// T2INPPS<T2INPPS1>
extern volatile __bit                   T2INPPS1            __at(0xF4E1);	// @ (0x1E9C * 8 + 1)
#define                                 T2INPPS1_bit        _BIT_ACCESS(T2INPPS,1)
// T2INPPS<T2INPPS2>
extern volatile __bit                   T2INPPS2            __at(0xF4E2);	// @ (0x1E9C * 8 + 2)
#define                                 T2INPPS2_bit        _BIT_ACCESS(T2INPPS,2)
// T2INPPS<T2INPPS3>
extern volatile __bit                   T2INPPS3            __at(0xF4E3);	// @ (0x1E9C * 8 + 3)
#define                                 T2INPPS3_bit        _BIT_ACCESS(T2INPPS,3)
// T2INPPS<T2INPPS4>
extern volatile __bit                   T2INPPS4            __at(0xF4E4);	// @ (0x1E9C * 8 + 4)
#define                                 T2INPPS4_bit        _BIT_ACCESS(T2INPPS,4)
// T2HLT<T2MODE0>
extern volatile __bit                   T2MODE0             __at(0x1478);	// @ (0x28F * 8 + 0)
#define                                 T2MODE0_bit         _BIT_ACCESS(T2HLT,0)
// T2HLT<T2MODE1>
extern volatile __bit                   T2MODE1             __at(0x1479);	// @ (0x28F * 8 + 1)
#define                                 T2MODE1_bit         _BIT_ACCESS(T2HLT,1)
// T2HLT<T2MODE2>
extern volatile __bit                   T2MODE2             __at(0x147A);	// @ (0x28F * 8 + 2)
#define                                 T2MODE2_bit         _BIT_ACCESS(T2HLT,2)
// T2HLT<T2MODE3>
extern volatile __bit                   T2MODE3             __at(0x147B);	// @ (0x28F * 8 + 3)
#define                                 T2MODE3_bit         _BIT_ACCESS(T2HLT,3)
// T2HLT<T2MODE4>
extern volatile __bit                   T2MODE4             __at(0x147C);	// @ (0x28F * 8 + 4)
#define                                 T2MODE4_bit         _BIT_ACCESS(T2HLT,4)
// T2CON<T2ON>
extern volatile __bit                   T2ON                __at(0x1477);	// @ (0x28E * 8 + 7)
#define                                 T2ON_bit            _BIT_ACCESS(T2CON,7)
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0x1470);	// @ (0x28E * 8 + 0)
#define                                 T2OUTPS0_bit        _BIT_ACCESS(T2CON,0)
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0x1471);	// @ (0x28E * 8 + 1)
#define                                 T2OUTPS1_bit        _BIT_ACCESS(T2CON,1)
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0x1472);	// @ (0x28E * 8 + 2)
#define                                 T2OUTPS2_bit        _BIT_ACCESS(T2CON,2)
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0x1473);	// @ (0x28E * 8 + 3)
#define                                 T2OUTPS3_bit        _BIT_ACCESS(T2CON,3)
// T2HLT<T2PSYNC>
extern volatile __bit                   T2PSYNC             __at(0x147F);	// @ (0x28F * 8 + 7)
#define                                 T2PSYNC_bit         _BIT_ACCESS(T2HLT,7)
// T2RST<T2RSEL0>
extern volatile __bit                   T2RSEL0             __at(0x1488);	// @ (0x291 * 8 + 0)
#define                                 T2RSEL0_bit         _BIT_ACCESS(T2RST,0)
// T2RST<T2RSEL1>
extern volatile __bit                   T2RSEL1             __at(0x1489);	// @ (0x291 * 8 + 1)
#define                                 T2RSEL1_bit         _BIT_ACCESS(T2RST,1)
// T2RST<T2RSEL2>
extern volatile __bit                   T2RSEL2             __at(0x148A);	// @ (0x291 * 8 + 2)
#define                                 T2RSEL2_bit         _BIT_ACCESS(T2RST,2)
// T2RST<T2RSEL3>
extern volatile __bit                   T2RSEL3             __at(0x148B);	// @ (0x291 * 8 + 3)
#define                                 T2RSEL3_bit         _BIT_ACCESS(T2RST,3)
// TMR0H<TMR0H0>
extern volatile __bit                   TMR0H0              __at(0x2CE8);	// @ (0x59D * 8 + 0)
#define                                 TMR0H0_bit          _BIT_ACCESS(TMR0H,0)
// TMR0H<TMR0H1>
extern volatile __bit                   TMR0H1              __at(0x2CE9);	// @ (0x59D * 8 + 1)
#define                                 TMR0H1_bit          _BIT_ACCESS(TMR0H,1)
// TMR0H<TMR0H2>
extern volatile __bit                   TMR0H2              __at(0x2CEA);	// @ (0x59D * 8 + 2)
#define                                 TMR0H2_bit          _BIT_ACCESS(TMR0H,2)
// TMR0H<TMR0H3>
extern volatile __bit                   TMR0H3              __at(0x2CEB);	// @ (0x59D * 8 + 3)
#define                                 TMR0H3_bit          _BIT_ACCESS(TMR0H,3)
// TMR0H<TMR0H4>
extern volatile __bit                   TMR0H4              __at(0x2CEC);	// @ (0x59D * 8 + 4)
#define                                 TMR0H4_bit          _BIT_ACCESS(TMR0H,4)
// TMR0H<TMR0H5>
extern volatile __bit                   TMR0H5              __at(0x2CED);	// @ (0x59D * 8 + 5)
#define                                 TMR0H5_bit          _BIT_ACCESS(TMR0H,5)
// TMR0H<TMR0H6>
extern volatile __bit                   TMR0H6              __at(0x2CEE);	// @ (0x59D * 8 + 6)
#define                                 TMR0H6_bit          _BIT_ACCESS(TMR0H,6)
// TMR0H<TMR0H7>
extern volatile __bit                   TMR0H7              __at(0x2CEF);	// @ (0x59D * 8 + 7)
#define                                 TMR0H7_bit          _BIT_ACCESS(TMR0H,7)
// PIE0<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x38B5);	// @ (0x716 * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(PIE0,5)
// PIR0<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x3865);	// @ (0x70C * 8 + 5)
#define                                 TMR0IF_bit          _BIT_ACCESS(PIR0,5)
// TMR0L<TMR0L0>
extern volatile __bit                   TMR0L0              __at(0x2CE0);	// @ (0x59C * 8 + 0)
#define                                 TMR0L0_bit          _BIT_ACCESS(TMR0L,0)
// TMR0L<TMR0L1>
extern volatile __bit                   TMR0L1              __at(0x2CE1);	// @ (0x59C * 8 + 1)
#define                                 TMR0L1_bit          _BIT_ACCESS(TMR0L,1)
// TMR0L<TMR0L2>
extern volatile __bit                   TMR0L2              __at(0x2CE2);	// @ (0x59C * 8 + 2)
#define                                 TMR0L2_bit          _BIT_ACCESS(TMR0L,2)
// TMR0L<TMR0L3>
extern volatile __bit                   TMR0L3              __at(0x2CE3);	// @ (0x59C * 8 + 3)
#define                                 TMR0L3_bit          _BIT_ACCESS(TMR0L,3)
// TMR0L<TMR0L4>
extern volatile __bit                   TMR0L4              __at(0x2CE4);	// @ (0x59C * 8 + 4)
#define                                 TMR0L4_bit          _BIT_ACCESS(TMR0L,4)
// TMR0L<TMR0L5>
extern volatile __bit                   TMR0L5              __at(0x2CE5);	// @ (0x59C * 8 + 5)
#define                                 TMR0L5_bit          _BIT_ACCESS(TMR0L,5)
// TMR0L<TMR0L6>
extern volatile __bit                   TMR0L6              __at(0x2CE6);	// @ (0x59C * 8 + 6)
#define                                 TMR0L6_bit          _BIT_ACCESS(TMR0L,6)
// TMR0L<TMR0L7>
extern volatile __bit                   TMR0L7              __at(0x2CE7);	// @ (0x59C * 8 + 7)
#define                                 TMR0L7_bit          _BIT_ACCESS(TMR0L,7)
// PIE2<TMR1GIE>
extern volatile __bit                   TMR1GIE             __at(0x38C5);	// @ (0x718 * 8 + 5)
#define                                 TMR1GIE_bit         _BIT_ACCESS(PIE2,5)
// PIR2<TMR1GIF>
extern volatile __bit                   TMR1GIF             __at(0x3875);	// @ (0x70E * 8 + 5)
#define                                 TMR1GIF_bit         _BIT_ACCESS(PIR2,5)
// TMR1H<TMR1H0>
extern volatile __bit                   TMR1H0              __at(0x1068);	// @ (0x20D * 8 + 0)
#define                                 TMR1H0_bit          _BIT_ACCESS(TMR1H,0)
// TMR1H<TMR1H1>
extern volatile __bit                   TMR1H1              __at(0x1069);	// @ (0x20D * 8 + 1)
#define                                 TMR1H1_bit          _BIT_ACCESS(TMR1H,1)
// TMR1H<TMR1H2>
extern volatile __bit                   TMR1H2              __at(0x106A);	// @ (0x20D * 8 + 2)
#define                                 TMR1H2_bit          _BIT_ACCESS(TMR1H,2)
// TMR1H<TMR1H3>
extern volatile __bit                   TMR1H3              __at(0x106B);	// @ (0x20D * 8 + 3)
#define                                 TMR1H3_bit          _BIT_ACCESS(TMR1H,3)
// TMR1H<TMR1H4>
extern volatile __bit                   TMR1H4              __at(0x106C);	// @ (0x20D * 8 + 4)
#define                                 TMR1H4_bit          _BIT_ACCESS(TMR1H,4)
// TMR1H<TMR1H5>
extern volatile __bit                   TMR1H5              __at(0x106D);	// @ (0x20D * 8 + 5)
#define                                 TMR1H5_bit          _BIT_ACCESS(TMR1H,5)
// TMR1H<TMR1H6>
extern volatile __bit                   TMR1H6              __at(0x106E);	// @ (0x20D * 8 + 6)
#define                                 TMR1H6_bit          _BIT_ACCESS(TMR1H,6)
// TMR1H<TMR1H7>
extern volatile __bit                   TMR1H7              __at(0x106F);	// @ (0x20D * 8 + 7)
#define                                 TMR1H7_bit          _BIT_ACCESS(TMR1H,7)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x38BD);	// @ (0x717 * 8 + 5)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,5)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x386D);	// @ (0x70D * 8 + 5)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,5)
// TMR1L<TMR1L0>
extern volatile __bit                   TMR1L0              __at(0x1060);	// @ (0x20C * 8 + 0)
#define                                 TMR1L0_bit          _BIT_ACCESS(TMR1L,0)
// TMR1L<TMR1L1>
extern volatile __bit                   TMR1L1              __at(0x1061);	// @ (0x20C * 8 + 1)
#define                                 TMR1L1_bit          _BIT_ACCESS(TMR1L,1)
// TMR1L<TMR1L2>
extern volatile __bit                   TMR1L2              __at(0x1062);	// @ (0x20C * 8 + 2)
#define                                 TMR1L2_bit          _BIT_ACCESS(TMR1L,2)
// TMR1L<TMR1L3>
extern volatile __bit                   TMR1L3              __at(0x1063);	// @ (0x20C * 8 + 3)
#define                                 TMR1L3_bit          _BIT_ACCESS(TMR1L,3)
// TMR1L<TMR1L4>
extern volatile __bit                   TMR1L4              __at(0x1064);	// @ (0x20C * 8 + 4)
#define                                 TMR1L4_bit          _BIT_ACCESS(TMR1L,4)
// TMR1L<TMR1L5>
extern volatile __bit                   TMR1L5              __at(0x1065);	// @ (0x20C * 8 + 5)
#define                                 TMR1L5_bit          _BIT_ACCESS(TMR1L,5)
// TMR1L<TMR1L6>
extern volatile __bit                   TMR1L6              __at(0x1066);	// @ (0x20C * 8 + 6)
#define                                 TMR1L6_bit          _BIT_ACCESS(TMR1L,6)
// TMR1L<TMR1L7>
extern volatile __bit                   TMR1L7              __at(0x1067);	// @ (0x20C * 8 + 7)
#define                                 TMR1L7_bit          _BIT_ACCESS(TMR1L,7)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0x1070);	// @ (0x20E * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x38BE);	// @ (0x717 * 8 + 6)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,6)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x386E);	// @ (0x70D * 8 + 6)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,6)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0x1477);	// @ (0x28E * 8 + 7)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,7)
// TOSH<TOSH0>
extern volatile __bit                   TOSH0               __at(0xFF78);	// @ (0x1FEF * 8 + 0)
#define                                 TOSH0_bit           _BIT_ACCESS(TOSH,0)
// TOSH<TOSH1>
extern volatile __bit                   TOSH1               __at(0xFF79);	// @ (0x1FEF * 8 + 1)
#define                                 TOSH1_bit           _BIT_ACCESS(TOSH,1)
// TOSH<TOSH2>
extern volatile __bit                   TOSH2               __at(0xFF7A);	// @ (0x1FEF * 8 + 2)
#define                                 TOSH2_bit           _BIT_ACCESS(TOSH,2)
// TOSH<TOSH3>
extern volatile __bit                   TOSH3               __at(0xFF7B);	// @ (0x1FEF * 8 + 3)
#define                                 TOSH3_bit           _BIT_ACCESS(TOSH,3)
// TOSH<TOSH4>
extern volatile __bit                   TOSH4               __at(0xFF7C);	// @ (0x1FEF * 8 + 4)
#define                                 TOSH4_bit           _BIT_ACCESS(TOSH,4)
// TOSH<TOSH5>
extern volatile __bit                   TOSH5               __at(0xFF7D);	// @ (0x1FEF * 8 + 5)
#define                                 TOSH5_bit           _BIT_ACCESS(TOSH,5)
// TOSH<TOSH6>
extern volatile __bit                   TOSH6               __at(0xFF7E);	// @ (0x1FEF * 8 + 6)
#define                                 TOSH6_bit           _BIT_ACCESS(TOSH,6)
// TOSH<TOSH7>
extern volatile __bit                   TOSH7               __at(0xFF7F);	// @ (0x1FEF * 8 + 7)
#define                                 TOSH7_bit           _BIT_ACCESS(TOSH,7)
// TOSL<TOSL0>
extern volatile __bit                   TOSL0               __at(0xFF70);	// @ (0x1FEE * 8 + 0)
#define                                 TOSL0_bit           _BIT_ACCESS(TOSL,0)
// TOSL<TOSL1>
extern volatile __bit                   TOSL1               __at(0xFF71);	// @ (0x1FEE * 8 + 1)
#define                                 TOSL1_bit           _BIT_ACCESS(TOSL,1)
// TOSL<TOSL2>
extern volatile __bit                   TOSL2               __at(0xFF72);	// @ (0x1FEE * 8 + 2)
#define                                 TOSL2_bit           _BIT_ACCESS(TOSL,2)
// TOSL<TOSL3>
extern volatile __bit                   TOSL3               __at(0xFF73);	// @ (0x1FEE * 8 + 3)
#define                                 TOSL3_bit           _BIT_ACCESS(TOSL,3)
// TOSL<TOSL4>
extern volatile __bit                   TOSL4               __at(0xFF74);	// @ (0x1FEE * 8 + 4)
#define                                 TOSL4_bit           _BIT_ACCESS(TOSL,4)
// TOSL<TOSL5>
extern volatile __bit                   TOSL5               __at(0xFF75);	// @ (0x1FEE * 8 + 5)
#define                                 TOSL5_bit           _BIT_ACCESS(TOSL,5)
// TOSL<TOSL6>
extern volatile __bit                   TOSL6               __at(0xFF76);	// @ (0x1FEE * 8 + 6)
#define                                 TOSL6_bit           _BIT_ACCESS(TOSL,6)
// TOSL<TOSL7>
extern volatile __bit                   TOSL7               __at(0xFF77);	// @ (0x1FEE * 8 + 7)
#define                                 TOSL7_bit           _BIT_ACCESS(TOSL,7)
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISA,0)
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x91);	// @ (0x12 * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISA,1)
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x92);	// @ (0x12 * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISA,2)
// TRISA<TRISA3>
extern volatile __bit                   TRISA3              __at(0x93);	// @ (0x12 * 8 + 3)
#define                                 TRISA3_bit          _BIT_ACCESS(TRISA,3)
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
// TRISB<TRISB4>
extern volatile __bit                   TRISB4              __at(0x9C);	// @ (0x13 * 8 + 4)
#define                                 TRISB4_bit          _BIT_ACCESS(TRISB,4)
// TRISB<TRISB5>
extern volatile __bit                   TRISB5              __at(0x9D);	// @ (0x13 * 8 + 5)
#define                                 TRISB5_bit          _BIT_ACCESS(TRISB,5)
// TRISB<TRISB6>
extern volatile __bit                   TRISB6              __at(0x9E);	// @ (0x13 * 8 + 6)
#define                                 TRISB6_bit          _BIT_ACCESS(TRISB,6)
// TRISB<TRISB7>
extern volatile __bit                   TRISB7              __at(0x9F);	// @ (0x13 * 8 + 7)
#define                                 TRISB7_bit          _BIT_ACCESS(TRISB,7)
// TRISC<TRISC0>
extern volatile __bit                   TRISC0              __at(0xA0);	// @ (0x14 * 8 + 0)
#define                                 TRISC0_bit          _BIT_ACCESS(TRISC,0)
// TRISC<TRISC1>
extern volatile __bit                   TRISC1              __at(0xA1);	// @ (0x14 * 8 + 1)
#define                                 TRISC1_bit          _BIT_ACCESS(TRISC,1)
// TRISC<TRISC2>
extern volatile __bit                   TRISC2              __at(0xA2);	// @ (0x14 * 8 + 2)
#define                                 TRISC2_bit          _BIT_ACCESS(TRISC,2)
// TRISC<TRISC3>
extern volatile __bit                   TRISC3              __at(0xA3);	// @ (0x14 * 8 + 3)
#define                                 TRISC3_bit          _BIT_ACCESS(TRISC,3)
// TRISC<TRISC4>
extern volatile __bit                   TRISC4              __at(0xA4);	// @ (0x14 * 8 + 4)
#define                                 TRISC4_bit          _BIT_ACCESS(TRISC,4)
// TRISC<TRISC5>
extern volatile __bit                   TRISC5              __at(0xA5);	// @ (0x14 * 8 + 5)
#define                                 TRISC5_bit          _BIT_ACCESS(TRISC,5)
// TRISC<TRISC6>
extern volatile __bit                   TRISC6              __at(0xA6);	// @ (0x14 * 8 + 6)
#define                                 TRISC6_bit          _BIT_ACCESS(TRISC,6)
// TRISC<TRISC7>
extern volatile __bit                   TRISC7              __at(0xA7);	// @ (0x14 * 8 + 7)
#define                                 TRISC7_bit          _BIT_ACCESS(TRISC,7)
// TX1STA<TRMT>
extern volatile __bit                   TRMT                __at(0x8F1);	// @ (0x11E * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TX1STA,1)
// CK1PPS<TX1CKPPS0>
extern volatile __bit                   TX1CKPPS0           __at(0xF660);	// @ (0x1ECC * 8 + 0)
#define                                 TX1CKPPS0_bit       _BIT_ACCESS(CK1PPS,0)
// CK1PPS<TX1CKPPS1>
extern volatile __bit                   TX1CKPPS1           __at(0xF661);	// @ (0x1ECC * 8 + 1)
#define                                 TX1CKPPS1_bit       _BIT_ACCESS(CK1PPS,1)
// CK1PPS<TX1CKPPS2>
extern volatile __bit                   TX1CKPPS2           __at(0xF662);	// @ (0x1ECC * 8 + 2)
#define                                 TX1CKPPS2_bit       _BIT_ACCESS(CK1PPS,2)
// CK1PPS<TX1CKPPS3>
extern volatile __bit                   TX1CKPPS3           __at(0xF663);	// @ (0x1ECC * 8 + 3)
#define                                 TX1CKPPS3_bit       _BIT_ACCESS(CK1PPS,3)
// CK1PPS<TX1CKPPS4>
extern volatile __bit                   TX1CKPPS4           __at(0xF664);	// @ (0x1ECC * 8 + 4)
#define                                 TX1CKPPS4_bit       _BIT_ACCESS(CK1PPS,4)
// PIE1<TX1IE>
extern volatile __bit                   TX1IE               __at(0x38BB);	// @ (0x717 * 8 + 3)
#define                                 TX1IE_bit           _BIT_ACCESS(PIE1,3)
// PIR1<TX1IF>
extern volatile __bit                   TX1IF               __at(0x386B);	// @ (0x70D * 8 + 3)
#define                                 TX1IF_bit           _BIT_ACCESS(PIR1,3)
// TX1STA<TX9>
extern volatile __bit                   TX9                 __at(0x8F6);	// @ (0x11E * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TX1STA,6)
// TX1STA<TX9D>
extern volatile __bit                   TX9D                __at(0x8F0);	// @ (0x11E * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TX1STA,0)
// TX1STA<TXEN>
extern volatile __bit                   TXEN                __at(0x8F5);	// @ (0x11E * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TX1STA,5)
// SSP1STAT<UA>
extern volatile __bit                   UA                  __at(0xC79);	// @ (0x18F * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSP1STAT,1)
// SSP1STAT<UA1>
extern volatile __bit                   UA1                 __at(0xC79);	// @ (0x18F * 8 + 1)
#define                                 UA1_bit             _BIT_ACCESS(SSP1STAT,1)
// SSP1CON1<WCOL>
extern volatile __bit                   WCOL                __at(0xC87);	// @ (0x190 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSP1CON1,7)
// SSP1CON1<WCOL1>
extern volatile __bit                   WCOL1               __at(0xC87);	// @ (0x190 * 8 + 7)
#define                                 WCOL1_bit           _BIT_ACCESS(SSP1CON1,7)
// WDTCON<WDTCS>
extern volatile __bit                   WDTCS               __at(0x4067);	// @ (0x80C * 8 + 7)
#define                                 WDTCS_bit           _BIT_ACCESS(WDTCON,7)
// WDTCON<WDTSEN>
extern volatile __bit                   WDTSEN              __at(0x4060);	// @ (0x80C * 8 + 0)
#define                                 WDTSEN_bit          _BIT_ACCESS(WDTCON,0)
// WPUA<WPUA0>
extern volatile __bit                   WPUA0               __at(0xF9C8);	// @ (0x1F39 * 8 + 0)
#define                                 WPUA0_bit           _BIT_ACCESS(WPUA,0)
// WPUA<WPUA1>
extern volatile __bit                   WPUA1               __at(0xF9C9);	// @ (0x1F39 * 8 + 1)
#define                                 WPUA1_bit           _BIT_ACCESS(WPUA,1)
// WPUA<WPUA2>
extern volatile __bit                   WPUA2               __at(0xF9CA);	// @ (0x1F39 * 8 + 2)
#define                                 WPUA2_bit           _BIT_ACCESS(WPUA,2)
// WPUA<WPUA3>
extern volatile __bit                   WPUA3               __at(0xF9CB);	// @ (0x1F39 * 8 + 3)
#define                                 WPUA3_bit           _BIT_ACCESS(WPUA,3)
// WPUA<WPUA4>
extern volatile __bit                   WPUA4               __at(0xF9CC);	// @ (0x1F39 * 8 + 4)
#define                                 WPUA4_bit           _BIT_ACCESS(WPUA,4)
// WPUA<WPUA5>
extern volatile __bit                   WPUA5               __at(0xF9CD);	// @ (0x1F39 * 8 + 5)
#define                                 WPUA5_bit           _BIT_ACCESS(WPUA,5)
// WPUB<WPUB4>
extern volatile __bit                   WPUB4               __at(0xFA24);	// @ (0x1F44 * 8 + 4)
#define                                 WPUB4_bit           _BIT_ACCESS(WPUB,4)
// WPUB<WPUB5>
extern volatile __bit                   WPUB5               __at(0xFA25);	// @ (0x1F44 * 8 + 5)
#define                                 WPUB5_bit           _BIT_ACCESS(WPUB,5)
// WPUB<WPUB6>
extern volatile __bit                   WPUB6               __at(0xFA26);	// @ (0x1F44 * 8 + 6)
#define                                 WPUB6_bit           _BIT_ACCESS(WPUB,6)
// WPUB<WPUB7>
extern volatile __bit                   WPUB7               __at(0xFA27);	// @ (0x1F44 * 8 + 7)
#define                                 WPUB7_bit           _BIT_ACCESS(WPUB,7)
// WPUC<WPUC0>
extern volatile __bit                   WPUC0               __at(0xFA78);	// @ (0x1F4F * 8 + 0)
#define                                 WPUC0_bit           _BIT_ACCESS(WPUC,0)
// WPUC<WPUC1>
extern volatile __bit                   WPUC1               __at(0xFA79);	// @ (0x1F4F * 8 + 1)
#define                                 WPUC1_bit           _BIT_ACCESS(WPUC,1)
// WPUC<WPUC2>
extern volatile __bit                   WPUC2               __at(0xFA7A);	// @ (0x1F4F * 8 + 2)
#define                                 WPUC2_bit           _BIT_ACCESS(WPUC,2)
// WPUC<WPUC3>
extern volatile __bit                   WPUC3               __at(0xFA7B);	// @ (0x1F4F * 8 + 3)
#define                                 WPUC3_bit           _BIT_ACCESS(WPUC,3)
// WPUC<WPUC4>
extern volatile __bit                   WPUC4               __at(0xFA7C);	// @ (0x1F4F * 8 + 4)
#define                                 WPUC4_bit           _BIT_ACCESS(WPUC,4)
// WPUC<WPUC5>
extern volatile __bit                   WPUC5               __at(0xFA7D);	// @ (0x1F4F * 8 + 5)
#define                                 WPUC5_bit           _BIT_ACCESS(WPUC,5)
// WPUC<WPUC6>
extern volatile __bit                   WPUC6               __at(0xFA7E);	// @ (0x1F4F * 8 + 6)
#define                                 WPUC6_bit           _BIT_ACCESS(WPUC,6)
// WPUC<WPUC7>
extern volatile __bit                   WPUC7               __at(0xFA7F);	// @ (0x1F4F * 8 + 7)
#define                                 WPUC7_bit           _BIT_ACCESS(WPUC,7)
// NVMCON1<WR>
extern volatile __bit                   WR                  __at(0x40F1);	// @ (0x81E * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(NVMCON1,1)
// NVMCON1<WREN>
extern volatile __bit                   WREN                __at(0x40F2);	// @ (0x81E * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(NVMCON1,2)
// NVMCON1<WRERR>
extern volatile __bit                   WRERR               __at(0x40F3);	// @ (0x81E * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(NVMCON1,3)
// BAUD1CON<WUE>
extern volatile __bit                   WUE                 __at(0x8F9);	// @ (0x11F * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUD1CON,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// SSP1STAT<nA>
extern volatile __bit                   nA                  __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 nA_bit              _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<nA2>
extern volatile __bit                   nA2                 __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 nA2_bit             _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<nADDRESS>
extern volatile __bit                   nADDRESS            __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 nADDRESS_bit        _BIT_ACCESS(SSP1STAT,5)
// SSP1STAT<nADDRESS1>
extern volatile __bit                   nADDRESS1           __at(0xC7D);	// @ (0x18F * 8 + 5)
#define                                 nADDRESS1_bit       _BIT_ACCESS(SSP1STAT,5)
// PCON0<nBOR>
extern volatile __bit                   nBOR                __at(0x4098);	// @ (0x813 * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON0,0)
// PCON1<nMEMV>
extern volatile __bit                   nMEMV               __at(0x40A1);	// @ (0x814 * 8 + 1)
#define                                 nMEMV_bit           _BIT_ACCESS(PCON1,1)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON0<nPOR>
extern volatile __bit                   nPOR                __at(0x4099);	// @ (0x813 * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON0,1)
// PCON0<nRI>
extern volatile __bit                   nRI                 __at(0x409A);	// @ (0x813 * 8 + 2)
#define                                 nRI_bit             _BIT_ACCESS(PCON0,2)
// PCON0<nRMCLR>
extern volatile __bit                   nRMCLR              __at(0x409B);	// @ (0x813 * 8 + 3)
#define                                 nRMCLR_bit          _BIT_ACCESS(PCON0,3)
// PCON0<nRWDT>
extern volatile __bit                   nRWDT               __at(0x409C);	// @ (0x813 * 8 + 4)
#define                                 nRWDT_bit           _BIT_ACCESS(PCON0,4)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)
// SSP1STAT<nW>
extern volatile __bit                   nW                  __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 nW_bit              _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<nW2>
extern volatile __bit                   nW2                 __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 nW2_bit             _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<nWRITE>
extern volatile __bit                   nWRITE              __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 nWRITE_bit          _BIT_ACCESS(SSP1STAT,2)
// SSP1STAT<nWRITE1>
extern volatile __bit                   nWRITE1             __at(0xC7A);	// @ (0x18F * 8 + 2)
#define                                 nWRITE1_bit         _BIT_ACCESS(SSP1STAT,2)

#endif // _PIC16F15244_H_
