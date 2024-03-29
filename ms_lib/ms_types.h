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

typedef 		char 		byte;
typedef 		short 		byte2;
typedef 		int 		byte4;
typedef 		size_t 		byte8;
typedef struct 	byte16 		byte16;
typedef struct 	byte32 		byte32;
typedef struct 	byte64 		byte64;
typedef struct 	byte128 	byte128;
typedef struct 	memory_s 	memory_t;
typedef struct 	ms_list_t 	ms_list_t;
typedef union 	all_types_s all_types_t;
typedef enum 	ms_bool_e 	ms_bool_t;

typedef enum ms_bool_e{
    ms_false,
    ms_true
}ms_bool_t;

typedef union all_types_s{
    int i;
    float f;
    char c;
    void *p;
}all_types_t;

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

typedef struct memory_s{
    memory_t *next;
    memory_t *prev;
    size_t size;
} memory_t;

typedef struct ms_list_t{
    void *elmnt;
    struct ms_list_t *next;
    struct ms_list_t *prev;
}ms_list_t;

#endif /* !TYPES */
