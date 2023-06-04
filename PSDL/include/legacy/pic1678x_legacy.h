
#ifndef	_HTC_H_
#warning Header file pic1678x.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip
 *	PIC 16C781 chip
 *	PIC 16C782 chip
 */

//Special Function Registers
//Bank 0
volatile unsigned char INDF	__at(0x00);
volatile unsigned char TMR0	__at(0x01);
volatile unsigned char PCL	__at(0x02);
volatile unsigned char STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char PORTA	__at(0x05);
volatile unsigned char PORTB	__at(0x06);
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char INTCON	__at(0x0B);
volatile unsigned char PIR1	__at(0x0C);
volatile unsigned char TMR1L	__at(0x0E);
volatile unsigned char TMR1H	__at(0x0F);
volatile unsigned char T1CON	__at(0x10);
volatile unsigned char ADRES	__at(0x1E);
volatile unsigned char ADCON0	__at(0x1F);

//Bank 1
volatile	unsigned char	      OPTION	__at(0x81);
volatile	unsigned char	      TRISA	__at(0x85);
volatile	unsigned char	      TRISB	__at(0x86);
volatile	unsigned char	      PIE1	__at(0x8C);
volatile unsigned char       PCON	__at(0x8E);
volatile	unsigned char	      WPUB	__at(0x95);
volatile	unsigned char	      IOCB	__at(0x96);
volatile	unsigned char	      REFCON	__at(0x9B);
volatile unsigned char       LVDCON	__at(0x9C);
volatile	unsigned char	      ANSEL	__at(0x9D);
volatile	unsigned char	      ADCON1	__at(0x9F);

//Bank 2
volatile unsigned char       PMDATL	__at(0x10C);
volatile	unsigned char	      PMADRL	__at(0x10D);
volatile unsigned char       PMDATH	__at(0x10E);
volatile	unsigned char	      PMADRH	__at(0x10F);
volatile unsigned char       CALCON	__at(0x110);
volatile	unsigned char	      PSMCCON0	__at(0x111);
volatile	unsigned char	      PSMCCON1	__at(0x112);
volatile unsigned char       CM1CON0	__at(0x119);
volatile unsigned char       CM2CON0	__at(0x11A);
volatile unsigned char       CM2CON1	__at(0x11B);
volatile	unsigned char	      OPACON	__at(0x11C);
volatile unsigned char       DAC		__at(0x11E);
volatile	unsigned char	      DACON0	__at(0x11F);

//Bank 3
volatile unsigned char       PMCON1	__at(0x18C);

//Special Function Bits
/*	STATUS bits	*/
volatile __bit	IRP	__at(0x03*8+7);
volatile __bit	RP1	__at(0x03*8+6);
volatile __bit	RP0	__at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

/*	INTCON bits	*/
volatile __bit	GIE	__at(0x0B*8+7);
volatile	__bit	PEIE	__at(0x0B*8+6);
volatile	__bit	T0IE	__at(0x0B*8+5);
volatile	__bit	INTE	__at(0x0B*8+4);
volatile	__bit	RBIE	__at(0x0B*8+3);
volatile __bit	T0IF	__at(0x0B*8+2);
volatile __bit	INTF	__at(0x0B*8+1);
volatile __bit	RBIF	__at(0x0B*8+0);

//Bank 0
/*	PORTA bits	*/
volatile __bit	RA7	__at(0x05*8+7);
volatile __bit	RA6	__at(0x05*8+6);
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

/*	PIR1 bits	*/
volatile __bit	LVDIF	__at(0x0C*8+7);
volatile __bit	ADIF	__at(0x0C*8+6);
volatile __bit	C2IF	__at(0x0C*8+5);
volatile __bit	C1IF	__at(0x0C*8+4);
volatile __bit	TMR1IF	__at(0x0C*8+0);

/*	T1CON bits	*/
volatile	__bit	TMR1GE	__at(0x10*8+6);
volatile	__bit	T1CKPS1	__at(0x10*8+5);
volatile	__bit	T1CKPS0	__at(0x10*8+4);
volatile	__bit	T1OSCEN	__at(0x10*8+3);
volatile	__bit	T1SYNC 	__at(0x10*8+2);
volatile	__bit	TMR1CS 	__at(0x10*8+1);
volatile	__bit	TMR1ON 	__at(0x10*8+0);

/*	ADCON0 bits	*/
volatile	__bit	ADCS1 	__at(0x1F*8+7);
volatile	__bit	ADCS0 	__at(0x1F*8+6);
volatile	__bit	CHS2 	__at(0x1F*8+5);
volatile	__bit	CHS1 	__at(0x1F*8+4);
volatile	__bit	CHS0 	__at(0x1F*8+3);
volatile __bit	GODONE	__at(0x1F*8+2);
volatile	__bit	CHS3 	__at(0x1F*8+1);
volatile	__bit	ADON 	__at(0x1F*8+0);

// Bank 1
/* 	OPTION bits	*/
volatile	__bit	RBPU	__at(0x81*8+7);
volatile	__bit	INTEDG	__at(0x81*8+6);
volatile	__bit	T0CS	__at(0x81*8+5);
volatile	__bit	T0SE	__at(0x81*8+4);
volatile	__bit	PSA	__at(0x81*8+3);
volatile	__bit	PS2	__at(0x81*8+2);
volatile	__bit	PS1	__at(0x81*8+1);
volatile	__bit	PS0	__at(0x81*8+0);

/*	TRISA bits	*/
volatile	__bit	TRISA7	__at(0x85*8+7);
volatile	__bit	TRISA6	__at(0x85*8+6);
volatile	__bit	TRISA5	__at(0x85*8+5);
volatile	__bit	TRISA4	__at(0x85*8+4);
volatile	__bit	TRISA3	__at(0x85*8+3);
volatile	__bit	TRISA2	__at(0x85*8+2);
volatile	__bit	TRISA1	__at(0x85*8+1);
volatile	__bit	TRISA0	__at(0x85*8+0);

/*	TRISB bits	*/
volatile	__bit	TRISB7	__at(0x86*8+7);
volatile	__bit	TRISB6	__at(0x86*8+6);
volatile	__bit	TRISB5	__at(0x86*8+5);
volatile	__bit	TRISB4	__at(0x86*8+4);
volatile	__bit	TRISB3	__at(0x86*8+3);
volatile	__bit	TRISB2	__at(0x86*8+2);
volatile	__bit	TRISB1	__at(0x86*8+1);
volatile	__bit	TRISB0	__at(0x86*8+0);

/*	PIE1 bits	*/
volatile	__bit	LVDIE	__at(0x8C*8+7);
volatile	__bit	ADIE	__at(0x8C*8+6);
volatile	__bit	C2IE	__at(0x8C*8+5);
volatile	__bit	C1IE	__at(0x8C*8+4);
volatile	__bit	TMR1IE	__at(0x8C*8+0);

/*	PCON bits	*/
volatile       __bit	WDTCON	__at(0x8E*8+4);	
volatile	__bit	OSCF	__at(0x8E*8+3);	
volatile       __bit	POR	__at(0x8E*8+1);	
volatile       __bit	BOR	__at(0x8E*8+0);

/*	REFCON bits	*/
volatile	__bit	VREN	__at(0x9B*8+3);
volatile	__bit	VROE	__at(0x9B*8+2);

/*	LVDCON bits	*/
volatile       __bit	BGST	__at(0x9C*8+5);
volatile	__bit	LVDEN	__at(0x9C*8+4);
volatile	__bit	LV3	__at(0x9C*8+3);
volatile	__bit	LV2	__at(0x9C*8+2);
volatile	__bit	LV1	__at(0x9C*8+1);
volatile	__bit	LV0	__at(0x9C*8+0);

/*	ADCON1 bits	*/
volatile	__bit	VCFG1	__at(0x9F*8+5);
volatile	__bit	VCFG0	__at(0x9F*8+4);

// BANK 2
/*	PMDATL Bits	*/
volatile       __bit	PMD7	__at(0x10C*8+7);
volatile       __bit	PMD6	__at(0x10C*8+6);
volatile       __bit	PMD5	__at(0x10C*8+5);
volatile       __bit	PMD4	__at(0x10C*8+4);
volatile       __bit	PMD3	__at(0x10C*8+3);
volatile       __bit	PMD2	__at(0x10C*8+2);
volatile       __bit	PMD1	__at(0x10C*8+1);
volatile       __bit	PMD0	__at(0x10C*8+0);

/*	PMADRL Bits	*/
volatile	__bit	PMA7	__at(0x10D*8+7);
volatile	__bit	PMA6	__at(0x10D*8+6);
volatile	__bit	PMA5	__at(0x10D*8+5);
volatile	__bit	PMA4	__at(0x10D*8+4);
volatile	__bit	PMA3	__at(0x10D*8+3);
volatile	__bit	PMA2	__at(0x10D*8+2);
volatile	__bit	PMA1	__at(0x10D*8+1);
volatile	__bit	PMA0	__at(0x10D*8+0);

/*	PMDATH Bits	*/
volatile       __bit	PMD13	__at(0x10E*8+5);
volatile       __bit	PMD12	__at(0x10E*8+4);
volatile       __bit	PMD11	__at(0x10E*8+3);
volatile       __bit	PMD10	__at(0x10E*8+2);
volatile       __bit	PMD9	__at(0x10E*8+1);
volatile       __bit	PMD8	__at(0x10E*8+0);

/*	PMADRH Bits	*/
volatile	__bit	PMA10	__at(0x10F*8+2);
volatile	__bit	PMA9	__at(0x10F*8+1);
volatile	__bit	PMA8	__at(0x10F*8+0);

/*	CALCON Bits	*/
volatile       __bit	CAL	__at(0x110*8+7);
volatile       __bit	CALERR	__at(0x110*8+6);
volatile	__bit	CALREF	__at(0x110*8+5);

/*	PSMCCON0	*/
volatile	__bit	SMCCL1	__at(0x111*8+7);
volatile	__bit	SMCCL0	__at(0x111*8+6);
volatile	__bit	MINDC1	__at(0x111*8+5);
volatile	__bit	MINDC0	__at(0x111*8+4);
volatile	__bit	MAXDC1	__at(0x111*8+3);
volatile	__bit	MAXDC0	__at(0x111*8+2);
volatile	__bit	DC1	__at(0x111*8+1);
volatile	__bit	DC0	__at(0x111*8+0);

/*	PSMCCON1	*/
volatile	__bit	SMCON	__at(0x112*8+7);
volatile	__bit	S1APOL	__at(0x112*8+6);
volatile	__bit	S1BPOL	__at(0x112*8+5);
volatile	__bit	SCEN	__at(0x112*8+3);
volatile	__bit	SMCOM	__at(0x112*8+2);
volatile	__bit	PWMPSM	__at(0x112*8+1);
volatile	__bit	SMCCS	__at(0x112*8+0);

/*	CM1CON0	Bits	*/
volatile	__bit	C1ON	__at(0x119*8+7);
volatile       __bit	C1OUT	__at(0x119*8+6);
volatile	__bit	C1OE	__at(0x119*8+5);
volatile	__bit	C1POL	__at(0x119*8+4);
volatile	__bit	C1SP	__at(0x119*8+3);
volatile	__bit	C1R	__at(0x119*8+2);
volatile	__bit	C1CH1	__at(0x119*8+1);
volatile	__bit	C1CH0	__at(0x119*8+0);

/*	CM2CON0	Bits	*/
volatile	__bit	C2ON	__at(0x11A*8+7);
volatile       __bit	C2OUT	__at(0x11A*8+6);
volatile	__bit	C2OE	__at(0x11A*8+5);
volatile	__bit	C2POL	__at(0x11A*8+4);
volatile	__bit	C2SP	__at(0x11A*8+3);
volatile	__bit	C2R	__at(0x11A*8+2);
volatile	__bit	C2CH1	__at(0x11A*8+1);
volatile	__bit	C2CH0	__at(0x11A*8+0);

/*	CM2CON1	Bits	*/
volatile       __bit	MC1OUT	__at(0x11B*8+7);
volatile       __bit	MC2OUT	__at(0x11B*8+6);
volatile	__bit	C2SYNC	__at(0x11B*8+0);

/*	OPACON	Bits	*/
volatile	__bit	OPAON	__at(0x11C*8+7);
volatile	__bit	CMPEN	__at(0x11C*8+6);
volatile	__bit	GBWP	__at(0x11C*8+0);

/*	DAC Bits	*/
volatile       __bit	DA7	__at(0x11E*8+7);
volatile       __bit	DA6	__at(0x11E*8+6);
volatile       __bit	DA5	__at(0x11E*8+5);
volatile       __bit	DA4	__at(0x11E*8+4);
volatile       __bit	DA3	__at(0x11E*8+3);
volatile       __bit	DA2	__at(0x11E*8+2);
volatile       __bit	DA1	__at(0x11E*8+1);
volatile       __bit	DA0	__at(0x11E*8+0);

/*	DACON0 Bits	*/
volatile	__bit	DAON	__at(0x11F*8+7);
volatile	__bit	DAOE	__at(0x11F*8+6);
volatile	__bit	DARS1	__at(0x11F*8+1);
volatile	__bit	DARS0	__at(0x11F*8+0);

// Bank 3
/*	PMCON1 bits	*/
volatile       __bit	RD	__at(0x18C*8+0);


// definitions select memory reading macros in pic.h
#define EECON1	PMCON1
#define EEDATA	PMDATL
#define EEDATH	PMDATH
#define EEADRL	PMADRL
#define EEADRH	PMADRH


//Configurations
#define CONFIG_ADDR	0x2007

