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
    size_t old_size = ((memory_t *)(target - sizeof(memory_t)))->size;
    for (; byte_copied + 8 <= new_size && byte_copied + 8 <= old_size;
    byte_copied += 8)
        ((size_t *)new_pointer)[byte_copied / 8] =
        ((size_t *)target)[byte_copied / 8];
    for (; byte_copied + 1 <= new_size && byte_copied + 1 <= old_size;
    byte_copied++)
        ((char *)new_pointer)[byte_copied] = ((char *)target)[byte_copied];
    ms_free(target);
    return (new_pointer);
}