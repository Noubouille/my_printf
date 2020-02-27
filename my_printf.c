/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

int my_printf(char *i, ...)
{
    va_list List;
    va_start(List, i);
    int (*fun[6])(va_list);
    fun['i'] = &funint;
    fun['d'] = &funint;
    fun['c'] = &funch;
    fun['s'] = &funstr;
    fun['u'] = &fununint;
    fun['o'] = &fundectoct;

    for (int y = 0; i[y] != '\0'; y++) {
        if (i[y] == '%') {
            fun[i[++y]](List);
        } else {
            my_putchar(i[y]);
        }
        va_end(List);
    }
    return (0);
}