/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes
** File description:
** bsq.c
*/
#include "my_file.h"

struct bsq_square fill_struct_bsq(struct bsq_square b, int x, int y, int size)
{
    for (int j = 0; j < size; j++) {
        for (int i = 0; i != size; i++) {
            b.map[x - j][y - i] = 'x';
        }
    }
    return b;
}

short int my_min(short int* min)
{
    short int minimum = min[0];
    (min[1] < minimum) ? (minimum = min[1]) : 0;
    (minimum > min[2]) ? (minimum = min[2]) : 0;
    return minimum;
}

int	my_cond(short int **tab, int x, int y)
{
    if (x == 0 || y == 0){
        return 1;
    } else{
        short int to_find[3] =
        {tab[x - 1][y], tab[x][y - 1], tab[x - 1][y - 1]};
        return my_min(to_find) + 1;
    }
}

short int **get_bsq_int_array(struct bsq_square b, char** str_map)
{
    short int **map;
    map = (short int **) malloc(sizeof(map)*(b.lenght));
    if (!map)
        return NULL;
    for (int x = 0; str_map[x] != 0; x++){
        map[x] = (short int *) malloc(sizeof(map)*(b.widht));;
        for (int y = 0; y <= b.widht; y++){
            map[x][y] = (str_map[x][y] == 'o') ? 0 : 1;
        }
    }
    return map;
}

struct bsq_square bsq(struct bsq_square b)
{
    short int **int_array = get_bsq_int_array(b, b.map);
    for (int x = 0; b.map[x] != 0; x++){
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
