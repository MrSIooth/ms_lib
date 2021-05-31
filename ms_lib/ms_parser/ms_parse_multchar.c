/*
** EPITECH PROJECT, 2021
** parser
** File description:
** parser
*/

#include "../ms_lib.h"

static ms_bool_t ms_parse_multchar_test(char testing, char *seps)
{
    for (int i = 0; seps[i]; i++)
        if (testing == seps[i])
            return (ms_true);
    return (ms_false);
}

static int ms_parse_multchar_len(char *str, char *seps)
{
    int count = 0;
    int count_char = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (count_char > 0 && ms_parse_multchar_test(str[i], seps)) {
            count++;
            count_char = 0;
        }else if (!ms_parse_multchar_test(str[i], seps))
            count_char++;
    }
    return ((count_char > 0)? count + 1 : count);
}

char **ms_parse_multchar(char *str, char *seps)
{
    int count = ms_parse_multchar_len(str, seps);
    int count_char = 0;
    int index = 0;
    int i = 0;
    char **tab = ms_malloc_val(sizeof(char *) * (count + 1), 0);

    for (i = 0; str[i] != '\0'; i++) {
        if (count_char > 0 && ms_parse_multchar_test(str[i], seps)) {
            tab[index++] = ms_strndup(str + i - count_char, count_char);
            count_char = 0;
        }
        else if (!ms_parse_multchar_test(str[i], seps))
            count_char++;
    }
    if (count_char > 0)
        tab[index++] = ms_strndup(str + i - count_char, count_char);
    return (tab);
}