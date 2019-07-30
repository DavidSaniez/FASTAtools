/*
** EPITECH PROJECT, 2017
** requirement.c
** File description:
** By DavidS
*/

#include <stdio.h>

char *my_strcapitalize_synthesis(char *str)
{
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i]) {
		if ((str[0] >= 'a' && str[0] <= 'z')
		|| ((str[i - 1] < 'a' || str[i - 1] > 'z')
		&& (str[i] >= 'a' && str[i] <= 'z')
		&& (str[i - 1] < '0' || str[i - 1] > '9')
		&& (str[i - 1] < 'A' || str[i - 1] > 'Z')))
			str[i] -= 32;
		i++;
		}
	return (str);
}
