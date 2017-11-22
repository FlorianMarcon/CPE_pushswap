/*
** EPITECH PROJECT, 2017
** swap_r
** File description:
** pushswap
*/
#include "my.h"
#include "header_PUSHSWAP.h"
#include <stdlib.h>

void    swap_ra(linked_list_t **listt)
{
	linked_list_t *first = *listt;
	linked_list_t *list = first->next;
	linked_list_t *buffer = get_lastnode(first);

	first->next = NULL;
	buffer->next = *listt;
	*listt = list;
	my_putstr("ra");
}

void    swap_rb(linked_list_t **listt)
{
	linked_list_t *first = *listt;
	linked_list_t *list = first->next;
	linked_list_t *buffer = get_lastnode(first);

	first->next = NULL;
	buffer->next = *listt;
	*listt = list;
	my_putstr("rb");
}

void    swap_rr(linked_list_t **lista, linked_list_t **listb)
{
	swap_ra(lista);
	swap_rb(listb);
}
