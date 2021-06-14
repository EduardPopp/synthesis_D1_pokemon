/*
** EPITECH PROJECT, 2020
** numeric_printer.c
** File description:
** recode of the forbidden fruit ;)
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/helper.h"

char hex_control(int count);

char hex_control_up(int count);

int my_put_oct(lli count)
{
    char str[10] = { 0 };

    if (count <= 7 && count >= 0)
        my_putchar(count + '0');
    while (count > 7) {
        for (lli i = 0; count > 0; i++) {
            str[i] = (count % 8) + '0';
            count = count / 8;
        }
    }
    my_putstr(my_revstr(str));
    return (0);
}

int my_put_hex(lli count)
{
    char str[17] = { 0 };
    char store = 0;
    while (count > 15) {
        for (lli i = 0; count > 0; i++) {
            store = (count % 16);
            if (store >= 10 && store <= 15) {
                str[i] = hex_control(store);
            } else {
                str[i] = store + '0';
            }
            count = count / 16;
        }
    }
    my_putstr(my_revstr(str));
    return (0);
}

int my_put_hex_up(lli count)
{
    char str[17] = { 0 };
    char store = 0;

    while (count > 15) {
        for (lli i = 0; count > 0; i++) {
            store = (count % 16);
            if (store >= 10 && store <= 15) {
                str[i] = hex_control_up(store);
            } else {
                str[i] = store + '0';
            }
            count = count / 16;
        }
    }
    my_putstr(my_revstr(str));
    return (0);
}

int my_put_bin(lli count)
{
    char str[10] = { 0 };

    if (count <= 1 && count >= 0)
        my_putchar(count + '0');
    while (count > 1) {
        for (lli i = 0; count > 0; i++) {
            str[i] = (count % 2) + '0';
            count = count / 2;
        }
    }
    my_putstr(str);
    return (0);
}

int my_put_adress(lli count)
{
    int i = 0;
    char str[17] = { 0 };
    char store = 0;

    while (count > 15) {
        for (; count > 0; i++) {
            store = (count % 16);
            if (store >= 10 && store <= 15) {
                str[i] = hex_control(store);
            } else {
                str[i] = store + '0';
            }
            count = count / 16;
        }
    }
    str[i] = 'x';
    str[i + 1] = '0';
    my_putstr(my_revstr(str));
    return (0);
}