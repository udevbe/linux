#ifndef _ASM_WASM32_STRING_H
#define _ASM_WASM32_STRING_H

#include <linux/types.h>

#define __HAVE_ARCH_MEMCPY
extern void *memcpy(void *, const void *, __kernel_size_t);
#define memcpy(d, s, n) __builtin_memcpy(d, s, n)

#define __HAVE_ARCH_MEMSET
extern void *memset(void *, int, __kernel_size_t);
#define memset(d, c, n) __builtin_memset(d, c, n)

#endif //LINUX_STRING_H
