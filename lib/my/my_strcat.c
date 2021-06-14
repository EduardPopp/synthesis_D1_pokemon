/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concatenate two strings
*/

#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int len = 0;
    int i = 0;

    while (dest[len] != '\0') {
        len++;
    }
    while (src[i] != '\0') {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[len] = '\0';
    return (dest);
}
