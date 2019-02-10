/**
 * File              : vc_iterative_factorial.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

int iterative_factorial(int n) {

    printf("Argument is %d\n", n);
    if (n < 1)
    {
        return 0;
    }

    int result = 1;
    for (int i = n; i > 0; i--)
    {
        result *= i;
    }

    return result;
}
