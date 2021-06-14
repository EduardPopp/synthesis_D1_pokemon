/*
** EPITECH PROJECT, 2021
** synthesis_D1_pokemon
** File description:
** name_sort_pokemon
*/

#include "../include/helper.h"
#include "../include/my.h"

void swap_info(llist_t *node1, llist_t *node2)
{
    node1->name = node2->name;
    node1->atk = node2->atk;
    node1->def = node2->def;
    node1->health = node2->health;
    node1->spd = node2->spd;
    node1->size = node2->size;
}

int swap(llist_t *node1, llist_t *node2)
{
    llist_t *tempvar = malloc(sizeof(llist_t));

    if (tempvar == NULL)
        return 0;
    tempvar->name = node1->name;
    tempvar->atk = node1->atk;
    tempvar->def = node1->def;
    tempvar->health = node1->health;
    tempvar->spd = node1->spd;
    tempvar->size = node1->size;
    swap_info(node1, node2);
    node2->name = tempvar->name;
    node2->atk = tempvar->atk;
    node2->def = tempvar->def;
    node2->health = tempvar->health;
    node2->spd = tempvar->spd;
    node2->size = tempvar->size;
    free(tempvar);
    return 0;
}

void sort_pokemon_by_name(llist_t *pokemon)
{
    llist_t *temp1;
    llist_t *temp2;

    for (int i = pokemon->size - 2; i >= 0; i--) {
        temp1 = pokemon->prev;
        temp2 = temp1->next;
        for (int j = 0; j <= i; j++) {
            if (strcmp(temp1->name, temp2->name) > 0)
                swap(temp1, temp2);
            temp1 = temp2;
            temp2 = temp2->next;
        }
    }
}