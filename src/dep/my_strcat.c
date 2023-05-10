/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes
** File description:
** my_strcat.c
*/
#include "my_file.h"

char *my_strcat(char *dest, char *src)
{
    int k = 0;
    int len = my_strlen(dest);

    char *str = malloc(sizeof(sizeof(char) * (my_strlen(src) + len) + 1));
    for (; k < len; k++)
        src[k] = dest[k];
    for (k = 0; src[k] != '\0'; k++)
        str[len + k] = src[k];
    str[len + k] = '\0';

    return str;
};

char *my_strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = my_strlen(dest);
    size_t i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}
