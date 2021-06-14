/*
** EPITECH PROJECT, 2021
** synthesis_D1_pokemon
** File description:
** error_check_pokedex
*/

#include "../include/helper.h"
#include "../include/my.h"


void check_each_pokemon(int first, int second, char **av)
{
    if (first != 1)
        printf("%s does not exist in the pokedex\n", av[1]);
    if (second != 1)
        printf("%s does not exist in the pokedex\n", av[2]);
}

int check_arguments(int ac, char **av, llist_t *pokemons)
{
    int first_arg_true = 0;
    int second_arg_true = 0;
    llist_t *current = pokemons->prev;

    if (ac != 3)
        return 0;
    for (; current!= NULL; current = current->next) {
        if (!my_modified_strcmp(av[1], current->name)) {
            first_arg_true = 1;
        }
        if (!my_modified_strcmp(av[2], current->name))
            second_arg_true = 1;
    }
    check_each_pokemon(first_arg_true, second_arg_true, av);
    if (first_arg_true != 1 || second_arg_true != 1)
        return 0;
    return 1;
}
