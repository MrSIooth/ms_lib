/*
** EPITECH PROJECT, 2021
** coy
** File description:
** cpy
*/

#include "../ms_lib.h"

char *ms_strncpy(char *src, int n)
{
    int i = 0;
    char *dest = ms_malloc(n + 1);
    for (int i = 0; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

void ms_strncpy_ip(char *dest, char *src, int n)
{
    int i = 0;
    for (int i = 0; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}