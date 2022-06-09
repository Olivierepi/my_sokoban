/*
** EPITECH PROJECT, 2021
** day06
** File description:
** My STR CMP
*/

#include "my.h"

int my_strcmp(char const *s1 , char const *s2)
{
    while (*s1 && *s1 == *s2) {
        s1 += 1;
        s2 += 1;
    }
    return *s1 - *s2;
}
