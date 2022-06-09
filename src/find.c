/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** find
*/

#include "my.h"

int count_char(map_st_t *map, char c)
{
    int nb = 0;

    for (int i = 0; map->map[i] != NULL; i++) {
        for (int j = 0; map->map[i][j] != '\0'; j++) {
            if (map->map[i][j] == c)
                nb++;
        }
    }
    return nb;
}

p_t find_p(map_st_t *map)
{
    p_t p;

    p.x = 0;
    p.y = 0;
    for (; map->map[p.y] != NULL; p.y++) {
        for (; map->map[p.y][p.x] != '\0'; p.x++) {
            if (map->map[p.y][p.x] == 'P')
                return p;
        }
        p.x = 0;
    }
    p.x = 0;
    p.y = 0;
    return p;
}

o_t *find_o(map_st_t *map)
{
    int t = 0;
    map->nb_o = count_char(map, 'O');
    o_t *o = malloc(sizeof(x_t) * (map->nb_o + 2));

    o[t].x = 0;
    o[t].y = 0;
    for (int i = 0; map->map[i] != NULL; i++) {
        for (int j = 0; map->map[i][j] != '\0'; j++) {
            if (map->map[i][j] == 'O') {
                o[t].x = j;
                o[t].y = i;
                t++;
            }
        }
    }
    return o;
}

x_t *find_x(map_st_t *map)
{
    int t = 0;
    map->nb_x = count_char(map, 'X');
    x_t *x = malloc(sizeof(x_t) * (map->nb_x + 2));

    x[t].x = 0;
    x[t].y = 0;
    for (int i = 0; map->map[i] != NULL; i++) {
        for (int j = 0; map->map[i][j] != '\0'; j++) {
            if (map->map[i][j] == 'X') {
                x[t].x = j;
                x[t].y = i;
                t++;
            }
        }
    }
    return x;
}
