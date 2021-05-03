/*
** EPITECH PROJECT, 2020
** ms_strfind
** File description:
** ms_strfind
*/

#include "../ms_lib.h"

int ms_strfind(const char *str, const char *to_find)
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

int ms_strfindn_after(const char *str, const char *to_find, int n)
{
    for (int i = n; str[i] != 0; i++) {
        for (int j = 0;; j++) {
            if (to_find[j] == '\0')
                return (i);
            if (to_find[j] != str[i + j])
                break;
        }
    }
    return (-1);
}

int ms_strfindn(const char *str, const char *to_find, int n)
{
    for (int i = 0; str[i] != 0 && i < n; i++) {
        for (int j = 0;; j++) {
            if (to_find[j] == '\0')
                return (i);
            if (to_find[j] != str[i + j])
                break;
        }
    }
    return (-1);
}