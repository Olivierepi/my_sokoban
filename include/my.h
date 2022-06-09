/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #define UNUSED() __attribute__((unused))
    #include <ncurses.h>
    #include <stdlib.h>
    #include <time.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>

typedef struct p_s {
    int x;
    int y;
} p_t;

typedef struct o_s {
    int x;
    int y;
} o_t;

typedef struct x_s {
    int x;
    int y;
} x_t;

typedef struct map_st {
    p_t p;
    int nb_o;
    o_t *o;
    int nb_x;
    x_t *x;
    char **map;
    char **map_save;
} map_st_t;

struct indicator_type
{
    int key_indicator;
    void (*ptr_on_func)(map_st_t *my_map);
};

int game(map_st_t *map);

void up(map_st_t *map);
void down(map_st_t *map);
void right(map_st_t *map);
void left(map_st_t *map);

p_t find_p(map_st_t *map);
x_t *find_x(map_st_t *map);
o_t *find_o(map_st_t *map);

int print_h(void);

void init_game(void);
int launch_game(char *map_path);
int init_map(char *map_path, map_st_t *my_map);

int checks_o(map_st_t *map);
void check_key(int key, map_st_t *map);
int check_status(map_st_t *map);

char *map_buffer(const char *filepath);
void print_array(char **map);

int exit_game(int win);

int my_printf(char *s,...);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcat(char *dest , char const *src);
int my_strcmp(char const *s1 , char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcpy(char *dest , char const *src);
char *my_strndup(char *src, int nb);
char **my_arrcopy(char **arr);
char **my_str_to_word_array(char *str, char c);

#endif /* !MY_H_ */
