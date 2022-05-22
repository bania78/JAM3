/*
** EPITECH PROJECT, 2020
** my_runner.h
** File description:
** lib
*/

#ifndef MY_RUNNER_H
#define MY_RUNNER_H

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include "sf.h"
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

Wdw init_window_vec();
png init_png(Wdw w);
png init();
void png_ghost(png *p, start *st);
png init_png_bis(Wdw w);
png png_jump(png p);
int draw_png(Wdw w, png p);
int collision (png p);
void destoy(Wdw w, png p);
int png_dead(png *p);
Wdw init_window_vec();
Wdw init_text();
Wdw init_text_bis();
void game(Wdw w, png p, start st);
void move_rect(sfIntRect *rect, int offset, int max_value, int death, int base);
void param_menu_start(Wdw w, start st);
void draw_wdw(Wdw w);
void open_map(Wdw *w);
void set_pos_enemy(Wdw *w, png *p);
void draw_pres(Wdw *w, start *st);
sfText *my_text(char *text_to_write, int size);


#endif //MY_RUNNER_H