/*
** EPITECH PROJECT, 2021
** linked
** File description:
** linked
*/

#include "../ms_lib.h"

ms_list_t *ms_list_create(void *elmnt_pointer)
{
    ms_list_t *elmnt = ms_malloc(sizeof(ms_list_t));

    elmnt->elmnt = elmnt_pointer;
    elmnt->next = NULL;
    elmnt->prev = elmnt;
    return (elmnt);
}