/**
 * File              : vc_sqrt.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

int vc_sqrt(int n) {

    for (int i = 0; i < n / 2; ++i) {
        if (i * i == n) {
            return i;
        }
    }

    return 0;
}
