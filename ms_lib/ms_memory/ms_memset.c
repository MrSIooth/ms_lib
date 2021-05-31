/*
** EPITECH PROJECT, 2021
** ms_memset
** File description:
** ms_memset
*/

#include "../ms_lib.h"

void ms_memset(void *pnt, byte value)
{
    size_t size;

    if (pnt == NULL)
        return;
    size = ((memory_t *)(pnt - sizeof(memory_t)))->size;
    for (int i = 0; i < size; i++)
        ((byte *)pnt)[i] = value;
}