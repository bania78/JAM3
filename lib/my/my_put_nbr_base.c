/*
** EPITECH PROJECT, 2021
** my_put_nbr_base
** File description:
** print a number
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str);

int my_putstr(char const *str);

int my_put_nbr(int nb);

int my_put_nbr_base(int nb, char *base)
{
    int size = my_strlen(base);

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        if (nb == -2147483648)
            my_putstr("2147483648");
    }
    if (nb >= size) {
        my_put_nbr(nb / size);
    } else {
        my_putchar(base[nb % size]);
    }
    return 0;
}
