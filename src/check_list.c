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
	char *str1 = (char *)list->data;
	char *str2 = (char *)list->next->data;

	while (list->next != NULL) {
		str1 = (char *)list->data;
		str2 = (char *)list->next->data;
		if (comp_str(&str1, &str2) == 1)
			return (0);
		list = list->next;
	}
	return (1);
}
