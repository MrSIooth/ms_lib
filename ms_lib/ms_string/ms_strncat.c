/*
** EPITECH PROJECT, 2021
** ms_strcat
** File description:
** ms_strcat
*/

#include "../ms_lib.h"

void ms_strncat(char *dest, char *str, int pos)
{
    pos  = (ms_strlen(dest) < pos)? ms_strlen(dest) : pos;
    for (int str_pos = 0; str[str_pos] != '\0';)
        dest[pos++] = str[str_pos++];
    dest[pos] = '\0';
}