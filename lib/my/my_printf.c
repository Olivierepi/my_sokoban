/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "my.h"

int find_indicator(char c, va_list list)
{
    int i = -1;
    while (tab[++i].indicator != c && tab[i].indicator != 0);
    if (tab[i].indicator != 0) {
        tab[i].ptr_on_func(list);
    } else if (c == '%') {
        my_putchar('%');
    }
    return 0;
}

int my_printf(char *s,...)
{
    va_list list;

    va_start(list, s);
    for (int i = 0; s[i] != '\0';i++) {
        if (s[i] == '%') {
            find_indicator(s[i + 1], list);
            i += 1;
        } else {
            my_putchar(s[i]);
        }
    }
    va_end(list);
    return 0;
}
