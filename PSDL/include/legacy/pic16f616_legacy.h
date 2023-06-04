
#ifndef	_HTC_H_
#warning Header file pic16f616.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
	16F610
	16HV610
	16F616
	16HV616
 */

#ifndef	__PIC16F616_H
#define	__PIC16F616_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x000);
volatile       unsigned char	TMR0		__at(0x001);
volatile       unsigned char	PCL		__at(0x002);
volatile       unsigned char	STATUS		__at(0x003);
volatile	unsigned char	FSR		__at(0x004);
volatile       unsigned char	PORTA		__at(0x005);
volatile       unsigned char	PORTC		__at(0x007);
volatile       unsigned char	PCLATH		__at(0x00A);
volatile       unsigned char	INTCON		__at(0x00B);
volatile       unsigned char	PIR1		__at(0x00C);
volatile       unsigned char	TMR1L		__at(0x00E);
volatile       unsigned char	TMR1H		__at(0x00F);
volatile	unsigned char	T1CON		__at(0x010);
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	TMR2		__at(0x011);
volatile	unsigned char	T2CON		__at(0x012);
volatile       unsigned char	CCPR1L		__at(0x013);
volatile       unsigned char	CCPR1H		__at(0x014);
volatile       unsigned char	CCP1CON		__at(0x015);
volatile       unsigned char	PWM1CON		__at(0x016);
volatile       unsigned char	ECCPAS		__at(0x017);
#endif
volatile	unsigned char	VRCON		__at(0x019);
volatile       unsigned char	CM1CON0		__at(0x01A);
volatile       unsigned char	CM2CON0		__at(0x01B);
volatile       unsigned char	CM2CON1		__at(0x01C);
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	ADRESH		__at(0x01E);
volatile       unsigned char	ADCON0		__at(0x01F);
#endif
volatile	unsigned char	OPTION		__at(0x081);
volatile       unsigned char	TRISA		__at(0x085);
volatile       unsigned char	TRISC		__at(0x087);
volatile	unsigned char	PIE1		__at(0x08C);
volatile       unsigned char	PCON		__at(0x08E);
volatile	unsigned char	OSCTUNE		__at(0x090);
volatile	unsigned char	ANSEL		__at(0x091);
#if defined(_16F616) || defined(_16HV616)
volatile	unsigned char	PR2		__at(0x092);
#endif
volatile	unsigned char	WPUA		__at(0x095);
volatile	unsigned char	IOCA		__at(0x096);
volatile       unsigned char	SRCON0		__at(0x099);
volatile	unsigned char	SRCON1		__at(0x09A);
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	ADRESL		__at(0x09E);
volatile	unsigned char	ADCON1		__at(0x09F);
#endif


/* Definitions for STATUS register */
volatile       __bit	CARRY		__at((0x003*8)+0);
volatile       __bit	DC		__at((0x003*8)+1);
volatile       __bit	ZERO		__at((0x003*8)+2);
volatile       __bit	PD		__at((0x003*8)+3);
volatile       __bit	TO		__at((0x003*8)+4);
volatile	__bit	RP0		__at((0x003*8)+5);
volatile	__bit	RP1		__at((0x003*8)+6);
volatile	__bit	IRP		__at((0x003*8)+7);

/* Definitions for PORTA register */
volatile       __bit	RA0		__at((0x005*8)+0);
volatile       __bit	RA1		__at((0x005*8)+1);
volatile       __bit	RA2		__at((0x005*8)+2);
volatile       __bit	RA3		__at((0x005*8)+3);
volatile       __bit	RA4		__at((0x005*8)+4);
volatile       __bit	RA5		__at((0x005*8)+5);

/* Definitions for PORTC register */
volatile       __bit	RC0		__at((0x007*8)+0);
volatile       __bit	RC1		__at((0x007*8)+1);
volatile       __bit	RC2		__at((0x007*8)+2);
volatile       __bit	RC3		__at((0x007*8)+3);
volatile       __bit	RC4		__at((0x007*8)+4);
volatile       __bit	RC5		__at((0x007*8)+5);

/* Definitions for INTCON register */
volatile       __bit	RAIF		__at((0x00B*8)+0);
volatile       __bit	INTF		__at((0x00B*8)+1);
volatile       __bit	T0IF		__at((0x00B*8)+2);
volatile	__bit	RAIE		__at((0x00B*8)+3);
volatile	__bit	INTE		__at((0x00B*8)+4);
volatile	__bit	T0IE		__at((0x00B*8)+5);
volatile	__bit	PEIE		__at((0x00B*8)+6);
volatile __bit	GIE		__at((0x00B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF		__at((0x00C*8)+0);
#if defined(_16F616) || defined(_16HV616)
volatile       __bit	TMR2IF		__at((0x00C*8)+1);
#endif
volatile       __bit	C1IF		__at((0x00C*8)+3);
volatile       __bit	C2IF		__at((0x00C*8)+4);
#if defined(_16F616) || defined(_16HV616)
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

#if defined(_16F616) || defined(_16HV616)
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
volatile	__bit	P1M0		__at((0x015*8)+6);
volatile	__bit	P1M1		__at((0x015*8)+7);

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
volatile	__bit	VP6EN		__at((0x019*8)+4);
volatile	__bit	VRR		__at((0x019*8)+5);
volatile	__bit	C2VREN		__at((0x019*8)+6);
volatile	__bit	C1VREN		__at((0x019*8)+7);

/* Definitions for CM1CON0 register */
volatile	__bit	C1CH0		__at((0x01A*8)+0);
volatile	__bit	C1CH1		__at((0x01A*8)+1);
volatile	__bit	C1R		__at((0x01A*8)+2);
volatile	__bit	C1POL		__at((0x01A*8)+4);
volatile	__bit	C1OE		__at((0x01A*8)+5);
volatile       __bit	C1OUT		__at((0x01A*8)+6);
volatile	__bit	C1ON		__at((0x01A*8)+7);

/* Definitions for CM2CON0 register */
volatile	__bit	C2CH0		__at((0x01B*8)+0);
volatile	__bit	C2CH1		__at((0x01B*8)+1);
volatile	__bit	C2R		__at((0x01B*8)+2);
volatile	__bit	C2POL		__at((0x01B*8)+4);
volatile	__bit	C2OE		__at((0x01B*8)+5);
volatile       __bit	C2OUT		__at((0x01B*8)+6);
volatile	__bit	C2ON		__at((0x01B*8)+7);

/* Definitions for CM2CON1 register */
volatile	__bit	C2SYNC		__at((0x01C*8)+0);
volatile	__bit	T1GSS		__at((0x01C*8)+1);
volatile	__bit	C2HYS		__at((0x01C*8)+2);
volatile	__bit	C1HYS		__at((0x01C*8)+3);
volatile	__bit	T1ACS		__at((0x01C*8)+4);
volatile       __bit	MC2OUT		__at((0x01C*8)+6);
volatile       __bit	MC1OUT		__at((0x01C*8)+7);

#if defined(_16F616) || defined(_16HV616)
/* Definitions for ADCON0 register */
volatile	__bit	ADON		__at((0x01F*8)+0);
volatile       __bit	GODONE		__at((0x01F*8)+1);
volatile	__bit	CHS0		__at((0x01F*8)+2);
volatile	__bit	CHS1		__at((0x01F*8)+3);
volatile	__bit	CHS2		__at((0x01F*8)+4);
volatile	__bit	CHS3		__at((0x01F*8)+5);
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
volatile	__bit	RAPU		__at((0x081*8)+7);

/* Definitions for TRISA register */
volatile	__bit	TRISA0		__at((0x085*8)+0);
volatile	__bit	TRISA1		__at((0x085*8)+1);
volatile	__bit	TRISA2		__at((0x085*8)+2);
volatile	__bit	TRISA3		__at((0x085*8)+3);
volatile	__bit	TRISA4		__at((0x085*8)+4);
volatile	__bit	TRISA5		__at((0x085*8)+5);

/* Definitions for TRISC register */
volatile       __bit	TRISC0		__at((0x087*8)+0);
volatile       __bit	TRISC1		__at((0x087*8)+1);
volatile       __bit	TRISC2		__at((0x087*8)+2);
volatile       __bit	TRISC3		__at((0x087*8)+3);
volatile       __bit	TRISC4		__at((0x087*8)+4);
volatile       __bit	TRISC5		__at((0x087*8)+5);

/* Definitions for PIE1 register */
volatile	__bit	TMR1IE		__at((0x08C*8)+0);
#if defined(_16F616) || defined(_16HV616)
volatile	__bit	TMR2IE		__at((0x08C*8)+1);
#endif
volatile	__bit	C1IE		__at((0x08C*8)+3);
volatile	__bit	C2IE		__at((0x08C*8)+4);
#if defined(_16F616) || defined(_16HV616)
volatile	__bit	CCP1IE		__at((0x08C*8)+5);
volatile	__bit	ADIE		__at((0x08C*8)+6);
#endif

/* Definitions for PCON register */
volatile       __bit	BOR		__at((0x08E*8)+0);
volatile       __bit	POR		__at((0x08E*8)+1);

/* Definitions for OSCTUNE register */
volatile	__bit	TUN0		__at((0x090*8)+0);
volatile	__bit	TUN1		__at((0x090*8)+1);
volatile	__bit	TUN2		__at((0x090*8)+2);
volatile	__bit	TUN3		__at((0x090*8)+3);
volatile	__bit	TUN4		__at((0x090*8)+4);

/* Definitions for ANSEL register */
volatile	__bit	ANS0		__at((0x091*8)+0);
volatile	__bit	ANS1		__at((0x091*8)+1);
volatile	__bit	ANS2		__at((0x091*8)+2);
volatile	__bit	ANS3		__at((0x091*8)+3);
volatile	__bit	ANS4		__at((0x091*8)+4);
volatile	__bit	ANS5		__at((0x091*8)+5);
volatile	__bit	ANS6		__at((0x091*8)+6);
volatile	__bit	ANS7		__at((0x091*8)+7);

/* Definitions for WPUA register */
volatile	__bit	WPUA0		__at((0x095*8)+0);
volatile	__bit	WPUA1		__at((0x095*8)+1);
volatile	__bit	WPUA2		__at((0x095*8)+2);
volatile	__bit	WPUA4		__at((0x095*8)+4);
volatile	__bit	WPUA5		__at((0x095*8)+5);

/* Definitions for IOCA register */
volatile	__bit	IOCA0		__at((0x096*8)+0);
volatile	__bit	IOCA1		__at((0x096*8)+1);
volatile	__bit	IOCA2		__at((0x096*8)+2);
volatile	__bit	IOCA3		__at((0x096*8)+3);
volatile	__bit	IOCA4		__at((0x096*8)+4);
volatile	__bit	IOCA5		__at((0x096*8)+5);

/* Definitions for SRCON0 register */
volatile	__bit	SRCLKEN		__at((0x099*8)+0);
volatile       __bit	PULSR		__at((0x099*8)+2);
volatile       __bit	PULSS		__at((0x099*8)+3);
volatile	__bit	C2REN		__at((0x099*8)+4);
volatile	__bit	C1SEN		__at((0x099*8)+5);
volatile	__bit	SR0		__at((0x099*8)+6);
volatile	__bit	SR1		__at((0x099*8)+7);

/* Definitions for SRCON1 register */
volatile	__bit	SRCS2		__at((0x09A*8)+6);
volatile	__bit	SRCS1		__at((0x09A*8)+7);

#if defined(_16F616) || defined(_16HV616)
/* Definitions for ADCON1 register */
volatile	__bit	ADCS0		__at((0x09F*8)+4);
volatile	__bit	ADCS1		__at((0x09F*8)+5);
volatile	__bit	ADCS2		__at((0x09F*8)+6);
#endif

#define CONFIG_ADDR	0x2007

#endif
