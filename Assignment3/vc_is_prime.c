/**
 * File              : vc_is_prime.c
 * Author            : Ayana, Masa
 * Date              : Fri 8 Feb 2019
 */

int vc_is_prime(int n)
{

    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

