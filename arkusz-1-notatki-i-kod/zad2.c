// Konwersja temperatury C -> F
// wzór: F = C*9/5 + 32
// notatki: %.5f daje dokładnie 5 cyfr po przecinku

#include <stdio.h>

int main() {
    float c;
    printf("Podaj temperature w C: ");
    scanf("%f", &c);

    float f = c * 9.0/5.0 + 32.0;

    printf("Fahrenheit = %.5f
", f);
}
