#ifndef	_PIC_H_
#define	_PIC_H_

#ifndef _HTC_H_
#include <htc.h>
#endif

#ifdef _HAS_OSCVAL_
extern unsigned char __osccal_val(void);
#define _READ_OSCCAL_DATA() __osccal_val()
#endif

#include <pic_chip_select.h>
#include <builtins.h>

/* MPLAB REAL-ICE related macros & includes (currently enhanced PICs only) */
#if defined(__MPLAB_REALICE__) || defined(__MPLAB_ICE__)
#include <trace16.h>
#endif

#ifndef __TRACE
#define __TRACE(id)         /* TRACE disabled */
#endif
#ifndef __LOG
#define __LOG(id,value)     /* LOG disabled */
#endif

#define	CLRWDT()	__asm("clrwdt")
#define	SLEEP()		__asm("sleep")
#define NOP()		__nop()

/* _nop() has been deprecated; use __nop() */
#define _nop()		__nop()

#define	ASMOPT_ON()		__asm("opt asmopt_on")
#define	ASMOPT_OFF()	__asm("opt asmopt_off")

//
// Legacy Programming Macro Functions
//
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#define _NO_CONFIG_SUP(f)	__asm("GLOBAL nosup@@$_$_" ___mkstr(f) "\nnosup@@$_$_" ___mkstr(f) " SET 0")
#define __CONFIG(x)			_NO_CONFIG_SUP(CONFIG)				
#define __IDLOC(w)			_NO_CONFIG_SUP(IDLOC)				
#define __IDLOC7(a,b,c,d)	_NO_CONFIG_SUP(IDLOC7)				
#define __PROG_CONFIG(a,x)	_NO_CONFIG_SUP(PROG_CONFIG)				
#else
#define	__CONFIG(x) \
			__config(___mkstr(__CONFIG), ___mkstr(pic), ___mkstr(x))
// Programs the lower 4 bits per ID location
#define __IDLOC(w) \
			__config(___mkstr(__IDLOC), ___mkstr(pic), ___mkstr(w))
// Variant of IDLOC for those devices that permit programming of the lower 7 bits per ID location
#define __IDLOC7(a,b,c,d) \
			__config(___mkstr(__IDLOC7), ___mkstr(pic), a, b, c, d)
#define	__PROG_CONFIG(a, x)	\
			__config(___mkstr(__PROG_CONFIG), ___mkstr(pic), a, x)
#endif


#if !defined(_PIC14E) && !defined(_EEADRL)
#define _EEADRL EEADR
#else
#define _EEADRL EEADRL
#endif
#if	EEPROM_SIZE > 0
#define __EEPROM_DATA(a, b, c, d, e, f, g, h) \
			 __asm("\tpsect eeprom_data,class=EEDATA,delta=2,space=3,noexec"); \
			 __asm("\tdb\t" ___mkstr(a) "," ___mkstr(b) "," ___mkstr(c) "," ___mkstr(d) "," \
				      ___mkstr(e) "," ___mkstr(f) "," ___mkstr(g) "," ___mkstr(h))
#endif


// Flash memory read/write/erase macros are no longer supported.
#define _NO_FLASH_SUPPORT(f) __attribute__((__unsupported__("The " #f " macro function is no longer supported. Please use the MPLAB X MCC.")))
_NO_FLASH_SUPPORT(FLASH_READ) unsigned char __flash_read(unsigned short addr);
#define FLASH_READ(addr)	__flash_read(addr)
_NO_FLASH_SUPPORT(FLASH_WRITE) void __flash_write(unsigned short addr, unsigned short data);
#define FLASH_WRITE(addr,data)	__flash_write(addr,data)
_NO_FLASH_SUPPORT(FLASH_ERASE) void __flash_erase(unsigned short addr);
#define FLASH_ERASE(addr)	__flash_erase(addr)

#include <eeprom_routines.h>

/****************************************************************/
/****** Global interrupt enable/disable macro definitions *******/
/****************************************************************/
#if defined(_PIC14) || defined(_PIC14E) || defined(_PIC14EX)
	
#ifndef	ei
#define	ei()	(INTCONbits.GIE = 1)	// interrupt enable bit
#endif  

#if defined(_14000) ||  defined(_16C61) || defined(_16C62) ||\
	defined(_16C63) || defined(_16C63A) || defined(_16C64) ||\
	defined(_16C65) || defined(_16C65B) || defined(_16C71) ||\
	defined(_16C73) || defined(_16C73B) || defined(_16C74) ||\
	defined(_16C74B) || defined(_16C84) || defined(_16C745) ||\
	defined(_16C765) || defined(_16LC74B)
	#ifndef	di
		#define di()	{ do { INTCONbits.GIE = 0; } while ( INTCONbits.GIE == 1 ); }	// disable interrupt bit
	#endif  
#else
	#ifndef	di
		#define	di()	(INTCONbits.GIE = 0)	// interrupt enable bit
	#endif  
#endif

#endif

#if	defined(__ADDRQUAL) && (__ADDRQUAL == __ADDRQUAL_REJECT)
#define __RESETBITS_BANKQUAL
#else
#define __RESETBITS_BANKQUAL __bank0
#endif
/* The below reflect the state of TO and PD, respectively, which would otherwise
   be trashed by startup code. */
extern __RESETBITS_BANKQUAL 	unsigned char __resetbits;
extern __RESETBITS_BANKQUAL 	__bit __powerdown;
extern __RESETBITS_BANKQUAL	__bit __timeout;
#endif	/* _PIC_H */
