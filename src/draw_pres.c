/*
** EPITECH PROJECT, 2022
** draw_pres
** File description:
** draw_pres
*/

#include "../include/my_runner.h"

void draw_pres(Wdw *w, start *st)
{
    char *text_to_write = "Normal";
    char *text_to_write2 = "Easy";
    char *text_to_write3 = "Hard";
    sfVector2f vector = {925, 715 };
    sfVector2f vector1 = {625, 715 };
    sfVector2f vector2 = {1225, 715 };

    st->startexbackround = sfTexture_createFromFile("src.pics/pres.png", NULL);
    st->starbackround = sfSprite_create();
    sfSprite_setTexture(st->starbackround, st->startexbackround, 0);
    st->startexbutton = sfTexture_createFromFile("src.pics/Button_red.png", NULL);
    st->gretexbutton = sfTexture_createFromFile("src.pics/Button_blu.png", NULL);
    st->quitexbutton = sfTexture_createFromFile("src.pics/Button_ora.png", NULL);
    st->starbutton = sfSprite_create();
    st->quitbutton = sfSprite_create();
    st->grebutton = sfSprite_create();
    sfSprite_setTextureRect(st->starbutton, st->rectsta);
    sfSprite_setTextureRect(st->grebutton, st->rectqui);
    sfSprite_setTextureRect(st->quitbutton, st->rectqui);
    sfSprite_setPosition(st->starbutton, (sfVector2f){1150, 700});
    sfSprite_setPosition(st->grebutton, (sfVector2f){550, 700});
    sfSprite_setPosition(st->quitbutton, (sfVector2f){850, 700});
    sfSprite_setTexture(st->starbutton, st->startexbutton, 0);
    sfSprite_setTexture(st->grebutton, st->gretexbutton, 0);
    sfSprite_setTexture(st->quitbutton, st->quitexbutton, 0);
    sfText *title = my_text(text_to_write, 40);
    sfText *title1 = my_text(text_to_write2, 40);
    sfText *title2 = my_text(text_to_write3, 40);
    sfText_setPosition(title, vector);
    sfText_setPosition(title1, vector1);
    sfText_setPosition(title2, vector2);
    sfRenderWindow_drawSprite(w->window, st->starbackround, NULL);
    sfRenderWindow_drawSprite(w->window, st->starbutton, NULL);
    sfRenderWindow_drawSprite(w->window, st->grebutton, NULL);
    sfRenderWindow_drawSprite(w->window, st->quitbutton, NULL);
    sfRenderWindow_drawText(w->window, title, NULL);
    sfRenderWindow_drawText(w->window, title1, NULL);
    sfRenderWindow_drawText(w->window, title2, NULL);
}