/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** concatenates n chars into string
*/

#include <stdio.h>

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = 0;
    int i = 0;

    while (dest[len] != '\0') {
        len++;
    }
    if (nb < 0) {
        return (my_strcat(dest, src));
    }
    while (src[i] != '\0' && i < nb) {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
    return (0);
}
