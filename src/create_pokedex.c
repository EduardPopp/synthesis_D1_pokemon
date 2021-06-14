/*
** EPITECH PROJECT, 2021
** synthesis_D1_pokemon
** File description:
** create_pokedex
*/

#include "../include/helper.h"
#include "../include/my.h"

char *make_relative(char *path, char *file)
{
    int i = 0;
    char *relative = calloc((9 + strlen(file)), sizeof(char));

    if (relative == NULL)
        return NULL;
    for (; i < 8 ; i++)
        relative[i] = path[i];
    for (int j = 0; file[j] != '\0'; j++) {
        relative[i] = file[j];
        i++;
    }
    return relative;
}

int create_pokemon_database(llist_t *pokemons, csv *parsed_csv, \
char *pokfolder)
{
    DIR *folder;
    struct dirent *entry;
    char *relative = NULL;

    folder = opendir(pokfolder);
    if (folder == NULL) {
        perror("Unable to read directory");
        return (1);
    }
    while( (entry = readdir(folder))) {
        if (!strcmp (entry->d_name, ".")) continue;
        if (!strcmp (entry->d_name, "..")) continue;
        relative = make_relative("pokecfg/", entry->d_name);
        parsed_csv = parse_csv(relative);
        generate_mon_db(pokemons, parsed_csv);
        free(relative);
        free_parsed_csv(parsed_csv);
    }
    closedir(folder);
    return (0);
}