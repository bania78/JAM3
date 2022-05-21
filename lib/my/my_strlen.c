/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** print a char into console
*/

#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
