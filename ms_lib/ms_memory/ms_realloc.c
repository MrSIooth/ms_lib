/*
** EPITECH PROJECT, 2021
** ms_realloc
** File description:
** ms_realloc
*/

#include "../ms_lib.h"

void *ms_realloc(void *target, size_t size)
{
    void *new_pointer;
    size_t byte_copied;
    size_t old_size;

    if (target == NULL || size == 0)
        return (NULL);
    new_pointer = ms_malloc(size);
    ms_memcopy(new_pointer, target);
    ms_free(target);
    return (new_pointer);
}