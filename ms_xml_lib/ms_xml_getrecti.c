/*
** EPITECH PROJECT, 2021
** parser
** File description:
** parser
*/

#include "ms_xml_lib.h"

ms_recti ms_xml_getrecti(char *str)
{
    ms_recti rect = {0, 0, 0, 0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (ms_strncmp(str + i, "left=", 5) == 1) {
            i += 5;
            rect.left = ms_getnbr(str + i);
        }if (ms_strncmp(str + i, "top=", 4) == 1) {
            i += 4;
            rect.top = ms_getnbr(str + i);
        }if (ms_strncmp(str + i, "width=", 6) == 1) {
            i += 6;
            rect.width = ms_getnbr(str + i);
        }if (ms_strncmp(str + i, "height=", 7) == 1) {
            i += 7;
            rect.height = ms_getnbr(str + i);
            break;
        }
    }
    return (rect);
}