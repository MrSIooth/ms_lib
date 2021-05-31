/*
** EPITECH PROJECT, 2021
** ms_memsetn
** File description:
** ms_memsetn
*/

#include "../ms_lib.h"

void ms_memsetn(void *pnt, size_t size, byte value)
{
    if (pnt == NULL)
        return;
    for (int i = 0; i < size; i++)
        ((byte *)pnt)[i] = value;
}