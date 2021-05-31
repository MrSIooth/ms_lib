/*
** EPITECH PROJECT, 2021
** ms_strformat
** File description:
** ms_strformat
*/

#include "../ms_lib.h"

char *ms_strformat_len(const char *format)
{
    int count = 0;
    char *str = NULL;

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            continue;
        }
        count++;
    }
    str = ms_malloc(count + 1);
    str[count] = '\0';
    for (int i = 0, count = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            continue;
        }
        str[count++] = format[i];
    }
    return (str);
}

int ms_strformat_add(char **intit_str, char *to_add, int pos)
{
    char *intit_str_cpy = *intit_str;
    int len = 0;

    if (to_add == NULL)
        return (0);
    len = ms_strlen(to_add);
    *intit_str = ms_strinsert_mal(*intit_str, to_add, pos);
    ms_free(intit_str_cpy);
    ms_free(to_add);
    return (len);
}

int ms_strformat_tag(const char *str, va_list list, char **intit_str, int pos)
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
    return (ms_strformat_add(intit_str, to_add, pos));
}

char *ms_strformat(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    char *intit_str = ms_strformat_len(format);
    int intit_str_len = 0;
    int len = ms_strlen(format);

    printf("init = %s\n", intit_str);
    for (int i = 0; format[i] != '\0'; i++) {
        if (i > 0 && format[i] == '%') {
            intit_str_len += ms_strformat_tag(format + i, list, &intit_str, intit_str_len);
            i++;
            continue;
        }
        intit_str_len++;
    }
    va_end(list);
    return (intit_str);
}