/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** header for main.c
*/

#include "../include/my_runner.h"
#include <stdio.h>

sfVector2i events(Wdw w, sfVector2i i, start st)
{
    while (sfRenderWindow_pollEvent(w.window, &w.event)) {
        if (w.event.type == sfEvtClosed)
            sfRenderWindow_close(w.window);
        if (w.event.key.code == sfKeySpace) {
            if (i.x == 0)
                i.x = 1;
        }
        if (w.event.type == sfEvtMouseButtonPressed) {
            st.rectsta = (sfIntRect){210, 0, 210, 96};
        }
    }
    return (i);
}

void png_ghost(png *p)
{
    if (p->vecs.i.y == 0) {
        if (p->vecs.begin_enemy.x > - 100)
            p->vecs.begin_enemy.x -= 10;
        else
            p->vecs.begin_enemy.x = 2000;
    } else
       png_dead(p);
}

void destroy(Wdw w, png p)
{
    sfMusic_destroy(w.music);
    sfSprite_destroy(p.s_over);
    sfSprite_destroy(p.s_enemy_run);
    sfSprite_destroy(p.s_png);
    sfSprite_destroy(p.s_png_jump);
    sfSprite_destroy(w.sbackround);
    sfSprite_destroy(w.sforeground);
    sfSprite_destroy(p.s_png_run);
    sfTexture_destroy(p.t_png);
    sfTexture_destroy(p.t_enemy_run);
    sfTexture_destroy(p.t_png_jump);
    sfTexture_destroy(p.t_png_run);
    sfText_destroy(w.Tscore);
    sfText_destroy(w.T_nb_score);
    sfTexture_destroy(w.tforeground);
    sfTexture_destroy(w.tbackround);
}

void game(Wdw w, png p, start st)
{
    sfMusic_play(w.music);
    st.rectsta = (sfIntRect){0, 0, 210, 96};
    st.rectqui = (sfIntRect){0, 0, 210, 96};
    while (sfRenderWindow_isOpen(w.window)) {
        sfRenderWindow_clear(w.window, sfBlue);
        p.vecs.i = events(w, p.vecs.i, st);
        param_menu_start(w, st);
        //draw_wdw(w);
        //move_rect(&w.vec.rect1, 1, 1800);
        //move_rect(&w.vec.rec, 17, 1800);
        //move_rect(&p.vecs.rec_enemy, 600, 7200);
        //p.vecs.i.y = draw_png(w, p);
        //png_ghost(&p);
        //sfSprite_setPosition(p.s_enemy_run, p.vecs.begin_enemy);
        //p = png_jump(p);
        //move_rect(&p.vecs.run, 416, 8220);
        //move_rect(&p.vecs.run, 416, 10000);
        sfRenderWindow_display(w.window);
    }
    destroy(w, p);
}

int main(int ac, char **argv)
{
    if (ac != 1)
        return (84);
    Wdw w = init_window_vec(w);
    png p = init_png_bis(w);
    start st;
    game(w, p, st);
    return (0);
}