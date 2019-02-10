/**
 * File              : vc_strncpy.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

char *vc_strncpy(char *dest, char *src, unsigned int n) {

    int i = 0;
    while (src[i] != '\0') {
        if (i == n) {
            dest[i] = 0;
            return dest;
        }
        dest[i] = src[i];
        i++;
    }

    return 0;
}

