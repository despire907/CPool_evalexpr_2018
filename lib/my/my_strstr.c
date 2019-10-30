/*
** EPITECH PROJECT, 2018
** task04
** File description:
** task04
*/

int my_find(char *str, char const *to_find, int bobo);

char *my_strstr(char *str, char const *to_find)
{
    int bobo = 0;

    while (str[bobo] != '\0') {
        if (str[bobo] == to_find[0] && my_find(str, to_find, bobo) == 1)
            return (&str[bobo]);
        ++bobo;
    }
    return ("NULL");
}

int my_find(char *str, char const *to_find, int bobo)
{
    int res = 0;

    while (to_find[res] != '\0') {
        if (str[bobo + res] != to_find[res])
            return (0);
        ++res;
    }
    return (1);
}
