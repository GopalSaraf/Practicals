
#ifndef	_HTC_H_
#warning Header file pic1672.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip :
 *	PIC 16C72 chip
 *	PIC 16C72A chip
 *	PIC 16CR72 chip
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
volatile unsigned char ADRES	__at(0x1E);
volatile unsigned char ADCON0	__at(0x1F);

volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char      	TRISA	__at(0x85);
volatile	unsigned char      	TRISB	__at(0x86);
volatile	unsigned char      	TRISC	__at(0x87);
volatile unsigned char      	PIE1	__at(0x8C);
volatile unsigned char      	PCON	__at(0x8E);
volatile unsigned char      	PR2	__at(0x92);
volatile unsigned char      	SSPADD	__at(0x93);
volatile unsigned char      	SSPSTAT	__at(0x94);
volatile unsigned char      	ADCON1	__at(0x9F);

/*	STATUS bits	*/
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
volatile __bit	RC7	__at(0x07*8+7);
volatile __bit	RC6	__at(0x07*8+6);
volatile __bit	RC5	__at(0x07*8+5);
volatile __bit	RC4	__at(0x07*8+4);
volatile __bit	RC3	__at(0x07*8+3);
volatile __bit	RC2	__at(0x07*8+2);
volatile __bit	RC1	__at(0x07*8+1);
volatile __bit	RC0	__at(0x07*8+0);

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
volatile __bit	ADIF	__at(0x0C*8+6);
volatile __bit	SSPIF	__at(0x0C*8+3);
volatile __bit	CCP1IF	__at(0x0C*8+2);
volatile __bit	TMR2IF	__at(0x0C*8+1);
volatile __bit	TMR1IF	__at(0x0C*8+0);

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

/*	 ADCON0 bits	*/
volatile __bit	ADCS1	__at(0x1F*8+7);
volatile __bit	ADCS0 	__at(0x1F*8+6);
volatile __bit	CHS2	__at(0x1F*8+5);
volatile __bit	CHS1	__at(0x1F*8+4);
volatile __bit	CHS0	__at(0x1F*8+3);
volatile __bit	ADGO	__at(0x1F*8+2);
// Alternate definition for compatibility with other devices
volatile __bit	GODONE	__at(0x1F*8+2);
volatile __bit	ADON	__at(0x1F*8+0);

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
volatile       __bit	TRISC7	__at(0x87*8+7);
volatile       __bit	TRISC6	__at(0x87*8+6);
volatile       __bit	TRISC5	__at(0x87*8+5);
volatile       __bit	TRISC4	__at(0x87*8+4);
volatile       __bit	TRISC3	__at(0x87*8+3);
volatile       __bit	TRISC2	__at(0x87*8+2);
volatile       __bit	TRISC1	__at(0x87*8+1);
volatile       __bit	TRISC0	__at(0x87*8+0);

/*	PIE1 bits	*/
volatile       __bit	ADIE	__at(0x8C*8+6);
volatile       __bit	SSPIE	__at(0x8C*8+3);
volatile       __bit	CCP1IE	__at(0x8C*8+2);
volatile       __bit	TMR2IE	__at(0x8C*8+1);
volatile       __bit	TMR1IE	__at(0x8C*8+0);

/*	PCON bits	*/
volatile       __bit	POR	__at(0x8E*8+1);	
volatile       __bit	BOR	__at(0x8E*8+0);

/*      SSPSTAT bits    */
#if defined(_16C72A) || defined(_16CR72)
volatile       __bit	SMP	__at(0x94*8+7);
volatile       __bit	CKE	__at(0x94*8+6);
#endif
volatile       __bit	DA	__at(0x94*8+5);
volatile       __bit	STOP	__at(0x94*8+4);
volatile       __bit	START	__at(0x94*8+3);
volatile       __bit	RW	__at(0x94*8+2);
volatile       __bit	UA	__at(0x94*8+1);
volatile       __bit	BF	__at(0x94*8+0);
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

/*	ADCON1 bits	*/
volatile       __bit	PCFG2	__at(0x9F*8+2);
volatile       __bit	PCFG1	__at(0x9F*8+1);
volatile       __bit	PCFG0	__at(0x9F*8+0);

#define CONFIG_ADDR	0x2007

