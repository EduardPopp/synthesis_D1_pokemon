/*
** EPITECH PROJECT, 2020
** 14my_strncpy.c
** File description:
** .
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int destlen(char *dest)
{
    int k;

    for (k = 0; dest[k] != 0; k++);
    return (k);
}
char *my_strncpy(char *dest, char const *src, int n)
{
    int len = destlen(dest);

    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
        if (n > len && i == len) {
            dest[i] = '\0';
        }
    }
    return (dest);
}
