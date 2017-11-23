/*
** EPITECH PROJECT, 2017
** pushswap
** File description:
** sort_list
*/

#include "my.h"
#include "header_PUSHSWAP.h"
#include <stdlib.h>

int	check_list(linked_list_t *list)
{
	while (list->next != NULL) {
		if (comp_str((char *)list->data, (char *)list->next->data) == 1)
			return (0);
		list = list->next;
	}
	return (1);
}

linked_list_t	*search_smaller(linked_list_t *la)
{
	linked_list_t *buffer;

	buffer = la;
	la = la->next;
	while (la != NULL) {
		if (comp_str((char *)la->data, (char *)buffer->data) == 2)
			buffer = la;
		if (comp_str((char *)la->data, (char *)buffer->data) == 0)
			buffer = la;
		la = la->next;
	}
	return (buffer);
}

void	sort_third(linked_list_t *la, int flag)
{
	while (check_list(la) != 1) {
		if (comp_str((char *)la->data, (char *)la->next->data) == 1) {
			swap_la(&la, flag);
			if (check_list(la) != 1)
				my_putchar(' ');
		} else {
			swap_rra(&la, flag);
			if (check_list(la) != 1)
				my_putchar(' ');
		}
	}
}

void	sort_list(linked_list_t **lista, linked_list_t **listb, int flag)
{
	linked_list_t *la = *lista;
	linked_list_t *lb = *listb;
	linked_list_t *buffer = search_smaller (la);

	while (buffer->next != NULL) {
		swap_rra(&la, flag);
		my_putchar(' ');
	}
	swap_rra(&la, flag);
	my_putchar(' ');
	swap_pb(&la, &lb, flag);
	my_putchar(' ');
	if (la->next->next != NULL)
	sort_list(&la, &lb, flag);
	if (comp_str((char *)la->data, (char *)la->next->data) == 1) {
		swap_la(&la, flag);
		my_putchar(' ');
	}
	*lista = la;
	*listb = lb;
}
