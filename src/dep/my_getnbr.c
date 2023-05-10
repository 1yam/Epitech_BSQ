/*
** EPITECH PROJECT, 2022
** Piscine
** File description:
** my_getnbr.c
*/

static int my_control_number(long int res)
{
    if (res <= -2147483648 || res >= 2147483647){
        return 0;
    } else {
        return res;
    }
}

static int my_pos(int is_positive, int i)
{
    if (i == '-'){
        is_positive = -is_positive;
        return is_positive;
    } else {
        return is_positive;
    }
}

int	my_getnbr(char *str)
{
    int	i = 0;
    long int res = 0;
    int is_positive = 1;
    while (str[i] == '-' || str[i] == '+' || (str[i] >= '0' && str[i] <= '9')){
        is_positive = my_pos(is_positive, str[i]);
        if (str[i] >= '0' && str[i] <= '9'){
            res = res * 10 + (str[i] - '0');
        }
        i++;
    }
    return my_control_number((res * is_positive));
}
