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

typedef struct memory_s memory_t;

typedef char byte;
typedef short byte2;
typedef int byte4;
typedef size_t byte8;

typedef struct byte16{
    byte8 first_half;
    byte8 second_half;
}byte16;

typedef struct byte32{
    byte16 first_half;
    byte16 second_half;
}byte32;

typedef struct byte64{
    byte32 first_half;
    byte32 second_half;
}byte64;

typedef struct byte128{
    byte64 first_half;
    byte64 second_half;
}byte128;

typedef union all_types {
    int nbr;
    float deci;
    char character;
    void *pointer;
}all_types;

typedef enum ms_bool_e{
    ms_false,
    ms_true
}ms_bool_e;

typedef struct memory_s{
    memory_t *next;
    memory_t *prev;
    size_t size;
} memory_t;

typedef struct ms_linked_list{
    void *elmnt;
    struct ms_linked_list *next;
    struct ms_linked_list *prev;
}ms_linked_list;

#endif /* !TYPES */
