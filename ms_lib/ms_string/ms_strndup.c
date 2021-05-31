/*
** EPITECH PROJECT, 2021
** ms_strndup
** File description:
** ms_strndup
*/

#include "../ms_lib.h"

char *ms_strndup(char *src, int n)
{
    int i = 0;
    char *dest = ms_malloc(n + 1);

    for (i = 0; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}