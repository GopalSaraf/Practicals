
#ifndef	_HTC_H_
#warning Header file pic16f684.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontroller
  * PIC16F684
 */

#ifndef	__PIC16F684_H
#define	__PIC16F684_H

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
volatile       unsigned char	TMR2		__at(0x11);
volatile       unsigned char	T2CON		__at(0x12);
volatile       unsigned char	CCPR1L		__at(0x13);
volatile       unsigned char	CCPR1H		__at(0x14);
volatile       unsigned char	CCP1CON		__at(0x15);
volatile       unsigned char	PWM1CON		__at(0x16);
volatile       unsigned char	ECCPAS		__at(0x17);
volatile       unsigned char	WDTCON		__at(0x18);
volatile       unsigned char	CMCON0		__at(0x19);
volatile	unsigned char	CMCON1		__at(0x1A);
volatile       unsigned char	ADRESH		__at(0x1E);
volatile       unsigned char	ADCON0		__at(0x1F);
volatile	unsigned char	OPTION		__at(0x81);
volatile       unsigned char	TRISA		__at(0x85);
volatile       unsigned char	TRISC		__at(0x87);
volatile	unsigned char	PIE1		__at(0x8C);
volatile       unsigned char	PCON		__at(0x8E);
volatile       unsigned char	OSCCON		__at(0x8F);
volatile	unsigned char	OSCTUNE		__at(0x90);
volatile	unsigned char	ANSEL		__at(0x91);
volatile	unsigned char	PR2		__at(0x92);
volatile	unsigned char	WPUA		__at(0x95);
volatile	unsigned char	IOCA		__at(0x96);
volatile	unsigned char	VRCON		__at(0x99);
volatile       unsigned char	EEDAT		__at(0x9A);
/* Alternate definition */
volatile       unsigned char	EEDATA		__at(0x9A);
volatile       unsigned char	EEADR		__at(0x9B);
/* Alternate definition */
volatile       unsigned char	EEADRL		__at(0x9B);
volatile       unsigned char	EECON1		__at(0x9C);
volatile       unsigned char	EECON2		__at(0x9D);
volatile       unsigned char	ADRESL		__at(0x9E);
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
volatile       __bit	RA5		__at((0x05*8)+5);

/* Definitions for PORTC register */
volatile       __bit	RC0		__at((0x07*8)+0);
volatile       __bit	RC1		__at((0x07*8)+1);
volatile       __bit	RC2		__at((0x07*8)+2);
volatile       __bit	RC3		__at((0x07*8)+3);
volatile       __bit	RC4		__at((0x07*8)+4);
volatile       __bit	RC5		__at((0x07*8)+5);

/* Definitions for INTCON register */
volatile       __bit	RAIF		__at((0x0B*8)+0);
volatile       __bit	INTF		__at((0x0B*8)+1);
volatile       __bit	T0IF		__at((0x0B*8)+2);
volatile	__bit	RAIE		__at((0x0B*8)+3);
volatile	__bit	INTE		__at((0x0B*8)+4);
volatile	__bit	T0IE		__at((0x0B*8)+5);
volatile	__bit	PEIE		__at((0x0B*8)+6);
volatile __bit	GIE		__at((0x0B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF		__at((0x0C*8)+0);
volatile       __bit	TMR2IF		__at((0x0C*8)+1);
volatile       __bit	OSFIF		__at((0x0C*8)+2);
volatile       __bit	C1IF		__at((0x0C*8)+3);
volatile       __bit	C2IF		__at((0x0C*8)+4);
volatile       __bit	CCP1IF		__at((0x0C*8)+5);
volatile       __bit	ADIF		__at((0x0C*8)+6);
volatile       __bit	EEIF		__at((0x0C*8)+7);

/* Definitions for T1CON register */
volatile	__bit	TMR1ON		__at((0x10*8)+0);
volatile	__bit	TMR1CS		__at((0x10*8)+1);
volatile	__bit	T1SYNC		__at((0x10*8)+2);
volatile	__bit	T1OSCEN		__at((0x10*8)+3);
volatile	__bit	T1CKPS0		__at((0x10*8)+4);
volatile	__bit	T1CKPS1		__at((0x10*8)+5);
volatile	__bit	T1GE		__at((0x10*8)+6);
volatile	__bit	TMR1GE		__at((0x10*8)+6);
volatile	__bit	T1GINV		__at((0x10*8)+7);

/* Definitions for T2CON register */
volatile	__bit	T2CKPS0		__at((0x12*8)+0);
volatile	__bit	T2CKPS1		__at((0x12*8)+1);
volatile	__bit	TMR2ON		__at((0x12*8)+2);
volatile	__bit	TOUTPS0		__at((0x12*8)+3);
volatile	__bit	TOUTPS1		__at((0x12*8)+4);
volatile	__bit	TOUTPS2		__at((0x12*8)+5);
volatile	__bit	TOUTPS3		__at((0x12*8)+6);

/* Definitions for CCP1CON register */
volatile	__bit	CCP1M0		__at((0x15*8)+0);
volatile	__bit	CCP1M1		__at((0x15*8)+1);
volatile	__bit	CCP1M2		__at((0x15*8)+2);
volatile	__bit	CCP1M3		__at((0x15*8)+3);
volatile	__bit	DC1B0		__at((0x15*8)+4);
volatile	__bit	DC1B1		__at((0x15*8)+5);
volatile	__bit	P1M0		__at((0x15*8)+6);
volatile	__bit	P1M1		__at((0x15*8)+7);

/* Definitions for PWM1CON register */
volatile       __bit	PDC0		__at((0x16*8)+0);
volatile       __bit	PDC1		__at((0x16*8)+1);
volatile       __bit	PDC2		__at((0x16*8)+2);
volatile       __bit	PDC3		__at((0x16*8)+3);
volatile       __bit	PDC4		__at((0x16*8)+4);
volatile       __bit	PDC5		__at((0x16*8)+5);
volatile       __bit	PDC6		__at((0x16*8)+6);
volatile       __bit	PRSEN		__at((0x16*8)+7);

/* Definitions for ECCPAS register */
volatile	__bit	PSSBD0		__at((0x17*8)+0);
volatile	__bit	PSSBD1		__at((0x17*8)+1);
volatile	__bit	PSSAC0		__at((0x17*8)+2);
volatile	__bit	PSSAC1		__at((0x17*8)+3);
volatile	__bit	ECCPAS0		__at((0x17*8)+4);
volatile	__bit	ECCPAS1		__at((0x17*8)+5);
volatile	__bit	ECCPAS2		__at((0x17*8)+6);
volatile       __bit	ECCPASE		__at((0x17*8)+7);

/* Definitions for WDTCON register */
volatile	__bit	SWDTEN		__at((0x18*8)+0);
volatile	__bit	WDTPS0		__at((0x18*8)+1);
volatile	__bit	WDTPS1		__at((0x18*8)+2);
volatile	__bit	WDTPS2		__at((0x18*8)+3);
volatile	__bit	WDTPS3		__at((0x18*8)+4);

/* Definitions for CMCON0 register */
volatile	__bit	CM0		__at((0x19*8)+0);
volatile	__bit	CM1		__at((0x19*8)+1);
volatile	__bit	CM2		__at((0x19*8)+2);
volatile	__bit	CIS		__at((0x19*8)+3);
volatile	__bit	C1INV		__at((0x19*8)+4);
volatile	__bit	C2INV		__at((0x19*8)+5);
volatile       __bit	C1OUT		__at((0x19*8)+6);
volatile       __bit	C2OUT		__at((0x19*8)+7);

/* Definitions for CMCON1 register */
volatile	__bit	C2SYNC		__at((0x1A*8)+0);
volatile	__bit	T1GSS		__at((0x1A*8)+1);

/* Definitions for ADCON0 register */
volatile	__bit	ADON		__at((0x1F*8)+0);
volatile       __bit	GODONE		__at((0x1F*8)+1);
volatile	__bit	CHS0		__at((0x1F*8)+2);
volatile	__bit	CHS1		__at((0x1F*8)+3);
volatile	__bit	CHS2		__at((0x1F*8)+4);
volatile	__bit	VCFG		__at((0x1F*8)+6);
volatile	__bit	ADFM		__at((0x1F*8)+7);

/* Definitions for OPTION register */
volatile	__bit	PS0		__at((0x81*8)+0);
volatile	__bit	PS1		__at((0x81*8)+1);
volatile	__bit	PS2		__at((0x81*8)+2);
volatile	__bit	PSA		__at((0x81*8)+3);
volatile	__bit	T0SE		__at((0x81*8)+4);
volatile	__bit	T0CS		__at((0x81*8)+5);
volatile	__bit	INTEDG		__at((0x81*8)+6);
volatile	__bit	RAPU		__at((0x81*8)+7);

/* Definitions for TRISA register */
volatile       __bit	TRISA0		__at((0x85*8)+0);
volatile       __bit	TRISA1		__at((0x85*8)+1);
volatile       __bit	TRISA2		__at((0x85*8)+2);
volatile       __bit	TRISA3		__at((0x85*8)+3);
volatile       __bit	TRISA4		__at((0x85*8)+4);
volatile       __bit	TRISA5		__at((0x85*8)+5);

/* Definitions for TRISC register */
volatile       __bit	TRISC0		__at((0x87*8)+0);
volatile       __bit	TRISC1		__at((0x87*8)+1);
volatile       __bit	TRISC2		__at((0x87*8)+2);
volatile       __bit	TRISC3		__at((0x87*8)+3);
volatile       __bit	TRISC4		__at((0x87*8)+4);
volatile       __bit	TRISC5		__at((0x87*8)+5);

/* Definitions for PIE1 register */
volatile	__bit	TMR1IE		__at((0x8C*8)+0);
volatile	__bit	TMR2IE		__at((0x8C*8)+1);
volatile	__bit	OSFIE		__at((0x8C*8)+2);
volatile	__bit	C1IE		__at((0x8C*8)+3);
volatile	__bit	C2IE		__at((0x8C*8)+4);
volatile	__bit	CCP1IE		__at((0x8C*8)+5);
volatile	__bit	ADIE		__at((0x8C*8)+6);
volatile	__bit	EEIE		__at((0x8C*8)+7);

/* Definitions for PCON register */
volatile       __bit	BOD		__at((0x8E*8)+0);
volatile       __bit	POR		__at((0x8E*8)+1);
volatile	__bit	SBODEN		__at((0x8E*8)+4);
volatile	__bit	ULPWUE		__at((0x8E*8)+5);

/* Definitions for OSCCON register */
volatile	__bit	SCS		__at((0x8F*8)+0);
volatile       __bit	LTS		__at((0x8F*8)+1);
volatile       __bit	HTS		__at((0x8F*8)+2);
volatile       __bit	OSTS		__at((0x8F*8)+3);
volatile	__bit	IRCF0		__at((0x8F*8)+4);
volatile	__bit	IRCF1		__at((0x8F*8)+5);
volatile	__bit	IRCF2		__at((0x8F*8)+6);

/* Definitions for OSCTUNE register */
volatile	__bit	TUN0		__at((0x90*8)+0);
volatile	__bit	TUN1		__at((0x90*8)+1);
volatile	__bit	TUN2		__at((0x90*8)+2);
volatile	__bit	TUN3		__at((0x90*8)+3);
volatile	__bit	TUN4		__at((0x90*8)+4);

/* Definitions for ANSEL register */
volatile	__bit	ANS0		__at((0x91*8)+0);
volatile	__bit	ANS1		__at((0x91*8)+1);
volatile	__bit	ANS2		__at((0x91*8)+2);
volatile	__bit	ANS3		__at((0x91*8)+3);
volatile	__bit	ANS4		__at((0x91*8)+4);
volatile	__bit	ANS5		__at((0x91*8)+5);
volatile	__bit	ANS6		__at((0x91*8)+6);
volatile	__bit	ANS7		__at((0x91*8)+7);

/* Definitions for WPUA register */
volatile	__bit	WPUA0		__at((0x95*8)+0);
volatile	__bit	WPUA1		__at((0x95*8)+1);
volatile	__bit	WPUA2		__at((0x95*8)+2);
volatile	__bit	WPUA4		__at((0x95*8)+4);
volatile	__bit	WPUA5		__at((0x95*8)+5);

/* Definitions for IOCA register */
volatile	__bit	IOCA0		__at((0x96*8)+0);
volatile	__bit	IOCA1		__at((0x96*8)+1);
volatile	__bit	IOCA2		__at((0x96*8)+2);
volatile	__bit	IOCA3		__at((0x96*8)+3);
volatile	__bit	IOCA4		__at((0x96*8)+4);
volatile	__bit	IOCA5		__at((0x96*8)+5);

/* Definitions for VRCON register */
volatile	__bit	VR0		__at((0x99*8)+0);
volatile	__bit	VR1		__at((0x99*8)+1);
volatile	__bit	VR2		__at((0x99*8)+2);
volatile	__bit	VR3		__at((0x99*8)+3);
volatile	__bit	VRR		__at((0x99*8)+5);
volatile	__bit	VREN		__at((0x99*8)+7);

/* Definitions for EECON1 register */
volatile       __bit	RD		__at((0x9C*8)+0);
volatile       __bit	WR		__at((0x9C*8)+1);
volatile       __bit	WREN		__at((0x9C*8)+2);
volatile       __bit	WRERR		__at((0x9C*8)+3);

/* Definitions for ADCON1 register */
volatile	__bit	ADCS0		__at((0x9F*8)+4);
volatile	__bit	ADCS1		__at((0x9F*8)+5);
volatile	__bit	ADCS2		__at((0x9F*8)+6);

					
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
