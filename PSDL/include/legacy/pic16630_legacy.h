
#ifndef	_HTC_H_
#warning Header file pic16630.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
  * PIC16F630
  * PIC16F676
 */

#ifndef	__PIC16630_H
#define	__PIC16630_H

// Special function register definitions

volatile       unsigned char	INDF		__at(0x00);
volatile       unsigned char	TMR0		__at(0x01);
volatile       unsigned char	PCL		__at(0x02);
volatile       unsigned char	STATUS		__at(0x03);
volatile	unsigned char	FSR		__at(0x04);
volatile       unsigned char	PORTA		__at(0x05);
volatile       unsigned char	PORTC		__at(0x07);
volatile       unsigned char	PCLATH		__at(0x0A);
volatile       unsigned char	INTCON		__at(0x0B);
volatile       unsigned char	PIR1		__at(0x0C);
volatile       unsigned char	TMR1L		__at(0x0E);
volatile       unsigned char	TMR1H		__at(0x0F);
volatile       unsigned char	T1CON		__at(0x10);
volatile       unsigned char	CMCON		__at(0x19);
#if defined(_16F676)
volatile       unsigned char	ADRESH		__at(0x1E);
volatile       unsigned char	ADCON0		__at(0x1F);
#endif
volatile	unsigned char	OPTION		__at(0x81);
volatile       unsigned char	TRISA		__at(0x85);
volatile       unsigned char	TRISC		__at(0x87);
volatile	unsigned char	PIE1		__at(0x8C);
volatile       unsigned char	PCON		__at(0x8E);
volatile	unsigned char	OSCCAL		__at(0x90);
#if defined(_16F676)
volatile	unsigned char	ANSEL		__at(0x91);
#endif
volatile	unsigned char	WPUA		__at(0x95);
volatile	unsigned char	IOCA		__at(0x96);
volatile	unsigned char	VRCON		__at(0x99);
volatile       unsigned char	EEDAT		__at(0x9A);
// alternate definition
volatile       unsigned char	EEDATA		__at(0x9A);
volatile       unsigned char	EEADR		__at(0x9B);
volatile       unsigned char	EECON1		__at(0x9C);
volatile       unsigned char	EECON2		__at(0x9D);
#if defined(_16F676)
volatile       unsigned char	ADRESL		__at(0x9E);
volatile	unsigned char	ADCON1		__at(0x9F);
#endif


/* Definitions for STATUS register */
volatile       __bit	CARRY	__at((0x03*8)+0);
volatile       __bit	DC	__at((0x03*8)+1);
volatile       __bit	ZERO	__at((0x03*8)+2);
volatile       __bit	PD	__at((0x03*8)+3);
volatile       __bit	TO	__at((0x03*8)+4);
volatile	__bit	RP0	__at((0x03*8)+5);

/* Definitions for PORTA register */
volatile       __bit	RA0	__at((0x05*8)+0);
volatile       __bit	RA1	__at((0x05*8)+1);
volatile       __bit	RA2	__at((0x05*8)+2);
volatile       __bit	RA3	__at((0x05*8)+3);
volatile       __bit	RA4	__at((0x05*8)+4);
volatile       __bit	RA5	__at((0x05*8)+5);

/* Definitions for PORTC register */
volatile       __bit	RC0	__at((0x07*8)+0);
volatile       __bit	RC1	__at((0x07*8)+1);
volatile       __bit	RC2	__at((0x07*8)+2);
volatile       __bit	RC3	__at((0x07*8)+3);
volatile       __bit	RC4	__at((0x07*8)+4);
volatile       __bit	RC5	__at((0x07*8)+5);

/* Definitions for INTCON register */
volatile       __bit	RAIF	__at((0x0B*8)+0);
volatile       __bit	INTF	__at((0x0B*8)+1);
volatile       __bit	T0IF	__at((0x0B*8)+2);
volatile	__bit	RAIE	__at((0x0B*8)+3);
volatile	__bit	INTE	__at((0x0B*8)+4);
volatile	__bit	T0IE	__at((0x0B*8)+5);
volatile	__bit	PEIE	__at((0x0B*8)+6);
volatile __bit	GIE	__at((0x0B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF	__at((0x0C*8)+0);
volatile       __bit	CMIF	__at((0x0C*8)+3);
#if defined(_16F676)
volatile       __bit	ADIF	__at((0x0C*8)+6);
#endif
volatile       __bit	EEIF	__at((0x0C*8)+7);

/* Definitions for T1CON register */
volatile	__bit	TMR1ON	__at((0x10*8)+0);
volatile	__bit	TMR1CS	__at((0x10*8)+1);
volatile	__bit	T1SYNC	__at((0x10*8)+2);
volatile	__bit	T1OSCEN	__at((0x10*8)+3);
volatile	__bit	T1CKPS0	__at((0x10*8)+4);
volatile	__bit	T1CKPS1	__at((0x10*8)+5);
volatile	__bit	T1GE	__at((0x10*8)+6);
// alternate definition
volatile	__bit	TMR1GE	__at((0x10*8)+6);

/* Definitions for CMCON register */
volatile	__bit	CM0	__at((0x19*8)+0);
volatile	__bit	CM1	__at((0x19*8)+1);
volatile	__bit	CM2	__at((0x19*8)+2);
volatile	__bit	CIS	__at((0x19*8)+3);
volatile	__bit	CINV	__at((0x19*8)+4);
volatile       __bit	COUT	__at((0x19*8)+6);

#if defined(_16F676)
/* Definitions for ADCON0 register */
volatile	__bit	ADON	__at((0x1F*8)+0);
volatile       __bit	GODONE	__at((0x1F*8)+1);
volatile	__bit	CHS0	__at((0x1F*8)+2);
volatile	__bit	CHS1	__at((0x1F*8)+3);
volatile	__bit	CHS2	__at((0x1F*8)+4);
volatile	__bit	VCFG	__at((0x1F*8)+6);
volatile	__bit	ADFM	__at((0x1F*8)+7);
#endif

/* Definitions for OPTION register */
volatile	__bit	PS0	__at((0x81*8)+0);
volatile	__bit	PS1	__at((0x81*8)+1);
volatile	__bit	PS2	__at((0x81*8)+2);
volatile	__bit	PSA	__at((0x81*8)+3);
volatile	__bit	T0SE	__at((0x81*8)+4);
volatile	__bit	T0CS	__at((0x81*8)+5);
volatile	__bit	INTEDG	__at((0x81*8)+6);
volatile	__bit	RAPU	__at((0x81*8)+7);

/* Definitions for TRISA register */
volatile       __bit	TRISA0	__at((0x85*8)+0);
volatile       __bit	TRISA1	__at((0x85*8)+1);
volatile       __bit	TRISA2	__at((0x85*8)+2);
volatile       __bit	TRISA3	__at((0x85*8)+3);
volatile       __bit	TRISA4	__at((0x85*8)+4);
volatile       __bit	TRISA5	__at((0x85*8)+5);

/* Definitions for TRISC register */
volatile       __bit	TRISC0	__at((0x87*8)+0);
volatile       __bit	TRISC1	__at((0x87*8)+1);
volatile       __bit	TRISC2	__at((0x87*8)+2);
volatile       __bit	TRISC3	__at((0x87*8)+3);
volatile       __bit	TRISC4	__at((0x87*8)+4);
volatile       __bit	TRISC5	__at((0x87*8)+5);

/* Definitions for PIE1 register */
volatile	__bit	TMR1IE	__at((0x8C*8)+0);
volatile	__bit	CMIE	__at((0x8C*8)+3);
#if defined(_16F676)
volatile	__bit	ADIE	__at((0x8C*8)+6);
#endif
volatile	__bit	EEIE	__at((0x8C*8)+7);

/* Definitions for PCON register */
volatile       __bit	BOR	__at((0x8E*8)+0);
volatile       __bit	POR	__at((0x8E*8)+1);

/* Definitions for OSCCAL register */
volatile	__bit	CAL0	__at((0x90*8)+2);
volatile	__bit	CAL1	__at((0x90*8)+3);
volatile	__bit	CAL2	__at((0x90*8)+4);
volatile	__bit	CAL3	__at((0x90*8)+5);
volatile	__bit	CAL4	__at((0x90*8)+6);
volatile	__bit	CAL5	__at((0x90*8)+7);

#if defined(_16F676)
/* Definitions for ANSEL register */
volatile	__bit	ANS0	__at((0x91*8)+0);
volatile	__bit	ANS1	__at((0x91*8)+1);
volatile	__bit	ANS2	__at((0x91*8)+2);
volatile	__bit	ANS3	__at((0x91*8)+3);
volatile	__bit	ANS4	__at((0x91*8)+4);
volatile	__bit	ANS5	__at((0x91*8)+5);
volatile	__bit	ANS6	__at((0x91*8)+6);
volatile	__bit	ANS7	__at((0x91*8)+7);
#endif

/* Definitions for WPUA register */
volatile	__bit	WPUA0	__at((0x95*8)+0);
volatile	__bit	WPUA1	__at((0x95*8)+1);
volatile	__bit	WPUA2	__at((0x95*8)+2);
volatile	__bit	WPUA4	__at((0x95*8)+4);
volatile	__bit	WPUA5	__at((0x95*8)+5);

/* Definitions for IOCA register */
volatile	__bit	IOCA0	__at((0x96*8)+0);
volatile	__bit	IOCA1	__at((0x96*8)+1);
volatile	__bit	IOCA2	__at((0x96*8)+2);
volatile	__bit	IOCA3	__at((0x96*8)+3);
volatile	__bit	IOCA4	__at((0x96*8)+4);
volatile	__bit	IOCA5	__at((0x96*8)+5);

/* Definitions for VRCON register */
volatile	__bit	VR0	__at((0x99*8)+0);
volatile	__bit	VR1	__at((0x99*8)+1);
volatile	__bit	VR2	__at((0x99*8)+2);
volatile	__bit	VR3	__at((0x99*8)+3);
volatile	__bit	VRR	__at((0x99*8)+5);
volatile	__bit	VREN	__at((0x99*8)+7);

/* Definitions for EECON1 register */
volatile       __bit	RD	__at((0x9C*8)+0);
volatile       __bit	WR	__at((0x9C*8)+1);
volatile       __bit	WREN	__at((0x9C*8)+2);
volatile       __bit	WRERR	__at((0x9C*8)+3);

#if defined(_16F676)
/* Definitions for ADCON1 register */
volatile	__bit	ADCS0	__at((0x9F*8)+4);
volatile	__bit	ADCS1	__at((0x9F*8)+5);
volatile	__bit	ADCS2	__at((0x9F*8)+6);
#endif

extern unsigned char __osccal_val(void);
#define	_READ_OSCCAL_DATA()	__osccal_val()


#define CONFIG_ADDR	0x2007

/*
 * Definitions for library compatibility
 */
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned RP                     :2;
        unsigned IRP                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned RP0                    :1;
        unsigned RP1                    :1;
    };
    struct {
        unsigned CARRY                  :1;
        unsigned                        :1;
        unsigned ZERO                   :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __at(0x003);
typedef union {
    struct {
        unsigned RAIF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned RAIE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned TMR0IF                 :1;
        unsigned                        :2;
        unsigned TMR0IE                 :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x09C);

#endif
