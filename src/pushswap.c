/*
** EPITECH PROJECT, 2017
** pushswhap
** File description:
** master function
*/

#include "my.h"
#include <stdlib.h>
#include "header_PUSHSWAP.h"

void	create_list(linked_list_t *list, char **av, int size)
{
	int i = 2;

	list->next = NULL;
	list->data = (void *)av[1];
	while (i <= size) {
		create_node(list, (void *)av[i]);
		i++;
	}
}

int	comparaison_string(char *str1, char *str2)
{
	if (my_getnbr(str1) > my_getnbr(str2))
		return (1);
	else if (my_getnbr(str2) > my_getnbr(str1))
		return (2);
	else
		return (0);
}

void	pushswap(char **av, int size)
{
	linked_list_t *la = malloc(sizeof(linked_list_t));

	create_list(la, av, size);
	display_list(la);
	my_putchar('\n');
	my_put_nbr(comparaison_string((char *)la->data, (char *)la->next->data));

}
