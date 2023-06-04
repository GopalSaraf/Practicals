
#ifndef	_HTC_H_
#warning Header file mcv28a.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP microcontrollers
  * MCV18A
  * MCV28A
 */

#ifndef	__MCV28A_H
#define	__MCV28A_H

// Special function register definitions

volatile       unsigned char	TMR0		__at(0x01);
volatile       unsigned char	PCL		__at(0x02);
volatile       unsigned char	STATUS		__at(0x03);
volatile	unsigned char	FSR		__at(0x04);
volatile       unsigned char	PORTA		__at(0x05);
volatile       unsigned char	PORTB		__at(0x06);
#if defined(_MCV28A)
volatile       unsigned char	PORTC		__at(0x07);
#endif
volatile __control unsigned char	TRISA		__at(0x05);
volatile __control unsigned char	TRISB		__at(0x06);
#if defined(_MCV28A)
volatile __control unsigned char	TRISC		__at(0x07);
#endif
volatile __control unsigned char	OPTION		__at(0x00);


/* Definitions for STATUS register */
volatile       __bit	CARRY		__at((0x03*8)+0);
volatile       __bit	DC		__at((0x03*8)+1);
volatile       __bit	ZERO		__at((0x03*8)+2);
volatile       __bit	PD		__at((0x03*8)+3);
volatile       __bit	TO		__at((0x03*8)+4);
volatile       __bit	PA0		__at((0x03*8)+5);
volatile       __bit	PA1		__at((0x03*8)+6);

/* Definitions for PORTA register */
volatile       __bit	RA0		__at((0x05*8)+0);
volatile       __bit	RA1		__at((0x05*8)+1);
volatile       __bit	RA2		__at((0x05*8)+2);
volatile       __bit	RA3		__at((0x05*8)+3);

/* Definitions for PORTB register */
volatile       __bit	RB0		__at((0x06*8)+0);
volatile       __bit	RB1		__at((0x06*8)+1);
volatile       __bit	RB2		__at((0x06*8)+2);
volatile       __bit	RB3		__at((0x06*8)+3);
volatile       __bit	RB4		__at((0x06*8)+4);
volatile       __bit	RB5		__at((0x06*8)+5);
volatile       __bit	RB6		__at((0x06*8)+6);
volatile       __bit	RB7		__at((0x06*8)+7);

#if defined(_MCV28A)
/* Definitions for PORTC register */
volatile       __bit	RC0		__at((0x07*8)+0);
volatile       __bit	RC1		__at((0x07*8)+1);
volatile       __bit	RC2		__at((0x07*8)+2);
volatile       __bit	RC3		__at((0x07*8)+3);
volatile       __bit	RC4		__at((0x07*8)+4);
volatile       __bit	RC5		__at((0x07*8)+5);
volatile       __bit	RC6		__at((0x07*8)+6);
volatile       __bit	RC7		__at((0x07*8)+7);
#endif

/*	OPTION bits	*/
#define	T0CS	(1<<5)
#define	T0SE	(1<<4)
#define	PSA	(1<<3)
#define	PS2	(1<<2)
#define	PS1	(1<<1)
#define	PS0	(1<<0)

#define CONFIG_ADDR	0xFFF

#endif
