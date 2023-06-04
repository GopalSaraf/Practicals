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

#ifndef _PIC16F18313_H_
#define _PIC16F18313_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F18313
 */
#ifndef _XC_H_
#warning Header file pic16f18313.h included directly. Use #include <xc.h> instead.
#endif

#include <__at.h>

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
        unsigned BSR                    :5;
    };
    struct {
        unsigned BSR0                   :1;
        unsigned BSR1                   :1;
        unsigned BSR2                   :1;
        unsigned BSR3                   :1;
        unsigned BSR4                   :1;
    };
} BSRbits_t;
extern volatile BSRbits_t BSRbits __at(0x008);
// bitfield macros
#define _BSR_BSR_POSN                                       0x0
#define _BSR_BSR_POSITION                                   0x0
#define _BSR_BSR_SIZE                                       0x5
#define _BSR_BSR_LENGTH                                     0x5
#define _BSR_BSR_MASK                                       0x1F
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

// Register: WREG
#define WREG WREG
extern volatile unsigned char           WREG                __at(0x009);
#ifndef _LIB_BUILD
asm("WREG equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG0                  :8;
    };
} WREGbits_t;
extern volatile WREGbits_t WREGbits __at(0x009);
// bitfield macros
#define _WREG_WREG0_POSN                                    0x0
#define _WREG_WREG0_POSITION                                0x0
#define _WREG_WREG0_SIZE                                    0x8
#define _WREG_WREG0_LENGTH                                  0x8
#define _WREG_WREG0_MASK                                    0xFF

// Register: PCLATH
#define PCLATH PCLATH
extern volatile unsigned char           PCLATH              __at(0x00A);
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH                 :3;
    };
} PCLATHbits_t;
extern volatile PCLATHbits_t PCLATHbits __at(0x00A);
// bitfield macros
#define _PCLATH_PCLATH_POSN                                 0x0
#define _PCLATH_PCLATH_POSITION                             0x0
#define _PCLATH_PCLATH_SIZE                                 0x3
#define _PCLATH_PCLATH_LENGTH                               0x3
#define _PCLATH_PCLATH_MASK                                 0x7

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

// Register: PIR0
#define PIR0 PIR0
extern volatile unsigned char           PIR0                __at(0x010);
#ifndef _LIB_BUILD
asm("PIR0 equ 010h");
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
extern volatile PIR0bits_t PIR0bits __at(0x010);
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
extern volatile unsigned char           PIR1                __at(0x011);
#ifndef _LIB_BUILD
asm("PIR1 equ 011h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned BCL1IF                 :1;
        unsigned SSP1IF                 :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
        unsigned TMR1GIF                :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __at(0x011);
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
#define _PIR1_BCL1IF_POSN                                   0x2
#define _PIR1_BCL1IF_POSITION                               0x2
#define _PIR1_BCL1IF_SIZE                                   0x1
#define _PIR1_BCL1IF_LENGTH                                 0x1
#define _PIR1_BCL1IF_MASK                                   0x4
#define _PIR1_SSP1IF_POSN                                   0x3
#define _PIR1_SSP1IF_POSITION                               0x3
#define _PIR1_SSP1IF_SIZE                                   0x1
#define _PIR1_SSP1IF_LENGTH                                 0x1
#define _PIR1_SSP1IF_MASK                                   0x8
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
#define _PIR1_TMR1GIF_POSN                                  0x7
#define _PIR1_TMR1GIF_POSITION                              0x7
#define _PIR1_TMR1GIF_SIZE                                  0x1
#define _PIR1_TMR1GIF_LENGTH                                0x1
#define _PIR1_TMR1GIF_MASK                                  0x80

// Register: PIR2
#define PIR2 PIR2
extern volatile unsigned char           PIR2                __at(0x012);
#ifndef _LIB_BUILD
asm("PIR2 equ 012h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1IF                 :1;
        unsigned                        :3;
        unsigned NVMIF                  :1;
        unsigned C1IF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __at(0x012);
// bitfield macros
#define _PIR2_NCO1IF_POSN                                   0x0
#define _PIR2_NCO1IF_POSITION                               0x0
#define _PIR2_NCO1IF_SIZE                                   0x1
#define _PIR2_NCO1IF_LENGTH                                 0x1
#define _PIR2_NCO1IF_MASK                                   0x1
#define _PIR2_NVMIF_POSN                                    0x4
#define _PIR2_NVMIF_POSITION                                0x4
#define _PIR2_NVMIF_SIZE                                    0x1
#define _PIR2_NVMIF_LENGTH                                  0x1
#define _PIR2_NVMIF_MASK                                    0x10
#define _PIR2_C1IF_POSN                                     0x5
#define _PIR2_C1IF_POSITION                                 0x5
#define _PIR2_C1IF_SIZE                                     0x1
#define _PIR2_C1IF_LENGTH                                   0x1
#define _PIR2_C1IF_MASK                                     0x20

// Register: PIR3
#define PIR3 PIR3
extern volatile unsigned char           PIR3                __at(0x013);
#ifndef _LIB_BUILD
asm("PIR3 equ 013h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLC1IF                 :1;
        unsigned CLC2IF                 :1;
        unsigned                        :4;
        unsigned CSWIF                  :1;
        unsigned OSFIF                  :1;
    };
} PIR3bits_t;
extern volatile PIR3bits_t PIR3bits __at(0x013);
// bitfield macros
#define _PIR3_CLC1IF_POSN                                   0x0
#define _PIR3_CLC1IF_POSITION                               0x0
#define _PIR3_CLC1IF_SIZE                                   0x1
#define _PIR3_CLC1IF_LENGTH                                 0x1
#define _PIR3_CLC1IF_MASK                                   0x1
#define _PIR3_CLC2IF_POSN                                   0x1
#define _PIR3_CLC2IF_POSITION                               0x1
#define _PIR3_CLC2IF_SIZE                                   0x1
#define _PIR3_CLC2IF_LENGTH                                 0x1
#define _PIR3_CLC2IF_MASK                                   0x2
#define _PIR3_CSWIF_POSN                                    0x6
#define _PIR3_CSWIF_POSITION                                0x6
#define _PIR3_CSWIF_SIZE                                    0x1
#define _PIR3_CSWIF_LENGTH                                  0x1
#define _PIR3_CSWIF_MASK                                    0x40
#define _PIR3_OSFIF_POSN                                    0x7
#define _PIR3_OSFIF_POSITION                                0x7
#define _PIR3_OSFIF_SIZE                                    0x1
#define _PIR3_OSFIF_LENGTH                                  0x1
#define _PIR3_OSFIF_MASK                                    0x80

// Register: PIR4
#define PIR4 PIR4
extern volatile unsigned char           PIR4                __at(0x014);
#ifndef _LIB_BUILD
asm("PIR4 equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1IF                 :1;
        unsigned CCP2IF                 :1;
        unsigned                        :4;
        unsigned CWG1IF                 :1;
    };
} PIR4bits_t;
extern volatile PIR4bits_t PIR4bits __at(0x014);
// bitfield macros
#define _PIR4_CCP1IF_POSN                                   0x0
#define _PIR4_CCP1IF_POSITION                               0x0
#define _PIR4_CCP1IF_SIZE                                   0x1
#define _PIR4_CCP1IF_LENGTH                                 0x1
#define _PIR4_CCP1IF_MASK                                   0x1
#define _PIR4_CCP2IF_POSN                                   0x1
#define _PIR4_CCP2IF_POSITION                               0x1
#define _PIR4_CCP2IF_SIZE                                   0x1
#define _PIR4_CCP2IF_LENGTH                                 0x1
#define _PIR4_CCP2IF_MASK                                   0x2
#define _PIR4_CWG1IF_POSN                                   0x6
#define _PIR4_CWG1IF_POSITION                               0x6
#define _PIR4_CWG1IF_SIZE                                   0x1
#define _PIR4_CWG1IF_LENGTH                                 0x1
#define _PIR4_CWG1IF_MASK                                   0x40

// Register: TMR0L
#define TMR0L TMR0L
extern volatile unsigned char           TMR0L               __at(0x015);
#ifndef _LIB_BUILD
asm("TMR0L equ 015h");
#endif
// aliases
extern volatile unsigned char           TMR0                __at(0x015);
#ifndef _LIB_BUILD
asm("TMR0 equ 015h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0L                  :8;
    };
    struct {
        unsigned TMR00                  :1;
        unsigned TMR01                  :1;
        unsigned TMR02                  :1;
        unsigned TMR03                  :1;
        unsigned TMR04                  :1;
        unsigned TMR05                  :1;
        unsigned TMR06                  :1;
        unsigned TMR07                  :1;
    };
} TMR0Lbits_t;
extern volatile TMR0Lbits_t TMR0Lbits __at(0x015);
// bitfield macros
#define _TMR0L_TMR0L_POSN                                   0x0
#define _TMR0L_TMR0L_POSITION                               0x0
#define _TMR0L_TMR0L_SIZE                                   0x8
#define _TMR0L_TMR0L_LENGTH                                 0x8
#define _TMR0L_TMR0L_MASK                                   0xFF
#define _TMR0L_TMR00_POSN                                   0x0
#define _TMR0L_TMR00_POSITION                               0x0
#define _TMR0L_TMR00_SIZE                                   0x1
#define _TMR0L_TMR00_LENGTH                                 0x1
#define _TMR0L_TMR00_MASK                                   0x1
#define _TMR0L_TMR01_POSN                                   0x1
#define _TMR0L_TMR01_POSITION                               0x1
#define _TMR0L_TMR01_SIZE                                   0x1
#define _TMR0L_TMR01_LENGTH                                 0x1
#define _TMR0L_TMR01_MASK                                   0x2
#define _TMR0L_TMR02_POSN                                   0x2
#define _TMR0L_TMR02_POSITION                               0x2
#define _TMR0L_TMR02_SIZE                                   0x1
#define _TMR0L_TMR02_LENGTH                                 0x1
#define _TMR0L_TMR02_MASK                                   0x4
#define _TMR0L_TMR03_POSN                                   0x3
#define _TMR0L_TMR03_POSITION                               0x3
#define _TMR0L_TMR03_SIZE                                   0x1
#define _TMR0L_TMR03_LENGTH                                 0x1
#define _TMR0L_TMR03_MASK                                   0x8
#define _TMR0L_TMR04_POSN                                   0x4
#define _TMR0L_TMR04_POSITION                               0x4
#define _TMR0L_TMR04_SIZE                                   0x1
#define _TMR0L_TMR04_LENGTH                                 0x1
#define _TMR0L_TMR04_MASK                                   0x10
#define _TMR0L_TMR05_POSN                                   0x5
#define _TMR0L_TMR05_POSITION                               0x5
#define _TMR0L_TMR05_SIZE                                   0x1
#define _TMR0L_TMR05_LENGTH                                 0x1
#define _TMR0L_TMR05_MASK                                   0x20
#define _TMR0L_TMR06_POSN                                   0x6
#define _TMR0L_TMR06_POSITION                               0x6
#define _TMR0L_TMR06_SIZE                                   0x1
#define _TMR0L_TMR06_LENGTH                                 0x1
#define _TMR0L_TMR06_MASK                                   0x40
#define _TMR0L_TMR07_POSN                                   0x7
#define _TMR0L_TMR07_POSITION                               0x7
#define _TMR0L_TMR07_SIZE                                   0x1
#define _TMR0L_TMR07_LENGTH                                 0x1
#define _TMR0L_TMR07_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TMR0L                  :8;
    };
    struct {
        unsigned TMR00                  :1;
        unsigned TMR01                  :1;
        unsigned TMR02                  :1;
        unsigned TMR03                  :1;
        unsigned TMR04                  :1;
        unsigned TMR05                  :1;
        unsigned TMR06                  :1;
        unsigned TMR07                  :1;
    };
} TMR0bits_t;
extern volatile TMR0bits_t TMR0bits __at(0x015);
// bitfield macros
#define _TMR0_TMR0L_POSN                                    0x0
#define _TMR0_TMR0L_POSITION                                0x0
#define _TMR0_TMR0L_SIZE                                    0x8
#define _TMR0_TMR0L_LENGTH                                  0x8
#define _TMR0_TMR0L_MASK                                    0xFF
#define _TMR0_TMR00_POSN                                    0x0
#define _TMR0_TMR00_POSITION                                0x0
#define _TMR0_TMR00_SIZE                                    0x1
#define _TMR0_TMR00_LENGTH                                  0x1
#define _TMR0_TMR00_MASK                                    0x1
#define _TMR0_TMR01_POSN                                    0x1
#define _TMR0_TMR01_POSITION                                0x1
#define _TMR0_TMR01_SIZE                                    0x1
#define _TMR0_TMR01_LENGTH                                  0x1
#define _TMR0_TMR01_MASK                                    0x2
#define _TMR0_TMR02_POSN                                    0x2
#define _TMR0_TMR02_POSITION                                0x2
#define _TMR0_TMR02_SIZE                                    0x1
#define _TMR0_TMR02_LENGTH                                  0x1
#define _TMR0_TMR02_MASK                                    0x4
#define _TMR0_TMR03_POSN                                    0x3
#define _TMR0_TMR03_POSITION                                0x3
#define _TMR0_TMR03_SIZE                                    0x1
#define _TMR0_TMR03_LENGTH                                  0x1
#define _TMR0_TMR03_MASK                                    0x8
#define _TMR0_TMR04_POSN                                    0x4
#define _TMR0_TMR04_POSITION                                0x4
#define _TMR0_TMR04_SIZE                                    0x1
#define _TMR0_TMR04_LENGTH                                  0x1
#define _TMR0_TMR04_MASK                                    0x10
#define _TMR0_TMR05_POSN                                    0x5
#define _TMR0_TMR05_POSITION                                0x5
#define _TMR0_TMR05_SIZE                                    0x1
#define _TMR0_TMR05_LENGTH                                  0x1
#define _TMR0_TMR05_MASK                                    0x20
#define _TMR0_TMR06_POSN                                    0x6
#define _TMR0_TMR06_POSITION                                0x6
#define _TMR0_TMR06_SIZE                                    0x1
#define _TMR0_TMR06_LENGTH                                  0x1
#define _TMR0_TMR06_MASK                                    0x40
#define _TMR0_TMR07_POSN                                    0x7
#define _TMR0_TMR07_POSITION                                0x7
#define _TMR0_TMR07_SIZE                                    0x1
#define _TMR0_TMR07_LENGTH                                  0x1
#define _TMR0_TMR07_MASK                                    0x80

// Register: TMR0H
#define TMR0H TMR0H
extern volatile unsigned char           TMR0H               __at(0x016);
#ifndef _LIB_BUILD
asm("TMR0H equ 016h");
#endif
// aliases
extern volatile unsigned char           PR0                 __at(0x016);
#ifndef _LIB_BUILD
asm("PR0 equ 016h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0H                  :8;
    };
    struct {
        unsigned TMR08                  :1;
        unsigned TMR09                  :1;
        unsigned TMR010                 :1;
        unsigned TMR011                 :1;
        unsigned TMR012                 :1;
        unsigned TMR013                 :1;
        unsigned TMR014                 :1;
        unsigned TMR015                 :1;
    };
    struct {
        unsigned PR00                   :1;
        unsigned PR01                   :1;
        unsigned PR02                   :1;
        unsigned PR03                   :1;
        unsigned PR04                   :1;
        unsigned PR05                   :1;
        unsigned PR06                   :1;
        unsigned PR07                   :1;
    };
    struct {
        unsigned PR0                    :8;
    };
} TMR0Hbits_t;
extern volatile TMR0Hbits_t TMR0Hbits __at(0x016);
// bitfield macros
#define _TMR0H_TMR0H_POSN                                   0x0
#define _TMR0H_TMR0H_POSITION                               0x0
#define _TMR0H_TMR0H_SIZE                                   0x8
#define _TMR0H_TMR0H_LENGTH                                 0x8
#define _TMR0H_TMR0H_MASK                                   0xFF
#define _TMR0H_TMR08_POSN                                   0x0
#define _TMR0H_TMR08_POSITION                               0x0
#define _TMR0H_TMR08_SIZE                                   0x1
#define _TMR0H_TMR08_LENGTH                                 0x1
#define _TMR0H_TMR08_MASK                                   0x1
#define _TMR0H_TMR09_POSN                                   0x1
#define _TMR0H_TMR09_POSITION                               0x1
#define _TMR0H_TMR09_SIZE                                   0x1
#define _TMR0H_TMR09_LENGTH                                 0x1
#define _TMR0H_TMR09_MASK                                   0x2
#define _TMR0H_TMR010_POSN                                  0x2
#define _TMR0H_TMR010_POSITION                              0x2
#define _TMR0H_TMR010_SIZE                                  0x1
#define _TMR0H_TMR010_LENGTH                                0x1
#define _TMR0H_TMR010_MASK                                  0x4
#define _TMR0H_TMR011_POSN                                  0x3
#define _TMR0H_TMR011_POSITION                              0x3
#define _TMR0H_TMR011_SIZE                                  0x1
#define _TMR0H_TMR011_LENGTH                                0x1
#define _TMR0H_TMR011_MASK                                  0x8
#define _TMR0H_TMR012_POSN                                  0x4
#define _TMR0H_TMR012_POSITION                              0x4
#define _TMR0H_TMR012_SIZE                                  0x1
#define _TMR0H_TMR012_LENGTH                                0x1
#define _TMR0H_TMR012_MASK                                  0x10
#define _TMR0H_TMR013_POSN                                  0x5
#define _TMR0H_TMR013_POSITION                              0x5
#define _TMR0H_TMR013_SIZE                                  0x1
#define _TMR0H_TMR013_LENGTH                                0x1
#define _TMR0H_TMR013_MASK                                  0x20
#define _TMR0H_TMR014_POSN                                  0x6
#define _TMR0H_TMR014_POSITION                              0x6
#define _TMR0H_TMR014_SIZE                                  0x1
#define _TMR0H_TMR014_LENGTH                                0x1
#define _TMR0H_TMR014_MASK                                  0x40
#define _TMR0H_TMR015_POSN                                  0x7
#define _TMR0H_TMR015_POSITION                              0x7
#define _TMR0H_TMR015_SIZE                                  0x1
#define _TMR0H_TMR015_LENGTH                                0x1
#define _TMR0H_TMR015_MASK                                  0x80
#define _TMR0H_PR00_POSN                                    0x0
#define _TMR0H_PR00_POSITION                                0x0
#define _TMR0H_PR00_SIZE                                    0x1
#define _TMR0H_PR00_LENGTH                                  0x1
#define _TMR0H_PR00_MASK                                    0x1
#define _TMR0H_PR01_POSN                                    0x1
#define _TMR0H_PR01_POSITION                                0x1
#define _TMR0H_PR01_SIZE                                    0x1
#define _TMR0H_PR01_LENGTH                                  0x1
#define _TMR0H_PR01_MASK                                    0x2
#define _TMR0H_PR02_POSN                                    0x2
#define _TMR0H_PR02_POSITION                                0x2
#define _TMR0H_PR02_SIZE                                    0x1
#define _TMR0H_PR02_LENGTH                                  0x1
#define _TMR0H_PR02_MASK                                    0x4
#define _TMR0H_PR03_POSN                                    0x3
#define _TMR0H_PR03_POSITION                                0x3
#define _TMR0H_PR03_SIZE                                    0x1
#define _TMR0H_PR03_LENGTH                                  0x1
#define _TMR0H_PR03_MASK                                    0x8
#define _TMR0H_PR04_POSN                                    0x4
#define _TMR0H_PR04_POSITION                                0x4
#define _TMR0H_PR04_SIZE                                    0x1
#define _TMR0H_PR04_LENGTH                                  0x1
#define _TMR0H_PR04_MASK                                    0x10
#define _TMR0H_PR05_POSN                                    0x5
#define _TMR0H_PR05_POSITION                                0x5
#define _TMR0H_PR05_SIZE                                    0x1
#define _TMR0H_PR05_LENGTH                                  0x1
#define _TMR0H_PR05_MASK                                    0x20
#define _TMR0H_PR06_POSN                                    0x6
#define _TMR0H_PR06_POSITION                                0x6
#define _TMR0H_PR06_SIZE                                    0x1
#define _TMR0H_PR06_LENGTH                                  0x1
#define _TMR0H_PR06_MASK                                    0x40
#define _TMR0H_PR07_POSN                                    0x7
#define _TMR0H_PR07_POSITION                                0x7
#define _TMR0H_PR07_SIZE                                    0x1
#define _TMR0H_PR07_LENGTH                                  0x1
#define _TMR0H_PR07_MASK                                    0x80
#define _TMR0H_PR0_POSN                                     0x0
#define _TMR0H_PR0_POSITION                                 0x0
#define _TMR0H_PR0_SIZE                                     0x8
#define _TMR0H_PR0_LENGTH                                   0x8
#define _TMR0H_PR0_MASK                                     0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TMR0H                  :8;
    };
    struct {
        unsigned TMR08                  :1;
        unsigned TMR09                  :1;
        unsigned TMR010                 :1;
        unsigned TMR011                 :1;
        unsigned TMR012                 :1;
        unsigned TMR013                 :1;
        unsigned TMR014                 :1;
        unsigned TMR015                 :1;
    };
    struct {
        unsigned PR00                   :1;
        unsigned PR01                   :1;
        unsigned PR02                   :1;
        unsigned PR03                   :1;
        unsigned PR04                   :1;
        unsigned PR05                   :1;
        unsigned PR06                   :1;
        unsigned PR07                   :1;
    };
    struct {
        unsigned PR0                    :8;
    };
} PR0bits_t;
extern volatile PR0bits_t PR0bits __at(0x016);
// bitfield macros
#define _PR0_TMR0H_POSN                                     0x0
#define _PR0_TMR0H_POSITION                                 0x0
#define _PR0_TMR0H_SIZE                                     0x8
#define _PR0_TMR0H_LENGTH                                   0x8
#define _PR0_TMR0H_MASK                                     0xFF
#define _PR0_TMR08_POSN                                     0x0
#define _PR0_TMR08_POSITION                                 0x0
#define _PR0_TMR08_SIZE                                     0x1
#define _PR0_TMR08_LENGTH                                   0x1
#define _PR0_TMR08_MASK                                     0x1
#define _PR0_TMR09_POSN                                     0x1
#define _PR0_TMR09_POSITION                                 0x1
#define _PR0_TMR09_SIZE                                     0x1
#define _PR0_TMR09_LENGTH                                   0x1
#define _PR0_TMR09_MASK                                     0x2
#define _PR0_TMR010_POSN                                    0x2
#define _PR0_TMR010_POSITION                                0x2
#define _PR0_TMR010_SIZE                                    0x1
#define _PR0_TMR010_LENGTH                                  0x1
#define _PR0_TMR010_MASK                                    0x4
#define _PR0_TMR011_POSN                                    0x3
#define _PR0_TMR011_POSITION                                0x3
#define _PR0_TMR011_SIZE                                    0x1
#define _PR0_TMR011_LENGTH                                  0x1
#define _PR0_TMR011_MASK                                    0x8
#define _PR0_TMR012_POSN                                    0x4
#define _PR0_TMR012_POSITION                                0x4
#define _PR0_TMR012_SIZE                                    0x1
#define _PR0_TMR012_LENGTH                                  0x1
#define _PR0_TMR012_MASK                                    0x10
#define _PR0_TMR013_POSN                                    0x5
#define _PR0_TMR013_POSITION                                0x5
#define _PR0_TMR013_SIZE                                    0x1
#define _PR0_TMR013_LENGTH                                  0x1
#define _PR0_TMR013_MASK                                    0x20
#define _PR0_TMR014_POSN                                    0x6
#define _PR0_TMR014_POSITION                                0x6
#define _PR0_TMR014_SIZE                                    0x1
#define _PR0_TMR014_LENGTH                                  0x1
#define _PR0_TMR014_MASK                                    0x40
#define _PR0_TMR015_POSN                                    0x7
#define _PR0_TMR015_POSITION                                0x7
#define _PR0_TMR015_SIZE                                    0x1
#define _PR0_TMR015_LENGTH                                  0x1
#define _PR0_TMR015_MASK                                    0x80
#define _PR0_PR00_POSN                                      0x0
#define _PR0_PR00_POSITION                                  0x0
#define _PR0_PR00_SIZE                                      0x1
#define _PR0_PR00_LENGTH                                    0x1
#define _PR0_PR00_MASK                                      0x1
#define _PR0_PR01_POSN                                      0x1
#define _PR0_PR01_POSITION                                  0x1
#define _PR0_PR01_SIZE                                      0x1
#define _PR0_PR01_LENGTH                                    0x1
#define _PR0_PR01_MASK                                      0x2
#define _PR0_PR02_POSN                                      0x2
#define _PR0_PR02_POSITION                                  0x2
#define _PR0_PR02_SIZE                                      0x1
#define _PR0_PR02_LENGTH                                    0x1
#define _PR0_PR02_MASK                                      0x4
#define _PR0_PR03_POSN                                      0x3
#define _PR0_PR03_POSITION                                  0x3
#define _PR0_PR03_SIZE                                      0x1
#define _PR0_PR03_LENGTH                                    0x1
#define _PR0_PR03_MASK                                      0x8
#define _PR0_PR04_POSN                                      0x4
#define _PR0_PR04_POSITION                                  0x4
#define _PR0_PR04_SIZE                                      0x1
#define _PR0_PR04_LENGTH                                    0x1
#define _PR0_PR04_MASK                                      0x10
#define _PR0_PR05_POSN                                      0x5
#define _PR0_PR05_POSITION                                  0x5
#define _PR0_PR05_SIZE                                      0x1
#define _PR0_PR05_LENGTH                                    0x1
#define _PR0_PR05_MASK                                      0x20
#define _PR0_PR06_POSN                                      0x6
#define _PR0_PR06_POSITION                                  0x6
#define _PR0_PR06_SIZE                                      0x1
#define _PR0_PR06_LENGTH                                    0x1
#define _PR0_PR06_MASK                                      0x40
#define _PR0_PR07_POSN                                      0x7
#define _PR0_PR07_POSITION                                  0x7
#define _PR0_PR07_SIZE                                      0x1
#define _PR0_PR07_LENGTH                                    0x1
#define _PR0_PR07_MASK                                      0x80
#define _PR0_PR0_POSN                                       0x0
#define _PR0_PR0_POSITION                                   0x0
#define _PR0_PR0_SIZE                                       0x8
#define _PR0_PR0_LENGTH                                     0x8
#define _PR0_PR0_MASK                                       0xFF

// Register: T0CON0
#define T0CON0 T0CON0
extern volatile unsigned char           T0CON0              __at(0x017);
#ifndef _LIB_BUILD
asm("T0CON0 equ 017h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0OUTPS                :4;
        unsigned T016BIT                :1;
        unsigned T0OUT                  :1;
        unsigned                        :1;
        unsigned T0EN                   :1;
    };
    struct {
        unsigned T0OUTPS0               :1;
        unsigned T0OUTPS1               :1;
        unsigned T0OUTPS2               :1;
        unsigned T0OUTPS3               :1;
    };
} T0CON0bits_t;
extern volatile T0CON0bits_t T0CON0bits __at(0x017);
// bitfield macros
#define _T0CON0_T0OUTPS_POSN                                0x0
#define _T0CON0_T0OUTPS_POSITION                            0x0
#define _T0CON0_T0OUTPS_SIZE                                0x4
#define _T0CON0_T0OUTPS_LENGTH                              0x4
#define _T0CON0_T0OUTPS_MASK                                0xF
#define _T0CON0_T016BIT_POSN                                0x4
#define _T0CON0_T016BIT_POSITION                            0x4
#define _T0CON0_T016BIT_SIZE                                0x1
#define _T0CON0_T016BIT_LENGTH                              0x1
#define _T0CON0_T016BIT_MASK                                0x10
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
#define _T0CON0_T0OUTPS0_POSN                               0x0
#define _T0CON0_T0OUTPS0_POSITION                           0x0
#define _T0CON0_T0OUTPS0_SIZE                               0x1
#define _T0CON0_T0OUTPS0_LENGTH                             0x1
#define _T0CON0_T0OUTPS0_MASK                               0x1
#define _T0CON0_T0OUTPS1_POSN                               0x1
#define _T0CON0_T0OUTPS1_POSITION                           0x1
#define _T0CON0_T0OUTPS1_SIZE                               0x1
#define _T0CON0_T0OUTPS1_LENGTH                             0x1
#define _T0CON0_T0OUTPS1_MASK                               0x2
#define _T0CON0_T0OUTPS2_POSN                               0x2
#define _T0CON0_T0OUTPS2_POSITION                           0x2
#define _T0CON0_T0OUTPS2_SIZE                               0x1
#define _T0CON0_T0OUTPS2_LENGTH                             0x1
#define _T0CON0_T0OUTPS2_MASK                               0x4
#define _T0CON0_T0OUTPS3_POSN                               0x3
#define _T0CON0_T0OUTPS3_POSITION                           0x3
#define _T0CON0_T0OUTPS3_SIZE                               0x1
#define _T0CON0_T0OUTPS3_LENGTH                             0x1
#define _T0CON0_T0OUTPS3_MASK                               0x8

// Register: T0CON1
#define T0CON1 T0CON1
extern volatile unsigned char           T0CON1              __at(0x018);
#ifndef _LIB_BUILD
asm("T0CON1 equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0CKPS                 :4;
        unsigned T0ASYNC                :1;
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
extern volatile T0CON1bits_t T0CON1bits __at(0x018);
// bitfield macros
#define _T0CON1_T0CKPS_POSN                                 0x0
#define _T0CON1_T0CKPS_POSITION                             0x0
#define _T0CON1_T0CKPS_SIZE                                 0x4
#define _T0CON1_T0CKPS_LENGTH                               0x4
#define _T0CON1_T0CKPS_MASK                                 0xF
#define _T0CON1_T0ASYNC_POSN                                0x4
#define _T0CON1_T0ASYNC_POSITION                            0x4
#define _T0CON1_T0ASYNC_SIZE                                0x1
#define _T0CON1_T0ASYNC_LENGTH                              0x1
#define _T0CON1_T0ASYNC_MASK                                0x10
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

// Register: TMR1
#define TMR1 TMR1
extern volatile unsigned short          TMR1                __at(0x019);
#ifndef _LIB_BUILD
asm("TMR1 equ 019h");
#endif

// Register: TMR1L
#define TMR1L TMR1L
extern volatile unsigned char           TMR1L               __at(0x019);
#ifndef _LIB_BUILD
asm("TMR1L equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1L                  :8;
    };
} TMR1Lbits_t;
extern volatile TMR1Lbits_t TMR1Lbits __at(0x019);
// bitfield macros
#define _TMR1L_TMR1L_POSN                                   0x0
#define _TMR1L_TMR1L_POSITION                               0x0
#define _TMR1L_TMR1L_SIZE                                   0x8
#define _TMR1L_TMR1L_LENGTH                                 0x8
#define _TMR1L_TMR1L_MASK                                   0xFF

// Register: TMR1H
#define TMR1H TMR1H
extern volatile unsigned char           TMR1H               __at(0x01A);
#ifndef _LIB_BUILD
asm("TMR1H equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1H                  :8;
    };
} TMR1Hbits_t;
extern volatile TMR1Hbits_t TMR1Hbits __at(0x01A);
// bitfield macros
#define _TMR1H_TMR1H_POSN                                   0x0
#define _TMR1H_TMR1H_POSITION                               0x0
#define _TMR1H_TMR1H_SIZE                                   0x8
#define _TMR1H_TMR1H_LENGTH                                 0x8
#define _TMR1H_TMR1H_MASK                                   0xFF

// Register: T1CON
#define T1CON T1CON
extern volatile unsigned char           T1CON               __at(0x01B);
#ifndef _LIB_BUILD
asm("T1CON equ 01Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned                        :1;
        unsigned T1SYNC                 :1;
        unsigned T1SOSC                 :1;
        unsigned T1CKPS                 :2;
        unsigned TMR1CS                 :2;
    };
    struct {
        unsigned                        :4;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned TMR1CS0                :1;
        unsigned TMR1CS1                :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __at(0x01B);
// bitfield macros
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
#define _T1CON_T1SOSC_POSN                                  0x3
#define _T1CON_T1SOSC_POSITION                              0x3
#define _T1CON_T1SOSC_SIZE                                  0x1
#define _T1CON_T1SOSC_LENGTH                                0x1
#define _T1CON_T1SOSC_MASK                                  0x8
#define _T1CON_T1CKPS_POSN                                  0x4
#define _T1CON_T1CKPS_POSITION                              0x4
#define _T1CON_T1CKPS_SIZE                                  0x2
#define _T1CON_T1CKPS_LENGTH                                0x2
#define _T1CON_T1CKPS_MASK                                  0x30
#define _T1CON_TMR1CS_POSN                                  0x6
#define _T1CON_TMR1CS_POSITION                              0x6
#define _T1CON_TMR1CS_SIZE                                  0x2
#define _T1CON_TMR1CS_LENGTH                                0x2
#define _T1CON_TMR1CS_MASK                                  0xC0
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
#define _T1CON_TMR1CS0_POSN                                 0x6
#define _T1CON_TMR1CS0_POSITION                             0x6
#define _T1CON_TMR1CS0_SIZE                                 0x1
#define _T1CON_TMR1CS0_LENGTH                               0x1
#define _T1CON_TMR1CS0_MASK                                 0x40
#define _T1CON_TMR1CS1_POSN                                 0x7
#define _T1CON_TMR1CS1_POSITION                             0x7
#define _T1CON_TMR1CS1_SIZE                                 0x1
#define _T1CON_TMR1CS1_LENGTH                               0x1
#define _T1CON_TMR1CS1_MASK                                 0x80

// Register: T1GCON
#define T1GCON T1GCON
extern volatile unsigned char           T1GCON              __at(0x01C);
#ifndef _LIB_BUILD
asm("T1GCON equ 01Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T1GSS                  :2;
        unsigned T1GVAL                 :1;
        unsigned T1GGO_nDONE            :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
    };
} T1GCONbits_t;
extern volatile T1GCONbits_t T1GCONbits __at(0x01C);
// bitfield macros
#define _T1GCON_T1GSS_POSN                                  0x0
#define _T1GCON_T1GSS_POSITION                              0x0
#define _T1GCON_T1GSS_SIZE                                  0x2
#define _T1GCON_T1GSS_LENGTH                                0x2
#define _T1GCON_T1GSS_MASK                                  0x3
#define _T1GCON_T1GVAL_POSN                                 0x2
#define _T1GCON_T1GVAL_POSITION                             0x2
#define _T1GCON_T1GVAL_SIZE                                 0x1
#define _T1GCON_T1GVAL_LENGTH                               0x1
#define _T1GCON_T1GVAL_MASK                                 0x4
#define _T1GCON_T1GGO_nDONE_POSN                            0x3
#define _T1GCON_T1GGO_nDONE_POSITION                        0x3
#define _T1GCON_T1GGO_nDONE_SIZE                            0x1
#define _T1GCON_T1GGO_nDONE_LENGTH                          0x1
#define _T1GCON_T1GGO_nDONE_MASK                            0x8
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

// Register: TMR2
#define TMR2 TMR2
extern volatile unsigned char           TMR2                __at(0x01D);
#ifndef _LIB_BUILD
asm("TMR2 equ 01Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR2                   :8;
    };
} TMR2bits_t;
extern volatile TMR2bits_t TMR2bits __at(0x01D);
// bitfield macros
#define _TMR2_TMR2_POSN                                     0x0
#define _TMR2_TMR2_POSITION                                 0x0
#define _TMR2_TMR2_SIZE                                     0x8
#define _TMR2_TMR2_LENGTH                                   0x8
#define _TMR2_TMR2_MASK                                     0xFF

// Register: PR2
#define PR2 PR2
extern volatile unsigned char           PR2                 __at(0x01E);
#ifndef _LIB_BUILD
asm("PR2 equ 01Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits __at(0x01E);
// bitfield macros
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF

// Register: T2CON
#define T2CON T2CON
extern volatile unsigned char           T2CON               __at(0x01F);
#ifndef _LIB_BUILD
asm("T2CON equ 01Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
        unsigned T2OUTPS                :4;
    };
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __at(0x01F);
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
#define _T2CON_T2OUTPS_POSN                                 0x3
#define _T2CON_T2OUTPS_POSITION                             0x3
#define _T2CON_T2OUTPS_SIZE                                 0x4
#define _T2CON_T2OUTPS_LENGTH                               0x4
#define _T2CON_T2OUTPS_MASK                                 0x78
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
#define _T2CON_T2OUTPS0_POSN                                0x3
#define _T2CON_T2OUTPS0_POSITION                            0x3
#define _T2CON_T2OUTPS0_SIZE                                0x1
#define _T2CON_T2OUTPS0_LENGTH                              0x1
#define _T2CON_T2OUTPS0_MASK                                0x8
#define _T2CON_T2OUTPS1_POSN                                0x4
#define _T2CON_T2OUTPS1_POSITION                            0x4
#define _T2CON_T2OUTPS1_SIZE                                0x1
#define _T2CON_T2OUTPS1_LENGTH                              0x1
#define _T2CON_T2OUTPS1_MASK                                0x10
#define _T2CON_T2OUTPS2_POSN                                0x5
#define _T2CON_T2OUTPS2_POSITION                            0x5
#define _T2CON_T2OUTPS2_SIZE                                0x1
#define _T2CON_T2OUTPS2_LENGTH                              0x1
#define _T2CON_T2OUTPS2_MASK                                0x20
#define _T2CON_T2OUTPS3_POSN                                0x6
#define _T2CON_T2OUTPS3_POSITION                            0x6
#define _T2CON_T2OUTPS3_SIZE                                0x1
#define _T2CON_T2OUTPS3_LENGTH                              0x1
#define _T2CON_T2OUTPS3_MASK                                0x40

// Register: TRISA
#define TRISA TRISA
extern volatile unsigned char           TRISA               __at(0x08C);
#ifndef _LIB_BUILD
asm("TRISA equ 08Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned                        :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __at(0x08C);
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

// Register: PIE0
#define PIE0 PIE0
extern volatile unsigned char           PIE0                __at(0x090);
#ifndef _LIB_BUILD
asm("PIE0 equ 090h");
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
extern volatile PIE0bits_t PIE0bits __at(0x090);
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
extern volatile unsigned char           PIE1                __at(0x091);
#ifndef _LIB_BUILD
asm("PIE1 equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned BCL1IE                 :1;
        unsigned SSP1IE                 :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
        unsigned TMR1GIE                :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __at(0x091);
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
#define _PIE1_BCL1IE_POSN                                   0x2
#define _PIE1_BCL1IE_POSITION                               0x2
#define _PIE1_BCL1IE_SIZE                                   0x1
#define _PIE1_BCL1IE_LENGTH                                 0x1
#define _PIE1_BCL1IE_MASK                                   0x4
#define _PIE1_SSP1IE_POSN                                   0x3
#define _PIE1_SSP1IE_POSITION                               0x3
#define _PIE1_SSP1IE_SIZE                                   0x1
#define _PIE1_SSP1IE_LENGTH                                 0x1
#define _PIE1_SSP1IE_MASK                                   0x8
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
#define _PIE1_TMR1GIE_POSN                                  0x7
#define _PIE1_TMR1GIE_POSITION                              0x7
#define _PIE1_TMR1GIE_SIZE                                  0x1
#define _PIE1_TMR1GIE_LENGTH                                0x1
#define _PIE1_TMR1GIE_MASK                                  0x80

// Register: PIE2
#define PIE2 PIE2
extern volatile unsigned char           PIE2                __at(0x092);
#ifndef _LIB_BUILD
asm("PIE2 equ 092h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1IE                 :1;
        unsigned                        :3;
        unsigned NVMIE                  :1;
        unsigned C1IE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __at(0x092);
// bitfield macros
#define _PIE2_NCO1IE_POSN                                   0x0
#define _PIE2_NCO1IE_POSITION                               0x0
#define _PIE2_NCO1IE_SIZE                                   0x1
#define _PIE2_NCO1IE_LENGTH                                 0x1
#define _PIE2_NCO1IE_MASK                                   0x1
#define _PIE2_NVMIE_POSN                                    0x4
#define _PIE2_NVMIE_POSITION                                0x4
#define _PIE2_NVMIE_SIZE                                    0x1
#define _PIE2_NVMIE_LENGTH                                  0x1
#define _PIE2_NVMIE_MASK                                    0x10
#define _PIE2_C1IE_POSN                                     0x5
#define _PIE2_C1IE_POSITION                                 0x5
#define _PIE2_C1IE_SIZE                                     0x1
#define _PIE2_C1IE_LENGTH                                   0x1
#define _PIE2_C1IE_MASK                                     0x20

// Register: PIE3
#define PIE3 PIE3
extern volatile unsigned char           PIE3                __at(0x093);
#ifndef _LIB_BUILD
asm("PIE3 equ 093h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLC1IE                 :1;
        unsigned CLC2IE                 :1;
        unsigned                        :4;
        unsigned CSWIE                  :1;
        unsigned OSFIE                  :1;
    };
} PIE3bits_t;
extern volatile PIE3bits_t PIE3bits __at(0x093);
// bitfield macros
#define _PIE3_CLC1IE_POSN                                   0x0
#define _PIE3_CLC1IE_POSITION                               0x0
#define _PIE3_CLC1IE_SIZE                                   0x1
#define _PIE3_CLC1IE_LENGTH                                 0x1
#define _PIE3_CLC1IE_MASK                                   0x1
#define _PIE3_CLC2IE_POSN                                   0x1
#define _PIE3_CLC2IE_POSITION                               0x1
#define _PIE3_CLC2IE_SIZE                                   0x1
#define _PIE3_CLC2IE_LENGTH                                 0x1
#define _PIE3_CLC2IE_MASK                                   0x2
#define _PIE3_CSWIE_POSN                                    0x6
#define _PIE3_CSWIE_POSITION                                0x6
#define _PIE3_CSWIE_SIZE                                    0x1
#define _PIE3_CSWIE_LENGTH                                  0x1
#define _PIE3_CSWIE_MASK                                    0x40
#define _PIE3_OSFIE_POSN                                    0x7
#define _PIE3_OSFIE_POSITION                                0x7
#define _PIE3_OSFIE_SIZE                                    0x1
#define _PIE3_OSFIE_LENGTH                                  0x1
#define _PIE3_OSFIE_MASK                                    0x80

// Register: PIE4
#define PIE4 PIE4
extern volatile unsigned char           PIE4                __at(0x094);
#ifndef _LIB_BUILD
asm("PIE4 equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1IE                 :1;
        unsigned CCP2IE                 :1;
        unsigned                        :4;
        unsigned CWG1IE                 :1;
    };
} PIE4bits_t;
extern volatile PIE4bits_t PIE4bits __at(0x094);
// bitfield macros
#define _PIE4_CCP1IE_POSN                                   0x0
#define _PIE4_CCP1IE_POSITION                               0x0
#define _PIE4_CCP1IE_SIZE                                   0x1
#define _PIE4_CCP1IE_LENGTH                                 0x1
#define _PIE4_CCP1IE_MASK                                   0x1
#define _PIE4_CCP2IE_POSN                                   0x1
#define _PIE4_CCP2IE_POSITION                               0x1
#define _PIE4_CCP2IE_SIZE                                   0x1
#define _PIE4_CCP2IE_LENGTH                                 0x1
#define _PIE4_CCP2IE_MASK                                   0x2
#define _PIE4_CWG1IE_POSN                                   0x6
#define _PIE4_CWG1IE_POSITION                               0x6
#define _PIE4_CWG1IE_SIZE                                   0x1
#define _PIE4_CWG1IE_LENGTH                                 0x1
#define _PIE4_CWG1IE_MASK                                   0x40

// Register: WDTCON
#define WDTCON WDTCON
extern volatile unsigned char           WDTCON              __at(0x097);
#ifndef _LIB_BUILD
asm("WDTCON equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned WDTPS                  :5;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
        unsigned WDTPS4                 :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __at(0x097);
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x5
#define _WDTCON_WDTPS_LENGTH                                0x5
#define _WDTCON_WDTPS_MASK                                  0x3E
#define _WDTCON_WDTPS0_POSN                                 0x1
#define _WDTCON_WDTPS0_POSITION                             0x1
#define _WDTCON_WDTPS0_SIZE                                 0x1
#define _WDTCON_WDTPS0_LENGTH                               0x1
#define _WDTCON_WDTPS0_MASK                                 0x2
#define _WDTCON_WDTPS1_POSN                                 0x2
#define _WDTCON_WDTPS1_POSITION                             0x2
#define _WDTCON_WDTPS1_SIZE                                 0x1
#define _WDTCON_WDTPS1_LENGTH                               0x1
#define _WDTCON_WDTPS1_MASK                                 0x4
#define _WDTCON_WDTPS2_POSN                                 0x3
#define _WDTCON_WDTPS2_POSITION                             0x3
#define _WDTCON_WDTPS2_SIZE                                 0x1
#define _WDTCON_WDTPS2_LENGTH                               0x1
#define _WDTCON_WDTPS2_MASK                                 0x8
#define _WDTCON_WDTPS3_POSN                                 0x4
#define _WDTCON_WDTPS3_POSITION                             0x4
#define _WDTCON_WDTPS3_SIZE                                 0x1
#define _WDTCON_WDTPS3_LENGTH                               0x1
#define _WDTCON_WDTPS3_MASK                                 0x10
#define _WDTCON_WDTPS4_POSN                                 0x5
#define _WDTCON_WDTPS4_POSITION                             0x5
#define _WDTCON_WDTPS4_SIZE                                 0x1
#define _WDTCON_WDTPS4_LENGTH                               0x1
#define _WDTCON_WDTPS4_MASK                                 0x20

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
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :6;
    };
    struct {
        unsigned                        :1;
        unsigned ADGO                   :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned CHS5                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __at(0x09D);
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
#define _ADCON0_ADGO_POSN                                   0x1
#define _ADCON0_ADGO_POSITION                               0x1
#define _ADCON0_ADGO_SIZE                                   0x1
#define _ADCON0_ADGO_LENGTH                                 0x1
#define _ADCON0_ADGO_MASK                                   0x2
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
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2

// Register: ADCON1
#define ADCON1 ADCON1
extern volatile unsigned char           ADCON1              __at(0x09E);
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPREF                 :2;
        unsigned ADNREF                 :1;
        unsigned                        :1;
        unsigned ADCS                   :3;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADPREF0                :1;
        unsigned ADPREF1                :1;
        unsigned                        :2;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __at(0x09E);
// bitfield macros
#define _ADCON1_ADPREF_POSN                                 0x0
#define _ADCON1_ADPREF_POSITION                             0x0
#define _ADCON1_ADPREF_SIZE                                 0x2
#define _ADCON1_ADPREF_LENGTH                               0x2
#define _ADCON1_ADPREF_MASK                                 0x3
#define _ADCON1_ADNREF_POSN                                 0x2
#define _ADCON1_ADNREF_POSITION                             0x2
#define _ADCON1_ADNREF_SIZE                                 0x1
#define _ADCON1_ADNREF_LENGTH                               0x1
#define _ADCON1_ADNREF_MASK                                 0x4
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
#define _ADCON1_ADPREF0_POSN                                0x0
#define _ADCON1_ADPREF0_POSITION                            0x0
#define _ADCON1_ADPREF0_SIZE                                0x1
#define _ADCON1_ADPREF0_LENGTH                              0x1
#define _ADCON1_ADPREF0_MASK                                0x1
#define _ADCON1_ADPREF1_POSN                                0x1
#define _ADCON1_ADPREF1_POSITION                            0x1
#define _ADCON1_ADPREF1_SIZE                                0x1
#define _ADCON1_ADPREF1_LENGTH                              0x1
#define _ADCON1_ADPREF1_MASK                                0x2
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

// Register: ADACT
#define ADACT ADACT
extern volatile unsigned char           ADACT               __at(0x09F);
#ifndef _LIB_BUILD
asm("ADACT equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADACT                  :4;
    };
    struct {
        unsigned ADACT0                 :1;
        unsigned ADACT1                 :1;
        unsigned ADACT2                 :1;
        unsigned ADACT3                 :1;
    };
} ADACTbits_t;
extern volatile ADACTbits_t ADACTbits __at(0x09F);
// bitfield macros
#define _ADACT_ADACT_POSN                                   0x0
#define _ADACT_ADACT_POSITION                               0x0
#define _ADACT_ADACT_SIZE                                   0x4
#define _ADACT_ADACT_LENGTH                                 0x4
#define _ADACT_ADACT_MASK                                   0xF
#define _ADACT_ADACT0_POSN                                  0x0
#define _ADACT_ADACT0_POSITION                              0x0
#define _ADACT_ADACT0_SIZE                                  0x1
#define _ADACT_ADACT0_LENGTH                                0x1
#define _ADACT_ADACT0_MASK                                  0x1
#define _ADACT_ADACT1_POSN                                  0x1
#define _ADACT_ADACT1_POSITION                              0x1
#define _ADACT_ADACT1_SIZE                                  0x1
#define _ADACT_ADACT1_LENGTH                                0x1
#define _ADACT_ADACT1_MASK                                  0x2
#define _ADACT_ADACT2_POSN                                  0x2
#define _ADACT_ADACT2_POSITION                              0x2
#define _ADACT_ADACT2_SIZE                                  0x1
#define _ADACT_ADACT2_LENGTH                                0x1
#define _ADACT_ADACT2_MASK                                  0x4
#define _ADACT_ADACT3_POSN                                  0x3
#define _ADACT_ADACT3_POSITION                              0x3
#define _ADACT_ADACT3_SIZE                                  0x1
#define _ADACT_ADACT3_LENGTH                                0x1
#define _ADACT_ADACT3_MASK                                  0x8

// Register: LATA
#define LATA LATA
extern volatile unsigned char           LATA                __at(0x10C);
#ifndef _LIB_BUILD
asm("LATA equ 010Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
        unsigned                        :1;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits __at(0x10C);
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

// Register: CM1CON0
#define CM1CON0 CM1CON0
extern volatile unsigned char           CM1CON0             __at(0x111);
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1SYNC                 :1;
        unsigned C1HYS                  :1;
        unsigned C1SP                   :1;
        unsigned                        :1;
        unsigned C1POL                  :1;
        unsigned                        :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits __at(0x111);
// bitfield macros
#define _CM1CON0_C1SYNC_POSN                                0x0
#define _CM1CON0_C1SYNC_POSITION                            0x0
#define _CM1CON0_C1SYNC_SIZE                                0x1
#define _CM1CON0_C1SYNC_LENGTH                              0x1
#define _CM1CON0_C1SYNC_MASK                                0x1
#define _CM1CON0_C1HYS_POSN                                 0x1
#define _CM1CON0_C1HYS_POSITION                             0x1
#define _CM1CON0_C1HYS_SIZE                                 0x1
#define _CM1CON0_C1HYS_LENGTH                               0x1
#define _CM1CON0_C1HYS_MASK                                 0x2
#define _CM1CON0_C1SP_POSN                                  0x2
#define _CM1CON0_C1SP_POSITION                              0x2
#define _CM1CON0_C1SP_SIZE                                  0x1
#define _CM1CON0_C1SP_LENGTH                                0x1
#define _CM1CON0_C1SP_MASK                                  0x4
#define _CM1CON0_C1POL_POSN                                 0x4
#define _CM1CON0_C1POL_POSITION                             0x4
#define _CM1CON0_C1POL_SIZE                                 0x1
#define _CM1CON0_C1POL_LENGTH                               0x1
#define _CM1CON0_C1POL_MASK                                 0x10
#define _CM1CON0_C1OUT_POSN                                 0x6
#define _CM1CON0_C1OUT_POSITION                             0x6
#define _CM1CON0_C1OUT_SIZE                                 0x1
#define _CM1CON0_C1OUT_LENGTH                               0x1
#define _CM1CON0_C1OUT_MASK                                 0x40
#define _CM1CON0_C1ON_POSN                                  0x7
#define _CM1CON0_C1ON_POSITION                              0x7
#define _CM1CON0_C1ON_SIZE                                  0x1
#define _CM1CON0_C1ON_LENGTH                                0x1
#define _CM1CON0_C1ON_MASK                                  0x80

// Register: CM1CON1
#define CM1CON1 CM1CON1
extern volatile unsigned char           CM1CON1             __at(0x112);
#ifndef _LIB_BUILD
asm("CM1CON1 equ 0112h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1NCH                  :3;
        unsigned C1PCH                  :3;
        unsigned C1INTN                 :1;
        unsigned C1INTP                 :1;
    };
    struct {
        unsigned C1NCH0                 :1;
        unsigned C1NCH1                 :1;
        unsigned C1NCH2                 :1;
        unsigned C1PCH0                 :1;
        unsigned C1PCH1                 :1;
        unsigned C1PCH2                 :1;
    };
} CM1CON1bits_t;
extern volatile CM1CON1bits_t CM1CON1bits __at(0x112);
// bitfield macros
#define _CM1CON1_C1NCH_POSN                                 0x0
#define _CM1CON1_C1NCH_POSITION                             0x0
#define _CM1CON1_C1NCH_SIZE                                 0x3
#define _CM1CON1_C1NCH_LENGTH                               0x3
#define _CM1CON1_C1NCH_MASK                                 0x7
#define _CM1CON1_C1PCH_POSN                                 0x3
#define _CM1CON1_C1PCH_POSITION                             0x3
#define _CM1CON1_C1PCH_SIZE                                 0x3
#define _CM1CON1_C1PCH_LENGTH                               0x3
#define _CM1CON1_C1PCH_MASK                                 0x38
#define _CM1CON1_C1INTN_POSN                                0x6
#define _CM1CON1_C1INTN_POSITION                            0x6
#define _CM1CON1_C1INTN_SIZE                                0x1
#define _CM1CON1_C1INTN_LENGTH                              0x1
#define _CM1CON1_C1INTN_MASK                                0x40
#define _CM1CON1_C1INTP_POSN                                0x7
#define _CM1CON1_C1INTP_POSITION                            0x7
#define _CM1CON1_C1INTP_SIZE                                0x1
#define _CM1CON1_C1INTP_LENGTH                              0x1
#define _CM1CON1_C1INTP_MASK                                0x80
#define _CM1CON1_C1NCH0_POSN                                0x0
#define _CM1CON1_C1NCH0_POSITION                            0x0
#define _CM1CON1_C1NCH0_SIZE                                0x1
#define _CM1CON1_C1NCH0_LENGTH                              0x1
#define _CM1CON1_C1NCH0_MASK                                0x1
#define _CM1CON1_C1NCH1_POSN                                0x1
#define _CM1CON1_C1NCH1_POSITION                            0x1
#define _CM1CON1_C1NCH1_SIZE                                0x1
#define _CM1CON1_C1NCH1_LENGTH                              0x1
#define _CM1CON1_C1NCH1_MASK                                0x2
#define _CM1CON1_C1NCH2_POSN                                0x2
#define _CM1CON1_C1NCH2_POSITION                            0x2
#define _CM1CON1_C1NCH2_SIZE                                0x1
#define _CM1CON1_C1NCH2_LENGTH                              0x1
#define _CM1CON1_C1NCH2_MASK                                0x4
#define _CM1CON1_C1PCH0_POSN                                0x3
#define _CM1CON1_C1PCH0_POSITION                            0x3
#define _CM1CON1_C1PCH0_SIZE                                0x1
#define _CM1CON1_C1PCH0_LENGTH                              0x1
#define _CM1CON1_C1PCH0_MASK                                0x8
#define _CM1CON1_C1PCH1_POSN                                0x4
#define _CM1CON1_C1PCH1_POSITION                            0x4
#define _CM1CON1_C1PCH1_SIZE                                0x1
#define _CM1CON1_C1PCH1_LENGTH                              0x1
#define _CM1CON1_C1PCH1_MASK                                0x10
#define _CM1CON1_C1PCH2_POSN                                0x5
#define _CM1CON1_C1PCH2_POSITION                            0x5
#define _CM1CON1_C1PCH2_SIZE                                0x1
#define _CM1CON1_C1PCH2_LENGTH                              0x1
#define _CM1CON1_C1PCH2_MASK                                0x20

// Register: CMOUT
#define CMOUT CMOUT
extern volatile unsigned char           CMOUT               __at(0x115);
#ifndef _LIB_BUILD
asm("CMOUT equ 0115h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MC1OUT                 :1;
    };
} CMOUTbits_t;
extern volatile CMOUTbits_t CMOUTbits __at(0x115);
// bitfield macros
#define _CMOUT_MC1OUT_POSN                                  0x0
#define _CMOUT_MC1OUT_POSITION                              0x0
#define _CMOUT_MC1OUT_SIZE                                  0x1
#define _CMOUT_MC1OUT_LENGTH                                0x1
#define _CMOUT_MC1OUT_MASK                                  0x1

// Register: BORCON
#define BORCON BORCON
extern volatile unsigned char           BORCON              __at(0x116);
#ifndef _LIB_BUILD
asm("BORCON equ 0116h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BORRDY                 :1;
        unsigned                        :6;
        unsigned SBOREN                 :1;
    };
} BORCONbits_t;
extern volatile BORCONbits_t BORCONbits __at(0x116);
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

// Register: FVRCON
#define FVRCON FVRCON
extern volatile unsigned char           FVRCON              __at(0x117);
#ifndef _LIB_BUILD
asm("FVRCON equ 0117h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADFVR                  :2;
        unsigned CDAFVR                 :2;
        unsigned TSRNG                  :1;
        unsigned TSEN                   :1;
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
extern volatile FVRCONbits_t FVRCONbits __at(0x117);
// bitfield macros
#define _FVRCON_ADFVR_POSN                                  0x0
#define _FVRCON_ADFVR_POSITION                              0x0
#define _FVRCON_ADFVR_SIZE                                  0x2
#define _FVRCON_ADFVR_LENGTH                                0x2
#define _FVRCON_ADFVR_MASK                                  0x3
#define _FVRCON_CDAFVR_POSN                                 0x2
#define _FVRCON_CDAFVR_POSITION                             0x2
#define _FVRCON_CDAFVR_SIZE                                 0x2
#define _FVRCON_CDAFVR_LENGTH                               0x2
#define _FVRCON_CDAFVR_MASK                                 0xC
#define _FVRCON_TSRNG_POSN                                  0x4
#define _FVRCON_TSRNG_POSITION                              0x4
#define _FVRCON_TSRNG_SIZE                                  0x1
#define _FVRCON_TSRNG_LENGTH                                0x1
#define _FVRCON_TSRNG_MASK                                  0x10
#define _FVRCON_TSEN_POSN                                   0x5
#define _FVRCON_TSEN_POSITION                               0x5
#define _FVRCON_TSEN_SIZE                                   0x1
#define _FVRCON_TSEN_LENGTH                                 0x1
#define _FVRCON_TSEN_MASK                                   0x20
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

// Register: DACCON0
#define DACCON0 DACCON0
extern volatile unsigned char           DACCON0             __at(0x118);
#ifndef _LIB_BUILD
asm("DACCON0 equ 0118h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAC1NSS                :1;
        unsigned                        :1;
        unsigned DAC1PSS                :2;
        unsigned                        :1;
        unsigned DAC1OE                 :1;
        unsigned                        :1;
        unsigned DAC1EN                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned DAC1PSS0               :1;
        unsigned DAC1PSS1               :1;
    };
} DACCON0bits_t;
extern volatile DACCON0bits_t DACCON0bits __at(0x118);
// bitfield macros
#define _DACCON0_DAC1NSS_POSN                               0x0
#define _DACCON0_DAC1NSS_POSITION                           0x0
#define _DACCON0_DAC1NSS_SIZE                               0x1
#define _DACCON0_DAC1NSS_LENGTH                             0x1
#define _DACCON0_DAC1NSS_MASK                               0x1
#define _DACCON0_DAC1PSS_POSN                               0x2
#define _DACCON0_DAC1PSS_POSITION                           0x2
#define _DACCON0_DAC1PSS_SIZE                               0x2
#define _DACCON0_DAC1PSS_LENGTH                             0x2
#define _DACCON0_DAC1PSS_MASK                               0xC
#define _DACCON0_DAC1OE_POSN                                0x5
#define _DACCON0_DAC1OE_POSITION                            0x5
#define _DACCON0_DAC1OE_SIZE                                0x1
#define _DACCON0_DAC1OE_LENGTH                              0x1
#define _DACCON0_DAC1OE_MASK                                0x20
#define _DACCON0_DAC1EN_POSN                                0x7
#define _DACCON0_DAC1EN_POSITION                            0x7
#define _DACCON0_DAC1EN_SIZE                                0x1
#define _DACCON0_DAC1EN_LENGTH                              0x1
#define _DACCON0_DAC1EN_MASK                                0x80
#define _DACCON0_DAC1PSS0_POSN                              0x2
#define _DACCON0_DAC1PSS0_POSITION                          0x2
#define _DACCON0_DAC1PSS0_SIZE                              0x1
#define _DACCON0_DAC1PSS0_LENGTH                            0x1
#define _DACCON0_DAC1PSS0_MASK                              0x4
#define _DACCON0_DAC1PSS1_POSN                              0x3
#define _DACCON0_DAC1PSS1_POSITION                          0x3
#define _DACCON0_DAC1PSS1_SIZE                              0x1
#define _DACCON0_DAC1PSS1_LENGTH                            0x1
#define _DACCON0_DAC1PSS1_MASK                              0x8

// Register: DACCON1
#define DACCON1 DACCON1
extern volatile unsigned char           DACCON1             __at(0x119);
#ifndef _LIB_BUILD
asm("DACCON1 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAC1R                  :5;
    };
    struct {
        unsigned DAC1R0                 :1;
        unsigned DAC1R1                 :1;
        unsigned DAC1R2                 :1;
        unsigned DAC1R3                 :1;
        unsigned DAC1R4                 :1;
    };
} DACCON1bits_t;
extern volatile DACCON1bits_t DACCON1bits __at(0x119);
// bitfield macros
#define _DACCON1_DAC1R_POSN                                 0x0
#define _DACCON1_DAC1R_POSITION                             0x0
#define _DACCON1_DAC1R_SIZE                                 0x5
#define _DACCON1_DAC1R_LENGTH                               0x5
#define _DACCON1_DAC1R_MASK                                 0x1F
#define _DACCON1_DAC1R0_POSN                                0x0
#define _DACCON1_DAC1R0_POSITION                            0x0
#define _DACCON1_DAC1R0_SIZE                                0x1
#define _DACCON1_DAC1R0_LENGTH                              0x1
#define _DACCON1_DAC1R0_MASK                                0x1
#define _DACCON1_DAC1R1_POSN                                0x1
#define _DACCON1_DAC1R1_POSITION                            0x1
#define _DACCON1_DAC1R1_SIZE                                0x1
#define _DACCON1_DAC1R1_LENGTH                              0x1
#define _DACCON1_DAC1R1_MASK                                0x2
#define _DACCON1_DAC1R2_POSN                                0x2
#define _DACCON1_DAC1R2_POSITION                            0x2
#define _DACCON1_DAC1R2_SIZE                                0x1
#define _DACCON1_DAC1R2_LENGTH                              0x1
#define _DACCON1_DAC1R2_MASK                                0x4
#define _DACCON1_DAC1R3_POSN                                0x3
#define _DACCON1_DAC1R3_POSITION                            0x3
#define _DACCON1_DAC1R3_SIZE                                0x1
#define _DACCON1_DAC1R3_LENGTH                              0x1
#define _DACCON1_DAC1R3_MASK                                0x8
#define _DACCON1_DAC1R4_POSN                                0x4
#define _DACCON1_DAC1R4_POSITION                            0x4
#define _DACCON1_DAC1R4_SIZE                                0x1
#define _DACCON1_DAC1R4_LENGTH                              0x1
#define _DACCON1_DAC1R4_MASK                                0x10

// Register: ANSELA
#define ANSELA ANSELA
extern volatile unsigned char           ANSELA              __at(0x18C);
#ifndef _LIB_BUILD
asm("ANSELA equ 018Ch");
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
extern volatile ANSELAbits_t ANSELAbits __at(0x18C);
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

// Register: VREGCON
#define VREGCON VREGCON
extern volatile unsigned char           VREGCON             __at(0x197);
#ifndef _LIB_BUILD
asm("VREGCON equ 0197h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned VREGPM                 :1;
    };
} VREGCONbits_t;
extern volatile VREGCONbits_t VREGCONbits __at(0x197);
// bitfield macros
#define _VREGCON_VREGPM_POSN                                0x1
#define _VREGCON_VREGPM_POSITION                            0x1
#define _VREGCON_VREGPM_SIZE                                0x1
#define _VREGCON_VREGPM_LENGTH                              0x1
#define _VREGCON_VREGPM_MASK                                0x2

// Register: RC1REG
#define RC1REG RC1REG
extern volatile unsigned char           RC1REG              __at(0x199);
#ifndef _LIB_BUILD
asm("RC1REG equ 0199h");
#endif
// aliases
extern volatile unsigned char           RCREG               __at(0x199);
#ifndef _LIB_BUILD
asm("RCREG equ 0199h");
#endif
extern volatile unsigned char           RCREG1              __at(0x199);
#ifndef _LIB_BUILD
asm("RCREG1 equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RC1REGbits_t;
extern volatile RC1REGbits_t RC1REGbits __at(0x199);
// bitfield macros
#define _RC1REG_RC1REG_POSN                                 0x0
#define _RC1REG_RC1REG_POSITION                             0x0
#define _RC1REG_RC1REG_SIZE                                 0x8
#define _RC1REG_RC1REG_LENGTH                               0x8
#define _RC1REG_RC1REG_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RCREGbits_t;
extern volatile RCREGbits_t RCREGbits __at(0x199);
// bitfield macros
#define _RCREG_RC1REG_POSN                                  0x0
#define _RCREG_RC1REG_POSITION                              0x0
#define _RCREG_RC1REG_SIZE                                  0x8
#define _RCREG_RC1REG_LENGTH                                0x8
#define _RCREG_RC1REG_MASK                                  0xFF
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RCREG1bits_t;
extern volatile RCREG1bits_t RCREG1bits __at(0x199);
// bitfield macros
#define _RCREG1_RC1REG_POSN                                 0x0
#define _RCREG1_RC1REG_POSITION                             0x0
#define _RCREG1_RC1REG_SIZE                                 0x8
#define _RCREG1_RC1REG_LENGTH                               0x8
#define _RCREG1_RC1REG_MASK                                 0xFF

// Register: TX1REG
#define TX1REG TX1REG
extern volatile unsigned char           TX1REG              __at(0x19A);
#ifndef _LIB_BUILD
asm("TX1REG equ 019Ah");
#endif
// aliases
extern volatile unsigned char           TXREG1              __at(0x19A);
#ifndef _LIB_BUILD
asm("TXREG1 equ 019Ah");
#endif
extern volatile unsigned char           TXREG               __at(0x19A);
#ifndef _LIB_BUILD
asm("TXREG equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TX1REGbits_t;
extern volatile TX1REGbits_t TX1REGbits __at(0x19A);
// bitfield macros
#define _TX1REG_TX1REG_POSN                                 0x0
#define _TX1REG_TX1REG_POSITION                             0x0
#define _TX1REG_TX1REG_SIZE                                 0x8
#define _TX1REG_TX1REG_LENGTH                               0x8
#define _TX1REG_TX1REG_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TXREG1bits_t;
extern volatile TXREG1bits_t TXREG1bits __at(0x19A);
// bitfield macros
#define _TXREG1_TX1REG_POSN                                 0x0
#define _TXREG1_TX1REG_POSITION                             0x0
#define _TXREG1_TX1REG_SIZE                                 0x8
#define _TXREG1_TX1REG_LENGTH                               0x8
#define _TXREG1_TX1REG_MASK                                 0xFF
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TXREGbits_t;
extern volatile TXREGbits_t TXREGbits __at(0x19A);
// bitfield macros
#define _TXREG_TX1REG_POSN                                  0x0
#define _TXREG_TX1REG_POSITION                              0x0
#define _TXREG_TX1REG_SIZE                                  0x8
#define _TXREG_TX1REG_LENGTH                                0x8
#define _TXREG_TX1REG_MASK                                  0xFF

// Register: SP1BRG
#define SP1BRG SP1BRG
extern volatile unsigned short          SP1BRG              __at(0x19B);
#ifndef _LIB_BUILD
asm("SP1BRG equ 019Bh");
#endif

// Register: SP1BRGL
#define SP1BRGL SP1BRGL
extern volatile unsigned char           SP1BRGL             __at(0x19B);
#ifndef _LIB_BUILD
asm("SP1BRGL equ 019Bh");
#endif
// aliases
extern volatile unsigned char           SPBRG               __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRG equ 019Bh");
#endif
extern volatile unsigned char           SPBRG1              __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRG1 equ 019Bh");
#endif
extern volatile unsigned char           SPBRGL              __at(0x19B);
#ifndef _LIB_BUILD
asm("SPBRGL equ 019Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SP1BRGLbits_t;
extern volatile SP1BRGLbits_t SP1BRGLbits __at(0x19B);
// bitfield macros
#define _SP1BRGL_SP1BRGL_POSN                               0x0
#define _SP1BRGL_SP1BRGL_POSITION                           0x0
#define _SP1BRGL_SP1BRGL_SIZE                               0x8
#define _SP1BRGL_SP1BRGL_LENGTH                             0x8
#define _SP1BRGL_SP1BRGL_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRGbits_t;
extern volatile SPBRGbits_t SPBRGbits __at(0x19B);
// bitfield macros
#define _SPBRG_SP1BRGL_POSN                                 0x0
#define _SPBRG_SP1BRGL_POSITION                             0x0
#define _SPBRG_SP1BRGL_SIZE                                 0x8
#define _SPBRG_SP1BRGL_LENGTH                               0x8
#define _SPBRG_SP1BRGL_MASK                                 0xFF
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRG1bits_t;
extern volatile SPBRG1bits_t SPBRG1bits __at(0x19B);
// bitfield macros
#define _SPBRG1_SP1BRGL_POSN                                0x0
#define _SPBRG1_SP1BRGL_POSITION                            0x0
#define _SPBRG1_SP1BRGL_SIZE                                0x8
#define _SPBRG1_SP1BRGL_LENGTH                              0x8
#define _SPBRG1_SP1BRGL_MASK                                0xFF
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRGLbits_t;
extern volatile SPBRGLbits_t SPBRGLbits __at(0x19B);
// bitfield macros
#define _SPBRGL_SP1BRGL_POSN                                0x0
#define _SPBRGL_SP1BRGL_POSITION                            0x0
#define _SPBRGL_SP1BRGL_SIZE                                0x8
#define _SPBRGL_SP1BRGL_LENGTH                              0x8
#define _SPBRGL_SP1BRGL_MASK                                0xFF

// Register: SP1BRGH
#define SP1BRGH SP1BRGH
extern volatile unsigned char           SP1BRGH             __at(0x19C);
#ifndef _LIB_BUILD
asm("SP1BRGH equ 019Ch");
#endif
// aliases
extern volatile unsigned char           SPBRGH              __at(0x19C);
#ifndef _LIB_BUILD
asm("SPBRGH equ 019Ch");
#endif
extern volatile unsigned char           SPBRGH1             __at(0x19C);
#ifndef _LIB_BUILD
asm("SPBRGH1 equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SP1BRGHbits_t;
extern volatile SP1BRGHbits_t SP1BRGHbits __at(0x19C);
// bitfield macros
#define _SP1BRGH_SP1BRGH_POSN                               0x0
#define _SP1BRGH_SP1BRGH_POSITION                           0x0
#define _SP1BRGH_SP1BRGH_SIZE                               0x8
#define _SP1BRGH_SP1BRGH_LENGTH                             0x8
#define _SP1BRGH_SP1BRGH_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SPBRGHbits_t;
extern volatile SPBRGHbits_t SPBRGHbits __at(0x19C);
// bitfield macros
#define _SPBRGH_SP1BRGH_POSN                                0x0
#define _SPBRGH_SP1BRGH_POSITION                            0x0
#define _SPBRGH_SP1BRGH_SIZE                                0x8
#define _SPBRGH_SP1BRGH_LENGTH                              0x8
#define _SPBRGH_SP1BRGH_MASK                                0xFF
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SPBRGH1bits_t;
extern volatile SPBRGH1bits_t SPBRGH1bits __at(0x19C);
// bitfield macros
#define _SPBRGH1_SP1BRGH_POSN                               0x0
#define _SPBRGH1_SP1BRGH_POSITION                           0x0
#define _SPBRGH1_SP1BRGH_SIZE                               0x8
#define _SPBRGH1_SP1BRGH_LENGTH                             0x8
#define _SPBRGH1_SP1BRGH_MASK                               0xFF

// Register: RC1STA
#define RC1STA RC1STA
extern volatile unsigned char           RC1STA              __at(0x19D);
#ifndef _LIB_BUILD
asm("RC1STA equ 019Dh");
#endif
// aliases
extern volatile unsigned char           RCSTA1              __at(0x19D);
#ifndef _LIB_BUILD
asm("RCSTA1 equ 019Dh");
#endif
extern volatile unsigned char           RCSTA               __at(0x19D);
#ifndef _LIB_BUILD
asm("RCSTA equ 019Dh");
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
extern volatile RC1STAbits_t RC1STAbits __at(0x19D);
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
// alias bitfield definitions
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
} RCSTA1bits_t;
extern volatile RCSTA1bits_t RCSTA1bits __at(0x19D);
// bitfield macros
#define _RCSTA1_RX9D_POSN                                   0x0
#define _RCSTA1_RX9D_POSITION                               0x0
#define _RCSTA1_RX9D_SIZE                                   0x1
#define _RCSTA1_RX9D_LENGTH                                 0x1
#define _RCSTA1_RX9D_MASK                                   0x1
#define _RCSTA1_OERR_POSN                                   0x1
#define _RCSTA1_OERR_POSITION                               0x1
#define _RCSTA1_OERR_SIZE                                   0x1
#define _RCSTA1_OERR_LENGTH                                 0x1
#define _RCSTA1_OERR_MASK                                   0x2
#define _RCSTA1_FERR_POSN                                   0x2
#define _RCSTA1_FERR_POSITION                               0x2
#define _RCSTA1_FERR_SIZE                                   0x1
#define _RCSTA1_FERR_LENGTH                                 0x1
#define _RCSTA1_FERR_MASK                                   0x4
#define _RCSTA1_ADDEN_POSN                                  0x3
#define _RCSTA1_ADDEN_POSITION                              0x3
#define _RCSTA1_ADDEN_SIZE                                  0x1
#define _RCSTA1_ADDEN_LENGTH                                0x1
#define _RCSTA1_ADDEN_MASK                                  0x8
#define _RCSTA1_CREN_POSN                                   0x4
#define _RCSTA1_CREN_POSITION                               0x4
#define _RCSTA1_CREN_SIZE                                   0x1
#define _RCSTA1_CREN_LENGTH                                 0x1
#define _RCSTA1_CREN_MASK                                   0x10
#define _RCSTA1_SREN_POSN                                   0x5
#define _RCSTA1_SREN_POSITION                               0x5
#define _RCSTA1_SREN_SIZE                                   0x1
#define _RCSTA1_SREN_LENGTH                                 0x1
#define _RCSTA1_SREN_MASK                                   0x20
#define _RCSTA1_RX9_POSN                                    0x6
#define _RCSTA1_RX9_POSITION                                0x6
#define _RCSTA1_RX9_SIZE                                    0x1
#define _RCSTA1_RX9_LENGTH                                  0x1
#define _RCSTA1_RX9_MASK                                    0x40
#define _RCSTA1_SPEN_POSN                                   0x7
#define _RCSTA1_SPEN_POSITION                               0x7
#define _RCSTA1_SPEN_SIZE                                   0x1
#define _RCSTA1_SPEN_LENGTH                                 0x1
#define _RCSTA1_SPEN_MASK                                   0x80
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
extern volatile RCSTAbits_t RCSTAbits __at(0x19D);
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

// Register: TX1STA
#define TX1STA TX1STA
extern volatile unsigned char           TX1STA              __at(0x19E);
#ifndef _LIB_BUILD
asm("TX1STA equ 019Eh");
#endif
// aliases
extern volatile unsigned char           TXSTA1              __at(0x19E);
#ifndef _LIB_BUILD
asm("TXSTA1 equ 019Eh");
#endif
extern volatile unsigned char           TXSTA               __at(0x19E);
#ifndef _LIB_BUILD
asm("TXSTA equ 019Eh");
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
extern volatile TX1STAbits_t TX1STAbits __at(0x19E);
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
// alias bitfield definitions
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
} TXSTA1bits_t;
extern volatile TXSTA1bits_t TXSTA1bits __at(0x19E);
// bitfield macros
#define _TXSTA1_TX9D_POSN                                   0x0
#define _TXSTA1_TX9D_POSITION                               0x0
#define _TXSTA1_TX9D_SIZE                                   0x1
#define _TXSTA1_TX9D_LENGTH                                 0x1
#define _TXSTA1_TX9D_MASK                                   0x1
#define _TXSTA1_TRMT_POSN                                   0x1
#define _TXSTA1_TRMT_POSITION                               0x1
#define _TXSTA1_TRMT_SIZE                                   0x1
#define _TXSTA1_TRMT_LENGTH                                 0x1
#define _TXSTA1_TRMT_MASK                                   0x2
#define _TXSTA1_BRGH_POSN                                   0x2
#define _TXSTA1_BRGH_POSITION                               0x2
#define _TXSTA1_BRGH_SIZE                                   0x1
#define _TXSTA1_BRGH_LENGTH                                 0x1
#define _TXSTA1_BRGH_MASK                                   0x4
#define _TXSTA1_SENDB_POSN                                  0x3
#define _TXSTA1_SENDB_POSITION                              0x3
#define _TXSTA1_SENDB_SIZE                                  0x1
#define _TXSTA1_SENDB_LENGTH                                0x1
#define _TXSTA1_SENDB_MASK                                  0x8
#define _TXSTA1_SYNC_POSN                                   0x4
#define _TXSTA1_SYNC_POSITION                               0x4
#define _TXSTA1_SYNC_SIZE                                   0x1
#define _TXSTA1_SYNC_LENGTH                                 0x1
#define _TXSTA1_SYNC_MASK                                   0x10
#define _TXSTA1_TXEN_POSN                                   0x5
#define _TXSTA1_TXEN_POSITION                               0x5
#define _TXSTA1_TXEN_SIZE                                   0x1
#define _TXSTA1_TXEN_LENGTH                                 0x1
#define _TXSTA1_TXEN_MASK                                   0x20
#define _TXSTA1_TX9_POSN                                    0x6
#define _TXSTA1_TX9_POSITION                                0x6
#define _TXSTA1_TX9_SIZE                                    0x1
#define _TXSTA1_TX9_LENGTH                                  0x1
#define _TXSTA1_TX9_MASK                                    0x40
#define _TXSTA1_CSRC_POSN                                   0x7
#define _TXSTA1_CSRC_POSITION                               0x7
#define _TXSTA1_CSRC_SIZE                                   0x1
#define _TXSTA1_CSRC_LENGTH                                 0x1
#define _TXSTA1_CSRC_MASK                                   0x80
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
extern volatile TXSTAbits_t TXSTAbits __at(0x19E);
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

// Register: BAUD1CON
#define BAUD1CON BAUD1CON
extern volatile unsigned char           BAUD1CON            __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUD1CON equ 019Fh");
#endif
// aliases
extern volatile unsigned char           BAUDCON1            __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCON1 equ 019Fh");
#endif
extern volatile unsigned char           BAUDCTL1            __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCTL1 equ 019Fh");
#endif
extern volatile unsigned char           BAUDCON             __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCON equ 019Fh");
#endif
extern volatile unsigned char           BAUDCTL             __at(0x19F);
#ifndef _LIB_BUILD
asm("BAUDCTL equ 019Fh");
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
extern volatile BAUD1CONbits_t BAUD1CONbits __at(0x19F);
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
// alias bitfield definitions
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
} BAUDCON1bits_t;
extern volatile BAUDCON1bits_t BAUDCON1bits __at(0x19F);
// bitfield macros
#define _BAUDCON1_ABDEN_POSN                                0x0
#define _BAUDCON1_ABDEN_POSITION                            0x0
#define _BAUDCON1_ABDEN_SIZE                                0x1
#define _BAUDCON1_ABDEN_LENGTH                              0x1
#define _BAUDCON1_ABDEN_MASK                                0x1
#define _BAUDCON1_WUE_POSN                                  0x1
#define _BAUDCON1_WUE_POSITION                              0x1
#define _BAUDCON1_WUE_SIZE                                  0x1
#define _BAUDCON1_WUE_LENGTH                                0x1
#define _BAUDCON1_WUE_MASK                                  0x2
#define _BAUDCON1_BRG16_POSN                                0x3
#define _BAUDCON1_BRG16_POSITION                            0x3
#define _BAUDCON1_BRG16_SIZE                                0x1
#define _BAUDCON1_BRG16_LENGTH                              0x1
#define _BAUDCON1_BRG16_MASK                                0x8
#define _BAUDCON1_SCKP_POSN                                 0x4
#define _BAUDCON1_SCKP_POSITION                             0x4
#define _BAUDCON1_SCKP_SIZE                                 0x1
#define _BAUDCON1_SCKP_LENGTH                               0x1
#define _BAUDCON1_SCKP_MASK                                 0x10
#define _BAUDCON1_RCIDL_POSN                                0x6
#define _BAUDCON1_RCIDL_POSITION                            0x6
#define _BAUDCON1_RCIDL_SIZE                                0x1
#define _BAUDCON1_RCIDL_LENGTH                              0x1
#define _BAUDCON1_RCIDL_MASK                                0x40
#define _BAUDCON1_ABDOVF_POSN                               0x7
#define _BAUDCON1_ABDOVF_POSITION                           0x7
#define _BAUDCON1_ABDOVF_SIZE                               0x1
#define _BAUDCON1_ABDOVF_LENGTH                             0x1
#define _BAUDCON1_ABDOVF_MASK                               0x80
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
} BAUDCTL1bits_t;
extern volatile BAUDCTL1bits_t BAUDCTL1bits __at(0x19F);
// bitfield macros
#define _BAUDCTL1_ABDEN_POSN                                0x0
#define _BAUDCTL1_ABDEN_POSITION                            0x0
#define _BAUDCTL1_ABDEN_SIZE                                0x1
#define _BAUDCTL1_ABDEN_LENGTH                              0x1
#define _BAUDCTL1_ABDEN_MASK                                0x1
#define _BAUDCTL1_WUE_POSN                                  0x1
#define _BAUDCTL1_WUE_POSITION                              0x1
#define _BAUDCTL1_WUE_SIZE                                  0x1
#define _BAUDCTL1_WUE_LENGTH                                0x1
#define _BAUDCTL1_WUE_MASK                                  0x2
#define _BAUDCTL1_BRG16_POSN                                0x3
#define _BAUDCTL1_BRG16_POSITION                            0x3
#define _BAUDCTL1_BRG16_SIZE                                0x1
#define _BAUDCTL1_BRG16_LENGTH                              0x1
#define _BAUDCTL1_BRG16_MASK                                0x8
#define _BAUDCTL1_SCKP_POSN                                 0x4
#define _BAUDCTL1_SCKP_POSITION                             0x4
#define _BAUDCTL1_SCKP_SIZE                                 0x1
#define _BAUDCTL1_SCKP_LENGTH                               0x1
#define _BAUDCTL1_SCKP_MASK                                 0x10
#define _BAUDCTL1_RCIDL_POSN                                0x6
#define _BAUDCTL1_RCIDL_POSITION                            0x6
#define _BAUDCTL1_RCIDL_SIZE                                0x1
#define _BAUDCTL1_RCIDL_LENGTH                              0x1
#define _BAUDCTL1_RCIDL_MASK                                0x40
#define _BAUDCTL1_ABDOVF_POSN                               0x7
#define _BAUDCTL1_ABDOVF_POSITION                           0x7
#define _BAUDCTL1_ABDOVF_SIZE                               0x1
#define _BAUDCTL1_ABDOVF_LENGTH                             0x1
#define _BAUDCTL1_ABDOVF_MASK                               0x80
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
extern volatile BAUDCONbits_t BAUDCONbits __at(0x19F);
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
} BAUDCTLbits_t;
extern volatile BAUDCTLbits_t BAUDCTLbits __at(0x19F);
// bitfield macros
#define _BAUDCTL_ABDEN_POSN                                 0x0
#define _BAUDCTL_ABDEN_POSITION                             0x0
#define _BAUDCTL_ABDEN_SIZE                                 0x1
#define _BAUDCTL_ABDEN_LENGTH                               0x1
#define _BAUDCTL_ABDEN_MASK                                 0x1
#define _BAUDCTL_WUE_POSN                                   0x1
#define _BAUDCTL_WUE_POSITION                               0x1
#define _BAUDCTL_WUE_SIZE                                   0x1
#define _BAUDCTL_WUE_LENGTH                                 0x1
#define _BAUDCTL_WUE_MASK                                   0x2
#define _BAUDCTL_BRG16_POSN                                 0x3
#define _BAUDCTL_BRG16_POSITION                             0x3
#define _BAUDCTL_BRG16_SIZE                                 0x1
#define _BAUDCTL_BRG16_LENGTH                               0x1
#define _BAUDCTL_BRG16_MASK                                 0x8
#define _BAUDCTL_SCKP_POSN                                  0x4
#define _BAUDCTL_SCKP_POSITION                              0x4
#define _BAUDCTL_SCKP_SIZE                                  0x1
#define _BAUDCTL_SCKP_LENGTH                                0x1
#define _BAUDCTL_SCKP_MASK                                  0x10
#define _BAUDCTL_RCIDL_POSN                                 0x6
#define _BAUDCTL_RCIDL_POSITION                             0x6
#define _BAUDCTL_RCIDL_SIZE                                 0x1
#define _BAUDCTL_RCIDL_LENGTH                               0x1
#define _BAUDCTL_RCIDL_MASK                                 0x40
#define _BAUDCTL_ABDOVF_POSN                                0x7
#define _BAUDCTL_ABDOVF_POSITION                            0x7
#define _BAUDCTL_ABDOVF_SIZE                                0x1
#define _BAUDCTL_ABDOVF_LENGTH                              0x1
#define _BAUDCTL_ABDOVF_MASK                                0x80

// Register: WPUA
#define WPUA WPUA
extern volatile unsigned char           WPUA                __at(0x20C);
#ifndef _LIB_BUILD
asm("WPUA equ 020Ch");
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
extern volatile WPUAbits_t WPUAbits __at(0x20C);
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

// Register: SSP1BUF
#define SSP1BUF SSP1BUF
extern volatile unsigned char           SSP1BUF             __at(0x211);
#ifndef _LIB_BUILD
asm("SSP1BUF equ 0211h");
#endif
// aliases
extern volatile unsigned char           SSPBUF              __at(0x211);
#ifndef _LIB_BUILD
asm("SSPBUF equ 0211h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP1BUF0               :1;
        unsigned SSP1BUF1               :1;
        unsigned SSP1BUF2               :1;
        unsigned SSP1BUF3               :1;
        unsigned SSP1BUF4               :1;
        unsigned SSP1BUF5               :1;
        unsigned SSP1BUF6               :1;
        unsigned SSP1BUF7               :1;
    };
    struct {
        unsigned BUF                    :8;
    };
    struct {
        unsigned BUF0                   :1;
        unsigned BUF1                   :1;
        unsigned BUF2                   :1;
        unsigned BUF3                   :1;
        unsigned BUF4                   :1;
        unsigned BUF5                   :1;
        unsigned BUF6                   :1;
        unsigned BUF7                   :1;
    };
    struct {
        unsigned SSP1BUF                :8;
    };
} SSP1BUFbits_t;
extern volatile SSP1BUFbits_t SSP1BUFbits __at(0x211);
// bitfield macros
#define _SSP1BUF_SSP1BUF0_POSN                              0x0
#define _SSP1BUF_SSP1BUF0_POSITION                          0x0
#define _SSP1BUF_SSP1BUF0_SIZE                              0x1
#define _SSP1BUF_SSP1BUF0_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF0_MASK                              0x1
#define _SSP1BUF_SSP1BUF1_POSN                              0x1
#define _SSP1BUF_SSP1BUF1_POSITION                          0x1
#define _SSP1BUF_SSP1BUF1_SIZE                              0x1
#define _SSP1BUF_SSP1BUF1_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF1_MASK                              0x2
#define _SSP1BUF_SSP1BUF2_POSN                              0x2
#define _SSP1BUF_SSP1BUF2_POSITION                          0x2
#define _SSP1BUF_SSP1BUF2_SIZE                              0x1
#define _SSP1BUF_SSP1BUF2_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF2_MASK                              0x4
#define _SSP1BUF_SSP1BUF3_POSN                              0x3
#define _SSP1BUF_SSP1BUF3_POSITION                          0x3
#define _SSP1BUF_SSP1BUF3_SIZE                              0x1
#define _SSP1BUF_SSP1BUF3_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF3_MASK                              0x8
#define _SSP1BUF_SSP1BUF4_POSN                              0x4
#define _SSP1BUF_SSP1BUF4_POSITION                          0x4
#define _SSP1BUF_SSP1BUF4_SIZE                              0x1
#define _SSP1BUF_SSP1BUF4_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF4_MASK                              0x10
#define _SSP1BUF_SSP1BUF5_POSN                              0x5
#define _SSP1BUF_SSP1BUF5_POSITION                          0x5
#define _SSP1BUF_SSP1BUF5_SIZE                              0x1
#define _SSP1BUF_SSP1BUF5_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF5_MASK                              0x20
#define _SSP1BUF_SSP1BUF6_POSN                              0x6
#define _SSP1BUF_SSP1BUF6_POSITION                          0x6
#define _SSP1BUF_SSP1BUF6_SIZE                              0x1
#define _SSP1BUF_SSP1BUF6_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF6_MASK                              0x40
#define _SSP1BUF_SSP1BUF7_POSN                              0x7
#define _SSP1BUF_SSP1BUF7_POSITION                          0x7
#define _SSP1BUF_SSP1BUF7_SIZE                              0x1
#define _SSP1BUF_SSP1BUF7_LENGTH                            0x1
#define _SSP1BUF_SSP1BUF7_MASK                              0x80
#define _SSP1BUF_BUF_POSN                                   0x0
#define _SSP1BUF_BUF_POSITION                               0x0
#define _SSP1BUF_BUF_SIZE                                   0x8
#define _SSP1BUF_BUF_LENGTH                                 0x8
#define _SSP1BUF_BUF_MASK                                   0xFF
#define _SSP1BUF_BUF0_POSN                                  0x0
#define _SSP1BUF_BUF0_POSITION                              0x0
#define _SSP1BUF_BUF0_SIZE                                  0x1
#define _SSP1BUF_BUF0_LENGTH                                0x1
#define _SSP1BUF_BUF0_MASK                                  0x1
#define _SSP1BUF_BUF1_POSN                                  0x1
#define _SSP1BUF_BUF1_POSITION                              0x1
#define _SSP1BUF_BUF1_SIZE                                  0x1
#define _SSP1BUF_BUF1_LENGTH                                0x1
#define _SSP1BUF_BUF1_MASK                                  0x2
#define _SSP1BUF_BUF2_POSN                                  0x2
#define _SSP1BUF_BUF2_POSITION                              0x2
#define _SSP1BUF_BUF2_SIZE                                  0x1
#define _SSP1BUF_BUF2_LENGTH                                0x1
#define _SSP1BUF_BUF2_MASK                                  0x4
#define _SSP1BUF_BUF3_POSN                                  0x3
#define _SSP1BUF_BUF3_POSITION                              0x3
#define _SSP1BUF_BUF3_SIZE                                  0x1
#define _SSP1BUF_BUF3_LENGTH                                0x1
#define _SSP1BUF_BUF3_MASK                                  0x8
#define _SSP1BUF_BUF4_POSN                                  0x4
#define _SSP1BUF_BUF4_POSITION                              0x4
#define _SSP1BUF_BUF4_SIZE                                  0x1
#define _SSP1BUF_BUF4_LENGTH                                0x1
#define _SSP1BUF_BUF4_MASK                                  0x10
#define _SSP1BUF_BUF5_POSN                                  0x5
#define _SSP1BUF_BUF5_POSITION                              0x5
#define _SSP1BUF_BUF5_SIZE                                  0x1
#define _SSP1BUF_BUF5_LENGTH                                0x1
#define _SSP1BUF_BUF5_MASK                                  0x20
#define _SSP1BUF_BUF6_POSN                                  0x6
#define _SSP1BUF_BUF6_POSITION                              0x6
#define _SSP1BUF_BUF6_SIZE                                  0x1
#define _SSP1BUF_BUF6_LENGTH                                0x1
#define _SSP1BUF_BUF6_MASK                                  0x40
#define _SSP1BUF_BUF7_POSN                                  0x7
#define _SSP1BUF_BUF7_POSITION                              0x7
#define _SSP1BUF_BUF7_SIZE                                  0x1
#define _SSP1BUF_BUF7_LENGTH                                0x1
#define _SSP1BUF_BUF7_MASK                                  0x80
#define _SSP1BUF_SSP1BUF_POSN                               0x0
#define _SSP1BUF_SSP1BUF_POSITION                           0x0
#define _SSP1BUF_SSP1BUF_SIZE                               0x8
#define _SSP1BUF_SSP1BUF_LENGTH                             0x8
#define _SSP1BUF_SSP1BUF_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1BUF0               :1;
        unsigned SSP1BUF1               :1;
        unsigned SSP1BUF2               :1;
        unsigned SSP1BUF3               :1;
        unsigned SSP1BUF4               :1;
        unsigned SSP1BUF5               :1;
        unsigned SSP1BUF6               :1;
        unsigned SSP1BUF7               :1;
    };
    struct {
        unsigned BUF                    :8;
    };
    struct {
        unsigned BUF0                   :1;
        unsigned BUF1                   :1;
        unsigned BUF2                   :1;
        unsigned BUF3                   :1;
        unsigned BUF4                   :1;
        unsigned BUF5                   :1;
        unsigned BUF6                   :1;
        unsigned BUF7                   :1;
    };
    struct {
        unsigned SSP1BUF                :8;
    };
} SSPBUFbits_t;
extern volatile SSPBUFbits_t SSPBUFbits __at(0x211);
// bitfield macros
#define _SSPBUF_SSP1BUF0_POSN                               0x0
#define _SSPBUF_SSP1BUF0_POSITION                           0x0
#define _SSPBUF_SSP1BUF0_SIZE                               0x1
#define _SSPBUF_SSP1BUF0_LENGTH                             0x1
#define _SSPBUF_SSP1BUF0_MASK                               0x1
#define _SSPBUF_SSP1BUF1_POSN                               0x1
#define _SSPBUF_SSP1BUF1_POSITION                           0x1
#define _SSPBUF_SSP1BUF1_SIZE                               0x1
#define _SSPBUF_SSP1BUF1_LENGTH                             0x1
#define _SSPBUF_SSP1BUF1_MASK                               0x2
#define _SSPBUF_SSP1BUF2_POSN                               0x2
#define _SSPBUF_SSP1BUF2_POSITION                           0x2
#define _SSPBUF_SSP1BUF2_SIZE                               0x1
#define _SSPBUF_SSP1BUF2_LENGTH                             0x1
#define _SSPBUF_SSP1BUF2_MASK                               0x4
#define _SSPBUF_SSP1BUF3_POSN                               0x3
#define _SSPBUF_SSP1BUF3_POSITION                           0x3
#define _SSPBUF_SSP1BUF3_SIZE                               0x1
#define _SSPBUF_SSP1BUF3_LENGTH                             0x1
#define _SSPBUF_SSP1BUF3_MASK                               0x8
#define _SSPBUF_SSP1BUF4_POSN                               0x4
#define _SSPBUF_SSP1BUF4_POSITION                           0x4
#define _SSPBUF_SSP1BUF4_SIZE                               0x1
#define _SSPBUF_SSP1BUF4_LENGTH                             0x1
#define _SSPBUF_SSP1BUF4_MASK                               0x10
#define _SSPBUF_SSP1BUF5_POSN                               0x5
#define _SSPBUF_SSP1BUF5_POSITION                           0x5
#define _SSPBUF_SSP1BUF5_SIZE                               0x1
#define _SSPBUF_SSP1BUF5_LENGTH                             0x1
#define _SSPBUF_SSP1BUF5_MASK                               0x20
#define _SSPBUF_SSP1BUF6_POSN                               0x6
#define _SSPBUF_SSP1BUF6_POSITION                           0x6
#define _SSPBUF_SSP1BUF6_SIZE                               0x1
#define _SSPBUF_SSP1BUF6_LENGTH                             0x1
#define _SSPBUF_SSP1BUF6_MASK                               0x40
#define _SSPBUF_SSP1BUF7_POSN                               0x7
#define _SSPBUF_SSP1BUF7_POSITION                           0x7
#define _SSPBUF_SSP1BUF7_SIZE                               0x1
#define _SSPBUF_SSP1BUF7_LENGTH                             0x1
#define _SSPBUF_SSP1BUF7_MASK                               0x80
#define _SSPBUF_BUF_POSN                                    0x0
#define _SSPBUF_BUF_POSITION                                0x0
#define _SSPBUF_BUF_SIZE                                    0x8
#define _SSPBUF_BUF_LENGTH                                  0x8
#define _SSPBUF_BUF_MASK                                    0xFF
#define _SSPBUF_BUF0_POSN                                   0x0
#define _SSPBUF_BUF0_POSITION                               0x0
#define _SSPBUF_BUF0_SIZE                                   0x1
#define _SSPBUF_BUF0_LENGTH                                 0x1
#define _SSPBUF_BUF0_MASK                                   0x1
#define _SSPBUF_BUF1_POSN                                   0x1
#define _SSPBUF_BUF1_POSITION                               0x1
#define _SSPBUF_BUF1_SIZE                                   0x1
#define _SSPBUF_BUF1_LENGTH                                 0x1
#define _SSPBUF_BUF1_MASK                                   0x2
#define _SSPBUF_BUF2_POSN                                   0x2
#define _SSPBUF_BUF2_POSITION                               0x2
#define _SSPBUF_BUF2_SIZE                                   0x1
#define _SSPBUF_BUF2_LENGTH                                 0x1
#define _SSPBUF_BUF2_MASK                                   0x4
#define _SSPBUF_BUF3_POSN                                   0x3
#define _SSPBUF_BUF3_POSITION                               0x3
#define _SSPBUF_BUF3_SIZE                                   0x1
#define _SSPBUF_BUF3_LENGTH                                 0x1
#define _SSPBUF_BUF3_MASK                                   0x8
#define _SSPBUF_BUF4_POSN                                   0x4
#define _SSPBUF_BUF4_POSITION                               0x4
#define _SSPBUF_BUF4_SIZE                                   0x1
#define _SSPBUF_BUF4_LENGTH                                 0x1
#define _SSPBUF_BUF4_MASK                                   0x10
#define _SSPBUF_BUF5_POSN                                   0x5
#define _SSPBUF_BUF5_POSITION                               0x5
#define _SSPBUF_BUF5_SIZE                                   0x1
#define _SSPBUF_BUF5_LENGTH                                 0x1
#define _SSPBUF_BUF5_MASK                                   0x20
#define _SSPBUF_BUF6_POSN                                   0x6
#define _SSPBUF_BUF6_POSITION                               0x6
#define _SSPBUF_BUF6_SIZE                                   0x1
#define _SSPBUF_BUF6_LENGTH                                 0x1
#define _SSPBUF_BUF6_MASK                                   0x40
#define _SSPBUF_BUF7_POSN                                   0x7
#define _SSPBUF_BUF7_POSITION                               0x7
#define _SSPBUF_BUF7_SIZE                                   0x1
#define _SSPBUF_BUF7_LENGTH                                 0x1
#define _SSPBUF_BUF7_MASK                                   0x80
#define _SSPBUF_SSP1BUF_POSN                                0x0
#define _SSPBUF_SSP1BUF_POSITION                            0x0
#define _SSPBUF_SSP1BUF_SIZE                                0x8
#define _SSPBUF_SSP1BUF_LENGTH                              0x8
#define _SSPBUF_SSP1BUF_MASK                                0xFF

// Register: SSP1ADD
#define SSP1ADD SSP1ADD
extern volatile unsigned char           SSP1ADD             __at(0x212);
#ifndef _LIB_BUILD
asm("SSP1ADD equ 0212h");
#endif
// aliases
extern volatile unsigned char           SSPADD              __at(0x212);
#ifndef _LIB_BUILD
asm("SSPADD equ 0212h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP1ADD0               :1;
        unsigned SSP1ADD1               :1;
        unsigned SSP1ADD2               :1;
        unsigned SSP1ADD3               :1;
        unsigned SSP1ADD4               :1;
        unsigned SSP1ADD5               :1;
        unsigned SSP1ADD6               :1;
        unsigned SSP1ADD7               :1;
    };
    struct {
        unsigned ADD                    :8;
    };
    struct {
        unsigned ADD0                   :1;
        unsigned ADD1                   :1;
        unsigned ADD2                   :1;
        unsigned ADD3                   :1;
        unsigned ADD4                   :1;
        unsigned ADD5                   :1;
        unsigned ADD6                   :1;
        unsigned ADD7                   :1;
    };
    struct {
        unsigned SSP1ADD                :8;
    };
} SSP1ADDbits_t;
extern volatile SSP1ADDbits_t SSP1ADDbits __at(0x212);
// bitfield macros
#define _SSP1ADD_SSP1ADD0_POSN                              0x0
#define _SSP1ADD_SSP1ADD0_POSITION                          0x0
#define _SSP1ADD_SSP1ADD0_SIZE                              0x1
#define _SSP1ADD_SSP1ADD0_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD0_MASK                              0x1
#define _SSP1ADD_SSP1ADD1_POSN                              0x1
#define _SSP1ADD_SSP1ADD1_POSITION                          0x1
#define _SSP1ADD_SSP1ADD1_SIZE                              0x1
#define _SSP1ADD_SSP1ADD1_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD1_MASK                              0x2
#define _SSP1ADD_SSP1ADD2_POSN                              0x2
#define _SSP1ADD_SSP1ADD2_POSITION                          0x2
#define _SSP1ADD_SSP1ADD2_SIZE                              0x1
#define _SSP1ADD_SSP1ADD2_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD2_MASK                              0x4
#define _SSP1ADD_SSP1ADD3_POSN                              0x3
#define _SSP1ADD_SSP1ADD3_POSITION                          0x3
#define _SSP1ADD_SSP1ADD3_SIZE                              0x1
#define _SSP1ADD_SSP1ADD3_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD3_MASK                              0x8
#define _SSP1ADD_SSP1ADD4_POSN                              0x4
#define _SSP1ADD_SSP1ADD4_POSITION                          0x4
#define _SSP1ADD_SSP1ADD4_SIZE                              0x1
#define _SSP1ADD_SSP1ADD4_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD4_MASK                              0x10
#define _SSP1ADD_SSP1ADD5_POSN                              0x5
#define _SSP1ADD_SSP1ADD5_POSITION                          0x5
#define _SSP1ADD_SSP1ADD5_SIZE                              0x1
#define _SSP1ADD_SSP1ADD5_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD5_MASK                              0x20
#define _SSP1ADD_SSP1ADD6_POSN                              0x6
#define _SSP1ADD_SSP1ADD6_POSITION                          0x6
#define _SSP1ADD_SSP1ADD6_SIZE                              0x1
#define _SSP1ADD_SSP1ADD6_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD6_MASK                              0x40
#define _SSP1ADD_SSP1ADD7_POSN                              0x7
#define _SSP1ADD_SSP1ADD7_POSITION                          0x7
#define _SSP1ADD_SSP1ADD7_SIZE                              0x1
#define _SSP1ADD_SSP1ADD7_LENGTH                            0x1
#define _SSP1ADD_SSP1ADD7_MASK                              0x80
#define _SSP1ADD_ADD_POSN                                   0x0
#define _SSP1ADD_ADD_POSITION                               0x0
#define _SSP1ADD_ADD_SIZE                                   0x8
#define _SSP1ADD_ADD_LENGTH                                 0x8
#define _SSP1ADD_ADD_MASK                                   0xFF
#define _SSP1ADD_ADD0_POSN                                  0x0
#define _SSP1ADD_ADD0_POSITION                              0x0
#define _SSP1ADD_ADD0_SIZE                                  0x1
#define _SSP1ADD_ADD0_LENGTH                                0x1
#define _SSP1ADD_ADD0_MASK                                  0x1
#define _SSP1ADD_ADD1_POSN                                  0x1
#define _SSP1ADD_ADD1_POSITION                              0x1
#define _SSP1ADD_ADD1_SIZE                                  0x1
#define _SSP1ADD_ADD1_LENGTH                                0x1
#define _SSP1ADD_ADD1_MASK                                  0x2
#define _SSP1ADD_ADD2_POSN                                  0x2
#define _SSP1ADD_ADD2_POSITION                              0x2
#define _SSP1ADD_ADD2_SIZE                                  0x1
#define _SSP1ADD_ADD2_LENGTH                                0x1
#define _SSP1ADD_ADD2_MASK                                  0x4
#define _SSP1ADD_ADD3_POSN                                  0x3
#define _SSP1ADD_ADD3_POSITION                              0x3
#define _SSP1ADD_ADD3_SIZE                                  0x1
#define _SSP1ADD_ADD3_LENGTH                                0x1
#define _SSP1ADD_ADD3_MASK                                  0x8
#define _SSP1ADD_ADD4_POSN                                  0x4
#define _SSP1ADD_ADD4_POSITION                              0x4
#define _SSP1ADD_ADD4_SIZE                                  0x1
#define _SSP1ADD_ADD4_LENGTH                                0x1
#define _SSP1ADD_ADD4_MASK                                  0x10
#define _SSP1ADD_ADD5_POSN                                  0x5
#define _SSP1ADD_ADD5_POSITION                              0x5
#define _SSP1ADD_ADD5_SIZE                                  0x1
#define _SSP1ADD_ADD5_LENGTH                                0x1
#define _SSP1ADD_ADD5_MASK                                  0x20
#define _SSP1ADD_ADD6_POSN                                  0x6
#define _SSP1ADD_ADD6_POSITION                              0x6
#define _SSP1ADD_ADD6_SIZE                                  0x1
#define _SSP1ADD_ADD6_LENGTH                                0x1
#define _SSP1ADD_ADD6_MASK                                  0x40
#define _SSP1ADD_ADD7_POSN                                  0x7
#define _SSP1ADD_ADD7_POSITION                              0x7
#define _SSP1ADD_ADD7_SIZE                                  0x1
#define _SSP1ADD_ADD7_LENGTH                                0x1
#define _SSP1ADD_ADD7_MASK                                  0x80
#define _SSP1ADD_SSP1ADD_POSN                               0x0
#define _SSP1ADD_SSP1ADD_POSITION                           0x0
#define _SSP1ADD_SSP1ADD_SIZE                               0x8
#define _SSP1ADD_SSP1ADD_LENGTH                             0x8
#define _SSP1ADD_SSP1ADD_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1ADD0               :1;
        unsigned SSP1ADD1               :1;
        unsigned SSP1ADD2               :1;
        unsigned SSP1ADD3               :1;
        unsigned SSP1ADD4               :1;
        unsigned SSP1ADD5               :1;
        unsigned SSP1ADD6               :1;
        unsigned SSP1ADD7               :1;
    };
    struct {
        unsigned ADD                    :8;
    };
    struct {
        unsigned ADD0                   :1;
        unsigned ADD1                   :1;
        unsigned ADD2                   :1;
        unsigned ADD3                   :1;
        unsigned ADD4                   :1;
        unsigned ADD5                   :1;
        unsigned ADD6                   :1;
        unsigned ADD7                   :1;
    };
    struct {
        unsigned SSP1ADD                :8;
    };
} SSPADDbits_t;
extern volatile SSPADDbits_t SSPADDbits __at(0x212);
// bitfield macros
#define _SSPADD_SSP1ADD0_POSN                               0x0
#define _SSPADD_SSP1ADD0_POSITION                           0x0
#define _SSPADD_SSP1ADD0_SIZE                               0x1
#define _SSPADD_SSP1ADD0_LENGTH                             0x1
#define _SSPADD_SSP1ADD0_MASK                               0x1
#define _SSPADD_SSP1ADD1_POSN                               0x1
#define _SSPADD_SSP1ADD1_POSITION                           0x1
#define _SSPADD_SSP1ADD1_SIZE                               0x1
#define _SSPADD_SSP1ADD1_LENGTH                             0x1
#define _SSPADD_SSP1ADD1_MASK                               0x2
#define _SSPADD_SSP1ADD2_POSN                               0x2
#define _SSPADD_SSP1ADD2_POSITION                           0x2
#define _SSPADD_SSP1ADD2_SIZE                               0x1
#define _SSPADD_SSP1ADD2_LENGTH                             0x1
#define _SSPADD_SSP1ADD2_MASK                               0x4
#define _SSPADD_SSP1ADD3_POSN                               0x3
#define _SSPADD_SSP1ADD3_POSITION                           0x3
#define _SSPADD_SSP1ADD3_SIZE                               0x1
#define _SSPADD_SSP1ADD3_LENGTH                             0x1
#define _SSPADD_SSP1ADD3_MASK                               0x8
#define _SSPADD_SSP1ADD4_POSN                               0x4
#define _SSPADD_SSP1ADD4_POSITION                           0x4
#define _SSPADD_SSP1ADD4_SIZE                               0x1
#define _SSPADD_SSP1ADD4_LENGTH                             0x1
#define _SSPADD_SSP1ADD4_MASK                               0x10
#define _SSPADD_SSP1ADD5_POSN                               0x5
#define _SSPADD_SSP1ADD5_POSITION                           0x5
#define _SSPADD_SSP1ADD5_SIZE                               0x1
#define _SSPADD_SSP1ADD5_LENGTH                             0x1
#define _SSPADD_SSP1ADD5_MASK                               0x20
#define _SSPADD_SSP1ADD6_POSN                               0x6
#define _SSPADD_SSP1ADD6_POSITION                           0x6
#define _SSPADD_SSP1ADD6_SIZE                               0x1
#define _SSPADD_SSP1ADD6_LENGTH                             0x1
#define _SSPADD_SSP1ADD6_MASK                               0x40
#define _SSPADD_SSP1ADD7_POSN                               0x7
#define _SSPADD_SSP1ADD7_POSITION                           0x7
#define _SSPADD_SSP1ADD7_SIZE                               0x1
#define _SSPADD_SSP1ADD7_LENGTH                             0x1
#define _SSPADD_SSP1ADD7_MASK                               0x80
#define _SSPADD_ADD_POSN                                    0x0
#define _SSPADD_ADD_POSITION                                0x0
#define _SSPADD_ADD_SIZE                                    0x8
#define _SSPADD_ADD_LENGTH                                  0x8
#define _SSPADD_ADD_MASK                                    0xFF
#define _SSPADD_ADD0_POSN                                   0x0
#define _SSPADD_ADD0_POSITION                               0x0
#define _SSPADD_ADD0_SIZE                                   0x1
#define _SSPADD_ADD0_LENGTH                                 0x1
#define _SSPADD_ADD0_MASK                                   0x1
#define _SSPADD_ADD1_POSN                                   0x1
#define _SSPADD_ADD1_POSITION                               0x1
#define _SSPADD_ADD1_SIZE                                   0x1
#define _SSPADD_ADD1_LENGTH                                 0x1
#define _SSPADD_ADD1_MASK                                   0x2
#define _SSPADD_ADD2_POSN                                   0x2
#define _SSPADD_ADD2_POSITION                               0x2
#define _SSPADD_ADD2_SIZE                                   0x1
#define _SSPADD_ADD2_LENGTH                                 0x1
#define _SSPADD_ADD2_MASK                                   0x4
#define _SSPADD_ADD3_POSN                                   0x3
#define _SSPADD_ADD3_POSITION                               0x3
#define _SSPADD_ADD3_SIZE                                   0x1
#define _SSPADD_ADD3_LENGTH                                 0x1
#define _SSPADD_ADD3_MASK                                   0x8
#define _SSPADD_ADD4_POSN                                   0x4
#define _SSPADD_ADD4_POSITION                               0x4
#define _SSPADD_ADD4_SIZE                                   0x1
#define _SSPADD_ADD4_LENGTH                                 0x1
#define _SSPADD_ADD4_MASK                                   0x10
#define _SSPADD_ADD5_POSN                                   0x5
#define _SSPADD_ADD5_POSITION                               0x5
#define _SSPADD_ADD5_SIZE                                   0x1
#define _SSPADD_ADD5_LENGTH                                 0x1
#define _SSPADD_ADD5_MASK                                   0x20
#define _SSPADD_ADD6_POSN                                   0x6
#define _SSPADD_ADD6_POSITION                               0x6
#define _SSPADD_ADD6_SIZE                                   0x1
#define _SSPADD_ADD6_LENGTH                                 0x1
#define _SSPADD_ADD6_MASK                                   0x40
#define _SSPADD_ADD7_POSN                                   0x7
#define _SSPADD_ADD7_POSITION                               0x7
#define _SSPADD_ADD7_SIZE                                   0x1
#define _SSPADD_ADD7_LENGTH                                 0x1
#define _SSPADD_ADD7_MASK                                   0x80
#define _SSPADD_SSP1ADD_POSN                                0x0
#define _SSPADD_SSP1ADD_POSITION                            0x0
#define _SSPADD_SSP1ADD_SIZE                                0x8
#define _SSPADD_SSP1ADD_LENGTH                              0x8
#define _SSPADD_SSP1ADD_MASK                                0xFF

// Register: SSP1MSK
#define SSP1MSK SSP1MSK
extern volatile unsigned char           SSP1MSK             __at(0x213);
#ifndef _LIB_BUILD
asm("SSP1MSK equ 0213h");
#endif
// aliases
extern volatile unsigned char           SSPMSK              __at(0x213);
#ifndef _LIB_BUILD
asm("SSPMSK equ 0213h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSP1MSK0               :1;
        unsigned SSP1MSK1               :1;
        unsigned SSP1MSK2               :1;
        unsigned SSP1MSK3               :1;
        unsigned SSP1MSK4               :1;
        unsigned SSP1MSK5               :1;
        unsigned SSP1MSK6               :1;
        unsigned SSP1MSK7               :1;
    };
    struct {
        unsigned MSK                    :8;
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
        unsigned SSP1MSK                :8;
    };
} SSP1MSKbits_t;
extern volatile SSP1MSKbits_t SSP1MSKbits __at(0x213);
// bitfield macros
#define _SSP1MSK_SSP1MSK0_POSN                              0x0
#define _SSP1MSK_SSP1MSK0_POSITION                          0x0
#define _SSP1MSK_SSP1MSK0_SIZE                              0x1
#define _SSP1MSK_SSP1MSK0_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK0_MASK                              0x1
#define _SSP1MSK_SSP1MSK1_POSN                              0x1
#define _SSP1MSK_SSP1MSK1_POSITION                          0x1
#define _SSP1MSK_SSP1MSK1_SIZE                              0x1
#define _SSP1MSK_SSP1MSK1_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK1_MASK                              0x2
#define _SSP1MSK_SSP1MSK2_POSN                              0x2
#define _SSP1MSK_SSP1MSK2_POSITION                          0x2
#define _SSP1MSK_SSP1MSK2_SIZE                              0x1
#define _SSP1MSK_SSP1MSK2_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK2_MASK                              0x4
#define _SSP1MSK_SSP1MSK3_POSN                              0x3
#define _SSP1MSK_SSP1MSK3_POSITION                          0x3
#define _SSP1MSK_SSP1MSK3_SIZE                              0x1
#define _SSP1MSK_SSP1MSK3_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK3_MASK                              0x8
#define _SSP1MSK_SSP1MSK4_POSN                              0x4
#define _SSP1MSK_SSP1MSK4_POSITION                          0x4
#define _SSP1MSK_SSP1MSK4_SIZE                              0x1
#define _SSP1MSK_SSP1MSK4_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK4_MASK                              0x10
#define _SSP1MSK_SSP1MSK5_POSN                              0x5
#define _SSP1MSK_SSP1MSK5_POSITION                          0x5
#define _SSP1MSK_SSP1MSK5_SIZE                              0x1
#define _SSP1MSK_SSP1MSK5_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK5_MASK                              0x20
#define _SSP1MSK_SSP1MSK6_POSN                              0x6
#define _SSP1MSK_SSP1MSK6_POSITION                          0x6
#define _SSP1MSK_SSP1MSK6_SIZE                              0x1
#define _SSP1MSK_SSP1MSK6_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK6_MASK                              0x40
#define _SSP1MSK_SSP1MSK7_POSN                              0x7
#define _SSP1MSK_SSP1MSK7_POSITION                          0x7
#define _SSP1MSK_SSP1MSK7_SIZE                              0x1
#define _SSP1MSK_SSP1MSK7_LENGTH                            0x1
#define _SSP1MSK_SSP1MSK7_MASK                              0x80
#define _SSP1MSK_MSK_POSN                                   0x0
#define _SSP1MSK_MSK_POSITION                               0x0
#define _SSP1MSK_MSK_SIZE                                   0x8
#define _SSP1MSK_MSK_LENGTH                                 0x8
#define _SSP1MSK_MSK_MASK                                   0xFF
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
#define _SSP1MSK_SSP1MSK_POSN                               0x0
#define _SSP1MSK_SSP1MSK_POSITION                           0x0
#define _SSP1MSK_SSP1MSK_SIZE                               0x8
#define _SSP1MSK_SSP1MSK_LENGTH                             0x8
#define _SSP1MSK_SSP1MSK_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSP1MSK0               :1;
        unsigned SSP1MSK1               :1;
        unsigned SSP1MSK2               :1;
        unsigned SSP1MSK3               :1;
        unsigned SSP1MSK4               :1;
        unsigned SSP1MSK5               :1;
        unsigned SSP1MSK6               :1;
        unsigned SSP1MSK7               :1;
    };
    struct {
        unsigned MSK                    :8;
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
        unsigned SSP1MSK                :8;
    };
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __at(0x213);
// bitfield macros
#define _SSPMSK_SSP1MSK0_POSN                               0x0
#define _SSPMSK_SSP1MSK0_POSITION                           0x0
#define _SSPMSK_SSP1MSK0_SIZE                               0x1
#define _SSPMSK_SSP1MSK0_LENGTH                             0x1
#define _SSPMSK_SSP1MSK0_MASK                               0x1
#define _SSPMSK_SSP1MSK1_POSN                               0x1
#define _SSPMSK_SSP1MSK1_POSITION                           0x1
#define _SSPMSK_SSP1MSK1_SIZE                               0x1
#define _SSPMSK_SSP1MSK1_LENGTH                             0x1
#define _SSPMSK_SSP1MSK1_MASK                               0x2
#define _SSPMSK_SSP1MSK2_POSN                               0x2
#define _SSPMSK_SSP1MSK2_POSITION                           0x2
#define _SSPMSK_SSP1MSK2_SIZE                               0x1
#define _SSPMSK_SSP1MSK2_LENGTH                             0x1
#define _SSPMSK_SSP1MSK2_MASK                               0x4
#define _SSPMSK_SSP1MSK3_POSN                               0x3
#define _SSPMSK_SSP1MSK3_POSITION                           0x3
#define _SSPMSK_SSP1MSK3_SIZE                               0x1
#define _SSPMSK_SSP1MSK3_LENGTH                             0x1
#define _SSPMSK_SSP1MSK3_MASK                               0x8
#define _SSPMSK_SSP1MSK4_POSN                               0x4
#define _SSPMSK_SSP1MSK4_POSITION                           0x4
#define _SSPMSK_SSP1MSK4_SIZE                               0x1
#define _SSPMSK_SSP1MSK4_LENGTH                             0x1
#define _SSPMSK_SSP1MSK4_MASK                               0x10
#define _SSPMSK_SSP1MSK5_POSN                               0x5
#define _SSPMSK_SSP1MSK5_POSITION                           0x5
#define _SSPMSK_SSP1MSK5_SIZE                               0x1
#define _SSPMSK_SSP1MSK5_LENGTH                             0x1
#define _SSPMSK_SSP1MSK5_MASK                               0x20
#define _SSPMSK_SSP1MSK6_POSN                               0x6
#define _SSPMSK_SSP1MSK6_POSITION                           0x6
#define _SSPMSK_SSP1MSK6_SIZE                               0x1
#define _SSPMSK_SSP1MSK6_LENGTH                             0x1
#define _SSPMSK_SSP1MSK6_MASK                               0x40
#define _SSPMSK_SSP1MSK7_POSN                               0x7
#define _SSPMSK_SSP1MSK7_POSITION                           0x7
#define _SSPMSK_SSP1MSK7_SIZE                               0x1
#define _SSPMSK_SSP1MSK7_LENGTH                             0x1
#define _SSPMSK_SSP1MSK7_MASK                               0x80
#define _SSPMSK_MSK_POSN                                    0x0
#define _SSPMSK_MSK_POSITION                                0x0
#define _SSPMSK_MSK_SIZE                                    0x8
#define _SSPMSK_MSK_LENGTH                                  0x8
#define _SSPMSK_MSK_MASK                                    0xFF
#define _SSPMSK_MSK0_POSN                                   0x0
#define _SSPMSK_MSK0_POSITION                               0x0
#define _SSPMSK_MSK0_SIZE                                   0x1
#define _SSPMSK_MSK0_LENGTH                                 0x1
#define _SSPMSK_MSK0_MASK                                   0x1
#define _SSPMSK_MSK1_POSN                                   0x1
#define _SSPMSK_MSK1_POSITION                               0x1
#define _SSPMSK_MSK1_SIZE                                   0x1
#define _SSPMSK_MSK1_LENGTH                                 0x1
#define _SSPMSK_MSK1_MASK                                   0x2
#define _SSPMSK_MSK2_POSN                                   0x2
#define _SSPMSK_MSK2_POSITION                               0x2
#define _SSPMSK_MSK2_SIZE                                   0x1
#define _SSPMSK_MSK2_LENGTH                                 0x1
#define _SSPMSK_MSK2_MASK                                   0x4
#define _SSPMSK_MSK3_POSN                                   0x3
#define _SSPMSK_MSK3_POSITION                               0x3
#define _SSPMSK_MSK3_SIZE                                   0x1
#define _SSPMSK_MSK3_LENGTH                                 0x1
#define _SSPMSK_MSK3_MASK                                   0x8
#define _SSPMSK_MSK4_POSN                                   0x4
#define _SSPMSK_MSK4_POSITION                               0x4
#define _SSPMSK_MSK4_SIZE                                   0x1
#define _SSPMSK_MSK4_LENGTH                                 0x1
#define _SSPMSK_MSK4_MASK                                   0x10
#define _SSPMSK_MSK5_POSN                                   0x5
#define _SSPMSK_MSK5_POSITION                               0x5
#define _SSPMSK_MSK5_SIZE                                   0x1
#define _SSPMSK_MSK5_LENGTH                                 0x1
#define _SSPMSK_MSK5_MASK                                   0x20
#define _SSPMSK_MSK6_POSN                                   0x6
#define _SSPMSK_MSK6_POSITION                               0x6
#define _SSPMSK_MSK6_SIZE                                   0x1
#define _SSPMSK_MSK6_LENGTH                                 0x1
#define _SSPMSK_MSK6_MASK                                   0x40
#define _SSPMSK_MSK7_POSN                                   0x7
#define _SSPMSK_MSK7_POSITION                               0x7
#define _SSPMSK_MSK7_SIZE                                   0x1
#define _SSPMSK_MSK7_LENGTH                                 0x1
#define _SSPMSK_MSK7_MASK                                   0x80
#define _SSPMSK_SSP1MSK_POSN                                0x0
#define _SSPMSK_SSP1MSK_POSITION                            0x0
#define _SSPMSK_SSP1MSK_SIZE                                0x8
#define _SSPMSK_SSP1MSK_LENGTH                              0x8
#define _SSPMSK_SSP1MSK_MASK                                0xFF

// Register: SSP1STAT
#define SSP1STAT SSP1STAT
extern volatile unsigned char           SSP1STAT            __at(0x214);
#ifndef _LIB_BUILD
asm("SSP1STAT equ 0214h");
#endif
// aliases
extern volatile unsigned char           SSPSTAT             __at(0x214);
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0214h");
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
} SSP1STATbits_t;
extern volatile SSP1STATbits_t SSP1STATbits __at(0x214);
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
// alias bitfield definitions
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
extern volatile SSPSTATbits_t SSPSTATbits __at(0x214);
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

// Register: SSP1CON1
#define SSP1CON1 SSP1CON1
extern volatile unsigned char           SSP1CON1            __at(0x215);
#ifndef _LIB_BUILD
asm("SSP1CON1 equ 0215h");
#endif
// aliases
extern volatile unsigned char           SSPCON              __at(0x215);
#ifndef _LIB_BUILD
asm("SSPCON equ 0215h");
#endif
extern volatile unsigned char           SSPCON1             __at(0x215);
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0215h");
#endif
extern volatile unsigned char           SSP1CON             __at(0x215);
#ifndef _LIB_BUILD
asm("SSP1CON equ 0215h");
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
} SSP1CON1bits_t;
extern volatile SSP1CON1bits_t SSP1CON1bits __at(0x215);
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
// alias bitfield definitions
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
} SSPCONbits_t;
extern volatile SSPCONbits_t SSPCONbits __at(0x215);
// bitfield macros
#define _SSPCON_SSPM_POSN                                   0x0
#define _SSPCON_SSPM_POSITION                               0x0
#define _SSPCON_SSPM_SIZE                                   0x4
#define _SSPCON_SSPM_LENGTH                                 0x4
#define _SSPCON_SSPM_MASK                                   0xF
#define _SSPCON_CKP_POSN                                    0x4
#define _SSPCON_CKP_POSITION                                0x4
#define _SSPCON_CKP_SIZE                                    0x1
#define _SSPCON_CKP_LENGTH                                  0x1
#define _SSPCON_CKP_MASK                                    0x10
#define _SSPCON_SSPEN_POSN                                  0x5
#define _SSPCON_SSPEN_POSITION                              0x5
#define _SSPCON_SSPEN_SIZE                                  0x1
#define _SSPCON_SSPEN_LENGTH                                0x1
#define _SSPCON_SSPEN_MASK                                  0x20
#define _SSPCON_SSPOV_POSN                                  0x6
#define _SSPCON_SSPOV_POSITION                              0x6
#define _SSPCON_SSPOV_SIZE                                  0x1
#define _SSPCON_SSPOV_LENGTH                                0x1
#define _SSPCON_SSPOV_MASK                                  0x40
#define _SSPCON_WCOL_POSN                                   0x7
#define _SSPCON_WCOL_POSITION                               0x7
#define _SSPCON_WCOL_SIZE                                   0x1
#define _SSPCON_WCOL_LENGTH                                 0x1
#define _SSPCON_WCOL_MASK                                   0x80
#define _SSPCON_SSPM0_POSN                                  0x0
#define _SSPCON_SSPM0_POSITION                              0x0
#define _SSPCON_SSPM0_SIZE                                  0x1
#define _SSPCON_SSPM0_LENGTH                                0x1
#define _SSPCON_SSPM0_MASK                                  0x1
#define _SSPCON_SSPM1_POSN                                  0x1
#define _SSPCON_SSPM1_POSITION                              0x1
#define _SSPCON_SSPM1_SIZE                                  0x1
#define _SSPCON_SSPM1_LENGTH                                0x1
#define _SSPCON_SSPM1_MASK                                  0x2
#define _SSPCON_SSPM2_POSN                                  0x2
#define _SSPCON_SSPM2_POSITION                              0x2
#define _SSPCON_SSPM2_SIZE                                  0x1
#define _SSPCON_SSPM2_LENGTH                                0x1
#define _SSPCON_SSPM2_MASK                                  0x4
#define _SSPCON_SSPM3_POSN                                  0x3
#define _SSPCON_SSPM3_POSITION                              0x3
#define _SSPCON_SSPM3_SIZE                                  0x1
#define _SSPCON_SSPM3_LENGTH                                0x1
#define _SSPCON_SSPM3_MASK                                  0x8
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
extern volatile SSPCON1bits_t SSPCON1bits __at(0x215);
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
} SSP1CONbits_t;
extern volatile SSP1CONbits_t SSP1CONbits __at(0x215);
// bitfield macros
#define _SSP1CON_SSPM_POSN                                  0x0
#define _SSP1CON_SSPM_POSITION                              0x0
#define _SSP1CON_SSPM_SIZE                                  0x4
#define _SSP1CON_SSPM_LENGTH                                0x4
#define _SSP1CON_SSPM_MASK                                  0xF
#define _SSP1CON_CKP_POSN                                   0x4
#define _SSP1CON_CKP_POSITION                               0x4
#define _SSP1CON_CKP_SIZE                                   0x1
#define _SSP1CON_CKP_LENGTH                                 0x1
#define _SSP1CON_CKP_MASK                                   0x10
#define _SSP1CON_SSPEN_POSN                                 0x5
#define _SSP1CON_SSPEN_POSITION                             0x5
#define _SSP1CON_SSPEN_SIZE                                 0x1
#define _SSP1CON_SSPEN_LENGTH                               0x1
#define _SSP1CON_SSPEN_MASK                                 0x20
#define _SSP1CON_SSPOV_POSN                                 0x6
#define _SSP1CON_SSPOV_POSITION                             0x6
#define _SSP1CON_SSPOV_SIZE                                 0x1
#define _SSP1CON_SSPOV_LENGTH                               0x1
#define _SSP1CON_SSPOV_MASK                                 0x40
#define _SSP1CON_WCOL_POSN                                  0x7
#define _SSP1CON_WCOL_POSITION                              0x7
#define _SSP1CON_WCOL_SIZE                                  0x1
#define _SSP1CON_WCOL_LENGTH                                0x1
#define _SSP1CON_WCOL_MASK                                  0x80
#define _SSP1CON_SSPM0_POSN                                 0x0
#define _SSP1CON_SSPM0_POSITION                             0x0
#define _SSP1CON_SSPM0_SIZE                                 0x1
#define _SSP1CON_SSPM0_LENGTH                               0x1
#define _SSP1CON_SSPM0_MASK                                 0x1
#define _SSP1CON_SSPM1_POSN                                 0x1
#define _SSP1CON_SSPM1_POSITION                             0x1
#define _SSP1CON_SSPM1_SIZE                                 0x1
#define _SSP1CON_SSPM1_LENGTH                               0x1
#define _SSP1CON_SSPM1_MASK                                 0x2
#define _SSP1CON_SSPM2_POSN                                 0x2
#define _SSP1CON_SSPM2_POSITION                             0x2
#define _SSP1CON_SSPM2_SIZE                                 0x1
#define _SSP1CON_SSPM2_LENGTH                               0x1
#define _SSP1CON_SSPM2_MASK                                 0x4
#define _SSP1CON_SSPM3_POSN                                 0x3
#define _SSP1CON_SSPM3_POSITION                             0x3
#define _SSP1CON_SSPM3_SIZE                                 0x1
#define _SSP1CON_SSPM3_LENGTH                               0x1
#define _SSP1CON_SSPM3_MASK                                 0x8

// Register: SSP1CON2
#define SSP1CON2 SSP1CON2
extern volatile unsigned char           SSP1CON2            __at(0x216);
#ifndef _LIB_BUILD
asm("SSP1CON2 equ 0216h");
#endif
// aliases
extern volatile unsigned char           SSPCON2             __at(0x216);
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0216h");
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
} SSP1CON2bits_t;
extern volatile SSP1CON2bits_t SSP1CON2bits __at(0x216);
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
// alias bitfield definitions
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
extern volatile SSPCON2bits_t SSPCON2bits __at(0x216);
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

// Register: SSP1CON3
#define SSP1CON3 SSP1CON3
extern volatile unsigned char           SSP1CON3            __at(0x217);
#ifndef _LIB_BUILD
asm("SSP1CON3 equ 0217h");
#endif
// aliases
extern volatile unsigned char           SSPCON3             __at(0x217);
#ifndef _LIB_BUILD
asm("SSPCON3 equ 0217h");
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
extern volatile SSP1CON3bits_t SSP1CON3bits __at(0x217);
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
// alias bitfield definitions
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
extern volatile SSPCON3bits_t SSPCON3bits __at(0x217);
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

// Register: ODCONA
#define ODCONA ODCONA
extern volatile unsigned char           ODCONA              __at(0x28C);
#ifndef _LIB_BUILD
asm("ODCONA equ 028Ch");
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
extern volatile ODCONAbits_t ODCONAbits __at(0x28C);
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

// Register: CCPR1
#define CCPR1 CCPR1
extern volatile unsigned short          CCPR1               __at(0x291);
#ifndef _LIB_BUILD
asm("CCPR1 equ 0291h");
#endif

// Register: CCPR1L
#define CCPR1L CCPR1L
extern volatile unsigned char           CCPR1L              __at(0x291);
#ifndef _LIB_BUILD
asm("CCPR1L equ 0291h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1L                 :8;
    };
} CCPR1Lbits_t;
extern volatile CCPR1Lbits_t CCPR1Lbits __at(0x291);
// bitfield macros
#define _CCPR1L_CCPR1L_POSN                                 0x0
#define _CCPR1L_CCPR1L_POSITION                             0x0
#define _CCPR1L_CCPR1L_SIZE                                 0x8
#define _CCPR1L_CCPR1L_LENGTH                               0x8
#define _CCPR1L_CCPR1L_MASK                                 0xFF

// Register: CCPR1H
#define CCPR1H CCPR1H
extern volatile unsigned char           CCPR1H              __at(0x292);
#ifndef _LIB_BUILD
asm("CCPR1H equ 0292h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1H                 :8;
    };
} CCPR1Hbits_t;
extern volatile CCPR1Hbits_t CCPR1Hbits __at(0x292);
// bitfield macros
#define _CCPR1H_CCPR1H_POSN                                 0x0
#define _CCPR1H_CCPR1H_POSITION                             0x0
#define _CCPR1H_CCPR1H_SIZE                                 0x8
#define _CCPR1H_CCPR1H_LENGTH                               0x8
#define _CCPR1H_CCPR1H_MASK                                 0xFF

// Register: CCP1CON
#define CCP1CON CCP1CON
extern volatile unsigned char           CCP1CON             __at(0x293);
#ifndef _LIB_BUILD
asm("CCP1CON equ 0293h");
#endif
// bitfield definitions
typedef union {
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
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __at(0x293);
// bitfield macros
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

// Register: CCP1CAP
#define CCP1CAP CCP1CAP
extern volatile unsigned char           CCP1CAP             __at(0x294);
#ifndef _LIB_BUILD
asm("CCP1CAP equ 0294h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1CTS                :3;
    };
    struct {
        unsigned CCP1CTS0               :1;
        unsigned CCP1CTS1               :1;
        unsigned CCP1CTS2               :1;
    };
} CCP1CAPbits_t;
extern volatile CCP1CAPbits_t CCP1CAPbits __at(0x294);
// bitfield macros
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
#define _CCP1CAP_CCP1CTS2_POSN                              0x2
#define _CCP1CAP_CCP1CTS2_POSITION                          0x2
#define _CCP1CAP_CCP1CTS2_SIZE                              0x1
#define _CCP1CAP_CCP1CTS2_LENGTH                            0x1
#define _CCP1CAP_CCP1CTS2_MASK                              0x4

// Register: CCPR2
#define CCPR2 CCPR2
extern volatile unsigned short          CCPR2               __at(0x295);
#ifndef _LIB_BUILD
asm("CCPR2 equ 0295h");
#endif

// Register: CCPR2L
#define CCPR2L CCPR2L
extern volatile unsigned char           CCPR2L              __at(0x295);
#ifndef _LIB_BUILD
asm("CCPR2L equ 0295h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2L                 :8;
    };
} CCPR2Lbits_t;
extern volatile CCPR2Lbits_t CCPR2Lbits __at(0x295);
// bitfield macros
#define _CCPR2L_CCPR2L_POSN                                 0x0
#define _CCPR2L_CCPR2L_POSITION                             0x0
#define _CCPR2L_CCPR2L_SIZE                                 0x8
#define _CCPR2L_CCPR2L_LENGTH                               0x8
#define _CCPR2L_CCPR2L_MASK                                 0xFF

// Register: CCPR2H
#define CCPR2H CCPR2H
extern volatile unsigned char           CCPR2H              __at(0x296);
#ifndef _LIB_BUILD
asm("CCPR2H equ 0296h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2H                 :8;
    };
} CCPR2Hbits_t;
extern volatile CCPR2Hbits_t CCPR2Hbits __at(0x296);
// bitfield macros
#define _CCPR2H_CCPR2H_POSN                                 0x0
#define _CCPR2H_CCPR2H_POSITION                             0x0
#define _CCPR2H_CCPR2H_SIZE                                 0x8
#define _CCPR2H_CCPR2H_LENGTH                               0x8
#define _CCPR2H_CCPR2H_MASK                                 0xFF

// Register: CCP2CON
#define CCP2CON CCP2CON
extern volatile unsigned char           CCP2CON             __at(0x297);
#ifndef _LIB_BUILD
asm("CCP2CON equ 0297h");
#endif
// bitfield definitions
typedef union {
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
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __at(0x297);
// bitfield macros
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

// Register: CCP2CAP
#define CCP2CAP CCP2CAP
extern volatile unsigned char           CCP2CAP             __at(0x298);
#ifndef _LIB_BUILD
asm("CCP2CAP equ 0298h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2CTS                :3;
    };
    struct {
        unsigned CCP2CTS0               :1;
        unsigned CCP2CTS1               :1;
        unsigned CCP2CTS2               :1;
    };
} CCP2CAPbits_t;
extern volatile CCP2CAPbits_t CCP2CAPbits __at(0x298);
// bitfield macros
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
#define _CCP2CAP_CCP2CTS2_POSN                              0x2
#define _CCP2CAP_CCP2CTS2_POSITION                          0x2
#define _CCP2CAP_CCP2CTS2_SIZE                              0x1
#define _CCP2CAP_CCP2CTS2_LENGTH                            0x1
#define _CCP2CAP_CCP2CTS2_MASK                              0x4

// Register: SLRCONA
#define SLRCONA SLRCONA
extern volatile unsigned char           SLRCONA             __at(0x30C);
#ifndef _LIB_BUILD
asm("SLRCONA equ 030Ch");
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
extern volatile SLRCONAbits_t SLRCONAbits __at(0x30C);
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
extern volatile unsigned char           INLVLA              __at(0x38C);
#ifndef _LIB_BUILD
asm("INLVLA equ 038Ch");
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
extern volatile INLVLAbits_t INLVLAbits __at(0x38C);
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
extern volatile unsigned char           IOCAP               __at(0x391);
#ifndef _LIB_BUILD
asm("IOCAP equ 0391h");
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
extern volatile IOCAPbits_t IOCAPbits __at(0x391);
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
extern volatile unsigned char           IOCAN               __at(0x392);
#ifndef _LIB_BUILD
asm("IOCAN equ 0392h");
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
extern volatile IOCANbits_t IOCANbits __at(0x392);
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
extern volatile unsigned char           IOCAF               __at(0x393);
#ifndef _LIB_BUILD
asm("IOCAF equ 0393h");
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
extern volatile IOCAFbits_t IOCAFbits __at(0x393);
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

// Register: CLKRCON
#define CLKRCON CLKRCON
extern volatile unsigned char           CLKRCON             __at(0x39A);
#ifndef _LIB_BUILD
asm("CLKRCON equ 039Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLKRDIV                :3;
        unsigned CLKRDC                 :2;
        unsigned                        :2;
        unsigned CLKREN                 :1;
    };
    struct {
        unsigned CLKRDIV0               :1;
        unsigned CLKRDIV1               :1;
        unsigned CLKRDIV2               :1;
        unsigned CLKRDC0                :1;
        unsigned CLKRDC1                :1;
    };
} CLKRCONbits_t;
extern volatile CLKRCONbits_t CLKRCONbits __at(0x39A);
// bitfield macros
#define _CLKRCON_CLKRDIV_POSN                               0x0
#define _CLKRCON_CLKRDIV_POSITION                           0x0
#define _CLKRCON_CLKRDIV_SIZE                               0x3
#define _CLKRCON_CLKRDIV_LENGTH                             0x3
#define _CLKRCON_CLKRDIV_MASK                               0x7
#define _CLKRCON_CLKRDC_POSN                                0x3
#define _CLKRCON_CLKRDC_POSITION                            0x3
#define _CLKRCON_CLKRDC_SIZE                                0x2
#define _CLKRCON_CLKRDC_LENGTH                              0x2
#define _CLKRCON_CLKRDC_MASK                                0x18
#define _CLKRCON_CLKREN_POSN                                0x7
#define _CLKRCON_CLKREN_POSITION                            0x7
#define _CLKRCON_CLKREN_SIZE                                0x1
#define _CLKRCON_CLKREN_LENGTH                              0x1
#define _CLKRCON_CLKREN_MASK                                0x80
#define _CLKRCON_CLKRDIV0_POSN                              0x0
#define _CLKRCON_CLKRDIV0_POSITION                          0x0
#define _CLKRCON_CLKRDIV0_SIZE                              0x1
#define _CLKRCON_CLKRDIV0_LENGTH                            0x1
#define _CLKRCON_CLKRDIV0_MASK                              0x1
#define _CLKRCON_CLKRDIV1_POSN                              0x1
#define _CLKRCON_CLKRDIV1_POSITION                          0x1
#define _CLKRCON_CLKRDIV1_SIZE                              0x1
#define _CLKRCON_CLKRDIV1_LENGTH                            0x1
#define _CLKRCON_CLKRDIV1_MASK                              0x2
#define _CLKRCON_CLKRDIV2_POSN                              0x2
#define _CLKRCON_CLKRDIV2_POSITION                          0x2
#define _CLKRCON_CLKRDIV2_SIZE                              0x1
#define _CLKRCON_CLKRDIV2_LENGTH                            0x1
#define _CLKRCON_CLKRDIV2_MASK                              0x4
#define _CLKRCON_CLKRDC0_POSN                               0x3
#define _CLKRCON_CLKRDC0_POSITION                           0x3
#define _CLKRCON_CLKRDC0_SIZE                               0x1
#define _CLKRCON_CLKRDC0_LENGTH                             0x1
#define _CLKRCON_CLKRDC0_MASK                               0x8
#define _CLKRCON_CLKRDC1_POSN                               0x4
#define _CLKRCON_CLKRDC1_POSITION                           0x4
#define _CLKRCON_CLKRDC1_SIZE                               0x1
#define _CLKRCON_CLKRDC1_LENGTH                             0x1
#define _CLKRCON_CLKRDC1_MASK                               0x10

// Register: MDCON
#define MDCON MDCON
extern volatile unsigned char           MDCON               __at(0x39C);
#ifndef _LIB_BUILD
asm("MDCON equ 039Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MDBIT                  :1;
        unsigned                        :2;
        unsigned MDOUT                  :1;
        unsigned MDOPOL                 :1;
        unsigned                        :2;
        unsigned MDEN                   :1;
    };
} MDCONbits_t;
extern volatile MDCONbits_t MDCONbits __at(0x39C);
// bitfield macros
#define _MDCON_MDBIT_POSN                                   0x0
#define _MDCON_MDBIT_POSITION                               0x0
#define _MDCON_MDBIT_SIZE                                   0x1
#define _MDCON_MDBIT_LENGTH                                 0x1
#define _MDCON_MDBIT_MASK                                   0x1
#define _MDCON_MDOUT_POSN                                   0x3
#define _MDCON_MDOUT_POSITION                               0x3
#define _MDCON_MDOUT_SIZE                                   0x1
#define _MDCON_MDOUT_LENGTH                                 0x1
#define _MDCON_MDOUT_MASK                                   0x8
#define _MDCON_MDOPOL_POSN                                  0x4
#define _MDCON_MDOPOL_POSITION                              0x4
#define _MDCON_MDOPOL_SIZE                                  0x1
#define _MDCON_MDOPOL_LENGTH                                0x1
#define _MDCON_MDOPOL_MASK                                  0x10
#define _MDCON_MDEN_POSN                                    0x7
#define _MDCON_MDEN_POSITION                                0x7
#define _MDCON_MDEN_SIZE                                    0x1
#define _MDCON_MDEN_LENGTH                                  0x1
#define _MDCON_MDEN_MASK                                    0x80

// Register: MDSRC
#define MDSRC MDSRC
extern volatile unsigned char           MDSRC               __at(0x39D);
#ifndef _LIB_BUILD
asm("MDSRC equ 039Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MDMS                   :4;
    };
    struct {
        unsigned MDMS0                  :1;
        unsigned MDMS1                  :1;
        unsigned MDMS2                  :1;
        unsigned MDMS3                  :1;
    };
} MDSRCbits_t;
extern volatile MDSRCbits_t MDSRCbits __at(0x39D);
// bitfield macros
#define _MDSRC_MDMS_POSN                                    0x0
#define _MDSRC_MDMS_POSITION                                0x0
#define _MDSRC_MDMS_SIZE                                    0x4
#define _MDSRC_MDMS_LENGTH                                  0x4
#define _MDSRC_MDMS_MASK                                    0xF
#define _MDSRC_MDMS0_POSN                                   0x0
#define _MDSRC_MDMS0_POSITION                               0x0
#define _MDSRC_MDMS0_SIZE                                   0x1
#define _MDSRC_MDMS0_LENGTH                                 0x1
#define _MDSRC_MDMS0_MASK                                   0x1
#define _MDSRC_MDMS1_POSN                                   0x1
#define _MDSRC_MDMS1_POSITION                               0x1
#define _MDSRC_MDMS1_SIZE                                   0x1
#define _MDSRC_MDMS1_LENGTH                                 0x1
#define _MDSRC_MDMS1_MASK                                   0x2
#define _MDSRC_MDMS2_POSN                                   0x2
#define _MDSRC_MDMS2_POSITION                               0x2
#define _MDSRC_MDMS2_SIZE                                   0x1
#define _MDSRC_MDMS2_LENGTH                                 0x1
#define _MDSRC_MDMS2_MASK                                   0x4
#define _MDSRC_MDMS3_POSN                                   0x3
#define _MDSRC_MDMS3_POSITION                               0x3
#define _MDSRC_MDMS3_SIZE                                   0x1
#define _MDSRC_MDMS3_LENGTH                                 0x1
#define _MDSRC_MDMS3_MASK                                   0x8

// Register: MDCARH
#define MDCARH MDCARH
extern volatile unsigned char           MDCARH              __at(0x39E);
#ifndef _LIB_BUILD
asm("MDCARH equ 039Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MDCH                   :4;
        unsigned                        :1;
        unsigned MDCHSYNC               :1;
        unsigned MDCHPOL                :1;
    };
    struct {
        unsigned MDCH0                  :1;
        unsigned MDCH1                  :1;
        unsigned MDCH2                  :1;
        unsigned MDCH3                  :1;
    };
} MDCARHbits_t;
extern volatile MDCARHbits_t MDCARHbits __at(0x39E);
// bitfield macros
#define _MDCARH_MDCH_POSN                                   0x0
#define _MDCARH_MDCH_POSITION                               0x0
#define _MDCARH_MDCH_SIZE                                   0x4
#define _MDCARH_MDCH_LENGTH                                 0x4
#define _MDCARH_MDCH_MASK                                   0xF
#define _MDCARH_MDCHSYNC_POSN                               0x5
#define _MDCARH_MDCHSYNC_POSITION                           0x5
#define _MDCARH_MDCHSYNC_SIZE                               0x1
#define _MDCARH_MDCHSYNC_LENGTH                             0x1
#define _MDCARH_MDCHSYNC_MASK                               0x20
#define _MDCARH_MDCHPOL_POSN                                0x6
#define _MDCARH_MDCHPOL_POSITION                            0x6
#define _MDCARH_MDCHPOL_SIZE                                0x1
#define _MDCARH_MDCHPOL_LENGTH                              0x1
#define _MDCARH_MDCHPOL_MASK                                0x40
#define _MDCARH_MDCH0_POSN                                  0x0
#define _MDCARH_MDCH0_POSITION                              0x0
#define _MDCARH_MDCH0_SIZE                                  0x1
#define _MDCARH_MDCH0_LENGTH                                0x1
#define _MDCARH_MDCH0_MASK                                  0x1
#define _MDCARH_MDCH1_POSN                                  0x1
#define _MDCARH_MDCH1_POSITION                              0x1
#define _MDCARH_MDCH1_SIZE                                  0x1
#define _MDCARH_MDCH1_LENGTH                                0x1
#define _MDCARH_MDCH1_MASK                                  0x2
#define _MDCARH_MDCH2_POSN                                  0x2
#define _MDCARH_MDCH2_POSITION                              0x2
#define _MDCARH_MDCH2_SIZE                                  0x1
#define _MDCARH_MDCH2_LENGTH                                0x1
#define _MDCARH_MDCH2_MASK                                  0x4
#define _MDCARH_MDCH3_POSN                                  0x3
#define _MDCARH_MDCH3_POSITION                              0x3
#define _MDCARH_MDCH3_SIZE                                  0x1
#define _MDCARH_MDCH3_LENGTH                                0x1
#define _MDCARH_MDCH3_MASK                                  0x8

// Register: MDCARL
#define MDCARL MDCARL
extern volatile unsigned char           MDCARL              __at(0x39F);
#ifndef _LIB_BUILD
asm("MDCARL equ 039Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MDCL                   :4;
        unsigned                        :1;
        unsigned MDCLSYNC               :1;
        unsigned MDCLPOL                :1;
    };
    struct {
        unsigned MDCL0                  :1;
        unsigned MDCL1                  :1;
        unsigned MDCL2                  :1;
        unsigned MDCL3                  :1;
    };
} MDCARLbits_t;
extern volatile MDCARLbits_t MDCARLbits __at(0x39F);
// bitfield macros
#define _MDCARL_MDCL_POSN                                   0x0
#define _MDCARL_MDCL_POSITION                               0x0
#define _MDCARL_MDCL_SIZE                                   0x4
#define _MDCARL_MDCL_LENGTH                                 0x4
#define _MDCARL_MDCL_MASK                                   0xF
#define _MDCARL_MDCLSYNC_POSN                               0x5
#define _MDCARL_MDCLSYNC_POSITION                           0x5
#define _MDCARL_MDCLSYNC_SIZE                               0x1
#define _MDCARL_MDCLSYNC_LENGTH                             0x1
#define _MDCARL_MDCLSYNC_MASK                               0x20
#define _MDCARL_MDCLPOL_POSN                                0x6
#define _MDCARL_MDCLPOL_POSITION                            0x6
#define _MDCARL_MDCLPOL_SIZE                                0x1
#define _MDCARL_MDCLPOL_LENGTH                              0x1
#define _MDCARL_MDCLPOL_MASK                                0x40
#define _MDCARL_MDCL0_POSN                                  0x0
#define _MDCARL_MDCL0_POSITION                              0x0
#define _MDCARL_MDCL0_SIZE                                  0x1
#define _MDCARL_MDCL0_LENGTH                                0x1
#define _MDCARL_MDCL0_MASK                                  0x1
#define _MDCARL_MDCL1_POSN                                  0x1
#define _MDCARL_MDCL1_POSITION                              0x1
#define _MDCARL_MDCL1_SIZE                                  0x1
#define _MDCARL_MDCL1_LENGTH                                0x1
#define _MDCARL_MDCL1_MASK                                  0x2
#define _MDCARL_MDCL2_POSN                                  0x2
#define _MDCARL_MDCL2_POSITION                              0x2
#define _MDCARL_MDCL2_SIZE                                  0x1
#define _MDCARL_MDCL2_LENGTH                                0x1
#define _MDCARL_MDCL2_MASK                                  0x4
#define _MDCARL_MDCL3_POSN                                  0x3
#define _MDCARL_MDCL3_POSITION                              0x3
#define _MDCARL_MDCL3_SIZE                                  0x1
#define _MDCARL_MDCL3_LENGTH                                0x1
#define _MDCARL_MDCL3_MASK                                  0x8

// Register: NCO1ACC
#define NCO1ACC NCO1ACC
#ifndef __CCI__
extern volatile __uint24                NCO1ACC             __at(0x498);
#endif
#ifndef _LIB_BUILD
asm("NCO1ACC equ 0498h");
#endif

// Register: NCO1ACCL
#define NCO1ACCL NCO1ACCL
extern volatile unsigned char           NCO1ACCL            __at(0x498);
#ifndef _LIB_BUILD
asm("NCO1ACCL equ 0498h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC                :8;
    };
} NCO1ACCLbits_t;
extern volatile NCO1ACCLbits_t NCO1ACCLbits __at(0x498);
// bitfield macros
#define _NCO1ACCL_NCO1ACC_POSN                              0x0
#define _NCO1ACCL_NCO1ACC_POSITION                          0x0
#define _NCO1ACCL_NCO1ACC_SIZE                              0x8
#define _NCO1ACCL_NCO1ACC_LENGTH                            0x8
#define _NCO1ACCL_NCO1ACC_MASK                              0xFF

// Register: NCO1ACCH
#define NCO1ACCH NCO1ACCH
extern volatile unsigned char           NCO1ACCH            __at(0x499);
#ifndef _LIB_BUILD
asm("NCO1ACCH equ 0499h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC                :8;
    };
} NCO1ACCHbits_t;
extern volatile NCO1ACCHbits_t NCO1ACCHbits __at(0x499);
// bitfield macros
#define _NCO1ACCH_NCO1ACC_POSN                              0x0
#define _NCO1ACCH_NCO1ACC_POSITION                          0x0
#define _NCO1ACCH_NCO1ACC_SIZE                              0x8
#define _NCO1ACCH_NCO1ACC_LENGTH                            0x8
#define _NCO1ACCH_NCO1ACC_MASK                              0xFF

// Register: NCO1ACCU
#define NCO1ACCU NCO1ACCU
extern volatile unsigned char           NCO1ACCU            __at(0x49A);
#ifndef _LIB_BUILD
asm("NCO1ACCU equ 049Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1ACC                :4;
    };
} NCO1ACCUbits_t;
extern volatile NCO1ACCUbits_t NCO1ACCUbits __at(0x49A);
// bitfield macros
#define _NCO1ACCU_NCO1ACC_POSN                              0x0
#define _NCO1ACCU_NCO1ACC_POSITION                          0x0
#define _NCO1ACCU_NCO1ACC_SIZE                              0x4
#define _NCO1ACCU_NCO1ACC_LENGTH                            0x4
#define _NCO1ACCU_NCO1ACC_MASK                              0xF

// Register: NCO1INC
#define NCO1INC NCO1INC
#ifndef __CCI__
extern volatile __uint24                NCO1INC             __at(0x49B);
#endif
#ifndef _LIB_BUILD
asm("NCO1INC equ 049Bh");
#endif

// Register: NCO1INCL
#define NCO1INCL NCO1INCL
extern volatile unsigned char           NCO1INCL            __at(0x49B);
#ifndef _LIB_BUILD
asm("NCO1INCL equ 049Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1INC                :8;
    };
} NCO1INCLbits_t;
extern volatile NCO1INCLbits_t NCO1INCLbits __at(0x49B);
// bitfield macros
#define _NCO1INCL_NCO1INC_POSN                              0x0
#define _NCO1INCL_NCO1INC_POSITION                          0x0
#define _NCO1INCL_NCO1INC_SIZE                              0x8
#define _NCO1INCL_NCO1INC_LENGTH                            0x8
#define _NCO1INCL_NCO1INC_MASK                              0xFF

// Register: NCO1INCH
#define NCO1INCH NCO1INCH
extern volatile unsigned char           NCO1INCH            __at(0x49C);
#ifndef _LIB_BUILD
asm("NCO1INCH equ 049Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1INC                :8;
    };
} NCO1INCHbits_t;
extern volatile NCO1INCHbits_t NCO1INCHbits __at(0x49C);
// bitfield macros
#define _NCO1INCH_NCO1INC_POSN                              0x0
#define _NCO1INCH_NCO1INC_POSITION                          0x0
#define _NCO1INCH_NCO1INC_SIZE                              0x8
#define _NCO1INCH_NCO1INC_LENGTH                            0x8
#define _NCO1INCH_NCO1INC_MASK                              0xFF

// Register: NCO1INCU
#define NCO1INCU NCO1INCU
extern volatile unsigned char           NCO1INCU            __at(0x49D);
#ifndef _LIB_BUILD
asm("NCO1INCU equ 049Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NCO1INC                :4;
    };
} NCO1INCUbits_t;
extern volatile NCO1INCUbits_t NCO1INCUbits __at(0x49D);
// bitfield macros
#define _NCO1INCU_NCO1INC_POSN                              0x0
#define _NCO1INCU_NCO1INC_POSITION                          0x0
#define _NCO1INCU_NCO1INC_SIZE                              0x4
#define _NCO1INCU_NCO1INC_LENGTH                            0x4
#define _NCO1INCU_NCO1INC_MASK                              0xF

// Register: NCO1CON
#define NCO1CON NCO1CON
extern volatile unsigned char           NCO1CON             __at(0x49E);
#ifndef _LIB_BUILD
asm("NCO1CON equ 049Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned N1PFM                  :1;
        unsigned                        :3;
        unsigned N1POL                  :1;
        unsigned N1OUT                  :1;
        unsigned                        :1;
        unsigned N1EN                   :1;
    };
} NCO1CONbits_t;
extern volatile NCO1CONbits_t NCO1CONbits __at(0x49E);
// bitfield macros
#define _NCO1CON_N1PFM_POSN                                 0x0
#define _NCO1CON_N1PFM_POSITION                             0x0
#define _NCO1CON_N1PFM_SIZE                                 0x1
#define _NCO1CON_N1PFM_LENGTH                               0x1
#define _NCO1CON_N1PFM_MASK                                 0x1
#define _NCO1CON_N1POL_POSN                                 0x4
#define _NCO1CON_N1POL_POSITION                             0x4
#define _NCO1CON_N1POL_SIZE                                 0x1
#define _NCO1CON_N1POL_LENGTH                               0x1
#define _NCO1CON_N1POL_MASK                                 0x10
#define _NCO1CON_N1OUT_POSN                                 0x5
#define _NCO1CON_N1OUT_POSITION                             0x5
#define _NCO1CON_N1OUT_SIZE                                 0x1
#define _NCO1CON_N1OUT_LENGTH                               0x1
#define _NCO1CON_N1OUT_MASK                                 0x20
#define _NCO1CON_N1EN_POSN                                  0x7
#define _NCO1CON_N1EN_POSITION                              0x7
#define _NCO1CON_N1EN_SIZE                                  0x1
#define _NCO1CON_N1EN_LENGTH                                0x1
#define _NCO1CON_N1EN_MASK                                  0x80

// Register: NCO1CLK
#define NCO1CLK NCO1CLK
extern volatile unsigned char           NCO1CLK             __at(0x49F);
#ifndef _LIB_BUILD
asm("NCO1CLK equ 049Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned N1CKS                  :2;
        unsigned                        :3;
        unsigned N1PWS                  :3;
    };
} NCO1CLKbits_t;
extern volatile NCO1CLKbits_t NCO1CLKbits __at(0x49F);
// bitfield macros
#define _NCO1CLK_N1CKS_POSN                                 0x0
#define _NCO1CLK_N1CKS_POSITION                             0x0
#define _NCO1CLK_N1CKS_SIZE                                 0x2
#define _NCO1CLK_N1CKS_LENGTH                               0x2
#define _NCO1CLK_N1CKS_MASK                                 0x3
#define _NCO1CLK_N1PWS_POSN                                 0x5
#define _NCO1CLK_N1PWS_POSITION                             0x5
#define _NCO1CLK_N1PWS_SIZE                                 0x3
#define _NCO1CLK_N1PWS_LENGTH                               0x3
#define _NCO1CLK_N1PWS_MASK                                 0xE0

// Register: PWM5DCL
#define PWM5DCL PWM5DCL
extern volatile unsigned char           PWM5DCL             __at(0x617);
#ifndef _LIB_BUILD
asm("PWM5DCL equ 0617h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PWM5DCL                :2;
    };
    struct {
        unsigned                        :6;
        unsigned PWM5DCL0               :1;
        unsigned PWM5DCL1               :1;
    };
} PWM5DCLbits_t;
extern volatile PWM5DCLbits_t PWM5DCLbits __at(0x617);
// bitfield macros
#define _PWM5DCL_PWM5DCL_POSN                               0x6
#define _PWM5DCL_PWM5DCL_POSITION                           0x6
#define _PWM5DCL_PWM5DCL_SIZE                               0x2
#define _PWM5DCL_PWM5DCL_LENGTH                             0x2
#define _PWM5DCL_PWM5DCL_MASK                               0xC0
#define _PWM5DCL_PWM5DCL0_POSN                              0x6
#define _PWM5DCL_PWM5DCL0_POSITION                          0x6
#define _PWM5DCL_PWM5DCL0_SIZE                              0x1
#define _PWM5DCL_PWM5DCL0_LENGTH                            0x1
#define _PWM5DCL_PWM5DCL0_MASK                              0x40
#define _PWM5DCL_PWM5DCL1_POSN                              0x7
#define _PWM5DCL_PWM5DCL1_POSITION                          0x7
#define _PWM5DCL_PWM5DCL1_SIZE                              0x1
#define _PWM5DCL_PWM5DCL1_LENGTH                            0x1
#define _PWM5DCL_PWM5DCL1_MASK                              0x80

// Register: PWM5DCH
#define PWM5DCH PWM5DCH
extern volatile unsigned char           PWM5DCH             __at(0x618);
#ifndef _LIB_BUILD
asm("PWM5DCH equ 0618h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM5DCH                :8;
    };
    struct {
        unsigned PWM5DCH0               :1;
        unsigned PWM5DCH1               :1;
        unsigned PWM5DCH2               :1;
        unsigned PWM5DCH3               :1;
        unsigned PWM5DCH4               :1;
        unsigned PWM5DCH5               :1;
        unsigned PWM5DCH6               :1;
        unsigned PWM5DCH7               :1;
    };
} PWM5DCHbits_t;
extern volatile PWM5DCHbits_t PWM5DCHbits __at(0x618);
// bitfield macros
#define _PWM5DCH_PWM5DCH_POSN                               0x0
#define _PWM5DCH_PWM5DCH_POSITION                           0x0
#define _PWM5DCH_PWM5DCH_SIZE                               0x8
#define _PWM5DCH_PWM5DCH_LENGTH                             0x8
#define _PWM5DCH_PWM5DCH_MASK                               0xFF
#define _PWM5DCH_PWM5DCH0_POSN                              0x0
#define _PWM5DCH_PWM5DCH0_POSITION                          0x0
#define _PWM5DCH_PWM5DCH0_SIZE                              0x1
#define _PWM5DCH_PWM5DCH0_LENGTH                            0x1
#define _PWM5DCH_PWM5DCH0_MASK                              0x1
#define _PWM5DCH_PWM5DCH1_POSN                              0x1
#define _PWM5DCH_PWM5DCH1_POSITION                          0x1
#define _PWM5DCH_PWM5DCH1_SIZE                              0x1
#define _PWM5DCH_PWM5DCH1_LENGTH                            0x1
#define _PWM5DCH_PWM5DCH1_MASK                              0x2
#define _PWM5DCH_PWM5DCH2_POSN                              0x2
#define _PWM5DCH_PWM5DCH2_POSITION                          0x2
#define _PWM5DCH_PWM5DCH2_SIZE                              0x1
#define _PWM5DCH_PWM5DCH2_LENGTH                            0x1
#define _PWM5DCH_PWM5DCH2_MASK                              0x4
#define _PWM5DCH_PWM5DCH3_POSN                              0x3
#define _PWM5DCH_PWM5DCH3_POSITION                          0x3
#define _PWM5DCH_PWM5DCH3_SIZE                              0x1
#define _PWM5DCH_PWM5DCH3_LENGTH                            0x1
#define _PWM5DCH_PWM5DCH3_MASK                              0x8
#define _PWM5DCH_PWM5DCH4_POSN                              0x4
#define _PWM5DCH_PWM5DCH4_POSITION                          0x4
#define _PWM5DCH_PWM5DCH4_SIZE                              0x1
#define _PWM5DCH_PWM5DCH4_LENGTH                            0x1
#define _PWM5DCH_PWM5DCH4_MASK                              0x10
#define _PWM5DCH_PWM5DCH5_POSN                              0x5
#define _PWM5DCH_PWM5DCH5_POSITION                          0x5
#define _PWM5DCH_PWM5DCH5_SIZE                              0x1
#define _PWM5DCH_PWM5DCH5_LENGTH                            0x1
#define _PWM5DCH_PWM5DCH5_MASK                              0x20
#define _PWM5DCH_PWM5DCH6_POSN                              0x6
#define _PWM5DCH_PWM5DCH6_POSITION                          0x6
#define _PWM5DCH_PWM5DCH6_SIZE                              0x1
#define _PWM5DCH_PWM5DCH6_LENGTH                            0x1
#define _PWM5DCH_PWM5DCH6_MASK                              0x40
#define _PWM5DCH_PWM5DCH7_POSN                              0x7
#define _PWM5DCH_PWM5DCH7_POSITION                          0x7
#define _PWM5DCH_PWM5DCH7_SIZE                              0x1
#define _PWM5DCH_PWM5DCH7_LENGTH                            0x1
#define _PWM5DCH_PWM5DCH7_MASK                              0x80

// Register: PWM5CON
#define PWM5CON PWM5CON
extern volatile unsigned char           PWM5CON             __at(0x619);
#ifndef _LIB_BUILD
asm("PWM5CON equ 0619h");
#endif
// aliases
extern volatile unsigned char           PWM5CON0            __at(0x619);
#ifndef _LIB_BUILD
asm("PWM5CON0 equ 0619h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM5POL                :1;
        unsigned PWM5OUT                :1;
        unsigned                        :1;
        unsigned PWM5EN                 :1;
    };
} PWM5CONbits_t;
extern volatile PWM5CONbits_t PWM5CONbits __at(0x619);
// bitfield macros
#define _PWM5CON_PWM5POL_POSN                               0x4
#define _PWM5CON_PWM5POL_POSITION                           0x4
#define _PWM5CON_PWM5POL_SIZE                               0x1
#define _PWM5CON_PWM5POL_LENGTH                             0x1
#define _PWM5CON_PWM5POL_MASK                               0x10
#define _PWM5CON_PWM5OUT_POSN                               0x5
#define _PWM5CON_PWM5OUT_POSITION                           0x5
#define _PWM5CON_PWM5OUT_SIZE                               0x1
#define _PWM5CON_PWM5OUT_LENGTH                             0x1
#define _PWM5CON_PWM5OUT_MASK                               0x20
#define _PWM5CON_PWM5EN_POSN                                0x7
#define _PWM5CON_PWM5EN_POSITION                            0x7
#define _PWM5CON_PWM5EN_SIZE                                0x1
#define _PWM5CON_PWM5EN_LENGTH                              0x1
#define _PWM5CON_PWM5EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM5POL                :1;
        unsigned PWM5OUT                :1;
        unsigned                        :1;
        unsigned PWM5EN                 :1;
    };
} PWM5CON0bits_t;
extern volatile PWM5CON0bits_t PWM5CON0bits __at(0x619);
// bitfield macros
#define _PWM5CON0_PWM5POL_POSN                              0x4
#define _PWM5CON0_PWM5POL_POSITION                          0x4
#define _PWM5CON0_PWM5POL_SIZE                              0x1
#define _PWM5CON0_PWM5POL_LENGTH                            0x1
#define _PWM5CON0_PWM5POL_MASK                              0x10
#define _PWM5CON0_PWM5OUT_POSN                              0x5
#define _PWM5CON0_PWM5OUT_POSITION                          0x5
#define _PWM5CON0_PWM5OUT_SIZE                              0x1
#define _PWM5CON0_PWM5OUT_LENGTH                            0x1
#define _PWM5CON0_PWM5OUT_MASK                              0x20
#define _PWM5CON0_PWM5EN_POSN                               0x7
#define _PWM5CON0_PWM5EN_POSITION                           0x7
#define _PWM5CON0_PWM5EN_SIZE                               0x1
#define _PWM5CON0_PWM5EN_LENGTH                             0x1
#define _PWM5CON0_PWM5EN_MASK                               0x80

// Register: PWM6DCL
#define PWM6DCL PWM6DCL
extern volatile unsigned char           PWM6DCL             __at(0x61A);
#ifndef _LIB_BUILD
asm("PWM6DCL equ 061Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :6;
        unsigned PWM6DCL                :2;
    };
    struct {
        unsigned                        :6;
        unsigned PWM6DCL0               :1;
        unsigned PWM6DCL1               :1;
    };
} PWM6DCLbits_t;
extern volatile PWM6DCLbits_t PWM6DCLbits __at(0x61A);
// bitfield macros
#define _PWM6DCL_PWM6DCL_POSN                               0x6
#define _PWM6DCL_PWM6DCL_POSITION                           0x6
#define _PWM6DCL_PWM6DCL_SIZE                               0x2
#define _PWM6DCL_PWM6DCL_LENGTH                             0x2
#define _PWM6DCL_PWM6DCL_MASK                               0xC0
#define _PWM6DCL_PWM6DCL0_POSN                              0x6
#define _PWM6DCL_PWM6DCL0_POSITION                          0x6
#define _PWM6DCL_PWM6DCL0_SIZE                              0x1
#define _PWM6DCL_PWM6DCL0_LENGTH                            0x1
#define _PWM6DCL_PWM6DCL0_MASK                              0x40
#define _PWM6DCL_PWM6DCL1_POSN                              0x7
#define _PWM6DCL_PWM6DCL1_POSITION                          0x7
#define _PWM6DCL_PWM6DCL1_SIZE                              0x1
#define _PWM6DCL_PWM6DCL1_LENGTH                            0x1
#define _PWM6DCL_PWM6DCL1_MASK                              0x80

// Register: PWM6DCH
#define PWM6DCH PWM6DCH
extern volatile unsigned char           PWM6DCH             __at(0x61B);
#ifndef _LIB_BUILD
asm("PWM6DCH equ 061Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PWM6DCH                :8;
    };
    struct {
        unsigned PWM6DCH0               :1;
        unsigned PWM6DCH1               :1;
        unsigned PWM6DCH2               :1;
        unsigned PWM6DCH3               :1;
        unsigned PWM6DCH4               :1;
        unsigned PWM6DCH5               :1;
        unsigned PWM6DCH6               :1;
        unsigned PWM6DCH7               :1;
    };
} PWM6DCHbits_t;
extern volatile PWM6DCHbits_t PWM6DCHbits __at(0x61B);
// bitfield macros
#define _PWM6DCH_PWM6DCH_POSN                               0x0
#define _PWM6DCH_PWM6DCH_POSITION                           0x0
#define _PWM6DCH_PWM6DCH_SIZE                               0x8
#define _PWM6DCH_PWM6DCH_LENGTH                             0x8
#define _PWM6DCH_PWM6DCH_MASK                               0xFF
#define _PWM6DCH_PWM6DCH0_POSN                              0x0
#define _PWM6DCH_PWM6DCH0_POSITION                          0x0
#define _PWM6DCH_PWM6DCH0_SIZE                              0x1
#define _PWM6DCH_PWM6DCH0_LENGTH                            0x1
#define _PWM6DCH_PWM6DCH0_MASK                              0x1
#define _PWM6DCH_PWM6DCH1_POSN                              0x1
#define _PWM6DCH_PWM6DCH1_POSITION                          0x1
#define _PWM6DCH_PWM6DCH1_SIZE                              0x1
#define _PWM6DCH_PWM6DCH1_LENGTH                            0x1
#define _PWM6DCH_PWM6DCH1_MASK                              0x2
#define _PWM6DCH_PWM6DCH2_POSN                              0x2
#define _PWM6DCH_PWM6DCH2_POSITION                          0x2
#define _PWM6DCH_PWM6DCH2_SIZE                              0x1
#define _PWM6DCH_PWM6DCH2_LENGTH                            0x1
#define _PWM6DCH_PWM6DCH2_MASK                              0x4
#define _PWM6DCH_PWM6DCH3_POSN                              0x3
#define _PWM6DCH_PWM6DCH3_POSITION                          0x3
#define _PWM6DCH_PWM6DCH3_SIZE                              0x1
#define _PWM6DCH_PWM6DCH3_LENGTH                            0x1
#define _PWM6DCH_PWM6DCH3_MASK                              0x8
#define _PWM6DCH_PWM6DCH4_POSN                              0x4
#define _PWM6DCH_PWM6DCH4_POSITION                          0x4
#define _PWM6DCH_PWM6DCH4_SIZE                              0x1
#define _PWM6DCH_PWM6DCH4_LENGTH                            0x1
#define _PWM6DCH_PWM6DCH4_MASK                              0x10
#define _PWM6DCH_PWM6DCH5_POSN                              0x5
#define _PWM6DCH_PWM6DCH5_POSITION                          0x5
#define _PWM6DCH_PWM6DCH5_SIZE                              0x1
#define _PWM6DCH_PWM6DCH5_LENGTH                            0x1
#define _PWM6DCH_PWM6DCH5_MASK                              0x20
#define _PWM6DCH_PWM6DCH6_POSN                              0x6
#define _PWM6DCH_PWM6DCH6_POSITION                          0x6
#define _PWM6DCH_PWM6DCH6_SIZE                              0x1
#define _PWM6DCH_PWM6DCH6_LENGTH                            0x1
#define _PWM6DCH_PWM6DCH6_MASK                              0x40
#define _PWM6DCH_PWM6DCH7_POSN                              0x7
#define _PWM6DCH_PWM6DCH7_POSITION                          0x7
#define _PWM6DCH_PWM6DCH7_SIZE                              0x1
#define _PWM6DCH_PWM6DCH7_LENGTH                            0x1
#define _PWM6DCH_PWM6DCH7_MASK                              0x80

// Register: PWM6CON
#define PWM6CON PWM6CON
extern volatile unsigned char           PWM6CON             __at(0x61C);
#ifndef _LIB_BUILD
asm("PWM6CON equ 061Ch");
#endif
// aliases
extern volatile unsigned char           PWM6CON0            __at(0x61C);
#ifndef _LIB_BUILD
asm("PWM6CON0 equ 061Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM6POL                :1;
        unsigned PWM6OUT                :1;
        unsigned                        :1;
        unsigned PWM6EN                 :1;
    };
} PWM6CONbits_t;
extern volatile PWM6CONbits_t PWM6CONbits __at(0x61C);
// bitfield macros
#define _PWM6CON_PWM6POL_POSN                               0x4
#define _PWM6CON_PWM6POL_POSITION                           0x4
#define _PWM6CON_PWM6POL_SIZE                               0x1
#define _PWM6CON_PWM6POL_LENGTH                             0x1
#define _PWM6CON_PWM6POL_MASK                               0x10
#define _PWM6CON_PWM6OUT_POSN                               0x5
#define _PWM6CON_PWM6OUT_POSITION                           0x5
#define _PWM6CON_PWM6OUT_SIZE                               0x1
#define _PWM6CON_PWM6OUT_LENGTH                             0x1
#define _PWM6CON_PWM6OUT_MASK                               0x20
#define _PWM6CON_PWM6EN_POSN                                0x7
#define _PWM6CON_PWM6EN_POSITION                            0x7
#define _PWM6CON_PWM6EN_SIZE                                0x1
#define _PWM6CON_PWM6EN_LENGTH                              0x1
#define _PWM6CON_PWM6EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned PWM6POL                :1;
        unsigned PWM6OUT                :1;
        unsigned                        :1;
        unsigned PWM6EN                 :1;
    };
} PWM6CON0bits_t;
extern volatile PWM6CON0bits_t PWM6CON0bits __at(0x61C);
// bitfield macros
#define _PWM6CON0_PWM6POL_POSN                              0x4
#define _PWM6CON0_PWM6POL_POSITION                          0x4
#define _PWM6CON0_PWM6POL_SIZE                              0x1
#define _PWM6CON0_PWM6POL_LENGTH                            0x1
#define _PWM6CON0_PWM6POL_MASK                              0x10
#define _PWM6CON0_PWM6OUT_POSN                              0x5
#define _PWM6CON0_PWM6OUT_POSITION                          0x5
#define _PWM6CON0_PWM6OUT_SIZE                              0x1
#define _PWM6CON0_PWM6OUT_LENGTH                            0x1
#define _PWM6CON0_PWM6OUT_MASK                              0x20
#define _PWM6CON0_PWM6EN_POSN                               0x7
#define _PWM6CON0_PWM6EN_POSITION                           0x7
#define _PWM6CON0_PWM6EN_SIZE                               0x1
#define _PWM6CON0_PWM6EN_LENGTH                             0x1
#define _PWM6CON0_PWM6EN_MASK                               0x80

// Register: CWG1CLKCON
#define CWG1CLKCON CWG1CLKCON
extern volatile unsigned char           CWG1CLKCON          __at(0x691);
#ifndef _LIB_BUILD
asm("CWG1CLKCON equ 0691h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CS                     :1;
    };
    struct {
        unsigned CWG1CS                 :1;
    };
} CWG1CLKCONbits_t;
extern volatile CWG1CLKCONbits_t CWG1CLKCONbits __at(0x691);
// bitfield macros
#define _CWG1CLKCON_CS_POSN                                 0x0
#define _CWG1CLKCON_CS_POSITION                             0x0
#define _CWG1CLKCON_CS_SIZE                                 0x1
#define _CWG1CLKCON_CS_LENGTH                               0x1
#define _CWG1CLKCON_CS_MASK                                 0x1
#define _CWG1CLKCON_CWG1CS_POSN                             0x0
#define _CWG1CLKCON_CWG1CS_POSITION                         0x0
#define _CWG1CLKCON_CWG1CS_SIZE                             0x1
#define _CWG1CLKCON_CWG1CS_LENGTH                           0x1
#define _CWG1CLKCON_CWG1CS_MASK                             0x1

// Register: CWG1DAT
#define CWG1DAT CWG1DAT
extern volatile unsigned char           CWG1DAT             __at(0x692);
#ifndef _LIB_BUILD
asm("CWG1DAT equ 0692h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAT                    :4;
    };
    struct {
        unsigned CWG1DAT0               :1;
        unsigned CWG1DAT1               :1;
        unsigned CWG1DAT2               :1;
        unsigned CWG1DAT3               :1;
    };
} CWG1DATbits_t;
extern volatile CWG1DATbits_t CWG1DATbits __at(0x692);
// bitfield macros
#define _CWG1DAT_DAT_POSN                                   0x0
#define _CWG1DAT_DAT_POSITION                               0x0
#define _CWG1DAT_DAT_SIZE                                   0x4
#define _CWG1DAT_DAT_LENGTH                                 0x4
#define _CWG1DAT_DAT_MASK                                   0xF
#define _CWG1DAT_CWG1DAT0_POSN                              0x0
#define _CWG1DAT_CWG1DAT0_POSITION                          0x0
#define _CWG1DAT_CWG1DAT0_SIZE                              0x1
#define _CWG1DAT_CWG1DAT0_LENGTH                            0x1
#define _CWG1DAT_CWG1DAT0_MASK                              0x1
#define _CWG1DAT_CWG1DAT1_POSN                              0x1
#define _CWG1DAT_CWG1DAT1_POSITION                          0x1
#define _CWG1DAT_CWG1DAT1_SIZE                              0x1
#define _CWG1DAT_CWG1DAT1_LENGTH                            0x1
#define _CWG1DAT_CWG1DAT1_MASK                              0x2
#define _CWG1DAT_CWG1DAT2_POSN                              0x2
#define _CWG1DAT_CWG1DAT2_POSITION                          0x2
#define _CWG1DAT_CWG1DAT2_SIZE                              0x1
#define _CWG1DAT_CWG1DAT2_LENGTH                            0x1
#define _CWG1DAT_CWG1DAT2_MASK                              0x4
#define _CWG1DAT_CWG1DAT3_POSN                              0x3
#define _CWG1DAT_CWG1DAT3_POSITION                          0x3
#define _CWG1DAT_CWG1DAT3_SIZE                              0x1
#define _CWG1DAT_CWG1DAT3_LENGTH                            0x1
#define _CWG1DAT_CWG1DAT3_MASK                              0x8

// Register: CWG1DBR
#define CWG1DBR CWG1DBR
extern volatile unsigned char           CWG1DBR             __at(0x693);
#ifndef _LIB_BUILD
asm("CWG1DBR equ 0693h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DBR                    :6;
    };
    struct {
        unsigned DBR0                   :1;
        unsigned DBR1                   :1;
        unsigned DBR2                   :1;
        unsigned DBR3                   :1;
        unsigned DBR4                   :1;
        unsigned DBR5                   :1;
    };
    struct {
        unsigned CWG1DBR                :6;
    };
    struct {
        unsigned CWG1DBR0               :1;
        unsigned CWG1DBR1               :1;
        unsigned CWG1DBR2               :1;
        unsigned CWG1DBR3               :1;
        unsigned CWG1DBR4               :1;
        unsigned CWG1DBR5               :1;
    };
} CWG1DBRbits_t;
extern volatile CWG1DBRbits_t CWG1DBRbits __at(0x693);
// bitfield macros
#define _CWG1DBR_DBR_POSN                                   0x0
#define _CWG1DBR_DBR_POSITION                               0x0
#define _CWG1DBR_DBR_SIZE                                   0x6
#define _CWG1DBR_DBR_LENGTH                                 0x6
#define _CWG1DBR_DBR_MASK                                   0x3F
#define _CWG1DBR_DBR0_POSN                                  0x0
#define _CWG1DBR_DBR0_POSITION                              0x0
#define _CWG1DBR_DBR0_SIZE                                  0x1
#define _CWG1DBR_DBR0_LENGTH                                0x1
#define _CWG1DBR_DBR0_MASK                                  0x1
#define _CWG1DBR_DBR1_POSN                                  0x1
#define _CWG1DBR_DBR1_POSITION                              0x1
#define _CWG1DBR_DBR1_SIZE                                  0x1
#define _CWG1DBR_DBR1_LENGTH                                0x1
#define _CWG1DBR_DBR1_MASK                                  0x2
#define _CWG1DBR_DBR2_POSN                                  0x2
#define _CWG1DBR_DBR2_POSITION                              0x2
#define _CWG1DBR_DBR2_SIZE                                  0x1
#define _CWG1DBR_DBR2_LENGTH                                0x1
#define _CWG1DBR_DBR2_MASK                                  0x4
#define _CWG1DBR_DBR3_POSN                                  0x3
#define _CWG1DBR_DBR3_POSITION                              0x3
#define _CWG1DBR_DBR3_SIZE                                  0x1
#define _CWG1DBR_DBR3_LENGTH                                0x1
#define _CWG1DBR_DBR3_MASK                                  0x8
#define _CWG1DBR_DBR4_POSN                                  0x4
#define _CWG1DBR_DBR4_POSITION                              0x4
#define _CWG1DBR_DBR4_SIZE                                  0x1
#define _CWG1DBR_DBR4_LENGTH                                0x1
#define _CWG1DBR_DBR4_MASK                                  0x10
#define _CWG1DBR_DBR5_POSN                                  0x5
#define _CWG1DBR_DBR5_POSITION                              0x5
#define _CWG1DBR_DBR5_SIZE                                  0x1
#define _CWG1DBR_DBR5_LENGTH                                0x1
#define _CWG1DBR_DBR5_MASK                                  0x20
#define _CWG1DBR_CWG1DBR_POSN                               0x0
#define _CWG1DBR_CWG1DBR_POSITION                           0x0
#define _CWG1DBR_CWG1DBR_SIZE                               0x6
#define _CWG1DBR_CWG1DBR_LENGTH                             0x6
#define _CWG1DBR_CWG1DBR_MASK                               0x3F
#define _CWG1DBR_CWG1DBR0_POSN                              0x0
#define _CWG1DBR_CWG1DBR0_POSITION                          0x0
#define _CWG1DBR_CWG1DBR0_SIZE                              0x1
#define _CWG1DBR_CWG1DBR0_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR0_MASK                              0x1
#define _CWG1DBR_CWG1DBR1_POSN                              0x1
#define _CWG1DBR_CWG1DBR1_POSITION                          0x1
#define _CWG1DBR_CWG1DBR1_SIZE                              0x1
#define _CWG1DBR_CWG1DBR1_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR1_MASK                              0x2
#define _CWG1DBR_CWG1DBR2_POSN                              0x2
#define _CWG1DBR_CWG1DBR2_POSITION                          0x2
#define _CWG1DBR_CWG1DBR2_SIZE                              0x1
#define _CWG1DBR_CWG1DBR2_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR2_MASK                              0x4
#define _CWG1DBR_CWG1DBR3_POSN                              0x3
#define _CWG1DBR_CWG1DBR3_POSITION                          0x3
#define _CWG1DBR_CWG1DBR3_SIZE                              0x1
#define _CWG1DBR_CWG1DBR3_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR3_MASK                              0x8
#define _CWG1DBR_CWG1DBR4_POSN                              0x4
#define _CWG1DBR_CWG1DBR4_POSITION                          0x4
#define _CWG1DBR_CWG1DBR4_SIZE                              0x1
#define _CWG1DBR_CWG1DBR4_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR4_MASK                              0x10
#define _CWG1DBR_CWG1DBR5_POSN                              0x5
#define _CWG1DBR_CWG1DBR5_POSITION                          0x5
#define _CWG1DBR_CWG1DBR5_SIZE                              0x1
#define _CWG1DBR_CWG1DBR5_LENGTH                            0x1
#define _CWG1DBR_CWG1DBR5_MASK                              0x20

// Register: CWG1DBF
#define CWG1DBF CWG1DBF
extern volatile unsigned char           CWG1DBF             __at(0x694);
#ifndef _LIB_BUILD
asm("CWG1DBF equ 0694h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DBF                    :6;
    };
    struct {
        unsigned DBF0                   :1;
        unsigned DBF1                   :1;
        unsigned DBF2                   :1;
        unsigned DBF3                   :1;
        unsigned DBF4                   :1;
        unsigned DBF5                   :1;
    };
    struct {
        unsigned CWG1DBF                :6;
    };
    struct {
        unsigned CWG1DBF0               :1;
        unsigned CWG1DBF1               :1;
        unsigned CWG1DBF2               :1;
        unsigned CWG1DBF3               :1;
        unsigned CWG1DBF4               :1;
        unsigned CWG1DBF5               :1;
    };
} CWG1DBFbits_t;
extern volatile CWG1DBFbits_t CWG1DBFbits __at(0x694);
// bitfield macros
#define _CWG1DBF_DBF_POSN                                   0x0
#define _CWG1DBF_DBF_POSITION                               0x0
#define _CWG1DBF_DBF_SIZE                                   0x6
#define _CWG1DBF_DBF_LENGTH                                 0x6
#define _CWG1DBF_DBF_MASK                                   0x3F
#define _CWG1DBF_DBF0_POSN                                  0x0
#define _CWG1DBF_DBF0_POSITION                              0x0
#define _CWG1DBF_DBF0_SIZE                                  0x1
#define _CWG1DBF_DBF0_LENGTH                                0x1
#define _CWG1DBF_DBF0_MASK                                  0x1
#define _CWG1DBF_DBF1_POSN                                  0x1
#define _CWG1DBF_DBF1_POSITION                              0x1
#define _CWG1DBF_DBF1_SIZE                                  0x1
#define _CWG1DBF_DBF1_LENGTH                                0x1
#define _CWG1DBF_DBF1_MASK                                  0x2
#define _CWG1DBF_DBF2_POSN                                  0x2
#define _CWG1DBF_DBF2_POSITION                              0x2
#define _CWG1DBF_DBF2_SIZE                                  0x1
#define _CWG1DBF_DBF2_LENGTH                                0x1
#define _CWG1DBF_DBF2_MASK                                  0x4
#define _CWG1DBF_DBF3_POSN                                  0x3
#define _CWG1DBF_DBF3_POSITION                              0x3
#define _CWG1DBF_DBF3_SIZE                                  0x1
#define _CWG1DBF_DBF3_LENGTH                                0x1
#define _CWG1DBF_DBF3_MASK                                  0x8
#define _CWG1DBF_DBF4_POSN                                  0x4
#define _CWG1DBF_DBF4_POSITION                              0x4
#define _CWG1DBF_DBF4_SIZE                                  0x1
#define _CWG1DBF_DBF4_LENGTH                                0x1
#define _CWG1DBF_DBF4_MASK                                  0x10
#define _CWG1DBF_DBF5_POSN                                  0x5
#define _CWG1DBF_DBF5_POSITION                              0x5
#define _CWG1DBF_DBF5_SIZE                                  0x1
#define _CWG1DBF_DBF5_LENGTH                                0x1
#define _CWG1DBF_DBF5_MASK                                  0x20
#define _CWG1DBF_CWG1DBF_POSN                               0x0
#define _CWG1DBF_CWG1DBF_POSITION                           0x0
#define _CWG1DBF_CWG1DBF_SIZE                               0x6
#define _CWG1DBF_CWG1DBF_LENGTH                             0x6
#define _CWG1DBF_CWG1DBF_MASK                               0x3F
#define _CWG1DBF_CWG1DBF0_POSN                              0x0
#define _CWG1DBF_CWG1DBF0_POSITION                          0x0
#define _CWG1DBF_CWG1DBF0_SIZE                              0x1
#define _CWG1DBF_CWG1DBF0_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF0_MASK                              0x1
#define _CWG1DBF_CWG1DBF1_POSN                              0x1
#define _CWG1DBF_CWG1DBF1_POSITION                          0x1
#define _CWG1DBF_CWG1DBF1_SIZE                              0x1
#define _CWG1DBF_CWG1DBF1_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF1_MASK                              0x2
#define _CWG1DBF_CWG1DBF2_POSN                              0x2
#define _CWG1DBF_CWG1DBF2_POSITION                          0x2
#define _CWG1DBF_CWG1DBF2_SIZE                              0x1
#define _CWG1DBF_CWG1DBF2_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF2_MASK                              0x4
#define _CWG1DBF_CWG1DBF3_POSN                              0x3
#define _CWG1DBF_CWG1DBF3_POSITION                          0x3
#define _CWG1DBF_CWG1DBF3_SIZE                              0x1
#define _CWG1DBF_CWG1DBF3_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF3_MASK                              0x8
#define _CWG1DBF_CWG1DBF4_POSN                              0x4
#define _CWG1DBF_CWG1DBF4_POSITION                          0x4
#define _CWG1DBF_CWG1DBF4_SIZE                              0x1
#define _CWG1DBF_CWG1DBF4_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF4_MASK                              0x10
#define _CWG1DBF_CWG1DBF5_POSN                              0x5
#define _CWG1DBF_CWG1DBF5_POSITION                          0x5
#define _CWG1DBF_CWG1DBF5_SIZE                              0x1
#define _CWG1DBF_CWG1DBF5_LENGTH                            0x1
#define _CWG1DBF_CWG1DBF5_MASK                              0x20

// Register: CWG1CON0
#define CWG1CON0 CWG1CON0
extern volatile unsigned char           CWG1CON0            __at(0x695);
#ifndef _LIB_BUILD
asm("CWG1CON0 equ 0695h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MODE                   :3;
        unsigned                        :3;
        unsigned LD                     :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
        unsigned                        :4;
        unsigned G1EN                   :1;
    };
    struct {
        unsigned CWG1MODE               :3;
        unsigned                        :3;
        unsigned CWG1LD                 :1;
        unsigned CWG1EN                 :1;
    };
    struct {
        unsigned CWG1MODE0              :1;
        unsigned CWG1MODE1              :1;
        unsigned CWG1MODE2              :1;
    };
} CWG1CON0bits_t;
extern volatile CWG1CON0bits_t CWG1CON0bits __at(0x695);
// bitfield macros
#define _CWG1CON0_MODE_POSN                                 0x0
#define _CWG1CON0_MODE_POSITION                             0x0
#define _CWG1CON0_MODE_SIZE                                 0x3
#define _CWG1CON0_MODE_LENGTH                               0x3
#define _CWG1CON0_MODE_MASK                                 0x7
#define _CWG1CON0_LD_POSN                                   0x6
#define _CWG1CON0_LD_POSITION                               0x6
#define _CWG1CON0_LD_SIZE                                   0x1
#define _CWG1CON0_LD_LENGTH                                 0x1
#define _CWG1CON0_LD_MASK                                   0x40
#define _CWG1CON0_EN_POSN                                   0x7
#define _CWG1CON0_EN_POSITION                               0x7
#define _CWG1CON0_EN_SIZE                                   0x1
#define _CWG1CON0_EN_LENGTH                                 0x1
#define _CWG1CON0_EN_MASK                                   0x80
#define _CWG1CON0_MODE0_POSN                                0x0
#define _CWG1CON0_MODE0_POSITION                            0x0
#define _CWG1CON0_MODE0_SIZE                                0x1
#define _CWG1CON0_MODE0_LENGTH                              0x1
#define _CWG1CON0_MODE0_MASK                                0x1
#define _CWG1CON0_MODE1_POSN                                0x1
#define _CWG1CON0_MODE1_POSITION                            0x1
#define _CWG1CON0_MODE1_SIZE                                0x1
#define _CWG1CON0_MODE1_LENGTH                              0x1
#define _CWG1CON0_MODE1_MASK                                0x2
#define _CWG1CON0_MODE2_POSN                                0x2
#define _CWG1CON0_MODE2_POSITION                            0x2
#define _CWG1CON0_MODE2_SIZE                                0x1
#define _CWG1CON0_MODE2_LENGTH                              0x1
#define _CWG1CON0_MODE2_MASK                                0x4
#define _CWG1CON0_G1EN_POSN                                 0x7
#define _CWG1CON0_G1EN_POSITION                             0x7
#define _CWG1CON0_G1EN_SIZE                                 0x1
#define _CWG1CON0_G1EN_LENGTH                               0x1
#define _CWG1CON0_G1EN_MASK                                 0x80
#define _CWG1CON0_CWG1MODE_POSN                             0x0
#define _CWG1CON0_CWG1MODE_POSITION                         0x0
#define _CWG1CON0_CWG1MODE_SIZE                             0x3
#define _CWG1CON0_CWG1MODE_LENGTH                           0x3
#define _CWG1CON0_CWG1MODE_MASK                             0x7
#define _CWG1CON0_CWG1LD_POSN                               0x6
#define _CWG1CON0_CWG1LD_POSITION                           0x6
#define _CWG1CON0_CWG1LD_SIZE                               0x1
#define _CWG1CON0_CWG1LD_LENGTH                             0x1
#define _CWG1CON0_CWG1LD_MASK                               0x40
#define _CWG1CON0_CWG1EN_POSN                               0x7
#define _CWG1CON0_CWG1EN_POSITION                           0x7
#define _CWG1CON0_CWG1EN_SIZE                               0x1
#define _CWG1CON0_CWG1EN_LENGTH                             0x1
#define _CWG1CON0_CWG1EN_MASK                               0x80
#define _CWG1CON0_CWG1MODE0_POSN                            0x0
#define _CWG1CON0_CWG1MODE0_POSITION                        0x0
#define _CWG1CON0_CWG1MODE0_SIZE                            0x1
#define _CWG1CON0_CWG1MODE0_LENGTH                          0x1
#define _CWG1CON0_CWG1MODE0_MASK                            0x1
#define _CWG1CON0_CWG1MODE1_POSN                            0x1
#define _CWG1CON0_CWG1MODE1_POSITION                        0x1
#define _CWG1CON0_CWG1MODE1_SIZE                            0x1
#define _CWG1CON0_CWG1MODE1_LENGTH                          0x1
#define _CWG1CON0_CWG1MODE1_MASK                            0x2
#define _CWG1CON0_CWG1MODE2_POSN                            0x2
#define _CWG1CON0_CWG1MODE2_POSITION                        0x2
#define _CWG1CON0_CWG1MODE2_SIZE                            0x1
#define _CWG1CON0_CWG1MODE2_LENGTH                          0x1
#define _CWG1CON0_CWG1MODE2_MASK                            0x4

// Register: CWG1CON1
#define CWG1CON1 CWG1CON1
extern volatile unsigned char           CWG1CON1            __at(0x696);
#ifndef _LIB_BUILD
asm("CWG1CON1 equ 0696h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned POLA                   :1;
        unsigned POLB                   :1;
        unsigned POLC                   :1;
        unsigned POLD                   :1;
        unsigned                        :1;
        unsigned IN                     :1;
    };
    struct {
        unsigned CWG1POLA               :1;
        unsigned CWG1POLB               :1;
        unsigned CWG1POLC               :1;
        unsigned CWG1POLD               :1;
        unsigned                        :1;
        unsigned CWG1IN                 :1;
    };
} CWG1CON1bits_t;
extern volatile CWG1CON1bits_t CWG1CON1bits __at(0x696);
// bitfield macros
#define _CWG1CON1_POLA_POSN                                 0x0
#define _CWG1CON1_POLA_POSITION                             0x0
#define _CWG1CON1_POLA_SIZE                                 0x1
#define _CWG1CON1_POLA_LENGTH                               0x1
#define _CWG1CON1_POLA_MASK                                 0x1
#define _CWG1CON1_POLB_POSN                                 0x1
#define _CWG1CON1_POLB_POSITION                             0x1
#define _CWG1CON1_POLB_SIZE                                 0x1
#define _CWG1CON1_POLB_LENGTH                               0x1
#define _CWG1CON1_POLB_MASK                                 0x2
#define _CWG1CON1_POLC_POSN                                 0x2
#define _CWG1CON1_POLC_POSITION                             0x2
#define _CWG1CON1_POLC_SIZE                                 0x1
#define _CWG1CON1_POLC_LENGTH                               0x1
#define _CWG1CON1_POLC_MASK                                 0x4
#define _CWG1CON1_POLD_POSN                                 0x3
#define _CWG1CON1_POLD_POSITION                             0x3
#define _CWG1CON1_POLD_SIZE                                 0x1
#define _CWG1CON1_POLD_LENGTH                               0x1
#define _CWG1CON1_POLD_MASK                                 0x8
#define _CWG1CON1_IN_POSN                                   0x5
#define _CWG1CON1_IN_POSITION                               0x5
#define _CWG1CON1_IN_SIZE                                   0x1
#define _CWG1CON1_IN_LENGTH                                 0x1
#define _CWG1CON1_IN_MASK                                   0x20
#define _CWG1CON1_CWG1POLA_POSN                             0x0
#define _CWG1CON1_CWG1POLA_POSITION                         0x0
#define _CWG1CON1_CWG1POLA_SIZE                             0x1
#define _CWG1CON1_CWG1POLA_LENGTH                           0x1
#define _CWG1CON1_CWG1POLA_MASK                             0x1
#define _CWG1CON1_CWG1POLB_POSN                             0x1
#define _CWG1CON1_CWG1POLB_POSITION                         0x1
#define _CWG1CON1_CWG1POLB_SIZE                             0x1
#define _CWG1CON1_CWG1POLB_LENGTH                           0x1
#define _CWG1CON1_CWG1POLB_MASK                             0x2
#define _CWG1CON1_CWG1POLC_POSN                             0x2
#define _CWG1CON1_CWG1POLC_POSITION                         0x2
#define _CWG1CON1_CWG1POLC_SIZE                             0x1
#define _CWG1CON1_CWG1POLC_LENGTH                           0x1
#define _CWG1CON1_CWG1POLC_MASK                             0x4
#define _CWG1CON1_CWG1POLD_POSN                             0x3
#define _CWG1CON1_CWG1POLD_POSITION                         0x3
#define _CWG1CON1_CWG1POLD_SIZE                             0x1
#define _CWG1CON1_CWG1POLD_LENGTH                           0x1
#define _CWG1CON1_CWG1POLD_MASK                             0x8
#define _CWG1CON1_CWG1IN_POSN                               0x5
#define _CWG1CON1_CWG1IN_POSITION                           0x5
#define _CWG1CON1_CWG1IN_SIZE                               0x1
#define _CWG1CON1_CWG1IN_LENGTH                             0x1
#define _CWG1CON1_CWG1IN_MASK                               0x20

// Register: CWG1AS0
#define CWG1AS0 CWG1AS0
extern volatile unsigned char           CWG1AS0             __at(0x697);
#ifndef _LIB_BUILD
asm("CWG1AS0 equ 0697h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned LSAC                   :2;
        unsigned LSBD                   :2;
        unsigned REN                    :1;
        unsigned SHUTDOWN               :1;
    };
    struct {
        unsigned                        :2;
        unsigned LSAC0                  :1;
        unsigned LSAC1                  :1;
        unsigned LSBD0                  :1;
        unsigned LSBD1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned CWG1LSAC               :2;
        unsigned CWG1LSBD               :2;
        unsigned CWG1REN                :1;
        unsigned CWG1SHUTDOWN           :1;
    };
    struct {
        unsigned                        :2;
        unsigned CWG1LSAC0              :1;
        unsigned CWG1LSAC1              :1;
        unsigned CWG1LSBD0              :1;
        unsigned CWG1LSBD1              :1;
    };
} CWG1AS0bits_t;
extern volatile CWG1AS0bits_t CWG1AS0bits __at(0x697);
// bitfield macros
#define _CWG1AS0_LSAC_POSN                                  0x2
#define _CWG1AS0_LSAC_POSITION                              0x2
#define _CWG1AS0_LSAC_SIZE                                  0x2
#define _CWG1AS0_LSAC_LENGTH                                0x2
#define _CWG1AS0_LSAC_MASK                                  0xC
#define _CWG1AS0_LSBD_POSN                                  0x4
#define _CWG1AS0_LSBD_POSITION                              0x4
#define _CWG1AS0_LSBD_SIZE                                  0x2
#define _CWG1AS0_LSBD_LENGTH                                0x2
#define _CWG1AS0_LSBD_MASK                                  0x30
#define _CWG1AS0_REN_POSN                                   0x6
#define _CWG1AS0_REN_POSITION                               0x6
#define _CWG1AS0_REN_SIZE                                   0x1
#define _CWG1AS0_REN_LENGTH                                 0x1
#define _CWG1AS0_REN_MASK                                   0x40
#define _CWG1AS0_SHUTDOWN_POSN                              0x7
#define _CWG1AS0_SHUTDOWN_POSITION                          0x7
#define _CWG1AS0_SHUTDOWN_SIZE                              0x1
#define _CWG1AS0_SHUTDOWN_LENGTH                            0x1
#define _CWG1AS0_SHUTDOWN_MASK                              0x80
#define _CWG1AS0_LSAC0_POSN                                 0x2
#define _CWG1AS0_LSAC0_POSITION                             0x2
#define _CWG1AS0_LSAC0_SIZE                                 0x1
#define _CWG1AS0_LSAC0_LENGTH                               0x1
#define _CWG1AS0_LSAC0_MASK                                 0x4
#define _CWG1AS0_LSAC1_POSN                                 0x3
#define _CWG1AS0_LSAC1_POSITION                             0x3
#define _CWG1AS0_LSAC1_SIZE                                 0x1
#define _CWG1AS0_LSAC1_LENGTH                               0x1
#define _CWG1AS0_LSAC1_MASK                                 0x8
#define _CWG1AS0_LSBD0_POSN                                 0x4
#define _CWG1AS0_LSBD0_POSITION                             0x4
#define _CWG1AS0_LSBD0_SIZE                                 0x1
#define _CWG1AS0_LSBD0_LENGTH                               0x1
#define _CWG1AS0_LSBD0_MASK                                 0x10
#define _CWG1AS0_LSBD1_POSN                                 0x5
#define _CWG1AS0_LSBD1_POSITION                             0x5
#define _CWG1AS0_LSBD1_SIZE                                 0x1
#define _CWG1AS0_LSBD1_LENGTH                               0x1
#define _CWG1AS0_LSBD1_MASK                                 0x20
#define _CWG1AS0_CWG1LSAC_POSN                              0x2
#define _CWG1AS0_CWG1LSAC_POSITION                          0x2
#define _CWG1AS0_CWG1LSAC_SIZE                              0x2
#define _CWG1AS0_CWG1LSAC_LENGTH                            0x2
#define _CWG1AS0_CWG1LSAC_MASK                              0xC
#define _CWG1AS0_CWG1LSBD_POSN                              0x4
#define _CWG1AS0_CWG1LSBD_POSITION                          0x4
#define _CWG1AS0_CWG1LSBD_SIZE                              0x2
#define _CWG1AS0_CWG1LSBD_LENGTH                            0x2
#define _CWG1AS0_CWG1LSBD_MASK                              0x30
#define _CWG1AS0_CWG1REN_POSN                               0x6
#define _CWG1AS0_CWG1REN_POSITION                           0x6
#define _CWG1AS0_CWG1REN_SIZE                               0x1
#define _CWG1AS0_CWG1REN_LENGTH                             0x1
#define _CWG1AS0_CWG1REN_MASK                               0x40
#define _CWG1AS0_CWG1SHUTDOWN_POSN                          0x7
#define _CWG1AS0_CWG1SHUTDOWN_POSITION                      0x7
#define _CWG1AS0_CWG1SHUTDOWN_SIZE                          0x1
#define _CWG1AS0_CWG1SHUTDOWN_LENGTH                        0x1
#define _CWG1AS0_CWG1SHUTDOWN_MASK                          0x80
#define _CWG1AS0_CWG1LSAC0_POSN                             0x2
#define _CWG1AS0_CWG1LSAC0_POSITION                         0x2
#define _CWG1AS0_CWG1LSAC0_SIZE                             0x1
#define _CWG1AS0_CWG1LSAC0_LENGTH                           0x1
#define _CWG1AS0_CWG1LSAC0_MASK                             0x4
#define _CWG1AS0_CWG1LSAC1_POSN                             0x3
#define _CWG1AS0_CWG1LSAC1_POSITION                         0x3
#define _CWG1AS0_CWG1LSAC1_SIZE                             0x1
#define _CWG1AS0_CWG1LSAC1_LENGTH                           0x1
#define _CWG1AS0_CWG1LSAC1_MASK                             0x8
#define _CWG1AS0_CWG1LSBD0_POSN                             0x4
#define _CWG1AS0_CWG1LSBD0_POSITION                         0x4
#define _CWG1AS0_CWG1LSBD0_SIZE                             0x1
#define _CWG1AS0_CWG1LSBD0_LENGTH                           0x1
#define _CWG1AS0_CWG1LSBD0_MASK                             0x10
#define _CWG1AS0_CWG1LSBD1_POSN                             0x5
#define _CWG1AS0_CWG1LSBD1_POSITION                         0x5
#define _CWG1AS0_CWG1LSBD1_SIZE                             0x1
#define _CWG1AS0_CWG1LSBD1_LENGTH                           0x1
#define _CWG1AS0_CWG1LSBD1_MASK                             0x20

// Register: CWG1AS1
#define CWG1AS1 CWG1AS1
extern volatile unsigned char           CWG1AS1             __at(0x698);
#ifndef _LIB_BUILD
asm("CWG1AS1 equ 0698h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned AS0E                   :1;
        unsigned AS1E                   :1;
        unsigned                        :1;
        unsigned AS3E                   :1;
    };
} CWG1AS1bits_t;
extern volatile CWG1AS1bits_t CWG1AS1bits __at(0x698);
// bitfield macros
#define _CWG1AS1_AS0E_POSN                                  0x0
#define _CWG1AS1_AS0E_POSITION                              0x0
#define _CWG1AS1_AS0E_SIZE                                  0x1
#define _CWG1AS1_AS0E_LENGTH                                0x1
#define _CWG1AS1_AS0E_MASK                                  0x1
#define _CWG1AS1_AS1E_POSN                                  0x1
#define _CWG1AS1_AS1E_POSITION                              0x1
#define _CWG1AS1_AS1E_SIZE                                  0x1
#define _CWG1AS1_AS1E_LENGTH                                0x1
#define _CWG1AS1_AS1E_MASK                                  0x2
#define _CWG1AS1_AS3E_POSN                                  0x3
#define _CWG1AS1_AS3E_POSITION                              0x3
#define _CWG1AS1_AS3E_SIZE                                  0x1
#define _CWG1AS1_AS3E_LENGTH                                0x1
#define _CWG1AS1_AS3E_MASK                                  0x8

// Register: CWG1STR
#define CWG1STR CWG1STR
extern volatile unsigned char           CWG1STR             __at(0x699);
#ifndef _LIB_BUILD
asm("CWG1STR equ 0699h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STRA                   :1;
        unsigned STRB                   :1;
        unsigned STRC                   :1;
        unsigned STRD                   :1;
        unsigned OVRA                   :1;
        unsigned OVRB                   :1;
        unsigned OVRC                   :1;
        unsigned OVRD                   :1;
    };
    struct {
        unsigned CWG1STRA               :1;
        unsigned CWG1STRB               :1;
        unsigned CWG1STRC               :1;
        unsigned CWG1STRD               :1;
        unsigned CWG1OVRA               :1;
        unsigned CWG1OVRB               :1;
        unsigned CWG1OVRC               :1;
        unsigned CWG1OVRD               :1;
    };
} CWG1STRbits_t;
extern volatile CWG1STRbits_t CWG1STRbits __at(0x699);
// bitfield macros
#define _CWG1STR_STRA_POSN                                  0x0
#define _CWG1STR_STRA_POSITION                              0x0
#define _CWG1STR_STRA_SIZE                                  0x1
#define _CWG1STR_STRA_LENGTH                                0x1
#define _CWG1STR_STRA_MASK                                  0x1
#define _CWG1STR_STRB_POSN                                  0x1
#define _CWG1STR_STRB_POSITION                              0x1
#define _CWG1STR_STRB_SIZE                                  0x1
#define _CWG1STR_STRB_LENGTH                                0x1
#define _CWG1STR_STRB_MASK                                  0x2
#define _CWG1STR_STRC_POSN                                  0x2
#define _CWG1STR_STRC_POSITION                              0x2
#define _CWG1STR_STRC_SIZE                                  0x1
#define _CWG1STR_STRC_LENGTH                                0x1
#define _CWG1STR_STRC_MASK                                  0x4
#define _CWG1STR_STRD_POSN                                  0x3
#define _CWG1STR_STRD_POSITION                              0x3
#define _CWG1STR_STRD_SIZE                                  0x1
#define _CWG1STR_STRD_LENGTH                                0x1
#define _CWG1STR_STRD_MASK                                  0x8
#define _CWG1STR_OVRA_POSN                                  0x4
#define _CWG1STR_OVRA_POSITION                              0x4
#define _CWG1STR_OVRA_SIZE                                  0x1
#define _CWG1STR_OVRA_LENGTH                                0x1
#define _CWG1STR_OVRA_MASK                                  0x10
#define _CWG1STR_OVRB_POSN                                  0x5
#define _CWG1STR_OVRB_POSITION                              0x5
#define _CWG1STR_OVRB_SIZE                                  0x1
#define _CWG1STR_OVRB_LENGTH                                0x1
#define _CWG1STR_OVRB_MASK                                  0x20
#define _CWG1STR_OVRC_POSN                                  0x6
#define _CWG1STR_OVRC_POSITION                              0x6
#define _CWG1STR_OVRC_SIZE                                  0x1
#define _CWG1STR_OVRC_LENGTH                                0x1
#define _CWG1STR_OVRC_MASK                                  0x40
#define _CWG1STR_OVRD_POSN                                  0x7
#define _CWG1STR_OVRD_POSITION                              0x7
#define _CWG1STR_OVRD_SIZE                                  0x1
#define _CWG1STR_OVRD_LENGTH                                0x1
#define _CWG1STR_OVRD_MASK                                  0x80
#define _CWG1STR_CWG1STRA_POSN                              0x0
#define _CWG1STR_CWG1STRA_POSITION                          0x0
#define _CWG1STR_CWG1STRA_SIZE                              0x1
#define _CWG1STR_CWG1STRA_LENGTH                            0x1
#define _CWG1STR_CWG1STRA_MASK                              0x1
#define _CWG1STR_CWG1STRB_POSN                              0x1
#define _CWG1STR_CWG1STRB_POSITION                          0x1
#define _CWG1STR_CWG1STRB_SIZE                              0x1
#define _CWG1STR_CWG1STRB_LENGTH                            0x1
#define _CWG1STR_CWG1STRB_MASK                              0x2
#define _CWG1STR_CWG1STRC_POSN                              0x2
#define _CWG1STR_CWG1STRC_POSITION                          0x2
#define _CWG1STR_CWG1STRC_SIZE                              0x1
#define _CWG1STR_CWG1STRC_LENGTH                            0x1
#define _CWG1STR_CWG1STRC_MASK                              0x4
#define _CWG1STR_CWG1STRD_POSN                              0x3
#define _CWG1STR_CWG1STRD_POSITION                          0x3
#define _CWG1STR_CWG1STRD_SIZE                              0x1
#define _CWG1STR_CWG1STRD_LENGTH                            0x1
#define _CWG1STR_CWG1STRD_MASK                              0x8
#define _CWG1STR_CWG1OVRA_POSN                              0x4
#define _CWG1STR_CWG1OVRA_POSITION                          0x4
#define _CWG1STR_CWG1OVRA_SIZE                              0x1
#define _CWG1STR_CWG1OVRA_LENGTH                            0x1
#define _CWG1STR_CWG1OVRA_MASK                              0x10
#define _CWG1STR_CWG1OVRB_POSN                              0x5
#define _CWG1STR_CWG1OVRB_POSITION                          0x5
#define _CWG1STR_CWG1OVRB_SIZE                              0x1
#define _CWG1STR_CWG1OVRB_LENGTH                            0x1
#define _CWG1STR_CWG1OVRB_MASK                              0x20
#define _CWG1STR_CWG1OVRC_POSN                              0x6
#define _CWG1STR_CWG1OVRC_POSITION                          0x6
#define _CWG1STR_CWG1OVRC_SIZE                              0x1
#define _CWG1STR_CWG1OVRC_LENGTH                            0x1
#define _CWG1STR_CWG1OVRC_MASK                              0x40
#define _CWG1STR_CWG1OVRD_POSN                              0x7
#define _CWG1STR_CWG1OVRD_POSITION                          0x7
#define _CWG1STR_CWG1OVRD_SIZE                              0x1
#define _CWG1STR_CWG1OVRD_LENGTH                            0x1
#define _CWG1STR_CWG1OVRD_MASK                              0x80

// Register: NVMADR
#define NVMADR NVMADR
extern volatile unsigned short          NVMADR              __at(0x891);
#ifndef _LIB_BUILD
asm("NVMADR equ 0891h");
#endif
// aliases
extern volatile unsigned short          EEADR               __at(0x891);
#ifndef _LIB_BUILD
asm("EEADR equ 0891h");
#endif
extern volatile unsigned short          PMADR               __at(0x891);
#ifndef _LIB_BUILD
asm("PMADR equ 0891h");
#endif

// Register: NVMADRL
#define NVMADRL NVMADRL
extern volatile unsigned char           NVMADRL             __at(0x891);
#ifndef _LIB_BUILD
asm("NVMADRL equ 0891h");
#endif
// aliases
extern volatile unsigned char           EEADRL              __at(0x891);
#ifndef _LIB_BUILD
asm("EEADRL equ 0891h");
#endif
extern volatile unsigned char           PMADRL              __at(0x891);
#ifndef _LIB_BUILD
asm("PMADRL equ 0891h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMADR0                :1;
        unsigned NVMADR1                :1;
        unsigned NVMADR2                :1;
        unsigned NVMADR3                :1;
        unsigned NVMADR4                :1;
        unsigned NVMADR5                :1;
        unsigned NVMADR6                :1;
        unsigned NVMADR7                :1;
    };
    struct {
        unsigned NVMADRL                :8;
    };
    struct {
        unsigned EEADR0                 :1;
        unsigned EEADR1                 :1;
        unsigned EEADR2                 :1;
        unsigned EEADR3                 :1;
        unsigned EEADR4                 :1;
        unsigned EEADR5                 :1;
        unsigned EEADR6                 :1;
        unsigned EEADR7                 :1;
    };
    struct {
        unsigned EEADRL                 :8;
    };
    struct {
        unsigned PMADRL                 :8;
    };
} NVMADRLbits_t;
extern volatile NVMADRLbits_t NVMADRLbits __at(0x891);
// bitfield macros
#define _NVMADRL_NVMADR0_POSN                               0x0
#define _NVMADRL_NVMADR0_POSITION                           0x0
#define _NVMADRL_NVMADR0_SIZE                               0x1
#define _NVMADRL_NVMADR0_LENGTH                             0x1
#define _NVMADRL_NVMADR0_MASK                               0x1
#define _NVMADRL_NVMADR1_POSN                               0x1
#define _NVMADRL_NVMADR1_POSITION                           0x1
#define _NVMADRL_NVMADR1_SIZE                               0x1
#define _NVMADRL_NVMADR1_LENGTH                             0x1
#define _NVMADRL_NVMADR1_MASK                               0x2
#define _NVMADRL_NVMADR2_POSN                               0x2
#define _NVMADRL_NVMADR2_POSITION                           0x2
#define _NVMADRL_NVMADR2_SIZE                               0x1
#define _NVMADRL_NVMADR2_LENGTH                             0x1
#define _NVMADRL_NVMADR2_MASK                               0x4
#define _NVMADRL_NVMADR3_POSN                               0x3
#define _NVMADRL_NVMADR3_POSITION                           0x3
#define _NVMADRL_NVMADR3_SIZE                               0x1
#define _NVMADRL_NVMADR3_LENGTH                             0x1
#define _NVMADRL_NVMADR3_MASK                               0x8
#define _NVMADRL_NVMADR4_POSN                               0x4
#define _NVMADRL_NVMADR4_POSITION                           0x4
#define _NVMADRL_NVMADR4_SIZE                               0x1
#define _NVMADRL_NVMADR4_LENGTH                             0x1
#define _NVMADRL_NVMADR4_MASK                               0x10
#define _NVMADRL_NVMADR5_POSN                               0x5
#define _NVMADRL_NVMADR5_POSITION                           0x5
#define _NVMADRL_NVMADR5_SIZE                               0x1
#define _NVMADRL_NVMADR5_LENGTH                             0x1
#define _NVMADRL_NVMADR5_MASK                               0x20
#define _NVMADRL_NVMADR6_POSN                               0x6
#define _NVMADRL_NVMADR6_POSITION                           0x6
#define _NVMADRL_NVMADR6_SIZE                               0x1
#define _NVMADRL_NVMADR6_LENGTH                             0x1
#define _NVMADRL_NVMADR6_MASK                               0x40
#define _NVMADRL_NVMADR7_POSN                               0x7
#define _NVMADRL_NVMADR7_POSITION                           0x7
#define _NVMADRL_NVMADR7_SIZE                               0x1
#define _NVMADRL_NVMADR7_LENGTH                             0x1
#define _NVMADRL_NVMADR7_MASK                               0x80
#define _NVMADRL_NVMADRL_POSN                               0x0
#define _NVMADRL_NVMADRL_POSITION                           0x0
#define _NVMADRL_NVMADRL_SIZE                               0x8
#define _NVMADRL_NVMADRL_LENGTH                             0x8
#define _NVMADRL_NVMADRL_MASK                               0xFF
#define _NVMADRL_EEADR0_POSN                                0x0
#define _NVMADRL_EEADR0_POSITION                            0x0
#define _NVMADRL_EEADR0_SIZE                                0x1
#define _NVMADRL_EEADR0_LENGTH                              0x1
#define _NVMADRL_EEADR0_MASK                                0x1
#define _NVMADRL_EEADR1_POSN                                0x1
#define _NVMADRL_EEADR1_POSITION                            0x1
#define _NVMADRL_EEADR1_SIZE                                0x1
#define _NVMADRL_EEADR1_LENGTH                              0x1
#define _NVMADRL_EEADR1_MASK                                0x2
#define _NVMADRL_EEADR2_POSN                                0x2
#define _NVMADRL_EEADR2_POSITION                            0x2
#define _NVMADRL_EEADR2_SIZE                                0x1
#define _NVMADRL_EEADR2_LENGTH                              0x1
#define _NVMADRL_EEADR2_MASK                                0x4
#define _NVMADRL_EEADR3_POSN                                0x3
#define _NVMADRL_EEADR3_POSITION                            0x3
#define _NVMADRL_EEADR3_SIZE                                0x1
#define _NVMADRL_EEADR3_LENGTH                              0x1
#define _NVMADRL_EEADR3_MASK                                0x8
#define _NVMADRL_EEADR4_POSN                                0x4
#define _NVMADRL_EEADR4_POSITION                            0x4
#define _NVMADRL_EEADR4_SIZE                                0x1
#define _NVMADRL_EEADR4_LENGTH                              0x1
#define _NVMADRL_EEADR4_MASK                                0x10
#define _NVMADRL_EEADR5_POSN                                0x5
#define _NVMADRL_EEADR5_POSITION                            0x5
#define _NVMADRL_EEADR5_SIZE                                0x1
#define _NVMADRL_EEADR5_LENGTH                              0x1
#define _NVMADRL_EEADR5_MASK                                0x20
#define _NVMADRL_EEADR6_POSN                                0x6
#define _NVMADRL_EEADR6_POSITION                            0x6
#define _NVMADRL_EEADR6_SIZE                                0x1
#define _NVMADRL_EEADR6_LENGTH                              0x1
#define _NVMADRL_EEADR6_MASK                                0x40
#define _NVMADRL_EEADR7_POSN                                0x7
#define _NVMADRL_EEADR7_POSITION                            0x7
#define _NVMADRL_EEADR7_SIZE                                0x1
#define _NVMADRL_EEADR7_LENGTH                              0x1
#define _NVMADRL_EEADR7_MASK                                0x80
#define _NVMADRL_EEADRL_POSN                                0x0
#define _NVMADRL_EEADRL_POSITION                            0x0
#define _NVMADRL_EEADRL_SIZE                                0x8
#define _NVMADRL_EEADRL_LENGTH                              0x8
#define _NVMADRL_EEADRL_MASK                                0xFF
#define _NVMADRL_PMADRL_POSN                                0x0
#define _NVMADRL_PMADRL_POSITION                            0x0
#define _NVMADRL_PMADRL_SIZE                                0x8
#define _NVMADRL_PMADRL_LENGTH                              0x8
#define _NVMADRL_PMADRL_MASK                                0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned NVMADR0                :1;
        unsigned NVMADR1                :1;
        unsigned NVMADR2                :1;
        unsigned NVMADR3                :1;
        unsigned NVMADR4                :1;
        unsigned NVMADR5                :1;
        unsigned NVMADR6                :1;
        unsigned NVMADR7                :1;
    };
    struct {
        unsigned NVMADRL                :8;
    };
    struct {
        unsigned EEADR0                 :1;
        unsigned EEADR1                 :1;
        unsigned EEADR2                 :1;
        unsigned EEADR3                 :1;
        unsigned EEADR4                 :1;
        unsigned EEADR5                 :1;
        unsigned EEADR6                 :1;
        unsigned EEADR7                 :1;
    };
    struct {
        unsigned EEADRL                 :8;
    };
    struct {
        unsigned PMADRL                 :8;
    };
} EEADRLbits_t;
extern volatile EEADRLbits_t EEADRLbits __at(0x891);
// bitfield macros
#define _EEADRL_NVMADR0_POSN                                0x0
#define _EEADRL_NVMADR0_POSITION                            0x0
#define _EEADRL_NVMADR0_SIZE                                0x1
#define _EEADRL_NVMADR0_LENGTH                              0x1
#define _EEADRL_NVMADR0_MASK                                0x1
#define _EEADRL_NVMADR1_POSN                                0x1
#define _EEADRL_NVMADR1_POSITION                            0x1
#define _EEADRL_NVMADR1_SIZE                                0x1
#define _EEADRL_NVMADR1_LENGTH                              0x1
#define _EEADRL_NVMADR1_MASK                                0x2
#define _EEADRL_NVMADR2_POSN                                0x2
#define _EEADRL_NVMADR2_POSITION                            0x2
#define _EEADRL_NVMADR2_SIZE                                0x1
#define _EEADRL_NVMADR2_LENGTH                              0x1
#define _EEADRL_NVMADR2_MASK                                0x4
#define _EEADRL_NVMADR3_POSN                                0x3
#define _EEADRL_NVMADR3_POSITION                            0x3
#define _EEADRL_NVMADR3_SIZE                                0x1
#define _EEADRL_NVMADR3_LENGTH                              0x1
#define _EEADRL_NVMADR3_MASK                                0x8
#define _EEADRL_NVMADR4_POSN                                0x4
#define _EEADRL_NVMADR4_POSITION                            0x4
#define _EEADRL_NVMADR4_SIZE                                0x1
#define _EEADRL_NVMADR4_LENGTH                              0x1
#define _EEADRL_NVMADR4_MASK                                0x10
#define _EEADRL_NVMADR5_POSN                                0x5
#define _EEADRL_NVMADR5_POSITION                            0x5
#define _EEADRL_NVMADR5_SIZE                                0x1
#define _EEADRL_NVMADR5_LENGTH                              0x1
#define _EEADRL_NVMADR5_MASK                                0x20
#define _EEADRL_NVMADR6_POSN                                0x6
#define _EEADRL_NVMADR6_POSITION                            0x6
#define _EEADRL_NVMADR6_SIZE                                0x1
#define _EEADRL_NVMADR6_LENGTH                              0x1
#define _EEADRL_NVMADR6_MASK                                0x40
#define _EEADRL_NVMADR7_POSN                                0x7
#define _EEADRL_NVMADR7_POSITION                            0x7
#define _EEADRL_NVMADR7_SIZE                                0x1
#define _EEADRL_NVMADR7_LENGTH                              0x1
#define _EEADRL_NVMADR7_MASK                                0x80
#define _EEADRL_NVMADRL_POSN                                0x0
#define _EEADRL_NVMADRL_POSITION                            0x0
#define _EEADRL_NVMADRL_SIZE                                0x8
#define _EEADRL_NVMADRL_LENGTH                              0x8
#define _EEADRL_NVMADRL_MASK                                0xFF
#define _EEADRL_EEADR0_POSN                                 0x0
#define _EEADRL_EEADR0_POSITION                             0x0
#define _EEADRL_EEADR0_SIZE                                 0x1
#define _EEADRL_EEADR0_LENGTH                               0x1
#define _EEADRL_EEADR0_MASK                                 0x1
#define _EEADRL_EEADR1_POSN                                 0x1
#define _EEADRL_EEADR1_POSITION                             0x1
#define _EEADRL_EEADR1_SIZE                                 0x1
#define _EEADRL_EEADR1_LENGTH                               0x1
#define _EEADRL_EEADR1_MASK                                 0x2
#define _EEADRL_EEADR2_POSN                                 0x2
#define _EEADRL_EEADR2_POSITION                             0x2
#define _EEADRL_EEADR2_SIZE                                 0x1
#define _EEADRL_EEADR2_LENGTH                               0x1
#define _EEADRL_EEADR2_MASK                                 0x4
#define _EEADRL_EEADR3_POSN                                 0x3
#define _EEADRL_EEADR3_POSITION                             0x3
#define _EEADRL_EEADR3_SIZE                                 0x1
#define _EEADRL_EEADR3_LENGTH                               0x1
#define _EEADRL_EEADR3_MASK                                 0x8
#define _EEADRL_EEADR4_POSN                                 0x4
#define _EEADRL_EEADR4_POSITION                             0x4
#define _EEADRL_EEADR4_SIZE                                 0x1
#define _EEADRL_EEADR4_LENGTH                               0x1
#define _EEADRL_EEADR4_MASK                                 0x10
#define _EEADRL_EEADR5_POSN                                 0x5
#define _EEADRL_EEADR5_POSITION                             0x5
#define _EEADRL_EEADR5_SIZE                                 0x1
#define _EEADRL_EEADR5_LENGTH                               0x1
#define _EEADRL_EEADR5_MASK                                 0x20
#define _EEADRL_EEADR6_POSN                                 0x6
#define _EEADRL_EEADR6_POSITION                             0x6
#define _EEADRL_EEADR6_SIZE                                 0x1
#define _EEADRL_EEADR6_LENGTH                               0x1
#define _EEADRL_EEADR6_MASK                                 0x40
#define _EEADRL_EEADR7_POSN                                 0x7
#define _EEADRL_EEADR7_POSITION                             0x7
#define _EEADRL_EEADR7_SIZE                                 0x1
#define _EEADRL_EEADR7_LENGTH                               0x1
#define _EEADRL_EEADR7_MASK                                 0x80
#define _EEADRL_EEADRL_POSN                                 0x0
#define _EEADRL_EEADRL_POSITION                             0x0
#define _EEADRL_EEADRL_SIZE                                 0x8
#define _EEADRL_EEADRL_LENGTH                               0x8
#define _EEADRL_EEADRL_MASK                                 0xFF
#define _EEADRL_PMADRL_POSN                                 0x0
#define _EEADRL_PMADRL_POSITION                             0x0
#define _EEADRL_PMADRL_SIZE                                 0x8
#define _EEADRL_PMADRL_LENGTH                               0x8
#define _EEADRL_PMADRL_MASK                                 0xFF
typedef union {
    struct {
        unsigned NVMADR0                :1;
        unsigned NVMADR1                :1;
        unsigned NVMADR2                :1;
        unsigned NVMADR3                :1;
        unsigned NVMADR4                :1;
        unsigned NVMADR5                :1;
        unsigned NVMADR6                :1;
        unsigned NVMADR7                :1;
    };
    struct {
        unsigned NVMADRL                :8;
    };
    struct {
        unsigned EEADR0                 :1;
        unsigned EEADR1                 :1;
        unsigned EEADR2                 :1;
        unsigned EEADR3                 :1;
        unsigned EEADR4                 :1;
        unsigned EEADR5                 :1;
        unsigned EEADR6                 :1;
        unsigned EEADR7                 :1;
    };
    struct {
        unsigned EEADRL                 :8;
    };
    struct {
        unsigned PMADRL                 :8;
    };
} PMADRLbits_t;
extern volatile PMADRLbits_t PMADRLbits __at(0x891);
// bitfield macros
#define _PMADRL_NVMADR0_POSN                                0x0
#define _PMADRL_NVMADR0_POSITION                            0x0
#define _PMADRL_NVMADR0_SIZE                                0x1
#define _PMADRL_NVMADR0_LENGTH                              0x1
#define _PMADRL_NVMADR0_MASK                                0x1
#define _PMADRL_NVMADR1_POSN                                0x1
#define _PMADRL_NVMADR1_POSITION                            0x1
#define _PMADRL_NVMADR1_SIZE                                0x1
#define _PMADRL_NVMADR1_LENGTH                              0x1
#define _PMADRL_NVMADR1_MASK                                0x2
#define _PMADRL_NVMADR2_POSN                                0x2
#define _PMADRL_NVMADR2_POSITION                            0x2
#define _PMADRL_NVMADR2_SIZE                                0x1
#define _PMADRL_NVMADR2_LENGTH                              0x1
#define _PMADRL_NVMADR2_MASK                                0x4
#define _PMADRL_NVMADR3_POSN                                0x3
#define _PMADRL_NVMADR3_POSITION                            0x3
#define _PMADRL_NVMADR3_SIZE                                0x1
#define _PMADRL_NVMADR3_LENGTH                              0x1
#define _PMADRL_NVMADR3_MASK                                0x8
#define _PMADRL_NVMADR4_POSN                                0x4
#define _PMADRL_NVMADR4_POSITION                            0x4
#define _PMADRL_NVMADR4_SIZE                                0x1
#define _PMADRL_NVMADR4_LENGTH                              0x1
#define _PMADRL_NVMADR4_MASK                                0x10
#define _PMADRL_NVMADR5_POSN                                0x5
#define _PMADRL_NVMADR5_POSITION                            0x5
#define _PMADRL_NVMADR5_SIZE                                0x1
#define _PMADRL_NVMADR5_LENGTH                              0x1
#define _PMADRL_NVMADR5_MASK                                0x20
#define _PMADRL_NVMADR6_POSN                                0x6
#define _PMADRL_NVMADR6_POSITION                            0x6
#define _PMADRL_NVMADR6_SIZE                                0x1
#define _PMADRL_NVMADR6_LENGTH                              0x1
#define _PMADRL_NVMADR6_MASK                                0x40
#define _PMADRL_NVMADR7_POSN                                0x7
#define _PMADRL_NVMADR7_POSITION                            0x7
#define _PMADRL_NVMADR7_SIZE                                0x1
#define _PMADRL_NVMADR7_LENGTH                              0x1
#define _PMADRL_NVMADR7_MASK                                0x80
#define _PMADRL_NVMADRL_POSN                                0x0
#define _PMADRL_NVMADRL_POSITION                            0x0
#define _PMADRL_NVMADRL_SIZE                                0x8
#define _PMADRL_NVMADRL_LENGTH                              0x8
#define _PMADRL_NVMADRL_MASK                                0xFF
#define _PMADRL_EEADR0_POSN                                 0x0
#define _PMADRL_EEADR0_POSITION                             0x0
#define _PMADRL_EEADR0_SIZE                                 0x1
#define _PMADRL_EEADR0_LENGTH                               0x1
#define _PMADRL_EEADR0_MASK                                 0x1
#define _PMADRL_EEADR1_POSN                                 0x1
#define _PMADRL_EEADR1_POSITION                             0x1
#define _PMADRL_EEADR1_SIZE                                 0x1
#define _PMADRL_EEADR1_LENGTH                               0x1
#define _PMADRL_EEADR1_MASK                                 0x2
#define _PMADRL_EEADR2_POSN                                 0x2
#define _PMADRL_EEADR2_POSITION                             0x2
#define _PMADRL_EEADR2_SIZE                                 0x1
#define _PMADRL_EEADR2_LENGTH                               0x1
#define _PMADRL_EEADR2_MASK                                 0x4
#define _PMADRL_EEADR3_POSN                                 0x3
#define _PMADRL_EEADR3_POSITION                             0x3
#define _PMADRL_EEADR3_SIZE                                 0x1
#define _PMADRL_EEADR3_LENGTH                               0x1
#define _PMADRL_EEADR3_MASK                                 0x8
#define _PMADRL_EEADR4_POSN                                 0x4
#define _PMADRL_EEADR4_POSITION                             0x4
#define _PMADRL_EEADR4_SIZE                                 0x1
#define _PMADRL_EEADR4_LENGTH                               0x1
#define _PMADRL_EEADR4_MASK                                 0x10
#define _PMADRL_EEADR5_POSN                                 0x5
#define _PMADRL_EEADR5_POSITION                             0x5
#define _PMADRL_EEADR5_SIZE                                 0x1
#define _PMADRL_EEADR5_LENGTH                               0x1
#define _PMADRL_EEADR5_MASK                                 0x20
#define _PMADRL_EEADR6_POSN                                 0x6
#define _PMADRL_EEADR6_POSITION                             0x6
#define _PMADRL_EEADR6_SIZE                                 0x1
#define _PMADRL_EEADR6_LENGTH                               0x1
#define _PMADRL_EEADR6_MASK                                 0x40
#define _PMADRL_EEADR7_POSN                                 0x7
#define _PMADRL_EEADR7_POSITION                             0x7
#define _PMADRL_EEADR7_SIZE                                 0x1
#define _PMADRL_EEADR7_LENGTH                               0x1
#define _PMADRL_EEADR7_MASK                                 0x80
#define _PMADRL_EEADRL_POSN                                 0x0
#define _PMADRL_EEADRL_POSITION                             0x0
#define _PMADRL_EEADRL_SIZE                                 0x8
#define _PMADRL_EEADRL_LENGTH                               0x8
#define _PMADRL_EEADRL_MASK                                 0xFF
#define _PMADRL_PMADRL_POSN                                 0x0
#define _PMADRL_PMADRL_POSITION                             0x0
#define _PMADRL_PMADRL_SIZE                                 0x8
#define _PMADRL_PMADRL_LENGTH                               0x8
#define _PMADRL_PMADRL_MASK                                 0xFF

// Register: NVMADRH
#define NVMADRH NVMADRH
extern volatile unsigned char           NVMADRH             __at(0x892);
#ifndef _LIB_BUILD
asm("NVMADRH equ 0892h");
#endif
// aliases
extern volatile unsigned char           EEADRH              __at(0x892);
#ifndef _LIB_BUILD
asm("EEADRH equ 0892h");
#endif
extern volatile unsigned char           PMADRH              __at(0x892);
#ifndef _LIB_BUILD
asm("PMADRH equ 0892h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMADRH                :7;
    };
    struct {
        unsigned NVMADR8                :1;
        unsigned NVMADR9                :1;
        unsigned NVMADR10               :1;
        unsigned NVMADR11               :1;
        unsigned NVMADR12               :1;
        unsigned NVMADR13               :1;
        unsigned NVMADR14               :1;
    };
    struct {
        unsigned EEADR8                 :1;
        unsigned EEADR9                 :1;
        unsigned EEADR10                :1;
        unsigned EEADR11                :1;
        unsigned EEADR12                :1;
        unsigned EEADR13                :1;
    };
    struct {
        unsigned EEADRH                 :7;
    };
    struct {
        unsigned PMADRH                 :7;
    };
} NVMADRHbits_t;
extern volatile NVMADRHbits_t NVMADRHbits __at(0x892);
// bitfield macros
#define _NVMADRH_NVMADRH_POSN                               0x0
#define _NVMADRH_NVMADRH_POSITION                           0x0
#define _NVMADRH_NVMADRH_SIZE                               0x7
#define _NVMADRH_NVMADRH_LENGTH                             0x7
#define _NVMADRH_NVMADRH_MASK                               0x7F
#define _NVMADRH_NVMADR8_POSN                               0x0
#define _NVMADRH_NVMADR8_POSITION                           0x0
#define _NVMADRH_NVMADR8_SIZE                               0x1
#define _NVMADRH_NVMADR8_LENGTH                             0x1
#define _NVMADRH_NVMADR8_MASK                               0x1
#define _NVMADRH_NVMADR9_POSN                               0x1
#define _NVMADRH_NVMADR9_POSITION                           0x1
#define _NVMADRH_NVMADR9_SIZE                               0x1
#define _NVMADRH_NVMADR9_LENGTH                             0x1
#define _NVMADRH_NVMADR9_MASK                               0x2
#define _NVMADRH_NVMADR10_POSN                              0x2
#define _NVMADRH_NVMADR10_POSITION                          0x2
#define _NVMADRH_NVMADR10_SIZE                              0x1
#define _NVMADRH_NVMADR10_LENGTH                            0x1
#define _NVMADRH_NVMADR10_MASK                              0x4
#define _NVMADRH_NVMADR11_POSN                              0x3
#define _NVMADRH_NVMADR11_POSITION                          0x3
#define _NVMADRH_NVMADR11_SIZE                              0x1
#define _NVMADRH_NVMADR11_LENGTH                            0x1
#define _NVMADRH_NVMADR11_MASK                              0x8
#define _NVMADRH_NVMADR12_POSN                              0x4
#define _NVMADRH_NVMADR12_POSITION                          0x4
#define _NVMADRH_NVMADR12_SIZE                              0x1
#define _NVMADRH_NVMADR12_LENGTH                            0x1
#define _NVMADRH_NVMADR12_MASK                              0x10
#define _NVMADRH_NVMADR13_POSN                              0x5
#define _NVMADRH_NVMADR13_POSITION                          0x5
#define _NVMADRH_NVMADR13_SIZE                              0x1
#define _NVMADRH_NVMADR13_LENGTH                            0x1
#define _NVMADRH_NVMADR13_MASK                              0x20
#define _NVMADRH_NVMADR14_POSN                              0x6
#define _NVMADRH_NVMADR14_POSITION                          0x6
#define _NVMADRH_NVMADR14_SIZE                              0x1
#define _NVMADRH_NVMADR14_LENGTH                            0x1
#define _NVMADRH_NVMADR14_MASK                              0x40
#define _NVMADRH_EEADR8_POSN                                0x0
#define _NVMADRH_EEADR8_POSITION                            0x0
#define _NVMADRH_EEADR8_SIZE                                0x1
#define _NVMADRH_EEADR8_LENGTH                              0x1
#define _NVMADRH_EEADR8_MASK                                0x1
#define _NVMADRH_EEADR9_POSN                                0x1
#define _NVMADRH_EEADR9_POSITION                            0x1
#define _NVMADRH_EEADR9_SIZE                                0x1
#define _NVMADRH_EEADR9_LENGTH                              0x1
#define _NVMADRH_EEADR9_MASK                                0x2
#define _NVMADRH_EEADR10_POSN                               0x2
#define _NVMADRH_EEADR10_POSITION                           0x2
#define _NVMADRH_EEADR10_SIZE                               0x1
#define _NVMADRH_EEADR10_LENGTH                             0x1
#define _NVMADRH_EEADR10_MASK                               0x4
#define _NVMADRH_EEADR11_POSN                               0x3
#define _NVMADRH_EEADR11_POSITION                           0x3
#define _NVMADRH_EEADR11_SIZE                               0x1
#define _NVMADRH_EEADR11_LENGTH                             0x1
#define _NVMADRH_EEADR11_MASK                               0x8
#define _NVMADRH_EEADR12_POSN                               0x4
#define _NVMADRH_EEADR12_POSITION                           0x4
#define _NVMADRH_EEADR12_SIZE                               0x1
#define _NVMADRH_EEADR12_LENGTH                             0x1
#define _NVMADRH_EEADR12_MASK                               0x10
#define _NVMADRH_EEADR13_POSN                               0x5
#define _NVMADRH_EEADR13_POSITION                           0x5
#define _NVMADRH_EEADR13_SIZE                               0x1
#define _NVMADRH_EEADR13_LENGTH                             0x1
#define _NVMADRH_EEADR13_MASK                               0x20
#define _NVMADRH_EEADRH_POSN                                0x0
#define _NVMADRH_EEADRH_POSITION                            0x0
#define _NVMADRH_EEADRH_SIZE                                0x7
#define _NVMADRH_EEADRH_LENGTH                              0x7
#define _NVMADRH_EEADRH_MASK                                0x7F
#define _NVMADRH_PMADRH_POSN                                0x0
#define _NVMADRH_PMADRH_POSITION                            0x0
#define _NVMADRH_PMADRH_SIZE                                0x7
#define _NVMADRH_PMADRH_LENGTH                              0x7
#define _NVMADRH_PMADRH_MASK                                0x7F
// alias bitfield definitions
typedef union {
    struct {
        unsigned NVMADRH                :7;
    };
    struct {
        unsigned NVMADR8                :1;
        unsigned NVMADR9                :1;
        unsigned NVMADR10               :1;
        unsigned NVMADR11               :1;
        unsigned NVMADR12               :1;
        unsigned NVMADR13               :1;
        unsigned NVMADR14               :1;
    };
    struct {
        unsigned EEADR8                 :1;
        unsigned EEADR9                 :1;
        unsigned EEADR10                :1;
        unsigned EEADR11                :1;
        unsigned EEADR12                :1;
        unsigned EEADR13                :1;
    };
    struct {
        unsigned EEADRH                 :7;
    };
    struct {
        unsigned PMADRH                 :7;
    };
} EEADRHbits_t;
extern volatile EEADRHbits_t EEADRHbits __at(0x892);
// bitfield macros
#define _EEADRH_NVMADRH_POSN                                0x0
#define _EEADRH_NVMADRH_POSITION                            0x0
#define _EEADRH_NVMADRH_SIZE                                0x7
#define _EEADRH_NVMADRH_LENGTH                              0x7
#define _EEADRH_NVMADRH_MASK                                0x7F
#define _EEADRH_NVMADR8_POSN                                0x0
#define _EEADRH_NVMADR8_POSITION                            0x0
#define _EEADRH_NVMADR8_SIZE                                0x1
#define _EEADRH_NVMADR8_LENGTH                              0x1
#define _EEADRH_NVMADR8_MASK                                0x1
#define _EEADRH_NVMADR9_POSN                                0x1
#define _EEADRH_NVMADR9_POSITION                            0x1
#define _EEADRH_NVMADR9_SIZE                                0x1
#define _EEADRH_NVMADR9_LENGTH                              0x1
#define _EEADRH_NVMADR9_MASK                                0x2
#define _EEADRH_NVMADR10_POSN                               0x2
#define _EEADRH_NVMADR10_POSITION                           0x2
#define _EEADRH_NVMADR10_SIZE                               0x1
#define _EEADRH_NVMADR10_LENGTH                             0x1
#define _EEADRH_NVMADR10_MASK                               0x4
#define _EEADRH_NVMADR11_POSN                               0x3
#define _EEADRH_NVMADR11_POSITION                           0x3
#define _EEADRH_NVMADR11_SIZE                               0x1
#define _EEADRH_NVMADR11_LENGTH                             0x1
#define _EEADRH_NVMADR11_MASK                               0x8
#define _EEADRH_NVMADR12_POSN                               0x4
#define _EEADRH_NVMADR12_POSITION                           0x4
#define _EEADRH_NVMADR12_SIZE                               0x1
#define _EEADRH_NVMADR12_LENGTH                             0x1
#define _EEADRH_NVMADR12_MASK                               0x10
#define _EEADRH_NVMADR13_POSN                               0x5
#define _EEADRH_NVMADR13_POSITION                           0x5
#define _EEADRH_NVMADR13_SIZE                               0x1
#define _EEADRH_NVMADR13_LENGTH                             0x1
#define _EEADRH_NVMADR13_MASK                               0x20
#define _EEADRH_NVMADR14_POSN                               0x6
#define _EEADRH_NVMADR14_POSITION                           0x6
#define _EEADRH_NVMADR14_SIZE                               0x1
#define _EEADRH_NVMADR14_LENGTH                             0x1
#define _EEADRH_NVMADR14_MASK                               0x40
#define _EEADRH_EEADR8_POSN                                 0x0
#define _EEADRH_EEADR8_POSITION                             0x0
#define _EEADRH_EEADR8_SIZE                                 0x1
#define _EEADRH_EEADR8_LENGTH                               0x1
#define _EEADRH_EEADR8_MASK                                 0x1
#define _EEADRH_EEADR9_POSN                                 0x1
#define _EEADRH_EEADR9_POSITION                             0x1
#define _EEADRH_EEADR9_SIZE                                 0x1
#define _EEADRH_EEADR9_LENGTH                               0x1
#define _EEADRH_EEADR9_MASK                                 0x2
#define _EEADRH_EEADR10_POSN                                0x2
#define _EEADRH_EEADR10_POSITION                            0x2
#define _EEADRH_EEADR10_SIZE                                0x1
#define _EEADRH_EEADR10_LENGTH                              0x1
#define _EEADRH_EEADR10_MASK                                0x4
#define _EEADRH_EEADR11_POSN                                0x3
#define _EEADRH_EEADR11_POSITION                            0x3
#define _EEADRH_EEADR11_SIZE                                0x1
#define _EEADRH_EEADR11_LENGTH                              0x1
#define _EEADRH_EEADR11_MASK                                0x8
#define _EEADRH_EEADR12_POSN                                0x4
#define _EEADRH_EEADR12_POSITION                            0x4
#define _EEADRH_EEADR12_SIZE                                0x1
#define _EEADRH_EEADR12_LENGTH                              0x1
#define _EEADRH_EEADR12_MASK                                0x10
#define _EEADRH_EEADR13_POSN                                0x5
#define _EEADRH_EEADR13_POSITION                            0x5
#define _EEADRH_EEADR13_SIZE                                0x1
#define _EEADRH_EEADR13_LENGTH                              0x1
#define _EEADRH_EEADR13_MASK                                0x20
#define _EEADRH_EEADRH_POSN                                 0x0
#define _EEADRH_EEADRH_POSITION                             0x0
#define _EEADRH_EEADRH_SIZE                                 0x7
#define _EEADRH_EEADRH_LENGTH                               0x7
#define _EEADRH_EEADRH_MASK                                 0x7F
#define _EEADRH_PMADRH_POSN                                 0x0
#define _EEADRH_PMADRH_POSITION                             0x0
#define _EEADRH_PMADRH_SIZE                                 0x7
#define _EEADRH_PMADRH_LENGTH                               0x7
#define _EEADRH_PMADRH_MASK                                 0x7F
typedef union {
    struct {
        unsigned NVMADRH                :7;
    };
    struct {
        unsigned NVMADR8                :1;
        unsigned NVMADR9                :1;
        unsigned NVMADR10               :1;
        unsigned NVMADR11               :1;
        unsigned NVMADR12               :1;
        unsigned NVMADR13               :1;
        unsigned NVMADR14               :1;
    };
    struct {
        unsigned EEADR8                 :1;
        unsigned EEADR9                 :1;
        unsigned EEADR10                :1;
        unsigned EEADR11                :1;
        unsigned EEADR12                :1;
        unsigned EEADR13                :1;
    };
    struct {
        unsigned EEADRH                 :7;
    };
    struct {
        unsigned PMADRH                 :7;
    };
} PMADRHbits_t;
extern volatile PMADRHbits_t PMADRHbits __at(0x892);
// bitfield macros
#define _PMADRH_NVMADRH_POSN                                0x0
#define _PMADRH_NVMADRH_POSITION                            0x0
#define _PMADRH_NVMADRH_SIZE                                0x7
#define _PMADRH_NVMADRH_LENGTH                              0x7
#define _PMADRH_NVMADRH_MASK                                0x7F
#define _PMADRH_NVMADR8_POSN                                0x0
#define _PMADRH_NVMADR8_POSITION                            0x0
#define _PMADRH_NVMADR8_SIZE                                0x1
#define _PMADRH_NVMADR8_LENGTH                              0x1
#define _PMADRH_NVMADR8_MASK                                0x1
#define _PMADRH_NVMADR9_POSN                                0x1
#define _PMADRH_NVMADR9_POSITION                            0x1
#define _PMADRH_NVMADR9_SIZE                                0x1
#define _PMADRH_NVMADR9_LENGTH                              0x1
#define _PMADRH_NVMADR9_MASK                                0x2
#define _PMADRH_NVMADR10_POSN                               0x2
#define _PMADRH_NVMADR10_POSITION                           0x2
#define _PMADRH_NVMADR10_SIZE                               0x1
#define _PMADRH_NVMADR10_LENGTH                             0x1
#define _PMADRH_NVMADR10_MASK                               0x4
#define _PMADRH_NVMADR11_POSN                               0x3
#define _PMADRH_NVMADR11_POSITION                           0x3
#define _PMADRH_NVMADR11_SIZE                               0x1
#define _PMADRH_NVMADR11_LENGTH                             0x1
#define _PMADRH_NVMADR11_MASK                               0x8
#define _PMADRH_NVMADR12_POSN                               0x4
#define _PMADRH_NVMADR12_POSITION                           0x4
#define _PMADRH_NVMADR12_SIZE                               0x1
#define _PMADRH_NVMADR12_LENGTH                             0x1
#define _PMADRH_NVMADR12_MASK                               0x10
#define _PMADRH_NVMADR13_POSN                               0x5
#define _PMADRH_NVMADR13_POSITION                           0x5
#define _PMADRH_NVMADR13_SIZE                               0x1
#define _PMADRH_NVMADR13_LENGTH                             0x1
#define _PMADRH_NVMADR13_MASK                               0x20
#define _PMADRH_NVMADR14_POSN                               0x6
#define _PMADRH_NVMADR14_POSITION                           0x6
#define _PMADRH_NVMADR14_SIZE                               0x1
#define _PMADRH_NVMADR14_LENGTH                             0x1
#define _PMADRH_NVMADR14_MASK                               0x40
#define _PMADRH_EEADR8_POSN                                 0x0
#define _PMADRH_EEADR8_POSITION                             0x0
#define _PMADRH_EEADR8_SIZE                                 0x1
#define _PMADRH_EEADR8_LENGTH                               0x1
#define _PMADRH_EEADR8_MASK                                 0x1
#define _PMADRH_EEADR9_POSN                                 0x1
#define _PMADRH_EEADR9_POSITION                             0x1
#define _PMADRH_EEADR9_SIZE                                 0x1
#define _PMADRH_EEADR9_LENGTH                               0x1
#define _PMADRH_EEADR9_MASK                                 0x2
#define _PMADRH_EEADR10_POSN                                0x2
#define _PMADRH_EEADR10_POSITION                            0x2
#define _PMADRH_EEADR10_SIZE                                0x1
#define _PMADRH_EEADR10_LENGTH                              0x1
#define _PMADRH_EEADR10_MASK                                0x4
#define _PMADRH_EEADR11_POSN                                0x3
#define _PMADRH_EEADR11_POSITION                            0x3
#define _PMADRH_EEADR11_SIZE                                0x1
#define _PMADRH_EEADR11_LENGTH                              0x1
#define _PMADRH_EEADR11_MASK                                0x8
#define _PMADRH_EEADR12_POSN                                0x4
#define _PMADRH_EEADR12_POSITION                            0x4
#define _PMADRH_EEADR12_SIZE                                0x1
#define _PMADRH_EEADR12_LENGTH                              0x1
#define _PMADRH_EEADR12_MASK                                0x10
#define _PMADRH_EEADR13_POSN                                0x5
#define _PMADRH_EEADR13_POSITION                            0x5
#define _PMADRH_EEADR13_SIZE                                0x1
#define _PMADRH_EEADR13_LENGTH                              0x1
#define _PMADRH_EEADR13_MASK                                0x20
#define _PMADRH_EEADRH_POSN                                 0x0
#define _PMADRH_EEADRH_POSITION                             0x0
#define _PMADRH_EEADRH_SIZE                                 0x7
#define _PMADRH_EEADRH_LENGTH                               0x7
#define _PMADRH_EEADRH_MASK                                 0x7F
#define _PMADRH_PMADRH_POSN                                 0x0
#define _PMADRH_PMADRH_POSITION                             0x0
#define _PMADRH_PMADRH_SIZE                                 0x7
#define _PMADRH_PMADRH_LENGTH                               0x7
#define _PMADRH_PMADRH_MASK                                 0x7F

// Register: NVMDAT
#define NVMDAT NVMDAT
extern volatile unsigned short          NVMDAT              __at(0x893);
#ifndef _LIB_BUILD
asm("NVMDAT equ 0893h");
#endif
// aliases
extern volatile unsigned short          EEDAT               __at(0x893);
#ifndef _LIB_BUILD
asm("EEDAT equ 0893h");
#endif
extern volatile unsigned short          PMDAT               __at(0x893);
#ifndef _LIB_BUILD
asm("PMDAT equ 0893h");
#endif

// Register: NVMDATL
#define NVMDATL NVMDATL
extern volatile unsigned char           NVMDATL             __at(0x893);
#ifndef _LIB_BUILD
asm("NVMDATL equ 0893h");
#endif
// aliases
extern volatile unsigned char           EEDATL              __at(0x893);
#ifndef _LIB_BUILD
asm("EEDATL equ 0893h");
#endif
extern volatile unsigned char           PMDATL              __at(0x893);
#ifndef _LIB_BUILD
asm("PMDATL equ 0893h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMDATL                :8;
    };
    struct {
        unsigned NVMDAT0                :1;
        unsigned NVMDAT1                :1;
        unsigned NVMDAT2                :1;
        unsigned NVMDAT3                :1;
        unsigned NVMDAT4                :1;
        unsigned NVMDAT5                :1;
        unsigned NVMDAT6                :1;
        unsigned NVMDAT7                :1;
    };
    struct {
        unsigned EEDAT0                 :1;
        unsigned EEDAT1                 :1;
        unsigned EEDAT2                 :1;
        unsigned EEDAT3                 :1;
        unsigned EEDAT4                 :1;
        unsigned EEDAT5                 :1;
        unsigned EEDAT6                 :1;
        unsigned EEDAT7                 :1;
    };
    struct {
        unsigned EEDATL                 :8;
    };
    struct {
        unsigned PMDATL                 :8;
    };
} NVMDATLbits_t;
extern volatile NVMDATLbits_t NVMDATLbits __at(0x893);
// bitfield macros
#define _NVMDATL_NVMDATL_POSN                               0x0
#define _NVMDATL_NVMDATL_POSITION                           0x0
#define _NVMDATL_NVMDATL_SIZE                               0x8
#define _NVMDATL_NVMDATL_LENGTH                             0x8
#define _NVMDATL_NVMDATL_MASK                               0xFF
#define _NVMDATL_NVMDAT0_POSN                               0x0
#define _NVMDATL_NVMDAT0_POSITION                           0x0
#define _NVMDATL_NVMDAT0_SIZE                               0x1
#define _NVMDATL_NVMDAT0_LENGTH                             0x1
#define _NVMDATL_NVMDAT0_MASK                               0x1
#define _NVMDATL_NVMDAT1_POSN                               0x1
#define _NVMDATL_NVMDAT1_POSITION                           0x1
#define _NVMDATL_NVMDAT1_SIZE                               0x1
#define _NVMDATL_NVMDAT1_LENGTH                             0x1
#define _NVMDATL_NVMDAT1_MASK                               0x2
#define _NVMDATL_NVMDAT2_POSN                               0x2
#define _NVMDATL_NVMDAT2_POSITION                           0x2
#define _NVMDATL_NVMDAT2_SIZE                               0x1
#define _NVMDATL_NVMDAT2_LENGTH                             0x1
#define _NVMDATL_NVMDAT2_MASK                               0x4
#define _NVMDATL_NVMDAT3_POSN                               0x3
#define _NVMDATL_NVMDAT3_POSITION                           0x3
#define _NVMDATL_NVMDAT3_SIZE                               0x1
#define _NVMDATL_NVMDAT3_LENGTH                             0x1
#define _NVMDATL_NVMDAT3_MASK                               0x8
#define _NVMDATL_NVMDAT4_POSN                               0x4
#define _NVMDATL_NVMDAT4_POSITION                           0x4
#define _NVMDATL_NVMDAT4_SIZE                               0x1
#define _NVMDATL_NVMDAT4_LENGTH                             0x1
#define _NVMDATL_NVMDAT4_MASK                               0x10
#define _NVMDATL_NVMDAT5_POSN                               0x5
#define _NVMDATL_NVMDAT5_POSITION                           0x5
#define _NVMDATL_NVMDAT5_SIZE                               0x1
#define _NVMDATL_NVMDAT5_LENGTH                             0x1
#define _NVMDATL_NVMDAT5_MASK                               0x20
#define _NVMDATL_NVMDAT6_POSN                               0x6
#define _NVMDATL_NVMDAT6_POSITION                           0x6
#define _NVMDATL_NVMDAT6_SIZE                               0x1
#define _NVMDATL_NVMDAT6_LENGTH                             0x1
#define _NVMDATL_NVMDAT6_MASK                               0x40
#define _NVMDATL_NVMDAT7_POSN                               0x7
#define _NVMDATL_NVMDAT7_POSITION                           0x7
#define _NVMDATL_NVMDAT7_SIZE                               0x1
#define _NVMDATL_NVMDAT7_LENGTH                             0x1
#define _NVMDATL_NVMDAT7_MASK                               0x80
#define _NVMDATL_EEDAT0_POSN                                0x0
#define _NVMDATL_EEDAT0_POSITION                            0x0
#define _NVMDATL_EEDAT0_SIZE                                0x1
#define _NVMDATL_EEDAT0_LENGTH                              0x1
#define _NVMDATL_EEDAT0_MASK                                0x1
#define _NVMDATL_EEDAT1_POSN                                0x1
#define _NVMDATL_EEDAT1_POSITION                            0x1
#define _NVMDATL_EEDAT1_SIZE                                0x1
#define _NVMDATL_EEDAT1_LENGTH                              0x1
#define _NVMDATL_EEDAT1_MASK                                0x2
#define _NVMDATL_EEDAT2_POSN                                0x2
#define _NVMDATL_EEDAT2_POSITION                            0x2
#define _NVMDATL_EEDAT2_SIZE                                0x1
#define _NVMDATL_EEDAT2_LENGTH                              0x1
#define _NVMDATL_EEDAT2_MASK                                0x4
#define _NVMDATL_EEDAT3_POSN                                0x3
#define _NVMDATL_EEDAT3_POSITION                            0x3
#define _NVMDATL_EEDAT3_SIZE                                0x1
#define _NVMDATL_EEDAT3_LENGTH                              0x1
#define _NVMDATL_EEDAT3_MASK                                0x8
#define _NVMDATL_EEDAT4_POSN                                0x4
#define _NVMDATL_EEDAT4_POSITION                            0x4
#define _NVMDATL_EEDAT4_SIZE                                0x1
#define _NVMDATL_EEDAT4_LENGTH                              0x1
#define _NVMDATL_EEDAT4_MASK                                0x10
#define _NVMDATL_EEDAT5_POSN                                0x5
#define _NVMDATL_EEDAT5_POSITION                            0x5
#define _NVMDATL_EEDAT5_SIZE                                0x1
#define _NVMDATL_EEDAT5_LENGTH                              0x1
#define _NVMDATL_EEDAT5_MASK                                0x20
#define _NVMDATL_EEDAT6_POSN                                0x6
#define _NVMDATL_EEDAT6_POSITION                            0x6
#define _NVMDATL_EEDAT6_SIZE                                0x1
#define _NVMDATL_EEDAT6_LENGTH                              0x1
#define _NVMDATL_EEDAT6_MASK                                0x40
#define _NVMDATL_EEDAT7_POSN                                0x7
#define _NVMDATL_EEDAT7_POSITION                            0x7
#define _NVMDATL_EEDAT7_SIZE                                0x1
#define _NVMDATL_EEDAT7_LENGTH                              0x1
#define _NVMDATL_EEDAT7_MASK                                0x80
#define _NVMDATL_EEDATL_POSN                                0x0
#define _NVMDATL_EEDATL_POSITION                            0x0
#define _NVMDATL_EEDATL_SIZE                                0x8
#define _NVMDATL_EEDATL_LENGTH                              0x8
#define _NVMDATL_EEDATL_MASK                                0xFF
#define _NVMDATL_PMDATL_POSN                                0x0
#define _NVMDATL_PMDATL_POSITION                            0x0
#define _NVMDATL_PMDATL_SIZE                                0x8
#define _NVMDATL_PMDATL_LENGTH                              0x8
#define _NVMDATL_PMDATL_MASK                                0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned NVMDATL                :8;
    };
    struct {
        unsigned NVMDAT0                :1;
        unsigned NVMDAT1                :1;
        unsigned NVMDAT2                :1;
        unsigned NVMDAT3                :1;
        unsigned NVMDAT4                :1;
        unsigned NVMDAT5                :1;
        unsigned NVMDAT6                :1;
        unsigned NVMDAT7                :1;
    };
    struct {
        unsigned EEDAT0                 :1;
        unsigned EEDAT1                 :1;
        unsigned EEDAT2                 :1;
        unsigned EEDAT3                 :1;
        unsigned EEDAT4                 :1;
        unsigned EEDAT5                 :1;
        unsigned EEDAT6                 :1;
        unsigned EEDAT7                 :1;
    };
    struct {
        unsigned EEDATL                 :8;
    };
    struct {
        unsigned PMDATL                 :8;
    };
} EEDATLbits_t;
extern volatile EEDATLbits_t EEDATLbits __at(0x893);
// bitfield macros
#define _EEDATL_NVMDATL_POSN                                0x0
#define _EEDATL_NVMDATL_POSITION                            0x0
#define _EEDATL_NVMDATL_SIZE                                0x8
#define _EEDATL_NVMDATL_LENGTH                              0x8
#define _EEDATL_NVMDATL_MASK                                0xFF
#define _EEDATL_NVMDAT0_POSN                                0x0
#define _EEDATL_NVMDAT0_POSITION                            0x0
#define _EEDATL_NVMDAT0_SIZE                                0x1
#define _EEDATL_NVMDAT0_LENGTH                              0x1
#define _EEDATL_NVMDAT0_MASK                                0x1
#define _EEDATL_NVMDAT1_POSN                                0x1
#define _EEDATL_NVMDAT1_POSITION                            0x1
#define _EEDATL_NVMDAT1_SIZE                                0x1
#define _EEDATL_NVMDAT1_LENGTH                              0x1
#define _EEDATL_NVMDAT1_MASK                                0x2
#define _EEDATL_NVMDAT2_POSN                                0x2
#define _EEDATL_NVMDAT2_POSITION                            0x2
#define _EEDATL_NVMDAT2_SIZE                                0x1
#define _EEDATL_NVMDAT2_LENGTH                              0x1
#define _EEDATL_NVMDAT2_MASK                                0x4
#define _EEDATL_NVMDAT3_POSN                                0x3
#define _EEDATL_NVMDAT3_POSITION                            0x3
#define _EEDATL_NVMDAT3_SIZE                                0x1
#define _EEDATL_NVMDAT3_LENGTH                              0x1
#define _EEDATL_NVMDAT3_MASK                                0x8
#define _EEDATL_NVMDAT4_POSN                                0x4
#define _EEDATL_NVMDAT4_POSITION                            0x4
#define _EEDATL_NVMDAT4_SIZE                                0x1
#define _EEDATL_NVMDAT4_LENGTH                              0x1
#define _EEDATL_NVMDAT4_MASK                                0x10
#define _EEDATL_NVMDAT5_POSN                                0x5
#define _EEDATL_NVMDAT5_POSITION                            0x5
#define _EEDATL_NVMDAT5_SIZE                                0x1
#define _EEDATL_NVMDAT5_LENGTH                              0x1
#define _EEDATL_NVMDAT5_MASK                                0x20
#define _EEDATL_NVMDAT6_POSN                                0x6
#define _EEDATL_NVMDAT6_POSITION                            0x6
#define _EEDATL_NVMDAT6_SIZE                                0x1
#define _EEDATL_NVMDAT6_LENGTH                              0x1
#define _EEDATL_NVMDAT6_MASK                                0x40
#define _EEDATL_NVMDAT7_POSN                                0x7
#define _EEDATL_NVMDAT7_POSITION                            0x7
#define _EEDATL_NVMDAT7_SIZE                                0x1
#define _EEDATL_NVMDAT7_LENGTH                              0x1
#define _EEDATL_NVMDAT7_MASK                                0x80
#define _EEDATL_EEDAT0_POSN                                 0x0
#define _EEDATL_EEDAT0_POSITION                             0x0
#define _EEDATL_EEDAT0_SIZE                                 0x1
#define _EEDATL_EEDAT0_LENGTH                               0x1
#define _EEDATL_EEDAT0_MASK                                 0x1
#define _EEDATL_EEDAT1_POSN                                 0x1
#define _EEDATL_EEDAT1_POSITION                             0x1
#define _EEDATL_EEDAT1_SIZE                                 0x1
#define _EEDATL_EEDAT1_LENGTH                               0x1
#define _EEDATL_EEDAT1_MASK                                 0x2
#define _EEDATL_EEDAT2_POSN                                 0x2
#define _EEDATL_EEDAT2_POSITION                             0x2
#define _EEDATL_EEDAT2_SIZE                                 0x1
#define _EEDATL_EEDAT2_LENGTH                               0x1
#define _EEDATL_EEDAT2_MASK                                 0x4
#define _EEDATL_EEDAT3_POSN                                 0x3
#define _EEDATL_EEDAT3_POSITION                             0x3
#define _EEDATL_EEDAT3_SIZE                                 0x1
#define _EEDATL_EEDAT3_LENGTH                               0x1
#define _EEDATL_EEDAT3_MASK                                 0x8
#define _EEDATL_EEDAT4_POSN                                 0x4
#define _EEDATL_EEDAT4_POSITION                             0x4
#define _EEDATL_EEDAT4_SIZE                                 0x1
#define _EEDATL_EEDAT4_LENGTH                               0x1
#define _EEDATL_EEDAT4_MASK                                 0x10
#define _EEDATL_EEDAT5_POSN                                 0x5
#define _EEDATL_EEDAT5_POSITION                             0x5
#define _EEDATL_EEDAT5_SIZE                                 0x1
#define _EEDATL_EEDAT5_LENGTH                               0x1
#define _EEDATL_EEDAT5_MASK                                 0x20
#define _EEDATL_EEDAT6_POSN                                 0x6
#define _EEDATL_EEDAT6_POSITION                             0x6
#define _EEDATL_EEDAT6_SIZE                                 0x1
#define _EEDATL_EEDAT6_LENGTH                               0x1
#define _EEDATL_EEDAT6_MASK                                 0x40
#define _EEDATL_EEDAT7_POSN                                 0x7
#define _EEDATL_EEDAT7_POSITION                             0x7
#define _EEDATL_EEDAT7_SIZE                                 0x1
#define _EEDATL_EEDAT7_LENGTH                               0x1
#define _EEDATL_EEDAT7_MASK                                 0x80
#define _EEDATL_EEDATL_POSN                                 0x0
#define _EEDATL_EEDATL_POSITION                             0x0
#define _EEDATL_EEDATL_SIZE                                 0x8
#define _EEDATL_EEDATL_LENGTH                               0x8
#define _EEDATL_EEDATL_MASK                                 0xFF
#define _EEDATL_PMDATL_POSN                                 0x0
#define _EEDATL_PMDATL_POSITION                             0x0
#define _EEDATL_PMDATL_SIZE                                 0x8
#define _EEDATL_PMDATL_LENGTH                               0x8
#define _EEDATL_PMDATL_MASK                                 0xFF
typedef union {
    struct {
        unsigned NVMDATL                :8;
    };
    struct {
        unsigned NVMDAT0                :1;
        unsigned NVMDAT1                :1;
        unsigned NVMDAT2                :1;
        unsigned NVMDAT3                :1;
        unsigned NVMDAT4                :1;
        unsigned NVMDAT5                :1;
        unsigned NVMDAT6                :1;
        unsigned NVMDAT7                :1;
    };
    struct {
        unsigned EEDAT0                 :1;
        unsigned EEDAT1                 :1;
        unsigned EEDAT2                 :1;
        unsigned EEDAT3                 :1;
        unsigned EEDAT4                 :1;
        unsigned EEDAT5                 :1;
        unsigned EEDAT6                 :1;
        unsigned EEDAT7                 :1;
    };
    struct {
        unsigned EEDATL                 :8;
    };
    struct {
        unsigned PMDATL                 :8;
    };
} PMDATLbits_t;
extern volatile PMDATLbits_t PMDATLbits __at(0x893);
// bitfield macros
#define _PMDATL_NVMDATL_POSN                                0x0
#define _PMDATL_NVMDATL_POSITION                            0x0
#define _PMDATL_NVMDATL_SIZE                                0x8
#define _PMDATL_NVMDATL_LENGTH                              0x8
#define _PMDATL_NVMDATL_MASK                                0xFF
#define _PMDATL_NVMDAT0_POSN                                0x0
#define _PMDATL_NVMDAT0_POSITION                            0x0
#define _PMDATL_NVMDAT0_SIZE                                0x1
#define _PMDATL_NVMDAT0_LENGTH                              0x1
#define _PMDATL_NVMDAT0_MASK                                0x1
#define _PMDATL_NVMDAT1_POSN                                0x1
#define _PMDATL_NVMDAT1_POSITION                            0x1
#define _PMDATL_NVMDAT1_SIZE                                0x1
#define _PMDATL_NVMDAT1_LENGTH                              0x1
#define _PMDATL_NVMDAT1_MASK                                0x2
#define _PMDATL_NVMDAT2_POSN                                0x2
#define _PMDATL_NVMDAT2_POSITION                            0x2
#define _PMDATL_NVMDAT2_SIZE                                0x1
#define _PMDATL_NVMDAT2_LENGTH                              0x1
#define _PMDATL_NVMDAT2_MASK                                0x4
#define _PMDATL_NVMDAT3_POSN                                0x3
#define _PMDATL_NVMDAT3_POSITION                            0x3
#define _PMDATL_NVMDAT3_SIZE                                0x1
#define _PMDATL_NVMDAT3_LENGTH                              0x1
#define _PMDATL_NVMDAT3_MASK                                0x8
#define _PMDATL_NVMDAT4_POSN                                0x4
#define _PMDATL_NVMDAT4_POSITION                            0x4
#define _PMDATL_NVMDAT4_SIZE                                0x1
#define _PMDATL_NVMDAT4_LENGTH                              0x1
#define _PMDATL_NVMDAT4_MASK                                0x10
#define _PMDATL_NVMDAT5_POSN                                0x5
#define _PMDATL_NVMDAT5_POSITION                            0x5
#define _PMDATL_NVMDAT5_SIZE                                0x1
#define _PMDATL_NVMDAT5_LENGTH                              0x1
#define _PMDATL_NVMDAT5_MASK                                0x20
#define _PMDATL_NVMDAT6_POSN                                0x6
#define _PMDATL_NVMDAT6_POSITION                            0x6
#define _PMDATL_NVMDAT6_SIZE                                0x1
#define _PMDATL_NVMDAT6_LENGTH                              0x1
#define _PMDATL_NVMDAT6_MASK                                0x40
#define _PMDATL_NVMDAT7_POSN                                0x7
#define _PMDATL_NVMDAT7_POSITION                            0x7
#define _PMDATL_NVMDAT7_SIZE                                0x1
#define _PMDATL_NVMDAT7_LENGTH                              0x1
#define _PMDATL_NVMDAT7_MASK                                0x80
#define _PMDATL_EEDAT0_POSN                                 0x0
#define _PMDATL_EEDAT0_POSITION                             0x0
#define _PMDATL_EEDAT0_SIZE                                 0x1
#define _PMDATL_EEDAT0_LENGTH                               0x1
#define _PMDATL_EEDAT0_MASK                                 0x1
#define _PMDATL_EEDAT1_POSN                                 0x1
#define _PMDATL_EEDAT1_POSITION                             0x1
#define _PMDATL_EEDAT1_SIZE                                 0x1
#define _PMDATL_EEDAT1_LENGTH                               0x1
#define _PMDATL_EEDAT1_MASK                                 0x2
#define _PMDATL_EEDAT2_POSN                                 0x2
#define _PMDATL_EEDAT2_POSITION                             0x2
#define _PMDATL_EEDAT2_SIZE                                 0x1
#define _PMDATL_EEDAT2_LENGTH                               0x1
#define _PMDATL_EEDAT2_MASK                                 0x4
#define _PMDATL_EEDAT3_POSN                                 0x3
#define _PMDATL_EEDAT3_POSITION                             0x3
#define _PMDATL_EEDAT3_SIZE                                 0x1
#define _PMDATL_EEDAT3_LENGTH                               0x1
#define _PMDATL_EEDAT3_MASK                                 0x8
#define _PMDATL_EEDAT4_POSN                                 0x4
#define _PMDATL_EEDAT4_POSITION                             0x4
#define _PMDATL_EEDAT4_SIZE                                 0x1
#define _PMDATL_EEDAT4_LENGTH                               0x1
#define _PMDATL_EEDAT4_MASK                                 0x10
#define _PMDATL_EEDAT5_POSN                                 0x5
#define _PMDATL_EEDAT5_POSITION                             0x5
#define _PMDATL_EEDAT5_SIZE                                 0x1
#define _PMDATL_EEDAT5_LENGTH                               0x1
#define _PMDATL_EEDAT5_MASK                                 0x20
#define _PMDATL_EEDAT6_POSN                                 0x6
#define _PMDATL_EEDAT6_POSITION                             0x6
#define _PMDATL_EEDAT6_SIZE                                 0x1
#define _PMDATL_EEDAT6_LENGTH                               0x1
#define _PMDATL_EEDAT6_MASK                                 0x40
#define _PMDATL_EEDAT7_POSN                                 0x7
#define _PMDATL_EEDAT7_POSITION                             0x7
#define _PMDATL_EEDAT7_SIZE                                 0x1
#define _PMDATL_EEDAT7_LENGTH                               0x1
#define _PMDATL_EEDAT7_MASK                                 0x80
#define _PMDATL_EEDATL_POSN                                 0x0
#define _PMDATL_EEDATL_POSITION                             0x0
#define _PMDATL_EEDATL_SIZE                                 0x8
#define _PMDATL_EEDATL_LENGTH                               0x8
#define _PMDATL_EEDATL_MASK                                 0xFF
#define _PMDATL_PMDATL_POSN                                 0x0
#define _PMDATL_PMDATL_POSITION                             0x0
#define _PMDATL_PMDATL_SIZE                                 0x8
#define _PMDATL_PMDATL_LENGTH                               0x8
#define _PMDATL_PMDATL_MASK                                 0xFF

// Register: NVMDATH
#define NVMDATH NVMDATH
extern volatile unsigned char           NVMDATH             __at(0x894);
#ifndef _LIB_BUILD
asm("NVMDATH equ 0894h");
#endif
// aliases
extern volatile unsigned char           EEDATH              __at(0x894);
#ifndef _LIB_BUILD
asm("EEDATH equ 0894h");
#endif
extern volatile unsigned char           PMDATH              __at(0x894);
#ifndef _LIB_BUILD
asm("PMDATH equ 0894h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMDATH                :6;
    };
    struct {
        unsigned NVMDAT8                :1;
        unsigned NVMDAT9                :1;
        unsigned NVMDAT10               :1;
        unsigned NVMDAT11               :1;
        unsigned NVMDAT12               :1;
        unsigned NVMDAT13               :1;
    };
    struct {
        unsigned EEDAT8                 :1;
        unsigned EEDAT9                 :1;
        unsigned EEDAT10                :1;
        unsigned EEDAT11                :1;
        unsigned EEDAT12                :1;
        unsigned EEDAT13                :1;
    };
    struct {
        unsigned EEDATH                 :6;
    };
    struct {
        unsigned PMDATH                 :6;
    };
} NVMDATHbits_t;
extern volatile NVMDATHbits_t NVMDATHbits __at(0x894);
// bitfield macros
#define _NVMDATH_NVMDATH_POSN                               0x0
#define _NVMDATH_NVMDATH_POSITION                           0x0
#define _NVMDATH_NVMDATH_SIZE                               0x6
#define _NVMDATH_NVMDATH_LENGTH                             0x6
#define _NVMDATH_NVMDATH_MASK                               0x3F
#define _NVMDATH_NVMDAT8_POSN                               0x0
#define _NVMDATH_NVMDAT8_POSITION                           0x0
#define _NVMDATH_NVMDAT8_SIZE                               0x1
#define _NVMDATH_NVMDAT8_LENGTH                             0x1
#define _NVMDATH_NVMDAT8_MASK                               0x1
#define _NVMDATH_NVMDAT9_POSN                               0x1
#define _NVMDATH_NVMDAT9_POSITION                           0x1
#define _NVMDATH_NVMDAT9_SIZE                               0x1
#define _NVMDATH_NVMDAT9_LENGTH                             0x1
#define _NVMDATH_NVMDAT9_MASK                               0x2
#define _NVMDATH_NVMDAT10_POSN                              0x2
#define _NVMDATH_NVMDAT10_POSITION                          0x2
#define _NVMDATH_NVMDAT10_SIZE                              0x1
#define _NVMDATH_NVMDAT10_LENGTH                            0x1
#define _NVMDATH_NVMDAT10_MASK                              0x4
#define _NVMDATH_NVMDAT11_POSN                              0x3
#define _NVMDATH_NVMDAT11_POSITION                          0x3
#define _NVMDATH_NVMDAT11_SIZE                              0x1
#define _NVMDATH_NVMDAT11_LENGTH                            0x1
#define _NVMDATH_NVMDAT11_MASK                              0x8
#define _NVMDATH_NVMDAT12_POSN                              0x4
#define _NVMDATH_NVMDAT12_POSITION                          0x4
#define _NVMDATH_NVMDAT12_SIZE                              0x1
#define _NVMDATH_NVMDAT12_LENGTH                            0x1
#define _NVMDATH_NVMDAT12_MASK                              0x10
#define _NVMDATH_NVMDAT13_POSN                              0x5
#define _NVMDATH_NVMDAT13_POSITION                          0x5
#define _NVMDATH_NVMDAT13_SIZE                              0x1
#define _NVMDATH_NVMDAT13_LENGTH                            0x1
#define _NVMDATH_NVMDAT13_MASK                              0x20
#define _NVMDATH_EEDAT8_POSN                                0x0
#define _NVMDATH_EEDAT8_POSITION                            0x0
#define _NVMDATH_EEDAT8_SIZE                                0x1
#define _NVMDATH_EEDAT8_LENGTH                              0x1
#define _NVMDATH_EEDAT8_MASK                                0x1
#define _NVMDATH_EEDAT9_POSN                                0x1
#define _NVMDATH_EEDAT9_POSITION                            0x1
#define _NVMDATH_EEDAT9_SIZE                                0x1
#define _NVMDATH_EEDAT9_LENGTH                              0x1
#define _NVMDATH_EEDAT9_MASK                                0x2
#define _NVMDATH_EEDAT10_POSN                               0x2
#define _NVMDATH_EEDAT10_POSITION                           0x2
#define _NVMDATH_EEDAT10_SIZE                               0x1
#define _NVMDATH_EEDAT10_LENGTH                             0x1
#define _NVMDATH_EEDAT10_MASK                               0x4
#define _NVMDATH_EEDAT11_POSN                               0x3
#define _NVMDATH_EEDAT11_POSITION                           0x3
#define _NVMDATH_EEDAT11_SIZE                               0x1
#define _NVMDATH_EEDAT11_LENGTH                             0x1
#define _NVMDATH_EEDAT11_MASK                               0x8
#define _NVMDATH_EEDAT12_POSN                               0x4
#define _NVMDATH_EEDAT12_POSITION                           0x4
#define _NVMDATH_EEDAT12_SIZE                               0x1
#define _NVMDATH_EEDAT12_LENGTH                             0x1
#define _NVMDATH_EEDAT12_MASK                               0x10
#define _NVMDATH_EEDAT13_POSN                               0x5
#define _NVMDATH_EEDAT13_POSITION                           0x5
#define _NVMDATH_EEDAT13_SIZE                               0x1
#define _NVMDATH_EEDAT13_LENGTH                             0x1
#define _NVMDATH_EEDAT13_MASK                               0x20
#define _NVMDATH_EEDATH_POSN                                0x0
#define _NVMDATH_EEDATH_POSITION                            0x0
#define _NVMDATH_EEDATH_SIZE                                0x6
#define _NVMDATH_EEDATH_LENGTH                              0x6
#define _NVMDATH_EEDATH_MASK                                0x3F
#define _NVMDATH_PMDATH_POSN                                0x0
#define _NVMDATH_PMDATH_POSITION                            0x0
#define _NVMDATH_PMDATH_SIZE                                0x6
#define _NVMDATH_PMDATH_LENGTH                              0x6
#define _NVMDATH_PMDATH_MASK                                0x3F
// alias bitfield definitions
typedef union {
    struct {
        unsigned NVMDATH                :6;
    };
    struct {
        unsigned NVMDAT8                :1;
        unsigned NVMDAT9                :1;
        unsigned NVMDAT10               :1;
        unsigned NVMDAT11               :1;
        unsigned NVMDAT12               :1;
        unsigned NVMDAT13               :1;
    };
    struct {
        unsigned EEDAT8                 :1;
        unsigned EEDAT9                 :1;
        unsigned EEDAT10                :1;
        unsigned EEDAT11                :1;
        unsigned EEDAT12                :1;
        unsigned EEDAT13                :1;
    };
    struct {
        unsigned EEDATH                 :6;
    };
    struct {
        unsigned PMDATH                 :6;
    };
} EEDATHbits_t;
extern volatile EEDATHbits_t EEDATHbits __at(0x894);
// bitfield macros
#define _EEDATH_NVMDATH_POSN                                0x0
#define _EEDATH_NVMDATH_POSITION                            0x0
#define _EEDATH_NVMDATH_SIZE                                0x6
#define _EEDATH_NVMDATH_LENGTH                              0x6
#define _EEDATH_NVMDATH_MASK                                0x3F
#define _EEDATH_NVMDAT8_POSN                                0x0
#define _EEDATH_NVMDAT8_POSITION                            0x0
#define _EEDATH_NVMDAT8_SIZE                                0x1
#define _EEDATH_NVMDAT8_LENGTH                              0x1
#define _EEDATH_NVMDAT8_MASK                                0x1
#define _EEDATH_NVMDAT9_POSN                                0x1
#define _EEDATH_NVMDAT9_POSITION                            0x1
#define _EEDATH_NVMDAT9_SIZE                                0x1
#define _EEDATH_NVMDAT9_LENGTH                              0x1
#define _EEDATH_NVMDAT9_MASK                                0x2
#define _EEDATH_NVMDAT10_POSN                               0x2
#define _EEDATH_NVMDAT10_POSITION                           0x2
#define _EEDATH_NVMDAT10_SIZE                               0x1
#define _EEDATH_NVMDAT10_LENGTH                             0x1
#define _EEDATH_NVMDAT10_MASK                               0x4
#define _EEDATH_NVMDAT11_POSN                               0x3
#define _EEDATH_NVMDAT11_POSITION                           0x3
#define _EEDATH_NVMDAT11_SIZE                               0x1
#define _EEDATH_NVMDAT11_LENGTH                             0x1
#define _EEDATH_NVMDAT11_MASK                               0x8
#define _EEDATH_NVMDAT12_POSN                               0x4
#define _EEDATH_NVMDAT12_POSITION                           0x4
#define _EEDATH_NVMDAT12_SIZE                               0x1
#define _EEDATH_NVMDAT12_LENGTH                             0x1
#define _EEDATH_NVMDAT12_MASK                               0x10
#define _EEDATH_NVMDAT13_POSN                               0x5
#define _EEDATH_NVMDAT13_POSITION                           0x5
#define _EEDATH_NVMDAT13_SIZE                               0x1
#define _EEDATH_NVMDAT13_LENGTH                             0x1
#define _EEDATH_NVMDAT13_MASK                               0x20
#define _EEDATH_EEDAT8_POSN                                 0x0
#define _EEDATH_EEDAT8_POSITION                             0x0
#define _EEDATH_EEDAT8_SIZE                                 0x1
#define _EEDATH_EEDAT8_LENGTH                               0x1
#define _EEDATH_EEDAT8_MASK                                 0x1
#define _EEDATH_EEDAT9_POSN                                 0x1
#define _EEDATH_EEDAT9_POSITION                             0x1
#define _EEDATH_EEDAT9_SIZE                                 0x1
#define _EEDATH_EEDAT9_LENGTH                               0x1
#define _EEDATH_EEDAT9_MASK                                 0x2
#define _EEDATH_EEDAT10_POSN                                0x2
#define _EEDATH_EEDAT10_POSITION                            0x2
#define _EEDATH_EEDAT10_SIZE                                0x1
#define _EEDATH_EEDAT10_LENGTH                              0x1
#define _EEDATH_EEDAT10_MASK                                0x4
#define _EEDATH_EEDAT11_POSN                                0x3
#define _EEDATH_EEDAT11_POSITION                            0x3
#define _EEDATH_EEDAT11_SIZE                                0x1
#define _EEDATH_EEDAT11_LENGTH                              0x1
#define _EEDATH_EEDAT11_MASK                                0x8
#define _EEDATH_EEDAT12_POSN                                0x4
#define _EEDATH_EEDAT12_POSITION                            0x4
#define _EEDATH_EEDAT12_SIZE                                0x1
#define _EEDATH_EEDAT12_LENGTH                              0x1
#define _EEDATH_EEDAT12_MASK                                0x10
#define _EEDATH_EEDAT13_POSN                                0x5
#define _EEDATH_EEDAT13_POSITION                            0x5
#define _EEDATH_EEDAT13_SIZE                                0x1
#define _EEDATH_EEDAT13_LENGTH                              0x1
#define _EEDATH_EEDAT13_MASK                                0x20
#define _EEDATH_EEDATH_POSN                                 0x0
#define _EEDATH_EEDATH_POSITION                             0x0
#define _EEDATH_EEDATH_SIZE                                 0x6
#define _EEDATH_EEDATH_LENGTH                               0x6
#define _EEDATH_EEDATH_MASK                                 0x3F
#define _EEDATH_PMDATH_POSN                                 0x0
#define _EEDATH_PMDATH_POSITION                             0x0
#define _EEDATH_PMDATH_SIZE                                 0x6
#define _EEDATH_PMDATH_LENGTH                               0x6
#define _EEDATH_PMDATH_MASK                                 0x3F
typedef union {
    struct {
        unsigned NVMDATH                :6;
    };
    struct {
        unsigned NVMDAT8                :1;
        unsigned NVMDAT9                :1;
        unsigned NVMDAT10               :1;
        unsigned NVMDAT11               :1;
        unsigned NVMDAT12               :1;
        unsigned NVMDAT13               :1;
    };
    struct {
        unsigned EEDAT8                 :1;
        unsigned EEDAT9                 :1;
        unsigned EEDAT10                :1;
        unsigned EEDAT11                :1;
        unsigned EEDAT12                :1;
        unsigned EEDAT13                :1;
    };
    struct {
        unsigned EEDATH                 :6;
    };
    struct {
        unsigned PMDATH                 :6;
    };
} PMDATHbits_t;
extern volatile PMDATHbits_t PMDATHbits __at(0x894);
// bitfield macros
#define _PMDATH_NVMDATH_POSN                                0x0
#define _PMDATH_NVMDATH_POSITION                            0x0
#define _PMDATH_NVMDATH_SIZE                                0x6
#define _PMDATH_NVMDATH_LENGTH                              0x6
#define _PMDATH_NVMDATH_MASK                                0x3F
#define _PMDATH_NVMDAT8_POSN                                0x0
#define _PMDATH_NVMDAT8_POSITION                            0x0
#define _PMDATH_NVMDAT8_SIZE                                0x1
#define _PMDATH_NVMDAT8_LENGTH                              0x1
#define _PMDATH_NVMDAT8_MASK                                0x1
#define _PMDATH_NVMDAT9_POSN                                0x1
#define _PMDATH_NVMDAT9_POSITION                            0x1
#define _PMDATH_NVMDAT9_SIZE                                0x1
#define _PMDATH_NVMDAT9_LENGTH                              0x1
#define _PMDATH_NVMDAT9_MASK                                0x2
#define _PMDATH_NVMDAT10_POSN                               0x2
#define _PMDATH_NVMDAT10_POSITION                           0x2
#define _PMDATH_NVMDAT10_SIZE                               0x1
#define _PMDATH_NVMDAT10_LENGTH                             0x1
#define _PMDATH_NVMDAT10_MASK                               0x4
#define _PMDATH_NVMDAT11_POSN                               0x3
#define _PMDATH_NVMDAT11_POSITION                           0x3
#define _PMDATH_NVMDAT11_SIZE                               0x1
#define _PMDATH_NVMDAT11_LENGTH                             0x1
#define _PMDATH_NVMDAT11_MASK                               0x8
#define _PMDATH_NVMDAT12_POSN                               0x4
#define _PMDATH_NVMDAT12_POSITION                           0x4
#define _PMDATH_NVMDAT12_SIZE                               0x1
#define _PMDATH_NVMDAT12_LENGTH                             0x1
#define _PMDATH_NVMDAT12_MASK                               0x10
#define _PMDATH_NVMDAT13_POSN                               0x5
#define _PMDATH_NVMDAT13_POSITION                           0x5
#define _PMDATH_NVMDAT13_SIZE                               0x1
#define _PMDATH_NVMDAT13_LENGTH                             0x1
#define _PMDATH_NVMDAT13_MASK                               0x20
#define _PMDATH_EEDAT8_POSN                                 0x0
#define _PMDATH_EEDAT8_POSITION                             0x0
#define _PMDATH_EEDAT8_SIZE                                 0x1
#define _PMDATH_EEDAT8_LENGTH                               0x1
#define _PMDATH_EEDAT8_MASK                                 0x1
#define _PMDATH_EEDAT9_POSN                                 0x1
#define _PMDATH_EEDAT9_POSITION                             0x1
#define _PMDATH_EEDAT9_SIZE                                 0x1
#define _PMDATH_EEDAT9_LENGTH                               0x1
#define _PMDATH_EEDAT9_MASK                                 0x2
#define _PMDATH_EEDAT10_POSN                                0x2
#define _PMDATH_EEDAT10_POSITION                            0x2
#define _PMDATH_EEDAT10_SIZE                                0x1
#define _PMDATH_EEDAT10_LENGTH                              0x1
#define _PMDATH_EEDAT10_MASK                                0x4
#define _PMDATH_EEDAT11_POSN                                0x3
#define _PMDATH_EEDAT11_POSITION                            0x3
#define _PMDATH_EEDAT11_SIZE                                0x1
#define _PMDATH_EEDAT11_LENGTH                              0x1
#define _PMDATH_EEDAT11_MASK                                0x8
#define _PMDATH_EEDAT12_POSN                                0x4
#define _PMDATH_EEDAT12_POSITION                            0x4
#define _PMDATH_EEDAT12_SIZE                                0x1
#define _PMDATH_EEDAT12_LENGTH                              0x1
#define _PMDATH_EEDAT12_MASK                                0x10
#define _PMDATH_EEDAT13_POSN                                0x5
#define _PMDATH_EEDAT13_POSITION                            0x5
#define _PMDATH_EEDAT13_SIZE                                0x1
#define _PMDATH_EEDAT13_LENGTH                              0x1
#define _PMDATH_EEDAT13_MASK                                0x20
#define _PMDATH_EEDATH_POSN                                 0x0
#define _PMDATH_EEDATH_POSITION                             0x0
#define _PMDATH_EEDATH_SIZE                                 0x6
#define _PMDATH_EEDATH_LENGTH                               0x6
#define _PMDATH_EEDATH_MASK                                 0x3F
#define _PMDATH_PMDATH_POSN                                 0x0
#define _PMDATH_PMDATH_POSITION                             0x0
#define _PMDATH_PMDATH_SIZE                                 0x6
#define _PMDATH_PMDATH_LENGTH                               0x6
#define _PMDATH_PMDATH_MASK                                 0x3F

// Register: NVMCON1
#define NVMCON1 NVMCON1
extern volatile unsigned char           NVMCON1             __at(0x895);
#ifndef _LIB_BUILD
asm("NVMCON1 equ 0895h");
#endif
// aliases
extern volatile unsigned char           EECON1              __at(0x895);
#ifndef _LIB_BUILD
asm("EECON1 equ 0895h");
#endif
extern volatile unsigned char           PMCON1              __at(0x895);
#ifndef _LIB_BUILD
asm("PMCON1 equ 0895h");
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
    struct {
        unsigned                        :6;
        unsigned CFGS                   :1;
    };
} NVMCON1bits_t;
extern volatile NVMCON1bits_t NVMCON1bits __at(0x895);
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
#define _NVMCON1_CFGS_POSN                                  0x6
#define _NVMCON1_CFGS_POSITION                              0x6
#define _NVMCON1_CFGS_SIZE                                  0x1
#define _NVMCON1_CFGS_LENGTH                                0x1
#define _NVMCON1_CFGS_MASK                                  0x40
// alias bitfield definitions
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
    struct {
        unsigned                        :6;
        unsigned CFGS                   :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x895);
// bitfield macros
#define _EECON1_RD_POSN                                     0x0
#define _EECON1_RD_POSITION                                 0x0
#define _EECON1_RD_SIZE                                     0x1
#define _EECON1_RD_LENGTH                                   0x1
#define _EECON1_RD_MASK                                     0x1
#define _EECON1_WR_POSN                                     0x1
#define _EECON1_WR_POSITION                                 0x1
#define _EECON1_WR_SIZE                                     0x1
#define _EECON1_WR_LENGTH                                   0x1
#define _EECON1_WR_MASK                                     0x2
#define _EECON1_WREN_POSN                                   0x2
#define _EECON1_WREN_POSITION                               0x2
#define _EECON1_WREN_SIZE                                   0x1
#define _EECON1_WREN_LENGTH                                 0x1
#define _EECON1_WREN_MASK                                   0x4
#define _EECON1_WRERR_POSN                                  0x3
#define _EECON1_WRERR_POSITION                              0x3
#define _EECON1_WRERR_SIZE                                  0x1
#define _EECON1_WRERR_LENGTH                                0x1
#define _EECON1_WRERR_MASK                                  0x8
#define _EECON1_FREE_POSN                                   0x4
#define _EECON1_FREE_POSITION                               0x4
#define _EECON1_FREE_SIZE                                   0x1
#define _EECON1_FREE_LENGTH                                 0x1
#define _EECON1_FREE_MASK                                   0x10
#define _EECON1_LWLO_POSN                                   0x5
#define _EECON1_LWLO_POSITION                               0x5
#define _EECON1_LWLO_SIZE                                   0x1
#define _EECON1_LWLO_LENGTH                                 0x1
#define _EECON1_LWLO_MASK                                   0x20
#define _EECON1_NVMREGS_POSN                                0x6
#define _EECON1_NVMREGS_POSITION                            0x6
#define _EECON1_NVMREGS_SIZE                                0x1
#define _EECON1_NVMREGS_LENGTH                              0x1
#define _EECON1_NVMREGS_MASK                                0x40
#define _EECON1_CFGS_POSN                                   0x6
#define _EECON1_CFGS_POSITION                               0x6
#define _EECON1_CFGS_SIZE                                   0x1
#define _EECON1_CFGS_LENGTH                                 0x1
#define _EECON1_CFGS_MASK                                   0x40
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
    struct {
        unsigned                        :6;
        unsigned CFGS                   :1;
    };
} PMCON1bits_t;
extern volatile PMCON1bits_t PMCON1bits __at(0x895);
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
#define _PMCON1_WRERR_POSN                                  0x3
#define _PMCON1_WRERR_POSITION                              0x3
#define _PMCON1_WRERR_SIZE                                  0x1
#define _PMCON1_WRERR_LENGTH                                0x1
#define _PMCON1_WRERR_MASK                                  0x8
#define _PMCON1_FREE_POSN                                   0x4
#define _PMCON1_FREE_POSITION                               0x4
#define _PMCON1_FREE_SIZE                                   0x1
#define _PMCON1_FREE_LENGTH                                 0x1
#define _PMCON1_FREE_MASK                                   0x10
#define _PMCON1_LWLO_POSN                                   0x5
#define _PMCON1_LWLO_POSITION                               0x5
#define _PMCON1_LWLO_SIZE                                   0x1
#define _PMCON1_LWLO_LENGTH                                 0x1
#define _PMCON1_LWLO_MASK                                   0x20
#define _PMCON1_NVMREGS_POSN                                0x6
#define _PMCON1_NVMREGS_POSITION                            0x6
#define _PMCON1_NVMREGS_SIZE                                0x1
#define _PMCON1_NVMREGS_LENGTH                              0x1
#define _PMCON1_NVMREGS_MASK                                0x40
#define _PMCON1_CFGS_POSN                                   0x6
#define _PMCON1_CFGS_POSITION                               0x6
#define _PMCON1_CFGS_SIZE                                   0x1
#define _PMCON1_CFGS_LENGTH                                 0x1
#define _PMCON1_CFGS_MASK                                   0x40

// Register: NVMCON2
#define NVMCON2 NVMCON2
extern volatile unsigned char           NVMCON2             __at(0x896);
#ifndef _LIB_BUILD
asm("NVMCON2 equ 0896h");
#endif
// aliases
extern volatile unsigned char           EECON2              __at(0x896);
#ifndef _LIB_BUILD
asm("EECON2 equ 0896h");
#endif
extern volatile unsigned char           PMCON2              __at(0x896);
#ifndef _LIB_BUILD
asm("PMCON2 equ 0896h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVMCON2                :8;
    };
    struct {
        unsigned EECON2                 :8;
    };
    struct {
        unsigned PMCON2                 :8;
    };
} NVMCON2bits_t;
extern volatile NVMCON2bits_t NVMCON2bits __at(0x896);
// bitfield macros
#define _NVMCON2_NVMCON2_POSN                               0x0
#define _NVMCON2_NVMCON2_POSITION                           0x0
#define _NVMCON2_NVMCON2_SIZE                               0x8
#define _NVMCON2_NVMCON2_LENGTH                             0x8
#define _NVMCON2_NVMCON2_MASK                               0xFF
#define _NVMCON2_EECON2_POSN                                0x0
#define _NVMCON2_EECON2_POSITION                            0x0
#define _NVMCON2_EECON2_SIZE                                0x8
#define _NVMCON2_EECON2_LENGTH                              0x8
#define _NVMCON2_EECON2_MASK                                0xFF
#define _NVMCON2_PMCON2_POSN                                0x0
#define _NVMCON2_PMCON2_POSITION                            0x0
#define _NVMCON2_PMCON2_SIZE                                0x8
#define _NVMCON2_PMCON2_LENGTH                              0x8
#define _NVMCON2_PMCON2_MASK                                0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned NVMCON2                :8;
    };
    struct {
        unsigned EECON2                 :8;
    };
    struct {
        unsigned PMCON2                 :8;
    };
} EECON2bits_t;
extern volatile EECON2bits_t EECON2bits __at(0x896);
// bitfield macros
#define _EECON2_NVMCON2_POSN                                0x0
#define _EECON2_NVMCON2_POSITION                            0x0
#define _EECON2_NVMCON2_SIZE                                0x8
#define _EECON2_NVMCON2_LENGTH                              0x8
#define _EECON2_NVMCON2_MASK                                0xFF
#define _EECON2_EECON2_POSN                                 0x0
#define _EECON2_EECON2_POSITION                             0x0
#define _EECON2_EECON2_SIZE                                 0x8
#define _EECON2_EECON2_LENGTH                               0x8
#define _EECON2_EECON2_MASK                                 0xFF
#define _EECON2_PMCON2_POSN                                 0x0
#define _EECON2_PMCON2_POSITION                             0x0
#define _EECON2_PMCON2_SIZE                                 0x8
#define _EECON2_PMCON2_LENGTH                               0x8
#define _EECON2_PMCON2_MASK                                 0xFF
typedef union {
    struct {
        unsigned NVMCON2                :8;
    };
    struct {
        unsigned EECON2                 :8;
    };
    struct {
        unsigned PMCON2                 :8;
    };
} PMCON2bits_t;
extern volatile PMCON2bits_t PMCON2bits __at(0x896);
// bitfield macros
#define _PMCON2_NVMCON2_POSN                                0x0
#define _PMCON2_NVMCON2_POSITION                            0x0
#define _PMCON2_NVMCON2_SIZE                                0x8
#define _PMCON2_NVMCON2_LENGTH                              0x8
#define _PMCON2_NVMCON2_MASK                                0xFF
#define _PMCON2_EECON2_POSN                                 0x0
#define _PMCON2_EECON2_POSITION                             0x0
#define _PMCON2_EECON2_SIZE                                 0x8
#define _PMCON2_EECON2_LENGTH                               0x8
#define _PMCON2_EECON2_MASK                                 0xFF
#define _PMCON2_PMCON2_POSN                                 0x0
#define _PMCON2_PMCON2_POSITION                             0x0
#define _PMCON2_PMCON2_SIZE                                 0x8
#define _PMCON2_PMCON2_LENGTH                               0x8
#define _PMCON2_PMCON2_MASK                                 0xFF

// Register: PCON0
#define PCON0 PCON0
extern volatile unsigned char           PCON0               __at(0x89B);
#ifndef _LIB_BUILD
asm("PCON0 equ 089Bh");
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
extern volatile PCON0bits_t PCON0bits __at(0x89B);
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

// Register: PMD0
#define PMD0 PMD0
extern volatile unsigned char           PMD0                __at(0x911);
#ifndef _LIB_BUILD
asm("PMD0 equ 0911h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCMD                  :1;
        unsigned CLKRMD                 :1;
        unsigned NVMMD                  :1;
        unsigned                        :3;
        unsigned FVRMD                  :1;
        unsigned SYSCMD                 :1;
    };
} PMD0bits_t;
extern volatile PMD0bits_t PMD0bits __at(0x911);
// bitfield macros
#define _PMD0_IOCMD_POSN                                    0x0
#define _PMD0_IOCMD_POSITION                                0x0
#define _PMD0_IOCMD_SIZE                                    0x1
#define _PMD0_IOCMD_LENGTH                                  0x1
#define _PMD0_IOCMD_MASK                                    0x1
#define _PMD0_CLKRMD_POSN                                   0x1
#define _PMD0_CLKRMD_POSITION                               0x1
#define _PMD0_CLKRMD_SIZE                                   0x1
#define _PMD0_CLKRMD_LENGTH                                 0x1
#define _PMD0_CLKRMD_MASK                                   0x2
#define _PMD0_NVMMD_POSN                                    0x2
#define _PMD0_NVMMD_POSITION                                0x2
#define _PMD0_NVMMD_SIZE                                    0x1
#define _PMD0_NVMMD_LENGTH                                  0x1
#define _PMD0_NVMMD_MASK                                    0x4
#define _PMD0_FVRMD_POSN                                    0x6
#define _PMD0_FVRMD_POSITION                                0x6
#define _PMD0_FVRMD_SIZE                                    0x1
#define _PMD0_FVRMD_LENGTH                                  0x1
#define _PMD0_FVRMD_MASK                                    0x40
#define _PMD0_SYSCMD_POSN                                   0x7
#define _PMD0_SYSCMD_POSITION                               0x7
#define _PMD0_SYSCMD_SIZE                                   0x1
#define _PMD0_SYSCMD_LENGTH                                 0x1
#define _PMD0_SYSCMD_MASK                                   0x80

// Register: PMD1
#define PMD1 PMD1
extern volatile unsigned char           PMD1                __at(0x912);
#ifndef _LIB_BUILD
asm("PMD1 equ 0912h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0MD                 :1;
        unsigned TMR1MD                 :1;
        unsigned TMR2MD                 :1;
        unsigned                        :4;
        unsigned NCOMD                  :1;
    };
} PMD1bits_t;
extern volatile PMD1bits_t PMD1bits __at(0x912);
// bitfield macros
#define _PMD1_TMR0MD_POSN                                   0x0
#define _PMD1_TMR0MD_POSITION                               0x0
#define _PMD1_TMR0MD_SIZE                                   0x1
#define _PMD1_TMR0MD_LENGTH                                 0x1
#define _PMD1_TMR0MD_MASK                                   0x1
#define _PMD1_TMR1MD_POSN                                   0x1
#define _PMD1_TMR1MD_POSITION                               0x1
#define _PMD1_TMR1MD_SIZE                                   0x1
#define _PMD1_TMR1MD_LENGTH                                 0x1
#define _PMD1_TMR1MD_MASK                                   0x2
#define _PMD1_TMR2MD_POSN                                   0x2
#define _PMD1_TMR2MD_POSITION                               0x2
#define _PMD1_TMR2MD_SIZE                                   0x1
#define _PMD1_TMR2MD_LENGTH                                 0x1
#define _PMD1_TMR2MD_MASK                                   0x4
#define _PMD1_NCOMD_POSN                                    0x7
#define _PMD1_NCOMD_POSITION                                0x7
#define _PMD1_NCOMD_SIZE                                    0x1
#define _PMD1_NCOMD_LENGTH                                  0x1
#define _PMD1_NCOMD_MASK                                    0x80

// Register: PMD2
#define PMD2 PMD2
extern volatile unsigned char           PMD2                __at(0x913);
#ifndef _LIB_BUILD
asm("PMD2 equ 0913h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned CMP1MD                 :1;
        unsigned                        :3;
        unsigned ADCMD                  :1;
        unsigned DACMD                  :1;
    };
} PMD2bits_t;
extern volatile PMD2bits_t PMD2bits __at(0x913);
// bitfield macros
#define _PMD2_CMP1MD_POSN                                   0x1
#define _PMD2_CMP1MD_POSITION                               0x1
#define _PMD2_CMP1MD_SIZE                                   0x1
#define _PMD2_CMP1MD_LENGTH                                 0x1
#define _PMD2_CMP1MD_MASK                                   0x2
#define _PMD2_ADCMD_POSN                                    0x5
#define _PMD2_ADCMD_POSITION                                0x5
#define _PMD2_ADCMD_SIZE                                    0x1
#define _PMD2_ADCMD_LENGTH                                  0x1
#define _PMD2_ADCMD_MASK                                    0x20
#define _PMD2_DACMD_POSN                                    0x6
#define _PMD2_DACMD_POSITION                                0x6
#define _PMD2_DACMD_SIZE                                    0x1
#define _PMD2_DACMD_LENGTH                                  0x1
#define _PMD2_DACMD_MASK                                    0x40

// Register: PMD3
#define PMD3 PMD3
extern volatile unsigned char           PMD3                __at(0x914);
#ifndef _LIB_BUILD
asm("PMD3 equ 0914h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1MD                 :1;
        unsigned CCP2MD                 :1;
        unsigned                        :2;
        unsigned PWM5MD                 :1;
        unsigned PWM6MD                 :1;
        unsigned CWG1MD                 :1;
    };
} PMD3bits_t;
extern volatile PMD3bits_t PMD3bits __at(0x914);
// bitfield macros
#define _PMD3_CCP1MD_POSN                                   0x0
#define _PMD3_CCP1MD_POSITION                               0x0
#define _PMD3_CCP1MD_SIZE                                   0x1
#define _PMD3_CCP1MD_LENGTH                                 0x1
#define _PMD3_CCP1MD_MASK                                   0x1
#define _PMD3_CCP2MD_POSN                                   0x1
#define _PMD3_CCP2MD_POSITION                               0x1
#define _PMD3_CCP2MD_SIZE                                   0x1
#define _PMD3_CCP2MD_LENGTH                                 0x1
#define _PMD3_CCP2MD_MASK                                   0x2
#define _PMD3_PWM5MD_POSN                                   0x4
#define _PMD3_PWM5MD_POSITION                               0x4
#define _PMD3_PWM5MD_SIZE                                   0x1
#define _PMD3_PWM5MD_LENGTH                                 0x1
#define _PMD3_PWM5MD_MASK                                   0x10
#define _PMD3_PWM6MD_POSN                                   0x5
#define _PMD3_PWM6MD_POSITION                               0x5
#define _PMD3_PWM6MD_SIZE                                   0x1
#define _PMD3_PWM6MD_LENGTH                                 0x1
#define _PMD3_PWM6MD_MASK                                   0x20
#define _PMD3_CWG1MD_POSN                                   0x6
#define _PMD3_CWG1MD_POSITION                               0x6
#define _PMD3_CWG1MD_SIZE                                   0x1
#define _PMD3_CWG1MD_LENGTH                                 0x1
#define _PMD3_CWG1MD_MASK                                   0x40

// Register: PMD4
#define PMD4 PMD4
extern volatile unsigned char           PMD4                __at(0x915);
#ifndef _LIB_BUILD
asm("PMD4 equ 0915h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned MSSP1MD                :1;
        unsigned                        :3;
        unsigned UART1MD                :1;
    };
} PMD4bits_t;
extern volatile PMD4bits_t PMD4bits __at(0x915);
// bitfield macros
#define _PMD4_MSSP1MD_POSN                                  0x1
#define _PMD4_MSSP1MD_POSITION                              0x1
#define _PMD4_MSSP1MD_SIZE                                  0x1
#define _PMD4_MSSP1MD_LENGTH                                0x1
#define _PMD4_MSSP1MD_MASK                                  0x2
#define _PMD4_UART1MD_POSN                                  0x5
#define _PMD4_UART1MD_POSITION                              0x5
#define _PMD4_UART1MD_SIZE                                  0x1
#define _PMD4_UART1MD_LENGTH                                0x1
#define _PMD4_UART1MD_MASK                                  0x20

// Register: PMD5
#define PMD5 PMD5
extern volatile unsigned char           PMD5                __at(0x916);
#ifndef _LIB_BUILD
asm("PMD5 equ 0916h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DSMMD                  :1;
        unsigned CLC1MD                 :1;
        unsigned CLC2MD                 :1;
    };
} PMD5bits_t;
extern volatile PMD5bits_t PMD5bits __at(0x916);
// bitfield macros
#define _PMD5_DSMMD_POSN                                    0x0
#define _PMD5_DSMMD_POSITION                                0x0
#define _PMD5_DSMMD_SIZE                                    0x1
#define _PMD5_DSMMD_LENGTH                                  0x1
#define _PMD5_DSMMD_MASK                                    0x1
#define _PMD5_CLC1MD_POSN                                   0x1
#define _PMD5_CLC1MD_POSITION                               0x1
#define _PMD5_CLC1MD_SIZE                                   0x1
#define _PMD5_CLC1MD_LENGTH                                 0x1
#define _PMD5_CLC1MD_MASK                                   0x2
#define _PMD5_CLC2MD_POSN                                   0x2
#define _PMD5_CLC2MD_POSITION                               0x2
#define _PMD5_CLC2MD_SIZE                                   0x1
#define _PMD5_CLC2MD_LENGTH                                 0x1
#define _PMD5_CLC2MD_MASK                                   0x4

// Register: CPUDOZE
#define CPUDOZE CPUDOZE
extern volatile unsigned char           CPUDOZE             __at(0x918);
#ifndef _LIB_BUILD
asm("CPUDOZE equ 0918h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DOZE                   :3;
        unsigned                        :1;
        unsigned DOE                    :1;
        unsigned ROI                    :1;
        unsigned DOZEN                  :1;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned DOZE0                  :1;
        unsigned DOZE1                  :1;
        unsigned DOZE2                  :1;
    };
} CPUDOZEbits_t;
extern volatile CPUDOZEbits_t CPUDOZEbits __at(0x918);
// bitfield macros
#define _CPUDOZE_DOZE_POSN                                  0x0
#define _CPUDOZE_DOZE_POSITION                              0x0
#define _CPUDOZE_DOZE_SIZE                                  0x3
#define _CPUDOZE_DOZE_LENGTH                                0x3
#define _CPUDOZE_DOZE_MASK                                  0x7
#define _CPUDOZE_DOE_POSN                                   0x4
#define _CPUDOZE_DOE_POSITION                               0x4
#define _CPUDOZE_DOE_SIZE                                   0x1
#define _CPUDOZE_DOE_LENGTH                                 0x1
#define _CPUDOZE_DOE_MASK                                   0x10
#define _CPUDOZE_ROI_POSN                                   0x5
#define _CPUDOZE_ROI_POSITION                               0x5
#define _CPUDOZE_ROI_SIZE                                   0x1
#define _CPUDOZE_ROI_LENGTH                                 0x1
#define _CPUDOZE_ROI_MASK                                   0x20
#define _CPUDOZE_DOZEN_POSN                                 0x6
#define _CPUDOZE_DOZEN_POSITION                             0x6
#define _CPUDOZE_DOZEN_SIZE                                 0x1
#define _CPUDOZE_DOZEN_LENGTH                               0x1
#define _CPUDOZE_DOZEN_MASK                                 0x40
#define _CPUDOZE_IDLEN_POSN                                 0x7
#define _CPUDOZE_IDLEN_POSITION                             0x7
#define _CPUDOZE_IDLEN_SIZE                                 0x1
#define _CPUDOZE_IDLEN_LENGTH                               0x1
#define _CPUDOZE_IDLEN_MASK                                 0x80
#define _CPUDOZE_DOZE0_POSN                                 0x0
#define _CPUDOZE_DOZE0_POSITION                             0x0
#define _CPUDOZE_DOZE0_SIZE                                 0x1
#define _CPUDOZE_DOZE0_LENGTH                               0x1
#define _CPUDOZE_DOZE0_MASK                                 0x1
#define _CPUDOZE_DOZE1_POSN                                 0x1
#define _CPUDOZE_DOZE1_POSITION                             0x1
#define _CPUDOZE_DOZE1_SIZE                                 0x1
#define _CPUDOZE_DOZE1_LENGTH                               0x1
#define _CPUDOZE_DOZE1_MASK                                 0x2
#define _CPUDOZE_DOZE2_POSN                                 0x2
#define _CPUDOZE_DOZE2_POSITION                             0x2
#define _CPUDOZE_DOZE2_SIZE                                 0x1
#define _CPUDOZE_DOZE2_LENGTH                               0x1
#define _CPUDOZE_DOZE2_MASK                                 0x4

// Register: OSCCON1
#define OSCCON1 OSCCON1
extern volatile unsigned char           OSCCON1             __at(0x919);
#ifndef _LIB_BUILD
asm("OSCCON1 equ 0919h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NDIV                   :4;
        unsigned NOSC                   :3;
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
} OSCCON1bits_t;
extern volatile OSCCON1bits_t OSCCON1bits __at(0x919);
// bitfield macros
#define _OSCCON1_NDIV_POSN                                  0x0
#define _OSCCON1_NDIV_POSITION                              0x0
#define _OSCCON1_NDIV_SIZE                                  0x4
#define _OSCCON1_NDIV_LENGTH                                0x4
#define _OSCCON1_NDIV_MASK                                  0xF
#define _OSCCON1_NOSC_POSN                                  0x4
#define _OSCCON1_NOSC_POSITION                              0x4
#define _OSCCON1_NOSC_SIZE                                  0x3
#define _OSCCON1_NOSC_LENGTH                                0x3
#define _OSCCON1_NOSC_MASK                                  0x70
#define _OSCCON1_NDIV0_POSN                                 0x0
#define _OSCCON1_NDIV0_POSITION                             0x0
#define _OSCCON1_NDIV0_SIZE                                 0x1
#define _OSCCON1_NDIV0_LENGTH                               0x1
#define _OSCCON1_NDIV0_MASK                                 0x1
#define _OSCCON1_NDIV1_POSN                                 0x1
#define _OSCCON1_NDIV1_POSITION                             0x1
#define _OSCCON1_NDIV1_SIZE                                 0x1
#define _OSCCON1_NDIV1_LENGTH                               0x1
#define _OSCCON1_NDIV1_MASK                                 0x2
#define _OSCCON1_NDIV2_POSN                                 0x2
#define _OSCCON1_NDIV2_POSITION                             0x2
#define _OSCCON1_NDIV2_SIZE                                 0x1
#define _OSCCON1_NDIV2_LENGTH                               0x1
#define _OSCCON1_NDIV2_MASK                                 0x4
#define _OSCCON1_NDIV3_POSN                                 0x3
#define _OSCCON1_NDIV3_POSITION                             0x3
#define _OSCCON1_NDIV3_SIZE                                 0x1
#define _OSCCON1_NDIV3_LENGTH                               0x1
#define _OSCCON1_NDIV3_MASK                                 0x8
#define _OSCCON1_NOSC0_POSN                                 0x4
#define _OSCCON1_NOSC0_POSITION                             0x4
#define _OSCCON1_NOSC0_SIZE                                 0x1
#define _OSCCON1_NOSC0_LENGTH                               0x1
#define _OSCCON1_NOSC0_MASK                                 0x10
#define _OSCCON1_NOSC1_POSN                                 0x5
#define _OSCCON1_NOSC1_POSITION                             0x5
#define _OSCCON1_NOSC1_SIZE                                 0x1
#define _OSCCON1_NOSC1_LENGTH                               0x1
#define _OSCCON1_NOSC1_MASK                                 0x20
#define _OSCCON1_NOSC2_POSN                                 0x6
#define _OSCCON1_NOSC2_POSITION                             0x6
#define _OSCCON1_NOSC2_SIZE                                 0x1
#define _OSCCON1_NOSC2_LENGTH                               0x1
#define _OSCCON1_NOSC2_MASK                                 0x40

// Register: OSCCON2
#define OSCCON2 OSCCON2
extern volatile unsigned char           OSCCON2             __at(0x91A);
#ifndef _LIB_BUILD
asm("OSCCON2 equ 091Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CDIV                   :4;
        unsigned COSC                   :3;
    };
    struct {
        unsigned CDIV0                  :1;
        unsigned CDIV1                  :1;
        unsigned CDIV2                  :1;
        unsigned CDIV3                  :1;
        unsigned COSC0                  :1;
        unsigned COSC1                  :1;
        unsigned COSC2                  :1;
    };
} OSCCON2bits_t;
extern volatile OSCCON2bits_t OSCCON2bits __at(0x91A);
// bitfield macros
#define _OSCCON2_CDIV_POSN                                  0x0
#define _OSCCON2_CDIV_POSITION                              0x0
#define _OSCCON2_CDIV_SIZE                                  0x4
#define _OSCCON2_CDIV_LENGTH                                0x4
#define _OSCCON2_CDIV_MASK                                  0xF
#define _OSCCON2_COSC_POSN                                  0x4
#define _OSCCON2_COSC_POSITION                              0x4
#define _OSCCON2_COSC_SIZE                                  0x3
#define _OSCCON2_COSC_LENGTH                                0x3
#define _OSCCON2_COSC_MASK                                  0x70
#define _OSCCON2_CDIV0_POSN                                 0x0
#define _OSCCON2_CDIV0_POSITION                             0x0
#define _OSCCON2_CDIV0_SIZE                                 0x1
#define _OSCCON2_CDIV0_LENGTH                               0x1
#define _OSCCON2_CDIV0_MASK                                 0x1
#define _OSCCON2_CDIV1_POSN                                 0x1
#define _OSCCON2_CDIV1_POSITION                             0x1
#define _OSCCON2_CDIV1_SIZE                                 0x1
#define _OSCCON2_CDIV1_LENGTH                               0x1
#define _OSCCON2_CDIV1_MASK                                 0x2
#define _OSCCON2_CDIV2_POSN                                 0x2
#define _OSCCON2_CDIV2_POSITION                             0x2
#define _OSCCON2_CDIV2_SIZE                                 0x1
#define _OSCCON2_CDIV2_LENGTH                               0x1
#define _OSCCON2_CDIV2_MASK                                 0x4
#define _OSCCON2_CDIV3_POSN                                 0x3
#define _OSCCON2_CDIV3_POSITION                             0x3
#define _OSCCON2_CDIV3_SIZE                                 0x1
#define _OSCCON2_CDIV3_LENGTH                               0x1
#define _OSCCON2_CDIV3_MASK                                 0x8
#define _OSCCON2_COSC0_POSN                                 0x4
#define _OSCCON2_COSC0_POSITION                             0x4
#define _OSCCON2_COSC0_SIZE                                 0x1
#define _OSCCON2_COSC0_LENGTH                               0x1
#define _OSCCON2_COSC0_MASK                                 0x10
#define _OSCCON2_COSC1_POSN                                 0x5
#define _OSCCON2_COSC1_POSITION                             0x5
#define _OSCCON2_COSC1_SIZE                                 0x1
#define _OSCCON2_COSC1_LENGTH                               0x1
#define _OSCCON2_COSC1_MASK                                 0x20
#define _OSCCON2_COSC2_POSN                                 0x6
#define _OSCCON2_COSC2_POSITION                             0x6
#define _OSCCON2_COSC2_SIZE                                 0x1
#define _OSCCON2_COSC2_LENGTH                               0x1
#define _OSCCON2_COSC2_MASK                                 0x40

// Register: OSCCON3
#define OSCCON3 OSCCON3
extern volatile unsigned char           OSCCON3             __at(0x91B);
#ifndef _LIB_BUILD
asm("OSCCON3 equ 091Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned NOSCR                  :1;
        unsigned ORDY                   :1;
        unsigned SOSCBE                 :1;
        unsigned SOSCPWR                :1;
        unsigned CSWHOLD                :1;
    };
} OSCCON3bits_t;
extern volatile OSCCON3bits_t OSCCON3bits __at(0x91B);
// bitfield macros
#define _OSCCON3_NOSCR_POSN                                 0x3
#define _OSCCON3_NOSCR_POSITION                             0x3
#define _OSCCON3_NOSCR_SIZE                                 0x1
#define _OSCCON3_NOSCR_LENGTH                               0x1
#define _OSCCON3_NOSCR_MASK                                 0x8
#define _OSCCON3_ORDY_POSN                                  0x4
#define _OSCCON3_ORDY_POSITION                              0x4
#define _OSCCON3_ORDY_SIZE                                  0x1
#define _OSCCON3_ORDY_LENGTH                                0x1
#define _OSCCON3_ORDY_MASK                                  0x10
#define _OSCCON3_SOSCBE_POSN                                0x5
#define _OSCCON3_SOSCBE_POSITION                            0x5
#define _OSCCON3_SOSCBE_SIZE                                0x1
#define _OSCCON3_SOSCBE_LENGTH                              0x1
#define _OSCCON3_SOSCBE_MASK                                0x20
#define _OSCCON3_SOSCPWR_POSN                               0x6
#define _OSCCON3_SOSCPWR_POSITION                           0x6
#define _OSCCON3_SOSCPWR_SIZE                               0x1
#define _OSCCON3_SOSCPWR_LENGTH                             0x1
#define _OSCCON3_SOSCPWR_MASK                               0x40
#define _OSCCON3_CSWHOLD_POSN                               0x7
#define _OSCCON3_CSWHOLD_POSITION                           0x7
#define _OSCCON3_CSWHOLD_SIZE                               0x1
#define _OSCCON3_CSWHOLD_LENGTH                             0x1
#define _OSCCON3_CSWHOLD_MASK                               0x80

// Register: OSCSTAT1
#define OSCSTAT1 OSCSTAT1
extern volatile unsigned char           OSCSTAT1            __at(0x91C);
#ifndef _LIB_BUILD
asm("OSCSTAT1 equ 091Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PLLR                   :1;
        unsigned                        :1;
        unsigned ADOR                   :1;
        unsigned SOR                    :1;
        unsigned LFOR                   :1;
        unsigned                        :1;
        unsigned HFOR                   :1;
        unsigned EXTOR                  :1;
    };
} OSCSTAT1bits_t;
extern volatile OSCSTAT1bits_t OSCSTAT1bits __at(0x91C);
// bitfield macros
#define _OSCSTAT1_PLLR_POSN                                 0x0
#define _OSCSTAT1_PLLR_POSITION                             0x0
#define _OSCSTAT1_PLLR_SIZE                                 0x1
#define _OSCSTAT1_PLLR_LENGTH                               0x1
#define _OSCSTAT1_PLLR_MASK                                 0x1
#define _OSCSTAT1_ADOR_POSN                                 0x2
#define _OSCSTAT1_ADOR_POSITION                             0x2
#define _OSCSTAT1_ADOR_SIZE                                 0x1
#define _OSCSTAT1_ADOR_LENGTH                               0x1
#define _OSCSTAT1_ADOR_MASK                                 0x4
#define _OSCSTAT1_SOR_POSN                                  0x3
#define _OSCSTAT1_SOR_POSITION                              0x3
#define _OSCSTAT1_SOR_SIZE                                  0x1
#define _OSCSTAT1_SOR_LENGTH                                0x1
#define _OSCSTAT1_SOR_MASK                                  0x8
#define _OSCSTAT1_LFOR_POSN                                 0x4
#define _OSCSTAT1_LFOR_POSITION                             0x4
#define _OSCSTAT1_LFOR_SIZE                                 0x1
#define _OSCSTAT1_LFOR_LENGTH                               0x1
#define _OSCSTAT1_LFOR_MASK                                 0x10
#define _OSCSTAT1_HFOR_POSN                                 0x6
#define _OSCSTAT1_HFOR_POSITION                             0x6
#define _OSCSTAT1_HFOR_SIZE                                 0x1
#define _OSCSTAT1_HFOR_LENGTH                               0x1
#define _OSCSTAT1_HFOR_MASK                                 0x40
#define _OSCSTAT1_EXTOR_POSN                                0x7
#define _OSCSTAT1_EXTOR_POSITION                            0x7
#define _OSCSTAT1_EXTOR_SIZE                                0x1
#define _OSCSTAT1_EXTOR_LENGTH                              0x1
#define _OSCSTAT1_EXTOR_MASK                                0x80

// Register: OSCEN
#define OSCEN OSCEN
extern volatile unsigned char           OSCEN               __at(0x91D);
#ifndef _LIB_BUILD
asm("OSCEN equ 091Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned ADOEN                  :1;
        unsigned SOSCEN                 :1;
        unsigned LFOEN                  :1;
        unsigned                        :1;
        unsigned HFOEN                  :1;
        unsigned EXTOEN                 :1;
    };
} OSCENbits_t;
extern volatile OSCENbits_t OSCENbits __at(0x91D);
// bitfield macros
#define _OSCEN_ADOEN_POSN                                   0x2
#define _OSCEN_ADOEN_POSITION                               0x2
#define _OSCEN_ADOEN_SIZE                                   0x1
#define _OSCEN_ADOEN_LENGTH                                 0x1
#define _OSCEN_ADOEN_MASK                                   0x4
#define _OSCEN_SOSCEN_POSN                                  0x3
#define _OSCEN_SOSCEN_POSITION                              0x3
#define _OSCEN_SOSCEN_SIZE                                  0x1
#define _OSCEN_SOSCEN_LENGTH                                0x1
#define _OSCEN_SOSCEN_MASK                                  0x8
#define _OSCEN_LFOEN_POSN                                   0x4
#define _OSCEN_LFOEN_POSITION                               0x4
#define _OSCEN_LFOEN_SIZE                                   0x1
#define _OSCEN_LFOEN_LENGTH                                 0x1
#define _OSCEN_LFOEN_MASK                                   0x10
#define _OSCEN_HFOEN_POSN                                   0x6
#define _OSCEN_HFOEN_POSITION                               0x6
#define _OSCEN_HFOEN_SIZE                                   0x1
#define _OSCEN_HFOEN_LENGTH                                 0x1
#define _OSCEN_HFOEN_MASK                                   0x40
#define _OSCEN_EXTOEN_POSN                                  0x7
#define _OSCEN_EXTOEN_POSITION                              0x7
#define _OSCEN_EXTOEN_SIZE                                  0x1
#define _OSCEN_EXTOEN_LENGTH                                0x1
#define _OSCEN_EXTOEN_MASK                                  0x80

// Register: OSCTUNE
#define OSCTUNE OSCTUNE
extern volatile unsigned char           OSCTUNE             __at(0x91E);
#ifndef _LIB_BUILD
asm("OSCTUNE equ 091Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HFTUN                  :6;
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
extern volatile OSCTUNEbits_t OSCTUNEbits __at(0x91E);
// bitfield macros
#define _OSCTUNE_HFTUN_POSN                                 0x0
#define _OSCTUNE_HFTUN_POSITION                             0x0
#define _OSCTUNE_HFTUN_SIZE                                 0x6
#define _OSCTUNE_HFTUN_LENGTH                               0x6
#define _OSCTUNE_HFTUN_MASK                                 0x3F
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
extern volatile unsigned char           OSCFRQ              __at(0x91F);
#ifndef _LIB_BUILD
asm("OSCFRQ equ 091Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HFFRQ                  :4;
    };
    struct {
        unsigned HFFRQ0                 :1;
        unsigned HFFRQ1                 :1;
        unsigned HFFRQ2                 :1;
        unsigned HFFRQ3                 :1;
    };
} OSCFRQbits_t;
extern volatile OSCFRQbits_t OSCFRQbits __at(0x91F);
// bitfield macros
#define _OSCFRQ_HFFRQ_POSN                                  0x0
#define _OSCFRQ_HFFRQ_POSITION                              0x0
#define _OSCFRQ_HFFRQ_SIZE                                  0x4
#define _OSCFRQ_HFFRQ_LENGTH                                0x4
#define _OSCFRQ_HFFRQ_MASK                                  0xF
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
#define _OSCFRQ_HFFRQ3_POSN                                 0x3
#define _OSCFRQ_HFFRQ3_POSITION                             0x3
#define _OSCFRQ_HFFRQ3_SIZE                                 0x1
#define _OSCFRQ_HFFRQ3_LENGTH                               0x1
#define _OSCFRQ_HFFRQ3_MASK                                 0x8

// Register: PPSLOCK
#define PPSLOCK PPSLOCK
extern volatile unsigned char           PPSLOCK             __at(0xE0F);
#ifndef _LIB_BUILD
asm("PPSLOCK equ 0E0Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PPSLOCKED              :1;
    };
} PPSLOCKbits_t;
extern volatile PPSLOCKbits_t PPSLOCKbits __at(0xE0F);
// bitfield macros
#define _PPSLOCK_PPSLOCKED_POSN                             0x0
#define _PPSLOCK_PPSLOCKED_POSITION                         0x0
#define _PPSLOCK_PPSLOCKED_SIZE                             0x1
#define _PPSLOCK_PPSLOCKED_LENGTH                           0x1
#define _PPSLOCK_PPSLOCKED_MASK                             0x1

// Register: INTPPS
#define INTPPS INTPPS
extern volatile unsigned char           INTPPS              __at(0xE10);
#ifndef _LIB_BUILD
asm("INTPPS equ 0E10h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INTPPS                 :5;
    };
    struct {
        unsigned INTPPS0                :1;
        unsigned INTPPS1                :1;
        unsigned INTPPS2                :1;
        unsigned INTPPS3                :1;
        unsigned INTPPS4                :1;
    };
} INTPPSbits_t;
extern volatile INTPPSbits_t INTPPSbits __at(0xE10);
// bitfield macros
#define _INTPPS_INTPPS_POSN                                 0x0
#define _INTPPS_INTPPS_POSITION                             0x0
#define _INTPPS_INTPPS_SIZE                                 0x5
#define _INTPPS_INTPPS_LENGTH                               0x5
#define _INTPPS_INTPPS_MASK                                 0x1F
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
#define _INTPPS_INTPPS4_POSN                                0x4
#define _INTPPS_INTPPS4_POSITION                            0x4
#define _INTPPS_INTPPS4_SIZE                                0x1
#define _INTPPS_INTPPS4_LENGTH                              0x1
#define _INTPPS_INTPPS4_MASK                                0x10

// Register: T0CKIPPS
#define T0CKIPPS T0CKIPPS
extern volatile unsigned char           T0CKIPPS            __at(0xE11);
#ifndef _LIB_BUILD
asm("T0CKIPPS equ 0E11h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0CKIPPS               :5;
    };
    struct {
        unsigned T0CKIPPS0              :1;
        unsigned T0CKIPPS1              :1;
        unsigned T0CKIPPS2              :1;
        unsigned T0CKIPPS3              :1;
        unsigned T0CKIPPS4              :1;
    };
} T0CKIPPSbits_t;
extern volatile T0CKIPPSbits_t T0CKIPPSbits __at(0xE11);
// bitfield macros
#define _T0CKIPPS_T0CKIPPS_POSN                             0x0
#define _T0CKIPPS_T0CKIPPS_POSITION                         0x0
#define _T0CKIPPS_T0CKIPPS_SIZE                             0x5
#define _T0CKIPPS_T0CKIPPS_LENGTH                           0x5
#define _T0CKIPPS_T0CKIPPS_MASK                             0x1F
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
#define _T0CKIPPS_T0CKIPPS4_POSN                            0x4
#define _T0CKIPPS_T0CKIPPS4_POSITION                        0x4
#define _T0CKIPPS_T0CKIPPS4_SIZE                            0x1
#define _T0CKIPPS_T0CKIPPS4_LENGTH                          0x1
#define _T0CKIPPS_T0CKIPPS4_MASK                            0x10

// Register: T1CKIPPS
#define T1CKIPPS T1CKIPPS
extern volatile unsigned char           T1CKIPPS            __at(0xE12);
#ifndef _LIB_BUILD
asm("T1CKIPPS equ 0E12h");
#endif
// bitfield definitions
typedef union {
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
extern volatile T1CKIPPSbits_t T1CKIPPSbits __at(0xE12);
// bitfield macros
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
extern volatile unsigned char           T1GPPS              __at(0xE13);
#ifndef _LIB_BUILD
asm("T1GPPS equ 0E13h");
#endif
// bitfield definitions
typedef union {
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
extern volatile T1GPPSbits_t T1GPPSbits __at(0xE13);
// bitfield macros
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

// Register: CCP1PPS
#define CCP1PPS CCP1PPS
extern volatile unsigned char           CCP1PPS             __at(0xE14);
#ifndef _LIB_BUILD
asm("CCP1PPS equ 0E14h");
#endif
// bitfield definitions
typedef union {
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
extern volatile CCP1PPSbits_t CCP1PPSbits __at(0xE14);
// bitfield macros
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
extern volatile unsigned char           CCP2PPS             __at(0xE15);
#ifndef _LIB_BUILD
asm("CCP2PPS equ 0E15h");
#endif
// bitfield definitions
typedef union {
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
extern volatile CCP2PPSbits_t CCP2PPSbits __at(0xE15);
// bitfield macros
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

// Register: CWG1PPS
#define CWG1PPS CWG1PPS
extern volatile unsigned char           CWG1PPS             __at(0xE18);
#ifndef _LIB_BUILD
asm("CWG1PPS equ 0E18h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CWG1PPS                :5;
    };
    struct {
        unsigned CWG1PPS0               :1;
        unsigned CWG1PPS1               :1;
        unsigned CWG1PPS2               :1;
        unsigned CWG1PPS3               :1;
        unsigned CWG1PPS4               :1;
    };
} CWG1PPSbits_t;
extern volatile CWG1PPSbits_t CWG1PPSbits __at(0xE18);
// bitfield macros
#define _CWG1PPS_CWG1PPS_POSN                               0x0
#define _CWG1PPS_CWG1PPS_POSITION                           0x0
#define _CWG1PPS_CWG1PPS_SIZE                               0x5
#define _CWG1PPS_CWG1PPS_LENGTH                             0x5
#define _CWG1PPS_CWG1PPS_MASK                               0x1F
#define _CWG1PPS_CWG1PPS0_POSN                              0x0
#define _CWG1PPS_CWG1PPS0_POSITION                          0x0
#define _CWG1PPS_CWG1PPS0_SIZE                              0x1
#define _CWG1PPS_CWG1PPS0_LENGTH                            0x1
#define _CWG1PPS_CWG1PPS0_MASK                              0x1
#define _CWG1PPS_CWG1PPS1_POSN                              0x1
#define _CWG1PPS_CWG1PPS1_POSITION                          0x1
#define _CWG1PPS_CWG1PPS1_SIZE                              0x1
#define _CWG1PPS_CWG1PPS1_LENGTH                            0x1
#define _CWG1PPS_CWG1PPS1_MASK                              0x2
#define _CWG1PPS_CWG1PPS2_POSN                              0x2
#define _CWG1PPS_CWG1PPS2_POSITION                          0x2
#define _CWG1PPS_CWG1PPS2_SIZE                              0x1
#define _CWG1PPS_CWG1PPS2_LENGTH                            0x1
#define _CWG1PPS_CWG1PPS2_MASK                              0x4
#define _CWG1PPS_CWG1PPS3_POSN                              0x3
#define _CWG1PPS_CWG1PPS3_POSITION                          0x3
#define _CWG1PPS_CWG1PPS3_SIZE                              0x1
#define _CWG1PPS_CWG1PPS3_LENGTH                            0x1
#define _CWG1PPS_CWG1PPS3_MASK                              0x8
#define _CWG1PPS_CWG1PPS4_POSN                              0x4
#define _CWG1PPS_CWG1PPS4_POSITION                          0x4
#define _CWG1PPS_CWG1PPS4_SIZE                              0x1
#define _CWG1PPS_CWG1PPS4_LENGTH                            0x1
#define _CWG1PPS_CWG1PPS4_MASK                              0x10

// Register: MDCIN1PPS
#define MDCIN1PPS MDCIN1PPS
extern volatile unsigned char           MDCIN1PPS           __at(0xE1A);
#ifndef _LIB_BUILD
asm("MDCIN1PPS equ 0E1Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MDCIN1PPS              :5;
    };
    struct {
        unsigned MDCIN1PPS0             :1;
        unsigned MDCIN1PPS1             :1;
        unsigned MDCIN1PPS2             :1;
        unsigned MDCIN1PPS3             :1;
        unsigned MDCIN1PPS4             :1;
    };
} MDCIN1PPSbits_t;
extern volatile MDCIN1PPSbits_t MDCIN1PPSbits __at(0xE1A);
// bitfield macros
#define _MDCIN1PPS_MDCIN1PPS_POSN                           0x0
#define _MDCIN1PPS_MDCIN1PPS_POSITION                       0x0
#define _MDCIN1PPS_MDCIN1PPS_SIZE                           0x5
#define _MDCIN1PPS_MDCIN1PPS_LENGTH                         0x5
#define _MDCIN1PPS_MDCIN1PPS_MASK                           0x1F
#define _MDCIN1PPS_MDCIN1PPS0_POSN                          0x0
#define _MDCIN1PPS_MDCIN1PPS0_POSITION                      0x0
#define _MDCIN1PPS_MDCIN1PPS0_SIZE                          0x1
#define _MDCIN1PPS_MDCIN1PPS0_LENGTH                        0x1
#define _MDCIN1PPS_MDCIN1PPS0_MASK                          0x1
#define _MDCIN1PPS_MDCIN1PPS1_POSN                          0x1
#define _MDCIN1PPS_MDCIN1PPS1_POSITION                      0x1
#define _MDCIN1PPS_MDCIN1PPS1_SIZE                          0x1
#define _MDCIN1PPS_MDCIN1PPS1_LENGTH                        0x1
#define _MDCIN1PPS_MDCIN1PPS1_MASK                          0x2
#define _MDCIN1PPS_MDCIN1PPS2_POSN                          0x2
#define _MDCIN1PPS_MDCIN1PPS2_POSITION                      0x2
#define _MDCIN1PPS_MDCIN1PPS2_SIZE                          0x1
#define _MDCIN1PPS_MDCIN1PPS2_LENGTH                        0x1
#define _MDCIN1PPS_MDCIN1PPS2_MASK                          0x4
#define _MDCIN1PPS_MDCIN1PPS3_POSN                          0x3
#define _MDCIN1PPS_MDCIN1PPS3_POSITION                      0x3
#define _MDCIN1PPS_MDCIN1PPS3_SIZE                          0x1
#define _MDCIN1PPS_MDCIN1PPS3_LENGTH                        0x1
#define _MDCIN1PPS_MDCIN1PPS3_MASK                          0x8
#define _MDCIN1PPS_MDCIN1PPS4_POSN                          0x4
#define _MDCIN1PPS_MDCIN1PPS4_POSITION                      0x4
#define _MDCIN1PPS_MDCIN1PPS4_SIZE                          0x1
#define _MDCIN1PPS_MDCIN1PPS4_LENGTH                        0x1
#define _MDCIN1PPS_MDCIN1PPS4_MASK                          0x10

// Register: MDCIN2PPS
#define MDCIN2PPS MDCIN2PPS
extern volatile unsigned char           MDCIN2PPS           __at(0xE1B);
#ifndef _LIB_BUILD
asm("MDCIN2PPS equ 0E1Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MDCIN2PPS              :5;
    };
    struct {
        unsigned MDCIN2PPS0             :1;
        unsigned MDCIN2PPS1             :1;
        unsigned MDCIN2PPS2             :1;
        unsigned MDCIN2PPS3             :1;
        unsigned MDCIN2PPS4             :1;
    };
} MDCIN2PPSbits_t;
extern volatile MDCIN2PPSbits_t MDCIN2PPSbits __at(0xE1B);
// bitfield macros
#define _MDCIN2PPS_MDCIN2PPS_POSN                           0x0
#define _MDCIN2PPS_MDCIN2PPS_POSITION                       0x0
#define _MDCIN2PPS_MDCIN2PPS_SIZE                           0x5
#define _MDCIN2PPS_MDCIN2PPS_LENGTH                         0x5
#define _MDCIN2PPS_MDCIN2PPS_MASK                           0x1F
#define _MDCIN2PPS_MDCIN2PPS0_POSN                          0x0
#define _MDCIN2PPS_MDCIN2PPS0_POSITION                      0x0
#define _MDCIN2PPS_MDCIN2PPS0_SIZE                          0x1
#define _MDCIN2PPS_MDCIN2PPS0_LENGTH                        0x1
#define _MDCIN2PPS_MDCIN2PPS0_MASK                          0x1
#define _MDCIN2PPS_MDCIN2PPS1_POSN                          0x1
#define _MDCIN2PPS_MDCIN2PPS1_POSITION                      0x1
#define _MDCIN2PPS_MDCIN2PPS1_SIZE                          0x1
#define _MDCIN2PPS_MDCIN2PPS1_LENGTH                        0x1
#define _MDCIN2PPS_MDCIN2PPS1_MASK                          0x2
#define _MDCIN2PPS_MDCIN2PPS2_POSN                          0x2
#define _MDCIN2PPS_MDCIN2PPS2_POSITION                      0x2
#define _MDCIN2PPS_MDCIN2PPS2_SIZE                          0x1
#define _MDCIN2PPS_MDCIN2PPS2_LENGTH                        0x1
#define _MDCIN2PPS_MDCIN2PPS2_MASK                          0x4
#define _MDCIN2PPS_MDCIN2PPS3_POSN                          0x3
#define _MDCIN2PPS_MDCIN2PPS3_POSITION                      0x3
#define _MDCIN2PPS_MDCIN2PPS3_SIZE                          0x1
#define _MDCIN2PPS_MDCIN2PPS3_LENGTH                        0x1
#define _MDCIN2PPS_MDCIN2PPS3_MASK                          0x8
#define _MDCIN2PPS_MDCIN2PPS4_POSN                          0x4
#define _MDCIN2PPS_MDCIN2PPS4_POSITION                      0x4
#define _MDCIN2PPS_MDCIN2PPS4_SIZE                          0x1
#define _MDCIN2PPS_MDCIN2PPS4_LENGTH                        0x1
#define _MDCIN2PPS_MDCIN2PPS4_MASK                          0x10

// Register: MDMINPPS
#define MDMINPPS MDMINPPS
extern volatile unsigned char           MDMINPPS            __at(0xE1C);
#ifndef _LIB_BUILD
asm("MDMINPPS equ 0E1Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MDMINPPS               :5;
    };
    struct {
        unsigned MDMINPPS0              :1;
        unsigned MDMINPPS1              :1;
        unsigned MDMINPPS2              :1;
        unsigned MDMINPPS3              :1;
        unsigned MDMINPPS4              :1;
    };
} MDMINPPSbits_t;
extern volatile MDMINPPSbits_t MDMINPPSbits __at(0xE1C);
// bitfield macros
#define _MDMINPPS_MDMINPPS_POSN                             0x0
#define _MDMINPPS_MDMINPPS_POSITION                         0x0
#define _MDMINPPS_MDMINPPS_SIZE                             0x5
#define _MDMINPPS_MDMINPPS_LENGTH                           0x5
#define _MDMINPPS_MDMINPPS_MASK                             0x1F
#define _MDMINPPS_MDMINPPS0_POSN                            0x0
#define _MDMINPPS_MDMINPPS0_POSITION                        0x0
#define _MDMINPPS_MDMINPPS0_SIZE                            0x1
#define _MDMINPPS_MDMINPPS0_LENGTH                          0x1
#define _MDMINPPS_MDMINPPS0_MASK                            0x1
#define _MDMINPPS_MDMINPPS1_POSN                            0x1
#define _MDMINPPS_MDMINPPS1_POSITION                        0x1
#define _MDMINPPS_MDMINPPS1_SIZE                            0x1
#define _MDMINPPS_MDMINPPS1_LENGTH                          0x1
#define _MDMINPPS_MDMINPPS1_MASK                            0x2
#define _MDMINPPS_MDMINPPS2_POSN                            0x2
#define _MDMINPPS_MDMINPPS2_POSITION                        0x2
#define _MDMINPPS_MDMINPPS2_SIZE                            0x1
#define _MDMINPPS_MDMINPPS2_LENGTH                          0x1
#define _MDMINPPS_MDMINPPS2_MASK                            0x4
#define _MDMINPPS_MDMINPPS3_POSN                            0x3
#define _MDMINPPS_MDMINPPS3_POSITION                        0x3
#define _MDMINPPS_MDMINPPS3_SIZE                            0x1
#define _MDMINPPS_MDMINPPS3_LENGTH                          0x1
#define _MDMINPPS_MDMINPPS3_MASK                            0x8
#define _MDMINPPS_MDMINPPS4_POSN                            0x4
#define _MDMINPPS_MDMINPPS4_POSITION                        0x4
#define _MDMINPPS_MDMINPPS4_SIZE                            0x1
#define _MDMINPPS_MDMINPPS4_LENGTH                          0x1
#define _MDMINPPS_MDMINPPS4_MASK                            0x10

// Register: SSP1CLKPPS
#define SSP1CLKPPS SSP1CLKPPS
extern volatile unsigned char           SSP1CLKPPS          __at(0xE20);
#ifndef _LIB_BUILD
asm("SSP1CLKPPS equ 0E20h");
#endif
// bitfield definitions
typedef union {
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
extern volatile SSP1CLKPPSbits_t SSP1CLKPPSbits __at(0xE20);
// bitfield macros
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
extern volatile unsigned char           SSP1DATPPS          __at(0xE21);
#ifndef _LIB_BUILD
asm("SSP1DATPPS equ 0E21h");
#endif
// bitfield definitions
typedef union {
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
extern volatile SSP1DATPPSbits_t SSP1DATPPSbits __at(0xE21);
// bitfield macros
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
extern volatile unsigned char           SSP1SSPPS           __at(0xE22);
#ifndef _LIB_BUILD
asm("SSP1SSPPS equ 0E22h");
#endif
// bitfield definitions
typedef union {
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
extern volatile SSP1SSPPSbits_t SSP1SSPPSbits __at(0xE22);
// bitfield macros
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

// Register: RXPPS
#define RXPPS RXPPS
extern volatile unsigned char           RXPPS               __at(0xE24);
#ifndef _LIB_BUILD
asm("RXPPS equ 0E24h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RXPPS                  :5;
    };
    struct {
        unsigned RXPPS0                 :1;
        unsigned RXPPS1                 :1;
        unsigned RXPPS2                 :1;
        unsigned RXPPS3                 :1;
        unsigned RXPPS4                 :1;
    };
} RXPPSbits_t;
extern volatile RXPPSbits_t RXPPSbits __at(0xE24);
// bitfield macros
#define _RXPPS_RXPPS_POSN                                   0x0
#define _RXPPS_RXPPS_POSITION                               0x0
#define _RXPPS_RXPPS_SIZE                                   0x5
#define _RXPPS_RXPPS_LENGTH                                 0x5
#define _RXPPS_RXPPS_MASK                                   0x1F
#define _RXPPS_RXPPS0_POSN                                  0x0
#define _RXPPS_RXPPS0_POSITION                              0x0
#define _RXPPS_RXPPS0_SIZE                                  0x1
#define _RXPPS_RXPPS0_LENGTH                                0x1
#define _RXPPS_RXPPS0_MASK                                  0x1
#define _RXPPS_RXPPS1_POSN                                  0x1
#define _RXPPS_RXPPS1_POSITION                              0x1
#define _RXPPS_RXPPS1_SIZE                                  0x1
#define _RXPPS_RXPPS1_LENGTH                                0x1
#define _RXPPS_RXPPS1_MASK                                  0x2
#define _RXPPS_RXPPS2_POSN                                  0x2
#define _RXPPS_RXPPS2_POSITION                              0x2
#define _RXPPS_RXPPS2_SIZE                                  0x1
#define _RXPPS_RXPPS2_LENGTH                                0x1
#define _RXPPS_RXPPS2_MASK                                  0x4
#define _RXPPS_RXPPS3_POSN                                  0x3
#define _RXPPS_RXPPS3_POSITION                              0x3
#define _RXPPS_RXPPS3_SIZE                                  0x1
#define _RXPPS_RXPPS3_LENGTH                                0x1
#define _RXPPS_RXPPS3_MASK                                  0x8
#define _RXPPS_RXPPS4_POSN                                  0x4
#define _RXPPS_RXPPS4_POSITION                              0x4
#define _RXPPS_RXPPS4_SIZE                                  0x1
#define _RXPPS_RXPPS4_LENGTH                                0x1
#define _RXPPS_RXPPS4_MASK                                  0x10

// Register: TXPPS
#define TXPPS TXPPS
extern volatile unsigned char           TXPPS               __at(0xE25);
#ifndef _LIB_BUILD
asm("TXPPS equ 0E25h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TXPPS                  :5;
    };
    struct {
        unsigned TXPPS0                 :1;
        unsigned TXPPS1                 :1;
        unsigned TXPPS2                 :1;
        unsigned TXPPS3                 :1;
        unsigned TXPPS4                 :1;
    };
} TXPPSbits_t;
extern volatile TXPPSbits_t TXPPSbits __at(0xE25);
// bitfield macros
#define _TXPPS_TXPPS_POSN                                   0x0
#define _TXPPS_TXPPS_POSITION                               0x0
#define _TXPPS_TXPPS_SIZE                                   0x5
#define _TXPPS_TXPPS_LENGTH                                 0x5
#define _TXPPS_TXPPS_MASK                                   0x1F
#define _TXPPS_TXPPS0_POSN                                  0x0
#define _TXPPS_TXPPS0_POSITION                              0x0
#define _TXPPS_TXPPS0_SIZE                                  0x1
#define _TXPPS_TXPPS0_LENGTH                                0x1
#define _TXPPS_TXPPS0_MASK                                  0x1
#define _TXPPS_TXPPS1_POSN                                  0x1
#define _TXPPS_TXPPS1_POSITION                              0x1
#define _TXPPS_TXPPS1_SIZE                                  0x1
#define _TXPPS_TXPPS1_LENGTH                                0x1
#define _TXPPS_TXPPS1_MASK                                  0x2
#define _TXPPS_TXPPS2_POSN                                  0x2
#define _TXPPS_TXPPS2_POSITION                              0x2
#define _TXPPS_TXPPS2_SIZE                                  0x1
#define _TXPPS_TXPPS2_LENGTH                                0x1
#define _TXPPS_TXPPS2_MASK                                  0x4
#define _TXPPS_TXPPS3_POSN                                  0x3
#define _TXPPS_TXPPS3_POSITION                              0x3
#define _TXPPS_TXPPS3_SIZE                                  0x1
#define _TXPPS_TXPPS3_LENGTH                                0x1
#define _TXPPS_TXPPS3_MASK                                  0x8
#define _TXPPS_TXPPS4_POSN                                  0x4
#define _TXPPS_TXPPS4_POSITION                              0x4
#define _TXPPS_TXPPS4_SIZE                                  0x1
#define _TXPPS_TXPPS4_LENGTH                                0x1
#define _TXPPS_TXPPS4_MASK                                  0x10

// Register: CLCIN0PPS
#define CLCIN0PPS CLCIN0PPS
extern volatile unsigned char           CLCIN0PPS           __at(0xE28);
#ifndef _LIB_BUILD
asm("CLCIN0PPS equ 0E28h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLCIN0PPS              :5;
    };
    struct {
        unsigned CLCIN0PPS0             :1;
        unsigned CLCIN0PPS1             :1;
        unsigned CLCIN0PPS2             :1;
        unsigned CLCIN0PPS3             :1;
        unsigned CLCIN0PPS4             :1;
    };
} CLCIN0PPSbits_t;
extern volatile CLCIN0PPSbits_t CLCIN0PPSbits __at(0xE28);
// bitfield macros
#define _CLCIN0PPS_CLCIN0PPS_POSN                           0x0
#define _CLCIN0PPS_CLCIN0PPS_POSITION                       0x0
#define _CLCIN0PPS_CLCIN0PPS_SIZE                           0x5
#define _CLCIN0PPS_CLCIN0PPS_LENGTH                         0x5
#define _CLCIN0PPS_CLCIN0PPS_MASK                           0x1F
#define _CLCIN0PPS_CLCIN0PPS0_POSN                          0x0
#define _CLCIN0PPS_CLCIN0PPS0_POSITION                      0x0
#define _CLCIN0PPS_CLCIN0PPS0_SIZE                          0x1
#define _CLCIN0PPS_CLCIN0PPS0_LENGTH                        0x1
#define _CLCIN0PPS_CLCIN0PPS0_MASK                          0x1
#define _CLCIN0PPS_CLCIN0PPS1_POSN                          0x1
#define _CLCIN0PPS_CLCIN0PPS1_POSITION                      0x1
#define _CLCIN0PPS_CLCIN0PPS1_SIZE                          0x1
#define _CLCIN0PPS_CLCIN0PPS1_LENGTH                        0x1
#define _CLCIN0PPS_CLCIN0PPS1_MASK                          0x2
#define _CLCIN0PPS_CLCIN0PPS2_POSN                          0x2
#define _CLCIN0PPS_CLCIN0PPS2_POSITION                      0x2
#define _CLCIN0PPS_CLCIN0PPS2_SIZE                          0x1
#define _CLCIN0PPS_CLCIN0PPS2_LENGTH                        0x1
#define _CLCIN0PPS_CLCIN0PPS2_MASK                          0x4
#define _CLCIN0PPS_CLCIN0PPS3_POSN                          0x3
#define _CLCIN0PPS_CLCIN0PPS3_POSITION                      0x3
#define _CLCIN0PPS_CLCIN0PPS3_SIZE                          0x1
#define _CLCIN0PPS_CLCIN0PPS3_LENGTH                        0x1
#define _CLCIN0PPS_CLCIN0PPS3_MASK                          0x8
#define _CLCIN0PPS_CLCIN0PPS4_POSN                          0x4
#define _CLCIN0PPS_CLCIN0PPS4_POSITION                      0x4
#define _CLCIN0PPS_CLCIN0PPS4_SIZE                          0x1
#define _CLCIN0PPS_CLCIN0PPS4_LENGTH                        0x1
#define _CLCIN0PPS_CLCIN0PPS4_MASK                          0x10

// Register: CLCIN1PPS
#define CLCIN1PPS CLCIN1PPS
extern volatile unsigned char           CLCIN1PPS           __at(0xE29);
#ifndef _LIB_BUILD
asm("CLCIN1PPS equ 0E29h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLCIN1PPS              :5;
    };
    struct {
        unsigned CLCIN1PPS0             :1;
        unsigned CLCIN1PPS1             :1;
        unsigned CLCIN1PPS2             :1;
        unsigned CLCIN1PPS3             :1;
        unsigned CLCIN1PPS4             :1;
    };
} CLCIN1PPSbits_t;
extern volatile CLCIN1PPSbits_t CLCIN1PPSbits __at(0xE29);
// bitfield macros
#define _CLCIN1PPS_CLCIN1PPS_POSN                           0x0
#define _CLCIN1PPS_CLCIN1PPS_POSITION                       0x0
#define _CLCIN1PPS_CLCIN1PPS_SIZE                           0x5
#define _CLCIN1PPS_CLCIN1PPS_LENGTH                         0x5
#define _CLCIN1PPS_CLCIN1PPS_MASK                           0x1F
#define _CLCIN1PPS_CLCIN1PPS0_POSN                          0x0
#define _CLCIN1PPS_CLCIN1PPS0_POSITION                      0x0
#define _CLCIN1PPS_CLCIN1PPS0_SIZE                          0x1
#define _CLCIN1PPS_CLCIN1PPS0_LENGTH                        0x1
#define _CLCIN1PPS_CLCIN1PPS0_MASK                          0x1
#define _CLCIN1PPS_CLCIN1PPS1_POSN                          0x1
#define _CLCIN1PPS_CLCIN1PPS1_POSITION                      0x1
#define _CLCIN1PPS_CLCIN1PPS1_SIZE                          0x1
#define _CLCIN1PPS_CLCIN1PPS1_LENGTH                        0x1
#define _CLCIN1PPS_CLCIN1PPS1_MASK                          0x2
#define _CLCIN1PPS_CLCIN1PPS2_POSN                          0x2
#define _CLCIN1PPS_CLCIN1PPS2_POSITION                      0x2
#define _CLCIN1PPS_CLCIN1PPS2_SIZE                          0x1
#define _CLCIN1PPS_CLCIN1PPS2_LENGTH                        0x1
#define _CLCIN1PPS_CLCIN1PPS2_MASK                          0x4
#define _CLCIN1PPS_CLCIN1PPS3_POSN                          0x3
#define _CLCIN1PPS_CLCIN1PPS3_POSITION                      0x3
#define _CLCIN1PPS_CLCIN1PPS3_SIZE                          0x1
#define _CLCIN1PPS_CLCIN1PPS3_LENGTH                        0x1
#define _CLCIN1PPS_CLCIN1PPS3_MASK                          0x8
#define _CLCIN1PPS_CLCIN1PPS4_POSN                          0x4
#define _CLCIN1PPS_CLCIN1PPS4_POSITION                      0x4
#define _CLCIN1PPS_CLCIN1PPS4_SIZE                          0x1
#define _CLCIN1PPS_CLCIN1PPS4_LENGTH                        0x1
#define _CLCIN1PPS_CLCIN1PPS4_MASK                          0x10

// Register: CLCIN2PPS
#define CLCIN2PPS CLCIN2PPS
extern volatile unsigned char           CLCIN2PPS           __at(0xE2A);
#ifndef _LIB_BUILD
asm("CLCIN2PPS equ 0E2Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLCIN2PPS              :5;
    };
    struct {
        unsigned CLCIN2PPS0             :1;
        unsigned CLCIN2PPS1             :1;
        unsigned CLCIN2PPS2             :1;
        unsigned CLCIN2PPS3             :1;
        unsigned CLCIN2PPS4             :1;
    };
} CLCIN2PPSbits_t;
extern volatile CLCIN2PPSbits_t CLCIN2PPSbits __at(0xE2A);
// bitfield macros
#define _CLCIN2PPS_CLCIN2PPS_POSN                           0x0
#define _CLCIN2PPS_CLCIN2PPS_POSITION                       0x0
#define _CLCIN2PPS_CLCIN2PPS_SIZE                           0x5
#define _CLCIN2PPS_CLCIN2PPS_LENGTH                         0x5
#define _CLCIN2PPS_CLCIN2PPS_MASK                           0x1F
#define _CLCIN2PPS_CLCIN2PPS0_POSN                          0x0
#define _CLCIN2PPS_CLCIN2PPS0_POSITION                      0x0
#define _CLCIN2PPS_CLCIN2PPS0_SIZE                          0x1
#define _CLCIN2PPS_CLCIN2PPS0_LENGTH                        0x1
#define _CLCIN2PPS_CLCIN2PPS0_MASK                          0x1
#define _CLCIN2PPS_CLCIN2PPS1_POSN                          0x1
#define _CLCIN2PPS_CLCIN2PPS1_POSITION                      0x1
#define _CLCIN2PPS_CLCIN2PPS1_SIZE                          0x1
#define _CLCIN2PPS_CLCIN2PPS1_LENGTH                        0x1
#define _CLCIN2PPS_CLCIN2PPS1_MASK                          0x2
#define _CLCIN2PPS_CLCIN2PPS2_POSN                          0x2
#define _CLCIN2PPS_CLCIN2PPS2_POSITION                      0x2
#define _CLCIN2PPS_CLCIN2PPS2_SIZE                          0x1
#define _CLCIN2PPS_CLCIN2PPS2_LENGTH                        0x1
#define _CLCIN2PPS_CLCIN2PPS2_MASK                          0x4
#define _CLCIN2PPS_CLCIN2PPS3_POSN                          0x3
#define _CLCIN2PPS_CLCIN2PPS3_POSITION                      0x3
#define _CLCIN2PPS_CLCIN2PPS3_SIZE                          0x1
#define _CLCIN2PPS_CLCIN2PPS3_LENGTH                        0x1
#define _CLCIN2PPS_CLCIN2PPS3_MASK                          0x8
#define _CLCIN2PPS_CLCIN2PPS4_POSN                          0x4
#define _CLCIN2PPS_CLCIN2PPS4_POSITION                      0x4
#define _CLCIN2PPS_CLCIN2PPS4_SIZE                          0x1
#define _CLCIN2PPS_CLCIN2PPS4_LENGTH                        0x1
#define _CLCIN2PPS_CLCIN2PPS4_MASK                          0x10

// Register: CLCIN3PPS
#define CLCIN3PPS CLCIN3PPS
extern volatile unsigned char           CLCIN3PPS           __at(0xE2B);
#ifndef _LIB_BUILD
asm("CLCIN3PPS equ 0E2Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLCIN3PPS              :5;
    };
    struct {
        unsigned CLCIN3PPS0             :1;
        unsigned CLCIN3PPS1             :1;
        unsigned CLCIN3PPS2             :1;
        unsigned CLCIN3PPS3             :1;
        unsigned CLCIN3PPS4             :1;
    };
} CLCIN3PPSbits_t;
extern volatile CLCIN3PPSbits_t CLCIN3PPSbits __at(0xE2B);
// bitfield macros
#define _CLCIN3PPS_CLCIN3PPS_POSN                           0x0
#define _CLCIN3PPS_CLCIN3PPS_POSITION                       0x0
#define _CLCIN3PPS_CLCIN3PPS_SIZE                           0x5
#define _CLCIN3PPS_CLCIN3PPS_LENGTH                         0x5
#define _CLCIN3PPS_CLCIN3PPS_MASK                           0x1F
#define _CLCIN3PPS_CLCIN3PPS0_POSN                          0x0
#define _CLCIN3PPS_CLCIN3PPS0_POSITION                      0x0
#define _CLCIN3PPS_CLCIN3PPS0_SIZE                          0x1
#define _CLCIN3PPS_CLCIN3PPS0_LENGTH                        0x1
#define _CLCIN3PPS_CLCIN3PPS0_MASK                          0x1
#define _CLCIN3PPS_CLCIN3PPS1_POSN                          0x1
#define _CLCIN3PPS_CLCIN3PPS1_POSITION                      0x1
#define _CLCIN3PPS_CLCIN3PPS1_SIZE                          0x1
#define _CLCIN3PPS_CLCIN3PPS1_LENGTH                        0x1
#define _CLCIN3PPS_CLCIN3PPS1_MASK                          0x2
#define _CLCIN3PPS_CLCIN3PPS2_POSN                          0x2
#define _CLCIN3PPS_CLCIN3PPS2_POSITION                      0x2
#define _CLCIN3PPS_CLCIN3PPS2_SIZE                          0x1
#define _CLCIN3PPS_CLCIN3PPS2_LENGTH                        0x1
#define _CLCIN3PPS_CLCIN3PPS2_MASK                          0x4
#define _CLCIN3PPS_CLCIN3PPS3_POSN                          0x3
#define _CLCIN3PPS_CLCIN3PPS3_POSITION                      0x3
#define _CLCIN3PPS_CLCIN3PPS3_SIZE                          0x1
#define _CLCIN3PPS_CLCIN3PPS3_LENGTH                        0x1
#define _CLCIN3PPS_CLCIN3PPS3_MASK                          0x8
#define _CLCIN3PPS_CLCIN3PPS4_POSN                          0x4
#define _CLCIN3PPS_CLCIN3PPS4_POSITION                      0x4
#define _CLCIN3PPS_CLCIN3PPS4_SIZE                          0x1
#define _CLCIN3PPS_CLCIN3PPS4_LENGTH                        0x1
#define _CLCIN3PPS_CLCIN3PPS4_MASK                          0x10

// Register: RA0PPS
#define RA0PPS RA0PPS
extern volatile unsigned char           RA0PPS              __at(0xE90);
#ifndef _LIB_BUILD
asm("RA0PPS equ 0E90h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0PPS                 :5;
    };
    struct {
        unsigned RA0PPS0                :1;
        unsigned RA0PPS1                :1;
        unsigned RA0PPS2                :1;
        unsigned RA0PPS3                :1;
        unsigned RA0PPS4                :1;
    };
} RA0PPSbits_t;
extern volatile RA0PPSbits_t RA0PPSbits __at(0xE90);
// bitfield macros
#define _RA0PPS_RA0PPS_POSN                                 0x0
#define _RA0PPS_RA0PPS_POSITION                             0x0
#define _RA0PPS_RA0PPS_SIZE                                 0x5
#define _RA0PPS_RA0PPS_LENGTH                               0x5
#define _RA0PPS_RA0PPS_MASK                                 0x1F
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

// Register: RA1PPS
#define RA1PPS RA1PPS
extern volatile unsigned char           RA1PPS              __at(0xE91);
#ifndef _LIB_BUILD
asm("RA1PPS equ 0E91h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA1PPS                 :5;
    };
    struct {
        unsigned RA1PPS0                :1;
        unsigned RA1PPS1                :1;
        unsigned RA1PPS2                :1;
        unsigned RA1PPS3                :1;
        unsigned RA1PPS4                :1;
    };
} RA1PPSbits_t;
extern volatile RA1PPSbits_t RA1PPSbits __at(0xE91);
// bitfield macros
#define _RA1PPS_RA1PPS_POSN                                 0x0
#define _RA1PPS_RA1PPS_POSITION                             0x0
#define _RA1PPS_RA1PPS_SIZE                                 0x5
#define _RA1PPS_RA1PPS_LENGTH                               0x5
#define _RA1PPS_RA1PPS_MASK                                 0x1F
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

// Register: RA2PPS
#define RA2PPS RA2PPS
extern volatile unsigned char           RA2PPS              __at(0xE92);
#ifndef _LIB_BUILD
asm("RA2PPS equ 0E92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA2PPS                 :5;
    };
    struct {
        unsigned RA2PPS0                :1;
        unsigned RA2PPS1                :1;
        unsigned RA2PPS2                :1;
        unsigned RA2PPS3                :1;
        unsigned RA2PPS4                :1;
    };
} RA2PPSbits_t;
extern volatile RA2PPSbits_t RA2PPSbits __at(0xE92);
// bitfield macros
#define _RA2PPS_RA2PPS_POSN                                 0x0
#define _RA2PPS_RA2PPS_POSITION                             0x0
#define _RA2PPS_RA2PPS_SIZE                                 0x5
#define _RA2PPS_RA2PPS_LENGTH                               0x5
#define _RA2PPS_RA2PPS_MASK                                 0x1F
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

// Register: RA4PPS
#define RA4PPS RA4PPS
extern volatile unsigned char           RA4PPS              __at(0xE94);
#ifndef _LIB_BUILD
asm("RA4PPS equ 0E94h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA4PPS                 :5;
    };
    struct {
        unsigned RA4PPS0                :1;
        unsigned RA4PPS1                :1;
        unsigned RA4PPS2                :1;
        unsigned RA4PPS3                :1;
        unsigned RA4PPS4                :1;
    };
} RA4PPSbits_t;
extern volatile RA4PPSbits_t RA4PPSbits __at(0xE94);
// bitfield macros
#define _RA4PPS_RA4PPS_POSN                                 0x0
#define _RA4PPS_RA4PPS_POSITION                             0x0
#define _RA4PPS_RA4PPS_SIZE                                 0x5
#define _RA4PPS_RA4PPS_LENGTH                               0x5
#define _RA4PPS_RA4PPS_MASK                                 0x1F
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

// Register: RA5PPS
#define RA5PPS RA5PPS
extern volatile unsigned char           RA5PPS              __at(0xE95);
#ifndef _LIB_BUILD
asm("RA5PPS equ 0E95h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA5PPS                 :5;
    };
    struct {
        unsigned RA5PPS0                :1;
        unsigned RA5PPS1                :1;
        unsigned RA5PPS2                :1;
        unsigned RA5PPS3                :1;
        unsigned RA5PPS4                :1;
    };
} RA5PPSbits_t;
extern volatile RA5PPSbits_t RA5PPSbits __at(0xE95);
// bitfield macros
#define _RA5PPS_RA5PPS_POSN                                 0x0
#define _RA5PPS_RA5PPS_POSITION                             0x0
#define _RA5PPS_RA5PPS_SIZE                                 0x5
#define _RA5PPS_RA5PPS_LENGTH                               0x5
#define _RA5PPS_RA5PPS_MASK                                 0x1F
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

// Register: CLCDATA
#define CLCDATA CLCDATA
extern volatile unsigned char           CLCDATA             __at(0xF0F);
#ifndef _LIB_BUILD
asm("CLCDATA equ 0F0Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MLC1OUT                :1;
        unsigned MLC2OUT                :1;
    };
} CLCDATAbits_t;
extern volatile CLCDATAbits_t CLCDATAbits __at(0xF0F);
// bitfield macros
#define _CLCDATA_MLC1OUT_POSN                               0x0
#define _CLCDATA_MLC1OUT_POSITION                           0x0
#define _CLCDATA_MLC1OUT_SIZE                               0x1
#define _CLCDATA_MLC1OUT_LENGTH                             0x1
#define _CLCDATA_MLC1OUT_MASK                               0x1
#define _CLCDATA_MLC2OUT_POSN                               0x1
#define _CLCDATA_MLC2OUT_POSITION                           0x1
#define _CLCDATA_MLC2OUT_SIZE                               0x1
#define _CLCDATA_MLC2OUT_LENGTH                             0x1
#define _CLCDATA_MLC2OUT_MASK                               0x2

// Register: CLC1CON
#define CLC1CON CLC1CON
extern volatile unsigned char           CLC1CON             __at(0xF10);
#ifndef _LIB_BUILD
asm("CLC1CON equ 0F10h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1MODE                :3;
        unsigned LC1INTN                :1;
        unsigned LC1INTP                :1;
        unsigned LC1OUT                 :1;
        unsigned                        :1;
        unsigned LC1EN                  :1;
    };
    struct {
        unsigned LC1MODE0               :1;
        unsigned LC1MODE1               :1;
        unsigned LC1MODE2               :1;
    };
    struct {
        unsigned MODE                   :3;
        unsigned INTN                   :1;
        unsigned INTP                   :1;
        unsigned OUT                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
    };
} CLC1CONbits_t;
extern volatile CLC1CONbits_t CLC1CONbits __at(0xF10);
// bitfield macros
#define _CLC1CON_LC1MODE_POSN                               0x0
#define _CLC1CON_LC1MODE_POSITION                           0x0
#define _CLC1CON_LC1MODE_SIZE                               0x3
#define _CLC1CON_LC1MODE_LENGTH                             0x3
#define _CLC1CON_LC1MODE_MASK                               0x7
#define _CLC1CON_LC1INTN_POSN                               0x3
#define _CLC1CON_LC1INTN_POSITION                           0x3
#define _CLC1CON_LC1INTN_SIZE                               0x1
#define _CLC1CON_LC1INTN_LENGTH                             0x1
#define _CLC1CON_LC1INTN_MASK                               0x8
#define _CLC1CON_LC1INTP_POSN                               0x4
#define _CLC1CON_LC1INTP_POSITION                           0x4
#define _CLC1CON_LC1INTP_SIZE                               0x1
#define _CLC1CON_LC1INTP_LENGTH                             0x1
#define _CLC1CON_LC1INTP_MASK                               0x10
#define _CLC1CON_LC1OUT_POSN                                0x5
#define _CLC1CON_LC1OUT_POSITION                            0x5
#define _CLC1CON_LC1OUT_SIZE                                0x1
#define _CLC1CON_LC1OUT_LENGTH                              0x1
#define _CLC1CON_LC1OUT_MASK                                0x20
#define _CLC1CON_LC1EN_POSN                                 0x7
#define _CLC1CON_LC1EN_POSITION                             0x7
#define _CLC1CON_LC1EN_SIZE                                 0x1
#define _CLC1CON_LC1EN_LENGTH                               0x1
#define _CLC1CON_LC1EN_MASK                                 0x80
#define _CLC1CON_LC1MODE0_POSN                              0x0
#define _CLC1CON_LC1MODE0_POSITION                          0x0
#define _CLC1CON_LC1MODE0_SIZE                              0x1
#define _CLC1CON_LC1MODE0_LENGTH                            0x1
#define _CLC1CON_LC1MODE0_MASK                              0x1
#define _CLC1CON_LC1MODE1_POSN                              0x1
#define _CLC1CON_LC1MODE1_POSITION                          0x1
#define _CLC1CON_LC1MODE1_SIZE                              0x1
#define _CLC1CON_LC1MODE1_LENGTH                            0x1
#define _CLC1CON_LC1MODE1_MASK                              0x2
#define _CLC1CON_LC1MODE2_POSN                              0x2
#define _CLC1CON_LC1MODE2_POSITION                          0x2
#define _CLC1CON_LC1MODE2_SIZE                              0x1
#define _CLC1CON_LC1MODE2_LENGTH                            0x1
#define _CLC1CON_LC1MODE2_MASK                              0x4
#define _CLC1CON_MODE_POSN                                  0x0
#define _CLC1CON_MODE_POSITION                              0x0
#define _CLC1CON_MODE_SIZE                                  0x3
#define _CLC1CON_MODE_LENGTH                                0x3
#define _CLC1CON_MODE_MASK                                  0x7
#define _CLC1CON_INTN_POSN                                  0x3
#define _CLC1CON_INTN_POSITION                              0x3
#define _CLC1CON_INTN_SIZE                                  0x1
#define _CLC1CON_INTN_LENGTH                                0x1
#define _CLC1CON_INTN_MASK                                  0x8
#define _CLC1CON_INTP_POSN                                  0x4
#define _CLC1CON_INTP_POSITION                              0x4
#define _CLC1CON_INTP_SIZE                                  0x1
#define _CLC1CON_INTP_LENGTH                                0x1
#define _CLC1CON_INTP_MASK                                  0x10
#define _CLC1CON_OUT_POSN                                   0x5
#define _CLC1CON_OUT_POSITION                               0x5
#define _CLC1CON_OUT_SIZE                                   0x1
#define _CLC1CON_OUT_LENGTH                                 0x1
#define _CLC1CON_OUT_MASK                                   0x20
#define _CLC1CON_EN_POSN                                    0x7
#define _CLC1CON_EN_POSITION                                0x7
#define _CLC1CON_EN_SIZE                                    0x1
#define _CLC1CON_EN_LENGTH                                  0x1
#define _CLC1CON_EN_MASK                                    0x80
#define _CLC1CON_MODE0_POSN                                 0x0
#define _CLC1CON_MODE0_POSITION                             0x0
#define _CLC1CON_MODE0_SIZE                                 0x1
#define _CLC1CON_MODE0_LENGTH                               0x1
#define _CLC1CON_MODE0_MASK                                 0x1
#define _CLC1CON_MODE1_POSN                                 0x1
#define _CLC1CON_MODE1_POSITION                             0x1
#define _CLC1CON_MODE1_SIZE                                 0x1
#define _CLC1CON_MODE1_LENGTH                               0x1
#define _CLC1CON_MODE1_MASK                                 0x2
#define _CLC1CON_MODE2_POSN                                 0x2
#define _CLC1CON_MODE2_POSITION                             0x2
#define _CLC1CON_MODE2_SIZE                                 0x1
#define _CLC1CON_MODE2_LENGTH                               0x1
#define _CLC1CON_MODE2_MASK                                 0x4

// Register: CLC1POL
#define CLC1POL CLC1POL
extern volatile unsigned char           CLC1POL             __at(0xF11);
#ifndef _LIB_BUILD
asm("CLC1POL equ 0F11h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G1POL               :1;
        unsigned LC1G2POL               :1;
        unsigned LC1G3POL               :1;
        unsigned LC1G4POL               :1;
        unsigned                        :3;
        unsigned LC1POL                 :1;
    };
    struct {
        unsigned G1POL                  :1;
        unsigned G2POL                  :1;
        unsigned G3POL                  :1;
        unsigned G4POL                  :1;
        unsigned                        :3;
        unsigned POL                    :1;
    };
} CLC1POLbits_t;
extern volatile CLC1POLbits_t CLC1POLbits __at(0xF11);
// bitfield macros
#define _CLC1POL_LC1G1POL_POSN                              0x0
#define _CLC1POL_LC1G1POL_POSITION                          0x0
#define _CLC1POL_LC1G1POL_SIZE                              0x1
#define _CLC1POL_LC1G1POL_LENGTH                            0x1
#define _CLC1POL_LC1G1POL_MASK                              0x1
#define _CLC1POL_LC1G2POL_POSN                              0x1
#define _CLC1POL_LC1G2POL_POSITION                          0x1
#define _CLC1POL_LC1G2POL_SIZE                              0x1
#define _CLC1POL_LC1G2POL_LENGTH                            0x1
#define _CLC1POL_LC1G2POL_MASK                              0x2
#define _CLC1POL_LC1G3POL_POSN                              0x2
#define _CLC1POL_LC1G3POL_POSITION                          0x2
#define _CLC1POL_LC1G3POL_SIZE                              0x1
#define _CLC1POL_LC1G3POL_LENGTH                            0x1
#define _CLC1POL_LC1G3POL_MASK                              0x4
#define _CLC1POL_LC1G4POL_POSN                              0x3
#define _CLC1POL_LC1G4POL_POSITION                          0x3
#define _CLC1POL_LC1G4POL_SIZE                              0x1
#define _CLC1POL_LC1G4POL_LENGTH                            0x1
#define _CLC1POL_LC1G4POL_MASK                              0x8
#define _CLC1POL_LC1POL_POSN                                0x7
#define _CLC1POL_LC1POL_POSITION                            0x7
#define _CLC1POL_LC1POL_SIZE                                0x1
#define _CLC1POL_LC1POL_LENGTH                              0x1
#define _CLC1POL_LC1POL_MASK                                0x80
#define _CLC1POL_G1POL_POSN                                 0x0
#define _CLC1POL_G1POL_POSITION                             0x0
#define _CLC1POL_G1POL_SIZE                                 0x1
#define _CLC1POL_G1POL_LENGTH                               0x1
#define _CLC1POL_G1POL_MASK                                 0x1
#define _CLC1POL_G2POL_POSN                                 0x1
#define _CLC1POL_G2POL_POSITION                             0x1
#define _CLC1POL_G2POL_SIZE                                 0x1
#define _CLC1POL_G2POL_LENGTH                               0x1
#define _CLC1POL_G2POL_MASK                                 0x2
#define _CLC1POL_G3POL_POSN                                 0x2
#define _CLC1POL_G3POL_POSITION                             0x2
#define _CLC1POL_G3POL_SIZE                                 0x1
#define _CLC1POL_G3POL_LENGTH                               0x1
#define _CLC1POL_G3POL_MASK                                 0x4
#define _CLC1POL_G4POL_POSN                                 0x3
#define _CLC1POL_G4POL_POSITION                             0x3
#define _CLC1POL_G4POL_SIZE                                 0x1
#define _CLC1POL_G4POL_LENGTH                               0x1
#define _CLC1POL_G4POL_MASK                                 0x8
#define _CLC1POL_POL_POSN                                   0x7
#define _CLC1POL_POL_POSITION                               0x7
#define _CLC1POL_POL_SIZE                                   0x1
#define _CLC1POL_POL_LENGTH                                 0x1
#define _CLC1POL_POL_MASK                                   0x80

// Register: CLC1SEL0
#define CLC1SEL0 CLC1SEL0
extern volatile unsigned char           CLC1SEL0            __at(0xF12);
#ifndef _LIB_BUILD
asm("CLC1SEL0 equ 0F12h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1D1S0                :1;
        unsigned LC1D1S1                :1;
        unsigned LC1D1S2                :1;
        unsigned LC1D1S3                :1;
        unsigned LC1D1S4                :1;
    };
    struct {
        unsigned LC1D1S                 :8;
    };
    struct {
        unsigned D1S                    :8;
    };
    struct {
        unsigned D1S0                   :1;
        unsigned D1S1                   :1;
        unsigned D1S2                   :1;
        unsigned D1S3                   :1;
        unsigned D1S4                   :1;
    };
} CLC1SEL0bits_t;
extern volatile CLC1SEL0bits_t CLC1SEL0bits __at(0xF12);
// bitfield macros
#define _CLC1SEL0_LC1D1S0_POSN                              0x0
#define _CLC1SEL0_LC1D1S0_POSITION                          0x0
#define _CLC1SEL0_LC1D1S0_SIZE                              0x1
#define _CLC1SEL0_LC1D1S0_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S0_MASK                              0x1
#define _CLC1SEL0_LC1D1S1_POSN                              0x1
#define _CLC1SEL0_LC1D1S1_POSITION                          0x1
#define _CLC1SEL0_LC1D1S1_SIZE                              0x1
#define _CLC1SEL0_LC1D1S1_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S1_MASK                              0x2
#define _CLC1SEL0_LC1D1S2_POSN                              0x2
#define _CLC1SEL0_LC1D1S2_POSITION                          0x2
#define _CLC1SEL0_LC1D1S2_SIZE                              0x1
#define _CLC1SEL0_LC1D1S2_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S2_MASK                              0x4
#define _CLC1SEL0_LC1D1S3_POSN                              0x3
#define _CLC1SEL0_LC1D1S3_POSITION                          0x3
#define _CLC1SEL0_LC1D1S3_SIZE                              0x1
#define _CLC1SEL0_LC1D1S3_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S3_MASK                              0x8
#define _CLC1SEL0_LC1D1S4_POSN                              0x4
#define _CLC1SEL0_LC1D1S4_POSITION                          0x4
#define _CLC1SEL0_LC1D1S4_SIZE                              0x1
#define _CLC1SEL0_LC1D1S4_LENGTH                            0x1
#define _CLC1SEL0_LC1D1S4_MASK                              0x10
#define _CLC1SEL0_LC1D1S_POSN                               0x0
#define _CLC1SEL0_LC1D1S_POSITION                           0x0
#define _CLC1SEL0_LC1D1S_SIZE                               0x8
#define _CLC1SEL0_LC1D1S_LENGTH                             0x8
#define _CLC1SEL0_LC1D1S_MASK                               0xFF
#define _CLC1SEL0_D1S_POSN                                  0x0
#define _CLC1SEL0_D1S_POSITION                              0x0
#define _CLC1SEL0_D1S_SIZE                                  0x8
#define _CLC1SEL0_D1S_LENGTH                                0x8
#define _CLC1SEL0_D1S_MASK                                  0xFF
#define _CLC1SEL0_D1S0_POSN                                 0x0
#define _CLC1SEL0_D1S0_POSITION                             0x0
#define _CLC1SEL0_D1S0_SIZE                                 0x1
#define _CLC1SEL0_D1S0_LENGTH                               0x1
#define _CLC1SEL0_D1S0_MASK                                 0x1
#define _CLC1SEL0_D1S1_POSN                                 0x1
#define _CLC1SEL0_D1S1_POSITION                             0x1
#define _CLC1SEL0_D1S1_SIZE                                 0x1
#define _CLC1SEL0_D1S1_LENGTH                               0x1
#define _CLC1SEL0_D1S1_MASK                                 0x2
#define _CLC1SEL0_D1S2_POSN                                 0x2
#define _CLC1SEL0_D1S2_POSITION                             0x2
#define _CLC1SEL0_D1S2_SIZE                                 0x1
#define _CLC1SEL0_D1S2_LENGTH                               0x1
#define _CLC1SEL0_D1S2_MASK                                 0x4
#define _CLC1SEL0_D1S3_POSN                                 0x3
#define _CLC1SEL0_D1S3_POSITION                             0x3
#define _CLC1SEL0_D1S3_SIZE                                 0x1
#define _CLC1SEL0_D1S3_LENGTH                               0x1
#define _CLC1SEL0_D1S3_MASK                                 0x8
#define _CLC1SEL0_D1S4_POSN                                 0x4
#define _CLC1SEL0_D1S4_POSITION                             0x4
#define _CLC1SEL0_D1S4_SIZE                                 0x1
#define _CLC1SEL0_D1S4_LENGTH                               0x1
#define _CLC1SEL0_D1S4_MASK                                 0x10

// Register: CLC1SEL1
#define CLC1SEL1 CLC1SEL1
extern volatile unsigned char           CLC1SEL1            __at(0xF13);
#ifndef _LIB_BUILD
asm("CLC1SEL1 equ 0F13h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1D2S0                :1;
        unsigned LC1D2S1                :1;
        unsigned LC1D2S2                :1;
        unsigned LC1D2S3                :1;
        unsigned LC1D2S4                :1;
    };
    struct {
        unsigned LC1D2S                 :8;
    };
    struct {
        unsigned D2S                    :8;
    };
    struct {
        unsigned D2S0                   :1;
        unsigned D2S1                   :1;
        unsigned D2S2                   :1;
        unsigned D2S3                   :1;
        unsigned D2S4                   :1;
    };
} CLC1SEL1bits_t;
extern volatile CLC1SEL1bits_t CLC1SEL1bits __at(0xF13);
// bitfield macros
#define _CLC1SEL1_LC1D2S0_POSN                              0x0
#define _CLC1SEL1_LC1D2S0_POSITION                          0x0
#define _CLC1SEL1_LC1D2S0_SIZE                              0x1
#define _CLC1SEL1_LC1D2S0_LENGTH                            0x1
#define _CLC1SEL1_LC1D2S0_MASK                              0x1
#define _CLC1SEL1_LC1D2S1_POSN                              0x1
#define _CLC1SEL1_LC1D2S1_POSITION                          0x1
#define _CLC1SEL1_LC1D2S1_SIZE                              0x1
#define _CLC1SEL1_LC1D2S1_LENGTH                            0x1
#define _CLC1SEL1_LC1D2S1_MASK                              0x2
#define _CLC1SEL1_LC1D2S2_POSN                              0x2
#define _CLC1SEL1_LC1D2S2_POSITION                          0x2
#define _CLC1SEL1_LC1D2S2_SIZE                              0x1
#define _CLC1SEL1_LC1D2S2_LENGTH                            0x1
#define _CLC1SEL1_LC1D2S2_MASK                              0x4
#define _CLC1SEL1_LC1D2S3_POSN                              0x3
#define _CLC1SEL1_LC1D2S3_POSITION                          0x3
#define _CLC1SEL1_LC1D2S3_SIZE                              0x1
#define _CLC1SEL1_LC1D2S3_LENGTH                            0x1
#define _CLC1SEL1_LC1D2S3_MASK                              0x8
#define _CLC1SEL1_LC1D2S4_POSN                              0x4
#define _CLC1SEL1_LC1D2S4_POSITION                          0x4
#define _CLC1SEL1_LC1D2S4_SIZE                              0x1
#define _CLC1SEL1_LC1D2S4_LENGTH                            0x1
#define _CLC1SEL1_LC1D2S4_MASK                              0x10
#define _CLC1SEL1_LC1D2S_POSN                               0x0
#define _CLC1SEL1_LC1D2S_POSITION                           0x0
#define _CLC1SEL1_LC1D2S_SIZE                               0x8
#define _CLC1SEL1_LC1D2S_LENGTH                             0x8
#define _CLC1SEL1_LC1D2S_MASK                               0xFF
#define _CLC1SEL1_D2S_POSN                                  0x0
#define _CLC1SEL1_D2S_POSITION                              0x0
#define _CLC1SEL1_D2S_SIZE                                  0x8
#define _CLC1SEL1_D2S_LENGTH                                0x8
#define _CLC1SEL1_D2S_MASK                                  0xFF
#define _CLC1SEL1_D2S0_POSN                                 0x0
#define _CLC1SEL1_D2S0_POSITION                             0x0
#define _CLC1SEL1_D2S0_SIZE                                 0x1
#define _CLC1SEL1_D2S0_LENGTH                               0x1
#define _CLC1SEL1_D2S0_MASK                                 0x1
#define _CLC1SEL1_D2S1_POSN                                 0x1
#define _CLC1SEL1_D2S1_POSITION                             0x1
#define _CLC1SEL1_D2S1_SIZE                                 0x1
#define _CLC1SEL1_D2S1_LENGTH                               0x1
#define _CLC1SEL1_D2S1_MASK                                 0x2
#define _CLC1SEL1_D2S2_POSN                                 0x2
#define _CLC1SEL1_D2S2_POSITION                             0x2
#define _CLC1SEL1_D2S2_SIZE                                 0x1
#define _CLC1SEL1_D2S2_LENGTH                               0x1
#define _CLC1SEL1_D2S2_MASK                                 0x4
#define _CLC1SEL1_D2S3_POSN                                 0x3
#define _CLC1SEL1_D2S3_POSITION                             0x3
#define _CLC1SEL1_D2S3_SIZE                                 0x1
#define _CLC1SEL1_D2S3_LENGTH                               0x1
#define _CLC1SEL1_D2S3_MASK                                 0x8
#define _CLC1SEL1_D2S4_POSN                                 0x4
#define _CLC1SEL1_D2S4_POSITION                             0x4
#define _CLC1SEL1_D2S4_SIZE                                 0x1
#define _CLC1SEL1_D2S4_LENGTH                               0x1
#define _CLC1SEL1_D2S4_MASK                                 0x10

// Register: CLC1SEL2
#define CLC1SEL2 CLC1SEL2
extern volatile unsigned char           CLC1SEL2            __at(0xF14);
#ifndef _LIB_BUILD
asm("CLC1SEL2 equ 0F14h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1D3S0                :1;
        unsigned LC1D3S1                :1;
        unsigned LC1D3S2                :1;
        unsigned LC1D3S3                :1;
        unsigned LC1D3S4                :1;
    };
    struct {
        unsigned LC1D3S                 :8;
    };
    struct {
        unsigned D3S                    :8;
    };
    struct {
        unsigned D3S0                   :1;
        unsigned D3S1                   :1;
        unsigned D3S2                   :1;
        unsigned D3S3                   :1;
        unsigned D3S4                   :1;
    };
} CLC1SEL2bits_t;
extern volatile CLC1SEL2bits_t CLC1SEL2bits __at(0xF14);
// bitfield macros
#define _CLC1SEL2_LC1D3S0_POSN                              0x0
#define _CLC1SEL2_LC1D3S0_POSITION                          0x0
#define _CLC1SEL2_LC1D3S0_SIZE                              0x1
#define _CLC1SEL2_LC1D3S0_LENGTH                            0x1
#define _CLC1SEL2_LC1D3S0_MASK                              0x1
#define _CLC1SEL2_LC1D3S1_POSN                              0x1
#define _CLC1SEL2_LC1D3S1_POSITION                          0x1
#define _CLC1SEL2_LC1D3S1_SIZE                              0x1
#define _CLC1SEL2_LC1D3S1_LENGTH                            0x1
#define _CLC1SEL2_LC1D3S1_MASK                              0x2
#define _CLC1SEL2_LC1D3S2_POSN                              0x2
#define _CLC1SEL2_LC1D3S2_POSITION                          0x2
#define _CLC1SEL2_LC1D3S2_SIZE                              0x1
#define _CLC1SEL2_LC1D3S2_LENGTH                            0x1
#define _CLC1SEL2_LC1D3S2_MASK                              0x4
#define _CLC1SEL2_LC1D3S3_POSN                              0x3
#define _CLC1SEL2_LC1D3S3_POSITION                          0x3
#define _CLC1SEL2_LC1D3S3_SIZE                              0x1
#define _CLC1SEL2_LC1D3S3_LENGTH                            0x1
#define _CLC1SEL2_LC1D3S3_MASK                              0x8
#define _CLC1SEL2_LC1D3S4_POSN                              0x4
#define _CLC1SEL2_LC1D3S4_POSITION                          0x4
#define _CLC1SEL2_LC1D3S4_SIZE                              0x1
#define _CLC1SEL2_LC1D3S4_LENGTH                            0x1
#define _CLC1SEL2_LC1D3S4_MASK                              0x10
#define _CLC1SEL2_LC1D3S_POSN                               0x0
#define _CLC1SEL2_LC1D3S_POSITION                           0x0
#define _CLC1SEL2_LC1D3S_SIZE                               0x8
#define _CLC1SEL2_LC1D3S_LENGTH                             0x8
#define _CLC1SEL2_LC1D3S_MASK                               0xFF
#define _CLC1SEL2_D3S_POSN                                  0x0
#define _CLC1SEL2_D3S_POSITION                              0x0
#define _CLC1SEL2_D3S_SIZE                                  0x8
#define _CLC1SEL2_D3S_LENGTH                                0x8
#define _CLC1SEL2_D3S_MASK                                  0xFF
#define _CLC1SEL2_D3S0_POSN                                 0x0
#define _CLC1SEL2_D3S0_POSITION                             0x0
#define _CLC1SEL2_D3S0_SIZE                                 0x1
#define _CLC1SEL2_D3S0_LENGTH                               0x1
#define _CLC1SEL2_D3S0_MASK                                 0x1
#define _CLC1SEL2_D3S1_POSN                                 0x1
#define _CLC1SEL2_D3S1_POSITION                             0x1
#define _CLC1SEL2_D3S1_SIZE                                 0x1
#define _CLC1SEL2_D3S1_LENGTH                               0x1
#define _CLC1SEL2_D3S1_MASK                                 0x2
#define _CLC1SEL2_D3S2_POSN                                 0x2
#define _CLC1SEL2_D3S2_POSITION                             0x2
#define _CLC1SEL2_D3S2_SIZE                                 0x1
#define _CLC1SEL2_D3S2_LENGTH                               0x1
#define _CLC1SEL2_D3S2_MASK                                 0x4
#define _CLC1SEL2_D3S3_POSN                                 0x3
#define _CLC1SEL2_D3S3_POSITION                             0x3
#define _CLC1SEL2_D3S3_SIZE                                 0x1
#define _CLC1SEL2_D3S3_LENGTH                               0x1
#define _CLC1SEL2_D3S3_MASK                                 0x8
#define _CLC1SEL2_D3S4_POSN                                 0x4
#define _CLC1SEL2_D3S4_POSITION                             0x4
#define _CLC1SEL2_D3S4_SIZE                                 0x1
#define _CLC1SEL2_D3S4_LENGTH                               0x1
#define _CLC1SEL2_D3S4_MASK                                 0x10

// Register: CLC1SEL3
#define CLC1SEL3 CLC1SEL3
extern volatile unsigned char           CLC1SEL3            __at(0xF15);
#ifndef _LIB_BUILD
asm("CLC1SEL3 equ 0F15h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1D4S0                :1;
        unsigned LC1D4S1                :1;
        unsigned LC1D4S2                :1;
        unsigned LC1D4S3                :1;
        unsigned LC1D4S4                :1;
    };
    struct {
        unsigned LC1D4S                 :8;
    };
    struct {
        unsigned D4S                    :8;
    };
    struct {
        unsigned D4S0                   :1;
        unsigned D4S1                   :1;
        unsigned D4S2                   :1;
        unsigned D4S3                   :1;
        unsigned D4S4                   :1;
    };
} CLC1SEL3bits_t;
extern volatile CLC1SEL3bits_t CLC1SEL3bits __at(0xF15);
// bitfield macros
#define _CLC1SEL3_LC1D4S0_POSN                              0x0
#define _CLC1SEL3_LC1D4S0_POSITION                          0x0
#define _CLC1SEL3_LC1D4S0_SIZE                              0x1
#define _CLC1SEL3_LC1D4S0_LENGTH                            0x1
#define _CLC1SEL3_LC1D4S0_MASK                              0x1
#define _CLC1SEL3_LC1D4S1_POSN                              0x1
#define _CLC1SEL3_LC1D4S1_POSITION                          0x1
#define _CLC1SEL3_LC1D4S1_SIZE                              0x1
#define _CLC1SEL3_LC1D4S1_LENGTH                            0x1
#define _CLC1SEL3_LC1D4S1_MASK                              0x2
#define _CLC1SEL3_LC1D4S2_POSN                              0x2
#define _CLC1SEL3_LC1D4S2_POSITION                          0x2
#define _CLC1SEL3_LC1D4S2_SIZE                              0x1
#define _CLC1SEL3_LC1D4S2_LENGTH                            0x1
#define _CLC1SEL3_LC1D4S2_MASK                              0x4
#define _CLC1SEL3_LC1D4S3_POSN                              0x3
#define _CLC1SEL3_LC1D4S3_POSITION                          0x3
#define _CLC1SEL3_LC1D4S3_SIZE                              0x1
#define _CLC1SEL3_LC1D4S3_LENGTH                            0x1
#define _CLC1SEL3_LC1D4S3_MASK                              0x8
#define _CLC1SEL3_LC1D4S4_POSN                              0x4
#define _CLC1SEL3_LC1D4S4_POSITION                          0x4
#define _CLC1SEL3_LC1D4S4_SIZE                              0x1
#define _CLC1SEL3_LC1D4S4_LENGTH                            0x1
#define _CLC1SEL3_LC1D4S4_MASK                              0x10
#define _CLC1SEL3_LC1D4S_POSN                               0x0
#define _CLC1SEL3_LC1D4S_POSITION                           0x0
#define _CLC1SEL3_LC1D4S_SIZE                               0x8
#define _CLC1SEL3_LC1D4S_LENGTH                             0x8
#define _CLC1SEL3_LC1D4S_MASK                               0xFF
#define _CLC1SEL3_D4S_POSN                                  0x0
#define _CLC1SEL3_D4S_POSITION                              0x0
#define _CLC1SEL3_D4S_SIZE                                  0x8
#define _CLC1SEL3_D4S_LENGTH                                0x8
#define _CLC1SEL3_D4S_MASK                                  0xFF
#define _CLC1SEL3_D4S0_POSN                                 0x0
#define _CLC1SEL3_D4S0_POSITION                             0x0
#define _CLC1SEL3_D4S0_SIZE                                 0x1
#define _CLC1SEL3_D4S0_LENGTH                               0x1
#define _CLC1SEL3_D4S0_MASK                                 0x1
#define _CLC1SEL3_D4S1_POSN                                 0x1
#define _CLC1SEL3_D4S1_POSITION                             0x1
#define _CLC1SEL3_D4S1_SIZE                                 0x1
#define _CLC1SEL3_D4S1_LENGTH                               0x1
#define _CLC1SEL3_D4S1_MASK                                 0x2
#define _CLC1SEL3_D4S2_POSN                                 0x2
#define _CLC1SEL3_D4S2_POSITION                             0x2
#define _CLC1SEL3_D4S2_SIZE                                 0x1
#define _CLC1SEL3_D4S2_LENGTH                               0x1
#define _CLC1SEL3_D4S2_MASK                                 0x4
#define _CLC1SEL3_D4S3_POSN                                 0x3
#define _CLC1SEL3_D4S3_POSITION                             0x3
#define _CLC1SEL3_D4S3_SIZE                                 0x1
#define _CLC1SEL3_D4S3_LENGTH                               0x1
#define _CLC1SEL3_D4S3_MASK                                 0x8
#define _CLC1SEL3_D4S4_POSN                                 0x4
#define _CLC1SEL3_D4S4_POSITION                             0x4
#define _CLC1SEL3_D4S4_SIZE                                 0x1
#define _CLC1SEL3_D4S4_LENGTH                               0x1
#define _CLC1SEL3_D4S4_MASK                                 0x10

// Register: CLC1GLS0
#define CLC1GLS0 CLC1GLS0
extern volatile unsigned char           CLC1GLS0            __at(0xF16);
#ifndef _LIB_BUILD
asm("CLC1GLS0 equ 0F16h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G1D1N               :1;
        unsigned LC1G1D1T               :1;
        unsigned LC1G1D2N               :1;
        unsigned LC1G1D2T               :1;
        unsigned LC1G1D3N               :1;
        unsigned LC1G1D3T               :1;
        unsigned LC1G1D4N               :1;
        unsigned LC1G1D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS0bits_t;
extern volatile CLC1GLS0bits_t CLC1GLS0bits __at(0xF16);
// bitfield macros
#define _CLC1GLS0_LC1G1D1N_POSN                             0x0
#define _CLC1GLS0_LC1G1D1N_POSITION                         0x0
#define _CLC1GLS0_LC1G1D1N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D1N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D1N_MASK                             0x1
#define _CLC1GLS0_LC1G1D1T_POSN                             0x1
#define _CLC1GLS0_LC1G1D1T_POSITION                         0x1
#define _CLC1GLS0_LC1G1D1T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D1T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D1T_MASK                             0x2
#define _CLC1GLS0_LC1G1D2N_POSN                             0x2
#define _CLC1GLS0_LC1G1D2N_POSITION                         0x2
#define _CLC1GLS0_LC1G1D2N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D2N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D2N_MASK                             0x4
#define _CLC1GLS0_LC1G1D2T_POSN                             0x3
#define _CLC1GLS0_LC1G1D2T_POSITION                         0x3
#define _CLC1GLS0_LC1G1D2T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D2T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D2T_MASK                             0x8
#define _CLC1GLS0_LC1G1D3N_POSN                             0x4
#define _CLC1GLS0_LC1G1D3N_POSITION                         0x4
#define _CLC1GLS0_LC1G1D3N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D3N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D3N_MASK                             0x10
#define _CLC1GLS0_LC1G1D3T_POSN                             0x5
#define _CLC1GLS0_LC1G1D3T_POSITION                         0x5
#define _CLC1GLS0_LC1G1D3T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D3T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D3T_MASK                             0x20
#define _CLC1GLS0_LC1G1D4N_POSN                             0x6
#define _CLC1GLS0_LC1G1D4N_POSITION                         0x6
#define _CLC1GLS0_LC1G1D4N_SIZE                             0x1
#define _CLC1GLS0_LC1G1D4N_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D4N_MASK                             0x40
#define _CLC1GLS0_LC1G1D4T_POSN                             0x7
#define _CLC1GLS0_LC1G1D4T_POSITION                         0x7
#define _CLC1GLS0_LC1G1D4T_SIZE                             0x1
#define _CLC1GLS0_LC1G1D4T_LENGTH                           0x1
#define _CLC1GLS0_LC1G1D4T_MASK                             0x80
#define _CLC1GLS0_D1N_POSN                                  0x0
#define _CLC1GLS0_D1N_POSITION                              0x0
#define _CLC1GLS0_D1N_SIZE                                  0x1
#define _CLC1GLS0_D1N_LENGTH                                0x1
#define _CLC1GLS0_D1N_MASK                                  0x1
#define _CLC1GLS0_D1T_POSN                                  0x1
#define _CLC1GLS0_D1T_POSITION                              0x1
#define _CLC1GLS0_D1T_SIZE                                  0x1
#define _CLC1GLS0_D1T_LENGTH                                0x1
#define _CLC1GLS0_D1T_MASK                                  0x2
#define _CLC1GLS0_D2N_POSN                                  0x2
#define _CLC1GLS0_D2N_POSITION                              0x2
#define _CLC1GLS0_D2N_SIZE                                  0x1
#define _CLC1GLS0_D2N_LENGTH                                0x1
#define _CLC1GLS0_D2N_MASK                                  0x4
#define _CLC1GLS0_D2T_POSN                                  0x3
#define _CLC1GLS0_D2T_POSITION                              0x3
#define _CLC1GLS0_D2T_SIZE                                  0x1
#define _CLC1GLS0_D2T_LENGTH                                0x1
#define _CLC1GLS0_D2T_MASK                                  0x8
#define _CLC1GLS0_D3N_POSN                                  0x4
#define _CLC1GLS0_D3N_POSITION                              0x4
#define _CLC1GLS0_D3N_SIZE                                  0x1
#define _CLC1GLS0_D3N_LENGTH                                0x1
#define _CLC1GLS0_D3N_MASK                                  0x10
#define _CLC1GLS0_D3T_POSN                                  0x5
#define _CLC1GLS0_D3T_POSITION                              0x5
#define _CLC1GLS0_D3T_SIZE                                  0x1
#define _CLC1GLS0_D3T_LENGTH                                0x1
#define _CLC1GLS0_D3T_MASK                                  0x20
#define _CLC1GLS0_D4N_POSN                                  0x6
#define _CLC1GLS0_D4N_POSITION                              0x6
#define _CLC1GLS0_D4N_SIZE                                  0x1
#define _CLC1GLS0_D4N_LENGTH                                0x1
#define _CLC1GLS0_D4N_MASK                                  0x40
#define _CLC1GLS0_D4T_POSN                                  0x7
#define _CLC1GLS0_D4T_POSITION                              0x7
#define _CLC1GLS0_D4T_SIZE                                  0x1
#define _CLC1GLS0_D4T_LENGTH                                0x1
#define _CLC1GLS0_D4T_MASK                                  0x80

// Register: CLC1GLS1
#define CLC1GLS1 CLC1GLS1
extern volatile unsigned char           CLC1GLS1            __at(0xF17);
#ifndef _LIB_BUILD
asm("CLC1GLS1 equ 0F17h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G2D1N               :1;
        unsigned LC1G2D1T               :1;
        unsigned LC1G2D2N               :1;
        unsigned LC1G2D2T               :1;
        unsigned LC1G2D3N               :1;
        unsigned LC1G2D3T               :1;
        unsigned LC1G2D4N               :1;
        unsigned LC1G2D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS1bits_t;
extern volatile CLC1GLS1bits_t CLC1GLS1bits __at(0xF17);
// bitfield macros
#define _CLC1GLS1_LC1G2D1N_POSN                             0x0
#define _CLC1GLS1_LC1G2D1N_POSITION                         0x0
#define _CLC1GLS1_LC1G2D1N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D1N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D1N_MASK                             0x1
#define _CLC1GLS1_LC1G2D1T_POSN                             0x1
#define _CLC1GLS1_LC1G2D1T_POSITION                         0x1
#define _CLC1GLS1_LC1G2D1T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D1T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D1T_MASK                             0x2
#define _CLC1GLS1_LC1G2D2N_POSN                             0x2
#define _CLC1GLS1_LC1G2D2N_POSITION                         0x2
#define _CLC1GLS1_LC1G2D2N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D2N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D2N_MASK                             0x4
#define _CLC1GLS1_LC1G2D2T_POSN                             0x3
#define _CLC1GLS1_LC1G2D2T_POSITION                         0x3
#define _CLC1GLS1_LC1G2D2T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D2T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D2T_MASK                             0x8
#define _CLC1GLS1_LC1G2D3N_POSN                             0x4
#define _CLC1GLS1_LC1G2D3N_POSITION                         0x4
#define _CLC1GLS1_LC1G2D3N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D3N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D3N_MASK                             0x10
#define _CLC1GLS1_LC1G2D3T_POSN                             0x5
#define _CLC1GLS1_LC1G2D3T_POSITION                         0x5
#define _CLC1GLS1_LC1G2D3T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D3T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D3T_MASK                             0x20
#define _CLC1GLS1_LC1G2D4N_POSN                             0x6
#define _CLC1GLS1_LC1G2D4N_POSITION                         0x6
#define _CLC1GLS1_LC1G2D4N_SIZE                             0x1
#define _CLC1GLS1_LC1G2D4N_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D4N_MASK                             0x40
#define _CLC1GLS1_LC1G2D4T_POSN                             0x7
#define _CLC1GLS1_LC1G2D4T_POSITION                         0x7
#define _CLC1GLS1_LC1G2D4T_SIZE                             0x1
#define _CLC1GLS1_LC1G2D4T_LENGTH                           0x1
#define _CLC1GLS1_LC1G2D4T_MASK                             0x80
#define _CLC1GLS1_D1N_POSN                                  0x0
#define _CLC1GLS1_D1N_POSITION                              0x0
#define _CLC1GLS1_D1N_SIZE                                  0x1
#define _CLC1GLS1_D1N_LENGTH                                0x1
#define _CLC1GLS1_D1N_MASK                                  0x1
#define _CLC1GLS1_D1T_POSN                                  0x1
#define _CLC1GLS1_D1T_POSITION                              0x1
#define _CLC1GLS1_D1T_SIZE                                  0x1
#define _CLC1GLS1_D1T_LENGTH                                0x1
#define _CLC1GLS1_D1T_MASK                                  0x2
#define _CLC1GLS1_D2N_POSN                                  0x2
#define _CLC1GLS1_D2N_POSITION                              0x2
#define _CLC1GLS1_D2N_SIZE                                  0x1
#define _CLC1GLS1_D2N_LENGTH                                0x1
#define _CLC1GLS1_D2N_MASK                                  0x4
#define _CLC1GLS1_D2T_POSN                                  0x3
#define _CLC1GLS1_D2T_POSITION                              0x3
#define _CLC1GLS1_D2T_SIZE                                  0x1
#define _CLC1GLS1_D2T_LENGTH                                0x1
#define _CLC1GLS1_D2T_MASK                                  0x8
#define _CLC1GLS1_D3N_POSN                                  0x4
#define _CLC1GLS1_D3N_POSITION                              0x4
#define _CLC1GLS1_D3N_SIZE                                  0x1
#define _CLC1GLS1_D3N_LENGTH                                0x1
#define _CLC1GLS1_D3N_MASK                                  0x10
#define _CLC1GLS1_D3T_POSN                                  0x5
#define _CLC1GLS1_D3T_POSITION                              0x5
#define _CLC1GLS1_D3T_SIZE                                  0x1
#define _CLC1GLS1_D3T_LENGTH                                0x1
#define _CLC1GLS1_D3T_MASK                                  0x20
#define _CLC1GLS1_D4N_POSN                                  0x6
#define _CLC1GLS1_D4N_POSITION                              0x6
#define _CLC1GLS1_D4N_SIZE                                  0x1
#define _CLC1GLS1_D4N_LENGTH                                0x1
#define _CLC1GLS1_D4N_MASK                                  0x40
#define _CLC1GLS1_D4T_POSN                                  0x7
#define _CLC1GLS1_D4T_POSITION                              0x7
#define _CLC1GLS1_D4T_SIZE                                  0x1
#define _CLC1GLS1_D4T_LENGTH                                0x1
#define _CLC1GLS1_D4T_MASK                                  0x80

// Register: CLC1GLS2
#define CLC1GLS2 CLC1GLS2
extern volatile unsigned char           CLC1GLS2            __at(0xF18);
#ifndef _LIB_BUILD
asm("CLC1GLS2 equ 0F18h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G3D1N               :1;
        unsigned LC1G3D1T               :1;
        unsigned LC1G3D2N               :1;
        unsigned LC1G3D2T               :1;
        unsigned LC1G3D3N               :1;
        unsigned LC1G3D3T               :1;
        unsigned LC1G3D4N               :1;
        unsigned LC1G3D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC1GLS2bits_t;
extern volatile CLC1GLS2bits_t CLC1GLS2bits __at(0xF18);
// bitfield macros
#define _CLC1GLS2_LC1G3D1N_POSN                             0x0
#define _CLC1GLS2_LC1G3D1N_POSITION                         0x0
#define _CLC1GLS2_LC1G3D1N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D1N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D1N_MASK                             0x1
#define _CLC1GLS2_LC1G3D1T_POSN                             0x1
#define _CLC1GLS2_LC1G3D1T_POSITION                         0x1
#define _CLC1GLS2_LC1G3D1T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D1T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D1T_MASK                             0x2
#define _CLC1GLS2_LC1G3D2N_POSN                             0x2
#define _CLC1GLS2_LC1G3D2N_POSITION                         0x2
#define _CLC1GLS2_LC1G3D2N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D2N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D2N_MASK                             0x4
#define _CLC1GLS2_LC1G3D2T_POSN                             0x3
#define _CLC1GLS2_LC1G3D2T_POSITION                         0x3
#define _CLC1GLS2_LC1G3D2T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D2T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D2T_MASK                             0x8
#define _CLC1GLS2_LC1G3D3N_POSN                             0x4
#define _CLC1GLS2_LC1G3D3N_POSITION                         0x4
#define _CLC1GLS2_LC1G3D3N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D3N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D3N_MASK                             0x10
#define _CLC1GLS2_LC1G3D3T_POSN                             0x5
#define _CLC1GLS2_LC1G3D3T_POSITION                         0x5
#define _CLC1GLS2_LC1G3D3T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D3T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D3T_MASK                             0x20
#define _CLC1GLS2_LC1G3D4N_POSN                             0x6
#define _CLC1GLS2_LC1G3D4N_POSITION                         0x6
#define _CLC1GLS2_LC1G3D4N_SIZE                             0x1
#define _CLC1GLS2_LC1G3D4N_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D4N_MASK                             0x40
#define _CLC1GLS2_LC1G3D4T_POSN                             0x7
#define _CLC1GLS2_LC1G3D4T_POSITION                         0x7
#define _CLC1GLS2_LC1G3D4T_SIZE                             0x1
#define _CLC1GLS2_LC1G3D4T_LENGTH                           0x1
#define _CLC1GLS2_LC1G3D4T_MASK                             0x80
#define _CLC1GLS2_D1N_POSN                                  0x0
#define _CLC1GLS2_D1N_POSITION                              0x0
#define _CLC1GLS2_D1N_SIZE                                  0x1
#define _CLC1GLS2_D1N_LENGTH                                0x1
#define _CLC1GLS2_D1N_MASK                                  0x1
#define _CLC1GLS2_D1T_POSN                                  0x1
#define _CLC1GLS2_D1T_POSITION                              0x1
#define _CLC1GLS2_D1T_SIZE                                  0x1
#define _CLC1GLS2_D1T_LENGTH                                0x1
#define _CLC1GLS2_D1T_MASK                                  0x2
#define _CLC1GLS2_D2N_POSN                                  0x2
#define _CLC1GLS2_D2N_POSITION                              0x2
#define _CLC1GLS2_D2N_SIZE                                  0x1
#define _CLC1GLS2_D2N_LENGTH                                0x1
#define _CLC1GLS2_D2N_MASK                                  0x4
#define _CLC1GLS2_D2T_POSN                                  0x3
#define _CLC1GLS2_D2T_POSITION                              0x3
#define _CLC1GLS2_D2T_SIZE                                  0x1
#define _CLC1GLS2_D2T_LENGTH                                0x1
#define _CLC1GLS2_D2T_MASK                                  0x8
#define _CLC1GLS2_D3N_POSN                                  0x4
#define _CLC1GLS2_D3N_POSITION                              0x4
#define _CLC1GLS2_D3N_SIZE                                  0x1
#define _CLC1GLS2_D3N_LENGTH                                0x1
#define _CLC1GLS2_D3N_MASK                                  0x10
#define _CLC1GLS2_D3T_POSN                                  0x5
#define _CLC1GLS2_D3T_POSITION                              0x5
#define _CLC1GLS2_D3T_SIZE                                  0x1
#define _CLC1GLS2_D3T_LENGTH                                0x1
#define _CLC1GLS2_D3T_MASK                                  0x20
#define _CLC1GLS2_D4N_POSN                                  0x6
#define _CLC1GLS2_D4N_POSITION                              0x6
#define _CLC1GLS2_D4N_SIZE                                  0x1
#define _CLC1GLS2_D4N_LENGTH                                0x1
#define _CLC1GLS2_D4N_MASK                                  0x40
#define _CLC1GLS2_D4T_POSN                                  0x7
#define _CLC1GLS2_D4T_POSITION                              0x7
#define _CLC1GLS2_D4T_SIZE                                  0x1
#define _CLC1GLS2_D4T_LENGTH                                0x1
#define _CLC1GLS2_D4T_MASK                                  0x80

// Register: CLC1GLS3
#define CLC1GLS3 CLC1GLS3
extern volatile unsigned char           CLC1GLS3            __at(0xF19);
#ifndef _LIB_BUILD
asm("CLC1GLS3 equ 0F19h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC1G4D1N               :1;
        unsigned LC1G4D1T               :1;
        unsigned LC1G4D2N               :1;
        unsigned LC1G4D2T               :1;
        unsigned LC1G4D3N               :1;
        unsigned LC1G4D3T               :1;
        unsigned LC1G4D4N               :1;
        unsigned LC1G4D4T               :1;
    };
    struct {
        unsigned G4D1N                  :1;
        unsigned G4D1T                  :1;
        unsigned G4D2N                  :1;
        unsigned G4D2T                  :1;
        unsigned G4D3N                  :1;
        unsigned G4D3T                  :1;
        unsigned G4D4N                  :1;
        unsigned G4D4T                  :1;
    };
} CLC1GLS3bits_t;
extern volatile CLC1GLS3bits_t CLC1GLS3bits __at(0xF19);
// bitfield macros
#define _CLC1GLS3_LC1G4D1N_POSN                             0x0
#define _CLC1GLS3_LC1G4D1N_POSITION                         0x0
#define _CLC1GLS3_LC1G4D1N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D1N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D1N_MASK                             0x1
#define _CLC1GLS3_LC1G4D1T_POSN                             0x1
#define _CLC1GLS3_LC1G4D1T_POSITION                         0x1
#define _CLC1GLS3_LC1G4D1T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D1T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D1T_MASK                             0x2
#define _CLC1GLS3_LC1G4D2N_POSN                             0x2
#define _CLC1GLS3_LC1G4D2N_POSITION                         0x2
#define _CLC1GLS3_LC1G4D2N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D2N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D2N_MASK                             0x4
#define _CLC1GLS3_LC1G4D2T_POSN                             0x3
#define _CLC1GLS3_LC1G4D2T_POSITION                         0x3
#define _CLC1GLS3_LC1G4D2T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D2T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D2T_MASK                             0x8
#define _CLC1GLS3_LC1G4D3N_POSN                             0x4
#define _CLC1GLS3_LC1G4D3N_POSITION                         0x4
#define _CLC1GLS3_LC1G4D3N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D3N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D3N_MASK                             0x10
#define _CLC1GLS3_LC1G4D3T_POSN                             0x5
#define _CLC1GLS3_LC1G4D3T_POSITION                         0x5
#define _CLC1GLS3_LC1G4D3T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D3T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D3T_MASK                             0x20
#define _CLC1GLS3_LC1G4D4N_POSN                             0x6
#define _CLC1GLS3_LC1G4D4N_POSITION                         0x6
#define _CLC1GLS3_LC1G4D4N_SIZE                             0x1
#define _CLC1GLS3_LC1G4D4N_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D4N_MASK                             0x40
#define _CLC1GLS3_LC1G4D4T_POSN                             0x7
#define _CLC1GLS3_LC1G4D4T_POSITION                         0x7
#define _CLC1GLS3_LC1G4D4T_SIZE                             0x1
#define _CLC1GLS3_LC1G4D4T_LENGTH                           0x1
#define _CLC1GLS3_LC1G4D4T_MASK                             0x80
#define _CLC1GLS3_G4D1N_POSN                                0x0
#define _CLC1GLS3_G4D1N_POSITION                            0x0
#define _CLC1GLS3_G4D1N_SIZE                                0x1
#define _CLC1GLS3_G4D1N_LENGTH                              0x1
#define _CLC1GLS3_G4D1N_MASK                                0x1
#define _CLC1GLS3_G4D1T_POSN                                0x1
#define _CLC1GLS3_G4D1T_POSITION                            0x1
#define _CLC1GLS3_G4D1T_SIZE                                0x1
#define _CLC1GLS3_G4D1T_LENGTH                              0x1
#define _CLC1GLS3_G4D1T_MASK                                0x2
#define _CLC1GLS3_G4D2N_POSN                                0x2
#define _CLC1GLS3_G4D2N_POSITION                            0x2
#define _CLC1GLS3_G4D2N_SIZE                                0x1
#define _CLC1GLS3_G4D2N_LENGTH                              0x1
#define _CLC1GLS3_G4D2N_MASK                                0x4
#define _CLC1GLS3_G4D2T_POSN                                0x3
#define _CLC1GLS3_G4D2T_POSITION                            0x3
#define _CLC1GLS3_G4D2T_SIZE                                0x1
#define _CLC1GLS3_G4D2T_LENGTH                              0x1
#define _CLC1GLS3_G4D2T_MASK                                0x8
#define _CLC1GLS3_G4D3N_POSN                                0x4
#define _CLC1GLS3_G4D3N_POSITION                            0x4
#define _CLC1GLS3_G4D3N_SIZE                                0x1
#define _CLC1GLS3_G4D3N_LENGTH                              0x1
#define _CLC1GLS3_G4D3N_MASK                                0x10
#define _CLC1GLS3_G4D3T_POSN                                0x5
#define _CLC1GLS3_G4D3T_POSITION                            0x5
#define _CLC1GLS3_G4D3T_SIZE                                0x1
#define _CLC1GLS3_G4D3T_LENGTH                              0x1
#define _CLC1GLS3_G4D3T_MASK                                0x20
#define _CLC1GLS3_G4D4N_POSN                                0x6
#define _CLC1GLS3_G4D4N_POSITION                            0x6
#define _CLC1GLS3_G4D4N_SIZE                                0x1
#define _CLC1GLS3_G4D4N_LENGTH                              0x1
#define _CLC1GLS3_G4D4N_MASK                                0x40
#define _CLC1GLS3_G4D4T_POSN                                0x7
#define _CLC1GLS3_G4D4T_POSITION                            0x7
#define _CLC1GLS3_G4D4T_SIZE                                0x1
#define _CLC1GLS3_G4D4T_LENGTH                              0x1
#define _CLC1GLS3_G4D4T_MASK                                0x80

// Register: CLC2CON
#define CLC2CON CLC2CON
extern volatile unsigned char           CLC2CON             __at(0xF1A);
#ifndef _LIB_BUILD
asm("CLC2CON equ 0F1Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2MODE                :3;
        unsigned LC2INTN                :1;
        unsigned LC2INTP                :1;
        unsigned LC2OUT                 :1;
        unsigned                        :1;
        unsigned LC2EN                  :1;
    };
    struct {
        unsigned LC2MODE0               :1;
        unsigned LC2MODE1               :1;
        unsigned LC2MODE2               :1;
    };
    struct {
        unsigned MODE                   :3;
        unsigned INTN                   :1;
        unsigned INTP                   :1;
        unsigned OUT                    :1;
        unsigned                        :1;
        unsigned EN                     :1;
    };
    struct {
        unsigned MODE0                  :1;
        unsigned MODE1                  :1;
        unsigned MODE2                  :1;
    };
} CLC2CONbits_t;
extern volatile CLC2CONbits_t CLC2CONbits __at(0xF1A);
// bitfield macros
#define _CLC2CON_LC2MODE_POSN                               0x0
#define _CLC2CON_LC2MODE_POSITION                           0x0
#define _CLC2CON_LC2MODE_SIZE                               0x3
#define _CLC2CON_LC2MODE_LENGTH                             0x3
#define _CLC2CON_LC2MODE_MASK                               0x7
#define _CLC2CON_LC2INTN_POSN                               0x3
#define _CLC2CON_LC2INTN_POSITION                           0x3
#define _CLC2CON_LC2INTN_SIZE                               0x1
#define _CLC2CON_LC2INTN_LENGTH                             0x1
#define _CLC2CON_LC2INTN_MASK                               0x8
#define _CLC2CON_LC2INTP_POSN                               0x4
#define _CLC2CON_LC2INTP_POSITION                           0x4
#define _CLC2CON_LC2INTP_SIZE                               0x1
#define _CLC2CON_LC2INTP_LENGTH                             0x1
#define _CLC2CON_LC2INTP_MASK                               0x10
#define _CLC2CON_LC2OUT_POSN                                0x5
#define _CLC2CON_LC2OUT_POSITION                            0x5
#define _CLC2CON_LC2OUT_SIZE                                0x1
#define _CLC2CON_LC2OUT_LENGTH                              0x1
#define _CLC2CON_LC2OUT_MASK                                0x20
#define _CLC2CON_LC2EN_POSN                                 0x7
#define _CLC2CON_LC2EN_POSITION                             0x7
#define _CLC2CON_LC2EN_SIZE                                 0x1
#define _CLC2CON_LC2EN_LENGTH                               0x1
#define _CLC2CON_LC2EN_MASK                                 0x80
#define _CLC2CON_LC2MODE0_POSN                              0x0
#define _CLC2CON_LC2MODE0_POSITION                          0x0
#define _CLC2CON_LC2MODE0_SIZE                              0x1
#define _CLC2CON_LC2MODE0_LENGTH                            0x1
#define _CLC2CON_LC2MODE0_MASK                              0x1
#define _CLC2CON_LC2MODE1_POSN                              0x1
#define _CLC2CON_LC2MODE1_POSITION                          0x1
#define _CLC2CON_LC2MODE1_SIZE                              0x1
#define _CLC2CON_LC2MODE1_LENGTH                            0x1
#define _CLC2CON_LC2MODE1_MASK                              0x2
#define _CLC2CON_LC2MODE2_POSN                              0x2
#define _CLC2CON_LC2MODE2_POSITION                          0x2
#define _CLC2CON_LC2MODE2_SIZE                              0x1
#define _CLC2CON_LC2MODE2_LENGTH                            0x1
#define _CLC2CON_LC2MODE2_MASK                              0x4
#define _CLC2CON_MODE_POSN                                  0x0
#define _CLC2CON_MODE_POSITION                              0x0
#define _CLC2CON_MODE_SIZE                                  0x3
#define _CLC2CON_MODE_LENGTH                                0x3
#define _CLC2CON_MODE_MASK                                  0x7
#define _CLC2CON_INTN_POSN                                  0x3
#define _CLC2CON_INTN_POSITION                              0x3
#define _CLC2CON_INTN_SIZE                                  0x1
#define _CLC2CON_INTN_LENGTH                                0x1
#define _CLC2CON_INTN_MASK                                  0x8
#define _CLC2CON_INTP_POSN                                  0x4
#define _CLC2CON_INTP_POSITION                              0x4
#define _CLC2CON_INTP_SIZE                                  0x1
#define _CLC2CON_INTP_LENGTH                                0x1
#define _CLC2CON_INTP_MASK                                  0x10
#define _CLC2CON_OUT_POSN                                   0x5
#define _CLC2CON_OUT_POSITION                               0x5
#define _CLC2CON_OUT_SIZE                                   0x1
#define _CLC2CON_OUT_LENGTH                                 0x1
#define _CLC2CON_OUT_MASK                                   0x20
#define _CLC2CON_EN_POSN                                    0x7
#define _CLC2CON_EN_POSITION                                0x7
#define _CLC2CON_EN_SIZE                                    0x1
#define _CLC2CON_EN_LENGTH                                  0x1
#define _CLC2CON_EN_MASK                                    0x80
#define _CLC2CON_MODE0_POSN                                 0x0
#define _CLC2CON_MODE0_POSITION                             0x0
#define _CLC2CON_MODE0_SIZE                                 0x1
#define _CLC2CON_MODE0_LENGTH                               0x1
#define _CLC2CON_MODE0_MASK                                 0x1
#define _CLC2CON_MODE1_POSN                                 0x1
#define _CLC2CON_MODE1_POSITION                             0x1
#define _CLC2CON_MODE1_SIZE                                 0x1
#define _CLC2CON_MODE1_LENGTH                               0x1
#define _CLC2CON_MODE1_MASK                                 0x2
#define _CLC2CON_MODE2_POSN                                 0x2
#define _CLC2CON_MODE2_POSITION                             0x2
#define _CLC2CON_MODE2_SIZE                                 0x1
#define _CLC2CON_MODE2_LENGTH                               0x1
#define _CLC2CON_MODE2_MASK                                 0x4

// Register: CLC2POL
#define CLC2POL CLC2POL
extern volatile unsigned char           CLC2POL             __at(0xF1B);
#ifndef _LIB_BUILD
asm("CLC2POL equ 0F1Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G1POL               :1;
        unsigned LC2G2POL               :1;
        unsigned LC2G3POL               :1;
        unsigned LC2G4POL               :1;
        unsigned                        :3;
        unsigned LC2POL                 :1;
    };
    struct {
        unsigned G1POL                  :1;
        unsigned G2POL                  :1;
        unsigned G3POL                  :1;
        unsigned G4POL                  :1;
        unsigned                        :3;
        unsigned POL                    :1;
    };
} CLC2POLbits_t;
extern volatile CLC2POLbits_t CLC2POLbits __at(0xF1B);
// bitfield macros
#define _CLC2POL_LC2G1POL_POSN                              0x0
#define _CLC2POL_LC2G1POL_POSITION                          0x0
#define _CLC2POL_LC2G1POL_SIZE                              0x1
#define _CLC2POL_LC2G1POL_LENGTH                            0x1
#define _CLC2POL_LC2G1POL_MASK                              0x1
#define _CLC2POL_LC2G2POL_POSN                              0x1
#define _CLC2POL_LC2G2POL_POSITION                          0x1
#define _CLC2POL_LC2G2POL_SIZE                              0x1
#define _CLC2POL_LC2G2POL_LENGTH                            0x1
#define _CLC2POL_LC2G2POL_MASK                              0x2
#define _CLC2POL_LC2G3POL_POSN                              0x2
#define _CLC2POL_LC2G3POL_POSITION                          0x2
#define _CLC2POL_LC2G3POL_SIZE                              0x1
#define _CLC2POL_LC2G3POL_LENGTH                            0x1
#define _CLC2POL_LC2G3POL_MASK                              0x4
#define _CLC2POL_LC2G4POL_POSN                              0x3
#define _CLC2POL_LC2G4POL_POSITION                          0x3
#define _CLC2POL_LC2G4POL_SIZE                              0x1
#define _CLC2POL_LC2G4POL_LENGTH                            0x1
#define _CLC2POL_LC2G4POL_MASK                              0x8
#define _CLC2POL_LC2POL_POSN                                0x7
#define _CLC2POL_LC2POL_POSITION                            0x7
#define _CLC2POL_LC2POL_SIZE                                0x1
#define _CLC2POL_LC2POL_LENGTH                              0x1
#define _CLC2POL_LC2POL_MASK                                0x80
#define _CLC2POL_G1POL_POSN                                 0x0
#define _CLC2POL_G1POL_POSITION                             0x0
#define _CLC2POL_G1POL_SIZE                                 0x1
#define _CLC2POL_G1POL_LENGTH                               0x1
#define _CLC2POL_G1POL_MASK                                 0x1
#define _CLC2POL_G2POL_POSN                                 0x1
#define _CLC2POL_G2POL_POSITION                             0x1
#define _CLC2POL_G2POL_SIZE                                 0x1
#define _CLC2POL_G2POL_LENGTH                               0x1
#define _CLC2POL_G2POL_MASK                                 0x2
#define _CLC2POL_G3POL_POSN                                 0x2
#define _CLC2POL_G3POL_POSITION                             0x2
#define _CLC2POL_G3POL_SIZE                                 0x1
#define _CLC2POL_G3POL_LENGTH                               0x1
#define _CLC2POL_G3POL_MASK                                 0x4
#define _CLC2POL_G4POL_POSN                                 0x3
#define _CLC2POL_G4POL_POSITION                             0x3
#define _CLC2POL_G4POL_SIZE                                 0x1
#define _CLC2POL_G4POL_LENGTH                               0x1
#define _CLC2POL_G4POL_MASK                                 0x8
#define _CLC2POL_POL_POSN                                   0x7
#define _CLC2POL_POL_POSITION                               0x7
#define _CLC2POL_POL_SIZE                                   0x1
#define _CLC2POL_POL_LENGTH                                 0x1
#define _CLC2POL_POL_MASK                                   0x80

// Register: CLC2SEL0
#define CLC2SEL0 CLC2SEL0
extern volatile unsigned char           CLC2SEL0            __at(0xF1C);
#ifndef _LIB_BUILD
asm("CLC2SEL0 equ 0F1Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2D1S0                :1;
        unsigned LC2D1S1                :1;
        unsigned LC2D1S2                :1;
        unsigned LC2D1S3                :1;
        unsigned LC2D1S4                :1;
    };
    struct {
        unsigned LC2D1S                 :8;
    };
    struct {
        unsigned D1S                    :8;
    };
    struct {
        unsigned D1S0                   :1;
        unsigned D1S1                   :1;
        unsigned D1S2                   :1;
        unsigned D1S3                   :1;
        unsigned D1S4                   :1;
    };
} CLC2SEL0bits_t;
extern volatile CLC2SEL0bits_t CLC2SEL0bits __at(0xF1C);
// bitfield macros
#define _CLC2SEL0_LC2D1S0_POSN                              0x0
#define _CLC2SEL0_LC2D1S0_POSITION                          0x0
#define _CLC2SEL0_LC2D1S0_SIZE                              0x1
#define _CLC2SEL0_LC2D1S0_LENGTH                            0x1
#define _CLC2SEL0_LC2D1S0_MASK                              0x1
#define _CLC2SEL0_LC2D1S1_POSN                              0x1
#define _CLC2SEL0_LC2D1S1_POSITION                          0x1
#define _CLC2SEL0_LC2D1S1_SIZE                              0x1
#define _CLC2SEL0_LC2D1S1_LENGTH                            0x1
#define _CLC2SEL0_LC2D1S1_MASK                              0x2
#define _CLC2SEL0_LC2D1S2_POSN                              0x2
#define _CLC2SEL0_LC2D1S2_POSITION                          0x2
#define _CLC2SEL0_LC2D1S2_SIZE                              0x1
#define _CLC2SEL0_LC2D1S2_LENGTH                            0x1
#define _CLC2SEL0_LC2D1S2_MASK                              0x4
#define _CLC2SEL0_LC2D1S3_POSN                              0x3
#define _CLC2SEL0_LC2D1S3_POSITION                          0x3
#define _CLC2SEL0_LC2D1S3_SIZE                              0x1
#define _CLC2SEL0_LC2D1S3_LENGTH                            0x1
#define _CLC2SEL0_LC2D1S3_MASK                              0x8
#define _CLC2SEL0_LC2D1S4_POSN                              0x4
#define _CLC2SEL0_LC2D1S4_POSITION                          0x4
#define _CLC2SEL0_LC2D1S4_SIZE                              0x1
#define _CLC2SEL0_LC2D1S4_LENGTH                            0x1
#define _CLC2SEL0_LC2D1S4_MASK                              0x10
#define _CLC2SEL0_LC2D1S_POSN                               0x0
#define _CLC2SEL0_LC2D1S_POSITION                           0x0
#define _CLC2SEL0_LC2D1S_SIZE                               0x8
#define _CLC2SEL0_LC2D1S_LENGTH                             0x8
#define _CLC2SEL0_LC2D1S_MASK                               0xFF
#define _CLC2SEL0_D1S_POSN                                  0x0
#define _CLC2SEL0_D1S_POSITION                              0x0
#define _CLC2SEL0_D1S_SIZE                                  0x8
#define _CLC2SEL0_D1S_LENGTH                                0x8
#define _CLC2SEL0_D1S_MASK                                  0xFF
#define _CLC2SEL0_D1S0_POSN                                 0x0
#define _CLC2SEL0_D1S0_POSITION                             0x0
#define _CLC2SEL0_D1S0_SIZE                                 0x1
#define _CLC2SEL0_D1S0_LENGTH                               0x1
#define _CLC2SEL0_D1S0_MASK                                 0x1
#define _CLC2SEL0_D1S1_POSN                                 0x1
#define _CLC2SEL0_D1S1_POSITION                             0x1
#define _CLC2SEL0_D1S1_SIZE                                 0x1
#define _CLC2SEL0_D1S1_LENGTH                               0x1
#define _CLC2SEL0_D1S1_MASK                                 0x2
#define _CLC2SEL0_D1S2_POSN                                 0x2
#define _CLC2SEL0_D1S2_POSITION                             0x2
#define _CLC2SEL0_D1S2_SIZE                                 0x1
#define _CLC2SEL0_D1S2_LENGTH                               0x1
#define _CLC2SEL0_D1S2_MASK                                 0x4
#define _CLC2SEL0_D1S3_POSN                                 0x3
#define _CLC2SEL0_D1S3_POSITION                             0x3
#define _CLC2SEL0_D1S3_SIZE                                 0x1
#define _CLC2SEL0_D1S3_LENGTH                               0x1
#define _CLC2SEL0_D1S3_MASK                                 0x8
#define _CLC2SEL0_D1S4_POSN                                 0x4
#define _CLC2SEL0_D1S4_POSITION                             0x4
#define _CLC2SEL0_D1S4_SIZE                                 0x1
#define _CLC2SEL0_D1S4_LENGTH                               0x1
#define _CLC2SEL0_D1S4_MASK                                 0x10

// Register: CLC2SEL1
#define CLC2SEL1 CLC2SEL1
extern volatile unsigned char           CLC2SEL1            __at(0xF1D);
#ifndef _LIB_BUILD
asm("CLC2SEL1 equ 0F1Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2D2S0                :1;
        unsigned LC2D2S1                :1;
        unsigned LC2D2S2                :1;
        unsigned LC2D2S3                :1;
        unsigned LC2D2S4                :1;
    };
    struct {
        unsigned LC2D2S                 :8;
    };
    struct {
        unsigned D2S                    :8;
    };
    struct {
        unsigned D2S0                   :1;
        unsigned D2S1                   :1;
        unsigned D2S2                   :1;
        unsigned D2S3                   :1;
        unsigned D2S4                   :1;
    };
} CLC2SEL1bits_t;
extern volatile CLC2SEL1bits_t CLC2SEL1bits __at(0xF1D);
// bitfield macros
#define _CLC2SEL1_LC2D2S0_POSN                              0x0
#define _CLC2SEL1_LC2D2S0_POSITION                          0x0
#define _CLC2SEL1_LC2D2S0_SIZE                              0x1
#define _CLC2SEL1_LC2D2S0_LENGTH                            0x1
#define _CLC2SEL1_LC2D2S0_MASK                              0x1
#define _CLC2SEL1_LC2D2S1_POSN                              0x1
#define _CLC2SEL1_LC2D2S1_POSITION                          0x1
#define _CLC2SEL1_LC2D2S1_SIZE                              0x1
#define _CLC2SEL1_LC2D2S1_LENGTH                            0x1
#define _CLC2SEL1_LC2D2S1_MASK                              0x2
#define _CLC2SEL1_LC2D2S2_POSN                              0x2
#define _CLC2SEL1_LC2D2S2_POSITION                          0x2
#define _CLC2SEL1_LC2D2S2_SIZE                              0x1
#define _CLC2SEL1_LC2D2S2_LENGTH                            0x1
#define _CLC2SEL1_LC2D2S2_MASK                              0x4
#define _CLC2SEL1_LC2D2S3_POSN                              0x3
#define _CLC2SEL1_LC2D2S3_POSITION                          0x3
#define _CLC2SEL1_LC2D2S3_SIZE                              0x1
#define _CLC2SEL1_LC2D2S3_LENGTH                            0x1
#define _CLC2SEL1_LC2D2S3_MASK                              0x8
#define _CLC2SEL1_LC2D2S4_POSN                              0x4
#define _CLC2SEL1_LC2D2S4_POSITION                          0x4
#define _CLC2SEL1_LC2D2S4_SIZE                              0x1
#define _CLC2SEL1_LC2D2S4_LENGTH                            0x1
#define _CLC2SEL1_LC2D2S4_MASK                              0x10
#define _CLC2SEL1_LC2D2S_POSN                               0x0
#define _CLC2SEL1_LC2D2S_POSITION                           0x0
#define _CLC2SEL1_LC2D2S_SIZE                               0x8
#define _CLC2SEL1_LC2D2S_LENGTH                             0x8
#define _CLC2SEL1_LC2D2S_MASK                               0xFF
#define _CLC2SEL1_D2S_POSN                                  0x0
#define _CLC2SEL1_D2S_POSITION                              0x0
#define _CLC2SEL1_D2S_SIZE                                  0x8
#define _CLC2SEL1_D2S_LENGTH                                0x8
#define _CLC2SEL1_D2S_MASK                                  0xFF
#define _CLC2SEL1_D2S0_POSN                                 0x0
#define _CLC2SEL1_D2S0_POSITION                             0x0
#define _CLC2SEL1_D2S0_SIZE                                 0x1
#define _CLC2SEL1_D2S0_LENGTH                               0x1
#define _CLC2SEL1_D2S0_MASK                                 0x1
#define _CLC2SEL1_D2S1_POSN                                 0x1
#define _CLC2SEL1_D2S1_POSITION                             0x1
#define _CLC2SEL1_D2S1_SIZE                                 0x1
#define _CLC2SEL1_D2S1_LENGTH                               0x1
#define _CLC2SEL1_D2S1_MASK                                 0x2
#define _CLC2SEL1_D2S2_POSN                                 0x2
#define _CLC2SEL1_D2S2_POSITION                             0x2
#define _CLC2SEL1_D2S2_SIZE                                 0x1
#define _CLC2SEL1_D2S2_LENGTH                               0x1
#define _CLC2SEL1_D2S2_MASK                                 0x4
#define _CLC2SEL1_D2S3_POSN                                 0x3
#define _CLC2SEL1_D2S3_POSITION                             0x3
#define _CLC2SEL1_D2S3_SIZE                                 0x1
#define _CLC2SEL1_D2S3_LENGTH                               0x1
#define _CLC2SEL1_D2S3_MASK                                 0x8
#define _CLC2SEL1_D2S4_POSN                                 0x4
#define _CLC2SEL1_D2S4_POSITION                             0x4
#define _CLC2SEL1_D2S4_SIZE                                 0x1
#define _CLC2SEL1_D2S4_LENGTH                               0x1
#define _CLC2SEL1_D2S4_MASK                                 0x10

// Register: CLC2SEL2
#define CLC2SEL2 CLC2SEL2
extern volatile unsigned char           CLC2SEL2            __at(0xF1E);
#ifndef _LIB_BUILD
asm("CLC2SEL2 equ 0F1Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2D3S0                :1;
        unsigned LC2D3S1                :1;
        unsigned LC2D3S2                :1;
        unsigned LC2D3S3                :1;
        unsigned LC2D3S4                :1;
    };
    struct {
        unsigned LC2D3S                 :8;
    };
    struct {
        unsigned D3S                    :8;
    };
    struct {
        unsigned D3S0                   :1;
        unsigned D3S1                   :1;
        unsigned D3S2                   :1;
        unsigned D3S3                   :1;
        unsigned D3S4                   :1;
    };
} CLC2SEL2bits_t;
extern volatile CLC2SEL2bits_t CLC2SEL2bits __at(0xF1E);
// bitfield macros
#define _CLC2SEL2_LC2D3S0_POSN                              0x0
#define _CLC2SEL2_LC2D3S0_POSITION                          0x0
#define _CLC2SEL2_LC2D3S0_SIZE                              0x1
#define _CLC2SEL2_LC2D3S0_LENGTH                            0x1
#define _CLC2SEL2_LC2D3S0_MASK                              0x1
#define _CLC2SEL2_LC2D3S1_POSN                              0x1
#define _CLC2SEL2_LC2D3S1_POSITION                          0x1
#define _CLC2SEL2_LC2D3S1_SIZE                              0x1
#define _CLC2SEL2_LC2D3S1_LENGTH                            0x1
#define _CLC2SEL2_LC2D3S1_MASK                              0x2
#define _CLC2SEL2_LC2D3S2_POSN                              0x2
#define _CLC2SEL2_LC2D3S2_POSITION                          0x2
#define _CLC2SEL2_LC2D3S2_SIZE                              0x1
#define _CLC2SEL2_LC2D3S2_LENGTH                            0x1
#define _CLC2SEL2_LC2D3S2_MASK                              0x4
#define _CLC2SEL2_LC2D3S3_POSN                              0x3
#define _CLC2SEL2_LC2D3S3_POSITION                          0x3
#define _CLC2SEL2_LC2D3S3_SIZE                              0x1
#define _CLC2SEL2_LC2D3S3_LENGTH                            0x1
#define _CLC2SEL2_LC2D3S3_MASK                              0x8
#define _CLC2SEL2_LC2D3S4_POSN                              0x4
#define _CLC2SEL2_LC2D3S4_POSITION                          0x4
#define _CLC2SEL2_LC2D3S4_SIZE                              0x1
#define _CLC2SEL2_LC2D3S4_LENGTH                            0x1
#define _CLC2SEL2_LC2D3S4_MASK                              0x10
#define _CLC2SEL2_LC2D3S_POSN                               0x0
#define _CLC2SEL2_LC2D3S_POSITION                           0x0
#define _CLC2SEL2_LC2D3S_SIZE                               0x8
#define _CLC2SEL2_LC2D3S_LENGTH                             0x8
#define _CLC2SEL2_LC2D3S_MASK                               0xFF
#define _CLC2SEL2_D3S_POSN                                  0x0
#define _CLC2SEL2_D3S_POSITION                              0x0
#define _CLC2SEL2_D3S_SIZE                                  0x8
#define _CLC2SEL2_D3S_LENGTH                                0x8
#define _CLC2SEL2_D3S_MASK                                  0xFF
#define _CLC2SEL2_D3S0_POSN                                 0x0
#define _CLC2SEL2_D3S0_POSITION                             0x0
#define _CLC2SEL2_D3S0_SIZE                                 0x1
#define _CLC2SEL2_D3S0_LENGTH                               0x1
#define _CLC2SEL2_D3S0_MASK                                 0x1
#define _CLC2SEL2_D3S1_POSN                                 0x1
#define _CLC2SEL2_D3S1_POSITION                             0x1
#define _CLC2SEL2_D3S1_SIZE                                 0x1
#define _CLC2SEL2_D3S1_LENGTH                               0x1
#define _CLC2SEL2_D3S1_MASK                                 0x2
#define _CLC2SEL2_D3S2_POSN                                 0x2
#define _CLC2SEL2_D3S2_POSITION                             0x2
#define _CLC2SEL2_D3S2_SIZE                                 0x1
#define _CLC2SEL2_D3S2_LENGTH                               0x1
#define _CLC2SEL2_D3S2_MASK                                 0x4
#define _CLC2SEL2_D3S3_POSN                                 0x3
#define _CLC2SEL2_D3S3_POSITION                             0x3
#define _CLC2SEL2_D3S3_SIZE                                 0x1
#define _CLC2SEL2_D3S3_LENGTH                               0x1
#define _CLC2SEL2_D3S3_MASK                                 0x8
#define _CLC2SEL2_D3S4_POSN                                 0x4
#define _CLC2SEL2_D3S4_POSITION                             0x4
#define _CLC2SEL2_D3S4_SIZE                                 0x1
#define _CLC2SEL2_D3S4_LENGTH                               0x1
#define _CLC2SEL2_D3S4_MASK                                 0x10

// Register: CLC2SEL3
#define CLC2SEL3 CLC2SEL3
extern volatile unsigned char           CLC2SEL3            __at(0xF1F);
#ifndef _LIB_BUILD
asm("CLC2SEL3 equ 0F1Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2D4S0                :1;
        unsigned LC2D4S1                :1;
        unsigned LC2D4S2                :1;
        unsigned LC2D4S3                :1;
        unsigned LC2D4S4                :1;
    };
    struct {
        unsigned LC2D4S                 :8;
    };
    struct {
        unsigned D4S                    :8;
    };
    struct {
        unsigned D4S0                   :1;
        unsigned D4S1                   :1;
        unsigned D4S2                   :1;
        unsigned D4S3                   :1;
        unsigned D4S4                   :1;
    };
} CLC2SEL3bits_t;
extern volatile CLC2SEL3bits_t CLC2SEL3bits __at(0xF1F);
// bitfield macros
#define _CLC2SEL3_LC2D4S0_POSN                              0x0
#define _CLC2SEL3_LC2D4S0_POSITION                          0x0
#define _CLC2SEL3_LC2D4S0_SIZE                              0x1
#define _CLC2SEL3_LC2D4S0_LENGTH                            0x1
#define _CLC2SEL3_LC2D4S0_MASK                              0x1
#define _CLC2SEL3_LC2D4S1_POSN                              0x1
#define _CLC2SEL3_LC2D4S1_POSITION                          0x1
#define _CLC2SEL3_LC2D4S1_SIZE                              0x1
#define _CLC2SEL3_LC2D4S1_LENGTH                            0x1
#define _CLC2SEL3_LC2D4S1_MASK                              0x2
#define _CLC2SEL3_LC2D4S2_POSN                              0x2
#define _CLC2SEL3_LC2D4S2_POSITION                          0x2
#define _CLC2SEL3_LC2D4S2_SIZE                              0x1
#define _CLC2SEL3_LC2D4S2_LENGTH                            0x1
#define _CLC2SEL3_LC2D4S2_MASK                              0x4
#define _CLC2SEL3_LC2D4S3_POSN                              0x3
#define _CLC2SEL3_LC2D4S3_POSITION                          0x3
#define _CLC2SEL3_LC2D4S3_SIZE                              0x1
#define _CLC2SEL3_LC2D4S3_LENGTH                            0x1
#define _CLC2SEL3_LC2D4S3_MASK                              0x8
#define _CLC2SEL3_LC2D4S4_POSN                              0x4
#define _CLC2SEL3_LC2D4S4_POSITION                          0x4
#define _CLC2SEL3_LC2D4S4_SIZE                              0x1
#define _CLC2SEL3_LC2D4S4_LENGTH                            0x1
#define _CLC2SEL3_LC2D4S4_MASK                              0x10
#define _CLC2SEL3_LC2D4S_POSN                               0x0
#define _CLC2SEL3_LC2D4S_POSITION                           0x0
#define _CLC2SEL3_LC2D4S_SIZE                               0x8
#define _CLC2SEL3_LC2D4S_LENGTH                             0x8
#define _CLC2SEL3_LC2D4S_MASK                               0xFF
#define _CLC2SEL3_D4S_POSN                                  0x0
#define _CLC2SEL3_D4S_POSITION                              0x0
#define _CLC2SEL3_D4S_SIZE                                  0x8
#define _CLC2SEL3_D4S_LENGTH                                0x8
#define _CLC2SEL3_D4S_MASK                                  0xFF
#define _CLC2SEL3_D4S0_POSN                                 0x0
#define _CLC2SEL3_D4S0_POSITION                             0x0
#define _CLC2SEL3_D4S0_SIZE                                 0x1
#define _CLC2SEL3_D4S0_LENGTH                               0x1
#define _CLC2SEL3_D4S0_MASK                                 0x1
#define _CLC2SEL3_D4S1_POSN                                 0x1
#define _CLC2SEL3_D4S1_POSITION                             0x1
#define _CLC2SEL3_D4S1_SIZE                                 0x1
#define _CLC2SEL3_D4S1_LENGTH                               0x1
#define _CLC2SEL3_D4S1_MASK                                 0x2
#define _CLC2SEL3_D4S2_POSN                                 0x2
#define _CLC2SEL3_D4S2_POSITION                             0x2
#define _CLC2SEL3_D4S2_SIZE                                 0x1
#define _CLC2SEL3_D4S2_LENGTH                               0x1
#define _CLC2SEL3_D4S2_MASK                                 0x4
#define _CLC2SEL3_D4S3_POSN                                 0x3
#define _CLC2SEL3_D4S3_POSITION                             0x3
#define _CLC2SEL3_D4S3_SIZE                                 0x1
#define _CLC2SEL3_D4S3_LENGTH                               0x1
#define _CLC2SEL3_D4S3_MASK                                 0x8
#define _CLC2SEL3_D4S4_POSN                                 0x4
#define _CLC2SEL3_D4S4_POSITION                             0x4
#define _CLC2SEL3_D4S4_SIZE                                 0x1
#define _CLC2SEL3_D4S4_LENGTH                               0x1
#define _CLC2SEL3_D4S4_MASK                                 0x10

// Register: CLC2GLS0
#define CLC2GLS0 CLC2GLS0
extern volatile unsigned char           CLC2GLS0            __at(0xF20);
#ifndef _LIB_BUILD
asm("CLC2GLS0 equ 0F20h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G1D1N               :1;
        unsigned LC2G1D1T               :1;
        unsigned LC2G1D2N               :1;
        unsigned LC2G1D2T               :1;
        unsigned LC2G1D3N               :1;
        unsigned LC2G1D3T               :1;
        unsigned LC2G1D4N               :1;
        unsigned LC2G1D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC2GLS0bits_t;
extern volatile CLC2GLS0bits_t CLC2GLS0bits __at(0xF20);
// bitfield macros
#define _CLC2GLS0_LC2G1D1N_POSN                             0x0
#define _CLC2GLS0_LC2G1D1N_POSITION                         0x0
#define _CLC2GLS0_LC2G1D1N_SIZE                             0x1
#define _CLC2GLS0_LC2G1D1N_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D1N_MASK                             0x1
#define _CLC2GLS0_LC2G1D1T_POSN                             0x1
#define _CLC2GLS0_LC2G1D1T_POSITION                         0x1
#define _CLC2GLS0_LC2G1D1T_SIZE                             0x1
#define _CLC2GLS0_LC2G1D1T_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D1T_MASK                             0x2
#define _CLC2GLS0_LC2G1D2N_POSN                             0x2
#define _CLC2GLS0_LC2G1D2N_POSITION                         0x2
#define _CLC2GLS0_LC2G1D2N_SIZE                             0x1
#define _CLC2GLS0_LC2G1D2N_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D2N_MASK                             0x4
#define _CLC2GLS0_LC2G1D2T_POSN                             0x3
#define _CLC2GLS0_LC2G1D2T_POSITION                         0x3
#define _CLC2GLS0_LC2G1D2T_SIZE                             0x1
#define _CLC2GLS0_LC2G1D2T_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D2T_MASK                             0x8
#define _CLC2GLS0_LC2G1D3N_POSN                             0x4
#define _CLC2GLS0_LC2G1D3N_POSITION                         0x4
#define _CLC2GLS0_LC2G1D3N_SIZE                             0x1
#define _CLC2GLS0_LC2G1D3N_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D3N_MASK                             0x10
#define _CLC2GLS0_LC2G1D3T_POSN                             0x5
#define _CLC2GLS0_LC2G1D3T_POSITION                         0x5
#define _CLC2GLS0_LC2G1D3T_SIZE                             0x1
#define _CLC2GLS0_LC2G1D3T_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D3T_MASK                             0x20
#define _CLC2GLS0_LC2G1D4N_POSN                             0x6
#define _CLC2GLS0_LC2G1D4N_POSITION                         0x6
#define _CLC2GLS0_LC2G1D4N_SIZE                             0x1
#define _CLC2GLS0_LC2G1D4N_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D4N_MASK                             0x40
#define _CLC2GLS0_LC2G1D4T_POSN                             0x7
#define _CLC2GLS0_LC2G1D4T_POSITION                         0x7
#define _CLC2GLS0_LC2G1D4T_SIZE                             0x1
#define _CLC2GLS0_LC2G1D4T_LENGTH                           0x1
#define _CLC2GLS0_LC2G1D4T_MASK                             0x80
#define _CLC2GLS0_D1N_POSN                                  0x0
#define _CLC2GLS0_D1N_POSITION                              0x0
#define _CLC2GLS0_D1N_SIZE                                  0x1
#define _CLC2GLS0_D1N_LENGTH                                0x1
#define _CLC2GLS0_D1N_MASK                                  0x1
#define _CLC2GLS0_D1T_POSN                                  0x1
#define _CLC2GLS0_D1T_POSITION                              0x1
#define _CLC2GLS0_D1T_SIZE                                  0x1
#define _CLC2GLS0_D1T_LENGTH                                0x1
#define _CLC2GLS0_D1T_MASK                                  0x2
#define _CLC2GLS0_D2N_POSN                                  0x2
#define _CLC2GLS0_D2N_POSITION                              0x2
#define _CLC2GLS0_D2N_SIZE                                  0x1
#define _CLC2GLS0_D2N_LENGTH                                0x1
#define _CLC2GLS0_D2N_MASK                                  0x4
#define _CLC2GLS0_D2T_POSN                                  0x3
#define _CLC2GLS0_D2T_POSITION                              0x3
#define _CLC2GLS0_D2T_SIZE                                  0x1
#define _CLC2GLS0_D2T_LENGTH                                0x1
#define _CLC2GLS0_D2T_MASK                                  0x8
#define _CLC2GLS0_D3N_POSN                                  0x4
#define _CLC2GLS0_D3N_POSITION                              0x4
#define _CLC2GLS0_D3N_SIZE                                  0x1
#define _CLC2GLS0_D3N_LENGTH                                0x1
#define _CLC2GLS0_D3N_MASK                                  0x10
#define _CLC2GLS0_D3T_POSN                                  0x5
#define _CLC2GLS0_D3T_POSITION                              0x5
#define _CLC2GLS0_D3T_SIZE                                  0x1
#define _CLC2GLS0_D3T_LENGTH                                0x1
#define _CLC2GLS0_D3T_MASK                                  0x20
#define _CLC2GLS0_D4N_POSN                                  0x6
#define _CLC2GLS0_D4N_POSITION                              0x6
#define _CLC2GLS0_D4N_SIZE                                  0x1
#define _CLC2GLS0_D4N_LENGTH                                0x1
#define _CLC2GLS0_D4N_MASK                                  0x40
#define _CLC2GLS0_D4T_POSN                                  0x7
#define _CLC2GLS0_D4T_POSITION                              0x7
#define _CLC2GLS0_D4T_SIZE                                  0x1
#define _CLC2GLS0_D4T_LENGTH                                0x1
#define _CLC2GLS0_D4T_MASK                                  0x80

// Register: CLC2GLS1
#define CLC2GLS1 CLC2GLS1
extern volatile unsigned char           CLC2GLS1            __at(0xF21);
#ifndef _LIB_BUILD
asm("CLC2GLS1 equ 0F21h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G2D1N               :1;
        unsigned LC2G2D1T               :1;
        unsigned LC2G2D2N               :1;
        unsigned LC2G2D2T               :1;
        unsigned LC2G2D3N               :1;
        unsigned LC2G2D3T               :1;
        unsigned LC2G2D4N               :1;
        unsigned LC2G2D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC2GLS1bits_t;
extern volatile CLC2GLS1bits_t CLC2GLS1bits __at(0xF21);
// bitfield macros
#define _CLC2GLS1_LC2G2D1N_POSN                             0x0
#define _CLC2GLS1_LC2G2D1N_POSITION                         0x0
#define _CLC2GLS1_LC2G2D1N_SIZE                             0x1
#define _CLC2GLS1_LC2G2D1N_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D1N_MASK                             0x1
#define _CLC2GLS1_LC2G2D1T_POSN                             0x1
#define _CLC2GLS1_LC2G2D1T_POSITION                         0x1
#define _CLC2GLS1_LC2G2D1T_SIZE                             0x1
#define _CLC2GLS1_LC2G2D1T_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D1T_MASK                             0x2
#define _CLC2GLS1_LC2G2D2N_POSN                             0x2
#define _CLC2GLS1_LC2G2D2N_POSITION                         0x2
#define _CLC2GLS1_LC2G2D2N_SIZE                             0x1
#define _CLC2GLS1_LC2G2D2N_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D2N_MASK                             0x4
#define _CLC2GLS1_LC2G2D2T_POSN                             0x3
#define _CLC2GLS1_LC2G2D2T_POSITION                         0x3
#define _CLC2GLS1_LC2G2D2T_SIZE                             0x1
#define _CLC2GLS1_LC2G2D2T_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D2T_MASK                             0x8
#define _CLC2GLS1_LC2G2D3N_POSN                             0x4
#define _CLC2GLS1_LC2G2D3N_POSITION                         0x4
#define _CLC2GLS1_LC2G2D3N_SIZE                             0x1
#define _CLC2GLS1_LC2G2D3N_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D3N_MASK                             0x10
#define _CLC2GLS1_LC2G2D3T_POSN                             0x5
#define _CLC2GLS1_LC2G2D3T_POSITION                         0x5
#define _CLC2GLS1_LC2G2D3T_SIZE                             0x1
#define _CLC2GLS1_LC2G2D3T_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D3T_MASK                             0x20
#define _CLC2GLS1_LC2G2D4N_POSN                             0x6
#define _CLC2GLS1_LC2G2D4N_POSITION                         0x6
#define _CLC2GLS1_LC2G2D4N_SIZE                             0x1
#define _CLC2GLS1_LC2G2D4N_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D4N_MASK                             0x40
#define _CLC2GLS1_LC2G2D4T_POSN                             0x7
#define _CLC2GLS1_LC2G2D4T_POSITION                         0x7
#define _CLC2GLS1_LC2G2D4T_SIZE                             0x1
#define _CLC2GLS1_LC2G2D4T_LENGTH                           0x1
#define _CLC2GLS1_LC2G2D4T_MASK                             0x80
#define _CLC2GLS1_D1N_POSN                                  0x0
#define _CLC2GLS1_D1N_POSITION                              0x0
#define _CLC2GLS1_D1N_SIZE                                  0x1
#define _CLC2GLS1_D1N_LENGTH                                0x1
#define _CLC2GLS1_D1N_MASK                                  0x1
#define _CLC2GLS1_D1T_POSN                                  0x1
#define _CLC2GLS1_D1T_POSITION                              0x1
#define _CLC2GLS1_D1T_SIZE                                  0x1
#define _CLC2GLS1_D1T_LENGTH                                0x1
#define _CLC2GLS1_D1T_MASK                                  0x2
#define _CLC2GLS1_D2N_POSN                                  0x2
#define _CLC2GLS1_D2N_POSITION                              0x2
#define _CLC2GLS1_D2N_SIZE                                  0x1
#define _CLC2GLS1_D2N_LENGTH                                0x1
#define _CLC2GLS1_D2N_MASK                                  0x4
#define _CLC2GLS1_D2T_POSN                                  0x3
#define _CLC2GLS1_D2T_POSITION                              0x3
#define _CLC2GLS1_D2T_SIZE                                  0x1
#define _CLC2GLS1_D2T_LENGTH                                0x1
#define _CLC2GLS1_D2T_MASK                                  0x8
#define _CLC2GLS1_D3N_POSN                                  0x4
#define _CLC2GLS1_D3N_POSITION                              0x4
#define _CLC2GLS1_D3N_SIZE                                  0x1
#define _CLC2GLS1_D3N_LENGTH                                0x1
#define _CLC2GLS1_D3N_MASK                                  0x10
#define _CLC2GLS1_D3T_POSN                                  0x5
#define _CLC2GLS1_D3T_POSITION                              0x5
#define _CLC2GLS1_D3T_SIZE                                  0x1
#define _CLC2GLS1_D3T_LENGTH                                0x1
#define _CLC2GLS1_D3T_MASK                                  0x20
#define _CLC2GLS1_D4N_POSN                                  0x6
#define _CLC2GLS1_D4N_POSITION                              0x6
#define _CLC2GLS1_D4N_SIZE                                  0x1
#define _CLC2GLS1_D4N_LENGTH                                0x1
#define _CLC2GLS1_D4N_MASK                                  0x40
#define _CLC2GLS1_D4T_POSN                                  0x7
#define _CLC2GLS1_D4T_POSITION                              0x7
#define _CLC2GLS1_D4T_SIZE                                  0x1
#define _CLC2GLS1_D4T_LENGTH                                0x1
#define _CLC2GLS1_D4T_MASK                                  0x80

// Register: CLC2GLS2
#define CLC2GLS2 CLC2GLS2
extern volatile unsigned char           CLC2GLS2            __at(0xF22);
#ifndef _LIB_BUILD
asm("CLC2GLS2 equ 0F22h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G3D1N               :1;
        unsigned LC2G3D1T               :1;
        unsigned LC2G3D2N               :1;
        unsigned LC2G3D2T               :1;
        unsigned LC2G3D3N               :1;
        unsigned LC2G3D3T               :1;
        unsigned LC2G3D4N               :1;
        unsigned LC2G3D4T               :1;
    };
    struct {
        unsigned D1N                    :1;
        unsigned D1T                    :1;
        unsigned D2N                    :1;
        unsigned D2T                    :1;
        unsigned D3N                    :1;
        unsigned D3T                    :1;
        unsigned D4N                    :1;
        unsigned D4T                    :1;
    };
} CLC2GLS2bits_t;
extern volatile CLC2GLS2bits_t CLC2GLS2bits __at(0xF22);
// bitfield macros
#define _CLC2GLS2_LC2G3D1N_POSN                             0x0
#define _CLC2GLS2_LC2G3D1N_POSITION                         0x0
#define _CLC2GLS2_LC2G3D1N_SIZE                             0x1
#define _CLC2GLS2_LC2G3D1N_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D1N_MASK                             0x1
#define _CLC2GLS2_LC2G3D1T_POSN                             0x1
#define _CLC2GLS2_LC2G3D1T_POSITION                         0x1
#define _CLC2GLS2_LC2G3D1T_SIZE                             0x1
#define _CLC2GLS2_LC2G3D1T_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D1T_MASK                             0x2
#define _CLC2GLS2_LC2G3D2N_POSN                             0x2
#define _CLC2GLS2_LC2G3D2N_POSITION                         0x2
#define _CLC2GLS2_LC2G3D2N_SIZE                             0x1
#define _CLC2GLS2_LC2G3D2N_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D2N_MASK                             0x4
#define _CLC2GLS2_LC2G3D2T_POSN                             0x3
#define _CLC2GLS2_LC2G3D2T_POSITION                         0x3
#define _CLC2GLS2_LC2G3D2T_SIZE                             0x1
#define _CLC2GLS2_LC2G3D2T_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D2T_MASK                             0x8
#define _CLC2GLS2_LC2G3D3N_POSN                             0x4
#define _CLC2GLS2_LC2G3D3N_POSITION                         0x4
#define _CLC2GLS2_LC2G3D3N_SIZE                             0x1
#define _CLC2GLS2_LC2G3D3N_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D3N_MASK                             0x10
#define _CLC2GLS2_LC2G3D3T_POSN                             0x5
#define _CLC2GLS2_LC2G3D3T_POSITION                         0x5
#define _CLC2GLS2_LC2G3D3T_SIZE                             0x1
#define _CLC2GLS2_LC2G3D3T_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D3T_MASK                             0x20
#define _CLC2GLS2_LC2G3D4N_POSN                             0x6
#define _CLC2GLS2_LC2G3D4N_POSITION                         0x6
#define _CLC2GLS2_LC2G3D4N_SIZE                             0x1
#define _CLC2GLS2_LC2G3D4N_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D4N_MASK                             0x40
#define _CLC2GLS2_LC2G3D4T_POSN                             0x7
#define _CLC2GLS2_LC2G3D4T_POSITION                         0x7
#define _CLC2GLS2_LC2G3D4T_SIZE                             0x1
#define _CLC2GLS2_LC2G3D4T_LENGTH                           0x1
#define _CLC2GLS2_LC2G3D4T_MASK                             0x80
#define _CLC2GLS2_D1N_POSN                                  0x0
#define _CLC2GLS2_D1N_POSITION                              0x0
#define _CLC2GLS2_D1N_SIZE                                  0x1
#define _CLC2GLS2_D1N_LENGTH                                0x1
#define _CLC2GLS2_D1N_MASK                                  0x1
#define _CLC2GLS2_D1T_POSN                                  0x1
#define _CLC2GLS2_D1T_POSITION                              0x1
#define _CLC2GLS2_D1T_SIZE                                  0x1
#define _CLC2GLS2_D1T_LENGTH                                0x1
#define _CLC2GLS2_D1T_MASK                                  0x2
#define _CLC2GLS2_D2N_POSN                                  0x2
#define _CLC2GLS2_D2N_POSITION                              0x2
#define _CLC2GLS2_D2N_SIZE                                  0x1
#define _CLC2GLS2_D2N_LENGTH                                0x1
#define _CLC2GLS2_D2N_MASK                                  0x4
#define _CLC2GLS2_D2T_POSN                                  0x3
#define _CLC2GLS2_D2T_POSITION                              0x3
#define _CLC2GLS2_D2T_SIZE                                  0x1
#define _CLC2GLS2_D2T_LENGTH                                0x1
#define _CLC2GLS2_D2T_MASK                                  0x8
#define _CLC2GLS2_D3N_POSN                                  0x4
#define _CLC2GLS2_D3N_POSITION                              0x4
#define _CLC2GLS2_D3N_SIZE                                  0x1
#define _CLC2GLS2_D3N_LENGTH                                0x1
#define _CLC2GLS2_D3N_MASK                                  0x10
#define _CLC2GLS2_D3T_POSN                                  0x5
#define _CLC2GLS2_D3T_POSITION                              0x5
#define _CLC2GLS2_D3T_SIZE                                  0x1
#define _CLC2GLS2_D3T_LENGTH                                0x1
#define _CLC2GLS2_D3T_MASK                                  0x20
#define _CLC2GLS2_D4N_POSN                                  0x6
#define _CLC2GLS2_D4N_POSITION                              0x6
#define _CLC2GLS2_D4N_SIZE                                  0x1
#define _CLC2GLS2_D4N_LENGTH                                0x1
#define _CLC2GLS2_D4N_MASK                                  0x40
#define _CLC2GLS2_D4T_POSN                                  0x7
#define _CLC2GLS2_D4T_POSITION                              0x7
#define _CLC2GLS2_D4T_SIZE                                  0x1
#define _CLC2GLS2_D4T_LENGTH                                0x1
#define _CLC2GLS2_D4T_MASK                                  0x80

// Register: CLC2GLS3
#define CLC2GLS3 CLC2GLS3
extern volatile unsigned char           CLC2GLS3            __at(0xF23);
#ifndef _LIB_BUILD
asm("CLC2GLS3 equ 0F23h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LC2G4D1N               :1;
        unsigned LC2G4D1T               :1;
        unsigned LC2G4D2N               :1;
        unsigned LC2G4D2T               :1;
        unsigned LC2G4D3N               :1;
        unsigned LC2G4D3T               :1;
        unsigned LC2G4D4N               :1;
        unsigned LC2G4D4T               :1;
    };
    struct {
        unsigned G4D1N                  :1;
        unsigned G4D1T                  :1;
        unsigned G4D2N                  :1;
        unsigned G4D2T                  :1;
        unsigned G4D3N                  :1;
        unsigned G4D3T                  :1;
        unsigned G4D4N                  :1;
        unsigned G4D4T                  :1;
    };
} CLC2GLS3bits_t;
extern volatile CLC2GLS3bits_t CLC2GLS3bits __at(0xF23);
// bitfield macros
#define _CLC2GLS3_LC2G4D1N_POSN                             0x0
#define _CLC2GLS3_LC2G4D1N_POSITION                         0x0
#define _CLC2GLS3_LC2G4D1N_SIZE                             0x1
#define _CLC2GLS3_LC2G4D1N_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D1N_MASK                             0x1
#define _CLC2GLS3_LC2G4D1T_POSN                             0x1
#define _CLC2GLS3_LC2G4D1T_POSITION                         0x1
#define _CLC2GLS3_LC2G4D1T_SIZE                             0x1
#define _CLC2GLS3_LC2G4D1T_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D1T_MASK                             0x2
#define _CLC2GLS3_LC2G4D2N_POSN                             0x2
#define _CLC2GLS3_LC2G4D2N_POSITION                         0x2
#define _CLC2GLS3_LC2G4D2N_SIZE                             0x1
#define _CLC2GLS3_LC2G4D2N_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D2N_MASK                             0x4
#define _CLC2GLS3_LC2G4D2T_POSN                             0x3
#define _CLC2GLS3_LC2G4D2T_POSITION                         0x3
#define _CLC2GLS3_LC2G4D2T_SIZE                             0x1
#define _CLC2GLS3_LC2G4D2T_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D2T_MASK                             0x8
#define _CLC2GLS3_LC2G4D3N_POSN                             0x4
#define _CLC2GLS3_LC2G4D3N_POSITION                         0x4
#define _CLC2GLS3_LC2G4D3N_SIZE                             0x1
#define _CLC2GLS3_LC2G4D3N_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D3N_MASK                             0x10
#define _CLC2GLS3_LC2G4D3T_POSN                             0x5
#define _CLC2GLS3_LC2G4D3T_POSITION                         0x5
#define _CLC2GLS3_LC2G4D3T_SIZE                             0x1
#define _CLC2GLS3_LC2G4D3T_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D3T_MASK                             0x20
#define _CLC2GLS3_LC2G4D4N_POSN                             0x6
#define _CLC2GLS3_LC2G4D4N_POSITION                         0x6
#define _CLC2GLS3_LC2G4D4N_SIZE                             0x1
#define _CLC2GLS3_LC2G4D4N_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D4N_MASK                             0x40
#define _CLC2GLS3_LC2G4D4T_POSN                             0x7
#define _CLC2GLS3_LC2G4D4T_POSITION                         0x7
#define _CLC2GLS3_LC2G4D4T_SIZE                             0x1
#define _CLC2GLS3_LC2G4D4T_LENGTH                           0x1
#define _CLC2GLS3_LC2G4D4T_MASK                             0x80
#define _CLC2GLS3_G4D1N_POSN                                0x0
#define _CLC2GLS3_G4D1N_POSITION                            0x0
#define _CLC2GLS3_G4D1N_SIZE                                0x1
#define _CLC2GLS3_G4D1N_LENGTH                              0x1
#define _CLC2GLS3_G4D1N_MASK                                0x1
#define _CLC2GLS3_G4D1T_POSN                                0x1
#define _CLC2GLS3_G4D1T_POSITION                            0x1
#define _CLC2GLS3_G4D1T_SIZE                                0x1
#define _CLC2GLS3_G4D1T_LENGTH                              0x1
#define _CLC2GLS3_G4D1T_MASK                                0x2
#define _CLC2GLS3_G4D2N_POSN                                0x2
#define _CLC2GLS3_G4D2N_POSITION                            0x2
#define _CLC2GLS3_G4D2N_SIZE                                0x1
#define _CLC2GLS3_G4D2N_LENGTH                              0x1
#define _CLC2GLS3_G4D2N_MASK                                0x4
#define _CLC2GLS3_G4D2T_POSN                                0x3
#define _CLC2GLS3_G4D2T_POSITION                            0x3
#define _CLC2GLS3_G4D2T_SIZE                                0x1
#define _CLC2GLS3_G4D2T_LENGTH                              0x1
#define _CLC2GLS3_G4D2T_MASK                                0x8
#define _CLC2GLS3_G4D3N_POSN                                0x4
#define _CLC2GLS3_G4D3N_POSITION                            0x4
#define _CLC2GLS3_G4D3N_SIZE                                0x1
#define _CLC2GLS3_G4D3N_LENGTH                              0x1
#define _CLC2GLS3_G4D3N_MASK                                0x10
#define _CLC2GLS3_G4D3T_POSN                                0x5
#define _CLC2GLS3_G4D3T_POSITION                            0x5
#define _CLC2GLS3_G4D3T_SIZE                                0x1
#define _CLC2GLS3_G4D3T_LENGTH                              0x1
#define _CLC2GLS3_G4D3T_MASK                                0x20
#define _CLC2GLS3_G4D4N_POSN                                0x6
#define _CLC2GLS3_G4D4N_POSITION                            0x6
#define _CLC2GLS3_G4D4N_SIZE                                0x1
#define _CLC2GLS3_G4D4N_LENGTH                              0x1
#define _CLC2GLS3_G4D4N_MASK                                0x40
#define _CLC2GLS3_G4D4T_POSN                                0x7
#define _CLC2GLS3_G4D4T_POSITION                            0x7
#define _CLC2GLS3_G4D4T_SIZE                                0x1
#define _CLC2GLS3_G4D4T_LENGTH                              0x1
#define _CLC2GLS3_G4D4T_MASK                                0x80

// Register: STATUS_SHAD
#define STATUS_SHAD STATUS_SHAD
extern volatile unsigned char           STATUS_SHAD         __at(0xFE4);
#ifndef _LIB_BUILD
asm("STATUS_SHAD equ 0FE4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C_SHAD                 :1;
        unsigned DC_SHAD                :1;
        unsigned Z_SHAD                 :1;
    };
} STATUS_SHADbits_t;
extern volatile STATUS_SHADbits_t STATUS_SHADbits __at(0xFE4);
// bitfield macros
#define _STATUS_SHAD_C_SHAD_POSN                            0x0
#define _STATUS_SHAD_C_SHAD_POSITION                        0x0
#define _STATUS_SHAD_C_SHAD_SIZE                            0x1
#define _STATUS_SHAD_C_SHAD_LENGTH                          0x1
#define _STATUS_SHAD_C_SHAD_MASK                            0x1
#define _STATUS_SHAD_DC_SHAD_POSN                           0x1
#define _STATUS_SHAD_DC_SHAD_POSITION                       0x1
#define _STATUS_SHAD_DC_SHAD_SIZE                           0x1
#define _STATUS_SHAD_DC_SHAD_LENGTH                         0x1
#define _STATUS_SHAD_DC_SHAD_MASK                           0x2
#define _STATUS_SHAD_Z_SHAD_POSN                            0x2
#define _STATUS_SHAD_Z_SHAD_POSITION                        0x2
#define _STATUS_SHAD_Z_SHAD_SIZE                            0x1
#define _STATUS_SHAD_Z_SHAD_LENGTH                          0x1
#define _STATUS_SHAD_Z_SHAD_MASK                            0x4

// Register: WREG_SHAD
#define WREG_SHAD WREG_SHAD
extern volatile unsigned char           WREG_SHAD           __at(0xFE5);
#ifndef _LIB_BUILD
asm("WREG_SHAD equ 0FE5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG_SHAD              :8;
    };
} WREG_SHADbits_t;
extern volatile WREG_SHADbits_t WREG_SHADbits __at(0xFE5);
// bitfield macros
#define _WREG_SHAD_WREG_SHAD_POSN                           0x0
#define _WREG_SHAD_WREG_SHAD_POSITION                       0x0
#define _WREG_SHAD_WREG_SHAD_SIZE                           0x8
#define _WREG_SHAD_WREG_SHAD_LENGTH                         0x8
#define _WREG_SHAD_WREG_SHAD_MASK                           0xFF

// Register: BSR_SHAD
#define BSR_SHAD BSR_SHAD
extern volatile unsigned char           BSR_SHAD            __at(0xFE6);
#ifndef _LIB_BUILD
asm("BSR_SHAD equ 0FE6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR_SHAD               :5;
    };
} BSR_SHADbits_t;
extern volatile BSR_SHADbits_t BSR_SHADbits __at(0xFE6);
// bitfield macros
#define _BSR_SHAD_BSR_SHAD_POSN                             0x0
#define _BSR_SHAD_BSR_SHAD_POSITION                         0x0
#define _BSR_SHAD_BSR_SHAD_SIZE                             0x5
#define _BSR_SHAD_BSR_SHAD_LENGTH                           0x5
#define _BSR_SHAD_BSR_SHAD_MASK                             0x1F

// Register: PCLATH_SHAD
#define PCLATH_SHAD PCLATH_SHAD
extern volatile unsigned char           PCLATH_SHAD         __at(0xFE7);
#ifndef _LIB_BUILD
asm("PCLATH_SHAD equ 0FE7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH_SHAD            :7;
    };
} PCLATH_SHADbits_t;
extern volatile PCLATH_SHADbits_t PCLATH_SHADbits __at(0xFE7);
// bitfield macros
#define _PCLATH_SHAD_PCLATH_SHAD_POSN                       0x0
#define _PCLATH_SHAD_PCLATH_SHAD_POSITION                   0x0
#define _PCLATH_SHAD_PCLATH_SHAD_SIZE                       0x7
#define _PCLATH_SHAD_PCLATH_SHAD_LENGTH                     0x7
#define _PCLATH_SHAD_PCLATH_SHAD_MASK                       0x7F

// Register: FSR0L_SHAD
#define FSR0L_SHAD FSR0L_SHAD
extern volatile unsigned char           FSR0L_SHAD          __at(0xFE8);
#ifndef _LIB_BUILD
asm("FSR0L_SHAD equ 0FE8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0L_SHAD             :8;
    };
} FSR0L_SHADbits_t;
extern volatile FSR0L_SHADbits_t FSR0L_SHADbits __at(0xFE8);
// bitfield macros
#define _FSR0L_SHAD_FSR0L_SHAD_POSN                         0x0
#define _FSR0L_SHAD_FSR0L_SHAD_POSITION                     0x0
#define _FSR0L_SHAD_FSR0L_SHAD_SIZE                         0x8
#define _FSR0L_SHAD_FSR0L_SHAD_LENGTH                       0x8
#define _FSR0L_SHAD_FSR0L_SHAD_MASK                         0xFF

// Register: FSR0H_SHAD
#define FSR0H_SHAD FSR0H_SHAD
extern volatile unsigned char           FSR0H_SHAD          __at(0xFE9);
#ifndef _LIB_BUILD
asm("FSR0H_SHAD equ 0FE9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0H_SHAD             :8;
    };
} FSR0H_SHADbits_t;
extern volatile FSR0H_SHADbits_t FSR0H_SHADbits __at(0xFE9);
// bitfield macros
#define _FSR0H_SHAD_FSR0H_SHAD_POSN                         0x0
#define _FSR0H_SHAD_FSR0H_SHAD_POSITION                     0x0
#define _FSR0H_SHAD_FSR0H_SHAD_SIZE                         0x8
#define _FSR0H_SHAD_FSR0H_SHAD_LENGTH                       0x8
#define _FSR0H_SHAD_FSR0H_SHAD_MASK                         0xFF

// Register: FSR1L_SHAD
#define FSR1L_SHAD FSR1L_SHAD
extern volatile unsigned char           FSR1L_SHAD          __at(0xFEA);
#ifndef _LIB_BUILD
asm("FSR1L_SHAD equ 0FEAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1L_SHAD             :8;
    };
} FSR1L_SHADbits_t;
extern volatile FSR1L_SHADbits_t FSR1L_SHADbits __at(0xFEA);
// bitfield macros
#define _FSR1L_SHAD_FSR1L_SHAD_POSN                         0x0
#define _FSR1L_SHAD_FSR1L_SHAD_POSITION                     0x0
#define _FSR1L_SHAD_FSR1L_SHAD_SIZE                         0x8
#define _FSR1L_SHAD_FSR1L_SHAD_LENGTH                       0x8
#define _FSR1L_SHAD_FSR1L_SHAD_MASK                         0xFF

// Register: FSR1H_SHAD
#define FSR1H_SHAD FSR1H_SHAD
extern volatile unsigned char           FSR1H_SHAD          __at(0xFEB);
#ifndef _LIB_BUILD
asm("FSR1H_SHAD equ 0FEBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1H_SHAD             :8;
    };
} FSR1H_SHADbits_t;
extern volatile FSR1H_SHADbits_t FSR1H_SHADbits __at(0xFEB);
// bitfield macros
#define _FSR1H_SHAD_FSR1H_SHAD_POSN                         0x0
#define _FSR1H_SHAD_FSR1H_SHAD_POSITION                     0x0
#define _FSR1H_SHAD_FSR1H_SHAD_SIZE                         0x8
#define _FSR1H_SHAD_FSR1H_SHAD_LENGTH                       0x8
#define _FSR1H_SHAD_FSR1H_SHAD_MASK                         0xFF

// Register: STKPTR
#define STKPTR STKPTR
extern volatile unsigned char           STKPTR              __at(0xFED);
#ifndef _LIB_BUILD
asm("STKPTR equ 0FEDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR                 :5;
    };
} STKPTRbits_t;
extern volatile STKPTRbits_t STKPTRbits __at(0xFED);
// bitfield macros
#define _STKPTR_STKPTR_POSN                                 0x0
#define _STKPTR_STKPTR_POSITION                             0x0
#define _STKPTR_STKPTR_SIZE                                 0x5
#define _STKPTR_STKPTR_LENGTH                               0x5
#define _STKPTR_STKPTR_MASK                                 0x1F

// Register: TOSL
#define TOSL TOSL
extern volatile unsigned char           TOSL                __at(0xFEE);
#ifndef _LIB_BUILD
asm("TOSL equ 0FEEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSL                   :8;
    };
} TOSLbits_t;
extern volatile TOSLbits_t TOSLbits __at(0xFEE);
// bitfield macros
#define _TOSL_TOSL_POSN                                     0x0
#define _TOSL_TOSL_POSITION                                 0x0
#define _TOSL_TOSL_SIZE                                     0x8
#define _TOSL_TOSL_LENGTH                                   0x8
#define _TOSL_TOSL_MASK                                     0xFF

// Register: TOSH
#define TOSH TOSH
extern volatile unsigned char           TOSH                __at(0xFEF);
#ifndef _LIB_BUILD
asm("TOSH equ 0FEFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSH                   :7;
    };
} TOSHbits_t;
extern volatile TOSHbits_t TOSHbits __at(0xFEF);
// bitfield macros
#define _TOSH_TOSH_POSN                                     0x0
#define _TOSH_TOSH_POSITION                                 0x0
#define _TOSH_TOSH_SIZE                                     0x7
#define _TOSH_TOSH_LENGTH                                   0x7
#define _TOSH_TOSH_MASK                                     0x7F

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
extern volatile __bit                   ABDEN               __at(0xCF8);	// @ (0x19F * 8 + 0)
#define                                 ABDEN_bit           _BIT_ACCESS(BAUD1CON,0)
// BAUD1CON<ABDOVF>
extern volatile __bit                   ABDOVF              __at(0xCFF);	// @ (0x19F * 8 + 7)
#define                                 ABDOVF_bit          _BIT_ACCESS(BAUD1CON,7)
// SSP1CON2<ACKDT>
extern volatile __bit                   ACKDT               __at(0x10B5);	// @ (0x216 * 8 + 5)
#define                                 ACKDT_bit           _BIT_ACCESS(SSP1CON2,5)
// SSP1CON2<ACKEN>
extern volatile __bit                   ACKEN               __at(0x10B4);	// @ (0x216 * 8 + 4)
#define                                 ACKEN_bit           _BIT_ACCESS(SSP1CON2,4)
// SSP1CON2<ACKSTAT>
extern volatile __bit                   ACKSTAT             __at(0x10B6);	// @ (0x216 * 8 + 6)
#define                                 ACKSTAT_bit         _BIT_ACCESS(SSP1CON2,6)
// SSP1CON3<ACKTIM>
extern volatile __bit                   ACKTIM              __at(0x10BF);	// @ (0x217 * 8 + 7)
#define                                 ACKTIM_bit          _BIT_ACCESS(SSP1CON3,7)
// ADACT<ADACT0>
extern volatile __bit                   ADACT0              __at(0x4F8);	// @ (0x9F * 8 + 0)
#define                                 ADACT0_bit          _BIT_ACCESS(ADACT,0)
// ADACT<ADACT1>
extern volatile __bit                   ADACT1              __at(0x4F9);	// @ (0x9F * 8 + 1)
#define                                 ADACT1_bit          _BIT_ACCESS(ADACT,1)
// ADACT<ADACT2>
extern volatile __bit                   ADACT2              __at(0x4FA);	// @ (0x9F * 8 + 2)
#define                                 ADACT2_bit          _BIT_ACCESS(ADACT,2)
// ADACT<ADACT3>
extern volatile __bit                   ADACT3              __at(0x4FB);	// @ (0x9F * 8 + 3)
#define                                 ADACT3_bit          _BIT_ACCESS(ADACT,3)
// PMD2<ADCMD>
extern volatile __bit                   ADCMD               __at(0x489D);	// @ (0x913 * 8 + 5)
#define                                 ADCMD_bit           _BIT_ACCESS(PMD2,5)
// ADCON1<ADCS0>
extern volatile __bit                   ADCS0               __at(0x4F4);	// @ (0x9E * 8 + 4)
#define                                 ADCS0_bit           _BIT_ACCESS(ADCON1,4)
// ADCON1<ADCS1>
extern volatile __bit                   ADCS1               __at(0x4F5);	// @ (0x9E * 8 + 5)
#define                                 ADCS1_bit           _BIT_ACCESS(ADCON1,5)
// ADCON1<ADCS2>
extern volatile __bit                   ADCS2               __at(0x4F6);	// @ (0x9E * 8 + 6)
#define                                 ADCS2_bit           _BIT_ACCESS(ADCON1,6)
// SSP1ADD<ADD0>
extern volatile __bit                   ADD0                __at(0x1090);	// @ (0x212 * 8 + 0)
#define                                 ADD0_bit            _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<ADD1>
extern volatile __bit                   ADD1                __at(0x1091);	// @ (0x212 * 8 + 1)
#define                                 ADD1_bit            _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<ADD2>
extern volatile __bit                   ADD2                __at(0x1092);	// @ (0x212 * 8 + 2)
#define                                 ADD2_bit            _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<ADD3>
extern volatile __bit                   ADD3                __at(0x1093);	// @ (0x212 * 8 + 3)
#define                                 ADD3_bit            _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<ADD4>
extern volatile __bit                   ADD4                __at(0x1094);	// @ (0x212 * 8 + 4)
#define                                 ADD4_bit            _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<ADD5>
extern volatile __bit                   ADD5                __at(0x1095);	// @ (0x212 * 8 + 5)
#define                                 ADD5_bit            _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<ADD6>
extern volatile __bit                   ADD6                __at(0x1096);	// @ (0x212 * 8 + 6)
#define                                 ADD6_bit            _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<ADD7>
extern volatile __bit                   ADD7                __at(0x1097);	// @ (0x212 * 8 + 7)
#define                                 ADD7_bit            _BIT_ACCESS(SSP1ADD,7)
// RC1STA<ADDEN>
extern volatile __bit                   ADDEN               __at(0xCEB);	// @ (0x19D * 8 + 3)
#define                                 ADDEN_bit           _BIT_ACCESS(RC1STA,3)
// ADCON1<ADFM>
extern volatile __bit                   ADFM                __at(0x4F7);	// @ (0x9E * 8 + 7)
#define                                 ADFM_bit            _BIT_ACCESS(ADCON1,7)
// FVRCON<ADFVR0>
extern volatile __bit                   ADFVR0              __at(0x8B8);	// @ (0x117 * 8 + 0)
#define                                 ADFVR0_bit          _BIT_ACCESS(FVRCON,0)
// FVRCON<ADFVR1>
extern volatile __bit                   ADFVR1              __at(0x8B9);	// @ (0x117 * 8 + 1)
#define                                 ADFVR1_bit          _BIT_ACCESS(FVRCON,1)
// ADCON0<ADGO>
extern volatile __bit                   ADGO                __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 ADGO_bit            _BIT_ACCESS(ADCON0,1)
// PIE1<ADIE>
extern volatile __bit                   ADIE                __at(0x48E);	// @ (0x91 * 8 + 6)
#define                                 ADIE_bit            _BIT_ACCESS(PIE1,6)
// PIR1<ADIF>
extern volatile __bit                   ADIF                __at(0x8E);	// @ (0x11 * 8 + 6)
#define                                 ADIF_bit            _BIT_ACCESS(PIR1,6)
// ADCON1<ADNREF>
extern volatile __bit                   ADNREF              __at(0x4F2);	// @ (0x9E * 8 + 2)
#define                                 ADNREF_bit          _BIT_ACCESS(ADCON1,2)
// OSCEN<ADOEN>
extern volatile __bit                   ADOEN               __at(0x48EA);	// @ (0x91D * 8 + 2)
#define                                 ADOEN_bit           _BIT_ACCESS(OSCEN,2)
// ADCON0<ADON>
extern volatile __bit                   ADON                __at(0x4E8);	// @ (0x9D * 8 + 0)
#define                                 ADON_bit            _BIT_ACCESS(ADCON0,0)
// OSCSTAT1<ADOR>
extern volatile __bit                   ADOR                __at(0x48E2);	// @ (0x91C * 8 + 2)
#define                                 ADOR_bit            _BIT_ACCESS(OSCSTAT1,2)
// ADCON1<ADPREF0>
extern volatile __bit                   ADPREF0             __at(0x4F0);	// @ (0x9E * 8 + 0)
#define                                 ADPREF0_bit         _BIT_ACCESS(ADCON1,0)
// ADCON1<ADPREF1>
extern volatile __bit                   ADPREF1             __at(0x4F1);	// @ (0x9E * 8 + 1)
#define                                 ADPREF1_bit         _BIT_ACCESS(ADCON1,1)
// SSP1CON3<AHEN>
extern volatile __bit                   AHEN                __at(0x10B9);	// @ (0x217 * 8 + 1)
#define                                 AHEN_bit            _BIT_ACCESS(SSP1CON3,1)
// ANSELA<ANSA0>
extern volatile __bit                   ANSA0               __at(0xC60);	// @ (0x18C * 8 + 0)
#define                                 ANSA0_bit           _BIT_ACCESS(ANSELA,0)
// ANSELA<ANSA1>
extern volatile __bit                   ANSA1               __at(0xC61);	// @ (0x18C * 8 + 1)
#define                                 ANSA1_bit           _BIT_ACCESS(ANSELA,1)
// ANSELA<ANSA2>
extern volatile __bit                   ANSA2               __at(0xC62);	// @ (0x18C * 8 + 2)
#define                                 ANSA2_bit           _BIT_ACCESS(ANSELA,2)
// ANSELA<ANSA4>
extern volatile __bit                   ANSA4               __at(0xC64);	// @ (0x18C * 8 + 4)
#define                                 ANSA4_bit           _BIT_ACCESS(ANSELA,4)
// ANSELA<ANSA5>
extern volatile __bit                   ANSA5               __at(0xC65);	// @ (0x18C * 8 + 5)
#define                                 ANSA5_bit           _BIT_ACCESS(ANSELA,5)
// CWG1AS1<AS0E>
extern volatile __bit                   AS0E                __at(0x34C0);	// @ (0x698 * 8 + 0)
#define                                 AS0E_bit            _BIT_ACCESS(CWG1AS1,0)
// CWG1AS1<AS1E>
extern volatile __bit                   AS1E                __at(0x34C1);	// @ (0x698 * 8 + 1)
#define                                 AS1E_bit            _BIT_ACCESS(CWG1AS1,1)
// CWG1AS1<AS3E>
extern volatile __bit                   AS3E                __at(0x34C3);	// @ (0x698 * 8 + 3)
#define                                 AS3E_bit            _BIT_ACCESS(CWG1AS1,3)
// PIE1<BCL1IE>
extern volatile __bit                   BCL1IE              __at(0x48A);	// @ (0x91 * 8 + 2)
#define                                 BCL1IE_bit          _BIT_ACCESS(PIE1,2)
// PIR1<BCL1IF>
extern volatile __bit                   BCL1IF              __at(0x8A);	// @ (0x11 * 8 + 2)
#define                                 BCL1IF_bit          _BIT_ACCESS(PIR1,2)
// SSP1STAT<BF>
extern volatile __bit                   BF                  __at(0x10A0);	// @ (0x214 * 8 + 0)
#define                                 BF_bit              _BIT_ACCESS(SSP1STAT,0)
// SSP1CON3<BOEN>
extern volatile __bit                   BOEN                __at(0x10BC);	// @ (0x217 * 8 + 4)
#define                                 BOEN_bit            _BIT_ACCESS(SSP1CON3,4)
// BORCON<BORRDY>
extern volatile __bit                   BORRDY              __at(0x8B0);	// @ (0x116 * 8 + 0)
#define                                 BORRDY_bit          _BIT_ACCESS(BORCON,0)
// BAUD1CON<BRG16>
extern volatile __bit                   BRG16               __at(0xCFB);	// @ (0x19F * 8 + 3)
#define                                 BRG16_bit           _BIT_ACCESS(BAUD1CON,3)
// TX1STA<BRGH>
extern volatile __bit                   BRGH                __at(0xCF2);	// @ (0x19E * 8 + 2)
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
// SSP1BUF<BUF0>
extern volatile __bit                   BUF0                __at(0x1088);	// @ (0x211 * 8 + 0)
#define                                 BUF0_bit            _BIT_ACCESS(SSP1BUF,0)
// SSP1BUF<BUF1>
extern volatile __bit                   BUF1                __at(0x1089);	// @ (0x211 * 8 + 1)
#define                                 BUF1_bit            _BIT_ACCESS(SSP1BUF,1)
// SSP1BUF<BUF2>
extern volatile __bit                   BUF2                __at(0x108A);	// @ (0x211 * 8 + 2)
#define                                 BUF2_bit            _BIT_ACCESS(SSP1BUF,2)
// SSP1BUF<BUF3>
extern volatile __bit                   BUF3                __at(0x108B);	// @ (0x211 * 8 + 3)
#define                                 BUF3_bit            _BIT_ACCESS(SSP1BUF,3)
// SSP1BUF<BUF4>
extern volatile __bit                   BUF4                __at(0x108C);	// @ (0x211 * 8 + 4)
#define                                 BUF4_bit            _BIT_ACCESS(SSP1BUF,4)
// SSP1BUF<BUF5>
extern volatile __bit                   BUF5                __at(0x108D);	// @ (0x211 * 8 + 5)
#define                                 BUF5_bit            _BIT_ACCESS(SSP1BUF,5)
// SSP1BUF<BUF6>
extern volatile __bit                   BUF6                __at(0x108E);	// @ (0x211 * 8 + 6)
#define                                 BUF6_bit            _BIT_ACCESS(SSP1BUF,6)
// SSP1BUF<BUF7>
extern volatile __bit                   BUF7                __at(0x108F);	// @ (0x211 * 8 + 7)
#define                                 BUF7_bit            _BIT_ACCESS(SSP1BUF,7)
// CM1CON0<C1HYS>
extern volatile __bit                   C1HYS               __at(0x889);	// @ (0x111 * 8 + 1)
#define                                 C1HYS_bit           _BIT_ACCESS(CM1CON0,1)
// PIE2<C1IE>
extern volatile __bit                   C1IE                __at(0x495);	// @ (0x92 * 8 + 5)
#define                                 C1IE_bit            _BIT_ACCESS(PIE2,5)
// PIR2<C1IF>
extern volatile __bit                   C1IF                __at(0x95);	// @ (0x12 * 8 + 5)
#define                                 C1IF_bit            _BIT_ACCESS(PIR2,5)
// CM1CON1<C1INTN>
extern volatile __bit                   C1INTN              __at(0x896);	// @ (0x112 * 8 + 6)
#define                                 C1INTN_bit          _BIT_ACCESS(CM1CON1,6)
// CM1CON1<C1INTP>
extern volatile __bit                   C1INTP              __at(0x897);	// @ (0x112 * 8 + 7)
#define                                 C1INTP_bit          _BIT_ACCESS(CM1CON1,7)
// CM1CON1<C1NCH0>
extern volatile __bit                   C1NCH0              __at(0x890);	// @ (0x112 * 8 + 0)
#define                                 C1NCH0_bit          _BIT_ACCESS(CM1CON1,0)
// CM1CON1<C1NCH1>
extern volatile __bit                   C1NCH1              __at(0x891);	// @ (0x112 * 8 + 1)
#define                                 C1NCH1_bit          _BIT_ACCESS(CM1CON1,1)
// CM1CON1<C1NCH2>
extern volatile __bit                   C1NCH2              __at(0x892);	// @ (0x112 * 8 + 2)
#define                                 C1NCH2_bit          _BIT_ACCESS(CM1CON1,2)
// CM1CON0<C1ON>
extern volatile __bit                   C1ON                __at(0x88F);	// @ (0x111 * 8 + 7)
#define                                 C1ON_bit            _BIT_ACCESS(CM1CON0,7)
// CM1CON0<C1OUT>
extern volatile __bit                   C1OUT               __at(0x88E);	// @ (0x111 * 8 + 6)
#define                                 C1OUT_bit           _BIT_ACCESS(CM1CON0,6)
// CM1CON1<C1PCH0>
extern volatile __bit                   C1PCH0              __at(0x893);	// @ (0x112 * 8 + 3)
#define                                 C1PCH0_bit          _BIT_ACCESS(CM1CON1,3)
// CM1CON1<C1PCH1>
extern volatile __bit                   C1PCH1              __at(0x894);	// @ (0x112 * 8 + 4)
#define                                 C1PCH1_bit          _BIT_ACCESS(CM1CON1,4)
// CM1CON1<C1PCH2>
extern volatile __bit                   C1PCH2              __at(0x895);	// @ (0x112 * 8 + 5)
#define                                 C1PCH2_bit          _BIT_ACCESS(CM1CON1,5)
// CM1CON0<C1POL>
extern volatile __bit                   C1POL               __at(0x88C);	// @ (0x111 * 8 + 4)
#define                                 C1POL_bit           _BIT_ACCESS(CM1CON0,4)
// CM1CON0<C1SP>
extern volatile __bit                   C1SP                __at(0x88A);	// @ (0x111 * 8 + 2)
#define                                 C1SP_bit            _BIT_ACCESS(CM1CON0,2)
// CM1CON0<C1SYNC>
extern volatile __bit                   C1SYNC              __at(0x888);	// @ (0x111 * 8 + 0)
#define                                 C1SYNC_bit          _BIT_ACCESS(CM1CON0,0)
// STATUS<CARRY>
extern volatile __bit                   CARRY               __at(0x18);	// @ (0x3 * 8 + 0)
#define                                 CARRY_bit           _BIT_ACCESS(STATUS,0)
// CCP1CAP<CCP1CTS0>
extern volatile __bit                   CCP1CTS0            __at(0x14A0);	// @ (0x294 * 8 + 0)
#define                                 CCP1CTS0_bit        _BIT_ACCESS(CCP1CAP,0)
// CCP1CAP<CCP1CTS1>
extern volatile __bit                   CCP1CTS1            __at(0x14A1);	// @ (0x294 * 8 + 1)
#define                                 CCP1CTS1_bit        _BIT_ACCESS(CCP1CAP,1)
// CCP1CAP<CCP1CTS2>
extern volatile __bit                   CCP1CTS2            __at(0x14A2);	// @ (0x294 * 8 + 2)
#define                                 CCP1CTS2_bit        _BIT_ACCESS(CCP1CAP,2)
// CCP1CON<CCP1EN>
extern volatile __bit                   CCP1EN              __at(0x149F);	// @ (0x293 * 8 + 7)
#define                                 CCP1EN_bit          _BIT_ACCESS(CCP1CON,7)
// CCP1CON<CCP1FMT>
extern volatile __bit                   CCP1FMT             __at(0x149C);	// @ (0x293 * 8 + 4)
#define                                 CCP1FMT_bit         _BIT_ACCESS(CCP1CON,4)
// PIE4<CCP1IE>
extern volatile __bit                   CCP1IE              __at(0x4A0);	// @ (0x94 * 8 + 0)
#define                                 CCP1IE_bit          _BIT_ACCESS(PIE4,0)
// PIR4<CCP1IF>
extern volatile __bit                   CCP1IF              __at(0xA0);	// @ (0x14 * 8 + 0)
#define                                 CCP1IF_bit          _BIT_ACCESS(PIR4,0)
// PMD3<CCP1MD>
extern volatile __bit                   CCP1MD              __at(0x48A0);	// @ (0x914 * 8 + 0)
#define                                 CCP1MD_bit          _BIT_ACCESS(PMD3,0)
// CCP1CON<CCP1MODE0>
extern volatile __bit                   CCP1MODE0           __at(0x1498);	// @ (0x293 * 8 + 0)
#define                                 CCP1MODE0_bit       _BIT_ACCESS(CCP1CON,0)
// CCP1CON<CCP1MODE1>
extern volatile __bit                   CCP1MODE1           __at(0x1499);	// @ (0x293 * 8 + 1)
#define                                 CCP1MODE1_bit       _BIT_ACCESS(CCP1CON,1)
// CCP1CON<CCP1MODE2>
extern volatile __bit                   CCP1MODE2           __at(0x149A);	// @ (0x293 * 8 + 2)
#define                                 CCP1MODE2_bit       _BIT_ACCESS(CCP1CON,2)
// CCP1CON<CCP1MODE3>
extern volatile __bit                   CCP1MODE3           __at(0x149B);	// @ (0x293 * 8 + 3)
#define                                 CCP1MODE3_bit       _BIT_ACCESS(CCP1CON,3)
// CCP1CON<CCP1OUT>
extern volatile __bit                   CCP1OUT             __at(0x149D);	// @ (0x293 * 8 + 5)
#define                                 CCP1OUT_bit         _BIT_ACCESS(CCP1CON,5)
// CCP1PPS<CCP1PPS0>
extern volatile __bit                   CCP1PPS0            __at(0x70A0);	// @ (0xE14 * 8 + 0)
#define                                 CCP1PPS0_bit        _BIT_ACCESS(CCP1PPS,0)
// CCP1PPS<CCP1PPS1>
extern volatile __bit                   CCP1PPS1            __at(0x70A1);	// @ (0xE14 * 8 + 1)
#define                                 CCP1PPS1_bit        _BIT_ACCESS(CCP1PPS,1)
// CCP1PPS<CCP1PPS2>
extern volatile __bit                   CCP1PPS2            __at(0x70A2);	// @ (0xE14 * 8 + 2)
#define                                 CCP1PPS2_bit        _BIT_ACCESS(CCP1PPS,2)
// CCP1PPS<CCP1PPS3>
extern volatile __bit                   CCP1PPS3            __at(0x70A3);	// @ (0xE14 * 8 + 3)
#define                                 CCP1PPS3_bit        _BIT_ACCESS(CCP1PPS,3)
// CCP1PPS<CCP1PPS4>
extern volatile __bit                   CCP1PPS4            __at(0x70A4);	// @ (0xE14 * 8 + 4)
#define                                 CCP1PPS4_bit        _BIT_ACCESS(CCP1PPS,4)
// CCP2CAP<CCP2CTS0>
extern volatile __bit                   CCP2CTS0            __at(0x14C0);	// @ (0x298 * 8 + 0)
#define                                 CCP2CTS0_bit        _BIT_ACCESS(CCP2CAP,0)
// CCP2CAP<CCP2CTS1>
extern volatile __bit                   CCP2CTS1            __at(0x14C1);	// @ (0x298 * 8 + 1)
#define                                 CCP2CTS1_bit        _BIT_ACCESS(CCP2CAP,1)
// CCP2CAP<CCP2CTS2>
extern volatile __bit                   CCP2CTS2            __at(0x14C2);	// @ (0x298 * 8 + 2)
#define                                 CCP2CTS2_bit        _BIT_ACCESS(CCP2CAP,2)
// CCP2CON<CCP2EN>
extern volatile __bit                   CCP2EN              __at(0x14BF);	// @ (0x297 * 8 + 7)
#define                                 CCP2EN_bit          _BIT_ACCESS(CCP2CON,7)
// CCP2CON<CCP2FMT>
extern volatile __bit                   CCP2FMT             __at(0x14BC);	// @ (0x297 * 8 + 4)
#define                                 CCP2FMT_bit         _BIT_ACCESS(CCP2CON,4)
// PIE4<CCP2IE>
extern volatile __bit                   CCP2IE              __at(0x4A1);	// @ (0x94 * 8 + 1)
#define                                 CCP2IE_bit          _BIT_ACCESS(PIE4,1)
// PIR4<CCP2IF>
extern volatile __bit                   CCP2IF              __at(0xA1);	// @ (0x14 * 8 + 1)
#define                                 CCP2IF_bit          _BIT_ACCESS(PIR4,1)
// PMD3<CCP2MD>
extern volatile __bit                   CCP2MD              __at(0x48A1);	// @ (0x914 * 8 + 1)
#define                                 CCP2MD_bit          _BIT_ACCESS(PMD3,1)
// CCP2CON<CCP2MODE0>
extern volatile __bit                   CCP2MODE0           __at(0x14B8);	// @ (0x297 * 8 + 0)
#define                                 CCP2MODE0_bit       _BIT_ACCESS(CCP2CON,0)
// CCP2CON<CCP2MODE1>
extern volatile __bit                   CCP2MODE1           __at(0x14B9);	// @ (0x297 * 8 + 1)
#define                                 CCP2MODE1_bit       _BIT_ACCESS(CCP2CON,1)
// CCP2CON<CCP2MODE2>
extern volatile __bit                   CCP2MODE2           __at(0x14BA);	// @ (0x297 * 8 + 2)
#define                                 CCP2MODE2_bit       _BIT_ACCESS(CCP2CON,2)
// CCP2CON<CCP2MODE3>
extern volatile __bit                   CCP2MODE3           __at(0x14BB);	// @ (0x297 * 8 + 3)
#define                                 CCP2MODE3_bit       _BIT_ACCESS(CCP2CON,3)
// CCP2CON<CCP2OUT>
extern volatile __bit                   CCP2OUT             __at(0x14BD);	// @ (0x297 * 8 + 5)
#define                                 CCP2OUT_bit         _BIT_ACCESS(CCP2CON,5)
// CCP2PPS<CCP2PPS0>
extern volatile __bit                   CCP2PPS0            __at(0x70A8);	// @ (0xE15 * 8 + 0)
#define                                 CCP2PPS0_bit        _BIT_ACCESS(CCP2PPS,0)
// CCP2PPS<CCP2PPS1>
extern volatile __bit                   CCP2PPS1            __at(0x70A9);	// @ (0xE15 * 8 + 1)
#define                                 CCP2PPS1_bit        _BIT_ACCESS(CCP2PPS,1)
// CCP2PPS<CCP2PPS2>
extern volatile __bit                   CCP2PPS2            __at(0x70AA);	// @ (0xE15 * 8 + 2)
#define                                 CCP2PPS2_bit        _BIT_ACCESS(CCP2PPS,2)
// CCP2PPS<CCP2PPS3>
extern volatile __bit                   CCP2PPS3            __at(0x70AB);	// @ (0xE15 * 8 + 3)
#define                                 CCP2PPS3_bit        _BIT_ACCESS(CCP2PPS,3)
// CCP2PPS<CCP2PPS4>
extern volatile __bit                   CCP2PPS4            __at(0x70AC);	// @ (0xE15 * 8 + 4)
#define                                 CCP2PPS4_bit        _BIT_ACCESS(CCP2PPS,4)
// FVRCON<CDAFVR0>
extern volatile __bit                   CDAFVR0             __at(0x8BA);	// @ (0x117 * 8 + 2)
#define                                 CDAFVR0_bit         _BIT_ACCESS(FVRCON,2)
// FVRCON<CDAFVR1>
extern volatile __bit                   CDAFVR1             __at(0x8BB);	// @ (0x117 * 8 + 3)
#define                                 CDAFVR1_bit         _BIT_ACCESS(FVRCON,3)
// OSCCON2<CDIV0>
extern volatile __bit                   CDIV0               __at(0x48D0);	// @ (0x91A * 8 + 0)
#define                                 CDIV0_bit           _BIT_ACCESS(OSCCON2,0)
// OSCCON2<CDIV1>
extern volatile __bit                   CDIV1               __at(0x48D1);	// @ (0x91A * 8 + 1)
#define                                 CDIV1_bit           _BIT_ACCESS(OSCCON2,1)
// OSCCON2<CDIV2>
extern volatile __bit                   CDIV2               __at(0x48D2);	// @ (0x91A * 8 + 2)
#define                                 CDIV2_bit           _BIT_ACCESS(OSCCON2,2)
// OSCCON2<CDIV3>
extern volatile __bit                   CDIV3               __at(0x48D3);	// @ (0x91A * 8 + 3)
#define                                 CDIV3_bit           _BIT_ACCESS(OSCCON2,3)
// NVMCON1<CFGS>
extern volatile __bit                   CFGS                __at(0x44AE);	// @ (0x895 * 8 + 6)
#define                                 CFGS_bit            _BIT_ACCESS(NVMCON1,6)
// ADCON0<CHS0>
extern volatile __bit                   CHS0                __at(0x4EA);	// @ (0x9D * 8 + 2)
#define                                 CHS0_bit            _BIT_ACCESS(ADCON0,2)
// ADCON0<CHS1>
extern volatile __bit                   CHS1                __at(0x4EB);	// @ (0x9D * 8 + 3)
#define                                 CHS1_bit            _BIT_ACCESS(ADCON0,3)
// ADCON0<CHS2>
extern volatile __bit                   CHS2                __at(0x4EC);	// @ (0x9D * 8 + 4)
#define                                 CHS2_bit            _BIT_ACCESS(ADCON0,4)
// ADCON0<CHS3>
extern volatile __bit                   CHS3                __at(0x4ED);	// @ (0x9D * 8 + 5)
#define                                 CHS3_bit            _BIT_ACCESS(ADCON0,5)
// ADCON0<CHS4>
extern volatile __bit                   CHS4                __at(0x4EE);	// @ (0x9D * 8 + 6)
#define                                 CHS4_bit            _BIT_ACCESS(ADCON0,6)
// ADCON0<CHS5>
extern volatile __bit                   CHS5                __at(0x4EF);	// @ (0x9D * 8 + 7)
#define                                 CHS5_bit            _BIT_ACCESS(ADCON0,7)
// SSP1STAT<CKE>
extern volatile __bit                   CKE                 __at(0x10A6);	// @ (0x214 * 8 + 6)
#define                                 CKE_bit             _BIT_ACCESS(SSP1STAT,6)
// SSP1CON1<CKP>
extern volatile __bit                   CKP                 __at(0x10AC);	// @ (0x215 * 8 + 4)
#define                                 CKP_bit             _BIT_ACCESS(SSP1CON1,4)
// PIE3<CLC1IE>
extern volatile __bit                   CLC1IE              __at(0x498);	// @ (0x93 * 8 + 0)
#define                                 CLC1IE_bit          _BIT_ACCESS(PIE3,0)
// PIR3<CLC1IF>
extern volatile __bit                   CLC1IF              __at(0x98);	// @ (0x13 * 8 + 0)
#define                                 CLC1IF_bit          _BIT_ACCESS(PIR3,0)
// PMD5<CLC1MD>
extern volatile __bit                   CLC1MD              __at(0x48B1);	// @ (0x916 * 8 + 1)
#define                                 CLC1MD_bit          _BIT_ACCESS(PMD5,1)
// PIE3<CLC2IE>
extern volatile __bit                   CLC2IE              __at(0x499);	// @ (0x93 * 8 + 1)
#define                                 CLC2IE_bit          _BIT_ACCESS(PIE3,1)
// PIR3<CLC2IF>
extern volatile __bit                   CLC2IF              __at(0x99);	// @ (0x13 * 8 + 1)
#define                                 CLC2IF_bit          _BIT_ACCESS(PIR3,1)
// PMD5<CLC2MD>
extern volatile __bit                   CLC2MD              __at(0x48B2);	// @ (0x916 * 8 + 2)
#define                                 CLC2MD_bit          _BIT_ACCESS(PMD5,2)
// CLCIN0PPS<CLCIN0PPS0>
extern volatile __bit                   CLCIN0PPS0          __at(0x7140);	// @ (0xE28 * 8 + 0)
#define                                 CLCIN0PPS0_bit      _BIT_ACCESS(CLCIN0PPS,0)
// CLCIN0PPS<CLCIN0PPS1>
extern volatile __bit                   CLCIN0PPS1          __at(0x7141);	// @ (0xE28 * 8 + 1)
#define                                 CLCIN0PPS1_bit      _BIT_ACCESS(CLCIN0PPS,1)
// CLCIN0PPS<CLCIN0PPS2>
extern volatile __bit                   CLCIN0PPS2          __at(0x7142);	// @ (0xE28 * 8 + 2)
#define                                 CLCIN0PPS2_bit      _BIT_ACCESS(CLCIN0PPS,2)
// CLCIN0PPS<CLCIN0PPS3>
extern volatile __bit                   CLCIN0PPS3          __at(0x7143);	// @ (0xE28 * 8 + 3)
#define                                 CLCIN0PPS3_bit      _BIT_ACCESS(CLCIN0PPS,3)
// CLCIN0PPS<CLCIN0PPS4>
extern volatile __bit                   CLCIN0PPS4          __at(0x7144);	// @ (0xE28 * 8 + 4)
#define                                 CLCIN0PPS4_bit      _BIT_ACCESS(CLCIN0PPS,4)
// CLCIN1PPS<CLCIN1PPS0>
extern volatile __bit                   CLCIN1PPS0          __at(0x7148);	// @ (0xE29 * 8 + 0)
#define                                 CLCIN1PPS0_bit      _BIT_ACCESS(CLCIN1PPS,0)
// CLCIN1PPS<CLCIN1PPS1>
extern volatile __bit                   CLCIN1PPS1          __at(0x7149);	// @ (0xE29 * 8 + 1)
#define                                 CLCIN1PPS1_bit      _BIT_ACCESS(CLCIN1PPS,1)
// CLCIN1PPS<CLCIN1PPS2>
extern volatile __bit                   CLCIN1PPS2          __at(0x714A);	// @ (0xE29 * 8 + 2)
#define                                 CLCIN1PPS2_bit      _BIT_ACCESS(CLCIN1PPS,2)
// CLCIN1PPS<CLCIN1PPS3>
extern volatile __bit                   CLCIN1PPS3          __at(0x714B);	// @ (0xE29 * 8 + 3)
#define                                 CLCIN1PPS3_bit      _BIT_ACCESS(CLCIN1PPS,3)
// CLCIN1PPS<CLCIN1PPS4>
extern volatile __bit                   CLCIN1PPS4          __at(0x714C);	// @ (0xE29 * 8 + 4)
#define                                 CLCIN1PPS4_bit      _BIT_ACCESS(CLCIN1PPS,4)
// CLCIN2PPS<CLCIN2PPS0>
extern volatile __bit                   CLCIN2PPS0          __at(0x7150);	// @ (0xE2A * 8 + 0)
#define                                 CLCIN2PPS0_bit      _BIT_ACCESS(CLCIN2PPS,0)
// CLCIN2PPS<CLCIN2PPS1>
extern volatile __bit                   CLCIN2PPS1          __at(0x7151);	// @ (0xE2A * 8 + 1)
#define                                 CLCIN2PPS1_bit      _BIT_ACCESS(CLCIN2PPS,1)
// CLCIN2PPS<CLCIN2PPS2>
extern volatile __bit                   CLCIN2PPS2          __at(0x7152);	// @ (0xE2A * 8 + 2)
#define                                 CLCIN2PPS2_bit      _BIT_ACCESS(CLCIN2PPS,2)
// CLCIN2PPS<CLCIN2PPS3>
extern volatile __bit                   CLCIN2PPS3          __at(0x7153);	// @ (0xE2A * 8 + 3)
#define                                 CLCIN2PPS3_bit      _BIT_ACCESS(CLCIN2PPS,3)
// CLCIN2PPS<CLCIN2PPS4>
extern volatile __bit                   CLCIN2PPS4          __at(0x7154);	// @ (0xE2A * 8 + 4)
#define                                 CLCIN2PPS4_bit      _BIT_ACCESS(CLCIN2PPS,4)
// CLCIN3PPS<CLCIN3PPS0>
extern volatile __bit                   CLCIN3PPS0          __at(0x7158);	// @ (0xE2B * 8 + 0)
#define                                 CLCIN3PPS0_bit      _BIT_ACCESS(CLCIN3PPS,0)
// CLCIN3PPS<CLCIN3PPS1>
extern volatile __bit                   CLCIN3PPS1          __at(0x7159);	// @ (0xE2B * 8 + 1)
#define                                 CLCIN3PPS1_bit      _BIT_ACCESS(CLCIN3PPS,1)
// CLCIN3PPS<CLCIN3PPS2>
extern volatile __bit                   CLCIN3PPS2          __at(0x715A);	// @ (0xE2B * 8 + 2)
#define                                 CLCIN3PPS2_bit      _BIT_ACCESS(CLCIN3PPS,2)
// CLCIN3PPS<CLCIN3PPS3>
extern volatile __bit                   CLCIN3PPS3          __at(0x715B);	// @ (0xE2B * 8 + 3)
#define                                 CLCIN3PPS3_bit      _BIT_ACCESS(CLCIN3PPS,3)
// CLCIN3PPS<CLCIN3PPS4>
extern volatile __bit                   CLCIN3PPS4          __at(0x715C);	// @ (0xE2B * 8 + 4)
#define                                 CLCIN3PPS4_bit      _BIT_ACCESS(CLCIN3PPS,4)
// CLKRCON<CLKRDC0>
extern volatile __bit                   CLKRDC0             __at(0x1CD3);	// @ (0x39A * 8 + 3)
#define                                 CLKRDC0_bit         _BIT_ACCESS(CLKRCON,3)
// CLKRCON<CLKRDC1>
extern volatile __bit                   CLKRDC1             __at(0x1CD4);	// @ (0x39A * 8 + 4)
#define                                 CLKRDC1_bit         _BIT_ACCESS(CLKRCON,4)
// CLKRCON<CLKRDIV0>
extern volatile __bit                   CLKRDIV0            __at(0x1CD0);	// @ (0x39A * 8 + 0)
#define                                 CLKRDIV0_bit        _BIT_ACCESS(CLKRCON,0)
// CLKRCON<CLKRDIV1>
extern volatile __bit                   CLKRDIV1            __at(0x1CD1);	// @ (0x39A * 8 + 1)
#define                                 CLKRDIV1_bit        _BIT_ACCESS(CLKRCON,1)
// CLKRCON<CLKRDIV2>
extern volatile __bit                   CLKRDIV2            __at(0x1CD2);	// @ (0x39A * 8 + 2)
#define                                 CLKRDIV2_bit        _BIT_ACCESS(CLKRCON,2)
// CLKRCON<CLKREN>
extern volatile __bit                   CLKREN              __at(0x1CD7);	// @ (0x39A * 8 + 7)
#define                                 CLKREN_bit          _BIT_ACCESS(CLKRCON,7)
// PMD0<CLKRMD>
extern volatile __bit                   CLKRMD              __at(0x4889);	// @ (0x911 * 8 + 1)
#define                                 CLKRMD_bit          _BIT_ACCESS(PMD0,1)
// PMD2<CMP1MD>
extern volatile __bit                   CMP1MD              __at(0x4899);	// @ (0x913 * 8 + 1)
#define                                 CMP1MD_bit          _BIT_ACCESS(PMD2,1)
// OSCCON2<COSC0>
extern volatile __bit                   COSC0               __at(0x48D4);	// @ (0x91A * 8 + 4)
#define                                 COSC0_bit           _BIT_ACCESS(OSCCON2,4)
// OSCCON2<COSC1>
extern volatile __bit                   COSC1               __at(0x48D5);	// @ (0x91A * 8 + 5)
#define                                 COSC1_bit           _BIT_ACCESS(OSCCON2,5)
// OSCCON2<COSC2>
extern volatile __bit                   COSC2               __at(0x48D6);	// @ (0x91A * 8 + 6)
#define                                 COSC2_bit           _BIT_ACCESS(OSCCON2,6)
// RC1STA<CREN>
extern volatile __bit                   CREN                __at(0xCEC);	// @ (0x19D * 8 + 4)
#define                                 CREN_bit            _BIT_ACCESS(RC1STA,4)
// CWG1CLKCON<CS>
extern volatile __bit                   CS                  __at(0x3488);	// @ (0x691 * 8 + 0)
#define                                 CS_bit              _BIT_ACCESS(CWG1CLKCON,0)
// TX1STA<CSRC>
extern volatile __bit                   CSRC                __at(0xCF7);	// @ (0x19E * 8 + 7)
#define                                 CSRC_bit            _BIT_ACCESS(TX1STA,7)
// OSCCON3<CSWHOLD>
extern volatile __bit                   CSWHOLD             __at(0x48DF);	// @ (0x91B * 8 + 7)
#define                                 CSWHOLD_bit         _BIT_ACCESS(OSCCON3,7)
// PIE3<CSWIE>
extern volatile __bit                   CSWIE               __at(0x49E);	// @ (0x93 * 8 + 6)
#define                                 CSWIE_bit           _BIT_ACCESS(PIE3,6)
// PIR3<CSWIF>
extern volatile __bit                   CSWIF               __at(0x9E);	// @ (0x13 * 8 + 6)
#define                                 CSWIF_bit           _BIT_ACCESS(PIR3,6)
// CWG1CLKCON<CWG1CS>
extern volatile __bit                   CWG1CS              __at(0x3488);	// @ (0x691 * 8 + 0)
#define                                 CWG1CS_bit          _BIT_ACCESS(CWG1CLKCON,0)
// CWG1DAT<CWG1DAT0>
extern volatile __bit                   CWG1DAT0            __at(0x3490);	// @ (0x692 * 8 + 0)
#define                                 CWG1DAT0_bit        _BIT_ACCESS(CWG1DAT,0)
// CWG1DAT<CWG1DAT1>
extern volatile __bit                   CWG1DAT1            __at(0x3491);	// @ (0x692 * 8 + 1)
#define                                 CWG1DAT1_bit        _BIT_ACCESS(CWG1DAT,1)
// CWG1DAT<CWG1DAT2>
extern volatile __bit                   CWG1DAT2            __at(0x3492);	// @ (0x692 * 8 + 2)
#define                                 CWG1DAT2_bit        _BIT_ACCESS(CWG1DAT,2)
// CWG1DAT<CWG1DAT3>
extern volatile __bit                   CWG1DAT3            __at(0x3493);	// @ (0x692 * 8 + 3)
#define                                 CWG1DAT3_bit        _BIT_ACCESS(CWG1DAT,3)
// CWG1DBF<CWG1DBF0>
extern volatile __bit                   CWG1DBF0            __at(0x34A0);	// @ (0x694 * 8 + 0)
#define                                 CWG1DBF0_bit        _BIT_ACCESS(CWG1DBF,0)
// CWG1DBF<CWG1DBF1>
extern volatile __bit                   CWG1DBF1            __at(0x34A1);	// @ (0x694 * 8 + 1)
#define                                 CWG1DBF1_bit        _BIT_ACCESS(CWG1DBF,1)
// CWG1DBF<CWG1DBF2>
extern volatile __bit                   CWG1DBF2            __at(0x34A2);	// @ (0x694 * 8 + 2)
#define                                 CWG1DBF2_bit        _BIT_ACCESS(CWG1DBF,2)
// CWG1DBF<CWG1DBF3>
extern volatile __bit                   CWG1DBF3            __at(0x34A3);	// @ (0x694 * 8 + 3)
#define                                 CWG1DBF3_bit        _BIT_ACCESS(CWG1DBF,3)
// CWG1DBF<CWG1DBF4>
extern volatile __bit                   CWG1DBF4            __at(0x34A4);	// @ (0x694 * 8 + 4)
#define                                 CWG1DBF4_bit        _BIT_ACCESS(CWG1DBF,4)
// CWG1DBF<CWG1DBF5>
extern volatile __bit                   CWG1DBF5            __at(0x34A5);	// @ (0x694 * 8 + 5)
#define                                 CWG1DBF5_bit        _BIT_ACCESS(CWG1DBF,5)
// CWG1DBR<CWG1DBR0>
extern volatile __bit                   CWG1DBR0            __at(0x3498);	// @ (0x693 * 8 + 0)
#define                                 CWG1DBR0_bit        _BIT_ACCESS(CWG1DBR,0)
// CWG1DBR<CWG1DBR1>
extern volatile __bit                   CWG1DBR1            __at(0x3499);	// @ (0x693 * 8 + 1)
#define                                 CWG1DBR1_bit        _BIT_ACCESS(CWG1DBR,1)
// CWG1DBR<CWG1DBR2>
extern volatile __bit                   CWG1DBR2            __at(0x349A);	// @ (0x693 * 8 + 2)
#define                                 CWG1DBR2_bit        _BIT_ACCESS(CWG1DBR,2)
// CWG1DBR<CWG1DBR3>
extern volatile __bit                   CWG1DBR3            __at(0x349B);	// @ (0x693 * 8 + 3)
#define                                 CWG1DBR3_bit        _BIT_ACCESS(CWG1DBR,3)
// CWG1DBR<CWG1DBR4>
extern volatile __bit                   CWG1DBR4            __at(0x349C);	// @ (0x693 * 8 + 4)
#define                                 CWG1DBR4_bit        _BIT_ACCESS(CWG1DBR,4)
// CWG1DBR<CWG1DBR5>
extern volatile __bit                   CWG1DBR5            __at(0x349D);	// @ (0x693 * 8 + 5)
#define                                 CWG1DBR5_bit        _BIT_ACCESS(CWG1DBR,5)
// CWG1CON0<CWG1EN>
extern volatile __bit                   CWG1EN              __at(0x34AF);	// @ (0x695 * 8 + 7)
#define                                 CWG1EN_bit          _BIT_ACCESS(CWG1CON0,7)
// PIE4<CWG1IE>
extern volatile __bit                   CWG1IE              __at(0x4A6);	// @ (0x94 * 8 + 6)
#define                                 CWG1IE_bit          _BIT_ACCESS(PIE4,6)
// PIR4<CWG1IF>
extern volatile __bit                   CWG1IF              __at(0xA6);	// @ (0x14 * 8 + 6)
#define                                 CWG1IF_bit          _BIT_ACCESS(PIR4,6)
// CWG1CON1<CWG1IN>
extern volatile __bit                   CWG1IN              __at(0x34B5);	// @ (0x696 * 8 + 5)
#define                                 CWG1IN_bit          _BIT_ACCESS(CWG1CON1,5)
// CWG1CON0<CWG1LD>
extern volatile __bit                   CWG1LD              __at(0x34AE);	// @ (0x695 * 8 + 6)
#define                                 CWG1LD_bit          _BIT_ACCESS(CWG1CON0,6)
// CWG1AS0<CWG1LSAC0>
extern volatile __bit                   CWG1LSAC0           __at(0x34BA);	// @ (0x697 * 8 + 2)
#define                                 CWG1LSAC0_bit       _BIT_ACCESS(CWG1AS0,2)
// CWG1AS0<CWG1LSAC1>
extern volatile __bit                   CWG1LSAC1           __at(0x34BB);	// @ (0x697 * 8 + 3)
#define                                 CWG1LSAC1_bit       _BIT_ACCESS(CWG1AS0,3)
// CWG1AS0<CWG1LSBD0>
extern volatile __bit                   CWG1LSBD0           __at(0x34BC);	// @ (0x697 * 8 + 4)
#define                                 CWG1LSBD0_bit       _BIT_ACCESS(CWG1AS0,4)
// CWG1AS0<CWG1LSBD1>
extern volatile __bit                   CWG1LSBD1           __at(0x34BD);	// @ (0x697 * 8 + 5)
#define                                 CWG1LSBD1_bit       _BIT_ACCESS(CWG1AS0,5)
// PMD3<CWG1MD>
extern volatile __bit                   CWG1MD              __at(0x48A6);	// @ (0x914 * 8 + 6)
#define                                 CWG1MD_bit          _BIT_ACCESS(PMD3,6)
// CWG1CON0<CWG1MODE0>
extern volatile __bit                   CWG1MODE0           __at(0x34A8);	// @ (0x695 * 8 + 0)
#define                                 CWG1MODE0_bit       _BIT_ACCESS(CWG1CON0,0)
// CWG1CON0<CWG1MODE1>
extern volatile __bit                   CWG1MODE1           __at(0x34A9);	// @ (0x695 * 8 + 1)
#define                                 CWG1MODE1_bit       _BIT_ACCESS(CWG1CON0,1)
// CWG1CON0<CWG1MODE2>
extern volatile __bit                   CWG1MODE2           __at(0x34AA);	// @ (0x695 * 8 + 2)
#define                                 CWG1MODE2_bit       _BIT_ACCESS(CWG1CON0,2)
// CWG1STR<CWG1OVRA>
extern volatile __bit                   CWG1OVRA            __at(0x34CC);	// @ (0x699 * 8 + 4)
#define                                 CWG1OVRA_bit        _BIT_ACCESS(CWG1STR,4)
// CWG1STR<CWG1OVRB>
extern volatile __bit                   CWG1OVRB            __at(0x34CD);	// @ (0x699 * 8 + 5)
#define                                 CWG1OVRB_bit        _BIT_ACCESS(CWG1STR,5)
// CWG1STR<CWG1OVRC>
extern volatile __bit                   CWG1OVRC            __at(0x34CE);	// @ (0x699 * 8 + 6)
#define                                 CWG1OVRC_bit        _BIT_ACCESS(CWG1STR,6)
// CWG1STR<CWG1OVRD>
extern volatile __bit                   CWG1OVRD            __at(0x34CF);	// @ (0x699 * 8 + 7)
#define                                 CWG1OVRD_bit        _BIT_ACCESS(CWG1STR,7)
// CWG1CON1<CWG1POLA>
extern volatile __bit                   CWG1POLA            __at(0x34B0);	// @ (0x696 * 8 + 0)
#define                                 CWG1POLA_bit        _BIT_ACCESS(CWG1CON1,0)
// CWG1CON1<CWG1POLB>
extern volatile __bit                   CWG1POLB            __at(0x34B1);	// @ (0x696 * 8 + 1)
#define                                 CWG1POLB_bit        _BIT_ACCESS(CWG1CON1,1)
// CWG1CON1<CWG1POLC>
extern volatile __bit                   CWG1POLC            __at(0x34B2);	// @ (0x696 * 8 + 2)
#define                                 CWG1POLC_bit        _BIT_ACCESS(CWG1CON1,2)
// CWG1CON1<CWG1POLD>
extern volatile __bit                   CWG1POLD            __at(0x34B3);	// @ (0x696 * 8 + 3)
#define                                 CWG1POLD_bit        _BIT_ACCESS(CWG1CON1,3)
// CWG1PPS<CWG1PPS0>
extern volatile __bit                   CWG1PPS0            __at(0x70C0);	// @ (0xE18 * 8 + 0)
#define                                 CWG1PPS0_bit        _BIT_ACCESS(CWG1PPS,0)
// CWG1PPS<CWG1PPS1>
extern volatile __bit                   CWG1PPS1            __at(0x70C1);	// @ (0xE18 * 8 + 1)
#define                                 CWG1PPS1_bit        _BIT_ACCESS(CWG1PPS,1)
// CWG1PPS<CWG1PPS2>
extern volatile __bit                   CWG1PPS2            __at(0x70C2);	// @ (0xE18 * 8 + 2)
#define                                 CWG1PPS2_bit        _BIT_ACCESS(CWG1PPS,2)
// CWG1PPS<CWG1PPS3>
extern volatile __bit                   CWG1PPS3            __at(0x70C3);	// @ (0xE18 * 8 + 3)
#define                                 CWG1PPS3_bit        _BIT_ACCESS(CWG1PPS,3)
// CWG1PPS<CWG1PPS4>
extern volatile __bit                   CWG1PPS4            __at(0x70C4);	// @ (0xE18 * 8 + 4)
#define                                 CWG1PPS4_bit        _BIT_ACCESS(CWG1PPS,4)
// CWG1AS0<CWG1REN>
extern volatile __bit                   CWG1REN             __at(0x34BE);	// @ (0x697 * 8 + 6)
#define                                 CWG1REN_bit         _BIT_ACCESS(CWG1AS0,6)
// CWG1AS0<CWG1SHUTDOWN>
extern volatile __bit                   CWG1SHUTDOWN        __at(0x34BF);	// @ (0x697 * 8 + 7)
#define                                 CWG1SHUTDOWN_bit    _BIT_ACCESS(CWG1AS0,7)
// CWG1STR<CWG1STRA>
extern volatile __bit                   CWG1STRA            __at(0x34C8);	// @ (0x699 * 8 + 0)
#define                                 CWG1STRA_bit        _BIT_ACCESS(CWG1STR,0)
// CWG1STR<CWG1STRB>
extern volatile __bit                   CWG1STRB            __at(0x34C9);	// @ (0x699 * 8 + 1)
#define                                 CWG1STRB_bit        _BIT_ACCESS(CWG1STR,1)
// CWG1STR<CWG1STRC>
extern volatile __bit                   CWG1STRC            __at(0x34CA);	// @ (0x699 * 8 + 2)
#define                                 CWG1STRC_bit        _BIT_ACCESS(CWG1STR,2)
// CWG1STR<CWG1STRD>
extern volatile __bit                   CWG1STRD            __at(0x34CB);	// @ (0x699 * 8 + 3)
#define                                 CWG1STRD_bit        _BIT_ACCESS(CWG1STR,3)
// STATUS_SHAD<C_SHAD>
extern volatile __bit                   C_SHAD              __at(0x7F20);	// @ (0xFE4 * 8 + 0)
#define                                 C_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,0)
// DACCON0<DAC1EN>
extern volatile __bit                   DAC1EN              __at(0x8C7);	// @ (0x118 * 8 + 7)
#define                                 DAC1EN_bit          _BIT_ACCESS(DACCON0,7)
// DACCON0<DAC1NSS>
extern volatile __bit                   DAC1NSS             __at(0x8C0);	// @ (0x118 * 8 + 0)
#define                                 DAC1NSS_bit         _BIT_ACCESS(DACCON0,0)
// DACCON0<DAC1OE>
extern volatile __bit                   DAC1OE              __at(0x8C5);	// @ (0x118 * 8 + 5)
#define                                 DAC1OE_bit          _BIT_ACCESS(DACCON0,5)
// DACCON0<DAC1PSS0>
extern volatile __bit                   DAC1PSS0            __at(0x8C2);	// @ (0x118 * 8 + 2)
#define                                 DAC1PSS0_bit        _BIT_ACCESS(DACCON0,2)
// DACCON0<DAC1PSS1>
extern volatile __bit                   DAC1PSS1            __at(0x8C3);	// @ (0x118 * 8 + 3)
#define                                 DAC1PSS1_bit        _BIT_ACCESS(DACCON0,3)
// DACCON1<DAC1R0>
extern volatile __bit                   DAC1R0              __at(0x8C8);	// @ (0x119 * 8 + 0)
#define                                 DAC1R0_bit          _BIT_ACCESS(DACCON1,0)
// DACCON1<DAC1R1>
extern volatile __bit                   DAC1R1              __at(0x8C9);	// @ (0x119 * 8 + 1)
#define                                 DAC1R1_bit          _BIT_ACCESS(DACCON1,1)
// DACCON1<DAC1R2>
extern volatile __bit                   DAC1R2              __at(0x8CA);	// @ (0x119 * 8 + 2)
#define                                 DAC1R2_bit          _BIT_ACCESS(DACCON1,2)
// DACCON1<DAC1R3>
extern volatile __bit                   DAC1R3              __at(0x8CB);	// @ (0x119 * 8 + 3)
#define                                 DAC1R3_bit          _BIT_ACCESS(DACCON1,3)
// DACCON1<DAC1R4>
extern volatile __bit                   DAC1R4              __at(0x8CC);	// @ (0x119 * 8 + 4)
#define                                 DAC1R4_bit          _BIT_ACCESS(DACCON1,4)
// PMD2<DACMD>
extern volatile __bit                   DACMD               __at(0x489E);	// @ (0x913 * 8 + 6)
#define                                 DACMD_bit           _BIT_ACCESS(PMD2,6)
// CWG1DBF<DBF0>
extern volatile __bit                   DBF0                __at(0x34A0);	// @ (0x694 * 8 + 0)
#define                                 DBF0_bit            _BIT_ACCESS(CWG1DBF,0)
// CWG1DBF<DBF1>
extern volatile __bit                   DBF1                __at(0x34A1);	// @ (0x694 * 8 + 1)
#define                                 DBF1_bit            _BIT_ACCESS(CWG1DBF,1)
// CWG1DBF<DBF2>
extern volatile __bit                   DBF2                __at(0x34A2);	// @ (0x694 * 8 + 2)
#define                                 DBF2_bit            _BIT_ACCESS(CWG1DBF,2)
// CWG1DBF<DBF3>
extern volatile __bit                   DBF3                __at(0x34A3);	// @ (0x694 * 8 + 3)
#define                                 DBF3_bit            _BIT_ACCESS(CWG1DBF,3)
// CWG1DBF<DBF4>
extern volatile __bit                   DBF4                __at(0x34A4);	// @ (0x694 * 8 + 4)
#define                                 DBF4_bit            _BIT_ACCESS(CWG1DBF,4)
// CWG1DBF<DBF5>
extern volatile __bit                   DBF5                __at(0x34A5);	// @ (0x694 * 8 + 5)
#define                                 DBF5_bit            _BIT_ACCESS(CWG1DBF,5)
// CWG1DBR<DBR0>
extern volatile __bit                   DBR0                __at(0x3498);	// @ (0x693 * 8 + 0)
#define                                 DBR0_bit            _BIT_ACCESS(CWG1DBR,0)
// CWG1DBR<DBR1>
extern volatile __bit                   DBR1                __at(0x3499);	// @ (0x693 * 8 + 1)
#define                                 DBR1_bit            _BIT_ACCESS(CWG1DBR,1)
// CWG1DBR<DBR2>
extern volatile __bit                   DBR2                __at(0x349A);	// @ (0x693 * 8 + 2)
#define                                 DBR2_bit            _BIT_ACCESS(CWG1DBR,2)
// CWG1DBR<DBR3>
extern volatile __bit                   DBR3                __at(0x349B);	// @ (0x693 * 8 + 3)
#define                                 DBR3_bit            _BIT_ACCESS(CWG1DBR,3)
// CWG1DBR<DBR4>
extern volatile __bit                   DBR4                __at(0x349C);	// @ (0x693 * 8 + 4)
#define                                 DBR4_bit            _BIT_ACCESS(CWG1DBR,4)
// CWG1DBR<DBR5>
extern volatile __bit                   DBR5                __at(0x349D);	// @ (0x693 * 8 + 5)
#define                                 DBR5_bit            _BIT_ACCESS(CWG1DBR,5)
// STATUS<DC>
extern volatile __bit                   DC                  __at(0x19);	// @ (0x3 * 8 + 1)
#define                                 DC_bit              _BIT_ACCESS(STATUS,1)
// STATUS_SHAD<DC_SHAD>
extern volatile __bit                   DC_SHAD             __at(0x7F21);	// @ (0xFE4 * 8 + 1)
#define                                 DC_SHAD_bit         _BIT_ACCESS(STATUS_SHAD,1)
// SSP1CON3<DHEN>
extern volatile __bit                   DHEN                __at(0x10B8);	// @ (0x217 * 8 + 0)
#define                                 DHEN_bit            _BIT_ACCESS(SSP1CON3,0)
// CPUDOZE<DOE>
extern volatile __bit                   DOE                 __at(0x48C4);	// @ (0x918 * 8 + 4)
#define                                 DOE_bit             _BIT_ACCESS(CPUDOZE,4)
// CPUDOZE<DOZE0>
extern volatile __bit                   DOZE0               __at(0x48C0);	// @ (0x918 * 8 + 0)
#define                                 DOZE0_bit           _BIT_ACCESS(CPUDOZE,0)
// CPUDOZE<DOZE1>
extern volatile __bit                   DOZE1               __at(0x48C1);	// @ (0x918 * 8 + 1)
#define                                 DOZE1_bit           _BIT_ACCESS(CPUDOZE,1)
// CPUDOZE<DOZE2>
extern volatile __bit                   DOZE2               __at(0x48C2);	// @ (0x918 * 8 + 2)
#define                                 DOZE2_bit           _BIT_ACCESS(CPUDOZE,2)
// CPUDOZE<DOZEN>
extern volatile __bit                   DOZEN               __at(0x48C6);	// @ (0x918 * 8 + 6)
#define                                 DOZEN_bit           _BIT_ACCESS(CPUDOZE,6)
// PMD5<DSMMD>
extern volatile __bit                   DSMMD               __at(0x48B0);	// @ (0x916 * 8 + 0)
#define                                 DSMMD_bit           _BIT_ACCESS(PMD5,0)
// SSP1STAT<D_nA>
extern volatile __bit                   D_nA                __at(0x10A5);	// @ (0x214 * 8 + 5)
#define                                 D_nA_bit            _BIT_ACCESS(SSP1STAT,5)
// NVMADRL<EEADR0>
extern volatile __bit                   EEADR0              __at(0x4488);	// @ (0x891 * 8 + 0)
#define                                 EEADR0_bit          _BIT_ACCESS(NVMADRL,0)
// NVMADRL<EEADR1>
extern volatile __bit                   EEADR1              __at(0x4489);	// @ (0x891 * 8 + 1)
#define                                 EEADR1_bit          _BIT_ACCESS(NVMADRL,1)
// NVMADRH<EEADR10>
extern volatile __bit                   EEADR10             __at(0x4492);	// @ (0x892 * 8 + 2)
#define                                 EEADR10_bit         _BIT_ACCESS(NVMADRH,2)
// NVMADRH<EEADR11>
extern volatile __bit                   EEADR11             __at(0x4493);	// @ (0x892 * 8 + 3)
#define                                 EEADR11_bit         _BIT_ACCESS(NVMADRH,3)
// NVMADRH<EEADR12>
extern volatile __bit                   EEADR12             __at(0x4494);	// @ (0x892 * 8 + 4)
#define                                 EEADR12_bit         _BIT_ACCESS(NVMADRH,4)
// NVMADRH<EEADR13>
extern volatile __bit                   EEADR13             __at(0x4495);	// @ (0x892 * 8 + 5)
#define                                 EEADR13_bit         _BIT_ACCESS(NVMADRH,5)
// NVMADRL<EEADR2>
extern volatile __bit                   EEADR2              __at(0x448A);	// @ (0x891 * 8 + 2)
#define                                 EEADR2_bit          _BIT_ACCESS(NVMADRL,2)
// NVMADRL<EEADR3>
extern volatile __bit                   EEADR3              __at(0x448B);	// @ (0x891 * 8 + 3)
#define                                 EEADR3_bit          _BIT_ACCESS(NVMADRL,3)
// NVMADRL<EEADR4>
extern volatile __bit                   EEADR4              __at(0x448C);	// @ (0x891 * 8 + 4)
#define                                 EEADR4_bit          _BIT_ACCESS(NVMADRL,4)
// NVMADRL<EEADR5>
extern volatile __bit                   EEADR5              __at(0x448D);	// @ (0x891 * 8 + 5)
#define                                 EEADR5_bit          _BIT_ACCESS(NVMADRL,5)
// NVMADRL<EEADR6>
extern volatile __bit                   EEADR6              __at(0x448E);	// @ (0x891 * 8 + 6)
#define                                 EEADR6_bit          _BIT_ACCESS(NVMADRL,6)
// NVMADRL<EEADR7>
extern volatile __bit                   EEADR7              __at(0x448F);	// @ (0x891 * 8 + 7)
#define                                 EEADR7_bit          _BIT_ACCESS(NVMADRL,7)
// NVMADRH<EEADR8>
extern volatile __bit                   EEADR8              __at(0x4490);	// @ (0x892 * 8 + 0)
#define                                 EEADR8_bit          _BIT_ACCESS(NVMADRH,0)
// NVMADRH<EEADR9>
extern volatile __bit                   EEADR9              __at(0x4491);	// @ (0x892 * 8 + 1)
#define                                 EEADR9_bit          _BIT_ACCESS(NVMADRH,1)
// NVMDATL<EEDAT0>
extern volatile __bit                   EEDAT0              __at(0x4498);	// @ (0x893 * 8 + 0)
#define                                 EEDAT0_bit          _BIT_ACCESS(NVMDATL,0)
// NVMDATL<EEDAT1>
extern volatile __bit                   EEDAT1              __at(0x4499);	// @ (0x893 * 8 + 1)
#define                                 EEDAT1_bit          _BIT_ACCESS(NVMDATL,1)
// NVMDATH<EEDAT10>
extern volatile __bit                   EEDAT10             __at(0x44A2);	// @ (0x894 * 8 + 2)
#define                                 EEDAT10_bit         _BIT_ACCESS(NVMDATH,2)
// NVMDATH<EEDAT11>
extern volatile __bit                   EEDAT11             __at(0x44A3);	// @ (0x894 * 8 + 3)
#define                                 EEDAT11_bit         _BIT_ACCESS(NVMDATH,3)
// NVMDATH<EEDAT12>
extern volatile __bit                   EEDAT12             __at(0x44A4);	// @ (0x894 * 8 + 4)
#define                                 EEDAT12_bit         _BIT_ACCESS(NVMDATH,4)
// NVMDATH<EEDAT13>
extern volatile __bit                   EEDAT13             __at(0x44A5);	// @ (0x894 * 8 + 5)
#define                                 EEDAT13_bit         _BIT_ACCESS(NVMDATH,5)
// NVMDATL<EEDAT2>
extern volatile __bit                   EEDAT2              __at(0x449A);	// @ (0x893 * 8 + 2)
#define                                 EEDAT2_bit          _BIT_ACCESS(NVMDATL,2)
// NVMDATL<EEDAT3>
extern volatile __bit                   EEDAT3              __at(0x449B);	// @ (0x893 * 8 + 3)
#define                                 EEDAT3_bit          _BIT_ACCESS(NVMDATL,3)
// NVMDATL<EEDAT4>
extern volatile __bit                   EEDAT4              __at(0x449C);	// @ (0x893 * 8 + 4)
#define                                 EEDAT4_bit          _BIT_ACCESS(NVMDATL,4)
// NVMDATL<EEDAT5>
extern volatile __bit                   EEDAT5              __at(0x449D);	// @ (0x893 * 8 + 5)
#define                                 EEDAT5_bit          _BIT_ACCESS(NVMDATL,5)
// NVMDATL<EEDAT6>
extern volatile __bit                   EEDAT6              __at(0x449E);	// @ (0x893 * 8 + 6)
#define                                 EEDAT6_bit          _BIT_ACCESS(NVMDATL,6)
// NVMDATL<EEDAT7>
extern volatile __bit                   EEDAT7              __at(0x449F);	// @ (0x893 * 8 + 7)
#define                                 EEDAT7_bit          _BIT_ACCESS(NVMDATL,7)
// NVMDATH<EEDAT8>
extern volatile __bit                   EEDAT8              __at(0x44A0);	// @ (0x894 * 8 + 0)
#define                                 EEDAT8_bit          _BIT_ACCESS(NVMDATH,0)
// NVMDATH<EEDAT9>
extern volatile __bit                   EEDAT9              __at(0x44A1);	// @ (0x894 * 8 + 1)
#define                                 EEDAT9_bit          _BIT_ACCESS(NVMDATH,1)
// OSCEN<EXTOEN>
extern volatile __bit                   EXTOEN              __at(0x48EF);	// @ (0x91D * 8 + 7)
#define                                 EXTOEN_bit          _BIT_ACCESS(OSCEN,7)
// OSCSTAT1<EXTOR>
extern volatile __bit                   EXTOR               __at(0x48E7);	// @ (0x91C * 8 + 7)
#define                                 EXTOR_bit           _BIT_ACCESS(OSCSTAT1,7)
// RC1STA<FERR>
extern volatile __bit                   FERR                __at(0xCEA);	// @ (0x19D * 8 + 2)
#define                                 FERR_bit            _BIT_ACCESS(RC1STA,2)
// NVMCON1<FREE>
extern volatile __bit                   FREE                __at(0x44AC);	// @ (0x895 * 8 + 4)
#define                                 FREE_bit            _BIT_ACCESS(NVMCON1,4)
// FVRCON<FVREN>
extern volatile __bit                   FVREN               __at(0x8BF);	// @ (0x117 * 8 + 7)
#define                                 FVREN_bit           _BIT_ACCESS(FVRCON,7)
// PMD0<FVRMD>
extern volatile __bit                   FVRMD               __at(0x488E);	// @ (0x911 * 8 + 6)
#define                                 FVRMD_bit           _BIT_ACCESS(PMD0,6)
// FVRCON<FVRRDY>
extern volatile __bit                   FVRRDY              __at(0x8BE);	// @ (0x117 * 8 + 6)
#define                                 FVRRDY_bit          _BIT_ACCESS(FVRCON,6)
// CWG1CON0<G1EN>
extern volatile __bit                   G1EN                __at(0x34AF);	// @ (0x695 * 8 + 7)
#define                                 G1EN_bit            _BIT_ACCESS(CWG1CON0,7)
// SSP1CON2<GCEN>
extern volatile __bit                   GCEN                __at(0x10B7);	// @ (0x216 * 8 + 7)
#define                                 GCEN_bit            _BIT_ACCESS(SSP1CON2,7)
// INTCON<GIE>
extern volatile __bit                   GIE                 __at(0x5F);	// @ (0xB * 8 + 7)
#define                                 GIE_bit             _BIT_ACCESS(INTCON,7)
// ADCON0<GO>
extern volatile __bit                   GO                  __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_bit              _BIT_ACCESS(ADCON0,1)
// ADCON0<GO_nDONE>
extern volatile __bit                   GO_nDONE            __at(0x4E9);	// @ (0x9D * 8 + 1)
#define                                 GO_nDONE_bit        _BIT_ACCESS(ADCON0,1)
// OSCFRQ<HFFRQ0>
extern volatile __bit                   HFFRQ0              __at(0x48F8);	// @ (0x91F * 8 + 0)
#define                                 HFFRQ0_bit          _BIT_ACCESS(OSCFRQ,0)
// OSCFRQ<HFFRQ1>
extern volatile __bit                   HFFRQ1              __at(0x48F9);	// @ (0x91F * 8 + 1)
#define                                 HFFRQ1_bit          _BIT_ACCESS(OSCFRQ,1)
// OSCFRQ<HFFRQ2>
extern volatile __bit                   HFFRQ2              __at(0x48FA);	// @ (0x91F * 8 + 2)
#define                                 HFFRQ2_bit          _BIT_ACCESS(OSCFRQ,2)
// OSCFRQ<HFFRQ3>
extern volatile __bit                   HFFRQ3              __at(0x48FB);	// @ (0x91F * 8 + 3)
#define                                 HFFRQ3_bit          _BIT_ACCESS(OSCFRQ,3)
// OSCEN<HFOEN>
extern volatile __bit                   HFOEN               __at(0x48EE);	// @ (0x91D * 8 + 6)
#define                                 HFOEN_bit           _BIT_ACCESS(OSCEN,6)
// OSCSTAT1<HFOR>
extern volatile __bit                   HFOR                __at(0x48E6);	// @ (0x91C * 8 + 6)
#define                                 HFOR_bit            _BIT_ACCESS(OSCSTAT1,6)
// OSCTUNE<HFTUN0>
extern volatile __bit                   HFTUN0              __at(0x48F0);	// @ (0x91E * 8 + 0)
#define                                 HFTUN0_bit          _BIT_ACCESS(OSCTUNE,0)
// OSCTUNE<HFTUN1>
extern volatile __bit                   HFTUN1              __at(0x48F1);	// @ (0x91E * 8 + 1)
#define                                 HFTUN1_bit          _BIT_ACCESS(OSCTUNE,1)
// OSCTUNE<HFTUN2>
extern volatile __bit                   HFTUN2              __at(0x48F2);	// @ (0x91E * 8 + 2)
#define                                 HFTUN2_bit          _BIT_ACCESS(OSCTUNE,2)
// OSCTUNE<HFTUN3>
extern volatile __bit                   HFTUN3              __at(0x48F3);	// @ (0x91E * 8 + 3)
#define                                 HFTUN3_bit          _BIT_ACCESS(OSCTUNE,3)
// OSCTUNE<HFTUN4>
extern volatile __bit                   HFTUN4              __at(0x48F4);	// @ (0x91E * 8 + 4)
#define                                 HFTUN4_bit          _BIT_ACCESS(OSCTUNE,4)
// OSCTUNE<HFTUN5>
extern volatile __bit                   HFTUN5              __at(0x48F5);	// @ (0x91E * 8 + 5)
#define                                 HFTUN5_bit          _BIT_ACCESS(OSCTUNE,5)
// CPUDOZE<IDLEN>
extern volatile __bit                   IDLEN               __at(0x48C7);	// @ (0x918 * 8 + 7)
#define                                 IDLEN_bit           _BIT_ACCESS(CPUDOZE,7)
// CWG1CON1<IN>
extern volatile __bit                   IN                  __at(0x34B5);	// @ (0x696 * 8 + 5)
#define                                 IN_bit              _BIT_ACCESS(CWG1CON1,5)
// INLVLA<INLVLA0>
extern volatile __bit                   INLVLA0             __at(0x1C60);	// @ (0x38C * 8 + 0)
#define                                 INLVLA0_bit         _BIT_ACCESS(INLVLA,0)
// INLVLA<INLVLA1>
extern volatile __bit                   INLVLA1             __at(0x1C61);	// @ (0x38C * 8 + 1)
#define                                 INLVLA1_bit         _BIT_ACCESS(INLVLA,1)
// INLVLA<INLVLA2>
extern volatile __bit                   INLVLA2             __at(0x1C62);	// @ (0x38C * 8 + 2)
#define                                 INLVLA2_bit         _BIT_ACCESS(INLVLA,2)
// INLVLA<INLVLA3>
extern volatile __bit                   INLVLA3             __at(0x1C63);	// @ (0x38C * 8 + 3)
#define                                 INLVLA3_bit         _BIT_ACCESS(INLVLA,3)
// INLVLA<INLVLA4>
extern volatile __bit                   INLVLA4             __at(0x1C64);	// @ (0x38C * 8 + 4)
#define                                 INLVLA4_bit         _BIT_ACCESS(INLVLA,4)
// INLVLA<INLVLA5>
extern volatile __bit                   INLVLA5             __at(0x1C65);	// @ (0x38C * 8 + 5)
#define                                 INLVLA5_bit         _BIT_ACCESS(INLVLA,5)
// PIE0<INTE>
extern volatile __bit                   INTE                __at(0x480);	// @ (0x90 * 8 + 0)
#define                                 INTE_bit            _BIT_ACCESS(PIE0,0)
// INTCON<INTEDG>
extern volatile __bit                   INTEDG              __at(0x58);	// @ (0xB * 8 + 0)
#define                                 INTEDG_bit          _BIT_ACCESS(INTCON,0)
// PIR0<INTF>
extern volatile __bit                   INTF                __at(0x80);	// @ (0x10 * 8 + 0)
#define                                 INTF_bit            _BIT_ACCESS(PIR0,0)
// INTPPS<INTPPS0>
extern volatile __bit                   INTPPS0             __at(0x7080);	// @ (0xE10 * 8 + 0)
#define                                 INTPPS0_bit         _BIT_ACCESS(INTPPS,0)
// INTPPS<INTPPS1>
extern volatile __bit                   INTPPS1             __at(0x7081);	// @ (0xE10 * 8 + 1)
#define                                 INTPPS1_bit         _BIT_ACCESS(INTPPS,1)
// INTPPS<INTPPS2>
extern volatile __bit                   INTPPS2             __at(0x7082);	// @ (0xE10 * 8 + 2)
#define                                 INTPPS2_bit         _BIT_ACCESS(INTPPS,2)
// INTPPS<INTPPS3>
extern volatile __bit                   INTPPS3             __at(0x7083);	// @ (0xE10 * 8 + 3)
#define                                 INTPPS3_bit         _BIT_ACCESS(INTPPS,3)
// INTPPS<INTPPS4>
extern volatile __bit                   INTPPS4             __at(0x7084);	// @ (0xE10 * 8 + 4)
#define                                 INTPPS4_bit         _BIT_ACCESS(INTPPS,4)
// IOCAF<IOCAF0>
extern volatile __bit                   IOCAF0              __at(0x1C98);	// @ (0x393 * 8 + 0)
#define                                 IOCAF0_bit          _BIT_ACCESS(IOCAF,0)
// IOCAF<IOCAF1>
extern volatile __bit                   IOCAF1              __at(0x1C99);	// @ (0x393 * 8 + 1)
#define                                 IOCAF1_bit          _BIT_ACCESS(IOCAF,1)
// IOCAF<IOCAF2>
extern volatile __bit                   IOCAF2              __at(0x1C9A);	// @ (0x393 * 8 + 2)
#define                                 IOCAF2_bit          _BIT_ACCESS(IOCAF,2)
// IOCAF<IOCAF3>
extern volatile __bit                   IOCAF3              __at(0x1C9B);	// @ (0x393 * 8 + 3)
#define                                 IOCAF3_bit          _BIT_ACCESS(IOCAF,3)
// IOCAF<IOCAF4>
extern volatile __bit                   IOCAF4              __at(0x1C9C);	// @ (0x393 * 8 + 4)
#define                                 IOCAF4_bit          _BIT_ACCESS(IOCAF,4)
// IOCAF<IOCAF5>
extern volatile __bit                   IOCAF5              __at(0x1C9D);	// @ (0x393 * 8 + 5)
#define                                 IOCAF5_bit          _BIT_ACCESS(IOCAF,5)
// IOCAN<IOCAN0>
extern volatile __bit                   IOCAN0              __at(0x1C90);	// @ (0x392 * 8 + 0)
#define                                 IOCAN0_bit          _BIT_ACCESS(IOCAN,0)
// IOCAN<IOCAN1>
extern volatile __bit                   IOCAN1              __at(0x1C91);	// @ (0x392 * 8 + 1)
#define                                 IOCAN1_bit          _BIT_ACCESS(IOCAN,1)
// IOCAN<IOCAN2>
extern volatile __bit                   IOCAN2              __at(0x1C92);	// @ (0x392 * 8 + 2)
#define                                 IOCAN2_bit          _BIT_ACCESS(IOCAN,2)
// IOCAN<IOCAN3>
extern volatile __bit                   IOCAN3              __at(0x1C93);	// @ (0x392 * 8 + 3)
#define                                 IOCAN3_bit          _BIT_ACCESS(IOCAN,3)
// IOCAN<IOCAN4>
extern volatile __bit                   IOCAN4              __at(0x1C94);	// @ (0x392 * 8 + 4)
#define                                 IOCAN4_bit          _BIT_ACCESS(IOCAN,4)
// IOCAN<IOCAN5>
extern volatile __bit                   IOCAN5              __at(0x1C95);	// @ (0x392 * 8 + 5)
#define                                 IOCAN5_bit          _BIT_ACCESS(IOCAN,5)
// IOCAP<IOCAP0>
extern volatile __bit                   IOCAP0              __at(0x1C88);	// @ (0x391 * 8 + 0)
#define                                 IOCAP0_bit          _BIT_ACCESS(IOCAP,0)
// IOCAP<IOCAP1>
extern volatile __bit                   IOCAP1              __at(0x1C89);	// @ (0x391 * 8 + 1)
#define                                 IOCAP1_bit          _BIT_ACCESS(IOCAP,1)
// IOCAP<IOCAP2>
extern volatile __bit                   IOCAP2              __at(0x1C8A);	// @ (0x391 * 8 + 2)
#define                                 IOCAP2_bit          _BIT_ACCESS(IOCAP,2)
// IOCAP<IOCAP3>
extern volatile __bit                   IOCAP3              __at(0x1C8B);	// @ (0x391 * 8 + 3)
#define                                 IOCAP3_bit          _BIT_ACCESS(IOCAP,3)
// IOCAP<IOCAP4>
extern volatile __bit                   IOCAP4              __at(0x1C8C);	// @ (0x391 * 8 + 4)
#define                                 IOCAP4_bit          _BIT_ACCESS(IOCAP,4)
// IOCAP<IOCAP5>
extern volatile __bit                   IOCAP5              __at(0x1C8D);	// @ (0x391 * 8 + 5)
#define                                 IOCAP5_bit          _BIT_ACCESS(IOCAP,5)
// PIE0<IOCIE>
extern volatile __bit                   IOCIE               __at(0x484);	// @ (0x90 * 8 + 4)
#define                                 IOCIE_bit           _BIT_ACCESS(PIE0,4)
// PIR0<IOCIF>
extern volatile __bit                   IOCIF               __at(0x84);	// @ (0x10 * 8 + 4)
#define                                 IOCIF_bit           _BIT_ACCESS(PIR0,4)
// PMD0<IOCMD>
extern volatile __bit                   IOCMD               __at(0x4888);	// @ (0x911 * 8 + 0)
#define                                 IOCMD_bit           _BIT_ACCESS(PMD0,0)
// LATA<LATA0>
extern volatile __bit                   LATA0               __at(0x860);	// @ (0x10C * 8 + 0)
#define                                 LATA0_bit           _BIT_ACCESS(LATA,0)
// LATA<LATA1>
extern volatile __bit                   LATA1               __at(0x861);	// @ (0x10C * 8 + 1)
#define                                 LATA1_bit           _BIT_ACCESS(LATA,1)
// LATA<LATA2>
extern volatile __bit                   LATA2               __at(0x862);	// @ (0x10C * 8 + 2)
#define                                 LATA2_bit           _BIT_ACCESS(LATA,2)
// LATA<LATA4>
extern volatile __bit                   LATA4               __at(0x864);	// @ (0x10C * 8 + 4)
#define                                 LATA4_bit           _BIT_ACCESS(LATA,4)
// LATA<LATA5>
extern volatile __bit                   LATA5               __at(0x865);	// @ (0x10C * 8 + 5)
#define                                 LATA5_bit           _BIT_ACCESS(LATA,5)
// CLC1SEL0<LC1D1S0>
extern volatile __bit                   LC1D1S0             __at(0x7890);	// @ (0xF12 * 8 + 0)
#define                                 LC1D1S0_bit         _BIT_ACCESS(CLC1SEL0,0)
// CLC1SEL0<LC1D1S1>
extern volatile __bit                   LC1D1S1             __at(0x7891);	// @ (0xF12 * 8 + 1)
#define                                 LC1D1S1_bit         _BIT_ACCESS(CLC1SEL0,1)
// CLC1SEL0<LC1D1S2>
extern volatile __bit                   LC1D1S2             __at(0x7892);	// @ (0xF12 * 8 + 2)
#define                                 LC1D1S2_bit         _BIT_ACCESS(CLC1SEL0,2)
// CLC1SEL0<LC1D1S3>
extern volatile __bit                   LC1D1S3             __at(0x7893);	// @ (0xF12 * 8 + 3)
#define                                 LC1D1S3_bit         _BIT_ACCESS(CLC1SEL0,3)
// CLC1SEL0<LC1D1S4>
extern volatile __bit                   LC1D1S4             __at(0x7894);	// @ (0xF12 * 8 + 4)
#define                                 LC1D1S4_bit         _BIT_ACCESS(CLC1SEL0,4)
// CLC1SEL1<LC1D2S0>
extern volatile __bit                   LC1D2S0             __at(0x7898);	// @ (0xF13 * 8 + 0)
#define                                 LC1D2S0_bit         _BIT_ACCESS(CLC1SEL1,0)
// CLC1SEL1<LC1D2S1>
extern volatile __bit                   LC1D2S1             __at(0x7899);	// @ (0xF13 * 8 + 1)
#define                                 LC1D2S1_bit         _BIT_ACCESS(CLC1SEL1,1)
// CLC1SEL1<LC1D2S2>
extern volatile __bit                   LC1D2S2             __at(0x789A);	// @ (0xF13 * 8 + 2)
#define                                 LC1D2S2_bit         _BIT_ACCESS(CLC1SEL1,2)
// CLC1SEL1<LC1D2S3>
extern volatile __bit                   LC1D2S3             __at(0x789B);	// @ (0xF13 * 8 + 3)
#define                                 LC1D2S3_bit         _BIT_ACCESS(CLC1SEL1,3)
// CLC1SEL1<LC1D2S4>
extern volatile __bit                   LC1D2S4             __at(0x789C);	// @ (0xF13 * 8 + 4)
#define                                 LC1D2S4_bit         _BIT_ACCESS(CLC1SEL1,4)
// CLC1SEL2<LC1D3S0>
extern volatile __bit                   LC1D3S0             __at(0x78A0);	// @ (0xF14 * 8 + 0)
#define                                 LC1D3S0_bit         _BIT_ACCESS(CLC1SEL2,0)
// CLC1SEL2<LC1D3S1>
extern volatile __bit                   LC1D3S1             __at(0x78A1);	// @ (0xF14 * 8 + 1)
#define                                 LC1D3S1_bit         _BIT_ACCESS(CLC1SEL2,1)
// CLC1SEL2<LC1D3S2>
extern volatile __bit                   LC1D3S2             __at(0x78A2);	// @ (0xF14 * 8 + 2)
#define                                 LC1D3S2_bit         _BIT_ACCESS(CLC1SEL2,2)
// CLC1SEL2<LC1D3S3>
extern volatile __bit                   LC1D3S3             __at(0x78A3);	// @ (0xF14 * 8 + 3)
#define                                 LC1D3S3_bit         _BIT_ACCESS(CLC1SEL2,3)
// CLC1SEL2<LC1D3S4>
extern volatile __bit                   LC1D3S4             __at(0x78A4);	// @ (0xF14 * 8 + 4)
#define                                 LC1D3S4_bit         _BIT_ACCESS(CLC1SEL2,4)
// CLC1SEL3<LC1D4S0>
extern volatile __bit                   LC1D4S0             __at(0x78A8);	// @ (0xF15 * 8 + 0)
#define                                 LC1D4S0_bit         _BIT_ACCESS(CLC1SEL3,0)
// CLC1SEL3<LC1D4S1>
extern volatile __bit                   LC1D4S1             __at(0x78A9);	// @ (0xF15 * 8 + 1)
#define                                 LC1D4S1_bit         _BIT_ACCESS(CLC1SEL3,1)
// CLC1SEL3<LC1D4S2>
extern volatile __bit                   LC1D4S2             __at(0x78AA);	// @ (0xF15 * 8 + 2)
#define                                 LC1D4S2_bit         _BIT_ACCESS(CLC1SEL3,2)
// CLC1SEL3<LC1D4S3>
extern volatile __bit                   LC1D4S3             __at(0x78AB);	// @ (0xF15 * 8 + 3)
#define                                 LC1D4S3_bit         _BIT_ACCESS(CLC1SEL3,3)
// CLC1SEL3<LC1D4S4>
extern volatile __bit                   LC1D4S4             __at(0x78AC);	// @ (0xF15 * 8 + 4)
#define                                 LC1D4S4_bit         _BIT_ACCESS(CLC1SEL3,4)
// CLC1CON<LC1EN>
extern volatile __bit                   LC1EN               __at(0x7887);	// @ (0xF10 * 8 + 7)
#define                                 LC1EN_bit           _BIT_ACCESS(CLC1CON,7)
// CLC1GLS0<LC1G1D1N>
extern volatile __bit                   LC1G1D1N            __at(0x78B0);	// @ (0xF16 * 8 + 0)
#define                                 LC1G1D1N_bit        _BIT_ACCESS(CLC1GLS0,0)
// CLC1GLS0<LC1G1D1T>
extern volatile __bit                   LC1G1D1T            __at(0x78B1);	// @ (0xF16 * 8 + 1)
#define                                 LC1G1D1T_bit        _BIT_ACCESS(CLC1GLS0,1)
// CLC1GLS0<LC1G1D2N>
extern volatile __bit                   LC1G1D2N            __at(0x78B2);	// @ (0xF16 * 8 + 2)
#define                                 LC1G1D2N_bit        _BIT_ACCESS(CLC1GLS0,2)
// CLC1GLS0<LC1G1D2T>
extern volatile __bit                   LC1G1D2T            __at(0x78B3);	// @ (0xF16 * 8 + 3)
#define                                 LC1G1D2T_bit        _BIT_ACCESS(CLC1GLS0,3)
// CLC1GLS0<LC1G1D3N>
extern volatile __bit                   LC1G1D3N            __at(0x78B4);	// @ (0xF16 * 8 + 4)
#define                                 LC1G1D3N_bit        _BIT_ACCESS(CLC1GLS0,4)
// CLC1GLS0<LC1G1D3T>
extern volatile __bit                   LC1G1D3T            __at(0x78B5);	// @ (0xF16 * 8 + 5)
#define                                 LC1G1D3T_bit        _BIT_ACCESS(CLC1GLS0,5)
// CLC1GLS0<LC1G1D4N>
extern volatile __bit                   LC1G1D4N            __at(0x78B6);	// @ (0xF16 * 8 + 6)
#define                                 LC1G1D4N_bit        _BIT_ACCESS(CLC1GLS0,6)
// CLC1GLS0<LC1G1D4T>
extern volatile __bit                   LC1G1D4T            __at(0x78B7);	// @ (0xF16 * 8 + 7)
#define                                 LC1G1D4T_bit        _BIT_ACCESS(CLC1GLS0,7)
// CLC1POL<LC1G1POL>
extern volatile __bit                   LC1G1POL            __at(0x7888);	// @ (0xF11 * 8 + 0)
#define                                 LC1G1POL_bit        _BIT_ACCESS(CLC1POL,0)
// CLC1GLS1<LC1G2D1N>
extern volatile __bit                   LC1G2D1N            __at(0x78B8);	// @ (0xF17 * 8 + 0)
#define                                 LC1G2D1N_bit        _BIT_ACCESS(CLC1GLS1,0)
// CLC1GLS1<LC1G2D1T>
extern volatile __bit                   LC1G2D1T            __at(0x78B9);	// @ (0xF17 * 8 + 1)
#define                                 LC1G2D1T_bit        _BIT_ACCESS(CLC1GLS1,1)
// CLC1GLS1<LC1G2D2N>
extern volatile __bit                   LC1G2D2N            __at(0x78BA);	// @ (0xF17 * 8 + 2)
#define                                 LC1G2D2N_bit        _BIT_ACCESS(CLC1GLS1,2)
// CLC1GLS1<LC1G2D2T>
extern volatile __bit                   LC1G2D2T            __at(0x78BB);	// @ (0xF17 * 8 + 3)
#define                                 LC1G2D2T_bit        _BIT_ACCESS(CLC1GLS1,3)
// CLC1GLS1<LC1G2D3N>
extern volatile __bit                   LC1G2D3N            __at(0x78BC);	// @ (0xF17 * 8 + 4)
#define                                 LC1G2D3N_bit        _BIT_ACCESS(CLC1GLS1,4)
// CLC1GLS1<LC1G2D3T>
extern volatile __bit                   LC1G2D3T            __at(0x78BD);	// @ (0xF17 * 8 + 5)
#define                                 LC1G2D3T_bit        _BIT_ACCESS(CLC1GLS1,5)
// CLC1GLS1<LC1G2D4N>
extern volatile __bit                   LC1G2D4N            __at(0x78BE);	// @ (0xF17 * 8 + 6)
#define                                 LC1G2D4N_bit        _BIT_ACCESS(CLC1GLS1,6)
// CLC1GLS1<LC1G2D4T>
extern volatile __bit                   LC1G2D4T            __at(0x78BF);	// @ (0xF17 * 8 + 7)
#define                                 LC1G2D4T_bit        _BIT_ACCESS(CLC1GLS1,7)
// CLC1POL<LC1G2POL>
extern volatile __bit                   LC1G2POL            __at(0x7889);	// @ (0xF11 * 8 + 1)
#define                                 LC1G2POL_bit        _BIT_ACCESS(CLC1POL,1)
// CLC1GLS2<LC1G3D1N>
extern volatile __bit                   LC1G3D1N            __at(0x78C0);	// @ (0xF18 * 8 + 0)
#define                                 LC1G3D1N_bit        _BIT_ACCESS(CLC1GLS2,0)
// CLC1GLS2<LC1G3D1T>
extern volatile __bit                   LC1G3D1T            __at(0x78C1);	// @ (0xF18 * 8 + 1)
#define                                 LC1G3D1T_bit        _BIT_ACCESS(CLC1GLS2,1)
// CLC1GLS2<LC1G3D2N>
extern volatile __bit                   LC1G3D2N            __at(0x78C2);	// @ (0xF18 * 8 + 2)
#define                                 LC1G3D2N_bit        _BIT_ACCESS(CLC1GLS2,2)
// CLC1GLS2<LC1G3D2T>
extern volatile __bit                   LC1G3D2T            __at(0x78C3);	// @ (0xF18 * 8 + 3)
#define                                 LC1G3D2T_bit        _BIT_ACCESS(CLC1GLS2,3)
// CLC1GLS2<LC1G3D3N>
extern volatile __bit                   LC1G3D3N            __at(0x78C4);	// @ (0xF18 * 8 + 4)
#define                                 LC1G3D3N_bit        _BIT_ACCESS(CLC1GLS2,4)
// CLC1GLS2<LC1G3D3T>
extern volatile __bit                   LC1G3D3T            __at(0x78C5);	// @ (0xF18 * 8 + 5)
#define                                 LC1G3D3T_bit        _BIT_ACCESS(CLC1GLS2,5)
// CLC1GLS2<LC1G3D4N>
extern volatile __bit                   LC1G3D4N            __at(0x78C6);	// @ (0xF18 * 8 + 6)
#define                                 LC1G3D4N_bit        _BIT_ACCESS(CLC1GLS2,6)
// CLC1GLS2<LC1G3D4T>
extern volatile __bit                   LC1G3D4T            __at(0x78C7);	// @ (0xF18 * 8 + 7)
#define                                 LC1G3D4T_bit        _BIT_ACCESS(CLC1GLS2,7)
// CLC1POL<LC1G3POL>
extern volatile __bit                   LC1G3POL            __at(0x788A);	// @ (0xF11 * 8 + 2)
#define                                 LC1G3POL_bit        _BIT_ACCESS(CLC1POL,2)
// CLC1GLS3<LC1G4D1N>
extern volatile __bit                   LC1G4D1N            __at(0x78C8);	// @ (0xF19 * 8 + 0)
#define                                 LC1G4D1N_bit        _BIT_ACCESS(CLC1GLS3,0)
// CLC1GLS3<LC1G4D1T>
extern volatile __bit                   LC1G4D1T            __at(0x78C9);	// @ (0xF19 * 8 + 1)
#define                                 LC1G4D1T_bit        _BIT_ACCESS(CLC1GLS3,1)
// CLC1GLS3<LC1G4D2N>
extern volatile __bit                   LC1G4D2N            __at(0x78CA);	// @ (0xF19 * 8 + 2)
#define                                 LC1G4D2N_bit        _BIT_ACCESS(CLC1GLS3,2)
// CLC1GLS3<LC1G4D2T>
extern volatile __bit                   LC1G4D2T            __at(0x78CB);	// @ (0xF19 * 8 + 3)
#define                                 LC1G4D2T_bit        _BIT_ACCESS(CLC1GLS3,3)
// CLC1GLS3<LC1G4D3N>
extern volatile __bit                   LC1G4D3N            __at(0x78CC);	// @ (0xF19 * 8 + 4)
#define                                 LC1G4D3N_bit        _BIT_ACCESS(CLC1GLS3,4)
// CLC1GLS3<LC1G4D3T>
extern volatile __bit                   LC1G4D3T            __at(0x78CD);	// @ (0xF19 * 8 + 5)
#define                                 LC1G4D3T_bit        _BIT_ACCESS(CLC1GLS3,5)
// CLC1GLS3<LC1G4D4N>
extern volatile __bit                   LC1G4D4N            __at(0x78CE);	// @ (0xF19 * 8 + 6)
#define                                 LC1G4D4N_bit        _BIT_ACCESS(CLC1GLS3,6)
// CLC1GLS3<LC1G4D4T>
extern volatile __bit                   LC1G4D4T            __at(0x78CF);	// @ (0xF19 * 8 + 7)
#define                                 LC1G4D4T_bit        _BIT_ACCESS(CLC1GLS3,7)
// CLC1POL<LC1G4POL>
extern volatile __bit                   LC1G4POL            __at(0x788B);	// @ (0xF11 * 8 + 3)
#define                                 LC1G4POL_bit        _BIT_ACCESS(CLC1POL,3)
// CLC1CON<LC1INTN>
extern volatile __bit                   LC1INTN             __at(0x7883);	// @ (0xF10 * 8 + 3)
#define                                 LC1INTN_bit         _BIT_ACCESS(CLC1CON,3)
// CLC1CON<LC1INTP>
extern volatile __bit                   LC1INTP             __at(0x7884);	// @ (0xF10 * 8 + 4)
#define                                 LC1INTP_bit         _BIT_ACCESS(CLC1CON,4)
// CLC1CON<LC1MODE0>
extern volatile __bit                   LC1MODE0            __at(0x7880);	// @ (0xF10 * 8 + 0)
#define                                 LC1MODE0_bit        _BIT_ACCESS(CLC1CON,0)
// CLC1CON<LC1MODE1>
extern volatile __bit                   LC1MODE1            __at(0x7881);	// @ (0xF10 * 8 + 1)
#define                                 LC1MODE1_bit        _BIT_ACCESS(CLC1CON,1)
// CLC1CON<LC1MODE2>
extern volatile __bit                   LC1MODE2            __at(0x7882);	// @ (0xF10 * 8 + 2)
#define                                 LC1MODE2_bit        _BIT_ACCESS(CLC1CON,2)
// CLC1CON<LC1OUT>
extern volatile __bit                   LC1OUT              __at(0x7885);	// @ (0xF10 * 8 + 5)
#define                                 LC1OUT_bit          _BIT_ACCESS(CLC1CON,5)
// CLC1POL<LC1POL>
extern volatile __bit                   LC1POL              __at(0x788F);	// @ (0xF11 * 8 + 7)
#define                                 LC1POL_bit          _BIT_ACCESS(CLC1POL,7)
// CLC2SEL0<LC2D1S0>
extern volatile __bit                   LC2D1S0             __at(0x78E0);	// @ (0xF1C * 8 + 0)
#define                                 LC2D1S0_bit         _BIT_ACCESS(CLC2SEL0,0)
// CLC2SEL0<LC2D1S1>
extern volatile __bit                   LC2D1S1             __at(0x78E1);	// @ (0xF1C * 8 + 1)
#define                                 LC2D1S1_bit         _BIT_ACCESS(CLC2SEL0,1)
// CLC2SEL0<LC2D1S2>
extern volatile __bit                   LC2D1S2             __at(0x78E2);	// @ (0xF1C * 8 + 2)
#define                                 LC2D1S2_bit         _BIT_ACCESS(CLC2SEL0,2)
// CLC2SEL0<LC2D1S3>
extern volatile __bit                   LC2D1S3             __at(0x78E3);	// @ (0xF1C * 8 + 3)
#define                                 LC2D1S3_bit         _BIT_ACCESS(CLC2SEL0,3)
// CLC2SEL0<LC2D1S4>
extern volatile __bit                   LC2D1S4             __at(0x78E4);	// @ (0xF1C * 8 + 4)
#define                                 LC2D1S4_bit         _BIT_ACCESS(CLC2SEL0,4)
// CLC2SEL1<LC2D2S0>
extern volatile __bit                   LC2D2S0             __at(0x78E8);	// @ (0xF1D * 8 + 0)
#define                                 LC2D2S0_bit         _BIT_ACCESS(CLC2SEL1,0)
// CLC2SEL1<LC2D2S1>
extern volatile __bit                   LC2D2S1             __at(0x78E9);	// @ (0xF1D * 8 + 1)
#define                                 LC2D2S1_bit         _BIT_ACCESS(CLC2SEL1,1)
// CLC2SEL1<LC2D2S2>
extern volatile __bit                   LC2D2S2             __at(0x78EA);	// @ (0xF1D * 8 + 2)
#define                                 LC2D2S2_bit         _BIT_ACCESS(CLC2SEL1,2)
// CLC2SEL1<LC2D2S3>
extern volatile __bit                   LC2D2S3             __at(0x78EB);	// @ (0xF1D * 8 + 3)
#define                                 LC2D2S3_bit         _BIT_ACCESS(CLC2SEL1,3)
// CLC2SEL1<LC2D2S4>
extern volatile __bit                   LC2D2S4             __at(0x78EC);	// @ (0xF1D * 8 + 4)
#define                                 LC2D2S4_bit         _BIT_ACCESS(CLC2SEL1,4)
// CLC2SEL2<LC2D3S0>
extern volatile __bit                   LC2D3S0             __at(0x78F0);	// @ (0xF1E * 8 + 0)
#define                                 LC2D3S0_bit         _BIT_ACCESS(CLC2SEL2,0)
// CLC2SEL2<LC2D3S1>
extern volatile __bit                   LC2D3S1             __at(0x78F1);	// @ (0xF1E * 8 + 1)
#define                                 LC2D3S1_bit         _BIT_ACCESS(CLC2SEL2,1)
// CLC2SEL2<LC2D3S2>
extern volatile __bit                   LC2D3S2             __at(0x78F2);	// @ (0xF1E * 8 + 2)
#define                                 LC2D3S2_bit         _BIT_ACCESS(CLC2SEL2,2)
// CLC2SEL2<LC2D3S3>
extern volatile __bit                   LC2D3S3             __at(0x78F3);	// @ (0xF1E * 8 + 3)
#define                                 LC2D3S3_bit         _BIT_ACCESS(CLC2SEL2,3)
// CLC2SEL2<LC2D3S4>
extern volatile __bit                   LC2D3S4             __at(0x78F4);	// @ (0xF1E * 8 + 4)
#define                                 LC2D3S4_bit         _BIT_ACCESS(CLC2SEL2,4)
// CLC2SEL3<LC2D4S0>
extern volatile __bit                   LC2D4S0             __at(0x78F8);	// @ (0xF1F * 8 + 0)
#define                                 LC2D4S0_bit         _BIT_ACCESS(CLC2SEL3,0)
// CLC2SEL3<LC2D4S1>
extern volatile __bit                   LC2D4S1             __at(0x78F9);	// @ (0xF1F * 8 + 1)
#define                                 LC2D4S1_bit         _BIT_ACCESS(CLC2SEL3,1)
// CLC2SEL3<LC2D4S2>
extern volatile __bit                   LC2D4S2             __at(0x78FA);	// @ (0xF1F * 8 + 2)
#define                                 LC2D4S2_bit         _BIT_ACCESS(CLC2SEL3,2)
// CLC2SEL3<LC2D4S3>
extern volatile __bit                   LC2D4S3             __at(0x78FB);	// @ (0xF1F * 8 + 3)
#define                                 LC2D4S3_bit         _BIT_ACCESS(CLC2SEL3,3)
// CLC2SEL3<LC2D4S4>
extern volatile __bit                   LC2D4S4             __at(0x78FC);	// @ (0xF1F * 8 + 4)
#define                                 LC2D4S4_bit         _BIT_ACCESS(CLC2SEL3,4)
// CLC2CON<LC2EN>
extern volatile __bit                   LC2EN               __at(0x78D7);	// @ (0xF1A * 8 + 7)
#define                                 LC2EN_bit           _BIT_ACCESS(CLC2CON,7)
// CLC2GLS0<LC2G1D1N>
extern volatile __bit                   LC2G1D1N            __at(0x7900);	// @ (0xF20 * 8 + 0)
#define                                 LC2G1D1N_bit        _BIT_ACCESS(CLC2GLS0,0)
// CLC2GLS0<LC2G1D1T>
extern volatile __bit                   LC2G1D1T            __at(0x7901);	// @ (0xF20 * 8 + 1)
#define                                 LC2G1D1T_bit        _BIT_ACCESS(CLC2GLS0,1)
// CLC2GLS0<LC2G1D2N>
extern volatile __bit                   LC2G1D2N            __at(0x7902);	// @ (0xF20 * 8 + 2)
#define                                 LC2G1D2N_bit        _BIT_ACCESS(CLC2GLS0,2)
// CLC2GLS0<LC2G1D2T>
extern volatile __bit                   LC2G1D2T            __at(0x7903);	// @ (0xF20 * 8 + 3)
#define                                 LC2G1D2T_bit        _BIT_ACCESS(CLC2GLS0,3)
// CLC2GLS0<LC2G1D3N>
extern volatile __bit                   LC2G1D3N            __at(0x7904);	// @ (0xF20 * 8 + 4)
#define                                 LC2G1D3N_bit        _BIT_ACCESS(CLC2GLS0,4)
// CLC2GLS0<LC2G1D3T>
extern volatile __bit                   LC2G1D3T            __at(0x7905);	// @ (0xF20 * 8 + 5)
#define                                 LC2G1D3T_bit        _BIT_ACCESS(CLC2GLS0,5)
// CLC2GLS0<LC2G1D4N>
extern volatile __bit                   LC2G1D4N            __at(0x7906);	// @ (0xF20 * 8 + 6)
#define                                 LC2G1D4N_bit        _BIT_ACCESS(CLC2GLS0,6)
// CLC2GLS0<LC2G1D4T>
extern volatile __bit                   LC2G1D4T            __at(0x7907);	// @ (0xF20 * 8 + 7)
#define                                 LC2G1D4T_bit        _BIT_ACCESS(CLC2GLS0,7)
// CLC2POL<LC2G1POL>
extern volatile __bit                   LC2G1POL            __at(0x78D8);	// @ (0xF1B * 8 + 0)
#define                                 LC2G1POL_bit        _BIT_ACCESS(CLC2POL,0)
// CLC2GLS1<LC2G2D1N>
extern volatile __bit                   LC2G2D1N            __at(0x7908);	// @ (0xF21 * 8 + 0)
#define                                 LC2G2D1N_bit        _BIT_ACCESS(CLC2GLS1,0)
// CLC2GLS1<LC2G2D1T>
extern volatile __bit                   LC2G2D1T            __at(0x7909);	// @ (0xF21 * 8 + 1)
#define                                 LC2G2D1T_bit        _BIT_ACCESS(CLC2GLS1,1)
// CLC2GLS1<LC2G2D2N>
extern volatile __bit                   LC2G2D2N            __at(0x790A);	// @ (0xF21 * 8 + 2)
#define                                 LC2G2D2N_bit        _BIT_ACCESS(CLC2GLS1,2)
// CLC2GLS1<LC2G2D2T>
extern volatile __bit                   LC2G2D2T            __at(0x790B);	// @ (0xF21 * 8 + 3)
#define                                 LC2G2D2T_bit        _BIT_ACCESS(CLC2GLS1,3)
// CLC2GLS1<LC2G2D3N>
extern volatile __bit                   LC2G2D3N            __at(0x790C);	// @ (0xF21 * 8 + 4)
#define                                 LC2G2D3N_bit        _BIT_ACCESS(CLC2GLS1,4)
// CLC2GLS1<LC2G2D3T>
extern volatile __bit                   LC2G2D3T            __at(0x790D);	// @ (0xF21 * 8 + 5)
#define                                 LC2G2D3T_bit        _BIT_ACCESS(CLC2GLS1,5)
// CLC2GLS1<LC2G2D4N>
extern volatile __bit                   LC2G2D4N            __at(0x790E);	// @ (0xF21 * 8 + 6)
#define                                 LC2G2D4N_bit        _BIT_ACCESS(CLC2GLS1,6)
// CLC2GLS1<LC2G2D4T>
extern volatile __bit                   LC2G2D4T            __at(0x790F);	// @ (0xF21 * 8 + 7)
#define                                 LC2G2D4T_bit        _BIT_ACCESS(CLC2GLS1,7)
// CLC2POL<LC2G2POL>
extern volatile __bit                   LC2G2POL            __at(0x78D9);	// @ (0xF1B * 8 + 1)
#define                                 LC2G2POL_bit        _BIT_ACCESS(CLC2POL,1)
// CLC2GLS2<LC2G3D1N>
extern volatile __bit                   LC2G3D1N            __at(0x7910);	// @ (0xF22 * 8 + 0)
#define                                 LC2G3D1N_bit        _BIT_ACCESS(CLC2GLS2,0)
// CLC2GLS2<LC2G3D1T>
extern volatile __bit                   LC2G3D1T            __at(0x7911);	// @ (0xF22 * 8 + 1)
#define                                 LC2G3D1T_bit        _BIT_ACCESS(CLC2GLS2,1)
// CLC2GLS2<LC2G3D2N>
extern volatile __bit                   LC2G3D2N            __at(0x7912);	// @ (0xF22 * 8 + 2)
#define                                 LC2G3D2N_bit        _BIT_ACCESS(CLC2GLS2,2)
// CLC2GLS2<LC2G3D2T>
extern volatile __bit                   LC2G3D2T            __at(0x7913);	// @ (0xF22 * 8 + 3)
#define                                 LC2G3D2T_bit        _BIT_ACCESS(CLC2GLS2,3)
// CLC2GLS2<LC2G3D3N>
extern volatile __bit                   LC2G3D3N            __at(0x7914);	// @ (0xF22 * 8 + 4)
#define                                 LC2G3D3N_bit        _BIT_ACCESS(CLC2GLS2,4)
// CLC2GLS2<LC2G3D3T>
extern volatile __bit                   LC2G3D3T            __at(0x7915);	// @ (0xF22 * 8 + 5)
#define                                 LC2G3D3T_bit        _BIT_ACCESS(CLC2GLS2,5)
// CLC2GLS2<LC2G3D4N>
extern volatile __bit                   LC2G3D4N            __at(0x7916);	// @ (0xF22 * 8 + 6)
#define                                 LC2G3D4N_bit        _BIT_ACCESS(CLC2GLS2,6)
// CLC2GLS2<LC2G3D4T>
extern volatile __bit                   LC2G3D4T            __at(0x7917);	// @ (0xF22 * 8 + 7)
#define                                 LC2G3D4T_bit        _BIT_ACCESS(CLC2GLS2,7)
// CLC2POL<LC2G3POL>
extern volatile __bit                   LC2G3POL            __at(0x78DA);	// @ (0xF1B * 8 + 2)
#define                                 LC2G3POL_bit        _BIT_ACCESS(CLC2POL,2)
// CLC2GLS3<LC2G4D1N>
extern volatile __bit                   LC2G4D1N            __at(0x7918);	// @ (0xF23 * 8 + 0)
#define                                 LC2G4D1N_bit        _BIT_ACCESS(CLC2GLS3,0)
// CLC2GLS3<LC2G4D1T>
extern volatile __bit                   LC2G4D1T            __at(0x7919);	// @ (0xF23 * 8 + 1)
#define                                 LC2G4D1T_bit        _BIT_ACCESS(CLC2GLS3,1)
// CLC2GLS3<LC2G4D2N>
extern volatile __bit                   LC2G4D2N            __at(0x791A);	// @ (0xF23 * 8 + 2)
#define                                 LC2G4D2N_bit        _BIT_ACCESS(CLC2GLS3,2)
// CLC2GLS3<LC2G4D2T>
extern volatile __bit                   LC2G4D2T            __at(0x791B);	// @ (0xF23 * 8 + 3)
#define                                 LC2G4D2T_bit        _BIT_ACCESS(CLC2GLS3,3)
// CLC2GLS3<LC2G4D3N>
extern volatile __bit                   LC2G4D3N            __at(0x791C);	// @ (0xF23 * 8 + 4)
#define                                 LC2G4D3N_bit        _BIT_ACCESS(CLC2GLS3,4)
// CLC2GLS3<LC2G4D3T>
extern volatile __bit                   LC2G4D3T            __at(0x791D);	// @ (0xF23 * 8 + 5)
#define                                 LC2G4D3T_bit        _BIT_ACCESS(CLC2GLS3,5)
// CLC2GLS3<LC2G4D4N>
extern volatile __bit                   LC2G4D4N            __at(0x791E);	// @ (0xF23 * 8 + 6)
#define                                 LC2G4D4N_bit        _BIT_ACCESS(CLC2GLS3,6)
// CLC2GLS3<LC2G4D4T>
extern volatile __bit                   LC2G4D4T            __at(0x791F);	// @ (0xF23 * 8 + 7)
#define                                 LC2G4D4T_bit        _BIT_ACCESS(CLC2GLS3,7)
// CLC2POL<LC2G4POL>
extern volatile __bit                   LC2G4POL            __at(0x78DB);	// @ (0xF1B * 8 + 3)
#define                                 LC2G4POL_bit        _BIT_ACCESS(CLC2POL,3)
// CLC2CON<LC2INTN>
extern volatile __bit                   LC2INTN             __at(0x78D3);	// @ (0xF1A * 8 + 3)
#define                                 LC2INTN_bit         _BIT_ACCESS(CLC2CON,3)
// CLC2CON<LC2INTP>
extern volatile __bit                   LC2INTP             __at(0x78D4);	// @ (0xF1A * 8 + 4)
#define                                 LC2INTP_bit         _BIT_ACCESS(CLC2CON,4)
// CLC2CON<LC2MODE0>
extern volatile __bit                   LC2MODE0            __at(0x78D0);	// @ (0xF1A * 8 + 0)
#define                                 LC2MODE0_bit        _BIT_ACCESS(CLC2CON,0)
// CLC2CON<LC2MODE1>
extern volatile __bit                   LC2MODE1            __at(0x78D1);	// @ (0xF1A * 8 + 1)
#define                                 LC2MODE1_bit        _BIT_ACCESS(CLC2CON,1)
// CLC2CON<LC2MODE2>
extern volatile __bit                   LC2MODE2            __at(0x78D2);	// @ (0xF1A * 8 + 2)
#define                                 LC2MODE2_bit        _BIT_ACCESS(CLC2CON,2)
// CLC2CON<LC2OUT>
extern volatile __bit                   LC2OUT              __at(0x78D5);	// @ (0xF1A * 8 + 5)
#define                                 LC2OUT_bit          _BIT_ACCESS(CLC2CON,5)
// CLC2POL<LC2POL>
extern volatile __bit                   LC2POL              __at(0x78DF);	// @ (0xF1B * 8 + 7)
#define                                 LC2POL_bit          _BIT_ACCESS(CLC2POL,7)
// CWG1CON0<LD>
extern volatile __bit                   LD                  __at(0x34AE);	// @ (0x695 * 8 + 6)
#define                                 LD_bit              _BIT_ACCESS(CWG1CON0,6)
// OSCEN<LFOEN>
extern volatile __bit                   LFOEN               __at(0x48EC);	// @ (0x91D * 8 + 4)
#define                                 LFOEN_bit           _BIT_ACCESS(OSCEN,4)
// OSCSTAT1<LFOR>
extern volatile __bit                   LFOR                __at(0x48E4);	// @ (0x91C * 8 + 4)
#define                                 LFOR_bit            _BIT_ACCESS(OSCSTAT1,4)
// CWG1AS0<LSAC0>
extern volatile __bit                   LSAC0               __at(0x34BA);	// @ (0x697 * 8 + 2)
#define                                 LSAC0_bit           _BIT_ACCESS(CWG1AS0,2)
// CWG1AS0<LSAC1>
extern volatile __bit                   LSAC1               __at(0x34BB);	// @ (0x697 * 8 + 3)
#define                                 LSAC1_bit           _BIT_ACCESS(CWG1AS0,3)
// CWG1AS0<LSBD0>
extern volatile __bit                   LSBD0               __at(0x34BC);	// @ (0x697 * 8 + 4)
#define                                 LSBD0_bit           _BIT_ACCESS(CWG1AS0,4)
// CWG1AS0<LSBD1>
extern volatile __bit                   LSBD1               __at(0x34BD);	// @ (0x697 * 8 + 5)
#define                                 LSBD1_bit           _BIT_ACCESS(CWG1AS0,5)
// NVMCON1<LWLO>
extern volatile __bit                   LWLO                __at(0x44AD);	// @ (0x895 * 8 + 5)
#define                                 LWLO_bit            _BIT_ACCESS(NVMCON1,5)
// CMOUT<MC1OUT>
extern volatile __bit                   MC1OUT              __at(0x8A8);	// @ (0x115 * 8 + 0)
#define                                 MC1OUT_bit          _BIT_ACCESS(CMOUT,0)
// MDCON<MDBIT>
extern volatile __bit                   MDBIT               __at(0x1CE0);	// @ (0x39C * 8 + 0)
#define                                 MDBIT_bit           _BIT_ACCESS(MDCON,0)
// MDCARH<MDCH0>
extern volatile __bit                   MDCH0               __at(0x1CF0);	// @ (0x39E * 8 + 0)
#define                                 MDCH0_bit           _BIT_ACCESS(MDCARH,0)
// MDCARH<MDCH1>
extern volatile __bit                   MDCH1               __at(0x1CF1);	// @ (0x39E * 8 + 1)
#define                                 MDCH1_bit           _BIT_ACCESS(MDCARH,1)
// MDCARH<MDCH2>
extern volatile __bit                   MDCH2               __at(0x1CF2);	// @ (0x39E * 8 + 2)
#define                                 MDCH2_bit           _BIT_ACCESS(MDCARH,2)
// MDCARH<MDCH3>
extern volatile __bit                   MDCH3               __at(0x1CF3);	// @ (0x39E * 8 + 3)
#define                                 MDCH3_bit           _BIT_ACCESS(MDCARH,3)
// MDCARH<MDCHPOL>
extern volatile __bit                   MDCHPOL             __at(0x1CF6);	// @ (0x39E * 8 + 6)
#define                                 MDCHPOL_bit         _BIT_ACCESS(MDCARH,6)
// MDCARH<MDCHSYNC>
extern volatile __bit                   MDCHSYNC            __at(0x1CF5);	// @ (0x39E * 8 + 5)
#define                                 MDCHSYNC_bit        _BIT_ACCESS(MDCARH,5)
// MDCIN1PPS<MDCIN1PPS0>
extern volatile __bit                   MDCIN1PPS0          __at(0x70D0);	// @ (0xE1A * 8 + 0)
#define                                 MDCIN1PPS0_bit      _BIT_ACCESS(MDCIN1PPS,0)
// MDCIN1PPS<MDCIN1PPS1>
extern volatile __bit                   MDCIN1PPS1          __at(0x70D1);	// @ (0xE1A * 8 + 1)
#define                                 MDCIN1PPS1_bit      _BIT_ACCESS(MDCIN1PPS,1)
// MDCIN1PPS<MDCIN1PPS2>
extern volatile __bit                   MDCIN1PPS2          __at(0x70D2);	// @ (0xE1A * 8 + 2)
#define                                 MDCIN1PPS2_bit      _BIT_ACCESS(MDCIN1PPS,2)
// MDCIN1PPS<MDCIN1PPS3>
extern volatile __bit                   MDCIN1PPS3          __at(0x70D3);	// @ (0xE1A * 8 + 3)
#define                                 MDCIN1PPS3_bit      _BIT_ACCESS(MDCIN1PPS,3)
// MDCIN1PPS<MDCIN1PPS4>
extern volatile __bit                   MDCIN1PPS4          __at(0x70D4);	// @ (0xE1A * 8 + 4)
#define                                 MDCIN1PPS4_bit      _BIT_ACCESS(MDCIN1PPS,4)
// MDCIN2PPS<MDCIN2PPS0>
extern volatile __bit                   MDCIN2PPS0          __at(0x70D8);	// @ (0xE1B * 8 + 0)
#define                                 MDCIN2PPS0_bit      _BIT_ACCESS(MDCIN2PPS,0)
// MDCIN2PPS<MDCIN2PPS1>
extern volatile __bit                   MDCIN2PPS1          __at(0x70D9);	// @ (0xE1B * 8 + 1)
#define                                 MDCIN2PPS1_bit      _BIT_ACCESS(MDCIN2PPS,1)
// MDCIN2PPS<MDCIN2PPS2>
extern volatile __bit                   MDCIN2PPS2          __at(0x70DA);	// @ (0xE1B * 8 + 2)
#define                                 MDCIN2PPS2_bit      _BIT_ACCESS(MDCIN2PPS,2)
// MDCIN2PPS<MDCIN2PPS3>
extern volatile __bit                   MDCIN2PPS3          __at(0x70DB);	// @ (0xE1B * 8 + 3)
#define                                 MDCIN2PPS3_bit      _BIT_ACCESS(MDCIN2PPS,3)
// MDCIN2PPS<MDCIN2PPS4>
extern volatile __bit                   MDCIN2PPS4          __at(0x70DC);	// @ (0xE1B * 8 + 4)
#define                                 MDCIN2PPS4_bit      _BIT_ACCESS(MDCIN2PPS,4)
// MDCARL<MDCL0>
extern volatile __bit                   MDCL0               __at(0x1CF8);	// @ (0x39F * 8 + 0)
#define                                 MDCL0_bit           _BIT_ACCESS(MDCARL,0)
// MDCARL<MDCL1>
extern volatile __bit                   MDCL1               __at(0x1CF9);	// @ (0x39F * 8 + 1)
#define                                 MDCL1_bit           _BIT_ACCESS(MDCARL,1)
// MDCARL<MDCL2>
extern volatile __bit                   MDCL2               __at(0x1CFA);	// @ (0x39F * 8 + 2)
#define                                 MDCL2_bit           _BIT_ACCESS(MDCARL,2)
// MDCARL<MDCL3>
extern volatile __bit                   MDCL3               __at(0x1CFB);	// @ (0x39F * 8 + 3)
#define                                 MDCL3_bit           _BIT_ACCESS(MDCARL,3)
// MDCARL<MDCLPOL>
extern volatile __bit                   MDCLPOL             __at(0x1CFE);	// @ (0x39F * 8 + 6)
#define                                 MDCLPOL_bit         _BIT_ACCESS(MDCARL,6)
// MDCARL<MDCLSYNC>
extern volatile __bit                   MDCLSYNC            __at(0x1CFD);	// @ (0x39F * 8 + 5)
#define                                 MDCLSYNC_bit        _BIT_ACCESS(MDCARL,5)
// MDCON<MDEN>
extern volatile __bit                   MDEN                __at(0x1CE7);	// @ (0x39C * 8 + 7)
#define                                 MDEN_bit            _BIT_ACCESS(MDCON,7)
// MDMINPPS<MDMINPPS0>
extern volatile __bit                   MDMINPPS0           __at(0x70E0);	// @ (0xE1C * 8 + 0)
#define                                 MDMINPPS0_bit       _BIT_ACCESS(MDMINPPS,0)
// MDMINPPS<MDMINPPS1>
extern volatile __bit                   MDMINPPS1           __at(0x70E1);	// @ (0xE1C * 8 + 1)
#define                                 MDMINPPS1_bit       _BIT_ACCESS(MDMINPPS,1)
// MDMINPPS<MDMINPPS2>
extern volatile __bit                   MDMINPPS2           __at(0x70E2);	// @ (0xE1C * 8 + 2)
#define                                 MDMINPPS2_bit       _BIT_ACCESS(MDMINPPS,2)
// MDMINPPS<MDMINPPS3>
extern volatile __bit                   MDMINPPS3           __at(0x70E3);	// @ (0xE1C * 8 + 3)
#define                                 MDMINPPS3_bit       _BIT_ACCESS(MDMINPPS,3)
// MDMINPPS<MDMINPPS4>
extern volatile __bit                   MDMINPPS4           __at(0x70E4);	// @ (0xE1C * 8 + 4)
#define                                 MDMINPPS4_bit       _BIT_ACCESS(MDMINPPS,4)
// MDSRC<MDMS0>
extern volatile __bit                   MDMS0               __at(0x1CE8);	// @ (0x39D * 8 + 0)
#define                                 MDMS0_bit           _BIT_ACCESS(MDSRC,0)
// MDSRC<MDMS1>
extern volatile __bit                   MDMS1               __at(0x1CE9);	// @ (0x39D * 8 + 1)
#define                                 MDMS1_bit           _BIT_ACCESS(MDSRC,1)
// MDSRC<MDMS2>
extern volatile __bit                   MDMS2               __at(0x1CEA);	// @ (0x39D * 8 + 2)
#define                                 MDMS2_bit           _BIT_ACCESS(MDSRC,2)
// MDSRC<MDMS3>
extern volatile __bit                   MDMS3               __at(0x1CEB);	// @ (0x39D * 8 + 3)
#define                                 MDMS3_bit           _BIT_ACCESS(MDSRC,3)
// MDCON<MDOPOL>
extern volatile __bit                   MDOPOL              __at(0x1CE4);	// @ (0x39C * 8 + 4)
#define                                 MDOPOL_bit          _BIT_ACCESS(MDCON,4)
// MDCON<MDOUT>
extern volatile __bit                   MDOUT               __at(0x1CE3);	// @ (0x39C * 8 + 3)
#define                                 MDOUT_bit           _BIT_ACCESS(MDCON,3)
// CLCDATA<MLC1OUT>
extern volatile __bit                   MLC1OUT             __at(0x7878);	// @ (0xF0F * 8 + 0)
#define                                 MLC1OUT_bit         _BIT_ACCESS(CLCDATA,0)
// CLCDATA<MLC2OUT>
extern volatile __bit                   MLC2OUT             __at(0x7879);	// @ (0xF0F * 8 + 1)
#define                                 MLC2OUT_bit         _BIT_ACCESS(CLCDATA,1)
// SSP1MSK<MSK0>
extern volatile __bit                   MSK0                __at(0x1098);	// @ (0x213 * 8 + 0)
#define                                 MSK0_bit            _BIT_ACCESS(SSP1MSK,0)
// SSP1MSK<MSK1>
extern volatile __bit                   MSK1                __at(0x1099);	// @ (0x213 * 8 + 1)
#define                                 MSK1_bit            _BIT_ACCESS(SSP1MSK,1)
// SSP1MSK<MSK2>
extern volatile __bit                   MSK2                __at(0x109A);	// @ (0x213 * 8 + 2)
#define                                 MSK2_bit            _BIT_ACCESS(SSP1MSK,2)
// SSP1MSK<MSK3>
extern volatile __bit                   MSK3                __at(0x109B);	// @ (0x213 * 8 + 3)
#define                                 MSK3_bit            _BIT_ACCESS(SSP1MSK,3)
// SSP1MSK<MSK4>
extern volatile __bit                   MSK4                __at(0x109C);	// @ (0x213 * 8 + 4)
#define                                 MSK4_bit            _BIT_ACCESS(SSP1MSK,4)
// SSP1MSK<MSK5>
extern volatile __bit                   MSK5                __at(0x109D);	// @ (0x213 * 8 + 5)
#define                                 MSK5_bit            _BIT_ACCESS(SSP1MSK,5)
// SSP1MSK<MSK6>
extern volatile __bit                   MSK6                __at(0x109E);	// @ (0x213 * 8 + 6)
#define                                 MSK6_bit            _BIT_ACCESS(SSP1MSK,6)
// SSP1MSK<MSK7>
extern volatile __bit                   MSK7                __at(0x109F);	// @ (0x213 * 8 + 7)
#define                                 MSK7_bit            _BIT_ACCESS(SSP1MSK,7)
// PMD4<MSSP1MD>
extern volatile __bit                   MSSP1MD             __at(0x48A9);	// @ (0x915 * 8 + 1)
#define                                 MSSP1MD_bit         _BIT_ACCESS(PMD4,1)
// NCO1CON<N1EN>
extern volatile __bit                   N1EN                __at(0x24F7);	// @ (0x49E * 8 + 7)
#define                                 N1EN_bit            _BIT_ACCESS(NCO1CON,7)
// NCO1CON<N1OUT>
extern volatile __bit                   N1OUT               __at(0x24F5);	// @ (0x49E * 8 + 5)
#define                                 N1OUT_bit           _BIT_ACCESS(NCO1CON,5)
// NCO1CON<N1PFM>
extern volatile __bit                   N1PFM               __at(0x24F0);	// @ (0x49E * 8 + 0)
#define                                 N1PFM_bit           _BIT_ACCESS(NCO1CON,0)
// NCO1CON<N1POL>
extern volatile __bit                   N1POL               __at(0x24F4);	// @ (0x49E * 8 + 4)
#define                                 N1POL_bit           _BIT_ACCESS(NCO1CON,4)
// PIE2<NCO1IE>
extern volatile __bit                   NCO1IE              __at(0x490);	// @ (0x92 * 8 + 0)
#define                                 NCO1IE_bit          _BIT_ACCESS(PIE2,0)
// PIR2<NCO1IF>
extern volatile __bit                   NCO1IF              __at(0x90);	// @ (0x12 * 8 + 0)
#define                                 NCO1IF_bit          _BIT_ACCESS(PIR2,0)
// PMD1<NCOMD>
extern volatile __bit                   NCOMD               __at(0x4897);	// @ (0x912 * 8 + 7)
#define                                 NCOMD_bit           _BIT_ACCESS(PMD1,7)
// OSCCON1<NDIV0>
extern volatile __bit                   NDIV0               __at(0x48C8);	// @ (0x919 * 8 + 0)
#define                                 NDIV0_bit           _BIT_ACCESS(OSCCON1,0)
// OSCCON1<NDIV1>
extern volatile __bit                   NDIV1               __at(0x48C9);	// @ (0x919 * 8 + 1)
#define                                 NDIV1_bit           _BIT_ACCESS(OSCCON1,1)
// OSCCON1<NDIV2>
extern volatile __bit                   NDIV2               __at(0x48CA);	// @ (0x919 * 8 + 2)
#define                                 NDIV2_bit           _BIT_ACCESS(OSCCON1,2)
// OSCCON1<NDIV3>
extern volatile __bit                   NDIV3               __at(0x48CB);	// @ (0x919 * 8 + 3)
#define                                 NDIV3_bit           _BIT_ACCESS(OSCCON1,3)
// OSCCON1<NOSC0>
extern volatile __bit                   NOSC0               __at(0x48CC);	// @ (0x919 * 8 + 4)
#define                                 NOSC0_bit           _BIT_ACCESS(OSCCON1,4)
// OSCCON1<NOSC1>
extern volatile __bit                   NOSC1               __at(0x48CD);	// @ (0x919 * 8 + 5)
#define                                 NOSC1_bit           _BIT_ACCESS(OSCCON1,5)
// OSCCON1<NOSC2>
extern volatile __bit                   NOSC2               __at(0x48CE);	// @ (0x919 * 8 + 6)
#define                                 NOSC2_bit           _BIT_ACCESS(OSCCON1,6)
// OSCCON3<NOSCR>
extern volatile __bit                   NOSCR               __at(0x48DB);	// @ (0x91B * 8 + 3)
#define                                 NOSCR_bit           _BIT_ACCESS(OSCCON3,3)
// NVMADRL<NVMADR0>
extern volatile __bit                   NVMADR0             __at(0x4488);	// @ (0x891 * 8 + 0)
#define                                 NVMADR0_bit         _BIT_ACCESS(NVMADRL,0)
// NVMADRL<NVMADR1>
extern volatile __bit                   NVMADR1             __at(0x4489);	// @ (0x891 * 8 + 1)
#define                                 NVMADR1_bit         _BIT_ACCESS(NVMADRL,1)
// NVMADRH<NVMADR10>
extern volatile __bit                   NVMADR10            __at(0x4492);	// @ (0x892 * 8 + 2)
#define                                 NVMADR10_bit        _BIT_ACCESS(NVMADRH,2)
// NVMADRH<NVMADR11>
extern volatile __bit                   NVMADR11            __at(0x4493);	// @ (0x892 * 8 + 3)
#define                                 NVMADR11_bit        _BIT_ACCESS(NVMADRH,3)
// NVMADRH<NVMADR12>
extern volatile __bit                   NVMADR12            __at(0x4494);	// @ (0x892 * 8 + 4)
#define                                 NVMADR12_bit        _BIT_ACCESS(NVMADRH,4)
// NVMADRH<NVMADR13>
extern volatile __bit                   NVMADR13            __at(0x4495);	// @ (0x892 * 8 + 5)
#define                                 NVMADR13_bit        _BIT_ACCESS(NVMADRH,5)
// NVMADRH<NVMADR14>
extern volatile __bit                   NVMADR14            __at(0x4496);	// @ (0x892 * 8 + 6)
#define                                 NVMADR14_bit        _BIT_ACCESS(NVMADRH,6)
// NVMADRL<NVMADR2>
extern volatile __bit                   NVMADR2             __at(0x448A);	// @ (0x891 * 8 + 2)
#define                                 NVMADR2_bit         _BIT_ACCESS(NVMADRL,2)
// NVMADRL<NVMADR3>
extern volatile __bit                   NVMADR3             __at(0x448B);	// @ (0x891 * 8 + 3)
#define                                 NVMADR3_bit         _BIT_ACCESS(NVMADRL,3)
// NVMADRL<NVMADR4>
extern volatile __bit                   NVMADR4             __at(0x448C);	// @ (0x891 * 8 + 4)
#define                                 NVMADR4_bit         _BIT_ACCESS(NVMADRL,4)
// NVMADRL<NVMADR5>
extern volatile __bit                   NVMADR5             __at(0x448D);	// @ (0x891 * 8 + 5)
#define                                 NVMADR5_bit         _BIT_ACCESS(NVMADRL,5)
// NVMADRL<NVMADR6>
extern volatile __bit                   NVMADR6             __at(0x448E);	// @ (0x891 * 8 + 6)
#define                                 NVMADR6_bit         _BIT_ACCESS(NVMADRL,6)
// NVMADRL<NVMADR7>
extern volatile __bit                   NVMADR7             __at(0x448F);	// @ (0x891 * 8 + 7)
#define                                 NVMADR7_bit         _BIT_ACCESS(NVMADRL,7)
// NVMADRH<NVMADR8>
extern volatile __bit                   NVMADR8             __at(0x4490);	// @ (0x892 * 8 + 0)
#define                                 NVMADR8_bit         _BIT_ACCESS(NVMADRH,0)
// NVMADRH<NVMADR9>
extern volatile __bit                   NVMADR9             __at(0x4491);	// @ (0x892 * 8 + 1)
#define                                 NVMADR9_bit         _BIT_ACCESS(NVMADRH,1)
// NVMDATL<NVMDAT0>
extern volatile __bit                   NVMDAT0             __at(0x4498);	// @ (0x893 * 8 + 0)
#define                                 NVMDAT0_bit         _BIT_ACCESS(NVMDATL,0)
// NVMDATL<NVMDAT1>
extern volatile __bit                   NVMDAT1             __at(0x4499);	// @ (0x893 * 8 + 1)
#define                                 NVMDAT1_bit         _BIT_ACCESS(NVMDATL,1)
// NVMDATH<NVMDAT10>
extern volatile __bit                   NVMDAT10            __at(0x44A2);	// @ (0x894 * 8 + 2)
#define                                 NVMDAT10_bit        _BIT_ACCESS(NVMDATH,2)
// NVMDATH<NVMDAT11>
extern volatile __bit                   NVMDAT11            __at(0x44A3);	// @ (0x894 * 8 + 3)
#define                                 NVMDAT11_bit        _BIT_ACCESS(NVMDATH,3)
// NVMDATH<NVMDAT12>
extern volatile __bit                   NVMDAT12            __at(0x44A4);	// @ (0x894 * 8 + 4)
#define                                 NVMDAT12_bit        _BIT_ACCESS(NVMDATH,4)
// NVMDATH<NVMDAT13>
extern volatile __bit                   NVMDAT13            __at(0x44A5);	// @ (0x894 * 8 + 5)
#define                                 NVMDAT13_bit        _BIT_ACCESS(NVMDATH,5)
// NVMDATL<NVMDAT2>
extern volatile __bit                   NVMDAT2             __at(0x449A);	// @ (0x893 * 8 + 2)
#define                                 NVMDAT2_bit         _BIT_ACCESS(NVMDATL,2)
// NVMDATL<NVMDAT3>
extern volatile __bit                   NVMDAT3             __at(0x449B);	// @ (0x893 * 8 + 3)
#define                                 NVMDAT3_bit         _BIT_ACCESS(NVMDATL,3)
// NVMDATL<NVMDAT4>
extern volatile __bit                   NVMDAT4             __at(0x449C);	// @ (0x893 * 8 + 4)
#define                                 NVMDAT4_bit         _BIT_ACCESS(NVMDATL,4)
// NVMDATL<NVMDAT5>
extern volatile __bit                   NVMDAT5             __at(0x449D);	// @ (0x893 * 8 + 5)
#define                                 NVMDAT5_bit         _BIT_ACCESS(NVMDATL,5)
// NVMDATL<NVMDAT6>
extern volatile __bit                   NVMDAT6             __at(0x449E);	// @ (0x893 * 8 + 6)
#define                                 NVMDAT6_bit         _BIT_ACCESS(NVMDATL,6)
// NVMDATL<NVMDAT7>
extern volatile __bit                   NVMDAT7             __at(0x449F);	// @ (0x893 * 8 + 7)
#define                                 NVMDAT7_bit         _BIT_ACCESS(NVMDATL,7)
// NVMDATH<NVMDAT8>
extern volatile __bit                   NVMDAT8             __at(0x44A0);	// @ (0x894 * 8 + 0)
#define                                 NVMDAT8_bit         _BIT_ACCESS(NVMDATH,0)
// NVMDATH<NVMDAT9>
extern volatile __bit                   NVMDAT9             __at(0x44A1);	// @ (0x894 * 8 + 1)
#define                                 NVMDAT9_bit         _BIT_ACCESS(NVMDATH,1)
// PIE2<NVMIE>
extern volatile __bit                   NVMIE               __at(0x494);	// @ (0x92 * 8 + 4)
#define                                 NVMIE_bit           _BIT_ACCESS(PIE2,4)
// PIR2<NVMIF>
extern volatile __bit                   NVMIF               __at(0x94);	// @ (0x12 * 8 + 4)
#define                                 NVMIF_bit           _BIT_ACCESS(PIR2,4)
// PMD0<NVMMD>
extern volatile __bit                   NVMMD               __at(0x488A);	// @ (0x911 * 8 + 2)
#define                                 NVMMD_bit           _BIT_ACCESS(PMD0,2)
// NVMCON1<NVMREGS>
extern volatile __bit                   NVMREGS             __at(0x44AE);	// @ (0x895 * 8 + 6)
#define                                 NVMREGS_bit         _BIT_ACCESS(NVMCON1,6)
// ODCONA<ODCA0>
extern volatile __bit                   ODCA0               __at(0x1460);	// @ (0x28C * 8 + 0)
#define                                 ODCA0_bit           _BIT_ACCESS(ODCONA,0)
// ODCONA<ODCA1>
extern volatile __bit                   ODCA1               __at(0x1461);	// @ (0x28C * 8 + 1)
#define                                 ODCA1_bit           _BIT_ACCESS(ODCONA,1)
// ODCONA<ODCA2>
extern volatile __bit                   ODCA2               __at(0x1462);	// @ (0x28C * 8 + 2)
#define                                 ODCA2_bit           _BIT_ACCESS(ODCONA,2)
// ODCONA<ODCA4>
extern volatile __bit                   ODCA4               __at(0x1464);	// @ (0x28C * 8 + 4)
#define                                 ODCA4_bit           _BIT_ACCESS(ODCONA,4)
// ODCONA<ODCA5>
extern volatile __bit                   ODCA5               __at(0x1465);	// @ (0x28C * 8 + 5)
#define                                 ODCA5_bit           _BIT_ACCESS(ODCONA,5)
// RC1STA<OERR>
extern volatile __bit                   OERR                __at(0xCE9);	// @ (0x19D * 8 + 1)
#define                                 OERR_bit            _BIT_ACCESS(RC1STA,1)
// OSCCON3<ORDY>
extern volatile __bit                   ORDY                __at(0x48DC);	// @ (0x91B * 8 + 4)
#define                                 ORDY_bit            _BIT_ACCESS(OSCCON3,4)
// PIE3<OSFIE>
extern volatile __bit                   OSFIE               __at(0x49F);	// @ (0x93 * 8 + 7)
#define                                 OSFIE_bit           _BIT_ACCESS(PIE3,7)
// PIR3<OSFIF>
extern volatile __bit                   OSFIF               __at(0x9F);	// @ (0x13 * 8 + 7)
#define                                 OSFIF_bit           _BIT_ACCESS(PIR3,7)
// CWG1STR<OVRA>
extern volatile __bit                   OVRA                __at(0x34CC);	// @ (0x699 * 8 + 4)
#define                                 OVRA_bit            _BIT_ACCESS(CWG1STR,4)
// CWG1STR<OVRB>
extern volatile __bit                   OVRB                __at(0x34CD);	// @ (0x699 * 8 + 5)
#define                                 OVRB_bit            _BIT_ACCESS(CWG1STR,5)
// CWG1STR<OVRC>
extern volatile __bit                   OVRC                __at(0x34CE);	// @ (0x699 * 8 + 6)
#define                                 OVRC_bit            _BIT_ACCESS(CWG1STR,6)
// CWG1STR<OVRD>
extern volatile __bit                   OVRD                __at(0x34CF);	// @ (0x699 * 8 + 7)
#define                                 OVRD_bit            _BIT_ACCESS(CWG1STR,7)
// SSP1CON3<PCIE>
extern volatile __bit                   PCIE                __at(0x10BE);	// @ (0x217 * 8 + 6)
#define                                 PCIE_bit            _BIT_ACCESS(SSP1CON3,6)
// INTCON<PEIE>
extern volatile __bit                   PEIE                __at(0x5E);	// @ (0xB * 8 + 6)
#define                                 PEIE_bit            _BIT_ACCESS(INTCON,6)
// SSP1CON2<PEN>
extern volatile __bit                   PEN                 __at(0x10B2);	// @ (0x216 * 8 + 2)
#define                                 PEN_bit             _BIT_ACCESS(SSP1CON2,2)
// OSCSTAT1<PLLR>
extern volatile __bit                   PLLR                __at(0x48E0);	// @ (0x91C * 8 + 0)
#define                                 PLLR_bit            _BIT_ACCESS(OSCSTAT1,0)
// CWG1CON1<POLA>
extern volatile __bit                   POLA                __at(0x34B0);	// @ (0x696 * 8 + 0)
#define                                 POLA_bit            _BIT_ACCESS(CWG1CON1,0)
// CWG1CON1<POLB>
extern volatile __bit                   POLB                __at(0x34B1);	// @ (0x696 * 8 + 1)
#define                                 POLB_bit            _BIT_ACCESS(CWG1CON1,1)
// CWG1CON1<POLC>
extern volatile __bit                   POLC                __at(0x34B2);	// @ (0x696 * 8 + 2)
#define                                 POLC_bit            _BIT_ACCESS(CWG1CON1,2)
// CWG1CON1<POLD>
extern volatile __bit                   POLD                __at(0x34B3);	// @ (0x696 * 8 + 3)
#define                                 POLD_bit            _BIT_ACCESS(CWG1CON1,3)
// PPSLOCK<PPSLOCKED>
extern volatile __bit                   PPSLOCKED           __at(0x7078);	// @ (0xE0F * 8 + 0)
#define                                 PPSLOCKED_bit       _BIT_ACCESS(PPSLOCK,0)
// TMR0H<PR00>
extern volatile __bit                   PR00                __at(0xB0);	// @ (0x16 * 8 + 0)
#define                                 PR00_bit            _BIT_ACCESS(TMR0H,0)
// TMR0H<PR01>
extern volatile __bit                   PR01                __at(0xB1);	// @ (0x16 * 8 + 1)
#define                                 PR01_bit            _BIT_ACCESS(TMR0H,1)
// TMR0H<PR02>
extern volatile __bit                   PR02                __at(0xB2);	// @ (0x16 * 8 + 2)
#define                                 PR02_bit            _BIT_ACCESS(TMR0H,2)
// TMR0H<PR03>
extern volatile __bit                   PR03                __at(0xB3);	// @ (0x16 * 8 + 3)
#define                                 PR03_bit            _BIT_ACCESS(TMR0H,3)
// TMR0H<PR04>
extern volatile __bit                   PR04                __at(0xB4);	// @ (0x16 * 8 + 4)
#define                                 PR04_bit            _BIT_ACCESS(TMR0H,4)
// TMR0H<PR05>
extern volatile __bit                   PR05                __at(0xB5);	// @ (0x16 * 8 + 5)
#define                                 PR05_bit            _BIT_ACCESS(TMR0H,5)
// TMR0H<PR06>
extern volatile __bit                   PR06                __at(0xB6);	// @ (0x16 * 8 + 6)
#define                                 PR06_bit            _BIT_ACCESS(TMR0H,6)
// TMR0H<PR07>
extern volatile __bit                   PR07                __at(0xB7);	// @ (0x16 * 8 + 7)
#define                                 PR07_bit            _BIT_ACCESS(TMR0H,7)
// PWM5DCH<PWM5DCH0>
extern volatile __bit                   PWM5DCH0            __at(0x30C0);	// @ (0x618 * 8 + 0)
#define                                 PWM5DCH0_bit        _BIT_ACCESS(PWM5DCH,0)
// PWM5DCH<PWM5DCH1>
extern volatile __bit                   PWM5DCH1            __at(0x30C1);	// @ (0x618 * 8 + 1)
#define                                 PWM5DCH1_bit        _BIT_ACCESS(PWM5DCH,1)
// PWM5DCH<PWM5DCH2>
extern volatile __bit                   PWM5DCH2            __at(0x30C2);	// @ (0x618 * 8 + 2)
#define                                 PWM5DCH2_bit        _BIT_ACCESS(PWM5DCH,2)
// PWM5DCH<PWM5DCH3>
extern volatile __bit                   PWM5DCH3            __at(0x30C3);	// @ (0x618 * 8 + 3)
#define                                 PWM5DCH3_bit        _BIT_ACCESS(PWM5DCH,3)
// PWM5DCH<PWM5DCH4>
extern volatile __bit                   PWM5DCH4            __at(0x30C4);	// @ (0x618 * 8 + 4)
#define                                 PWM5DCH4_bit        _BIT_ACCESS(PWM5DCH,4)
// PWM5DCH<PWM5DCH5>
extern volatile __bit                   PWM5DCH5            __at(0x30C5);	// @ (0x618 * 8 + 5)
#define                                 PWM5DCH5_bit        _BIT_ACCESS(PWM5DCH,5)
// PWM5DCH<PWM5DCH6>
extern volatile __bit                   PWM5DCH6            __at(0x30C6);	// @ (0x618 * 8 + 6)
#define                                 PWM5DCH6_bit        _BIT_ACCESS(PWM5DCH,6)
// PWM5DCH<PWM5DCH7>
extern volatile __bit                   PWM5DCH7            __at(0x30C7);	// @ (0x618 * 8 + 7)
#define                                 PWM5DCH7_bit        _BIT_ACCESS(PWM5DCH,7)
// PWM5DCL<PWM5DCL0>
extern volatile __bit                   PWM5DCL0            __at(0x30BE);	// @ (0x617 * 8 + 6)
#define                                 PWM5DCL0_bit        _BIT_ACCESS(PWM5DCL,6)
// PWM5DCL<PWM5DCL1>
extern volatile __bit                   PWM5DCL1            __at(0x30BF);	// @ (0x617 * 8 + 7)
#define                                 PWM5DCL1_bit        _BIT_ACCESS(PWM5DCL,7)
// PWM5CON<PWM5EN>
extern volatile __bit                   PWM5EN              __at(0x30CF);	// @ (0x619 * 8 + 7)
#define                                 PWM5EN_bit          _BIT_ACCESS(PWM5CON,7)
// PMD3<PWM5MD>
extern volatile __bit                   PWM5MD              __at(0x48A4);	// @ (0x914 * 8 + 4)
#define                                 PWM5MD_bit          _BIT_ACCESS(PMD3,4)
// PWM5CON<PWM5OUT>
extern volatile __bit                   PWM5OUT             __at(0x30CD);	// @ (0x619 * 8 + 5)
#define                                 PWM5OUT_bit         _BIT_ACCESS(PWM5CON,5)
// PWM5CON<PWM5POL>
extern volatile __bit                   PWM5POL             __at(0x30CC);	// @ (0x619 * 8 + 4)
#define                                 PWM5POL_bit         _BIT_ACCESS(PWM5CON,4)
// PWM6DCH<PWM6DCH0>
extern volatile __bit                   PWM6DCH0            __at(0x30D8);	// @ (0x61B * 8 + 0)
#define                                 PWM6DCH0_bit        _BIT_ACCESS(PWM6DCH,0)
// PWM6DCH<PWM6DCH1>
extern volatile __bit                   PWM6DCH1            __at(0x30D9);	// @ (0x61B * 8 + 1)
#define                                 PWM6DCH1_bit        _BIT_ACCESS(PWM6DCH,1)
// PWM6DCH<PWM6DCH2>
extern volatile __bit                   PWM6DCH2            __at(0x30DA);	// @ (0x61B * 8 + 2)
#define                                 PWM6DCH2_bit        _BIT_ACCESS(PWM6DCH,2)
// PWM6DCH<PWM6DCH3>
extern volatile __bit                   PWM6DCH3            __at(0x30DB);	// @ (0x61B * 8 + 3)
#define                                 PWM6DCH3_bit        _BIT_ACCESS(PWM6DCH,3)
// PWM6DCH<PWM6DCH4>
extern volatile __bit                   PWM6DCH4            __at(0x30DC);	// @ (0x61B * 8 + 4)
#define                                 PWM6DCH4_bit        _BIT_ACCESS(PWM6DCH,4)
// PWM6DCH<PWM6DCH5>
extern volatile __bit                   PWM6DCH5            __at(0x30DD);	// @ (0x61B * 8 + 5)
#define                                 PWM6DCH5_bit        _BIT_ACCESS(PWM6DCH,5)
// PWM6DCH<PWM6DCH6>
extern volatile __bit                   PWM6DCH6            __at(0x30DE);	// @ (0x61B * 8 + 6)
#define                                 PWM6DCH6_bit        _BIT_ACCESS(PWM6DCH,6)
// PWM6DCH<PWM6DCH7>
extern volatile __bit                   PWM6DCH7            __at(0x30DF);	// @ (0x61B * 8 + 7)
#define                                 PWM6DCH7_bit        _BIT_ACCESS(PWM6DCH,7)
// PWM6DCL<PWM6DCL0>
extern volatile __bit                   PWM6DCL0            __at(0x30D6);	// @ (0x61A * 8 + 6)
#define                                 PWM6DCL0_bit        _BIT_ACCESS(PWM6DCL,6)
// PWM6DCL<PWM6DCL1>
extern volatile __bit                   PWM6DCL1            __at(0x30D7);	// @ (0x61A * 8 + 7)
#define                                 PWM6DCL1_bit        _BIT_ACCESS(PWM6DCL,7)
// PWM6CON<PWM6EN>
extern volatile __bit                   PWM6EN              __at(0x30E7);	// @ (0x61C * 8 + 7)
#define                                 PWM6EN_bit          _BIT_ACCESS(PWM6CON,7)
// PMD3<PWM6MD>
extern volatile __bit                   PWM6MD              __at(0x48A5);	// @ (0x914 * 8 + 5)
#define                                 PWM6MD_bit          _BIT_ACCESS(PMD3,5)
// PWM6CON<PWM6OUT>
extern volatile __bit                   PWM6OUT             __at(0x30E5);	// @ (0x61C * 8 + 5)
#define                                 PWM6OUT_bit         _BIT_ACCESS(PWM6CON,5)
// PWM6CON<PWM6POL>
extern volatile __bit                   PWM6POL             __at(0x30E4);	// @ (0x61C * 8 + 4)
#define                                 PWM6POL_bit         _BIT_ACCESS(PWM6CON,4)
// PORTA<RA0>
extern volatile __bit                   RA0                 __at(0x60);	// @ (0xC * 8 + 0)
#define                                 RA0_bit             _BIT_ACCESS(PORTA,0)
// RA0PPS<RA0PPS0>
extern volatile __bit                   RA0PPS0             __at(0x7480);	// @ (0xE90 * 8 + 0)
#define                                 RA0PPS0_bit         _BIT_ACCESS(RA0PPS,0)
// RA0PPS<RA0PPS1>
extern volatile __bit                   RA0PPS1             __at(0x7481);	// @ (0xE90 * 8 + 1)
#define                                 RA0PPS1_bit         _BIT_ACCESS(RA0PPS,1)
// RA0PPS<RA0PPS2>
extern volatile __bit                   RA0PPS2             __at(0x7482);	// @ (0xE90 * 8 + 2)
#define                                 RA0PPS2_bit         _BIT_ACCESS(RA0PPS,2)
// RA0PPS<RA0PPS3>
extern volatile __bit                   RA0PPS3             __at(0x7483);	// @ (0xE90 * 8 + 3)
#define                                 RA0PPS3_bit         _BIT_ACCESS(RA0PPS,3)
// RA0PPS<RA0PPS4>
extern volatile __bit                   RA0PPS4             __at(0x7484);	// @ (0xE90 * 8 + 4)
#define                                 RA0PPS4_bit         _BIT_ACCESS(RA0PPS,4)
// PORTA<RA1>
extern volatile __bit                   RA1                 __at(0x61);	// @ (0xC * 8 + 1)
#define                                 RA1_bit             _BIT_ACCESS(PORTA,1)
// RA1PPS<RA1PPS0>
extern volatile __bit                   RA1PPS0             __at(0x7488);	// @ (0xE91 * 8 + 0)
#define                                 RA1PPS0_bit         _BIT_ACCESS(RA1PPS,0)
// RA1PPS<RA1PPS1>
extern volatile __bit                   RA1PPS1             __at(0x7489);	// @ (0xE91 * 8 + 1)
#define                                 RA1PPS1_bit         _BIT_ACCESS(RA1PPS,1)
// RA1PPS<RA1PPS2>
extern volatile __bit                   RA1PPS2             __at(0x748A);	// @ (0xE91 * 8 + 2)
#define                                 RA1PPS2_bit         _BIT_ACCESS(RA1PPS,2)
// RA1PPS<RA1PPS3>
extern volatile __bit                   RA1PPS3             __at(0x748B);	// @ (0xE91 * 8 + 3)
#define                                 RA1PPS3_bit         _BIT_ACCESS(RA1PPS,3)
// RA1PPS<RA1PPS4>
extern volatile __bit                   RA1PPS4             __at(0x748C);	// @ (0xE91 * 8 + 4)
#define                                 RA1PPS4_bit         _BIT_ACCESS(RA1PPS,4)
// PORTA<RA2>
extern volatile __bit                   RA2                 __at(0x62);	// @ (0xC * 8 + 2)
#define                                 RA2_bit             _BIT_ACCESS(PORTA,2)
// RA2PPS<RA2PPS0>
extern volatile __bit                   RA2PPS0             __at(0x7490);	// @ (0xE92 * 8 + 0)
#define                                 RA2PPS0_bit         _BIT_ACCESS(RA2PPS,0)
// RA2PPS<RA2PPS1>
extern volatile __bit                   RA2PPS1             __at(0x7491);	// @ (0xE92 * 8 + 1)
#define                                 RA2PPS1_bit         _BIT_ACCESS(RA2PPS,1)
// RA2PPS<RA2PPS2>
extern volatile __bit                   RA2PPS2             __at(0x7492);	// @ (0xE92 * 8 + 2)
#define                                 RA2PPS2_bit         _BIT_ACCESS(RA2PPS,2)
// RA2PPS<RA2PPS3>
extern volatile __bit                   RA2PPS3             __at(0x7493);	// @ (0xE92 * 8 + 3)
#define                                 RA2PPS3_bit         _BIT_ACCESS(RA2PPS,3)
// RA2PPS<RA2PPS4>
extern volatile __bit                   RA2PPS4             __at(0x7494);	// @ (0xE92 * 8 + 4)
#define                                 RA2PPS4_bit         _BIT_ACCESS(RA2PPS,4)
// PORTA<RA3>
extern volatile __bit                   RA3                 __at(0x63);	// @ (0xC * 8 + 3)
#define                                 RA3_bit             _BIT_ACCESS(PORTA,3)
// PORTA<RA4>
extern volatile __bit                   RA4                 __at(0x64);	// @ (0xC * 8 + 4)
#define                                 RA4_bit             _BIT_ACCESS(PORTA,4)
// RA4PPS<RA4PPS0>
extern volatile __bit                   RA4PPS0             __at(0x74A0);	// @ (0xE94 * 8 + 0)
#define                                 RA4PPS0_bit         _BIT_ACCESS(RA4PPS,0)
// RA4PPS<RA4PPS1>
extern volatile __bit                   RA4PPS1             __at(0x74A1);	// @ (0xE94 * 8 + 1)
#define                                 RA4PPS1_bit         _BIT_ACCESS(RA4PPS,1)
// RA4PPS<RA4PPS2>
extern volatile __bit                   RA4PPS2             __at(0x74A2);	// @ (0xE94 * 8 + 2)
#define                                 RA4PPS2_bit         _BIT_ACCESS(RA4PPS,2)
// RA4PPS<RA4PPS3>
extern volatile __bit                   RA4PPS3             __at(0x74A3);	// @ (0xE94 * 8 + 3)
#define                                 RA4PPS3_bit         _BIT_ACCESS(RA4PPS,3)
// RA4PPS<RA4PPS4>
extern volatile __bit                   RA4PPS4             __at(0x74A4);	// @ (0xE94 * 8 + 4)
#define                                 RA4PPS4_bit         _BIT_ACCESS(RA4PPS,4)
// PORTA<RA5>
extern volatile __bit                   RA5                 __at(0x65);	// @ (0xC * 8 + 5)
#define                                 RA5_bit             _BIT_ACCESS(PORTA,5)
// RA5PPS<RA5PPS0>
extern volatile __bit                   RA5PPS0             __at(0x74A8);	// @ (0xE95 * 8 + 0)
#define                                 RA5PPS0_bit         _BIT_ACCESS(RA5PPS,0)
// RA5PPS<RA5PPS1>
extern volatile __bit                   RA5PPS1             __at(0x74A9);	// @ (0xE95 * 8 + 1)
#define                                 RA5PPS1_bit         _BIT_ACCESS(RA5PPS,1)
// RA5PPS<RA5PPS2>
extern volatile __bit                   RA5PPS2             __at(0x74AA);	// @ (0xE95 * 8 + 2)
#define                                 RA5PPS2_bit         _BIT_ACCESS(RA5PPS,2)
// RA5PPS<RA5PPS3>
extern volatile __bit                   RA5PPS3             __at(0x74AB);	// @ (0xE95 * 8 + 3)
#define                                 RA5PPS3_bit         _BIT_ACCESS(RA5PPS,3)
// RA5PPS<RA5PPS4>
extern volatile __bit                   RA5PPS4             __at(0x74AC);	// @ (0xE95 * 8 + 4)
#define                                 RA5PPS4_bit         _BIT_ACCESS(RA5PPS,4)
// SSP1CON2<RCEN>
extern volatile __bit                   RCEN                __at(0x10B3);	// @ (0x216 * 8 + 3)
#define                                 RCEN_bit            _BIT_ACCESS(SSP1CON2,3)
// BAUD1CON<RCIDL>
extern volatile __bit                   RCIDL               __at(0xCFE);	// @ (0x19F * 8 + 6)
#define                                 RCIDL_bit           _BIT_ACCESS(BAUD1CON,6)
// PIE1<RCIE>
extern volatile __bit                   RCIE                __at(0x48D);	// @ (0x91 * 8 + 5)
#define                                 RCIE_bit            _BIT_ACCESS(PIE1,5)
// PIR1<RCIF>
extern volatile __bit                   RCIF                __at(0x8D);	// @ (0x11 * 8 + 5)
#define                                 RCIF_bit            _BIT_ACCESS(PIR1,5)
// NVMCON1<RD>
extern volatile __bit                   RD                  __at(0x44A8);	// @ (0x895 * 8 + 0)
#define                                 RD_bit              _BIT_ACCESS(NVMCON1,0)
// CWG1AS0<REN>
extern volatile __bit                   REN                 __at(0x34BE);	// @ (0x697 * 8 + 6)
#define                                 REN_bit             _BIT_ACCESS(CWG1AS0,6)
// CPUDOZE<ROI>
extern volatile __bit                   ROI                 __at(0x48C5);	// @ (0x918 * 8 + 5)
#define                                 ROI_bit             _BIT_ACCESS(CPUDOZE,5)
// SSP1CON2<RSEN>
extern volatile __bit                   RSEN                __at(0x10B1);	// @ (0x216 * 8 + 1)
#define                                 RSEN_bit            _BIT_ACCESS(SSP1CON2,1)
// RC1STA<RX9>
extern volatile __bit                   RX9                 __at(0xCEE);	// @ (0x19D * 8 + 6)
#define                                 RX9_bit             _BIT_ACCESS(RC1STA,6)
// RC1STA<RX9D>
extern volatile __bit                   RX9D                __at(0xCE8);	// @ (0x19D * 8 + 0)
#define                                 RX9D_bit            _BIT_ACCESS(RC1STA,0)
// RXPPS<RXPPS0>
extern volatile __bit                   RXPPS0              __at(0x7120);	// @ (0xE24 * 8 + 0)
#define                                 RXPPS0_bit          _BIT_ACCESS(RXPPS,0)
// RXPPS<RXPPS1>
extern volatile __bit                   RXPPS1              __at(0x7121);	// @ (0xE24 * 8 + 1)
#define                                 RXPPS1_bit          _BIT_ACCESS(RXPPS,1)
// RXPPS<RXPPS2>
extern volatile __bit                   RXPPS2              __at(0x7122);	// @ (0xE24 * 8 + 2)
#define                                 RXPPS2_bit          _BIT_ACCESS(RXPPS,2)
// RXPPS<RXPPS3>
extern volatile __bit                   RXPPS3              __at(0x7123);	// @ (0xE24 * 8 + 3)
#define                                 RXPPS3_bit          _BIT_ACCESS(RXPPS,3)
// RXPPS<RXPPS4>
extern volatile __bit                   RXPPS4              __at(0x7124);	// @ (0xE24 * 8 + 4)
#define                                 RXPPS4_bit          _BIT_ACCESS(RXPPS,4)
// SSP1STAT<R_nW>
extern volatile __bit                   R_nW                __at(0x10A2);	// @ (0x214 * 8 + 2)
#define                                 R_nW_bit            _BIT_ACCESS(SSP1STAT,2)
// SSP1CON3<SBCDE>
extern volatile __bit                   SBCDE               __at(0x10BA);	// @ (0x217 * 8 + 2)
#define                                 SBCDE_bit           _BIT_ACCESS(SSP1CON3,2)
// BORCON<SBOREN>
extern volatile __bit                   SBOREN              __at(0x8B7);	// @ (0x116 * 8 + 7)
#define                                 SBOREN_bit          _BIT_ACCESS(BORCON,7)
// SSP1CON3<SCIE>
extern volatile __bit                   SCIE                __at(0x10BD);	// @ (0x217 * 8 + 5)
#define                                 SCIE_bit            _BIT_ACCESS(SSP1CON3,5)
// BAUD1CON<SCKP>
extern volatile __bit                   SCKP                __at(0xCFC);	// @ (0x19F * 8 + 4)
#define                                 SCKP_bit            _BIT_ACCESS(BAUD1CON,4)
// SSP1CON3<SDAHT>
extern volatile __bit                   SDAHT               __at(0x10BB);	// @ (0x217 * 8 + 3)
#define                                 SDAHT_bit           _BIT_ACCESS(SSP1CON3,3)
// SSP1CON2<SEN>
extern volatile __bit                   SEN                 __at(0x10B0);	// @ (0x216 * 8 + 0)
#define                                 SEN_bit             _BIT_ACCESS(SSP1CON2,0)
// TX1STA<SENDB>
extern volatile __bit                   SENDB               __at(0xCF3);	// @ (0x19E * 8 + 3)
#define                                 SENDB_bit           _BIT_ACCESS(TX1STA,3)
// CWG1AS0<SHUTDOWN>
extern volatile __bit                   SHUTDOWN            __at(0x34BF);	// @ (0x697 * 8 + 7)
#define                                 SHUTDOWN_bit        _BIT_ACCESS(CWG1AS0,7)
// SLRCONA<SLRA0>
extern volatile __bit                   SLRA0               __at(0x1860);	// @ (0x30C * 8 + 0)
#define                                 SLRA0_bit           _BIT_ACCESS(SLRCONA,0)
// SLRCONA<SLRA1>
extern volatile __bit                   SLRA1               __at(0x1861);	// @ (0x30C * 8 + 1)
#define                                 SLRA1_bit           _BIT_ACCESS(SLRCONA,1)
// SLRCONA<SLRA2>
extern volatile __bit                   SLRA2               __at(0x1862);	// @ (0x30C * 8 + 2)
#define                                 SLRA2_bit           _BIT_ACCESS(SLRCONA,2)
// SLRCONA<SLRA4>
extern volatile __bit                   SLRA4               __at(0x1864);	// @ (0x30C * 8 + 4)
#define                                 SLRA4_bit           _BIT_ACCESS(SLRCONA,4)
// SLRCONA<SLRA5>
extern volatile __bit                   SLRA5               __at(0x1865);	// @ (0x30C * 8 + 5)
#define                                 SLRA5_bit           _BIT_ACCESS(SLRCONA,5)
// SSP1STAT<SMP>
extern volatile __bit                   SMP                 __at(0x10A7);	// @ (0x214 * 8 + 7)
#define                                 SMP_bit             _BIT_ACCESS(SSP1STAT,7)
// OSCSTAT1<SOR>
extern volatile __bit                   SOR                 __at(0x48E3);	// @ (0x91C * 8 + 3)
#define                                 SOR_bit             _BIT_ACCESS(OSCSTAT1,3)
// OSCCON3<SOSCBE>
extern volatile __bit                   SOSCBE              __at(0x48DD);	// @ (0x91B * 8 + 5)
#define                                 SOSCBE_bit          _BIT_ACCESS(OSCCON3,5)
// OSCEN<SOSCEN>
extern volatile __bit                   SOSCEN              __at(0x48EB);	// @ (0x91D * 8 + 3)
#define                                 SOSCEN_bit          _BIT_ACCESS(OSCEN,3)
// OSCCON3<SOSCPWR>
extern volatile __bit                   SOSCPWR             __at(0x48DE);	// @ (0x91B * 8 + 6)
#define                                 SOSCPWR_bit         _BIT_ACCESS(OSCCON3,6)
// RC1STA<SPEN>
extern volatile __bit                   SPEN                __at(0xCEF);	// @ (0x19D * 8 + 7)
#define                                 SPEN_bit            _BIT_ACCESS(RC1STA,7)
// RC1STA<SREN>
extern volatile __bit                   SREN                __at(0xCED);	// @ (0x19D * 8 + 5)
#define                                 SREN_bit            _BIT_ACCESS(RC1STA,5)
// SSP1ADD<SSP1ADD0>
extern volatile __bit                   SSP1ADD0            __at(0x1090);	// @ (0x212 * 8 + 0)
#define                                 SSP1ADD0_bit        _BIT_ACCESS(SSP1ADD,0)
// SSP1ADD<SSP1ADD1>
extern volatile __bit                   SSP1ADD1            __at(0x1091);	// @ (0x212 * 8 + 1)
#define                                 SSP1ADD1_bit        _BIT_ACCESS(SSP1ADD,1)
// SSP1ADD<SSP1ADD2>
extern volatile __bit                   SSP1ADD2            __at(0x1092);	// @ (0x212 * 8 + 2)
#define                                 SSP1ADD2_bit        _BIT_ACCESS(SSP1ADD,2)
// SSP1ADD<SSP1ADD3>
extern volatile __bit                   SSP1ADD3            __at(0x1093);	// @ (0x212 * 8 + 3)
#define                                 SSP1ADD3_bit        _BIT_ACCESS(SSP1ADD,3)
// SSP1ADD<SSP1ADD4>
extern volatile __bit                   SSP1ADD4            __at(0x1094);	// @ (0x212 * 8 + 4)
#define                                 SSP1ADD4_bit        _BIT_ACCESS(SSP1ADD,4)
// SSP1ADD<SSP1ADD5>
extern volatile __bit                   SSP1ADD5            __at(0x1095);	// @ (0x212 * 8 + 5)
#define                                 SSP1ADD5_bit        _BIT_ACCESS(SSP1ADD,5)
// SSP1ADD<SSP1ADD6>
extern volatile __bit                   SSP1ADD6            __at(0x1096);	// @ (0x212 * 8 + 6)
#define                                 SSP1ADD6_bit        _BIT_ACCESS(SSP1ADD,6)
// SSP1ADD<SSP1ADD7>
extern volatile __bit                   SSP1ADD7            __at(0x1097);	// @ (0x212 * 8 + 7)
#define                                 SSP1ADD7_bit        _BIT_ACCESS(SSP1ADD,7)
// SSP1BUF<SSP1BUF0>
extern volatile __bit                   SSP1BUF0            __at(0x1088);	// @ (0x211 * 8 + 0)
#define                                 SSP1BUF0_bit        _BIT_ACCESS(SSP1BUF,0)
// SSP1BUF<SSP1BUF1>
extern volatile __bit                   SSP1BUF1            __at(0x1089);	// @ (0x211 * 8 + 1)
#define                                 SSP1BUF1_bit        _BIT_ACCESS(SSP1BUF,1)
// SSP1BUF<SSP1BUF2>
extern volatile __bit                   SSP1BUF2            __at(0x108A);	// @ (0x211 * 8 + 2)
#define                                 SSP1BUF2_bit        _BIT_ACCESS(SSP1BUF,2)
// SSP1BUF<SSP1BUF3>
extern volatile __bit                   SSP1BUF3            __at(0x108B);	// @ (0x211 * 8 + 3)
#define                                 SSP1BUF3_bit        _BIT_ACCESS(SSP1BUF,3)
// SSP1BUF<SSP1BUF4>
extern volatile __bit                   SSP1BUF4            __at(0x108C);	// @ (0x211 * 8 + 4)
#define                                 SSP1BUF4_bit        _BIT_ACCESS(SSP1BUF,4)
// SSP1BUF<SSP1BUF5>
extern volatile __bit                   SSP1BUF5            __at(0x108D);	// @ (0x211 * 8 + 5)
#define                                 SSP1BUF5_bit        _BIT_ACCESS(SSP1BUF,5)
// SSP1BUF<SSP1BUF6>
extern volatile __bit                   SSP1BUF6            __at(0x108E);	// @ (0x211 * 8 + 6)
#define                                 SSP1BUF6_bit        _BIT_ACCESS(SSP1BUF,6)
// SSP1BUF<SSP1BUF7>
extern volatile __bit                   SSP1BUF7            __at(0x108F);	// @ (0x211 * 8 + 7)
#define                                 SSP1BUF7_bit        _BIT_ACCESS(SSP1BUF,7)
// SSP1CLKPPS<SSP1CLKPPS0>
extern volatile __bit                   SSP1CLKPPS0         __at(0x7100);	// @ (0xE20 * 8 + 0)
#define                                 SSP1CLKPPS0_bit     _BIT_ACCESS(SSP1CLKPPS,0)
// SSP1CLKPPS<SSP1CLKPPS1>
extern volatile __bit                   SSP1CLKPPS1         __at(0x7101);	// @ (0xE20 * 8 + 1)
#define                                 SSP1CLKPPS1_bit     _BIT_ACCESS(SSP1CLKPPS,1)
// SSP1CLKPPS<SSP1CLKPPS2>
extern volatile __bit                   SSP1CLKPPS2         __at(0x7102);	// @ (0xE20 * 8 + 2)
#define                                 SSP1CLKPPS2_bit     _BIT_ACCESS(SSP1CLKPPS,2)
// SSP1CLKPPS<SSP1CLKPPS3>
extern volatile __bit                   SSP1CLKPPS3         __at(0x7103);	// @ (0xE20 * 8 + 3)
#define                                 SSP1CLKPPS3_bit     _BIT_ACCESS(SSP1CLKPPS,3)
// SSP1CLKPPS<SSP1CLKPPS4>
extern volatile __bit                   SSP1CLKPPS4         __at(0x7104);	// @ (0xE20 * 8 + 4)
#define                                 SSP1CLKPPS4_bit     _BIT_ACCESS(SSP1CLKPPS,4)
// SSP1DATPPS<SSP1DATPPS0>
extern volatile __bit                   SSP1DATPPS0         __at(0x7108);	// @ (0xE21 * 8 + 0)
#define                                 SSP1DATPPS0_bit     _BIT_ACCESS(SSP1DATPPS,0)
// SSP1DATPPS<SSP1DATPPS1>
extern volatile __bit                   SSP1DATPPS1         __at(0x7109);	// @ (0xE21 * 8 + 1)
#define                                 SSP1DATPPS1_bit     _BIT_ACCESS(SSP1DATPPS,1)
// SSP1DATPPS<SSP1DATPPS2>
extern volatile __bit                   SSP1DATPPS2         __at(0x710A);	// @ (0xE21 * 8 + 2)
#define                                 SSP1DATPPS2_bit     _BIT_ACCESS(SSP1DATPPS,2)
// SSP1DATPPS<SSP1DATPPS3>
extern volatile __bit                   SSP1DATPPS3         __at(0x710B);	// @ (0xE21 * 8 + 3)
#define                                 SSP1DATPPS3_bit     _BIT_ACCESS(SSP1DATPPS,3)
// SSP1DATPPS<SSP1DATPPS4>
extern volatile __bit                   SSP1DATPPS4         __at(0x710C);	// @ (0xE21 * 8 + 4)
#define                                 SSP1DATPPS4_bit     _BIT_ACCESS(SSP1DATPPS,4)
// PIE1<SSP1IE>
extern volatile __bit                   SSP1IE              __at(0x48B);	// @ (0x91 * 8 + 3)
#define                                 SSP1IE_bit          _BIT_ACCESS(PIE1,3)
// PIR1<SSP1IF>
extern volatile __bit                   SSP1IF              __at(0x8B);	// @ (0x11 * 8 + 3)
#define                                 SSP1IF_bit          _BIT_ACCESS(PIR1,3)
// SSP1MSK<SSP1MSK0>
extern volatile __bit                   SSP1MSK0            __at(0x1098);	// @ (0x213 * 8 + 0)
#define                                 SSP1MSK0_bit        _BIT_ACCESS(SSP1MSK,0)
// SSP1MSK<SSP1MSK1>
extern volatile __bit                   SSP1MSK1            __at(0x1099);	// @ (0x213 * 8 + 1)
#define                                 SSP1MSK1_bit        _BIT_ACCESS(SSP1MSK,1)
// SSP1MSK<SSP1MSK2>
extern volatile __bit                   SSP1MSK2            __at(0x109A);	// @ (0x213 * 8 + 2)
#define                                 SSP1MSK2_bit        _BIT_ACCESS(SSP1MSK,2)
// SSP1MSK<SSP1MSK3>
extern volatile __bit                   SSP1MSK3            __at(0x109B);	// @ (0x213 * 8 + 3)
#define                                 SSP1MSK3_bit        _BIT_ACCESS(SSP1MSK,3)
// SSP1MSK<SSP1MSK4>
extern volatile __bit                   SSP1MSK4            __at(0x109C);	// @ (0x213 * 8 + 4)
#define                                 SSP1MSK4_bit        _BIT_ACCESS(SSP1MSK,4)
// SSP1MSK<SSP1MSK5>
extern volatile __bit                   SSP1MSK5            __at(0x109D);	// @ (0x213 * 8 + 5)
#define                                 SSP1MSK5_bit        _BIT_ACCESS(SSP1MSK,5)
// SSP1MSK<SSP1MSK6>
extern volatile __bit                   SSP1MSK6            __at(0x109E);	// @ (0x213 * 8 + 6)
#define                                 SSP1MSK6_bit        _BIT_ACCESS(SSP1MSK,6)
// SSP1MSK<SSP1MSK7>
extern volatile __bit                   SSP1MSK7            __at(0x109F);	// @ (0x213 * 8 + 7)
#define                                 SSP1MSK7_bit        _BIT_ACCESS(SSP1MSK,7)
// SSP1SSPPS<SSP1SSPPS0>
extern volatile __bit                   SSP1SSPPS0          __at(0x7110);	// @ (0xE22 * 8 + 0)
#define                                 SSP1SSPPS0_bit      _BIT_ACCESS(SSP1SSPPS,0)
// SSP1SSPPS<SSP1SSPPS1>
extern volatile __bit                   SSP1SSPPS1          __at(0x7111);	// @ (0xE22 * 8 + 1)
#define                                 SSP1SSPPS1_bit      _BIT_ACCESS(SSP1SSPPS,1)
// SSP1SSPPS<SSP1SSPPS2>
extern volatile __bit                   SSP1SSPPS2          __at(0x7112);	// @ (0xE22 * 8 + 2)
#define                                 SSP1SSPPS2_bit      _BIT_ACCESS(SSP1SSPPS,2)
// SSP1SSPPS<SSP1SSPPS3>
extern volatile __bit                   SSP1SSPPS3          __at(0x7113);	// @ (0xE22 * 8 + 3)
#define                                 SSP1SSPPS3_bit      _BIT_ACCESS(SSP1SSPPS,3)
// SSP1SSPPS<SSP1SSPPS4>
extern volatile __bit                   SSP1SSPPS4          __at(0x7114);	// @ (0xE22 * 8 + 4)
#define                                 SSP1SSPPS4_bit      _BIT_ACCESS(SSP1SSPPS,4)
// SSP1CON1<SSPEN>
extern volatile __bit                   SSPEN               __at(0x10AD);	// @ (0x215 * 8 + 5)
#define                                 SSPEN_bit           _BIT_ACCESS(SSP1CON1,5)
// SSP1CON1<SSPM0>
extern volatile __bit                   SSPM0               __at(0x10A8);	// @ (0x215 * 8 + 0)
#define                                 SSPM0_bit           _BIT_ACCESS(SSP1CON1,0)
// SSP1CON1<SSPM1>
extern volatile __bit                   SSPM1               __at(0x10A9);	// @ (0x215 * 8 + 1)
#define                                 SSPM1_bit           _BIT_ACCESS(SSP1CON1,1)
// SSP1CON1<SSPM2>
extern volatile __bit                   SSPM2               __at(0x10AA);	// @ (0x215 * 8 + 2)
#define                                 SSPM2_bit           _BIT_ACCESS(SSP1CON1,2)
// SSP1CON1<SSPM3>
extern volatile __bit                   SSPM3               __at(0x10AB);	// @ (0x215 * 8 + 3)
#define                                 SSPM3_bit           _BIT_ACCESS(SSP1CON1,3)
// SSP1CON1<SSPOV>
extern volatile __bit                   SSPOV               __at(0x10AE);	// @ (0x215 * 8 + 6)
#define                                 SSPOV_bit           _BIT_ACCESS(SSP1CON1,6)
// PCON0<STKOVF>
extern volatile __bit                   STKOVF              __at(0x44DF);	// @ (0x89B * 8 + 7)
#define                                 STKOVF_bit          _BIT_ACCESS(PCON0,7)
// PCON0<STKUNF>
extern volatile __bit                   STKUNF              __at(0x44DE);	// @ (0x89B * 8 + 6)
#define                                 STKUNF_bit          _BIT_ACCESS(PCON0,6)
// CWG1STR<STRA>
extern volatile __bit                   STRA                __at(0x34C8);	// @ (0x699 * 8 + 0)
#define                                 STRA_bit            _BIT_ACCESS(CWG1STR,0)
// CWG1STR<STRB>
extern volatile __bit                   STRB                __at(0x34C9);	// @ (0x699 * 8 + 1)
#define                                 STRB_bit            _BIT_ACCESS(CWG1STR,1)
// CWG1STR<STRC>
extern volatile __bit                   STRC                __at(0x34CA);	// @ (0x699 * 8 + 2)
#define                                 STRC_bit            _BIT_ACCESS(CWG1STR,2)
// CWG1STR<STRD>
extern volatile __bit                   STRD                __at(0x34CB);	// @ (0x699 * 8 + 3)
#define                                 STRD_bit            _BIT_ACCESS(CWG1STR,3)
// WDTCON<SWDTEN>
extern volatile __bit                   SWDTEN              __at(0x4B8);	// @ (0x97 * 8 + 0)
#define                                 SWDTEN_bit          _BIT_ACCESS(WDTCON,0)
// TX1STA<SYNC>
extern volatile __bit                   SYNC                __at(0xCF4);	// @ (0x19E * 8 + 4)
#define                                 SYNC_bit            _BIT_ACCESS(TX1STA,4)
// PMD0<SYSCMD>
extern volatile __bit                   SYSCMD              __at(0x488F);	// @ (0x911 * 8 + 7)
#define                                 SYSCMD_bit          _BIT_ACCESS(PMD0,7)
// T0CON0<T016BIT>
extern volatile __bit                   T016BIT             __at(0xBC);	// @ (0x17 * 8 + 4)
#define                                 T016BIT_bit         _BIT_ACCESS(T0CON0,4)
// T0CON1<T0ASYNC>
extern volatile __bit                   T0ASYNC             __at(0xC4);	// @ (0x18 * 8 + 4)
#define                                 T0ASYNC_bit         _BIT_ACCESS(T0CON1,4)
// T0CKIPPS<T0CKIPPS0>
extern volatile __bit                   T0CKIPPS0           __at(0x7088);	// @ (0xE11 * 8 + 0)
#define                                 T0CKIPPS0_bit       _BIT_ACCESS(T0CKIPPS,0)
// T0CKIPPS<T0CKIPPS1>
extern volatile __bit                   T0CKIPPS1           __at(0x7089);	// @ (0xE11 * 8 + 1)
#define                                 T0CKIPPS1_bit       _BIT_ACCESS(T0CKIPPS,1)
// T0CKIPPS<T0CKIPPS2>
extern volatile __bit                   T0CKIPPS2           __at(0x708A);	// @ (0xE11 * 8 + 2)
#define                                 T0CKIPPS2_bit       _BIT_ACCESS(T0CKIPPS,2)
// T0CKIPPS<T0CKIPPS3>
extern volatile __bit                   T0CKIPPS3           __at(0x708B);	// @ (0xE11 * 8 + 3)
#define                                 T0CKIPPS3_bit       _BIT_ACCESS(T0CKIPPS,3)
// T0CKIPPS<T0CKIPPS4>
extern volatile __bit                   T0CKIPPS4           __at(0x708C);	// @ (0xE11 * 8 + 4)
#define                                 T0CKIPPS4_bit       _BIT_ACCESS(T0CKIPPS,4)
// T0CON1<T0CKPS0>
extern volatile __bit                   T0CKPS0             __at(0xC0);	// @ (0x18 * 8 + 0)
#define                                 T0CKPS0_bit         _BIT_ACCESS(T0CON1,0)
// T0CON1<T0CKPS1>
extern volatile __bit                   T0CKPS1             __at(0xC1);	// @ (0x18 * 8 + 1)
#define                                 T0CKPS1_bit         _BIT_ACCESS(T0CON1,1)
// T0CON1<T0CKPS2>
extern volatile __bit                   T0CKPS2             __at(0xC2);	// @ (0x18 * 8 + 2)
#define                                 T0CKPS2_bit         _BIT_ACCESS(T0CON1,2)
// T0CON1<T0CKPS3>
extern volatile __bit                   T0CKPS3             __at(0xC3);	// @ (0x18 * 8 + 3)
#define                                 T0CKPS3_bit         _BIT_ACCESS(T0CON1,3)
// T0CON1<T0CS0>
extern volatile __bit                   T0CS0               __at(0xC5);	// @ (0x18 * 8 + 5)
#define                                 T0CS0_bit           _BIT_ACCESS(T0CON1,5)
// T0CON1<T0CS1>
extern volatile __bit                   T0CS1               __at(0xC6);	// @ (0x18 * 8 + 6)
#define                                 T0CS1_bit           _BIT_ACCESS(T0CON1,6)
// T0CON1<T0CS2>
extern volatile __bit                   T0CS2               __at(0xC7);	// @ (0x18 * 8 + 7)
#define                                 T0CS2_bit           _BIT_ACCESS(T0CON1,7)
// T0CON0<T0EN>
extern volatile __bit                   T0EN                __at(0xBF);	// @ (0x17 * 8 + 7)
#define                                 T0EN_bit            _BIT_ACCESS(T0CON0,7)
// T0CON0<T0OUT>
extern volatile __bit                   T0OUT               __at(0xBD);	// @ (0x17 * 8 + 5)
#define                                 T0OUT_bit           _BIT_ACCESS(T0CON0,5)
// T0CON0<T0OUTPS0>
extern volatile __bit                   T0OUTPS0            __at(0xB8);	// @ (0x17 * 8 + 0)
#define                                 T0OUTPS0_bit        _BIT_ACCESS(T0CON0,0)
// T0CON0<T0OUTPS1>
extern volatile __bit                   T0OUTPS1            __at(0xB9);	// @ (0x17 * 8 + 1)
#define                                 T0OUTPS1_bit        _BIT_ACCESS(T0CON0,1)
// T0CON0<T0OUTPS2>
extern volatile __bit                   T0OUTPS2            __at(0xBA);	// @ (0x17 * 8 + 2)
#define                                 T0OUTPS2_bit        _BIT_ACCESS(T0CON0,2)
// T0CON0<T0OUTPS3>
extern volatile __bit                   T0OUTPS3            __at(0xBB);	// @ (0x17 * 8 + 3)
#define                                 T0OUTPS3_bit        _BIT_ACCESS(T0CON0,3)
// T1CKIPPS<T1CKIPPS0>
extern volatile __bit                   T1CKIPPS0           __at(0x7090);	// @ (0xE12 * 8 + 0)
#define                                 T1CKIPPS0_bit       _BIT_ACCESS(T1CKIPPS,0)
// T1CKIPPS<T1CKIPPS1>
extern volatile __bit                   T1CKIPPS1           __at(0x7091);	// @ (0xE12 * 8 + 1)
#define                                 T1CKIPPS1_bit       _BIT_ACCESS(T1CKIPPS,1)
// T1CKIPPS<T1CKIPPS2>
extern volatile __bit                   T1CKIPPS2           __at(0x7092);	// @ (0xE12 * 8 + 2)
#define                                 T1CKIPPS2_bit       _BIT_ACCESS(T1CKIPPS,2)
// T1CKIPPS<T1CKIPPS3>
extern volatile __bit                   T1CKIPPS3           __at(0x7093);	// @ (0xE12 * 8 + 3)
#define                                 T1CKIPPS3_bit       _BIT_ACCESS(T1CKIPPS,3)
// T1CKIPPS<T1CKIPPS4>
extern volatile __bit                   T1CKIPPS4           __at(0x7094);	// @ (0xE12 * 8 + 4)
#define                                 T1CKIPPS4_bit       _BIT_ACCESS(T1CKIPPS,4)
// T1CON<T1CKPS0>
extern volatile __bit                   T1CKPS0             __at(0xDC);	// @ (0x1B * 8 + 4)
#define                                 T1CKPS0_bit         _BIT_ACCESS(T1CON,4)
// T1CON<T1CKPS1>
extern volatile __bit                   T1CKPS1             __at(0xDD);	// @ (0x1B * 8 + 5)
#define                                 T1CKPS1_bit         _BIT_ACCESS(T1CON,5)
// T1GCON<T1GGO_nDONE>
extern volatile __bit                   T1GGO_nDONE         __at(0xE3);	// @ (0x1C * 8 + 3)
#define                                 T1GGO_nDONE_bit     _BIT_ACCESS(T1GCON,3)
// T1GCON<T1GPOL>
extern volatile __bit                   T1GPOL              __at(0xE6);	// @ (0x1C * 8 + 6)
#define                                 T1GPOL_bit          _BIT_ACCESS(T1GCON,6)
// T1GPPS<T1GPPS0>
extern volatile __bit                   T1GPPS0             __at(0x7098);	// @ (0xE13 * 8 + 0)
#define                                 T1GPPS0_bit         _BIT_ACCESS(T1GPPS,0)
// T1GPPS<T1GPPS1>
extern volatile __bit                   T1GPPS1             __at(0x7099);	// @ (0xE13 * 8 + 1)
#define                                 T1GPPS1_bit         _BIT_ACCESS(T1GPPS,1)
// T1GPPS<T1GPPS2>
extern volatile __bit                   T1GPPS2             __at(0x709A);	// @ (0xE13 * 8 + 2)
#define                                 T1GPPS2_bit         _BIT_ACCESS(T1GPPS,2)
// T1GPPS<T1GPPS3>
extern volatile __bit                   T1GPPS3             __at(0x709B);	// @ (0xE13 * 8 + 3)
#define                                 T1GPPS3_bit         _BIT_ACCESS(T1GPPS,3)
// T1GPPS<T1GPPS4>
extern volatile __bit                   T1GPPS4             __at(0x709C);	// @ (0xE13 * 8 + 4)
#define                                 T1GPPS4_bit         _BIT_ACCESS(T1GPPS,4)
// T1GCON<T1GSPM>
extern volatile __bit                   T1GSPM              __at(0xE4);	// @ (0x1C * 8 + 4)
#define                                 T1GSPM_bit          _BIT_ACCESS(T1GCON,4)
// T1GCON<T1GSS0>
extern volatile __bit                   T1GSS0              __at(0xE0);	// @ (0x1C * 8 + 0)
#define                                 T1GSS0_bit          _BIT_ACCESS(T1GCON,0)
// T1GCON<T1GSS1>
extern volatile __bit                   T1GSS1              __at(0xE1);	// @ (0x1C * 8 + 1)
#define                                 T1GSS1_bit          _BIT_ACCESS(T1GCON,1)
// T1GCON<T1GTM>
extern volatile __bit                   T1GTM               __at(0xE5);	// @ (0x1C * 8 + 5)
#define                                 T1GTM_bit           _BIT_ACCESS(T1GCON,5)
// T1GCON<T1GVAL>
extern volatile __bit                   T1GVAL              __at(0xE2);	// @ (0x1C * 8 + 2)
#define                                 T1GVAL_bit          _BIT_ACCESS(T1GCON,2)
// T1CON<T1SOSC>
extern volatile __bit                   T1SOSC              __at(0xDB);	// @ (0x1B * 8 + 3)
#define                                 T1SOSC_bit          _BIT_ACCESS(T1CON,3)
// T1CON<T1SYNC>
extern volatile __bit                   T1SYNC              __at(0xDA);	// @ (0x1B * 8 + 2)
#define                                 T1SYNC_bit          _BIT_ACCESS(T1CON,2)
// T2CON<T2CKPS0>
extern volatile __bit                   T2CKPS0             __at(0xF8);	// @ (0x1F * 8 + 0)
#define                                 T2CKPS0_bit         _BIT_ACCESS(T2CON,0)
// T2CON<T2CKPS1>
extern volatile __bit                   T2CKPS1             __at(0xF9);	// @ (0x1F * 8 + 1)
#define                                 T2CKPS1_bit         _BIT_ACCESS(T2CON,1)
// T2CON<T2OUTPS0>
extern volatile __bit                   T2OUTPS0            __at(0xFB);	// @ (0x1F * 8 + 3)
#define                                 T2OUTPS0_bit        _BIT_ACCESS(T2CON,3)
// T2CON<T2OUTPS1>
extern volatile __bit                   T2OUTPS1            __at(0xFC);	// @ (0x1F * 8 + 4)
#define                                 T2OUTPS1_bit        _BIT_ACCESS(T2CON,4)
// T2CON<T2OUTPS2>
extern volatile __bit                   T2OUTPS2            __at(0xFD);	// @ (0x1F * 8 + 5)
#define                                 T2OUTPS2_bit        _BIT_ACCESS(T2CON,5)
// T2CON<T2OUTPS3>
extern volatile __bit                   T2OUTPS3            __at(0xFE);	// @ (0x1F * 8 + 6)
#define                                 T2OUTPS3_bit        _BIT_ACCESS(T2CON,6)
// TMR0L<TMR00>
extern volatile __bit                   TMR00               __at(0xA8);	// @ (0x15 * 8 + 0)
#define                                 TMR00_bit           _BIT_ACCESS(TMR0L,0)
// TMR0L<TMR01>
extern volatile __bit                   TMR01               __at(0xA9);	// @ (0x15 * 8 + 1)
#define                                 TMR01_bit           _BIT_ACCESS(TMR0L,1)
// TMR0H<TMR010>
extern volatile __bit                   TMR010              __at(0xB2);	// @ (0x16 * 8 + 2)
#define                                 TMR010_bit          _BIT_ACCESS(TMR0H,2)
// TMR0H<TMR011>
extern volatile __bit                   TMR011              __at(0xB3);	// @ (0x16 * 8 + 3)
#define                                 TMR011_bit          _BIT_ACCESS(TMR0H,3)
// TMR0H<TMR012>
extern volatile __bit                   TMR012              __at(0xB4);	// @ (0x16 * 8 + 4)
#define                                 TMR012_bit          _BIT_ACCESS(TMR0H,4)
// TMR0H<TMR013>
extern volatile __bit                   TMR013              __at(0xB5);	// @ (0x16 * 8 + 5)
#define                                 TMR013_bit          _BIT_ACCESS(TMR0H,5)
// TMR0H<TMR014>
extern volatile __bit                   TMR014              __at(0xB6);	// @ (0x16 * 8 + 6)
#define                                 TMR014_bit          _BIT_ACCESS(TMR0H,6)
// TMR0H<TMR015>
extern volatile __bit                   TMR015              __at(0xB7);	// @ (0x16 * 8 + 7)
#define                                 TMR015_bit          _BIT_ACCESS(TMR0H,7)
// TMR0L<TMR02>
extern volatile __bit                   TMR02               __at(0xAA);	// @ (0x15 * 8 + 2)
#define                                 TMR02_bit           _BIT_ACCESS(TMR0L,2)
// TMR0L<TMR03>
extern volatile __bit                   TMR03               __at(0xAB);	// @ (0x15 * 8 + 3)
#define                                 TMR03_bit           _BIT_ACCESS(TMR0L,3)
// TMR0L<TMR04>
extern volatile __bit                   TMR04               __at(0xAC);	// @ (0x15 * 8 + 4)
#define                                 TMR04_bit           _BIT_ACCESS(TMR0L,4)
// TMR0L<TMR05>
extern volatile __bit                   TMR05               __at(0xAD);	// @ (0x15 * 8 + 5)
#define                                 TMR05_bit           _BIT_ACCESS(TMR0L,5)
// TMR0L<TMR06>
extern volatile __bit                   TMR06               __at(0xAE);	// @ (0x15 * 8 + 6)
#define                                 TMR06_bit           _BIT_ACCESS(TMR0L,6)
// TMR0L<TMR07>
extern volatile __bit                   TMR07               __at(0xAF);	// @ (0x15 * 8 + 7)
#define                                 TMR07_bit           _BIT_ACCESS(TMR0L,7)
// TMR0H<TMR08>
extern volatile __bit                   TMR08               __at(0xB0);	// @ (0x16 * 8 + 0)
#define                                 TMR08_bit           _BIT_ACCESS(TMR0H,0)
// TMR0H<TMR09>
extern volatile __bit                   TMR09               __at(0xB1);	// @ (0x16 * 8 + 1)
#define                                 TMR09_bit           _BIT_ACCESS(TMR0H,1)
// PIE0<TMR0IE>
extern volatile __bit                   TMR0IE              __at(0x485);	// @ (0x90 * 8 + 5)
#define                                 TMR0IE_bit          _BIT_ACCESS(PIE0,5)
// PIR0<TMR0IF>
extern volatile __bit                   TMR0IF              __at(0x85);	// @ (0x10 * 8 + 5)
#define                                 TMR0IF_bit          _BIT_ACCESS(PIR0,5)
// PMD1<TMR0MD>
extern volatile __bit                   TMR0MD              __at(0x4890);	// @ (0x912 * 8 + 0)
#define                                 TMR0MD_bit          _BIT_ACCESS(PMD1,0)
// T1CON<TMR1CS0>
extern volatile __bit                   TMR1CS0             __at(0xDE);	// @ (0x1B * 8 + 6)
#define                                 TMR1CS0_bit         _BIT_ACCESS(T1CON,6)
// T1CON<TMR1CS1>
extern volatile __bit                   TMR1CS1             __at(0xDF);	// @ (0x1B * 8 + 7)
#define                                 TMR1CS1_bit         _BIT_ACCESS(T1CON,7)
// T1GCON<TMR1GE>
extern volatile __bit                   TMR1GE              __at(0xE7);	// @ (0x1C * 8 + 7)
#define                                 TMR1GE_bit          _BIT_ACCESS(T1GCON,7)
// PIE1<TMR1GIE>
extern volatile __bit                   TMR1GIE             __at(0x48F);	// @ (0x91 * 8 + 7)
#define                                 TMR1GIE_bit         _BIT_ACCESS(PIE1,7)
// PIR1<TMR1GIF>
extern volatile __bit                   TMR1GIF             __at(0x8F);	// @ (0x11 * 8 + 7)
#define                                 TMR1GIF_bit         _BIT_ACCESS(PIR1,7)
// PIE1<TMR1IE>
extern volatile __bit                   TMR1IE              __at(0x488);	// @ (0x91 * 8 + 0)
#define                                 TMR1IE_bit          _BIT_ACCESS(PIE1,0)
// PIR1<TMR1IF>
extern volatile __bit                   TMR1IF              __at(0x88);	// @ (0x11 * 8 + 0)
#define                                 TMR1IF_bit          _BIT_ACCESS(PIR1,0)
// PMD1<TMR1MD>
extern volatile __bit                   TMR1MD              __at(0x4891);	// @ (0x912 * 8 + 1)
#define                                 TMR1MD_bit          _BIT_ACCESS(PMD1,1)
// T1CON<TMR1ON>
extern volatile __bit                   TMR1ON              __at(0xD8);	// @ (0x1B * 8 + 0)
#define                                 TMR1ON_bit          _BIT_ACCESS(T1CON,0)
// PIE1<TMR2IE>
extern volatile __bit                   TMR2IE              __at(0x489);	// @ (0x91 * 8 + 1)
#define                                 TMR2IE_bit          _BIT_ACCESS(PIE1,1)
// PIR1<TMR2IF>
extern volatile __bit                   TMR2IF              __at(0x89);	// @ (0x11 * 8 + 1)
#define                                 TMR2IF_bit          _BIT_ACCESS(PIR1,1)
// PMD1<TMR2MD>
extern volatile __bit                   TMR2MD              __at(0x4892);	// @ (0x912 * 8 + 2)
#define                                 TMR2MD_bit          _BIT_ACCESS(PMD1,2)
// T2CON<TMR2ON>
extern volatile __bit                   TMR2ON              __at(0xFA);	// @ (0x1F * 8 + 2)
#define                                 TMR2ON_bit          _BIT_ACCESS(T2CON,2)
// TRISA<TRISA0>
extern volatile __bit                   TRISA0              __at(0x460);	// @ (0x8C * 8 + 0)
#define                                 TRISA0_bit          _BIT_ACCESS(TRISA,0)
// TRISA<TRISA1>
extern volatile __bit                   TRISA1              __at(0x461);	// @ (0x8C * 8 + 1)
#define                                 TRISA1_bit          _BIT_ACCESS(TRISA,1)
// TRISA<TRISA2>
extern volatile __bit                   TRISA2              __at(0x462);	// @ (0x8C * 8 + 2)
#define                                 TRISA2_bit          _BIT_ACCESS(TRISA,2)
// TRISA<TRISA4>
extern volatile __bit                   TRISA4              __at(0x464);	// @ (0x8C * 8 + 4)
#define                                 TRISA4_bit          _BIT_ACCESS(TRISA,4)
// TRISA<TRISA5>
extern volatile __bit                   TRISA5              __at(0x465);	// @ (0x8C * 8 + 5)
#define                                 TRISA5_bit          _BIT_ACCESS(TRISA,5)
// TX1STA<TRMT>
extern volatile __bit                   TRMT                __at(0xCF1);	// @ (0x19E * 8 + 1)
#define                                 TRMT_bit            _BIT_ACCESS(TX1STA,1)
// FVRCON<TSEN>
extern volatile __bit                   TSEN                __at(0x8BD);	// @ (0x117 * 8 + 5)
#define                                 TSEN_bit            _BIT_ACCESS(FVRCON,5)
// FVRCON<TSRNG>
extern volatile __bit                   TSRNG               __at(0x8BC);	// @ (0x117 * 8 + 4)
#define                                 TSRNG_bit           _BIT_ACCESS(FVRCON,4)
// TX1STA<TX9>
extern volatile __bit                   TX9                 __at(0xCF6);	// @ (0x19E * 8 + 6)
#define                                 TX9_bit             _BIT_ACCESS(TX1STA,6)
// TX1STA<TX9D>
extern volatile __bit                   TX9D                __at(0xCF0);	// @ (0x19E * 8 + 0)
#define                                 TX9D_bit            _BIT_ACCESS(TX1STA,0)
// TX1STA<TXEN>
extern volatile __bit                   TXEN                __at(0xCF5);	// @ (0x19E * 8 + 5)
#define                                 TXEN_bit            _BIT_ACCESS(TX1STA,5)
// PIE1<TXIE>
extern volatile __bit                   TXIE                __at(0x48C);	// @ (0x91 * 8 + 4)
#define                                 TXIE_bit            _BIT_ACCESS(PIE1,4)
// PIR1<TXIF>
extern volatile __bit                   TXIF                __at(0x8C);	// @ (0x11 * 8 + 4)
#define                                 TXIF_bit            _BIT_ACCESS(PIR1,4)
// TXPPS<TXPPS0>
extern volatile __bit                   TXPPS0              __at(0x7128);	// @ (0xE25 * 8 + 0)
#define                                 TXPPS0_bit          _BIT_ACCESS(TXPPS,0)
// TXPPS<TXPPS1>
extern volatile __bit                   TXPPS1              __at(0x7129);	// @ (0xE25 * 8 + 1)
#define                                 TXPPS1_bit          _BIT_ACCESS(TXPPS,1)
// TXPPS<TXPPS2>
extern volatile __bit                   TXPPS2              __at(0x712A);	// @ (0xE25 * 8 + 2)
#define                                 TXPPS2_bit          _BIT_ACCESS(TXPPS,2)
// TXPPS<TXPPS3>
extern volatile __bit                   TXPPS3              __at(0x712B);	// @ (0xE25 * 8 + 3)
#define                                 TXPPS3_bit          _BIT_ACCESS(TXPPS,3)
// TXPPS<TXPPS4>
extern volatile __bit                   TXPPS4              __at(0x712C);	// @ (0xE25 * 8 + 4)
#define                                 TXPPS4_bit          _BIT_ACCESS(TXPPS,4)
// SSP1STAT<UA>
extern volatile __bit                   UA                  __at(0x10A1);	// @ (0x214 * 8 + 1)
#define                                 UA_bit              _BIT_ACCESS(SSP1STAT,1)
// PMD4<UART1MD>
extern volatile __bit                   UART1MD             __at(0x48AD);	// @ (0x915 * 8 + 5)
#define                                 UART1MD_bit         _BIT_ACCESS(PMD4,5)
// VREGCON<VREGPM>
extern volatile __bit                   VREGPM              __at(0xCB9);	// @ (0x197 * 8 + 1)
#define                                 VREGPM_bit          _BIT_ACCESS(VREGCON,1)
// SSP1CON1<WCOL>
extern volatile __bit                   WCOL                __at(0x10AF);	// @ (0x215 * 8 + 7)
#define                                 WCOL_bit            _BIT_ACCESS(SSP1CON1,7)
// WDTCON<WDTPS0>
extern volatile __bit                   WDTPS0              __at(0x4B9);	// @ (0x97 * 8 + 1)
#define                                 WDTPS0_bit          _BIT_ACCESS(WDTCON,1)
// WDTCON<WDTPS1>
extern volatile __bit                   WDTPS1              __at(0x4BA);	// @ (0x97 * 8 + 2)
#define                                 WDTPS1_bit          _BIT_ACCESS(WDTCON,2)
// WDTCON<WDTPS2>
extern volatile __bit                   WDTPS2              __at(0x4BB);	// @ (0x97 * 8 + 3)
#define                                 WDTPS2_bit          _BIT_ACCESS(WDTCON,3)
// WDTCON<WDTPS3>
extern volatile __bit                   WDTPS3              __at(0x4BC);	// @ (0x97 * 8 + 4)
#define                                 WDTPS3_bit          _BIT_ACCESS(WDTCON,4)
// WDTCON<WDTPS4>
extern volatile __bit                   WDTPS4              __at(0x4BD);	// @ (0x97 * 8 + 5)
#define                                 WDTPS4_bit          _BIT_ACCESS(WDTCON,5)
// WPUA<WPUA0>
extern volatile __bit                   WPUA0               __at(0x1060);	// @ (0x20C * 8 + 0)
#define                                 WPUA0_bit           _BIT_ACCESS(WPUA,0)
// WPUA<WPUA1>
extern volatile __bit                   WPUA1               __at(0x1061);	// @ (0x20C * 8 + 1)
#define                                 WPUA1_bit           _BIT_ACCESS(WPUA,1)
// WPUA<WPUA2>
extern volatile __bit                   WPUA2               __at(0x1062);	// @ (0x20C * 8 + 2)
#define                                 WPUA2_bit           _BIT_ACCESS(WPUA,2)
// WPUA<WPUA3>
extern volatile __bit                   WPUA3               __at(0x1063);	// @ (0x20C * 8 + 3)
#define                                 WPUA3_bit           _BIT_ACCESS(WPUA,3)
// WPUA<WPUA4>
extern volatile __bit                   WPUA4               __at(0x1064);	// @ (0x20C * 8 + 4)
#define                                 WPUA4_bit           _BIT_ACCESS(WPUA,4)
// WPUA<WPUA5>
extern volatile __bit                   WPUA5               __at(0x1065);	// @ (0x20C * 8 + 5)
#define                                 WPUA5_bit           _BIT_ACCESS(WPUA,5)
// NVMCON1<WR>
extern volatile __bit                   WR                  __at(0x44A9);	// @ (0x895 * 8 + 1)
#define                                 WR_bit              _BIT_ACCESS(NVMCON1,1)
// NVMCON1<WREN>
extern volatile __bit                   WREN                __at(0x44AA);	// @ (0x895 * 8 + 2)
#define                                 WREN_bit            _BIT_ACCESS(NVMCON1,2)
// NVMCON1<WRERR>
extern volatile __bit                   WRERR               __at(0x44AB);	// @ (0x895 * 8 + 3)
#define                                 WRERR_bit           _BIT_ACCESS(NVMCON1,3)
// BAUD1CON<WUE>
extern volatile __bit                   WUE                 __at(0xCF9);	// @ (0x19F * 8 + 1)
#define                                 WUE_bit             _BIT_ACCESS(BAUD1CON,1)
// STATUS<ZERO>
extern volatile __bit                   ZERO                __at(0x1A);	// @ (0x3 * 8 + 2)
#define                                 ZERO_bit            _BIT_ACCESS(STATUS,2)
// STATUS_SHAD<Z_SHAD>
extern volatile __bit                   Z_SHAD              __at(0x7F22);	// @ (0xFE4 * 8 + 2)
#define                                 Z_SHAD_bit          _BIT_ACCESS(STATUS_SHAD,2)
// PCON0<nBOR>
extern volatile __bit                   nBOR                __at(0x44D8);	// @ (0x89B * 8 + 0)
#define                                 nBOR_bit            _BIT_ACCESS(PCON0,0)
// STATUS<nPD>
extern volatile __bit                   nPD                 __at(0x1B);	// @ (0x3 * 8 + 3)
#define                                 nPD_bit             _BIT_ACCESS(STATUS,3)
// PCON0<nPOR>
extern volatile __bit                   nPOR                __at(0x44D9);	// @ (0x89B * 8 + 1)
#define                                 nPOR_bit            _BIT_ACCESS(PCON0,1)
// PCON0<nRI>
extern volatile __bit                   nRI                 __at(0x44DA);	// @ (0x89B * 8 + 2)
#define                                 nRI_bit             _BIT_ACCESS(PCON0,2)
// PCON0<nRMCLR>
extern volatile __bit                   nRMCLR              __at(0x44DB);	// @ (0x89B * 8 + 3)
#define                                 nRMCLR_bit          _BIT_ACCESS(PCON0,3)
// PCON0<nRWDT>
extern volatile __bit                   nRWDT               __at(0x44DC);	// @ (0x89B * 8 + 4)
#define                                 nRWDT_bit           _BIT_ACCESS(PCON0,4)
// STATUS<nTO>
extern volatile __bit                   nTO                 __at(0x1C);	// @ (0x3 * 8 + 4)
#define                                 nTO_bit             _BIT_ACCESS(STATUS,4)

#endif // _PIC16F18313_H_
