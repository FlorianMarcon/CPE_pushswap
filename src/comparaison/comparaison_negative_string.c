/*
** EPITECH PROJECT, 2017
** comparaison_negative_string
** File description:
** compare
*/

#include "my.h"
#include <stdlib.h>
#include "header_PUSHSWAP.h"

int	comp_negative_str(char *str1, char *str2, int a)
{
	int i = my_strlen(str1);

	while (a != i) {
		if (str1[a] > str2[a])
			return (2);
		else if (str2[a] > str1[a])
			return (1);
		else
			a++;
	}
	return (0);
}

int	comp_negative(char *str1, char *str2)
{
	int a = 0;
	int result;

	if (my_strlen(str1) > my_strlen(str2))
		return (2);
	else if (my_strlen(str2) > my_strlen(str1))
		return (1);
	else {
		result = comp_negative_str(str1, str2, a);
		return (result);
	}
}
