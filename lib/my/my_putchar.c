/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** print a char into console
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
