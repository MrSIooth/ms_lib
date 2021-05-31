/*
** EPITECH PROJECT, 2021
** ms_copy
** File description:
** ms_copy
*/

#include "../ms_lib.h"

void *ms_memdup(void *origin)
{
    size_t size;

    if (origin == NULL)
        return (NULL);
    size = ((memory_t *)(origin - sizeof(memory_t)))->size;
    return (ms_memdupn(origin, size));
}