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
	int i = 2;

	list->next = NULL;
	list->data = (void *)av[1];
	while (i < size) {
		if (i >= 2)
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
