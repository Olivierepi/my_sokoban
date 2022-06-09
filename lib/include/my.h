/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int my_printf(char *s,...);
void my_put_nbr(int nb);
void my_putchar(char c);

int my_strlen(char const *str);
char *my_strdup(char *src);
char **copy_arr(char **arr, int add);

void my_printchar(va_list list);
void my_printstr(va_list list);
void my_print_nbr(va_list list);

struct indicator_type
{
    char indicator;
    void (*ptr_on_func)(va_list list);
};

typedef struct indicator_type indicator_type;

static indicator_type tab[] =
{
    {'c', my_printchar},
    {'s', my_printstr},
    {'d', my_print_nbr},
    {'i', my_print_nbr},
};

#endif /* !MY_H_ */
