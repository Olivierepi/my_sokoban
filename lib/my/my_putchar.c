/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** my_putchar
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
