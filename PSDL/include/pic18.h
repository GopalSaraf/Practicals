#ifndef	_PIC18_H
#define	_PIC18_H

#ifndef _HTC_H_
#include <htc.h>
#endif

#include <pic18_chip_select.h>
#include <builtins.h>

/* if _PLIB is defined (which driver will do when --runtime=+plib is used), include plib.h */
#if defined _PLIB
#include <plib.h>
#endif

#define _NO_PLIB_SUPPORT(f) __attribute__((__unsupported__("The " #f " routine is no longer supported. Please use the MPLAB X MCC.")))
// flash_write and EraseFlash are no longer supported. Use the peripheral library implementation if available
// or the MPLAB X MCC.
_NO_PLIB_SUPPORT(flash_write) void flash_write(const unsigned char *, unsigned int, __far unsigned char *);
_NO_PLIB_SUPPORT(EraseFlash) void EraseFlash(unsigned long startaddr, unsigned long endaddr);
#define FLASH_WRITE(src, size, dest)	flash_write(src,size,dest)
#define flash_erase(addr)		EraseFlash(addr,(addr)+1)
#define FLASH_ERASE(addr)		EraseFlash(addr,(addr)+1)

/* Get definitions for errata codes that may be
 * defined in preprocessor symbol _ERRATA_TYPES */
#include <errata.h>

#if defined(__MPLAB_REALICE__) || defined(__MPLAB_ICE__)
#include <trace18.h>
#endif

#ifndef __TRACE
#define __TRACE(id)         /* TRACE disabled */
#endif
#ifndef __LOG
#define __LOG(id,value)     /* LOG disabled */
#endif

/* Macros to access bytes within words and words within longs */
#define LOW_BYTE(x)     ((unsigned char)((x)&0xFF))
#define HIGH_BYTE(x)    ((unsigned char)(((x)>>8)&0xFF))
#define LOW_WORD(x)     ((unsigned short)((x)&0xFFFF))
#define HIGH_WORD(x)    ((unsigned short)(((x)>>16)&0xFFFF))

/* C access to assembler insructions */	
#define	CLRWDT()	__asm(" clrwdt")
#define	ClrWdt()	__asm(" clrwdt")
#define NOP()		__nop()
#define	Nop()		__nop()
#define	Reset()		__asm(" reset")
#define SLEEP()		__asm(" sleep")
#define Sleep()		__asm(" sleep")

//
// Legacy Programming Macro Functions
//
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#define _NO_CONFIG_SUP(f)	__asm("GLOBAL nosup@@$_$_" ___mkstr(f) "\nnosup@@$_$_" ___mkstr(f) " SET 0")
#define __CONFIG(a,x)		_NO_CONFIG_SUP(CONFIG)				
#ifndef __J_PART
#define __IDLOC(w)			_NO_CONFIG_SUP(IDLOC)				
#endif
#define __PROG_CONFIG(a,x)	_NO_CONFIG_SUP(PROG_CONFIG)				
#else
#define	__PROG_CONFIG(a, x)	\
			__config(___mkstr(__PROG_CONFIG), ___mkstr(pic18), a, x)

#define __CONFIG(a, b) \
			__config(___mkstr(__CONFIG), ___mkstr(pic18), ___mkstr(b))

#ifndef __J_PART
#define __IDLOC(w) \
			__config(___mkstr(__IDLOC), ___mkstr(pic18), ___mkstr(w))
#endif
#endif

/* Initialise device EEPROM (if available) with 8 bytes of data at a time eg.
 * // store initial values to first 16-bytes of EEPROM address range.
 * __EEPROM_DATA(0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07);
 * __EEPROM_DATA(0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F);*/
#if _EEPROMSIZE > 0
 #define __EEPROM_DATA(a, b, c, d, e, f, g, h) \
			 __asm("\tpsect eeprom_data,class=EEDATA,noexec"); \
			 __asm("\tdb\t" ___mkstr(a) "," ___mkstr(b) "," ___mkstr(c) "," ___mkstr(d) "," \
				      ___mkstr(e) "," ___mkstr(f) "," ___mkstr(g) "," ___mkstr(h))
#else
 #define __EEPROM_DATA(a, b, c, d, e, f, g, h)	// Added only for code portability
#endif

// Various helper macros used in EEPROM routines
#if _EEPROMSIZE > 0
 #if	_EEPROMSIZE > 256
  #if defined(_18FXXK40_FAMILY_) || defined(_18FXXK42_FAMILY_) || defined(_18FXXQ10_FAMILY_) || \
		defined(_18FXXK83_FAMILY_) || defined(_18FXXQ43_FAMILY_) || defined(_18FXXQ83_FAMILY_) || defined(_18FXXQ84_FAMILY_)
   #define _LOAD_EEADR(addr)	(NVMADRH=(((addr)>>8)&0xFF),NVMADRL=((addr)&0xFF))
  #else 
   #define _LOAD_EEADR(addr)	(EEADRH=(((addr)>>8)&0xFF),EEADR=((addr)&0xFF))
  #endif
 #else
  #if defined(_18FXXK40_FAMILY_) || defined(_18FXXK42_FAMILY_) || defined(_18FXXQ10_FAMILY_) || \
		defined(_18FXXK83_FAMILY_) || defined(_18FXXQ43_FAMILY_) || defined(_18FXXQ83_FAMILY_) || defined(_18FXXQ84_FAMILY_)
   #define _LOAD_EEADR(addr)	(NVMADRL=((addr)&0xFF))
  #else
   #define _LOAD_EEADR(addr)	(EEADR=((addr)&0xFF))
  #endif
 #endif
#else
 #define _LOAD_EEADR(addr)
#endif


#if	_EEPROMSIZE > 0
 #if defined(_18F86K90_FAMILY_) || defined(_18F87K22_FAMILY_) || defined(_18F87K90_FAMILY_)
  #define _CLEAR_EEIF()	PIR6bits.EEIF=0
 #elif defined(_18F66K80_FAMILY_)
  #define _CLEAR_EEIF()	PIR4bits.EEIF=0
 #elif defined(_18FXXK40_FAMILY_)
  #if defined(_18F65K40) || defined(_18F66K40) || defined(_18LF65K40) || defined(_18LF66K40) || \
	  defined(_18F67K40) || defined(_18LF67K40)
   #define _CLEAR_EEIF() PIR8bits.NVMIF=0
  #else
   #define _CLEAR_EEIF() PIR7bits.NVMIF=0
  #endif
 #elif defined(_18FXXQ10_FAMILY_)
  #define _CLEAR_EEIF() PIR7bits.NVMIF=0	
 #elif defined(_18FXXK42_FAMILY_) || defined(_18FXXK83_FAMILY_)
   #define _CLEAR_EEIF() PIR0bits.NVMIF=0
 #elif defined(_18FXXQ43_FAMILY_) || defined(_18FXXQ83_FAMILY_) || defined(_18FXXQ84_FAMILY_)
   #define _CLEAR_EEIF() PIR15bits.NVMIF=0
 #else
   #define _CLEAR_EEIF()	PIR2bits.EEIF=0
 #endif
#else
 #define _CLEAR_EEIF()
#endif

#if defined(SMALL_DATA)
 #define _LOAD_TBLPTR(addr)	                                                \
			TBLPTRU=0;                                                      \
			*((__far unsigned char**)&TBLPTR)=(__far unsigned char*)(addr)
#else
 #define _LOAD_TBLPTR(addr)	                                                \
			*((__far unsigned char**)&TBLPTR)=(__far unsigned char*)(addr)
#endif

// MACROS for EEPROM Access
// EEPROM related functions no longer supported. Use the peripheral library implementation if available
// or the MPLAB X MCC.
#ifdef _DISABLE_EEPROM_FUNCTIONS
#define EEPROM_READ(addr)	0
#define eeprom_read(addr)	0
#define EEPROM_WRITE(addr, value)
#define eeprom_write(addr, value)
#else
_NO_PLIB_SUPPORT(Read_b_eep) unsigned char Read_b_eep(unsigned int badd);
_NO_PLIB_SUPPORT(Busy_eep) void Busy_eep(void);
_NO_PLIB_SUPPORT(Write_b_eep) void Write_b_eep(unsigned int badd, unsigned char bdat);
#define EEPROM_READ(addr)	Read_b_eep(addr)
#define eeprom_read(addr)	Read_b_eep(addr)
#define EEPROM_WRITE(addr, value)	(Busy_eep(), Write_b_eep(addr,value))
#define eeprom_write(addr, value)	(Busy_eep(), Write_b_eep(addr,value))
#endif

/* Accurate read/write macros for 16-Bit timers */
/*** please note, the timer needs to be enabled ***
 *** to handle 16-Bit read/write operations for ***
 *** these routines to be of benefit ***/
#define WRITETIMER0(x) ((void)(TMR0H=((x)>>8),TMR0L=((x)&0xFF)))
#define WRITETIMER1(x) ((void)(TMR1H=((x)>>8),TMR1L=((x)&0xFF)))
#define WRITETIMER3(x) ((void)(TMR3H=((x)>>8),TMR3L=((x)&0xFF)))
#define _NO_READTIMER_SUP(n) __attribute__((__unsupported__("The READTIMER" #n "() macro is not available with the current device.")))
#ifdef TMR0
#define READTIMER0() (TMR0)
#else
_NO_READTIMER_SUP(0) unsigned short __readtimer0(void);
#define READTIMER0() __readtimer0()
#endif
#ifdef TMR1
#define READTIMER1() (TMR1)
#else
_NO_READTIMER_SUP(1) unsigned short __readtimer1(void);
#define READTIMER1() __readtimer1()
#endif
#ifdef TMR3
#define READTIMER3() (TMR3)
#else
_NO_READTIMER_SUP(3) unsigned short __readtimer3(void);
#define READTIMER3() __readtimer3()
#endif
// Macros TxRD16ON are no longer supported.
unsigned char __t1rd16on(void);
unsigned char __t3rd16on(void);
#define T1RD16ON __t1rd16on()
#define T3RD16ON __t3rd16on()

/* Global Interrupt Enable/Disable macros */

#if defined(_18FXXK42_FAMILY_) || defined(_18FXXK83_FAMILY_) || defined(_18FXXQ43_FAMILY_) || \
	defined(_18FXXQ83_FAMILY_) || defined(_18FXXQ84_FAMILY_) || defined(_18FXXQ41_FAMILY_) || \
	defined(_18FXXQ40_FAMILY_) || defined(_18FXXQ71_FAMILY_) || defined(_18FXXQ20_FAMILY_) || \
	defined(_18FXXQ24_FAMILY_)
#define _INTCONbits INTCON0bits
#else 
#define _INTCONbits INTCONbits
#endif

#ifndef	ei
#define	ei()	(_INTCONbits.GIE = 1) 	// Interrupts of Hi/Lo Priority or Peripheral interrupts 
#endif

#ifndef	di
#define	di()	(_INTCONbits.GIE = 0)	// Interrupts of Hi/Lo Priority or Peripheral interrupts 
#endif

#endif	/* _PIC18_H */
