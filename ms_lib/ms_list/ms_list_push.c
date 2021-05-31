/*
** EPITECH PROJECT, 2021
** linked
** File description:
** linked
*/

#include "../ms_lib.h"

void ms_list_push(ms_list_t **list, ms_list_t *block)
{
    block->next = NULL;
    if (*list == NULL) {
        block->prev = block;
        *list = block;
    }else {
        block->prev = (*list)->prev;
        (*list)->prev->next = block;
        (*list)->prev = block;
    }
}