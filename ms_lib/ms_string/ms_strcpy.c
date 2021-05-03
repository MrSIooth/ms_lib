/*
** EPITECH PROJECT, 2021
** coy
** File description:
** cpy
*/

#include "../ms_lib.h"

char *ms_strcpy_mal(char *src)
{
    int i = 0;
    char *dest = ms_malloc(ms_strlen(src) + 1);

    for (i; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

void ms_strcpy(char *dest, char *src)
{
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}