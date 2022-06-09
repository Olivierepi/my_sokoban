/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char *src)
{
    int len_src = my_strlen(src);
    char *len_result = malloc(sizeof(char) * (len_src + 2));

    for (int a = 0; src[a] != '\0'; a++) {
        len_result[a] = src[a];
    }
    len_result[len_src] = '\0';
    return len_result;
}
