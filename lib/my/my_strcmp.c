/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** my_strcmp
*/

int	my_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i]) {
        if (s1[i] < s2[i])
    return (-1);
        else if (s1[i] > s2[i])
    return (1);
        else
    return (0);
    }
}
