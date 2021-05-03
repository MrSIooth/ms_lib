/*
** EPITECH PROJECT, 2021
** ms_calloc
** File description:
** ms_calloc
*/

#include "../ms_lib.h"

void *ms_calloc(size_t count, size_t size)
{
    return (ms_malloc(count * size));
}