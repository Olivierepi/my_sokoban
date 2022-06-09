##
## EPITECH PROJECT, 2022
## Minishell1
## File description:
## Makefile
##

CC =	gcc

CFLAGS =	-W -Wextra -Wall -Werror -I include/ -g3

LDFLAGS =	-Llib/my/ -lmy -lncurses

SRC =	$(wildcard src/*.c)

OBJ =	$(SRC:.c=.o)

BIN_NAME	=	my_sokoban

all: make_lib $(BIN_NAME) $(OBJ)

make_lib:
	@ make -C lib/my

$(BIN_NAME): $(OBJ)
	@ echo "\033[1;36m[ FILES COMPILED ] \033[0m \033[1;34mMY SOKOBAN \033[0m"
	@ $(CC) -o $(BIN_NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)
	@ echo "\033[1;32m[ SUCCESS ] \033[0m\033[1;34mBinary :\033[1;32m SOKOBAN \033[1;34m created sucesfully.\033[0m"

clean:
	@ rm -f $(OBJ)
	@ make clean -C lib/my

fclean: clean
	@ rm -f $(BIN_NAME)
	@ make fclean -C lib/my

re: fclean all
