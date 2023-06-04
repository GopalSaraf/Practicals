
#ifndef	_HTC_H_
#warning Header file pic169xx.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip
 *	PIC 16C923 chip
 *	PIC 16C924 chip
 *	PIC 16C925 chip
 *	PIC 16C926 chip
 *	Midrange Microcontroller
 */

volatile unsigned char INDF	__at(0x00);
volatile unsigned char TMR0	__at(0x01);
volatile unsigned char PCL	__at(0x02);
volatile unsigned char STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char PORTA	__at(0x05);
volatile unsigned char PORTB	__at(0x06);
volatile unsigned char PORTC	__at(0x07);
volatile unsigned char PORTD	__at(0x08);
volatile unsigned char PORTE	__at(0x09);
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char INTCON	__at(0x0B);
volatile unsigned char PIR1	__at(0x0C);
volatile unsigned char TMR1L	__at(0x0E);
volatile unsigned char TMR1H	__at(0x0F);
volatile unsigned char T1CON	__at(0x10);
volatile unsigned char TMR2	__at(0x11);
volatile unsigned char T2CON	__at(0x12);
volatile unsigned char SSPBUF	__at(0x13);
volatile unsigned char SSPCON	__at(0x14);
volatile unsigned char CCPR1L	__at(0x15);
volatile unsigned char CCPR1H	__at(0x16);
volatile unsigned char CCP1CON	__at(0x17);

	/*  Bank 1  */
volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char      	TRISA	__at(0x85);
volatile	unsigned char      	TRISB	__at(0x86);
volatile	unsigned char      	TRISC	__at(0x87);
volatile	unsigned char      	TRISD	__at(0x88);
volatile	unsigned char      	TRISE	__at(0x89);
volatile unsigned char      	PIE1	__at(0x8C);
volatile unsigned char      	PCON	__at(0x8E);
volatile unsigned char      	PR2	__at(0x92);
volatile unsigned char      	SSPADD	__at(0x93);
volatile unsigned char      	SSPSTAT	__at(0x94);

	/*  Bank 2  */
volatile unsigned char      	PORTF	__at(0x107);
volatile unsigned char      	PORTG	__at(0x108);
volatile unsigned char      	LCDSE	__at(0x10D);
volatile unsigned char      	LCDPS	__at(0x10E);
volatile unsigned char      	LCDCON	__at(0x10F);
volatile unsigned char      	LCDD00	__at(0x110);
volatile unsigned char      	LCDD01	__at(0x111);
volatile unsigned char      	LCDD02	__at(0x112);
volatile unsigned char      	LCDD03	__at(0x113);
volatile unsigned char      	LCDD04	__at(0x114);
volatile unsigned char      	LCDD05	__at(0x115);
volatile unsigned char      	LCDD06	__at(0x116);
volatile unsigned char      	LCDD07	__at(0x117);
volatile unsigned char      	LCDD08	__at(0x118);
volatile unsigned char      	LCDD09	__at(0x119);
volatile unsigned char      	LCDD10	__at(0x11A);
volatile unsigned char      	LCDD11	__at(0x11B);
volatile unsigned char      	LCDD12	__at(0x11C);
volatile unsigned char      	LCDD13	__at(0x11D);
volatile unsigned char      	LCDD14	__at(0x11E);
volatile unsigned char      	LCDD15	__at(0x11F);

	/*  Bank 3  */
volatile	unsigned char      	TRISF	__at(0x187);
volatile	unsigned char      	TRISG	__at(0x188);

#ifdef _16C924
volatile unsigned char 		ADRES	__at(0x1E);
volatile unsigned char 		ADCON0	__at(0x1F);
volatile unsigned char      	ADCON1	__at(0x9F);
	
/*	ADCON0 bits	*/
volatile __bit	ADCS1	__at(0x1F*8+7);
volatile __bit	ADCS0	__at(0x1F*8+6);
volatile __bit	CHS2	__at(0x1F*8+5);
volatile __bit	CHS1	__at(0x1F*8+4);
volatile __bit	CHS0	__at(0x1F*8+3);
volatile __bit	ADGO	__at(0x1F*8+2);
// Alternate definition for compatability with other devices
volatile __bit	GODONE	__at(0x1F*8+2);
volatile __bit	ADON	__at(0x1F*8+0);

/*	ADCON1 bits	*/
volatile       __bit	PCFG2	__at(0x9F*8+2);
volatile       __bit	PCFG1	__at(0x9F*8+1);
volatile       __bit	PCFG0	__at(0x9F*8+0);
#endif

#if defined(_16C925) || defined(_16C926) || defined(_16CR926)
volatile	unsigned char		ADRESH	__at(0x1E);
volatile	unsigned char		ADCON0	__at(0x1F);
volatile	unsigned char	     	ADRESL	__at(0x9E);
volatile	unsigned char      	ADCON1	__at(0x9F);
volatile	unsigned char      	PMCON1	__at(0x10C);
volatile	unsigned char	     	PMDATA	__at(0x18C);
volatile	unsigned char	     	PMDATH	__at(0x18D);
volatile	unsigned char	     	PMADR	__at(0x18E);
volatile	unsigned char	      	PMADRH	__at(0x18F);

/* 	ADRESH bits	*/
volatile	__bit		ADRESH7	__at(0x1E*8+7);
volatile	__bit		ADRESH6	__at(0x1E*8+6);
volatile	__bit		ADRESH5	__at(0x1E*8+5);
volatile	__bit		ADRESH4	__at(0x1E*8+4);
volatile	__bit		ADRESH3	__at(0x1E*8+4);
volatile	__bit		ADRESH2	__at(0x1E*8+2);
volatile	__bit		ADRESH1	__at(0x1E*8+1);
volatile	__bit		ADRESH0	__at(0x1E*8+0);

/* 	ADCON0 bits	*/
volatile	__bit		ADCS1	__at(0x1F*8+7);
volatile	__bit		ADCS0	__at(0x1F*8+6);
volatile	__bit		CHS2	__at(0x1F*8+5);
volatile	__bit		CHS1	__at(0x1F*8+4);
volatile	__bit		CHS0	__at(0x1F*8+3);
volatile	__bit		GODONE	__at(0x1F*8+2);
// Alternate definition for compatability with other devices
volatile	__bit		ADGO	__at(0x1F*8+2);
volatile	__bit		ADON	__at(0x1F*8+0);

/* 	ADRESL bits	*/
volatile	__bit		ADRESL7	__at(0x9E*8+7);
volatile	__bit		ADRESL6	__at(0x9E*8+6);
volatile	__bit		ADRESL5	__at(0x9E*8+5);
volatile	__bit		ADRESL4	__at(0x9E*8+4);
volatile	__bit		ADRESL3	__at(0x9E*8+4);
volatile	__bit		ADRESL2	__at(0x9E*8+2);
volatile	__bit		ADRESL1	__at(0x9E*8+1);
volatile	__bit		ADRESL0	__at(0x9E*8+0);

/*	ADCON1 bits	*/
volatile	      __bit	ADFM	__at(0x9F*8+7);
volatile	      __bit	PCFG3	__at(0x1F*8+3);
volatile	      __bit	PCFG2	__at(0x1F*8+2);
volatile	      __bit	PCFG1	__at(0x1F*8+1);
volatile	      __bit	PCFG0	__at(0x1F*8+0);

/* 	PMCON1 bits	*/
volatile	      __bit	RD	__at(0x10C*8+0);

/*	PMDATA bits	*/
volatile	__bit	PMDATA7	__at(0x18C*8+7);
volatile	__bit	PMDATA6	__at(0x18C*8+6);
volatile	__bit	PMDATA5	__at(0x18C*8+5);
volatile	__bit	PMDATA4	__at(0x18C*8+4);
volatile	__bit	PMDATA3	__at(0x18C*8+3);
volatile	__bit	PMDATA2	__at(0x18C*8+2);
volatile	__bit	PMDATA1	__at(0x18C*8+1);
volatile	__bit	PMDATA0	__at(0x18C*8+0);

/*	PMADR bits	*/
volatile	__bit	PMADR7	__at(0x18E*8+7);
volatile	__bit	PMADR6	__at(0x18E*8+6);
volatile	__bit	PMADR5	__at(0x18E*8+5);
volatile	__bit	PMADR4	__at(0x18E*8+4);
volatile	__bit	PMADR3	__at(0x18E*8+3);
volatile	__bit	PMADR2	__at(0x18E*8+2);
volatile	__bit	PMADR1	__at(0x18E*8+1);
volatile	__bit	PMADR0	__at(0x18E*8+0);

/*	PMATH bits	*/
volatile	__bit	PMDATH5	__at(0x18D*8+5);
volatile	__bit	PMDATH4	__at(0x18D*8+4);
volatile	__bit	PMDATH3	__at(0x18D*8+3);
volatile	__bit	PMDATH2	__at(0x18D*8+2);
volatile	__bit	PMDATH1	__at(0x18D*8+1);
volatile	__bit	PMDATH0	__at(0x18D*8+0);

/*	PMADRH bits	*/
volatile	__bit	PMADRH4	__at(0x18F*8+4);
volatile	__bit	PMADRH3	__at(0x18F*8+3);
volatile	__bit	PMADRH2	__at(0x18F*8+2);
volatile	__bit	PMADRH1	__at(0x18F*8+1);
volatile	__bit	PMADRH0	__at(0x18F*8+0);
#endif
	
/*	STATUS bits	*/
volatile __bit	IRP	__at(0x03*8+7);
volatile __bit	RP1	__at(0x03*8+6);
volatile __bit	RP0	__at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

/*      PORTA bits      */
volatile __bit	RA5	__at(0x05*8+5);
volatile __bit	RA4	__at(0x05*8+4);
volatile __bit	RA3	__at(0x05*8+3);
volatile __bit	RA2	__at(0x05*8+2);
volatile __bit	RA1	__at(0x05*8+1);
volatile __bit	RA0	__at(0x05*8+0);

/*      PORTB bits      */
volatile __bit	RB7	__at(0x06*8+7);
volatile __bit	RB6	__at(0x06*8+6);
volatile __bit	RB5	__at(0x06*8+5);
volatile __bit	RB4	__at(0x06*8+4);
volatile __bit	RB3	__at(0x06*8+3);
volatile __bit	RB2	__at(0x06*8+2);
volatile __bit	RB1	__at(0x06*8+1);
volatile __bit	RB0	__at(0x06*8+0);

/*      PORTC bits      */
volatile __bit	RC5	__at(0x07*8+5);
volatile __bit	RC4	__at(0x07*8+4);
volatile __bit	RC3	__at(0x07*8+3);
volatile __bit	RC2	__at(0x07*8+2);
volatile __bit	RC1	__at(0x07*8+1);
volatile __bit	RC0	__at(0x07*8+0);

/*      PORTD bits      */
volatile __bit	RD7	__at(0x08*8+7);
volatile __bit	RD6	__at(0x08*8+6);
volatile __bit	RD5	__at(0x08*8+5);
volatile __bit	RD4	__at(0x08*8+4);
volatile __bit	RD3	__at(0x08*8+3);
volatile __bit	RD2	__at(0x08*8+2);
volatile __bit	RD1	__at(0x08*8+1);
volatile __bit	RD0	__at(0x08*8+0);

/*      PORTE bits      */
volatile __bit	RE7	__at(0x09*8+7);
volatile __bit	RE6	__at(0x09*8+6);
volatile __bit	RE5	__at(0x09*8+5);
volatile __bit	RE4	__at(0x09*8+4);
volatile __bit	RE3	__at(0x09*8+3);
volatile __bit	RE2	__at(0x09*8+2);
volatile __bit	RE1	__at(0x09*8+1);
volatile __bit	RE0	__at(0x09*8+0);

/*	INTCON bits	*/
volatile __bit	GIE	__at(0x0B*8+7);
volatile __bit	PEIE	__at(0x0B*8+6);
volatile __bit	T0IE	__at(0x0B*8+5);
volatile __bit	INTE	__at(0x0B*8+4);
volatile __bit	RBIE	__at(0x0B*8+3);
volatile __bit	T0IF	__at(0x0B*8+2);
volatile __bit	INTF	__at(0x0B*8+1);
volatile __bit	RBIF	__at(0x0B*8+0);

/*	PIR1 bits	*/
volatile __bit	LCDIF	__at(0x0C*8+7);
#ifndef _16C923
volatile __bit	ADIF	__at(0x0C*8+6);
#endif
volatile __bit	SSPIF	__at(0x0C*8+3);
volatile __bit	CCP1IF	__at(0x0C*8+2);
volatile __bit	TMR2IF	__at(0x0C*8+1);
volatile __bit	TMR1IF	__at(0x0C*8+0);

/*	T1CON bits	*/
volatile __bit	T1CKPS1	__at(0x10*8+5);
volatile __bit	T1CKPS0	__at(0x10*8+4);
volatile __bit	T1OSCEN	__at(0x10*8+3);
volatile __bit	T1SYNC	__at(0x10*8+2);
volatile __bit	TMR1CS	__at(0x10*8+1);
volatile __bit	TMR1ON	__at(0x10*8+0);

/*	T2CON bits	*/
volatile __bit	TOUTPS3	__at(0x12*8+6);
volatile __bit	TOUTPS2	__at(0x12*8+5);
volatile __bit	TOUTPS1	__at(0x12*8+4);
volatile __bit	TOUTPS0	__at(0x12*8+3);
volatile __bit	TMR2ON	__at(0x12*8+2);
volatile __bit	T2CKPS1	__at(0x12*8+1);
volatile __bit	T2CKPS0	__at(0x12*8+0);

/*	SSPCON bits	*/
volatile __bit	WCOL	__at(0x14*8+7);
volatile __bit	SSPOV	__at(0x14*8+6);
volatile __bit	SSPEN	__at(0x14*8+5);
volatile __bit	CKP	__at(0x14*8+4);
volatile __bit	SSPM3	__at(0x14*8+3);
volatile __bit	SSPM2	__at(0x14*8+2);
volatile __bit	SSPM1	__at(0x14*8+1);
volatile __bit	SSPM0	__at(0x14*8+0);

/*	CCP1CON bits	*/
volatile __bit	CCP1X	__at(0x17*8+5);
volatile __bit	CCPIY	__at(0x17*8+4);
volatile __bit	CCP1M3	__at(0x17*8+3);
volatile __bit	CCP1M2	__at(0x17*8+2);
volatile __bit	CCP1M1	__at(0x17*8+1);
volatile __bit	CCP1M0	__at(0x17*8+0);

/*	OPTION bits	*/
volatile	__bit	RBPU	__at(0x81*8+7);
volatile	__bit	INTEDG	__at(0x81*8+6);
volatile	__bit	T0CS	__at(0x81*8+5);
volatile	__bit	T0SE	__at(0x81*8+4);
volatile	__bit	PSA	__at(0x81*8+3);
volatile	__bit	PS2	__at(0x81*8+2);
volatile	__bit	PS1	__at(0x81*8+1);
volatile	__bit	PS0	__at(0x81*8+0);

/*      TRISA bits      */
volatile       __bit	TRISA5	__at(0x85*8+5);
volatile       __bit	TRISA4	__at(0x85*8+4);
volatile       __bit	TRISA3	__at(0x85*8+3);
volatile       __bit	TRISA2	__at(0x85*8+2);
volatile       __bit	TRISA1	__at(0x85*8+1);
volatile       __bit	TRISA0	__at(0x85*8+0);

/*      TRISB bits      */
volatile       __bit	TRISB7	__at(0x86*8+7);
volatile       __bit	TRISB6	__at(0x86*8+6);
volatile       __bit	TRISB5	__at(0x86*8+5);
volatile       __bit	TRISB4	__at(0x86*8+4);
volatile       __bit	TRISB3	__at(0x86*8+3);
volatile       __bit	TRISB2	__at(0x86*8+2);
volatile       __bit	TRISB1	__at(0x86*8+1);
volatile       __bit	TRISB0	__at(0x86*8+0);

/*      TRISC bits      */
volatile       __bit	TRISC5	__at(0x87*8+5);
volatile       __bit	TRISC4	__at(0x87*8+4);
volatile       __bit	TRISC3	__at(0x87*8+3);
volatile       __bit	TRISC2	__at(0x87*8+2);
volatile       __bit	TRISC1	__at(0x87*8+1);
volatile       __bit	TRISC0	__at(0x87*8+0);

/*      TRISD bits      */
volatile       __bit	TRISD7	__at(0x88*8+7);
volatile       __bit	TRISD6	__at(0x88*8+6);
volatile       __bit	TRISD5	__at(0x88*8+5);
volatile       __bit	TRISD4	__at(0x88*8+4);
volatile       __bit	TRISD3	__at(0x88*8+3);
volatile       __bit	TRISD2	__at(0x88*8+2);
volatile       __bit	TRISD1	__at(0x88*8+1);
volatile       __bit	TRISD0	__at(0x88*8+0);

/*      TRISE bits      */
volatile       __bit	TRISE7	__at(0x89*8+7);
volatile       __bit	TRISE6	__at(0x89*8+6);
volatile       __bit	TRISE5	__at(0x89*8+5);
volatile       __bit	TRISE4	__at(0x89*8+4);
volatile       __bit	TRISE3	__at(0x89*8+3);
volatile       __bit	TRISE2	__at(0x89*8+2);
volatile       __bit	TRISE1	__at(0x89*8+1);
volatile       __bit	TRISE0	__at(0x89*8+0);

/*	PIE1 bits	*/
volatile       __bit	LCDIE	__at(0x8C*8+7);
#ifndef _16C923
volatile       __bit	ADIE	__at(0x8C*8+6);
#endif
volatile       __bit	SSPIE	__at(0x8C*8+3);
volatile       __bit	CCP1IE	__at(0x8C*8+2);
volatile       __bit	TMR2IE	__at(0x8C*8+1);
volatile       __bit	TMR1IE	__at(0x8C*8+0);

/*	PCON __bit	*/
volatile       __bit	POR	__at(0x8E*8+1);

/*      SSPSTAT bits    */
volatile       __bit	SMP		__at(0x94*8+7);
volatile       __bit	CKE		__at(0x94*8+6);
volatile       __bit	DA		__at(0x94*8+5);
volatile       __bit	STOP		__at(0x94*8+4);
volatile       __bit	START		__at(0x94*8+3);
volatile       __bit	RW		__at(0x94*8+2);
volatile       __bit	UA		__at(0x94*8+1);
volatile       __bit	BF		__at(0x94*8+0);
#ifdef __STAT_BACKWARD_COMPATIBILITY
#define STAT_SMP	SMP
#define STAT_CKE	CKE
#define STAT_DA	DA
#define STAT_P	STOP
#define STAT_S	START
#define STAT_RW	RW
#define STAT_UA	UA
#define STAT_BF	BF
#endif

/*      PORTF bits      */
volatile       __bit	RF7	__at(0x107*8+7);
volatile       __bit	RF6	__at(0x107*8+6);
volatile       __bit	RF5	__at(0x107*8+5);
volatile       __bit	RF4	__at(0x107*8+4);
volatile       __bit	RF3	__at(0x107*8+3);
volatile       __bit	RF2	__at(0x107*8+2);
volatile       __bit	RF1	__at(0x107*8+1);
volatile       __bit	RF0	__at(0x107*8+0);

/*      PORTG bits      */
volatile       __bit	RG7	__at(0x108*8+7);
volatile       __bit	RG6	__at(0x108*8+6);
volatile       __bit	RG5	__at(0x108*8+5);
volatile       __bit	RG4	__at(0x108*8+4);
volatile       __bit	RG3	__at(0x108*8+3);
volatile       __bit	RG2	__at(0x108*8+2);
volatile       __bit	RG1	__at(0x108*8+1);
volatile       __bit	RG0	__at(0x108*8+0);

/*      LCDSE bits      */
volatile       __bit	SE29	__at(0x10D*8+7);
volatile       __bit	SE27	__at(0x10D*8+6);
volatile       __bit	SE20	__at(0x10D*8+5);
volatile       __bit	SE16	__at(0x10D*8+4);
volatile       __bit	SE12	__at(0x10D*8+3);
volatile       __bit	SE9	__at(0x10D*8+2);
volatile       __bit	SE5	__at(0x10D*8+1);
volatile       __bit	SE0	__at(0x10D*8+0);

/*      LCDPS bits      */
volatile       __bit	LP3	__at(0x10E*8+3);
volatile       __bit	LP2	__at(0x10E*8+2);
volatile       __bit	LP1	__at(0x10E*8+1);
volatile       __bit	LP0	__at(0x10E*8+0);

/*      LCDCON bits     */
volatile       __bit	LCDEN	__at(0x10F*8+7);
volatile       __bit	SLPEN	__at(0x10F*8+6);
volatile       __bit	VGEN	__at(0x10F*8+4);
volatile       __bit	CS1	__at(0x10F*8+3);
volatile       __bit	CS0	__at(0x10F*8+2);
volatile       __bit	LMUX1	__at(0x10F*8+1);
volatile       __bit	LMUX0	__at(0x10F*8+0);

/*      LCDD00 bits     COM0    */
volatile       __bit	COM0SEG07	__at(0x110*8+7);
volatile       __bit	COM0SEG06	__at(0x110*8+6);
volatile       __bit	COM0SEG05	__at(0x110*8+5);
volatile       __bit	COM0SEG04	__at(0x110*8+4);
volatile       __bit	COM0SEG03	__at(0x110*8+3);
volatile       __bit	COM0SEG02	__at(0x110*8+2);
volatile       __bit	COM0SEG01	__at(0x110*8+1);
volatile       __bit	COM0SEG00	__at(0x110*8+0);

/*      LCDD01 bits     COM0    */
volatile       __bit	COM0SEG15	__at(0x111*8+7);
volatile       __bit	COM0SEG14	__at(0x111*8+6);
volatile       __bit	COM0SEG13	__at(0x111*8+5);
volatile       __bit	COM0SEG12	__at(0x111*8+4);
volatile       __bit	COM0SEG11	__at(0x111*8+3);
volatile       __bit	COM0SEG10	__at(0x111*8+2);
volatile       __bit	COM0SEG09	__at(0x111*8+1);
volatile       __bit	COM0SEG08	__at(0x111*8+0);

/*      LCDD02 bits     COM0    */
volatile       __bit	COM0SEG23	__at(0x112*8+7);
volatile       __bit	COM0SEG22	__at(0x112*8+6);
volatile       __bit	COM0SEG21	__at(0x112*8+5);
volatile       __bit	COM0SEG20	__at(0x112*8+4);
volatile       __bit	COM0SEG19	__at(0x112*8+3);
volatile       __bit	COM0SEG18	__at(0x112*8+2);
volatile       __bit	COM0SEG17	__at(0x112*8+1);
volatile       __bit	COM0SEG16	__at(0x112*8+0);

/*      LCDD03 bits     COM0    */
volatile       __bit	COM0SEG31	__at(0x113*8+7);
volatile       __bit	COM0SEG30	__at(0x113*8+6);
volatile       __bit	COM0SEG29	__at(0x113*8+5);
volatile       __bit	COM0SEG28	__at(0x113*8+4);
volatile       __bit	COM0SEG27	__at(0x113*8+3);
volatile       __bit	COM0SEG26	__at(0x113*8+2);
volatile       __bit	COM0SEG25	__at(0x113*8+1);
volatile       __bit	COM0SEG24	__at(0x113*8+0);

/*      LCDD04 bits     COM1    */
volatile       __bit	COM1SEG07	__at(0x114*8+7);
volatile       __bit	COM1SEG06	__at(0x114*8+6);
volatile       __bit	COM1SEG05	__at(0x114*8+5);
volatile       __bit	COM1SEG04	__at(0x114*8+4);
volatile       __bit	COM1SEG03	__at(0x114*8+3);
volatile       __bit	COM1SEG02	__at(0x114*8+2);
volatile       __bit	COM1SEG01	__at(0x114*8+1);
volatile       __bit	COM1SEG00	__at(0x114*8+0);

/*      LCDD05 bits     COM1    */
volatile       __bit	COM1SEG15	__at(0x115*8+7);
volatile       __bit	COM1SEG14	__at(0x115*8+6);
volatile       __bit	COM1SEG13	__at(0x115*8+5);
volatile       __bit	COM1SEG12	__at(0x115*8+4);
volatile       __bit	COM1SEG11	__at(0x115*8+3);
volatile       __bit	COM1SEG10	__at(0x115*8+2);
volatile       __bit	COM1SEG09	__at(0x115*8+1);
volatile       __bit	COM1SEG08	__at(0x115*8+0);

/*      LCDD06 bits     COM1    */
volatile       __bit	COM1SEG23	__at(0x116*8+7);
volatile       __bit	COM1SEG22	__at(0x116*8+6);
volatile       __bit	COM1SEG21	__at(0x116*8+5);
volatile       __bit	COM1SEG20	__at(0x116*8+4);
volatile       __bit	COM1SEG19	__at(0x116*8+3);
volatile       __bit	COM1SEG18	__at(0x116*8+2);
volatile       __bit	COM1SEG17	__at(0x116*8+1);
volatile       __bit	COM1SEG16	__at(0x116*8+0);

/*      LCDD07 bits     COM1    */
volatile       __bit	COM1SEG31	__at(0x117*8+7);
volatile       __bit	COM1SEG30	__at(0x117*8+6);
volatile       __bit	COM1SEG29	__at(0x117*8+5);
volatile       __bit	COM1SEG28	__at(0x117*8+4);
volatile       __bit	COM1SEG27	__at(0x117*8+3);
volatile       __bit	COM1SEG26	__at(0x117*8+2);
volatile       __bit	COM1SEG25	__at(0x117*8+1);
volatile       __bit	COM1SEG24	__at(0x117*8+0);

/*      LCDD08 bits     COM2    */
volatile       __bit	COM2SEG07	__at(0x118*8+7);
volatile       __bit	COM2SEG06	__at(0x118*8+6);
volatile       __bit	COM2SEG05	__at(0x118*8+5);
volatile       __bit	COM2SEG04	__at(0x118*8+4);
volatile       __bit	COM2SEG03	__at(0x118*8+3);
volatile       __bit	COM2SEG02	__at(0x118*8+2);
volatile       __bit	COM2SEG01	__at(0x118*8+1);
volatile       __bit	COM2SEG00	__at(0x118*8+0);

/*      LCDD09 bits     COM2    */
volatile       __bit	COM2SEG15	__at(0x119*8+7);
volatile       __bit	COM2SEG14	__at(0x119*8+6);
volatile       __bit	COM2SEG13	__at(0x119*8+5);
volatile       __bit	COM2SEG12	__at(0x119*8+4);
volatile       __bit	COM2SEG11	__at(0x119*8+3);
volatile       __bit	COM2SEG10	__at(0x119*8+2);
volatile       __bit	COM2SEG09	__at(0x119*8+1);
volatile       __bit	COM2SEG08	__at(0x119*8+0);

/*      LCDD10 bits     COM2    */
volatile       __bit	COM2SEG23	__at(0x11A*8+7);
volatile       __bit	COM2SEG22	__at(0x11A*8+6);
volatile       __bit	COM2SEG21	__at(0x11A*8+5);
volatile       __bit	COM2SEG20	__at(0x11A*8+4);
volatile       __bit	COM2SEG19	__at(0x11A*8+3);
volatile       __bit	COM2SEG18	__at(0x11A*8+2);
volatile       __bit	COM2SEG17	__at(0x11A*8+1);
volatile       __bit	COM2SEG16	__at(0x11A*8+0);

/*      LCDD11 bits     COM2    */
volatile       __bit	COM2SEG31	__at(0x11B*8+7);
volatile       __bit	COM2SEG30	__at(0x11B*8+6);
volatile       __bit	COM2SEG29	__at(0x11B*8+5);
volatile       __bit	COM2SEG28	__at(0x11B*8+4);
volatile       __bit	COM2SEG27	__at(0x11B*8+3);
volatile       __bit	COM2SEG26	__at(0x11B*8+2);
volatile       __bit	COM2SEG25	__at(0x11B*8+1);
volatile       __bit	COM2SEG24	__at(0x11B*8+0);

/*      LCDD12 bits     COM3    */
volatile       __bit	COM3SEG07	__at(0x11C*8+7);
volatile       __bit	COM3SEG06	__at(0x11C*8+6);
volatile       __bit	COM3SEG05	__at(0x11C*8+5);
volatile       __bit	COM3SEG04	__at(0x11C*8+4);
volatile       __bit	COM3SEG03	__at(0x11C*8+3);
volatile       __bit	COM3SEG02	__at(0x11C*8+2);
volatile       __bit	COM3SEG01	__at(0x11C*8+1);
volatile       __bit	COM3SEG00	__at(0x11C*8+0);

/*      LCDD13 bits     COM3    */
volatile       __bit	COM3SEG15	__at(0x11D*8+7);
volatile       __bit	COM3SEG14	__at(0x11D*8+6);
volatile       __bit	COM3SEG13	__at(0x11D*8+5);
volatile       __bit	COM3SEG12	__at(0x11D*8+4);
volatile       __bit	COM3SEG11	__at(0x11D*8+3);
volatile       __bit	COM3SEG10	__at(0x11D*8+2);
volatile       __bit	COM3SEG09	__at(0x11D*8+1);
volatile       __bit	COM3SEG08	__at(0x11D*8+0);

/*      LCDD14 bits     COM3    */
volatile       __bit	COM3SEG23	__at(0x11E*8+7);
volatile       __bit	COM3SEG22	__at(0x11E*8+6);
volatile       __bit	COM3SEG21	__at(0x11E*8+5);
volatile       __bit	COM3SEG20	__at(0x11E*8+4);
volatile       __bit	COM3SEG19	__at(0x11E*8+3);
volatile       __bit	COM3SEG18	__at(0x11E*8+2);
volatile       __bit	COM3SEG17	__at(0x11E*8+1);
volatile       __bit	COM3SEG16	__at(0x11E*8+0);

/*      LCDD15 bits     COM3    */
volatile       __bit	COM3SEG31	__at(0x11F*8+7);
volatile       __bit	COM3SEG30	__at(0x11F*8+6);
volatile       __bit	COM3SEG29	__at(0x11F*8+5);
volatile       __bit	COM3SEG28	__at(0x11F*8+4);
volatile       __bit	COM3SEG27	__at(0x11F*8+3);
volatile       __bit	COM3SEG26	__at(0x11F*8+2);
volatile       __bit	COM3SEG25	__at(0x11F*8+1);
volatile       __bit	COM3SEG24	__at(0x11F*8+0);

/*      TRISF bits      */
volatile       __bit	TRISF7	__at(0x187*8+7);
volatile       __bit	TRISF6	__at(0x187*8+6);
volatile       __bit	TRISF5	__at(0x187*8+5);
volatile       __bit	TRISF4	__at(0x187*8+4);
volatile       __bit	TRISF3	__at(0x187*8+3);
volatile       __bit	TRISF2	__at(0x187*8+2);
volatile       __bit	TRISF1	__at(0x187*8+1);
volatile       __bit	TRISF0	__at(0x187*8+0);

/*      TRISG bits      */
volatile       __bit	TRISG7	__at(0x188*8+7);
volatile       __bit	TRISG6	__at(0x188*8+6);
volatile       __bit	TRISG5	__at(0x188*8+5);
volatile       __bit	TRISG4	__at(0x188*8+4);
volatile       __bit	TRISG3	__at(0x188*8+3);
volatile       __bit	TRISG2	__at(0x188*8+2);
volatile       __bit	TRISG1	__at(0x188*8+1);
volatile       __bit	TRISG0	__at(0x188*8+0);

// definitions select memory reading macros in pic.h
#define EECON1	PMCON1
#define EEDATA	PMDATA
#define EEDATH	PMDATH
#define EEADR	PMADR
#define EEADRH	PMADRH

#define CONFIG_ADDR	0x2007

