/*
** EPITECH PROJECT, 2017
** pushswhap
** File description:
** master function
*/

#include "my.h"
#include <stdlib.h>
#include "header_PUSHSWAP.h"

void	create_list(linked_list_t *list, char **av, int size)
{
	int i = 1;

	if (my_strcmp(av[i], "-v") == 0)
		i++;
	list->next = NULL;
	list->data = (void *)av[i];
	i++;
	while (i < size) {
		if (i >= 2 && my_strcmp(av[i], "-h") != 0)
			create_node(list, (void *)av[i]);
		i++;
	}
}

void	delete_zero(char **string)
{
	int a = 0;
	char *str = *string;

	if (my_strlen(str) != 1) {
		while (str[a] == '0')
			a++;
		str = &str[a];
		if (str[a] == '\0')
			str = "0";
	}
	*string = str;
}

int	comp_str(char *str1, char *str2)
{
	int i = my_strlen(str1);
	int a = 0;

	delete_zero(&str1);
	delete_zero(&str2);
	if (my_strlen(str1) > my_strlen(str2))
		return (1);
	else if (my_strlen(str2) > my_strlen(str1))
		return (2);
	else {
		while (a != i) {
			if (str1[a] > str2[a])
				return (1);
			else if (str2[a] > str1[a])
				return (2);
			else
				a++;
		}
		return (0);
	}
}

void	display__init_lb(linked_list_t *la, linked_list_t *lb, int flag)
{
	if (flag == 1) {
		my_printf("\nList a = ");
		display_list(la);
		my_printf("\nList b = ");
		display_list(lb);
	}
}

void	init_lb(linked_list_t **lista, linked_list_t **listb, int flag)
{
	linked_list_t *la = *lista;
	linked_list_t *lb = *listb;
	linked_list_t *buffer;

	lb = malloc(sizeof(linked_list_t));
	buffer = search_smaller(la);
	while (buffer->next != NULL) {
		swap_rra(&la, flag);
		my_putchar(' ');
	}
	swap_rra(&la, flag);
	my_putchar(' ');
	lb = la;
	la = la->next;
	lb->next = NULL;
	my_printf("pb ");
	*listb = lb;
	*lista = la;
	display__init_lb(*lista, *listb, flag);
}
