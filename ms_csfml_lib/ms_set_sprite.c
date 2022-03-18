/*
** EPITECH PROJECT, 2021
** create
** File description:
** create
*/

#include "ms_csfml_lib.h"

void ms_set_sprite(sfSprite *sprite, sfTexture *texture, sfIntRect *rect, sfVector2f *scale)
{
    if (texture != NULL)
        sfSprite_setTexture(sprite, texture, sfTrue);
    if (rect != NULL)
        sfSprite_setTextureRect(sprite, *rect);
    if (scale != NULL)
        sfSprite_setScale(sprite, *scale);
}