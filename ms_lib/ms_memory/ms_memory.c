/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

memory_t **ms_memory(void)
{
    static memory_t *list = NULL;

    return (&list);
}