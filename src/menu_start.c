/*
** EPITECH PROJECT, 2022
** menu_start
** File description:
** menu_start
*/

#include "../include/my_runner.h"

sfText *my_text(char *text_to_write, int size)
{
    sfText *text;
    sfFont *police = sfFont_createFromFile("texte/Pokemon Platine.ttf");

    text = sfText_create();
    sfText_setCharacterSize(text, size);
    sfText_setColor(text, sfWhite);
    sfText_setFont(text, police);
    sfText_setString(text, text_to_write);
    return (text);
}

void draw_victory(Wdw w, start st)
{
    char *text_to_write = "Next";
    sfVector2f vector = {1325, 615 };

    st.startexbackround = sfTexture_createFromFile("src.pics/victory.jpg", NULL);
    st.starbackround = sfSprite_create();
    sfSprite_setTexture(st.starbackround, st.startexbackround, 0);
    st.startexbutton = sfTexture_createFromFile("src.pics/Button_red.png", NULL);
    st.starbutton = sfSprite_create();
    sfSprite_setPosition(st.starbutton, (sfVector2f){1250, 600});
    sfSprite_setTextureRect(st.starbutton, st.rectsta);
    sfSprite_setTexture(st.starbutton, st.startexbutton, 0);
    sfText *title = my_text(text_to_write, 40);
    sfText_setPosition(title, vector);
    sfRenderWindow_drawSprite(w.window, st.starbackround, NULL);
    sfRenderWindow_drawSprite(w.window, st.starbutton, NULL);
    sfRenderWindow_drawText(w.window, title, NULL);
}

void param_menu_start(Wdw w, start st)
{
    char *text_to_write = "Quit";
    char *text_to_write2 = "Start";
    sfVector2f vector = {925, 665 };
    sfVector2f vector2 = {915, 515 };

    st.startexbackround = sfTexture_createFromFile("src.pics/Untitled.png", NULL);
    st.starbackround = sfSprite_create();
    sfSprite_setTexture(st.starbackround, st.startexbackround, 0);
    st.startexbutton = sfTexture_createFromFile("src.pics/Button_red.png", NULL);
    st.starbutton = sfSprite_create();
    sfSprite_setPosition(st.starbutton, (sfVector2f){850, 500});
    sfSprite_setTextureRect(st.starbutton, st.rectsta);
    sfSprite_setTexture(st.starbutton, st.startexbutton, 0);
    st.quitexbutton = sfTexture_createFromFile("src.pics/Button_ora.png", NULL);
    st.quitbutton = sfSprite_create();
    sfSprite_setPosition(st.quitbutton, (sfVector2f){850, 650});
    sfSprite_setTextureRect(st.quitbutton, st.rectqui);
    sfSprite_setTexture(st.quitbutton, st.quitexbutton, 0);
    sfText *title = my_text(text_to_write, 40);
    sfText *title2 = my_text(text_to_write2, 40);
    sfText_setPosition(title, vector);
    sfText_setPosition(title2, vector2);
    sfRenderWindow_drawSprite(w.window, st.starbackround, NULL);
    sfRenderWindow_drawSprite(w.window, st.starbutton, NULL);
    sfRenderWindow_drawSprite(w.window, st.quitbutton, NULL);
    sfRenderWindow_drawText(w.window, title, NULL);
    sfRenderWindow_drawText(w.window, title2, NULL);
}