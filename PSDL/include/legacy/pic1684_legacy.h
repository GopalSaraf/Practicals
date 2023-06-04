
#ifndef	_HTC_H_
#warning Header file pic1684.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 16CR83 chip
 *	PIC 16F83 chip
 *	PIC 16C84 chip
 *	PIC 16F84 chip
 *	PIC 16F84A chip
 *	PIC 16CR84 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char	INDF	__at(0x00);
volatile unsigned char	RTCC	__at(0x01);
volatile unsigned char	TMR0	__at(0x01);
volatile unsigned char	PCL	__at(0x02);
volatile unsigned char	STATUS	__at(0x03);
volatile	unsigned char	FSR	__at(0x04);
volatile unsigned char	PORTA	__at(0x05);
volatile unsigned char	PORTB	__at(0x06);
volatile unsigned char	EEDATA	__at(0x08);
volatile unsigned char	EEADR	__at(0x09);
volatile	unsigned char	PCLATH	__at(0x0A);
volatile unsigned char	INTCON	__at(0x0B);

volatile	unsigned char	     	OPTION	__at(0x81);
volatile	unsigned char      	TRISA	__at(0x85);
volatile	unsigned char      	TRISB	__at(0x86);
volatile unsigned char      	EECON1	__at(0x88);
volatile unsigned char      	EECON2	__at(0x89);

/*	STATUS bits	*/
volatile __bit	RP0	__at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO	__at(0x03*8+2);
volatile __bit	DC	__at(0x03*8+1);
volatile __bit	CARRY	__at(0x03*8+0);

/*      PORTA bits      */
volatile __bit	RA4	__at(0x05*8+4);
volatile __bit	RA3	__at(0x05*8+3);
volatile __bit	RA2	__at(0x05*8+2);
volatile __bit	RA1	__at(0x05*8+1);
volatile __bit	RA0	__at(0x05*8+0);

/*      PORTB bits      */
volatile __bit	RB7	__at(0x06*8+7);
volatile __bit	RB6	__at(0x06*8+6);
volatile __bit	RB5	__at(0x06*8+5);
volatile __bit	RB4	__at(0x06*8+4);
volatile __bit	RB3	__at(0x06*8+3);
volatile __bit	RB2	__at(0x06*8+2);
volatile __bit	RB1	__at(0x06*8+1);
volatile __bit	RB0	__at(0x06*8+0);
volatile __bit	INT	__at(0x06*8+0);

/*	INTCON bits	*/
volatile __bit	GIE	__at(0x0B*8+7);
volatile __bit	EEIE	__at(0x0B*8+6);
volatile __bit	T0IE	__at(0x0B*8+5);
volatile __bit	INTE	__at(0x0B*8+4);
volatile __bit	RBIE	__at(0x0B*8+3);
volatile __bit	T0IF	__at(0x0B*8+2);
volatile __bit	INTF	__at(0x0B*8+1);
volatile __bit	RBIF	__at(0x0B*8+0);

/*	OPTION bits	*/
volatile	__bit	RBPU	__at(0x81*8+7);
volatile	__bit	INTEDG	__at(0x81*8+6);
volatile	__bit	T0CS	__at(0x81*8+5);
volatile	__bit	T0SE	__at(0x81*8+4);
volatile	__bit	PSA	__at(0x81*8+3);
volatile	__bit	PS2	__at(0x81*8+2);
volatile	__bit	PS1	__at(0x81*8+1);
volatile	__bit	PS0	__at(0x81*8+0);

/*      TRISA bits      */
volatile       __bit	TRISA4	__at(0x85*8+4);
volatile       __bit	TRISA3	__at(0x85*8+3);
volatile       __bit	TRISA2	__at(0x85*8+2);
volatile       __bit	TRISA1	__at(0x85*8+1);
volatile       __bit	TRISA0	__at(0x85*8+0);

/*      TRISB bits      */
volatile       __bit	TRISB7	__at(0x86*8+7);
volatile       __bit	TRISB6	__at(0x86*8+6);
volatile       __bit	TRISB5	__at(0x86*8+5);
volatile       __bit	TRISB4	__at(0x86*8+4);
volatile       __bit	TRISB3	__at(0x86*8+3);
volatile       __bit	TRISB2	__at(0x86*8+2);
volatile       __bit	TRISB1	__at(0x86*8+1);
volatile       __bit	TRISB0	__at(0x86*8+0);

/*	EECON1 bits	*/
volatile       __bit	EEIF	__at(0x88*8+4);
volatile       __bit	WRERR	__at(0x88*8+3);
volatile       __bit	WREN	__at(0x88*8+2);
volatile       __bit	WR	__at(0x88*8+1);
volatile       __bit	RD	__at(0x88*8+0);

					
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
        unsigned RBIF                   :1;
        unsigned INTF                   :1;
        unsigned T0IF                   :1;
        unsigned RBIE                   :1;
        unsigned INTE                   :1;
        unsigned T0IE                   :1;
        unsigned EEIE                   :1;
        unsigned GIE                    :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __at(0x00B);
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned EEIF                   :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __at(0x088);

