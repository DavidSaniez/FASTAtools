/*
** EPITECH PROJECT, 2017
** ADN.c
** File description:
** By DavidS
*/

#include <stdlib.h>
#include "proto.h"

int prompt(char *str)
{
	int i = 0;
	int cnt = 0;

	while (str[i]) {
		if (str[i] == '>')
			cnt++;
		i++;
	}
	return (cnt);
}

int adn_size(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i])
		i++;
	return (i);
}

char **adn(char *str)
{
	char **new;
	int i = 0;
	int j = 0;
	int k;

	if ((new = malloc(sizeof(char *) * (prompt(str) + 1))) == NULL)
		return (NULL);
	while (str[i]) {
		if ((new[j] =
			malloc(sizeof(char) * (adn_size(str) + 1))) == NULL)
			return (NULL);
		else if (str[i] == '>') {
			k = 0;
			while (str[i] != '\n' && str[i])
				new[j][k++] = str[i++];
			new[j][k] = '\0';
			j++;
		}
		i++;
	}
	new[j] = NULL;
	return (new);
}

int optn_1(char *str)
{
	char **search_adn;
	char **search_seq;

	search_adn = adn(str);
	search_seq = sequence(str);
	free(str);
	display_tab(search_adn, search_seq);
	return (0);
}
