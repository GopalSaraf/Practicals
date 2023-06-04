
#ifndef	_HTC_H_
#warning Header file pic166xx.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip :
 *	PIC 16C641 chip
 *	PIC 16C642 chip
 *	PIC 16C661 chip
 *	PIC 16C662 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char INDF	__at(0x00);
volatile unsigned char TMR0	__at(0x01);
volatile unsigned char RTCC	__at(0x01);
volatile unsigned char PCL	__at(0x02);
volatile unsigned char STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char PORTA	__at(0x05);
volatile unsigned char PORTB	__at(0x06);
volatile unsigned char PORTC	__at(0x07);
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char INTCON	__at(0x0B);
volatile unsigned char PIR1	__at(0x0C);
volatile unsigned char CMCON	__at(0x1F);

volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char      	TRISA	__at(0x85);
volatile	unsigned char      	TRISB	__at(0x86);
volatile	unsigned char      	TRISC	__at(0x87);
volatile unsigned char      	PIE1	__at(0x8C);
volatile unsigned char      	PCON	__at(0x8E);
volatile unsigned char      	VRCON	__at(0x9F);

#if defined(_16C661) || defined(_16C662)
	volatile unsigned char PORTD	__at(0x08);
	volatile unsigned char PORTE	__at(0x09);
        volatile unsigned char            TRISD   __at(0x88);
        volatile unsigned char            TRISE   __at(0x89);
	
	/*	PORTD bits	*/
	volatile __bit	RD7	__at(0x08*8+7);
	volatile __bit	RD6	__at(0x08*8+6);
	volatile __bit	RD5	__at(0x08*8+5);
	volatile __bit	RD4	__at(0x08*8+4);
	volatile __bit	RD3	__at(0x08*8+3);
	volatile __bit	RD2	__at(0x08*8+2);
	volatile __bit	RD1	__at(0x08*8+1);
	volatile __bit	RD0	__at(0x08*8+0);

	/*      PORTE bits      */
	volatile __bit      RE2     __at(0x09*8+2);
	volatile __bit      RE1     __at(0x09*8+1);
	volatile __bit      RE0     __at(0x09*8+0);

        /*      TRISD bits      */
        volatile       __bit        TRISD7  __at(0x88*8+7);
        volatile       __bit        TRISD6  __at(0x88*8+6);
        volatile       __bit        TRISD5  __at(0x88*8+5);
        volatile       __bit        TRISD4  __at(0x88*8+4);
        volatile       __bit        TRISD3  __at(0x88*8+3);
        volatile       __bit        TRISD2  __at(0x88*8+2);
        volatile       __bit        TRISD1  __at(0x88*8+1);
        volatile       __bit        TRISD0  __at(0x88*8+0);

        /*      TRISE bits      */
        volatile       __bit        IBF     __at(0x89*8+7);
        volatile       __bit        OBIF    __at(0x89*8+6);
        volatile       __bit        IBOV    __at(0x89*8+5);
        volatile       __bit        PSPMODE __at(0x89*8+4);
        volatile       __bit        TRISE2  __at(0x89*8+2);
        volatile       __bit        TRISE1  __at(0x89*8+1);
        volatile       __bit        TRISE0  __at(0x89*8+0);

#endif  

/*	STATUS bits	*/
volatile __bit     RP0     __at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit     ZERO    __at(0x03*8+2);
volatile __bit     DC      __at(0x03*8+1);
volatile __bit     CARRY   __at(0x03*8+0);

/*	PORTA bits	*/
volatile __bit	RA5	__at(0x05*8+5);
volatile __bit	RA4	__at(0x05*8+4);
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

/*	PORTC bits	*/
volatile __bit	RC7	__at(0x07*8+7);
volatile __bit	RC6	__at(0x07*8+6);
volatile __bit	RC5	__at(0x07*8+5);
volatile __bit	RC4	__at(0x07*8+4);
volatile __bit	RC3	__at(0x07*8+3);
volatile __bit	RC2	__at(0x07*8+2);
volatile __bit	RC1	__at(0x07*8+1);
volatile __bit	RC0	__at(0x07*8+0);

/*	INTCON bits	*/
volatile __bit	GIE	__at(0x0B*8+7);
volatile __bit	PEIE	__at(0x0B*8+6);
volatile __bit	T0IE	__at(0x0B*8+5);
volatile __bit	INTE	__at(0x0B*8+4);
volatile __bit	RBIE	__at(0x0B*8+3);
volatile __bit	T0IF	__at(0x0B*8+2);
volatile __bit	INTF	__at(0x0B*8+1);
volatile __bit	RBIF	__at(0x0B*8+0);

/*	PIR1 bits	*/
#if defined(_16C661) || defined(_16C662)
volatile __bit	PSPIF	__at(0x0C*8+7);
#endif  
volatile __bit	CMIF	__at(0x0C*8+6);

/*	CMCON bits	*/
volatile __bit 	C2OUT	__at(0x1F*8+7);
volatile __bit 	C1OUT	__at(0x1F*8+6);
volatile __bit 	CIS  	__at(0x1F*8+3);
volatile __bit 	CM2  	__at(0x1F*8+2);
volatile __bit 	CM1  	__at(0x1F*8+1);
volatile __bit 	CM0  	__at(0x1F*8+0);

/* 	OPTION bits	*/
volatile	__bit	RBPU	__at(0x81*8+7);
volatile	__bit	INTEDG	__at(0x81*8+6);
volatile	__bit	T0CS	__at(0x81*8+5);
volatile	__bit	T0SE	__at(0x81*8+4);
volatile	__bit	PSA	__at(0x81*8+3);
volatile	__bit	PS2	__at(0x81*8+2);
volatile	__bit	PS1	__at(0x81*8+1);
volatile	__bit	PS0	__at(0x81*8+0);

/*      TRISA bits      */
volatile       __bit        TRISA5  __at(0x85*8+5);
volatile       __bit        TRISA4  __at(0x85*8+4);
volatile       __bit        TRISA3  __at(0x85*8+3);
volatile       __bit        TRISA2  __at(0x85*8+2);
volatile       __bit        TRISA1  __at(0x85*8+1);
volatile       __bit        TRISA0  __at(0x85*8+0);

/*      TRISB bits      */
volatile       __bit        TRISB7  __at(0x86*8+7);
volatile       __bit        TRISB6  __at(0x86*8+6);
volatile       __bit        TRISB5  __at(0x86*8+5);
volatile       __bit        TRISB4  __at(0x86*8+4);
volatile       __bit        TRISB3  __at(0x86*8+3);
volatile       __bit        TRISB2  __at(0x86*8+2);
volatile       __bit        TRISB1  __at(0x86*8+1);
volatile       __bit        TRISB0  __at(0x86*8+0);

/*      TRISC bits      */
volatile       __bit        TRISC7  __at(0x87*8+7);
volatile       __bit        TRISC6  __at(0x87*8+6);
volatile       __bit        TRISC5  __at(0x87*8+5);
volatile       __bit        TRISC4  __at(0x87*8+4);
volatile       __bit        TRISC3  __at(0x87*8+3);
volatile       __bit        TRISC2  __at(0x87*8+2);
volatile       __bit        TRISC1  __at(0x87*8+1);
volatile       __bit        TRISC0  __at(0x87*8+0);

/*	PIE1 bits	*/
#if defined(_16C661) || defined(_16C662)
volatile       __bit	PSPIE	__at(0x8C*8+7);
#endif  
volatile       __bit	CMIE	__at(0x8C*8+6);

/*	PCON bits	*/
volatile       __bit	MPECS	__at(0x8E*8+7);	/* MPEEN */
volatile       __bit	PER	__at(0x8E*8+2);
volatile       __bit	POR	__at(0x8E*8+1);	
volatile       __bit	BOR	__at(0x8E*8+0);

/*	VRCON bits	*/
volatile       __bit	VREN	__at(0x9F*8+7);
volatile       __bit	VROE	__at(0x9F*8+6);
volatile       __bit	VRR	__at(0x9F*8+5);
volatile       __bit	VR3	__at(0x9F*8+3);
volatile       __bit	VR2	__at(0x9F*8+2);
volatile       __bit	VR1	__at(0x9F*8+1);
volatile       __bit	VR0	__at(0x9F*8+0);

#define CONFIG_ADDR	0x2007

