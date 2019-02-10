/**
 * File              : vc_putstr_non_printable.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

void vc_putstr_non_printable(char *str) {
    int n = 0;
    while (str[n] != '\0')
    {
        if ((str[n] >= 0) && (str[n] <= 31)) {
            int quotient;
            int i = 0, j, temp;
            char hexadecimalNumber[100];
            quotient = str[n];
            while (quotient != 0) {
                temp = quotient % 16;
                if (temp < 10)
                    temp = temp + 48;
                else
                    temp = temp + 55;
                hexadecimalNumber[i] = temp;
                quotient = quotient / 16;
                i++;
            }
            for (j = i-1; j >= 0; j--) {
                putchar(hexadecimalNumber[j]);
            }
        }

        putchar(str[n]);
        n++;
    }
}

