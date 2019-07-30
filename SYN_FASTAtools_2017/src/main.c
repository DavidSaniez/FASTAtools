/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** By DavidS
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "proto.h"

void display_help_bis(void)
{
	printf("\toption 4: read FASTA from\
the standard input,");
	printf("write the k-mer list to the\n\t\t\
standard output\n");
	printf("\toption 5: read FASTA from\
the standard input,");
	printf("write the coding sequences\n\t\t\
list to the standard output\n");
	printf("\toption 6: read FASTA from the standard input,");
	printf("write the amino acids list\
to\n\t\t the standard output\n");
	printf("\toption 7: read FASTA \
from the sandard input containing");
	printf(" exactly 2 sequences,\n\t\t align them \
and write the result to the standard output\n");
	printf("\tk: size of the k-mers for option 4\n");
	exit(0);
}
void display_help(void)
{
	printf("USAGE\n\t./FASTAtools option [k]\n\n");
	printf("DESCRIPTION\n");
	printf("\toption 1: read FASTA from the standard input,");
	printf("write the DNA sequences\
to the\n\t\t standard output\n");
	printf("\toption 2: read FASTA from the standard input,");
	printf(" write the RNA sequences\
to the\n\t\t standard output\n");
	printf("\toption 3: read FASTA from the standard input,");
	printf("write the reverse complement\n\t\t\
to the standard output\n");
	display_help_bis();
	exit(0);
}

void option(char **av, char *str)
{
	if (strcmp(av[1], "1") == 0)
		optn_1(str);
	if (strcmp(av[1], "2") == 0)
		optn2(str);
	if (strcmp(av[1], "3") == 0)
		option3(str);
	if (strcmp(av[1], "5") == 0)
		option5(str);
}

void display_tab(char **tab, char **tab2)
{
	for (int i = 0; tab[i] && tab2[i]; i++)
		printf("%s\n%s\n", tab[i], tab2[i]);
}

int main(int ac, char **av)
{
	char *str = NULL;

	if (ac != 2)
		exit(84);
 	if (strcmp(av[1], "-h") == 0)
		display_help();
	else if (error_management(av) == 1)
		exit(84);
	else {
		str = read_file();
		if (str == NULL)
			return (84);
		option(av, str);
	}
	return (0);
}
