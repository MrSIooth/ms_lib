/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void ms_free(void *pointer)
{
    memory_t **list = ms_memory();
    memory_t *act_pointer = NULL;

    if (pointer == NULL)
        return;
    act_pointer = (pointer - sizeof(memory_t));
    if (*list == act_pointer) {
        ms_free_first(list);
        return;
    }if (act_pointer->next == NULL) {
        (*list)->prev = (*list)->prev->prev;
        (*list)->prev->next = NULL;
    }else {
        act_pointer->next->prev = act_pointer->prev;
        act_pointer->prev->next = act_pointer->next;
    }
    free(act_pointer);
}