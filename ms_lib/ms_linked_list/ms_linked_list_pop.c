/*
** EPITECH PROJECT, 2021
** linked
** File description:
** linked
*/

#include "../ms_lib.h"

void ms_linked_list_pop_first(ms_linked_list **list)
{
    if (*list == NULL)
        return;
    ms_linked_list *next_elmnt = (*list)->next;
    if (next_elmnt != NULL)
        next_elmnt->prev = (*list)->prev;
    ms_free((*list)->elmnt);
    ms_free(*list);
    *list = next_elmnt;
}

void ms_linked_list_pop_elmnt(ms_linked_list **list, ms_linked_list *elmnt)
{
    if (*list == elmnt) {
        ms_linked_list_pop_first(list);
        return;
    }
    if (elmnt->next == NULL) {
        elmnt->prev->next = NULL;
        (*list)->prev = elmnt->prev;
    }else {
        elmnt->prev->next = elmnt->next;
        elmnt->next->prev = elmnt->prev;
    }
    ms_free(elmnt->elmnt);
    ms_free(elmnt);
}

void ms_linked_list_pop_list(ms_linked_list **list)
{
    while (*list != NULL)
        ms_linked_list_pop_first(list);
}