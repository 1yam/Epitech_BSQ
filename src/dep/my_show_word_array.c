/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday08-lyam.gomes
** File description:
** my_show_word_array.c
*/

#include <stdlib.h>
#include <unistd.h>
int my_strlen(char const *str);
int my_putstr(char const *str);
int my_putchar(char c);

char *my_show_word_array(char * const * tab)
{
    int len = my_strlen(tab[1]);
    for (int i = 0; tab[i] != 0; i++) {
        write(1, tab[i], len);
        my_putchar('\n');
    }
    return "";
}

char *my_show_word_array_custom(char * const * tab)
{
    int len = my_strlen(tab[1]);
    for (int i = 0; tab[i + 1] != 0; i++) {
        write(1, tab[i], len);
        my_putchar('\n');
    }
    return "";
}
