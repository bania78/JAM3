/*
** EPITECH PROJECT, 2021
** day05
** File description:
** task03
*/

#include <unistd.h>
#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    if (nb == 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    while (  -nb + my_compute_power_it(nb, p + 1)) {
        return (nb);
    }
    return (0);
}
