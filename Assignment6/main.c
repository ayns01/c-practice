/**
 * File              : main.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    for (i = 0;i < argc;i++)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");
}