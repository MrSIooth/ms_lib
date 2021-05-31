/*
** EPITECH PROJECT, 2021
** ms_strcmp_ascii
** File description:
** ms_strcmp_ascii
*/

#include "../ms_lib.h"

int ms_strcmp_ascii(const char *s1, const char *s2)
{
    for (int i = 0;; i++) {
        if (s1[i] == s2[i] && s1[i] == '\0')
            return (0);
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
    }
}