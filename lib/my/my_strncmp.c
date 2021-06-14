/*
** EPITECH PROJECT, 2020
** 18my_strncmp.c
** File description:
** .
*/

#include <stdio.h>
#include <string.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int res = 0;

    if (n < 0) {
        n = n * -1;
    }
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return (res);
        } else if (s1[i] == '\0')
            return 0;
    }
    return (0);
}
