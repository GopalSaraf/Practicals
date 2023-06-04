
#ifndef	_HTC_H_
#warning Header file pic125xx.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 12C508 
 *	PIC 12C509 
 *	PIC 12F508 
 *	PIC 12F509 
 *	PIC 12C508A 
 *      PIC 12C509A 
 *      PIC 12CE518 
 *      PIC 12CE519 
 *      PIC 12CR509A 
 *      rfPIC 12C509AG 
 *      rfPIC 12C509AF 
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

volatile	unsigned char	__control	OPTION	__at(0x00);
volatile	unsigned char __control	TRIS	__at(0x06);

/*	STATUS bits	*/
volatile	__bit		GPWUF	__at(0x03*8+7);
volatile	__bit	PA0	__at(0x03*8+5);
volatile	__bit		TO	__at(0x03*8+4);
volatile	__bit		PD	__at(0x03*8+3);
volatile	__bit		ZERO	__at(0x03*8+2);
volatile	__bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

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
#if defined(_12C508) || defined(_12C509)
volatile __bit     CAL3    __at(0x05*8+7);
volatile __bit     CAL2    __at(0x05*8+6);
volatile __bit     CAL1    __at(0x05*8+5);
volatile __bit     CAL0    __at(0x05*8+4);
#elif	defined(_12C508A) || defined(_12C509A) ||\
	defined(_12CE518) || defined(_12CE519) ||\
	defined(_12C509AG) || defined(_12C509AF) ||\
	defined(_12CR509A)
	volatile __bit     CAL5    __at(0x05*8+7);
	volatile __bit     CAL4    __at(0x05*8+6);
	volatile __bit     CAL3    __at(0x05*8+5);
	volatile __bit     CAL2    __at(0x05*8+4);
	volatile __bit     CAL1    __at(0x05*8+3);
	volatile __bit     CAL0    __at(0x05*8+2);
#elif defined(_12F508) || defined(_12F509)
volatile __bit     CAL6    __at(0x05*8+7);
volatile __bit     CAL5    __at(0x05*8+6);
volatile __bit     CAL4    __at(0x05*8+5);
volatile __bit     CAL3    __at(0x05*8+4);
volatile __bit     CAL2    __at(0x05*8+3);
volatile __bit     CAL1    __at(0x05*8+2);
volatile __bit     CAL0    __at(0x05*8+1);
#endif
	
/*	GPIO bits	*/
#if defined(_12CE518) || defined(_12CE519)
	volatile __bit     SCL     __at(0x06*8+7);
	volatile __bit     SDA     __at(0x06*8+6);
#endif
volatile __bit	GP5	__at(0x06*8+5);
volatile __bit	GP4	__at(0x06*8+4);
volatile __bit	GP3	__at(0x06*8+3);
volatile __bit	GP2	__at(0x06*8+2);
volatile __bit	GP1	__at(0x06*8+1);
volatile __bit	GP0	__at(0x06*8+0);


#define CONFIG_ADDR	0xFFF

