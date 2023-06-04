
#ifndef	_HTC_H_
#warning Header file pic16f685.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
	PIC16F631
	PIC16F677
	PIC16F685
	PIC16F687
	PIC16F689
	PIC16F690
 */

#ifndef	__PIC16F685_H
#define	__PIC16F685_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x000);
volatile       unsigned char	TMR0		__at(0x001);
volatile       unsigned char	PCL		__at(0x002);
volatile       unsigned char	STATUS		__at(0x003);
volatile	unsigned char	FSR		__at(0x004);
volatile       unsigned char	PORTA		__at(0x005);
volatile       unsigned char	PORTB		__at(0x006);
volatile       unsigned char	PORTC		__at(0x007);
volatile       unsigned char	PCLATH		__at(0x00A);
volatile       unsigned char	INTCON		__at(0x00B);
volatile       unsigned char	PIR1		__at(0x00C);
volatile       unsigned char	PIR2		__at(0x00D);
volatile       unsigned char	TMR1L		__at(0x00E);
volatile       unsigned char	TMR1H		__at(0x00F);
volatile	unsigned char	T1CON		__at(0x010);
#if defined(_16F685) || defined(_16F690)
volatile       unsigned char	TMR2		__at(0x011);
volatile	unsigned char	T2CON		__at(0x012);
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	SSPBUF		__at(0x013);
volatile       unsigned char	SSPCON		__at(0x014);
#endif
#if defined(_16F685) || defined(_16F690)
volatile       unsigned char	CCPR1L		__at(0x015);
volatile       unsigned char	CCPR1H		__at(0x016);
volatile       unsigned char	CCP1CON		__at(0x017);
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	RCSTA		__at(0x018);
volatile       unsigned char	TXREG		__at(0x019);
volatile       unsigned char	RCREG		__at(0x01A);
#endif
#if defined(_16F685) || defined(_16F690)
volatile       unsigned char	PWM1CON		__at(0x01C);
volatile       unsigned char	ECCPAS		__at(0x01D);
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	ADRESH		__at(0x01E);
volatile       unsigned char	ADCON0		__at(0x01F);
#endif
volatile	unsigned char	OPTION		__at(0x081);
volatile       unsigned char	TRISA		__at(0x085);
volatile       unsigned char	TRISB		__at(0x086);
volatile       unsigned char	TRISC		__at(0x087);
volatile	unsigned char	PIE1		__at(0x08C);
volatile	unsigned char	PIE2		__at(0x08D);
volatile       unsigned char	PCON		__at(0x08E);
volatile       unsigned char	OSCCON		__at(0x08F);
volatile	unsigned char	OSCTUNE		__at(0x090);
#if defined(_16F685) || defined(_16F690)
volatile	unsigned char	PR2		__at(0x092);
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	unsigned char	SSPADD		__at(0x093);
// Alternate definition
volatile	unsigned char	SSPMSK		__at(0x093);
volatile       unsigned char	SSPSTAT		__at(0x094);
#endif
volatile	unsigned char	WPUA		__at(0x095);
volatile	unsigned char	IOCA		__at(0x096);
volatile       unsigned char	WDTCON		__at(0x097);
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	TXSTA		__at(0x098);
volatile	unsigned char	SPBRG		__at(0x099);
volatile	unsigned char	SPBRGH		__at(0x09A);
volatile       unsigned char	BAUDCTL		__at(0x09B);
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	ADRESL		__at(0x09E);
volatile	unsigned char	ADCON1		__at(0x09F);
#endif
volatile       unsigned char	EEDAT		__at(0x10C);
/* Alternate definition */
volatile       unsigned char	EEDATA		__at(0x10C);
/* Alternate definition */
volatile       unsigned char	EEDATL		__at(0x10C);
volatile       unsigned char	EEADR		__at(0x10D);
/* Alternate definition */
volatile       unsigned char	EEADRL		__at(0x10D);
#if defined(_16F685) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	EEDATH		__at(0x10E);
volatile       unsigned char	EEADRH		__at(0x10F);
#endif
volatile	unsigned char	WPUB		__at(0x115);
volatile	unsigned char	IOCB		__at(0x116);
volatile	unsigned char	VRCON		__at(0x118);
volatile       unsigned char	CM1CON0		__at(0x119);
volatile       unsigned char	CM2CON0		__at(0x11A);
volatile       unsigned char	CM2CON1		__at(0x11B);
volatile	unsigned char	ANSEL		__at(0x11E);
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	unsigned char	ANSELH		__at(0x11F);
#endif
volatile       unsigned char	EECON1		__at(0x18C);
volatile       unsigned char	EECON2		__at(0x18D);
#if defined(_16F685) || defined(_16F690)
volatile unsigned char	PSTRCON		__at(0x19D);
#endif
volatile       unsigned char	SRCON		__at(0x19E);


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

/* Definitions for PORTB register */
volatile       __bit	RB4		__at((0x006*8)+4);
volatile       __bit	RB5		__at((0x006*8)+5);
volatile       __bit	RB6		__at((0x006*8)+6);
volatile       __bit	RB7		__at((0x006*8)+7);

/* Definitions for PORTC register */
volatile       __bit	RC0		__at((0x007*8)+0);
volatile       __bit	RC1		__at((0x007*8)+1);
volatile       __bit	RC2		__at((0x007*8)+2);
volatile       __bit	RC3		__at((0x007*8)+3);
volatile       __bit	RC4		__at((0x007*8)+4);
volatile       __bit	RC5		__at((0x007*8)+5);
volatile       __bit	RC6		__at((0x007*8)+6);
volatile       __bit	RC7		__at((0x007*8)+7);

/* Definitions for INTCON register */
volatile       __bit	RABIF		__at((0x00B*8)+0);
// Alternate definition for backward compatibility
volatile       __bit	RBIF		__at((0x00B*8)+0);
volatile       __bit	INTF		__at((0x00B*8)+1);
volatile       __bit	T0IF		__at((0x00B*8)+2);
volatile	__bit	RABIE		__at((0x00B*8)+3);
// Alternate definition for backward compatibility
volatile	__bit	RBIE		__at((0x00B*8)+3);
volatile	__bit	INTE		__at((0x00B*8)+4);
volatile	__bit	T0IE		__at((0x00B*8)+5);
volatile	__bit	PEIE		__at((0x00B*8)+6);
volatile __bit	GIE		__at((0x00B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF		__at((0x00C*8)+0);
#if defined(_16F685) || defined(_16F690)
volatile       __bit	TMR2IF		__at((0x00C*8)+1);
volatile       __bit	CCP1IF		__at((0x00C*8)+2);
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       __bit	SSPIF		__at((0x00C*8)+3);
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       __bit	TXIF		__at((0x00C*8)+4);
volatile       __bit	RCIF		__at((0x00C*8)+5);
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       __bit	ADIF		__at((0x00C*8)+6);
#endif

/* Definitions for PIR2 register */
volatile       __bit	EEIF		__at((0x00D*8)+4);
volatile       __bit	C1IF		__at((0x00D*8)+5);
volatile       __bit	C2IF		__at((0x00D*8)+6);
volatile       __bit	OSFIF		__at((0x00D*8)+7);

/* Definitions for T1CON register */
volatile	__bit	TMR1ON		__at((0x010*8)+0);
volatile	__bit	TMR1CS		__at((0x010*8)+1);
volatile	__bit	T1SYNC		__at((0x010*8)+2);
volatile	__bit	T1OSCEN		__at((0x010*8)+3);
volatile	__bit	T1CKPS0		__at((0x010*8)+4);
volatile	__bit	T1CKPS1		__at((0x010*8)+5);
volatile	__bit	TMR1GE		__at((0x010*8)+6);
volatile	__bit	T1GINV		__at((0x010*8)+7);

#if defined(_16F685) || defined(_16F690)
/* Definitions for T2CON register */
volatile	__bit	T2CKPS0		__at((0x012*8)+0);
volatile	__bit	T2CKPS1		__at((0x012*8)+1);
volatile	__bit	TMR2ON		__at((0x012*8)+2);
volatile	__bit	TOUTPS0		__at((0x012*8)+3);
volatile	__bit	TOUTPS1		__at((0x012*8)+4);
volatile	__bit	TOUTPS2		__at((0x012*8)+5);
volatile	__bit	TOUTPS3		__at((0x012*8)+6);
#endif

#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for SSPCON register */
volatile	__bit	SSPM0		__at((0x014*8)+0);
volatile	__bit	SSPM1		__at((0x014*8)+1);
volatile	__bit	SSPM2		__at((0x014*8)+2);
volatile	__bit	SSPM3		__at((0x014*8)+3);
volatile	__bit	CKP		__at((0x014*8)+4);
volatile	__bit	SSPEN		__at((0x014*8)+5);
volatile       __bit	SSPOV		__at((0x014*8)+6);
volatile       __bit	WCOL		__at((0x014*8)+7);
#endif

#if defined(_16F685) || defined(_16F690)
/* Definitions for CCP1CON register */
volatile	__bit	CCP1M0		__at((0x017*8)+0);
volatile	__bit	CCP1M1		__at((0x017*8)+1);
volatile	__bit	CCP1M2		__at((0x017*8)+2);
volatile	__bit	CCP1M3		__at((0x017*8)+3);
volatile	__bit	DC1B0		__at((0x017*8)+4);
volatile	__bit	DC1B1		__at((0x017*8)+5);
volatile	__bit	P1M0		__at((0x017*8)+6);
volatile	__bit	P1M1		__at((0x017*8)+7);
#endif

#if defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for RCSTA register */
volatile       __bit	RX9D		__at((0x018*8)+0);
volatile       __bit	OERR		__at((0x018*8)+1);
volatile       __bit	FERR		__at((0x018*8)+2);
volatile	__bit	ADDEN		__at((0x018*8)+3);
volatile	__bit	CREN		__at((0x018*8)+4);
volatile	__bit	SREN		__at((0x018*8)+5);
volatile	__bit	RX9		__at((0x018*8)+6);
volatile	__bit	SPEN		__at((0x018*8)+7);
#endif

#if defined(_16F685) || defined(_16F690)
/* Definitions for PWM1CON register */
volatile       __bit	PDC0		__at((0x01C*8)+0);
volatile       __bit	PDC1		__at((0x01C*8)+1);
volatile       __bit	PDC2		__at((0x01C*8)+2);
volatile       __bit	PDC3		__at((0x01C*8)+3);
volatile       __bit	PDC4		__at((0x01C*8)+4);
volatile       __bit	PDC5		__at((0x01C*8)+5);
volatile       __bit	PDC6		__at((0x01C*8)+6);
volatile       __bit	PRSEN		__at((0x01C*8)+7);

/* Definitions for ECCPAS register */
volatile	__bit	PSSBD0		__at((0x01D*8)+0);
volatile	__bit	PSSBD1		__at((0x01D*8)+1);
volatile	__bit	PSSAC0		__at((0x01D*8)+2);
volatile	__bit	PSSAC1		__at((0x01D*8)+3);
volatile	__bit	ECCPAS0		__at((0x01D*8)+4);
volatile	__bit	ECCPAS1		__at((0x01D*8)+5);
volatile	__bit	ECCPAS2		__at((0x01D*8)+6);
volatile       __bit	ECCPASE		__at((0x01D*8)+7);
#endif

#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
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
volatile	__bit	RABPU		__at((0x081*8)+7);
// Alternate definition for backward compatibility
volatile	__bit	RBPU		__at((0x081*8)+7);

/* Definitions for TRISA register */
volatile	__bit	TRISA0		__at((0x085*8)+0);
volatile	__bit	TRISA1		__at((0x085*8)+1);
volatile	__bit	TRISA2		__at((0x085*8)+2);
volatile	__bit	TRISA3		__at((0x085*8)+3);
volatile	__bit	TRISA4		__at((0x085*8)+4);
volatile	__bit	TRISA5		__at((0x085*8)+5);

/* Definitions for TRISB register */
volatile       __bit	TRISB4		__at((0x086*8)+4);
volatile       __bit	TRISB5		__at((0x086*8)+5);
volatile       __bit	TRISB6		__at((0x086*8)+6);
volatile       __bit	TRISB7		__at((0x086*8)+7);

/* Definitions for TRISC register */
volatile       __bit	TRISC0		__at((0x087*8)+0);
volatile       __bit	TRISC1		__at((0x087*8)+1);
volatile       __bit	TRISC2		__at((0x087*8)+2);
volatile       __bit	TRISC3		__at((0x087*8)+3);
volatile       __bit	TRISC4		__at((0x087*8)+4);
volatile       __bit	TRISC5		__at((0x087*8)+5);
volatile       __bit	TRISC6		__at((0x087*8)+6);
volatile       __bit	TRISC7		__at((0x087*8)+7);

/* Definitions for PIE1 register */
volatile	__bit	TMR1IE		__at((0x08C*8)+0);
#if defined(_16F685) || defined(_16F690)
volatile	__bit	TMR2IE		__at((0x08C*8)+1);
volatile	__bit	CCP1IE		__at((0x08C*8)+2);
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	__bit	SSPIE		__at((0x08C*8)+3);
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	__bit	TXIE		__at((0x08C*8)+4);
volatile	__bit	RCIE		__at((0x08C*8)+5);
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	__bit	ADIE		__at((0x08C*8)+6);
#endif

/* Definitions for PIE2 register */
volatile	__bit	EEIE		__at((0x08D*8)+4);
volatile	__bit	C1IE		__at((0x08D*8)+5);
volatile	__bit	C2IE		__at((0x08D*8)+6);
volatile	__bit	OSFIE		__at((0x08D*8)+7);

/* Definitions for PCON register */
volatile       __bit	BOR		__at((0x08E*8)+0);
volatile       __bit	POR		__at((0x08E*8)+1);
volatile	__bit	SBOREN		__at((0x08E*8)+4);
volatile	__bit	ULPWUE		__at((0x08E*8)+5);

/* Definitions for OSCCON register */
volatile	__bit	SCS		__at((0x08F*8)+0);
volatile       __bit	LTS		__at((0x08F*8)+1);
volatile       __bit	HTS		__at((0x08F*8)+2);
volatile       __bit	OSTS		__at((0x08F*8)+3);
volatile	__bit	IRCF0		__at((0x08F*8)+4);
volatile	__bit	IRCF1		__at((0x08F*8)+5);
volatile	__bit	IRCF2		__at((0x08F*8)+6);

/* Definitions for OSCTUNE register */
volatile	__bit	TUN0		__at((0x090*8)+0);
volatile	__bit	TUN1		__at((0x090*8)+1);
volatile	__bit	TUN2		__at((0x090*8)+2);
volatile	__bit	TUN3		__at((0x090*8)+3);
volatile	__bit	TUN4		__at((0x090*8)+4);

#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for SSPSTAT register */
volatile       __bit	BF		__at((0x094*8)+0);
volatile       __bit	UA		__at((0x094*8)+1);
volatile       __bit	RW		__at((0x094*8)+2);
volatile       __bit	START		__at((0x094*8)+3);
volatile       __bit	STOP		__at((0x094*8)+4);
volatile       __bit	DA		__at((0x094*8)+5);
volatile	__bit	CKE		__at((0x094*8)+6);
volatile	__bit	SMP		__at((0x094*8)+7);
#endif

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

/* Definitions for WDTCON register */
volatile	__bit	SWDTEN		__at((0x097*8)+0);
volatile	__bit	WDTPS0		__at((0x097*8)+1);
volatile	__bit	WDTPS1		__at((0x097*8)+2);
volatile	__bit	WDTPS2		__at((0x097*8)+3);
volatile	__bit	WDTPS3		__at((0x097*8)+4);

#if defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for TXSTA register */
volatile       __bit	TX9D		__at((0x098*8)+0);
volatile       __bit	TRMT		__at((0x098*8)+1);
volatile	__bit	BRGH		__at((0x098*8)+2);
volatile	__bit	SENDB		__at((0x098*8)+3);
volatile	__bit	SYNC		__at((0x098*8)+4);
volatile	__bit	TXEN		__at((0x098*8)+5);
volatile	__bit	TX9		__at((0x098*8)+6);
volatile	__bit	CSRC		__at((0x098*8)+7);

/* Definitions for SPBRG register */
volatile	__bit	BRG0		__at((0x099*8)+0);
volatile	__bit	BRG1		__at((0x099*8)+1);
volatile	__bit	BRG2		__at((0x099*8)+2);
volatile	__bit	BRG3		__at((0x099*8)+3);
volatile	__bit	BRG4		__at((0x099*8)+4);
volatile	__bit	BRG5		__at((0x099*8)+5);
volatile	__bit	BRG6		__at((0x099*8)+6);
volatile	__bit	BRG7		__at((0x099*8)+7);

/* Definitions for SPBRGH register */
volatile	__bit	BRG8		__at((0x09A*8)+0);
volatile	__bit	BRG9		__at((0x09A*8)+1);
volatile	__bit	BRG10		__at((0x09A*8)+2);
volatile	__bit	BRG11		__at((0x09A*8)+3);
volatile	__bit	BRG12		__at((0x09A*8)+4);
volatile	__bit	BRG13		__at((0x09A*8)+5);
volatile	__bit	BRG14		__at((0x09A*8)+6);
volatile	__bit	BRG15		__at((0x09A*8)+7);

/* Definitions for BAUDCTL register */
volatile       __bit	ABDEN		__at((0x09B*8)+0);
volatile       __bit	WUE		__at((0x09B*8)+1);
volatile	__bit	BRG16		__at((0x09B*8)+3);
volatile       __bit	SCKP		__at((0x09B*8)+4);
volatile       __bit	RCIDL		__at((0x09B*8)+6);
volatile       __bit	ABDOVF		__at((0x09B*8)+7);
#endif

#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for ADCON1 register */
volatile	__bit	ADCS0		__at((0x09F*8)+4);
volatile	__bit	ADCS1		__at((0x09F*8)+5);
volatile	__bit	ADCS2		__at((0x09F*8)+6);
#endif

/* Definitions for WPUB register */
volatile	__bit	WPUB4		__at((0x115*8)+4);
volatile	__bit	WPUB5		__at((0x115*8)+5);
volatile	__bit	WPUB6		__at((0x115*8)+6);
volatile	__bit	WPUB7		__at((0x115*8)+7);

/* Definitions for IOCB register */
volatile	__bit	IOCB4		__at((0x116*8)+4);
volatile	__bit	IOCB5		__at((0x116*8)+5);
volatile	__bit	IOCB6		__at((0x116*8)+6);
volatile	__bit	IOCB7		__at((0x116*8)+7);

/* Definitions for VRCON register */
volatile	__bit	VR0		__at((0x118*8)+0);
volatile	__bit	VR1		__at((0x118*8)+1);
volatile	__bit	VR2		__at((0x118*8)+2);
volatile	__bit	VR3		__at((0x118*8)+3);
volatile	__bit	VP6EN		__at((0x118*8)+4);
volatile	__bit	VRR		__at((0x118*8)+5);
volatile	__bit	C2VREN		__at((0x118*8)+6);
volatile	__bit	C1VREN		__at((0x118*8)+7);

/* Definitions for CM1CON0 register */
volatile	__bit	C1CH0		__at((0x119*8)+0);
volatile	__bit	C1CH1		__at((0x119*8)+1);
volatile	__bit	C1R		__at((0x119*8)+2);
volatile	__bit	C1POL		__at((0x119*8)+4);
volatile	__bit	C1OE		__at((0x119*8)+5);
volatile       __bit	C1OUT		__at((0x119*8)+6);
volatile	__bit	C1ON		__at((0x119*8)+7);

/* Definitions for CM2CON0 register */
volatile	__bit	C2CH0		__at((0x11A*8)+0);
volatile	__bit	C2CH1		__at((0x11A*8)+1);
volatile	__bit	C2R		__at((0x11A*8)+2);
volatile	__bit	C2POL		__at((0x11A*8)+4);
volatile	__bit	C2OE		__at((0x11A*8)+5);
volatile       __bit	C2OUT		__at((0x11A*8)+6);
volatile	__bit	C2ON		__at((0x11A*8)+7);

/* Definitions for CM2CON1 register */
volatile	__bit	C2SYNC		__at((0x11B*8)+0);
volatile	__bit	T1GSS		__at((0x11B*8)+1);
volatile       __bit	MC2OUT		__at((0x11B*8)+6);
volatile       __bit	MC1OUT		__at((0x11B*8)+7);

/* Definitions for ANSEL register */
volatile	__bit	ANS0		__at((0x11E*8)+0);
volatile	__bit	ANS1		__at((0x11E*8)+1);
volatile	__bit	ANS2		__at((0x11E*8)+2);
volatile	__bit	ANS3		__at((0x11E*8)+3);
volatile	__bit	ANS4		__at((0x11E*8)+4);
volatile	__bit	ANS5		__at((0x11E*8)+5);
volatile	__bit	ANS6		__at((0x11E*8)+6);
volatile	__bit	ANS7		__at((0x11E*8)+7);

#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for ANSELH register */
volatile	__bit	ANS8		__at((0x11F*8)+0);
volatile	__bit	ANS9		__at((0x11F*8)+1);
volatile	__bit	ANS10		__at((0x11F*8)+2);
volatile	__bit	ANS11		__at((0x11F*8)+3);
#endif

/* Definitions for EECON1 register */
volatile       __bit	RD		__at((0x18C*8)+0);
volatile       __bit	WR		__at((0x18C*8)+1);
volatile       __bit	WREN		__at((0x18C*8)+2);
volatile       __bit	WRERR		__at((0x18C*8)+3);
#if defined(_16F685) || defined(_16F690)
volatile       __bit	EEPGD		__at((0x18C*8)+7);

/* Definitions for PSTRCON register */
volatile __bit	STRA		__at((0x19D*8)+0);
volatile __bit	STRB		__at((0x19D*8)+1);
volatile __bit	STRC		__at((0x19D*8)+2);
volatile __bit	STRD		__at((0x19D*8)+3);
volatile __bit	STRSYNC		__at((0x19D*8)+4);
#endif

/* Definitions for SRCON register */
volatile       __bit	PULSR		__at((0x19E*8)+2);
volatile       __bit	PULSS		__at((0x19E*8)+3);
volatile	__bit	C2REN		__at((0x19E*8)+4);
volatile	__bit	C1SEN		__at((0x19E*8)+5);
volatile	__bit	SR0		__at((0x19E*8)+6);
volatile	__bit	SR1		__at((0x19E*8)+7);

#define CONFIG_ADDR	0x2007

/*
 * Definitions for library compatibility
 */
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
typedef union {
    struct {
        unsigned RABIF                  :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned RABIE                  :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned                        :3;
        unsigned EEPGD                  :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x18C);

#endif
