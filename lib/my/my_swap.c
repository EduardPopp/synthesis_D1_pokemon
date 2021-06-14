/*
** EPITECH PROJECT, 2020
** 04my_swap.c
** File description:
** .
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int x;
    int y;

    y = *a;
    x = *b;
    *a = x;
    *b = y;
}
