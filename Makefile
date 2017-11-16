##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src/function_swap.c	\
		src/pushswap.c		\
		src/display.c		\
		src/my_data_in_list.c	\
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	pushswap

CFLAGS	=	-W -Wall -Wextra -Werror -I./include

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f *#

fclean:		clean
		rm -f $(NAME)

re:	fclean all
