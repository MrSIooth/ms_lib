/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void *ms_malloc(size_t size)
{
    void *memory_slot = malloc(size + sizeof(memory_t));
    if (memory_slot == NULL)
        return (NULL);
    memory_t *slot = (memory_t *)memory_slot;
    slot->next = NULL;
    slot->prev = NULL;
    slot->size = size;
    ms_push_memory_slot(ms_memory(), memory_slot);
    return (memory_slot + sizeof(memory_t));
}