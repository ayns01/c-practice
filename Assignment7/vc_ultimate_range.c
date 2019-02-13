/**
 * File              : vc_ultimate_range.c
 * Author            : Ayana, Paulo, Shota
 * Date              : Tue 12 Feb 2018
 */

int vc_ultimate_range(int **range, int min, int max) {
    int *arr;
    int length = max - min;

    if ((length <= 0) || !(arr = (int *)malloc(length * sizeof(int)))) {
        *range = NULL;
        return 0;
    }
    for(int i = min; i < max; i++) {
        (*range)[i - min] = i;
    }

    return length;
}