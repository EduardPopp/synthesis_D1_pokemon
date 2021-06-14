/*
** EPITECH PROJECT, 2020
** my_printf_main.c
** File description:
** recode of the forbidden fruit ;)
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/helper.h"

void numeral_special_case(char type, char *args)
{
    switch (type)
    {
        case 'o':
            my_put_oct((lli)args);
            break;
        case 'x':
            my_put_hex((lli)args);
            break;
        case 'X':
            my_put_hex_up((lli)args);
            break;
        case 'b':
            my_put_bin((lli)args);
            break;
        case 'p':
            my_put_adress((lli)args);
            break;
    }
}

void numeral_case(char type, char *args)
{
    switch (type)
    {
        case 'i':
            my_put_nbr((lli)args);
            break;
        case 'd':
            my_put_nbr((lli)args);
            break;
        case '%':
            my_putchar('%');
            break;
        case ' ':
            my_putchar(' ');
            break;
        case '+':
            put_sign_before((lli)args);
            break;
        default:
            numeral_special_case(type, args);
    }
}

void alphabetical_case(char type, char *args)
{
    switch (type)
    {
        case 'c':
            my_putchar((lli)args);
            break;
        case 's':
            my_putstr(args);
            break;
        default:
            numeral_case(type, args);
    }
}

int my_printf(const char *format, ...)
{
    char type = 0;
    int i = 0;
    int k = 0;

    va_list args;
    va_start(args, format);
    for (; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            my_putchar(format[i]);
        } else if (format[i] == '%') {
            i++;
            type = format[i];
            alphabetical_case(type, va_arg(args, char*));
        }
    }
    return (0);
}