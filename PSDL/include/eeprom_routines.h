// This header file should not be included directly
// Inclusion of this file is provided indirectly by including htc.h

/***********************************************************************/
/****** EEPROM memory read/write macros and function definitions *******/
/***********************************************************************/

#if _EEPROM_INT == _EEREG_INT
#ifdef __FLASHTYPE
#define _ADJ_EECON1()	EECON1 &= 0x3F
#else
#define	_ADJ_EECON1()	(void)0
#endif
#endif

/*
 * EEPROM_WRITE Implementations
 */

#define _EEREG_EEPROM_WRITE(addr, value)	\
do{											\
	while (EECON1bits.WR) { 				\
		continue; 							\
	} 										\
	EEADR = (addr);							\
	EEDATA = (value);						\
	_ADJ_EECON1();							\
	STATUSbits.CARRY = 0;					\
	if (INTCONbits.GIE) {					\
		STATUSbits.CARRY = 1;				\
	}										\
	INTCONbits.GIE = 0;						\
	EECON1bits.WREN = 1;					\
	EECON2 = 0x55;							\
	EECON2 = 0xAA;							\
	EECON1bits.WR = 1;						\
	EECON1bits.WREN = 0;					\
	if (STATUSbits.CARRY) {					\
		INTCONbits.GIE = 1;					\
	}										\
} while (0)

#define _NVMREG_EEPROM_WRITE(addr, value)					\
do {														\
	while (NVMCON1bits.WR) {								\
		continue;											\
	}														\
	NVMCON1bits.NVMREGS = 1;								\
	NVMADRL = (addr) & 0xFFU;								\
	NVMADRH = 0x70;											\
	NVMDATH = 0;											\
	NVMDATL = (value) & 0xFFU;								\
	STATUSbits.CARRY = 0;									\
	if (INTCONbits.GIE) {									\
		STATUSbits.CARRY = 1;								\
	}														\
	INTCONbits.GIE = 0;										\
	NVMCON1bits.WREN = 1;									\
	NVMCON2 = 0x55;											\
	NVMCON2 = 0xAA;											\
	NVMCON1bits.WR = 1;										\
	while (NVMCON1bits.WR) {								\
		continue;											\
	}														\
	NVMCON1bits.WREN = 0;									\
	if (STATUSbits.CARRY) {									\
		INTCONbits.GIE = 1;									\
	}														\
}															\
while (0)

/*
 * EEPROM_READ Implementations
 *
 * NOTE WELL:
 * The macro EEPROM_READ() is NOT safe to use immediately after any
 * write to EEPROM, as it does NOT wait for WR to clear.  This is by
 * design, to allow minimal code size if a sequence of reads is
 * desired.  To guarantee uncorrupted writes, use the function
 * eeprom_read() or insert
 *     while(WR)continue;
 * before calling EEPROM_READ().
*/

#define	_EEREG_EEPROM_READ(addr) (	\
		EEADR = addr,				\
		_ADJ_EECON1(),				\
		EECON1bits.RD = 1,			\
		EEDATA)						

#define _NVMREG_EEPROM_READ(addr) (	\
		NVMCON1bits.NVMREGS = 1,	\
		NVMADRL = (addr) & 0xFFU,	\
		NVMADRH = 0x70,				\
		NVMCON1bits.RD = 1,			\
		NVMDATL)

//
// General Macro Functions
//

#if EEPROM_SIZE > 0
#if _EEPROM_INT == _EEREG_INT
#define EEPROM_WRITE(addr, value)	_EEREG_EEPROM_WRITE(addr, value)
#define EEPROM_READ(addr)			_EEREG_EEPROM_READ(addr)
#elif _EEPROM_INT == _NVMREG_INT
#define EEPROM_WRITE(addr, value)	_NVMREG_EEPROM_WRITE(addr, value)
#define EEPROM_READ(addr)			_NVMREG_EEPROM_READ(addr)
#else
#error "Unknonwn EEPROM register interface"
#endif

/* library function versions */
extern void eeprom_write(unsigned char addr, unsigned char value);
extern unsigned char eeprom_read(unsigned char addr);
#endif	// end EEPROM routines


