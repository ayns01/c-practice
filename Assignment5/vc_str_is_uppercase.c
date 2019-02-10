/**
 * File              : vc_str_is_uppercase.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

int vc_str_is_uppercase(char *str) {
    while (*str != '\0') {
        if (!(*str >= 65 && *str <= 90))
            return 0;
        else
            str++;
    }
    return 1;
}

