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
    temp_t temp;
    printf("%ld\n", sizeof(temp_t));
    printf("%ld %ld %ld %ld\n", &temp._1, &temp._2, &temp._3, &temp._4);
    printf("%ld %ld %ld %ld\n", sizeof(temp._1), sizeof(temp._2), sizeof(temp._3), sizeof(temp._4));
    return (0);
}