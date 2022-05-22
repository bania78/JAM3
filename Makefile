##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make
##

CPPFLAGS	+=	-I ./include/ -W -Wextra -Werror

LFLAGS		=	-lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

SRC 	=	src/init.c \
        	src/init_png.c \
        	src/init_text.c \
        	src/draw.c \
        	src/png_action.c \
			src/main.c \
			src/menu_start.c \
			src/map.c \

OBJ 	=	$(SRC:.c=.o)

NAME 	=	my_runner

all:	$(NAME)

$(NAME): 	$(OBJ)
		gcc -o  $(NAME) $(OBJ) $(LFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all