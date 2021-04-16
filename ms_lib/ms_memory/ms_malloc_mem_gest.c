/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void ms_push_memory_slot(memory_t **list, memory_t *memory_slot)
{
    memory_slot->next = NULL;
    if (*list == NULL){
        memory_slot->prev = memory_slot;
        *list = memory_slot;
    }else{
        memory_slot->prev = (*list)->prev;
        (*list)->prev->next = memory_slot;
        (*list)->prev = memory_slot;
    }
}

memory_t **ms_memory(void)
{
    static memory_t *list = NULL;
    return (&list);
}