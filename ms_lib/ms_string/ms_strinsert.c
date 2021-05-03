/*
** EPITECH PROJECT, 2021
** insert
** File description:
** insert
*/

#include "../ms_lib.h"

char *ms_strinsert_mal(char *dest, char *str, int pos)
{
    int dest_pos = 0;
    int str_pos = 0;
    int new_str_pos = 0;
    char *new_str = ms_malloc(ms_strlen(dest) + ms_strlen(str) + 1);
    pos  = (ms_strlen(dest) < ABS(pos))? ms_strlen(dest) : ABS(pos);
    for (dest_pos = 0; dest_pos < pos; dest_pos++, new_str_pos++)
        new_str[new_str_pos] = dest[dest_pos];
    for (str_pos = 0; str[str_pos] != '\0'; str_pos++, new_str_pos++)
        new_str[new_str_pos] = str[str_pos];
    for (dest_pos; dest[dest_pos] != '\0'; dest_pos++, new_str_pos++)
        new_str[new_str_pos] = dest[dest_pos];
    new_str[ms_strlen(dest) + ms_strlen(str)] = '\0';
    return (new_str);
}

void ms_strinsert(char *dest, char *str, int pos)
{
    int len_dest = ms_strlen(dest);
    int len_str = ms_strlen(str);
    pos  = (ms_strlen(dest) < ABS(pos))? ms_strlen(dest) : ABS(pos);
    for (int i = len_dest; i >= pos; i--)
        dest[i + len_str] = dest[i];
    for (int i = 0; str[i] != '\0'; i++)
        dest[pos++] = str[i];
    dest[len_dest + len_str] = '\0';
}