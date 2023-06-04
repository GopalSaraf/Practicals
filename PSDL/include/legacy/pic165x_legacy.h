
#ifndef	_HTC_H_
#warning Header file pic165x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 16C52 chip
 *	PIC 16C54 chip
 *	PIC 16C54A chip
 *	PIC 16C54B chip
 *	PIC 16C54C chip
 *	PIC 16CR54A chip
 *	PIC 16CR54B chip
 *	PIC 16CR54C chip
 *	PIC 16CR54 chip
 *	PIC 16C55 chip
 *	PIC 16C55A chip
 *	PIC 16C56 chip
 *	PIC 16C56A chip
 *	PIC 16CR56A chip
 *	PIC 16C57 chip
 *	PIC 16C57C chip
 *	PIC 16CR57B chip 
 *	PIC 16CR57C chip 
 *	PIC 16C58 chip
 *	PIC 16C58A chip
 *	PIC 16C58B chip
 *	PIC 16CR58A chip
 *	PIC 16CR58B chip
 *	PIC 16HV540 chip
 *	Baseline Microcontrollers
 */

volatile unsigned char	INDF	__at(0x00);
volatile unsigned char	TMR0	__at(0x01);
volatile unsigned char	RTCC	__at(0x01);
volatile unsigned char	PCL	__at(0x02);
volatile unsigned char	STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char	PORTA	__at(0x05);
volatile unsigned char	PORTB	__at(0x06);

volatile	unsigned char	__control	OPTION	__at(0x00);
volatile	unsigned char __control	TRISA	__at(0x05);
volatile	unsigned char __control	TRISB	__at(0x06);
#ifdef _16HV540
volatile	unsigned char	__control	OPTION2 __at(0x07);
#endif

/*	STATUS bits	*/
volatile __bit	PA1	__at(0x03*8+6);
volatile __bit	PA0	__at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

/*	OPTION bits	*/
#define	T0CS	(1<<5)
#define	T0SE	(1<<4)
#define	PSA	(1<<3)
#define	PS2	(1<<2)
#define	PS1	(1<<1)
#define	PS0	(1<<0)

/*	OPTION2 bits	*/
#ifdef _16HV540
#define WPC	(1<<5)
#define SWE	(1<<4)
#define RL	(1<<3)
#define SL	(1<<2)
#define BL	(1<<1)
#define BE	(1<<0)
#endif

/*	PORTA	bits	*/
volatile __bit	RA3	__at(0x05*8+3);
volatile __bit	RA2	__at(0x05*8+2);
volatile __bit	RA1	__at(0x05*8+1);
volatile __bit	RA0	__at(0x05*8+0);

/*	PORTB bits	*/
volatile __bit	RB7	__at(0x06*8+7);
volatile __bit	RB6	__at(0x06*8+6);
volatile __bit	RB5	__at(0x06*8+5);
volatile __bit	RB4	__at(0x06*8+4);
volatile __bit	RB3	__at(0x06*8+3);
volatile __bit	RB2	__at(0x06*8+2);
volatile __bit	RB1	__at(0x06*8+1);
volatile __bit	RB0	__at(0x06*8+0);

#if defined(_16C55) 	|| defined(_16C55A)	|| defined(_16C57) 	||\
    defined(_16C57C)	|| defined(_16CR57B)	|| defined(_16CR57C)

	volatile unsigned char	PORTC	__at(0x07);
	volatile	unsigned char __control	TRISC	__at(0x07);

	/*	PORTC bits	*/
	volatile __bit 	RC7	__at(0x07*8+7);
	volatile __bit 	RC6	__at(0x07*8+6);
	volatile __bit 	RC5	__at(0x07*8+5);
	volatile __bit 	RC4	__at(0x07*8+4);
	volatile __bit 	RC3	__at(0x07*8+3);
	volatile __bit 	RC2	__at(0x07*8+2);
	volatile __bit 	RC1	__at(0x07*8+1);
	volatile __bit 	RC0	__at(0x07*8+0);
#endif

#define CONFIG_ADDR	0xFFF

