/*
** EPITECH PROJECT, 2021
** parser
** File description:
** parser
*/

#include "ms_xml_lib.h"

int ms_xml_getnbr(char *str)
{
    int nbr = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (ms_strncmp(str + i, "=", 1) == 1) {
            i += 1;
            nbr = ms_getnbr(str + i);
        }
    }
    return (nbr);
}