/*
** EPITECH PROJECT, 2021
** vect
** File description:
** vect
*/

#include "ms_math_lib.h"

ms_vect2i ms_vect2i_add(ms_vect2i vect_1, ms_vect2i vect_2)
{
    return ((ms_vect2i){vect_1.x + vect_2.x, vect_1.y + vect_2.y});
}

ms_vect2i ms_vect2i_sub(ms_vect2i vect_1, ms_vect2i vect_2)
{
    return ((ms_vect2i){vect_1.x - vect_2.x, vect_1.y - vect_2.y});
}

ms_vect2i ms_vect2i_mult(ms_vect2i vect_1, ms_vect2i vect_2)
{
    return ((ms_vect2i){vect_1.x * vect_2.x, vect_1.y * vect_2.y});
}