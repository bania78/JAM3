/*
** EPITECH PROJECT, 2020
** init_text.c
** File description:
** header for init_text.c
*/

#include "../include/my_runner.h"

Wdw init_text()
{
    Wdw w = init_text_bis();
    sfVector2f pos_text = {500.0, 0.0};
    sfVector2f pos_score = {350.0,0.0};
    char str[] = "score :";
    w.str_nb = "0000000000";
    char *score = malloc(sizeof(char) * 7);
    w.nb_score = malloc(sizeof(char) * 10);

    for (int i = 0 ; i < 7; i++)
        score[i] = str[i];
    for (int f = 0; f < 11; f++)
        w.nb_score[f] = w.str_nb[f];
    sfText_setFont(w.Tscore, w.Fscore);
    sfText_setString(w.Tscore, score);
    sfText_setFont(w.T_nb_score, w.F_nb_score);
    sfText_setString(w.T_nb_score, w.nb_score);
    sfText_setPosition(w.Tscore, pos_score);
    sfText_setPosition(w.T_nb_score, pos_text);
    return (w);
}
