#ifndef _INTTYPES_H
#define _INTTYPES_H

#include <musl_xc8.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <features.h>
#include <stdint.h>

#include <bits/alltypes.h>

typedef struct { intmax_t quot, rem; } imaxdiv_t;

intmax_t imaxabs(intmax_t);
imaxdiv_t imaxdiv(intmax_t, intmax_t);

intmax_t strtoimax(const char *__restrict, char **__restrict, int);
uintmax_t strtoumax(const char *__restrict, char **__restrict, int);

#define __PRI64  "ll"
#define __PRIPTR "l"
#define	__PRI32  "l"
#if __SIZEOF_LONG_LONG__ == 8
#define __PRIMAX __PRI64
#else
#define __PRIMAX __PRI32
#endif

#define PRId8  "d"
#define PRId16 "d"
#define PRId32 __PRI32 "d"
#if __SIZEOF_LONG_LONG__ == 8
#define PRId64 __PRI64 "d"
#endif

#define PRIdLEAST8  "d"
#define PRIdLEAST16 "d"
#define PRIdLEAST32 __PRI32 "d"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIdLEAST64 __PRI64 "d"
#endif

#define PRIdFAST8  "d"
#define PRIdFAST16 "d"
#define PRIdFAST32 __PRI32 "d"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIdFAST64 __PRI64 "d"
#endif

#define PRIi8  "i"
#define PRIi16 "i"
#define PRIi32 __PRI32 "i"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIi64 __PRI64 "i"
#endif

#define PRIiLEAST8  "i"
#define PRIiLEAST16 "i"
#define PRIiLEAST32 __PRI32 "i"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIiLEAST64 __PRI64 "i"
#endif

#define PRIiFAST8  "i"
#define PRIiFAST16 "i"
#define PRIiFAST32 __PRI32 "i"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIiFAST64 __PRI64 "i"
#endif

#define PRIo8  "o"
#define PRIo16 "o"
#define PRIo32 __PRI32 "o"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIo64 __PRI64 "o"
#endif

#define PRIoLEAST8  "o"
#define PRIoLEAST16 "o"
#define PRIoLEAST32 __PRI32 "o"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIoLEAST64 __PRI64 "o"
#endif

#define PRIoFAST8  "o"
#define PRIoFAST16 "o"
#define PRIoFAST32 __PRI32 "o"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIoFAST64 __PRI64 "o"
#endif

#define PRIu8  "u"
#define PRIu16 "u"
#define PRIu32 __PRI32 "u"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIu64 __PRI64 "u"
#endif

#define PRIuLEAST8  "u"
#define PRIuLEAST16 "u"
#define PRIuLEAST32 __PRI32 "u"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIuLEAST64 __PRI64 "u"
#endif

#define PRIuFAST8  "u"
#define PRIuFAST16 "u"
#define PRIuFAST32 __PRI32 "u"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIuFAST64 __PRI64 "u"
#endif

#define PRIx8  "x"
#define PRIx16 "x"
#define PRIx32 __PRI32 "x"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIx64 __PRI64 "x"
#endif

#define PRIxLEAST8  "x"
#define PRIxLEAST16 "x"
#define PRIxLEAST32 __PRI32 "x"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIxLEAST64 __PRI64 "x"
#endif

#define PRIxFAST8  "x"
#define PRIxFAST16 "x"
#define PRIxFAST32 __PRI32 "x"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIxFAST64 __PRI64 "x"
#endif

#define PRIX8  "X"
#define PRIX16 "X"
#define PRIX32 __PRI32 "X"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIX64 __PRI64 "X"
#endif

#define PRIXLEAST8  "X"
#define PRIXLEAST16 "X"
#define PRIXLEAST32 __PRI32 "X"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIXLEAST64 __PRI64 "X"
#endif

#define PRIXFAST8  "X"
#define PRIXFAST16 "X"
#define PRIXFAST32 __PRI32 "X"
#if __SIZEOF_LONG_LONG__ == 8
#define PRIXFAST64 __PRI64 "X"
#endif

#define PRIdMAX __PRIMAX "d"
#define PRIiMAX __PRIMAX "i"
#define PRIoMAX __PRIMAX "o"
#define PRIuMAX __PRIMAX "u"
#define PRIxMAX __PRIMAX "x"
#define PRIXMAX __PRIMAX "X"

#define PRIdPTR __PRIPTR "d"
#define PRIiPTR __PRIPTR "i"
#define PRIoPTR __PRIPTR "o"
#define PRIuPTR __PRIPTR "u"
#define PRIxPTR __PRIPTR "x"
#define PRIXPTR __PRIPTR "X"

#define SCNd8   "hhd"
#define SCNd16  "hd"
#define SCNd32  __PRI32 "d"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNd64  __PRI64 "d"
#endif

#define SCNdLEAST8  "hhd"
#define SCNdLEAST16 "hd"
#define SCNdLEAST32 __PRI32 "d"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNdLEAST64 __PRI64 "d"
#endif

#define SCNdFAST8  "hhd"
#define SCNdFAST16 "d"
#define SCNdFAST32 __PRI32 "d"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNdFAST64 __PRI64 "d"
#endif

#define SCNi8   "hhi"
#define SCNi16  "hi"
#define SCNi32  __PRI32 "i"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNi64  __PRI64 "i"
#endif

#define SCNiLEAST8  "hhi"
#define SCNiLEAST16 "hi"
#define SCNiLEAST32 __PRI32 "i"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNiLEAST64 __PRI64 "i"
#endif

#define SCNiFAST8  "hhi"
#define SCNiFAST16 "i"
#define SCNiFAST32 __PRI32 "i"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNiFAST64 __PRI64 "i"
#endif

#define SCNu8   "hhu"
#define SCNu16  "hu"
#define SCNu32  __PRI32 "u"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNu64  __PRI64 "u"
#endif

#define SCNuLEAST8  "hhu"
#define SCNuLEAST16 "hu"
#define SCNuLEAST32 __PRI32 "u"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNuLEAST64 __PRI64 "u"
#endif

#define SCNuFAST8 "hhu"
#define SCNuFAST16 "u"
#define SCNuFAST32 __PRI32 "u"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNuFAST64 __PRI64 "u"
#endif

#define SCNo8   "hho"
#define SCNo16  "ho"
#define SCNo32  __PRI32 "o"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNo64  __PRI64 "o"
#endif

#define SCNoLEAST8  "hho"
#define SCNoLEAST16 "ho"
#define SCNoLEAST32 __PRI32 "o"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNoLEAST64 __PRI64 "o"
#endif

#define SCNoFAST8  "hho"
#define SCNoFAST16 "o"
#define SCNoFAST32 __PRI32 "o"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNoFAST64 __PRI64 "o"
#endif

#define SCNx8   "hhx"
#define SCNx16  "hx"
#define SCNx32  __PRI32 "x"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNx64  __PRI64 "x"
#endif

#define SCNxLEAST8  "hhx"
#define SCNxLEAST16 "hx"
#define SCNxLEAST32 __PRI32 "x"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNxLEAST64 __PRI64 "x"
#endif

#define SCNxFAST8  "hhx"
#define SCNxFAST16 "x"
#define SCNxFAST32 __PRI32 "x"
#if __SIZEOF_LONG_LONG__ == 8
#define SCNxFAST64 __PRI64 "x"
#endif

#define SCNdMAX __PRIMAX "d"
#define SCNiMAX __PRIMAX "i"
#define SCNoMAX __PRIMAX "o"
#define SCNuMAX __PRIMAX "u"
#define SCNxMAX __PRIMAX "x"

#define SCNdPTR __PRIPTR "d"
#define SCNiPTR __PRIPTR "i"
#define SCNoPTR __PRIPTR "o"
#define SCNuPTR __PRIPTR "u"
#define SCNxPTR __PRIPTR "x"

#ifdef __cplusplus
}
#endif

#endif

