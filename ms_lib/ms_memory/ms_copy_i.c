/*
** EPITECH PROJECT, 2021
** ms_copy
** File description:
** ms_copy
*/

#include "../ms_lib.h"

void ms_copy_i(void *dest, void *origin)
{
    memory_t *pnt = origin - sizeof(memory_t);
    size_t byte_copied = 0;
    size_t size = pnt->size;
    size_t size_max = ((memory_t *)(dest - sizeof(memory_t)))->size;
    for (; byte_copied + 8 <= size && byte_copied + 8 <= size_max;
    byte_copied += 8)
        ((size_t *)dest)[byte_copied / 8] = ((size_t *)origin)[byte_copied / 8];
    for (; byte_copied + 1 <= size && byte_copied + 1 <= size_max;
    byte_copied++)
        ((char *)dest)[byte_copied] = ((char *)origin)[byte_copied];
}