/*
** EPITECH PROJECT, 2020
** .
** File description:
** .
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

char *my_revstr(char *str);

int my_putstr(char const *str);

int my_getnbr(char const *str);

int lowest_nb(int count, char *str)
{
    for (int i = 0; count != 0; i++) {
        str[i] = ((count % 10 * -1) + '0');
        count = count / 10;
    }
    my_putchar('-');
    my_putstr(my_revstr(str));
    return (0);
}

int my_put_nbr(int count)
{
    char str[12] = {};

    if (count == -2147483648) {
        lowest_nb(count, str);
        return (0);
    }
    if (count < 0) {
        my_putchar('-');
        count = count * -1;
    }
    if (count <= 9 && count >= 0)
        my_putchar(count + '0');
    while (count > 9) {
        for (int i = 0; count > 0; i++) {
            str[i] = (count % 10) + '0';
            count = count / 10;
        }
    }
    my_putstr(my_revstr(str));
    return (0);
}
