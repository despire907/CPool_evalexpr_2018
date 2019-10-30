/*
** EPITECH PROJECT, 2018
** task02
** File description:
** task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (n < 0)
        return (dest);
    while (i != n) {
        dest[i] = src[i];
        ++i;
    }
    if (n > i)
        dest[i] = '\0';
    return (dest);
}
