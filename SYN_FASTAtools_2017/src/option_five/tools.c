/*
** EPITECH PROJECT, 2017
** tools.c
** File description:
** tools.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int puiss(int nb, int pw)
{
	if (pw > 0)
		return (puiss(nb, pw - 1) * nb);
	if (pw == 0)
		return (1);
	if (pw < 0)
		return (0);
	return (0);
}

int count (int nb)
{
	int i = 1;

	while (puiss(10, i) < nb)
		i++;
	return (i);
}

int multipl(int data)
{
	int nb = 0;
	char *str = malloc(sizeof(char) * (count(data) + 1));

	if (str == NULL)
		return (84);
	sprintf(str, "%d", data);
	for (int i = 0; str[i]; i++) {
		nb += str[i] - 48;
	}
	if (nb == 3 || nb == 6 || nb == 9)
		return (0);
	return (1);
}

int strarray(char **tab)
{
	int i = 0;

	while (tab[i])
		i++;
	return (i);
}

int option5(char *str)
{
	char **search_seq;
	char **search_adn;

	search_adn = sequence(str);
	search_seq = research_adn(search_adn);
	display_tab2(search_seq);
	return (0);
}
