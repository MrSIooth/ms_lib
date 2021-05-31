/*
** EPITECH PROJECT, 2021
** insert
** File description:
** insert
*/

#include "../ms_lib.h"

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