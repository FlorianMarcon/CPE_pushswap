##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src/display_list.c	\
		src/main.c		\
		src/pushswap.c		\
		src/swap_l.c		\
		src/swap_p.c		\
		src/swap_r.c		\
		src/swap_rr.c		\
		src/other_function.c	\
		src/division_list.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	pushswap

CFLAGS	=	-W -Wall -Wextra -Werror -I./include -g3

all:	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f *#

fclean:		clean
		rm -f $(NAME)

re:	fclean all
