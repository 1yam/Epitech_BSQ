/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes
** File description:
** my_bs_error.c
*/
#include "my_file.h"
int my_test_error(int argc, char** argv)
{
    if (argc == 1) {
        return -1;
    }
    if (fs_open_file(argv[1]) == -1 && argc == 2)
        return -1;
    if (fs_get_number_from_first_line(argv[1]) == 0 && argc == 2)
        return -1;
    return argc;
}

int my_get_datafile(char *filepath, char* str)
{
    int fd; int size; char buffer[4096];
    int	i; int	compt; int	tmp;
    size = 1; fd = open(filepath, O_RDONLY);
    i = 0;
    if (fd == -1)
        return 84;
    while (size != 0) {
        compt = 0;
        size = read(fd, buffer, 4096);
        tmp = size;
        while (tmp > 0) {
            str[i] = buffer[compt];
            i = i + 1;
            compt = compt + 1;
            tmp = tmp - 1;
        }
    }
    close(fd);
    return 0;
}
