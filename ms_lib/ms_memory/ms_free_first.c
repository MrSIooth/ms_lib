/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void ms_free_first(memory_t **list)
{
    memory_t *temp = NULL;
    if ((*list)->next == NULL) {
        free(*list);
        *list = NULL;
    }else {
        (*list)->next->prev = (*list)->prev;
        temp = (*list)->next;
        free(*list);
        *list = temp;
    }
}