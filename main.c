/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *    This file is part of SYSeg, available at https://gitlab.com/monaco/syseg.
 */

#include <stdio.h>

/* Convert unsigned short to string and print it */
void print_uint(unsigned short num) {
    char str[6]; // Maximum 5 digits for 16-bit number + null terminator
    int i = 0;

    /* Handle case when num is 0 */
    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        printf(str);
        return;
    }

    /* Convert number to string (in reverse) */
    char rev[6];
    int ri = 0;
    while (num > 0) {
        rev[ri++] = '0' + (num % 10);
        num /= 10;
    }
    rev[ri] = '\0';

    /* Reverse the string */
    while (ri > 0) {
        str[i++] = rev[--ri];
    }
    str[i] = '\0';

    printf(str);
}

int main(void) {
    printf("Hello World");
    printf("\r\nMemory Size: ");

    unsigned short mem_kb = get_mem_size();
    print_uint(mem_kb);
    printf(" KB");

    return 0;
}
