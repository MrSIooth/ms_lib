/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void ms_free(void *pointer)
{
    void **list = ms_memory();
    void *act_pointer = (pointer - sizeof(void *) * 3);
    if (*list == act_pointer)
        ms_free_first(list);
    else if (((void **)act_pointer)[0] == NULL) {
        ((void **)(*list))[1] = ((void **)(((void **)(*list))[1]))[1];
        ((void **)(((void **)(*list))[1]))[0] = NULL;
        free(act_pointer);
    }else {
        ((void **)(((void **)act_pointer)[0]))[1] =
        ((void **)act_pointer)[1];
        ((void **)(((void **)act_pointer)[1]))[0] =
        ((void **)act_pointer)[0];
        free(act_pointer);
    }
}