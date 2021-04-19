/*
** EPITECH PROJECT, 2020
** Day04 - ms_strlen
** File description:
** Return the len of the input
*/

#include "../ms_lib.h"

int ms_strlen(char const *str)
{
    int i = 0;
    if (str == NULL)
        return (0);
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
