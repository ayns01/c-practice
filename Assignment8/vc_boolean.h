/**
 * File              : vc_boolean.c
 * Author            : Ayana, Paulo
 * Date              : Wed 13 Feb 2019
 */

#include <zconf.h>
#include <stdio.h>
#include "vc_boolean.h"

#define EVEN(n) (n % 2 == 0)
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."


void vc_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}
t_bool vc_is_even(int n)
{
    return ((EVEN(n)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
    (void)argv;
    if (vc_is_even(argc - 1) == TRUE)
        vc_putstr(EVEN_MSG);
    else
        vc_putstr(ODD_MSG);
    return SUCCESS;
}