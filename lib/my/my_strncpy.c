/*
** EPITECH PROJECT, 2021
** day06
** File description:
** task02
*/

#include <unistd.h>
#include <stdio.h>

char *my_strncpy(char *dest , char const *src , int n)
{
    int i = 0;

    if (n > i && src[i]) {
        dest[i] = src[i];
        i = + 1;
    }
    while (src[i] != '\0') {
        i = + 1;
    }
    dest[i] = '\0';
    return dest;
}
