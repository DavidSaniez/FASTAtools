/*
** EPITECH PROJECT, 2017
** read_file.c
** File description:
** By DavidS
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "proto.h"

// char *read_file(const int fd)
// {
// 	char buffer[4096];
// 	char *str;
// 	int i = 0;
//
// 	if (isatty(0) == 1)
// 		exit(0);
// 	while (read(fd, buffer + i, 1) >= 0) {
// 		if (buffer[i] == '\0') {
// 			if ((str = malloc(sizeof(char) * i)) == NULL)
// 				return (NULL);
// 			strcpy(str, buffer);
// 			return (str);
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

char *read_file(void)
{
	char buffer[2];
	char *str = NULL;
	int res = 0;
	int i = 0;

	if ((str = malloc(sizeof(char) * 2)) == NULL)
		return (NULL);
	while ((res = read(0, buffer, 1)) > 0) {
		str[i] = buffer[0];
		str[i + 1] = '\0';
		str = realloc(str, strlen(str) + 2);
		i++;
	}
	str[i] = '\0';
	return (str);
}
