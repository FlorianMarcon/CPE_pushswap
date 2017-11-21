/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
**
*/

#include <unistd.h>

void	my_putchar(char c);

int	my_putstr(char const *str);

char	*my_strncpy(char *dest, char const *src, int n)
{
	int i;

	for (i = 0; i != n; i++)
		dest[i] = src [i];
	return (dest);
}
