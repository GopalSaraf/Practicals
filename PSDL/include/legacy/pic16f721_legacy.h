#ifndef	_HTC_H_
#warning Header file pic16f721.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
    16F721
 */

#ifndef __PIC16F721_H
#define __PIC16F721_H

// Config Register: CONFIG
#define CONFIG               0x2007 

// Config Register: CONFIG2
#define CONFIG2              0x2009 

//
// Special function register definitions: Bank 0
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
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned C                   : 1;
        volatile unsigned DC                  : 1;
        volatile unsigned Z                   : 1;
        volatile unsigned nPD                 : 1;
        volatile unsigned nTO                 : 1;
        volatile unsigned RP                  : 2;
        volatile unsigned IRP                 : 1;
    };
} STATUSbits __at(0x003);
#endif

// Register: FSR
volatile unsigned char           FSR                 __at(0x004);
// __bit and bitfield definitions

// Register: PORTA
volatile unsigned char           PORTA               __at(0x005);
// __bit and bitfield definitions
volatile __bit RA0                 __at((0x005*8)+0);
volatile __bit RA1                 __at((0x005*8)+1);
volatile __bit RA2                 __at((0x005*8)+2);
volatile __bit RA3                 __at((0x005*8)+3);
volatile __bit RA4                 __at((0x005*8)+4);
volatile __bit RA5                 __at((0x005*8)+5);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RA0                 : 1;
        volatile unsigned RA1                 : 1;
        volatile unsigned RA2                 : 1;
        volatile unsigned RA3                 : 1;
        volatile unsigned RA4                 : 1;
        volatile unsigned RA5                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned : 1;
    };
} PORTAbits __at(0x005);
#endif

// Register: PORTB
volatile unsigned char           PORTB               __at(0x006);
// __bit and bitfield definitions
volatile __bit RB4                 __at((0x006*8)+4);
volatile __bit RB5                 __at((0x006*8)+5);
volatile __bit RB6                 __at((0x006*8)+6);
volatile __bit RB7                 __at((0x006*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned RB4                 : 1;
        volatile unsigned RB5                 : 1;
        volatile unsigned RB6                 : 1;
        volatile unsigned RB7                 : 1;
    };
} PORTBbits __at(0x006);
#endif

// Register: PORTC
volatile unsigned char           PORTC               __at(0x007);
// __bit and bitfield definitions
volatile __bit RC0                 __at((0x007*8)+0);
volatile __bit RC1                 __at((0x007*8)+1);
volatile __bit RC2                 __at((0x007*8)+2);
volatile __bit RC3                 __at((0x007*8)+3);
volatile __bit RC4                 __at((0x007*8)+4);
volatile __bit RC5                 __at((0x007*8)+5);
volatile __bit RC6                 __at((0x007*8)+6);
volatile __bit RC7                 __at((0x007*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RC0                 : 1;
        volatile unsigned RC1                 : 1;
        volatile unsigned RC2                 : 1;
        volatile unsigned RC3                 : 1;
        volatile unsigned RC4                 : 1;
        volatile unsigned RC5                 : 1;
        volatile unsigned RC6                 : 1;
        volatile unsigned RC7                 : 1;
    };
} PORTCbits __at(0x007);
#endif

// Register: PCLATH
volatile unsigned char           PCLATH              __at(0x00A);
// __bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned PCLATH              : 5;
    };
} PCLATHbits __at(0x00A);
#endif

// Register: INTCON
volatile unsigned char           INTCON              __at(0x00B);
// __bit and bitfield definitions
volatile __bit RABIF               __at((0x00B*8)+0);
volatile __bit INTF                __at((0x00B*8)+1);
volatile __bit TMR0IF              __at((0x00B*8)+2);
volatile __bit RABIE               __at((0x00B*8)+3);
volatile __bit INTE                __at((0x00B*8)+4);
volatile __bit TMR0IE              __at((0x00B*8)+5);
volatile __bit PEIE                __at((0x00B*8)+6);
volatile __bit GIE                 __at((0x00B*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RABIF               : 1;
        volatile unsigned INTF                : 1;
        volatile unsigned TMR0IF              : 1;
        volatile unsigned RABIE               : 1;
        volatile unsigned INTE                : 1;
        volatile unsigned TMR0IE              : 1;
        volatile unsigned PEIE                : 1;
        volatile unsigned GIE                 : 1;
    };
} INTCONbits __at(0x00B);
#endif

// Register: PIR1
volatile unsigned char           PIR1                __at(0x00C);
// __bit and bitfield definitions
//volatile __bit TMR1IF             __at((0x00C*8)+0);
//volatile __bit TMR2IF             __at((0x00C*8)+1);
//volatile __bit CCP1IF             __at((0x00C*8)+2);
//volatile __bit SSPIF              __at((0x00C*8)+3);
volatile __bit TXIF                __at((0x00C*8)+4);
volatile __bit RCIF                __at((0x00C*8)+5);
//volatile __bit ADIF               __at((0x00C*8)+6);
volatile __bit TMR1GIF             __at((0x00C*8)+7);
////volatile __bit TMR1IF             __at((0x00C*8)+0);
////volatile __bit TMR2IF             __at((0x00C*8)+1);
////volatile __bit CCP1IF             __at((0x00C*8)+2);
////volatile __bit SSPIF              __at((0x00C*8)+3);
////volatile __bit ADIF               __at((0x00C*8)+6);
volatile __bit PSPIF               __at((0x00C*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TMR1IF              : 1;
        volatile unsigned TMR2IF              : 1;
        volatile unsigned CCP1IF              : 1;
        volatile unsigned SSPIF               : 1;
        volatile unsigned TXIF                : 1;
        volatile unsigned RCIF                : 1;
        volatile unsigned ADIF                : 1;
        volatile unsigned TMR1GIF             : 1;
    };
    struct {
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned                     : 2;
        volatile unsigned : 1;
        volatile unsigned PSPIF               : 1;
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
volatile __bit T1SYNC              __at((0x010*8)+2);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TMR1ON              : 1;
        volatile unsigned                     : 1;
        volatile unsigned T1SYNC              : 1;
        volatile unsigned : 1;
        volatile unsigned T1CKPS              : 2;
        volatile unsigned TMR1CS              : 2;
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
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned T2CKPS              : 2;
        volatile unsigned TMR2ON              : 1;
        volatile unsigned TOUTPS              : 4;
    };
} T2CONbits __at(0x012);
#endif

// Register: SSPBUF
volatile unsigned char           SSPBUF              __at(0x013);
// __bit and bitfield definitions

// Register: SSPCON
volatile unsigned char           SSPCON              __at(0x014);
// __bit and bitfield definitions
volatile __bit CKP                 __at((0x014*8)+4);
volatile __bit SSPEN               __at((0x014*8)+5);
volatile __bit SSPOV               __at((0x014*8)+6);
volatile __bit WCOL                __at((0x014*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned SSPM                : 4;
        volatile unsigned CKP                 : 1;
        volatile unsigned SSPEN               : 1;
        volatile unsigned SSPOV               : 1;
        volatile unsigned WCOL                : 1;
    };
} SSPCONbits __at(0x014);
#endif
// __bit and bitfield definitions

// Register: CCPR1L
volatile unsigned char           CCPR1L              __at(0x015);
// __bit and bitfield definitions

// Register: CCPR1H
volatile unsigned char           CCPR1H              __at(0x016);
// __bit and bitfield definitions

// Register: CCPR1
volatile unsigned int            CCPR1               __at(0x015);

// Register: CCP1CON
volatile unsigned char           CCP1CON             __at(0x017);
// __bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned CCP1M               : 4;
        volatile unsigned DC1B                : 2;
        volatile unsigned                     : 2;
    };
} CCP1CONbits __at(0x017);
#endif

// Register: RCSTA
volatile unsigned char           RCSTA               __at(0x018);
// __bit and bitfield definitions
volatile __bit RX9D                __at((0x018*8)+0);
volatile __bit OERR                __at((0x018*8)+1);
volatile __bit FERR                __at((0x018*8)+2);
volatile __bit ADDEN               __at((0x018*8)+3);
volatile __bit CREN                __at((0x018*8)+4);
volatile __bit SREN                __at((0x018*8)+5);
volatile __bit RX9                 __at((0x018*8)+6);
volatile __bit SPEN                __at((0x018*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RX9D                : 1;
        volatile unsigned OERR                : 1;
        volatile unsigned FERR                : 1;
        volatile unsigned ADDEN               : 1;
        volatile unsigned CREN                : 1;
        volatile unsigned SREN                : 1;
        volatile unsigned RX9                 : 1;
        volatile unsigned SPEN                : 1;
    };
} RCSTAbits __at(0x018);
#endif

// Register: TXREG
volatile unsigned char           TXREG               __at(0x019);
// __bit and bitfield definitions

// Register: RCREG
volatile unsigned char           RCREG               __at(0x01A);
// __bit and bitfield definitions

// Register: ADRES
volatile unsigned char           ADRES               __at(0x01E);
// __bit and bitfield definitions

// Register: ADCON0
volatile unsigned char           ADCON0              __at(0x01F);
// __bit and bitfield definitions
//volatile __bit ADON               __at((0x01F*8)+0);
//volatile __bit GO_nDONE           __at((0x01F*8)+1);
////volatile __bit ADON               __at((0x01F*8)+0);
////volatile __bit GO_nDONE           __at((0x01F*8)+1);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ADON                : 1;
        volatile unsigned GO_nDONE            : 1;
        volatile unsigned CHS                 : 4;
    };
    struct {
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 4;
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
volatile __bit nRABPU              __at((0x081*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned PS                  : 3;
        volatile unsigned PSA                 : 1;
        volatile unsigned T0SE                : 1;
        volatile unsigned T0CS                : 1;
        volatile unsigned INTEDG              : 1;
        volatile unsigned nRABPU              : 1;
    };
} OPTION_REGbits __at(0x081);
#endif

// Register: TRISA
volatile unsigned char           TRISA               __at(0x085);
// __bit and bitfield definitions
volatile __bit TRISA0              __at((0x085*8)+0);
volatile __bit TRISA1              __at((0x085*8)+1);
volatile __bit TRISA2              __at((0x085*8)+2);
volatile __bit TRISA4              __at((0x085*8)+4);
volatile __bit TRISA5              __at((0x085*8)+5);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TRISA0              : 1;
        volatile unsigned TRISA1              : 1;
        volatile unsigned TRISA2              : 1;
        volatile unsigned                     : 1;
        volatile unsigned TRISA4              : 1;
        volatile unsigned TRISA5              : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
    };
} TRISAbits __at(0x085);
#endif

// Register: TRISB
volatile unsigned char           TRISB               __at(0x086);
// __bit and bitfield definitions
volatile __bit TRISB4              __at((0x086*8)+4);
volatile __bit TRISB5              __at((0x086*8)+5);
volatile __bit TRISB6              __at((0x086*8)+6);
volatile __bit TRISB7              __at((0x086*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned TRISB4              : 1;
        volatile unsigned TRISB5              : 1;
        volatile unsigned TRISB6              : 1;
        volatile unsigned TRISB7              : 1;
    };
} TRISBbits __at(0x086);
#endif

// Register: TRISC
volatile unsigned char           TRISC               __at(0x087);
// __bit and bitfield definitions
volatile __bit TRISC0              __at((0x087*8)+0);
volatile __bit TRISC1              __at((0x087*8)+1);
volatile __bit TRISC2              __at((0x087*8)+2);
volatile __bit TRISC3              __at((0x087*8)+3);
volatile __bit TRISC4              __at((0x087*8)+4);
volatile __bit TRISC5              __at((0x087*8)+5);
volatile __bit TRISC6              __at((0x087*8)+6);
volatile __bit TRISC7              __at((0x087*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TRISC0              : 1;
        volatile unsigned TRISC1              : 1;
        volatile unsigned TRISC2              : 1;
        volatile unsigned TRISC3              : 1;
        volatile unsigned TRISC4              : 1;
        volatile unsigned TRISC5              : 1;
        volatile unsigned TRISC6              : 1;
        volatile unsigned TRISC7              : 1;
    };
} TRISCbits __at(0x087);
#endif

// Register: PIE1
volatile unsigned char           PIE1                __at(0x08C);
// __bit and bitfield definitions
volatile __bit TMR1IE              __at((0x08C*8)+0);
volatile __bit TMR2IE              __at((0x08C*8)+1);
volatile __bit CCP1IE              __at((0x08C*8)+2);
volatile __bit SSPIE               __at((0x08C*8)+3);
volatile __bit TXIE                __at((0x08C*8)+4);
volatile __bit RCIE                __at((0x08C*8)+5);
volatile __bit ADIE                __at((0x08C*8)+6);
volatile __bit TMR1GIE             __at((0x08C*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TMR1IE              : 1;
        volatile unsigned TMR2IE              : 1;
        volatile unsigned CCP1IE              : 1;
        volatile unsigned SSPIE               : 1;
        volatile unsigned TXIE                : 1;
        volatile unsigned RCIE                : 1;
        volatile unsigned ADIE                : 1;
        volatile unsigned TMR1GIE             : 1;
    };
} PIE1bits __at(0x08C);
#endif

// Register: PCON
volatile unsigned char           PCON                __at(0x08E);
// __bit and bitfield definitions
volatile __bit nBOR                __at((0x08E*8)+0);
volatile __bit nPOR                __at((0x08E*8)+1);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned nBOR                : 1;
        volatile unsigned nPOR                : 1;
    };
} PCONbits __at(0x08E);
#endif

// Register: T1GCON
volatile unsigned char           T1GCON              __at(0x08F);
// __bit and bitfield definitions
volatile __bit T1GVAL              __at((0x08F*8)+2);
volatile __bit T1GGO_DONE          __at((0x08F*8)+3);
volatile __bit T1GSPM              __at((0x08F*8)+4);
volatile __bit T1GTM               __at((0x08F*8)+5);
volatile __bit T1GPOL              __at((0x08F*8)+6);
volatile __bit TMR1GE              __at((0x08F*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned T1GSS               : 2;
        volatile unsigned T1GVAL              : 1;
        volatile unsigned T1GGO_DONE          : 1;
        volatile unsigned T1GSPM              : 1;
        volatile unsigned T1GTM               : 1;
        volatile unsigned T1GPOL              : 1;
        volatile unsigned TMR1GE              : 1;
    };
} T1GCONbits __at(0x08F);
#endif

// Register: OSCCON
volatile unsigned char           OSCCON              __at(0x090);
// __bit and bitfield definitions
volatile __bit ICSS                __at((0x090*8)+2);
volatile __bit ICSL                __at((0x090*8)+3);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSS                : 1;
        volatile unsigned ICSL                : 1;
        volatile unsigned IRCF                : 2;
    };
} OSCCONbits __at(0x090);
#endif

// Register: OSCTUNE
volatile unsigned char           OSCTUNE             __at(0x091);
// __bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TUN                 : 6;
    };
} OSCTUNEbits __at(0x091);
#endif

// Register: PR2
volatile unsigned char           PR2                 __at(0x092);
// __bit and bitfield definitions

// Register: SSPADD
volatile unsigned char           SSPADD              __at(0x093);
// __bit and bitfield definitions

// Register: SSPMSK
volatile unsigned char           SSPMSK              __at(0x093);	// shared address with SSPADD
// __bit and bitfield definitions
volatile __bit MSK0                __at((0x093*8)+0);
volatile __bit MSK1                __at((0x093*8)+1);
volatile __bit MSK2                __at((0x093*8)+2);
volatile __bit MSK3                __at((0x093*8)+3);
volatile __bit MSK4                __at((0x093*8)+4);
volatile __bit MSK5                __at((0x093*8)+5);
volatile __bit MSK6                __at((0x093*8)+6);
volatile __bit MSK7                __at((0x093*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned MSK0                : 1;
        volatile unsigned MSK1                : 1;
        volatile unsigned MSK2                : 1;
        volatile unsigned MSK3                : 1;
        volatile unsigned MSK4                : 1;
        volatile unsigned MSK5                : 1;
        volatile unsigned MSK6                : 1;
        volatile unsigned MSK7                : 1;
    };
} SSPMSKbits __at(0x093);
#endif

// Register: SSPSTAT
volatile unsigned char           SSPSTAT             __at(0x094);
// __bit and bitfield definitions
//volatile __bit BF                 __at((0x094*8)+0);
//volatile __bit UA                 __at((0x094*8)+1);
//volatile __bit R_nW               __at((0x094*8)+2);
//volatile __bit S                  __at((0x094*8)+3);
//volatile __bit P                  __at((0x094*8)+4);
//volatile __bit D_nA               __at((0x094*8)+5);
//volatile __bit CKE                __at((0x094*8)+6);
//volatile __bit SMP                __at((0x094*8)+7);
////volatile __bit BF                 __at((0x094*8)+0);
////volatile __bit UA                 __at((0x094*8)+1);
////volatile __bit R_nW               __at((0x094*8)+2);
////volatile __bit S                  __at((0x094*8)+3);
////volatile __bit P                  __at((0x094*8)+4);
////volatile __bit D_nA               __at((0x094*8)+5);
////volatile __bit CKE                __at((0x094*8)+6);
////volatile __bit SMP                __at((0x094*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned BF                  : 1;
        volatile unsigned UA                  : 1;
        volatile unsigned R_nW                : 1;
        volatile unsigned S                   : 1;
        volatile unsigned P                   : 1;
        volatile unsigned D_nA                : 1;
        volatile unsigned CKE                 : 1;
        volatile unsigned SMP                 : 1;
    };
    struct {
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
    };
} SSPSTATbits __at(0x094);
#endif

// Register: WPUA
volatile unsigned char           WPUA                __at(0x095);
// __bit and bitfield definitions
volatile __bit WPUA0               __at((0x095*8)+0);
volatile __bit WPUA1               __at((0x095*8)+1);
volatile __bit WPUA2               __at((0x095*8)+2);
volatile __bit WPUA3               __at((0x095*8)+3);
volatile __bit WPUA4               __at((0x095*8)+4);
volatile __bit WPUA5               __at((0x095*8)+5);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned WPUA0               : 1;
        volatile unsigned WPUA1               : 1;
        volatile unsigned WPUA2               : 1;
        volatile unsigned WPUA3               : 1;
        volatile unsigned WPUA4               : 1;
        volatile unsigned WPUA5               : 1;
        volatile unsigned                     : 2;
    };
} WPUAbits __at(0x095);
#endif

// Register: IOCA
volatile unsigned char           IOCA                __at(0x096);
// __bit and bitfield definitions
volatile __bit IOCA0               __at((0x096*8)+0);
volatile __bit IOCA1               __at((0x096*8)+1);
volatile __bit IOCA2               __at((0x096*8)+2);
volatile __bit IOCA3               __at((0x096*8)+3);
volatile __bit IOCA4               __at((0x096*8)+4);
volatile __bit IOCA5               __at((0x096*8)+5);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned IOCA0               : 1;
        volatile unsigned IOCA1               : 1;
        volatile unsigned IOCA2               : 1;
        volatile unsigned IOCA3               : 1;
        volatile unsigned IOCA4               : 1;
        volatile unsigned IOCA5               : 1;
        volatile unsigned                     : 2;
    };
} IOCAbits __at(0x096);
#endif

// Register: TXSTA
volatile unsigned char           TXSTA               __at(0x098);
// __bit and bitfield definitions
volatile __bit TX9D                __at((0x098*8)+0);
volatile __bit TRMT                __at((0x098*8)+1);
volatile __bit BRGH                __at((0x098*8)+2);
volatile __bit SYNC                __at((0x098*8)+4);
volatile __bit TXEN                __at((0x098*8)+5);
volatile __bit TX9                 __at((0x098*8)+6);
volatile __bit CSRC                __at((0x098*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TX9D                : 1;
        volatile unsigned TRMT                : 1;
        volatile unsigned BRGH                : 1;
        volatile unsigned                     : 1;
        volatile unsigned SYNC                : 1;
        volatile unsigned TXEN                : 1;
        volatile unsigned TX9                 : 1;
        volatile unsigned CSRC                : 1;
    };
} TXSTAbits __at(0x098);
#endif

// Register: SPBRG
volatile unsigned char           SPBRG               __at(0x099);
// __bit and bitfield definitions

// Register: FVRCON
volatile unsigned char           FVRCON              __at(0x09D);
// __bit and bitfield definitions
volatile __bit ADFVR0              __at((0x09D*8)+0);
volatile __bit ADFVR1              __at((0x09D*8)+1);
volatile __bit TSRNG               __at((0x09D*8)+4);
volatile __bit TSEN                __at((0x09D*8)+5);
volatile __bit FVREN               __at((0x09D*8)+6);
volatile __bit FVRST               __at((0x09D*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ADFVR0              : 1;
        volatile unsigned ADFVR1              : 1;
        volatile unsigned                     : 2;
        volatile unsigned TSRNG               : 1;
        volatile unsigned TSEN                : 1;
        volatile unsigned FVREN               : 1;
        volatile unsigned FVRST               : 1;
    };
} FVRCONbits __at(0x09D);
#endif

// Register: ADCON1
volatile unsigned char           ADCON1              __at(0x09F);
// __bit and bitfield definitions
volatile __bit ADCS0               __at((0x09F*8)+4);
volatile __bit ADCS1               __at((0x09F*8)+5);
volatile __bit ADCS2               __at((0x09F*8)+6);
volatile __bit ADFM                __at((0x09F*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ADREF               : 2;
        volatile unsigned                     : 2;
        volatile unsigned ADCS0               : 1;
        volatile unsigned ADCS1               : 1;
        volatile unsigned ADCS2               : 1;
        volatile unsigned ADFM                : 1;
    };
} ADCON1bits __at(0x09F);
#endif

//
// Special function register definitions: Bank 2
//

// Register: PMDATL
volatile unsigned char           PMDATL              __at(0x10C);
// __bit and bitfield definitions

// Register: PMADRL
volatile unsigned char           PMADRL              __at(0x10D);
// __bit and bitfield definitions

// Register: PMDATH
volatile unsigned char           PMDATH              __at(0x10E);
// __bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned PMDATH              : 6;
    };
} PMDATHbits __at(0x10E);
#endif

// Register: PMADRH
volatile unsigned char           PMADRH              __at(0x10F);
// __bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned PMADRH              : 5;
    };
} PMADRHbits __at(0x10F);
#endif

// Register: WPUB
volatile unsigned char           WPUB                __at(0x115);
// __bit and bitfield definitions

// Register: IOCB
volatile unsigned char           IOCB                __at(0x116);
// __bit and bitfield definitions

//
// Special function register definitions: Bank 3
//

// Register: ANSELA
volatile unsigned char           ANSELA              __at(0x185);
// __bit and bitfield definitions
volatile __bit ANSA0               __at((0x185*8)+0);
volatile __bit ANSA1               __at((0x185*8)+1);
volatile __bit ANSA2               __at((0x185*8)+2);
volatile __bit ANSA4               __at((0x185*8)+4);
volatile __bit ANSA5               __at((0x185*8)+5);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ANSA0               : 1;
        volatile unsigned ANSA1               : 1;
        volatile unsigned ANSA2               : 1;
        volatile unsigned                     : 1;
        volatile unsigned ANSA4               : 1;
        volatile unsigned ANSA5               : 1;
    };
} ANSELAbits __at(0x185);
#endif

// Register: ANSELB
volatile unsigned char           ANSELB              __at(0x186);
// __bit and bitfield definitions
volatile __bit ANSB4               __at((0x186*8)+4);
volatile __bit ANSB5               __at((0x186*8)+5);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned ANSB4               : 1;
        volatile unsigned ANSB5               : 1;
    };
} ANSELBbits __at(0x186);
#endif

// Register: ANSELC
volatile unsigned char           ANSELC              __at(0x187);
// __bit and bitfield definitions
volatile __bit ANSC0               __at((0x187*8)+0);
volatile __bit ANSC1               __at((0x187*8)+1);
volatile __bit ANSC2               __at((0x187*8)+2);
volatile __bit ANSC3               __at((0x187*8)+3);
volatile __bit ANSC6               __at((0x187*8)+6);
volatile __bit ANSC7               __at((0x187*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ANSC0               : 1;
        volatile unsigned ANSC1               : 1;
        volatile unsigned ANSC2               : 1;
        volatile unsigned ANSC3               : 1;
        volatile unsigned                     : 2;
        volatile unsigned ANSC6               : 1;
        volatile unsigned ANSC7               : 1;
    };
} ANSELCbits __at(0x187);
#endif

// Register: ICDIO
volatile unsigned char           ICDIO               __at(0x189);
// __bit and bitfield definitions

// Register: PMCON1
volatile unsigned char           PMCON1              __at(0x18C);
// __bit and bitfield definitions
volatile __bit RD                  __at((0x18C*8)+0);
volatile __bit WR                  __at((0x18C*8)+1);
volatile __bit WREN                __at((0x18C*8)+2);
volatile __bit WRERR               __at((0x18C*8)+3);
volatile __bit FREE                __at((0x18C*8)+4);
volatile __bit LWLO                __at((0x18C*8)+5);
volatile __bit CFGS                __at((0x18C*8)+6);
volatile __bit EEPGD               __at((0x18C*8)+7);
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RD                  : 1;
        volatile unsigned WR                  : 1;
        volatile unsigned WREN                : 1;
        volatile unsigned WRERR               : 1;
        volatile unsigned FREE                : 1;
        volatile unsigned LWLO                : 1;
        volatile unsigned CFGS                : 1;
        volatile unsigned EEPGD               : 1;
    };
} PMCON1bits __at(0x18C);
#endif

// Register: PMCON2
volatile unsigned char           PMCON2              __at(0x18D);
// __bit and bitfield definitions

// Register: ICKBUG
volatile unsigned char           ICKBUG              __at(0x18E);
// __bit and bitfield definitions

// Register: BIGBUG
volatile unsigned char           BIGBUG              __at(0x18F);
// __bit and bitfield definitions

#endif
