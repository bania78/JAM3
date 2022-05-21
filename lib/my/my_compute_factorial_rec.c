/*
** EPITECH PROJECT, 2021
** day05
** File description:
** task02
*/

#include <unistd.h>
#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
    if (nb == 0) {
        return (1);
    }
    if (nb == 1) {
        return (1);
    }
    if (nb > 12) {
        return (0);
    }
    if (nb > 0) {
        my_compute_factorial_rec;
        return (nb * (nb - 1));
    }
}
