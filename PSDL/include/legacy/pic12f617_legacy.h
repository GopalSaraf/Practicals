
#ifndef	_HTC_H_
#warning Header file pic12f617.h included directly. Use #include <htc.h> instead.
#endif

/* header file for the MICROCHIP PIC microcontroller
 *  12F617
 */


#ifndef __PIC12F617_H
#define __PIC12F617_H

// Config Register: CONFIG
#define CONFIG               0x2007

//
// Special function register definitions
//


// Register: INDF
volatile unsigned char           INDF                __at(0x000);
// __bit and bitfield definitions

// Register: TMR0
volatile unsigned char           TMR0                __at(0x001);
// __bit and bitfield definitions

// Register: PCL
volatile unsigned char           PCL                 __at(0x002);
// __bit and bitfield definitions

// Register: STATUS
volatile unsigned char           STATUS              __at(0x003);
// __bit and bitfield definitions
volatile __bit CARRY               __at((0x003*8)+0);
volatile __bit DC                  __at((0x003*8)+1);
volatile __bit ZERO                __at((0x003*8)+2);
volatile __bit nPD                 __at((0x003*8)+3);
volatile __bit nTO                 __at((0x003*8)+4);
volatile __bit IRP                 __at((0x003*8)+7);
volatile __bit RP0                 __at((0x003*8)+5);
volatile __bit RP1                 __at((0x003*8)+6);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C                   : 1;
        unsigned	DC                  : 1;
        unsigned	Z                   : 1;
        unsigned	nPD                 : 1;
        unsigned	nTO                 : 1;
        unsigned	RP                  : 2;
        unsigned	IRP                 : 1;
    };
    struct {
        unsigned	                    : 5;
        unsigned	RP0                 : 1;
        unsigned	RP1                 : 1;
    };
} STATUSbits __at(0x003);
#endif

// Register: FSR
volatile unsigned char           FSR                 __at(0x004);
// __bit and bitfield definitions

// Register: GPIO
volatile unsigned char           GPIO                __at(0x005);
volatile unsigned char           PORTA               __at(0x005);
// __bit and bitfield definitions
volatile __bit GP0                 __at((0x005*8)+0);
volatile __bit GP1                 __at((0x005*8)+1);
volatile __bit GP2                 __at((0x005*8)+2);
volatile __bit GP3                 __at((0x005*8)+3);
volatile __bit GP4                 __at((0x005*8)+4);
volatile __bit GP5                 __at((0x005*8)+5);
volatile __bit GPIO0               __at((0x005*8)+0);
volatile __bit GPIO1               __at((0x005*8)+1);
volatile __bit GPIO2               __at((0x005*8)+2);
volatile __bit GPIO3               __at((0x005*8)+3);
volatile __bit GPIO4               __at((0x005*8)+4);
volatile __bit GPIO5               __at((0x005*8)+5);
volatile __bit RA0                 __at((0x005*8)+0);
volatile __bit RA1                 __at((0x005*8)+1);
volatile __bit RA2                 __at((0x005*8)+2);
volatile __bit RA3                 __at((0x005*8)+3);
volatile __bit RA4                 __at((0x005*8)+4);
volatile __bit RA5                 __at((0x005*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	GP0                 : 1;
        unsigned	GP1                 : 1;
        unsigned	GP2                 : 1;
        unsigned	GP3                 : 1;
        unsigned	GP4                 : 1;
        unsigned	GP5                 : 1;
    };
    struct {
        unsigned	GPIO0               : 1;
        unsigned	GPIO1               : 1;
        unsigned	GPIO2               : 1;
        unsigned	GPIO3               : 1;
        unsigned	GPIO4               : 1;
        unsigned	GPIO5               : 1;
    };
    struct {
        unsigned	RA0                 : 1;
        unsigned	RA1                 : 1;
        unsigned	RA2                 : 1;
        unsigned	RA3                 : 1;
        unsigned	RA4                 : 1;
        unsigned	RA5                 : 1;
    };
} GPIObits __at(0x005);
#endif

// Register: PCLATH
volatile unsigned char           PCLATH              __at(0x00A);
// __bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 5;
    };
} PCLATHbits __at(0x00A);
#endif

// Register: INTCON
volatile unsigned char           INTCON              __at(0x00B);
// __bit and bitfield definitions
volatile __bit GPIF                __at((0x00B*8)+0);
volatile __bit INTF                __at((0x00B*8)+1);
volatile __bit T0IF                __at((0x00B*8)+2);
volatile __bit GPIE                __at((0x00B*8)+3);
volatile __bit INTE                __at((0x00B*8)+4);
volatile __bit T0IE                __at((0x00B*8)+5);
volatile __bit PEIE                __at((0x00B*8)+6);
volatile __bit GIE                 __at((0x00B*8)+7);
volatile __bit TMR0IF              __at((0x00B*8)+2);
volatile __bit TMR0IE              __at((0x00B*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	GPIF                : 1;
        unsigned	INTF                : 1;
        unsigned	T0IF                : 1;
        unsigned	GPIE                : 1;
        unsigned	INTE                : 1;
        unsigned	T0IE                : 1;
        unsigned	PEIE                : 1;
        unsigned	GIE                 : 1;
    };
    struct {
        unsigned	                    : 2;
        unsigned	TMR0IF              : 1;
        unsigned	: 2;
        unsigned	TMR0IE              : 1;
    };
} INTCONbits __at(0x00B);
#endif

// Register: PIR1
volatile unsigned char           PIR1                __at(0x00C);
// __bit and bitfield definitions
volatile __bit TMR1IF              __at((0x00C*8)+0);
volatile __bit TMR2IF              __at((0x00C*8)+1);
volatile __bit CMIF                __at((0x00C*8)+3);
volatile __bit CCP1IF              __at((0x00C*8)+5);
volatile __bit ADIF                __at((0x00C*8)+6);
volatile __bit C1IF                __at((0x00C*8)+3);
volatile __bit CCPIF               __at((0x00C*8)+5);
volatile __bit ECCPIF              __at((0x00C*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1IF              : 1;
        unsigned	TMR2IF              : 1;
        unsigned	                    : 1;
        unsigned	CMIF                : 1;
        unsigned	: 1;
        unsigned	CCP1IF              : 1;
        unsigned	ADIF                : 1;
    };
    struct {
        unsigned	: 3;
        unsigned	C1IF                : 1;
        unsigned	: 1;
        unsigned	CCPIF               : 1;
    };
    struct {
        unsigned	: 5;
        unsigned	ECCPIF              : 1;
    };
} PIR1bits __at(0x00C);
#endif
// __bit and bitfield definitions

// Register: TMR1L
volatile unsigned char           TMR1L               __at(0x00E);
// __bit and bitfield definitions

// Register: TMR1H
volatile unsigned char           TMR1H               __at(0x00F);
// __bit and bitfield definitions

// Register: TMR1
volatile unsigned int            TMR1                __at(0x00E);

// Register: T1CON
volatile unsigned char           T1CON               __at(0x010);
// __bit and bitfield definitions
volatile __bit TMR1ON              __at((0x010*8)+0);
volatile __bit TMR1CS              __at((0x010*8)+1);
volatile __bit nT1SYNC             __at((0x010*8)+2);
volatile __bit T1OSCEN             __at((0x010*8)+3);
volatile __bit TMR1GE              __at((0x010*8)+6);
volatile __bit T1GINV              __at((0x010*8)+7);
volatile __bit T1CKPS0             __at((0x010*8)+4);
volatile __bit T1CKPS1             __at((0x010*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1ON              : 1;
        unsigned	TMR1CS              : 1;
        unsigned	nT1SYNC             : 1;
        unsigned	T1OSCEN             : 1;
        unsigned	T1CKPS              : 2;
        unsigned	TMR1GE              : 1;
        unsigned	T1GINV              : 1;
    };
    struct {
        unsigned	                    : 4;
        unsigned	T1CKPS0             : 1;
        unsigned	T1CKPS1             : 1;
    };
} T1CONbits __at(0x010);
#endif

// Register: TMR2
volatile unsigned char           TMR2                __at(0x011);
// __bit and bitfield definitions

// Register: T2CON
volatile unsigned char           T2CON               __at(0x012);
// __bit and bitfield definitions
volatile __bit TMR2ON              __at((0x012*8)+2);
volatile __bit T2CKPS0             __at((0x012*8)+0);
volatile __bit T2CKPS1             __at((0x012*8)+1);
volatile __bit TOUTPS0             __at((0x012*8)+3);
volatile __bit TOUTPS1             __at((0x012*8)+4);
volatile __bit TOUTPS2             __at((0x012*8)+5);
volatile __bit TOUTPS3             __at((0x012*8)+6);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	T2CKPS              : 2;
        unsigned	TMR2ON              : 1;
        unsigned	TOUTPS              : 4;
    };
    struct {
        unsigned	T2CKPS0             : 1;
        unsigned	T2CKPS1             : 1;
        unsigned	                    : 1;
        unsigned	TOUTPS0             : 1;
        unsigned	TOUTPS1             : 1;
        unsigned	TOUTPS2             : 1;
        unsigned	TOUTPS3             : 1;
    };
} T2CONbits __at(0x012);
#endif
// __bit and bitfield definitions

// Register: CCPR1L
volatile unsigned char           CCPR1L              __at(0x013);
// __bit and bitfield definitions

// Register: CCPR1H
volatile unsigned char           CCPR1H              __at(0x014);
// __bit and bitfield definitions

// Register: CCPR1
volatile unsigned int            CCPR1               __at(0x013);

// Register: CCP1CON
volatile unsigned char           CCP1CON             __at(0x015);
// __bit and bitfield definitions
volatile __bit P1M                 __at((0x015*8)+7);
volatile __bit CCP1M0              __at((0x015*8)+0);
volatile __bit CCP1M1              __at((0x015*8)+1);
volatile __bit CCP1M2              __at((0x015*8)+2);
volatile __bit CCP1M3              __at((0x015*8)+3);
volatile __bit DCB0                __at((0x015*8)+4);
volatile __bit DCB1                __at((0x015*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CCP1M               : 4;
        unsigned	DCB                 : 2;
        unsigned	                    : 1;
        unsigned	P1M                 : 1;
    };
    struct {
        unsigned	CCP1M0              : 1;
        unsigned	CCP1M1              : 1;
        unsigned	CCP1M2              : 1;
        unsigned	CCP1M3              : 1;
        unsigned	DCB0                : 1;
        unsigned	DCB1                : 1;
    };
} CCP1CONbits __at(0x015);
#endif

// Register: PWM1CON
volatile unsigned char           PWM1CON             __at(0x016);
// __bit and bitfield definitions
volatile __bit PRSEN               __at((0x016*8)+7);
volatile __bit PDC0                __at((0x016*8)+0);
volatile __bit PDC1                __at((0x016*8)+1);
volatile __bit PDC2                __at((0x016*8)+2);
volatile __bit PDC3                __at((0x016*8)+3);
volatile __bit PDC4                __at((0x016*8)+4);
volatile __bit PDC5                __at((0x016*8)+5);
volatile __bit PDC6                __at((0x016*8)+6);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PDC                 : 7;
        unsigned	PRSEN               : 1;
    };
    struct {
        unsigned	PDC0                : 1;
        unsigned	PDC1                : 1;
        unsigned	PDC2                : 1;
        unsigned	PDC3                : 1;
        unsigned	PDC4                : 1;
        unsigned	PDC5                : 1;
        unsigned	PDC6                : 1;
    };
} PWM1CONbits __at(0x016);
#endif

// Register: ECCPAS
volatile unsigned char           ECCPAS              __at(0x017);
// __bit and bitfield definitions
volatile __bit ECCPASE             __at((0x017*8)+7);
volatile __bit PSSBD0              __at((0x017*8)+0);
volatile __bit PSSBD1              __at((0x017*8)+1);
volatile __bit PSSAC0              __at((0x017*8)+2);
volatile __bit PSSAC1              __at((0x017*8)+3);
volatile __bit ECCPAS0             __at((0x017*8)+4);
volatile __bit ECCPAS1             __at((0x017*8)+5);
volatile __bit ECCPAS2             __at((0x017*8)+6);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PSSBD               : 2;
        unsigned	PSSAC               : 2;
        unsigned	ECCPAS              : 3;
        unsigned	ECCPASE             : 1;
    };
    struct {
        unsigned	PSSBD0              : 1;
        unsigned	PSSBD1              : 1;
        unsigned	PSSAC0              : 1;
        unsigned	PSSAC1              : 1;
        unsigned	ECCPAS0             : 1;
        unsigned	ECCPAS1             : 1;
        unsigned	ECCPAS2             : 1;
    };
} ECCPASbits __at(0x017);
#endif

// Register: VRCON
volatile unsigned char           VRCON               __at(0x019);
// __bit and bitfield definitions
volatile __bit FVREN               __at((0x019*8)+4);
volatile __bit VRR                 __at((0x019*8)+5);
volatile __bit CMVREN              __at((0x019*8)+7);
volatile __bit VR0                 __at((0x019*8)+0);
volatile __bit VR1                 __at((0x019*8)+1);
volatile __bit VR2                 __at((0x019*8)+2);
volatile __bit VR3                 __at((0x019*8)+3);
volatile __bit C1VREN              __at((0x019*8)+7);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	VR                  : 4;
        unsigned	FVREN               : 1;
        unsigned	VRR                 : 1;
        unsigned	                    : 1;
        unsigned	CMVREN              : 1;
    };
    struct {
        unsigned	VR0                 : 1;
        unsigned	VR1                 : 1;
        unsigned	VR2                 : 1;
        unsigned	VR3                 : 1;
        unsigned	: 3;
        unsigned	C1VREN              : 1;
    };
} VRCONbits __at(0x019);
#endif

// Register: CMCON0
volatile unsigned char           CMCON0              __at(0x01A);
// __bit and bitfield definitions
volatile __bit CMCH                __at((0x01A*8)+0);
volatile __bit CMR                 __at((0x01A*8)+2);
volatile __bit CMPOL               __at((0x01A*8)+4);
volatile __bit CMOE                __at((0x01A*8)+5);
volatile __bit COUT                __at((0x01A*8)+6);
volatile __bit CMON                __at((0x01A*8)+7);
volatile __bit C1CH                __at((0x01A*8)+0);
volatile __bit C1R                 __at((0x01A*8)+2);
volatile __bit C1POL               __at((0x01A*8)+4);
volatile __bit C1OE                __at((0x01A*8)+5);
volatile __bit C1OUT               __at((0x01A*8)+6);
volatile __bit C1ON                __at((0x01A*8)+7);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CMCH                : 1;
        unsigned	                    : 1;
        unsigned	CMR                 : 1;
        unsigned	: 1;
        unsigned	CMPOL               : 1;
        unsigned	CMOE                : 1;
        unsigned	COUT                : 1;
        unsigned	CMON                : 1;
    };
    struct {
        unsigned	C1CH                : 1;
        unsigned	: 1;
        unsigned	C1R                 : 1;
        unsigned	: 1;
        unsigned	C1POL               : 1;
        unsigned	C1OE                : 1;
        unsigned	C1OUT               : 1;
        unsigned	C1ON                : 1;
    };
} CMCON0bits __at(0x01A);
#endif

// Register: CMCON1
volatile unsigned char           CMCON1              __at(0x01C);
// __bit and bitfield definitions
volatile __bit CMSYNC              __at((0x01C*8)+0);
volatile __bit T1GSS               __at((0x01C*8)+1);
volatile __bit CMHYS               __at((0x01C*8)+3);
volatile __bit T1ACS               __at((0x01C*8)+4);
volatile __bit C1SYNC              __at((0x01C*8)+0);
volatile __bit C1HYS               __at((0x01C*8)+3);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CMSYNC              : 1;
        unsigned	T1GSS               : 1;
        unsigned	                    : 1;
        unsigned	CMHYS               : 1;
        unsigned	T1ACS               : 1;
    };
    struct {
        unsigned	C1SYNC              : 1;
        unsigned	: 2;
        unsigned	C1HYS               : 1;
    };
} CMCON1bits __at(0x01C);
#endif

// Register: ADRESH
volatile unsigned char           ADRESH              __at(0x01E);
// __bit and bitfield definitions

// Register: ADCON0
volatile unsigned char           ADCON0              __at(0x01F);
// __bit and bitfield definitions
volatile __bit ADON                __at((0x01F*8)+0);
volatile __bit GO_nDONE            __at((0x01F*8)+1);
volatile __bit VCFG                __at((0x01F*8)+6);
volatile __bit ADFM                __at((0x01F*8)+7);
volatile __bit CHS0                __at((0x01F*8)+2);
volatile __bit CHS1                __at((0x01F*8)+3);
volatile __bit CHS2                __at((0x01F*8)+4);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ADON                : 1;
        unsigned	GO_nDONE            : 1;
        unsigned	CHS                 : 3;
        unsigned	                    : 1;
        unsigned	VCFG                : 1;
        unsigned	ADFM                : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	CHS0                : 1;
        unsigned	CHS1                : 1;
        unsigned	CHS2                : 1;
    };
} ADCON0bits __at(0x01F);
#endif

//
// Special function register definitions: Bank 1
//


// Register: OPTION_REG
volatile unsigned char           OPTION_REG          __at(0x081);
// __bit and bitfield definitions
volatile __bit PSA                 __at((0x081*8)+3);
volatile __bit T0SE                __at((0x081*8)+4);
volatile __bit T0CS                __at((0x081*8)+5);
volatile __bit INTEDG              __at((0x081*8)+6);
volatile __bit nGPPU               __at((0x081*8)+7);
volatile __bit PS0                 __at((0x081*8)+0);
volatile __bit PS1                 __at((0x081*8)+1);
volatile __bit PS2                 __at((0x081*8)+2);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PS                  : 3;
        unsigned	PSA                 : 1;
        unsigned	T0SE                : 1;
        unsigned	T0CS                : 1;
        unsigned	INTEDG              : 1;
        unsigned	nGPPU               : 1;
    };
    struct {
        unsigned	PS0                 : 1;
        unsigned	PS1                 : 1;
        unsigned	PS2                 : 1;
    };
} OPTION_REGbits __at(0x081);
#endif

// Register: TRISIO
volatile unsigned char           TRISIO              __at(0x085);
volatile unsigned char           TRISA               __at(0x085);
// __bit and bitfield definitions
volatile __bit TRISIO0             __at((0x085*8)+0);
volatile __bit TRISIO1             __at((0x085*8)+1);
volatile __bit TRISIO2             __at((0x085*8)+2);
volatile __bit TRISIO3             __at((0x085*8)+3);
volatile __bit TRISIO4             __at((0x085*8)+4);
volatile __bit TRISIO5             __at((0x085*8)+5);
volatile __bit TRISA0              __at((0x085*8)+0);
volatile __bit TRISA1              __at((0x085*8)+1);
volatile __bit TRISA2              __at((0x085*8)+2);
volatile __bit TRISA3              __at((0x085*8)+3);
volatile __bit TRISA4              __at((0x085*8)+4);
volatile __bit TRISA5              __at((0x085*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISIO0             : 1;
        unsigned	TRISIO1             : 1;
        unsigned	TRISIO2             : 1;
        unsigned	TRISIO3             : 1;
        unsigned	TRISIO4             : 1;
        unsigned	TRISIO5             : 1;
    };
    struct {
        unsigned	TRISA0              : 1;
        unsigned	TRISA1              : 1;
        unsigned	TRISA2              : 1;
        unsigned	TRISA3              : 1;
        unsigned	TRISA4              : 1;
        unsigned	TRISA5              : 1;
    };
} TRISIObits __at(0x085);
#endif

// Register: PIE1
volatile unsigned char           PIE1                __at(0x08C);
// __bit and bitfield definitions
volatile __bit TMR1IE              __at((0x08C*8)+0);
volatile __bit TMR2IE              __at((0x08C*8)+1);
volatile __bit CMIE                __at((0x08C*8)+3);
volatile __bit CCP1IE              __at((0x08C*8)+5);
volatile __bit ADIE                __at((0x08C*8)+6);
volatile __bit C1IE                __at((0x08C*8)+3);
volatile __bit CCPIE               __at((0x08C*8)+5);
volatile __bit ECCPIE              __at((0x08C*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1IE              : 1;
        unsigned	TMR2IE              : 1;
        unsigned	                    : 1;
        unsigned	CMIE                : 1;
        unsigned	: 1;
        unsigned	CCP1IE              : 1;
        unsigned	ADIE                : 1;
    };
    struct {
        unsigned	: 3;
        unsigned	C1IE                : 1;
        unsigned	: 1;
        unsigned	CCPIE               : 1;
    };
    struct {
        unsigned	: 5;
        unsigned	ECCPIE              : 1;
    };
} PIE1bits __at(0x08C);
#endif

// Register: PCON
volatile unsigned char           PCON                __at(0x08E);
// __bit and bitfield definitions
volatile __bit nBOR                __at((0x08E*8)+0);
volatile __bit nPOR                __at((0x08E*8)+1);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	nBOR                : 1;
        unsigned	nPOR                : 1;
    };
} PCONbits __at(0x08E);
#endif

// Register: OSCTUNE
volatile unsigned char           OSCTUNE             __at(0x090);
// __bit and bitfield definitions
volatile __bit TUN0                __at((0x090*8)+0);
volatile __bit TUN1                __at((0x090*8)+1);
volatile __bit TUN2                __at((0x090*8)+2);
volatile __bit TUN3                __at((0x090*8)+3);
volatile __bit TUN4                __at((0x090*8)+4);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TUN                 : 5;
    };
    struct {
        unsigned	TUN0                : 1;
        unsigned	TUN1                : 1;
        unsigned	TUN2                : 1;
        unsigned	TUN3                : 1;
        unsigned	TUN4                : 1;
    };
} OSCTUNEbits __at(0x090);
#endif

// Register: PR2
volatile unsigned char           PR2                 __at(0x092);
// __bit and bitfield definitions

// Register: APFCON
volatile unsigned char           APFCON              __at(0x093);
// __bit and bitfield definitions
volatile __bit P1ASEL              __at((0x093*8)+0);
volatile __bit P1BSEL              __at((0x093*8)+1);
volatile __bit T1GSEL              __at((0x093*8)+4);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	P1ASEL              : 1;
        unsigned	P1BSEL              : 1;
        unsigned	                    : 2;
        unsigned	T1GSEL              : 1;
    };
} APFCONbits __at(0x093);
#endif

// Register: WPU
volatile unsigned char           WPU                 __at(0x095);
volatile unsigned char           WPUA                __at(0x095);
// __bit and bitfield definitions
volatile __bit WPU0                __at((0x095*8)+0);
volatile __bit WPU1                __at((0x095*8)+1);
volatile __bit WPU2                __at((0x095*8)+2);
volatile __bit WPU4                __at((0x095*8)+4);
volatile __bit WPU5                __at((0x095*8)+5);
volatile __bit WPUA0               __at((0x095*8)+0);
volatile __bit WPUA1               __at((0x095*8)+1);
volatile __bit WPUA2               __at((0x095*8)+2);
volatile __bit WPUA4               __at((0x095*8)+4);
volatile __bit WPUA5               __at((0x095*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	WPU0                : 1;
        unsigned	WPU1                : 1;
        unsigned	WPU2                : 1;
        unsigned	                    : 1;
        unsigned	WPU4                : 1;
        unsigned	WPU5                : 1;
    };
    struct {
        unsigned	WPUA0               : 1;
        unsigned	WPUA1               : 1;
        unsigned	WPUA2               : 1;
        unsigned	: 1;
        unsigned	WPUA4               : 1;
        unsigned	WPUA5               : 1;
    };
} WPUbits __at(0x095);
#endif

// Register: IOC
volatile unsigned char           IOC                 __at(0x096);
volatile unsigned char           IOCA                __at(0x096);
// __bit and bitfield definitions
volatile __bit IOC0                __at((0x096*8)+0);
volatile __bit IOC1                __at((0x096*8)+1);
volatile __bit IOC2                __at((0x096*8)+2);
volatile __bit IOC3                __at((0x096*8)+3);
volatile __bit IOC4                __at((0x096*8)+4);
volatile __bit IOC5                __at((0x096*8)+5);
volatile __bit IOCA0               __at((0x096*8)+0);
volatile __bit IOCA1               __at((0x096*8)+1);
volatile __bit IOCA2               __at((0x096*8)+2);
volatile __bit IOCA3               __at((0x096*8)+3);
volatile __bit IOCA4               __at((0x096*8)+4);
volatile __bit IOCA5               __at((0x096*8)+5);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	IOC0                : 1;
        unsigned	IOC1                : 1;
        unsigned	IOC2                : 1;
        unsigned	IOC3                : 1;
        unsigned	IOC4                : 1;
        unsigned	IOC5                : 1;
    };
    struct {
        unsigned	IOCA0               : 1;
        unsigned	IOCA1               : 1;
        unsigned	IOCA2               : 1;
        unsigned	IOCA3               : 1;
        unsigned	IOCA4               : 1;
        unsigned	IOCA5               : 1;
    };
} IOCbits __at(0x096);
#endif

// Register: PMCON1
volatile unsigned char           PMCON1              __at(0x098);
// __bit and bitfield definitions
volatile __bit RD                  __at((0x098*8)+0);
volatile __bit WR                  __at((0x098*8)+1);
volatile __bit WREN                __at((0x098*8)+2);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RD                  : 1;
        unsigned	WR                  : 1;
        unsigned	WREN                : 1;
    };
} PMCON1bits __at(0x098);
#endif

// Register: PMCON2
volatile unsigned char           PMCON2              __at(0x099);
// __bit and bitfield definitions

// Register: PMADRL
volatile unsigned char           PMADRL              __at(0x09A);
// __bit and bitfield definitions
volatile __bit PMADRL0             __at((0x09A*8)+0);
volatile __bit PMADRL1             __at((0x09A*8)+1);
volatile __bit PMADRL2             __at((0x09A*8)+2);
volatile __bit PMADRL3             __at((0x09A*8)+3);
volatile __bit PMADRL4             __at((0x09A*8)+4);
volatile __bit PMADRL5             __at((0x09A*8)+5);
volatile __bit PMADRL6             __at((0x09A*8)+6);
volatile __bit PMADRL7             __at((0x09A*8)+7);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMADRL0             : 1;
        unsigned	PMADRL1             : 1;
        unsigned	PMADRL2             : 1;
        unsigned	PMADRL3             : 1;
        unsigned	PMADRL4             : 1;
        unsigned	PMADRL5             : 1;
        unsigned	PMADRL6             : 1;
        unsigned	PMADRL7             : 1;
    };
} PMADRLbits __at(0x09A);
#endif

// Register: PMADRH
volatile unsigned char           PMADRH              __at(0x09B);
// __bit and bitfield definitions
volatile __bit PMADRH0             __at((0x09B*8)+0);
volatile __bit PMADRH1             __at((0x09B*8)+1);
volatile __bit PMADRH2             __at((0x09B*8)+2);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMADRH0             : 1;
        unsigned	PMADRH1             : 1;
        unsigned	PMADRH2             : 1;
    };
} PMADRHbits __at(0x09B);
#endif

// Register: PMDATL
volatile unsigned char           PMDATL              __at(0x09C);
// __bit and bitfield definitions
volatile __bit PMDATL0             __at((0x09C*8)+0);
volatile __bit PMDATL1             __at((0x09C*8)+1);
volatile __bit PMDATL2             __at((0x09C*8)+2);
volatile __bit PMDATL3             __at((0x09C*8)+3);
volatile __bit PMDATL4             __at((0x09C*8)+4);
volatile __bit PMDATL5             __at((0x09C*8)+5);
volatile __bit PMDATL6             __at((0x09C*8)+6);
volatile __bit PMDATL7             __at((0x09C*8)+7);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMDATL0             : 1;
        unsigned	PMDATL1             : 1;
        unsigned	PMDATL2             : 1;
        unsigned	PMDATL3             : 1;
        unsigned	PMDATL4             : 1;
        unsigned	PMDATL5             : 1;
        unsigned	PMDATL6             : 1;
        unsigned	PMDATL7             : 1;
    };
} PMDATLbits __at(0x09C);
#endif

// Register: PMDATH
volatile unsigned char           PMDATH              __at(0x09D);
// __bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMDATH              : 6;
    };
} PMDATHbits __at(0x09D);
#endif

// Register: ADRESL
volatile unsigned char           ADRESL              __at(0x09E);
// __bit and bitfield definitions

// Register: ANSEL
volatile unsigned char           ANSEL               __at(0x09F);
// __bit and bitfield definitions
volatile __bit ANS0                __at((0x09F*8)+0);
volatile __bit ANS1                __at((0x09F*8)+1);
volatile __bit ANS2                __at((0x09F*8)+2);
volatile __bit ANS3                __at((0x09F*8)+3);
volatile __bit ADCS0               __at((0x09F*8)+4);
volatile __bit ADCS1               __at((0x09F*8)+5);
volatile __bit ADCS2               __at((0x09F*8)+6);
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ANS                 : 4;
        unsigned	ADCS                : 3;
    };
    struct {
        unsigned	ANS0                : 1;
        unsigned	ANS1                : 1;
        unsigned	ANS2                : 1;
        unsigned	ANS3                : 1;
        unsigned	ADCS0               : 1;
        unsigned	ADCS1               : 1;
        unsigned	ADCS2               : 1;
    };
} ANSELbits __at(0x09F);
#endif

#endif
