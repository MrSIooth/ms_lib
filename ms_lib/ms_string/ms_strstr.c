/*
** EPITECH PROJECT, 2020
** ms_strstr
** File description:
** ms_strstr
*/

#include "../ms_lib.h"

int ms_strstr(const char *str, const char *to_find)
{
    for (int i = 0; str[i] != 0; i++) {
        for (int j = 0;; j++) {
            if (to_find[j] == '\0')
                return (i);
            if (to_find[j] != str[i + j])
                break;
        }
    }
    return (-1);
}