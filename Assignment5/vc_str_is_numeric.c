/**
 * File              : vc_str_is_numeric.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

int vc_str_is_numeric(char *str) {

    while (*str != '\0') {
        if (!(*str >= 48 && *str <= 57))
            return 0;
        else
            str++;
    }
    return 1;
}

