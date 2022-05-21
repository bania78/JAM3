/*
** EPITECH PROJECT, 2021
** initalize.c
** File description:
** init
*/

#include "../include/struct.h"

static void init2(struct data_base_t *u)
{
    u->position_city.x = -50;
    u->position_city.y = -115;
    u->position_player.x = -50;
    u->position_player.y = 830;
    u->position_road.x = -800;
    u->position_road.y = 1000;
    u->position_bullet.x = 3000;
    u->position_bullet.y = 900;
    u->video_mode.width = WIDTH;
    u->video_mode.height = HEIGHT;
    u->video_mode.bitsPerPixel = 32;
    u->jump = 0;
}

static void init(struct data_base_t *u)
{
    u->rect.top = 0;
    u->rect.left = 0;
    u->rect.width = 500;
    u->rect.height = 300;
    u->origin.x = 4;
    u->origin.y = 4;
    u->scale_player.x = 0.8;
    u->scale_player.y = 0.8;
    u->scale_bullet.x = 0.25;
    u->scale_bullet.y = 0.25;
    u->scale_road.x = 4;
    u->scale_road.y = 4;
    sfSprite_setScale(u->sprite_city, u->origin);
    sfSprite_setScale(u->sprite_road, u->scale_road);
    sfSprite_setScale(u->sprite_player, u->scale_player);
    sfSprite_setScale(u->sprite_bullet, u->scale_bullet);
    init2(u);
}

data_base_s* struct_init(void)
{
    data_base_s *u;
    u = malloc(sizeof(data_base_s));
    u->clock = sfClock_create();
    u->clock2 = sfClock_create();
    u->sprite_background = sfSprite_create();
    u->sprite_city = sfSprite_create();
    u->sprite_road = sfSprite_create();
    u->sprite_player = sfSprite_create();
    u->sprite_bullet = sfSprite_create();
    u->texture_background = sfTexture_createFromFile("sprite/matrix.png", NULL);
    u->texture_city = sfTexture_createFromFile("sprite/city1080.png", NULL);
    u->texture_road = sfTexture_createFromFile("sprite/roadv2.png", NULL);
    u->texture_player = sfTexture_createFromFile("sprite/players_sprites.png", NULL);
    u->texture_bullet = sfTexture_createFromFile("sprite/bullet.png", NULL);
    u->music = sfMusic_createFromFile("sprite/music.ogg");
    u->music_bling = sfMusic_createFromFile("sprite/bling.ogg");
    u->music_jump = sfMusic_createFromFile("sprite/jump.ogg");
    init(u);

    u->window = sfRenderWindow_create(u->video_mode,
    "My_Runner(MATRIX)", sfDefaultStyle, NULL);
    return u;
}
