/*
** EPITECH PROJECT, 2021
** day06
** File description:
** MY STRNCMP
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    while (n != 0 && *s1 == *s2) {
        if (*s1 == '\0') {
            return 0;
        }
        s1 += 1;
        s2 += 1;
        n -= 1;
    }
    if (n != 0) {
        return *s1 - *s2;
    }
    return 0;
}
