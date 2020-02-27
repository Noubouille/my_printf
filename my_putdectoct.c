/*
** EPITECH PROJECT, 2019
** putdectoct
** File description:
** dectooct
*/

#include "my.h"

int my_putdectoct(int nb)
{
    int result = 0;
    int i = 1;
    while (nb != 0) {
        result = result + (nb % 8) * i;
        nb = nb / 8;
        i = i * 10;
    }
    my_put_nbr(result);
}