/****************************************************************************/
/*                                                                          */
/*  Copyright 2022 Microchip Technology Inc                                 */
/*                                                                          */
/****************************************************************************/

#ifndef	__TRACE18_H
#define	__TRACE18_H



/* IT data formats */

#define __IT_FMT_MASK   0xFF00
#define __IT_FMT_DFLT   0x0100	/* 64 trace and 128 log IDs */
#define __IT_FMT_PC     0x0200	/* original testing format */
#define __IT_FMT_RAW7   0x0300	/* generic 7-bit data */
#define __IT_FMT_RAW8   0x0400	/* generic 8-bit data */
#define __IT_FMT_RAW16  0x0500	/* generic 16-bit data */
#define __IT_FMT_RAW32  0x0600	/* generic 32-bit data */


/* IT primary transport facilities */

#define __IT_XMT_MASK       0x00FF
#define __IT_PORT_MASK      0x0010
#define __IT_SPI_MASK       0x0020
#define __IT_UART_MASK      0x0040

#define __IT_XMT_DC             0x0001
#define __IT_XMT_PORTA          (__IT_PORT_MASK | 1)
#define __IT_XMT_PORTB          (__IT_PORT_MASK | 2)
/* reserve 16-bit PORTB_HI */
#define __IT_XMT_PORTC		(__IT_PORT_MASK | 4)
#define __IT_XMT_PORTD          (__IT_PORT_MASK | 5)
/* reserve 16-bit PORTD_HI */
#define __IT_XMT_PORTE          (__IT_PORT_MASK | 7)
#define __IT_XMT_PORTF          (__IT_PORT_MASK | 8)
#define __IT_XMT_PORTG		(__IT_PORT_MASK | 9)
/* reserve 16-bit PORTG_TRIHI */
#define __IT_XMT_PORTH		(__IT_PORT_MASK | 0x0B)
#define __IT_XMT_PORTJ		(__IT_PORT_MASK | 0x0C)
#define __IT_XMT_SPI1           (__IT_SPI_MASK | 1)
#define __IT_XMT_SPI2           (__IT_SPI_MASK | 2)
#define __IT_XMT_SPI1_RC75      (__IT_SPI_MASK | 3)
#define __IT_XMT_SPI2_RD20      (__IT_SPI_MASK | 4)
#define __IT_XMT_SPI2_F6C       (__IT_SPI_MASK | 5)
#define __IT_XMT_UART1          (__IT_UART_MASK | 1)
#define __IT_XMT_UART2          (__IT_UART_MASK | 2)


/* /d__IT= values */

#define off	0
#define __off	0
#if defined(__IT) && (__IT == off)
#undef __IT
#define __IT	__off
#endif
#undef off

#define dc_pc	(__IT_XMT_DC | __IT_FMT_PC)
#define __dc_pc	(__IT_XMT_DC | __IT_FMT_PC)
#if defined(__IT) && (__IT == dc_pc)
#undef __IT
#define __IT	__dc_pc
#endif
#undef dc_pc

#define dc	(__IT_XMT_DC | __IT_FMT_DFLT)
#define __dc	(__IT_XMT_DC | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == dc)
#undef __IT
#define __IT	__dc
#endif
#undef dc

#define porta	(__IT_XMT_PORTA | __IT_FMT_DFLT)
#define __porta	(__IT_XMT_PORTA | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == porta)
#undef __IT
#define __IT	__porta
#endif
#undef porta

#define portc	(__IT_XMT_PORTC | __IT_FMT_DFLT)
#define __portc	(__IT_XMT_PORTC | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == portc)
#undef __IT
#define __IT	__portc
#endif
#undef portc

#define portd	(__IT_XMT_PORTD | __IT_FMT_DFLT)
#define __portd	(__IT_XMT_PORTD | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == portd)
#undef __IT
#define __IT	__portd
#endif
#undef portd

#define porte	(__IT_XMT_PORTE | __IT_FMT_DFLT)
#define __porte	(__IT_XMT_PORTE | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == porte)
#undef __IT
#define __IT	__porte
#endif
#undef porte

#define portf	(__IT_XMT_PORTF | __IT_FMT_DFLT)
#define __portf	(__IT_XMT_PORTF | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == portf)
#undef __IT
#define __IT	__portf
#endif
#undef portf

#define portg	(__IT_XMT_PORTG | __IT_FMT_DFLT)
#define __portg	(__IT_XMT_PORTG | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == portg)
#undef __IT
#define __IT	__portg
#endif
#undef portg

#define porth	(__IT_XMT_PORTH | __IT_FMT_DFLT)
#define __porth	(__IT_XMT_PORTH | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == porth)
#undef __IT
#define __IT	__porth
#endif
#undef porth

#define portj	(__IT_XMT_PORTJ | __IT_FMT_DFLT)
#define __portj	(__IT_XMT_PORTJ | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == portj)
#undef __IT
#define __IT	__portj
#endif
#undef portj

#define spi1	(__IT_XMT_SPI1 | __IT_FMT_DFLT)
#define __spi1	(__IT_XMT_SPI1 | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == spi1)
#undef __IT
#define __IT	__spi1
#endif
#undef spi1

#define spi2	(__IT_XMT_SPI2 | __IT_FMT_DFLT)
#define __spi2	(__IT_XMT_SPI2 | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == spi2)
#undef __IT
#define __IT	__spi2
#endif
#undef spi2

#define spi1rc75	(__IT_XMT_SPI1_RC75 | __IT_FMT_DFLT)
#define __spi1rc75	(__IT_XMT_SPI1_RC75 | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == spi1rc75)
#undef __IT
#define __IT	__spi1rc75
#endif
#undef spi1rc75

#define spi2rd20	(__IT_XMT_SPI2_RD20 | __IT_FMT_DFLT)
#define __spi2rd20	(__IT_XMT_SPI2_RD20 | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == spi2rd20)
#undef __IT
#define __IT	__spi2rd20
#endif
#undef spi2rd20

#define spi2f6c		(__IT_XMT_SPI2_F6C | __IT_FMT_DFLT)
#define __spi2f6c	(__IT_XMT_SPI2_F6C | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == spi2f6c)
#undef __IT
#define __IT	__spi2f6c
#endif
#undef spi2f6c

#define uart1	(__IT_XMT_UART1 | __IT_FMT_DFLT)
#define __uart1	(__IT_XMT_UART1 | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == uart1)
#undef __IT
#define __IT	__uart1
#endif
#undef uart1

#define uart2	(__IT_XMT_UART2 | __IT_FMT_DFLT)
#define __uart2	(__IT_XMT_UART2 | __IT_FMT_DFLT)
#if defined(__IT) && (__IT == uart2)
#undef __IT
#define __IT	__uart2
#endif
#undef uart2

#define porta_7		(__IT_XMT_PORTA | __IT_FMT_RAW7)
#define __porta_7	(__IT_XMT_PORTA | __IT_FMT_RAW7)
#if defined(__IT) && (__IT == porta_7)
#undef __IT
#define __IT	__porta_7
#endif
#undef porta_7

#define portc_7		(__IT_XMT_PORTC | __IT_FMT_RAW7)
#define __portc_7	(__IT_XMT_PORTC | __IT_FMT_RAW7)
#if defined(__IT) && (__IT == portc_7)
#undef __IT
#define __IT	__portc_7
#endif
#undef portc_7

#define portd_7		(__IT_XMT_PORTD | __IT_FMT_RAW7)
#define __portd_7	(__IT_XMT_PORTD | __IT_FMT_RAW7)
#if defined(__IT) && (__IT == portd_7)
#undef __IT
#define __IT	__portd_7
#endif
#undef portd_7

#define porte_7		(__IT_XMT_PORTE | __IT_FMT_RAW7)
#define __porte_7	(__IT_XMT_PORTE | __IT_FMT_RAW7)
#if defined(__IT) && (__IT == porte_7)
#undef __IT
#define __IT	__porte_7
#endif
#undef porte_7

#define portf_7		(__IT_XMT_PORTF | __IT_FMT_RAW7)
#define __portf_7	(__IT_XMT_PORTF | __IT_FMT_RAW7)
#if defined(__IT) && (__IT == portf_7)
#undef __IT
#define __IT __portf_7
#endif
#undef portf_7

#define portg_7		(__IT_XMT_PORTG | __IT_FMT_RAW7)
#define __portg_7	(__IT_XMT_PORTG | __IT_FMT_RAW7)
#if defined(__IT) && (__IT == portg_7)
#undef __IT
#define __IT __portg_7
#endif
#undef portg_7

#define porth_7		(__IT_XMT_PORTH | __IT_FMT_RAW7)
#define __porth_7	(__IT_XMT_PORTH | __IT_FMT_RAW7)
#if defined(__IT) && (__IT == porth_7)
#undef __IT
#define __IT __porth_7
#endif
#undef porth_7

#define portj_7		(__IT_XMT_PORTJ | __IT_FMT_RAW7)
#define __portj_7	(__IT_XMT_PORTJ | __IT_FMT_RAW7)
#if defined(__IT) && (__IT == portj_7)
#undef __IT
#define __IT __portj_7
#endif
#undef portj_7

#define porta_8		(__IT_XMT_PORTA | __IT_FMT_RAW8)
#define __porta_8	(__IT_XMT_PORTA | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == porta_8)
#undef __IT
#define __IT __porta_8
#endif
#undef porta_8

#define portc_8		(__IT_XMT_PORTC | __IT_FMT_RAW8)
#define __portc_8	(__IT_XMT_PORTC | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == portc_8)
#undef __IT
#define __IT __portc_8
#endif
#undef portc_8

#define portd_8		(__IT_XMT_PORTD | __IT_FMT_RAW8)
#define __portd_8	(__IT_XMT_PORTD | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == portd_8)
#undef __IT
#define __IT __portd_8
#endif
#undef portd_8

#define porte_8		(__IT_XMT_PORTE | __IT_FMT_RAW8)
#define __porte_8	(__IT_XMT_PORTE | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == porte_8)
#undef __IT
#define __IT __porte_8
#endif
#undef porte_8

#define portf_8		(__IT_XMT_PORTF | __IT_FMT_RAW8)
#define __portf_8	(__IT_XMT_PORTF | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == portf_8)
#undef __IT
#define __IT __portf_8
#endif
#undef portf_8

#define portg_8		(__IT_XMT_PORTG | __IT_FMT_RAW8)
#define __portg_8	(__IT_XMT_PORTG | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == portg_8)
#undef __IT
#define __IT __portg_8
#endif
#undef portg_8

#define porth_8		(__IT_XMT_PORTH | __IT_FMT_RAW8)
#define __porth_8	(__IT_XMT_PORTH | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == porth_8)
#undef __IT
#define __IT __porth_8
#endif
#undef porth_8

#define portj_8		(__IT_XMT_PORTJ | __IT_FMT_RAW8)
#define __portj_8	(__IT_XMT_PORTJ | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == portj_8)
#undef __IT
#define __IT __portj_8
#endif
#undef portj_8

#define spi1_8		(__IT_XMT_SPI1 | __IT_FMT_RAW8)
#define __spi1_8	(__IT_XMT_SPI1 | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == spi1_8)
#undef __IT
#define __IT __spi1_8
#endif
#undef spi1_8

#define spi2_8		(__IT_XMT_SPI2 | __IT_FMT_RAW8)
#define __spi2_8	(__IT_XMT_SPI2 | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == spi2_8)
#undef __IT
#define __IT __spi2_8
#endif
#undef spi2_8

#define spi1rc75_8	(__IT_XMT_SPI1_RC75 | __IT_FMT_RAW8)
#define __spi1rc75_8	(__IT_XMT_SPI1_RC75 | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == spi1rc75_8)
#undef __IT
#define __IT __spi1rc75_8
#endif
#undef spi1rc75_8

#define spi2rd20_8	(__IT_XMT_SPI2_RD20 | __IT_FMT_RAW8)
#define __spi2rd20_8	(__IT_XMT_SPI2_RD20 | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == spi2rd20_8)
#undef __IT
#define __IT __spi2rd20_8
#endif
#undef spi2rd20_8

#define spi2f6c_8	(__IT_XMT_SPI2_RD20 | __IT_FMT_RAW8)
#define __spi2f6c_8	(__IT_XMT_SPI2_RD20 | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == spi2f6c_8)
#undef __IT
#define __IT __spi2f6c_8
#endif
#undef spi2f6c_8

#define uart1_8		(__IT_XMT_UART1 | __IT_FMT_RAW8)
#define __uart1_8	(__IT_XMT_UART1 | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == uart1_8)
#undef __IT
#define __IT __uart1_8
#endif
#undef uart1_8

#define uart2_8		(__IT_XMT_UART2 | __IT_FMT_RAW8)
#define __uart2_8	(__IT_XMT_UART2 | __IT_FMT_RAW8)
#if defined(__IT) && (__IT == uart2_8)
#undef __IT
#define __IT __uart2_8
#endif
#undef uart2_8

#ifndef __IT
#define __TRACE(id)		/* TRACE disabled */
#define __LOG(id,value)		/* LOG disabled */
#else

/* Function Equates */

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_DC)
#define __IT_TRACEFUNC	__it_trace_dc
#define __IT_LOGFUNC	__it_log_dc
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_PORTA)
#define __IT_TRACEFUNC	__it_trace_porta
#define __IT_LOGFUNC	__it_log_porta
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_PORTC)
#define __IT_TRACEFUNC	__it_trace_portc
#define __IT_LOGFUNC	__it_log_portc
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_PORTD)
#define __IT_TRACEFUNC	__it_trace_portd
#define __IT_LOGFUNC	__it_log_portd
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_PORTE)
#define __IT_TRACEFUNC	__it_trace_porte
#define __IT_LOGFUNC	__it_log_porte
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_PORTF)
#define __IT_TRACEFUNC	__it_trace_portf
#define __IT_LOGFUNC	__it_log_portf
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_PORTG)
#define __IT_TRACEFUNC	__it_trace_portg
#define __IT_LOGFUNC	__it_log_portg
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_PORTH)
#define __IT_TRACEFUNC	__it_trace_porth
#define __IT_LOGFUNC	__it_log_porth
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_PORTJ)
#define __IT_TRACEFUNC	__it_trace_portj
#define __IT_LOGFUNC	__it_log_portj
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_SPI1)
#define __IT_TRACEFUNC	__it_trace_spi1
#define __IT_LOGFUNC  	__it_log_spi1
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_SPI2)
#define __IT_TRACEFUNC	__it_trace_spi2
#define __IT_LOGFUNC  	__it_log_spi2
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_SPI1_RC75)
#define __IT_TRACEFUNC	__it_trace_spi1_rc75
#define __IT_LOGFUNC  	__it_log_spi1_rc75
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_SPI2_RD20)
#define __IT_TRACEFUNC	__it_trace_spi2_rd20
#define __IT_LOGFUNC  	__it_log_spi2_rd20
#endif

#if ((__IT & __IT_XMT_MASK) == __IT_XMT_SPI2_F6C)
#define __IT_TRACEFUNC	__it_trace_spi2_f6c
#define __IT_LOGFUNC  	__it_log_spi2_f6c
#endif

/* Technically, you do not have to save the WREG, STATUS, and
* BSR registers in a "C" program. You do, however, have to save
* the INTCON GIEH/GIEL states. The functions below were written
* for all-assembly programs. Re-using them here reduces overall
* code size for mixed "C" and assembly programs. You could strip
* out the save/restore of the WREG, STATUS, and BSR regs if the
* application is written entirely in "C". The savings, however,
* will not be large as the majority of the code is spent on
* saving/restoring the GIEH/GIEL states.
*/

#ifndef __ITINT
#define __ITINT 2
#endif

/* __ITINT=0 for polling apps. No int save/restore necessary */

#if (__ITINT == 1)
#define __IT_SAVE_CONTEXT       _IT_SAVE_ASM_INTNORM
#define __IT_RESTORE_CONTEXT    _IT_RESTORE_ASM_INTNORM
#endif

#if (__ITINT == 2)
#define __IT_SAVE_CONTEXT       _IT_SAVE_ASM_INTPRI
#define __IT_RESTORE_CONTEXT    _IT_RESTORE_ASM_INTPRI
#endif



/***************************************************************
* LOG AND TRACE MACROS
****************************************************************/

#if (__IT == __off)
#define __TRACE(id)		/* TRACE disabled */
#define __LOG(id,value)		/* LOG disabled */
#else

#ifndef __IT_INTERNAL
extern void __IT_TRACEFUNC(char id);
extern void __IT_LOGFUNC(char id, char type, ...);

#if (__ITINT != 0)
extern void __IT_SAVE_CONTEXT(void);
extern void __IT_RESTORE_CONTEXT(void);
#endif

#endif


#if (__ITINT == 0)
#define __TRACE(id)     __builtin_enum_label("__TRACE_",id); \
                        __IT_TRACEFUNC(id)

#define __LOG(id,value) __builtin_enum_label("__LOG_",id); \
                        __IT_LOGFUNC(id,__builtin_ittype(value),(value))
#else

#define __TRACE(id)     __builtin_enum_label("__TRACE_",id); \
                        __IT_SAVE_CONTEXT(); \
                        __IT_TRACEFUNC(id); \
                        __IT_RESTORE_CONTEXT()

#define __LOG(id,value) __builtin_enum_label("__LOG_",id); \
                        __IT_SAVE_CONTEXT(); \
                        __IT_LOGFUNC(id,__builtin_ittype(value),(value)); \
                        __IT_RESTORE_CONTEXT()

#endif				/* __ITINT != 0 */
#endif				/* __IT != __off */

#endif				/* __IT defined */
#endif				/* TRACE18_H defined */
