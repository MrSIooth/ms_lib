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
    for (int dest_pos = 0; dest[dest_pos] != '\0';)
        new_str[new_str_pos++] = dest[dest_pos++];
    for (int str_pos = 0; str[str_pos] != '\0';)
        new_str[new_str_pos++] = str[str_pos++];
    new_str[new_str_pos] = '\0';
    return (new_str);
}

char *ms_strncat(char *dest, char *str, int pos)
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

void ms_strcat_ip(char *dest, char *str)
{
    int dest_pos = ms_strlen(dest);
    for (int i = 0; str[i] != '\0';)
        dest[dest_pos++] = str[i++];
    dest[dest_pos] = '\0';
}

void ms_strncat_ip(char *dest, char *str, int pos)
{
    pos  = (ms_strlen(dest) < ABS(pos))? ms_strlen(dest) : ABS(pos);
    for (int str_pos = 0; str[str_pos] != '\0';)
        dest[pos++] = str[str_pos++];
    dest[pos] = '\0';
}