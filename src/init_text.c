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
    sfVector2f pos_text = {1600.0, 0.0};
    sfVector2f pos_score = {1270.0,0.0};
    char str[] = "Family saved :";
    char *score = malloc(sizeof(char) * 14);
    w.nb_score = malloc(sizeof(char) * 2);

    for (int i = 0 ; i < 14; i++)
        score[i] = str[i];

    w.nb_score[1] = '\0';
    sfText_setFont(w.Tscore, w.Fscore);
    sfText_setString(w.Tscore, score);
    sfText_setFont(w.T_nb_score, w.F_nb_score);
    sfText_setString(w.T_nb_score, w.nb_score);
    sfText_setPosition(w.Tscore, pos_score);
    sfText_setPosition(w.T_nb_score, pos_text);
    return (w);
}
