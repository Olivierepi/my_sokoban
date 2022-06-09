/*
** EPITECH PROJECT, 2021
** day03
** File description:
** my_get_nbr
*/

int my_getnbr(char const *str)
{
    int signe = 1;
    int nbr = 0;

    while (*str == '-' || *str == '+') {
        if (*str == '-') {
            signe = - signe;
            str = str + 1;
        }
    }
    while (*str != '\0' && *str >= '0' && *str <= '9') {
        if (nbr > 214748364)
            return 0;
        if ((nbr == 214748364 && *str > 7 && signe == 1) || \
        (nbr == 214748364 && *str > 8 && signe == -1))
            return 0;
        nbr = nbr * 10 + *str - 48;
        str = str + 1;
    }
    if (signe == -1)
        nbr = - nbr;
    return nbr;
}
