/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** check_key
*/

#include "my.h"

static struct indicator_type tab[] =
{
    {KEY_UP, up},
    {KEY_DOWN, down},
    {KEY_RIGHT, right},
    {KEY_LEFT, left},
};

void check_key(int key, map_st_t *map)
{
    map->p = find_p(map);
    for (int a = 0; tab[a].key_indicator; a++) {
        if (tab[a].key_indicator == key)
            return tab[a].ptr_on_func(map);
    }
    if (key == ' ')
        map->map = my_arrcopy(map->map_save);
}

