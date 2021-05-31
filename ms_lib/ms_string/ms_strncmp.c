/*
** EPITECH PROJECT, 2021
** ncmp
** File description:
** ncmp
*/

#include "../ms_lib.h"

int ms_strncmp(char *first, char *second, int len)
{
    for (int i = 0; i < len; i++) {
        if (first[i] == second[i] && first[i] == '\0')
            return (1);
        if (first[i] != second[i])
            return (0);
    }
    return (1);
}