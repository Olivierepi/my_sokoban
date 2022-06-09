/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** move
*/

#include <my.h>

void right(map_st_t *map)
{
    if (map->map[map->p.y][map->p.x + 1] == ' ' || \
        map->map[map->p.y][map->p.x + 1] == 'O') {
        map->map[map->p.y][map->p.x + 1] = 'P';
        map->map[map->p.y][map->p.x] = ' ';
    }
    if ((map->map[map->p.y][map->p.x + 1] == 'X') && \
    (map->map[map->p.y][map->p.x + 2] == ' ' || \
    map->map[map->p.y][map->p.x + 2] == 'O')) {
        map->map[map->p.y][map->p.x + 1] = 'P';
        map->map[map->p.y][map->p.x + 2] = 'X';
        map->map[map->p.y][map->p.x] = ' ';
    }
}

void left(map_st_t *map)
{
    if (map->map[map->p.y][map->p.x - 1] == ' ' || \
        map->map[map->p.y][map->p.x - 1] == 'O') {
        map->map[map->p.y][map->p.x - 1] = 'P';
        map->map[map->p.y][map->p.x] = ' ';
    }
    if ((map->map[map->p.y][map->p.x - 1] == 'X') && \
    (map->map[map->p.y][map->p.x - 2] == ' ' || \
    map->map[map->p.y][map->p.x - 2] == 'O')) {
        map->map[map->p.y][map->p.x - 1] = 'P';
        map->map[map->p.y][map->p.x - 2] = 'X';
        map->map[map->p.y][map->p.x] = ' ';
    }
}

void up(map_st_t *map)
{
    if (map->map[map->p.y - 1][map->p.x] == ' ' || \
        map->map[map->p.y - 1][map->p.x] == 'O') {
        map->map[map->p.y - 1][map->p.x] = 'P';
        map->map[map->p.y][map->p.x] = ' ';
    }
    if ((map->map[map->p.y - 1][map->p.x] == 'X') && \
    (map->map[map->p.y - 2][map->p.x] == ' ' || \
    map->map[map->p.y - 2][map->p.x] == 'O')) {
        map->map[map->p.y - 1][map->p.x] = 'P';
        map->map[map->p.y - 2][map->p.x] = 'X';
        map->map[map->p.y][map->p.x] = ' ';
    }
}

void down(map_st_t *map)
{
    if (map->map[map->p.y + 1][map->p.x] == ' ' || \
        map->map[map->p.y + 1][map->p.x] == 'O') {
        map->map[map->p.y + 1][map->p.x] = 'P';
        map->map[map->p.y][map->p.x] = ' ';
    }
    if ((map->map[map->p.y + 1][map->p.x] == 'X') && \
    (map->map[map->p.y + 2][map->p.x] == ' ' || \
    map->map[map->p.y + 2][map->p.x] == 'O')) {
        map->map[map->p.y + 1][map->p.x] = 'P';
        map->map[map->p.y + 2][map->p.x] = 'X';
        map->map[map->p.y][map->p.x] = ' ';
    }
}
