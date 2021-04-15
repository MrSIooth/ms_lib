/*
** EPITECH PROJECT, 2021
** vect
** File description:
** vect
*/

#include "ms_math_lib.h"

float ms_vect2i_norm(ms_vect2i vect)
{
    return (sqrt(pow(vect.x, 2) + pow(vect.y, 2)));
}