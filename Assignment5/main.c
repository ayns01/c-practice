/**
 * File              : main.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

#include <stdio.h>
#include  <stdlib.h>

void *vc_print_memory(void *addr, unsigned int size) {
    const unsigned char* pc = addr;
    int i;
    size_t printed = 0;

//    printf("%p", &addr);
    while (&addr != '\0')
    {
        putchar(&addr);
    }

    for (i=0; i<size; ++i) {
        int  g;
        g = (*(pc+i) >> 4) & 0xf;
        g += g >= 10 ? 'a'-10 : '0';
        putchar(g);
        printed++;

        g = *(pc+i) & 0xf;
        g += g >= 10 ? 'a'-10 : '0';
        putchar(g);
        printed++;
        if (printed % 32 == 0) putchar('\n');
        else if (printed % 4 == 0) putchar(' ');
    }

}

int main() {

    char *str2 = "Salut les aninches c'est cool show non on fait de truc";
    vc_print_memory(str2, 5);
    return 0;
}