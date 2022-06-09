/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** my_putstr
*/

#include <unistd.h>
#include "my.h"

int my_strlen(char const *str);

void my_putstr(char const *str)
{
    int len = my_strlen(str);
    write(0, str, len);
}
