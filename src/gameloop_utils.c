/*
** EPITECH PROJECT, 2021
** synthesis_D1_pokemon
** File description:
** gameloop_utils
*/

#include "../include/helper.h"
#include "../include/my.h"

int get_random_atk_one(active_pokemon *one)
{
    int atk = 0;

    atk = rand() % one->atk;
    return (atk);
}

int get_random_atk_two(active_pokemon *two)
{
    int atk = 0;

    atk = rand() % two->atk;
    return (atk);
}