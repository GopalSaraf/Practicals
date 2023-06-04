#ifndef _BUILTINS_H_
#define _BUILTINS_H_

#include <stdint.h>

// builtin version of nop
#pragma intrinsic(__nop)
extern void __nop(void);

// builtin delay functions
#pragma intrinsic(_delay)
extern __nonreentrant void _delay(uint32_t);
#pragma intrinsic(_delaywdt)
extern __nonreentrant void _delaywdt(uint32_t);
#if defined(_PIC14E) || defined(_PIC14EX) || defined(_PIC18)
#pragma intrinsic(_delay3)
extern __nonreentrant void _delay3(uint8_t);
#endif

// NOTE: To use the macros below, YOU must have previously defined _XTAL_FREQ
#define __delay_us(x) _delay((unsigned long)((x)*(_XTAL_FREQ/4000000.0)))
#define __delay_ms(x) _delay((unsigned long)((x)*(_XTAL_FREQ/4000.0)))
#define __delaywdt_us(x) _delaywdt((unsigned long)((x)*(_XTAL_FREQ/4000000.0)))
#define __delaywdt_ms(x) _delaywdt((unsigned long)((x)*(_XTAL_FREQ/4000.0)))

#endif // _BUILTINS_H_
