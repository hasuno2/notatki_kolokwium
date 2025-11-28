// Zadanie 4, ale operujemy groszami int
// konwersja: zł -> grosze, potem brutto z podatkiem

#include <stdio.h>

int main() {
    double cena, podatek;

    printf("Podaj cene w zl (np 12.50): ");
    scanf("%lf", &cena);

    printf("Podaj podatek: ");
    scanf("%lf", &podatek);

    int grosze = (int)(cena * 100); // konwersja

    int brutto_g = grosze * (1.0 + podatek);

    int zl = brutto_g / 100;
    int gr = brutto_g % 100;

    printf("Brutto: %d zl %d gr
", zl, gr);
}
