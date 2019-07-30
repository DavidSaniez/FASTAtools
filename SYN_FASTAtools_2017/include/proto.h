/*
** EPITECH PROJECT, 2017
** proto.h
** File description:
** By DavidS
*/

#ifndef PROTO_H_
#define PROTO_H_

int lower_case(char c);
int upper_case(char c);
char **sequence(char *);
int prompt(char *);
int adn_size(char *);
char **adn(char *);
char *read_file(void);
char str_upcase(char );
char *rev_str(char *);
int optn_1(char *);
int optn2(char *);
int option3(char *str);
void display_tab(char **, char **);
char **replace_letter(char **);
int replace_letter_bis(char **array, int i, int j);
char **replace(char **tab);
void display_help();
void display_help_bis();
int error_management(char **);
int puiss(int nb, int pw);
int count (int nb);
int multipl(int data);
int strarray(char **tab);
int option5(char *str);
char **research_adn(char **tab);
void display_tab2(char **tab);

#endif /*\ PROTO_H_ \*/
