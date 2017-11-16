/*
** EPITECH PROJECT, 2017
** display_list.c
** File description:
** 
*/

#include "my.h"
#include <stdio.h>

void	display_list(struct linked_list *list)
{
	while (list->next != NULL) {
		my_putstr((char *)list->data);
		my_putchar(' ');
		list = list->next;
	}
}
