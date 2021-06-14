/*
** EPITECH PROJECT, 2020
** 23my_str_isnum.c
** File description:
** .
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

int my_str_isnum(char const *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    char *s1 = my_strcpy(dest, str);

    if (s1[0] == '\0') {
        return (1);
    }
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= '0' && s1[i] <= '9') {
            if (i + 1 == my_strlen(s1)) {
                return (1);
            }
        } else {
            return (0);
        }
    }
    return (0);
}
