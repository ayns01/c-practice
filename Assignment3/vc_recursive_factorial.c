/**
 * File              : vc_recursive_factorial.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

int vc_recursive_factorial(int n) {

    if (n <= 0)
    {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return vc_recursive_factorial(n-1) * n;
}
