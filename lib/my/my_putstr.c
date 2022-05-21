/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** print a char into console
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (1);
}
