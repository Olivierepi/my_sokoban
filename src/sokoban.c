/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** sokoban
*/

#include "my.h"

int loop(map_st_t *map)
{
	int win = 2;
	int key = 2;

    while (key != 'q') {
        key = getch();
		check_key(key, map);
		checks_o(map);
        clear();
        refresh();
		print_array(map->map);
		win = check_status(map);
		if (win != 2)
			return win;
    }
	return 84;
}

int game(map_st_t *map)
{
	int win = 0;

	init_game();
	map->o = find_o(map);
	print_array(map->map);
	win = loop(map);
	clear();
	print_array(map->map);
	refresh();
	sleep(1);
	return exit_game(win);
}

int main(int argc, char **argv)
{
    if (argc == 2) {
        if (my_strcmp(argv[1], "-h") == 0)
			return print_h();
		return launch_game(argv[1]);
    }
	return 84;
}
