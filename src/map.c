/*
** EPITECH PROJECT, 2022
** map
** File description:
** map
*/

#include "../include/my_runner.h"
#include <stdio.h>

void set_pos_enemy(Wdw *w, png *p)
{
    if (p->vecs.begin_enemy.x <= 0) {
        for (int i = p->pos_play; w->map[i] != '1' && w->map[i] != '9'; i++) {
            p->vecs.begin_enemy.x = i * 80;
        }
    }
}

void open_map(Wdw *w)
{
    int fd = open("map/map.txt", O_RDONLY);
    struct stat size;
    char *buff;
    int len;

    stat("map/map.txt", &size);
    buff = malloc(sizeof(char) * (size.st_size + 1));
    len = read(fd, buff, size.st_size);
    buff[len] = '\0';
    w->map = buff;
}