/*
** EPITECH PROJECT, 2020
** 07my_getnbr.c
** File description:
** .
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_put_nbr(int count);

int my_strlen(char const *str);

int my_getnbr(char const *str)
{
    int n = 0;
    int tmp = 1;
    int i = 0;

    for (; i < my_strlen(str) + 1; i++) {
        if (str[i] == 45) {
            tmp = tmp * -1;
        } else if (str[i] <= 57 && str[i] >= 48) {
            break;
        }
    }
    for (; i < my_strlen(str) + 1; i++) {
        if (str[i] <= 57 && str[i] >= 48) {
            n = n * 10 + (str[i] - 48);
        } else {
            break;
        }
    }
    n = n * tmp;
    return (n);
}