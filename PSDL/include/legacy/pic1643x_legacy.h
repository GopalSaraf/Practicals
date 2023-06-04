
#ifndef	_HTC_H_
#warning Header file pic1643x.h included directly. Use #include <htc.h> instead.
#endif

/*
 * 	Header file for the Microchip
 * 	PIC 16C432 chip
 * 	PIC 16C433 chip
 * 	Midrange Microcontrollers
 */

volatile	unsigned char	INDF	__at(0x00);
volatile	unsigned char	TMR0	__at(0x01);
volatile	unsigned char 	PCL	__at(0x02);
volatile unsigned char	STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
#if	defined(_16C432)
volatile unsigned char	PORTA	__at(0x05);
volatile	unsigned char	PORTB	__at(0x06);
#endif
#if 	defined(_16C433)
volatile	unsigned char	GPIO	__at(0x05);
#endif
volatile	unsigned char	PCLATH	__at(0x0A);
volatile	unsigned char	INTCON	__at(0x0B);
volatile	unsigned char	PIR1	__at(0x0C);
#if	defined(_16C433)
volatile	unsigned char	ADRES	__at(0x1E);
volatile	unsigned char	ADCON0	__at(0x1F);
#endif
#if	defined(_16C432)
volatile	unsigned char	CMCON	__at(0x1F);
#endif

volatile	unsigned char	     	OPTION	__at(0x81);
#if 	defined(_16C432)
volatile	unsigned char	     	TRISA	__at(0x85);
volatile	unsigned char	     	TRISB	__at(0x86);
#endif
#if	defined(_16C433)
volatile	unsigned char	     	TRIS	__at(0x85);
#endif
volatile unsigned char      	PIE1	__at(0x8C);
volatile	unsigned char      	PCON	__at(0x8E);
#if	defined(_16C433)
volatile	unsigned char	      	OSCCAL	__at(0x8F);
volatile	unsigned char      	ADCON1	__at(0x9F);
#endif
#if	defined(_16C432)
volatile unsigned char      	LININTF	__at(0x90);
volatile unsigned char      	VRCON	__at(0x9F);
#endif


/*	TMR0 bits	*/
volatile	__bit	TMR07	__at(0x01*8+7);
volatile	__bit	TMR06	__at(0x01*8+6);
volatile	__bit	TMR05	__at(0x01*8+5);
volatile	__bit	TMR04	__at(0x01*8+4);
volatile	__bit	TMR03	__at(0x01*8+3);
volatile	__bit	TMR02	__at(0x01*8+2);
volatile	__bit	TMR01	__at(0x01*8+1);
volatile	__bit	TMR00	__at(0x01*8+0);

/* 	PCL bits	*/
volatile	__bit	PCL7	__at(0x02*8+7);
volatile	__bit	PCL6	__at(0x02*8+6);
volatile	__bit	PCL5	__at(0x02*8+5);
volatile	__bit	PCL4	__at(0x02*8+4);
volatile	__bit	PCL3	__at(0x02*8+3);
volatile	__bit	PCL2	__at(0x02*8+2);
volatile	__bit	PCL1	__at(0x02*8+1);
volatile	__bit	PCL0	__at(0x02*8+0);

/*	STATUS bits	*/
volatile __bit	IRP	__at(0x03*8+7);
volatile __bit	RP1	__at(0x03*8+6);
volatile __bit	RP0	__at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

#if	defined(_16C432)
/*	PORTA bits	*/
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
#endif

#if	defined(_16C433)
/*	GPIO bits	*/
volatile __bit	LINTX	__at(0x05*8+7);
volatile __bit	LINRX	__at(0x05*8+6);
volatile __bit	GP5	__at(0x05*8+5);
volatile __bit	GP4	__at(0x05*8+4);
volatile __bit	GP3	__at(0x05*8+3);
volatile __bit	GP2	__at(0x05*8+2);
volatile __bit	GP1	__at(0x05*8+1);
volatile __bit	GP0	__at(0x05*8+0);
#endif

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
#if 	defined(_16C432)
volatile __bit	CMIF	__at(0x0C*8+6);
#endif
#if	defined(_16C433)
volatile __bit	ADIF	__at(0x0C*8+6);
#endif

#if	defined(_16C433)
/*	ADRES bits	*/
volatile __bit	ADRES7	__at(0x1E*8+7);
volatile __bit	ADRES6	__at(0x1E*8+6);
volatile __bit	ADRES5	__at(0x1E*8+5);
volatile __bit	ADRES4	__at(0x1E*8+4);
volatile __bit	ADRES3	__at(0x1E*8+3);
volatile __bit	ADRES2	__at(0x1E*8+2);
volatile __bit	ADRES1	__at(0x1E*8+1);
volatile __bit	ADRES0	__at(0x1E*8+0);

/*	ADCON0 bits	*/
volatile __bit	ADCS1	__at(0x1F*8+7);
volatile __bit	ADCS0	__at(0x1F*8+6);
volatile __bit	CHS1	__at(0x1F*8+4);
volatile __bit	CHS0	__at(0x1F*8+3);
volatile __bit	GO_DONE	__at(0x1F*8+2);
volatile __bit	ADON	__at(0x1F*8+0);
#endif

/*	CMCON bits	*/
#if	defined(_16C432)
volatile __bit	C2OUT	__at(0x1F*8+7);
volatile __bit 	C1OUT	__at(0x1F*8+6);
volatile __bit	CIS	__at(0x1F*8+3);
volatile __bit	CM2	__at(0x1F*8+2);
volatile __bit	CM1	__at(0x1F*8+1);
volatile __bit	CM0	__at(0x1F*8+0);
#endif

/*	OPTION bits	*/
#if	defined(_16C432)
volatile __bit      	RBPU	__at(0x81*8+7);
#endif
#if	defined(_16C433)
volatile __bit      	GPPU	__at(0x81*8+7);
#endif
volatile __bit      	INTEDG	__at(0x81*8+6);
volatile __bit      	T0CS	__at(0x81*8+5);
volatile __bit      	T0SE	__at(0x81*8+4);
volatile __bit      	PSA	__at(0x81*8+3);
volatile __bit      	PS2	__at(0x81*8+2);
volatile __bit      	PS1	__at(0x81*8+1);
volatile __bit      	PS0	__at(0x81*8+0);

#if	defined(_16C432)
/*	TRISA	bits	*/
volatile __bit      	TRISA4	__at(0x85*8+4);
volatile __bit      	TRISA3	__at(0x85*8+3);
volatile __bit      	TRISA2	__at(0x85*8+2);
volatile __bit      	TLINRX	__at(0x85*8+1);
volatile __bit      	TRISA0	__at(0x85*8+0);

/*	TRISB bits 	*/
volatile __bit      	TRISB7	__at(0x86*8+4);
volatile __bit      	TRISB6	__at(0x86*8+4);
volatile __bit      	TRISB5	__at(0x86*8+4);
volatile __bit      	TRISB4	__at(0x86*8+4);
volatile __bit      	TRISB3	__at(0x86*8+4);
volatile __bit      	TRISB2	__at(0x86*8+4);
volatile __bit      	TRISB1	__at(0x86*8+4);
volatile __bit      	TRISB0	__at(0x86*8+4);
#endif

#if	defined(_16C433)
/*	TRIS bits	*/
volatile	__bit      	TRIS5	__at(0x85*8+5);
volatile	__bit      	TRIS4	__at(0x85*8+4);
volatile	__bit      	TRIS3	__at(0x85*8+3);
volatile	__bit      	TRIS2	__at(0x85*8+2);
volatile	__bit      	TRIS1	__at(0x85*8+1);
volatile	__bit      	TRIS0	__at(0x85*8+0);
#endif

/*	PIE1 bits	*/
#if	defined(_16C432)
volatile __bit      	CMIE	__at(0x8C*8+6);
#endif
#if	defined(_16C433)
volatile __bit      	ADIE	__at(0x8C*8+6);
#endif
	
/*	PCON bits	*/
volatile __bit      	POR	__at(0x8E*8+1);
#if	defined(_16C432)
volatile __bit      	BOD	__at(0x8E*8+0);
#endif

#if	defined(_16C432)
/*	LININTF bits	*/
volatile __bit      	LINTX	__at(0x90*8+1);
volatile __bit      	LINV 	__at(0x90*8+0);

/*	VRCON bits	*/
volatile __bit      	VREN	__at(0x9F*8+7);
volatile __bit      	VROE	__at(0x9F*8+6);
volatile __bit      	VRR	__at(0x9F*8+5);
volatile __bit      	VR3	__at(0x9F*8+3);
volatile __bit      	VR2	__at(0x9F*8+2);
volatile __bit      	VR1	__at(0x9F*8+1);
volatile __bit      	VR0	__at(0x9F*8+0);
#endif

#if 	defined(_16C433)
/*	OSCCAL bits	*/
volatile	__bit	     	CAL3	__at(0x8F*8+7);
volatile	__bit	     	CAL2	__at(0x8F*8+6);
volatile	__bit	     	CAL1	__at(0x8F*8+5);
volatile	__bit	     	CAL0	__at(0x8F*8+4);
volatile	__bit	     	CALFST	__at(0x8F*8+3);
volatile	__bit	     	CALSLW	__at(0x8F*8+2);

/*	ADCON1 bits	*/
volatile __bit      	PCFG2	__at(0x9F*8+2);
volatile __bit      	PCFG1	__at(0x9F*8+1);
volatile __bit      	PCFG0	__at(0x9F*8+0);
#endif

#define CONFIG_ADDR	0x2007

