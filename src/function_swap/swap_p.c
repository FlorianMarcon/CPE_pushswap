/*
** EPITECH PROJECT, 2017
** swap pa and pb
** File description:
** swapping
*/
#include "my.h"
#include "header_PUSHSWAP.h"

void	swap_pa(linked_list_t **lista, linked_list_t **listb, int flag)
{
	linked_list_t *list_a = *lista;
	linked_list_t *list_b = *listb;
	linked_list_t *buffer;

	buffer = list_b->next;
	list_b->next = list_a;
	list_a = list_b;
	list_b = buffer;
	*lista = list_a;
	*listb = list_b;
	my_putstr("pa");
	if (flag == 1) {
		my_printf("\nList a = ");
		display_list(*lista);
		my_printf("\nList b = ");
		display_list(*listb);
	}
}

void	swap_pb(linked_list_t **lista, linked_list_t **listb, int flag)
{
	linked_list_t *list_a = *lista;
	linked_list_t *list_b = *listb;
	linked_list_t *buffer;

	buffer = list_a->next;
	list_a->next = list_b;
	list_b = list_a;
	list_a = buffer;
	*lista = list_a;
	*listb = list_b;
	my_putstr("pb");
	if (flag == 1) {
		my_printf("\nList a = ");
		display_list(*lista);
		my_printf("\nList b = ");
		display_list(*listb);
	}
}
