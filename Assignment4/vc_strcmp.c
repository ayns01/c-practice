/**
 * File              : vc_strcmp.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

int vc_strcmp(char *s1, char *s2) {
    int i;
    for (i = 0; s1[i] && s2[i]; ++i)
    {
        if (s1[i] == s2[i])
            continue;
        else
            break;
    }

    if (s1[i] == s2[i])
        return 0;

    if (s1[i] < s2[i])
        return -1;
    return 1;
}