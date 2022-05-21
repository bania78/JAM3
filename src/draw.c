/*
** EPITECH PROJECT, 2020
** draw.c
** File description:
** draw
*/

#include "../include/my_runner.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    sfClock *clock;
    sfTime time;
    float temp = 0;

    clock = sfClock_create();
    while (temp < 0.9) {
        time = sfClock_getElapsedTime(clock);
        temp = time.microseconds / 18500.0;
    }
    if (temp > 0.9) {
        rect->left = rect->left + offset;
        if (rect->left >= max_value)
            rect->left = 0;
        sfClock_restart(clock);
    }
}

void draw_wdw(Wdw w)
{
    sfRenderWindow_drawSprite(w.window, w.sbackround, NULL);
    sfSprite_setTextureRect(w.sbackround, w.vec.rect1);
    sfRenderWindow_drawSprite(w.window, w.sforeground, NULL);
    sfSprite_setTextureRect(w.sforeground, w.vec.rec);
    for (int i = 10; (w.nb_score[i] - 1) == '9'; i--) {
        w.nb_score[i] = '0';
        w.nb_score[i - 1] = w.nb_score[i - 1] + 1;
    }
    w.nb_score[10] = w.nb_score[10] + 1;
    sfText_setString(w.T_nb_score, w.nb_score);
    sfRenderWindow_drawText(w.window, w.T_nb_score, NULL);
    sfRenderWindow_drawText(w.window, w.Tscore, NULL);
}

int draw_png(Wdw w, png p)
{
    sfSprite_setTextureRect(p.s_enemy_run, p.vecs.rec_enemy);
    sfRenderWindow_drawSprite(w.window, p.s_enemy_run, NULL);
    sfIntRect png = {0, 0, 384, 454};
    p.vecs.i.y = collision(p);
    if (p.vecs.i.y != 0) {
        sfSprite_setTextureRect(p.s_png, png);
        sfRenderWindow_drawSprite(w.window, p.s_png, 0);
    } else {
        if (p.vecs.i.x == 0) {
            sfSprite_setTextureRect(p.s_png_run, p.vecs.run);
            sfRenderWindow_drawSprite(w.window, p.s_png_run, NULL);
        } else if (p.vecs.i.x != 0) {
            sfSprite_setTextureRect(p.s_png_jump, p.vecs.run);
            sfRenderWindow_drawSprite(w.window, p.s_png_jump, NULL);
        }
    }
    return (p.vecs.i.y);
}