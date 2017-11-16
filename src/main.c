/*
** EPITECH PROJECT, 2017
** PUSHSWAP
** File description:
** main
*/

#include "my.h"

int	main(int ac, char **av)
{
	if (ac != 1) {
		pushswap(av);
		my_putchar('\n');
		return (0);
	}
	my_putstr("NEED TO ARGUMENTS\n");
	return (84);
}
		
