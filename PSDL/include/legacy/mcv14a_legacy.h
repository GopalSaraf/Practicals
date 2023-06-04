#ifndef	_HTC_H_
 #warning Header file mcv14a.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP microcontroller
  * MCV14A
 */

#ifndef	__MCV14A_H
#define	__MCV14A_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x000);
volatile __control unsigned char	TRISB		__at(0x006);
volatile __control unsigned char	TRISC		__at(0x007);
volatile	__control unsigned char	OPTION		__at(0x000);
volatile       unsigned char	TMR0		__at(0x001);
volatile       unsigned char	PCL		__at(0x002);
volatile       unsigned char	STATUS		__at(0x003);
volatile	unsigned char	FSR		__at(0x004);
volatile	unsigned char	OSCCAL		__at(0x005);
volatile       unsigned char	PORTB		__at(0x006);
volatile       unsigned char	PORTC		__at(0x007);
volatile       unsigned char	CM1CON0		__at(0x008);
volatile       unsigned char	ADCON0		__at(0x009);
volatile       unsigned char	ADRES		__at(0x00A);
volatile       unsigned char	CM2CON0		__at(0x00B);
volatile	unsigned char	VRCON		__at(0x00C);
volatile       unsigned char	EECON		__at(0x021);
volatile       unsigned char	EEDATA		__at(0x025);
/* Alternate definition */
volatile       unsigned char	EEDATL		__at(0x025);
volatile       unsigned char	EEADR		__at(0x026);
/* Alternate definition */
volatile       unsigned char	EEADRL		__at(0x026);

/* Definitions for TRIS register */
#define TRIS0	(1<<0)
#define TRIS1	(1<<1)
#define TRIS2	(1<<2)
#define TRIS3	(1<<3)
#define TRIS4	(1<<4)
#define TRIS5	(1<<5)

/* Definitions for OPTION register */
#define PS0	(1<<0)
#define PS1	(1<<1)
#define PS2	(1<<2)
#define PSA	(1<<3)
#define T0SE	(1<<4)
#define T0CS	(1<<5)
#define RBPU	(1<<6)
#define RBWU	(1<<7)


/* Definitions for STATUS register */
volatile       __bit	CARRY		__at((0x003*8)+0);
volatile       __bit	DC		__at((0x003*8)+1);
volatile       __bit	ZERO		__at((0x003*8)+2);
volatile       __bit	PD		__at((0x003*8)+3);
volatile       __bit	TO		__at((0x003*8)+4);
volatile	__bit	PA0		__at((0x003*8)+5);
volatile       __bit	CWUF		__at((0x003*8)+6);
volatile       __bit	RBWUF		__at((0x003*8)+7);

/* Definitions for OSCCAL register */
volatile	__bit	CAL0		__at((0x005*8)+1);
volatile	__bit	CAL1		__at((0x005*8)+2);
volatile	__bit	CAL2		__at((0x005*8)+3);
volatile	__bit	CAL3		__at((0x005*8)+4);
volatile	__bit	CAL4		__at((0x005*8)+5);
volatile	__bit	CAL5		__at((0x005*8)+6);
volatile	__bit	CAL6		__at((0x005*8)+7);

/* Definitions for PORTB register */
volatile       __bit	RB0		__at((0x006*8)+0);
volatile       __bit	RB1		__at((0x006*8)+1);
volatile       __bit	RB2		__at((0x006*8)+2);
volatile       __bit	RB3		__at((0x006*8)+3);
volatile       __bit	RB4		__at((0x006*8)+4);
volatile       __bit	RB5		__at((0x006*8)+5);

/* Definitions for PORTC register */
volatile       __bit	RC0		__at((0x007*8)+0);
volatile       __bit	RC1		__at((0x007*8)+1);
volatile       __bit	RC2		__at((0x007*8)+2);
volatile       __bit	RC3		__at((0x007*8)+3);
volatile       __bit	RC4		__at((0x007*8)+4);
volatile       __bit	RC5		__at((0x007*8)+5);

/* Definitions for CM1CON0 register */
volatile	__bit	C1WU		__at((0x008*8)+0);
volatile	__bit	C1PREF		__at((0x008*8)+1);
volatile	__bit	C1NREF		__at((0x008*8)+2);
volatile	__bit	C1ON		__at((0x008*8)+3);
volatile	__bit	C1T0CS		__at((0x008*8)+4);
volatile	__bit	C1POL		__at((0x008*8)+5);
volatile	__bit	C1OUTEN		__at((0x008*8)+6);
volatile       __bit	C1OUT		__at((0x008*8)+7);

/* Definitions for ADCON0 register */
volatile	__bit	ADON		__at((0x009*8)+0);
volatile       __bit	GODONE		__at((0x009*8)+1);
volatile	__bit	CHS0		__at((0x009*8)+2);
volatile	__bit	CHS1		__at((0x009*8)+3);
volatile	__bit	ADCS0		__at((0x009*8)+4);
volatile	__bit	ADCS1		__at((0x009*8)+5);
volatile	__bit	ANS0		__at((0x009*8)+6);
volatile	__bit	ANS1		__at((0x009*8)+7);

/* Definitions for CM2CON0 register */
volatile	__bit	C2WU		__at((0x00B*8)+0);
volatile	__bit	C2PREF1		__at((0x00B*8)+1);
volatile	__bit	C2NREF		__at((0x00B*8)+2);
volatile	__bit	C2ON		__at((0x00B*8)+3);
volatile	__bit	C2PREF2		__at((0x00B*8)+4);
volatile	__bit	C2POL		__at((0x00B*8)+5);
volatile	__bit	C2OUTEN		__at((0x00B*8)+6);
volatile       __bit	C2OUT		__at((0x00B*8)+7);

/* Definitions for VRCON register */
volatile	__bit	VR0		__at((0x00C*8)+0);
volatile	__bit	VR1		__at((0x00C*8)+1);
volatile	__bit	VR2		__at((0x00C*8)+2);
volatile	__bit	VR3		__at((0x00C*8)+3);
volatile	__bit	VRR		__at((0x00C*8)+5);
volatile	__bit	VROE		__at((0x00C*8)+6);
volatile	__bit	VREN		__at((0x00C*8)+7);

/* Definitions for EECON register */
volatile       __bit	RD		__at((0x021*8)+0);
volatile       __bit	WR		__at((0x021*8)+1);
volatile __bit	WREN		__at((0x021*8)+2);
volatile       __bit	WRERR		__at((0x021*8)+3);
volatile       __bit	FREE		__at((0x021*8)+4);

#define CONFIG_ADDR	0x7FF

#endif
