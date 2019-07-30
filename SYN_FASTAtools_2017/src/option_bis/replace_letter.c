/*
** EPITECH PROJECT, 2017
** replace_letter.c
** File description:
** By DavidS
*/

#include "proto.h"

int replace_letter_bis(char **array, int i, int j)
{
	if (array[i][j] == 'T')
		array[i][j] = 'U';
	return (0);
}
char **replace_letter(char **array)
{
	int i = 0;
	int j = 0;

	while (array[i]) {
	 	while (array[i][j]) {
			replace_letter_bis(array, i, j);
			j++;
		}
		j = 0;
		i++;
	}
	return (array);
}

int optn2(char *str)
{
	char **search_adn;
	char **search_seq;

	search_seq = (adn(str));
	search_adn = replace_letter(sequence(str));
	display_tab(search_seq, search_adn);
	return (0);
}
