/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-finalstumper-lyam.gomes
** File description:
** my_str_to_word_array
*/

#include "my_file.h"

int my_printable(char c)
{
    int return_val = 1;
    if (c == '\n' || c == 0)
        return_val = 0;
    return return_val;
}

int my_word_len(char const *str, int i)
{
    int size = 0;

    while (str[i] && my_printable(str[i++]))
        size++;
    return (size);
}

int nb_word(char *str)
{
    int i = 0;
    int nb = 0;
    int flag = 0;

    if (my_printable(str[i]))
        nb++;
    while (str[i]) {
        if (my_printable(str[i]))
            i++;
        while (!my_printable(str[i]) && str[i]) {
            i++;
            flag = 1;
        }
        if (flag && my_printable(str[i])) {
            flag = 0;
            nb++;
        }
    }
    return (nb);
}

int dodge(char *str, int i)
{
    int t = 0;
    int have_tobreak = 0;
    while (have_tobreak == 0) {
        int data = my_printable(str[i + t]);
        if (data == 0)
            have_tobreak = 1;
        t++;
    }
    return (i + t);
}

char **my_str_to_word_array(char *str)
{
    int i = 0; int j = 0; int k = 0;
    char **tab;
    k = dodge(str, k);
    int len = nb_word(str);
    tab = malloc((len + 1) * sizeof(char *));
    while (i < len) {
        int len_word = my_word_len(str, k);
        tab[i] = malloc((1 + len_word) * sizeof(char));
        while (my_printable(str[k]))
            tab[i][j++] = str[k++];
        tab[i][j] = 0;
        k = dodge(str, k);
        j = 0 * i++;
    }
    tab[i] = malloc(1 * sizeof(int));
    tab[i] = 0;
    return (tab);
}
