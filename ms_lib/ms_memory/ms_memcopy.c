/*
** EPITECH PROJECT, 2021
** ms_copy
** File description:
** ms_copy
*/

#include "../ms_lib.h"

void ms_memcopy(void *dest, void *origin)
{
    size_t size;
    size_t size_max;

    if (dest == NULL || origin == NULL)
        return;
    size = ((memory_t *)(origin - sizeof(memory_t)))->size;
    size_max = ((memory_t *)(dest - sizeof(memory_t)))->size;
    size = (size < size_max)? size : size_max;
    ms_memcopyn(dest, origin, size);
}