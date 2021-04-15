##
## EPITECH PROJECT, 2021
## make
## File description:
## make
##

SRC	=	*.c


NAME	=	ms_math_lib

all:
	gcc -c $(SRC)
	ar rc $(NAME).a *.o
	rm -f *~

clean:
	rm -f *.o
	rm -f *~

fclean: clean
	rm -f *.a

re: fclean all