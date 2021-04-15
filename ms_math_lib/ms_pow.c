/*
** EPITECH PROJECT, 2021
** pow
** File description:
** pow
*/

#include "ms_math_lib.h"

int ms_pow(int x, int y)
{
    int ans = 1;
    for (int i = 0; i < y; i++)
        ans *= x;
    return (ans);
}