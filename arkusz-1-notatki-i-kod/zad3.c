// Pole koła: pi*r*r, wynik w notacji naukowej (%e)

#include <stdio.h>

int main() {
    double r;
    double pi = 3.14159265358979;

    printf("Podaj promien: ");
    scanf("%lf", &r);

    double pole = pi * r * r;

    printf("Pole = %e
", pole);
}
