/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** win
*/

#include "my.h"

int check_win(map_st_t *map)
{
    for (int j = 0; map->map[j] != NULL; j++) {
        for (int i = 0; map->map[j][i] != '\0'; i++) {
            if (map->map[j][i] == 'O')
                return 0;
            if (map->map[j][i] == 'P' &&\
            map->map_save[j][i] == 'O')
                return 0;
        }
    }
    return 1;
}

int check_x(map_st_t *map, int i, int j)
{
    if (map->map[i][j] == 'X' && (map->map[i + 1][j] == '#' &&\
    map->map[i][j + 1] == '#'))
        return 1;
    if (map->map[i][j] == 'X' && (map->map[i - 1][j] == '#' &&\
    map->map[i][j + 1] == '#'))
        return 1;
    if (map->map[i][j] == 'X' && (map->map[i - 1][j] == '#' &&\
    map->map[i][j - 1] == '#'))
        return 1;
    if (map->map[i][j] == 'X' && (map->map[i + 1][j] == '#' &&\
    map->map[i][j - 1] == '#'))
        return 1;
    return 0;
}

int check_lose(map_st_t *map)
{
    int j = 0;

    for (int i = 0; i < map->nb_x; i++)
        j = j + check_x(map, map->x[i].y, map->x[i].x);
    if (j == map->nb_x)
        return 1;
    return 0;
}

int check_status(map_st_t *map)
{
    map->x = find_x(map);
    if (check_win(map) != 0)
        return 0;
    else if (check_lose(map))
        return 1;
    return 2;
}
