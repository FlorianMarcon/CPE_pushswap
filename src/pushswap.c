/*
** EPITECH PROJECT, 2017
** pushswhap
** File description:
** master function
*/

#include "my.h"
#include <stdlib.h>
#include "header_PUSHSWAP.h"

void	sort_list(linked_list_t **lista, linked_list_t **listb);

void	init_lb(linked_list_t **lista, linked_list_t **listb);

void	pushswap(char **av, int size)
{
	linked_list_t *la = malloc(sizeof(linked_list_t));
	linked_list_t *lb = malloc(sizeof(linked_list_t));

	create_list(la, av, size);
	if (check_list(la) != 1) {
		init_lb(&la, &lb);
		if (la->next->next != NULL)
			sort_list(&la, &lb);
		else {
			if (comp_str((char*)la->data, (char *)la->next->data) == 1) {
				swap_la(&la);
				my_putchar(' ');
			}
		}
		merge(&la, &lb);
	}
}
