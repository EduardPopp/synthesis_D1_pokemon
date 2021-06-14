##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## .
##

SRC	=	src/main.c \
		src/create_monster_db.c	\
		src/linked_list.c \
		my_str_to_word_array.c \
		csv_parser.c \
		free_everything.c \
		src/print_pokemons.c \
		src/gameloop.c	\
		src/name_sort_pokemon.c	\
		src/create_pokedex.c	\
		src/error_check_pokedex.c

OBJ	=	$(SRC:.c=.o)

NAME	=	pokemon

INC	=	-I include/

LMY	=	-L lib/my/ -lmy

all:	$(NAME) $(OBJ)

$(NAME):	$(OBJ)
	make -C ./lib/my/
	gcc $(SRC) -o $(NAME) $(LMY) $(INC) -g3 -Wall -Wextra -W

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(OBJ)
	rm -f $(NAME)

re:	fclean all