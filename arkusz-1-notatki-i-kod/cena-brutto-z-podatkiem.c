// Liczenie ceny brutto = netto * (1 + podatek)
// podatek podawany jako 0..1
// wynik %.2f -> dwie cyfry po przecinku

#include <stdio.h>

int main() {
    double netto, podatek;

    printf("Podaj cene netto: ");
    scanf("%lf", &netto);

    printf("Podaj podatek (0..1): ");
    scanf("%lf", &podatek);

    double brutto = netto * (1.0 + podatek);

    printf("Cena brutto = %.2f
", brutto);
}
