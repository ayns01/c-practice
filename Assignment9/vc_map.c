//
// Created by 酒井綾菜 on 2019-02-14.
//


int vc_returns_newarr(int element) {
    return element+1;
}

int *vc_map(int *tab, int length, int(*f)(int)) {

    int *newarr = (int*)malloc(sizeof(int) * length);
    int i;

    for (i = 0; i < length; ++i) {
        int newtab = vc_returns_newarr(*tab);
        newarr[i] = newtab;
        tab++;
    }

    return newarr;
}

//int main() {
//
//    static int tab[100];
//    for (int i = 0; i < 100; ++i) {
//        tab[i] = i+1;
//    }
//
//    int (*p)(int);
//    p = &vc_returns_newarr;
//
//    int *arr = vc_map(tab, 50, p);
//
//    for (int j = 0; j < 50; ++j) {
//        printf("%d", arr[j]);
//    }
//    vc_map(tab, 50, p);
//
//    return 0;
//}
