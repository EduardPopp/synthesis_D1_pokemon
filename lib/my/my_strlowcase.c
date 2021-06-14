/*
** EPITECH PROJECT, 2020
** 20my_strlowcase.c
** File description:
** .
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
        i++;
    }
    return (str);
}
