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
#include "ms_math_lib/ms_math_lib.h"
#include "ms_xml_lib/ms_xml_lib.h"
#include "ms_csfml_lib/ms_csfml_lib.h"

void __attribute__((destructor)) empty_ms_heap();

void empty_ms_heap(void)
{
    ms_free_all();
}

int main()
{
    return (0);
}