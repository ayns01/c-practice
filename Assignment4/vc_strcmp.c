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

int vc_strcmp2(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int vc_strcmp3(char *s1, char *s2)
{
    for (; *s1 == *s2; s1++, s2++)
        if (*s1 == '\0')
            return 0;
    return *s1 < *s2 ? -1 : 1;
}