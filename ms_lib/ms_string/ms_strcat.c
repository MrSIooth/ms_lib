/*
** EPITECH PROJECT, 2021
** ms_strcat
** File description:
** ms_strcat
*/

#include "../ms_lib.h"

char *ms_strcat(char *dest, char *str)
{
    int new_str_pos = 0;
    char *new_str = ms_malloc(ms_strlen(dest) + ms_strlen(str) + 1);
    for (int dest_pos = 0; dest[dest_pos] != '\0'; dest_pos++, new_str_pos++)
        new_str[new_str_pos] = dest[dest_pos];
    for (int str_pos = 0; str[str_pos] != '\0'; str_pos++, new_str_pos++)
        new_str[new_str_pos] = str[str_pos];
    new_str[ms_strlen(dest) + ms_strlen(str)] = '\0';
    return (new_str);
}

char *ms_strncat(char *dest, char *str, int pos)
{
    int new_str_pos = 0;
    pos *= (pos < 0)? -1 : 1;
    pos  = (ms_strlen(dest) < pos)? ms_strlen(dest) : pos;
    char *new_str = ms_malloc(pos + ms_strlen(str) + 1);
    for (int dest_pos = 0; dest[dest_pos] != '\0' && dest_pos < pos;
    dest_pos++, new_str_pos++)
        new_str[new_str_pos] = dest[dest_pos];
    for (int str_pos = 0; str[str_pos] != '\0'; str_pos++, new_str_pos++)
        new_str[new_str_pos] = str[str_pos];
    new_str[pos + ms_strlen(str)] = '\0';
    return (new_str);
}