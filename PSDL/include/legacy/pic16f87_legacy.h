
#ifndef	_HTC_H_
#warning Header file pic16f87.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontrollers
	PIC16F87
	PIC16F88
 */

#ifndef	__PIC16F87_H
#define	__PIC16F87_H

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
volatile       unsigned char	PIR2		__at(0x0D);
volatile       unsigned char	TMR1L		__at(0x0E);
volatile       unsigned char	TMR1H		__at(0x0F);
volatile       unsigned char	T1CON		__at(0x10);
volatile       unsigned char	TMR2		__at(0x11);
volatile       unsigned char	T2CON		__at(0x12);
volatile       unsigned char	SSPBUF		__at(0x13);
volatile       unsigned char	SSPCON		__at(0x14);
volatile       unsigned char	CCPR1L		__at(0x15);
volatile       unsigned char	CCPR1H		__at(0x16);
volatile       unsigned char	CCP1CON		__at(0x17);
volatile       unsigned char	RCSTA		__at(0x18);
volatile       unsigned char	TXREG		__at(0x19);
volatile       unsigned char	RCREG		__at(0x1A);
#if defined(_16F88)
volatile       unsigned char	ADRESH		__at(0x1E);
volatile       unsigned char	ADCON0		__at(0x1F);
#endif
volatile	unsigned char	OPTION		__at(0x81);
volatile       unsigned char	TRISA		__at(0x85);
volatile       unsigned char	TRISB		__at(0x86);
volatile	unsigned char	PIE1		__at(0x8C);
volatile	unsigned char	PIE2		__at(0x8D);
volatile       unsigned char	PCON		__at(0x8E);
volatile       unsigned char	OSCCON		__at(0x8F);
volatile       unsigned char	OSCTUNE		__at(0x90);
volatile       unsigned char	PR2			__at(0x92);
volatile       unsigned char	SSPADD		__at(0x93);
volatile       unsigned char	SSPSTAT		__at(0x94);
volatile       unsigned char	TXSTA		__at(0x98);
volatile	unsigned char	SPBRG		__at(0x99);
#if defined(_16F88)
volatile	unsigned char	ANSEL		__at(0x9B);
#endif
volatile       unsigned char	CMCON		__at(0x9C);
volatile       unsigned char	CVRCON		__at(0x9D);
#if defined(_16F88)
volatile       unsigned char	ADRESL		__at(0x9E);
volatile       unsigned char	ADCON1		__at(0x9F);
#endif
volatile       unsigned char	WDTCON		__at(0x105);
volatile       unsigned char	EEDATA		__at(0x10C);
// Alternate definition
volatile       unsigned char	EEDAT		__at(0x10C);
volatile       unsigned char	EEADR		__at(0x10D);
// Alternate definition
volatile       unsigned char	EEADRL		__at(0x10D);
volatile       unsigned char	EEDATH		__at(0x10E);
volatile       unsigned char	EEADRH		__at(0x10F);
volatile       unsigned char	EECON1		__at(0x18C);
volatile       unsigned char	EECON2		__at(0x18D);


/* Definitions for STATUS register */
volatile       __bit	CARRY		__at((0x03*8)+0);
volatile       __bit	DC		__at((0x03*8)+1);
volatile       __bit	ZERO		__at((0x03*8)+2);
volatile       __bit	PD		__at((0x03*8)+3);
volatile       __bit	TO		__at((0x03*8)+4);
volatile       __bit	RP0		__at((0x03*8)+5);
volatile       __bit	RP1		__at((0x03*8)+6);
volatile       __bit	IRP		__at((0x03*8)+7);

/* Definitions for PORTA register */
volatile       __bit	RA0		__at((0x05*8)+0);
volatile       __bit	RA1		__at((0x05*8)+1);
volatile       __bit	RA2		__at((0x05*8)+2);
volatile       __bit	RA3		__at((0x05*8)+3);
volatile       __bit	RA4		__at((0x05*8)+4);
volatile       __bit	RA5		__at((0x05*8)+5);
volatile       __bit	RA6		__at((0x05*8)+6);
volatile       __bit	RA7		__at((0x05*8)+7);

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
volatile       __bit	INT0IF		__at((0x0B*8)+1);
volatile       __bit	TMR0IF		__at((0x0B*8)+2);
volatile       __bit	RBIE		__at((0x0B*8)+3);
volatile	__bit	INT0IE		__at((0x0B*8)+4);
volatile       __bit	TMR0IE		__at((0x0B*8)+5);
volatile       __bit	PEIE		__at((0x0B*8)+6);
volatile 	   __bit	GIE			__at((0x0B*8)+7);

/* Definitions for PIR1 register */
volatile       __bit	TMR1IF		__at((0x0C*8)+0);
volatile       __bit	TMR2IF		__at((0x0C*8)+1);
volatile       __bit	CCP1IF		__at((0x0C*8)+2);
volatile       __bit	SSPIF		__at((0x0C*8)+3);
volatile       __bit	TXIF		__at((0x0C*8)+4);
volatile       __bit	RCIF		__at((0x0C*8)+5);
volatile       __bit	ADIF		__at((0x0C*8)+6);

/* Definitions for PIR2 register */
volatile       __bit	EEIF		__at((0x0D*8)+4);
volatile       __bit	CMIF		__at((0x0D*8)+6);
volatile       __bit	OSFIF		__at((0x0D*8)+7);

/* Definitions for T1CON register */
volatile       __bit	TMR1ON		__at((0x10*8)+0);
volatile       __bit	TMR1CS		__at((0x10*8)+1);
volatile       __bit	T1SYNC		__at((0x10*8)+2);
volatile       __bit	T1OSCEN		__at((0x10*8)+3);
volatile       __bit	T1CKPS0		__at((0x10*8)+4);
volatile       __bit	T1CKPS1		__at((0x10*8)+5);
volatile	__bit	T1RUN		__at((0x10*8)+6);

/* Definitions for T2CON register */
volatile       __bit	T2CKPS0		__at((0x12*8)+0);
volatile       __bit	T2CKPS1		__at((0x12*8)+1);
volatile       __bit	TMR2ON		__at((0x12*8)+2);
volatile       __bit	TOUTPS0		__at((0x12*8)+3);
volatile       __bit	TOUTPS1		__at((0x12*8)+4);
volatile       __bit	TOUTPS2		__at((0x12*8)+5);
volatile       __bit	TOUTPS3		__at((0x12*8)+6);

/* Definitions for SSPCON register */
volatile       __bit	SSPM0		__at((0x14*8)+0);
volatile       __bit	SSPM1		__at((0x14*8)+1);
volatile       __bit	SSPM2		__at((0x14*8)+2);
volatile       __bit	SSPM3		__at((0x14*8)+3);
volatile       __bit	CKP		__at((0x14*8)+4);
volatile       __bit	SSPEN		__at((0x14*8)+5);
volatile       __bit	SSPOV		__at((0x14*8)+6);
volatile       __bit	WCOL		__at((0x14*8)+7);

/* Definitions for CCP1CON register */
volatile	__bit	CCP1M0		__at((0x17*8)+0);
volatile	__bit	CCP1M1		__at((0x17*8)+1);
volatile	__bit	CCP1M2		__at((0x17*8)+2);
volatile	__bit	CCP1M3		__at((0x17*8)+3);
volatile       __bit	CCP1Y		__at((0x17*8)+4);
volatile       __bit	CCP1X		__at((0x17*8)+5);

/* Definitions for RCSTA register */
volatile       __bit	RX9D		__at((0x18*8)+0);
volatile       __bit	OERR		__at((0x18*8)+1);
volatile       __bit	FERR		__at((0x18*8)+2);
volatile	__bit	ADDEN		__at((0x18*8)+3);
volatile	__bit	CREN		__at((0x18*8)+4);
volatile	__bit	SREN		__at((0x18*8)+5);
volatile	__bit	RX9		__at((0x18*8)+6);
volatile	__bit	SPEN		__at((0x18*8)+7);

#if defined(_16F88)
/* Definitions for ADCON0 register */
volatile       __bit	ADON		__at((0x1F*8)+0);
volatile       __bit	GODONE		__at((0x1F*8)+2);
volatile       __bit	CHS0		__at((0x1F*8)+3);
volatile       __bit	CHS1		__at((0x1F*8)+4);
volatile       __bit	CHS2		__at((0x1F*8)+5);
volatile       __bit	ADCS0		__at((0x1F*8)+6);
volatile       __bit	ADCS1		__at((0x1F*8)+7);
/* Alternate definitions for ADCON0 register */
volatile       __bit	ADGO		__at((0x1F*8)+2);
#endif

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
volatile       __bit	TRISA5		__at((0x85*8)+5);
volatile       __bit	TRISA6		__at((0x85*8)+6);
volatile       __bit	TRISA7		__at((0x85*8)+7);

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
volatile	__bit	SSPIE		__at((0x8C*8)+3);
volatile	__bit	TXIE		__at((0x8C*8)+4);
volatile	__bit	RCIE		__at((0x8C*8)+5);
volatile	__bit	ADIE		__at((0x8C*8)+6);

/* Definitions for PIE2 register */
volatile	__bit	EEIE		__at((0x8D*8)+4);
volatile	__bit	CMIE		__at((0x8D*8)+6);
volatile	__bit	OSFIE		__at((0x8D*8)+7);

/* Definitions for PCON register */
volatile       __bit	BOR		__at((0x8E*8)+0);
volatile       __bit	POR		__at((0x8E*8)+1);

/* Definitions for OSCCON register */
volatile	__bit	SCS0		__at((0x8F*8)+0);
volatile	__bit	SCS1		__at((0x8F*8)+1);
volatile       __bit	IOFS		__at((0x8F*8)+2);
volatile       __bit	OSTS		__at((0x8F*8)+3);
volatile       __bit	IRCF0		__at((0x8F*8)+4);
volatile       __bit	IRCF1		__at((0x8F*8)+5);
volatile       __bit	IRCF2		__at((0x8F*8)+6);

/* Definitions for OSCTUNE register */
volatile	__bit	TUN0		__at((0x90*8)+0);
volatile	__bit	TUN1		__at((0x90*8)+1);
volatile	__bit	TUN2		__at((0x90*8)+2);
volatile	__bit	TUN3		__at((0x90*8)+3);
volatile	__bit	TUN4		__at((0x90*8)+4);
volatile	__bit	TUN5		__at((0x90*8)+5);

/* Definitions for SSPSTAT register */
volatile       __bit	BF		__at((0x94*8)+0);
volatile       __bit	UA		__at((0x94*8)+1);
volatile       __bit	RW		__at((0x94*8)+2);
volatile       __bit	START		__at((0x94*8)+3);
volatile       __bit	STOP		__at((0x94*8)+4);
volatile       __bit	DA		__at((0x94*8)+5);
volatile	__bit	CKE		__at((0x94*8)+6);
volatile	__bit	SMP		__at((0x94*8)+7);

/* Definitions for TXSTA register */
volatile       __bit	TX9D		__at((0x98*8)+0);
volatile       __bit	TRMT		__at((0x98*8)+1);
volatile	__bit	BRGH		__at((0x98*8)+2);
volatile	__bit	SYNC		__at((0x98*8)+4);
volatile	__bit	TXEN		__at((0x98*8)+5);
volatile	__bit	TX9		__at((0x98*8)+6);
volatile	__bit	CSRC		__at((0x98*8)+7);

#if defined(_16F88)
/* Definitions for ANSEL register */
volatile	__bit	ANS0		__at((0x9B*8)+0);
volatile	__bit	ANS1		__at((0x9B*8)+1);
volatile	__bit	ANS2		__at((0x9B*8)+2);
volatile	__bit	ANS3		__at((0x9B*8)+3);
volatile	__bit	ANS4		__at((0x9B*8)+4);
volatile	__bit	ANS5		__at((0x9B*8)+5);
volatile	__bit	ANS6		__at((0x9B*8)+6);
#endif

/* Definitions for CMCON register */
volatile	__bit	CM0		__at((0x9C*8)+0);
volatile	__bit	CM1		__at((0x9C*8)+1);
volatile	__bit	CM2		__at((0x9C*8)+2);
volatile	__bit	CIS		__at((0x9C*8)+3);
volatile	__bit	C1INV		__at((0x9C*8)+4);
volatile	__bit	C2INV		__at((0x9C*8)+5);
volatile       __bit	C1OUT		__at((0x9C*8)+6);
volatile       __bit	C2OUT		__at((0x9C*8)+7);

/* Definitions for CVRCON register */
volatile	__bit	CVR0		__at((0x9D*8)+0);
volatile	__bit	CVR1		__at((0x9D*8)+1);
volatile	__bit	CVR2		__at((0x9D*8)+2);
volatile	__bit	CVR3		__at((0x9D*8)+3);
volatile	__bit	CVRR		__at((0x9D*8)+5);
volatile	__bit	CVROE		__at((0x9D*8)+6);
volatile	__bit	CVREN		__at((0x9D*8)+7);

#if defined(_16F88)
/* Definitions for ADCON1 register */
volatile	__bit	VCFG0		__at((0x9F*8)+4);
volatile	__bit	VCFG1		__at((0x9F*8)+5);
volatile	__bit	ADCS2		__at((0x9F*8)+6);
volatile	__bit	ADFM		__at((0x9F*8)+7);
#endif

/* Definitions for WDTCON register */
volatile	__bit	SWDTEN		__at((0x105*8)+0);
volatile	__bit	WDTPS0		__at((0x105*8)+1);
volatile	__bit	WDTPS1		__at((0x105*8)+2);
volatile	__bit	WDTPS2		__at((0x105*8)+3);
volatile	__bit	WDTPS3		__at((0x105*8)+4);

/* Definitions for EECON1 register */
volatile       __bit	RD		__at((0x18C*8)+0);
volatile       __bit	WR		__at((0x18C*8)+1);
volatile       __bit	WREN		__at((0x18C*8)+2);
volatile       __bit	WRERR		__at((0x18C*8)+3);
volatile       __bit	FREE		__at((0x18C*8)+4);
volatile       __bit	EEPGD		__at((0x18C*8)+7);

					
#define CONFIG_ADDR	0x2007

#define CONFIG_ADDR2	0x2008

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
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned INTF                   :1;
        unsigned                        :2;
        unsigned INTE                   :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned                        :2;
        unsigned EEPGD                  :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x18C);
#endif
