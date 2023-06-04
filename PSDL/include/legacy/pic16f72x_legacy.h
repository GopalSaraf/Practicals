#ifndef	_HTC_H_
 #warning Header file pic16f72x.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
	16F722
	16F723
	16F724
	16F726
	16F727
	16LF722
	16LF723
	16LF724
	16LF726
	16LF727
 */

#ifndef	__PIC16F72X_H
#define	__PIC16F72X_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x000);
volatile       unsigned char	TMR0		__at(0x001);
volatile       unsigned char	PCL		__at(0x002);
volatile       unsigned char	STATUS		__at(0x003);
volatile	unsigned char	FSR		__at(0x004);
volatile       unsigned char	PORTA		__at(0x005);
volatile       unsigned char	PORTB		__at(0x006);
volatile       unsigned char	PORTC		__at(0x007);
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
volatile       unsigned char	PORTD		__at(0x008);
#endif
volatile       unsigned char	PORTE		__at(0x009);
volatile       unsigned char	PCLATH		__at(0x00A);
volatile       unsigned char	INTCON		__at(0x00B);
volatile       unsigned char	PIR1		__at(0x00C);
volatile       unsigned char	PIR2		__at(0x00D);
volatile       unsigned char	TMR1L		__at(0x00E);
volatile       unsigned char	TMR1H		__at(0x00F);
volatile	unsigned char	T1CON		__at(0x010);
volatile       unsigned char	TMR2		__at(0x011);
volatile	unsigned char	T2CON		__at(0x012);
volatile       unsigned char	SSPBUF		__at(0x013);
volatile       unsigned char	SSPCON		__at(0x014);
volatile       unsigned char	CCPR1L		__at(0x015);
volatile       unsigned char	CCPR1H		__at(0x016);
volatile       unsigned char	CCP1CON		__at(0x017);
volatile       unsigned char	RCSTA		__at(0x018);
volatile       unsigned char	TXREG		__at(0x019);
volatile       unsigned char	RCREG		__at(0x01A);
volatile       unsigned char	CCPR2L		__at(0x01B);
volatile       unsigned char	CCPR2H		__at(0x01C);
volatile       unsigned char	CCP2CON		__at(0x01D);
volatile       unsigned char	ADRES		__at(0x01E);
volatile       unsigned char	ADCON0		__at(0x01F);
volatile	unsigned char	OPTION		__at(0x081);
volatile       unsigned char	TRISA		__at(0x085);
volatile       unsigned char	TRISB		__at(0x086);
volatile       unsigned char	TRISC		__at(0x087);
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
volatile       unsigned char	TRISD		__at(0x088);
#endif
volatile       unsigned char	TRISE		__at(0x089);
volatile	unsigned char	PIE1		__at(0x08C);
volatile	unsigned char	PIE2		__at(0x08D);
volatile       unsigned char	PCON		__at(0x08E);
volatile       unsigned char	T1GCON		__at(0x08F);
volatile       unsigned char	OSCCON		__at(0x090);
volatile	unsigned char	OSCTUNE		__at(0x091);
volatile	unsigned char	PR2		__at(0x092);
volatile	unsigned char	SSPADD		__at(0x093);
// Alternate function
volatile	unsigned char	SSPMSK		__at(0x093);
volatile       unsigned char	SSPSTAT		__at(0x094);
volatile	unsigned char	WPUB		__at(0x095);
volatile	unsigned char	IOCB		__at(0x096);
volatile       unsigned char	TXSTA		__at(0x098);
volatile	unsigned char	SPBRG		__at(0x099);
volatile	unsigned char	APFCON		__at(0x09C);
volatile       unsigned char	FVRCON		__at(0x09D);
volatile	unsigned char	ADCON1		__at(0x09F);
volatile       unsigned char	CPSCON0		__at(0x108);
volatile	unsigned char	CPSCON1		__at(0x109);
volatile       unsigned char	PMDATL		__at(0x10C);
// Alternate definition
volatile       unsigned char	EEDATA		__at(0x10C);
volatile	unsigned char	PMADRL		__at(0x10D);
// Alternate definition
volatile       unsigned char	EEADR		__at(0x10D);
volatile       unsigned char	PMDATH		__at(0x10E);
// Alternate definition
volatile       unsigned char	EEDATH		__at(0x10E);
volatile	unsigned char	PMADRH		__at(0x10F);
// Alternate definition
volatile       unsigned char	EEADRH		__at(0x10F);
volatile	unsigned char	ANSELA		__at(0x185);
volatile	unsigned char	ANSELB		__at(0x186);
#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
volatile	unsigned char	ANSELD		__at(0x188);
volatile	unsigned char	ANSELE		__at(0x189);
#endif
volatile       unsigned char	PMCON1		__at(0x18C);


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
volatile       __bit	RA6		__at((0x005*8)+6);
volatile       __bit	RA7		__at((0x005*8)+7);

/* Definitions for PORTB register */
volatile       __bit	RB0		__at((0x006*8)+0);
volatile       __bit	RB1		__at((0x006*8)+1);
volatile       __bit	RB2		__at((0x006*8)+2);
volatile       __bit	RB3		__at((0x006*8)+3);
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

#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
/* Definitions for PORTD register */
volatile       __bit	RD0		__at((0x008*8)+0);
volatile       __bit	RD1		__at((0x008*8)+1);
volatile       __bit	RD2		__at((0x008*8)+2);
volatile       __bit	RD3		__at((0x008*8)+3);
volatile       __bit	RD4		__at((0x008*8)+4);
volatile       __bit	RD5		__at((0x008*8)+5);
volatile       __bit	RD6		__at((0x008*8)+6);
volatile       __bit	RD7		__at((0x008*8)+7);

/* Definitions for PORTE register */
volatile       __bit	RE0		__at((0x009*8)+0);
volatile       __bit	RE1		__at((0x009*8)+1);
volatile       __bit	RE2		__at((0x009*8)+2);
#endif
volatile       __bit	RE3		__at((0x009*8)+3);

/* Definitions for INTCON register */
volatile       __bit	RBIF		__at((0x00B*8)+0);
// Alternate definition for backward compatibility
volatile       __bit	RABIF		__at((0x00B*8)+0);
volatile       __bit	INTF		__at((0x00B*8)+1);
volatile       __bit	T0IF		__at((0x00B*8)+2);
volatile	__bit	RBIE		__at((0x00B*8)+3);
// Alternate definition for backward compatibility
volatile	__bit	RABIE		__at((0x00B*8)+3);
volatile	__bit	INTE		__at((0x00B*8)+4);
volatile	__bit	T0IE		__at((0x00B*8)+5);
volatile	__bit	PEIE		__at((0x00B*8)+6);
volatile __bit	GIE		__at((0x00B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF		__at((0x00C*8)+0);
volatile       __bit	TMR2IF		__at((0x00C*8)+1);
volatile       __bit	CCP1IF		__at((0x00C*8)+2);
volatile       __bit	SSPIF		__at((0x00C*8)+3);
volatile       __bit	TXIF		__at((0x00C*8)+4);
volatile       __bit	RCIF		__at((0x00C*8)+5);
volatile       __bit	ADIF		__at((0x00C*8)+6);
volatile       __bit	TMR1GIF		__at((0x00C*8)+7);

/* Definitions for PIR2 register */
volatile       __bit	CCP2IF		__at((0x00D*8)+0);

/* Definitions for T1CON register */
volatile	__bit	TMR1ON		__at((0x010*8)+0);
volatile	__bit	T1SYNC		__at((0x010*8)+2);
volatile	__bit	T1OSCEN		__at((0x010*8)+3);
volatile	__bit	T1CKPS0		__at((0x010*8)+4);
volatile	__bit	T1CKPS1		__at((0x010*8)+5);
volatile	__bit	TMR1CS0		__at((0x010*8)+6);
volatile	__bit	TMR1CS1		__at((0x010*8)+7);

/* Definitions for T2CON register */
volatile	__bit	T2CKPS0		__at((0x012*8)+0);
volatile	__bit	T2CKPS1		__at((0x012*8)+1);
volatile	__bit	TMR2ON		__at((0x012*8)+2);
volatile	__bit	TOUTPS0		__at((0x012*8)+3);
volatile	__bit	TOUTPS1		__at((0x012*8)+4);
volatile	__bit	TOUTPS2		__at((0x012*8)+5);
volatile	__bit	TOUTPS3		__at((0x012*8)+6);

/* Definitions for SSPCON register */
volatile	__bit	SSPM0		__at((0x014*8)+0);
volatile	__bit	SSPM1		__at((0x014*8)+1);
volatile	__bit	SSPM2		__at((0x014*8)+2);
volatile	__bit	SSPM3		__at((0x014*8)+3);
volatile	__bit	CKP		__at((0x014*8)+4);
volatile	__bit	SSPEN		__at((0x014*8)+5);
volatile       __bit	SSPOV		__at((0x014*8)+6);
volatile       __bit	WCOL		__at((0x014*8)+7);

/* Definitions for CCP1CON register */
volatile	__bit	CCP1M0		__at((0x017*8)+0);
volatile	__bit	CCP1M1		__at((0x017*8)+1);
volatile	__bit	CCP1M2		__at((0x017*8)+2);
volatile	__bit	CCP1M3		__at((0x017*8)+3);
volatile	__bit	DC1B0		__at((0x017*8)+4);
volatile	__bit	DC1B1		__at((0x017*8)+5);

/* Definitions for RCSTA register */
volatile       __bit	RX9D		__at((0x018*8)+0);
volatile       __bit	OERR		__at((0x018*8)+1);
volatile       __bit	FERR		__at((0x018*8)+2);
volatile	__bit	ADDEN		__at((0x018*8)+3);
volatile	__bit	CREN		__at((0x018*8)+4);
volatile	__bit	SREN		__at((0x018*8)+5);
volatile	__bit	RX9		__at((0x018*8)+6);
volatile	__bit	SPEN		__at((0x018*8)+7);

/* Definitions for CCP2CON register */
volatile	__bit	CCP2M0		__at((0x01D*8)+0);
volatile	__bit	CCP2M1		__at((0x01D*8)+1);
volatile	__bit	CCP2M2		__at((0x01D*8)+2);
volatile	__bit	CCP2M3		__at((0x01D*8)+3);
volatile	__bit	DC2B0		__at((0x01D*8)+4);
volatile	__bit	DC2B1		__at((0x01D*8)+5);

/* Definitions for ADCON0 register */
volatile	__bit	ADON		__at((0x01F*8)+0);
volatile       __bit	GODONE		__at((0x01F*8)+1);
// compatibility with old devices
volatile       __bit	ADGO		__at((0x01F*8)+1);
volatile	__bit	CHS0		__at((0x01F*8)+2);
volatile	__bit	CHS1		__at((0x01F*8)+3);
volatile	__bit	CHS2		__at((0x01F*8)+4);
volatile	__bit	CHS3		__at((0x01F*8)+5);

/* Definitions for OPTION register */
volatile	__bit	PS0		__at((0x081*8)+0);
volatile	__bit	PS1		__at((0x081*8)+1);
volatile	__bit	PS2		__at((0x081*8)+2);
volatile	__bit	PSA		__at((0x081*8)+3);
volatile	__bit	T0SE		__at((0x081*8)+4);
volatile	__bit	T0CS		__at((0x081*8)+5);
volatile	__bit	INTEDG		__at((0x081*8)+6);
volatile	__bit	RBPU		__at((0x081*8)+7);
// Alternate definition for backward compatibility
volatile	__bit	RABPU		__at((0x081*8)+7);

/* Definitions for TRISA register */
volatile	__bit	TRISA0		__at((0x085*8)+0);
volatile	__bit	TRISA1		__at((0x085*8)+1);
volatile	__bit	TRISA2		__at((0x085*8)+2);
volatile	__bit	TRISA3		__at((0x085*8)+3);
volatile	__bit	TRISA4		__at((0x085*8)+4);
volatile	__bit	TRISA5		__at((0x085*8)+5);
volatile	__bit	TRISA6		__at((0x085*8)+6);
volatile	__bit	TRISA7		__at((0x085*8)+7);

/* Definitions for TRISB register */
volatile       __bit	TRISB0		__at((0x086*8)+0);
volatile       __bit	TRISB1		__at((0x086*8)+1);
volatile       __bit	TRISB2		__at((0x086*8)+2);
volatile       __bit	TRISB3		__at((0x086*8)+3);
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

#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
/* Definitions for TRISD register */
volatile       __bit	TRISD0		__at((0x088*8)+0);
volatile       __bit	TRISD1		__at((0x088*8)+1);
volatile       __bit	TRISD2		__at((0x088*8)+2);
volatile       __bit	TRISD3		__at((0x088*8)+3);
volatile       __bit	TRISD4		__at((0x088*8)+4);
volatile       __bit	TRISD5		__at((0x088*8)+5);
volatile       __bit	TRISD6		__at((0x088*8)+6);
volatile       __bit	TRISD7		__at((0x088*8)+7);

/* Definitions for TRISE register */
volatile       __bit	TRISE0		__at((0x089*8)+0);
volatile       __bit	TRISE1		__at((0x089*8)+1);
volatile       __bit	TRISE2		__at((0x089*8)+2);
#endif
volatile       __bit	TRISE3		__at((0x089*8)+3);

/* Definitions for PIE1 register */
volatile	__bit	TMR1IE		__at((0x08C*8)+0);
volatile	__bit	TMR2IE		__at((0x08C*8)+1);
volatile	__bit	CCP1IE		__at((0x08C*8)+2);
volatile	__bit	SSPIE		__at((0x08C*8)+3);
volatile	__bit	TXIE		__at((0x08C*8)+4);
volatile	__bit	RCIE		__at((0x08C*8)+5);
volatile	__bit	ADIE		__at((0x08C*8)+6);
volatile       __bit	TMR1GIE		__at((0x08C*8)+7);

/* Definitions for PIE2 register */
volatile	__bit	CCP2IE		__at((0x08D*8)+0);

/* Definitions for PCON register */
volatile       __bit	BOR		__at((0x08E*8)+0);
volatile       __bit	POR		__at((0x08E*8)+1);

/* Definitions for T1GCON register */
volatile	__bit	T1GSS0		__at((0x08F*8)+0);
volatile	__bit	T1GSS1		__at((0x08F*8)+1);
volatile       __bit	T1GVAL		__at((0x08F*8)+2);
volatile       __bit	T1GGO		__at((0x08F*8)+3);
volatile	__bit	T1GSPM		__at((0x08F*8)+4);
volatile	__bit	T1GTM		__at((0x08F*8)+5);
volatile	__bit	T1GPOL		__at((0x08F*8)+6);
volatile	__bit	TMR1GE		__at((0x08F*8)+7);

/* Definitions for OSCCON register */
volatile	__bit	ICSS		__at((0x090*8)+2);
volatile	__bit	ICSL		__at((0x090*8)+3);
volatile	__bit	IRCF0		__at((0x090*8)+4);
volatile	__bit	IRCF1		__at((0x090*8)+5);

/* Definitions for OSCTUNE register */
volatile	__bit	TUN0		__at((0x091*8)+0);
volatile	__bit	TUN1		__at((0x091*8)+1);
volatile	__bit	TUN2		__at((0x091*8)+2);
volatile	__bit	TUN3		__at((0x091*8)+3);
volatile	__bit	TUN4		__at((0x091*8)+4);
volatile	__bit	TUN5		__at((0x091*8)+5);

/* Definitions for SSPSTAT register */
volatile       __bit	BF		__at((0x094*8)+0);
volatile       __bit	UA		__at((0x094*8)+1);
volatile       __bit	RW		__at((0x094*8)+2);
volatile       __bit	START		__at((0x094*8)+3);
volatile       __bit	STOP		__at((0x094*8)+4);
volatile       __bit	DA		__at((0x094*8)+5);
volatile	__bit	CKE		__at((0x094*8)+6);
volatile	__bit	SMP		__at((0x094*8)+7);

/* Definitions for WPUB register */
volatile	__bit	WPUB0		__at((0x095*8)+0);
volatile	__bit	WPUB1		__at((0x095*8)+1);
volatile	__bit	WPUB2		__at((0x095*8)+2);
volatile	__bit	WPUB3		__at((0x095*8)+3);
volatile	__bit	WPUB4		__at((0x095*8)+4);
volatile	__bit	WPUB5		__at((0x095*8)+5);
volatile	__bit	WPUB6		__at((0x095*8)+6);
volatile	__bit	WPUB7		__at((0x095*8)+7);

/* Definitions for IOCB register */
volatile	__bit	IOCB0		__at((0x096*8)+0);
volatile	__bit	IOCB1		__at((0x096*8)+1);
volatile	__bit	IOCB2		__at((0x096*8)+2);
volatile	__bit	IOCB3		__at((0x096*8)+3);
volatile	__bit	IOCB4		__at((0x096*8)+4);
volatile	__bit	IOCB5		__at((0x096*8)+5);
volatile	__bit	IOCB6		__at((0x096*8)+6);
volatile	__bit	IOCB7		__at((0x096*8)+7);

/* Definitions for TXSTA register */
volatile       __bit	TX9D		__at((0x098*8)+0);
volatile       __bit	TRMT		__at((0x098*8)+1);
volatile	__bit	BRGH		__at((0x098*8)+2);
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

/* Definitions for APFCON register */
volatile	__bit	CCP2SEL		__at((0x09C*8)+0);
volatile	__bit	SSSEL		__at((0x09C*8)+1);

/* Definitions for FVRCON register */
volatile	__bit	ADFVR0		__at((0x09D*8)+0);
volatile	__bit	ADFVR1		__at((0x09D*8)+1);
volatile       __bit	FVREN		__at((0x09D*8)+6);
volatile       __bit	FVRRDY		__at((0x09D*8)+7);

/* Definitions for ADCON1 register */
volatile	__bit	ADREF0		__at((0x09F*8)+0);
volatile	__bit	ADREF1		__at((0x09F*8)+1);
volatile	__bit	ADCS0		__at((0x09F*8)+4);
volatile	__bit	ADCS1		__at((0x09F*8)+5);
volatile	__bit	ADCS2		__at((0x09F*8)+6);

/* Definitions for CPSCON0 register */
volatile	__bit	T0XCS		__at((0x108*8)+0);
volatile       __bit	CPSOUT		__at((0x108*8)+1);
volatile	__bit	CPSRNG0		__at((0x108*8)+2);
volatile	__bit	CPSRNG1		__at((0x108*8)+3);
volatile	__bit	CPSON		__at((0x108*8)+7);

/* Definitions for CPSCON1 register */
volatile	__bit	CPSCH0		__at((0x109*8)+0);
volatile	__bit	CPSCH1		__at((0x109*8)+1);
volatile	__bit	CPSCH2		__at((0x109*8)+2);
volatile	__bit	CPSCH3		__at((0x109*8)+3);

/* Definitions for ANSELA register */
volatile	__bit	ANSA0		__at((0x185*8)+0);
volatile	__bit	ANSA1		__at((0x185*8)+1);
volatile	__bit	ANSA2		__at((0x185*8)+2);
volatile	__bit	ANSA3		__at((0x185*8)+3);
volatile	__bit	ANSA4		__at((0x185*8)+4);
volatile	__bit	ANSA5		__at((0x185*8)+5);

/* Definitions for ANSELB register */
volatile	__bit	ANSB0		__at((0x186*8)+0);
volatile	__bit	ANSB1		__at((0x186*8)+1);
volatile	__bit	ANSB2		__at((0x186*8)+2);
volatile	__bit	ANSB3		__at((0x186*8)+3);
volatile	__bit	ANSB4		__at((0x186*8)+4);
volatile	__bit	ANSB5		__at((0x186*8)+5);

#if defined(_16F724) || defined(_16F727) ||\
       	defined(_16LF724) || defined(_16LF727)
/* Definitions for ANSELD register */
volatile	__bit	ANSD0		__at((0x188*8)+0);
volatile	__bit	ANSD1		__at((0x188*8)+1);
volatile	__bit	ANSD2		__at((0x188*8)+2);
volatile	__bit	ANSD3		__at((0x188*8)+3);
volatile	__bit	ANSD4		__at((0x188*8)+4);
volatile	__bit	ANSD5		__at((0x188*8)+5);
volatile	__bit	ANSD6		__at((0x188*8)+6);
volatile	__bit	ANSD7		__at((0x188*8)+7);

/* Definitions for ANSELE register */
volatile	__bit	ANSE0		__at((0x189*8)+0);
volatile	__bit	ANSE1		__at((0x189*8)+1);
volatile	__bit	ANSE2		__at((0x189*8)+2);
#endif

/* Definitions for PMCON1 register */
volatile       __bit	RD		__at((0x18C*8)+0);

#define CONFIG_ADDR	0x2007
#define CONFIG_ADDR2 0x2008

#endif
