/*
** EPITECH PROJECT, 2017
** pushswhap
** File description:
** master function
*/

#include "my.h"
#include <stdlib.h>
#include "header_PUSHSWAP.h"

int	comp_normal_string(char *str1, char *str2, int a)
{
	int i = my_strlen(str1);

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

int	comp_normale(char *str1, char *str2)
{
	int a = 0;
	int result;

	if (my_strlen(str1) > my_strlen(str2))
		return (1);
	else if (my_strlen(str2) > my_strlen(str1))
		return (2);
	else {
		result = comp_normal_string(str1, str2, a);
		return (result);
	}
}

int	comp_mix(char *str1)
{
	if (str1[0] == '-')
		return (2);
	else
		return (1);
}

int	comp_str(char **string1, char **string2)
{
	char *str1 = *string1;
	char *str2 = *string2;
	int result = 0;

	delete_zero(&str1);
	delete_zero(&str2);
	*string1 = str1;
	*string2 = str2;
	if (str1[0] != '-' && str2[0] != '-')
		result = comp_normale(str1, str2);
	else if (str1[0] == '-' && str2[0] == '-')
		result = comp_negative(str1, str2);
	else
		result = comp_mix(str1);
	return (result);

}
