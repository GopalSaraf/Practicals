#ifndef _PIC18_INC
#define _PIC18_INC

#define BANKMASK(addr) ((addr) and 0FFh)

#include <pic18_chip_select.inc>

/* macros that can assist with writing reentrant C-callable routines */

stk_offset      SET     0
auto_size       SET     0


; stack_auto defines a symbol /name/_offset which equates to the
; stack offset of the auto object in question

stack_auto MACRO name, size
name&_offset    EQU     stk_offset-size
stk_offset      SET     name&_offset
auto_size       SET     -stk_offset
ENDM


; stack_param defines a symbol /name/_offset which equates to the
; stack offset of the parameter object in question

stack_param MACRO name, size
name&_offset    EQU     stk_offset-size
stk_offset      SET     name&_offset
ENDM


; alloc_stack adjusts the SP to allocate space for auto objects
; it also links in to the btemp symbol so that can be used

alloc_stack MACRO
GLOBAL	btemp
IF(auto_size eq 1)
movf    POSTINC1,f,c
ELSIF(auto_size eq 2)
movf    POSTINC1,f,c
movf    POSTINC1,f,c
ELSIF(auto_size eq 3)
movf    POSTINC1,f,c
movf    POSTINC1,f,c
movf    POSTINC1,f,c
ELSIF(auto_size ge 4)
movlw	low(auto_size)
addwf	FSR1L,c
movlw	high(auto_size)
addwfc	FSR1H,c
ENDIF
ENDIF
ENDIF
ENDIF
ENDM


; restore_stack adjusts the SP to remove all auto and parameter
; objects from the stack prior to returning from a function

restore_stack MACRO
movlw	low(stk_offset)
addwf	FSR1L,c
movlw	high(stk_offset)
addwfc	FSR1H,c
stk_offset      SET     0
auto_size       SET     0
ENDM

#endif
