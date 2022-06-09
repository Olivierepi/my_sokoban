/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** copy_arr
*/

#include "my.h"

int len_arr(char **arr)
{
    int i = 0;

    for (; arr[i] != NULL;i++);
    return i;
}

char **my_arrcopy(char **arr)
{
    int size_arr = len_arr(arr);
    char **new_arr = malloc(sizeof(char *) * (size_arr + 1));

    if (arr == NULL)
        return NULL;
    for (int i = 0; i < size_arr; i++) {
        new_arr[i] = my_strdup(arr[i]);
    }
    return new_arr;
}
