#include <stdio.h>
#include "vc_split_whitespaces.c"

int vc_strcmp(char *s1, char *s2)
{
    for (; *s1 == *s2; s1++, s2++)
        if (*s1 == '\0')
            return 0;
    return *s1 < *s2 ? -1 : 1;
}

void vc_sort_words(char **words) {
    int i;
    int j;
    char *temp;
    for (int i = 0; i<3; i++)
    {
        for (int j = i + 1; j<3; j++)
        {
            if (vc_strcmp(words[i], words[j]) > 0)
            {
                temp = words[j];
                words[j] = words[i];
                words[i] = temp;
            }
        }

    }

    i = 0;
    while (words[i])
    {
        j = 0;
        while (words[i][j])
            putchar(words[i][j++]);
        putchar('\n');
        i++;
    }
}

//int main() {
//
//    char *string = "Hello World Apple";
//    char **split_words = vc_split_whitespaces(string);
//    vc_sort_words(split_words);
//
//    return 0;
//}

