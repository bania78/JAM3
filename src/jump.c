/*
** EPITECH PROJECT, 2021
** jump.c
** File description:
** jump
*/

#include "../include/struct.h"

void jump(struct data_base_t *u)
{
    if (u->jump == 1) {
        //sfMusic_play(u->music_jump);
        u->position_player.y = u->position_player.y - 1;
        if (u->position_player.y <= 500)
            u->jump = 0;
    }
    if (u->position_player.y <= 800 && u->jump == 0)
        u->position_player.y = u->position_player.y + 1;
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        u->jump = 1;
        u->rect.left = 500;
    }
}
