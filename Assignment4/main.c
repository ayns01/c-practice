#include <stdio.h>

char *vc_strlowcase(char *str)
{

    int length = 1;
    while (*str++ != '\0')
    {
        ++length;
    }

    for (int j = 0; j < length; j++)
    {
        --str;
    }

    char result[length];
    result[length - 1] = '\0';
    for (int i = 0; *str; str++)
    {
        if (*str >= 65 && *str <= 90)
        {
            result[i] = *str | 32;
        }
        else
        {
            result[i] = *str;
        }
        ++i;
    }

    return &result;
}

int main() {

    char *str = "Free";

    printf(" %s\n", vc_strlowcase(str));

    return 0;
}