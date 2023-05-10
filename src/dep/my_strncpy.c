/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-bsbsq-lyam.gomes [SSH: 192.168.1.15]
** File description:
** my_strncpy.c
*/
#include "my_file.h"
#include <stdlib.h>
char * my_strncpy(char *dest, char *src, int n)
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

char * my_strcpy(char * dest, char *src)
{
    int p;
    p = 0;
    while (src[p]){
        dest[p] = src[p];
        p++;
    }
    dest[p] = '\0';
    return dest;
}

char* my_strdup(char* str)
{
    int len;
    char* dup;
    len = my_strlen(str) + 1;
    dup = malloc(len);
    if (dup == NULL)
        return (NULL);
    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}
