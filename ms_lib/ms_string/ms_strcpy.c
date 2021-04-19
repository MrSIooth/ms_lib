/*
** EPITECH PROJECT, 2021
** coy
** File description:
** cpy
*/

#include "../ms_lib.h"

void ms_strcpy(char *str)
{
    int i = 0;
    char *str_2 = ms_malloc(ms_strlen(str) + 1);
    for (; str_2[i] != '\0'; i++)
        str[i] = str_2[i];
    str[i] = '\0';
}

void ms_strncpy(char *str, int n)
{
    int i = 0;
    char *str_2 = ms_malloc(n + 1);
    for (int i = 0; str[i] != '\0' && i < n; i++)
        str[i] = str_2[i];
    str[i] = '\0';
}

void ms_strcpy_ip(char *str, char *str_2)
{
    int i = 0;
    for (i = 0; str_2[i] != '\0'; i++)
        str[i] = str_2[i];
    str[i] = '\0';
}

void ms_strncpy_ip(char *str, char *str_2, int n)
{
    int i = 0;
    for (int i = 0; str_2[i] != '\0' && i < n; i++)
        str[i] = str_2[i];
    str[i] = '\0';
}