/*
** EPITECH PROJECT, 2021
** putchar
** File description:
** putchar
*/

#include "../ms_lib.h"

void ms_putchar(char c, int file)
{
    write(file, &c, 1);
}

void ms_putnbr(int nb, int file)
{
    if (nb < 0) {
        ms_putchar('-', file);
        nb = -nb;
    }
    if (nb >= 10) {
        ms_putnbr(nb / 10, file);
        ms_putnbr(nb % 10, file);
    }else
        ms_putchar(nb + 48, file);
}

void ms_putstr(char const *str, int file)
{
    int len = ms_strlen(str);
    write(file, str, len);
}
