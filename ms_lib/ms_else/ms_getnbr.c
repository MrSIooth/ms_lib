/*
** EPITECH PROJECT, 2020
** Day04 - ms_getnbr
** File description:
** print the number from a str
*/

#include "../ms_lib.h"

int ms_getnbr(char const *str)
{
    int ans = 0;
    ms_bool_t neg = ms_false;

    for (;*str != '\0' && (*str == '+' || *str == '-'); str += 1)
        neg = (*str == '-')? !neg : neg;
    if (!('0' <= *str && *str <= '9'))
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            ans = ans * 10 + str[i] - 48;
        }else
            return (ans * ((neg)? -1 : 1));
    }
    return (ans * ((neg)? -1 : 1));
}
