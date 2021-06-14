/*
** EPITECH PROJECT, 2021
** B-CPE-210-BER-2-1-stumper4-eduard.popp
** File description:
** print_pokemons
*/

#include "../include/helper.h"
#include "../include/my.h"

void print_pokemon_list(llist_t *pokemons)
{
    for (pokemons = pokemons->prev; pokemons != NULL; \
    pokemons = pokemons->next) {
        my_printf("Pokemon %s has %d attack, ", pokemons->name, pokemons->atk);
        my_printf("%d defense, ", pokemons->def);
        my_printf("%d speed and %d health", pokemons->spd, pokemons->health);
        my_putchar('\n');
    }
}
