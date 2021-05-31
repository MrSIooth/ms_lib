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
#include <string.h>

#include "ms_types.h"

#define ABS(X) ((X < 0)? -X : X)

/******************************************************************************
***********************                                ************************
***********************   0      00000  00000  00000   ************************
***********************   0        0    0        0     ************************
***********************   0        0    00000    0     ************************
***********************   0        0        0    0     ************************
***********************   00000  00000  00000    0     ************************
***********************                                ************************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_list_create
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Create a simple list block.
* @return Return a new allocated list block.
*/
ms_list_t *ms_list_create(void *elmnt_pointer);


///////////////////////////////////////////////////////////////////////////////
//ms_list_push
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Push a list block into a list.
* @param list List where to add the block.
* @param block Blovk to be added.
*/
void ms_list_push(ms_list_t **list, ms_list_t *block);


///////////////////////////////////////////////////////////////////////////////
//ms_list_pop_first
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Pop the first block of list.
* @param list List from which to pop the first block.
*/
void ms_list_pop_first(ms_list_t **list);


///////////////////////////////////////////////////////////////////////////////
//ms_list_pop_block
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Pop the block from a list.
* @param List List where block is stored.
* @param block Block to be popped.
*/
void ms_list_pop_block(ms_list_t **list, ms_list_t *block);


///////////////////////////////////////////////////////////////////////////////
//ms_list_pop_list
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Pop the whole list
* @param List list to be erased
*/
void ms_list_pop_list(ms_list_t **list);


/******************************************************************************
***********************                                ************************
***********************   0      00000  00000  00000   ************************
***********************   0        0    0        0     ************************
***********************   0        0    00000    0     ************************
***********************   0        0        0    0     ************************
***********************   00000  00000  00000    0     ************************
***********************                                ************************
******************************************************************************/


/******************************************************************************
****************                                               ****************
****************   0   0  00000  0   0   000   0000   0   0   *****************
****************   00 00  0      00 00  0   0  0   0  0   0   *****************
****************   0 0 0  0000   0 0 0  0   0  0000    0 0    *****************
****************   0   0  0      0   0  0   0  0  0     0     *****************
****************   0   0  00000  0   0   000   0   0    0     *****************
****************                                               ****************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_malloc
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Allocate SIZE bytes of memory.
* @param size Number of byte to be allocated.
* @return Newly allocated pointer.
*/
void *ms_malloc(size_t size);


///////////////////////////////////////////////////////////////////////////////
//ms_free
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Free pointer allocated by the ms_lib.
* @param pointer Pointer to be freed.
*/
void ms_free(void *pointer);


///////////////////////////////////////////////////////////////////////////////
//ms_free_all
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Free all variable allocated by ms_lib.
*/
void ms_free_all(void);


///////////////////////////////////////////////////////////////////////////////
//ms_free_first
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Free the first pointer allocated by ms_malloc.
* @param list List of pointer from which to free the first one.
*/
void ms_free_first(memory_t **list);


///////////////////////////////////////////////////////////////////////////////
//ms_memory_push_block
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Push MEMORY_SLOT in LIST.
* @param list Memory list.
* @param memory_slot New pointer to be added.
*/
void ms_memory_push_block(memory_t **list, memory_t *block);


///////////////////////////////////////////////////////////////////////////////
//ms_memory
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Stores' the memory list.
* @return Return the memory list.
*/
memory_t **ms_memory();


///////////////////////////////////////////////////////////////////////////////
//ms_memdup
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a pointer into a new allocated pointer.
* @param origin Pointer to be copied.
* @return Return a newly allocated pointer.
*/
void *ms_memdup(void *origin);


///////////////////////////////////////////////////////////////////////////////
//ms_memcopy
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a pointer into dest.
* @param dest Destination of the copy.
* @param origin Pointer to be copied.
*/
void ms_memcopy(void *dest, void *origin);


///////////////////////////////////////////////////////////////////////////////
//ms_memdupn
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy n byte of a pointer into a new allocated pointer of n byte.
* @param origin Pointer to be copied.
* @param n Number of byte to copy.
* @return Return a newly allocated pointer.
*/
void *ms_memdupn(void *origin, size_t n);


///////////////////////////////////////////////////////////////////////////////
//ms_memcopyn
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a pointer into dest.
* @param dest Destination of the copy.
* @param origin Pointer to be copied.
* @param n Number of byte to copy.
*/
void ms_memcopyn(void *dest, void *origin, size_t n);


///////////////////////////////////////////////////////////////////////////////
//ms_malloc_char_tab
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Malloc a char ** terminated by NULL and terminated by 0 in 
tab[n][m]. The tab in filled of 'X'.
* @param height Height of the tab.
* @param width Width of the tab.
* @return Return a pointer to the allocated tab.
*/
char **ms_malloc_char_tab(int height, int width);


///////////////////////////////////////////////////////////////////////////////
//ms_malloc_int_tab
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Malloc a int ** terminated by NULL. The tab in filled of 0.
* @param height Height of the tab.
* @param width Width of the tab.
* @return Return a pointer to the allocated tab.
*/
int **ms_malloc_int_tab(int height, int width);


///////////////////////////////////////////////////////////////////////////////
//ms_realloc
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Return a new pointer with a new size but with the same elements. 
The original pointer is freed during this function call.
* @param target Original pointer
* @param size Number of byte to be reallocated.
* @return Newly allocated pointer.
*/
void *ms_realloc(void *target, size_t size);


///////////////////////////////////////////////////////////////////////////////
//ms_memset
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Set a pointers' bytes to a single value.
* @param pnt Pointer which contain the info to be changed.
* @param value Value to be chnaged to.
*/
void ms_memset(void *pnt, byte value);


///////////////////////////////////////////////////////////////////////////////
//ms_memsetn
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Set a pointers' n first bytes to a single value.
* @param pnt Pointer which contain the info to be changed.
* @param size Number of byte to set.
* @param value Value to be chnaged to.
*/
void ms_memsetn(void *pnt, size_t size, byte value);


///////////////////////////////////////////////////////////////////////////////
//ms_malloc_val
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Allocate SIZE bytes of memory with each byte set to value.
* @param size Number of byte to allocated.
* @param value Value of each byte.
* @return Newly allocated pointer.
*/
void *ms_malloc_val(size_t size, byte value);


///////////////////////////////////////////////////////////////////////////////
//ms_calloc
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Allocate COUNT element of SIZE byte.
* @param count Number of elmnt to allocate.
* @param size Number of byte to allocate per elmnt.
* @return Newly allocated pointer.
*/
void *ms_calloc(size_t count, size_t size);


/******************************************************************************
****************                                               ****************
****************   0   0  00000  0   0   000   0000   0   0   *****************
****************   00 00  0      00 00  0   0  0   0  0   0   *****************
****************   0 0 0  0000   0 0 0  0   0  0000    0 0    *****************
****************   0   0  0      0   0  0   0  0  0     0     *****************
****************   0   0  00000  0   0   000   0   0    0     *****************
****************                                               ****************
******************************************************************************/


/******************************************************************************
****************                                               ****************
****************   00000  00000  0000   00000  0   0   0000    ****************
****************   0        0    0   0    0    00  0  0        ****************
****************   00000    0    0000     0    0 0 0  0  00    ****************
****************       0    0    0  0     0    0  00  0   0    ****************
****************   00000    0    0   0  00000  0   0   0000    ****************
****************                                               ****************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_strcpy
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a src into dest.
* @param dest Destination of the copy.
* @param src Origin of the copy.
*/
void ms_strcpy(char *dest, char *src);


///////////////////////////////////////////////////////////////////////////////
//ms_strncpy
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy N character of src into dest.
* @param dest Destination of the copy.
* @param src Origin of the copy.
* @param n Number of character to be copied.
*/
void ms_strncpy(char *dest, char *src, int n);


///////////////////////////////////////////////////////////////////////////////
//ms_strdup
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy a string into a newly allocated string.
* @param src Origin of the copy.
* @return Newly allocated string.
*/
char *ms_strdup(char *src);


///////////////////////////////////////////////////////////////////////////////
//ms_strndup
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Copy N character of src into a newly allocated string.
* @param src Origin of the copy.
* @param n Number of character to be copied.
* @return Newly allocated string.
*/
char *ms_strndup(char *src, int n);


///////////////////////////////////////////////////////////////////////////////
//ms_strlen
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get the length of a string.
* @param str String from which to get the length.
* @return Return the length of of the string.
*/
size_t ms_strlen(char const *str);


///////////////////////////////////////////////////////////////////////////////
//ms_strcmp
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Compare if two string are the same.
* @param first First string to compare.
* @param second Second string to compare.
* @return Return 0 if different and 1 if equal.
*/
int ms_strcmp(char *first, char *second);


///////////////////////////////////////////////////////////////////////////////
//ms_strncmp
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Compare if two string are the same until LEN character.
* @param first first string to compare.
* @param second Second string to compare.
* @param len Number of character to compare.
* @return Return 0 if different and 1 if equal.
*/
int ms_strncmp(char *first, char *second, int len);


///////////////////////////////////////////////////////////////////////////////
//ms_strcmp_ascii
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Compare the ascii order of two strings.
* @param first first string to compare.
* @param second Second string to compare.
* @return Return 0 if equal, -1 if s1 < s2 and 1 if s1 > s2.
*/
int ms_strcmp_ascii(const char *s1, const char *s2);


///////////////////////////////////////////////////////////////////////////////
//ms_strncmp_ascii
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Compare the ascii order of two strings until LEN character.
* @param first first string to compare.
* @param second Second string to compare.
* @param len Number of character to compare.
* @return Return 0 if equal, -1 if s1 < s2 and 1 if s1 > s2.
*/
int ms_strncmp_ascii(const char *s1, const char *s2, int len);


///////////////////////////////////////////////////////////////////////////////
//ms_strinsert_mal
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert STR inside DEST after POS character.
* @param dest String destination.
* @param str String to be inserted.
* @param pos Number of character before inserting str.
* @return Newly allocated string.
*/
char *ms_strinsert_mal(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_strinsert
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Inserts a str inside a dest after POS character.
* @param dest String destination.
* @param str String to be inserted.
* @param pos Number of character before inserting str.
*/
void ms_strinsert(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_strcat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert str at the end of dest, and return it as a new str.
* @param dest String destination.
* @param str String to be inserted.
* @return Newly allocated string.
*/
char *ms_strcat_mal(char *dest, char *str);


///////////////////////////////////////////////////////////////////////////////
//ms_strncat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert str after n character of dest, and return it as a new str.
* @param dest String destination.
* @param str String to be inserted.
* @param pos Number of character to be inserted after.
* @return Newly allocated string.
*/
char *ms_strncat_mal(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_match
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Check if str2 is in str1, str2 may contain a '*' which can represent 
any string from str1.
* @param str1 Str to check in.
* @param str2 Str to find in str1.
* @return True if they match and false if they dont.
*/
int ms_match(char const *str1, char const *str2);


///////////////////////////////////////////////////////////////////////////////
//ms_strcat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert the second str at the end of dest.
* @param dest String destination.
* @param str String to be inserted.
*/
void ms_strcat(char *dest, char *str);


///////////////////////////////////////////////////////////////////////////////
//ms_strncat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Insert the second str after n char of the first str.
* @param dest String destination.
* @param str String to be inserted.
* @param pos Number of character to be inserted after.
*/
void ms_strncat(char *dest, char *str, int pos);


///////////////////////////////////////////////////////////////////////////////
//ms_strstr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Search a str in a str and returns it's index of apparition 
(needle in a haystack).
* @param str Str haystack.
* @param to_find Str needle.
* @return Index of the location.
*/
int ms_strstr(const char *str, const char *to_find);


///////////////////////////////////////////////////////////////////////////////
//ms_strstrn_after
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Search a str in a str after n char and returns it's index of 
apparition, the return value will not be relative to n (needle in a haystack).
* @param str Str haystack.
* @param to_find Str needle.
* @param n Number of char to skip.
* @return Index of location.
*/
int ms_strstrn_after(const char *str, const char *to_find, int n);


///////////////////////////////////////////////////////////////////////////////
//ms_strstrn
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Search a str in a str before n char and returns it's index of 
apparition (needle in a haystack).
* @param str Str haystack.
* @param to_find Str needle.
* @param n Max number of char from the haystack to view.
* @return Index of location.
*/
int ms_strstrn(const char *str, const char *to_find, int n);


/******************************************************************************
****************                                               ****************
****************   00000  00000  0000   00000  0   0   0000    ****************
****************   0        0    0   0    0    00  0  0        ****************
****************   00000    0    0000     0    0 0 0  0  00    ****************
****************       0    0    0  0     0    0  00  0   0    ****************
****************   00000    0    0   0  00000  0   0   0000    ****************
****************                                               ****************
******************************************************************************/


/******************************************************************************
****************                                               ****************
****************   0000    000   0000   00000  00000  0000     ****************
****************   0   0  0   0  0   0  0      0      0   0    ****************
****************   0000   00000  0000   00000  0000   0000     ****************
****************   0      0   0  0  0       0  0      0  0     ****************
****************   0      0   0  0   0  00000  00000  0   0    ****************
****************                                               ****************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_parse_char
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Parse a str according to sep.
* @param str Str to be parsed.
* @param sep Seperator.
* @return Returns a char ** ending in NULL.
*/
char **ms_parse_char(char *str, char sep);


///////////////////////////////////////////////////////////////////////////////
//ms_parse_multchar
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Parse a str according to multiple char.
* @param str Str to be parsed.
* @param sep Seperator.
* @return Returns a char ** ending in NULL.
*/
char **ms_parse_multchar(char *str, char *seps);


///////////////////////////////////////////////////////////////////////////////
//ms_parse_smart_char
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Parse a str according to sep, with quotes taken care of.
* @param str Str to be parsed.
* @param sep Seperator.
* @return Returns a char ** ending in NULL.
*/
char **ms_parse_smart_char(char *str, char sep);


///////////////////////////////////////////////////////////////////////////////
//ms_parse_smart_multchar
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Parse a str according to multiple char, with quotes taken care of.
* @param str Str to be parsed.
* @param sep Seperator.
* @return Returns a char ** ending in NULL.
*/
char **ms_parse_smart_multchar(char *str, char *seps);


/******************************************************************************
****************                                               ****************
****************   0000    000   0000   00000  00000  0000     ****************
****************   0   0  0   0  0   0  0      0      0   0    ****************
****************   0000   00000  0000   00000  0000   0000     ****************
****************   0      0   0  0  0       0  0      0  0     ****************
****************   0      0   0  0   0  00000  00000  0   0    ****************
****************                                               ****************
******************************************************************************/


/******************************************************************************
********************                                       ********************
********************   0   0  0000   00000  00000  00000   ********************
********************   0   0  0   0    0      0    0       ********************
********************   0 0 0  0000     0      0    0000    ********************
********************   00 00  0  0     0      0    0       ********************
********************    0 0   0   0  00000    0    00000   ********************
********************                                       ********************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_fprintf
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Simplified fprintf.
* @param file File in which to write.
* @param format String to be printed out, tags may be inserted.
* @param vaarg Value of the tags.
*/
int ms_fprintf(int file, const char *format, ...);


///////////////////////////////////////////////////////////////////////////////
//ms_printf
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Simplified printf.
* @param format String to be printed out, tags may be inserted.
* @param vaarg Value of the tags.
*/
int ms_printf(const char *format, ...);


///////////////////////////////////////////////////////////////////////////////
//ms_printf_tag
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Print the tag givin by ms_printf or ms_fprintf.
* @param str String which starts with the tag.
* @param list List of vaargs.
* @param file File to write in.
*/
void ms_printf_tag(const char *str, va_list list, int file);


///////////////////////////////////////////////////////////////////////////////
//ms_putnbr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a number in a specific file.
* @param nb Number to be written.
* @param file File descriptor.
*/
void ms_putnbr(int nb, int file);


///////////////////////////////////////////////////////////////////////////////
//ms_putchar
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a char in a specific file.
* @param c Char to be written.
* @param file File descriptor.
*/
void ms_putchar(char c, int file);


///////////////////////////////////////////////////////////////////////////////
//ms_putstr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Write down a string in a specific file.
* @param str String to be written.
* @param file File descriptor.
*/
void ms_putstr(char const *str, int file);


/******************************************************************************
********************                                       ********************
********************   0   0  0000   00000  00000  00000   ********************
********************   0   0  0   0    0      0    0       ********************
********************   0 0 0  0000     0      0    0000    ********************
********************   00 00  0  0     0      0    0       ********************
********************    0 0   0   0  00000    0    00000   ********************
********************                                       ********************
******************************************************************************/


/******************************************************************************
***********************                                ************************
***********************   0000   00000  00000  00000   ************************
***********************   0   0    0      0    0       ************************
***********************   0000     0      0    00000   ************************
***********************   0   0    0      0        0   ************************
***********************   0000   00000    0    00000   ************************
***********************                                ************************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_bits_float
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Print the bits of a float.
* @param nbr Float to be printed out.
*/
void ms_bits_float(float nbr);


///////////////////////////////////////////////////////////////////////////////
//ms_bits_int
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Print the bits of a int.
* @param nbr Int to be printed out.
*/
void ms_bits_int(int nbr);


///////////////////////////////////////////////////////////////////////////////
//ms_bits_char
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Print the bits of a char.
* @param nbr Char to be printed out.
*/
void ms_bits_char(char character);


///////////////////////////////////////////////////////////////////////////////
//ms_bits_pnt
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Print the bits of a pointer.
* @param nbr Pointer to be printed out.
*/
void ms_bits_pnt(void *pnt);


/******************************************************************************
***********************                                ************************
***********************   0000   00000  00000  00000   ************************
***********************   0   0    0      0    0       ************************
***********************   0000     0      0    00000   ************************
***********************   0   0    0      0        0   ************************
***********************   0000   00000    0    00000   ************************
***********************                                ************************
******************************************************************************/


/******************************************************************************
***********************                                ************************
***********************   00000  0      00000  00000   ************************
***********************   0      0      0      0       ************************
***********************   0000   0      00000  0000    ************************
***********************   0      0          0  0       ************************
***********************   00000  00000  00000  00000   ************************
***********************                                ************************
******************************************************************************/


///////////////////////////////////////////////////////////////////////////////
//ms_getnbr
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get a numbre from a string.
* @param str String to read.
* @return Number contained in the string.
*/
int ms_getnbr(char const *str);


///////////////////////////////////////////////////////////////////////////////
//ms_read
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Reads the content of a file.
* @param pathname Path of the file to be read.
* @return Content of the file.
*/
char *ms_read(const char *pathname);


///////////////////////////////////////////////////////////////////////////////
//ms_nbrlen
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get the length of a number.
* @param nbr Number from which to get information.
*/
int ms_nbrlen(int nbr);


///////////////////////////////////////////////////////////////////////////////
//ms_nbr_to_str
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Turns a nbr into a str.
* @param nbr Nbr to be converted.
* @return Newly allocated str containing nbr.
*/
char *ms_nbr_to_str(int nbr);


///////////////////////////////////////////////////////////////////////////////
//ms_pow
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Set a number to the poxer of y.
* @param x Number to be powered.
* @param x Number of the power.
* @return The result of the operation.
*/
int ms_pow(int x, int y);


///////////////////////////////////////////////////////////////////////////////
//ms_getfloat
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Get a numbre from a string.
* @param str String to read.
* @return Number contained in the string.
*/
float ms_getfloat(char *str);


///////////////////////////////////////////////////////////////////////////////
//ms_char_to_str
///////////////////////////////////////////////////////////////////////////////

/**
* @brief Turn a char into a string.
* @param c Character to convert.
* @return String of the character.
*/
char *ms_char_to_str(char c);


/******************************************************************************
***********************                                ************************
***********************   00000  0      00000  00000   ************************
***********************   0      0      0      0       ************************
***********************   0000   0      00000  0000    ************************
***********************   0      0          0  0       ************************
***********************   00000  00000  00000  00000   ************************
***********************                                ************************
******************************************************************************/


#endif /* !LIB*/
