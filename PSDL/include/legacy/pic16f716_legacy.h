
#ifndef	_HTC_H_
#warning Header file pic16f716.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontroller
 */

#ifndef	__PIC16F716_H
#define	__PIC16F716_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x00);
volatile       unsigned char	TMR0		__at(0x01);
volatile       unsigned char	PCL		__at(0x02);
volatile       unsigned char	STATUS		__at(0x03);
volatile	unsigned char	FSR		__at(0x04);
volatile       unsigned char	PORTA		__at(0x05);
volatile       unsigned char	PORTB		__at(0x06);
volatile       unsigned char	PCLATH		__at(0x0A);
volatile       unsigned char	INTCON		__at(0x0B);
volatile       unsigned char	PIR1		__at(0x0C);
volatile       unsigned char	TMR1L		__at(0x0E);
volatile       unsigned char	TMR1H		__at(0x0F);
volatile       unsigned char	T1CON		__at(0x10);
volatile       unsigned char	TMR2		__at(0x11);
volatile       unsigned char	T2CON		__at(0x12);
volatile       unsigned char	CCPR1L		__at(0x15);
volatile       unsigned char	CCPR1H		__at(0x16);
volatile       unsigned char	CCP1CON		__at(0x17);
volatile       unsigned char	PWM1CON		__at(0x18);
volatile       unsigned char	ECCPAS		__at(0x19);
volatile       unsigned char	ADRES		__at(0x1E);
volatile       unsigned char	ADCON0		__at(0x1F);
volatile	unsigned char	OPTION		__at(0x81);
volatile       unsigned char	TRISA		__at(0x85);
volatile       unsigned char	TRISB		__at(0x86);
volatile	unsigned char	PIE1		__at(0x8C);
volatile       unsigned char	PCON		__at(0x8E);
volatile	unsigned char	PR2		__at(0x92);
volatile	unsigned char	ADCON1		__at(0x9F);


/* Definitions for STATUS register */
volatile       __bit	CARRY		__at((0x03*8)+0);
volatile       __bit	DC		__at((0x03*8)+1);
volatile       __bit	ZERO		__at((0x03*8)+2);
volatile       __bit	PD		__at((0x03*8)+3);
volatile       __bit	TO		__at((0x03*8)+4);
volatile	__bit	RP0		__at((0x03*8)+5);
volatile	__bit	RP1		__at((0x03*8)+6);
volatile	__bit	IRP		__at((0x03*8)+7);

/* Definitions for PORTA register */
volatile       __bit	RA0		__at((0x05*8)+0);
volatile       __bit	RA1		__at((0x05*8)+1);
volatile       __bit	RA2		__at((0x05*8)+2);
volatile       __bit	RA3		__at((0x05*8)+3);
volatile       __bit	RA4		__at((0x05*8)+4);

/* Definitions for PORTB register */
volatile       __bit	RB0		__at((0x06*8)+0);
volatile       __bit	RB1		__at((0x06*8)+1);
volatile       __bit	RB2		__at((0x06*8)+2);
volatile       __bit	RB3		__at((0x06*8)+3);
volatile       __bit	RB4		__at((0x06*8)+4);
volatile       __bit	RB5		__at((0x06*8)+5);
volatile       __bit	RB6		__at((0x06*8)+6);
volatile       __bit	RB7		__at((0x06*8)+7);

/* Definitions for INTCON register */
volatile       __bit	RBIF		__at((0x0B*8)+0);
volatile       __bit	INTF		__at((0x0B*8)+1);
volatile       __bit	T0IF		__at((0x0B*8)+2);
volatile	__bit	RBIE		__at((0x0B*8)+3);
volatile	__bit	INTE		__at((0x0B*8)+4);
volatile	__bit	T0IE		__at((0x0B*8)+5);
volatile	__bit	PEIE		__at((0x0B*8)+6);
volatile __bit	GIE		__at((0x0B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF		__at((0x0C*8)+0);
volatile       __bit	TMR2IF		__at((0x0C*8)+1);
volatile       __bit	CCP1IF		__at((0x0C*8)+2);
volatile       __bit	ADIF		__at((0x0C*8)+6);

/* Definitions for T1CON register */
volatile	__bit	TMR1ON		__at((0x10*8)+0);
volatile	__bit	TMR1CS		__at((0x10*8)+1);
volatile	__bit	T1SYNC		__at((0x10*8)+2);
volatile	__bit	T1OSCEN		__at((0x10*8)+3);
volatile	__bit	T1CKPS0		__at((0x10*8)+4);
volatile	__bit	T1CKPS1		__at((0x10*8)+5);

/* Definitions for T2CON register */
volatile	__bit	T2CKPS0		__at((0x12*8)+0);
volatile	__bit	T2CKPS1		__at((0x12*8)+1);
volatile	__bit	TMR2ON		__at((0x12*8)+2);
volatile	__bit	TOUTPS0		__at((0x12*8)+3);
volatile	__bit	TOUTPS1		__at((0x12*8)+4);
volatile	__bit	TOUTPS2		__at((0x12*8)+5);
volatile	__bit	TOUTPS3		__at((0x12*8)+6);

/* Definitions for CCP1CON register */
volatile	__bit	CCP1M0		__at((0x17*8)+0);
volatile	__bit	CCP1M1		__at((0x17*8)+1);
volatile	__bit	CCP1M2		__at((0x17*8)+2);
volatile	__bit	CCP1M3		__at((0x17*8)+3);
volatile	__bit	DC1B0		__at((0x17*8)+4);
volatile	__bit	DC1B1		__at((0x17*8)+5);
volatile	__bit	P1M0		__at((0x17*8)+6);
volatile	__bit	P1M1		__at((0x17*8)+7);

/* Definitions for PWM1CON register */
volatile       __bit	PDC0		__at((0x18*8)+0);
volatile       __bit	PDC1		__at((0x18*8)+1);
volatile       __bit	PDC2		__at((0x18*8)+2);
volatile       __bit	PDC3		__at((0x18*8)+3);
volatile       __bit	PDC4		__at((0x18*8)+4);
volatile       __bit	PDC5		__at((0x18*8)+5);
volatile       __bit	PDC6		__at((0x18*8)+6);
volatile       __bit	PRSEN		__at((0x18*8)+7);

/* Definitions for ECCPAS register */
volatile	__bit	PSSBD0		__at((0x19*8)+0);
volatile	__bit	PSSBD1		__at((0x19*8)+1);
volatile	__bit	PSSAC0		__at((0x19*8)+2);
volatile	__bit	PSSAC1		__at((0x19*8)+3);
volatile	__bit	ECCPAS0		__at((0x19*8)+4);
volatile	__bit	ECCPAS2		__at((0x19*8)+6);
volatile       __bit	ECCPASE		__at((0x19*8)+7);

/* Definitions for ADCON0 register */
volatile	__bit	ADON		__at((0x1F*8)+0);
volatile       __bit	GODONE		__at((0x1F*8)+2);
volatile	__bit	CHS0		__at((0x1F*8)+3);
volatile	__bit	CHS1		__at((0x1F*8)+4);
volatile	__bit	CHS2		__at((0x1F*8)+5);
volatile	__bit	ADCS0		__at((0x1F*8)+6);
volatile	__bit	ADCS1		__at((0x1F*8)+7);

/* Definitions for OPTION register */
volatile	__bit	PS0		__at((0x81*8)+0);
volatile	__bit	PS1		__at((0x81*8)+1);
volatile	__bit	PS2		__at((0x81*8)+2);
volatile	__bit	PSA		__at((0x81*8)+3);
volatile	__bit	T0SE		__at((0x81*8)+4);
volatile	__bit	T0CS		__at((0x81*8)+5);
volatile	__bit	INTEDG		__at((0x81*8)+6);
volatile	__bit	RBPU		__at((0x81*8)+7);

/* Definitions for TRISA register */
volatile       __bit	TRISA0		__at((0x85*8)+0);
volatile       __bit	TRISA1		__at((0x85*8)+1);
volatile       __bit	TRISA2		__at((0x85*8)+2);
volatile       __bit	TRISA3		__at((0x85*8)+3);
volatile       __bit	TRISA4		__at((0x85*8)+4);

/* Definitions for TRISB register */
volatile       __bit	TRISB0		__at((0x86*8)+0);
volatile       __bit	TRISB1		__at((0x86*8)+1);
volatile       __bit	TRISB2		__at((0x86*8)+2);
volatile       __bit	TRISB3		__at((0x86*8)+3);
volatile       __bit	TRISB4		__at((0x86*8)+4);
volatile       __bit	TRISB5		__at((0x86*8)+5);
volatile       __bit	TRISB6		__at((0x86*8)+6);
volatile       __bit	TRISB7		__at((0x86*8)+7);

/* Definitions for PIE1 register */
volatile	__bit	TMR1IE		__at((0x8C*8)+0);
volatile	__bit	TMR2IE		__at((0x8C*8)+1);
volatile	__bit	CCP1IE		__at((0x8C*8)+2);
volatile	__bit	ADIE		__at((0x8C*8)+6);

/* Definitions for PCON register */
volatile       __bit	BOR		__at((0x8E*8)+0);
volatile       __bit	POR		__at((0x8E*8)+1);

/* Definitions for ADCON1 register */
volatile	__bit	PCFG0		__at((0x9F*8)+0);
volatile	__bit	PCFG1		__at((0x9F*8)+1);
volatile	__bit	PCFG2		__at((0x9F*8)+2);

#define CONFIG_ADDR	0x2007

#endif
