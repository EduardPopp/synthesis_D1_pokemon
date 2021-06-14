/*
** EPITECH PROJECT, 2021
** B-CPE-210-BER-2-1-stumper4-eduard.popp
** File description:
** free_everything
*/

#include "include/helper.h"
#include "include/my.h"

void free_char_table(char **table)
{
    for (int i = 0; table[i]; i++)
        free(table[i]);
    free(table);
}

void free_parsed_csv(csv *parsed_csv)
{
    for (int i = 0; parsed_csv->labels[i]; i++)
        free(parsed_csv->labels[i]);
    for (int i = 0; parsed_csv->data[i]; i++)
        free(parsed_csv->data[i]);
    free(parsed_csv->labels);
    free(parsed_csv->data);
}

void free_gameloop_variables(llist_t *pokemons)
{
    llist_t *current = pokemons->prev;
    
    for (; current != NULL; current = current->next) {
        free(current->prev);
        free(current->name);
    }
    free(current);
}

void free_actives(active_pokemon *one, active_pokemon *two)
{
    free(one);
    free(two);
}