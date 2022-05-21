/*
** EPITECH PROJECT, 2021
** set_all.c
** File description:
** set
*/

#include "../include/struct.h"

static void set_texture(data_base_s *u)
{
    sfRenderWindow_clear(u->window, sfBlack);
    sfSprite_setTextureRect(u->sprite_player, u->rect);
    sfRenderWindow_drawSprite(u->window, u->sprite_background, NULL);
    sfRenderWindow_drawSprite(u->window, u->sprite_city, NULL);
    sfRenderWindow_drawSprite(u->window, u->sprite_road, NULL);
    sfRenderWindow_drawSprite(u->window, u->sprite_player, NULL);
    sfRenderWindow_drawSprite(u->window, u->sprite_bullet, NULL);
    sfRenderWindow_display(u->window);
}

data_base_s *display_game(data_base_s *u)
{
    sfEvent event;
    u = analyse_event(event, u);
    sfSprite_setTexture(u->sprite_background, u->texture_background, sfTrue);
    sfSprite_setTexture(u->sprite_city, u->texture_city, sfTrue);
    sfSprite_setTexture(u->sprite_player, u->texture_player, sfTrue);
    sfSprite_setTexture(u->sprite_road, u->texture_road, sfTrue);
    sfSprite_setTexture(u->sprite_bullet, u->texture_bullet, sfTrue);
    sfSprite_setPosition(u->sprite_player, u->position_player);
    sfSprite_setPosition(u->sprite_city, u->position_city);
    sfSprite_setPosition(u->sprite_background, u->position);
    sfSprite_setPosition(u->sprite_bullet, u->position_bullet);
    sfSprite_setOrigin(u->sprite_player, u->origin_player);
    sfSprite_setPosition(u->sprite_road, u->position_road);
    set_texture(u);
    return u;
}
