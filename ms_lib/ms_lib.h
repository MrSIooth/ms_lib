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

#define ABS(X) ((X < 0)? -X : X)

/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/

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
* @param List list from which to pop the first elmnt
*/
void ms_linked_list_pop_first(ms_linked_list **list);


///////////////////////////////////////////////////////////////////////////////
//ms_linked_list_pop_elmnt
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Pop the elmnt from a linked list
* @param List list where elmnt is stored
* @param elmnt elmnt to be popped
*/
void ms_linked_list_pop_elmnt(ms_linked_list **list, ms_linked_list *elmnt);


///////////////////////////////////////////////////////////////////////////////
//ms_linked_list_pop_list
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Pop the whole linked list
* @param List list to be popped
*/
void ms_linked_list_pop_list(ms_linked_list **list);


/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/


/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/

///////////////////////////////////////////////////////////////////////////////
//ms_malloc
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Allocate SIZE bytes of memory.
* @param size number of byte to allocate
*/
void *ms_malloc(size_t size);


///////////////////////////////////////////////////////////////////////////////
//ms_free
///////////////////////////////////////////////////////////////////////////////

/**
* @brief free pointer variable allocated by ms_malloc
* @param pointer pointer to be freed
*/
void ms_free(void *pointer);


///////////////////////////////////////////////////////////////////////////////
//ms_free_all
///////////////////////////////////////////////////////////////////////////////

/**
* @brief free all variable allocated by ms_malloc
*/
void ms_free_all(void);


///////////////////////////////////////////////////////////////////////////////
//ms_free_first
///////////////////////////////////////////////////////////////////////////////

/**
* @brief free first pointer variable allocated by ms_malloc
* @param list list of pointer from which to free the first one
*/
void ms_free_first(memory_t **list);


///////////////////////////////////////////////////////////////////////////////
//ms_push_memory_slot
///////////////////////////////////////////////////////////////////////////////

/**
* @brief push MEMORY_SLOT in LIST
* @param list memory list
* @param memory_slot new pointer to be added
*/
void ms_push_memory_slot(memory_t **list, memory_t *memory_slot);


///////////////////////////////////////////////////////////////////////////////
//ms_memory
///////////////////////////////////////////////////////////////////////////////

/**
* @brief return the memory list.
*/
memory_t **ms_memory();


///////////////////////////////////////////////////////////////////////////////
//ms_memcopy_mal
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a pointer into a new allocated pointer
* @param origin Pointer to be copied
*/
void *ms_memcopy_mal(void *origin);


///////////////////////////////////////////////////////////////////////////////
//ms_memcopy
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a pointer into dest
* @param dest Destination of the copy
* @param origin Pointer to be copied
*/
void ms_memcopy(void *dest, void *origin);


///////////////////////////////////////////////////////////////////////////////
//ms_memcopyn_mal
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a pointer into a new allocated pointer of n byte
* @param origin Pointer to be copied
* @param n Number of byte to copy
*/
void *ms_memcopyn_mal(void *origin, size_t n);


///////////////////////////////////////////////////////////////////////////////
//ms_memcopyn
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a pointer into dest
* @param dest Destination of the copy
* @param origin Pointer to be copied
* @param n Number of byte to copy
*/
void ms_memcopyn(void *dest, void *origin, size_t n);


///////////////////////////////////////////////////////////////////////////////
//ms_malloc_char_tab
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Malloc a char ** terminated by NULL in tab[n] and terminated by 0 in 
tab[n][m]. The tab in filled of 'X'
* @param height Height of the tab
* @param width Width of the tab
*/
char **ms_malloc_char_tab(int height, int width);


///////////////////////////////////////////////////////////////////////////////
//ms_malloc_int_tab
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Malloc a int ** terminated. The tab in filled of 0
* @param height Height of the tab
* @param width Width of the tab
*/
int **ms_malloc_int_tab(int height, int width);


///////////////////////////////////////////////////////////////////////////////
//ms_realloc
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Return a new pointer with a new size but with the same elements. 
The original pointer is freed during this function call.
* @param target Original pointer
* @param new_size New size of the new pointer in byte
*/
void *ms_realloc(void *target, size_t new_size);


///////////////////////////////////////////////////////////////////////////////
//ms_memset
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Set a pointers' values to a single value
* @param pnt pointer which contain the info to be changed
* @param value Value to be chnaged to
*/
void ms_memset(void *pnt, byte value);


///////////////////////////////////////////////////////////////////////////////
//ms_memsetn
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Set a pointers' n first bytes values to a single value
* @param pnt pointer which contain the info to be changed
* @param size Number of byte to set
* @param value Value to be chnaged to
*/
void ms_memsetn(void *pnt, size_t size, byte value);


///////////////////////////////////////////////////////////////////////////////
//ms_malloc_val
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Allocate SIZE bytes of memory with each byte of set to value.
* @param size number of byte to allocate
* @param value value of each allocated byte
*/
void *ms_malloc_val(size_t size, byte value);

///////////////////////////////////////////////////////////////////////////////
//ms_calloc
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Allocate count element of size byte.
* @param count number of elmnt to allocate
* @param size number of byte to allocate per elmnt
*/
void *ms_calloc(size_t count, size_t size);


/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/


/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_strcpy_mal
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a string to another already allocated string
* @param str destination (already pre-allocated to the right size)
* @param str_2 target from which to copy
*/
char *ms_strcpy_mal(char *src);


///////////////////////////////////////////////////////////////////////////////
//ms_strncpy_mal
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy N character from a string to another already allocated string
* @param str destination (already pre-allocated to the right size)
* @param str_2 target from which to copy
* @param n number of character to be copied
*/
char *ms_strncpy_mal(char *src, int n);


///////////////////////////////////////////////////////////////////////////////
//ms_strlen
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get the length of a string
* @param str String from wich to get the length
*/
size_t ms_strlen(char const *str);


///////////////////////////////////////////////////////////////////////////////
//ms_strcmp
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Compare if two string are the same
* @param first first string
* @param first Second string
*/
int ms_strcmp(char *first, char *second);


///////////////////////////////////////////////////////////////////////////////
//ms_strncmp
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Compare if two string are the same until N character
* @param first first string
* @param first Second string
* @param len Number o character to compare
*/
int ms_strncmp(char *first, char *second, int len);

///////////////////////////////////////////////////////////////////////////////
//ms_strinsert_mal
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert str inside dest after n character
* @param dest Destination string
* @param str String to be inserted
* @param pos Number of character before inserting str
*/
char *ms_strinsert_mal(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_strcat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert str at the end of dest.
* @param dest Destination string
* @param str String to be inserted
*/
char *ms_strcat_mal(char *dest, char *str);


///////////////////////////////////////////////////////////////////////////////
//ms_strncat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert str after n character of dest.
* @param dest Destination string
* @param str String to be inserted
* @param pos n character of dest
*/
char *ms_strncat_mal(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_match
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Check if str2 is in str1, str2 can contain a '*' which can represent 
any string from str1
* @param str1 Str to check in
* @param str2 Str to find in str1
*/
int ms_match(char const *str1, char const *str2);


///////////////////////////////////////////////////////////////////////////////
//ms_strparser_char
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Parse the string into a char **
* @param str Str to be parsed
* @param sep char seperator
*/
char **ms_strparser_char(char *str, char sep);


///////////////////////////////////////////////////////////////////////////////
//ms_strparser_char
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Parse the string into a char **
* @param str Str to be parsed
* @param seps str containing multiple char to use as seperator
*/
char **ms_strparser_multchar(char *str, char *seps);


///////////////////////////////////////////////////////////////////////////////
//ms_strcat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Glue the second str at the end of the first str
* @param str Str to wihich to glue
* @param sep Str to be glued
*/
void ms_strcat(char *dest, char *str);


///////////////////////////////////////////////////////////////////////////////
//ms_strncat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Glue the second str after n char of the first str
* @param str Str to wihich to glue
* @param sep Str to be glued
* @param pos After how many char to glue the str
*/
void ms_strncat(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_strcpy
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a str into a str already allocated
* @param dest Destination of the copy
* @param src Origin of the copy
*/
void ms_strcpy(char *dest, char *src);


///////////////////////////////////////////////////////////////////////////////
//ms_strncpy
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy n char of a str into a str already allocated
* @param dest Destination of the copy
* @param src Origin of the copy
* @param n How many char to be copied
*/
void ms_strncpy(char *dest, char *src, int n);


///////////////////////////////////////////////////////////////////////////////
//ms_strinsert
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Inserts a str inside a str
* @param dest Destination of the insert
* @param src Origin of the insert
* @param pos How many char to skip before inserting the str
*/
void ms_strinsert(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_strfind
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Search a str in a str and returns it's index of apparition 
(needle in a haystack)
* @param str The str haystack
* @param to_find The str needle
*/
int ms_strfind(const char *str, const char *to_find);


///////////////////////////////////////////////////////////////////////////////
//ms_strfindn_after
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Search a str in a str after n char and returns it's index of 
apparition, the return value will not be relative to n (needle in a haystack)
* @param str The str haystack
* @param to_find The str needle
* @param n The number of char to skip
*/
int ms_strfindn_after(const char *str, const char *to_find, int n);


///////////////////////////////////////////////////////////////////////////////
//ms_strfindn
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Search a str in a str before n char and returns it's index of 
apparition (needle in a haystack)
* @param str The str haystack
* @param to_find The str needle
* @param n Max number of char from the haystack to view
*/
int ms_strfindn(const char *str, const char *to_find, int n);


/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_fprintf
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Simplified official_fprintf
* @param file File in which to write
* @param format string to be printed out, tags may be inserted
* @param vaarg value of the tags
*/
int ms_fprintf(int file, const char *format, ...);


///////////////////////////////////////////////////////////////////////////////
//ms_printf
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Simplified official_printf
* @param format string to be printed out, tags may be inserted
* @param vaarg value of the tags
*/
int ms_printf(const char *format, ...);


///////////////////////////////////////////////////////////////////////////////
//ms_printf_tag
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Print the tag givin by ms_printf or ms_fprintf
* @param str string which starts with the tag
* @param list list of vaargs
* @param file in which to write
*/
void ms_printf_tag(const char *str, va_list list, int file);


/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/


/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_putnbr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a number in a specific file
* @param nb number to be written
* @param file file descriptor
*/
void ms_putnbr(int nb, int file);


///////////////////////////////////////////////////////////////////////////////
//ms_putchar
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a char in a specific file
* @param c char to be written
* @param file file descriptor
*/
void ms_putchar(char c, int file);


///////////////////////////////////////////////////////////////////////////////
//ms_putstr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a string in a specific file
* @param str string to be written
* @param file file descriptor
*/
void ms_putstr(char const *str, int file);


/******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_getnbr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get a numbre from a string
* @param str string to read
*/
int ms_getnbr(char const *str);


///////////////////////////////////////////////////////////////////////////////
//ms_read
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Reads the content of a file
* @param pathname Path of the file to be read
* @return content of the file
*/
char *ms_read(const char *pathname);


///////////////////////////////////////////////////////////////////////////////
//ms_nbrlen
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get th length of a number
* @param nbr Number from which to get information
*/
int ms_nbrlen(int nbr);


///////////////////////////////////////////////////////////////////////////////
//ms_nbr_to_str
///////////////////////////////////////////////////////////////////////////////

/**
* @brief turns a nbr into a str
* @param nbr nbr to be converted
* @return newly allocated str containing nbr
*/
char *ms_nbr_to_str(int nbr);



#endif /* !LIB*/
