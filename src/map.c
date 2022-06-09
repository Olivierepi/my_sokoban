/*
** EPITECH PROJECT, 2022
** My Sokoban
** File description:
** load_map
*/

#include "my.h"

char *map_buffer(const char *filepath)
{
    struct stat file;
    stat(filepath, &file);
    char *buffer = malloc(sizeof(char) * file.st_size + 1);
    int fd = STDOUT_FILENO;

    fd = open(filepath, O_RDONLY);
    ssize_t n = read(fd, buffer, file.st_size);
    buffer[n] = '\0';
    close(fd);
    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] != '\n' && buffer[i] != ' ' && buffer[i] != '#'\
        && buffer[i] != 'O' && buffer[i] != 'P' && buffer[i] != 'X')
            return NULL;
    return buffer;
}

void print_array(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        printw("%s\n", map[i]);
}