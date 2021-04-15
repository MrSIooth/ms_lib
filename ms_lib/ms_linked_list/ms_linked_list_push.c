/*
** EPITECH PROJECT, 2021
** linked
** File description:
** linked
*/

#include "../ms_lib.h"

void ms_linked_list_push(ms_linked_list **list, ms_linked_list *elmnt)
{
    elmnt->next = NULL;
    if (*list == NULL) {
        elmnt->prev = elmnt;
        *list = elmnt;
    }else {
        elmnt->prev = (*list)->prev;
        (*list)->prev->next = elmnt;
        (*list)->prev = elmnt;
    }
}