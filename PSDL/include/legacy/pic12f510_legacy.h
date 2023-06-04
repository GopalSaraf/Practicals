
#ifndef	_HTC_H_
#warning Header file pic12f510.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
 */

#ifndef	__PIC12F510_H
#define	__PIC12F510_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x000);
volatile       unsigned char	TMR0		__at(0x001);
volatile       unsigned char	PCL		__at(0x002);
volatile       unsigned char	STATUS		__at(0x003);
volatile	unsigned char	FSR		__at(0x004);
volatile	unsigned char	OSCCAL		__at(0x005);
volatile       unsigned char	GPIO		__at(0x006);
volatile       unsigned char	CM1CON0		__at(0x007);
volatile       unsigned char	ADCON0		__at(0x008);
volatile       unsigned char	ADRES		__at(0x009);

volatile	__control unsigned char	OPTION		__at(0x000);
volatile __control unsigned char	TRIS		__at(0x006);

/*	OPTION bits	*/
#define		GPWU	(1<<7)
#define		GPPU	(1<<6)
#define		T0CS	(1<<5)
#define		T0SE	(1<<4)
#define		PSA	(1<<3)
#define		PS2	(1<<2)
#define		PS1	(1<<1)
#define		PS0	(1<<0)


/* Definitions for STATUS register */
volatile       __bit	CARRY		__at((0x003*8)+0);
volatile       __bit	DC		__at((0x003*8)+1);
volatile       __bit	ZERO		__at((0x003*8)+2);
volatile       __bit	PD		__at((0x003*8)+3);
volatile       __bit	TO		__at((0x003*8)+4);
volatile	__bit	PA0		__at((0x003*8)+5);
volatile       __bit	CWUF		__at((0x003*8)+6);
volatile       __bit	GPWUF		__at((0x003*8)+7);

/* Definitions for OSCCAL register */
volatile	__bit	CAL0		__at((0x005*8)+1);
volatile	__bit	CAL1		__at((0x005*8)+2);
volatile	__bit	CAL2		__at((0x005*8)+3);
volatile	__bit	CAL3		__at((0x005*8)+4);
volatile	__bit	CAL4		__at((0x005*8)+5);
volatile	__bit	CAL5		__at((0x005*8)+6);
volatile	__bit	CAL6		__at((0x005*8)+7);

/* Definitions for GPIO register */
volatile       __bit	GP0		__at((0x006*8)+0);
volatile       __bit	GP1		__at((0x006*8)+1);
volatile       __bit	GP2		__at((0x006*8)+2);
volatile       __bit	GP3		__at((0x006*8)+3);
volatile       __bit	GP4		__at((0x006*8)+4);
volatile       __bit	GP5		__at((0x006*8)+5);

/* Definitions for CM1CON0 register */
volatile	__bit	C1WU		__at((0x007*8)+0);
volatile	__bit	C1PREF		__at((0x007*8)+1);
volatile	__bit	C1NREF		__at((0x007*8)+2);
volatile	__bit	C1ON		__at((0x007*8)+3);
volatile	__bit	C1T0CS		__at((0x007*8)+4);
volatile	__bit	C1POL		__at((0x007*8)+5);
volatile	__bit	C1OUTEN		__at((0x007*8)+6);
volatile       __bit	C1OUT		__at((0x007*8)+7);

/* Definitions for ADCON0 register */
volatile	__bit	ADON		__at((0x008*8)+0);
volatile       __bit	GODONE		__at((0x008*8)+1);
volatile	__bit	CHS0		__at((0x008*8)+2);
volatile	__bit	CHS1		__at((0x008*8)+3);
volatile	__bit	ADCS0		__at((0x008*8)+4);
volatile	__bit	ADCS1		__at((0x008*8)+5);
volatile	__bit	ANS0		__at((0x008*8)+6);
volatile	__bit	ANS1		__at((0x008*8)+7);

#define CONFIG_ADDR	0xFFF

#endif
