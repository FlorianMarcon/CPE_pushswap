##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src/display_list.c	\
		src/main.c		\
		src/pushswap.c		\
		src/function_swap/swap_l.c		\
		src/function_swap/swap_p.c		\
		src/function_swap/swap_r.c		\
		src/function_swap/swap_rr.c		\
		src/other_function.c	\
		src/sort_list/sort_list.c		\
		src/merge/merge.c		\
		src/comparaison/comparaison.c	\
		src/check_list.c		\
#		src/division_list/division_list.c	\

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

fclean:	clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re:	fclean all
