##
## EPITECH PROJECT, 2021
## make
## File description:
## make
##

SRC	=	ms_else/*.c			\
		ms_linked_list/*.c	\
		ms_memory/*.c		\
		ms_printf/*.c		\
		ms_string/*.c


NAME	=	ms_lib

all:
	gcc -c $(SRC) -g3
	ar rc $(NAME).a *.o
	rm -f *~

clean:
	rm -f *.o
	rm -f *~

fclean: clean
	rm -f *.a

re: fclean all