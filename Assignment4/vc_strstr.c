/**
 * File              : vc_strstr.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

char *vc_strstr(char *str, char *to_find)
{
    if (*to_find == '\0')
    {
        return str;
    }

    int count = 0;
    for (char i = *to_find; i != '\0'; i = *++to_find)
    {
        for (char j = *str; j != '\0'; j = *++str)
        {
            if (i == j)
            {
                if (*++to_find == '\0')
                {
                    for (int k = count; k > 0; k--)
                    {
                        *--str;
                    }
                    return str;
                }
                goto NEXT;
            }
            else
            {
                for (int k = count; k >= 0; k--)
                {
                    *--to_find;
                }
                count = 0;
            }
        }
        NEXT:
        *--to_find;
        *++str;
        ++count;
    }
}

char *vc_strstr2(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!to_find[0])
        return &str[i];
    while (str[i])
    {
        while ((str[i + j] == to_find[j]) && to_find[j])
            j++;
        if (!to_find[j])
            return &(str[i]);
        j = 0;
        i++;
    }
    return NULL;
}
