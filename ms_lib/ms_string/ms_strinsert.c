/*
** EPITECH PROJECT, 2021
** insert
** File description:
** insert
*/

#include "../ms_lib.h"

char *ms_strinsert(char *dest, char *str, int pos)
{
    int dest_pos = 0;
    int str_pos = 0;
    int new_str_pos = 0;
    char *new_str = ms_malloc(ms_strlen(dest) + ms_strlen(str) + 1);
    for (dest_pos = 0; dest_pos < pos; dest_pos++, new_str_pos++)
        new_str[new_str_pos] = dest[dest_pos];
    for (str_pos = 0; str[str_pos] != '\0'; str_pos++, new_str_pos++)
        new_str[new_str_pos] = str[str_pos];
    for (dest_pos; dest[dest_pos] != '\0'; dest_pos++, new_str_pos++)
        new_str[new_str_pos] = dest[dest_pos];
    new_str[ms_strlen(dest) + ms_strlen(str)] = '\0';
    return (new_str);
}