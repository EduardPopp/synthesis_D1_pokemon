/*
** EPITECH PROJECT, 2020
** 15my_revstr.c
** File description:
** .
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void char_swap(char *a, char *b)
{
    char c = 0;

    c = *a;
    *a = *b;
    *b = c;
}

char *my_revstr(char *str)
{
    int i = 0;
    int x = 0;

    while (str[i] != '\0') {
        i++;
    }
    for (int a = i -1; a > x; a--) {
        char_swap(&str[x], &str[a]);
        x++;
    }
    return (str);
}
