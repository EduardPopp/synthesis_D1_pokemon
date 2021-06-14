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

int put_sign_before(lli count)
{
    if (count < 0) {
        my_putchar('-');
    } else {
        my_putchar('+');
    }
    return (0);
}