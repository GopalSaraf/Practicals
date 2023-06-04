#ifndef	_HTC_H_
 #warning Header file pic12f615.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
	12F609
	12HV609
	12F615
	12HV615
 */

#ifndef	__PIC12F615_H
#define	__PIC12F615_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x000);
volatile       unsigned char	TMR0		__at(0x001);
volatile       unsigned char	PCL		__at(0x002);
volatile       unsigned char	STATUS		__at(0x003);
volatile	unsigned char	FSR		__at(0x004);
volatile       unsigned char	GPIO		__at(0x005);
volatile       unsigned char	PCLATH		__at(0x00A);
volatile       unsigned char	INTCON		__at(0x00B);
volatile       unsigned char	PIR1		__at(0x00C);
volatile	unsigned int	TMR1		__at(0x00E);
volatile       unsigned char	TMR1L		__at(0x00E);
volatile       unsigned char	TMR1H		__at(0x00F);
volatile	unsigned char	T1CON		__at(0x010);
#if defined(_12F615) || defined(_12HV615)
volatile       unsigned char	TMR2		__at(0x011);
volatile	unsigned char	T2CON		__at(0x012);
volatile       unsigned int	CCPR1		__at(0x013);
volatile       unsigned char	CCPR1L		__at(0x013);
volatile       unsigned char	CCPR1H		__at(0x014);
volatile       unsigned char	CCP1CON		__at(0x015);
volatile       unsigned char	PWM1CON		__at(0x016);
volatile       unsigned char	ECCPAS		__at(0x017);
#endif
volatile	unsigned char	VRCON		__at(0x019);
volatile       unsigned char	CMCON0		__at(0x01A);
volatile	unsigned char	CMCON1		__at(0x01C);
#if defined(_12F615) || defined(_12HV615)
volatile       unsigned char	ADRESH		__at(0x01E);
volatile       unsigned char	ADCON0		__at(0x01F);
#endif
volatile	unsigned char	OPTION		__at(0x081);
volatile       unsigned char	TRISIO		__at(0x085);
volatile	unsigned char	PIE1		__at(0x08C);
volatile       unsigned char	PCON		__at(0x08E);
volatile	unsigned char	OSCTUNE		__at(0x090);
#if defined(_12F615) || defined(_12HV615)
volatile	unsigned char	PR2		__at(0x092);
volatile	unsigned char	APFCON		__at(0x093);
#endif
volatile	unsigned char	WPU		__at(0x095);
volatile	unsigned char	IOC		__at(0x096);
#if defined(_12F615) || defined(_12HV615)
volatile       unsigned char	ADRESL		__at(0x09E);
#endif
volatile	unsigned char	ANSEL		__at(0x09F);


/* Definitions for STATUS register */
volatile       __bit	CARRY		__at((0x003*8)+0);
volatile       __bit	DC		__at((0x003*8)+1);
volatile       __bit	ZERO		__at((0x003*8)+2);
volatile       __bit	PD		__at((0x003*8)+3);
volatile       __bit	TO		__at((0x003*8)+4);
volatile	__bit	RP0		__at((0x003*8)+5);
volatile	__bit	RP1		__at((0x003*8)+6);
volatile	__bit	IRP		__at((0x003*8)+7);

/* Definitions for GPIO register */
volatile       __bit	GP0		__at((0x005*8)+0);
volatile       __bit	GP1		__at((0x005*8)+1);
volatile       __bit	GP2		__at((0x005*8)+2);
volatile       __bit	GP3		__at((0x005*8)+3);
volatile       __bit	GP4		__at((0x005*8)+4);
volatile       __bit	GP5		__at((0x005*8)+5);

/* Definitions for INTCON register */
volatile       __bit	GPIF		__at((0x00B*8)+0);
volatile       __bit	INTF		__at((0x00B*8)+1);
volatile       __bit	T0IF		__at((0x00B*8)+2);
volatile	__bit	GPIE		__at((0x00B*8)+3);
volatile	__bit	INTE		__at((0x00B*8)+4);
volatile	__bit	T0IE		__at((0x00B*8)+5);
volatile	__bit	PEIE		__at((0x00B*8)+6);
volatile __bit	GIE		__at((0x00B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF		__at((0x00C*8)+0);
#if defined(_12F615) || defined(_12HV615)
volatile       __bit	TMR2IF		__at((0x00C*8)+1);
#endif
volatile       __bit	CMIF		__at((0x00C*8)+3);
#if defined(_12F615) || defined(_12HV615)
volatile       __bit	CCP1IF		__at((0x00C*8)+5);
volatile       __bit	ADIF		__at((0x00C*8)+6);
#endif

/* Definitions for T1CON register */
volatile	__bit	TMR1ON		__at((0x010*8)+0);
volatile	__bit	TMR1CS		__at((0x010*8)+1);
volatile	__bit	T1SYNC		__at((0x010*8)+2);
volatile	__bit	T1OSCEN		__at((0x010*8)+3);
volatile	__bit	T1CKPS0		__at((0x010*8)+4);
volatile	__bit	T1CKPS1		__at((0x010*8)+5);
volatile	__bit	TMR1GE		__at((0x010*8)+6);
volatile	__bit	T1GINV		__at((0x010*8)+7);

#if defined(_12F615) || defined(_12HV615)
/* Definitions for T2CON register */
volatile	__bit	T2CKPS0		__at((0x012*8)+0);
volatile	__bit	T2CKPS1		__at((0x012*8)+1);
volatile	__bit	TMR2ON		__at((0x012*8)+2);
volatile	__bit	TOUTPS0		__at((0x012*8)+3);
volatile	__bit	TOUTPS1		__at((0x012*8)+4);
volatile	__bit	TOUTPS2		__at((0x012*8)+5);
volatile	__bit	TOUTPS3		__at((0x012*8)+6);

/* Definitions for CCP1CON register */
volatile	__bit	CCP1M0		__at((0x015*8)+0);
volatile	__bit	CCP1M1		__at((0x015*8)+1);
volatile	__bit	CCP1M2		__at((0x015*8)+2);
volatile	__bit	CCP1M3		__at((0x015*8)+3);
volatile	__bit	DC1B0		__at((0x015*8)+4);
volatile	__bit	DC1B1		__at((0x015*8)+5);
volatile	__bit	P1M		__at((0x015*8)+7);

/* Definitions for PWM1CON register */
volatile       __bit	PDC0		__at((0x016*8)+0);
volatile       __bit	PDC1		__at((0x016*8)+1);
volatile       __bit	PDC2		__at((0x016*8)+2);
volatile       __bit	PDC3		__at((0x016*8)+3);
volatile       __bit	PDC4		__at((0x016*8)+4);
volatile       __bit	PDC5		__at((0x016*8)+5);
volatile       __bit	PDC6		__at((0x016*8)+6);
volatile       __bit	PRSEN		__at((0x016*8)+7);

/* Definitions for ECCPAS register */
volatile	__bit	PSSBD0		__at((0x017*8)+0);
volatile	__bit	PSSBD1		__at((0x017*8)+1);
volatile	__bit	PSSAC0		__at((0x017*8)+2);
volatile	__bit	PSSAC1		__at((0x017*8)+3);
volatile	__bit	ECCPAS0		__at((0x017*8)+4);
volatile	__bit	ECCPAS1		__at((0x017*8)+5);
volatile	__bit	ECCPAS2		__at((0x017*8)+6);
volatile       __bit	ECCPASE		__at((0x017*8)+7);
#endif

/* Definitions for VRCON register */
volatile	__bit	VR0		__at((0x019*8)+0);
volatile	__bit	VR1		__at((0x019*8)+1);
volatile	__bit	VR2		__at((0x019*8)+2);
volatile	__bit	VR3		__at((0x019*8)+3);
volatile	__bit	FVREN		__at((0x019*8)+4);
volatile	__bit	VRR		__at((0x019*8)+5);
volatile	__bit	CMVREN		__at((0x019*8)+7);

/* Definitions for CMCON0 register */
volatile	__bit	CMCH		__at((0x01A*8)+0);
volatile	__bit	CMR		__at((0x01A*8)+2);
volatile	__bit	CMPOL		__at((0x01A*8)+4);
volatile	__bit	CMOE		__at((0x01A*8)+5);
volatile       __bit	COUT		__at((0x01A*8)+6);
volatile	__bit	CMON		__at((0x01A*8)+7);

/* Definitions for CMCON1 register */
volatile	__bit	CMSYNC		__at((0x01C*8)+0);
volatile	__bit	T1GSS		__at((0x01C*8)+1);
volatile	__bit	CMHYS		__at((0x01C*8)+3);
volatile	__bit	T1ACS		__at((0x01C*8)+4);

#if defined(_12F615) || defined(_12HV615)
/* Definitions for ADCON0 register */
volatile	__bit	ADON		__at((0x01F*8)+0);
volatile       __bit	GODONE		__at((0x01F*8)+1);
volatile	__bit	CHS0		__at((0x01F*8)+2);
volatile	__bit	CHS1		__at((0x01F*8)+3);
volatile	__bit	CHS2		__at((0x01F*8)+4);
volatile	__bit	VCFG		__at((0x01F*8)+6);
volatile	__bit	ADFM		__at((0x01F*8)+7);
#endif

/* Definitions for OPTION register */
volatile	__bit	PS0		__at((0x081*8)+0);
volatile	__bit	PS1		__at((0x081*8)+1);
volatile	__bit	PS2		__at((0x081*8)+2);
volatile	__bit	PSA		__at((0x081*8)+3);
volatile	__bit	T0SE		__at((0x081*8)+4);
volatile	__bit	T0CS		__at((0x081*8)+5);
volatile	__bit	INTEDG		__at((0x081*8)+6);
volatile	__bit	GPPU		__at((0x081*8)+7);

/* Definitions for TRISIO register */
volatile       __bit	TRISIO0		__at((0x085*8)+0);
volatile       __bit	TRISIO1		__at((0x085*8)+1);
volatile       __bit	TRISIO2		__at((0x085*8)+2);
volatile       __bit	TRISIO3		__at((0x085*8)+3);
volatile       __bit	TRISIO4		__at((0x085*8)+4);
volatile       __bit	TRISIO5		__at((0x085*8)+5);

/* Definitions for PIE1 register */
volatile	__bit	TMR1IE		__at((0x08C*8)+0);
#if defined(_12F615) || defined(_12HV615)
volatile	__bit	TMR2IE		__at((0x08C*8)+1);
#endif
volatile	__bit	CMIE		__at((0x08C*8)+3);
#if defined(_12F615) || defined(_12HV615)
volatile	__bit	CCP1IE		__at((0x08C*8)+5);
volatile	__bit	ADIE		__at((0x08C*8)+6);
#endif

/* Definitions for PCON register */
volatile       __bit	BOR		__at((0x08E*8)+0);
volatile       __bit	POR		__at((0x08E*8)+1);

#if defined(_12F615) || defined(_12HV615)
/* Definitions for APFCON register */
volatile	__bit	P1ASEL		__at((0x093*8)+0);
volatile	__bit	P1BSEL		__at((0x093*8)+1);
volatile	__bit	T1GSEL		__at((0x093*8)+4);
#endif

/* Definitions for WPU register */
volatile	__bit	WPU0		__at((0x095*8)+0);
volatile	__bit	WPU1		__at((0x095*8)+1);
volatile	__bit	WPU2		__at((0x095*8)+2);
volatile	__bit	WPU4		__at((0x095*8)+4);
volatile	__bit	WPU5		__at((0x095*8)+5);

/* Definitions for IOC register */
volatile	__bit	IOC0		__at((0x096*8)+0);
volatile	__bit	IOC1		__at((0x096*8)+1);
volatile	__bit	IOC2		__at((0x096*8)+2);
volatile	__bit	IOC3		__at((0x096*8)+3);
volatile	__bit	IOC4		__at((0x096*8)+4);
volatile	__bit	IOC5		__at((0x096*8)+5);

/* Definitions for ANSEL register */
volatile	__bit	ANS0		__at((0x09F*8)+0);
volatile	__bit	ANS1		__at((0x09F*8)+1);
#if defined(_12F615) || defined(_12HV615)
volatile	__bit	ANS2		__at((0x09F*8)+2);
#endif
volatile	__bit	ANS3		__at((0x09F*8)+3);
#if defined(_12F615) || defined(_12HV615)
volatile	__bit	ADCS0		__at((0x09F*8)+4);
volatile	__bit	ADCS1		__at((0x09F*8)+5);
volatile	__bit	ADCS2		__at((0x09F*8)+6);
#endif

#define CONFIG_ADDR	0x2007

#endif
