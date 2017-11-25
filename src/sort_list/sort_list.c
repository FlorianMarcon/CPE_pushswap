/*
** EPITECH PROJECT, 2017
** pushswap
** File description:
** sort_list
*/

#include "my.h"
#include "header_PUSHSWAP.h"
#include <stdlib.h>

linked_list_t	*search_smaller(linked_list_t *la)
{
	linked_list_t *buffer = la;
	char *str1;
	char *str2;

	la = la->next;
	while (la != NULL) {
		str1 = (char *)la->data;
		str2 = (char *)buffer->data;
		if (comp_str(&str1, &str2) == 2)
			buffer = la;
		if (comp_str(&str1, &str2) == 0)
			buffer = la;
		la = la->next;
	}
	return (buffer);
}

void	sort_third(linked_list_t *la, int flag)
{
	char *str1;
	char *str2;

	while (check_list(la) != 1) {
		str1 = (char *)la->data;
		str2 = (char *)la->next->data;
		if (comp_str(&str1, &str2) == 1) {
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

void	sort_list_second(linked_list_t **lista, int flag)
{
	linked_list_t *la = *lista;
	char *str1 = (char *)la->data;
	char *str2 = (char *)la->next->data;

	if (comp_str(&str1, &str2) == 1) {
		swap_la(&la, flag);
		my_putchar(' ');
	}
	*lista = la;
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
	sort_list_second(&la, flag);
	*lista = la;
	*listb = lb;
}
