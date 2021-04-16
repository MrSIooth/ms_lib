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
    int neg = 0;
    int started = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-' || str[i] == '+') {
            if (started)
                return (ans * ((neg % 2 == 0)? 1 : -1));
            neg += (str[i] == '-')? 1 : 0;
            continue;
        }
        if ('0' <= str[i] && str[i] <= '9') {
            ans = ans * 10 + str[i] - 48;
            started = 1;
        }else
            return (ans * ((neg % 2 == 0)? 1 : -1));
    }
    return (ans * ((neg % 2 == 0)? 1 : -1));
}
