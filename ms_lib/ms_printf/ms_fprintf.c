/*
** EPITECH PROJECT, 2021
** ms_printf
** File description:
** ms_printf
*/

#include "../ms_lib.h"

int ms_fprintf(int file, const char *format, ...)
{
    va_list list;
    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            ms_printf_tag(format + i, list, file);
            i++;
            continue;
        }else
            ms_putchar(format[i], file);
    }
    va_end(list);
}