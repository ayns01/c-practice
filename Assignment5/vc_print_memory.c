/**
 * File              : vc_print_memory.c
 * Author            : Ayana, Tom
 * Date              : Mon 11 Feb 2019
 */

void *vc_print_memory(void *addr, unsigned int size) {

    const unsigned char* pc = addr;
    int i;
    size_t printed = 0;
    char* str = addr;

    for (i=0; i<size; ++i)
    {
        int g;
        g = (*(pc + i) >> 4) & 0xf;
        g += g >= 10 ? 'a' - 10 : '0';
        putchar(g);
        printed++;

        g = *(pc + i) & 0xf;
        g += g >= 10 ? 'a' - 10 : '0';
        putchar(g);
        printed++;

        if (printed % 32 == 0) {
            putchar(' ');
            for (int j = 0; j < 16; ++j)
            {
                putchar(*str);
                str++;
            }
            putchar('\n');
        }
        else if (printed % 4 == 0) putchar(' ');
    }

}

