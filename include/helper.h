/*
** EPITECH PROJECT, 2020
** helper.h
** File description:
** header file containing prototypes and definitions from all project files
*/

#ifndef HELPER_H_
#define HELPER_H_

typedef struct linked_list {
    char *name;
    struct linked_list *next;
    struct linked_list *prev;
    int atk;
    int def;
    int spd;
    int health;
    int size;
} llist_t;

typedef struct csv {
    char ***data;
    char **labels;
    int n_columns;
    int n_rows;
} csv;

typedef struct active_pokemon {
    char *name;
    int atk;
    int def;
    int spd;
    int health;
    int size;
    int first;
} active_pokemon;

char **my_str_to_word_array(char *str, char sep, int in_word);

csv *parse_data(char *content, csv *output);

csv *parse_csv(char *filepath);

csv *parse_info(char *content);

void free_char_table(char **table);

void free_parsed_csv(csv *parsed_csv);

llist_t *create_list(void);

char *read_file(char *filepath);

llist_t *generate_mon_db(llist_t *list, csv *csv);

int new_node(llist_t *list, csv *csv, int i);

void print_pokemon_list(llist_t *pokemons);

void gameloop(llist_t *pokemons, char **av);

void sort_pokemon_by_name(llist_t *pokemon);

int create_pokemon_database(llist_t *pokemons, csv *parsed_csv, \
char *pokfolder);

int check_arguments(int ac, char **av, llist_t *pokemons);

char *uppercase_args(char *argument);

void free_gameloop_variables(llist_t *pokemons);

void free_actives(active_pokemon *one, active_pokemon *two);

int get_random_atk_one(active_pokemon *one);

int get_random_atk_two(active_pokemon *two);
#endif /* !HELPER_H_ */
