/*
** EPITECH PROJECT, 2022
** hitboxes.c
** File description:
** hitbox
*/

#include "../include/struct.h"
#include "../include/my.h"

void hitboxes(struct data_base_t *u)
{
    if (u->position_player.y < u->position_bullet.y &&
    u->position_player.y + 200 < u->position_bullet.y + 20 && 
    u->position_player.x < u->position_bullet.x &&
    u->position_player.x + 200 < u->position_bullet.x + 5) {
        
    } else {
        sfRenderWindow_close(u->window);
    }
}
