/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void ms_memory_push_block(memory_t **list, memory_t *block)
{
    block->next = NULL;
    if (*list == NULL){
        block->prev = block;
        *list = block;
    }else{
        block->prev = (*list)->prev;
        (*list)->prev->next = block;
        (*list)->prev = block;
    }
}