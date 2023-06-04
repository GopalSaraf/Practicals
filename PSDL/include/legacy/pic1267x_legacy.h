
#ifndef	_HTC_H_
#warning Header file pic1267x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 12C671 chip
 *	PIC 12C672 chip
 *	PIC 12CE673 chip
 *	PIC 12CE674 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char	INDF	__at(0x00);
volatile unsigned char	RTCC	__at(0x01);
volatile unsigned char	TMR0	__at(0x01);
volatile unsigned char	PCL	__at(0x02);
volatile unsigned char	STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char	GPIO	__at(0x05);
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char	INTCON	__at(0x0B);
volatile unsigned char	PIR1	__at(0x0C);
volatile unsigned char	ADRES	__at(0x1E);
volatile unsigned char	ADCON0	__at(0x1F);

volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char      	TRIS	__at(0x85);
volatile unsigned char      	PIE1	__at(0x8C);
volatile unsigned char      	PCON	__at(0x8E);
volatile unsigned char      	OSCCAL	__at(0x8F);
volatile unsigned char      	ADCON1	__at(0x9F);

/*	STATUS bits	*/
volatile __bit	RP0	__at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

/*	GPIO bits	*/
#if defined(_12CE673) || defined(_12CE674)
volatile __bit	SCL	__at(0x05*8+7);
volatile __bit	SDA	__at(0x05*8+6);
#endif
volatile __bit	GP5	__at(0x05*8+5);
volatile __bit	GP4	__at(0x05*8+4);
volatile __bit	GP3	__at(0x05*8+3);
volatile __bit	GP2	__at(0x05*8+2);
volatile __bit	GP1	__at(0x05*8+1);
volatile __bit	GP0	__at(0x05*8+0);

/*	INTCON bits	*/
volatile __bit	GIE	__at(0x0B*8+7);
volatile __bit	PEIE	__at(0x0B*8+6);
volatile __bit	T0IE	__at(0x0B*8+5);
volatile __bit	INTE	__at(0x0B*8+4);
volatile __bit	GPIE	__at(0x0B*8+3);
volatile __bit	T0IF	__at(0x0B*8+2);
volatile __bit	INTF	__at(0x0B*8+1);
volatile __bit	GPIF	__at(0x0B*8+0);

/*	PIR1 bits */
volatile __bit	ADIF	__at(0x0C*8+6);

/*	ADCON0 bits	*/
volatile	__bit	ADCS1	__at(0x1F*8+7);
volatile	__bit	ADCS0	__at(0x1F*8+6);
volatile	__bit	CHS1	__at(0x1F*8+4);
volatile	__bit	CHS0	__at(0x1F*8+3);
volatile __bit	GODONE	__at(0x1F*8+2);
volatile	__bit	ADON	__at(0x1F*8+0);

/*	OPTION bits	*/
volatile	__bit	GPPU	__at(0x81*8+7);
volatile	__bit	INTEDG	__at(0x81*8+6);
volatile	__bit	T0CS	__at(0x81*8+5);
volatile	__bit	T0SE	__at(0x81*8+4);
volatile	__bit	PSA	__at(0x81*8+3);
volatile	__bit	PS2	__at(0x81*8+2);
volatile	__bit	PS1	__at(0x81*8+1);
volatile	__bit	PS0	__at(0x81*8+0);

/*      TRIS bits      */
volatile       __bit        TRIS5  __at(0x85*8+5);
volatile       __bit        TRIS4  __at(0x85*8+4);
volatile       __bit        TRIS3  __at(0x85*8+3);
volatile       __bit        TRIS2  __at(0x85*8+2);
volatile       __bit        TRIS1  __at(0x85*8+1);
volatile       __bit        TRIS0  __at(0x85*8+0);

/*	PIE1 bits	*/
volatile       __bit	ADIE	__at(0x8C*8+6);

/*	PCON bits */
volatile	__bit	POR	__at(0x8E*8+1);

/*	OSCCAL bits */
#if defined(_12C671) || defined(_12C672)
volatile       __bit	CAL3	__at(0x8F*8+7);
volatile       __bit	CAL2	__at(0x8F*8+6);
volatile       __bit	CAL1	__at(0x8F*8+5);
volatile       __bit	CAL0	__at(0x8F*8+4);
volatile       __bit	CALFST	__at(0x8F*8+3);
volatile       __bit	CALSLW	__at(0x8F*8+2);
#elif defined(_12CE673) || defined(_12CE674)
volatile       __bit	CAL5	__at(0x8F*8+7);
volatile       __bit	CAL4	__at(0x8F*8+6);
volatile       __bit	CAL3	__at(0x8F*8+5);
volatile       __bit	CAL2	__at(0x8F*8+4);
volatile       __bit	CAL1	__at(0x8F*8+3);
volatile       __bit	CAL0	__at(0x8F*8+2);
#endif

/*	ADCON1 bits */
volatile       __bit	PCFG2	__at(0x9F*8+2);
volatile       __bit	PCFG1	__at(0x9F*8+1);
volatile       __bit	PCFG0	__at(0x9F*8+0);

/*	Calibration constant in ROM */

#if defined(_12C671) || defined(_12CE673) || defined(_12C672) || defined(_12CE674)
extern unsigned char __osccal_val(void);
#define	_READ_OSCCAL_DATA()	__osccal_val()
#endif

#define CONFIG_ADDR	0x2007

