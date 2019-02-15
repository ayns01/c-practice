#include <stdio.h>
#include <stdlib.h>

int vc_find_a_char(char *string) {
    int i;

    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 'h')
        {
            return 1;
        }
        i++;
    }

    return 0;
}

int vc_any(char **tab, int(*f)(char*)) {
    int bool;
    int i;
    int j;

    for (int i = 0; i < 3; ++i) {
        bool = (f)(*tab);
        if(bool == 1) {
            return bool;
        }
        *tab++;
    }

    return bool;
}

//int main() {
//
//    char* a[3] = { "One", "Two", "Three" };
//
//    int (*p)(char*);
//    p = &vc_find_a_char;
//
//    printf("%d", vc_any(a, p));
//
//    return 0;
//}
