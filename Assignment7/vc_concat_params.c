/**
 * File              : vc_concat_params.c
 * Author            : Ayana, Paulo, Shota
 * Date              : Tue 12 Feb 2018
 */

char *vc_concat_params(int argc, char **argv) {
    char *arr;
    int len = 0;
    int c = 0;

    while ((*argv)[c] != '\0') {
        ++len;
        c++;
    }

    arr = (int *)malloc((len * 2) * sizeof(int));

    int i;
    int j;
    int k;
    for (i=0, j=1, k=0; k < len * 2; i+=2, j+=2, k ++)
    {
        arr[i] = (*argv)[k];
        arr[j] = '\n';
    }

    return arr;
}

static int vc_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}


char *vc_concat_params2(int argc, char **argv)
{
    int i;
    int j;
    int k;
    int total;
    char *result;

    total = 0;
    for (i = 0; i < argc; i++)
    {
        total += vc_strlen(argv[i]);
        total++;
    }
    if (!(result = (char *)malloc(sizeof(char) * (total + 2))))
        return NULL;
    k = 0;
    for (i = 0; i < argc; i++)
    {
        for (j = 0; j < vc_strlen(argv[i]); j++)
        {
            result[k++] = argv[i][j];
        }
        result[k++] = '\n';
    }
    result[k] = '\0';
    return result;
}

//int main() {
//
//    int argc = 1;
//    char *string = "Hello W";
//    char **argv = &string;
//    printf("%s", vc_concat_params(argc, argv));
//
//    return 0;
//}