##
## EPITECH PROJECT, 2018
## task01
## File description:
## task01
##

SRC	=	evalexpr.c	\
		addition.c	\
		soustraction.c	\
		multiplication.c	\
		division.c	\
		modulo.c

LIB	=	-L./lib/my/ -lmy

NAME	=	eval_expr

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) $(LIB)

clean:
	rm -f $(NAME)

fclean:	clean

re:	fclean all
