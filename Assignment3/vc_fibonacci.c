/**
 * File              : vc_fibonacci.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

int vc_fibonacci(int n) {
    if (n < 0)
    {
        return -1;
    }

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;

    return vc_fibonacci(n - 1) + vc_fibonacci(n - 2);
}