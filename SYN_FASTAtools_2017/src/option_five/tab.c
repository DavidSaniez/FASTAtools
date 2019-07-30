/*
** EPITECH PROJECT, 2017
** tab.c
** File description:
** tab.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "proto.h"

void display_tab2(char **tab)
{
	for (int i = 0; tab[i]; i++) {
		printf("%s\n", tab[i]);
	}
}
char **research_adn(char **tab)
{
	char **modif_tab = malloc(sizeof(char *) * (strarray(tab) + 1));
	int i = 0;
	int j = 0;
	int k = 0;

	if (modif_tab == NULL)
		return (NULL);
	while (tab[i]) {
		modif_tab[j] = malloc(sizeof(char) * (strlen(tab[i]) + 1));
		if (modif_tab[j] == NULL )
			return (NULL);
		while ((tab[i][k] != 'A' || tab[i][k + 1] != 'T' || tab[i][k + 2] != 'G')
		&& tab[i][k])
			k++;
		modif_tab[j] = strdup(&tab[i][k]);
		i++;
		j++;
		k = 0;
	}
	modif_tab[j] = NULL;
	return (modif_tab);
}
