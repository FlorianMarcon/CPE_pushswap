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

int	determinate_signe(char *str)
{
	if (str[0] == '-')
		return (-1);
	else
		return (1);
}

void	delete_zero(char **string)
{
	int a = 0;
	char *str = *string;
	int signe = determinate_signe(str);

	if (signe == -1) {
		while (str[a + 1] == '0')
			a++;
		str[a] = '-';
		str = &str[a];
	} else {
		if (my_strlen(str) != 1) {
			while (str[a] == '0')
				a++;
			str = &str[a];
			if (str[a] == '\0')
				str = "0";
			}
	}
	*string = str;
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
