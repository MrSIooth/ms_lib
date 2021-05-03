/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>

#include "ms_lib/ms_lib.h"

void __attribute__((destructor)) empty_ms_heap();

void empty_ms_heap(void)
{
    ms_free_all();
}


int main()
{
    ms_printf("%d\n", ms_strfind("Hello my name is", "s"));
    return (0);
}