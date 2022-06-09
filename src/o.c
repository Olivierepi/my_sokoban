/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** o
*/

#include "my.h"

int check_o(map_st_t *map, int i, int j)
{
    if (map->map_save[i][j] == 'O') {
        if (map->map[i][j] == ' ')
            map->map[i][j] = 'O';
    }
    return 0;
}

int checks_o(map_st_t *map)
{
    for (int i = 0; map->map_save[i] != NULL; i++) {
        for (int j = 0; map->map_save[i][j] != '\0'; j++)
            check_o(map, i, j);
    }
    return 0;
}
