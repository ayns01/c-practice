/**
 * File              : vc_recursive_power.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

int vc_recursive_power(int n, int power) {

    printf("Argument is %d\n", vc_recursive_power(3, 2));

    if (n < 1 || power < 1) {
        return 0;
    }

    if (power == 1) {
        return n;
    }

    return n * vc_recursive_power(n, power - 1);
}
