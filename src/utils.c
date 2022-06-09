/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** utils
*/

#include "my.h"

int print_h(void)
{
    my_printf("USAGE\n");
    my_printf("     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("     map  file representing the ");
    my_printf("warehouse map, containing ‘#’ for walls,\n");
    my_printf("          ‘P’ for the player, ");
    my_printf("‘X’ for boxes and ‘O’ for storage locations.\n");
    return 0;
}

int exit_game(int win)
{
	endwin();
    keypad(stdscr, FALSE);
    nodelay(stdscr, TRUE);
	return win;
}