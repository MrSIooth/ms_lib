/*
** EPITECH PROJECT, 2021
** chartabtab
** File description:
** chartabtab
*/

#include "../ms_lib.h"

char **ms_malloc_char_tab(int height, int width)
{
    char **tab = ms_malloc(sizeof(char *) * (height + 1));

    tab[height] = NULL;
    for (int i = 0; i < height; i++) {
        tab[i] = ms_malloc(sizeof(char) * (width + 1));
        for (int j = 0; j < width; j++)
            tab[i][j] = 'X';
        tab[i][width] = '\0';
    }
    return (tab);
}