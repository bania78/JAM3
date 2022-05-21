/*
** EPITECH PROJECT, 2021
** day05
** File description:
** task01
*/

#include <unistd.h>
#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int result = 1;
    int b = 1;

    if (nb > 12) {
        return (0);
    }
    if (nb == 0) {
        return (1);
    }
    if (nb < 1) {
        return (0);
    }
    while (nb >= result) {
        b = result * b;
        result = result + 1;
    }
    return (b);
}
