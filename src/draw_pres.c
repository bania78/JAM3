/*
** EPITECH PROJECT, 2022
** draw_pres
** File description:
** draw_pres
*/

#include "../include/my_runner.h"

void draw_pres(Wdw *w, start *st)
{
    char *text_to_write = "OK !";
    sfVector2f vector = {925, 715 };

    st->startexbackround = sfTexture_createFromFile("src.pics/pres.png", NULL);
    st->starbackround = sfSprite_create();
    sfSprite_setTexture(st->starbackround, st->startexbackround, 0);
    st->startexbutton = sfTexture_createFromFile("src.pics/Button_red.png", NULL);
    st->starbutton = sfSprite_create();
    sfSprite_setTextureRect(st->starbutton, st->rectsta);
    sfSprite_setPosition(st->starbutton, (sfVector2f){850, 700});
    sfSprite_setTexture(st->starbutton, st->startexbutton, 0);
    sfText *title = my_text(text_to_write, 40);
    sfText_setPosition(title, vector);
    sfRenderWindow_drawSprite(w->window, st->starbackround, NULL);
    sfRenderWindow_drawSprite(w->window, st->starbutton, NULL);
    sfRenderWindow_drawText(w->window, title, NULL);
}