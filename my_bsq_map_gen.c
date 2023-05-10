/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes [SSH: 192.168.1.15]
** File description:
** my_bsq_map_gen.c
*/
#include "my_file.h"
short int **get_bsq_int_array(struct bsq_square b, char** str_map);
struct bsq_square bsq_second(struct bsq_square b)
{
    short int **int_array = get_bsq_int_array(b, b.map);
    for (int x = 0; b.map[x + 1] != 0; x++){
        for (int y = 0; y <= b.widht; y++){
            int val = my_cond(int_array, x, y);
            (int_array[x][y] != 0) ? (int_array[x][y] = val) : 0;
            (int_array[x][y] != 0 && val > b.size) ? (
                b.x = x,
                b.y = y,
                b.size = val
            ) : 0;
        }
    }
    return b;
}

char* my_bsq_map_gen(int lenght, char* patern, char* str)
{
    int widht = lenght; int current_index = 1;
    if (widht == 0)
        return "";

    int patern_lenght = my_strlen(patern);
    str = malloc(sizeof(char) * ((lenght * lenght) + (3 * lenght) + 1));
    str[0] = '\n'; int t = 0; int i = 0;
    for (int p = 0; patern[p] != '\0'; p++) {
        if (patern[p] != '.' && patern[p] != 'o')
            return NULL;
    }
    while (i++ <= lenght) {
        (t == patern_lenght) ? (t = 0) : 0 ;
        for (int p = 0; p < lenght; p++){
            (t == patern_lenght) ? (t = 0) : 0 ;
            str[current_index++] = patern[t++];
        }
        str[current_index++] = '\n';
    }
    return str;
}
