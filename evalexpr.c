/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** bistro
*/

int multi(char **str)
{
    int i = 0;
    int result = 0;
    int nb1 = 0;
    int nb2 = 0;
    while (str[1][i] > '9' || str[1][i] < '0') {
        i = i + 1;
    }
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb1 = nb1 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    if (str[1][i] == '*')
        i = i + 1;
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb2 = nb2 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    printf("nb1 : %d\n", nb1);
    printf("nb2 : %d\n", nb2);
    result = nb1 * nb2;
    return(result);
}

int modulo(char **str)
{
    int i = 0;
    int result = 0;
    int nb1 = 0;
    int nb2 = 0;
    while (str[1][i] > '9' || str[1][i] < '0') {
        i = i + 1;
    }
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb1 = nb1 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    if (str[1][i] == '%')
        i = i + 1;
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb2 = nb2 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    result = nb1 % nb2;
    return(result);
}

int div(char **str)
{
    int i = 0;
    int result = 0;
    int nb1 = 0;
    int nb2 = 0;
    while (str[1][i] > '9' || str[1][i] < '0') {
        i = i + 1;
    }
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb1 = nb1 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    if (str[1][i] == '/')
        i = i + 1;
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb2 = nb2 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    result = nb1 / nb2;
    return(result);
}

int sub(char **str)
{
    int i = 0;
    int result = 0;
    int nb1 = 0;
    int nb2 = 0;
    while (str[1][i] > '9' || str[1][i] < '0') {
        i = i + 1;
    }
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb1 = nb1 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    if (str[1][i] == '-')
        i = i + 1;
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb2 = nb2 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    result = nb1 - nb2;
    return(result);
}

int add(char **str)
{
    int i = 0;
    int result = 0;
    int nb1 = 0;
    int nb2 = 0;
    while (str[1][i] > '9' || str[1][i] < '0') {
        i = i + 1;
    }
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb1 = nb1 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    if (str[1][i] == '+')
        i = i + 1;
    while (str[1][i] != '\0' && str[1][i] <= '9' && str[1][i] >= '0') {
        nb2 = nb2 * 10 + (str[1][i] - 48);
        i = i + 1;
    }
    result = nb1 + nb2;
    return(result);
}

int main(int ac, char **av)
{
    int res = add(av);
    printf("%d", res);
}


