##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME    	= my_runner

CC      	= gcc

RM      	= rm -f

SRC 		= src/main.c \
			src/initalize.c \
			src/jump.c \
			src/set_all.c \
			src/random_spawn.c \
			src/hitboxes.c \
			src/flag_h.c \

OBJ 		= $(SRC:.c=.o)

CFLAGS 		= -W -Wall -Wextra -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all			: $(NAME)

$(NAME)		:	$(OBJ)
			$(CC) $(SRC) -o $(NAME) lib/my/libmy.a $(CFLAGS)
			make clean

clean		:
			$(RM) $(OBJ)

fclean		: clean
			$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re
