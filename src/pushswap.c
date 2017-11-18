/*
** EPITECH PROJECT, 2017
** pushswhap
** File description:
** master function
*/

#include "my.h"
#include <stdlib.h>
#include "header_PUSHSWAP.h"

void	pushswap(char **av, int size)
{
	linked_list_t *la = malloc(sizeof(linked_list_t));
	linked_list_t *lb = malloc(sizeof(linked_list_t));

	create_list(la, av, size);
	division_list(&la, &lb);
	sort_list(&la);
	my_putstr("\nla ==\n");
	display_list(la);
	my_putstr("lb ==\n");
	display_list(lb);
}
