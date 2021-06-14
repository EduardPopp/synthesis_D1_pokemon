/*
** EPITECH PROJECT, 2020
** 06my_strlen.c
** File description:
** .
*/

#include <stdio.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
