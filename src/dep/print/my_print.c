/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes [SSH: 192.168.1.15]
** File description:
** my_putstr.c
*/
#include <unistd.h>

int my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i) {
        my_putchar(*(str + i));
    };
    return 0;
}

int my_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
