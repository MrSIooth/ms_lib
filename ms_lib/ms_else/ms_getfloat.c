/*
** EPITECH PROJECT, 2020
** Day04 - ms_getnbr
** File description:
** print the number from a str
*/

#include "../ms_lib.h"

float ms_getfloat(char *str)
{
    int i = 0;
    int count = 0;
    int interger = ms_getnbr(str);
    int decimal = 0;

    while (str[i] != '.' && str[i] != ',' && str[i] != '\0')
        i++;
    if (str[i] != '\0')
        i++;
    str += i;
    decimal = ms_getnbr(str);
    while ('0' <= (str)[count] && (str)[count] <= '9' && (str)[count] != '\0')
        count++;
    return (interger + ((float)1 / ms_pow(10, count)) * (float)decimal);
}