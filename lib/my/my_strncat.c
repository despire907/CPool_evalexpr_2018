/*
** EPITECH PROJECT, 2018
** task03
** File description:
** task03
*/

#include <string.h>

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int papa = 0;
    int popo = my_strlen(dest);

    while (src[papa] != '\0' && papa < nb) {
        dest[popo + papa] = src[papa];
        ++papa;
    }
    dest[papa + popo] = '\0';
    return (dest);
}
