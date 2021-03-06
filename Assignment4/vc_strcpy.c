/**
 * File              : vc_strcpy.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

char *vc_strcpy(char *dest, char *src) {

    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return dest;
}

char *vc_strcpy2(char *dest, char *src)
{
    char *ret = dest;
    while ((*dest++ = *src++))
        ;
    return ret;
}

