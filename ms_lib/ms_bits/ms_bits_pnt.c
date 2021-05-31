/*
** EPITECH PROJECT, 2020
** Day04 - ms_getnbr
** File description:
** print the number from a str
*/

#include "../ms_lib.h"

void ms_bits_pnt(void *pnt)
{
    all_types_t thing = {.p = pnt};

    for (int i = 4 * 8 - 1; i >= 0; i--)
        ms_printf("%d", thing.i >> i & 1);
    ms_printf("\n");
}