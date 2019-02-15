/**
 * File              : vc_range.c
 * Author            : Ayana, Paulo, Shota
 * Date              : Tue 12 Feb 2018
 */

int *vc_range(int min, int max) {
    int *arr;
    int len = max - min;

    if ((length <= 0) || !(arr = (int *)malloc(length * sizeof(int)))) {
        arr = NULL;
        return 0;
    }

    int *m = (int *)malloc(len * sizeof(int));
    if (m == NULL) return NULL;

    int first = min;
    int i;
    for (i = 0; i < len; ++i) {
        m[i] = first;
        first++;
    }
    return m;
}

int *vc_range2(int min, int max)
{
    int i;
    int *arr;

    i = 0;
    if (min > max || !(arr = (int *)malloc(sizeof(int) * (max - min))))
    {
        return NULL;
    }
    while (min < max)
    {
        arr[i++] = min++;
    }
    return arr;
}

