/*
** EPITECH PROJECT, 2020
** Match
** File description:
** Match
*/

#include "../ms_lib.h"

int ms_match(char const *str1, char const *str2)
{
    if (str1[0] == str2[0]){
        if (str1[0] == '\0' && str2[0] == '\0')
            return (1);
        else
            return (ms_match(str1 + 1, str2  + 1));
    }else if (str2[0] == '*'){
        if (str1[0] != str2[0] && str1[0] == '\0')
            return (ms_match(str1, str2  + 1));
        if (str1[0] != str2[0] && str1[0] != '\0')
            return (ms_match(str1 + 1, str2) == 1)? (1) :
            ms_match(str1, str2 + 1);
    }
    return (0);
}