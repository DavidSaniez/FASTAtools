/*
** EPITECH PROJECT, 2017
** tools.c
** File description:
** By DavidS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "proto.h"

char str_upcase(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		letter -= 32;
	return (letter);
}

char *rev_str(char *str)
{
	char *cpy = NULL;
	int i = 0;
	int len = strlen(str) - 1;

	if ((cpy = malloc(sizeof(char) * (len + 2))) == NULL)
		return (NULL);
	while (str[i]) {
		cpy[i] = str[len];
		len--;
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
