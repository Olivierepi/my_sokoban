/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** init
*/

#include "my.h"

void init_game(void)
{
 	initscr();
	curs_set(0);
	keypad(stdscr, TRUE);
	noecho();
	nodelay(stdscr, FALSE);
}

int check_file(const char *filepath)
{
    int fd = STDOUT_FILENO;
    fd = open(filepath, O_RDONLY);
    close(fd);
    return fd;
}

int init_map(char *map_path, map_st_t *my_map)
{
    char *buffer = NULL;

    if (check_file(map_path) < 0)
        return 84;
    buffer = map_buffer(map_path);
    if (buffer == NULL)
        return 84;
    my_map->map = my_str_to_word_array(buffer, '\n');
    my_map->map_save = my_arrcopy(my_map->map);
    return 0;
}

int launch_game(char *map_path)
{
    map_st_t my_map;

	if (init_map(map_path, &my_map) != 0)
        return 84;
    return game(&my_map);
}
