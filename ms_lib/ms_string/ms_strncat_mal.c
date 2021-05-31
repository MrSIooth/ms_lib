/*
** EPITECH PROJECT, 2021
** ms_strcat
** File description:
** ms_strcat
*/

#include "../ms_lib.h"

char *ms_strncat_mal(char *dest, char *str, int pos)
{
    int new_str_pos = 0;
    pos  = (ms_strlen(dest) < ABS(pos))? ms_strlen(dest) : ABS(pos);
    char *new_str = ms_malloc(pos + ms_strlen(str) + 1);
    for (int dest_pos = 0; dest[dest_pos] != '\0' && dest_pos < pos;)
        new_str[new_str_pos++] = dest[dest_pos++];
    for (int str_pos = 0; str[str_pos] != '\0';)
        new_str[new_str_pos++] = str[str_pos++];
    new_str[new_str_pos] = '\0';
    return (new_str);
}