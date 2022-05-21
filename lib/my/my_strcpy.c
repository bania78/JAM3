/*
** EPITECH PROJECT, 2021
** day06
** File description:
** task01
*/

#include <unistd.h>
#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}
