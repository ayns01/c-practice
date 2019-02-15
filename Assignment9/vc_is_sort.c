int compare_number(int a, int b) {
    return b - a;
}

int vc_is_sort(int *tab, int length, int(*f)(int, int)) {
    for (int i = 0; i < length-1; ++i) {
        int cn = (f)(tab[i], tab[i+1]);
        if (cn < 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int tab[10] = { 5, 6, 7, 8, 9, 10, 13, 11, 12, 3 };

    int (*p)(int, int);
    p = &compare_number;

    printf("%d", vc_is_sort(tab, 10, p));

    return 0;
}