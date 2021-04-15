/*
** EPITECH PROJECT, 2021
** linked
** File description:
** linked
*/

#include "../ms_lib.h"

ms_linked_list *ms_linked_list_create(void *elmnt_pointer)
{
    ms_linked_list *elmnt = ms_malloc(sizeof(ms_linked_list));
    elmnt->elmnt = elmnt_pointer;
    elmnt->next = NULL;
    elmnt->prev = elmnt;
    return (elmnt);
}