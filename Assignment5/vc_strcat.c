/**
 * File              : vc_strcat.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

#include <stdlib.h>

char *vc_strcat(char *dest, char *src) {

    int dest_len = 1;
    int src_len = 1;
    int dest_and_src_len;

    while (*dest++ != '\0')
    {
        ++dest_len;
    }

    while (*src++ != '\0')
    {
        ++src_len;
    }

    for (int j = 0; j < dest_len; j++)
    {
        --dest;
    }

    for (int k = 0; k < src_len; k++)
    {
        --src;
    }

    dest_and_src_len = (dest_len + src_len) - 1;


    char *string = (char *)malloc(dest_and_src_len * sizeof(char));
    char *res = string;

    if (string == NULL)
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }

    for (; *dest ; *string++ = *dest++);
    for (; *src ; *string++ = *src++);

    *string = '\0';

    return res;
}