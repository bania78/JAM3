/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct basics
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>

#ifndef data_base
    #define data_base


static const int WIDTH = 1920;
static const int HEIGHT = 1080;

typedef struct data_base_t
{
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfRenderWindow *window_death;
    sfVector2f position;
    sfVector2f position_player;
    sfVector2f position_city;
    sfVector2f position_road;
    sfVector2f position_bullet;
    sfVector2f origin;
    sfVector2f origin_player;
    sfVector2f scale_city;
    sfVector2f scale_player;
    sfVector2f scale_road;
    sfVector2f scale_bullet;
    sfClock *clock;
    sfClock *clock2;
    sfClock *clock3;
    sfTime time;
    sfTime time2;
    sfTime time3;
    sfSprite *sprite_background;
    sfSprite *sprite_player;
    sfSprite *sprite_city;
    sfSprite *sprite_road;
    sfSprite *sprite_bullet;
    sfTexture *texture_background;
    sfTexture *texture_player;
    sfTexture *texture_city;
    sfTexture *texture_road;
    sfTexture *texture_bullet;
    sfMusic *music_jump;
    sfMusic *music_bling;
    sfMusic *music;
    sfIntRect rect;
    sfIntRect *rectu;
    float kill;
    int score;
    float seconds;
    float seconds2;
    float seconds3;
    int jump;

} data_base_s;
data_base_s *analyse_event(sfEvent event, data_base_s *u);
sfVector2f check_spawn(sfVector2f position);
data_base_s *random_spawn(data_base_s *u);
data_base_s* struct_init(void);
void jump(struct data_base_t *u);
data_base_s *display_game(data_base_s *u);
void hitboxes(struct data_base_t *u);
void flag_h(void);

#endif
