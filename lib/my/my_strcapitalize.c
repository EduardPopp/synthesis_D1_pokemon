/*
** EPITECH PROJECT, 2020
** 21my_strcapitalize.c
** File description:
** .
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strcapitalize(char *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str + 1)));
    char *s1 = my_strcpy(dest, str);

    for (int i = 0; s1[i] != '\0'; i++) {
        if ((s1[i] < '0' || s1[i] > 'z') || (s1[i] > '9' && s1[i] < 'A')
            || (s1[i] > 'Z' && s1[i] < 'a')) {
            if (s1[i + 1] >= 'a' && s1[i + 1] <= 'z') {
                s1[i + 1] = s1[i + 1] - 32;
            }
        }
    }
    if (s1[0] >= 'a' && s1[0] <= 'z') {
        s1[0] = s1[0] - 32;
    }
    return (s1);
}