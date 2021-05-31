/*
** EPITECH PROJECT, 2021
** ms_copy
** File description:
** ms_copy
*/

#include "../ms_lib.h"

void ms_memcopyn(void *dest, void *origin, size_t n)
{
    size_t size = (0 < n)? n : 0;

    if (dest == NULL || origin == NULL)
        return;
    for (; (long int)size >= 64; dest += 64, origin += 64 , size -= 64)
        *((byte64 *)dest) = *((byte64 *)origin);
    for (; (long int)size >= 1; dest++, origin++, size--)
        *((byte *)dest) = *((byte *)origin);
}