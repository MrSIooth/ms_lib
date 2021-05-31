##
## EPITECH PROJECT, 2021
## make
## File description:
## make
##

SRC	=	*.c

NAME	=	test

FLAGS	=	-L . ./ms_lib/ms_lib.a -L . ./ms_math_lib/ms_math_lib.a -L . ./ms_xml_lib/ms_xml_lib.a -g3 -L . ./ms_csfml_lib/ms_csfml_lib.a -g3

CSFML_FLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:
	make -C ms_lib/
#	make -C ms_math_lib/
#	make -C ms_xml_lib/
#	make -C ms_csfml_lib/
	gcc -o $(NAME) $(SRC) $(FLAGS) $(CSFML_FLAGS)

clean:
	make clean -C ms_lib/
#	make clean -C ms_math_lib/
#	make clean -C ms_xml_lib/
#	make clean -C ms_csfml_lib/
	rm -f $(NAME)

fclean:	clean
	make fclean -C ms_lib/
#	make fclean -C ms_math_lib/
#	make fclean -C ms_xml_lib/
#	make fclean -C ms_csfml_lib/
	rm -f $(NAME)

re:	fclean all