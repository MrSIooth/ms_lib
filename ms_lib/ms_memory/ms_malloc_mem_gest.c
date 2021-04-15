/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "../ms_lib.h"

void ms_push_memory_slot(void **list, void *memory_slot)
{
    ((void **)memory_slot)[0] = NULL;
    if (*list == NULL){
        ((void **)memory_slot)[1] = memory_slot;
        *list = memory_slot;
    }else{
        ((void **)memory_slot)[1] = ((void **)(*list))[1];
        ((void **)(((void **)(*list))[1]))[0] = memory_slot;
        ((void **)(*list))[1] = memory_slot;
    }
}

void **ms_memory(void)
{
    static void *list = NULL;
    return (&list);
}