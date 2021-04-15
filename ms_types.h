/*
** EPITECH PROJECT, 2021
** TYPES
** File description:
** TYPES
*/

#ifndef TYPES
#define TYPES

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <math.h>

typedef enum ms_bool_e{
    ms_false,
    ms_true
}ms_bool_e;

typedef struct ms_linked_list{
    void *elmnt;
    struct ms_linked_list *next;
    struct ms_linked_list *prev;
}ms_linked_list;

#endif /* !TYPES */
