/*
** EPITECH PROJECT, 2021
** create
** File description:
** create
*/

#include "ms_csfml_lib.h"
#include "../ms_lib/ms_lib.h"

void ms_button_set_function(ms_button_t *button, void (*upd)(game_t *, struct ms_button_s *), void (*draw)(game_t *, struct ms_button_s *))
{
    button->upd = upd;
    button->draw = draw;
}