/*
** EPITECH PROJECT, 2021
** ms_copy
** File description:
** ms_copy
*/

#include "../ms_lib.h"

void *ms_memdupn(void *origin, size_t n)
{
    size_t byte_copied = 0;
    size_t size = (0 < n)? n : 0;
    void *cpy;

    if (origin == NULL || n == 0)
        return (NULL);
    cpy = ms_malloc(size);
    for (; byte_copied + 64 <= size; cpy += 64, origin += 64, byte_copied += 64)
        *((byte64 *)cpy) = *((byte64 *)origin);
    for (; byte_copied + 1 <= size; cpy++, origin++, byte_copied++)
        *((byte *)cpy) = *((byte *)origin);
    return (cpy - size);
}
