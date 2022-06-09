/*
** EPITECH PROJECT, 2021
** day06
** File description:
** my_strncat
*/

#include "my.h"

char *my_strndup(char *src, int nb)
{
    char *len_result = malloc(sizeof(char) * (nb + 2));

    for (int a = 0; a < nb; a++) {
        len_result[a] = src[a];
    }
    len_result[nb + 1] = '\0';
    return len_result;
}
