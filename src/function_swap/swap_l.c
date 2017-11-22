/*
** EPITECH PROJECT, 2017
** swap_la and swap_lb
** File description:
** swapping
*/

#include "my.h"
#include "header_PUSHSWAP.h"

void	swap_la(linked_list_t **list_l, int flag)
{
	linked_list_t *list = *list_l;
	linked_list_t *buffer = list->next;

	list->next = list->next->next;
	buffer->next = list;
	*list_l = buffer;
	my_putstr("sa");
	if (flag == 1) {
		my_printf("\nList a = ");
		display_list(*list_l);
	}
}

void	swap_lb(linked_list_t **list_l)
{
	linked_list_t *list = *list_l;
	linked_list_t *buffer = list->next;

	list->next = list->next->next;
	buffer->next = list;
	*list_l = buffer;
	my_putstr("sb");
}
/*
void	swap_lc(linked_list_t **lista, linked_list_t **listb)
{
	swap_la(lista);
	swap_lb(listb);
}
*/
