/*
** EPITECH PROJECT, 2021
** create
** File description:
** create
*/

#include "ms_csfml_lib.h"
#include "../ms_lib/ms_lib.h"

void ms_button_free(ms_button_t *button)
{
    sfSprite_destroy(button->sprite);
    ms_free(button);
}

void ms_button_pop_first(ms_button_t **list)
{
    ms_button_t *new_first;

    if (*list == NULL)
        return;
    new_first = (*list)->next;

    if (new_first != NULL)
        new_first->prev = (*list)->prev;
    ms_button_free(*list);
    *list = new_first;
}

void ms_button_pop_button(ms_button_t **list, ms_button_t *button)
{
    ms_button_t *new_first;

    if (*list == NULL)
        return;
    if (*list == button){
        ms_button_pop_first(list);
    }else if (button->next == NULL) {
        (*list)->prev = (*list)->prev->prev;
        (*list)->prev->next = NULL;
    } else {
        
    }
    ms_button_free(button);
}

void ms_button_pop_all(ms_button_t **list)
{
    while (*list != NULL){
        ms_button_pop_first(list);
    }
}