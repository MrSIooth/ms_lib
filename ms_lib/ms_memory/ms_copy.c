/*
** EPITECH PROJECT, 2021
** ms_copy
** File description:
** ms_copy
*/

#include "../ms_lib.h"

void *ms_copy(void *origin)
{
    memory_t *pnt = origin - sizeof(memory_t);
    void *cpy = ms_malloc(pnt->size);
    size_t byte_copied = 0;
    size_t size = pnt->size;
    for (; byte_copied + 8 <= size; byte_copied += 8)
        ((size_t *)cpy)[byte_copied / 8] = ((size_t *)origin)[byte_copied / 8];
    for (; byte_copied + 1 <= size; byte_copied++)
        ((char *)cpy)[byte_copied] = ((char *)origin)[byte_copied];
    return (cpy);
}