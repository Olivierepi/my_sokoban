/*
** EPITECH PROJECT, 2021
** day04
** File description:
** MY PUT NBR
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void my_put_nbr(int nb)
{
    int d = 0;

    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            my_putchar('2');
            nb = nb + 2000000000;
        }
        nb = - nb;
    }
    if (nb == 10) {
        my_putchar('1');
    }
    d = nb % 10;
    if (nb > 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar(d + 48);
}

void my_print_nbr(va_list list)
{
    int nb = va_arg(list, int);
    int d = 0;

    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            my_putchar('2');
            nb = nb + 2000000000;
        }
        nb = - nb;
    }
    if (nb == 10) {
        my_putchar('1');
    }
    d = nb % 10;
    if (nb > 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar(d + 48);
}
