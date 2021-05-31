/*
** EPITECH PROJECT, 2021
** ms_strcat
** File description:
** ms_strcat
*/

#include "../ms_lib.h"

void ms_strcat(char *dest, char *str)
{
    int dest_pos = ms_strlen(dest);

    for (int i = 0; str[i] != '\0';)
        dest[dest_pos++] = str[i++];
    dest[dest_pos] = '\0';
}