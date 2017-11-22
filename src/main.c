/*
** EPITECH PROJECT, 2017
** PUSHSWAP
** File description:
** main
*/

#include "my.h"
#include "header_PUSHSWAP.h"

int	check_arguments(int ac, char **av)
{
	int i = 1;
	int a = 0;

	while (i <= ac - 1) {
		while (av[i][a] != '\0') {
			if (my_strcmp(av[i], "-v") == 0)
				break;
			else if (av[i][a] > '9' || av[i][a] < '0')
				return (84);
			else
				a++;
		}
		i++;
		a = 0;
	}
	return (0);

}
int	main(int ac, char **av)
{
	if (check_arguments(ac, av) == 0 && ac > 1) {
		pushswap(av, ac);
		my_putchar('\n');
		return (0);
	} else {
		my_printf("BAD ARGUMENT\n");
		return (84);
	}
}
