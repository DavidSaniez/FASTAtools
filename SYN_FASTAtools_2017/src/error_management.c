/*
** EPITECH PROJECT, 2017
** error_management.c
** File description:
** By DavidS
*/

#include <stdlib.h>
#include "proto.h"

int error_management(char **av)
{
	if (av[1][0] != '4' && av[2] != NULL)
		return (1);
	if ((av[1][0] <= '7' && av[1][0] >= '1') && av[1][1] == '\0') {
		if (av[1][0] == '4' && av[2] == NULL)
			return (1);
		else
			return (0);
	} else
		return (1);
}
