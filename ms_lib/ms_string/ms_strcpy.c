/*
** EPITECH PROJECT, 2021
** ms_strcpy
** File description:
** ms_strcpy
*/

#include "../ms_lib.h"

void ms_strcpy(char *dest, char *src)
{
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}