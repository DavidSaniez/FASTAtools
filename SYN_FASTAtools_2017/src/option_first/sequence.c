/*
** EPITECH PROJECT, 2017
** sequence.c
** File description:
** By DavidS
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "proto.h"

int lower_case(char c)
{
	if (c == 'a' || c == 'c' || c == 'g' || c == 't' || c == 'n')
		return (0);
	return (84);
}

int upper_case(char c)
{
	if (c == 'A' || c == 'C' || c == 'G' || c == 'T' || c == 'N')
		return (0);
	return (84);
}

char **sequence(char *str)
{
	char **tab = NULL;
	int i = 0;
	int j = 0;
	int k;

	if ((tab = malloc(sizeof(char *) * (prompt(str) + 1))) == NULL)
		return (NULL);
	while (str[i]) {
		if ((tab[j] = malloc(sizeof(char)
		* (strlen(str) + 1))) == NULL)
			return (NULL);
		else if (str[i] == '>')
			while (str[i] && str[i] != '\n')
				i++;
		if (str[i] && str[i] != '>') {
			k = 0;
			while (str[i] && str[i] != '>') {
				if (lower_case(str[i]) == 0
				|| upper_case(str[i]) == 0)
					tab[j][k++] = str_upcase(str[i]);
				i++;
			}
			tab[j][k] = '\0';
			j++;
		}
		if (str[i])
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
