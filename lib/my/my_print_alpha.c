/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** print a char into console
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    char nb = 97;

    while (nb <= 122) {
        my_putchar(nb);
        nb = nb + 1;
    }
    my_putchar('\n');
    return (0);
}
