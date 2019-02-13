/**
 * File              : vc_sort_params.c
 * Author            : Ayana, Tom
 * Date              : Sun, Feb 10, 2019
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
    char *sort_str;
    for (int i = 1;i < argc -1;i++)
    {
        for (int j = 2; j < argc;j++){
            if (argv[i] > argv[j]) {
                char temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
        *sort_str = argv[i];
        sort_str++;
    }
    for(int i = 0; i < (argc-1); i++)
    {
        printf("%s\n", sort_str[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
}

