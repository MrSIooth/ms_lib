/*
** EPITECH PROJECT, 2021
** ms_printf
** File description:
** ms_printf
*/

#include "../ms_lib.h"

void ms_printf_tag(const char *str, va_list list, int file)
{
    if (str[1] == '\0')
        return;
    if (str[1] == '%')
        ms_putchar('%', file);
    if (str[1] == 'd' || str[1] == 'i')
        ms_putnbr(va_arg(list, int), file);
    if (str[1] == 's')
        ms_putstr(va_arg(list, char *), file);
    if (str[1] == 'c')
        ms_putchar(va_arg(list, int), file);
}

int ms_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            ms_printf_tag(format + i, list, 1);
            i++;
            continue;
        }else
            ms_putchar(format[i], 1);
    }
    va_end(list);
}