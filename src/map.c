/*
** EPITECH PROJECT, 2022
** map
** File description:
** map
*/

#include "../include/my_runner.h"
#include <stdio.h>

void create_enemie(Wdw *w, png *p, int y)
{
    sfTexture *t_enemy = sfTexture_createFromFile("src.pics/Stitch.png", NULL);
    sfSprite *s_enemy = sfSprite_create();

    sfSprite_setTexture(s_enemy, t_enemy, 0);
    sfSprite_scale(s_enemy, p->vecs.scale_png);
    sfSprite_setPosition(s_enemy, (sfVector2f){y, 800});
    sfSprite_setTextureRect(s_enemy, p->vecs.rec_enemy);
    sfRenderWindow_drawSprite(w->window, s_enemy, NULL);
    if (p->vecs.beginning.x >= y - 70 && p->vecs.beginning.x <= y + 100 &&
        p->vecs.beginning.y >= 800 - 50
        && p->vecs.beginning.x <= 800 + 50) {
        p->vecs.i.y++;
    }
}

void set_pos_enemy(Wdw *w, png *p)
{
    for (int i = 0; w->map[i] != '9'; i++) {
        if (w->map[i] == '1')
            create_enemie(w, p, (((i - p->pos_play) * 80) - (p->compute * 10)));
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