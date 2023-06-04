#ifndef _ERRNO_H_
#define _ERRNO_H_

#define ENOMEM          12
#define EINVAL		22  /* Invalid argument */
#define	EDOM		33	/* Domain error */
#define	ERANGE		34	/* Range error */
#define EOVERFLOW	75	/* Value too large for data type */ 
#define EILSEQ		84	/* Character sequence error */
#define ENOSYS          89

extern int errno;

#endif // _ERRNO_H_
