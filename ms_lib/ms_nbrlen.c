/*
** EPITECH PROJECT, 2021
** nbr
** File description:
** nbrlen
*/

#include "ms_lib.h"

int ms_nbrlen(int nbr)
{
    int i = 1;
    if (nbr < 0) {
        i++;
        nbr = -nbr;
    }
    for (i; nbr > 9; i++)
        nbr /= 10;
    return (i);
}