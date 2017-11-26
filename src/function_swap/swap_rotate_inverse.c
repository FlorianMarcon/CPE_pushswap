/*
** EPITECH PROJECT, 2017
** swap_rr
** File description:
** pushswap
*/

#include "my.h"
#include "header_PUSHSWAP.h"
#include <stdlib.h>

void    swap_rra(linked_list_t **listt, int flag)
{
	linked_list_t *buffer = *listt;
	linked_list_t *list = get_lastnode(buffer);

	list->next = buffer;
	while (buffer->next != list) {
		buffer = buffer->next;
	}
	buffer->next = NULL;
	*listt = list;
	my_putstr("rra");
	if (flag == 1) {
		my_printf("\nList a = ");
		display_list(*listt);
		my_putchar('\n');
	}
}

void    swap_rrb(linked_list_t **listt)
{
	linked_list_t *buffer = *listt;
	linked_list_t *list = get_lastnode(buffer);

	list->next = buffer;
	while (buffer->next != list) {
		buffer = buffer->next;
	}
	buffer->next = NULL;
	*listt = list;
	my_putstr("rrb");
}

void    swap_rrr(linked_list_t **lista, linked_list_t **listb)
{
	swap_rra(lista, 1);
	swap_rrb(listb);
}
