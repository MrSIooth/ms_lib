/*
** EPITECH PROJECT, 2021
** create
** File description:
** create
*/

#include "ms_csfml_lib.h"

void ms_button_push(ms_button_t **list, ms_button_t *button)
{
    ms_button_t *list_2 = *list;
    if (list_2 == NULL){
        list_2 = button;
        return;
    }
    button->prev = list_2->prev;
    list_2->prev->next = button;
    list_2->prev = button;
}