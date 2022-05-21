/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** print a char into console
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int my_print_revalpha(void)
{
    char nb = 122;

    while (nb >= 97) {
        my_putchar(nb);
        nb = nb - 1;
    }
    my_putchar ('\n');
    return (0);
}
