/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void *ms_malloc(size_t size)
{
    void *memory_slot = NULL;
    memory_t *slot = NULL;

    if (size == 0)
        return (NULL);
    memory_slot = malloc(size + sizeof(memory_t));
    if (memory_slot == NULL)
        return (NULL);
    slot = (memory_t *)memory_slot;
    slot->next = NULL;
    slot->prev = NULL;
    slot->size = size;
    ms_memory_push_block(ms_memory(), memory_slot);
    return (memory_slot + sizeof(memory_t));
}

void *ms_malloc_val(size_t size, byte value)
{
    void *pnt = ms_malloc(size);

    if (pnt == NULL)
        return (NULL);
    for (int i = 0; i < size; i++)
        ((byte *)pnt)[i] = value;
    return (pnt);
}