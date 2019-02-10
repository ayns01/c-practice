/**
 * File              : vc_str_is_printable.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

int vc_str_is_printable(char *str) {
    while (*str != '\0') {
        if (!(*str >= 0 && *str <= 31))
            return 0;
        else
            str++;
    }
    return 1;
}
