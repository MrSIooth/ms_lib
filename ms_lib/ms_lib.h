/*
** EPITECH PROJECT, 2021
** lib
** File description:
** ib
*/

#ifndef LIB
#define LIB

#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <math.h>

#include "ms_types.h"

///////////////////////////////////////////////////////////////////////////////
//ms_getnbr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get a numbre from a string
* 
* @param str string to read
*/
int ms_getnbr(char const *str);


///////////////////////////////////////////////////////////////////////////////
//ms_putnbr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a number in a specific file
* 
* @param nb number to be written
* @param file file descriptor
*/
void ms_putnbr(int nb, int file);


///////////////////////////////////////////////////////////////////////////////
//ms_putchar
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a char in a specific file
* 
* @param c char to be written
* @param file file descriptor
*/
void ms_putchar(char c, int file);


///////////////////////////////////////////////////////////////////////////////
//ms_putstr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a string in a specific file
* 
* @param str string to be written
* @param file file descriptor
*/
void ms_putstr(char const *str, int file);


///////////////////////////////////////////////////////////////////////////////
//ms_strcpy
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a string to another already allocated string
* 
* @param str destination (already pre-allocated to the right size)
* @param str_2 target from which to copy
*/
void ms_strcpy(char *str, char *str_2);


///////////////////////////////////////////////////////////////////////////////
//ms_strncpy
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy N character from a string to another already allocated string
* 
* @param str destination (already pre-allocated to the right size)
* @param str_2 target from which to copy
* @param n number of character to be copied
*/
void ms_strncpy(char *str, char *str_2, int n);


///////////////////////////////////////////////////////////////////////////////
//ms_strlen
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get the length of a string
* 
* @param str String from wich to get the length
*/
int ms_strlen(char const *str);


///////////////////////////////////////////////////////////////////////////////
//ms_strcmp
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Compare if two string are the same
* 
* @param first first string
* @param first Second string
*/
int ms_strcmp(char *first, char *second);


///////////////////////////////////////////////////////////////////////////////
//ms_strncmp
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Compare if two string are the same until N character
* 
* @param first first string
* @param first Second string
* @param len Number o character to compare
*/
int ms_strncmp(char *first, char *second, int len);




///////////////////////////////////////////////////////////////////////////////
//ms_malloc
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Allocate SIZE bytes of memory.
* 
* @param size number of byte to allocate
*/
void*ms_malloc(size_t size);

/**
* @brief free pointer variable allocated by ms_malloc
* 
* @param pointer pointer to be freed
*/
void ms_free(void *pointer);

/**
* @brief free all variable allocated by ms_malloc
*/
void ms_free_all(void);

/**
* @brief free first pointer variable allocated by ms_malloc
* 
* @param list list of pointer from which to free the first one
*/
void ms_free_first(memory_t **list);

/**
* @brief push MEMORY_SLOT in LIST
* 
* @param list memory list
* @param memory_slot new pointer to be added
*/
void ms_push_memory_slot(memory_t **list, memory_t *memory_slot);

/**
* @brief return the memory list.
*/
memory_t **ms_memory();

/**
* @brief Copy a pointer into a new allocated pointer
* 
* @param origin Pointer to be copied
*/
void *ms_copy(void *origin);

/**
* @brief Copy a pointer into dest
* 
* @param dest Destination of the copy
* @param origin Pointer to be copied
*/
void ms_copy_(void *dest, void *origin);


///////////////////////////////////////////////////////////////////////////////
//ms_read
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Reads the content of a file
* @param pathname Path of the file to be read
* 
* @return content of the file
*/
char*ms_read(const char *pathname);


///////////////////////////////////////////////////////////////////////////////
//ms_nbrlen
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get th length of a number
* @param nbr Number from which to get information
*/
int ms_nbrlen(int nbr);


///////////////////////////////////////////////////////////////////////////////
//ms_printf
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get th length of a number
* @param nbr Number from which to get information
*/
int ms_printf(int file, const char *format, ...);


///////////////////////////////////////////////////////////////////////////////
//ms_malloc_char_tab
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Malloc a char** terminated by NULL in tab[n] and terminated by 0 in 
* tab[n][m]. The tab in filled of 'X'
* @param height Height of the tab
* @param width Width of the tab
*/
char**ms_malloc_char_tab(int height, int width);


///////////////////////////////////////////////////////////////////////////////
//ms_malloc_int_tab
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Malloc a int** terminated. The tab in filled of 0
* @param height Height of the tab
* @param width Width of the tab
*/
int**ms_malloc_int_tab(int height, int width);


///////////////////////////////////////////////////////////////////////////////
//ms_realloc
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Return a new pointer with a new size but with the same elements. 
* The original pointer is freed during this function call.
* @param target Original pointer
* @param new_size New size of the new pointer in byte
*/
void*ms_realloc(void *target, size_t new_size);


///////////////////////////////////////////////////////////////////////////////
//ms_strinsert
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert str inside dest after n character
* @param dest Destination string
* @param str String to be inserted
* @param pos Number of character before inserting str
*/
char*ms_strinsert(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_strcat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert str at the end of dest.
* @param dest Destination string
* @param str String to be inserted
*/
char*ms_strcat(char *dest, char *str);


///////////////////////////////////////////////////////////////////////////////
//ms_strncat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert str after n character of dest.
* @param dest Destination string
* @param str String to be inserted
* @param pos n character of dest
*/
char*ms_strncat(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_linked_list_create
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Create a simple linked_list elmnt.
* @return Return a new allocated linked_list elmnt
*/
ms_linked_list*ms_linked_list_create(void *elmnt_pointer);


///////////////////////////////////////////////////////////////////////////////
//ms_linked_list_push
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Push a linked list elmnt into a linked list
*/
void ms_linked_list_push(ms_linked_list **list, ms_linked_list *elmnt);


///////////////////////////////////////////////////////////////////////////////
//ms_linked_list_pop_first
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Pop the the first elmnt of linked list
* 
* @param List list from which to pop the first elmnt
*/
void ms_linked_list_pop_first(ms_linked_list **list);


///////////////////////////////////////////////////////////////////////////////
//ms_linked_list_pop_elmnt
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Pop the elmnt from a linked list
* 
* @param List list where elmnt is stored
* @param elmnt elmnt to be popped
*/
void ms_linked_list_pop_elmnt(ms_linked_list **list, ms_linked_list *elmnt);


///////////////////////////////////////////////////////////////////////////////
//ms_linked_list_pop_list
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Pop the whole linked list
* 
* @param List list to be popped
*/
void ms_linked_list_pop_list(ms_linked_list **list);


///////////////////////////////////////////////////////////////////////////////
//ms_match
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Check if str2 is in str1, str2 can contain a '*' 
* which can represent any string from str1
* 
* @param str1 Str to check in
* @param str2 Str to find in str1
*/
int ms_match(char const *str1, char const *str2);



///////////////////////////////////////////////////////////////////////////////
//ms_strparser_simple
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Parse the string into a char **
* 
* @param str Str to be parsed
* @param sep char seperator
*/
char **ms_strparser_simple(char *str, char sep);

#endif /* !LIB*/
