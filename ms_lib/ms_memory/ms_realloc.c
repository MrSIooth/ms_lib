/*
** EPITECH PROJECT, 2021
** ms_realloc
** File description:
** ms_realloc
*/

#include "../ms_lib.h"

void *ms_realloc(void *target, size_t new_size)
{
    void *new_pointer = ms_malloc(new_size);
    size_t byte_copied = 0;
    size_t old_size = *(size_t *)(target - sizeof(void *));
    for (; byte_copied + 8 <= new_size && old_size >= 8; old_size -= 8,
    byte_copied += 8)
        ((size_t *)new_pointer)[byte_copied / 8] =
        ((size_t *)target)[byte_copied / 8];
    for (; byte_copied < new_size && old_size >= 1; old_size--, byte_copied++)
        ((char *)new_pointer)[byte_copied] = ((char *)target)[byte_copied];
    ms_free(target);
    return (new_pointer);
}