/*
** EPITECH PROJECT, 2017
** PUSHSWAP
** File description:
** main
*/

#include "my.h"
#include "header_PUSHSWAP.h"

int	main(int ac, char **av)
{
	if (ac != 1) {
		pushswap(av, ac);
		my_putchar('\n');
		return (0);
	}
	my_putstr("NEED TO ARGUMENTS\n");
	return (84);
}
		
