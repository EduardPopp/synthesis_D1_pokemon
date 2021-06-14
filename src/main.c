/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "../include/helper.h"
#include "../include/my.h"


char *uppercase_args(char *argument)
{
    char *name = strdup(argument);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[0] >= 'a' && name[0] <= 'z') {
            name[0] = name[0] -32;
        }
    }
    return name;
}

void uppercase_names(llist_t *pokemons)
{
    llist_t *cur = pokemons->prev;

    for (; cur != NULL; cur = cur->next) {
        for (int i = 0; cur->name[i] != '\0'; i++){
            if (cur->name[0] >= 'a' && cur->name[0] <= 'z')
                cur->name[0] = cur->name[0] - 32;
        }
    }
}

void lowercase_names(llist_t *pokemons)
{
    llist_t *cur = pokemons->prev;

    for (; cur != NULL; cur = cur->next) {
        for (int i = 0; cur->name[i] != '\0'; i++){
            if (cur->name[0] >= 'A' && cur->name[0] <= 'Z')
                cur->name[0] = cur->name[0] + 32;
        }
    }
}

int main(int ac, char **av)
{
    llist_t *pokemons = create_list();
    csv *parsed_csv = malloc(sizeof(csv));

    srand(time(NULL));
    if (pokemons == NULL)
        return 0;
    if (parsed_csv == NULL)
        return 0;
    create_pokemon_database(pokemons, parsed_csv, "pokecfg");
    if (!check_arguments(ac, av, pokemons))
        return (0);
    lowercase_names(pokemons);
    sort_pokemon_by_name(pokemons);
    uppercase_names(pokemons);
    print_pokemon_list(pokemons);
    gameloop(pokemons, av);
    free(parsed_csv);
    free_gameloop_variables(pokemons);
    free(pokemons);
    return 0;
}