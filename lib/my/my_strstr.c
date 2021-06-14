/*
** EPITECH PROJECT, 2020
** 16my_strstr.c
** File description:
** .
*/

#include <stdio.h>
#include <string.h>

int check(char *str, char const *to_find, int len, int j)
{
    int h = 0;

    for (; to_find[h] != '\0'; h++) {
        if (str[j] != to_find[h]) {
            return (-1);
        }
        j++;
        if (h == len - 1) {
            return (0);
        }
    }
    return (-1);
}

char *my_strstr(char *str, char const *to_find)
{
    int k = 0;
    int len = 0;
    int j = 0;

    if (to_find[0] == '\0') {
        return (str);
    }
    while (to_find[len] != '\0') {
        len++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[k]) {
            j = i;
            if (check(str, to_find, len, j) == 0) {
                return &str[i];
            }
        }
    }
    return (0);
}
