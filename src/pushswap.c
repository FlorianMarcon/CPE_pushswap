/*
** EPITECH PROJECT, 2017
** pushswhap
** File description:
** master function
*/

#include "my.h"
#include <stdlib.h>
#include "header_PUSHSWAP.h"

void	sort_list(linked_list_t **lista, linked_list_t **listb, int flag);

void	init_lb(linked_list_t **lista, linked_list_t **listb, int flag);

int	check_flags(int ac, char **av)
{
	int i = 0;

	while (i != ac - 1)  {
		if (my_strcmp(av[i], "-v") == 0)
			return (1);
		else
			i++;
	}
	return (0);
}
void	pushswap(char **av, int size)
{
	linked_list_t *la = malloc(sizeof(linked_list_t));
	linked_list_t *lb = malloc(sizeof(linked_list_t));
	int flag = check_flags(size, av);

	create_list(la, av, size);
	switch (len_list(la)) {
		case 2: if (comp_str((char*)la->data, (char *)la->next->data) == 1) {
				swap_la(&la, flag);
				my_putchar(' ');
			}
			break;
		case 3: sort_third(la, flag);
			break;
	}
	if (check_list(la) != 1) {
		init_lb(&la, &lb, flag);
		sort_list(&la, &lb, flag);
		merge(&la, &lb, flag);
	}
}
