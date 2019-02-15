/**
 * File              : vc_foreach.c
 * Author            : Ayana, Paulo, Shota
 * Date              : Thu 14 Feb 2018
 */

void vc_putnbr(int nb) {
    if (nb < 0) {
        nb = -nb;
        putchar('-');
    }
    if (nb < 10) {
        putchar(nb + '0');
    }
    else {
        vc_putnbr(nb / 10);
        vc_putnbr(nb % 10);
    }
}

void vc_foreach(int *tab, int length, void(*f)(int)) {
    for (int i = 0; i < length; ++i) {
        (f)(*tab);
    }
}

int main() {

    static int tab[100];
    for (int i = 0; i < 100; ++i) {
        tab[i] = i+1;
    }

    vc_foreach(tab, 86, &vc_putnbr);

    return 0;
}



