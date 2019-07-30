##
## EPITECH PROJECT, 2018
## stumper6 makefile
## File description:
## makefile
##

NAME	=	FASTAtools

SRC	=	src/option_first/ADN.c				\
		src/option_first/sequence.c			\
		src/option_bis/replace_letter.c 		\
		src/option_third/replace_letter_optn3.c		\
		src/main.c					\
		src/tools.c					\
		src/read_file.c					\
		src/error_management.c				\
		src/option_five/tab.c				\
		src/option_five/tools.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -W -Wall -Wextra -Iinclude/

all:		$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
