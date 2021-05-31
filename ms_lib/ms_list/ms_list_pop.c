/*
** EPITECH PROJECT, 2021
** linked
** File description:
** linked
*/

#include "../ms_lib.h"

void ms_list_pop_first(ms_list_t **list)
{
    ms_list_t *next_block = NULL;

    if (*list == NULL)
        return;
    next_block = (*list)->next;
    if (next_block != NULL)
        next_block->prev = (*list)->prev;
    ms_free((*list)->elmnt);
    ms_free(*list);
    *list = next_block;
}

void ms_list_pop_block(ms_list_t **list, ms_list_t *block)
{
    if (*list == block) {
        ms_list_pop_first(list);
        return;
    }
    if (block->next == NULL) {
        block->prev->next = NULL;
        (*list)->prev = block->prev;
    }else {
        block->prev->next = block->next;
        block->next->prev = block->prev;
    }
    ms_free(block->elmnt);
    ms_free(block);
}

void ms_list_pop_list(ms_list_t **list)
{
    while (*list != NULL)
        ms_list_pop_first(list);
}