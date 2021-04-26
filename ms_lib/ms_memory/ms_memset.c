/*
** EPITECH PROJECT, 2021
** memset
** File description:
** memset
*/

#include "../ms_lib.h"

void ms_memset(void *pnt, byte value)
{
    memory_t *act_pnt = pnt - sizeof(memory_t);
    for (int i = 0; i < act_pnt->size; i++)
        ((byte *)pnt)[i] = value;
}