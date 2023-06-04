/*
 *	Header file for Cypress 7C695x Microcontroller
 */


volatile unsigned char		INDF		__at(0x00);
volatile unsigned char		PCL		__at(0x02);
volatile unsigned char		STATUS		__at(0x03);
volatile unsigned char		STAT		__at(0x03);
volatile	unsigned char		FSR		__at(0x04);
volatile	unsigned char		PCLATH		__at(0x0A);
volatile unsigned char		INTCON		__at(0x0B);
volatile unsigned char		PORTB		__at(0x06);
volatile	unsigned char	     	TRISB		__at(0x86);
volatile	unsigned char		ICKBUG		__at(0x0E);
volatile	unsigned char		BIGBUG  	__at(0x0F);
volatile unsigned char		EXTDATA1	__at(0x10);
volatile unsigned char		EXTDATA2	__at(0x11);
volatile	unsigned char		EXTADDR1L	__at(0x12);
volatile	unsigned char		EXTADDR1H	__at(0x13);
volatile	unsigned char		EXTADDR2L	__at(0x14);
volatile	unsigned char		EXTADDR2H	__at(0x15);
volatile unsigned char		DIAG		__at(0x7F);


/*	STATUS bits	*/
volatile __bit	IRP     __at(0x03*8+7);
volatile __bit	RP1     __at(0x03*8+6);
volatile __bit	RP0     __at(0x03*8+5);
volatile __bit	TO	__at(0x03*8+4);
volatile __bit	PD	__at(0x03*8+3);
volatile __bit	ZERO    __at(0x03*8+2);
volatile __bit	DC      __at(0x03*8+1);
volatile __bit	CARRY   __at(0x03*8+0);

/*	INTCON bits	*/
volatile __bit	GIE	__at(0x0B*8+7);
volatile __bit	PEIE	__at(0x0B*8+6);
volatile __bit	T0IE	__at(0x0B*8+5);
volatile __bit	TMR0IE	__at(0x0B*8+5);
volatile __bit	INTE	__at(0x0B*8+4);
volatile __bit	RBIE	__at(0x0B*8+3);
volatile __bit	T0IF	__at(0x0B*8+2);
volatile __bit	TMR0IF	__at(0x0B*8+2);
volatile __bit	INTF	__at(0x0B*8+1);
volatile __bit	RBIF	__at(0x0B*8+0);

/*      PORTB bits      */
volatile __bit	RB7	__at(0x06*8+7);
volatile __bit	RB6	__at(0x06*8+6);
volatile __bit	RB5	__at(0x06*8+5);
volatile __bit	RB4	__at(0x06*8+4);
volatile __bit	RB3	__at(0x06*8+3);
volatile __bit	RB2	__at(0x06*8+2);
volatile __bit	RB1	__at(0x06*8+1);
volatile __bit	RB0	__at(0x06*8+0);

/*      TRISB bits      */
volatile	__bit	TRISB7	__at(0x86*8+7);
volatile	__bit	TRISB6	__at(0x86*8+6);
volatile	__bit	TRISB5	__at(0x86*8+5);
volatile	__bit	TRISB4	__at(0x86*8+4);
volatile	__bit	TRISB3	__at(0x86*8+3);
volatile	__bit	TRISB2	__at(0x86*8+2);
volatile	__bit	TRISB1	__at(0x86*8+1);
volatile	__bit	TRISB0	__at(0x86*8+0);

