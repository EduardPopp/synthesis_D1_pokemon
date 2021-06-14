/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** .
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

#ifndef MY_
#define MY_

typedef unsigned int ui;

typedef long long int lli;

int my_put_oct(lli count);

int my_put_hex(lli count);

int my_put_hex_up(lli count);

int my_put_bin(lli count);

int my_put_adress(lli count);

int put_sign_before(lli count);

void my_putchar(char c);

int my_isneg(int nb);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

int srclen(char const *src);

char *my_strncpy(char *dest, char const *src, int n);

int destlen(char *dest);

char *my_revstr(char *str);

char *my_strstr(char *str, char const *to_find);

int check(char *str, char const *to_find, int len, int j);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum(char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

int my_show_word_array(char *const *tab);

char **set_array(char *dest, char **arr);

char **words(char *dest, char **arr);

int count(char *dest);

int my_printf(const char *format, ...);

int my_modified_strcmp(char const *s1, char const *s2);

#endif /*MY_*/
