/*
** EPITECH PROJECT, 2017
** pushswap
** File description:
** merge two list
*/

#include "header_PUSHSWAP.h"
#include "my.h"
#include <stdio.h>

void	merge(linked_list_t **lista, linked_list_t **listb)
{
	linked_list_t *la = *lista;
	linked_list_t *lb = *listb;

	while (lb != NULL) {
		swap_pa(&la, &lb);
		if (lb != NULL)
			my_putchar(' ');
	}
	*lista = la;
}
