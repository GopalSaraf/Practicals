/* Errata symbols and codes that may
 * be present in preprocessor
 * symbol _ERRATA_TYPES.
 */

#ifndef _XC8_ERRATA_H_
#define _XC8_ERRATA_H_

/* PIC18 errata */
#define	ERRATA_4000	(1<<0)	// Program mem accesses/jumps across 4000h address boundary
#define	ERRATA_FASTINTS (1<<1)	// Fast interrupt shadow registers corruption
#define	ERRATA_LFSR	(1<<2)	// Broken LFSR instruction
#define	ERRATA_MINUS40	(1<<3)	// Program memory reads at -40 degrees
#define	ERRATA_RESET	(1<<4)	// GOTO instruction cannot exist at reset vector
#define	ERRATA_BSR15	(1<<5)	// Flag problems when BSR holds value 15
#define	ERRATA_DAW	(1<<6)	// Broken DAW instruction
#define	ERRATA_EEDATARD	(1<<7)	// Read EEDAT in immeadiate instruction after RD set
#define	ERRATA_EEADR	(1<<8)	// Don't set RD bit immediately after loading EEADR
#define	ERRATA_EE_LVD	(1<<9)	// LVD must stabilise before writing EEPROM
#define	ERRATA_FL_LVD	(1<<10)	// LVD must stabilise before writing Flash
#define	ERRATA_TBLWTINT	(1<<11)	// Clear interrupt registers before tblwt instruction
#define	ERRATA_FW4000	(1<<12)	// Flash write exe must act on opposite side of 4000h boundary.
#define	ERRATA_RESETRAM	(1<<13)	// RAM contents can corrupt if async. reset occur during write access.
#define	ERRATA_FETCH	(1<<14)	// Corruptable instruction fetch. Apply FFFFh at required locations.
#define ERRATA_BRKNOP2	(1<<17) // Use 2 nops instead of bra +1 for nop2.  Helps with h/w breakpoints.
#define ERRATA_NVMREG	(1<<18) // Setup NVMREG to enable PFM table reads
#define ERRATA_BSR63	(1<<19) // K42 problems with MOVFF when BSR is 63 and src/dest is an indirection SFR

/* PIC errata */
#define ERRATA_CLOCKSW	(1<<15) // Clock switching can cause a single corrupted instruction
#define ERRATA_BRANCH	(1<<16) // PC becomes invalid when restoring from an interrupt during a BRA or BRW instruction

#endif
