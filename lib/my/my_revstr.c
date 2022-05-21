/*
** EPITECH PROJECT, 2021
** day06
** File description:
** task03
*/

#include <string.h>
#include <stdio.h>

char *my_revstr(char *str)
{
    int b = 0;

    while (str[b] != '\0') {
        b += 1;
    }

    int a = 0;
    char c;

    b = b - 1;

    while (a < b) {
        c = str[a];
        str[a] = str[b];
        str[b] = c ;
        a += 1;
        b -= 1;
    }
    return str;
}
