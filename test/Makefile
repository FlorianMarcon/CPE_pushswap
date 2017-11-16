##
## EPITECH PROJECT, 2017
## makefile
## File description:
## test unitare
##

DIR_SRC_UT	=	chemin

SRC_UT	=

DIR_SRC	=	chemin

SRC	=

OBJ	= 	$(SRC:.c=.o) $(SRC_UT:.c=.o)

NAME	=	units

LDFLAGS	=	-lcriterion

CFLAGS	=	-W -Wall -Wextra -Werror -I./../include

all:		$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) -L./../lib/my -lmy

clean:
	rm -f $(OBJ)

fclean: rm -f $(NAME)
	rm -f $(DIR_SRC)/*.o
	rm -f $(DIR_SRC_UT)/*.o
	rm -f $(DIR_SRC)/*#
	rm -f $(DIR_SRC_UT)/*#
	rm -f $(DIR_SRC)/*~
	rm -f $(DIR_SRC_UT)/*~

re: all clean
