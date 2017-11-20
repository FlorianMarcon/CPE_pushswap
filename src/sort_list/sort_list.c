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

void	sort_lista(linked_list_t **lista)
{
	linked_list_t *la = *lista;
	linked_list_t *l_end;
	linked_list_t *buff = la->next;

	while (check_list(la) == 0) {
		l_end = get_lastnode(la);
		if (comp_str((char *)la->data, (char *)la->next->data) == 1)
			swap_la(&la);
		else if (comp_str((char *)la->data, (char *)l_end->data) == 2)
			swap_ra(&la);
		else
			swap_ra(&la);
		buff = la->next;
		if (check_list(buff) == 1)
			swap_ra(&la);
	}
	*lista = la;
}

void	sort_listb(linked_list_t **listb)
{
	linked_list_t *lb = *listb;
	linked_list_t *l_end;
	linked_list_t *buff = lb->next;

	while (check_list(lb) == 0) {
		l_end = get_lastnode(lb);
		if (comp_str((char *)lb->data, (char *)lb->next->data) == 1)
			swap_lb(&lb);
		else if (comp_str((char *)lb->data, (char *)l_end->data) == 2)
			swap_rb(&lb);
		else
			swap_rb(&lb);
		buff = lb->next;
		if (check_list(buff) == 1)
			swap_ra(&lb);
	}
	*listb = lb;
}
