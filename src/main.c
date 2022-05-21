/*
** EPITECH PROJECT, 2021
** my_hunter.c
** File description:
** main
*/

#include "../include/struct.h"
#include "../include/my.h"

void music_stop(data_base_s *u)
{
    sfMusic_stop(u->music);
    sfMusic_stop(u->music_bling);
    sfMusic_stop(u->music_jump);
    sfMusic_destroy(u->music);
    sfMusic_destroy(u->music_bling);
    sfMusic_destroy(u->music_jump);
}

data_base_s *analyse_event(sfEvent event, data_base_s *u)
{
    while (sfRenderWindow_pollEvent(u->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(u->window);
    }
    return u;
}

static void clock_set(data_base_s *u)
{
    int i = 500;
    if (u->seconds > 0.09) {
        u->rect.left = u->rect.left + i;
        u->position_road.x = u->position_road.x - 20;
        u->position_city.x = u->position_city.x - 2;
        if (u->rect.left > 3500)
            u->rect.left = 500;
        if (u->position_road.x == -1000)
            u->position_road.x = -800;
        sfClock_restart(u->clock);
        }
        if (u->seconds2 > 0.05) {
            u->position_bullet.x = u->position_bullet.x - 2;
            if (u->position_bullet.x < -100)
                random_spawn(u);
        } else {
            sfClock_restart(u->clock2);
        }
}

void game_start(void)
{
    data_base_s *u = struct_init();

    sfMusic_play(u->music);
    while (sfRenderWindow_isOpen(u->window)) {
        jump(u);
        u->position.x -= 0.01;
        u->time = sfClock_getElapsedTime(u->clock);
        u->time2 = sfClock_getElapsedTime(u->clock2);
        u->seconds = sfTime_asMicroseconds(u->time) / 1000000.0;
        u->seconds2 = sfTime_asMicroseconds(u->time2) / 1000000.0;
        clock_set(u);
        u = display_game(u);
    }
    music_stop(u);
}

int main(int ac, char **av)
{
    if (ac > 2)
        return 1;
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h')
            flag_h();
    }
    if (ac == 1)
        game_start();
    return 0;
}
