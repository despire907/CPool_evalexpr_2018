/*
** EPITECH PROJECT, 2018
** task03
** File description:
** task03
*/

void my_change(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

int my_lil(char const *str)
{
    int bobo = 0;

    while (str[bobo] != '\0'){
        bobo = bobo + 1;
    }
    return (bobo);
}

char *my_revstr(char *str)
{
    int str_len = my_lil(str);
    int bibi = 0;

    while (bibi < str_len / 2){
        my_change(&str[bibi], &str[str_len - 1 - bibi]);
        bibi = bibi + 1;
    }
    return (str);
}
