/*
** EPITECH PROJECT, 2020
** sf.h
** File description:
** header for sf.c
*/

#include "my_runner.h"

typedef struct
{
    sfIntRect  rect1;
    sfIntRect  rec;
}vector;

typedef struct
{
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *sbackround;
    sfTexture *tbackround;
    sfSprite *sforeground;
    sfTexture *tforeground;
    sfVector2f scale_foreground;
    sfVector2f scale_background;
    sfSprite *slife;
    sfTexture *tlife;
    sfSprite *slife2;
    sfTexture *tlife2;
    sfMusic *music;
    vector vec;
    sfClock *clock;
    sfFont *Fscore;
    sfText *Tscore;
    char *nb_score;
    char *str_nb;
    sfFont *F_nb_score;
    sfText *T_nb_score;
    char *map;
    char *path_map;
}Wdw;

typedef struct
{
    sfIntRect rectsta;
    sfIntRect rectgre;
    sfIntRect rectqui;
    sfSprite *starbackround;
    sfTexture *startexbackround;
    sfSprite *starbutton;
    sfSprite *grebutton;
    sfTexture *gretexbutton;
    sfTexture *startexbutton;
    sfSprite *quitbutton;
    sfTexture *quitexbutton;
    int start;
    sfVector2i mouse_pos;
    int yellow;
    int pink;
}start;

typedef struct
{
    sfVector2f scale_png;
    sfVector2f beginning;
    sfIntRect run;
    sfIntRect rec_enemy;
    sfIntRect rec_fpink;
    sfIntRect rec_fyellow;
    sfVector2f scale_enemy;
    sfVector2f begin_enemy;
    sfVector2f move_enemy;
    sfVector2i i;
    int c;
}vec_png;

typedef struct
{
    sfSprite *s_png_run;
    sfTexture *t_png_run;
    sfSprite *s_png_jump;
    sfTexture *t_png_jump;
    sfSprite *s_enemy_run;
    sfTexture *t_enemy_run;
    sfSprite *s_fpink;
    sfTexture *t_fpink;
    sfSprite *s_fyellow;
    sfTexture *t_fyellow;
    sfSprite *s_png;
    sfTexture *t_png;
    sfSprite *s_over;
    sfTexture *t_over;
    vec_png vecs;
    int pos_play;
    int compute;
}png;