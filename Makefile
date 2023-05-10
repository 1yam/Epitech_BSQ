##
## EPITECH PROJECT, 2022
## B-CPE-110-LYN-1-1-BSQ-lyam.gomes [SSH: 192.168.1.15]
## File description:
## Makefile
##

CC = gcc

SRC = src/dep/print/my_print.c \
	   	src/dep/fs_open_file.c \
		src/dep/my_strlen.c \
		src/dep/my_getnbr.c \
		src/dep/my_strncpy.c \
		src/dep/fs_get_number_from_first_line.c \
		src/dep/my_strcat.c \
		my_bsq_map_gen.c \
		my_bsq_error.c \
		src/dep/my_str_to_word_array.c \
		src/dep/my_show_word_array.c \
		bsq.c \
		main.c

OBJ = $(SRC:.c=.o)

CFLAGS = -W -Wall -I include -g3

NAME =  bsq

$(NAME): $(OBJ)
		rm -f $(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
			rm -f $(OBJ)
			rm -f *.o
			rm -f *.a
fclean:
			rm -f $(NAME)
re: 		fclean all
