/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../../include/my.h"
#include <stdio.h>

int check_arg(char *s, int i, va_list str)
{
    if (s[i] == 's') {
        i = i + 1;
        my_putstr(va_arg(str, char *));
    }
    if (s[i] == 'c') {
        i = i + 1;
        my_putchar(va_arg(str, int));
    }
    if (s[i] == 'i' || s[i] == 'u' || s[i] == 'd') {
        i = i + 1;
        my_put_nbr(va_arg(str, int));
    }
    if (s[i] == 'b') {
        i = i + 1;
        my_put_nbr_base(va_arg(str, int), "01");
    }
    return i;
}

int check_base(char *s, int i, va_list str)
{
    if (s[i] == 'o') {
        i = i + 1;
        my_put_nbr_base(va_arg(str, int), "01234567");
    }
    if (s[i] == 'x') {
        i = i + 1;
        my_put_nbr_base(va_arg(str, int), "0123456789abcdef");
    }
    if (s[i] == 'X') {
        i = i + 1;
        my_put_nbr_base(va_arg(str, int), "0123456789ABCDEF");
    }
    if (s[i] == 'p') {
        i = i + 1;
        my_putstr("0x");
        my_put_nbr_base(va_arg(str, int), "0123456789abcdef");
    }
    return i;
}

int check_modulo(char *s, int i, va_list str)
{
    if (s[i] == '%') {
    i = i + 1;
    my_putchar('%');
}
}

void my_printf(char *s, ...)
{
    int i = 0;
    va_list str;
    va_start(str, s);
    while (s[i] != '\0') {
        if (s[i] == '%' && (s[i + 1] == 'b' || s[i + 1] == 'c' ||
        s[i + 1] == 'o' || s[i + 1] == 'x' || s[i + 1] == 'X' ||
        s[i + 1] == 'p' || s[i + 1] == 's' || s[i + 1] == 'i' ||
        s[i + 1] == 'd' || s[i + 1] == 'u' || s[i + 1] == '%')) {
            i++;
            i = check_arg(s, i, str);
            i = check_base(s, i, str);
            i = check_modulo(s, i, str);
        } else {
            my_putchar(s[i]);
            i++;
        }
    }
    va_end(str);
}
