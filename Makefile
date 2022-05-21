##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make
##

CPPFLAGS	+=	-I ./include/ -W -Wextra -Werror

LFLAGS		=	-lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

SRC 	=	init.c \
        init_png.c \
        init_text.c \
        draw.c \
        png_action.c \
		main.c \

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