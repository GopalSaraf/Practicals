#if defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE) \
 || defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define PAGE_SIZE 4096
#define LONG_BIT 32
#endif

#define INT_MAX  0x7fff
#define LONG_MAX  0x7fffffffL
#if __SIZEOF_LONG_LONG__ == __SIZEOF_LONG__
#define LLONG_MAX  LONG_MAX
#else
#define LLONG_MAX  0x7fffffffffffffffLL
#endif
