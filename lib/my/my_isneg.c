/*
** EPITECH PROJECT, 2020
** 02my_isneg.c
** File description:
** .
*/

#include <unistd.h>

int my_putchar(char c);

int my_isneg(int nb)
{
    if (nb < 0) {
        my_putchar('N');
    }
    else {
        my_putchar('P');
    }
    my_putchar('\n');
    return (1);
}
