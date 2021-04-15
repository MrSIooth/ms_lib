/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void *ms_malloc(size_t size)
{
    void *memory_slot = malloc(size + sizeof(void *) * 3);
    if (memory_slot == NULL)
        return (NULL);
    ((void **)memory_slot)[0] = NULL;
    ((void **)memory_slot)[1] = NULL;
    ((void **)memory_slot)[2] = (void *)size;
    ms_push_memory_slot(ms_memory(), memory_slot);
    return (memory_slot + sizeof(void *) * 3);
}