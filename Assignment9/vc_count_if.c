int vc_find_a_char(char *string) {
    int i;

    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 'e')
        {
            return 1;
        }
        i++;
    }

    return 0;
}

int vc_count_if(char **tab, int(*f)(char*)) {
    int bool;
    int c;

    c = 0;
    for (int i = 0; i < 3; ++i) {
        bool = (f)(*tab);
        if(bool == 1) {
            c++;
        }
        *tab++;


    return c;
}

//int main() {
//
//    char* a[3] = { "One", "Two", "Three" };
//
//    int (*p)(char*);
//    p = &vc_find_a_char;
//
//    printf("%d", vc_count_if(a, p));
//
//    return 0;
//}