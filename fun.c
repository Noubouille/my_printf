/*
** EPITECH PROJECT, 2019
** functions
** File description:
** functions
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

int funint(va_list List)
{
    int in;
    in = va_arg(List, int);
    my_put_nbr(in);
}

int funch(va_list List)
{
    char ch;
    ch = va_arg(List, int);
    my_putchar(ch);
}

int funstr(va_list List)
{
    char *str;
    str = va_arg(List, char *);
    my_putstr(str);
}

int fununint(va_list List)
{
    unsigned int usint;
    usint = va_arg(List, unsigned int);
    my_putuint(usint);
}

int fundectoct(va_list List)
{
    int dectooct;
    dectooct = va_arg(List, int);
    my_putdectoct(dectooct);
}
