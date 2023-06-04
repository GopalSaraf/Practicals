
#ifndef	_HTC_H_
#warning Header file pic16505.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 16C505
 *	PIC 16F505
 *	Baseline Microcontrollers
 */

volatile unsigned char	INDF	__at(0x00);
volatile unsigned char	RTCC	__at(0x01);
volatile unsigned char	TMR0	__at(0x01);
volatile unsigned char	PCL	__at(0x02);
volatile unsigned char	STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char	OSCCAL	__at(0x05);
volatile unsigned char	PORTB	__at(0x06);
volatile unsigned char	PORTC	__at(0x07);

volatile	unsigned char	__control	OPTION	__at(0x00);
volatile unsigned char __control	TRISB	__at(0x06);
volatile unsigned char __control	TRISC	__at(0x07);

/*	STATUS bits	*/
volatile __bit 	RBWUF	__at(0x03*8+7);
volatile __bit	PA0	__at(0x03*8+5);
volatile __bit 	TO	__at(0x03*8+4);
volatile __bit 	PD	__at(0x03*8+3);
volatile __bit 	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

/*	OPTION bits	*/
#define		RBWU	(1<<7)
#define		RBPU	(1<<6)
#define		T0CS	(1<<5)
#define		T0SE	(1<<4)
#define		PSA	(1<<3)
#define		PS2	(1<<2)
#define		PS1	(1<<1)
#define		PS0	(1<<0)

/*	OSCCAL bits	*/
#ifdef _16C505
volatile __bit 	CAL5	__at(0x05*8+7);
volatile __bit	CAL4	__at(0x05*8+6);
volatile __bit	CAL3	__at(0x05*8+5);
volatile __bit	CAL2	__at(0x05*8+4);
volatile __bit	CAL1	__at(0x05*8+3);
volatile __bit	CAL0	__at(0x05*8+2);
#else
volatile __bit 	CAL6	__at(0x05*8+7);
volatile __bit	CAL5	__at(0x05*8+6);
volatile __bit	CAL4	__at(0x05*8+5);
volatile __bit	CAL3	__at(0x05*8+4);
volatile __bit	CAL2	__at(0x05*8+3);
volatile __bit	CAL1	__at(0x05*8+2);
volatile __bit	CAL0	__at(0x05*8+1);
#endif

/*	PORTB bits	*/
volatile __bit	RB5	__at(0x06*8+5);
volatile __bit	RB4	__at(0x06*8+4);
volatile __bit	RB3	__at(0x06*8+3);
volatile __bit	RB2	__at(0x06*8+2);
volatile __bit	RB1	__at(0x06*8+1);
volatile __bit	RB0	__at(0x06*8+0);

/*	PORTC bits	*/
volatile __bit	RC5	__at(0x07*8+5);
volatile __bit	RC4	__at(0x07*8+4);
volatile __bit	RC3	__at(0x07*8+3);
volatile __bit	RC2	__at(0x07*8+2);
volatile __bit	RC1	__at(0x07*8+1);
volatile __bit	RC0	__at(0x07*8+0);


#define CONFIG_ADDR	0xFFF

