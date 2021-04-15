/*
** EPITECH PROJECT, 2021
** create
** File description:
** create
*/

#include "ms_csfml_lib.h"
#include "../ms_lib/ms_lib.h"

ms_button_t *ms_button_create(sfVector2f dim, sfVector2f pos)
{
    ms_button_t *new = ms_malloc(sizeof(ms_button_t));
    new->prev = new;
    new->next = NULL;
    new->sprite = sfSprite_create();
    new->upd = NULL;
    new->draw = NULL;
    new->dim = dim;
    new->pos = pos;
    return (new);
}