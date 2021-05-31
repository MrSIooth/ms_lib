/*
** EPITECH PROJECT, 2021
** coy
** File description:
** cpy
*/

#include "../ms_lib.h"

char *ms_strdup(char *src)
{
    int i = 0;
    char *dest = ms_malloc(ms_strlen(src) + 1);

    for (i; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}