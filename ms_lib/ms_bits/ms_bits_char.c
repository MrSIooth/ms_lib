/*
** EPITECH PROJECT, 2020
** Day04 - ms_getnbr
** File description:
** print the number from a str
*/

#include "../ms_lib.h"

void ms_bits_char(char character)
{
    for (int i = 1 * 8 - 1; i >= 0; i--)
        ms_printf("%d", character >> i & 1);
    ms_printf("\n");
}