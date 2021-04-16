/*
** EPITECH PROJECT, 2021
** ms_nbr_to_str
** File description:
** ms_nbr_to_str
*/

#include "../ms_lib.h"

char *ms_nbr_to_str(int nbr)
{
    ms_bool_e neg = (nbr < 0)? ms_true : ms_false;
    int length = ms_nbrlen(nbr);
    char *str = ms_malloc(sizeof(char) * (length + 1));
    nbr *= (nbr > 0)? 1 : -1;
    for (int i = length - 1; i >= (int)neg; i--) {
        str[i] = nbr % 10 + 48;
        nbr = nbr / 10;
    } if (neg)
        str[0] = '-';
    str[length] = '\0';
    return (str);
}