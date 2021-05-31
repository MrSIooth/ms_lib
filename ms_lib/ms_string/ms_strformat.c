/*
** EPITECH PROJECT, 2021
** ms_strformat
** File description:
** ms_strformat
*/

#include "../ms_lib.h"

int ms_strformat_tag_len(const char *str, va_list list)
{
    if (str[1] == '\0')
        return (0);
    if (str[1] == '%')
        return (1);
    if (str[1] == 'd' || str[1] == 'i')
        return (ms_nbrlen(va_arg(list, int)));
    if (str[1] == 's')
        return (ms_strlen(va_arg(list, char *)));
    if (str[1] == 'c')
        return (1);
    return (0);
}

int ms_strformat_get_len(const char *format, va_list list)
{
    int len = 0;

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%'){
            len += ms_strformat_tag_len(format + i, list);
            i++;
            continue;
        }
        len++;
    }
    return (len);
}

int ms_strformat_add(char *intit_str, char *to_add)
{
    int len = 0;

    if (to_add == NULL)
        return (0);
    len = ms_strlen(to_add);
    ms_strcat(intit_str, to_add);
    ms_free(to_add);
    return (len);
}

int ms_strformat_tag(const char *str, va_list list, char *intit_str)
{
    char *to_add = NULL;

    if (str[1] == '\0')
        return (0);
    if (str[1] == '%')
        to_add = ms_strdup("%");
    if (str[1] == 'd' || str[1] == 'i')
        to_add = ms_nbr_to_str(va_arg(list, int));
    if (str[1] == 's')
        to_add = ms_strdup(va_arg(list, char *));
    if (str[1] == 'c')
        to_add = ms_char_to_str(va_arg(list, int));
    return (ms_strformat_add(intit_str, to_add));
}

char *ms_strformat(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    int len = ms_strlen(format);
    int all_len = ms_strformat_get_len(format, list);
    int count = 0;
    char *final = ms_malloc_val(all_len + 1, 0);
    va_end(list);
    va_start(list, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            count += ms_strformat_tag(format + i, list, final);
            i++;
            continue;
        }
        final[count++] = format[i];
    }
    va_end(list);
    return (final);
}