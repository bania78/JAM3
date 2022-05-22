/*
** EPITECH PROJECT, 2022
** map
** File description:
** map
*/

#include "../include/my_runner.h"
#include <stdio.h>

void create_enemie(Wdw *w, png *p, start *st, int y)
{
    sfTexture *t_enemy = sfTexture_createFromFile("src.pics/Stitch.png", NULL);
    sfSprite *s_enemy = sfSprite_create();

    sfSprite_setTexture(s_enemy, t_enemy, 0);
    sfSprite_scale(s_enemy, p->vecs.scale_png);
    sfSprite_setPosition(s_enemy, (sfVector2f){y, 800});
    sfSprite_setTextureRect(s_enemy, p->vecs.rec_enemy);
    sfRenderWindow_drawSprite(w->window, s_enemy, NULL);
    if (p->vecs.beginning.x >= y - 70 && p->vecs.beginning.x <= y + 75 &&
        p->vecs.beginning.y >= 800 - 50
        && p->vecs.beginning.x <= 800 + 50) {
        p->vecs.i.y++;
        st->start = 0;
    }
}

void create_fpink(Wdw *w, png *p, start *st, int y)
{
    sfTexture *t_fpink = sfTexture_createFromFile("src.pics/Stitch.png", NULL);
    sfSprite *s_fpink = sfSprite_create();

    sfSprite_setTexture(s_fpink, t_fpink, 0);
    sfSprite_scale(s_fpink,p->vecs.scale_png);
    sfSprite_setPosition(s_fpink, (sfVector2f){y, 800});
    sfSprite_setTextureRect(s_fpink, p->vecs.rec_fpink);
    sfRenderWindow_drawSprite(w->window, s_fpink, NULL);
    if (p->vecs.beginning.x >= y - 70 && p->vecs.beginning.x <= y + 100 &&
        p->vecs.beginning.y >= 800 - 50
        && p->vecs.beginning.x <= 800 + 50) {
        p->vecs.i.y++;
        st->pink = 1;
    }

}

void create_fyellow(Wdw *w, png *p, start *st, int y)
{
    sfTexture *t_fyellow = sfTexture_createFromFile("src.pics/Stitch.png", NULL);
    sfSprite *s_fyellow = sfSprite_create();

    sfSprite_setTexture(s_fyellow, t_fyellow, 0);
    sfSprite_scale(s_fyellow,p->vecs.scale_png);
    sfSprite_setPosition(s_fyellow, (sfVector2f){y, 800});
    sfSprite_setTextureRect(s_fyellow, p->vecs.rec_fyellow);
    sfRenderWindow_drawSprite(w->window, s_fyellow, NULL);
    if (p->vecs.beginning.x >= y - 70 && p->vecs.beginning.x <= y + 100 &&
        p->vecs.beginning.y >= 800 - 50
        && p->vecs.beginning.x <= 800 + 50) {
        p->vecs.i.y++;
        st->yellow = 1;
    }
}

void set_pos_enemy(Wdw *w, png *p, start *st)
{
    for (int i = 0; w->map[i] != '9'; i++) {
        if (w->map[i] == '1')
            create_enemie(w, p, st, (((i - p->pos_play) * 80) - (p->compute * 10)));
        if (w->map[i] == '4' && st->pink != 1)
            create_fpink(w, p, st, (((i - p->pos_play) * 80) - (p->compute * 10)));
        if (w->map[i] == '3' && st->yellow != 1)
            create_fyellow(w, p, st, (((i - p->pos_play) * 80) - (p->compute * 10)));
    }
    if (w->map[p->pos_play] == '9')
        st->start = 2;
}

void open_map(Wdw *w)
{
    int fd = open(w->path_map, O_RDONLY);
    struct stat size;
    char *buff;
    int len;

    stat(w->path_map, &size);
    buff = malloc(sizeof(char) * (size.st_size + 1));
    len = read(fd, buff, size.st_size);
    buff[len] = '\0';
    w->map = buff;
}