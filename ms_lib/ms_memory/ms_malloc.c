/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void *ms_malloc(size_t size)
{
    if (size == 0)
        return (NULL);
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

void *ms_malloc_val(size_t size, byte value)
{
    void *pnt = ms_malloc(size);

    for (int i = 0; i < size; i++)
        ((byte *)pnt)[i] = value;
    return (pnt);
}