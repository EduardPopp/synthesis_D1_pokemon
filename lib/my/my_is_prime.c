/*
** EPITECH PROJECT, 2020
** 11my_is_prime.c
** File description:
** .
*/

#include <unistd.h>
#include <stdio.h>

int my_is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    if (nb == 2 || nb == 3) {
        return (1);
    }
    for (int x = 2; x <= (nb / 2); x++) {
        if (nb % x == 0) {
            return (0);
        }
        if (x == nb / 2) {
            return (1);
        }
    }
    return (0);
}