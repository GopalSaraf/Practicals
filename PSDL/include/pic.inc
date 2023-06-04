#ifndef _PIC_INC_
#define	_PIC_INC_

#include <pic_as_chip_select.inc>

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

alloc_stack     MACRO
GLOBAL	btemp
addfsr	FSR1,auto_size
ENDM


; restore_stack adjusts the SP to remove all auto and parameter
; objects from the stack prior to returning from a function

restore_stack    MACRO
addfsr  FSR1,stk_offset
stk_offset      SET     0
auto_size       SET     0
ENDM

#endif
