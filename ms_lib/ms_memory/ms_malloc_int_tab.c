/*
** EPITECH PROJECT, 2021
** chartabtab
** File description:
** chartabtab
*/

#include "../ms_lib.h"

int **ms_malloc_int_tab(int height, int width)
{
    int **tab = ms_malloc(sizeof(int *) * height);

    for (int i = 0; i < height; i++) {
        tab[i] = ms_malloc(sizeof(int) * width);
        for (int j = 0; j < width; j++)
            tab[i][j] = 0;
    }
    return (tab);
}