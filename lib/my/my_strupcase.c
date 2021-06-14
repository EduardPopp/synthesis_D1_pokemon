/*
** EPITECH PROJECT, 2020
** 19my_strupcase.c
** File description:
** .
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] += 'A' - 'a';
        }
        i++;
    }
    return (str);
}