
#ifndef	_HTC_H_
#warning Header file pic166x.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip :
 *	PIC 16C66 chip
 *	PIC 16C67 chip
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
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char INTCON	__at(0x0B);
volatile unsigned char PIR1	__at(0x0C);
volatile unsigned char PIR2	__at(0x0D);
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
volatile unsigned char RCSTA	__at(0x18);
volatile unsigned char TXREG	__at(0x19);
volatile unsigned char RCREG	__at(0x1A);
volatile unsigned char CCPR2L	__at(0x1B);
volatile unsigned char CCPR2H	__at(0x1C);
volatile unsigned char CCP2CON	__at(0x1D);

volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char      	TRISA	__at(0x85);
volatile	unsigned char      	TRISB	__at(0x86);
volatile	unsigned char      	TRISC	__at(0x87);
volatile unsigned char      	PIE1	__at(0x8C);
volatile unsigned char      	PIE2	__at(0x8D);
volatile unsigned char      	PCON	__at(0x8E);
volatile unsigned char      	PR2	__at(0x92);
volatile unsigned char      	SSPADD	__at(0x93);
volatile unsigned char      	SSPSTAT	__at(0x94);
volatile unsigned char      	TXSTA	__at(0x98);
volatile unsigned char      	SPBRG	__at(0x99);

#ifdef _16C67
	volatile unsigned char PORTD	__at(0x08);
	volatile unsigned char PORTE	__at(0x09);
	volatile	unsigned char      	TRISD	__at(0x88);
	volatile	unsigned char      	TRISE	__at(0x89);
	
        /*      PORTD bits      */
        volatile __bit      RD7     __at(0x08*8+7);
        volatile __bit      RD6     __at(0x08*8+6);
        volatile __bit      RD5     __at(0x08*8+5);
        volatile __bit      RD4     __at(0x08*8+4);
        volatile __bit      RD3     __at(0x08*8+3);
        volatile __bit      RD2     __at(0x08*8+2);
        volatile __bit      RD1     __at(0x08*8+1);
        volatile __bit      RD0     __at(0x08*8+0);
	
	/*	PORTE bits	*/
	volatile __bit	RE2	__at(0x09*8+2);
	volatile __bit	RE1	__at(0x09*8+1);
	volatile __bit	RE0	__at(0x09*8+0);

        /*      TRISD bits      */
        volatile       __bit        TRISD7  __at(0x88*8+7);
        volatile       __bit        TRISD6  __at(0x88*8+6);
        volatile       __bit        TRISD5  __at(0x88*8+5);
        volatile       __bit        TRISD4  __at(0x88*8+4);
        volatile       __bit        TRISD3  __at(0x88*8+3);
        volatile       __bit        TRISD2  __at(0x88*8+2);
        volatile       __bit        TRISD1  __at(0x88*8+1);
        volatile       __bit        TRISD0  __at(0x88*8+0);

	/*	TRISE bits	*/
	volatile       __bit	IBF	__at(0x89*8+7);
	volatile       __bit	OBF	__at(0x89*8+6);
	volatile       __bit	IBOV	__at(0x89*8+5);
	volatile       __bit	PSPMODE	__at(0x89*8+4);

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
volatile __bit      RA5     __at(0x05*8+5);
volatile __bit      RA4     __at(0x05*8+4);
volatile __bit      RA3     __at(0x05*8+3);
volatile __bit      RA2     __at(0x05*8+2);
volatile __bit      RA1     __at(0x05*8+1);
volatile __bit      RA0     __at(0x05*8+0);

/*      PORTB bits      */
volatile __bit      RB7     __at(0x06*8+7);
volatile __bit      RB6     __at(0x06*8+6);
volatile __bit      RB5     __at(0x06*8+5);
volatile __bit      RB4     __at(0x06*8+4);
volatile __bit      RB3     __at(0x06*8+3);
volatile __bit      RB2     __at(0x06*8+2);
volatile __bit      RB1     __at(0x06*8+1);
volatile __bit      RB0     __at(0x06*8+0);

/*      PORTC bits      */
volatile __bit      RC7     __at(0x07*8+7);
volatile __bit      RC6     __at(0x07*8+6);
volatile __bit      RC5     __at(0x07*8+5);
volatile __bit      RC4     __at(0x07*8+4);
volatile __bit      RC3     __at(0x07*8+3);
volatile __bit      RC2     __at(0x07*8+2);
volatile __bit      RC1     __at(0x07*8+1);
volatile __bit      RC0     __at(0x07*8+0);

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
#ifdef _16C67
volatile __bit	PSPIF	__at(0x0C*8+7);
#endif
volatile __bit	RCIF	__at(0x0C*8+5);
volatile __bit	TXIF	__at(0x0C*8+4);
volatile __bit	SSPIF	__at(0x0C*8+3);
volatile __bit	CCP1IF	__at(0x0C*8+2);
volatile __bit	TMR2IF	__at(0x0C*8+1);
volatile __bit	TMR1IF	__at(0x0C*8+0);

/*	PIR2 bits	*/
volatile __bit	CCP2IF	__at(0x0D*8+0);

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
volatile __bit	CCP1Y	__at(0x17*8+4);
volatile __bit	CCP1M3	__at(0x17*8+3);
volatile __bit	CCP1M2	__at(0x17*8+2);
volatile __bit	CCP1M1	__at(0x17*8+1);
volatile __bit	CCP1M0	__at(0x17*8+0);

/*	RCSTA bits	*/
volatile __bit	SPEN	__at(0x18*8+7);
volatile __bit	RX9 	__at(0x18*8+6);
volatile __bit	SREN	__at(0x18*8+5);
volatile __bit	CREN	__at(0x18*8+4);
volatile __bit	FERR	__at(0x18*8+2);
volatile __bit	OERR	__at(0x18*8+1);
volatile __bit	RX9D	__at(0x18*8+0);

/*	CCP2CON bits	*/
volatile __bit	CCP2X	__at(0x1D*8+5);
volatile __bit	CCP2Y	__at(0x1D*8+4);
volatile __bit	CCP2M3	__at(0x1D*8+3);
volatile __bit	CCP2M2	__at(0x1D*8+2);
volatile __bit	CCP2M1	__at(0x1D*8+1);
volatile __bit	CCP2M0	__at(0x1D*8+0);

/* 	OPTION bits	*/
volatile	__bit	RBPU	__at(0x81*8+7);
volatile	__bit	INTEDG	__at(0x81*8+6);
volatile	__bit	T0CS	__at(0x81*8+5);
volatile	__bit	T0SE	__at(0x81*8+4);
volatile	__bit	PSA	__at(0x81*8+3);
volatile	__bit	PS2	__at(0x81*8+2);
volatile	__bit	PS1	__at(0x81*8+1);
volatile	__bit	PS0	__at(0x81*8+0);

/*      TRISA bits      */
volatile       __bit        TRISA5  __at(0x85*8+5);
volatile       __bit        TRISA4  __at(0x85*8+4);
volatile       __bit        TRISA3  __at(0x85*8+3);
volatile       __bit        TRISA2  __at(0x85*8+2);
volatile       __bit        TRISA1  __at(0x85*8+1);
volatile       __bit        TRISA0  __at(0x85*8+0);

/*      TRISB bits      */
volatile       __bit        TRISB7  __at(0x86*8+7);
volatile       __bit        TRISB6  __at(0x86*8+6);
volatile       __bit        TRISB5  __at(0x86*8+5);
volatile       __bit        TRISB4  __at(0x86*8+4);
volatile       __bit        TRISB3  __at(0x86*8+3);
volatile       __bit        TRISB2  __at(0x86*8+2);
volatile       __bit        TRISB1  __at(0x86*8+1);
volatile       __bit        TRISB0  __at(0x86*8+0);

/*      TRISC bits      */
volatile       __bit        TRISC7  __at(0x87*8+7);
volatile       __bit        TRISC6  __at(0x87*8+6);
volatile       __bit        TRISC5  __at(0x87*8+5);
volatile       __bit        TRISC4  __at(0x87*8+4);
volatile       __bit        TRISC3  __at(0x87*8+3);
volatile       __bit        TRISC2  __at(0x87*8+2);
volatile       __bit        TRISC1  __at(0x87*8+1);
volatile       __bit        TRISC0  __at(0x87*8+0);

/*	PIE1 bits	*/
#ifdef _16C67
volatile       __bit	PSPIE	__at(0x8C*8+7);
#endif
volatile       __bit	RCIE	__at(0x8C*8+5);
volatile       __bit	TXIE	__at(0x8C*8+4);
volatile       __bit	SSPIE	__at(0x8C*8+3);
volatile       __bit	CCP1IE	__at(0x8C*8+2);
volatile       __bit	TMR2IE	__at(0x8C*8+1);
volatile       __bit	TMR1IE	__at(0x8C*8+0);

/*	PIE2 bits	*/
volatile       __bit	CCP2IE	__at(0x8D*8+0);

/*	PCON bits	*/
volatile       __bit	POR	__at(0x8E*8+1);	
volatile       __bit	BOR	__at(0x8E*8+0);

/*	SSPSTAT bits	*/
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

/*	TXSTA bits	*/
volatile       __bit	CSRC	__at(0x98*8+7);
volatile       __bit	TX9	__at(0x98*8+6);
volatile       __bit	TXEN	__at(0x98*8+5);
volatile       __bit	SYNC	__at(0x98*8+4);
volatile       __bit	BRGH	__at(0x98*8+2);
volatile       __bit	TRMT	__at(0x98*8+1);
volatile       __bit	TX9D	__at(0x98*8+0);


//Configuration bits
#define CONFIG_ADDR	0x2007

