/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void ms_free_all(void)
{
    memory_t **list = ms_memory();
    while (*list != NULL)
        ms_free_first(list);
}