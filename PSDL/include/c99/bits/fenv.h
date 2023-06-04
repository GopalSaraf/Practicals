#define FE_INVALID    1
#define FE_DIVBYZERO  4
#define FE_OVERFLOW   8
#define FE_UNDERFLOW  16
#define FE_INEXACT    32

#define FE_ALL_EXCEPT 61

#define FE_TONEAREST  0
#define FE_DOWNWARD   0x400
#define FE_UPWARD     0x800
#define FE_TOWARDZERO 0xc00

typedef unsigned short fexcept_t;

typedef struct {
	unsigned short __control_word;
	unsigned short __status_word;
} fenv_t;

#define FE_DFL_ENV      ((const fenv_t *) -1)

// Standard floating-point environment execptions are not supported by XC8-PIC.
// Also floating-point rounding is immutable.
#if defined(__PICC18__) || defined(__PICC__)
#define MINIMAL_FENV	1
#endif
