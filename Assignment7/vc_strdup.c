/**
 * File              : vc_strdup.c
 * Author            : Ayana, Paulo, Shota
 * Date              : Tue 12 Feb 2018
 */

char *vc_strdup(char *src) {

    size_t len = 0;
    char *csrc = src;
    while (csrc && *csrc != '\0') {
        ++len;
        csrc++;
    }

    char *s = malloc(len + 1);
    if (s == NULL) return NULL;

    char *res = s;
    int i = 0;
    while (src && *src != '\0') {
        res[i] = *src;
        src++;
        i++;
    }
    res[i] = '\0';

    return s;
}



