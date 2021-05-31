/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <string.h>

#include "ms_lib/ms_lib.h"

void __attribute__((destructor)) empty_ms_heap();

void empty_ms_heap(void)
{
    ms_free_all();
}

#include <stdint.h>

int main(int argc, char **argv)
{
    return (0);
}