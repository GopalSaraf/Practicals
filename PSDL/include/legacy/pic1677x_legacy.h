
#ifndef	_HTC_H_
#warning Header file pic1677x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 16C770 chip
 *	PIC 16C771 chip
 *	PIC 16C717 chip
 *	PIC 16C773 chip
 *	PIC 16C774 chip
 *	PIC 16C745 chip
 *	PIC 16C765 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char	INDF	__at(0x00);
volatile unsigned char	TMR0	__at(0x01);
volatile unsigned char	PCL	__at(0x02);
volatile unsigned char	STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char	PORTA	__at(0x05);
volatile unsigned char	PORTB	__at(0x06);
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile unsigned char	PORTC	__at(0x07);
#endif
#if defined(_16C774) || defined(_16C765)
volatile unsigned char	PORTD	__at(0x08);
volatile unsigned char	PORTE	__at(0x09);
#endif
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char	INTCON	__at(0x0B);
volatile unsigned char	PIR1	__at(0x0C);
volatile unsigned char	PIR2	__at(0x0D);
volatile unsigned char	TMR1L	__at(0x0E);
volatile unsigned char	TMR1H	__at(0x0F);
volatile unsigned char	T1CON	__at(0x10);
volatile unsigned char	TMR2	__at(0x11);
volatile unsigned char	T2CON	__at(0x12);
#if !defined(_16C745) && !defined(_16C765)
volatile unsigned char	SSPBUF	__at(0x13);
volatile unsigned char	SSPCON	__at(0x14);
#endif
volatile unsigned char	CCPR1L	__at(0x15);
volatile unsigned char	CCPR1H	__at(0x16);
volatile unsigned char	CCP1CON	__at(0x17);
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile unsigned char	RCSTA	__at(0x18);
volatile unsigned char	TXREG	__at(0x19);
volatile unsigned char	RCREG	__at(0x1A);
volatile unsigned char	CCPR2L	__at(0x1B);
volatile unsigned char	CCPR2H	__at(0x1C);
volatile unsigned char	CCP2CON	__at(0x1D);
#endif
volatile unsigned char	ADRESH	__at(0x1E);
volatile unsigned char	ADCON0	__at(0x1F);

volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char	     	TRISA	__at(0x85);
volatile	unsigned char	     	TRISB	__at(0x86);
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile	unsigned char	     	TRISC	__at(0x87);
#endif
#if defined(_16C774) || defined(_16C765)
volatile	unsigned char	     	TRISD	__at(0x88);
volatile	unsigned char	     	TRISE	__at(0x89);
#endif
volatile unsigned char      	PIE1	__at(0x8C);
volatile unsigned char      	PIE2	__at(0x8D);
volatile unsigned char      	PCON	__at(0x8E);
#if !defined(_16C745) && !defined(_16C765)
volatile unsigned char      	SSPCON2	__at(0x91);
#endif
volatile unsigned char      	PR2	__at(0x92);
#if !defined(_16C745) && !defined(_16C765)
volatile unsigned char      	SSPADD	__at(0x93);
volatile unsigned char      	SSPSTAT	__at(0x94);
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile unsigned char      	WPUB	__at(0x95);
volatile unsigned char      	IOCB	__at(0x96);
volatile unsigned char      	P1DEL	__at(0x97);
#endif
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile unsigned char      	TXSTA	__at(0x98);
volatile unsigned char      	SPBRG	__at(0x99);
#endif
#if !defined(_16C745) && !defined(_16C765)
volatile unsigned char      	REFCON	__at(0x9B);
volatile unsigned char      	LVDCON	__at(0x9C);
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile unsigned char      	ANSEL	__at(0x9D);
#endif
volatile unsigned char      	ADRESL	__at(0x9E);
#endif
volatile unsigned char      	ADCON1	__at(0x9F);

#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile	unsigned char	     	PMDATL	__at(0x10C);
volatile	unsigned char	     	PMADRL	__at(0x10D);
volatile	unsigned char	     	PMDATH	__at(0x10E);
volatile	unsigned char	     	PMADRH	__at(0x10F);
#endif
#if defined(_16C770)
volatile unsigned char	PMCON1	__at(0x18C);
volatile __bit RD			__at((0x18C*8)+0);
#endif

#if defined(_16C745) || defined(_16C765)
/* USB Registers */
volatile unsigned char      	UIR	__at(0x190);
volatile unsigned char      	UIE	__at(0x191);
volatile unsigned char      	UEIR	__at(0x192);
volatile unsigned char      	UEIE	__at(0x193);
volatile unsigned char      	USTAT	__at(0x194);
volatile unsigned char      	UCTRL	__at(0x195);
volatile unsigned char      	UADDR	__at(0x196);
volatile unsigned char      	USWSTAT	__at(0x197);
volatile unsigned char      	UEP0	__at(0x198);
volatile unsigned char      	UEP1	__at(0x199);
volatile unsigned char      	UEP2	__at(0x19A);

volatile unsigned char      	BD0OST __at(0x1A0);
volatile unsigned char      	BD1OST __at(0x1A8);
volatile unsigned char      	BD2OST __at(0x1B0);

volatile unsigned char      	BD0IST __at(0x1A4);
volatile unsigned char      	BD1IST __at(0x1AC);
volatile unsigned char      	BD2IST __at(0x1B4);

volatile unsigned char      	BD0OBC	__at(0x1A1);
volatile unsigned char      	BD1OBC	__at(0x1A9);
volatile unsigned char      	BD2OBC	__at(0x1B1);

volatile unsigned char      	BD0IBC	__at(0x1A5);
volatile unsigned char      	BD1IBC	__at(0x1AD);
volatile unsigned char      	BD2IBC	__at(0x1B5);

volatile unsigned char *      	BD0OAL	__at(0x1A2);
volatile unsigned char *     	BD1OAL	__at(0x1AA);
volatile unsigned char *    	BD2OAL	__at(0x1B2);

volatile unsigned char *   	BD0IAL	__at(0x1A6);
volatile unsigned char *  	BD1IAL	__at(0x1AE);
volatile unsigned char * 	BD2IAL	__at(0x1B6);

/* USB Dual Port Memory buffer */
extern volatile unsigned char       USBMEM[40]	__at(0x1B8);

#endif


/* 	TMR0 bits	*/
volatile	__bit	TMR07	__at(0x01*8+7);
volatile	__bit	TMR06   __at(0x01*8+6);
volatile	__bit	TMR05   __at(0x01*8+5);
volatile	__bit	TMR04	__at(0x01*8+4);
volatile	__bit	TMR03	__at(0x01*8+3);
volatile	__bit	TMR02   __at(0x01*8+2);
volatile	__bit	TMR01   __at(0x01*8+1);
volatile	__bit	TMR00   __at(0x01*8+0);

/*	PCL bits	*/
volatile	__bit	PCL7	__at(0x02*8+7);
volatile	__bit	PCL6   	__at(0x02*8+6);
volatile	__bit	PCL5   	__at(0x02*8+5);
volatile	__bit	PCL4	__at(0x02*8+4);
volatile	__bit	PCL3	__at(0x02*8+3);
volatile	__bit	PCL2	__at(0x02*8+2);
volatile	__bit	PCL1   	__at(0x02*8+1);
volatile	__bit	PCL0  	__at(0x02*8+0);

/*	STATUS bits	*/
volatile __bit	IRP     __at(0x03*8+7);
volatile __bit	RP1     __at(0x03*8+6);
volatile __bit	RP0     __at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO    __at(0x03*8+2);
volatile __bit	DC      __at(0x03*8+1);
volatile __bit	CARRY   __at(0x03*8+0);

/*      PORTA bits      */
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile __bit	RA7     __at(0x05*8+7);
volatile __bit	RA6     __at(0x05*8+6);
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile __bit	RA5     __at(0x05*8+5);
#endif
volatile __bit	RA4     __at(0x05*8+4);
volatile __bit	RA3     __at(0x05*8+3);
volatile __bit	RA2     __at(0x05*8+2);
volatile __bit	RA1     __at(0x05*8+1);
volatile __bit	RA0     __at(0x05*8+0);

/*      PORTB bits      */
volatile __bit	RB7     __at(0x06*8+7);
volatile __bit	RB6     __at(0x06*8+6);
volatile __bit	RB5     __at(0x06*8+5);
volatile __bit	RB4     __at(0x06*8+4);
volatile __bit	RB3     __at(0x06*8+3);
volatile __bit	RB2     __at(0x06*8+2);
volatile __bit	RB1     __at(0x06*8+1);
volatile __bit	RB0     __at(0x06*8+0);

/*      PORTC bits      */
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile __bit	RC7     __at(0x07*8+7);
volatile __bit	RC6     __at(0x07*8+6);
#if !defined(_16C745) && !defined(_16C765)
volatile __bit	RC5     __at(0x07*8+5);
volatile __bit	RC4     __at(0x07*8+4);
volatile __bit	RC3     __at(0x07*8+3);
#endif
volatile __bit	RC2     __at(0x07*8+2);
volatile __bit	RC1     __at(0x07*8+1);
volatile __bit	RC0     __at(0x07*8+0);
#endif

#if defined(_16C774) || defined(_16C765)
/*      PORTD bits      */
volatile __bit	RD7     __at(0x08*8+7);
volatile __bit	RD6     __at(0x08*8+6);
volatile __bit	RD5     __at(0x08*8+5);
volatile __bit	RD4     __at(0x08*8+4);
volatile __bit	RD3     __at(0x08*8+3);
volatile __bit	RD2     __at(0x08*8+2);
volatile __bit	RD1     __at(0x08*8+1);
volatile __bit	RD0     __at(0x08*8+0);

/*      PORTE bits      */
volatile __bit      RE2     __at(0x09*8+2);
volatile __bit      RE1     __at(0x09*8+1);
volatile __bit      RE0     __at(0x09*8+0);
#endif

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
#if defined(_16C774) || defined(_16C765)
volatile __bit	PSPIF	__at(0x0C*8+7);
#endif
volatile __bit	ADIF	__at(0x0C*8+6);
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile __bit	RCIF	__at(0x0C*8+5);
volatile __bit	TXIF	__at(0x0C*8+4);
#endif
#if defined(_16C745) || defined(_16C765)
volatile __bit	USBIF	__at(0x0C*8+3);
#endif
#if !defined(_16C745) && !defined(_16C765)
volatile __bit	SSPIF	__at(0x0C*8+3);
#endif
volatile __bit	CCP1IF	__at(0x0C*8+2);
volatile __bit	TMR2IF	__at(0x0C*8+1);
volatile __bit	TMR1IF	__at(0x0C*8+0);

/*	PIR2 bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile __bit	LVDIF	__at(0x0D*8+7);
volatile __bit	BCLIF	__at(0x0D*8+3);
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile __bit	CCP2IF	__at(0x0D*8+0);
#endif

/*	TMR1L bits	*/
volatile	__bit	TMR1L7		__at(0x0E*8+7);
volatile	__bit	TMR1L6  	__at(0x0E*8+6);
volatile	__bit	TMR1L5  	__at(0x0E*8+5);
volatile	__bit	TMR1L4		__at(0x0E*8+4);
volatile	__bit	TMR1L3		__at(0x0E*8+3);
volatile	__bit	TMR1L2  	__at(0x0E*8+2);
volatile	__bit	TMR1L1  	__at(0x0E*8+1);
volatile	__bit	TMR1L0  	__at(0x0E*8+0);

/*	TMR1H bits	*/
volatile	__bit	TMR1H7		__at(0x0F*8+7);
volatile	__bit	TMR1H6  	__at(0x0F*8+6);
volatile	__bit	TMR1H5  	__at(0x0F*8+5);
volatile	__bit	TMR1H4		__at(0x0F*8+4);
volatile	__bit	TMR1H3		__at(0x0F*8+3);
volatile	__bit	TMR1H2  	__at(0x0F*8+2);
volatile	__bit	TMR1H1  	__at(0x0F*8+1);
volatile	__bit	TMR1H0  	__at(0x0F*8+0);

/* 	TMR2 bits	*/
volatile	__bit	TMR27	__at(0x11*8+7);
volatile	__bit	TMR26   __at(0x11*8+6);
volatile	__bit	TMR25   __at(0x11*8+5);
volatile	__bit	TMR24	__at(0x11*8+4);
volatile	__bit	TMR23	__at(0x11*8+3);
volatile	__bit	TMR22   __at(0x11*8+2);
volatile	__bit	TMR21   __at(0x11*8+1);
volatile	__bit	TMR20   __at(0x11*8+0);

/*	T1CON bits	*/
volatile __bit	T1CKPS1	__at(0x10*8+5);
volatile __bit	T1CKPS0	__at(0x10*8+4);
volatile __bit	T1OSCEN	__at(0x10*8+3);
volatile __bit	T1SYNC 	__at(0x10*8+2);
volatile __bit	TMR1CS 	__at(0x10*8+1);
volatile __bit	TMR1ON 	__at(0x10*8+0);

/*	T2CON bits	*/
volatile __bit	TOUTPS3	__at(0x12*8+6);
volatile __bit	TOUTPS2	__at(0x12*8+5);
volatile __bit	TOUTPS1	__at(0x12*8+4);
volatile __bit	TOUTPS0	__at(0x12*8+3);
volatile __bit	TMR2ON 	__at(0x12*8+2);
volatile __bit	T2CKPS1	__at(0x12*8+1);
volatile __bit	T2CKPS0	__at(0x12*8+0);

#if !defined(_16C745) && !defined(_16C765)
/*	SSPBUF bits	*/
volatile __bit	SSPBUF7 __at(0x13*8+7);
volatile __bit	SSPBUF6 __at(0x13*8+6);
volatile __bit	SSPBUF5 __at(0x13*8+5);
volatile __bit	SSPBUF4 __at(0x13*8+4);
volatile __bit	SSPBUF3 __at(0x13*8+3);
volatile __bit	SSPBUF2 __at(0x13*8+2);
volatile __bit	SSPBUF1 __at(0x13*8+1);
volatile __bit	SSPBUF0 __at(0x13*8+0);

/*	SSPCON bits	*/
volatile __bit	WCOL	__at(0x14*8+7);
volatile __bit	SSPOV	__at(0x14*8+6);
volatile __bit	SSPEN	__at(0x14*8+5);
volatile __bit	CKP	__at(0x14*8+4);
volatile __bit	SSPM3	__at(0x14*8+3);
volatile __bit	SSPM2	__at(0x14*8+2);
volatile __bit	SSPM1	__at(0x14*8+1);
volatile __bit	SSPM0	__at(0x14*8+0);
#endif

/* 	CCPR1L bits	*/
volatile	__bit	CCPR1L7 __at(0x15*8+7);
volatile	__bit	CCPR1L6 __at(0x15*8+6);
volatile	__bit	CCPR1L5 __at(0x15*8+5);
volatile	__bit	CCPR1L4 __at(0x15*8+4);
volatile	__bit	CCPR1L3 __at(0x15*8+3);
volatile	__bit	CCPR1L2 __at(0x15*8+2);
volatile	__bit	CCPR1L1 __at(0x15*8+1);
volatile	__bit	CCPR1L0 __at(0x15*8+0);

/* 	CCPR1H bits	*/
volatile	__bit	CCPR1H7 __at(0x16*8+7);
volatile	__bit	CCPR1H6 __at(0x16*8+6);
volatile	__bit	CCPR1H5 __at(0x16*8+5);
volatile	__bit	CCPR1H4 __at(0x16*8+4);
volatile	__bit	CCPR1H3 __at(0x16*8+3);
volatile	__bit	CCPR1H2 __at(0x16*8+2);
volatile	__bit	CCPR1H1 __at(0x16*8+1);
volatile	__bit	CCPR1H0 __at(0x16*8+0);

/*	CCP1CON bits	*/
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C745) || defined(_16C765)
#if !defined(_16C745) && !defined(_16C765)
volatile __bit	PWM1M1	__at(0x17*8+7);
volatile __bit	PWM1M0	__at(0x17*8+6);
#endif
volatile __bit	DC1B1	__at(0x17*8+5);
volatile __bit	DC1B0	__at(0x17*8+4);
#endif
#if defined(_16C773) || defined(_16C774)
volatile __bit	CCP1X	__at(0x17*8+5);
volatile __bit	CCP1Y	__at(0x17*8+4);
#endif
volatile __bit	CCP1M3	__at(0x17*8+3);
volatile __bit	CCP1M2	__at(0x17*8+2);
volatile __bit	CCP1M1	__at(0x17*8+1);
volatile __bit	CCP1M0	__at(0x17*8+0);

#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
/*	RCSTA bits	*/
volatile __bit	SPEN	__at(0x18*8+7);
volatile __bit	RX9 	__at(0x18*8+6);
volatile __bit	SREN	__at(0x18*8+5);
volatile __bit	CREN	__at(0x18*8+4);
#if !defined(_16C745) && !defined(_16C765)
volatile __bit	ADDEN	__at(0x18*8+3);
#endif
volatile __bit	FERR	__at(0x18*8+2);
volatile __bit	OERR	__at(0x18*8+1);
volatile __bit	RX9D	__at(0x18*8+0);

/*	CCP2CON bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile __bit	CCP2X	__at(0x1D*8+5);
volatile __bit	CCP2Y	__at(0x1D*8+4);
#endif
#if defined(_16C745) || defined(_16C765)
volatile __bit	DC2B1	__at(0x1D*8+5);
volatile __bit	DC2B0	__at(0x1D*8+4);
#endif
volatile __bit	CCP2M3	__at(0x1D*8+3);
volatile __bit	CCP2M2	__at(0x1D*8+2);
volatile __bit	CCP2M1	__at(0x1D*8+1);
volatile __bit	CCP2M0	__at(0x1D*8+0);
#endif

/*	 ADCON0 bits	*/
volatile __bit	ADCS1	__at(0x1F*8+7);
volatile __bit	ADCS0 	__at(0x1F*8+6);
volatile __bit	CHS2	__at(0x1F*8+5);
volatile __bit	CHS1	__at(0x1F*8+4);
volatile __bit	CHS0	__at(0x1F*8+3);
volatile __bit	ADGO	__at(0x1F*8+2);
// Alternate definition for compatibility with other devices
volatile __bit	GODONE	__at(0x1F*8+2);
#if !defined(_16C745) && !defined(_16C765)
volatile __bit	CHS3	__at(0x1F*8+1);
#endif
volatile __bit	ADON	__at(0x1F*8+0);

/* 	ADRESH bits	*/
volatile	__bit		ADRESH7 __at(0x1E*8+7);
volatile	__bit		ADRESH6 __at(0x1E*8+6);
volatile	__bit		ADRESH5 __at(0x1E*8+5);
volatile	__bit		ADRESH4 __at(0x1E*8+4);
volatile	__bit		ADRESH3 __at(0x1E*8+3);
volatile	__bit		ADRESH2 __at(0x1E*8+2);
volatile	__bit		ADRESH1 __at(0x1E*8+1);
volatile	__bit		ADRESH0 __at(0x1E*8+0);

/* 	OPTION bits	*/
volatile __bit      	RBPU	__at(0x81*8+7);
volatile __bit      	INTEDG	__at(0x81*8+6);
volatile __bit      	T0CS	__at(0x81*8+5);
volatile __bit      	T0SE	__at(0x81*8+4);
volatile __bit      	PSA	__at(0x81*8+3);
volatile __bit      	PS2	__at(0x81*8+2);
volatile __bit      	PS1	__at(0x81*8+1);
volatile __bit       	PS0	__at(0x81*8+0);

/*      TRISA bits      */
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile __bit      	TRISA7  __at(0x85*8+7);
volatile __bit      	TRISA6  __at(0x85*8+6);
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile __bit      	TRISA5  __at(0x85*8+5);
#endif
volatile __bit      	TRISA4  __at(0x85*8+4);
volatile __bit      	TRISA3  __at(0x85*8+3);
volatile __bit      	TRISA2  __at(0x85*8+2);
volatile __bit      	TRISA1  __at(0x85*8+1);
volatile __bit      	TRISA0  __at(0x85*8+0);

/*      TRISB bits      */
volatile __bit      	TRISB7  __at(0x86*8+7);
volatile __bit      	TRISB6  __at(0x86*8+6);
volatile __bit      	TRISB5  __at(0x86*8+5);
volatile __bit      	TRISB4  __at(0x86*8+4);
volatile __bit      	TRISB3  __at(0x86*8+3);
volatile __bit      	TRISB2  __at(0x86*8+2);
volatile __bit      	TRISB1  __at(0x86*8+1);
volatile __bit      	TRISB0  __at(0x86*8+0);

/*      TRISC bits      */
#if defined(_16C773) || defined(_16C774)
volatile __bit      	TRISC7  __at(0x87*8+7);
volatile __bit      	TRISC6  __at(0x87*8+6);
#if !defined(_16C745) && !defined(_16C765)
volatile __bit      	TRISC5  __at(0x87*8+5); 
volatile __bit      	TRISC4  __at(0x87*8+4);
volatile __bit      	TRISC3  __at(0x87*8+3);
#endif
volatile __bit      	TRISC2  __at(0x87*8+2);
volatile __bit      	TRISC1  __at(0x87*8+1);
volatile __bit      	TRISC0  __at(0x87*8+0);
#endif

#if defined(_16C774) || defined(_16C765)
/*      TRISD bits      */
volatile __bit      	TRISD7  __at(0x88*8+7);
volatile __bit      	TRISD6  __at(0x88*8+6);
volatile __bit      	TRISD5  __at(0x88*8+5);
volatile __bit      	TRISD4  __at(0x88*8+4);
volatile __bit      	TRISD3  __at(0x88*8+3);
volatile __bit      	TRISD2  __at(0x88*8+2);
volatile __bit      	TRISD1  __at(0x88*8+1);
volatile __bit      	TRISD0  __at(0x88*8+0);

/*      TRISE bits      */
volatile __bit      	IBF     __at(0x89*8+7);
volatile __bit      	OBF     __at(0x89*8+6);
volatile __bit      	IBOV    __at(0x89*8+5);
volatile __bit      	PSPMODE __at(0x89*8+4);
volatile __bit      	TRISE2	__at(0x89*8+2);
volatile __bit      	TRISE1	__at(0x89*8+1);
volatile __bit      	TRISE0	__at(0x89*8+0);
#endif

/*	PIE1 bits	*/
#if defined(_16C774) || defined(_16C765)
volatile __bit      	PSPIE	__at(0x8C*8+7);
#endif
volatile __bit      	ADIE	__at(0x8C*8+6);
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile __bit      	RCIE	__at(0x8C*8+5);
volatile __bit      	TXIE	__at(0x8C*8+4);
#endif
#if defined(_16C745) || defined(_16C765)
volatile __bit      	USBIE	__at(0x8C*8+3);
#endif
#if !defined(_16C745) && !defined(_16C765)
volatile __bit      	SSPIE	__at(0x8C*8+3);
#endif
volatile __bit      	CCP1IE	__at(0x8C*8+2);
volatile __bit      	TMR2IE	__at(0x8C*8+1);
volatile __bit      	TMR1IE	__at(0x8C*8+0);

/*	PIE2 bits	*/
#if !defined(_16C774) && !defined(_16C765)
volatile __bit      	LVDIE	__at(0x8D*8+7);
volatile __bit      	BCLIE	__at(0x8D*8+3);
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile __bit      	CCP2IE	__at(0x8D*8+0);
#endif

/*	PCON bits	*/
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile __bit      	OSCF	__at(0x8E*8+3);	
#endif
volatile __bit      	POR	__at(0x8E*8+1);	
volatile __bit      	BOR	__at(0x8E*8+0);	

/*		SSPCON2 BITS	*/
#if !defined(_16C745) && !defined(_16C765)
volatile __bit      	GCEN	__at(0x91*8+7);
volatile __bit      	ACKSTAT	__at(0x91*8+6);
volatile __bit      	ACKDT	__at(0x91*8+5);
volatile __bit      	ACKEN	__at(0x91*8+4);
volatile __bit      	RCEN	__at(0x91*8+3);
volatile __bit      	PEN	__at(0x91*8+2);
volatile __bit      	RSEN	__at(0x91*8+1);
volatile __bit      	SEN	__at(0x91*8+0);

/*      SSPSTAT bits    */
volatile __bit      	SMP	__at(0x94*8+7);
volatile __bit      	CKE	__at(0x94*8+6);
volatile __bit      	DA	__at(0x94*8+5);
volatile __bit      	STOP	__at(0x94*8+4);
volatile __bit      	START	__at(0x94*8+3);
volatile __bit      	RW	__at(0x94*8+2);
volatile __bit      	UA	__at(0x94*8+1);
volatile __bit      	BF	__at(0x94*8+0);
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
#endif

/*	PR2 bits	*/
volatile	__bit	     	PR27	__at(0x92*8+7);
volatile	__bit	     	PR26	__at(0x92*8+6);
volatile	__bit	     	PR25	__at(0x92*8+5);
volatile	__bit	     	PR24	__at(0x92*8+4);
volatile	__bit	     	PR23	__at(0x92*8+3);
volatile	__bit	     	PR22	__at(0x92*8+2);
volatile	__bit	     	PR21	__at(0x92*8+1);
volatile	__bit	     	PR20	__at(0x92*8+0);

/*	SSPADD bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile	__bit	     	SSPADD7 __at(0x93*8+7);
volatile	__bit	     	SSPADD6 __at(0x93*8+6);
volatile	__bit	     	SSPADD5 __at(0x93*8+5);
volatile	__bit	     	SSPADD4 __at(0x93*8+4);
volatile	__bit	     	SSPADD3 __at(0x93*8+3);
volatile	__bit	     	SSPADD2 __at(0x93*8+2);
volatile	__bit	     	SSPADD1 __at(0x93*8+1);
volatile	__bit	     	SSPADD0 __at(0x93*8+0);
#endif

#if defined(_16C770) || defined(_16C771) || defined(_16C717)
/*	WPUB bits 	*/
volatile __bit      	WPUB7 	__at(0x95*8+7);
volatile __bit      	WPUB6 	__at(0x95*8+6);
volatile __bit      	WPUB5 	__at(0x95*8+5);
volatile __bit      	WPUB4 	__at(0x95*8+4);
volatile __bit      	WPUB3 	__at(0x95*8+3);
volatile __bit      	WPUB2 	__at(0x95*8+2);
volatile __bit      	WPUB1 	__at(0x95*8+1);
volatile __bit      	WPUB0 	__at(0x95*8+0);

/*	IOCB bits	*/
volatile __bit      	IOCB7	__at(0x96*8+7);
volatile __bit      	IOCB6	__at(0x96*8+6);
volatile __bit      	IOCB5	__at(0x96*8+5);
volatile __bit      	IOCB4	__at(0x96*8+4);
volatile __bit      	IOCB3	__at(0x96*8+3);
volatile __bit      	IOCB2	__at(0x96*8+2);
volatile __bit      	IOCB1	__at(0x96*8+1);
volatile __bit      	IOCB0	__at(0x96*8+0);

/*	P1DEL bits	*/
volatile	__bit	     	P1DEL7 	__at(0x97*8+7);
volatile	__bit	     	P1DEL6 	__at(0x97*8+6);
volatile	__bit	     	P1DEL5 	__at(0x97*8+5);
volatile	__bit	     	P1DEL4 	__at(0x97*8+4);
volatile	__bit	     	P1DEL3 	__at(0x97*8+3);
volatile	__bit	     	P1DEL2 	__at(0x97*8+2);
volatile	__bit	     	P1DEL1 	__at(0x97*8+1);
volatile	__bit	     	P1DEL0 	__at(0x97*8+0);
#endif

/*	TXSTA bits	*/
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile __bit      	CSRC	__at(0x98*8+7);
volatile __bit      	TX9	__at(0x98*8+6);
volatile __bit      	TXEN	__at(0x98*8+5);
volatile __bit      	SYNC	__at(0x98*8+4);
volatile __bit      	BRGH	__at(0x98*8+2);
volatile __bit      	TRMT	__at(0x98*8+1);
volatile __bit      	TX9D	__at(0x98*8+0);
#endif

/*	REFCON bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile __bit      	VRHEN	__at(0x9B*8+7);
volatile __bit      	VRLEN	__at(0x9B*8+6);
volatile __bit      	VRHOEN	__at(0x9B*8+5);
volatile __bit      	VRLOEN	__at(0x9B*8+4);

/*	LVDCON bits	*/
volatile __bit      	BGST	__at(0x9C*8+5);
volatile __bit      	LVDEN	__at(0x9C*8+4);
volatile __bit      	LV3	__at(0x9C*8+3);
volatile __bit      	LV2	__at(0x9C*8+2);
volatile __bit      	LV1	__at(0x9C*8+1);
volatile __bit      	LV0	__at(0x9C*8+0);
#endif

/* 	ANSEL bits 	*/
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile	__bit	     	ANSEL5	__at(0x9D*8+5);
volatile	__bit	     	ANSEL4	__at(0x9D*8+4);
volatile	__bit	     	ANSEL3	__at(0x9D*8+3);
volatile	__bit	     	ANSEL2	__at(0x9D*8+2);
volatile	__bit	     	ANSEL1	__at(0x9D*8+1);
volatile	__bit	     	ANSEL0	__at(0x9D*8+0);
#endif

/*	ADRESL bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile	__bit		ADRESL7 __at(0x9E*8+7);
volatile	__bit		ADRESL6 __at(0x9E*8+6);
volatile	__bit		ADRESL5 __at(0x9E*8+5);
volatile	__bit		ADRESL4 __at(0x9E*8+4);
volatile	__bit		ADRESL3 __at(0x9E*8+3);
volatile	__bit		ADRESL2 __at(0x9E*8+2);
volatile	__bit		ADRESL1 __at(0x9E*8+1);
volatile	__bit		ADRESL0 __at(0x9E*8+0);
#endif

/*	ADCON1 bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile __bit      	ADFM	__at(0x9F*8+7);
volatile __bit      	VCFG2	__at(0x9F*8+6);
volatile __bit      	VCFG1	__at(0x9F*8+5);
volatile __bit      	VCFG0	__at(0x9F*8+4);
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#if !defined(_16C774) && !defined(_16C765)
volatile __bit      	PCFG3	__at(0x9F*8+3);
#endif
volatile __bit      	PCFG2	__at(0x9F*8+2);
volatile __bit      	PCFG1	__at(0x9F*8+1);
volatile __bit      	PCFG0	__at(0x9F*8+0);
#endif

#if defined(_16C770) || defined(_16C771) || defined(_16C717)
/*	PMDATL bits	*/
volatile	__bit	      	PMDATL7 __at(0x10C*8+7);
volatile	__bit	      	PMDATL6 __at(0x10C*8+6);
volatile	__bit	      	PMDATL5 __at(0x10C*8+5);
volatile	__bit	      	PMDATL4 __at(0x10C*8+4);
volatile	__bit	      	PMDATL3 __at(0x10C*8+3);
volatile	__bit	      	PMDATL2 __at(0x10C*8+2);
volatile	__bit	      	PMDATL1	__at(0x10C*8+1);
volatile	__bit	      	PMDATL0 __at(0x10C*8+0);

/*	PMADRL bits	*/
volatile	__bit	      	PMADRL7 __at(0x10D*8+7);
volatile	__bit	      	PMADRL6 __at(0x10D*8+6);
volatile	__bit	      	PMADRL5 __at(0x10D*8+5);
volatile	__bit	      	PMADRL4	__at(0x10D*8+4);
volatile	__bit	      	PMADRL3 __at(0x10D*8+3);
volatile	__bit	      	PMADRL2 __at(0x10D*8+2);
volatile	__bit	      	PMADRL1 __at(0x10D*8+1);
volatile	__bit	      	PMADRL0 __at(0x10D*8+0);

/*	PMDATH bits	*/
volatile	__bit	     	PMDATH5 __at(0x10E*8+5);
volatile	__bit	     	PMDATH4 __at(0x10E*8+4);
volatile	__bit	     	PMDATH3 __at(0x10E*8+3);
volatile	__bit	     	PMDATH2 __at(0x10E*8+2);
volatile	__bit	     	PMDATH1 __at(0x10E*8+1);
volatile	__bit	     	PMDATH0 __at(0x10E*8+0);

/*	PMADRH bits	*/
volatile	__bit	     	PMADRH3 __at(0x10F*8+3);
volatile	__bit	     	PMADRH2 __at(0x10F*8+2);
volatile	__bit	     	PMADRH1 __at(0x10F*8+1);
volatile	__bit	     	PMADRH0 __at(0x10F*8+0);
#endif

/* USB bits */
#if defined(_16C745) || defined(_16C765)

volatile __bit      	STALL		__at(0x190*8+5);
volatile __bit      	UIDLE		__at(0x190*8+4);
volatile __bit      	TOK_DONE	__at(0x190*8+3);
volatile __bit      	ACTIVITY	__at(0x190*8+2);
volatile __bit      	UERR		__at(0x190*8+1);
volatile __bit      	USB_RST		__at(0x190*8+0);

volatile __bit      	STALL_E		__at(0x191*8+5);
volatile __bit      	UIDLE_E		__at(0x191*8+4);
volatile __bit      	TOK_DONE_E	__at(0x191*8+3);
volatile __bit      	ACTIVITY_E	__at(0x191*8+2);
volatile __bit      	UERR_E		__at(0x191*8+1);
volatile __bit      	USB_RST_E	__at(0x191*8+0);

volatile __bit      	BTS_ERR		__at(0x192*8+7);
volatile __bit      	OWN_ERR		__at(0x192*8+6);
volatile __bit      	WRT_ERR		__at(0x192*8+5);
volatile __bit      	BTO_ERR		__at(0x192*8+4);
volatile __bit      	DFN8		__at(0x192*8+3);
volatile __bit      	CRC16		__at(0x192*8+2);
volatile __bit      	CRC5		__at(0x192*8+1);
volatile __bit      	PID_ERR		__at(0x192*8+0);

volatile __bit      	BTS_ERR_E	__at(0x193*8+7);
volatile __bit      	OWN_ERR_E	__at(0x193*8+6);
volatile __bit      	WRT_ERR_E	__at(0x193*8+5);
volatile __bit      	BTO_ERR_E	__at(0x193*8+4);
volatile __bit      	DFN8_E		__at(0x193*8+3);
volatile __bit      	CRC16_E		__at(0x193*8+2);
volatile __bit      	CRC5_E		__at(0x193*8+1);
volatile __bit      	PID_ERR_E	__at(0x193*8+0);

volatile __bit      	ENDP1		__at(0x194*8+4);
volatile __bit      	ENDP0		__at(0x194*8+3);
volatile __bit      	IN		__at(0x194*8+2);

volatile __bit      	SEO		__at(0x195*8+5);
volatile __bit      	PKT_DIS		__at(0x195*8+4);
volatile __bit      	DEV_ATT		__at(0x195*8+3);
volatile __bit      	RESUME		__at(0x195*8+2);
volatile __bit      	SUSPND		__at(0x195*8+1);

volatile __bit      	ADDR6		__at(0x196*8+6);
volatile __bit      	ADDR5		__at(0x196*8+5);
volatile __bit      	ADDR4		__at(0x196*8+4);
volatile __bit      	ADDR3		__at(0x196*8+3);
volatile __bit      	ADDR2		__at(0x196*8+2);
volatile __bit      	ADDR1		__at(0x196*8+1);
volatile __bit      	ADDR0		__at(0x196*8+0);

volatile __bit      	SWSTAT7		__at(0x197*8+7);
volatile __bit      	SWSTAT6		__at(0x197*8+6);
volatile __bit      	SWSTAT5		__at(0x197*8+5);
volatile __bit      	SWSTAT4		__at(0x197*8+4);
volatile __bit      	SWSTAT3		__at(0x197*8+3);
volatile __bit      	SWSTAT2		__at(0x197*8+2);
volatile __bit      	SWSTAT1		__at(0x197*8+1);
volatile __bit      	SWSTAT0		__at(0x197*8+0);

volatile __bit      	EP_CTL_DIS0	__at(0x198*8+3);
volatile __bit      	EP_OUT_EN0	__at(0x198*8+2);
volatile __bit      	EP_IN_EN0	__at(0x198*8+1);
volatile __bit      	EP_STALL0	__at(0x198*8+0);

volatile __bit      	EP_CTL_DIS1	__at(0x199*8+3);
volatile __bit      	EP_OUT_EN1	__at(0x199*8+2);
volatile __bit      	EP_IN_EN1	__at(0x199*8+1);
volatile __bit      	EP_STALL1	__at(0x199*8+0);

volatile __bit      	EP_CTL_DIS2	__at(0x19A*8+3);
volatile __bit      	EP_OUT_EN2	__at(0x19A*8+2);
volatile __bit      	EP_IN_EN2	__at(0x19A*8+1);
volatile __bit      	EP_STALL2	__at(0x19A*8+0);

volatile __bit      	UOWN_0O		__at(0x1A0*8+7);
volatile __bit      	DATA_0O		__at(0x1A0*8+6);
volatile __bit      	PID3_0O		__at(0x1A0*8+5);
volatile __bit      	PID2_0O		__at(0x1A0*8+4);
volatile __bit      	PID1_0O		__at(0x1A0*8+3);
volatile __bit      	PID0_0O		__at(0x1A0*8+2);

volatile __bit      	UOWN_0I		__at(0x1A4*8+7);
volatile __bit      	DATA_0I		__at(0x1A4*8+6);
volatile __bit      	PID3_0I		__at(0x1A4*8+5);
volatile __bit      	PID2_0I		__at(0x1A4*8+4);
volatile __bit      	PID1_0I		__at(0x1A4*8+3);
volatile __bit      	PID0_0I		__at(0x1A4*8+2);

volatile __bit      	UOWN_1O		__at(0x1A8*8+7);
volatile __bit      	DATA_1O		__at(0x1A8*8+6);
volatile __bit      	PID3_1O		__at(0x1A8*8+5);
volatile __bit      	PID2_1O		__at(0x1A8*8+4);
volatile __bit      	PID1_1O		__at(0x1A8*8+3);
volatile __bit      	PID0_1O		__at(0x1A8*8+2);

volatile __bit      	UOWN_1I		__at(0x1AC*8+7);
volatile __bit      	DATA_1I		__at(0x1AC*8+6);
volatile __bit      	PID3_1I		__at(0x1AC*8+5);
volatile __bit      	PID2_1I		__at(0x1AC*8+4);
volatile __bit      	PID1_1I		__at(0x1AC*8+3);
volatile __bit      	PID0_1I		__at(0x1AC*8+2);

volatile __bit      	UOWN_2O		__at(0x1B0*8+7);
volatile __bit      	DATA_2O		__at(0x1B0*8+6);
volatile __bit      	PID3_2O		__at(0x1B0*8+5);
volatile __bit      	PID2_2O		__at(0x1B0*8+4);
volatile __bit      	PID1_2O		__at(0x1B0*8+3);
volatile __bit      	PID0_2O		__at(0x1B0*8+2);

volatile __bit      	UOWN_2I		__at(0x1B4*8+7);
volatile __bit      	DATA_2I		__at(0x1B4*8+6);
volatile __bit      	PID3_2I		__at(0x1B4*8+5);
volatile __bit      	PID2_2I		__at(0x1B4*8+4);
volatile __bit      	PID1_2I		__at(0x1B4*8+3);
volatile __bit      	PID0_2I		__at(0x1B4*8+2);

#endif

/*      A full configuration word includes one of each group ORed together     */
#define CONFIG_ADDR	0x2007	

