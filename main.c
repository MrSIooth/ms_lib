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

typedef struct temp_t {
    short _1;
    short _2;
    long int _3;
    char _4[4];
}temp_t;

void __attribute__((destructor)) empty_ms_heap();

void empty_ms_heap(void)
{
    ms_free_all();
}

int main()
{
    char *str = "   hello    my    dude ";
    char **tab = ms_strparser_simple(str, ' ');
    for (int i = 0; tab[i] != NULL; i++) {
        printf("%s\n", tab[i]);
    }
    return (0);
}