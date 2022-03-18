/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <stdint.h>
#include "ms_lib/ms_lib.h"

int main(int argc, char **argv)
{
    char *str = ms_malloc(sizeof(char) * 12);
    ms_strcpy(str, "Hello World");
    ms_printf("%s\n", str);
    ms_free_all();
    return (0);
}