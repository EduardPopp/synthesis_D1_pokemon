/*
** EPITECH PROJECT, 2020
** hex_controller.c
** File description:
** hex_controller
*/

#include "../../include/my.h"
#include "../../include/helper.h"

char hex_control_2(int count, char retval)
{
    switch (count)
    {
        case 13:
            retval = 'd';
            break;
        case 14:
            retval = 'e';
            break;
        case 15:
            retval = 'f';
            break;
    }
    return (retval);
}

char hex_control(int count)
{
    char retval = 0;

    switch (count)
    {
        case 10:
            retval = 'a';
            break;
        case 11:
            retval = 'b';
            break;
        case 12:
            retval = 'c';
            break;
        default:
            retval = hex_control_2(count, retval);
    }
    return (retval);
}

char hex_control_up_2(int count, char retval)
{
    switch (count)
    {
        case 13:
            retval = 'D';
            break;
        case 14:
            retval = 'E';
            break;
        case 15:
            retval = 'F';
            break;
    }
    return (retval);
}

char hex_control_up(int count)
{
    char retval = 0;

    switch (count)
    {
        case 10:
            retval = 'A';
            break;
        case 11:
            retval = 'B';
            break;
        case 12:
            retval = 'C';
            break;
        default:
            retval = hex_control_up_2(count, retval);
    }
    return (retval);
}