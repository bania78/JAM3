/*
** EPITECH PROJECT, 2020
** draw.c
** File description:
** draw
*/

#include "../include/my_runner.h"
#include <stdbool.h>

void move_rect(sfIntRect *rect, int offset, int max_value, int death, int base)
{
    sfClock *clock;
    sfTime time;
    float temp = 0;

    clock = sfClock_create();
    if (death == 0) {
        while (temp < 0.9) {
            time = sfClock_getElapsedTime(clock);
            temp = time.microseconds / 18500.0;
        }
        if (temp > 0.9) {
            rect->left = rect->left + offset;
            if (rect->left >= max_value)
                rect->left = base;
            sfClock_restart(clock);
        }
    }else {
        while (temp < 0.9) {
            time = sfClock_getElapsedTime(clock);
            temp = time.microseconds / 185000.0;
        }
        if (temp > 0.9)
            sfClock_restart(clock);
    }
}

void draw_wdw(Wdw w)
{
    sfRenderWindow_drawSprite(w.window, w.sbackround, NULL);
    sfSprite_setTextureRect(w.sbackround, w.vec.rect1);
    sfRenderWindow_drawSprite(w.window, w.sforeground, NULL);
    sfSprite_setTextureRect(w.sforeground, w.vec.rec);


    sfText_setString(w.T_nb_score, w.nb_score);
    sfRenderWindow_drawText(w.window, w.T_nb_score, NULL);
    sfRenderWindow_drawText(w.window, w.Tscore, NULL);
}

int draw_png(Wdw w, png p)
{
    sfSprite_setTextureRect(p.s_enemy_run, p.vecs.rec_enemy);
    sfRenderWindow_drawSprite(w.window, p.s_enemy_run, NULL);
    sfIntRect png = {0, 0, 100, 100};
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
    if (w.start.yellow == 1)
        w.nb_score[0] = '1';
    else if (w.start.pink == 1)
        w.nb_score[0] = '2';
    else
        w.nb_score[0] = '0';
    sfText_setString(w.T_nb_score, w.nb_score);
    return (p.vecs.i.y);
}