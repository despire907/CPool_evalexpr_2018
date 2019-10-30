/*
** EPITECH PROJECT, 2018
** task02
** File description:
** task02
*/

#include <string.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int papa = 0;
    int popo = my_strlen(dest);

    while (src[papa] != '\0') {
        dest[popo + papa] = src[papa];
        ++papa;
    }
    dest[papa + popo] = '\0';
    return (dest);
}
