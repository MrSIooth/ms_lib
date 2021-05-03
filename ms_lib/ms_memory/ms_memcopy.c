/*
** EPITECH PROJECT, 2021
** ms_copy
** File description:
** ms_copy
*/

#include "../ms_lib.h"

void *ms_memcopy_mal(void *origin)
{
    size_t byte_copied = 0;
    size_t size = ((memory_t *)(origin - sizeof(memory_t)))->size;
    void *cpy = ms_malloc(size);

    for (; byte_copied + 64 <= size; cpy += 64, origin += 64, byte_copied += 64)
        *((byte64 *)cpy) = *((byte64 *)origin);
    for (; byte_copied + 1 <= size; cpy++, origin++, byte_copied++)
        *((byte *)cpy) = *((byte *)origin);
    return (cpy - size);
}

void ms_memcopy(void *dest, void *origin)
{
    size_t byte_copied = 0;
    size_t size = ((memory_t *)(origin - sizeof(memory_t)))->size;
    size_t size_max = ((memory_t *)(dest - sizeof(memory_t)))->size;

    size = (size < size_max)? size : size_max;
    for (; (long int)size - 64 >= 0; dest += 64, origin += 64 , size -= 64)
        *((byte64 *)dest) = *((byte64 *)origin);
    for (; (long int)size - 1 >= 0; dest++, origin++, size--)
        *((byte *)dest) = *((byte *)origin);
}