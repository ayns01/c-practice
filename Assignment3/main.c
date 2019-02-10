/**
 * File              : main.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

int vc_find_next_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return vc_find_next_prime(n+1);
        }
    }



    return n;

}

int main() {

    printf("Result is %d\n", vc_find_next_prime(18));
    return 0;
}