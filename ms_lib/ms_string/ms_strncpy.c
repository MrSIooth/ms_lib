/*
** EPITECH PROJECT, 2021
** ms_strncpy
** File description:
** ms_strncpy
*/

#include "../ms_lib.h"

void ms_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    for (i = 0; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}