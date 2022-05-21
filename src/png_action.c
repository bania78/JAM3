/*
** EPITECH PROJECT, 2020
** png_action.c
** File description:
** png_action.c
*/

#include "../include/my_runner.h"

png png_jump(png p)
{
    if (p.vecs.i.x == 1)
        p.vecs.beginning.y -= 13;
    if (p.vecs.beginning.y <= 300)
        p.vecs.i.x += 1;
    if (p.vecs.i.x == 6)
        p.vecs.beginning.y += 15;
    if (p.vecs.beginning.y >= 480)
        p.vecs.i.x = 0;
    sfSprite_setPosition(p.s_png_jump, p.vecs.beginning);
    return (p);
}

int collision(png p)
{
    p.vecs.i.y = 0;
    if (p.vecs.beginning.x >= p.vecs.begin_enemy.x - 70 && p.vecs.beginning.x <= p.vecs.begin_enemy.x + 100 &&
        p.vecs.beginning.y >= p.vecs.begin_enemy.y - 50
        && p.vecs.beginning.x <= p.vecs.begin_enemy.y + 50) {
        p.vecs.i.y++;
    }
    return (p.vecs.i.y);
}

int png_dead(png *p)
{
    int c = 0;
    if (p->vecs.i.y == 1) {
        c = 1;
        p->vecs.begin_enemy.x = 1000;
        sfSprite_setPosition(p->s_enemy_run, p->vecs.begin_enemy);
    } else {
        c = 0;
        p->vecs.i.y = 0;
    }
    return (c);
}