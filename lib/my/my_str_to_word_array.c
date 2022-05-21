/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** clone a str
*/

#include <stdlib.h>

int my_strlen(char const *str);

int is_special_char(char const c)
{
    if (c < 48 || (c > 58 && c < 65) ||
    (c > 90 && c < 97) || c > 122)
        return 1;
    return 0;
}

int special_char_count(char const *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (str[i] < 48 || (str[i] > 58 && str[i] < 65)  ||
        (str[i] > 90 && str[i] < 97) || str[i] > 122)
            count += 1;
        i += 1;
    }
    return (count + 1);
}

char **malloc_dest(char const *str, int lenght_specials)
{
    char **dest;
    int i = 0;
    int dest_index = 0;
    int len = my_strlen(str);
    int size = 0;
    dest = (char **)malloc(sizeof(char *) * lenght_specials);
    while (i <= len) {
        if (!is_special_char(str[i])){
            size += 1;
        }
        else{
            dest[dest_index] = (char *)malloc(sizeof(char) * (size + 1));
            dest_index += 1;
            size = 0;
        }
        i += 1;
    }
    return dest;
}

char **my_str_to_word_array(char const *str)
{
    int lenght = my_strlen(str);
    int lenght_specials = special_char_count(str);
    int i = 0;
    int x = 0;
    int y = 0;
    char **dest = malloc_dest(str, lenght_specials);
    while (i <= lenght) {
        if (is_special_char(str[i]) == 0){
            dest[y][x] = str[i];
            x += 1;
        } else {
            dest[y][x] = '\0';
            x = 0;
            y += 1;
        }
        i += 1;
    }
    dest[y][x] = 0;
    return dest;
}
