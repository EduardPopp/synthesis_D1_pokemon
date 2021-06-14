/*
** EPITECH PROJECT, 2021
** create_monster_db.c
** File description:
** create_monster_db
*/

#include "../include/helper.h"
#include "../include/my.h"

llist_t *generate_mon_db(llist_t *list, csv *csv)
{
    for (int i = 0; i < csv->n_rows; i++) {
        new_node(list, csv, i);
    }
    return (list);
}