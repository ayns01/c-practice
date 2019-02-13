/**
 * File              : vc_print_words.c
 * Author            : Ayana, Paulo, Shota
 * Date              : Tue 12 Feb 2018
 */

#include "vc_split_whitespaces.c"

void vc_print_words(char **words) {
        char *str = "Hello world\nI like an  apple";
        for (int i = vc_count_words(str); i > 0; --i) {
        printf("%s", *words);
        printf("%c", '\n');
        arr++;
    }
}

