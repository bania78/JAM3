/*
** EPITECH PROJECT, 2020
** init_png.c
** File description:
** header for init_png.c
*/

#include "include/my_runner.h"

png init_png(Wdw w)
{
    png p = init();
    p.t_png_run = sfTexture_createFromFile("src.pics/png_run.png", NULL);
    p.s_png_run = sfSprite_create();
    p.t_png_jump = sfTexture_createFromFile("src.pics/png_jump.png", NULL);
    p.s_png_jump = sfSprite_create();
    p.t_enemy_run = sfTexture_createFromFile("src.pics/enemy.png", NULL);
    p.s_enemy_run = sfSprite_create();
    w.clock = sfClock_create();

    sfSprite_setTexture(p.s_png_run, p.t_png_run, 0);
    sfSprite_setTexture(p.s_png_jump, p.t_png_jump, 0);
    sfSprite_setTexture(p.s_enemy_run, p.t_enemy_run, 0);
    sfSprite_scale(p.s_png_run, p.vecs.scale_png);
    sfSprite_scale(p.s_png_jump, p.vecs.scale_png);
    sfSprite_scale(p.s_enemy_run, p.vecs.scale_enemy);
    sfSprite_setPosition(p.s_png_run, p.vecs.beginning);
    sfSprite_setPosition(p.s_png_jump, p.vecs.beginning);
    sfSprite_setPosition(p.s_enemy_run, p.vecs.begin_enemy);
    return (p);
}
png init_png_bis(Wdw w)
{
    png p = init_png(w);
    p.t_png = sfTexture_createFromFile("src.pics/png_iddle.png", NULL);
    p.s_png = sfSprite_create();
    sfSprite_setTexture(p.s_png, p.t_png, 0);
    sfSprite_scale(p.s_png, p.vecs.scale_png);
    p.vecs.c = 0;
    p.t_over = sfTexture_createFromFile("src.pics/game_over.jpg", NULL);
    p.s_over = sfSprite_create();
    sfSprite_setTexture(p.s_over, p.t_over, 0);
    return (p);
}