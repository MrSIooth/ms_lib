/*
** EPITECH PROJECT, 2021
** ms_strcmp
** File description:
** ms_strcmp
*/

#include "../ms_lib.h"

int ms_strcmp(char *first, char *second)
{
    for (int i = 0;; i++) {
        if (first[i] == second[i] && first[i] == '\0')
            return (1);
        if (first[i] != second[i])
            return (0);
    }
}