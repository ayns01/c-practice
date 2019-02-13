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

char *vc_strncpy2(char *dest, char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}



