/*
** EPITECH PROJECT, 2020
** init.c
** File description:
** init
*/

#include "../include/my_runner.h"

Wdw init_life()
{
    Wdw w;
    w.tlife = sfTexture_createFromFile("src.pics/vie_vide.png", NULL);
    w.slife = sfSprite_create();
    w.tlife2 = sfTexture_createFromFile("src.pics/vie_plein.png", NULL);
    w.slife2 = sfSprite_create();
    sfSprite_setTexture(w.slife, w.tlife, 0);
    sfSprite_setTexture(w.slife2, w.tlife2, 0);
    return (w);
}

Wdw init_text_bis()
{
    Wdw w = init_life();
    w.Fscore = sfFont_createFromFile("texte/Starborn.ttf");
    w.Tscore = sfText_create();
    w.F_nb_score = sfFont_createFromFile("texte/Starborn.ttf");
    w.T_nb_score = sfText_create();
    return (w);
}

Wdw init_window_vec()
{
    Wdw w = init_text();
    w.vec.rect1.left = 0;
    w.vec.rect1.top = 0;
    w.vec.rect1.width = 800;
    w.vec.rect1.height = 600;
    w.vec.rec.left = 0;
    w.vec.rec.top = 0;
    w.vec.rec.width = 1900;
    w.vec.rec.height = 1167;
    w.scale_tforeground.x = 1.5;
    w.scale_tforeground.y = 1.5;
    sfVideoMode video_mode = {1900, 1167, 32};
    w.window = sfRenderWindow_create(video_mode, "candy-world", sfDefaultStyle | sfResize, NULL);
    w.tbackround = sfTexture_createFromFile("src.pics/Plan_de_travail_0.png", NULL);
    w.sbackround = sfSprite_create();
    w.tforeground = sfTexture_createFromFile("src.pics/Plan_de_travail_66.png", NULL);
    w.sforeground = sfSprite_create();
    sfRenderWindow_setFramerateLimit(w.window, 60);
    sfSprite_setTexture(w.sbackround, w.tbackround, 0);
    sfSprite_setTexture(w.sforeground, w.tforeground, 0);
    w.music = sfMusic_createFromFile("src.sounds/Elvis-Presley-Stuck-on-You-_Lilo-_-Stitch-Soundtrack_.ogg");
    sfSprite_scale(w.sforeground, w.scale_tforeground);
    return (w);
}

png init()
{
    png p;
    p.vecs.scale_png.x = 3;
    p.vecs.scale_png.y = 3;
    p.vecs.beginning.x = 50;
    p.vecs.beginning.y = 800;
    p.vecs.run.left = 0;
    p.vecs.run.top = 70;
    p.vecs.run.width = 35;
    p.vecs.run.height = 37;
    p.vecs.i.x = 0;
    p.vecs.rec_enemy.left = 0;
    p.vecs.rec_enemy.top = 0;
    p.vecs.rec_enemy.width = 600;
    p.vecs.rec_enemy.height = 600;
    p.vecs.scale_enemy.x = 0.3;
    p.vecs.scale_enemy.y = 0.3;
    p.vecs.begin_enemy.x = 2000;
    p.vecs.begin_enemy.y = 750;
    return (p);
}