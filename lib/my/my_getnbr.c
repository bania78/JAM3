/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** nbr
*/

int my_getnbr(char const *str)
{
    int i;
    int y;
    int multiplier = 1;
    long number = 0;

    for (int i = 0 ; str[i] == '+' || str[i] == '-' ; i++) {
        if (str[i] == '-')
            multiplier = -1;
        else
            multiplier = 1;
    }
    y = i;
    for (int y = 0 ; str[y] >= '0' && str[y] <= '9' ; y++) {
        number = number * 10;
        number = number + (str[y] - 48);
        if ((y - i) > 11 || number > 2147483648)
            return 0;
    }
    return (number * multiplier);
}
