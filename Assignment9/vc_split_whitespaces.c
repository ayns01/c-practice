#include <stdlib.h>


static int vc_count_words(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
            str++;
        if (*str && *str != ' ' && *str != '\n' && *str != '\t')
        {
            count++;
            while (*str && *str != ' ' && *str != '\n' && *str != '\t')
                str++;
        }
    }
    return count;
}

static int vc_num_chars(char *str)
{
    int len;

    len = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
            break;
        str++;
        len++;
    }
    return len;
}

char **vc_split_whitespaces(char *str)
{
    char **split_str;
    int i;
    int j;
    int len;
    int wc;

    i = 0;
    wc = vc_count_words(str);
    if (!(split_str = (char **)malloc(sizeof(char **) * (wc + 1))))
        return NULL;
    while (*str && wc)
    {
        len = vc_num_chars(str);
        if (len > 0)
        {
            split_str[i] = (char *)malloc(sizeof(char) * (len + 1));
            for (j = 0; j < len; j++)
                split_str[i][j] = str[j];
            split_str[i++][j] = '\0';
            wc--;
        }
        str += len + 1;
    }
    split_str[i] = 0;
    return split_str;
}

