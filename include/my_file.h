/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-lyam.gomes
** File description:
** my_file.h
*/

#ifndef _my_file_
    #define _my_file_
    #include <unistd.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    struct bsq_square {
        short int x;
        short int y;
        short int size;
        short int widht;
        short int lenght;
        char **map;
    };
    int fs_open_file(char const* filepath);
    int my_strlen(char const *str);
    int fs_get_number_from_first_line(char const *filepath);
    int my_putstr(char const *str);
    int my_putchar(char c);
    char * my_strncpy(char *dest, char *src, int n);
    char * my_strcpy(char * dest, char *src);
    int	my_getnbr(char *str);
    char *my_strcat(char *dest, char *src);
    struct bsq_square bsq(struct bsq_square b);
    char **my_str_to_word_array(char *str);
    struct bsq_square my_bsq_square(struct bsq_square bsq, int x, int y);
    char *my_show_word_array( char * const * tab);
    char* my_strdup(char* str);
    struct bsq_square
    fill_struct_bsq(struct bsq_square b, int x, int y, int size);
    char *my_strncat(char *dest, const char *src, size_t n);
    char* my_bsq_map_gen(int lenght, char* patern, char* str);
#endif
