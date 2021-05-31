/*
** EPITECH PROJECT, 2021
** ms_char_to_str
** File description:
** ms_char_to_str
*/

#include "../ms_lib.h"

char *ms_char_to_str(char c)
{
    char *str = ms_malloc_val(2, 0);

    str[0] = c;
    return (str);
}