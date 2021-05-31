/*
** EPITECH PROJECT, 2021
** ms_read
** File description:
** ms_read
*/

#include "../ms_lib.h"

char *ms_read(const char *pathname)
{
    struct stat sb = {0};
    char *str = NULL;
    int fd = open(pathname, O_RDONLY);

    if (fd == -1)
        return (NULL);
    stat(pathname, &sb);
    str = ms_malloc(sb.st_size + 1);
    read(fd, str, sb.st_size);
    str[sb.st_size] = 0;
    close(fd);
    return (str);
}