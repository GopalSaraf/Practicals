
#ifndef	_HTC_H_
#warning Header file pic16f91x.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
	PIC16F913
	PIC16F914
	PIC16F916
	PIC16F917
 */

#ifndef	__PIC16F91X_H
#define	__PIC16F91X_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x00);
volatile       unsigned char	TMR0		__at(0x01);
volatile       unsigned char	PCL		__at(0x02);
volatile       unsigned char	STATUS		__at(0x03);
volatile	unsigned char	FSR		__at(0x04);
volatile       unsigned char	PORTA		__at(0x05);
volatile       unsigned char	PORTB		__at(0x06);
volatile       unsigned char	PORTC		__at(0x07);
#if defined(_16F914) || defined(_16F917)
volatile       unsigned char	PORTD		__at(0x08);
#endif
volatile       unsigned char	PORTE		__at(0x09);
volatile       unsigned char	PCLATH		__at(0x0A);
volatile       unsigned char	INTCON		__at(0x0B);
volatile       unsigned char	PIR1		__at(0x0C);
volatile       unsigned char	PIR2		__at(0x0D);
volatile       unsigned char	TMR1L		__at(0x0E);
volatile       unsigned char	TMR1H		__at(0x0F);
volatile       unsigned char	T1CON		__at(0x10);
volatile       unsigned char	TMR2		__at(0x11);
volatile       unsigned char	T2CON		__at(0x12);
volatile       unsigned char	SSPBUF		__at(0x13);
volatile       unsigned char	SSPCON		__at(0x14);
volatile       unsigned char	CCPR1L		__at(0x15);
volatile       unsigned char	CCPR1H		__at(0x16);
volatile       unsigned char	CCP1CON		__at(0x17);
volatile       unsigned char	RCSTA		__at(0x18);
volatile       unsigned char	TXREG		__at(0x19);
volatile       unsigned char	RCREG		__at(0x1A);
#if defined(_16F914) || defined(_16F917)
volatile       unsigned char	CCPR2L		__at(0x1B);
volatile       unsigned char	CCPR2H		__at(0x1C);
volatile       unsigned char	CCP2CON		__at(0x1D);
#endif
volatile       unsigned char	ADRESH		__at(0x1E);
volatile       unsigned char	ADCON0		__at(0x1F);
volatile	unsigned char	OPTION		__at(0x81);
volatile       unsigned char	TRISA		__at(0x85);
volatile       unsigned char	TRISB		__at(0x86);
volatile       unsigned char	TRISC		__at(0x87);
#if defined(_16F914) || defined(_16F917)
volatile       unsigned char	TRISD		__at(0x88);
#endif
volatile       unsigned char	TRISE		__at(0x89);
volatile	unsigned char	PIE1		__at(0x8C);
volatile	unsigned char	PIE2		__at(0x8D);
volatile       unsigned char	PCON		__at(0x8E);
volatile       unsigned char	OSCCON		__at(0x8F);
volatile	unsigned char	OSCTUNE		__at(0x90);
volatile	unsigned char	ANSEL		__at(0x91);
volatile	unsigned char	PR2		__at(0x92);
volatile	unsigned char	SSPADD		__at(0x93);
volatile       unsigned char	SSPSTAT		__at(0x94);
volatile	unsigned char	WPUB		__at(0x95);
volatile	unsigned char	IOCB		__at(0x96);
volatile	unsigned char	CMCON1		__at(0x97);
volatile       unsigned char	TXSTA		__at(0x98);
volatile	unsigned char	SPBRG		__at(0x99);
volatile       unsigned char	CMCON0		__at(0x9C);
volatile	unsigned char	VRCON		__at(0x9D);
volatile       unsigned char	ADRESL		__at(0x9E);
volatile	unsigned char	ADCON1		__at(0x9F);
volatile       unsigned char	WDTCON		__at(0x105);
volatile       unsigned char	LCDCON		__at(0x107);
volatile       unsigned char	LCDPS		__at(0x108);
volatile       unsigned char	LVDCON		__at(0x109);
volatile       unsigned char	EEDATL		__at(0x10C);
/* Alternate definition for backward compatibility */
volatile       unsigned char	EEDATA		__at(0x10C);
volatile       unsigned char	EEADRL		__at(0x10D);
/* Alternate definition for backward compatibility */
volatile       unsigned char	EEADR		__at(0x10D);
volatile       unsigned char	EEDATH		__at(0x10E);
volatile       unsigned char	EEADRH		__at(0x10F);
volatile	unsigned char	LCDDATA0	__at(0x110);
volatile	unsigned char	LCDDATA1	__at(0x111);
#if defined(_16F914) || defined(_16F917)
volatile	unsigned char	LCDDATA2	__at(0x112);
#endif
volatile	unsigned char	LCDDATA3	__at(0x113);
volatile	unsigned char	LCDDATA4	__at(0x114);
#if defined(_16F914) || defined(_16F917)
volatile	unsigned char	LCDDATA5	__at(0x115);
#endif
volatile	unsigned char	LCDDATA6	__at(0x116);
volatile	unsigned char	LCDDATA7	__at(0x117);
#if defined(_16F914) || defined(_16F917)
volatile	unsigned char	LCDDATA8	__at(0x118);
#endif
volatile	unsigned char	LCDDATA9	__at(0x119);
volatile	unsigned char	LCDDATA10	__at(0x11A);
#if defined(_16F914) || defined(_16F917)
volatile	unsigned char	LCDDATA11	__at(0x11B);
#endif
volatile	unsigned char	LCDSE0		__at(0x11C);
volatile	unsigned char	LCDSE1		__at(0x11D);
volatile	unsigned char	LCDSE2		__at(0x11E);
volatile       unsigned char	EECON1		__at(0x18C);
volatile       unsigned char	EECON2		__at(0x18D);


/* Definitions for STATUS register */
volatile       __bit	CARRY		__at((0x03*8)+0);
volatile       __bit	DC		__at((0x03*8)+1);
volatile       __bit	ZERO		__at((0x03*8)+2);
volatile       __bit	PD		__at((0x03*8)+3);
volatile       __bit	TO		__at((0x03*8)+4);
volatile	__bit	RP0		__at((0x03*8)+5);
volatile	__bit	RP1		__at((0x03*8)+6);
volatile	__bit	IRP		__at((0x03*8)+7);

/* Definitions for PORTA register */
volatile       __bit	RA0		__at((0x05*8)+0);
volatile       __bit	RA1		__at((0x05*8)+1);
volatile       __bit	RA2		__at((0x05*8)+2);
volatile       __bit	RA3		__at((0x05*8)+3);
volatile       __bit	RA4		__at((0x05*8)+4);
volatile       __bit	RA5		__at((0x05*8)+5);
volatile       __bit	RA6		__at((0x05*8)+6);
volatile       __bit	RA7		__at((0x05*8)+7);

/* Definitions for PORTB register */
volatile       __bit	RB0		__at((0x06*8)+0);
volatile       __bit	RB1		__at((0x06*8)+1);
volatile       __bit	RB2		__at((0x06*8)+2);
volatile       __bit	RB3		__at((0x06*8)+3);
volatile       __bit	RB4		__at((0x06*8)+4);
volatile       __bit	RB5		__at((0x06*8)+5);
volatile       __bit	RB6		__at((0x06*8)+6);
volatile       __bit	RB7		__at((0x06*8)+7);

/* Definitions for PORTC register */
volatile       __bit	RC0		__at((0x07*8)+0);
volatile       __bit	RC1		__at((0x07*8)+1);
volatile       __bit	RC2		__at((0x07*8)+2);
volatile       __bit	RC3		__at((0x07*8)+3);
volatile       __bit	RC4		__at((0x07*8)+4);
volatile       __bit	RC5		__at((0x07*8)+5);
volatile       __bit	RC6		__at((0x07*8)+6);
volatile       __bit	RC7		__at((0x07*8)+7);

#if defined(_16F914) || defined(_16F917)
/* Definitions for PORTD register */
volatile       __bit	RD0		__at((0x08*8)+0);
volatile       __bit	RD1		__at((0x08*8)+1);
volatile       __bit	RD2		__at((0x08*8)+2);
volatile       __bit	RD3		__at((0x08*8)+3);
volatile       __bit	RD4		__at((0x08*8)+4);
volatile       __bit	RD5		__at((0x08*8)+5);
volatile       __bit	RD6		__at((0x08*8)+6);
volatile       __bit	RD7		__at((0x08*8)+7);

/* Definitions for PORTE register */
volatile       __bit	RE0		__at((0x09*8)+0);
volatile       __bit	RE1		__at((0x09*8)+1);
volatile       __bit	RE2		__at((0x09*8)+2);
#endif
volatile       __bit	RE3		__at((0x09*8)+3);

/* Definitions for INTCON register */
volatile       __bit	RBIF		__at((0x0B*8)+0);
volatile       __bit	INTF		__at((0x0B*8)+1);
volatile       __bit	T0IF		__at((0x0B*8)+2);
volatile	__bit	RBIE		__at((0x0B*8)+3);
volatile	__bit	INTE		__at((0x0B*8)+4);
volatile	__bit	T0IE		__at((0x0B*8)+5);
volatile	__bit	PEIE		__at((0x0B*8)+6);
volatile __bit	GIE		__at((0x0B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF		__at((0x0C*8)+0);
volatile       __bit	TMR2IF		__at((0x0C*8)+1);
volatile       __bit	CCP1IF		__at((0x0C*8)+2);
volatile       __bit	SSPIF		__at((0x0C*8)+3);
volatile       __bit	TXIF		__at((0x0C*8)+4);
volatile       __bit	RCIF		__at((0x0C*8)+5);
volatile       __bit	ADIF		__at((0x0C*8)+6);
volatile       __bit	EEIF		__at((0x0C*8)+7);

/* Definitions for PIR2 register */
volatile       __bit	CCP2IF		__at((0x0D*8)+0);
volatile       __bit	LVDIF		__at((0x0D*8)+2);
volatile       __bit	LCDIF		__at((0x0D*8)+4);
volatile       __bit	C1IF		__at((0x0D*8)+5);
volatile       __bit	C2IF		__at((0x0D*8)+6);
volatile       __bit	OSFIF		__at((0x0D*8)+7);

/* Definitions for T1CON register */
volatile	__bit	TMR1ON		__at((0x10*8)+0);
volatile	__bit	TMR1CS		__at((0x10*8)+1);
volatile	__bit	T1SYNC		__at((0x10*8)+2);
volatile	__bit	T1OSCEN		__at((0x10*8)+3);
volatile	__bit	T1CKPS0		__at((0x10*8)+4);
volatile	__bit	T1CKPS1		__at((0x10*8)+5);
volatile	__bit	T1GE		__at((0x10*8)+6);
volatile	__bit	T1GINV		__at((0x10*8)+7);

/* Definitions for T2CON register */
volatile	__bit	T2CKPS0		__at((0x12*8)+0);
volatile	__bit	T2CKPS1		__at((0x12*8)+1);
volatile	__bit	TMR2ON		__at((0x12*8)+2);
volatile	__bit	TOUTPS0		__at((0x12*8)+3);
volatile	__bit	TOUTPS1		__at((0x12*8)+4);
volatile	__bit	TOUTPS2		__at((0x12*8)+5);
volatile	__bit	TOUTPS3		__at((0x12*8)+6);

/* Definitions for SSPCON register */
volatile	__bit	SSPM0		__at((0x14*8)+0);
volatile	__bit	SSPM1		__at((0x14*8)+1);
volatile	__bit	SSPM2		__at((0x14*8)+2);
volatile	__bit	SSPM3		__at((0x14*8)+3);
volatile	__bit	CKP		__at((0x14*8)+4);
volatile	__bit	SSPEN		__at((0x14*8)+5);
volatile       __bit	SSPOV		__at((0x14*8)+6);
volatile       __bit	WCOL		__at((0x14*8)+7);

/* Definitions for CCP1CON register */
volatile	__bit	CCP1M0		__at((0x17*8)+0);
volatile	__bit	CCP1M1		__at((0x17*8)+1);
volatile	__bit	CCP1M2		__at((0x17*8)+2);
volatile	__bit	CCP1M3		__at((0x17*8)+3);
volatile       __bit	CCP1Y		__at((0x17*8)+4);
volatile       __bit	CCP1X		__at((0x17*8)+5);

/* Definitions for RCSTA register */
volatile       __bit	RX9D		__at((0x18*8)+0);
volatile       __bit	OERR		__at((0x18*8)+1);
volatile       __bit	FERR		__at((0x18*8)+2);
volatile	__bit	ADDEN		__at((0x18*8)+3);
volatile	__bit	CREN		__at((0x18*8)+4);
volatile	__bit	SREN		__at((0x18*8)+5);
volatile	__bit	RX9		__at((0x18*8)+6);
volatile	__bit	SPEN		__at((0x18*8)+7);

#if defined(_16F914) || defined(_16F917)
/* Definitions for CCP2CON register */
volatile	__bit	CCP2M0		__at((0x1D*8)+0);
volatile	__bit	CCP2M1		__at((0x1D*8)+1);
volatile	__bit	CCP2M2		__at((0x1D*8)+2);
volatile	__bit	CCP2M3		__at((0x1D*8)+3);
volatile       __bit	CCP2Y		__at((0x1D*8)+4);
volatile       __bit	CCP2X		__at((0x1D*8)+5);
#endif

/* Definitions for ADCON0 register */
volatile	__bit	ADON		__at((0x1F*8)+0);
volatile       __bit	GODONE		__at((0x1F*8)+1);
volatile	__bit	CHS0		__at((0x1F*8)+2);
volatile	__bit	CHS1		__at((0x1F*8)+3);
volatile	__bit	CHS2		__at((0x1F*8)+4);
volatile	__bit	VCFG0		__at((0x1F*8)+5);
volatile	__bit	VCFG1		__at((0x1F*8)+6);
volatile	__bit	ADFM		__at((0x1F*8)+7);

/* Definitions for OPTION register */
volatile	__bit	PS0		__at((0x81*8)+0);
volatile	__bit	PS1		__at((0x81*8)+1);
volatile	__bit	PS2		__at((0x81*8)+2);
volatile	__bit	PSA		__at((0x81*8)+3);
volatile	__bit	T0SE		__at((0x81*8)+4);
volatile	__bit	T0CS		__at((0x81*8)+5);
volatile	__bit	INTEDG		__at((0x81*8)+6);
volatile	__bit	RBPU		__at((0x81*8)+7);

/* Definitions for TRISA register */
volatile	__bit	TRISA0		__at((0x85*8)+0);
volatile	__bit	TRISA1		__at((0x85*8)+1);
volatile	__bit	TRISA2		__at((0x85*8)+2);
volatile	__bit	TRISA3		__at((0x85*8)+3);
volatile	__bit	TRISA4		__at((0x85*8)+4);
volatile	__bit	TRISA5		__at((0x85*8)+5);
volatile	__bit	TRISA6		__at((0x85*8)+6);
volatile	__bit	TRISA7		__at((0x85*8)+7);

/* Definitions for TRISB register */
volatile       __bit	TRISB0		__at((0x86*8)+0);
volatile       __bit	TRISB1		__at((0x86*8)+1);
volatile       __bit	TRISB2		__at((0x86*8)+2);
volatile       __bit	TRISB3		__at((0x86*8)+3);
volatile       __bit	TRISB4		__at((0x86*8)+4);
volatile       __bit	TRISB5		__at((0x86*8)+5);
volatile       __bit	TRISB6		__at((0x86*8)+6);
volatile       __bit	TRISB7		__at((0x86*8)+7);

/* Definitions for TRISC register */
volatile       __bit	TRISC0		__at((0x87*8)+0);
volatile       __bit	TRISC1		__at((0x87*8)+1);
volatile       __bit	TRISC2		__at((0x87*8)+2);
volatile       __bit	TRISC3		__at((0x87*8)+3);
volatile       __bit	TRISC4		__at((0x87*8)+4);
volatile       __bit	TRISC5		__at((0x87*8)+5);
volatile       __bit	TRISC6		__at((0x87*8)+6);
volatile       __bit	TRISC7		__at((0x87*8)+7);

#if defined(_16F914) || defined(_16F917)
/* Definitions for TRISD register */
volatile       __bit	TRISD0		__at((0x88*8)+0);
volatile       __bit	TRISD1		__at((0x88*8)+1);
volatile       __bit	TRISD2		__at((0x88*8)+2);
volatile       __bit	TRISD3		__at((0x88*8)+3);
volatile       __bit	TRISD4		__at((0x88*8)+4);
volatile       __bit	TRISD5		__at((0x88*8)+5);
volatile       __bit	TRISD6		__at((0x88*8)+6);
volatile       __bit	TRISD7		__at((0x88*8)+7);

/* Definitions for TRISE register */
volatile       __bit	TRISE0		__at((0x89*8)+0);
volatile       __bit	TRISE1		__at((0x89*8)+1);
volatile       __bit	TRISE2		__at((0x89*8)+2);
#endif
volatile       __bit	TRISE3		__at((0x89*8)+3);

/* Definitions for PIE1 register */
volatile	__bit	TMR1IE		__at((0x8C*8)+0);
volatile	__bit	TMR2IE		__at((0x8C*8)+1);
volatile	__bit	CCP1IE		__at((0x8C*8)+2);
volatile	__bit	SSPIE		__at((0x8C*8)+3);
volatile	__bit	TXIE		__at((0x8C*8)+4);
volatile	__bit	RCIE		__at((0x8C*8)+5);
volatile	__bit	ADIE		__at((0x8C*8)+6);
volatile	__bit	EEIE		__at((0x8C*8)+7);

/* Definitions for PIE2 register */
volatile	__bit	CCP2IE		__at((0x8D*8)+0);
volatile	__bit	LVDIE		__at((0x8D*8)+2);
volatile	__bit	LCDIE		__at((0x8D*8)+4);
volatile	__bit	C1IE		__at((0x8D*8)+5);
volatile	__bit	C2IE		__at((0x8D*8)+6);
volatile	__bit	OSFIE		__at((0x8D*8)+7);

/* Definitions for PCON register */
volatile       __bit	BOR		__at((0x8E*8)+0);
volatile       __bit	POR		__at((0x8E*8)+1);
volatile	__bit	SBOREN		__at((0x8E*8)+4);

/* Definitions for OSCCON register */
volatile	__bit	SCS		__at((0x8F*8)+0);
volatile       __bit	LTS		__at((0x8F*8)+1);
volatile       __bit	HTS		__at((0x8F*8)+2);
volatile       __bit	OSTS		__at((0x8F*8)+3);
volatile	__bit	IRCF0		__at((0x8F*8)+4);
volatile	__bit	IRCF1		__at((0x8F*8)+5);
volatile	__bit	IRCF2		__at((0x8F*8)+6);

/* Definitions for OSCTUNE register */
volatile	__bit	TUN0		__at((0x90*8)+0);
volatile	__bit	TUN1		__at((0x90*8)+1);
volatile	__bit	TUN2		__at((0x90*8)+2);
volatile	__bit	TUN3		__at((0x90*8)+3);
volatile	__bit	TUN4		__at((0x90*8)+4);

/* Definitions for ANSEL register */
volatile	__bit	ANS0		__at((0x91*8)+0);
volatile	__bit	ANS1		__at((0x91*8)+1);
volatile	__bit	ANS2		__at((0x91*8)+2);
volatile	__bit	ANS3		__at((0x91*8)+3);
volatile	__bit	ANS4		__at((0x91*8)+4);
volatile	__bit	ANS5		__at((0x91*8)+5);
volatile	__bit	ANS6		__at((0x91*8)+6);
volatile	__bit	ANS7		__at((0x91*8)+7);

/* Definitions for SSPSTAT register */
volatile       __bit	BF		__at((0x94*8)+0);
volatile       __bit	UA		__at((0x94*8)+1);
volatile       __bit	RW		__at((0x94*8)+2);
volatile       __bit	START		__at((0x94*8)+3);
volatile       __bit	STOP		__at((0x94*8)+4);
volatile       __bit	DA		__at((0x94*8)+5);
volatile	__bit	CKE		__at((0x94*8)+6);
volatile	__bit	SMP		__at((0x94*8)+7);

/* Definitions for IOCB register */
volatile	__bit	IOCB4		__at((0x96*8)+4);
volatile	__bit	IOCB5		__at((0x96*8)+5);
volatile	__bit	IOCB6		__at((0x96*8)+6);
volatile	__bit	IOCB7		__at((0x96*8)+7);

/* Definitions for CMCON1 register */
volatile	__bit	C2SYNC		__at((0x97*8)+0);
volatile	__bit	T1GSS		__at((0x97*8)+1);

/* Definitions for TXSTA register */
volatile       __bit	TX9D		__at((0x98*8)+0);
volatile       __bit	TRMT		__at((0x98*8)+1);
volatile	__bit	BRGH		__at((0x98*8)+2);
volatile	__bit	SYNC		__at((0x98*8)+4);
volatile	__bit	TXEN		__at((0x98*8)+5);
volatile	__bit	TX9		__at((0x98*8)+6);
volatile	__bit	CSRC		__at((0x98*8)+7);

/* Definitions for CMCON0 register */
volatile	__bit	CM0		__at((0x9C*8)+0);
volatile	__bit	CM1		__at((0x9C*8)+1);
volatile	__bit	CM2		__at((0x9C*8)+2);
volatile	__bit	CIS		__at((0x9C*8)+3);
volatile	__bit	C1INV		__at((0x9C*8)+4);
volatile	__bit	C2INV		__at((0x9C*8)+5);
volatile       __bit	C1OUT		__at((0x9C*8)+6);
volatile       __bit	C2OUT		__at((0x9C*8)+7);

/* Definitions for VRCON register */
volatile	__bit	VR0		__at((0x9D*8)+0);
volatile	__bit	VR1		__at((0x9D*8)+1);
volatile	__bit	VR2		__at((0x9D*8)+2);
volatile	__bit	VR3		__at((0x9D*8)+3);
volatile	__bit	VRR		__at((0x9D*8)+5);
volatile	__bit	VREN		__at((0x9D*8)+7);

/* Definitions for ADCON1 register */
volatile	__bit	ADCS0		__at((0x9F*8)+4);
volatile	__bit	ADCS1		__at((0x9F*8)+5);
volatile	__bit	ADCS2		__at((0x9F*8)+6);

/* Definitions for WDTCON register */
volatile	__bit	SWDTEN		__at((0x105*8)+0);
volatile	__bit	WDTPS0		__at((0x105*8)+1);
volatile	__bit	WDTPS1		__at((0x105*8)+2);
volatile	__bit	WDTPS2		__at((0x105*8)+3);
volatile	__bit	WDTPS3		__at((0x105*8)+4);

/* Definitions for LCDCON register */
volatile	__bit	LMUX0		__at((0x107*8)+0);
volatile	__bit	LMUX1		__at((0x107*8)+1);
volatile	__bit	CS0		__at((0x107*8)+2);
volatile	__bit	CS1		__at((0x107*8)+3);
volatile	__bit	VLCDEN		__at((0x107*8)+4);
volatile       __bit	WERR		__at((0x107*8)+5);
volatile	__bit	SLPEN		__at((0x107*8)+6);
volatile	__bit	LCDEN		__at((0x107*8)+7);

/* Definitions for LCDPS register */
volatile	__bit	LP0		__at((0x108*8)+0);
volatile	__bit	LP1		__at((0x108*8)+1);
volatile	__bit	LP2		__at((0x108*8)+2);
volatile	__bit	LP3		__at((0x108*8)+3);
volatile       __bit	WA		__at((0x108*8)+4);
volatile       __bit	LCDA		__at((0x108*8)+5);
volatile	__bit	BIASMD		__at((0x108*8)+6);
volatile	__bit	WFT		__at((0x108*8)+7);

/* Definitions for LVDCON register */
volatile	__bit	LVDL0		__at((0x109*8)+0);
volatile	__bit	LVDL1		__at((0x109*8)+1);
volatile	__bit	LVDL2		__at((0x109*8)+2);
volatile	__bit	LVDEN		__at((0x109*8)+4);
volatile       __bit	IRVST		__at((0x109*8)+5);

/* Definitions for LCDDATA0 register */
volatile	__bit	SEG0COM0	__at((0x110*8)+0);
volatile	__bit	SEG1COM0	__at((0x110*8)+1);
volatile	__bit	SEG2COM0	__at((0x110*8)+2);
volatile	__bit	SEG3COM0	__at((0x110*8)+3);
volatile	__bit	SEG4COM0	__at((0x110*8)+4);
volatile	__bit	SEG5COM0	__at((0x110*8)+5);
volatile	__bit	SEG6COM0	__at((0x110*8)+6);
volatile	__bit	SEG7COM0	__at((0x110*8)+7);

/* Definitions for LCDDATA1 register */
volatile	__bit	SEG8COM0	__at((0x111*8)+0);
volatile	__bit	SEG9COM0	__at((0x111*8)+1);
volatile	__bit	SEG10COM0	__at((0x111*8)+2);
volatile	__bit	SEG11COM0	__at((0x111*8)+3);
volatile	__bit	SEG12COM0	__at((0x111*8)+4);
volatile	__bit	SEG13COM0	__at((0x111*8)+5);
volatile	__bit	SEG14COM0	__at((0x111*8)+6);
volatile	__bit	SEG15COM0	__at((0x111*8)+7);

#if defined(_16F914) || defined(_16F917)
/* Definitions for LCDDATA2 register */
volatile	__bit	SEG16COM0	__at((0x112*8)+0);
volatile	__bit	SEG17COM0	__at((0x112*8)+1);
volatile	__bit	SEG18COM0	__at((0x112*8)+2);
volatile	__bit	SEG19COM0	__at((0x112*8)+3);
volatile	__bit	SEG20COM0	__at((0x112*8)+4);
volatile	__bit	SEG21COM0	__at((0x112*8)+5);
volatile	__bit	SEG22COM0	__at((0x112*8)+6);
volatile	__bit	SEG23COM0	__at((0x112*8)+7);
#endif

/* Definitions for LCDDATA3 register */
volatile	__bit	SEG0COM1	__at((0x113*8)+0);
volatile	__bit	SEG1COM1	__at((0x113*8)+1);
volatile	__bit	SEG2COM1	__at((0x113*8)+2);
volatile	__bit	SEG3COM1	__at((0x113*8)+3);
volatile	__bit	SEG4COM1	__at((0x113*8)+4);
volatile	__bit	SEG5COM1	__at((0x113*8)+5);
volatile	__bit	SEG6COM1	__at((0x113*8)+6);
volatile	__bit	SEG7COM1	__at((0x113*8)+7);

/* Definitions for LCDDATA4 register */
volatile	__bit	SEG8COM1	__at((0x114*8)+0);
volatile	__bit	SEG9COM1	__at((0x114*8)+1);
volatile	__bit	SEG10COM1	__at((0x114*8)+2);
volatile	__bit	SEG11COM1	__at((0x114*8)+3);
volatile	__bit	SEG12COM1	__at((0x114*8)+4);
volatile	__bit	SEG13COM1	__at((0x114*8)+5);
volatile	__bit	SEG14COM1	__at((0x114*8)+6);
volatile	__bit	SEG15COM1	__at((0x114*8)+7);

#if defined(_16F914) || defined(_16F917)
/* Definitions for LCDDATA5 register */
volatile	__bit	SEG16COM1	__at((0x115*8)+0);
volatile	__bit	SEG17COM1	__at((0x115*8)+1);
volatile	__bit	SEG18COM1	__at((0x115*8)+2);
volatile	__bit	SEG19COM1	__at((0x115*8)+3);
volatile	__bit	SEG20COM1	__at((0x115*8)+4);
volatile	__bit	SEG21COM1	__at((0x115*8)+5);
volatile	__bit	SEG22COM1	__at((0x115*8)+6);
volatile	__bit	SEG23COM1	__at((0x115*8)+7);
#endif

/* Definitions for LCDDATA6 register */
volatile	__bit	SEG0COM2	__at((0x116*8)+0);
volatile	__bit	SEG1COM2	__at((0x116*8)+1);
volatile	__bit	SEG2COM2	__at((0x116*8)+2);
volatile	__bit	SEG3COM2	__at((0x116*8)+3);
volatile	__bit	SEG4COM2	__at((0x116*8)+4);
volatile	__bit	SEG5COM2	__at((0x116*8)+5);
volatile	__bit	SEG6COM2	__at((0x116*8)+6);
volatile	__bit	SEG7COM2	__at((0x116*8)+7);

/* Definitions for LCDDATA7 register */
volatile	__bit	SEG8COM2	__at((0x117*8)+0);
volatile	__bit	SEG9COM2	__at((0x117*8)+1);
volatile	__bit	SEG10COM2	__at((0x117*8)+2);
volatile	__bit	SEG11COM2	__at((0x117*8)+3);
volatile	__bit	SEG12COM2	__at((0x117*8)+4);
volatile	__bit	SEG13COM2	__at((0x117*8)+5);
volatile	__bit	SEG14COM2	__at((0x117*8)+6);
volatile	__bit	SEG15COM2	__at((0x117*8)+7);

#if defined(_16F914) || defined(_16F917)
/* Definitions for LCDDATA8 register */
volatile	__bit	SEG16COM2	__at((0x118*8)+0);
volatile	__bit	SEG17COM2	__at((0x118*8)+1);
volatile	__bit	SEG18COM2	__at((0x118*8)+2);
volatile	__bit	SEG19COM2	__at((0x118*8)+3);
volatile	__bit	SEG20COM2	__at((0x118*8)+4);
volatile	__bit	SEG21COM2	__at((0x118*8)+5);
volatile	__bit	SEG22COM2	__at((0x118*8)+6);
volatile	__bit	SEG23COM2	__at((0x118*8)+7);
#endif

/* Definitions for LCDDATA9 register */
volatile	__bit	SEG0COM3	__at((0x119*8)+0);
volatile	__bit	SEG1COM3	__at((0x119*8)+1);
volatile	__bit	SEG2COM3	__at((0x119*8)+2);
volatile	__bit	SEG3COM3	__at((0x119*8)+3);
volatile	__bit	SEG4COM3	__at((0x119*8)+4);
volatile	__bit	SEG5COM3	__at((0x119*8)+5);
volatile	__bit	SEG6COM3	__at((0x119*8)+6);
volatile	__bit	SEG7COM3	__at((0x119*8)+7);

/* Definitions for LCDDATA10 register */
volatile	__bit	SEG8COM3	__at((0x11A*8)+0);
volatile	__bit	SEG9COM3	__at((0x11A*8)+1);
volatile	__bit	SEG10COM3	__at((0x11A*8)+2);
volatile	__bit	SEG11COM3	__at((0x11A*8)+3);
volatile	__bit	SEG12COM3	__at((0x11A*8)+4);
volatile	__bit	SEG13COM3	__at((0x11A*8)+5);
volatile	__bit	SEG14COM3	__at((0x11A*8)+6);
volatile	__bit	SEG15COM3	__at((0x11A*8)+7);

#if defined(_16F914) || defined(_16F917)
/* Definitions for LCDDATA11 register */
volatile	__bit	SEG16COM3	__at((0x11B*8)+0);
volatile	__bit	SEG17COM3	__at((0x11B*8)+1);
volatile	__bit	SEG18COM3	__at((0x11B*8)+2);
volatile	__bit	SEG19COM3	__at((0x11B*8)+3);
volatile	__bit	SEG20COM3	__at((0x11B*8)+4);
volatile	__bit	SEG21COM3	__at((0x11B*8)+5);
volatile	__bit	SEG22COM3	__at((0x11B*8)+6);
volatile	__bit	SEG23COM3	__at((0x11B*8)+7);
#endif

/* Definitions for LCDSE0 register */
volatile	__bit	SE0		__at((0x11C*8)+0);
volatile	__bit	SE1		__at((0x11C*8)+1);
volatile	__bit	SE2		__at((0x11C*8)+2);
volatile	__bit	SE3		__at((0x11C*8)+3);
volatile	__bit	SE4		__at((0x11C*8)+4);
volatile	__bit	SE5		__at((0x11C*8)+5);
volatile	__bit	SE6		__at((0x11C*8)+6);
volatile	__bit	SE7		__at((0x11C*8)+7);

/* Definitions for LCDSE1 register */
volatile	__bit	SE8		__at((0x11D*8)+0);
volatile	__bit	SE9		__at((0x11D*8)+1);
volatile	__bit	SE10		__at((0x11D*8)+2);
volatile	__bit	SE11		__at((0x11D*8)+3);
volatile	__bit	SE12		__at((0x11D*8)+4);
volatile	__bit	SE13		__at((0x11D*8)+5);
volatile	__bit	SE14		__at((0x11D*8)+6);
volatile	__bit	SE15		__at((0x11D*8)+7);

/* Definitions for LCDSE2 register */
volatile	__bit	SE16		__at((0x11E*8)+0);
volatile	__bit	SE17		__at((0x11E*8)+1);
volatile	__bit	SE18		__at((0x11E*8)+2);
volatile	__bit	SE19		__at((0x11E*8)+3);
volatile	__bit	SE20		__at((0x11E*8)+4);
volatile	__bit	SE21		__at((0x11E*8)+5);
volatile	__bit	SE22		__at((0x11E*8)+6);
volatile	__bit	SE23		__at((0x11E*8)+7);

/* Definitions for EECON1 register */
volatile       __bit	RD		__at((0x18C*8)+0);
volatile       __bit	WR		__at((0x18C*8)+1);
volatile       __bit	WREN		__at((0x18C*8)+2);
volatile       __bit	WRERR		__at((0x18C*8)+3);
volatile       __bit	EEPGD		__at((0x18C*8)+7);

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
        unsigned RBIF                   :1;
        unsigned INTF                   :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INTE                   :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned T0IF                   :1;
        unsigned                        :2;
        unsigned T0IE                   :1;
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
    struct {
        unsigned EERD                   :1;
        unsigned EEWR                   :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x18C);

#endif
