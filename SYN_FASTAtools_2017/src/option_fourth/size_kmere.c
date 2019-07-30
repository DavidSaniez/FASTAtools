/*
** EPITECH PROJECT, 2017
** size_kmere.c
** File description:
** By DavidS
*/

char **size_kmere(char **tab)
{
	int i = 0;

	while (tab[i]) {
		i++;
	}
	return (i);
}
