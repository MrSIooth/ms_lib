/*
** EPITECH PROJECT, 2021
** vect
** File description:
** vect
*/

#include "ms_math_lib.h"

ms_vect2i ms_vect2i_mult_by_k(ms_vect2i vect, int k)
{
    return ((ms_vect2i){vect.x * k, vect.y * k});
}