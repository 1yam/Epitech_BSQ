/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes [SSH: 192.168.1.15]
** File description:
** main.c
*/
#include "my_file.h"
int my_test_error(int argc, char** argv);
int my_get_datafile(char *filepath, char* str);
char *my_show_word_array_custom(char * const * tab);
struct bsq_square bsq_second(struct bsq_square b);

void my_error(char *str)
{
    write(2, str, my_strlen(str));
}

int gen_bsq(int argc, char** argv)
{
    char *str;
    struct bsq_square b = {0};
    int nbr = my_getnbr(argv[1]);
    str = my_bsq_map_gen(nbr, argv[2], str);
    b.widht = nbr;
    b.lenght = nbr;

    char *test = my_strdup(str);

    if (!test)
        return 84;

    char **map = my_str_to_word_array(test);
    b.map = map;

    b = bsq_second(b);
    b = fill_struct_bsq(b, b.x, b.y, b.size);
    my_show_word_array_custom(b.map);
    return 0;
}

int file_bsq(int argc, char** argv)
{
    struct stat file_stat;
    char *str; int remove;
    struct bsq_square b = {0};
    stat(argv[1], &file_stat);
    str = (char *) malloc(file_stat.st_size + 1);
    my_get_datafile(argv[1], str);
    for (remove = 0; str[remove] != '\n'; remove++);
    str = str + remove;
    char *test = my_strdup(str);
    if (!test)
        return 84;
    char **map = my_str_to_word_array(test);
    b.widht = my_strlen(map[1]) - 1;
    b.lenght = fs_get_number_from_first_line(argv[1]);
    b.map = map;

    b = bsq(b);
    b = fill_struct_bsq(b, b.x, b.y, b.size);
    my_show_word_array(b.map);
}

int main(int argc, char** argv)
{
    int test_error = my_test_error(argc, argv);
    if (test_error == -1)
        return 84;
    if (test_error == 2)
        file_bsq(argc, argv);
    if (test_error == 3)
        gen_bsq(argc, argv);

    return 0;
}
