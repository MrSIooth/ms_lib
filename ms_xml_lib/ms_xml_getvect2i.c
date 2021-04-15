/*
** EPITECH PROJECT, 2021
** parser
** File description:
** parser
*/

#include "ms_xml_lib.h"

ms_vect2i ms_xml_getvect2i(char *str)
{
    ms_vect2i vect = {0, 0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (ms_strncmp(str + i, "x=", 2) == 1) {
            i += 2;
            vect.x = ms_getnbr(str + i);
        }if (ms_strncmp(str + i, "y=", 2) == 1) {
            i += 2;
            vect.y = ms_getnbr(str + i);
            break;
        }
    }
    return (vect);
}