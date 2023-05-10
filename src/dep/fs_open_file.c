/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes [SSH: 192.168.1.15]
** File description:
** fs_open_file.c
*/

#include <fcntl.h>
#include "my_file.h"
int my_putstr(char const *str);

int fs_open_file(char const* filepath)
{
    int filedesc = open(filepath, O_RDONLY);
    if (filedesc < 0){
        return filedesc;
    } else {
        return filedesc;
    }
    close(filedesc);
}
