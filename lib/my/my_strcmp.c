/*
** EPITECH PROJECT, 2020
** 17my_strcmp.c
** File description:
** .
*/

#include <stdio.h>
#include <string.h>

int my_strcmp(char const *s1, char const *s2)
{
    int res = 0;

    for (int i = 0; s1[i] != '\0'|| s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return (res);
        }
    }
    return (0);
}

int my_modified_strcmp(char const *s1, char const *s2)
{
    int res = 0;

    if (s1[0] - s2[0] != 32 && s1[0] - s2[0] != 0) {
        res += s1[0] - s2[0]; 
    } else {
        res = 0;
    }
    for (int i = 1; s1[i] != '\0'|| s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return (res);
        }
    }
    return (0);
}