/**
 * File              : vc_strncat.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

char *vc_strncat(char *dest, char *src, int n) {
    int dest_len = 1;
    int total_len;

    while (*dest++ != '\0')
    {
        ++dest_len;
    }

    for (int j = 0; j < dest_len; j++)
    {
        --dest;
    }

    total_len = dest_len + n;

    char *string = (char *)malloc(total_len * sizeof(char));
    char *res = string;

    if (string == NULL)
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }

    for (; *dest ; *string++ = *dest++);

    for (int i = 0; i < n + 1; ++i) {
        if (i == n) {
            *string = '\0';
        } else {
            *string++ = *src++;
        }
    }

    return res;
}