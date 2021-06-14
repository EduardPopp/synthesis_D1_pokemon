/*
** EPITECH PROJECT, 2020
** my_show_word_array.c
** File description:
** display words of an array
*/

#include <stdio.h>

void my_putchar(char c);

char my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}
