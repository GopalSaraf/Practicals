
#ifndef	_HTC_H_
#warning Header file pic14000.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip :
 * 	PIC 14000 chip
 *	Midrange Microcontroller
 */

volatile unsigned char	INDF	__at(0x00);
volatile unsigned char	TMR0	__at(0x01);
volatile unsigned char	PCL	__at(0x02);
volatile unsigned char	STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char	PORTA	__at(0x05);
volatile unsigned char	PORTC	__at(0x07);
volatile unsigned char	PORTD	__at(0x08);
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char	INTCON	__at(0x0B);
volatile unsigned char	PIR1	__at(0x0C);
volatile unsigned char	ADTMRL	__at(0x0E);
volatile unsigned char	ADTMRH	__at(0x0F);
volatile unsigned char	I2CBUF	__at(0x13);
volatile unsigned char	I2CCON	__at(0x14);
volatile unsigned short	ADCAP	__at(0x15);
volatile unsigned char	ADCAPL	__at(0x15);
volatile unsigned char	ADCAPH	__at(0x16);
volatile unsigned char	ADCON0	__at(0x1F);

volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char      	TRISA	__at(0x85);
volatile	unsigned char      	TRISC	__at(0x87);
volatile	unsigned char      	TRISD	__at(0x88);
volatile unsigned char      	PIE1	__at(0x8C);
volatile unsigned char      	PCON	__at(0x8E);
volatile unsigned char      	SLPCON	__at(0x8F);
volatile unsigned char      	I2CADD	__at(0x93);
volatile unsigned char      	I2CSTAT	__at(0x94);
volatile unsigned char      	PREFA	__at(0x9B);
volatile unsigned char      	PREFB	__at(0x9C);
volatile unsigned char      	CMCON	__at(0x9D);
volatile unsigned char      	MISC	__at(0x9E);
volatile unsigned char      	ADCON1	__at(0x9F);

/*	STATUS bits	*/
volatile __bit	RP0	__at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

/*      PORTA bits      */
volatile __bit      RA7     __at(0x05*8+7);
volatile __bit      RA6     __at(0x05*8+6);
volatile __bit      RA5     __at(0x05*8+5);
volatile __bit      RA4     __at(0x05*8+4);
volatile __bit      RA3     __at(0x05*8+3);
volatile __bit      RA2     __at(0x05*8+2);
volatile __bit      RA1     __at(0x05*8+1);
volatile __bit      RA0     __at(0x05*8+0);

/*      PORTC bits      */
volatile __bit      RC7     __at(0x07*8+7);
volatile __bit      RC6     __at(0x07*8+6);
volatile __bit      RC5     __at(0x07*8+5);
volatile __bit      RC4     __at(0x07*8+4);
volatile __bit      RC3     __at(0x07*8+3);
volatile __bit      RC2     __at(0x07*8+2);
volatile __bit      RC1     __at(0x07*8+1);
volatile __bit      RC0     __at(0x07*8+0);

/*      PORTD bits      */
volatile __bit      RD7     __at(0x08*8+7);
volatile __bit      RD6     __at(0x08*8+6);
volatile	__bit      RD5     __at(0x08*8+5);
volatile __bit      RD4     __at(0x08*8+4);
volatile __bit      RD3     __at(0x08*8+3);
volatile __bit      RD2     __at(0x08*8+2);
volatile __bit      RD1     __at(0x08*8+1);
volatile __bit      RD0     __at(0x08*8+0);

/*	INTCON bits	*/
volatile	__bit	GIE	__at(0x0B*8+7);
volatile	__bit	PEIE	__at(0x0B*8+6);
volatile __bit	T0IE	__at(0x0B*8+5);
volatile __bit	T0IF	__at(0x0B*8+2);

/*	PIR1 bits	*/
volatile __bit	CMIF	__at(0x0C*8+7);
volatile __bit	PBIF	__at(0x0C*8+4);
volatile __bit	I2CIF	__at(0x0C*8+3);
volatile __bit	RCIF	__at(0x0C*8+2);
volatile __bit	ADCIF	__at(0x0C*8+1);
volatile __bit	OVFIF	__at(0x0C*8+0);

/*	I2CCON bits	*/
volatile __bit	WCOL	__at(0x14*8+7);
volatile __bit	I2COV	__at(0x14*8+6);
volatile __bit	I2CEN	__at(0x14*8+5);
volatile __bit	CKP	__at(0x14*8+4);
volatile __bit	I2CM3	__at(0x14*8+3);
volatile __bit	I2CM2	__at(0x14*8+2);
volatile __bit	I2CM1	__at(0x14*8+1);
volatile __bit	I2CM0	__at(0x14*8+0);

/*	ADCON0 bits	*/
volatile __bit	ADCS3	__at(0x1F*8+7);
volatile __bit	ADCS2	__at(0x1F*8+6);
volatile __bit	ADCS1	__at(0x1F*8+5);
volatile __bit	ADCS0	__at(0x1F*8+4);
volatile __bit	AMUXOE	__at(0x1F*8+2);
volatile __bit	ADRST	__at(0x1F*8+1);
volatile __bit	ADZERO	__at(0x1F*8+0);

/*	OPTION bits	*/
volatile	__bit	RCPU	__at(0x81*8+7);
volatile	__bit	T0CS	__at(0x81*8+5);
volatile	__bit	T0SE	__at(0x81*8+4);
volatile	__bit	PSA	__at(0x81*8+3);
volatile	__bit	PS2	__at(0x81*8+2);
volatile	__bit	PS1	__at(0x81*8+1);
volatile	__bit	PS0	__at(0x81*8+0);

/*      TRISA bits      */
volatile       __bit        TRISA7  __at(0x85*8+7);
volatile       __bit        TRISA6  __at(0x85*8+6);
volatile       __bit        TRISA5  __at(0x85*8+5);
volatile       __bit        TRISA4  __at(0x85*8+4);
volatile       __bit        TRISA3  __at(0x85*8+3);
volatile       __bit        TRISA2  __at(0x85*8+2);
volatile       __bit        TRISA1  __at(0x85*8+1);
volatile       __bit        TRISA0  __at(0x85*8+0);

/*      TRISC bits      */
volatile       __bit        TRISC7  __at(0x87*8+7);
volatile       __bit        TRISC6  __at(0x87*8+6);
volatile       __bit        TRISC5  __at(0x87*8+5);
volatile       __bit        TRISC4  __at(0x87*8+4);
volatile       __bit        TRISC3  __at(0x87*8+3);
volatile       __bit        TRISC2  __at(0x87*8+2);
volatile       __bit        TRISC1  __at(0x87*8+1);
volatile       __bit        TRISC0  __at(0x87*8+0);

/*      TRISD bits      */
volatile       __bit        TRISD7  __at(0x88*8+7);
volatile       __bit        TRISD6  __at(0x88*8+6);
volatile       __bit        TRISD5  __at(0x88*8+5);
volatile       __bit        TRISD4  __at(0x88*8+4);
volatile       __bit        TRISD3  __at(0x88*8+3);
volatile       __bit        TRISD2  __at(0x88*8+2);
volatile       __bit        TRISD1  __at(0x88*8+1);
volatile       __bit        TRISD0  __at(0x88*8+0);

/*	PIE1 bits	*/
volatile       __bit	CMIE	__at(0x8C*8+7);
volatile       __bit	PBIE	__at(0x8C*8+4);
volatile       __bit	I2CIE	__at(0x8C*8+3);
volatile       __bit	RCIE	__at(0x8C*8+2);
volatile       __bit	ADCIE	__at(0x8C*8+1);
volatile       __bit	OVFIE	__at(0x8C*8+0);

/*	PCON bits	*/
volatile	      __bit	POR	__at(0x8E*8+1);
volatile       __bit	LVD	__at(0x8E*8+0);

/*	SLPCON bits	*/
volatile       __bit	HIBEN	__at(0x8F*8+7);
volatile       __bit	REFOFF	__at(0x8F*8+5);
volatile       __bit	LSOFF	__at(0x8F*8+4);
volatile       __bit	OSCOFF	__at(0x8F*8+3);
volatile       __bit	CMOFF	__at(0x8F*8+2);
volatile       __bit	TEMPOFF	__at(0x8F*8+1);
volatile       __bit	ADOFF	__at(0x8F*8+0);

/*	I2CSTAT bits	*/
volatile       __bit	DA	__at(0x94*8+5);
volatile       __bit	STOP	__at(0x94*8+4);
volatile       __bit	START	__at(0x94*8+3);
volatile       __bit	RW	__at(0x94*8+2);
volatile       __bit	UA	__at(0x94*8+1);
volatile       __bit	BF	__at(0x94*8+0);
#ifdef __STAT_BACKWARD_COMPATIBILITY
#define STAT_DA	DA
#define STAT_P	STOP
#define STAT_S	START
#define STAT_RW	RW
#define STAT_UA	UA
#define STAT_BF	BF
#endif

/*	PREFA bits	*/
volatile       __bit	PRA7	__at(0x9B*8+7);
volatile       __bit	PRA6	__at(0x9B*8+6);
volatile       __bit	PRA5	__at(0x9B*8+5);
volatile       __bit	PRA4	__at(0x9B*8+4);
volatile       __bit	PRA3	__at(0x9B*8+3);
volatile       __bit	PRA2	__at(0x9B*8+2);
volatile       __bit	PRA1	__at(0x9B*8+1);
volatile       __bit	PRA0	__at(0x9B*8+0);

/*	PREFB bits	*/
volatile       __bit	PRB7	__at(0x9C*8+7);
volatile       __bit	PRB6	__at(0x9C*8+6);
volatile       __bit	PRB5	__at(0x9C*8+5);
volatile       __bit	PRB4	__at(0x9C*8+4);
volatile       __bit	PRB3	__at(0x9C*8+3);
volatile       __bit	PRB2	__at(0x9C*8+2);
volatile       __bit	PRB1	__at(0x9C*8+1);
volatile       __bit	PRB0	__at(0x9C*8+0);

/*	CMCON bits	*/
volatile       __bit	CMBOUT	__at(0x9D*8+6);
volatile       __bit	CMBOE	__at(0x9D*8+5);
volatile       __bit	CPOLB	__at(0x9D*8+4);
volatile       __bit	CMAOUT	__at(0x9D*8+2);
volatile       __bit	CMAOE	__at(0x9D*8+1);
volatile       __bit	CPOLA	__at(0x9D*8+0);

/*	MISC bits	*/
volatile       __bit	SMHOG	__at(0x9E*8+7);
volatile       __bit	SPGNDB	__at(0x9E*8+6);
volatile       __bit	SPGNDA	__at(0x9E*8+5);
volatile       __bit	I2CSEL	__at(0x9E*8+4);
volatile       __bit	SMBUS	__at(0x9E*8+3);
volatile       __bit	INCLKEN	__at(0x9E*8+2);
volatile       __bit	OSC2	__at(0x9E*8+1);
volatile       __bit	OSC1	__at(0x9E*8+0);

/*	ADCON1 bits	*/
volatile       __bit	ADDAC3	__at(0x9F*8+7);
volatile       __bit	ADDAC2	__at(0x9F*8+6);
volatile       __bit	ADDAC1	__at(0x9F*8+5);
volatile       __bit	ADDAC0	__at(0x9F*8+4);
volatile       __bit	PCFG3	__at(0x9F*8+3);
volatile       __bit	PCFG2	__at(0x9F*8+2);
volatile       __bit	PCFG1	__at(0x9F*8+1);
volatile       __bit	PCFG0	__at(0x9F*8+0);

#define CONFIG_ADDR	0x2007

/*      ADC calibration data etc. Access with get_cal_data, e.g.
 *
 *      x = get_cal_data(KREF);
 *
 */

extern double get_cal_data(const unsigned char *);

const unsigned char      KREF[4]    __at(0xFC0);     /* Slope reference ratio */
const unsigned char      KBG[4]     __at(0xFC4);     /* Bandgap reference voltage */
const unsigned char      VTHERM[4]  __at(0xFC8);     /* Temperature sensor voltage */
const unsigned char      KTC[4]     __at(0xFCC);     /* Temperature sensor coefficient */
const unsigned char      OSCM       __at(0xFD0);     /* Oscillator freq. multiplier */
const unsigned char      TWDT       __at(0xFD2);     /* WDT time-out */

