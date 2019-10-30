/*
** EPITECH PROJECT, 2018
** task07
** File description:
** task07
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 123 && str[i] > 96 )
            str[i] = str[i] - 32;
        ++i;
    }
    return (str);
}
