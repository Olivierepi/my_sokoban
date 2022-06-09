/*
** EPITECH PROJECT, 2021
** day06
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest , char *src)
{
    int i = 0;
    char *new_str = malloc((my_strlen(dest)\
    + my_strlen(src) + 2) * sizeof(char));

    while (dest[i] != '\0') {
        new_str[i] = dest[i];
        i++;
    }
    while (*src != '\0') {
        new_str[i++] = *src++;
    }
    new_str[i] = '\0';
    return new_str;
}
