/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes [SSH: 192.168.1.15]
** File description:
** fs_get_number_from_first_line.c
*/

/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-bsbsq-lyam.gomes [SSH: 192.168.1.15]
** File description:
** fs_get_number_from_first_line.cr
*/

#include "my_file.h"

int fs_get_number_from_first_line(char const *filepath)
{
    char buffer[10000];
    char *first_line;
    int t = 0;
    int fh = open(filepath, O_RDONLY);
    int size_read = read(fh, buffer, 10000);
    if (size_read == -1) {
        return -1;
    }
    while (buffer[t] != '\n')
        t++;
    first_line = malloc(sizeof(char) * (t + 1 + 1));
    first_line = my_strncat(first_line, buffer, t);
    int nbr = my_getnbr(first_line);
    if (nbr < 0)
        return -1;
    free(first_line);
    return nbr;
}
