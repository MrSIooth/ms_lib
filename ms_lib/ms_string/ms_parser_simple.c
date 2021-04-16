/*
** EPITECH PROJECT, 2021
** parser
** File description:
** parser
*/

#include "../ms_lib.h"

int ms_strparser_simple_len(char *str, char sep)
{
    int count = 0;
    int count_char = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (count_char > 0 && str[i] == sep) {
            count++;
            count_char = 0;
        }else if (str[i] != sep)
            count_char++;
    }
    return ((count_char > 0)? count + 1 : count);
}

char **ms_strparser_simple(char *str, char sep)
{
    int count = ms_strparser_simple_len(str, sep);
    int count_char = 0;
    int index = 0;
    int i = 0;
    char **tab = ms_malloc(sizeof(char *) * (count + 1));
    tab[count] = NULL;
    for (i = 0; str[i] != '\0'; i++) {
        if (count_char > 0 && str[i] == sep) {
            tab[index] = ms_malloc(sizeof(char) * (count_char + 1));
            ms_strncpy(tab[index], str + i - count_char, count_char);
            count++;
            index++;
            count_char = 0;
        }else if (str[i] != sep)
            count_char++;
    }if (count_char > 0){
        tab[index] = ms_malloc(sizeof(char) * (count_char + 1));
        ms_strncpy(tab[index], str + i - count_char, count_char);
    }
    return (tab);
}