/*
** EPITECH PROJECT, 2021
** parser
** File description:
** parser
*/

#include "../ms_lib.h"

static ms_bool_t ms_parse_smart_char_test(char testing, char sep,
ms_bool_t *quote)
{
    if (testing == '"') {
        *quote = !(*quote);
        return (ms_true);
    }
    if (testing == sep && *quote == ms_false)
        return (ms_true);
    return (ms_false);
}

static int ms_parse_smart_char_len(char *str, char sep)
{
    int count = 0;
    int count_char = 0;
    ms_bool_t quote = ms_false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (count_char > 0 && ms_parse_smart_char_test(str[i], sep, &quote)) {
            count++;
            count_char = 0;
        }else if (!ms_parse_smart_char_test(str[i], sep, &quote))
            count_char++;
    }
    return ((count_char > 0)? count + 1 : count);
}

char **ms_parse_smart_char(char *str, char sep)
{
    int count = ms_parse_smart_char_len(str, sep);
    int count_char = 0;
    int index = 0;
    int i = 0;
    char **tab = ms_malloc_val(sizeof(char *) * (count + 1), 0);
    ms_bool_t quote = ms_false;

    for (i = 0; str[i] != '\0'; i++) {
        if (count_char > 0 && ms_parse_smart_char_test(str[i], sep, &quote)) {
            tab[index++] = ms_strndup(str + i - count_char, count_char);
            count_char = 0;
        }
        else if (!ms_parse_smart_char_test(str[i], sep, &quote))
            count_char++;
    }
    if (count_char > 0)
        tab[index++] = ms_strndup(str + i - count_char, count_char);
    return (tab);
}