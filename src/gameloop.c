/*
** EPITECH PROJECT, 2021
** gameloop.c
** File description:
** gameloop
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

void get_fastest(active_pokemon *one, active_pokemon *two)
{
    if (one->spd < two->spd) {
        two->first = 1; 
    } else {
        one->first = 1;
    }
}

active_pokemon *get_active_pokemon(llist_t *pokemons, char *name)
{
    active_pokemon *active = malloc(sizeof(active_pokemon));
    llist_t *current = pokemons->prev;

    if (active == NULL)
        return NULL;
    for (; current != NULL; current = current->next) {
        if (strcmp(name, current->name) == 0) {
            active->name = current->name;
            active->atk = current->atk;
            active->def = current->def;
            active->spd = current->spd;
            active->health = current->health;
            active->first = 0;
        }
    }
    return (active);
}

void second_pokemon_attack(active_pokemon *one, active_pokemon *two, \
int atk_two)
{
    int dmg = 0;

    atk_two = get_random_atk_two(two);
    my_printf("%s attacks for %d damage\n", two->name, atk_two);
    my_printf("%s blocks %d damage\n", one->name, one->def);
    if (atk_two <= one->def) {
        dmg = 0;
    } else {
        dmg = atk_two - one->def;
    }
    my_printf("%s loses %d health ", one->name, dmg);
    one->health -= dmg;
    two->first = 0;
    one->first = 1;
    if (one->health <= 0) {
        my_printf("(0 left)\n%s is KO\n", one->name);
        my_printf("%s wins the fight!\n", two->name);
    } else {
        my_printf("(%d left)\n", one->health);
    }
}

void first_pokemon_attack(active_pokemon *one, active_pokemon *two, int atk)
{
    int dmg = 0;

    atk = get_random_atk_one(one);
    my_printf("%s attacks for %d damage\n", one->name, atk);
    my_printf("%s blocks %d damage\n", two->name, two->def);
    if (atk <= two->def) {
        dmg = 0;
    } else {
        dmg = atk - two->def;
    }
    my_printf("%s loses %d health ", two->name, dmg);
    two->health -= dmg;
    one->first = 0;
    two->first = 1;
    if (two->health <= 0) {
        my_printf("(0 left)\n%s is KO\n", two->name);
        my_printf("%s wins the fight!\n", one->name);
    } else {
        my_printf("(%d left)\n", two->health);
    }
}

void gameloop(llist_t *pokemons, char **av)
{
    int atk = 0;
    int atk_two = 0;
    char *name_one = uppercase_args(av[1]);
    char *name_two = uppercase_args(av[2]);
    
    active_pokemon *one = get_active_pokemon(pokemons, name_one);
    active_pokemon *two = get_active_pokemon(pokemons, name_two);
    get_fastest(one, two);
    while(one->health > 0 && two->health > 0) {
        if (two->first == 1) {
            second_pokemon_attack(one, two, atk_two);
        } else {
            first_pokemon_attack(one, two, atk);
        }
    }
    free(name_one);
    free(name_two);
    free_actives(one, two);
}