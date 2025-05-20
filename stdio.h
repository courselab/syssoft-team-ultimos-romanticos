
#ifndef E8_H
#define E8_H

void __attribute__((fastcall, naked)) printf(const char *);
unsigned short __attribute__((fastcall, naked)) get_mem_size(void);

#endif
