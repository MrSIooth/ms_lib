/*
** EPITECH PROJECT, 2021
** coy
** File description:
** cpy
*/

#include "../ms_lib.h"

void ms_strcpy(char *str, char *str_2)
{
    for (int i = 0; str_2[i] != '\0'; i++) {
        str[i] = str_2[i];
        str[i + 1] = '\0';
    }
}

void ms_strncpy(char *str, char *str_2, int n)
{
    for (int i = 0; str_2[i] != '\0' && i < n; i++) {
        str[i] = str_2[i];
        str[i + 1] = '\0';
    }
}