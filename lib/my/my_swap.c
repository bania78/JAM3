/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** print a char into console
*/

#include <unistd.h>
#include <stdio.h>

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
