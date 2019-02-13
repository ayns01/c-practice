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

//int main() {
//
//    int argc = 1;
//    char *string = "Hello W";
//    char **argv = &string;
//    printf("%s", vc_concat_params(argc, argv));
//
//    return 0;
//}