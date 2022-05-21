/*
** EPITECH PROJECT, 2021
** random_spawn.c
** File description:
** random spawn
*/

#include "../include/struct.h"

data_base_s *random_spawn(data_base_s *u)
{
    sfMusic_play(u->music_bling);
    u->position_bullet.x = 2200;
    u->position_bullet.y = 600 + rand() % 300;
    hitboxes(u);
    return u;
}
