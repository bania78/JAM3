/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** my_strcat.c
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strcat(char *dest, char *src)
{
    int i;
    int j;
    char *str3;

    i = 0;
    j = 0;
    str3 = malloc(sizeof(str3) * (my_strlen(dest) + my_strlen(src) + 1));
    while (dest[i] != '\0') {
        str3[i] = dest[i];
        i++;
    }
    str3[i++] = '/';
    while (src[j] != '\0')
        str3[i++] = src[j++];
    str3[i] = '\0';
    return (str3);
}
