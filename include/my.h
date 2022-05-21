/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** prototype
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_put_nbr_base(int, char *);
void my_swap(int *a, int *b);
int my_putstr(char *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strcat(char *dest, char *src);
void my_printf(char *s, ...);
int my_strcmp(char *s1, char *s2);

#endif
