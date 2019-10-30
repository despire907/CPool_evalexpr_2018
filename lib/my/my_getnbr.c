/*
** EPITECH PROJECT, 2018
** task05
** File description:
** task05
*/

int my_locat(char const *str)
{
    int locat = 0;

    while (str[locat] != '\0'){
        if (str[locat] < 58 && str[locat] > 47){
            return (locat);
        }
        else{
            locat++;
        }
    }
    return (-1);
}

int my_getnbr(char const *str)
{
    int bibi = 0;
    int locat = my_locat(str);

    if (locat != -1){
        if (str[locat-1] == '-'){
            while (str[locat] < 58 && str[locat] > 47){
                bibi = bibi * 10;
                bibi -= str[locat] - 48;
                locat++;
            }
        }
        else {
            while (str[locat] < 58 && str[locat] > 47){
                bibi = bibi * 10;
                bibi += str[locat] - 48;
                locat++;
            }
        }
    }
    return (locat);
}
