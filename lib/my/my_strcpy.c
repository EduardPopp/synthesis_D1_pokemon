/*
** EPITECH PROJECT, 2020
** 13my_strcpy.c
** File description:
** .
*/

int srclen(char const *src)
{
    int k;

    for (k = 0; src[k] != 0; k++);
    return (k);
}

char *my_strcpy(char *dest, char const *src)
{
    int len = srclen(src);
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (i == len) {
        dest[i] = '\0';
    }
    return (dest);
}
