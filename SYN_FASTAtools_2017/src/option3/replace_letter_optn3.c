/*
** EPITECH PROJECT, 2017
** replace_letter_optn3.c
** File description:
** By DavidS
*/

#include <string.h>
#include <stdlib.h>
#include "proto.h"

static int replace_bis(char **tab, char *tmp, int i, int j)
{
	if (tmp[j] == 'A')
		tab[i][j] = 'T';
	if (tmp[j] == 'G')
		tab[i][j] = 'C';
	if (tmp[j] == 'T')
		tab[i][j] = 'A';
	if (tmp[j] == 'C')
		tab[i][j] = 'G';
	return (0);
}

char **replace(char **tab)
{
	int i = 0;
	int j = 0;
	char *tmp = malloc(sizeof(char) * (strlen(tab[i]) + 1));

	while (tab[i]) {
		tmp = rev_str(tab[i]);
		while (tab[i][j]) {
			replace_bis(tab, tmp, i, j);
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}
int option3(char *str)
{
	char **tab = NULL;
	char **seq = NULL;

	tab = adn(str);
	seq = replace(sequence(str));
	display_tab(tab, seq);
	return (0);
}
