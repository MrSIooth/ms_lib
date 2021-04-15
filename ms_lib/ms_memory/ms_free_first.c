/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void ms_free_first(void **list)
{
    void *temp = NULL;
    if (((void **)(*list))[0] == NULL) {
        free(*list);
        *list = NULL;
    }else {
        ((void **)(((void **)(*list))[0]))[1] = ((void **)(*list))[1];
        temp = ((void **)(*list))[0];
        free(*list);
        *list = temp;
    }
}