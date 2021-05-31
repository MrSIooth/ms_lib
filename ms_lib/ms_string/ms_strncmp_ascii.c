/*
** EPITECH PROJECT, 2021
** ms_strncmp_ascii
** File description:
** ms_strncmp_ascii
*/

#include "../ms_lib.h"

int ms_strncmp_ascii(const char *s1, const char *s2, int len)
{
    for (int i = 0; i < len; i++) {
        if (s1[i] == s2[i] && s1[i] == '\0')
            return (0);
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
    }
    return (0);
}