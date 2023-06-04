
#ifndef	_HTC_H_
#warning Header file pic10f20x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 10F200 
 *	PIC 10F202 
 *	PIC 10F204
 *	PIC 10F206
 *	Baseline Microcontrollers
 */

volatile unsigned char	INDF	__at(0x00);
volatile unsigned char	RTCC	__at(0x01);
volatile unsigned char	TMR0	__at(0x01);
volatile unsigned char	PCL	__at(0x02);
volatile unsigned char	STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char	OSCCAL	__at(0x05);
volatile unsigned char	GPIO	__at(0x06);
#if defined(_10F204) || defined(_10F206)
volatile unsigned char	CMCON	__at(0x07);
// alternate definition
volatile unsigned char	CMCON0	__at(0x07);
#endif

volatile	unsigned char	__control	OPTION		__at(0x00);
volatile	unsigned char __control	TRISGPIO	__at(0x06);
// alternate definition
volatile	unsigned char __control	TRIS		__at(0x06);

/*	STATUS bits	*/
volatile __bit 	GPWUF	__at(0x03*8+7);
#if defined(_10F204) || defined(_10F206)
volatile __bit 	CWUF	__at(0x03*8+6);
#endif
volatile __bit 	TO	__at(0x03*8+4);
volatile __bit 	PD	__at(0x03*8+3);
volatile __bit 	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

#if defined(_10F204) || defined(_10F206)
volatile	__bit	CWU	__at(0x07*8+0);
volatile	__bit	CPREF	__at(0x07*8+1);
volatile	__bit	CNREF	__at(0x07*8+2);
volatile	__bit	CMPON	__at(0x07*8+3);
volatile	__bit	CMPT0CS	__at(0x07*8+4);
volatile	__bit	POL	__at(0x07*8+5);
volatile	__bit	COUTEN	__at(0x07*8+6);
volatile __bit	CMPOUT	__at(0x07*8+7);
#endif

/*	OPTION bits	*/
#define		GPWU	(1<<7)
#define		GPPU	(1<<6)
#define		T0CS	(1<<5)
#define		T0SE	(1<<4)
#define		PSA	(1<<3)
#define		PS2	(1<<2)
#define		PS1	(1<<1)
#define		PS0	(1<<0)

/*      OSCCAL bits     */
volatile __bit     CAL6    __at(0x05*8+7);
volatile __bit     CAL5    __at(0x05*8+6);
volatile __bit     CAL4    __at(0x05*8+5);
volatile __bit     CAL3    __at(0x05*8+4);
volatile __bit     CAL2    __at(0x05*8+3);
volatile __bit     CAL1    __at(0x05*8+2);
volatile __bit     CAL0    __at(0x05*8+1);
volatile __bit     FOSC4   __at(0x05*8+0);
	
/*	GPIO bits	*/
volatile __bit	GP3	__at(0x06*8+3);
volatile __bit	GP2	__at(0x06*8+2);
volatile __bit	GP1	__at(0x06*8+1);
volatile __bit	GP0	__at(0x06*8+0);

#if defined(_10F204) || defined(_10F206)
#define CONFIG_ADDR	0x3FF
#else
#define CONFIG_ADDR	0x1FF
#endif

